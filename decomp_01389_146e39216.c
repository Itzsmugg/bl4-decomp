// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146e39216 FUN_146e39216 body=132 status=ok
// SIG undefined FUN_146e39216(void)

void FUN_146e39216(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e3929c FUN_146e3929c body=63 status=ok
// SIG undefined FUN_146e3929c(void)

void FUN_146e3929c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e392dc(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 146e392dc FUN_146e392dc body=97 status=ok
// SIG undefined FUN_146e392dc(void)

ulonglong FUN_146e392dc(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146e39346 FUN_146e39346 body=758 status=ok
// SIG undefined FUN_146e39346(void)

void FUN_146e39346(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  double local_98;
  int local_8c;
  int *local_88;
  double *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *param_1;
  lVar12 = **(longlong **)param_1[1];
  lVar16 = (longlong)param_2;
  lVar14 = (longlong)*(int *)(lVar12 + lVar16 * 0xc);
  lVar4 = *(longlong *)((undefined8 *)param_1[1])[1];
  lVar15 = (longlong)*(int *)(lVar12 + 4 + lVar16 * 0xc);
  lVar12 = (longlong)*(int *)(lVar12 + 8 + lVar16 * 0xc);
  auVar23 = *(undefined1 (*) [16])(lVar4 + lVar14 * 0x18);
  uVar1 = *(ulonglong *)(lVar4 + 0x10 + lVar14 * 0x18);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar25 = *(undefined1 (*) [16])(lVar4 + lVar15 * 0x18);
  uVar2 = *(ulonglong *)(lVar4 + 0x10 + lVar15 * 0x18);
  auVar26 = minpd(auVar23,auVar25);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar2;
  auVar28 = minpd(auVar27,auVar22);
  auVar22 = maxpd(auVar23,auVar25);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar2;
  auVar24 = maxpd(auVar24,auVar23);
  auVar23 = *(undefined1 (*) [16])(lVar4 + lVar12 * 0x18);
  uVar1 = *(ulonglong *)(lVar4 + 0x10 + lVar12 * 0x18);
  auVar27 = minpd(auVar26,auVar23);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  auVar28 = minpd(auVar28,auVar25);
  auVar23 = maxpd(auVar22,auVar23);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar25 = maxpd(auVar24,auVar26);
  dVar5 = auVar23._0_8_ - auVar27._0_8_;
  dVar6 = auVar23._8_8_ - auVar27._8_8_;
  dVar17 = auVar25._0_8_ - auVar28._0_8_;
  dVar21 = dVar6;
  if (dVar6 <= dVar17) {
    dVar21 = dVar17;
  }
  iVar11 = FUN_146e39022((-(ulonglong)(dVar17 < dVar5) & (ulonglong)dVar5 |
                         ~-(ulonglong)(dVar17 < dVar5) & (ulonglong)dVar21) &
                         -(ulonglong)(dVar6 < dVar5) |
                         ~-(ulonglong)(dVar6 < dVar5) & (ulonglong)dVar21);
  iVar13 = (int)param_1[2];
  if ((int)param_1[2] < iVar11) {
    iVar13 = iVar11;
  }
  if (iVar13 < 0) {
    local_98 = (double)(0x3ff0000000000000 - ((ulonglong)(uint)-iVar13 << 0x34));
  }
  else {
    lVar12 = 1L << ((byte)iVar13 & 0x3f);
    auVar18._8_4_ = (int)((ulonglong)lVar12 >> 0x20);
    auVar18._0_8_ = lVar12;
    auVar18._12_4_ = 0x45300000;
    local_98 = ((double)CONCAT44(0x43300000,(int)lVar12) - 4503599627370496.0) +
               (auVar18._8_8_ - 1.9342813113834067e+25);
  }
  uVar19 = SUB84(local_98,0);
  uVar20 = (undefined4)((ulonglong)local_98 >> 0x20);
  auVar7._8_4_ = uVar19;
  auVar7._0_8_ = local_98;
  auVar7._12_4_ = uVar20;
  auVar22 = divpd(auVar27,auVar7);
  auVar8._8_4_ = uVar19;
  auVar8._0_8_ = local_98;
  auVar8._12_4_ = uVar20;
  auVar26 = divpd(auVar28,auVar8);
  local_a4 = (int)(auVar22._0_8_ + -0.5 + auVar22._0_8_) >> 1;
  local_a0 = (int)(auVar22._8_8_ + -0.5 + auVar22._8_8_) >> 1;
  local_9c = (int)(auVar26._0_8_ + -0.5 + auVar26._0_8_) >> 1;
  auVar9._8_4_ = uVar19;
  auVar9._0_8_ = local_98;
  auVar9._12_4_ = uVar20;
  auVar22 = divpd(auVar23,auVar9);
  auVar10._8_4_ = uVar19;
  auVar10._0_8_ = local_98;
  auVar10._12_4_ = uVar20;
  auVar26 = divpd(auVar25,auVar10);
  local_b0 = (int)(auVar22._0_8_ + -0.5 + auVar22._0_8_) >> 1;
  local_ac = (int)(auVar22._8_8_ + -0.5 + auVar22._8_8_) >> 1;
  local_a8 = (int)(auVar26._0_8_ + -0.5 + auVar26._0_8_) >> 1;
  local_c8 = &local_b8;
  local_b8 = param_2;
  local_b4 = param_2;
  local_8c = iVar13;
  FUN_146e38e7c(lVar3,&local_a4,&local_b0,iVar13);
  lVar12 = *(longlong *)(lVar3 + 0x78);
  lVar16 = lVar16 * 0x40;
  *(undefined1 (*) [16])(lVar12 + lVar16) = auVar27;
  *(undefined1 (*) [16])(lVar12 + 0x10 + lVar16) = auVar28;
  *(undefined1 (*) [16])(lVar12 + 0x20 + lVar16) = auVar23;
  *(undefined1 (*) [16])(lVar12 + 0x30 + lVar16) = auVar25;
  if (iVar13 + 10U < 0x15) {
    *(undefined1 *)(param_1[4] + (ulonglong)(iVar13 + 10U)) = 1;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
    local_88 = &local_8c;
    local_80 = &local_98;
    FUN_146e3963e(lVar3 + 0x28,local_74,&local_88,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3963e FUN_146e3963e body=309 status=ok
// SIG undefined FUN_146e3963e(void)

undefined4 *
FUN_146e3963e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146e37104(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_146e371ea(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146e37308(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3977c FUN_146e3977c body=565 status=ok
// SIG undefined FUN_146e3977c(void)

void FUN_146e3977c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_f8 [32];
  int *local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  float local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  int *local_68;
  float *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  local_88 = *puVar2;
  local_80 = puVar2[1];
  local_78 = puVar2[2];
  local_70 = *(undefined4 *)(puVar2 + 3);
  local_6c = param_2;
  FUN_146e399b2(&local_88,&local_a8);
  auVar9._8_8_ = uStack_a0;
  auVar9._0_8_ = local_a8;
  auVar4._8_8_ = uStack_90;
  auVar4._0_8_ = local_98;
  iVar5 = FUN_146e38a96();
  iVar7 = (int)param_1[2];
  if ((int)param_1[2] < iVar5) {
    iVar7 = iVar5;
  }
  if (iVar7 < 0) {
    local_b0 = (float)(iVar7 * 0x800000 + 0x3f800000);
  }
  else {
    uVar6 = 1L << ((byte)iVar7 & 0x3f);
    if ((longlong)uVar6 < 0) {
      local_b0 = (float)uVar6;
    }
    else {
      local_b0 = (float)(longlong)uVar6;
    }
  }
  auVar8._4_4_ = local_b0;
  auVar8._0_4_ = local_b0;
  auVar8._8_4_ = local_b0;
  auVar8._12_4_ = local_b0;
  auVar9 = divps(auVar9,auVar8);
  local_bc = (int)(auVar9._0_4_ + -0.5 + auVar9._0_4_) >> 1;
  local_b8 = (int)(auVar9._4_4_ + -0.5 + auVar9._4_4_) >> 1;
  local_b4 = (int)(auVar9._8_4_ + -0.5 + auVar9._8_4_) >> 1;
  auVar9 = divps(auVar4,auVar8);
  local_c8 = (int)(auVar9._0_4_ + -0.5 + auVar9._0_4_) >> 1;
  local_c4 = (int)(auVar9._4_4_ + -0.5 + auVar9._4_4_) >> 1;
  local_c0 = (int)(auVar9._8_4_ + -0.5 + auVar9._8_4_) >> 1;
  local_d8 = &local_d0;
  local_d0 = param_2;
  local_cc = param_2;
  local_ac = iVar7;
  FUN_146e38e7c(lVar1,&local_bc,&local_c8,iVar7);
  lVar3 = *(longlong *)(lVar1 + 0x78);
  puVar2 = (undefined8 *)(lVar3 + 0x10 + (longlong)param_2 * 0x20);
  *puVar2 = local_98;
  puVar2[1] = uStack_90;
  puVar2 = (undefined8 *)(lVar3 + (longlong)param_2 * 0x20);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a0;
  if (iVar7 + 10U < 0x15) {
    *(undefined1 *)(param_1[4] + (ulonglong)(iVar7 + 10U)) = 1;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
    local_68 = &local_ac;
    local_60 = &local_b0;
    FUN_14172c3b4(lVar1 + 0x28,local_54,&local_68,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e399b2 FUN_146e399b2 body=313 status=ok
// SIG undefined FUN_146e399b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e399b2(undefined8 *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar7 = (longlong)*(int *)((longlong)param_1 + 0x1c);
  lVar3 = *(longlong *)*param_1;
  lVar8 = (longlong)*(int *)(lVar3 + lVar7 * 0xc);
  lVar4 = *(longlong *)param_1[1];
  lVar9 = (longlong)*(int *)(lVar3 + 4 + lVar7 * 0xc);
  lVar7 = (longlong)*(int *)(lVar3 + 8 + lVar7 * 0xc);
  lVar3 = param_1[2];
  if (*(int *)(lVar3 + 0x20) < 1) {
    fVar1 = *(float *)(lVar3 + 0x28);
  }
  else {
    fVar1 = *(float *)(lVar3 + 0x28);
    fVar2 = *(float *)(lVar3 + 0x2c);
    if (0.0001 < ABS(fVar2)) {
      lVar6 = (longlong)*(int *)(param_1 + 3);
      lVar3 = *(longlong *)(lVar3 + 0x18);
      auVar5._4_8_ = 0;
      auVar5._0_4_ = *(float *)(lVar3 + (lVar8 - lVar6) * 4) * fVar2 + fVar1;
      auVar11._4_8_ = 0;
      auVar11._0_4_ = fVar2 * *(float *)(lVar3 + (lVar7 - lVar6) * 4) + fVar1;
      auVar12._4_8_ = 0;
      auVar12._0_4_ = *(float *)(lVar3 + (lVar9 - lVar6) * 4) * fVar2 + fVar1;
      goto LAB_146e39a61;
    }
  }
  auVar11._4_8_ = 0;
  auVar11._0_4_ = fVar1;
  auVar12 = auVar11;
  auVar5 = auVar11;
LAB_146e39a61:
  auVar17._12_4_ = 0;
  auVar17._0_12_ = auVar5;
  auVar14._12_4_ = 0;
  auVar14._0_12_ = auVar12;
  auVar20._12_4_ = 0;
  auVar20._0_12_ = auVar11;
  auVar15 = pshufb(auVar17,_DAT_149f5d880);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *(ulonglong *)(lVar4 + lVar8 * 0xc);
  auVar18 = insertps(auVar22,*(undefined4 *)(lVar4 + 8 + lVar8 * 0xc),0x28);
  auVar16._0_4_ = auVar15._0_4_ + auVar18._0_4_;
  auVar16._4_4_ = auVar15._4_4_ + auVar18._4_4_;
  auVar16._8_4_ = auVar15._8_4_ + auVar18._8_4_;
  auVar16._12_4_ = auVar15._12_4_ + auVar18._12_4_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *(ulonglong *)(lVar4 + lVar9 * 0xc);
  auVar22 = insertps(auVar21,*(undefined4 *)(lVar4 + 8 + lVar9 * 0xc),0x28);
  auVar13 = pshufb(auVar14,_DAT_149f5d880);
  auVar10._4_4_ = auVar22._4_4_ + auVar13._4_4_;
  auVar10._0_4_ = auVar22._0_4_ + auVar13._0_4_;
  auVar10._8_4_ = auVar22._8_4_ + auVar13._8_4_;
  auVar10._12_4_ = auVar22._12_4_ + auVar13._12_4_;
  auVar17 = maxps(auVar16,auVar10);
  auVar19._0_4_ = auVar18._0_4_ - auVar15._0_4_;
  auVar19._4_4_ = auVar18._4_4_ - auVar15._4_4_;
  auVar19._8_4_ = auVar18._8_4_ - auVar15._8_4_;
  auVar19._12_4_ = auVar18._12_4_ - auVar15._12_4_;
  auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
  auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
  auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
  auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
  auVar13 = minps(auVar19,auVar23);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulonglong *)(lVar4 + lVar7 * 0xc);
  auVar14 = insertps(auVar15,*(undefined4 *)(lVar4 + 8 + lVar7 * 0xc),0x28);
  auVar10 = pshufb(auVar20,_DAT_149f5d880);
  auVar18._0_4_ = auVar14._0_4_ - auVar10._0_4_;
  auVar18._4_4_ = auVar14._4_4_ - auVar10._4_4_;
  auVar18._8_4_ = auVar14._8_4_ - auVar10._8_4_;
  auVar18._12_4_ = auVar14._12_4_ - auVar10._12_4_;
  auVar20 = minps(auVar13,auVar18);
  *param_2 = auVar20;
  auVar13._0_4_ = auVar10._0_4_ + auVar14._0_4_;
  auVar13._4_4_ = auVar10._4_4_ + auVar14._4_4_;
  auVar13._8_4_ = auVar10._8_4_ + auVar14._8_4_;
  auVar13._12_4_ = auVar10._12_4_ + auVar14._12_4_;
  auVar10 = maxps(auVar17,auVar13);
  param_2[1] = auVar10;
  return;
}



// FUNCTION 146e39aec FUN_146e39aec body=76 status=ok
// SIG undefined FUN_146e39aec(void)

void FUN_146e39aec(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  local_10 = *param_1;
  (*(code *)**(undefined8 **)(param_1 + 2))((*(undefined8 **)(param_1 + 2))[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e39b3a FUN_146e39b3a body=76 status=ok
// SIG undefined FUN_146e39b3a(void)

void FUN_146e39b3a(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  local_10 = *param_1;
  (*(code *)**(undefined8 **)(param_1 + 2))((*(undefined8 **)(param_1 + 2))[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e39b88 FUN_146e39b88 body=76 status=ok
// SIG undefined FUN_146e39b88(void)

void FUN_146e39b88(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  local_10 = *param_1;
  (*(code *)**(undefined8 **)(param_1 + 2))((*(undefined8 **)(param_1 + 2))[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e39bd6 FUN_146e39bd6 body=311 status=ok
// SIG undefined FUN_146e39bd6(void)

ulonglong FUN_146e39bd6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = 0;
  local_38 = 0x101;
  local_36 = 1;
  local_34 = 0;
  local_50 = &PTR_FUN_149f48e60;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  local_20 = param_2[2];
  local_40 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_c8 = param_2[2];
  local_128 = &local_d8;
  local_d8 = *(undefined4 *)param_2;
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_d0 = *(undefined4 *)(param_2 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
  local_118 = &local_e0;
  local_e0 = 0x7fefffffffffffff;
  local_110 = &local_e4;
  local_e4 = 0xffffffff;
  local_108 = &local_100;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0x3ff0000000000000;
  local_120 = param_3;
  FUN_146e39d0e(local_d8,&local_50,&local_b8,0);
  local_50 = &PTR_FUN_149f553e0;
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_48 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((int)local_e0);
}



// FUNCTION 146e39d0e FUN_146e39d0e body=1013 status=ok
// SIG undefined FUN_146e39d0e(void)

void FUN_146e39d0e(longlong param_1,longlong param_2,double *param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

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
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  double *local_1c8;
  double *local_1c0;
  undefined1 *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double *local_188;
  longlong local_180;
  double *local_178;
  undefined1 local_169;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_188 = &local_d8;
  dVar8 = param_9[2];
  dVar1 = *param_9;
  dVar11 = param_9[1];
  local_168 = *param_3;
  dStack_160 = param_3[1];
  local_158 = param_3[2];
  dStack_150 = param_3[3];
  dStack_140 = param_3[5] * dVar11;
  local_148 = param_3[4] * dVar1;
  dVar2 = param_3[3];
  dVar4 = *(double *)(param_2 + 0x20) * param_3[8];
  dVar5 = *(double *)(param_2 + 0x28) * param_3[9];
  dVar10 = *(double *)(param_2 + 0x30) * param_3[10];
  dVar9 = dVar5 * local_168 - dStack_160 * dVar4;
  dVar6 = dVar10 * dStack_160 - local_158 * dVar5;
  dVar7 = dVar4 * local_158 - local_168 * dVar10;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar9 = dVar9 + dVar9;
  dVar3 = *(double *)(param_2 + 0x10);
  local_178 = &local_168;
  local_138 = param_3[6] * dVar8;
  dVar4 = (dVar9 * dStack_160 - dVar7 * local_158) + dVar2 * dVar6 + dVar4 + local_148;
  dVar5 = (local_158 * dVar6 - local_168 * dVar9) + param_3[3] * dVar7 + dVar5 + dStack_140;
  dVar2 = dVar9 * dVar2 + dVar10 + (dVar7 * local_168 - dVar6 * dStack_160) + local_138;
  local_169 = 0.0 <= dVar1 * dVar11 * dVar8;
  dVar9 = ABS(param_4);
  dVar10 = (dVar9 + dVar3 + dVar2) * (1.0 / dVar8);
  local_e0 = ((dVar2 - dVar3) - dVar9) * (1.0 / dVar8);
  dVar8 = (dVar3 + dVar5 + dVar9) * (1.0 / dVar11);
  local_e8 = ((dVar5 - dVar3) - dVar9) * (1.0 / dVar11);
  dVar11 = (dVar3 + dVar4 + dVar9) * (1.0 / dVar1);
  local_f0 = ((dVar4 - dVar3) - dVar9) * (1.0 / dVar1);
  local_f8 = local_e0;
  if (dVar10 <= local_e0) {
    local_f8 = dVar10;
  }
  if (local_e0 <= dVar10) {
    local_e0 = dVar10;
  }
  local_100 = local_e8;
  if (dVar8 <= local_e8) {
    local_100 = dVar8;
  }
  if (local_e8 <= dVar8) {
    local_e8 = dVar8;
  }
  local_108 = local_f0;
  if (dVar11 <= local_f0) {
    local_108 = dVar11;
  }
  if (local_f0 <= dVar11) {
    local_f0 = dVar11;
  }
  local_1c8 = &local_108;
  uStack_130 = 0;
  local_128 = 0x3ff0000000000000;
  uStack_120 = 0x3ff0000000000000;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0;
  local_1b8 = &local_169;
  local_1b0 = &local_180;
  local_1c0 = param_9;
  local_1a8 = param_7;
  local_1a0 = param_5;
  local_198 = param_6;
  local_190 = param_8;
  local_1d0 = param_1;
  local_180 = param_2;
  local_d8 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e53344(&local_1d0,param_1 + 0x60);
  }
  else {
    FUN_146e53546(&local_1d0,param_1 + 0x70);
  }
  if ((local_d0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3a104 FUN_146e3a104 body=2029 status=ok
// SIG undefined FUN_146e3a104(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146e3a104(longlong param_1,undefined8 param_2,double *param_3,double *param_4,
                  double param_5,double param_6,double *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined4 *param_10)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
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
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar84;
  float fVar85;
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  undefined1 auStack_178 [40];
  longlong local_150;
  undefined8 local_148;
  double *local_140;
  double *local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  float local_d8 [4];
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_ec = *(undefined1 *)(param_1 + 0xd8);
  local_150 = param_1 + 0x20;
  local_130 = param_6;
  local_128 = 1.79769313486232e+308;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8[0] = (float)param_5;
  local_148 = param_2;
  local_140 = param_3;
  local_138 = param_4;
  if (param_6 <= 0.0) {
    if (*(int *)(param_1 + 0xe8) == 0) goto LAB_146e3a818;
    dVar8 = *param_3;
    dVar3 = param_3[1];
    dVar4 = param_3[2];
    dVar9 = *param_4;
    dVar5 = param_4[1];
    dVar6 = param_4[2];
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_14481578e(&local_c8,0x10);
    uVar22 = uStack_c0;
    lVar18 = (longlong)(int)uStack_c0;
    uVar12 = (int)uStack_c0 + 1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar12);
    if (uStack_c0._4_4_ < uVar12) {
      FUN_1446f48e2(&local_c8,uVar22 & 0xffffffff);
    }
    *(undefined4 *)(local_c8 + lVar18 * 4) = 0;
    if ((int)uStack_c0 != 0) {
      auVar83._0_8_ = CONCAT44((float)dVar5,(float)dVar9);
      fVar41 = (float)dVar4;
      fVar49 = (float)dVar8;
      fVar80 = (float)dVar3;
      auVar83._8_4_ = (float)dVar6;
      auVar83._12_4_ = 0;
      auVar27 = divps(_DAT_1499314a0,auVar83);
      uVar12 = -(uint)((float)(auVar83._0_8_ & 0x7fffffff7fffffff) < 1e-08);
      uVar23 = -(uint)((float)((auVar83._0_8_ & 0x7fffffff7fffffff) >> 0x20) < 1e-08);
      uVar24 = -(uint)(ABS((float)dVar6) < 1e-08);
      do {
        iVar7 = (int)uStack_c0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar7 + -1);
        lVar21 = (longlong)*(int *)(local_c8 + -4 + (longlong)iVar7 * 4) * 0x50 +
                 *(longlong *)(param_1 + 0xe0);
        lVar18 = 0;
        bVar10 = true;
        do {
          bVar17 = bVar10;
          uVar22 = uStack_c0;
          iVar7 = *(int *)(lVar21 + 0x40 + lVar18 * 4);
          uVar19 = (ulonglong)iVar7;
          if (uVar19 != 0xffffffffffffffff) {
            lVar16 = lVar18 * 0x20;
            auVar83 = *(undefined1 (*) [16])(lVar21 + lVar16);
            auVar51 = *(undefined1 (*) [16])(lVar21 + 0x10 + lVar16);
            auVar79._4_4_ = -(uint)(fVar80 < auVar83._4_4_);
            auVar79._0_4_ = -(uint)(fVar49 < auVar83._0_4_);
            auVar79._8_4_ = -(uint)(fVar41 < auVar83._8_4_);
            auVar79._12_4_ = -(uint)(0.0 < auVar83._12_4_);
            auVar71._4_4_ = -(uint)(auVar51._4_4_ < fVar80);
            auVar71._0_4_ = -(uint)(auVar51._0_4_ < fVar49);
            auVar71._8_4_ = -(uint)(auVar51._8_4_ < fVar41);
            auVar71._12_4_ = -(uint)(auVar51._12_4_ < 0.0);
            auVar71 = auVar71 | auVar79;
            auVar72._0_4_ = auVar71._0_4_ & uVar12;
            auVar72._4_4_ = auVar71._4_4_ & uVar23;
            auVar72._12_4_ = auVar71._12_4_;
            auVar72._8_4_ = auVar71._8_4_ & uVar24;
            iVar15 = movmskps((int)lVar16,auVar72);
            if (iVar15 == 0) {
              auVar46._4_4_ = local_d8[0];
              auVar46._0_4_ = local_d8[0];
              auVar46._8_4_ = local_d8[0];
              auVar46._12_4_ = local_d8[0];
              fVar81 = auVar27._0_4_;
              fVar86 = auVar27._4_4_;
              fVar87 = auVar27._8_4_;
              auVar57._0_4_ = (auVar51._0_4_ - fVar49) * fVar81;
              auVar57._4_4_ = (auVar51._4_4_ - fVar80) * fVar86;
              auVar57._8_4_ = (auVar51._8_4_ - fVar41) * fVar87;
              auVar57._12_4_ = (auVar51._12_4_ - 0.0) * auVar27._12_4_;
              auVar73._0_8_ =
                   CONCAT44(~uVar23 & (uint)((auVar83._4_4_ - fVar80) * fVar86),
                            ~uVar12 & (uint)((auVar83._0_4_ - fVar49) * fVar81));
              auVar73._8_4_ = ~uVar24 & (uint)((auVar83._8_4_ - fVar41) * fVar87);
              auVar73._12_4_ = 0;
              auVar51._4_4_ = uVar23;
              auVar51._0_4_ = uVar12;
              auVar51._8_4_ = uVar24;
              auVar51._12_4_ = 0xffffffff;
              auVar51 = blendvps(auVar57,auVar46,auVar51);
              auVar34._8_4_ = auVar73._8_4_;
              auVar34._0_8_ = auVar73._0_8_;
              auVar34._12_4_ = 0;
              auVar83 = minps(auVar34,auVar51);
              auVar51 = maxps(auVar73,auVar51);
              auVar35._12_4_ = auVar83._12_4_;
              auVar58._0_8_ = auVar83._4_8_;
              auVar58._8_4_ = auVar83._0_4_;
              auVar58._12_4_ = auVar35._12_4_;
              auVar79 = maxps(auVar83,auVar58);
              auVar35._4_4_ = auVar83._0_4_;
              auVar35._0_4_ = auVar83._8_4_;
              auVar35._8_4_ = auVar83._4_4_;
              auVar83 = maxps(auVar79,auVar35);
              auVar79 = maxps(auVar83,ZEXT816(0));
              auVar74._12_4_ = auVar51._12_4_;
              auVar36._0_8_ = auVar51._4_8_;
              auVar36._8_4_ = auVar51._0_4_;
              auVar36._12_4_ = auVar74._12_4_;
              auVar83 = minps(auVar51,auVar36);
              auVar74._4_4_ = auVar51._0_4_;
              auVar74._0_4_ = auVar51._8_4_;
              auVar74._8_4_ = auVar51._4_4_;
              auVar83 = minps(auVar83,auVar74);
              auVar83 = minps(auVar83,auVar46);
              auVar59._4_4_ = -(uint)(auVar83._4_4_ < auVar79._4_4_);
              auVar59._0_4_ = -(uint)(auVar83._0_4_ < auVar79._0_4_);
              auVar59._8_4_ = -(uint)(auVar83._8_4_ < auVar79._8_4_);
              auVar59._12_4_ = -(uint)(auVar83._12_4_ < auVar79._12_4_);
              iVar15 = movmskps(0,auVar59);
              if (iVar15 == 0) {
                iVar15 = *(int *)(lVar21 + 0x48 + lVar18 * 4);
                if (iVar15 == 0) {
                  lVar18 = (longlong)(int)uStack_c0;
                  uVar14 = (int)uStack_c0 + 1;
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                  if (uStack_c0._4_4_ < uVar14) {
                    FUN_1446f48e2(&local_c8,uVar22 & 0xffffffff);
                  }
                  *(int *)(local_c8 + lVar18 * 4) = iVar7;
                }
                else if (0 < iVar15) {
                  uVar22 = *(ulonglong *)(param_1 + 0xf0);
                  pauVar20 = (undefined1 (*) [16])(uVar22 + uVar19 * 0x20 + 0x10);
                  do {
                    auVar83 = pauVar20[-1];
                    auVar51 = *pauVar20;
                    auVar47._4_4_ = -(uint)(fVar80 < auVar83._4_4_);
                    auVar47._0_4_ = -(uint)(fVar49 < auVar83._0_4_);
                    auVar47._8_4_ = -(uint)(fVar41 < auVar83._8_4_);
                    auVar47._12_4_ = -(uint)(0.0 < auVar83._12_4_);
                    auVar75._4_4_ = -(uint)(auVar51._4_4_ < fVar80);
                    auVar75._0_4_ = -(uint)(auVar51._0_4_ < fVar49);
                    auVar75._8_4_ = -(uint)(auVar51._8_4_ < fVar41);
                    auVar75._12_4_ = -(uint)(auVar51._12_4_ < 0.0);
                    auVar75 = auVar75 | auVar47;
                    auVar76._0_4_ = auVar75._0_4_ & uVar12;
                    auVar76._4_4_ = auVar75._4_4_ & uVar23;
                    auVar76._12_4_ = auVar75._12_4_;
                    auVar76._8_4_ = auVar75._8_4_ & uVar24;
                    uVar14 = movmskps((int)uVar22,auVar76);
                    uVar22 = (ulonglong)uVar14;
                    if (uVar14 == 0) {
                      auVar48._4_4_ = local_d8[0];
                      auVar48._0_4_ = local_d8[0];
                      auVar48._8_4_ = local_d8[0];
                      auVar48._12_4_ = local_d8[0];
                      auVar60._0_4_ = (auVar51._0_4_ - fVar49) * fVar81;
                      auVar60._4_4_ = (auVar51._4_4_ - fVar80) * fVar86;
                      auVar60._8_4_ = (auVar51._8_4_ - fVar41) * fVar87;
                      auVar60._12_4_ = (auVar51._12_4_ - 0.0) * auVar27._12_4_;
                      auVar77._0_8_ =
                           CONCAT44(~uVar23 & (uint)((auVar83._4_4_ - fVar80) * fVar86),
                                    ~uVar12 & (uint)((auVar83._0_4_ - fVar49) * fVar81));
                      auVar77._8_4_ = ~uVar24 & (uint)((auVar83._8_4_ - fVar41) * fVar87);
                      auVar77._12_4_ = 0;
                      auVar37._4_4_ = uVar23;
                      auVar37._0_4_ = uVar12;
                      auVar37._8_4_ = uVar24;
                      auVar37._12_4_ = 0xffffffff;
                      auVar51 = blendvps(auVar60,auVar48,auVar37);
                      auVar38._8_4_ = auVar77._8_4_;
                      auVar38._0_8_ = auVar77._0_8_;
                      auVar38._12_4_ = 0;
                      auVar83 = minps(auVar38,auVar51);
                      auVar51 = maxps(auVar77,auVar51);
                      auVar39._12_4_ = auVar83._12_4_;
                      auVar61._0_8_ = auVar83._4_8_;
                      auVar61._8_4_ = auVar83._0_4_;
                      auVar61._12_4_ = auVar39._12_4_;
                      auVar79 = maxps(auVar83,auVar61);
                      auVar39._4_4_ = auVar83._0_4_;
                      auVar39._0_4_ = auVar83._8_4_;
                      auVar39._8_4_ = auVar83._4_4_;
                      auVar83 = maxps(auVar79,auVar39);
                      auVar79 = maxps(auVar83,ZEXT816(0));
                      auVar78._12_4_ = auVar51._12_4_;
                      auVar40._0_8_ = auVar51._4_8_;
                      auVar40._8_4_ = auVar51._0_4_;
                      auVar40._12_4_ = auVar78._12_4_;
                      auVar83 = minps(auVar51,auVar40);
                      auVar78._4_4_ = auVar51._0_4_;
                      auVar78._0_4_ = auVar51._8_4_;
                      auVar78._8_4_ = auVar51._4_4_;
                      auVar83 = minps(auVar83,auVar78);
                      auVar83 = minps(auVar83,auVar48);
                      auVar62._4_4_ = -(uint)(auVar83._4_4_ < auVar79._4_4_);
                      auVar62._0_4_ = -(uint)(auVar83._0_4_ < auVar79._0_4_);
                      auVar62._8_4_ = -(uint)(auVar83._8_4_ < auVar79._8_4_);
                      auVar62._12_4_ = -(uint)(auVar83._12_4_ < auVar79._12_4_);
                      uVar14 = movmskps(0,auVar62);
                      uVar22 = (ulonglong)uVar14;
                      if (uVar14 == 0) {
                        uVar22 = FUN_146e54566(&local_150,uVar19 & 0xffffffff,local_d8);
                      }
                    }
                    uVar19 = uVar19 + 1;
                    pauVar20 = pauVar20 + 2;
                  } while ((longlong)uVar19 < (longlong)(iVar15 + iVar7));
                }
              }
            }
          }
          lVar18 = 1;
          bVar10 = false;
        } while (bVar17);
      } while ((int)uStack_c0 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0xe8) == 0) goto LAB_146e3a818;
    dVar8 = *param_3;
    dVar3 = param_3[1];
    dVar4 = param_3[2];
    dVar9 = *param_4;
    dVar5 = param_4[1];
    dVar6 = param_4[2];
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_14481578e(&local_c8,0x10);
    uVar22 = uStack_c0;
    lVar18 = (longlong)(int)uStack_c0;
    uVar12 = (int)uStack_c0 + 1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar12);
    if (uStack_c0._4_4_ < uVar12) {
      FUN_1446f48e2(&local_c8,uVar22 & 0xffffffff);
    }
    *(undefined4 *)(local_c8 + lVar18 * 4) = 0;
    if ((int)uStack_c0 != 0) {
      param_6 = param_6 * 0.5;
      fVar49 = (float)dVar4;
      fVar80 = (float)dVar8;
      fVar81 = (float)dVar3;
      fVar41 = (float)param_6;
      fVar86 = (float)param_6;
      fVar87 = (float)param_6;
      auVar27._4_4_ = (float)dVar5;
      auVar27._0_4_ = (float)dVar9;
      auVar27._8_4_ = (float)dVar6;
      auVar27._12_4_ = 0;
      auVar83 = divps(_DAT_1499314a0,auVar27);
      uVar12 = -(uint)(ABS((float)dVar9) < 1e-08);
      uVar23 = -(uint)(ABS((float)dVar5) < 1e-08);
      uVar24 = -(uint)(ABS((float)dVar6) < 1e-08);
      do {
        iVar7 = (int)uStack_c0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar7 + -1);
        lVar21 = (longlong)*(int *)(local_c8 + -4 + (longlong)iVar7 * 4) * 0x50 +
                 *(longlong *)(param_1 + 0xe0);
        lVar18 = 0;
        bVar10 = true;
        do {
          bVar17 = bVar10;
          uVar22 = uStack_c0;
          iVar7 = *(int *)(lVar21 + 0x40 + lVar18 * 4);
          uVar19 = (ulonglong)iVar7;
          if (uVar19 != 0xffffffffffffffff) {
            lVar16 = lVar18 * 0x20;
            pfVar1 = (float *)(lVar21 + 0x10 + lVar16);
            pfVar2 = (float *)(lVar21 + lVar16);
            auVar42._4_4_ = -(uint)(fVar81 < pfVar2[1] - fVar87);
            auVar42._0_4_ = -(uint)(fVar80 < *pfVar2 - fVar86);
            auVar42._8_4_ = -(uint)(fVar49 < pfVar2[2] - fVar41);
            auVar42._12_4_ = -(uint)(0.0 < pfVar2[3] - 0.0);
            auVar63._4_4_ = -(uint)(pfVar1[1] + fVar87 < fVar81);
            auVar63._0_4_ = -(uint)(*pfVar1 + fVar86 < fVar80);
            auVar63._8_4_ = -(uint)(pfVar1[2] + fVar41 < fVar49);
            auVar63._12_4_ = -(uint)(pfVar1[3] + 0.0 < 0.0);
            auVar63 = auVar63 | auVar42;
            auVar64._0_4_ = auVar63._0_4_ & uVar12;
            auVar64._4_4_ = auVar63._4_4_ & uVar23;
            auVar64._12_4_ = auVar63._12_4_;
            auVar64._8_4_ = auVar63._8_4_ & uVar24;
            iVar15 = movmskps((int)lVar16,auVar64);
            if (iVar15 == 0) {
              auVar43._4_4_ = local_d8[0];
              auVar43._0_4_ = local_d8[0];
              auVar43._8_4_ = local_d8[0];
              auVar43._12_4_ = local_d8[0];
              fVar82 = auVar83._0_4_;
              fVar84 = auVar83._4_4_;
              fVar85 = auVar83._8_4_;
              auVar50._0_4_ = ((*pfVar1 + fVar86) - fVar80) * fVar82;
              auVar50._4_4_ = ((pfVar1[1] + fVar87) - fVar81) * fVar84;
              auVar50._8_4_ = ((pfVar1[2] + fVar41) - fVar49) * fVar85;
              auVar50._12_4_ = ((pfVar1[3] + 0.0) - 0.0) * auVar83._12_4_;
              auVar65._0_8_ =
                   CONCAT44(~uVar23 & (uint)(((pfVar2[1] - fVar87) - fVar81) * fVar84),
                            ~uVar12 & (uint)(((*pfVar2 - fVar86) - fVar80) * fVar82));
              auVar65._8_4_ = ~uVar24 & (uint)(((pfVar2[2] - fVar41) - fVar49) * fVar85);
              auVar65._12_4_ = 0;
              auVar25._4_4_ = uVar23;
              auVar25._0_4_ = uVar12;
              auVar25._8_4_ = uVar24;
              auVar25._12_4_ = 0xffffffff;
              auVar51 = blendvps(auVar50,auVar43,auVar25);
              auVar26._8_4_ = auVar65._8_4_;
              auVar26._0_8_ = auVar65._0_8_;
              auVar26._12_4_ = 0;
              auVar27 = minps(auVar26,auVar51);
              auVar51 = maxps(auVar65,auVar51);
              auVar28._12_4_ = auVar27._12_4_;
              auVar52._0_8_ = auVar27._4_8_;
              auVar52._8_4_ = auVar27._0_4_;
              auVar52._12_4_ = auVar28._12_4_;
              auVar79 = maxps(auVar27,auVar52);
              auVar28._4_4_ = auVar27._0_4_;
              auVar28._0_4_ = auVar27._8_4_;
              auVar28._8_4_ = auVar27._4_4_;
              auVar27 = maxps(auVar79,auVar28);
              auVar79 = maxps(auVar27,ZEXT816(0));
              auVar66._12_4_ = auVar51._12_4_;
              auVar29._0_8_ = auVar51._4_8_;
              auVar29._8_4_ = auVar51._0_4_;
              auVar29._12_4_ = auVar66._12_4_;
              auVar27 = minps(auVar51,auVar29);
              auVar66._4_4_ = auVar51._0_4_;
              auVar66._0_4_ = auVar51._8_4_;
              auVar66._8_4_ = auVar51._4_4_;
              auVar27 = minps(auVar27,auVar66);
              auVar27 = minps(auVar27,auVar43);
              auVar53._4_4_ = -(uint)(auVar27._4_4_ < auVar79._4_4_);
              auVar53._0_4_ = -(uint)(auVar27._0_4_ < auVar79._0_4_);
              auVar53._8_4_ = -(uint)(auVar27._8_4_ < auVar79._8_4_);
              auVar53._12_4_ = -(uint)(auVar27._12_4_ < auVar79._12_4_);
              iVar15 = movmskps(0,auVar53);
              if (iVar15 == 0) {
                iVar15 = *(int *)(lVar21 + 0x48 + lVar18 * 4);
                if (iVar15 == 0) {
                  lVar18 = (longlong)(int)uStack_c0;
                  uVar14 = (int)uStack_c0 + 1;
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                  if (uStack_c0._4_4_ < uVar14) {
                    FUN_1446f48e2(&local_c8,uVar22 & 0xffffffff);
                  }
                  *(int *)(local_c8 + lVar18 * 4) = iVar7;
                }
                else if (0 < iVar15) {
                  uVar22 = uVar19 << 5 | 0x10;
                  do {
                    lVar18 = *(longlong *)(param_1 + 0xf0);
                    pfVar1 = (float *)(lVar18 + uVar22);
                    pfVar2 = (float *)(lVar18 + -0x10 + uVar22);
                    auVar44._4_4_ = -(uint)(fVar81 < pfVar2[1] - fVar87);
                    auVar44._0_4_ = -(uint)(fVar80 < *pfVar2 - fVar86);
                    auVar44._8_4_ = -(uint)(fVar49 < pfVar2[2] - fVar41);
                    auVar44._12_4_ = -(uint)(0.0 < pfVar2[3] - 0.0);
                    auVar67._4_4_ = -(uint)(pfVar1[1] + fVar87 < fVar81);
                    auVar67._0_4_ = -(uint)(*pfVar1 + fVar86 < fVar80);
                    auVar67._8_4_ = -(uint)(pfVar1[2] + fVar41 < fVar49);
                    auVar67._12_4_ = -(uint)(pfVar1[3] + 0.0 < 0.0);
                    auVar67 = auVar67 | auVar44;
                    auVar68._0_4_ = auVar67._0_4_ & uVar12;
                    auVar68._4_4_ = auVar67._4_4_ & uVar23;
                    auVar68._12_4_ = auVar67._12_4_;
                    auVar68._8_4_ = auVar67._8_4_ & uVar24;
                    iVar13 = movmskps((int)lVar18,auVar68);
                    if (iVar13 == 0) {
                      auVar45._4_4_ = local_d8[0];
                      auVar45._0_4_ = local_d8[0];
                      auVar45._8_4_ = local_d8[0];
                      auVar45._12_4_ = local_d8[0];
                      auVar54._0_4_ = ((*pfVar1 + fVar86) - fVar80) * fVar82;
                      auVar54._4_4_ = ((pfVar1[1] + fVar87) - fVar81) * fVar84;
                      auVar54._8_4_ = ((pfVar1[2] + fVar41) - fVar49) * fVar85;
                      auVar54._12_4_ = ((pfVar1[3] + 0.0) - 0.0) * auVar83._12_4_;
                      auVar69._0_8_ =
                           CONCAT44(~uVar23 & (uint)(((pfVar2[1] - fVar87) - fVar81) * fVar84),
                                    ~uVar12 & (uint)(((*pfVar2 - fVar86) - fVar80) * fVar82));
                      auVar69._8_4_ = ~uVar24 & (uint)(((pfVar2[2] - fVar41) - fVar49) * fVar85);
                      auVar69._12_4_ = 0;
                      auVar30._4_4_ = uVar23;
                      auVar30._0_4_ = uVar12;
                      auVar30._8_4_ = uVar24;
                      auVar30._12_4_ = 0xffffffff;
                      auVar51 = blendvps(auVar54,auVar45,auVar30);
                      auVar31._8_4_ = auVar69._8_4_;
                      auVar31._0_8_ = auVar69._0_8_;
                      auVar31._12_4_ = 0;
                      auVar27 = minps(auVar31,auVar51);
                      auVar51 = maxps(auVar69,auVar51);
                      auVar32._12_4_ = auVar27._12_4_;
                      auVar55._0_8_ = auVar27._4_8_;
                      auVar55._8_4_ = auVar27._0_4_;
                      auVar55._12_4_ = auVar32._12_4_;
                      auVar79 = maxps(auVar27,auVar55);
                      auVar32._4_4_ = auVar27._0_4_;
                      auVar32._0_4_ = auVar27._8_4_;
                      auVar32._8_4_ = auVar27._4_4_;
                      auVar27 = maxps(auVar79,auVar32);
                      auVar79 = maxps(auVar27,ZEXT816(0));
                      auVar70._12_4_ = auVar51._12_4_;
                      auVar33._0_8_ = auVar51._4_8_;
                      auVar33._8_4_ = auVar51._0_4_;
                      auVar33._12_4_ = auVar70._12_4_;
                      auVar27 = minps(auVar51,auVar33);
                      auVar70._4_4_ = auVar51._0_4_;
                      auVar70._0_4_ = auVar51._8_4_;
                      auVar70._8_4_ = auVar51._4_4_;
                      auVar27 = minps(auVar27,auVar70);
                      auVar27 = minps(auVar27,auVar45);
                      auVar56._4_4_ = -(uint)(auVar27._4_4_ < auVar79._4_4_);
                      auVar56._0_4_ = -(uint)(auVar27._0_4_ < auVar79._0_4_);
                      auVar56._8_4_ = -(uint)(auVar27._8_4_ < auVar79._8_4_);
                      auVar56._12_4_ = -(uint)(auVar27._12_4_ < auVar79._12_4_);
                      iVar13 = movmskps(0,auVar56);
                      if ((iVar13 == 0) &&
                         (cVar11 = FUN_146e539f4(&local_150,uVar19 & 0xffffffff,local_d8),
                         cVar11 == '\0')) goto LAB_146e3a806;
                    }
                    uVar19 = uVar19 + 1;
                    uVar22 = uVar22 + 0x20;
                  } while ((longlong)uVar19 < (longlong)(iVar15 + iVar7));
                }
              }
            }
          }
          lVar18 = 1;
          bVar10 = false;
        } while (bVar17);
      } while ((int)uStack_c0 != 0);
    }
  }
LAB_146e3a806:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_146e3a818:
  dVar3 = local_128;
  if (local_128 <= param_5) {
    *param_7 = local_128;
    param_8[2] = local_110;
    *param_8 = local_120;
    param_8[1] = uStack_118;
    param_9[2] = local_f8;
    *param_9 = local_108;
    param_9[1] = uStack_100;
    *param_10 = local_f0;
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar3 <= param_5;
}



// FUNCTION 146e3a8f2 FUN_146e3a8f2 body=108 status=ok
// SIG undefined FUN_146e3a8f2(void)

void FUN_146e3a8f2(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_20;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = in_stack_00000038;
  uStack_30 = in_stack_00000040;
  local_48 = in_stack_00000028;
  uStack_40 = in_stack_00000030;
  FUN_146e39d0e();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3a960 FUN_146e3a960 body=108 status=ok
// SIG undefined FUN_146e3a960(void)

void FUN_146e3a960(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_20;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = in_stack_00000038;
  uStack_30 = in_stack_00000040;
  local_48 = in_stack_00000028;
  uStack_40 = in_stack_00000030;
  FUN_146e3a9ce();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3a9ce FUN_146e3a9ce body=765 status=ok
// SIG undefined FUN_146e3a9ce(void)

void FUN_146e3a9ce(longlong param_1,longlong *param_2,undefined8 *param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  double *local_1e8;
  double *local_1e0;
  undefined1 *local_1d8;
  longlong **local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar7 = *param_9;
  dVar8 = param_9[1];
  dVar3 = 1.0 / dVar8;
  puVar5 = param_3;
  puVar6 = local_f8;
  local_98 = param_4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c8 = dVar1 * local_c8;
  dStack_d0 = dVar8 * dStack_d0;
  dVar1 = 1.0 / dVar7;
  local_d8 = dVar7 * local_d8;
  uStack_c0 = 0;
  (**(code **)(*param_2 + 0x80))(param_2,&local_188);
  FUN_1400c6592(&local_188,&local_128,local_f8);
  param_4 = ABS(param_4);
  dVar9 = (local_100 + param_4) * dVar2;
  dVar8 = (local_108 + param_4) * dVar3;
  dVar7 = (local_110 + param_4) * dVar1;
  local_100 = (local_118 - param_4) * dVar2;
  local_108 = (local_120 - param_4) * dVar3;
  local_110 = (local_128 - param_4) * dVar1;
  local_118 = local_100;
  if (dVar9 <= local_100) {
    local_118 = dVar9;
  }
  local_120 = local_108;
  if (dVar8 <= local_108) {
    local_120 = dVar8;
  }
  local_128 = local_110;
  if (dVar7 <= local_110) {
    local_128 = dVar7;
  }
  if (local_100 <= dVar9) {
    local_100 = dVar9;
  }
  if (local_108 <= dVar8) {
    local_108 = dVar8;
  }
  if (local_110 <= dVar7) {
    local_110 = dVar7;
  }
  local_188 = *param_3;
  uStack_180 = param_3[1];
  local_178 = param_3[2];
  uStack_170 = param_3[3];
  local_158 = (double)param_3[6] * param_9[2];
  dStack_160 = (double)param_3[5] * param_9[1];
  local_168 = *param_9 * (double)param_3[4];
  uStack_150 = 0;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0x3ff0000000000000;
  local_189 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_1d8 = &local_189;
  local_138 = 0x3ff0000000000000;
  uStack_130 = 0;
  local_1d0 = &local_1a0;
  local_1e0 = param_9;
  local_1c8 = param_7;
  local_1c0 = param_5;
  local_1b8 = param_6;
  local_1b0 = param_8;
  local_1f0 = param_1;
  local_1e8 = &local_128;
  local_1a8 = &local_98;
  local_1a0 = param_2;
  local_198 = &local_188;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e54a9e(&local_1f0,param_1 + 0x60);
  }
  else {
    FUN_146e54ca0(&local_1f0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3accc FUN_146e3accc body=108 status=ok
// SIG undefined FUN_146e3accc(void)

void FUN_146e3accc(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_20;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = in_stack_00000038;
  uStack_30 = in_stack_00000040;
  local_48 = in_stack_00000028;
  uStack_40 = in_stack_00000030;
  FUN_146e3ad3a();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3ad3a FUN_146e3ad3a body=746 status=ok
// SIG undefined FUN_146e3ad3a(void)

void FUN_146e3ad3a(longlong param_1,undefined8 param_2,undefined8 *param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  double *local_1e8;
  double *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar7 = param_9[2];
  dVar2 = 1.0 / dVar7;
  dVar8 = *param_9;
  dVar9 = param_9[1];
  dVar3 = 1.0 / dVar9;
  dVar1 = 1.0 / dVar8;
  puVar5 = param_3;
  puVar6 = local_f8;
  local_98 = param_4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c8 = dVar7 * local_c8;
  dStack_d0 = dVar9 * dStack_d0;
  local_d8 = dVar8 * local_d8;
  uStack_c0 = 0;
  FUN_144b01956(param_2,&local_128);
  param_4 = ABS(param_4);
  dVar9 = (local_100 + param_4) * dVar2;
  dVar8 = (local_108 + param_4) * dVar3;
  dVar7 = (local_110 + param_4) * dVar1;
  local_100 = (local_118 - param_4) * dVar2;
  local_108 = (local_120 - param_4) * dVar3;
  local_110 = (local_128 - param_4) * dVar1;
  local_118 = local_100;
  if (dVar9 <= local_100) {
    local_118 = dVar9;
  }
  local_120 = local_108;
  if (dVar8 <= local_108) {
    local_120 = dVar8;
  }
  local_128 = local_110;
  if (dVar7 <= local_110) {
    local_128 = dVar7;
  }
  if (local_100 <= dVar9) {
    local_100 = dVar9;
  }
  if (local_108 <= dVar8) {
    local_108 = dVar8;
  }
  if (local_110 <= dVar7) {
    local_110 = dVar7;
  }
  local_188 = *param_3;
  uStack_180 = param_3[1];
  local_178 = param_3[2];
  uStack_170 = param_3[3];
  local_158 = (double)param_3[6] * param_9[2];
  dVar7 = (double)param_3[5] * param_9[1];
  local_198 = &local_188;
  local_168._8_4_ = SUB84(dVar7,0);
  local_168._0_8_ = (double)param_3[4] * *param_9;
  local_168._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  uStack_150 = 0;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0x3ff0000000000000;
  local_189 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_1d8 = &local_189;
  local_138 = 0x3ff0000000000000;
  uStack_130 = 0;
  local_1d0 = &local_1a0;
  local_1e0 = param_9;
  local_1c8 = param_7;
  local_1c0 = param_5;
  local_1b8 = param_6;
  local_1b0 = param_8;
  local_1f0 = param_1;
  local_1e8 = &local_128;
  local_1a8 = &local_98;
  local_1a0 = param_2;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e5503a(&local_1f0,param_1 + 0x60);
  }
  else {
    FUN_146e5523c(&local_1f0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b026 FUN_146e3b026 body=108 status=ok
// SIG undefined FUN_146e3b026(void)

void FUN_146e3b026(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_20;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = in_stack_00000038;
  uStack_30 = in_stack_00000040;
  local_48 = in_stack_00000028;
  uStack_40 = in_stack_00000030;
  FUN_146e3b094();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b094 FUN_146e3b094 body=765 status=ok
// SIG undefined FUN_146e3b094(void)

void FUN_146e3b094(longlong param_1,longlong *param_2,undefined8 *param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  double *local_1e8;
  double *local_1e0;
  undefined1 *local_1d8;
  longlong **local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar7 = *param_9;
  dVar8 = param_9[1];
  dVar3 = 1.0 / dVar8;
  puVar5 = param_3;
  puVar6 = local_f8;
  local_98 = param_4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c8 = dVar1 * local_c8;
  dStack_d0 = dVar8 * dStack_d0;
  dVar1 = 1.0 / dVar7;
  local_d8 = dVar7 * local_d8;
  uStack_c0 = 0;
  (**(code **)(*param_2 + 0x80))(param_2,&local_188);
  FUN_1400c6592(&local_188,&local_128,local_f8);
  param_4 = ABS(param_4);
  dVar9 = (local_100 + param_4) * dVar2;
  dVar8 = (local_108 + param_4) * dVar3;
  dVar7 = (local_110 + param_4) * dVar1;
  local_100 = (local_118 - param_4) * dVar2;
  local_108 = (local_120 - param_4) * dVar3;
  local_110 = (local_128 - param_4) * dVar1;
  local_118 = local_100;
  if (dVar9 <= local_100) {
    local_118 = dVar9;
  }
  local_120 = local_108;
  if (dVar8 <= local_108) {
    local_120 = dVar8;
  }
  local_128 = local_110;
  if (dVar7 <= local_110) {
    local_128 = dVar7;
  }
  if (local_100 <= dVar9) {
    local_100 = dVar9;
  }
  if (local_108 <= dVar8) {
    local_108 = dVar8;
  }
  if (local_110 <= dVar7) {
    local_110 = dVar7;
  }
  local_188 = *param_3;
  uStack_180 = param_3[1];
  local_178 = param_3[2];
  uStack_170 = param_3[3];
  local_158 = (double)param_3[6] * param_9[2];
  dStack_160 = (double)param_3[5] * param_9[1];
  local_168 = *param_9 * (double)param_3[4];
  uStack_150 = 0;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0x3ff0000000000000;
  local_189 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_1d8 = &local_189;
  local_138 = 0x3ff0000000000000;
  uStack_130 = 0;
  local_1d0 = &local_1a0;
  local_1e0 = param_9;
  local_1c8 = param_7;
  local_1c0 = param_5;
  local_1b8 = param_6;
  local_1b0 = param_8;
  local_1f0 = param_1;
  local_1e8 = &local_128;
  local_1a8 = &local_98;
  local_1a0 = param_2;
  local_198 = &local_188;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e555d6(&local_1f0,param_1 + 0x60);
  }
  else {
    FUN_146e557d8(&local_1f0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b392 FUN_146e3b392 body=110 status=ok
// SIG undefined FUN_146e3b392(void)

void FUN_146e3b392(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000048;
  uStack_24 = in_stack_00000048[1];
  uStack_20 = in_stack_00000048[2];
  uStack_1c = in_stack_00000048[3];
  local_38 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000048 + 4);
  local_48 = in_stack_00000038;
  uStack_40 = in_stack_00000040;
  local_58 = in_stack_00000028;
  uStack_50 = in_stack_00000030;
  FUN_146e3b402();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b402 FUN_146e3b402 body=801 status=ok
// SIG undefined FUN_146e3b402(void)

undefined4
FUN_146e3b402(longlong param_1,undefined8 param_2,undefined8 *param_3,double param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  double *local_278;
  double *local_270;
  undefined1 *local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  double *local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined1 local_219;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188 [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_128;
  longlong local_120 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_128 = param_4;
  FUN_14068738a(local_120,param_2,param_9);
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar8 = *param_9;
  dVar9 = param_9[1];
  dVar3 = 1.0 / dVar9;
  puVar6 = param_3;
  puVar7 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_158 = dVar1 * local_158;
  dStack_160 = dVar9 * dStack_160;
  dVar1 = 1.0 / dVar8;
  local_168 = dVar8 * local_168;
  uStack_150 = 0;
  (**(code **)(local_120[0] + 0x80))(local_120,&local_218);
  FUN_1400c6592(&local_218,&local_1b8,local_188);
  param_4 = ABS(param_4);
  dVar10 = (local_190 + param_4) * dVar2;
  dVar9 = (local_198 + param_4) * dVar3;
  dVar8 = (local_1a0 + param_4) * dVar1;
  local_190 = (local_1a8 - param_4) * dVar2;
  local_198 = (local_1b0 - param_4) * dVar3;
  local_1a0 = (local_1b8 - param_4) * dVar1;
  local_1a8 = local_190;
  if (dVar10 <= local_190) {
    local_1a8 = dVar10;
  }
  local_1b0 = local_198;
  if (dVar9 <= local_198) {
    local_1b0 = dVar9;
  }
  local_1b8 = local_1a0;
  if (dVar8 <= local_1a0) {
    local_1b8 = dVar8;
  }
  if (local_190 <= dVar10) {
    local_190 = dVar10;
  }
  if (local_198 <= dVar9) {
    local_198 = dVar9;
  }
  if (local_1a0 <= dVar8) {
    local_1a0 = dVar8;
  }
  local_218 = *param_3;
  uStack_210 = param_3[1];
  local_208 = param_3[2];
  uStack_200 = param_3[3];
  local_1e8 = (double)param_3[6] * param_9[2];
  dStack_1f0 = (double)param_3[5] * param_9[1];
  local_1f8 = *param_9 * (double)param_3[4];
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0x3ff0000000000000;
  local_219 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_268 = &local_219;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0;
  local_260 = &local_230;
  local_270 = param_9;
  local_258 = param_7;
  local_250 = param_5;
  local_248 = param_6;
  local_240 = param_8;
  local_280 = param_1;
  local_278 = &local_1b8;
  local_238 = &local_128;
  local_230 = local_120;
  local_228 = &local_218;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar4 = FUN_146e55b72(&local_280,param_1 + 0x60);
  }
  else {
    uVar4 = FUN_146e55d74(&local_280,param_1 + 0x70);
  }
  FUN_14068416c(local_120);
  if ((local_90 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b724 FUN_146e3b724 body=110 status=ok
// SIG undefined FUN_146e3b724(void)

void FUN_146e3b724(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000048;
  uStack_24 = in_stack_00000048[1];
  uStack_20 = in_stack_00000048[2];
  uStack_1c = in_stack_00000048[3];
  local_38 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000048 + 4);
  local_48 = in_stack_00000038;
  uStack_40 = in_stack_00000040;
  local_58 = in_stack_00000028;
  uStack_50 = in_stack_00000030;
  FUN_146e3b794();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3b794 FUN_146e3b794 body=801 status=ok
// SIG undefined FUN_146e3b794(void)

undefined4
FUN_146e3b794(longlong param_1,undefined8 param_2,undefined8 *param_3,double param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  double *local_278;
  double *local_270;
  undefined1 *local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  double *local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined1 local_219;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188 [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_128;
  longlong local_120 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_128 = param_4;
  FUN_1405cd2ed(local_120,param_2,param_9);
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar8 = *param_9;
  dVar9 = param_9[1];
  dVar3 = 1.0 / dVar9;
  puVar6 = param_3;
  puVar7 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_158 = dVar1 * local_158;
  dStack_160 = dVar9 * dStack_160;
  dVar1 = 1.0 / dVar8;
  local_168 = dVar8 * local_168;
  uStack_150 = 0;
  (**(code **)(local_120[0] + 0x80))(local_120,&local_218);
  FUN_1400c6592(&local_218,&local_1b8,local_188);
  param_4 = ABS(param_4);
  dVar10 = (local_190 + param_4) * dVar2;
  dVar9 = (local_198 + param_4) * dVar3;
  dVar8 = (local_1a0 + param_4) * dVar1;
  local_190 = (local_1a8 - param_4) * dVar2;
  local_198 = (local_1b0 - param_4) * dVar3;
  local_1a0 = (local_1b8 - param_4) * dVar1;
  local_1a8 = local_190;
  if (dVar10 <= local_190) {
    local_1a8 = dVar10;
  }
  local_1b0 = local_198;
  if (dVar9 <= local_198) {
    local_1b0 = dVar9;
  }
  local_1b8 = local_1a0;
  if (dVar8 <= local_1a0) {
    local_1b8 = dVar8;
  }
  if (local_190 <= dVar10) {
    local_190 = dVar10;
  }
  if (local_198 <= dVar9) {
    local_198 = dVar9;
  }
  if (local_1a0 <= dVar8) {
    local_1a0 = dVar8;
  }
  local_218 = *param_3;
  uStack_210 = param_3[1];
  local_208 = param_3[2];
  uStack_200 = param_3[3];
  local_1e8 = (double)param_3[6] * param_9[2];
  dStack_1f0 = (double)param_3[5] * param_9[1];
  local_1f8 = *param_9 * (double)param_3[4];
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0x3ff0000000000000;
  local_219 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_268 = &local_219;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0;
  local_260 = &local_230;
  local_270 = param_9;
  local_258 = param_7;
  local_250 = param_5;
  local_248 = param_6;
  local_240 = param_8;
  local_280 = param_1;
  local_278 = &local_1b8;
  local_238 = &local_128;
  local_230 = local_120;
  local_228 = &local_218;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar4 = FUN_146e5610e(&local_280,param_1 + 0x60);
  }
  else {
    uVar4 = FUN_146e56310(&local_280,param_1 + 0x70);
  }
  FUN_1405cc3c4(local_120);
  if ((local_90 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3bab6 FUN_146e3bab6 body=110 status=ok
// SIG undefined FUN_146e3bab6(void)

void FUN_146e3bab6(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000048;
  uStack_24 = in_stack_00000048[1];
  uStack_20 = in_stack_00000048[2];
  uStack_1c = in_stack_00000048[3];
  local_38 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000048 + 4);
  local_48 = in_stack_00000038;
  uStack_40 = in_stack_00000040;
  local_58 = in_stack_00000028;
  uStack_50 = in_stack_00000030;
  FUN_146e3bb26();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3bb26 FUN_146e3bb26 body=801 status=ok
// SIG undefined FUN_146e3bb26(void)

undefined4
FUN_146e3bb26(longlong param_1,undefined8 param_2,undefined8 *param_3,double param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  double *local_278;
  double *local_270;
  undefined1 *local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  double *local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined1 local_219;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188 [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_128;
  longlong local_120 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_128 = param_4;
  FUN_1402e9bae(local_120,param_2,param_9);
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar8 = *param_9;
  dVar9 = param_9[1];
  dVar3 = 1.0 / dVar9;
  puVar6 = param_3;
  puVar7 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_158 = dVar1 * local_158;
  dStack_160 = dVar9 * dStack_160;
  dVar1 = 1.0 / dVar8;
  local_168 = dVar8 * local_168;
  uStack_150 = 0;
  (**(code **)(local_120[0] + 0x80))(local_120,&local_218);
  FUN_1400c6592(&local_218,&local_1b8,local_188);
  param_4 = ABS(param_4);
  dVar10 = (local_190 + param_4) * dVar2;
  dVar9 = (local_198 + param_4) * dVar3;
  dVar8 = (local_1a0 + param_4) * dVar1;
  local_190 = (local_1a8 - param_4) * dVar2;
  local_198 = (local_1b0 - param_4) * dVar3;
  local_1a0 = (local_1b8 - param_4) * dVar1;
  local_1a8 = local_190;
  if (dVar10 <= local_190) {
    local_1a8 = dVar10;
  }
  local_1b0 = local_198;
  if (dVar9 <= local_198) {
    local_1b0 = dVar9;
  }
  local_1b8 = local_1a0;
  if (dVar8 <= local_1a0) {
    local_1b8 = dVar8;
  }
  if (local_190 <= dVar10) {
    local_190 = dVar10;
  }
  if (local_198 <= dVar9) {
    local_198 = dVar9;
  }
  if (local_1a0 <= dVar8) {
    local_1a0 = dVar8;
  }
  local_218 = *param_3;
  uStack_210 = param_3[1];
  local_208 = param_3[2];
  uStack_200 = param_3[3];
  local_1e8 = (double)param_3[6] * param_9[2];
  dStack_1f0 = (double)param_3[5] * param_9[1];
  local_1f8 = *param_9 * (double)param_3[4];
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0x3ff0000000000000;
  local_219 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_268 = &local_219;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0;
  local_260 = &local_230;
  local_270 = param_9;
  local_258 = param_7;
  local_250 = param_5;
  local_248 = param_6;
  local_240 = param_8;
  local_280 = param_1;
  local_278 = &local_1b8;
  local_238 = &local_128;
  local_230 = local_120;
  local_228 = &local_218;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar4 = FUN_146e566aa(&local_280,param_1 + 0x60);
  }
  else {
    uVar4 = FUN_146e568ac(&local_280,param_1 + 0x70);
  }
  FUN_1402e5682(local_120);
  if ((local_90 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3be48 FUN_146e3be48 body=110 status=ok
// SIG undefined FUN_146e3be48(void)

void FUN_146e3be48(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000048;
  uStack_24 = in_stack_00000048[1];
  uStack_20 = in_stack_00000048[2];
  uStack_1c = in_stack_00000048[3];
  local_38 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000048 + 4);
  local_48 = in_stack_00000038;
  uStack_40 = in_stack_00000040;
  local_58 = in_stack_00000028;
  uStack_50 = in_stack_00000030;
  FUN_146e3beb8();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3beb8 FUN_146e3beb8 body=801 status=ok
// SIG undefined FUN_146e3beb8(void)

undefined4
FUN_146e3beb8(longlong param_1,undefined8 param_2,undefined8 *param_3,double param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  double *local_278;
  double *local_270;
  undefined1 *local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  double *local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined1 local_219;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188 [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_128;
  longlong local_120 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_128 = param_4;
  FUN_1405444ef(local_120,param_2,param_9);
  dVar1 = param_9[2];
  dVar2 = 1.0 / dVar1;
  dVar8 = *param_9;
  dVar9 = param_9[1];
  dVar3 = 1.0 / dVar9;
  puVar6 = param_3;
  puVar7 = local_188;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_158 = dVar1 * local_158;
  dStack_160 = dVar9 * dStack_160;
  dVar1 = 1.0 / dVar8;
  local_168 = dVar8 * local_168;
  uStack_150 = 0;
  (**(code **)(local_120[0] + 0x80))(local_120,&local_218);
  FUN_1400c6592(&local_218,&local_1b8,local_188);
  param_4 = ABS(param_4);
  dVar10 = (local_190 + param_4) * dVar2;
  dVar9 = (local_198 + param_4) * dVar3;
  dVar8 = (local_1a0 + param_4) * dVar1;
  local_190 = (local_1a8 - param_4) * dVar2;
  local_198 = (local_1b0 - param_4) * dVar3;
  local_1a0 = (local_1b8 - param_4) * dVar1;
  local_1a8 = local_190;
  if (dVar10 <= local_190) {
    local_1a8 = dVar10;
  }
  local_1b0 = local_198;
  if (dVar9 <= local_198) {
    local_1b0 = dVar9;
  }
  local_1b8 = local_1a0;
  if (dVar8 <= local_1a0) {
    local_1b8 = dVar8;
  }
  if (local_190 <= dVar10) {
    local_190 = dVar10;
  }
  if (local_198 <= dVar9) {
    local_198 = dVar9;
  }
  if (local_1a0 <= dVar8) {
    local_1a0 = dVar8;
  }
  local_218 = *param_3;
  uStack_210 = param_3[1];
  local_208 = param_3[2];
  uStack_200 = param_3[3];
  local_1e8 = (double)param_3[6] * param_9[2];
  dStack_1f0 = (double)param_3[5] * param_9[1];
  local_1f8 = *param_9 * (double)param_3[4];
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0x3ff0000000000000;
  local_219 = 0.0 <= param_9[1] * *param_9 * param_9[2];
  local_268 = &local_219;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0;
  local_260 = &local_230;
  local_270 = param_9;
  local_258 = param_7;
  local_250 = param_5;
  local_248 = param_6;
  local_240 = param_8;
  local_280 = param_1;
  local_278 = &local_1b8;
  local_238 = &local_128;
  local_230 = local_120;
  local_228 = &local_218;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar4 = FUN_146e56c46(&local_280,param_1 + 0x60);
  }
  else {
    uVar4 = FUN_146e56e48(&local_280,param_1 + 0x70);
  }
  FUN_140062896(local_120);
  if ((local_90 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3c1da FUN_146e3c1da body=36 status=ok
// SIG undefined FUN_146e3c1da(void)

void FUN_146e3c1da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3c1fe(param_1,param_1 + 0x60,param_2,param_3);
    return;
  }
  FUN_146e3c622(param_1,param_1 + 0x70,param_2,param_3);
  return;
}



// FUNCTION 146e3c1fe FUN_146e3c1fe body=1059 status=ok
// SIG undefined FUN_146e3c1fe(void)

ulonglong FUN_146e3c1fe(longlong param_1,longlong *param_2,double *param_3,double param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double *local_180;
  undefined4 local_170;
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
  longlong local_108;
  int local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f8 = *param_3 - param_4;
  dStack_f0 = param_3[1] - param_4;
  local_e8 = param_3[2] - param_4;
  local_e0 = *param_3 + param_4;
  dStack_d8 = param_3[1] + param_4;
  local_d0 = param_3[2] + param_4;
  FUN_140d8788e(param_1 + 0xe0,&local_108);
  lVar5 = local_108;
  if ((longlong)local_100 == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = 0;
    do {
      lVar6 = (longlong)*(int *)(lVar5 + lVar10);
      lVar7 = *param_2;
      lVar8 = (longlong)*(int *)(lVar7 + lVar6 * 0xc);
      lVar1 = *(longlong *)(param_1 + 0x48);
      local_110 = (double)*(float *)(lVar1 + 8 + lVar8 * 0xc);
      local_118 = (double)*(float *)(lVar1 + 4 + lVar8 * 0xc);
      local_120 = (double)*(float *)(lVar1 + lVar8 * 0xc);
      lVar8 = (longlong)*(int *)(lVar7 + 4 + lVar6 * 0xc);
      local_128 = (double)*(float *)(lVar1 + 8 + lVar8 * 0xc);
      local_130 = (double)*(float *)(lVar1 + 4 + lVar8 * 0xc);
      local_138 = (double)*(float *)(lVar1 + lVar8 * 0xc);
      lVar7 = (longlong)*(int *)(lVar7 + 8 + lVar6 * 0xc);
      local_140 = (double)*(float *)(lVar1 + 8 + lVar7 * 0xc);
      local_148 = (double)*(float *)(lVar1 + 4 + lVar7 * 0xc);
      local_150 = (double)*(float *)(lVar1 + lVar7 * 0xc);
      dVar11 = (local_138 - local_120) * (local_148 - local_118) -
               (local_150 - local_120) * (local_130 - local_118);
      dVar12 = (local_128 - local_110) * (local_150 - local_120) -
               (local_140 - local_110) * (local_138 - local_120);
      dVar2 = (local_130 - local_118) * (local_140 - local_110) -
              (local_148 - local_118) * (local_128 - local_110);
      dVar3 = dVar11 * dVar11 + dVar2 * dVar2 + dVar12 * dVar12;
      if ((9.99999993922529e-09 <= dVar3) && (dVar3 = SQRT(dVar3), 9.99999993922529e-09 < dVar3)) {
        local_170 = 0;
        dVar4 = (param_3[2] - local_110) * (dVar11 / dVar3) +
                (*param_3 - local_120) * (dVar2 / dVar3) +
                (param_3[1] - local_118) * (dVar12 / dVar3);
        local_b8 = param_3[2] - dVar4 * (dVar11 / dVar3);
        local_c0 = param_3[1] - (dVar12 / dVar3) * dVar4;
        local_c8 = *param_3 - (dVar2 / dVar3) * dVar4;
        local_188 = &local_150;
        local_180 = param_3;
        FUN_1449056f5(&local_168,&local_c8,&local_120,&local_138);
        if ((local_158 - param_3[2]) * (local_158 - param_3[2]) +
            (local_168 - *param_3) * (local_168 - *param_3) +
            (local_160 - param_3[1]) * (local_160 - param_3[1]) <= param_4 * param_4) {
          uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          goto LAB_146e3c5a5;
        }
      }
      lVar10 = lVar10 + 4;
    } while ((longlong)local_100 * 4 != lVar10);
    uVar9 = 0;
  }
LAB_146e3c5a5:
  if (local_108 != 0) {
    FUN_1400020a8(local_108);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 146e3c622 FUN_146e3c622 body=1059 status=ok
// SIG undefined FUN_146e3c622(void)

ulonglong FUN_146e3c622(longlong param_1,longlong *param_2,double *param_3,double param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double *local_180;
  undefined4 local_170;
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
  longlong local_108;
  int local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f8 = *param_3 - param_4;
  dStack_f0 = param_3[1] - param_4;
  local_e8 = param_3[2] - param_4;
  local_e0 = *param_3 + param_4;
  dStack_d8 = param_3[1] + param_4;
  local_d0 = param_3[2] + param_4;
  FUN_140d8788e(param_1 + 0xe0,&local_108);
  lVar6 = local_108;
  if ((longlong)local_100 == 0) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar6 + lVar9);
      lVar1 = *param_2;
      uVar8 = (ulonglong)*(ushort *)(lVar1 + lVar7 * 6);
      lVar2 = *(longlong *)(param_1 + 0x48);
      local_110 = (double)*(float *)(lVar2 + 8 + uVar8 * 0xc);
      local_118 = (double)*(float *)(lVar2 + 4 + uVar8 * 0xc);
      local_120 = (double)*(float *)(lVar2 + uVar8 * 0xc);
      uVar8 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar7 * 6);
      local_128 = (double)*(float *)(lVar2 + 8 + uVar8 * 0xc);
      local_130 = (double)*(float *)(lVar2 + 4 + uVar8 * 0xc);
      local_138 = (double)*(float *)(lVar2 + uVar8 * 0xc);
      uVar8 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar7 * 6);
      local_140 = (double)*(float *)(lVar2 + 8 + uVar8 * 0xc);
      local_148 = (double)*(float *)(lVar2 + 4 + uVar8 * 0xc);
      local_150 = (double)*(float *)(lVar2 + uVar8 * 0xc);
      dVar10 = (local_138 - local_120) * (local_148 - local_118) -
               (local_150 - local_120) * (local_130 - local_118);
      dVar11 = (local_128 - local_110) * (local_150 - local_120) -
               (local_140 - local_110) * (local_138 - local_120);
      dVar3 = (local_130 - local_118) * (local_140 - local_110) -
              (local_148 - local_118) * (local_128 - local_110);
      dVar4 = dVar10 * dVar10 + dVar3 * dVar3 + dVar11 * dVar11;
      if ((9.99999993922529e-09 <= dVar4) && (dVar4 = SQRT(dVar4), 9.99999993922529e-09 < dVar4)) {
        local_170 = 0;
        dVar5 = (param_3[2] - local_110) * (dVar10 / dVar4) +
                (*param_3 - local_120) * (dVar3 / dVar4) +
                (param_3[1] - local_118) * (dVar11 / dVar4);
        local_b8 = param_3[2] - dVar5 * (dVar10 / dVar4);
        local_c0 = param_3[1] - (dVar11 / dVar4) * dVar5;
        local_c8 = *param_3 - (dVar3 / dVar4) * dVar5;
        local_188 = &local_150;
        local_180 = param_3;
        FUN_1449056f5(&local_168,&local_c8,&local_120,&local_138);
        if ((local_158 - param_3[2]) * (local_158 - param_3[2]) +
            (local_168 - *param_3) * (local_168 - *param_3) +
            (local_160 - param_3[1]) * (local_160 - param_3[1]) <= param_4 * param_4) {
          uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          goto LAB_146e3c9c9;
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)local_100 * 4 != lVar9);
    uVar8 = 0;
  }
LAB_146e3c9c9:
  if (local_108 != 0) {
    FUN_1400020a8(local_108);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146e3ca46 FUN_146e3ca46 body=180 status=ok
// SIG undefined FUN_146e3ca46(void)

void FUN_146e3ca46(void)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *in_stack_00000068;
  uStack_20 = in_stack_00000068[1];
  local_38 = &local_28;
  local_18 = in_stack_00000068[2];
  local_40 = in_stack_00000060;
  local_48 = in_stack_00000058;
  local_50 = in_stack_00000050;
  local_60 = in_stack_00000040;
  uStack_58 = in_stack_00000048;
  local_70 = in_stack_00000030;
  uStack_68 = in_stack_00000038;
  local_78 = in_stack_00000028;
  FUN_146e3cafc();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3cafc FUN_146e3cafc body=678 status=ok
// SIG undefined FUN_146e3cafc(void)

undefined1
FUN_146e3cafc(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             double *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  ulonglong *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  double local_98;
  double local_90;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_81 = param_12;
  local_90 = param_4[2] * param_13[2];
  local_98 = param_4[1] * param_13[1];
  dVar1 = *param_4 * *param_13;
  local_a8 = SQRT(local_90 * local_90 + dVar1 * dVar1 + local_98 * local_98);
  dVar2 = 1.0 / local_a8;
  local_a0 = ~-(ulonglong)(2.2250738585072014e-308 < local_a8) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_a8);
  if (2.2250738585072014e-308 < local_a8) {
    local_90 = local_90 * dVar2;
    local_98 = local_98 * dVar2;
  }
  else {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  local_180 = &local_a0;
  local_178 = &local_a8;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_d8 = param_13[2] * (double)param_3[6];
  dVar2 = param_13[1] * (double)param_3[5];
  local_f8 = param_3[2];
  uStack_f0 = param_3[3];
  local_170 = &local_108;
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ = *param_13 * (double)param_3[4];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_118 = &local_109;
  local_109 = 0;
  local_190 = param_13;
  local_168 = &local_81;
  local_158 = (undefined1 *)&param_11;
  local_148 = (undefined1 *)&param_5;
  local_140 = param_6;
  uStack_138 = param_7;
  local_130 = param_8;
  uStack_128 = param_9;
  local_120 = param_10;
  local_198 = param_1;
  local_188 = param_2;
  local_160 = param_3;
  local_150 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6242a(&local_198,param_1 + 0x60);
  }
  else {
    FUN_146e62bb4(&local_198,param_1 + 0x70);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3cda4 FUN_146e3cda4 body=180 status=ok
// SIG undefined FUN_146e3cda4(void)

void FUN_146e3cda4(void)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *in_stack_00000068;
  uStack_20 = in_stack_00000068[1];
  local_38 = &local_28;
  local_18 = in_stack_00000068[2];
  local_40 = in_stack_00000060;
  local_48 = in_stack_00000058;
  local_50 = in_stack_00000050;
  local_60 = in_stack_00000040;
  uStack_58 = in_stack_00000048;
  local_70 = in_stack_00000030;
  uStack_68 = in_stack_00000038;
  local_78 = in_stack_00000028;
  FUN_146e3ce5a();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3ce5a FUN_146e3ce5a body=678 status=ok
// SIG undefined FUN_146e3ce5a(void)

undefined1
FUN_146e3ce5a(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             double *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  ulonglong *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  double local_98;
  double local_90;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_81 = param_12;
  local_90 = param_4[2] * param_13[2];
  local_98 = param_4[1] * param_13[1];
  dVar1 = *param_4 * *param_13;
  local_a8 = SQRT(local_90 * local_90 + dVar1 * dVar1 + local_98 * local_98);
  dVar2 = 1.0 / local_a8;
  local_a0 = ~-(ulonglong)(2.2250738585072014e-308 < local_a8) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_a8);
  if (2.2250738585072014e-308 < local_a8) {
    local_90 = local_90 * dVar2;
    local_98 = local_98 * dVar2;
  }
  else {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  local_180 = &local_a0;
  local_178 = &local_a8;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_d8 = param_13[2] * (double)param_3[6];
  dVar2 = param_13[1] * (double)param_3[5];
  local_f8 = param_3[2];
  uStack_f0 = param_3[3];
  local_170 = &local_108;
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ = *param_13 * (double)param_3[4];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_118 = &local_109;
  local_109 = 0;
  local_190 = param_13;
  local_168 = &local_81;
  local_158 = (undefined1 *)&param_11;
  local_148 = (undefined1 *)&param_5;
  local_140 = param_6;
  uStack_138 = param_7;
  local_130 = param_8;
  uStack_128 = param_9;
  local_120 = param_10;
  local_198 = param_1;
  local_188 = param_2;
  local_160 = param_3;
  local_150 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e642bc(&local_198,param_1 + 0x60);
  }
  else {
    FUN_146e64a46(&local_198,param_1 + 0x70);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d102 FUN_146e3d102 body=180 status=ok
// SIG undefined FUN_146e3d102(void)

void FUN_146e3d102(void)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *in_stack_00000068;
  uStack_20 = in_stack_00000068[1];
  local_38 = &local_28;
  local_18 = in_stack_00000068[2];
  local_40 = in_stack_00000060;
  local_48 = in_stack_00000058;
  local_50 = in_stack_00000050;
  local_60 = in_stack_00000040;
  uStack_58 = in_stack_00000048;
  local_70 = in_stack_00000030;
  uStack_68 = in_stack_00000038;
  local_78 = in_stack_00000028;
  FUN_146e3d1b8();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d1b8 FUN_146e3d1b8 body=678 status=ok
// SIG undefined FUN_146e3d1b8(void)

undefined1
FUN_146e3d1b8(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             double *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  ulonglong *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  double local_98;
  double local_90;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_81 = param_12;
  local_90 = param_4[2] * param_13[2];
  local_98 = param_4[1] * param_13[1];
  dVar1 = *param_4 * *param_13;
  local_a8 = SQRT(local_90 * local_90 + dVar1 * dVar1 + local_98 * local_98);
  dVar2 = 1.0 / local_a8;
  local_a0 = ~-(ulonglong)(2.2250738585072014e-308 < local_a8) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_a8);
  if (2.2250738585072014e-308 < local_a8) {
    local_90 = local_90 * dVar2;
    local_98 = local_98 * dVar2;
  }
  else {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  local_180 = &local_a0;
  local_178 = &local_a8;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_d8 = param_13[2] * (double)param_3[6];
  dVar2 = param_13[1] * (double)param_3[5];
  local_f8 = param_3[2];
  uStack_f0 = param_3[3];
  local_170 = &local_108;
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ = *param_13 * (double)param_3[4];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_118 = &local_109;
  local_109 = 0;
  local_190 = param_13;
  local_168 = &local_81;
  local_158 = (undefined1 *)&param_11;
  local_148 = (undefined1 *)&param_5;
  local_140 = param_6;
  uStack_138 = param_7;
  local_130 = param_8;
  uStack_128 = param_9;
  local_120 = param_10;
  local_198 = param_1;
  local_188 = param_2;
  local_160 = param_3;
  local_150 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e66172(&local_198,param_1 + 0x60);
  }
  else {
    FUN_146e668fc(&local_198,param_1 + 0x70);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d460 FUN_146e3d460 body=180 status=ok
// SIG undefined FUN_146e3d460(void)

void FUN_146e3d460(void)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *in_stack_00000068;
  uStack_20 = in_stack_00000068[1];
  local_38 = &local_28;
  local_18 = in_stack_00000068[2];
  local_40 = in_stack_00000060;
  local_48 = in_stack_00000058;
  local_50 = in_stack_00000050;
  local_60 = in_stack_00000040;
  uStack_58 = in_stack_00000048;
  local_70 = in_stack_00000030;
  uStack_68 = in_stack_00000038;
  local_78 = in_stack_00000028;
  FUN_146e3d516();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d516 FUN_146e3d516 body=678 status=ok
// SIG undefined FUN_146e3d516(void)

undefined1
FUN_146e3d516(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             double *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  ulonglong *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  double local_98;
  double local_90;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_81 = param_12;
  local_90 = param_4[2] * param_13[2];
  local_98 = param_4[1] * param_13[1];
  dVar1 = *param_4 * *param_13;
  local_a8 = SQRT(local_90 * local_90 + dVar1 * dVar1 + local_98 * local_98);
  dVar2 = 1.0 / local_a8;
  local_a0 = ~-(ulonglong)(2.2250738585072014e-308 < local_a8) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_a8);
  if (2.2250738585072014e-308 < local_a8) {
    local_90 = local_90 * dVar2;
    local_98 = local_98 * dVar2;
  }
  else {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  local_180 = &local_a0;
  local_178 = &local_a8;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_d8 = param_13[2] * (double)param_3[6];
  dVar2 = param_13[1] * (double)param_3[5];
  local_f8 = param_3[2];
  uStack_f0 = param_3[3];
  local_170 = &local_108;
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ = *param_13 * (double)param_3[4];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_118 = &local_109;
  local_109 = 0;
  local_190 = param_13;
  local_168 = &local_81;
  local_158 = (undefined1 *)&param_11;
  local_148 = (undefined1 *)&param_5;
  local_140 = param_6;
  uStack_138 = param_7;
  local_130 = param_8;
  uStack_128 = param_9;
  local_120 = param_10;
  local_198 = param_1;
  local_188 = param_2;
  local_160 = param_3;
  local_150 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e67fb4(&local_198,param_1 + 0x60);
  }
  else {
    FUN_146e6873e(&local_198,param_1 + 0x70);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d7be FUN_146e3d7be body=180 status=ok
// SIG undefined FUN_146e3d7be(void)

void FUN_146e3d7be(void)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *in_stack_00000068;
  uStack_20 = in_stack_00000068[1];
  local_38 = &local_28;
  local_18 = in_stack_00000068[2];
  local_40 = in_stack_00000060;
  local_48 = in_stack_00000058;
  local_50 = in_stack_00000050;
  local_60 = in_stack_00000040;
  uStack_58 = in_stack_00000048;
  local_70 = in_stack_00000030;
  uStack_68 = in_stack_00000038;
  local_78 = in_stack_00000028;
  FUN_146e3d874();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3d874 FUN_146e3d874 body=678 status=ok
// SIG undefined FUN_146e3d874(void)

undefined1
FUN_146e3d874(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             double *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  double *local_190;
  undefined8 local_188;
  ulonglong *local_180;
  double *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  double local_98;
  double local_90;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_81 = param_12;
  local_90 = param_4[2] * param_13[2];
  local_98 = param_4[1] * param_13[1];
  dVar1 = *param_4 * *param_13;
  local_a8 = SQRT(local_90 * local_90 + dVar1 * dVar1 + local_98 * local_98);
  dVar2 = 1.0 / local_a8;
  local_a0 = ~-(ulonglong)(2.2250738585072014e-308 < local_a8) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_a8);
  if (2.2250738585072014e-308 < local_a8) {
    local_90 = local_90 * dVar2;
    local_98 = local_98 * dVar2;
  }
  else {
    local_98 = 0.0;
    local_90 = 0.0;
  }
  local_180 = &local_a0;
  local_178 = &local_a8;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_d8 = param_13[2] * (double)param_3[6];
  dVar2 = param_13[1] * (double)param_3[5];
  local_f8 = param_3[2];
  uStack_f0 = param_3[3];
  local_170 = &local_108;
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ = *param_13 * (double)param_3[4];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_118 = &local_109;
  local_109 = 0;
  local_190 = param_13;
  local_168 = &local_81;
  local_158 = (undefined1 *)&param_11;
  local_148 = (undefined1 *)&param_5;
  local_140 = param_6;
  uStack_138 = param_7;
  local_130 = param_8;
  uStack_128 = param_9;
  local_120 = param_10;
  local_198 = param_1;
  local_188 = param_2;
  local_160 = param_3;
  local_150 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e69e6a(&local_198,param_1 + 0x60);
  }
  else {
    FUN_146e6a5f4(&local_198,param_1 + 0x70);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3db1c thunk_FUN_146e3db22 body=5 status=ok
// SIG undefined thunk_FUN_146e3db22(void)

undefined1
thunk_FUN_146e3db22(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6bcac(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e6c65a(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3db22 FUN_146e3db22 body=686 status=ok
// SIG undefined FUN_146e3db22(void)

undefined1 FUN_146e3db22(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6bcac(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e6c65a(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3ddd2 thunk_FUN_146e3ddd8 body=5 status=ok
// SIG undefined thunk_FUN_146e3ddd8(void)

undefined1
thunk_FUN_146e3ddd8(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6e8ba(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e6f1d8(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3ddd8 FUN_146e3ddd8 body=686 status=ok
// SIG undefined FUN_146e3ddd8(void)

undefined1 FUN_146e3ddd8(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6e8ba(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e6f1d8(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e088 thunk_FUN_146e3e08e body=5 status=ok
// SIG undefined thunk_FUN_146e3e08e(void)

undefined1
thunk_FUN_146e3e08e(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e70678(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e70fbe(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e08e FUN_146e3e08e body=686 status=ok
// SIG undefined FUN_146e3e08e(void)

undefined1 FUN_146e3e08e(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e70678(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e70fbe(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e33e thunk_FUN_146e3e344 body=5 status=ok
// SIG undefined thunk_FUN_146e3e344(void)

undefined1
thunk_FUN_146e3e344(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e722f6(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e72c3c(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e344 FUN_146e3e344 body=686 status=ok
// SIG undefined FUN_146e3e344(void)

undefined1 FUN_146e3e344(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e722f6(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e72c3c(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e5f4 thunk_FUN_146e3e5fa body=5 status=ok
// SIG undefined thunk_FUN_146e3e5fa(void)

undefined1
thunk_FUN_146e3e5fa(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e73fec(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e74932(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e5fa FUN_146e3e5fa body=686 status=ok
// SIG undefined FUN_146e3e5fa(void)

undefined1 FUN_146e3e5fa(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e73fec(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e74932(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e8aa thunk_FUN_146e3e8b0 body=5 status=ok
// SIG undefined thunk_FUN_146e3e8b0(void)

undefined1
thunk_FUN_146e3e8b0(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e75db2(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e766f8(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3e8b0 FUN_146e3e8b0 body=686 status=ok
// SIG undefined FUN_146e3e8b0(void)

undefined1 FUN_146e3e8b0(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e75db2(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e766f8(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3eb60 thunk_FUN_146e3eb66 body=5 status=ok
// SIG undefined thunk_FUN_146e3eb66(void)

undefined1
thunk_FUN_146e3eb66(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  longlong lStack_1a0;
  double *pdStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  double *pdStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  double *pdStack_160;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined1 *puStack_128;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  double dStack_98;
  ulonglong uStack_90;
  
  uStack_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dStack_98 = param_4[2] * in_stack_00000070[2];
  dStack_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  dStack_b0 = SQRT(dStack_98 * dStack_98 + dVar1 * dVar1 + dStack_a0 * dStack_a0);
  dVar2 = 1.0 / dStack_b0;
  uStack_a8 = ~-(ulonglong)(2.2250738585072014e-308 < dStack_b0) & 0x3ff0000000000000 |
              (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < dStack_b0);
  if (2.2250738585072014e-308 < dStack_b0) {
    dStack_98 = dStack_98 * dVar2;
    dStack_a0 = dStack_a0 * dVar2;
  }
  else {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
  }
  puStack_188 = &uStack_a8;
  pdStack_180 = &dStack_b0;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  dStack_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  uStack_108 = param_3[2];
  uStack_100 = param_3[3];
  puStack_170 = &uStack_118;
  auStack_f8._8_4_ = SUB84(dVar2,0);
  auStack_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  auStack_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  puStack_128 = &uStack_119;
  uStack_119 = 0;
  puStack_1b0 = &stack0x00000030;
  puStack_1a8 = &stack0x00000038;
  pdStack_198 = in_stack_00000070;
  puStack_178 = &stack0x00000028;
  uStack_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  uStack_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  uStack_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  lStack_1a0 = param_1;
  uStack_190 = param_2;
  puStack_168 = param_3;
  pdStack_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e77c40(&puStack_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e78586(&puStack_1b0,param_1 + 0x70);
  }
  if ((uStack_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uStack_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3eb66 FUN_146e3eb66 body=686 status=ok
// SIG undefined FUN_146e3eb66(void)

undefined1 FUN_146e3eb66(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  double *in_stack_00000070;
  undefined1 auStack_1d8 [40];
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  ulonglong *local_188;
  double *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  double *local_160;
  undefined4 local_158;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  ulonglong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_4[2] * in_stack_00000070[2];
  local_a0 = param_4[1] * in_stack_00000070[1];
  dVar1 = *param_4 * *in_stack_00000070;
  local_b0 = SQRT(local_98 * local_98 + dVar1 * dVar1 + local_a0 * local_a0);
  dVar2 = 1.0 / local_b0;
  local_a8 = ~-(ulonglong)(2.2250738585072014e-308 < local_b0) & 0x3ff0000000000000 |
             (ulonglong)(dVar1 * dVar2) & -(ulonglong)(2.2250738585072014e-308 < local_b0);
  if (2.2250738585072014e-308 < local_b0) {
    local_98 = local_98 * dVar2;
    local_a0 = local_a0 * dVar2;
  }
  else {
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  local_188 = &local_a8;
  local_180 = &local_b0;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_e8 = in_stack_00000070[2] * (double)param_3[6];
  dVar2 = in_stack_00000070[1] * (double)param_3[5];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_170 = &local_118;
  local_f8._8_4_ = SUB84(dVar2,0);
  local_f8._0_8_ = *in_stack_00000070 * (double)param_3[4];
  local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_128 = &local_119;
  local_119 = 0;
  local_1b0 = &stack0x00000030;
  local_1a8 = &stack0x00000038;
  local_198 = in_stack_00000070;
  local_178 = &stack0x00000028;
  local_158 = in_stack_00000040;
  uStack_150 = in_stack_00000048;
  local_148 = in_stack_00000050;
  uStack_140 = in_stack_00000058;
  local_138 = in_stack_00000060;
  uStack_130 = in_stack_00000068;
  local_1a0 = param_1;
  local_190 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e77c40(&local_1b0,param_1 + 0x60);
  }
  else {
    FUN_146e78586(&local_1b0,param_1 + 0x70);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return local_119;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3ee16 FUN_146e3ee16 body=1451 status=ok
// SIG undefined FUN_146e3ee16(void)

int FUN_146e3ee16(longlong param_1,longlong *param_2,double *param_3,double *param_4,int param_5,
                 double param_6,double *param_7)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  double *local_1d0;
  int local_1c4;
  undefined4 local_1c0;
  double local_1b8;
  double *local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  longlong local_148;
  int local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_128 = param_3[2] * (1.0 / param_7[2]);
  local_130 = param_3[1] * (1.0 / param_7[1]);
  local_138 = *param_3 * (1.0 / *param_7);
  dVar12 = ABS((1.0 / param_7[2]) * param_6);
  dVar13 = ABS((1.0 / param_7[1]) * param_6);
  dVar11 = ABS((1.0 / *param_7) * param_6);
  local_110 = dVar12 + local_128;
  local_118 = dVar13 + local_130;
  local_120 = dVar11 + local_138;
  local_128 = local_128 - dVar12;
  local_130 = local_130 - dVar13;
  local_138 = local_138 - dVar11;
  local_1b0 = param_4;
  FUN_140d8788e(param_1 + 0xe0,&local_148);
  lVar4 = local_148;
  if ((longlong)local_140 != 0) {
    local_1c4 = param_5;
    local_1b8 = 1.79769313486232e+308;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(lVar4 + lVar7);
      lVar8 = (longlong)iVar1;
      lVar6 = *param_2;
      lVar9 = (longlong)*(int *)(lVar6 + lVar8 * 0xc);
      lVar2 = *(longlong *)(param_1 + 0x48);
      fVar16 = (float)param_7[2];
      fVar17 = (float)param_7[1];
      fVar15 = (float)*param_7;
      local_150 = (double)(*(float *)(lVar2 + 8 + lVar9 * 0xc) * fVar16);
      local_158 = (double)(*(float *)(lVar2 + 4 + lVar9 * 0xc) * fVar17);
      local_160 = (double)(*(float *)(lVar2 + lVar9 * 0xc) * fVar15);
      lVar9 = (longlong)*(int *)(lVar6 + 4 + lVar8 * 0xc);
      local_168 = (double)(*(float *)(lVar2 + 8 + lVar9 * 0xc) * fVar16);
      local_170 = (double)(*(float *)(lVar2 + 4 + lVar9 * 0xc) * fVar17);
      local_178 = (double)(*(float *)(lVar2 + lVar9 * 0xc) * fVar15);
      lVar6 = (longlong)*(int *)(lVar6 + 8 + lVar8 * 0xc);
      local_180 = (double)(fVar16 * *(float *)(lVar2 + 8 + lVar6 * 0xc));
      local_188 = (double)(fVar17 * *(float *)(lVar2 + 4 + lVar6 * 0xc));
      local_190 = (double)(fVar15 * *(float *)(lVar2 + lVar6 * 0xc));
      dVar12 = (local_178 - local_160) * (local_188 - local_158) -
               (local_190 - local_160) * (local_170 - local_158);
      dVar3 = (local_168 - local_150) * (local_190 - local_160) -
              (local_180 - local_150) * (local_178 - local_160);
      dVar14 = (local_170 - local_158) * (local_180 - local_150) -
               (local_188 - local_158) * (local_168 - local_150);
      dVar11 = dVar12 * dVar12 + dVar14 * dVar14 + dVar3 * dVar3;
      iVar5 = local_1c4;
      dVar13 = local_1b8;
      if ((9.99999993922529e-09 <= dVar11) && (dVar11 = SQRT(dVar11), 9.99999993922529e-09 < dVar11)
         ) {
        dVar3 = dVar3 / dVar11;
        dVar12 = dVar12 / dVar11;
        dVar13 = param_7[2] * param_7[1] * *param_7;
        if (dVar13 < 0.0) {
          dVar12 = -dVar12;
          dVar3 = -dVar3;
        }
        uVar10 = -(ulonglong)(dVar13 < 0.0);
        dVar11 = (double)(~uVar10 & (ulonglong)(dVar14 / dVar11) |
                         (ulonglong)-(dVar14 / dVar11) & uVar10);
        local_1c0 = 0;
        dVar13 = (param_3[2] - local_150) * dVar12 +
                 (*param_3 - local_160) * dVar11 + (param_3[1] - local_158) * dVar3;
        local_f8 = param_3[2] - dVar13 * dVar12;
        local_100 = param_3[1] - dVar3 * dVar13;
        local_108 = *param_3 - dVar11 * dVar13;
        local_1d8 = &local_190;
        local_1d0 = param_3;
        FUN_1449056f5(&local_1a8,&local_108,&local_160,&local_178);
        iVar5 = local_1c4;
        dVar13 = local_1b8;
        if (((local_198 - param_3[2]) * (local_198 - param_3[2]) +
             (local_1a8 - *param_3) * (local_1a8 - *param_3) +
             (local_1a0 - param_3[1]) * (local_1a0 - param_3[1]) < param_6 * param_6) &&
           (dVar13 = dVar12 * local_1b0[2] + dVar11 * *local_1b0 + dVar3 * local_1b0[1],
           iVar5 = iVar1, local_1b8 <= dVar13)) {
          iVar5 = local_1c4;
          dVar13 = local_1b8;
        }
      }
      local_1b8 = dVar13;
      local_1c4 = iVar5;
      lVar7 = lVar7 + 4;
      param_5 = local_1c4;
    } while ((longlong)local_140 * 4 != lVar7);
  }
  if (local_148 != 0) {
    FUN_1400020a8(local_148);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3f3c2 FUN_146e3f3c2 body=52 status=ok
// SIG undefined FUN_146e3f3c2(void)

undefined8 FUN_146e3f3c2(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3f3f6(param_1,param_2,param_1 + 0x60);
  }
  else {
    FUN_146e3f6fc(param_1,param_2,param_1 + 0x70);
  }
  return param_2;
}



// FUNCTION 146e3f3f6 FUN_146e3f3f6 body=773 status=ok
// SIG undefined FUN_146e3f3f6(void)

longlong * FUN_146e3f3f6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong **local_d0;
  undefined1 local_c8;
  longlong *local_b8;
  longlong *local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [64];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0x50);
  lVar5 = (longlong)local_40;
  pvVar2 = *(void **)(param_1 + 0x48);
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1405161ea(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar5 * 0xc);
  }
  FUN_146e79986(local_88,&local_48);
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_90;
  pvVar2 = (void *)*param_3;
  if (lVar5 == 0) {
    local_8c = 0;
  }
  else {
    FUN_146d8c0a4(&local_98,local_90,0);
    memcpy(local_98,pvVar2,lVar5 * 0xc);
  }
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(param_1 + 0xc0);
  lVar5 = (longlong)local_a0;
  pvVar2 = *(void **)(param_1 + 0xb8);
  if (lVar5 == 0) {
    local_9c = 0;
  }
  else {
    FUN_140817052(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar2,lVar5 * 2);
  }
  local_b0 = (longlong *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 200);
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar4 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    pvVar2 = (void *)*puVar3;
    *(int *)(plVar4 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      local_b0 = plVar4;
    }
    else {
      FUN_144a06ca8(plVar4,iVar1,0);
      memcpy((void *)*plVar4,pvVar2,(longlong)iVar1 << 2);
      local_b0 = plVar4;
    }
  }
  local_b8 = (longlong *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  if ((puVar3 != (undefined8 *)0x0) && (DAT_14c75f2f8 == '\x01')) {
    plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar4 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    pvVar2 = (void *)*puVar3;
    *(int *)(plVar4 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      local_b8 = plVar4;
    }
    else {
      FUN_144a06ca8(plVar4,iVar1,0);
      memcpy((void *)*plVar4,pvVar2,(longlong)iVar1 << 2);
      local_b8 = plVar4;
    }
  }
  lVar5 = FUN_14001cc68(0x100,0x10);
  local_c8 = *(undefined1 *)(param_1 + 0xd8);
  local_d0 = &local_b8;
  local_d8 = &local_b0;
  FUN_146e79a44(lVar5,local_88,&local_98,&local_a8);
  plVar4 = local_b8;
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_b8 != (longlong *)0x0) {
    if (*local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  plVar4 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    if (*local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(local_88);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e3f6fc FUN_146e3f6fc body=800 status=ok
// SIG undefined FUN_146e3f6fc(void)

longlong * FUN_146e3f6fc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong **local_d0;
  undefined1 local_c8;
  longlong *local_b8;
  longlong *local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [64];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0x50);
  lVar5 = (longlong)local_40;
  pvVar2 = *(void **)(param_1 + 0x48);
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1405161ea(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar5 * 0xc);
  }
  FUN_146e79986(local_88,&local_48);
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_90;
  pvVar2 = (void *)*param_3;
  if (lVar5 == 0) {
    local_8c = 0;
  }
  else {
    FUN_146e79edc(&local_98,local_90,0);
    memcpy(local_98,pvVar2,lVar5 * 6);
  }
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(param_1 + 0xc0);
  lVar5 = (longlong)local_a0;
  pvVar2 = *(void **)(param_1 + 0xb8);
  if (lVar5 == 0) {
    local_9c = 0;
  }
  else {
    FUN_140817052(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar2,lVar5 * 2);
  }
  local_b0 = (longlong *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 200);
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar4 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    pvVar2 = (void *)*puVar3;
    *(int *)(plVar4 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      local_b0 = plVar4;
    }
    else {
      FUN_144a06ca8(plVar4,iVar1,0);
      memcpy((void *)*plVar4,pvVar2,(longlong)iVar1 << 2);
      local_b0 = plVar4;
    }
  }
  local_b8 = (longlong *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  if ((puVar3 != (undefined8 *)0x0) && (DAT_14c75f2f8 == '\x01')) {
    plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar4 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    pvVar2 = (void *)*puVar3;
    *(int *)(plVar4 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      local_b8 = plVar4;
    }
    else {
      FUN_144a06ca8(plVar4,iVar1,0);
      memcpy((void *)*plVar4,pvVar2,(longlong)iVar1 << 2);
      local_b8 = plVar4;
    }
  }
  lVar5 = FUN_14001cc68(0x100,0x10);
  local_c8 = *(undefined1 *)(param_1 + 0xd8);
  local_d0 = &local_b8;
  local_d8 = &local_b0;
  FUN_140c0bd64(lVar5,local_88,&local_98,&local_a8);
  plVar4 = local_b8;
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_b8 != (longlong *)0x0) {
    if (*local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  plVar4 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    if (*local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(local_88);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e3fa1e FUN_146e3fa1e body=52 status=ok
// SIG undefined FUN_146e3fa1e(void)

undefined8 FUN_146e3fa1e(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3f3f6(param_1,param_2,param_1 + 0x60);
  }
  else {
    FUN_146e3f6fc(param_1,param_2,param_1 + 0x70);
  }
  return param_2;
}



// FUNCTION 146e3fa52 FUN_146e3fa52 body=242 status=ok
// SIG undefined FUN_146e3fa52(void)

undefined4 FUN_146e3fa52(longlong param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  
  uVar4 = FUN_146e3fb44(param_1 + 0x20);
  uVar5 = FUN_1448eb174(param_1 + 0xa0,0x18,0);
  uVar6 = FUN_1448eb174(param_1 + 0x88,0x18,0);
  uVar5 = FUN_144a78877(uVar6,uVar5);
  uVar4 = FUN_144a78877(uVar4,uVar5);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x60);
      puVar1 = puVar7 + (longlong)*(int *)(param_1 + 0x68) * 3;
      do {
        uVar5 = *puVar7;
        uVar6 = FUN_144a78877(puVar7[1],puVar7[2]);
        uVar5 = FUN_144a78877(uVar5,uVar6);
        uVar4 = FUN_144a78877(uVar4,uVar5);
        puVar7 = puVar7 + 3;
      } while (puVar7 != puVar1);
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar8 = *(undefined2 **)(param_1 + 0x70);
    puVar2 = puVar8 + (longlong)*(int *)(param_1 + 0x78) * 3;
    do {
      uVar3 = *puVar8;
      uVar5 = FUN_144a78877(puVar8[1],puVar8[2]);
      uVar5 = FUN_144a78877(uVar3,uVar5);
      uVar4 = FUN_144a78877(uVar4,uVar5);
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar2);
  }
  return uVar4;
}



// FUNCTION 146e3fb44 FUN_146e3fb44 body=108 status=ok
// SIG undefined FUN_146e3fb44(void)

undefined4 FUN_146e3fb44(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1448eb174(*(undefined8 *)(param_1 + 0x28),0xc,0);
    if (uVar1 != 1) {
      lVar4 = (ulonglong)uVar1 - 1;
      lVar5 = 0xc;
      do {
        uVar3 = FUN_1448eb174(*(longlong *)(param_1 + 0x28) + lVar5,0xc,0);
        uVar2 = FUN_144a78877(uVar2,uVar3);
        lVar5 = lVar5 + 0xc;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return uVar2;
}



// FUNCTION 146e3fbb0 FUN_146e3fbb0 body=330 status=ok
// SIG undefined FUN_146e3fbb0(void)

void FUN_146e3fbb0(undefined8 *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f5f4b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x24] = 0x100000000c;
  param_1[0x25] = 0x47c35000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x179) = 0x101;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  iVar1 = DAT_14c75efb8;
  fVar3 = (float)DAT_14c75efb8;
  *(float *)(param_1 + 0x19) = fVar3;
  fVar2 = 1.0;
  if (0 < iVar1) {
    fVar2 = 1.0 / fVar3;
  }
  *(float *)((longlong)param_1 + 0xcc) = fVar2;
  *(undefined4 *)(param_1 + 0x1a) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xd4) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c75efc4;
  return;
}



// FUNCTION 146e3fcfa FUN_146e3fcfa body=221 status=ok
// SIG undefined FUN_146e3fcfa(void)

void FUN_146e3fcfa(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 8);
  local_48 = 0;
  uStack_40 = 0;
  FUN_146e79f4e(&local_48,iVar1);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      uVar2 = uStack_40;
      lVar5 = (longlong)(int)uStack_40;
      uVar3 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
      if (uStack_40._4_4_ < uVar3) {
        FUN_146e79fd8(&local_48,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar5 * 0x10) = param_1;
      *(int *)(local_48 + 8 + lVar5 * 0x10) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  *(undefined1 *)(param_3 + 0x40) = 0;
  *(undefined4 *)(param_3 + 0x120) = 0x16;
  *(undefined4 *)(param_3 + 0x124) = 0x10;
  *(undefined4 *)(param_3 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 300) = 0;
  *(undefined2 *)(param_3 + 0x178) = 0x100;
  *(undefined1 *)(param_3 + 0x17a) = 1;
  FUN_1429ee664(param_3,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e3fdd8 FUN_146e3fdd8 body=161 status=ok
// SIG undefined FUN_146e3fdd8(void)

void FUN_146e3fdd8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_208 [32];
  undefined **ppuStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  if (DAT_14c75f2f8 == '\0') {
    return;
  }
  iVar9 = (int)param_2[1];
  if (0 < iVar9) {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    lVar6 = 4;
    lVar8 = 0;
    do {
      if (lVar3 == 0) {
        iVar7 = (int)lVar8;
      }
      else {
        iVar7 = *(int *)(**(longlong **)(param_1 + 0xd0) + lVar8 * 4);
      }
      if (iVar7 < *(int *)(param_1 + 0x38)) {
        lVar4 = *param_2;
        dVar1 = *(double *)(lVar4 + lVar6 * 4);
        dVar2 = *(double *)(lVar4 + -8 + lVar6 * 4);
        lVar5 = *(longlong *)(param_1 + 0x48);
        lVar10 = (longlong)iVar7;
        *(float *)(lVar5 + lVar10 * 0xc) = (float)*(double *)(lVar4 + -0x10 + lVar6 * 4);
        *(float *)(lVar5 + 4 + lVar10 * 0xc) = (float)dVar2;
        *(float *)(lVar5 + 8 + lVar10 * 0xc) = (float)dVar1;
        iVar9 = (int)param_2[1];
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 6;
    } while (lVar8 < iVar9);
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_1e0 = 0;
  uStack_1dc = 0x401;
  ppuStack_1e8 = &PTR_FUN_149f5f4b0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0xffffffffffffffff;
  uStack_19c = 0xffffffff;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_16c = 0xffffffff00000080;
  uStack_164 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_cc = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  uStack_10c = 0;
  uStack_104 = 0;
  uStack_c8 = 0x100000000c;
  uStack_c0 = 0x47c35000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6f = 0x101;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  fStack_120 = (float)DAT_14c75efb8;
  uStack_28 = 0;
  uStack_20 = 0;
  fStack_11c = 1.0;
  if (0 < DAT_14c75efb8) {
    fStack_11c = 1.0 / fStack_120;
  }
  uStack_118 = DAT_14c75efbc;
  uStack_114 = DAT_14c75efc0;
  uStack_110 = DAT_14c75efc4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3fcfa(param_1,param_1 + 0x60,&ppuStack_1e8);
  }
  else {
    FUN_140c0c3f8(param_1,param_1 + 0x70,&ppuStack_1e8);
  }
  FUN_140c0eace(param_1,&ppuStack_1e8);
  FUN_140c0c5dc(&ppuStack_1e8);
  if ((uStack_18 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e3fe7a FUN_146e3fe7a body=115 status=ok
// SIG undefined FUN_146e3fe7a(void)

void FUN_146e3fe7a(longlong *param_1,longlong *param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1405c2e9e(param_1,0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140c0fda2(param_1 + 2,0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146e3feee FUN_146e3feee body=375 status=ok
// SIG undefined FUN_146e3feee(void)

void FUN_146e3feee(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_2[2];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar5 = fVar1;
  if (fVar1 <= *param_1) {
    fVar5 = *param_1;
  }
  *param_1 = fVar5;
  fVar4 = -fVar1;
  fVar5 = fVar4;
  if (fVar4 <= param_1[1]) {
    fVar5 = param_1[1];
  }
  param_1[1] = fVar5;
  fVar5 = fVar2;
  if (fVar2 <= param_1[2]) {
    fVar5 = param_1[2];
  }
  param_1[2] = fVar5;
  fVar6 = -fVar2;
  fVar5 = fVar6;
  if (fVar6 <= param_1[3]) {
    fVar5 = param_1[3];
  }
  param_1[3] = fVar5;
  fVar5 = fVar3;
  if (fVar3 <= param_1[4]) {
    fVar5 = param_1[4];
  }
  param_1[4] = fVar5;
  fVar5 = -fVar3;
  if (-fVar3 <= param_1[5]) {
    fVar5 = param_1[5];
  }
  param_1[5] = fVar5;
  fVar5 = fVar3 + fVar2;
  if (fVar3 + fVar2 <= param_1[6]) {
    fVar5 = param_1[6];
  }
  param_1[6] = fVar5;
  fVar5 = fVar6 - fVar3;
  if (fVar6 - fVar3 <= param_1[7]) {
    fVar5 = param_1[7];
  }
  param_1[7] = fVar5;
  fVar5 = fVar2 - fVar3;
  if (fVar2 - fVar3 <= param_1[8]) {
    fVar5 = param_1[8];
  }
  param_1[8] = fVar5;
  fVar5 = fVar3 - fVar2;
  if (fVar3 - fVar2 <= param_1[9]) {
    fVar5 = param_1[9];
  }
  param_1[9] = fVar5;
  fVar5 = fVar3 + fVar1;
  if (fVar3 + fVar1 <= param_1[10]) {
    fVar5 = param_1[10];
  }
  param_1[10] = fVar5;
  fVar5 = fVar4 - fVar3;
  if (fVar4 - fVar3 <= param_1[0xb]) {
    fVar5 = param_1[0xb];
  }
  param_1[0xb] = fVar5;
  fVar5 = fVar1 - fVar3;
  if (fVar1 - fVar3 <= param_1[0xc]) {
    fVar5 = param_1[0xc];
  }
  param_1[0xc] = fVar5;
  fVar5 = fVar3 - fVar1;
  if (fVar3 - fVar1 <= param_1[0xd]) {
    fVar5 = param_1[0xd];
  }
  param_1[0xd] = fVar5;
  fVar3 = fVar2 + fVar1;
  if (fVar2 + fVar1 <= param_1[0xe]) {
    fVar3 = param_1[0xe];
  }
  param_1[0xe] = fVar3;
  fVar3 = fVar4 - fVar2;
  if (fVar4 - fVar2 <= param_1[0xf]) {
    fVar3 = param_1[0xf];
  }
  param_1[0xf] = fVar3;
  fVar3 = fVar1 - fVar2;
  if (fVar1 - fVar2 <= param_1[0x10]) {
    fVar3 = param_1[0x10];
  }
  param_1[0x10] = fVar3;
  fVar3 = fVar2 - fVar1;
  if (fVar2 - fVar1 <= param_1[0x11]) {
    fVar3 = param_1[0x11];
  }
  param_1[0x11] = fVar3;
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}



// FUNCTION 146e40066 FUN_146e40066 body=201 status=ok
// SIG undefined FUN_146e40066(void)

double * FUN_146e40066(longlong param_1,double *param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = (double)*(float *)(param_1 + (longlong)param_3[2] * 4);
  dVar8 = (double)*(float *)(param_1 + (longlong)param_3[1] * 4);
  dVar9 = (double)*(float *)(param_1 + (longlong)*param_3 * 4);
  fVar1 = param_4[2];
  fVar2 = param_4[6];
  fVar3 = param_4[10];
  fVar4 = param_4[1];
  fVar5 = param_4[5];
  fVar6 = param_4[9];
  *param_2 = (double)param_4[8] * dVar7 + (double)*param_4 * dVar9 + (double)param_4[4] * dVar8;
  param_2[1] = (double)fVar6 * dVar7 + (double)fVar4 * dVar9 + (double)fVar5 * dVar8;
  param_2[2] = (double)fVar3 * dVar7 + (double)fVar1 * dVar9 + (double)fVar2 * dVar8;
  return param_2;
}



// FUNCTION 146e40130 FUN_146e40130 body=138 status=ok
// SIG undefined FUN_146e40130(void)

void FUN_146e40130(int *param_1,int *param_2,undefined8 *param_3,longlong *param_4,longlong *param_5
                  )

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (undefined4)param_5[1];
  *(undefined4 *)(*(longlong *)(*param_4 + (longlong)*param_1 * 0x10) + (longlong)*param_2 * 4) =
       uVar1;
  *(undefined4 *)(*(longlong *)(*param_4 + (longlong)param_1[1] * 0x10) + (longlong)param_2[1] * 4)
       = uVar1;
  *(undefined4 *)(*(longlong *)(*param_4 + (longlong)param_1[2] * 0x10) + (longlong)param_2[2] * 4)
       = uVar1;
  iVar2 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
    FUN_140aacb36(param_5,iVar2);
  }
  lVar3 = *param_5;
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *param_3;
  return;
}



// FUNCTION 146e401ba FUN_146e401ba body=270 status=ok
// SIG undefined FUN_146e401ba(void)

void FUN_146e401ba(undefined8 param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_68;
  double local_60;
  double local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (longlong)param_2;
  local_44 = *(undefined8 *)(&DAT_149f5e8a0 + lVar2 * 0xc);
  local_3c = *(undefined4 *)(&DAT_149f5e8a8 + lVar2 * 0xc);
  *(undefined4 *)((longlong)&local_44 + (ulonglong)param_4 * 4) =
       (&DAT_149f5e900)[lVar2 * 3 + (ulonglong)param_3];
  uVar1 = (ulonglong)(param_3 * 3 + param_4);
  FUN_146e40066(param_1,&local_68,&local_44,&DAT_14c994e70 + uVar1 * 0x40 + lVar2 * 0x240);
  local_48 = (float)local_58;
  local_4c = (float)local_60;
  local_50 = (float)local_68;
  local_78 = param_6;
  FUN_146e40130(&local_44,&DAT_149f5e960 + uVar1 * 0xc + lVar2 * 0x6c,&local_50,param_5);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e402ca FUN_146e402ca body=459 status=ok
// SIG undefined FUN_146e402ca(void)

longlong *
FUN_146e402ca(float *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_118 [32];
  float *local_f8;
  float *local_f0;
  float local_e8;
  float *local_e0;
  undefined4 *local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = *param_1;
  local_bc = param_1[2];
  local_b8 = param_1[4];
  fVar3 = local_c0 + param_1[1];
  fVar2 = local_bc + param_1[3];
  fVar4 = local_b8 + param_1[5];
  local_c4 = -param_1[5];
  local_c8 = -param_1[3];
  local_cc = -param_1[1];
  lVar1 = FUN_14001cc68(0xb0,0x10);
  local_d8 = &local_a8;
  local_98 = DAT_14c8463e0;
  uStack_90 = DAT_14c8463e8;
  local_a8 = (undefined4)DAT_14c8463d0;
  uStack_a4 = DAT_14c8463d0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8463d8;
  uStack_9c = DAT_14c8463d8._4_4_;
  local_e0 = &local_b4;
  local_f8 = &local_cc;
  local_f0 = &local_c0;
  local_e8 = fVar3 * fVar2 * fVar4;
  local_b4 = (fVar4 * fVar4 + fVar2 * fVar2) / 12.0;
  local_b0 = (fVar3 * fVar3 + fVar4 * fVar4) / 12.0;
  local_ac = (fVar2 * fVar2 + fVar3 * fVar3) / 12.0;
  FUN_146e7a1d0(lVar1,param_3,param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e40496 FUN_146e40496 body=291 status=ok
// SIG undefined FUN_146e40496(void)

double FUN_146e40496(longlong param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar10 = *(int *)(param_1 + 8);
  iVar9 = (*param_2 + 1) * *(int *)(param_1 + 4);
  iVar7 = (iVar9 + iVar4) * iVar10;
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 4) * *param_2;
  iVar11 = (iVar8 + iVar4) * iVar10;
  dVar12 = *(double *)(lVar6 + (longlong)(iVar11 + iVar5) * 8);
  dVar1 = *param_3;
  dVar12 = (*(double *)(lVar6 + (longlong)(iVar7 + iVar5) * 8) - dVar12) * dVar1 + dVar12;
  iVar9 = (iVar9 + iVar4 + 1) * iVar10;
  iVar10 = (iVar4 + iVar8 + 1) * iVar10;
  dVar2 = *(double *)(lVar6 + (longlong)(iVar10 + iVar5) * 8);
  dVar13 = *(double *)(lVar6 + (longlong)(iVar11 + 1 + iVar5) * 8);
  dVar13 = (*(double *)(lVar6 + (longlong)(iVar7 + 1 + iVar5) * 8) - dVar13) * dVar1 + dVar13;
  dVar3 = *(double *)(lVar6 + (longlong)(iVar10 + 1 + iVar5) * 8);
  dVar12 = (((*(double *)(lVar6 + (longlong)(iVar9 + iVar5) * 8) - dVar2) * dVar1 + dVar2) - dVar12)
           * param_3[1] + dVar12;
  return (((((*(double *)(lVar6 + (longlong)(iVar9 + 1 + iVar5) * 8) - dVar3) * dVar1 + dVar3) -
           dVar13) * param_3[1] + dVar13) - dVar12) * param_3[2] + dVar12;
}



// FUNCTION 146e405ba FUN_146e405ba body=41 status=ok
// SIG undefined FUN_146e405ba(void)

int * FUN_146e405ba(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x34) * iVar1;
  uVar2 = (longlong)param_3 % (longlong)iVar3;
  *param_2 = param_3 / iVar3;
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  param_2[1] = (int)((longlong)uVar2 / (longlong)iVar1);
  param_2[2] = (int)((longlong)uVar2 % (longlong)iVar1);
  return param_2;
}



// FUNCTION 146e405e4 FUN_146e405e4 body=208 status=ok
// SIG undefined FUN_146e405e4(void)

ulonglong * FUN_146e405e4(double *param_1,ulonglong *param_2,double *param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = param_1[5] - param_1[10] * 0.5;
  dVar6 = param_1[4] - param_1[9] * 0.5;
  dVar3 = param_1[10] * 0.5 + param_1[2];
  dVar5 = param_1[9] * 0.5 + param_1[1];
  dVar8 = param_1[3] - param_1[8] * 0.5;
  dVar7 = param_1[8] * 0.5 + *param_1;
  dVar1 = *param_3;
  if (dVar7 <= dVar1) {
    dVar7 = dVar1;
  }
  uVar2 = -(ulonglong)(dVar8 < dVar1);
  *param_2 = ~uVar2 & (ulonglong)dVar7 | (ulonglong)dVar8 & uVar2;
  dVar1 = param_3[1];
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  uVar2 = -(ulonglong)(dVar6 < dVar1);
  param_2[1] = ~uVar2 & (ulonglong)dVar5 | (ulonglong)dVar6 & uVar2;
  dVar1 = param_3[2];
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  uVar2 = -(ulonglong)(dVar4 < dVar1);
  param_2[2] = ~uVar2 & (ulonglong)dVar3 | (ulonglong)dVar4 & uVar2;
  return param_2;
}



// FUNCTION 146e406b4 FUN_146e406b4 body=628 status=ok
// SIG undefined FUN_146e406b4(void)

undefined8 FUN_146e406b4(double *param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [40];
  double local_e0 [3];
  int local_c4 [3];
  double local_b8 [3];
  int local_9c [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146c9c584(param_1,local_9c,param_4);
  local_e0[2] = param_1[10];
  local_e0[1] = param_1[9];
  local_e0[0] = param_1[8];
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  local_b8[0] = (double)local_9c[0] * local_e0[0] + dVar2 + local_e0[0] * 0.5;
  local_b8[1] = (double)local_9c[1] * local_e0[1] + dVar3 + local_e0[1] * 0.5;
  local_b8[2] = (double)local_9c[2] * local_e0[2] + dVar1 + local_e0[2] * 0.5;
  lVar5 = 0;
  do {
    local_c4[lVar5] =
         local_9c[lVar5] -
         (uint)(param_4[lVar5] < local_b8[lVar5] || param_4[lVar5] == local_b8[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_e0[2] = (param_4[2] - (local_e0[2] * 0.5 + dVar1 + (double)local_c4[2] * local_e0[2])) /
                local_e0[2];
  local_e0[1] = (param_4[1] - (local_e0[1] * 0.5 + dVar3 + (double)local_c4[1] * local_e0[1])) /
                local_e0[1];
  local_e0[0] = (*param_4 - (local_e0[0] * 0.5 + dVar2 + (double)local_c4[0] * local_e0[0])) /
                local_e0[0];
  lVar5 = 0;
  do {
    iVar6 = local_c4[lVar5];
    if (iVar6 == -1) {
      local_c4[lVar5] = 0;
      local_e0[lVar5] = 0.0;
      iVar6 = 0;
    }
    iVar4 = *(int *)((longlong)param_1 + lVar5 * 4 + 0x30);
    if (iVar6 == iVar4 + -1) {
      local_c4[lVar5] = iVar4 + -2;
      local_e0[lVar5] = 1.0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_146e40929(param_2,param_3,local_c4,local_e0);
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e40929 FUN_146e40929 body=800 status=ok
// SIG undefined FUN_146e40929(void)

void FUN_146e40929(double *param_1,longlong param_2,int *param_3,double *param_4)

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
  double dVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  iVar14 = param_3[1];
  iVar15 = param_3[2];
  iVar18 = *(int *)(param_2 + 8);
  iVar21 = (*param_3 + 1) * *(int *)(param_2 + 4);
  iVar19 = (iVar21 + iVar14) * iVar18;
  lVar16 = *(longlong *)(param_2 + 0x10);
  lVar22 = (longlong)(iVar19 + iVar15);
  iVar17 = *(int *)(param_2 + 4) * *param_3;
  iVar20 = (iVar17 + iVar14) * iVar18;
  lVar24 = (longlong)(iVar20 + iVar15);
  dVar26 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar25 = *(double *)(lVar16 + lVar24 * 0x18);
  dVar27 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar1 = *param_4;
  dVar26 = (*(double *)(lVar16 + 0x10 + lVar22 * 0x18) - dVar26) * dVar1 + dVar26;
  dVar27 = (*(double *)(lVar16 + 8 + lVar22 * 0x18) - dVar27) * dVar1 + dVar27;
  dVar25 = (*(double *)(lVar16 + lVar22 * 0x18) - dVar25) * dVar1 + dVar25;
  iVar21 = (iVar21 + iVar14 + 1) * iVar18;
  lVar23 = (longlong)(iVar21 + iVar15);
  iVar18 = (iVar14 + iVar17 + 1) * iVar18;
  lVar22 = (longlong)(iVar18 + iVar15);
  dVar2 = *(double *)(lVar16 + 0x10 + lVar22 * 0x18);
  dVar3 = *(double *)(lVar16 + lVar22 * 0x18);
  dVar4 = *(double *)(lVar16 + 8 + lVar22 * 0x18);
  lVar22 = (longlong)(iVar19 + 1 + iVar15);
  lVar24 = (longlong)(iVar20 + 1 + iVar15);
  dVar5 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar6 = *(double *)(lVar16 + lVar24 * 0x18);
  dVar7 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar5 = (*(double *)(lVar16 + 0x10 + lVar22 * 0x18) - dVar5) * dVar1 + dVar5;
  dVar7 = (*(double *)(lVar16 + 8 + lVar22 * 0x18) - dVar7) * dVar1 + dVar7;
  dVar6 = (*(double *)(lVar16 + lVar22 * 0x18) - dVar6) * dVar1 + dVar6;
  lVar24 = (longlong)(iVar21 + 1 + iVar15);
  lVar22 = (longlong)(iVar18 + 1 + iVar15);
  dVar8 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar9 = *(double *)(lVar16 + 0x10 + lVar22 * 0x18);
  dVar10 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar11 = *(double *)(lVar16 + lVar22 * 0x18);
  dVar12 = *(double *)(lVar16 + 8 + lVar22 * 0x18);
  dVar13 = param_4[1];
  dVar26 = (((*(double *)(lVar16 + 0x10 + lVar23 * 0x18) - dVar2) * dVar1 + dVar2) - dVar26) *
           dVar13 + dVar26;
  dVar27 = (((*(double *)(lVar16 + 8 + lVar23 * 0x18) - dVar4) * dVar1 + dVar4) - dVar27) * dVar13 +
           dVar27;
  dVar25 = (((*(double *)(lVar16 + lVar23 * 0x18) - dVar3) * dVar1 + dVar3) - dVar25) * dVar13 +
           dVar25;
  dVar2 = param_4[2];
  *param_1 = (((((*(double *)(lVar16 + lVar24 * 0x18) - dVar11) * dVar1 + dVar11) - dVar6) * dVar13
              + dVar6) - dVar25) * dVar2 + dVar25;
  param_1[1] = (((((dVar10 - dVar12) * dVar1 + dVar12) - dVar7) * dVar13 + dVar7) - dVar27) * dVar2
               + dVar27;
  param_1[2] = (((((dVar8 - dVar9) * dVar1 + dVar9) - dVar5) * dVar13 + dVar5) - dVar26) * dVar2 +
               dVar26;
  return;
}



// FUNCTION 146e40c4a FUN_146e40c4a body=609 status=ok
// SIG undefined FUN_146e40c4a(void)

void FUN_146e40c4a(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [40];
  double local_e0 [3];
  int local_c4 [3];
  double local_b8 [3];
  int local_9c [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146c9c584(param_1,local_9c);
  local_e0[2] = param_1[10];
  local_e0[1] = param_1[9];
  local_e0[0] = param_1[8];
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  local_b8[0] = (double)local_9c[0] * local_e0[0] + dVar2 + local_e0[0] * 0.5;
  local_b8[1] = (double)local_9c[1] * local_e0[1] + dVar3 + local_e0[1] * 0.5;
  local_b8[2] = (double)local_9c[2] * local_e0[2] + dVar1 + local_e0[2] * 0.5;
  lVar5 = 0;
  do {
    local_c4[lVar5] =
         local_9c[lVar5] -
         (uint)(param_3[lVar5] < local_b8[lVar5] || param_3[lVar5] == local_b8[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_e0[2] = (param_3[2] - (local_e0[2] * 0.5 + dVar1 + (double)local_c4[2] * local_e0[2])) /
                local_e0[2];
  local_e0[1] = (param_3[1] - (local_e0[1] * 0.5 + dVar3 + (double)local_c4[1] * local_e0[1])) /
                local_e0[1];
  local_e0[0] = (*param_3 - (local_e0[0] * 0.5 + dVar2 + (double)local_c4[0] * local_e0[0])) /
                local_e0[0];
  lVar5 = 0;
  do {
    iVar6 = local_c4[lVar5];
    if (iVar6 == -1) {
      local_c4[lVar5] = 0;
      local_e0[lVar5] = 0.0;
      iVar6 = 0;
    }
    iVar4 = *(int *)((longlong)param_1 + lVar5 * 4 + 0x30);
    if (iVar6 == iVar4 + -1) {
      local_c4[lVar5] = iVar4 + -2;
      local_e0[lVar5] = 1.0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_146e40496(param_2,local_c4,local_e0);
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e40eac FUN_146e40eac body=513 status=ok
// SIG undefined FUN_146e40eac(void)

void FUN_146e40eac(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  undefined1 param_5,float *param_6,double *param_7,double *param_8)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_5;
  FUN_14172c540(param_1);
  if (*(int *)(param_1 + 0x184) == -1) {
    local_7c = 0.0;
    local_78 = 0.0;
    param_4 = 0.0;
  }
  else {
    FUN_1429913ce(param_2,&local_7c,*(int *)(param_1 + 0x184),param_2 + 0x18);
    local_7c = local_7c * param_4;
    local_78 = local_78 * param_4;
    param_4 = param_4 * local_74;
  }
  if ((*(int *)(param_1 + 0x188) != -1) &&
     ((cVar1 = FUN_142991408(param_2,*(int *)(param_1 + 0x188),param_2 + 0x18), cVar1 == '\x02' ||
      (param_8 = param_7, cVar1 == '\x01')))) {
    fVar2 = (float)param_8[3];
    fVar5 = (float)param_8[2];
    fVar4 = (float)param_8[1];
    fVar3 = (float)*param_8;
    fVar6 = fVar3 * local_78 - local_7c * fVar4;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar5 * local_7c - param_4 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar7 = fVar4 * param_4 - local_78 * fVar5;
    fVar7 = fVar7 + fVar7;
    param_4 = (fVar3 * fVar8 - fVar7 * fVar4) + fVar6 * fVar2 + param_4;
    local_78 = (fVar5 * fVar7 - fVar6 * fVar3) + fVar8 * fVar2 + local_78;
    local_7c = (fVar4 * fVar6 - fVar8 * fVar5) + fVar2 * fVar7 + local_7c;
  }
  fVar2 = param_6[2];
  fVar3 = param_6[1];
  *(float *)(param_1 + 0x158) = local_7c + *param_6;
  *(float *)(param_1 + 0x15c) = local_78 + fVar3;
  *(float *)(param_1 + 0x160) = param_4 + fVar2;
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e410ae FUN_146e410ae body=626 status=ok
// SIG undefined FUN_146e410ae(void)

void FUN_146e410ae(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_78 [3];
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1[1] + *param_1;
  plVar7 = (longlong *)(param_1 + 0xe);
  FUN_146d8ea16(&local_58,plVar7,param_2);
  local_78[2] = 0;
  uStack_60 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_141087922(local_78 + 2,param_1[0x10],1);
  FUN_144a127d2(local_78,param_1[0x10]);
  plVar5 = (longlong *)(param_1 + 0x12);
  FUN_144a9ff88(plVar5);
  iVar12 = 0;
  if ((longlong)local_50 != 0) {
    plVar13 = local_58 + (longlong)local_50 * 2;
    iVar12 = 0;
    plVar9 = local_58;
    do {
      iVar1 = param_1[0x14];
      uVar4 = iVar1 + 1;
      param_1[0x14] = uVar4;
      if ((uint)param_1[0x15] < uVar4) {
        FUN_1446f48e2(plVar5);
      }
      *(int *)(*plVar5 + (longlong)iVar1 * 4) = iVar12;
      lVar6 = plVar9[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar2 = *plVar9;
        lVar8 = (longlong)iVar12 * 0xc;
        lVar10 = 0;
        do {
          lVar11 = (longlong)*(int *)(lVar2 + lVar10);
          lVar3 = *plVar7;
          *(undefined4 *)(local_78[2] + 8 + lVar8) = *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc);
          *(undefined8 *)(local_78[2] + lVar8) = *(undefined8 *)(lVar3 + lVar11 * 0xc);
          *(int *)(local_78[0] + lVar11 * 4) = iVar12;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 0xc;
          lVar10 = lVar10 + 4;
        } while ((longlong)(int)lVar6 * 4 != lVar10);
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar13);
  }
  iVar1 = param_1[0x14];
  uVar4 = iVar1 + 1;
  param_1[0x14] = uVar4;
  if ((uint)param_1[0x15] < uVar4) {
    FUN_1446f48e2(plVar5);
  }
  *(int *)(*plVar5 + (longlong)iVar1 * 4) = iVar12;
  lVar6 = *plVar7;
  if (plVar7 == local_78 + 2) {
    iVar12 = param_1[0x10];
  }
  else {
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
    lVar6 = local_78[2];
    *(longlong *)(param_1 + 0xe) = local_78[2];
    local_78[2] = 0;
    iVar12 = (int)uStack_60;
    param_1[0x10] = (int)uStack_60;
    param_1[0x11] = uStack_60._4_4_;
    uStack_60 = 0;
  }
  *(longlong *)(param_1 + 6) = lVar6;
  param_1[8] = iVar12;
  FUN_146e41322(param_1 + 0x16,local_78);
  FUN_146e41322(param_1 + 0x2e,local_78);
  FUN_146e41322(param_1 + 0x46,local_78);
  if ((longlong)param_1[0xc] != 0) {
    plVar7 = *(longlong **)(param_1 + 10);
    plVar5 = plVar7 + (longlong)param_1[0xc] * 2;
    do {
      lVar6 = plVar7[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar2 = *plVar7;
        lVar8 = 0;
        do {
          *(undefined4 *)(lVar2 + lVar8) =
               *(undefined4 *)(local_78[0] + (longlong)*(int *)(lVar2 + lVar8) * 4);
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)lVar6 * 4 != lVar8);
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar5);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_58,local_50);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e41322 FUN_146e41322 body=230 status=ok
// SIG undefined FUN_146e41322(void)

void FUN_146e41322(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] == (int)param_2[1]) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a12820(&local_38,(int)param_1[1],1);
    if (0 < (int)param_2[1]) {
      lVar2 = 0;
      do {
        *(undefined4 *)(local_38 + (longlong)*(int *)(*param_2 + lVar2 * 4) * 4) =
             *(undefined4 *)(*param_1 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_2[1]);
    }
    if (&local_38 == param_1) {
      iVar1 = (int)param_1[1];
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      iVar1 = (int)uStack_30;
      *(int *)(param_1 + 1) = (int)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
      uStack_30 = 0;
    }
    if (iVar1 == (int)param_1[2]) {
      lVar2 = *param_1;
    }
    else {
      lVar2 = 0;
      iVar1 = 0;
    }
    param_1[3] = lVar2;
    *(int *)(param_1 + 4) = iVar1;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4140a FUN_146e4140a body=773 status=ok
// SIG undefined FUN_146e4140a(void)

void FUN_146e4140a(int *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_3 == (longlong *)0x0) {
    iVar3 = param_1[0xd];
    FUN_144716727(*(undefined8 *)(param_1 + 10),param_1[0xc]);
    param_1[0xc] = 0;
    if ((iVar3 < 0) && (param_1[0xd] != 0)) {
      FUN_1403b10bc(param_1 + 10,0);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if (param_1[0x11] < 0) {
      param_1[0x10] = 0;
      FUN_1405c2e9e(param_1 + 0xe,0);
    }
    else {
      param_1[0x10] = 0;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    if (param_1[0x55] < 0) {
      param_1[0x54] = 0;
      FUN_140163800(param_1 + 0x52,0);
      return;
    }
    param_1[0x54] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = *(int *)(param_2 + 0x14);
    FUN_146cd456c(param_1 + 10);
    uVar4 = param_1[1];
    iVar3 = param_1[0xc];
    param_1[0xc] = iVar3 + uVar4;
    if ((uint)(param_1[0xd] - iVar3) < uVar4) {
      FUN_140bfc2d4(param_1 + 10);
    }
    memset((void *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 10)),0,
           (longlong)(int)uVar4 << 4);
    FUN_146e41710(param_1 + 0xe,(int)param_3[1]);
    lVar8 = param_3[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar6 = *param_3;
      lVar10 = 0;
      do {
        lVar9 = (longlong)*(int *)(param_2 + 0x10);
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
        fVar2 = *(float *)(lVar7 + (*(int *)(lVar6 + lVar10) + lVar9) * 4);
        if (((((fVar2 != 0.0) || (NAN(fVar2))) ||
             (fVar2 = *(float *)(lVar7 + (*(int *)(lVar6 + 4 + lVar10) + lVar9) * 4), fVar2 != 0.0))
            || ((NAN(fVar2) ||
                (fVar2 = *(float *)(lVar7 + (*(int *)(lVar6 + 8 + lVar10) + lVar9) * 4),
                fVar2 != 0.0)))) || (NAN(fVar2))) {
          iVar3 = param_1[0x10];
          param_1[0x10] = iVar3 + 1U;
          if ((uint)param_1[0x11] < iVar3 + 1U) {
            FUN_141087970(param_1 + 0xe,iVar3);
          }
          piVar1 = (int *)(lVar10 + lVar6);
          lVar7 = *(longlong *)(param_1 + 0xe);
          *(int *)(lVar7 + 8 + (longlong)iVar3 * 0xc) = piVar1[2];
          *(undefined8 *)(lVar7 + (longlong)iVar3 * 0xc) = *(undefined8 *)piVar1;
          lVar7 = *(longlong *)(param_1 + 10);
          lVar9 = ((longlong)*piVar1 - (longlong)*param_1) * 0x10;
          iVar5 = *(int *)(lVar7 + 8 + lVar9);
          *(uint *)(lVar7 + 8 + lVar9) = iVar5 + 1U;
          if (*(uint *)(lVar7 + 0xc + lVar9) < iVar5 + 1U) {
            FUN_1446f48e2((longlong *)(lVar7 + lVar9),iVar5);
          }
          *(int *)(*(longlong *)(lVar7 + lVar9) + (longlong)iVar5 * 4) = iVar3;
          lVar7 = *(longlong *)(param_1 + 10);
          lVar9 = ((longlong)*(int *)(lVar6 + 4 + lVar10) - (longlong)*param_1) * 0x10;
          iVar5 = *(int *)(lVar7 + 8 + lVar9);
          *(uint *)(lVar7 + 8 + lVar9) = iVar5 + 1U;
          if (*(uint *)(lVar7 + 0xc + lVar9) < iVar5 + 1U) {
            FUN_1446f48e2((longlong *)(lVar7 + lVar9),iVar5);
          }
          *(int *)(*(longlong *)(lVar7 + lVar9) + (longlong)iVar5 * 4) = iVar3;
          lVar7 = *(longlong *)(param_1 + 10);
          lVar9 = ((longlong)*(int *)(lVar6 + 8 + lVar10) - (longlong)*param_1) * 0x10;
          iVar5 = *(int *)(lVar7 + 8 + lVar9);
          *(uint *)(lVar7 + 8 + lVar9) = iVar5 + 1U;
          if (*(uint *)(lVar7 + 0xc + lVar9) < iVar5 + 1U) {
            FUN_1446f48e2((longlong *)(lVar7 + lVar9),iVar5);
          }
          *(int *)(*(longlong *)(lVar7 + lVar9) + (longlong)iVar5 * 4) = iVar3;
        }
        lVar10 = lVar10 + 0xc;
      } while ((longlong)(int)lVar8 * 0xc != lVar10);
    }
    FUN_140aacae8(param_1 + 0x52,param_1[0x10],1);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
    param_1[4] = param_1[0xc];
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
    param_1[8] = param_1[0x10];
  }
  return;
}



// FUNCTION 146e41710 FUN_146e41710 body=42 status=ok
// SIG undefined FUN_146e41710(void)

void FUN_146e41710(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1405c2e9e();
    return;
  }
  return;
}



// FUNCTION 146e4173c FUN_146e4173c body=789 status=ok
// SIG undefined FUN_146e4173c(void)

void FUN_146e4173c(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,int param_5,
                  float *param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = (longlong)param_5;
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)*(int *)(lVar5 + 4 + lVar2 * 0xc);
  lVar1 = *param_3;
  lVar4 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
  fVar12 = *(float *)(lVar1 + 8 + lVar4 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc) - fVar12;
  fVar6 = *(float *)(lVar1 + lVar4 * 0xc);
  fVar8 = *(float *)(lVar1 + 4 + lVar4 * 0xc);
  fVar10 = *(float *)(lVar1 + 4 + lVar3 * 0xc) - fVar8;
  fVar11 = *(float *)(lVar1 + lVar3 * 0xc) - fVar6;
  lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar2 * 0xc);
  fVar12 = *(float *)(lVar1 + 8 + lVar5 * 0xc) - fVar12;
  fVar8 = *(float *)(lVar1 + 4 + lVar5 * 0xc) - fVar8;
  fVar6 = *(float *)(lVar1 + lVar5 * 0xc) - fVar6;
  fVar7 = fVar6 * fVar10 - fVar11 * fVar8;
  fVar6 = fVar12 * fVar11 - fVar9 * fVar6;
  fVar12 = fVar8 * fVar9 - fVar12 * fVar10;
  fVar8 = fVar7 * fVar7 + fVar12 * fVar12 + fVar6 * fVar6;
  if (0.0001 <= fVar8) {
    fVar8 = SQRT(fVar8);
    fVar7 = fVar7 / fVar8;
    fVar6 = fVar6 / fVar8;
    fVar12 = fVar12 / fVar8;
  }
  else {
    fVar12 = 1.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  lVar1 = *param_4;
  fVar9 = param_6[2] -
          (*(float *)(lVar1 + 8 + lVar4 * 0xc) + *(float *)(lVar1 + 8 + lVar3 * 0xc) +
          *(float *)(lVar1 + 8 + lVar5 * 0xc)) * 0.33333334;
  fVar13 = *param_6 -
           (*(float *)(lVar1 + lVar4 * 0xc) + *(float *)(lVar1 + lVar3 * 0xc) +
           *(float *)(lVar1 + lVar5 * 0xc)) * 0.33333334;
  fVar11 = param_6[1] -
           (*(float *)(lVar1 + 4 + lVar4 * 0xc) + *(float *)(lVar1 + 4 + lVar3 * 0xc) +
           *(float *)(lVar1 + 4 + lVar5 * 0xc)) * 0.33333334;
  fVar14 = fVar9 * fVar7 + fVar13 * fVar12 + fVar6 * fVar11;
  fVar10 = fVar9 * fVar9 + fVar13 * fVar13 + fVar11 * fVar11;
  if (0.0 <= fVar14) {
    fVar14 = (param_7 - param_9) * fVar14;
    fVar10 = fVar10 * param_9;
    fVar13 = fVar12 * fVar10 + fVar13 * fVar14;
    fVar11 = fVar6 * fVar10 + fVar11 * fVar14;
    fVar9 = fVar10 * fVar7 + fVar9 * fVar14;
  }
  else {
    fVar10 = fVar10 * param_10;
    fVar14 = (param_10 - param_8) * fVar14;
    fVar13 = fVar13 * fVar14 - fVar12 * fVar10;
    fVar11 = fVar11 * fVar14 - fVar6 * fVar10;
    fVar9 = fVar9 * fVar14 - fVar10 * fVar7;
  }
  fVar10 = *(float *)(param_1 + 0x168) * fVar8;
  param_11 = fVar8 * 0.5 * param_11;
  *param_2 = fVar12 * param_11 + fVar13 * fVar10;
  param_2[1] = fVar6 * param_11 + fVar11 * fVar10;
  param_2[2] = fVar7 * param_11 + fVar10 * fVar9;
  return;
}



// FUNCTION 146e41a52 FUN_146e41a52 body=925 status=ok
// SIG undefined FUN_146e41a52(void)

float * FUN_146e41a52(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,
                     int param_5,float *param_6,float param_7,float param_8,float param_9,
                     float param_10,float param_11,float param_12)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = (longlong)param_5;
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)*(int *)(lVar5 + 4 + lVar2 * 0xc);
  lVar1 = *param_3;
  lVar4 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
  fVar13 = *(float *)(lVar1 + 8 + lVar4 * 0xc);
  fVar6 = *(float *)(lVar1 + 8 + lVar3 * 0xc) - fVar13;
  fVar10 = *(float *)(lVar1 + lVar4 * 0xc);
  fVar12 = *(float *)(lVar1 + 4 + lVar4 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar3 * 0xc) - fVar12;
  fVar9 = *(float *)(lVar1 + lVar3 * 0xc) - fVar10;
  lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar2 * 0xc);
  fVar13 = *(float *)(lVar1 + 8 + lVar5 * 0xc) - fVar13;
  fVar12 = *(float *)(lVar1 + 4 + lVar5 * 0xc) - fVar12;
  fVar10 = *(float *)(lVar1 + lVar5 * 0xc) - fVar10;
  fVar11 = fVar10 * fVar7 - fVar9 * fVar12;
  fVar9 = fVar13 * fVar9 - fVar6 * fVar10;
  fVar10 = fVar12 * fVar6 - fVar13 * fVar7;
  fVar13 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  if (0.0001 <= fVar13) {
    fVar13 = SQRT(fVar13);
    fVar11 = fVar11 / fVar13;
    fVar9 = fVar9 / fVar13;
    fVar10 = fVar10 / fVar13;
  }
  else {
    fVar9 = 0.0;
    fVar10 = 1.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
  }
  lVar1 = *param_4;
  fVar6 = param_6[2] -
          (*(float *)(lVar1 + 8 + lVar4 * 0xc) + *(float *)(lVar1 + 8 + lVar3 * 0xc) +
          *(float *)(lVar1 + 8 + lVar5 * 0xc)) * 0.33333334;
  fVar14 = *param_6 -
           (*(float *)(lVar1 + lVar4 * 0xc) + *(float *)(lVar1 + lVar3 * 0xc) +
           *(float *)(lVar1 + lVar5 * 0xc)) * 0.33333334;
  fVar7 = param_6[1] -
          (*(float *)(lVar1 + 4 + lVar4 * 0xc) + *(float *)(lVar1 + 4 + lVar3 * 0xc) +
          *(float *)(lVar1 + 4 + lVar5 * 0xc)) * 0.33333334;
  fVar12 = fVar6 * fVar6 + fVar14 * fVar14 + fVar7 * fVar7;
  if (param_12 < fVar12) {
    param_12 = param_12 / fVar12;
    if (param_12 < 0.0) {
      param_12 = sqrtf(param_12);
    }
    else {
      param_12 = SQRT(param_12);
    }
    fVar14 = fVar14 * param_12;
    fVar7 = fVar7 * param_12;
    fVar6 = fVar6 * param_12;
    fVar12 = fVar6 * fVar6 + fVar14 * fVar14 + fVar7 * fVar7;
  }
  fVar8 = fVar6 * fVar11 + fVar14 * fVar10 + fVar9 * fVar7;
  if (0.0 <= fVar8) {
    fVar8 = (param_7 - param_9) * fVar8;
    fVar12 = fVar12 * param_9;
    fVar14 = fVar10 * fVar12 + fVar14 * fVar8;
    fVar7 = fVar9 * fVar12 + fVar7 * fVar8;
    fVar12 = fVar12 * fVar11 + fVar6 * fVar8;
  }
  else {
    fVar12 = fVar12 * param_10;
    fVar8 = (param_10 - param_8) * fVar8;
    fVar14 = fVar14 * fVar8 - fVar10 * fVar12;
    fVar7 = fVar7 * fVar8 - fVar9 * fVar12;
    fVar12 = fVar6 * fVar8 - fVar12 * fVar11;
  }
  fVar6 = *(float *)(param_1 + 0x168) * fVar13;
  param_11 = fVar13 * 0.5 * param_11;
  *param_2 = fVar10 * param_11 + fVar14 * fVar6;
  param_2[1] = fVar9 * param_11 + fVar7 * fVar6;
  param_2[2] = fVar11 * param_11 + fVar6 * fVar12;
  return param_2;
}



// FUNCTION 146e41df0 FUN_146e41df0 body=210 status=ok
// SIG undefined FUN_146e41df0(void)

/* WARNING: Removing unreachable block (ram,0x000146e41ea0) */
/* WARNING: Removing unreachable block (ram,0x000146e41eaa) */
/* WARNING: Removing unreachable block (ram,0x000146e41eb4) */

undefined8 * FUN_146e41df0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    *param_2 = 0;
  }
  else {
    FUN_146dd2808(*(longlong *)(param_1 + 0x230),&local_30);
    puVar1 = (undefined8 *)FUN_14001cc68(0x240,0x10);
    FUN_146e451f2(puVar1,param_1);
    *puVar1 = &PTR_FUN_149f5ee00;
    puVar1[0x46] = local_30;
    local_30 = 0;
    *param_2 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e41ec4 FUN_146e41ec4 body=211 status=ok
// SIG undefined FUN_146e41ec4(void)

/* WARNING: Removing unreachable block (ram,0x000146e41f75) */
/* WARNING: Removing unreachable block (ram,0x000146e41f7f) */
/* WARNING: Removing unreachable block (ram,0x000146e41f89) */

undefined8 * FUN_146e41ec4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_30);
    puVar2 = (undefined8 *)FUN_14001cc68(0x240,0x10);
    FUN_146e451f2(puVar2,param_1);
    *puVar2 = &PTR_FUN_149f5ee00;
    puVar2[0x46] = local_30;
    local_30 = 0;
    *param_2 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e41f98 FUN_146e41f98 body=102 status=ok
// SIG undefined FUN_146e41f98(void)

void FUN_146e41f98(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  lVar4 = (longlong)*(int *)(lVar1 + 0x90);
  uVar3 = 0;
  if (0 < lVar4) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x88) + lVar5 * 8);
      uVar3 = FUN_144a78877(uVar3,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2);
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  FUN_146e41ffe(param_1,uVar3);
  return;
}



// FUNCTION 146e41ffe FUN_146e41ffe body=211 status=ok
// SIG undefined FUN_146e41ffe(void)

undefined4 FUN_146e41ffe(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x88);
    lVar6 = (longlong)*(int *)(param_1 + 0x90) * 0x4c;
    do {
      uVar4 = FUN_146e475ca(lVar5);
      param_2 = FUN_144a78877(param_2,uVar4);
      lVar5 = lVar5 + 0x4c;
      lVar6 = lVar6 + -0x4c;
    } while (lVar6 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 400);
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar5 + 8 + lVar6);
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      uVar4 = FUN_144a78877((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2,
                            (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3);
      uVar4 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(lVar5 + lVar6) >> 0x20) * 0x17 +
                            (int)*(undefined8 *)(lVar5 + lVar6),uVar4);
      param_2 = FUN_144a78877(param_2,uVar4);
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return param_2;
}



// FUNCTION 146e420d2 FUN_146e420d2 body=1445 status=ok
// SIG undefined FUN_146e420d2(void)

double FUN_146e420d2(longlong param_1,double *param_2,double *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  double *local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  int local_184 [3];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_148 = 0;
  uStack_140 = 0;
  cVar5 = FUN_146e42678(param_1,param_2,&local_148,0);
  if (cVar5 == '\0') {
    *param_4 = 0xffffffff;
    param_4[1] = 0xffffffff;
    param_4[2] = 0xffffffff;
    param_4[3] = 0xffffffff;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    dVar13 = 3.3999999521443642e+38;
  }
  else {
    if ((int)uStack_140 < 1) {
      dVar13 = 1.79769313486232e+308;
      lVar6 = -1;
    }
    else {
      local_1c4 = -1;
      dVar13 = 1.79769313486232e+308;
      lVar6 = 0;
      lVar7 = 0;
      local_1c0 = param_3;
      do {
        uVar1 = *(undefined8 *)(param_1 + 0x230);
        FUN_146df9bd6(local_148 + lVar6,&local_160,param_1 + 0x20);
        dVar9 = (double)FUN_146dd2aa0(uVar1,&local_160,&local_138);
        if (dVar9 < dVar13) {
          unaff_XMM7_Da = SUB84(local_138,0);
          unaff_XMM7_Db = (undefined4)((ulonglong)local_138 >> 0x20);
          unaff_XMM8_Da = SUB84(uStack_130,0);
          unaff_XMM8_Db = (undefined4)((ulonglong)uStack_130 >> 0x20);
          unaff_XMM9_Da = SUB84(local_128,0);
          unaff_XMM9_Db = (undefined4)((ulonglong)local_128 >> 0x20);
          local_1c4 = (int)lVar7;
          dVar13 = dVar9;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (lVar7 < (int)uStack_140);
      lVar6 = (longlong)local_1c4;
      param_3 = local_1c0;
    }
    lVar8 = lVar6 * 0x28 + local_148;
    lVar6 = param_1 + 0x20;
    FUN_146df9bd6(lVar8,&local_160,lVar6);
    local_168 = local_150 - (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) * dVar13;
    local_178 = local_160 - (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) * dVar13;
    local_170 = local_158 - (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) * dVar13;
    FUN_146c9c584(lVar6,local_184);
    local_128 = *(double *)(param_1 + 0x30);
    local_138 = *(double *)(param_1 + 0x20);
    uStack_130 = *(double *)(param_1 + 0x28);
    lVar7 = 0;
    do {
      (&local_138)[lVar7] =
           (double)local_184[lVar7] * *(double *)(param_1 + 0x60 + lVar7 * 8) +
           (double)(&local_138)[lVar7];
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    local_190 = (local_168 - local_128) / *(double *)(param_1 + 0x70);
    local_198 = (local_170 - uStack_130) / *(double *)(param_1 + 0x68);
    local_1a0 = (local_178 - local_138) / *(double *)(param_1 + 0x60);
    if (1.0 <= local_190) {
      local_190 = 1.0;
    }
    if (local_190 <= 0.0) {
      local_190 = 0.0;
    }
    if (1.0 <= local_198) {
      local_198 = 1.0;
    }
    if (local_198 <= 0.0) {
      local_198 = 0.0;
    }
    if (1.0 <= local_1a0) {
      local_1a0 = 1.0;
    }
    if (local_1a0 <= 0.0) {
      local_1a0 = 0.0;
    }
    FUN_146e43cdc(&local_138,local_184);
    *param_4 = (undefined4)local_138;
    param_4[1] = local_138._4_4_;
    param_4[2] = (undefined4)uStack_130;
    param_4[3] = uStack_130._4_4_;
    param_4[4] = (undefined4)local_128;
    param_4[5] = local_128._4_4_;
    param_4[6] = uStack_120;
    param_4[7] = uStack_11c;
    *(double *)(param_4 + 8) = local_118;
    FUN_146e441a6(param_4,&local_1b8,param_1 + 0x180);
    local_1a8 = param_2[2] - local_1a8;
    local_1b0 = param_2[1] - local_1b0;
    local_1b8 = *param_2 - local_1b8;
    *param_3 = local_1b8;
    param_3[1] = local_1b0;
    param_3[2] = local_1a8;
    dVar9 = SQRT(local_1a8 * local_1a8 + local_1b8 * local_1b8 + local_1b0 * local_1b0);
    dVar13 = (double)(-(ulonglong)(dVar13 < 0.0) & (ulonglong)-dVar9 |
                     ~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar9);
    if (dVar9 < 9.99999993922529e-09) {
      FUN_146e4437a(lVar8,&local_138,param_1 + 0x180,lVar6);
      dVar9 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) *
              (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) +
              (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) *
              (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) +
              (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) *
              (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      if (((dVar9 != 1.0) ||
          (dVar3 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da),
          dVar4 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da),
          dVar11 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da), NAN(dVar9))) &&
         (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar3 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) * dVar9;
        dVar4 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) * dVar9;
        dVar11 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) * dVar9;
      }
      dVar9 = local_d8 * 0.0 + dVar3 * local_f8 + dVar4 * local_118 + dVar11 * local_138;
      dVar2 = dStack_d0 * 0.0 + dVar3 * dStack_f0 + dVar4 * dStack_110 + dVar11 * uStack_130;
      dVar10 = 0.0;
      dVar3 = dVar11 * local_128 + dVar4 * local_108 + dVar3 * local_e8 + local_c8 * 0.0;
      dVar12 = dVar3 * dVar3 + dVar9 * dVar9 + dVar2 * dVar2;
      dVar11 = SQRT(dVar12);
      dVar4 = 0.0;
      if (9.999999747378752e-05 <= dVar12) {
        dVar4 = dVar3 / dVar11;
        dVar10 = dVar2 / dVar11;
      }
      *param_3 = (double)(-(ulonglong)(dVar12 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar12 < 9.999999747378752e-05) & (ulonglong)(dVar9 / dVar11)
                         );
      param_3[1] = dVar10;
      param_3[2] = dVar4;
    }
    else {
      dVar9 = 1.0 / dVar13;
      *param_3 = local_1b8 * dVar9;
      param_3[1] = local_1b0 * dVar9;
      param_3[2] = local_1a8 * dVar9;
    }
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar13;
}



// FUNCTION 146e42678 FUN_146e42678 body=5730 status=ok
// SIG undefined FUN_146e42678(void)

ulonglong FUN_146e42678(uint *param_1,double *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  uint **unaff_R14;
  longlong lVar24;
  bool bVar25;
  uint *puVar26;
  double dVar27;
  double dVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStack_2c8 [40];
  uint *local_2a0;
  int local_294;
  uint local_290;
  int local_28c;
  uint *local_288;
  uint *local_280;
  double *local_278;
  uint local_26c;
  longlong *local_268;
  uint *local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  double local_240;
  uint *local_238 [4];
  uint *local_218;
  undefined8 uStack_210;
  uint *local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint *local_1e8;
  int local_1e0;
  uint *local_1d8;
  undefined8 uStack_1d0;
  double local_1c0 [3];
  undefined1 local_1a8 [16];
  uint *local_198;
  double local_190;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  uint *local_158;
  undefined8 uStack_150;
  uint *local_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  uint *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_2a0 = param_1;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_146e7ada6(param_3);
  }
  dVar28 = *param_2;
  if ((dVar28 < *(double *)(local_2a0 + 0x54)) ||
     (*(double *)(local_2a0 + 0x5a) <= dVar28 && dVar28 != *(double *)(local_2a0 + 0x5a))) {
    bVar25 = false;
  }
  else {
    uVar23 = 0;
    do {
      uVar21 = uVar23;
      if (uVar21 == 2) {
        unaff_R14 = &local_1d8;
        FUN_146e4699e(local_2a0 + 0x68,unaff_R14,param_2);
        bVar25 = true;
        if ((longlong)(int)uStack_1d0 != 0) {
          local_288 = local_1d8 + (int)uStack_1d0;
          puVar26 = local_1d8;
          local_278 = param_2;
          local_268 = param_3;
          do {
            uVar16 = local_2a0[0x16];
            iVar15 = (int)*puVar26 / (int)(local_2a0[0x15] * uVar16);
            uVar23 = (longlong)(int)*puVar26 % (longlong)(int)(local_2a0[0x15] * uVar16);
            uVar23 = (ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff;
            uVar21 = (longlong)uVar23 % (longlong)(int)uVar16;
            iVar11 = (int)uVar21;
            unaff_R14 = (uint **)(uVar21 & 0xffffffff);
            iVar22 = (int)((longlong)uVar23 / (longlong)(int)uVar16);
            puVar17 = (undefined4 *)&DAT_14c993f00;
            if ((iVar15 + iVar11 + iVar22 & 1U) == 0) {
              puVar17 = &DAT_14c993e10;
            }
            piVar18 = puVar17 + 0xb;
            lVar24 = 0;
            local_280 = puVar26;
            do {
              uVar16 = local_2a0[0x61];
              uVar12 = local_2a0[0x62];
              lVar14 = *(longlong *)(local_2a0 + 100);
              lVar13 = (longlong)
                       (int)(((piVar18[-2] + iVar15) * uVar16 + piVar18[-1] + iVar22) * uVar12 +
                            *piVar18 + iVar11);
              lVar19 = (longlong)
                       (int)(((piVar18[-5] + iVar15) * uVar16 + piVar18[-4] + iVar22) * uVar12 +
                            piVar18[-3] + iVar11);
              lVar20 = (longlong)
                       (int)(((piVar18[-8] + iVar15) * uVar16 + piVar18[-7] + iVar22) * uVar12 +
                            piVar18[-6] + iVar11);
              lVar9 = (longlong)
                      (int)(((piVar18[-0xb] + iVar15) * uVar16 + piVar18[-10] + iVar22) * uVar12 +
                           piVar18[-9] + iVar11);
              local_148 = *(uint **)(lVar14 + 0x10 + lVar9 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar9 * 0x18);
              local_158 = (uint *)*puVar1;
              uStack_150 = (uint *)puVar1[1];
              puVar1 = (undefined8 *)(lVar14 + lVar20 * 0x18);
              uStack_140 = *puVar1;
              auStack_138._8_8_ = *(undefined8 *)(lVar14 + 0x10 + lVar20 * 0x18);
              auStack_138._0_8_ = puVar1[1];
              local_118 = *(undefined8 *)(lVar14 + 0x10 + lVar19 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar19 * 0x18);
              local_128 = (uint *)*puVar1;
              uStack_120 = puVar1[1];
              local_100 = *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x18);
              local_110 = *puVar1;
              uStack_108 = puVar1[1];
              FUN_146e46c34(&local_158,local_1a8,local_278);
              plVar8 = local_268;
              if ((((0.0 <= (double)local_1a8._0_8_) && (0.0 <= (double)local_1a8._8_8_)) &&
                  (0.0 <= (double)local_198)) &&
                 ((double)local_1a8._0_8_ + (double)local_1a8._8_8_ + (double)local_198 <= 1.0)) {
                iVar5 = (int)local_268[1];
                lVar14 = (longlong)iVar5;
                *(uint *)(local_268 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)local_268 + 0xc) < iVar5 + 1U) {
                  FUN_146e7b0b2(local_268,iVar5);
                }
                lVar13 = *plVar8;
                *(int *)(lVar13 + lVar14 * 0x28) = iVar15;
                *(int *)(lVar13 + 4 + lVar14 * 0x28) = iVar22;
                *(int *)(lVar13 + 8 + lVar14 * 0x28) = iVar11;
                *(int *)(lVar13 + 0xc + lVar14 * 0x28) = (int)lVar24;
                puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar14 * 0x28);
                *puVar1 = local_1a8._0_8_;
                puVar1[1] = local_1a8._8_8_;
                *(uint **)(lVar13 + 0x20 + lVar14 * 0x28) = local_198;
              }
              lVar24 = lVar24 + 1;
              piVar18 = piVar18 + 0xc;
            } while (lVar24 != 5);
            puVar26 = local_280 + 1;
          } while (puVar26 != local_288);
          bVar25 = true;
          param_3 = local_268;
          param_2 = local_278;
        }
        goto LAB_146e42758;
      }
      dVar28 = param_2[uVar21 + 1];
    } while ((*(double *)(local_2a0 + uVar21 * 2 + 0x56) <= dVar28) &&
            (uVar23 = uVar21 + 1,
            dVar28 < *(double *)(local_2a0 + uVar21 * 2 + 0x5c) ||
            dVar28 == *(double *)(local_2a0 + uVar21 * 2 + 0x5c)));
    bVar25 = 1 < uVar21;
  }
  if (param_4 == '\0') {
    uVar23 = 0;
    goto LAB_146e42cf4;
  }
  local_1d8 = (uint *)0x0;
  uStack_1d0 = (uint *)0x0;
LAB_146e42758:
  bVar6 = 0 < (int)param_3[1];
  uVar23 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),bVar6);
  if (param_4 == '\x01' && !bVar6) {
    puVar26 = (uint *)0x0;
    if (!bVar25) {
      dVar28 = param_2[2];
      local_148 = (uint *)(dVar28 - *(double *)(local_2a0 + 0x5e));
      dVar2 = *param_2;
      dVar3 = param_2[1];
      uStack_150 = (uint *)(dVar3 - *(double *)(local_2a0 + 0x5c));
      local_158 = (uint *)(dVar2 - *(double *)(local_2a0 + 0x5a));
      local_198 = (uint *)(*(double *)(local_2a0 + 0x58) - dVar28);
      local_1a8._8_8_ = *(double *)(local_2a0 + 0x56) - dVar3;
      local_1a8._0_8_ = *(double *)(local_2a0 + 0x54) - dVar2;
      if (((*(double *)(local_2a0 + 0x5a) < dVar2) || (*(double *)(local_2a0 + 0x5c) < dVar3)) ||
         ((*(double *)(local_2a0 + 0x5e) < dVar28 ||
          (((dVar2 < *(double *)(local_2a0 + 0x54) || (dVar3 < *(double *)(local_2a0 + 0x56))) ||
           (dVar28 < *(double *)(local_2a0 + 0x58))))))) {
        lVar24 = 0;
        do {
          puVar26 = (&local_158)[lVar24];
          if ((double)puVar26 <= 0.0) {
            puVar26 = (uint *)0x0;
            if (0.0 < *(double *)(local_1a8 + lVar24 * 8)) {
              puVar26 = (uint *)((ulonglong)*(double *)(local_1a8 + lVar24 * 8) ^ 0x8000000000000000
                                );
            }
          }
          (&local_218)[lVar24] = puVar26;
          lVar24 = lVar24 + 1;
        } while (lVar24 != 3);
        dVar28 = (double)local_208 * (double)local_208 +
                 (double)local_218 * (double)local_218 + (double)uStack_210 * (double)uStack_210;
        if (9.999999747378752e-05 <= dVar28) {
          puVar26 = (uint *)SQRT(dVar28);
          local_218 = (uint *)((double)local_218 / (double)puVar26);
          uStack_210 = (uint *)((double)uStack_210 / (double)puVar26);
          local_208 = (uint *)((double)local_208 / (double)puVar26);
          if (9.999999747378752e-05 <= (double)puVar26) goto LAB_146e42779;
        }
        else {
          local_218 = (uint *)&DAT_3ff0000000000000;
          uStack_210 = (uint *)0x0;
          local_208 = (uint *)0x0;
          puVar26 = (uint *)0x0;
        }
        lVar24 = 0;
        do {
          puVar32 = (uint *)0x3ff0000000000000;
          if ((0.0 < (double)(&local_218)[lVar24]) ||
             (puVar32 = (uint *)0xbff0000000000000, (double)(&local_218)[lVar24] < 0.0)) {
            (&local_218)[lVar24] = puVar32;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 3);
      }
      else {
        puVar32 = local_198;
        if ((double)local_198 <= (double)local_148) {
          puVar32 = local_148;
        }
        puVar30 = (uint *)local_1a8._8_8_;
        if ((double)local_1a8._8_8_ <= (double)uStack_150) {
          puVar30 = uStack_150;
        }
        puVar26 = (uint *)local_1a8._0_8_;
        if ((double)local_1a8._0_8_ <= (double)local_158) {
          puVar26 = local_158;
        }
        if ((double)puVar26 <= (double)puVar30) {
          puVar26 = puVar30;
        }
        if ((double)puVar26 <= (double)puVar32) {
          puVar26 = puVar32;
        }
      }
    }
LAB_146e42779:
    if ((longlong)(int)uStack_1d0 == 0) {
      dVar28 = *(double *)(local_2a0 + 0x18);
      uVar33 = SUB84(dVar28,0);
      uVar34 = (undefined4)((ulonglong)dVar28 >> 0x20);
      dVar2 = *(double *)(local_2a0 + 0x1a);
      if (dVar28 <= dVar2) {
        uVar33 = SUB84(dVar2,0);
        uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar28 = *(double *)(local_2a0 + 0x1c);
      if ((double)CONCAT44(uVar34,uVar33) <= dVar28) {
        uVar33 = SUB84(dVar28,0);
        uVar34 = (undefined4)((ulonglong)dVar28 >> 0x20);
      }
      dVar28 = (double)CONCAT44(uVar34,uVar33);
      puVar32 = local_2a0 + 0x68;
      uVar16 = 0;
      do {
        dVar28 = dVar28 + dVar28;
        dVar2 = (double)puVar26 + dVar28;
        local_158 = (uint *)(*param_2 - dVar2);
        uStack_150 = (uint *)(param_2[1] - dVar2);
        puVar30 = (uint *)(dVar2 + param_2[2]);
        puVar31 = (uint *)(param_2[2] - dVar2);
        local_1a8._8_8_ = local_238;
        local_1a8._0_8_ = &LAB_146e7b146;
        uStack_140 = 0;
        auStack_138._8_8_ = dVar2 + param_2[1];
        auStack_138._0_8_ = dVar2 + *param_2;
        uStack_120 = 0;
        local_148 = puVar31;
        local_128 = puVar30;
        puVar29 = (uint *)FUN_146e2788e(puVar32,&local_218,&local_158,local_1a8);
        if (local_1d8 != (uint *)0x0) {
          puVar29 = (uint *)FUN_1400020a8();
        }
        local_1d8 = local_218;
        uStack_1d0 = uStack_210;
        uVar12 = uVar16 + 1;
        bVar25 = uVar16 < 4;
        uVar16 = uVar12;
      } while ((int)uStack_210 == 0 && bVar25);
      uVar23 = CONCAT71((int7)((ulonglong)local_1a8 >> 8),(int)uStack_210 == 0 && uVar12 == 5);
      puVar26 = local_2a0;
      if ((int)uStack_210 == 0 && uVar12 == 5) {
        uVar16 = local_2a0[0x15] * local_2a0[0x14] * local_2a0[0x16];
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar16);
        }
        if (uStack_210._4_4_ < (int)uVar16) {
          puVar29 = (uint *)FUN_14481578e(&local_1d8,uVar16);
        }
        puVar26 = local_2a0;
        if (uVar16 != 0) {
          uVar21 = 0;
          do {
            puVar32 = uStack_1d0;
            if (*(char *)(*(longlong *)(puVar26 + 0x4c) + uVar21) == '\0') {
              lVar24 = (longlong)(int)uStack_1d0;
              uVar12 = (int)uStack_1d0 + 1;
              uStack_1d0 = (uint *)CONCAT44(uStack_1d0._4_4_,uVar12);
              if (uStack_1d0._4_4_ < uVar12) {
                puVar29 = (uint *)FUN_1446f48e2(&local_1d8,(ulonglong)puVar32 & 0xffffffff);
                puVar26 = local_2a0;
              }
              local_1d8[lVar24] = (uint)uVar21;
            }
            uVar21 = uVar21 + 1;
          } while (uVar16 != uVar21);
        }
      }
      local_240 = dVar2;
      if ((longlong)(int)uStack_1d0 != 0) {
        local_26c = (uint)uVar23;
        local_248 = local_1d8 + (int)uStack_1d0;
        goto LAB_146e427ba;
      }
      puVar32 = (uint *)0x7fefffffffffffff;
      iVar15 = -1;
      uVar21 = 0xffffffff;
      iVar11 = -1;
      uVar33 = 0xffffffff;
    }
    else {
      local_248 = local_1d8 + (int)uStack_1d0;
      local_240 = 0.0;
      local_26c = 0;
      puVar26 = local_2a0;
LAB_146e427ba:
      uVar35 = SUB84(param_2[2],0);
      uVar36 = (undefined4)((ulonglong)param_2[2] >> 0x20);
      uVar33 = SUB84(*param_2,0);
      uVar34 = (undefined4)((ulonglong)*param_2 >> 0x20);
      uVar37 = SUB84(param_2[1],0);
      uVar38 = (undefined4)((ulonglong)param_2[1] >> 0x20);
      local_288 = (uint *)CONCAT44(local_288._4_4_,0xffffffff);
      puVar32 = (uint *)0x7fefffffffffffff;
      local_294 = -1;
      local_290 = 0xffffffff;
      local_28c = -1;
      puVar30 = local_1d8;
      do {
        uVar16 = puVar26[0x16];
        iVar15 = (int)*puVar30 / (int)(puVar26[0x15] * uVar16);
        uVar23 = (longlong)(int)*puVar30 % (longlong)(int)(puVar26[0x15] * uVar16);
        uVar23 = (ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff;
        uVar12 = (uint)((longlong)uVar23 / (longlong)(int)uVar16);
        iVar11 = (int)((longlong)uVar23 % (longlong)(int)uVar16);
        uStack_150 = (uint *)CONCAT44(uVar12,iVar15);
        local_148 = (uint *)CONCAT44(local_148._4_4_,iVar11);
        local_280 = puVar32;
        local_158 = puVar26;
        FUN_146e46ddc(&local_158,local_1a8);
        local_148 = (uint *)((double)CONCAT44(uVar36,uVar35) -
                            (double)CONCAT44(uStack_17c,local_180));
        uStack_150 = (uint *)((double)CONCAT44(uVar38,uVar37) - local_188);
        local_158 = (uint *)((double)CONCAT44(uVar34,uVar33) - local_190);
        local_208 = (uint *)((double)local_198 - (double)CONCAT44(uVar36,uVar35));
        uStack_210 = (uint *)((double)local_1a8._8_8_ - (double)CONCAT44(uVar38,uVar37));
        local_218 = (uint *)((double)local_1a8._0_8_ - (double)CONCAT44(uVar34,uVar33));
        if (((local_190 < (double)CONCAT44(uVar34,uVar33)) ||
            (local_188 < (double)CONCAT44(uVar38,uVar37))) ||
           (((double)CONCAT44(uStack_17c,local_180) < (double)CONCAT44(uVar36,uVar35) ||
            ((((double)CONCAT44(uVar34,uVar33) < (double)local_1a8._0_8_ ||
              ((double)CONCAT44(uVar38,uVar37) < (double)local_1a8._8_8_)) ||
             ((double)CONCAT44(uVar36,uVar35) < (double)local_198)))))) {
          lVar24 = 0;
          do {
            puVar26 = (&local_158)[lVar24];
            if ((double)puVar26 <= 0.0) {
              puVar26 = (uint *)0x0;
              if (0.0 < (double)(&local_218)[lVar24]) {
                puVar26 = (uint *)((ulonglong)(&local_218)[lVar24] ^ 0x8000000000000000);
              }
            }
            local_238[lVar24] = puVar26;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 3);
          dVar28 = (double)local_238[2] * (double)local_238[2] +
                   (double)local_238[0] * (double)local_238[0] +
                   (double)local_238[1] * (double)local_238[1];
          if (9.999999747378752e-05 <= dVar28) {
            puVar26 = (uint *)SQRT(dVar28);
            local_238[0] = (uint *)((double)local_238[0] / (double)puVar26);
            local_238[1] = (uint *)((double)local_238[1] / (double)puVar26);
            local_238[2] = (uint *)((double)local_238[2] / (double)puVar26);
            if (9.999999747378752e-05 <= (double)puVar26) goto LAB_146e42a66;
          }
          else {
            local_238[0] = (uint *)&DAT_3ff0000000000000;
            local_238[1] = (uint *)0x0;
            local_238[2] = (uint *)0x0;
            puVar26 = (uint *)0x0;
          }
          lVar24 = 0;
          do {
            puVar32 = (uint *)0x3ff0000000000000;
            if ((0.0 < (double)local_238[lVar24]) ||
               (puVar32 = (uint *)0xbff0000000000000, (double)local_238[lVar24] < 0.0)) {
              local_238[lVar24] = puVar32;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != 3);
        }
        else {
          puVar32 = local_208;
          if ((double)local_208 <= (double)local_148) {
            puVar32 = local_148;
          }
          puVar31 = uStack_210;
          if ((double)uStack_210 <= (double)uStack_150) {
            puVar31 = uStack_150;
          }
          puVar26 = local_218;
          if ((double)local_218 <= (double)local_158) {
            puVar26 = local_158;
          }
          if ((double)puVar26 <= (double)puVar31) {
            puVar26 = puVar31;
          }
          if ((double)puVar26 <= (double)puVar32) {
            puVar26 = puVar32;
          }
        }
LAB_146e42a66:
        puVar32 = local_280;
        if ((double)puVar26 * (double)puVar26 <= (double)local_280) {
          puVar17 = (undefined4 *)&DAT_14c993f00;
          if ((uVar12 + iVar15 + iVar11 & 1) == 0) {
            puVar17 = &DAT_14c993e10;
          }
          piVar18 = puVar17 + 0xb;
          lVar24 = 0;
          do {
            uVar16 = local_2a0[0x61];
            uVar4 = local_2a0[0x62];
            lVar14 = *(longlong *)(local_2a0 + 100);
            lVar13 = (longlong)
                     (int)(((piVar18[-0xb] + iVar15) * uVar16 + piVar18[-10] + uVar12) * uVar4 +
                          piVar18[-9] + iVar11);
            local_148 = *(uint **)(lVar14 + 0x10 + lVar13 * 0x18);
            lVar19 = (longlong)
                     (int)(((piVar18[-8] + iVar15) * uVar16 + piVar18[-7] + uVar12) * uVar4 +
                          piVar18[-6] + iVar11);
            puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x18);
            local_158 = (uint *)*puVar1;
            uStack_150 = (uint *)puVar1[1];
            lVar9 = (longlong)
                    (int)(((piVar18[-5] + iVar15) * uVar16 + piVar18[-4] + uVar12) * uVar4 +
                         piVar18[-3] + iVar11);
            puVar1 = (undefined8 *)(lVar14 + lVar19 * 0x18);
            uStack_140 = *puVar1;
            auStack_138._8_8_ = *(undefined8 *)(lVar14 + 0x10 + lVar19 * 0x18);
            auStack_138._0_8_ = puVar1[1];
            local_118 = *(undefined8 *)(lVar14 + 0x10 + lVar9 * 0x18);
            lVar13 = (longlong)
                     (int)(((piVar18[-2] + iVar15) * uVar16 + piVar18[-1] + uVar12) * uVar4 +
                          *piVar18 + iVar11);
            puVar1 = (undefined8 *)(lVar14 + lVar9 * 0x18);
            local_128 = (uint *)*puVar1;
            uStack_120 = puVar1[1];
            local_100 = *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18);
            puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x18);
            local_110 = *puVar1;
            uStack_108 = puVar1[1];
            local_218 = (uint *)0x0;
            uStack_210 = (uint *)0x0;
            local_208 = (uint *)0x0;
            local_200 = 1.0;
            FUN_146e46f10(&local_158,local_238,param_2,&local_218);
            dVar28 = *param_2;
            uVar33 = SUB84(dVar28,0);
            uVar34 = (undefined4)((ulonglong)dVar28 >> 0x20);
            dVar2 = param_2[1];
            uVar37 = SUB84(dVar2,0);
            uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = param_2[2];
            uVar35 = SUB84(dVar3,0);
            uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
            puVar26 = (uint *)((dVar3 - (double)local_238[2]) * (dVar3 - (double)local_238[2]) +
                              (dVar2 - (double)local_238[1]) * (dVar2 - (double)local_238[1]) +
                              (dVar28 - (double)local_238[0]) * (dVar28 - (double)local_238[0]));
            if ((double)puVar26 < (double)puVar32) {
              local_250 = local_208;
              local_258 = local_218;
              local_260 = uStack_210;
              local_288 = (uint *)CONCAT44(local_288._4_4_,(int)lVar24);
              puVar32 = puVar26;
              local_294 = iVar11;
              local_290 = uVar12;
              local_28c = iVar15;
            }
            lVar24 = lVar24 + 1;
            piVar18 = piVar18 + 0xc;
          } while (lVar24 != 5);
        }
        puVar30 = puVar30 + 1;
        puVar26 = local_2a0;
      } while (puVar30 != local_248);
      uVar21 = (ulonglong)local_290;
      uVar23 = (ulonglong)local_26c;
      puVar30 = local_258;
      puVar31 = local_260;
      uVar33 = local_288._0_4_;
      iVar15 = local_28c;
      iVar11 = local_294;
      puVar29 = local_250;
    }
    if (((char)uVar23 == '\0') && (local_240 * local_240 < (double)puVar32)) {
      dVar28 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      local_260 = puVar31;
      local_258 = puVar30;
      local_250 = puVar29;
      if ((double)puVar32 < 0.0) {
        dVar27 = sqrt((double)puVar32);
        puVar26 = local_2a0;
      }
      else {
        dVar27 = SQRT((double)puVar32);
      }
      local_290 = (uint)uVar21;
      local_288 = (uint *)CONCAT44(local_288._4_4_,uVar33);
      local_158 = (uint *)(dVar28 - dVar27);
      uStack_150 = (uint *)(dVar2 - dVar27);
      local_148 = (uint *)(dVar3 - dVar27);
      dVar2 = dVar2 + dVar27;
      local_128 = (uint *)(dVar3 + dVar27);
      local_1a8._8_8_ = &local_218;
      local_1a8._0_8_ = &LAB_146e7b146;
      uStack_140 = 0;
      auStack_138._8_4_ = SUB84(dVar2,0);
      auStack_138._0_8_ = dVar28 + dVar27;
      auStack_138._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uStack_120 = 0;
      local_294 = iVar11;
      local_28c = iVar15;
      FUN_146e2788e(puVar26 + 0x68,&local_1e8,&local_158,local_1a8);
      local_188 = 0.0;
      local_180 = 0;
      local_1a8 = (undefined1  [16])0x0;
      uStack_17c = 0x80;
      uStack_178 = 0xffffffff;
      local_174 = 0;
      local_168 = (undefined1 *)0x0;
      local_160 = 0;
      local_158 = local_1d8;
      uStack_150 = (uint *)CONCAT44(uStack_150._4_4_,(int)uStack_1d0);
      FUN_146bc855c(local_1a8,&local_158);
      if ((longlong)local_1e0 != 0) {
        puVar26 = local_1e8 + local_1e0;
        puVar30 = local_2a0;
        puVar31 = local_1e8;
        local_278 = param_2;
        local_268 = param_3;
        local_248 = puVar26;
        do {
          uVar16 = *puVar31;
          if (local_1a8._8_4_ != local_174) {
            puVar10 = local_168;
            if (local_168 == (undefined1 *)0x0) {
              puVar10 = local_170;
            }
            iVar11 = *(int *)(puVar10 + (ulonglong)(local_160 - 1U & uVar16) * 4);
            if (iVar11 != -1) {
              do {
                if (*(uint *)(local_1a8._0_8_ + (longlong)iVar11 * 0xc) == uVar16)
                goto LAB_146e43c0b;
                iVar11 = *(int *)(local_1a8._0_8_ + (longlong)iVar11 * 0xc + 4);
              } while (iVar11 != -1);
            }
          }
          uVar12 = puVar30[0x16];
          iVar15 = (int)uVar16 / (int)(puVar30[0x15] * uVar12);
          uVar23 = (longlong)(int)uVar16 % (longlong)(int)(puVar30[0x15] * uVar12);
          uVar23 = (ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff;
          uVar16 = (uint)((longlong)uVar23 / (longlong)(int)uVar12);
          iVar11 = (int)((longlong)uVar23 % (longlong)(int)uVar12);
          uStack_150 = (uint *)CONCAT44(uVar16,iVar15);
          local_148 = (uint *)CONCAT44(local_148._4_4_,iVar11);
          local_280 = puVar32;
          local_158 = puVar30;
          FUN_146e46ddc(&local_158,&local_218);
          dVar28 = param_2[2];
          local_148 = (uint *)(dVar28 - local_1f0);
          dVar2 = *param_2;
          dVar3 = param_2[1];
          uStack_150 = (uint *)(dVar3 - local_1f8);
          local_158 = (uint *)(dVar2 - local_200);
          local_238[2] = (uint *)((double)local_208 - dVar28);
          local_238[1] = (uint *)((double)uStack_210 - dVar3);
          local_238[0] = (uint *)((double)local_218 - dVar2);
          if (((((local_200 < dVar2) || (local_1f8 < dVar3)) || (local_1f0 < dVar28)) ||
              ((dVar2 < (double)local_218 || (dVar3 < (double)uStack_210)))) ||
             (dVar28 < (double)local_208)) {
            lVar24 = 0;
            do {
              puVar26 = (&local_158)[lVar24];
              if ((double)puVar26 <= 0.0) {
                puVar26 = (uint *)0x0;
                if (0.0 < (double)local_238[lVar24]) {
                  puVar26 = (uint *)((ulonglong)local_238[lVar24] ^ 0x8000000000000000);
                }
              }
              local_1c0[lVar24] = (double)puVar26;
              lVar24 = lVar24 + 1;
            } while (lVar24 != 3);
            dVar28 = local_1c0[2] * local_1c0[2] +
                     local_1c0[0] * local_1c0[0] + local_1c0[1] * local_1c0[1];
            if (9.999999747378752e-05 <= dVar28) {
              puVar29 = (uint *)SQRT(dVar28);
              local_1c0[0] = local_1c0[0] / (double)puVar29;
              local_1c0[1] = local_1c0[1] / (double)puVar29;
              local_1c0[2] = local_1c0[2] / (double)puVar29;
              if (9.999999747378752e-05 <= (double)puVar29) goto LAB_146e439da;
            }
            else {
              local_1c0[0] = 1.0;
              local_1c0[1] = 0.0;
              local_1c0[2] = 0.0;
              puVar29 = (uint *)0x0;
            }
            lVar24 = 0;
            do {
              dVar28 = 1.0;
              if ((0.0 < local_1c0[lVar24]) || (dVar28 = -1.0, local_1c0[lVar24] < 0.0)) {
                local_1c0[lVar24] = dVar28;
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 != 3);
          }
          else {
            puVar26 = local_238[2];
            if ((double)local_238[2] <= (double)local_148) {
              puVar26 = local_148;
            }
            puVar32 = local_238[1];
            if ((double)local_238[1] <= (double)uStack_150) {
              puVar32 = uStack_150;
            }
            puVar29 = local_238[0];
            if ((double)local_238[0] <= (double)local_158) {
              puVar29 = local_158;
            }
            if ((double)puVar29 <= (double)puVar32) {
              puVar29 = puVar32;
            }
            if ((double)puVar29 <= (double)puVar26) {
              puVar29 = puVar26;
            }
          }
LAB_146e439da:
          puVar26 = local_248;
          param_2 = local_278;
          puVar30 = local_2a0;
          puVar32 = local_280;
          if ((double)puVar29 * (double)puVar29 <= (double)local_280) {
            puVar17 = (undefined4 *)&DAT_14c993f00;
            if ((uVar16 + iVar15 + iVar11 & 1) == 0) {
              puVar17 = &DAT_14c993e10;
            }
            piVar18 = puVar17 + 0xb;
            lVar24 = 0;
            do {
              pdVar7 = local_278;
              uVar12 = local_2a0[0x61];
              uVar4 = local_2a0[0x62];
              lVar14 = *(longlong *)(local_2a0 + 100);
              lVar13 = (longlong)
                       (int)(((piVar18[-2] + iVar15) * uVar12 + piVar18[-1] + uVar16) * uVar4 +
                            *piVar18 + iVar11);
              lVar19 = (longlong)
                       (int)(((piVar18[-5] + iVar15) * uVar12 + piVar18[-4] + uVar16) * uVar4 +
                            piVar18[-3] + iVar11);
              lVar20 = (longlong)
                       (int)(((piVar18[-8] + iVar15) * uVar12 + piVar18[-7] + uVar16) * uVar4 +
                            piVar18[-6] + iVar11);
              lVar9 = (longlong)
                      (int)(((piVar18[-0xb] + iVar15) * uVar12 + piVar18[-10] + uVar16) * uVar4 +
                           piVar18[-9] + iVar11);
              local_148 = *(uint **)(lVar14 + 0x10 + lVar9 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar9 * 0x18);
              local_158 = (uint *)*puVar1;
              uStack_150 = (uint *)puVar1[1];
              puVar1 = (undefined8 *)(lVar14 + lVar20 * 0x18);
              uStack_140 = *puVar1;
              auStack_138._8_8_ = *(undefined8 *)(lVar14 + 0x10 + lVar20 * 0x18);
              auStack_138._0_8_ = puVar1[1];
              local_118 = *(undefined8 *)(lVar14 + 0x10 + lVar19 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar19 * 0x18);
              local_128 = (uint *)*puVar1;
              uStack_120 = puVar1[1];
              local_100 = *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18);
              puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x18);
              local_110 = *puVar1;
              uStack_108 = puVar1[1];
              local_238[0] = (uint *)0x0;
              local_238[1] = (uint *)0x0;
              local_238[2] = (uint *)0x0;
              FUN_146e46f10(&local_158,local_1c0,local_278,local_238);
              puVar26 = (uint *)((pdVar7[2] - local_1c0[2]) * (pdVar7[2] - local_1c0[2]) +
                                (pdVar7[1] - local_1c0[1]) * (pdVar7[1] - local_1c0[1]) +
                                (*pdVar7 - local_1c0[0]) * (*pdVar7 - local_1c0[0]));
              if ((double)puVar26 < (double)puVar32) {
                local_250 = local_238[2];
                local_258 = local_238[0];
                local_260 = local_238[1];
                local_288 = (uint *)CONCAT44(local_288._4_4_,(int)lVar24);
                puVar32 = puVar26;
                local_294 = iVar11;
                local_290 = uVar16;
                local_28c = iVar15;
              }
              lVar24 = lVar24 + 1;
              piVar18 = piVar18 + 0xc;
              param_3 = local_268;
              puVar26 = local_248;
              param_2 = local_278;
              puVar30 = local_2a0;
            } while (lVar24 != 5);
          }
LAB_146e43c0b:
          puVar31 = puVar31 + 1;
        } while (puVar31 != puVar26);
      }
      local_160 = 0;
      if (local_168 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_1a8);
      iVar15 = local_28c;
      iVar11 = local_294;
      uVar33 = local_288._0_4_;
      uVar21 = (ulonglong)local_290;
      puVar30 = local_258;
      puVar31 = local_260;
      puVar29 = local_250;
      if (local_1e8 != (uint *)0x0) {
        FUN_1400020a8();
        puVar30 = local_258;
        puVar31 = local_260;
        puVar29 = local_250;
      }
    }
    iVar22 = (int)param_3[1];
    lVar24 = (longlong)iVar22;
    *(uint *)(param_3 + 1) = iVar22 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar22 + 1U) {
      FUN_146e7b0b2(param_3,iVar22);
    }
    lVar14 = *param_3;
    *(int *)(lVar14 + lVar24 * 0x28) = iVar15;
    *(int *)(lVar14 + 4 + lVar24 * 0x28) = (int)uVar21;
    *(int *)(lVar14 + 8 + lVar24 * 0x28) = iVar11;
    *(undefined4 *)(lVar14 + 0xc + lVar24 * 0x28) = uVar33;
    *(uint **)(lVar14 + 0x10 + lVar24 * 0x28) = puVar30;
    *(uint **)(lVar14 + 0x18 + lVar24 * 0x28) = puVar31;
    *(uint **)(lVar14 + 0x20 + lVar24 * 0x28) = puVar29;
    uVar23 = CONCAT71((int7)(uVar21 >> 8),1);
  }
  if (local_1d8 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_146e42cf4:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 146e43cdc FUN_146e43cdc body=1225 status=ok
// SIG undefined FUN_146e43cdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146e43cdc(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar3 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 1) = iVar3;
  uVar5 = *param_2;
  *param_1 = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  dVar11 = param_3[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (((int)uVar5 + *(int *)((longlong)param_1 + 4) + iVar3 & 1U) != 0) {
    if ((iVar4 < DAT_14c996260) && (FUN_144b3d300(&DAT_14c996260), DAT_14c996260 == -1)) {
      DAT_14c9961e0 = -1.0;
      DAT_14c9961e8 = -1.0;
      DAT_14c9961f0 = -1.0;
      DAT_14c9961f8 = 1.0;
      DAT_14c996200 = -1.0;
      DAT_14c996208 = 1.0;
      DAT_14c996210 = 1.0;
      DAT_14c996218 = -1.0;
      DAT_14c996220 = 1.0;
      DAT_14c996228 = -1.0;
      DAT_14c996230 = 1.0;
      _DAT_14c996238 = -1.0;
      _DAT_14c996240 = 0x3ff0000000000000;
      _DAT_14c996248 = 0x3ff0000000000000;
      _DAT_14c996250 = 0xbff0000000000000;
      _DAT_14c996258 = 0xbff0000000000000;
      _Init_thread_footer(&DAT_14c996260);
    }
    pdVar7 = &DAT_14c9961f8;
    uVar6 = 0;
LAB_146e43e60:
    dVar8 = pdVar7[-1] * dVar11 + pdVar7[-3] * dVar1 + pdVar7[-2] * dVar2 + *pdVar7;
    if (dVar8 < 0.0) goto code_r0x000146e43e92;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
    switch(uVar6 & 0xffffffff) {
    case 0:
      dVar11 = dVar1;
switchD_146e43f9a_caseD_2:
      dVar9 = dVar2;
      break;
    case 1:
LAB_146e4401a:
      dVar11 = 1.0 - dVar11;
      dVar9 = dVar1;
      break;
    case 2:
      dVar9 = 1.0 - dVar11;
      dVar11 = dVar2;
      break;
    case 3:
      dVar9 = 1.0 - dVar2;
      dVar11 = 1.0 - dVar1;
      break;
    case 4:
      goto switchD_146e43fc3_caseD_4;
    default:
      goto switchD_146e43f9a_default;
    }
    goto LAB_146e43f5a;
  }
  if ((iVar4 < DAT_14c9961d0) && (FUN_144b3d300(&DAT_14c9961d0), DAT_14c9961d0 == -1)) {
    DAT_14c996150 = 0xbff0000000000000;
    DAT_14c996158 = 0x3ff0000000000000;
    DAT_14c996160 = 0xbff0000000000000;
    DAT_14c996168 = 0;
    DAT_14c996170 = 1.0;
    DAT_14c996178 = 1.0;
    DAT_14c996180 = 1.0;
    DAT_14c996188 = -2.0;
    DAT_14c996190 = 1.0;
    DAT_14c996198 = -1.0;
    DAT_14c9961a0 = -1.0;
    _DAT_14c9961a8 = 0.0;
    _DAT_14c9961b0 = -1.0;
    _DAT_14c9961b8 = -1.0;
    _DAT_14c9961c0 = 1.0;
    _DAT_14c9961c8 = 0.0;
    _Init_thread_footer(&DAT_14c9961d0);
  }
  pdVar7 = (double *)&DAT_14c996168;
  uVar6 = 0;
  do {
    dVar8 = pdVar7[-1] * dVar11 + pdVar7[-3] * dVar1 + pdVar7[-2] * dVar2 + *pdVar7;
    if (0.0 <= dVar8) {
      *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
      switch(uVar6 & 0xffffffff) {
      case 0:
        dVar11 = 1.0 - dVar2;
        dVar9 = dVar1;
        goto LAB_146e43f5a;
      case 1:
        dVar1 = 1.0 - dVar2;
        goto LAB_146e4401a;
      case 2:
        break;
      case 3:
        dVar11 = 1.0 - dVar11;
        break;
      case 4:
        goto switchD_146e43f9a_caseD_4;
      default:
        goto switchD_146e43f9a_default;
      }
      goto switchD_146e43f9a_caseD_2;
    }
    uVar6 = uVar6 + 1;
    pdVar7 = pdVar7 + 4;
  } while (uVar6 != 4);
  *(undefined4 *)((longlong)param_1 + 0xc) = 4;
switchD_146e43f9a_caseD_4:
  dVar9 = DAT_14c996180 * dVar11 + DAT_14c996170 * dVar1 + DAT_14c996178 * dVar2 + DAT_14c996188;
  dVar10 = DAT_14c9961a0 * dVar11 + DAT_14c996190 * dVar1 + DAT_14c996198 * dVar2 + _DAT_14c9961a8;
  dVar8 = dVar11 * _DAT_14c9961c0 + dVar1 * _DAT_14c9961b0 + dVar2 * _DAT_14c9961b8 + _DAT_14c9961c8
  ;
LAB_146e43f4a:
  dVar11 = dVar10 * -0.5;
  dVar9 = dVar9 * -0.5;
  dVar8 = dVar8 * -0.5;
LAB_146e43f5a:
  param_1[2] = dVar8;
  param_1[3] = dVar11;
  param_1[4] = dVar9;
switchD_146e43f9a_default:
  return param_1;
code_r0x000146e43e92:
  uVar6 = uVar6 + 1;
  pdVar7 = pdVar7 + 4;
  if (uVar6 == 4) goto code_r0x000146e43e9f;
  goto LAB_146e43e60;
code_r0x000146e43e9f:
  *(undefined4 *)((longlong)param_1 + 0xc) = 4;
switchD_146e43fc3_caseD_4:
  dVar9 = DAT_14c996230 * dVar11 + DAT_14c996220 * dVar1 + DAT_14c996228 * dVar2 + _DAT_14c996238;
  dVar10 = DAT_14c9961f0 * dVar11 + DAT_14c9961e0 * dVar1 + DAT_14c9961e8 * dVar2 + DAT_14c9961f8;
  dVar8 = dVar11 * DAT_14c996210 + dVar1 * DAT_14c996200 + dVar2 * DAT_14c996208 + DAT_14c996218;
  goto LAB_146e43f4a;
}



// FUNCTION 146e441a6 FUN_146e441a6 body=467 status=ok
// SIG undefined FUN_146e441a6(void)

void FUN_146e441a6(int *param_1,double *param_2,longlong param_3)

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
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  
  iVar12 = *param_1;
  iVar13 = param_1[1];
  iVar14 = param_1[2];
  lVar18 = (longlong)param_1[3];
  puVar19 = (undefined4 *)&DAT_14c993f00;
  if ((iVar13 + iVar12 + iVar14 & 1U) == 0) {
    puVar19 = &DAT_14c993e10;
  }
  iVar15 = *(int *)(param_3 + 4);
  iVar16 = *(int *)(param_3 + 8);
  lVar17 = *(longlong *)(param_3 + 0x10);
  lVar20 = (longlong)
           (((puVar19[lVar18 * 0xc] + iVar12) * iVar15 + puVar19[lVar18 * 0xc + 1] + iVar13) *
            iVar16 + puVar19[lVar18 * 0xc + 2] + iVar14);
  dVar1 = *(double *)(param_1 + 4);
  dVar2 = *(double *)(lVar17 + 8 + lVar20 * 0x18);
  dVar3 = *(double *)(lVar17 + 0x10 + lVar20 * 0x18);
  lVar21 = (longlong)
           (((puVar19[lVar18 * 0xc + 3] + iVar12) * iVar15 + puVar19[lVar18 * 0xc + 4] + iVar13) *
            iVar16 + puVar19[lVar18 * 0xc + 5] + iVar14);
  dVar4 = *(double *)(param_1 + 6);
  dVar5 = *(double *)(lVar17 + 8 + lVar21 * 0x18);
  dVar6 = *(double *)(lVar17 + 0x10 + lVar21 * 0x18);
  lVar22 = (longlong)
           (((puVar19[lVar18 * 0xc + 6] + iVar12) * iVar15 + puVar19[lVar18 * 0xc + 7] + iVar13) *
            iVar16 + puVar19[lVar18 * 0xc + 8] + iVar14);
  dVar7 = *(double *)(param_1 + 8);
  dVar8 = *(double *)(lVar17 + 8 + lVar22 * 0x18);
  dVar9 = *(double *)(lVar17 + 0x10 + lVar22 * 0x18);
  lVar18 = (longlong)
           (((iVar12 + puVar19[lVar18 * 0xc + 9]) * iVar15 + iVar13 + puVar19[lVar18 * 0xc + 10]) *
            iVar16 + iVar14 + puVar19[lVar18 * 0xc + 0xb]);
  dVar23 = ((1.0 - dVar1) - dVar4) - dVar7;
  dVar10 = *(double *)(lVar17 + 8 + lVar18 * 0x18);
  dVar11 = *(double *)(lVar17 + 0x10 + lVar18 * 0x18);
  *param_2 = *(double *)(lVar17 + lVar18 * 0x18) * dVar23 +
             *(double *)(lVar17 + lVar22 * 0x18) * dVar7 +
             *(double *)(lVar17 + lVar21 * 0x18) * dVar4 +
             *(double *)(lVar17 + lVar20 * 0x18) * dVar1;
  param_2[1] = dVar10 * dVar23 + dVar8 * dVar7 + dVar5 * dVar4 + dVar2 * dVar1;
  param_2[2] = dVar23 * dVar11 + dVar9 * dVar7 + dVar6 * dVar4 + dVar3 * dVar1;
  return;
}



// FUNCTION 146e4437a FUN_146e4437a body=3338 status=ok
// SIG undefined FUN_146e4437a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146e4437a(int *param_1,double *param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong lVar22;
  double *pdVar23;
  undefined4 *puVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1b8 [40];
  double local_190;
  undefined1 local_188 [16];
  double *local_178;
  int local_170;
  int local_16c;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  int local_134 [3];
  double local_128 [3];
  int *local_110;
  undefined4 *local_108;
  double *local_100;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar6 = *param_1;
  iVar7 = param_1[1];
  iVar8 = param_1[2];
  uVar27 = iVar7 + iVar6 + iVar8;
  iVar9 = param_1[3];
  lVar26 = (longlong)iVar9;
  puVar24 = (undefined4 *)&DAT_14c993f00;
  if ((uVar27 & 1) == 0) {
    puVar24 = &DAT_14c993e10;
  }
  local_108 = puVar24 + lVar26 * 0xc;
  local_134[0] = puVar24[lVar26 * 0xc] + iVar6;
  local_134[1] = puVar24[lVar26 * 0xc + 1] + iVar7;
  iVar10 = puVar24[lVar26 * 0xc + 2];
  iVar11 = *(int *)(param_3 + 4);
  iVar12 = *(int *)(param_3 + 8);
  lVar15 = *(longlong *)(param_3 + 0x10);
  pdVar23 = (double *)
            (lVar15 + (longlong)((iVar11 * local_134[0] + local_134[1]) * iVar12 + iVar10 + iVar8) *
                      0x18);
  if (3 < lVar26) {
    local_16c = local_108[3] + iVar6;
    local_148 = (double)CONCAT44(local_148._4_4_,uVar27);
    iVar9 = local_108[4];
    iVar10 = local_108[5];
    local_170 = local_108[6] + iVar6;
    iVar13 = local_108[7];
    iVar14 = local_108[8];
    lVar26 = (longlong)
             (((iVar6 + local_108[9]) * iVar11 + iVar7 + local_108[10]) * iVar12 +
             iVar8 + local_108[0xb]);
    dVar1 = *(double *)(lVar15 + 0x10 + lVar26 * 0x18);
    dVar2 = *(double *)(lVar15 + lVar26 * 0x18);
    dVar3 = *(double *)(lVar15 + 8 + lVar26 * 0x18);
    local_160 = pdVar23[2];
    local_188._0_8_ = *pdVar23;
    local_168 = pdVar23[1];
    lVar22 = (longlong)((local_16c * iVar11 + iVar9 + iVar7) * iVar12 + iVar10 + iVar8);
    lVar26 = (longlong)((local_170 * iVar11 + iVar13 + iVar7) * iVar12 + iVar14 + iVar8);
    dVar17 = *(double *)(lVar15 + 0x10 + lVar22 * 0x18);
    dVar20 = *(double *)(lVar15 + lVar22 * 0x18);
    dVar18 = *(double *)(lVar15 + 8 + lVar22 * 0x18);
    local_158 = *(double *)(lVar15 + 0x10 + lVar26 * 0x18);
    local_150 = *(double *)(lVar15 + lVar26 * 0x18);
    local_190 = *(double *)(lVar15 + 8 + lVar26 * 0x18);
    dVar28 = param_4[10];
    dVar21 = ((((dVar17 + dVar1) - local_160) - local_158) * 0.5) / dVar28;
    dVar34 = ((((dVar18 + dVar3) - local_168) - local_190) * 0.5) / dVar28;
    dVar28 = ((((dVar20 + dVar2) - (double)local_188._0_8_) - local_150) * 0.5) / dVar28;
    dVar19 = param_4[9];
    if ((uVar27 & 1) == 0) {
      dVar29 = param_4[8];
      *param_2 = ((((dVar2 + (double)local_188._0_8_) - dVar20) - local_150) * 0.5) / dVar29;
      param_2[1] = ((((dVar3 + local_168) - dVar18) - local_190) * 0.5) / dVar29;
      param_2[2] = ((((dVar1 + local_160) - dVar17) - local_158) * 0.5) / dVar29;
      lVar22 = 0;
      param_2[3] = 0.0;
      param_2[4] = ((((dVar20 + (double)local_188._0_8_) - local_150) - dVar2) * 0.5) / dVar19;
      param_2[5] = ((((dVar18 + local_168) - local_190) - dVar3) * 0.5) / dVar19;
      param_2[6] = ((((dVar17 + local_160) - local_158) - dVar1) * 0.5) / dVar19;
      param_2[7] = 0.0;
      param_2[8] = dVar28;
      param_2[9] = dVar34;
      param_2[10] = dVar21;
      param_2[0xb] = 0.0;
      param_2[0xc] = 0.0;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      param_2[0xf] = 1.0;
      local_134[0] = local_170;
      local_134[1] = iVar13 + iVar7;
      local_134[2] = iVar14 + iVar8;
      local_128[0] = *param_4;
      local_128[1] = param_4[1];
      local_128[2] = param_4[2];
      do {
        local_128[lVar22] = (double)local_134[lVar22] * param_4[lVar22 + 8] + local_128[lVar22];
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
    }
    else {
      dVar29 = param_4[8];
      *param_2 = ((((dVar20 + (double)local_188._0_8_) - local_150) - dVar2) * 0.5) / dVar29;
      param_2[1] = ((((dVar18 + local_168) - local_190) - dVar3) * 0.5) / dVar29;
      param_2[2] = ((((dVar17 + local_160) - local_158) - dVar1) * 0.5) / dVar29;
      lVar25 = 0;
      param_2[3] = 0.0;
      param_2[4] = ((((dVar20 + local_150) - (double)local_188._0_8_) - dVar2) * 0.5) / dVar19;
      param_2[5] = ((((dVar18 + local_190) - local_168) - dVar3) * 0.5) / dVar19;
      param_2[6] = ((((dVar17 + local_158) - local_160) - dVar1) * 0.5) / dVar19;
      param_2[7] = 0.0;
      param_2[8] = dVar28;
      param_2[9] = dVar34;
      param_2[10] = dVar21;
      param_2[0xb] = 0.0;
      param_2[0xc] = 0.0;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      param_2[0xf] = 1.0;
      local_134[0] = local_16c;
      local_134[1] = iVar9 + iVar7;
      local_134[2] = iVar10 + iVar8;
      local_128[0] = *param_4;
      local_128[1] = param_4[1];
      local_128[2] = param_4[2];
      do {
        local_128[lVar25] = (double)local_134[lVar25] * param_4[lVar25 + 8] + local_128[lVar25];
        lVar25 = lVar25 + 1;
        lVar26 = lVar22;
      } while (lVar25 != 3);
    }
    pdVar23 = (double *)(lVar15 + lVar26 * 0x18);
    dVar1 = pdVar23[2];
    dVar2 = pdVar23[1];
    param_2[0xc] = *pdVar23 -
                   (local_128[2] * param_2[8] + local_128[1] * param_2[4] + local_128[0] * *param_2
                   + 0.0);
    param_2[0xd] = dVar2 - (local_128[2] * param_2[9] +
                            local_128[1] * param_2[5] + local_128[0] * param_2[1] + 0.0);
    param_2[0xe] = dVar1 - (local_128[0] * param_2[2] + local_128[1] * param_2[6] +
                            local_128[2] * param_2[10] + param_2[0xe] * 0.0);
    local_178 = param_2;
    goto LAB_146e44fef;
  }
  local_178 = (double *)CONCAT44(local_178._4_4_,local_134[1]);
  local_190 = (double)CONCAT44(local_190._4_4_,local_134[0]);
  dVar1 = *pdVar23;
  dVar2 = pdVar23[1];
  dVar3 = pdVar23[2];
  lVar26 = (longlong)
           (((local_108[3] + iVar6) * iVar11 + local_108[4] + iVar7) * iVar12 + local_108[5] + iVar8
           );
  dVar34 = *(double *)(lVar15 + 0x10 + lVar26 * 0x18) - dVar3;
  dVar31 = *(double *)(lVar15 + 8 + lVar26 * 0x18) - dVar2;
  dVar29 = *(double *)(lVar15 + lVar26 * 0x18) - dVar1;
  lVar26 = (longlong)
           (((local_108[6] + iVar6) * iVar11 + local_108[7] + iVar7) * iVar12 + local_108[8] + iVar8
           );
  dVar21 = *(double *)(lVar15 + 0x10 + lVar26 * 0x18) - dVar3;
  dVar28 = *(double *)(lVar15 + 8 + lVar26 * 0x18) - dVar2;
  dVar20 = *(double *)(lVar15 + lVar26 * 0x18) - dVar1;
  lVar26 = (longlong)
           (((iVar6 + local_108[9]) * iVar11 + iVar7 + local_108[10]) * iVar12 +
           iVar8 + local_108[0xb]);
  dVar19 = *(double *)(lVar15 + 0x10 + lVar26 * 0x18) - dVar3;
  dVar18 = *(double *)(lVar15 + 8 + lVar26 * 0x18) - dVar2;
  dVar17 = *(double *)(lVar15 + lVar26 * 0x18) - dVar1;
  if ((uVar27 & 1) == 0) {
    switch(iVar9) {
    case 0:
      dVar30 = param_4[9];
      dVar4 = param_4[10];
      dVar19 = dVar19 / dVar4;
      dVar33 = dVar18 / dVar4;
      dVar4 = dVar17 / dVar4;
      dVar35 = -dVar34 / dVar30;
      dVar32 = -dVar31 / dVar30;
      dVar30 = -dVar29 / dVar30;
      dVar34 = dVar21;
      goto LAB_146e44e94;
    case 1:
      dVar30 = param_4[9];
      dVar4 = param_4[10];
      local_188._8_8_ = 0x8000000000000000;
      local_188._0_8_ = -dVar34 / dVar4;
      dVar33 = -dVar31 / dVar4;
      uStack_140 = 0x8000000000000000;
      dVar4 = -dVar29 / dVar4;
      dVar35 = -dVar21 / dVar30;
      dVar32 = -dVar28 / dVar30;
      dVar30 = -dVar20 / dVar30;
      dVar20 = -dVar17;
      dVar28 = -dVar18;
      dVar21 = -dVar19;
      local_148 = dVar33;
      break;
    case 2:
      dVar30 = param_4[9];
      dVar4 = param_4[10];
      local_188._8_8_ = 0;
      local_188._0_8_ = dVar34 / dVar4;
      dVar33 = dVar31 / dVar4;
      dVar4 = dVar29 / dVar4;
      dVar35 = dVar21 / dVar30;
      dVar32 = dVar28 / dVar30;
      dVar30 = dVar20 / dVar30;
      dVar21 = -dVar19;
      dVar28 = -dVar18;
      dVar20 = -dVar17;
      break;
    case 3:
      dVar30 = param_4[9];
      dVar4 = param_4[10];
      local_188._8_8_ = 0x8000000000000000;
      local_188._0_8_ = -dVar34 / dVar4;
      dVar33 = -dVar31 / dVar4;
      dVar4 = -dVar29 / dVar4;
      dVar35 = dVar21 / dVar30;
      dVar32 = dVar28 / dVar30;
      dVar30 = dVar20 / dVar30;
      dVar20 = dVar17;
      dVar28 = dVar18;
      dVar21 = dVar19;
      break;
    default:
      goto switchD_146e445ac_default;
    }
    goto LAB_146e44e8d;
  }
  switch(iVar9) {
  case 0:
    dVar30 = param_4[9];
    dVar5 = param_4[10];
    dVar35 = dVar21 / dVar30;
    dVar32 = dVar28 / dVar30;
    dVar30 = dVar20 / dVar30;
    dVar28 = dVar31;
    dVar20 = dVar29;
    break;
  case 1:
    dVar30 = param_4[9];
    dVar4 = param_4[10];
    local_188._8_8_ = 0x8000000000000000;
    local_188._0_8_ = -dVar34 / dVar4;
    dVar33 = -dVar31 / dVar4;
    dVar4 = -dVar29 / dVar4;
    dVar35 = -dVar19 / dVar30;
    dVar32 = -dVar18 / dVar30;
    dVar30 = -dVar17 / dVar30;
    goto LAB_146e44e8d;
  case 2:
    uVar16 = DAT_149931e80;
    dVar30 = param_4[9];
    dVar4 = param_4[10];
    local_188._8_4_ = DAT_149931e80._8_4_;
    local_188._0_8_ = (double)((ulonglong)dVar21 ^ uVar16) / dVar4;
    local_188._12_4_ = DAT_149931e80._12_4_;
    dVar33 = (double)((ulonglong)dVar28 ^ uVar16) / dVar4;
    dVar4 = (double)((ulonglong)dVar20 ^ uVar16) / dVar4;
    dVar35 = dVar34 / dVar30;
    dVar32 = dVar31 / dVar30;
    dVar30 = dVar29 / dVar30;
    dVar21 = -dVar19;
    dVar28 = -dVar18;
    dVar20 = -dVar17;
LAB_146e44e8d:
    dVar19 = (double)local_188._0_8_;
    dVar34 = dVar21;
    goto LAB_146e44e94;
  case 3:
    dVar30 = param_4[9];
    dVar5 = param_4[10];
    dVar35 = -dVar21 / dVar30;
    dVar32 = -dVar28 / dVar30;
    dVar30 = -dVar20 / dVar30;
    dVar34 = -dVar34;
    dVar28 = -dVar31;
    dVar20 = -dVar29;
    break;
  default:
    goto switchD_146e445ac_default;
  }
  dVar4 = dVar17 / dVar5;
  dVar33 = dVar18 / dVar5;
  dVar19 = dVar19 / dVar5;
LAB_146e44e94:
  dVar17 = param_4[8];
  *param_2 = dVar20 / dVar17;
  param_2[1] = dVar28 / dVar17;
  param_2[2] = dVar34 / dVar17;
  param_2[3] = 0.0;
  param_2[4] = dVar30;
  param_2[5] = dVar32;
  param_2[6] = dVar35;
  param_2[7] = 0.0;
  param_2[8] = dVar4;
  param_2[9] = dVar33;
  param_2[10] = dVar19;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
switchD_146e445ac_default:
  local_134[2] = iVar10 + iVar8;
  local_128[0] = *param_4;
  local_128[1] = param_4[1];
  local_128[2] = param_4[2];
  lVar26 = 0;
  do {
    local_128[lVar26] = (double)local_134[lVar26] * param_4[lVar26 + 8] + local_128[lVar26];
    lVar26 = lVar26 + 1;
  } while (lVar26 != 3);
  param_2[0xc] = dVar1 - (param_2[0xc] * 0.0 +
                         local_128[2] * param_2[8] +
                         local_128[1] * param_2[4] + local_128[0] * *param_2);
  param_2[0xd] = dVar2 - (param_2[0xd] * 0.0 +
                         local_128[2] * param_2[9] +
                         local_128[1] * param_2[5] + local_128[0] * param_2[1]);
  param_2[0xe] = dVar3 - (local_128[0] * param_2[2] + local_128[1] * param_2[6] +
                          local_128[2] * param_2[10] + param_2[0xe] * 0.0);
LAB_146e44fef:
  local_110 = param_1;
  local_100 = param_4;
  local_f8 = param_3;
  FUN_1429e8a0e(&local_110);
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e45086 FUN_146e45086 body=70 status=ok
// SIG undefined FUN_146e45086(void)

void FUN_146e45086(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0xffffffff;
  uStack_34 = 0xffffffff;
  uStack_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  local_48 = 1;
  FUN_146e420d2();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e450ce FUN_146e450ce body=99 status=ok
// SIG undefined FUN_146e450ce(void)

void FUN_146e450ce(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x108))(param_1,local_20);
  FUN_146e45132(param_1,param_2);
  FUN_146ddc162(param_2,param_1 + 0x46);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e45132 FUN_146e45132 body=191 status=ok
// SIG undefined FUN_146e45132(void)

void FUN_146e45132(longlong param_1,longlong param_2)

{
  FUN_14004b8ea();
  FUN_146caa7a6(param_1 + 0x20,param_2);
  FUN_146caa7ea(param_2,param_1 + 0x78);
  FUN_146e7a479(param_2,param_1 + 0x88);
  FUN_146e45b27(param_2,param_1 + 0x98);
  FUN_1400f4f7e(param_2,param_1 + 0xb0);
  FUN_14480c34d(param_2,param_1 + 0xd0);
  FUN_14480c34d(param_2,param_1 + 0xf0);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  FUN_140ee8350(param_2,param_1 + 0x110);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_146e457ea(param_1);
    FUN_146e459a0(param_1);
    *(undefined1 *)(param_1 + 0x228) = 1;
  }
  return;
}



// FUNCTION 146e451f2 FUN_146e451f2 body=824 status=ok
// SIG undefined FUN_146e451f2(void)

undefined8 * FUN_146e451f2(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x1d) = uVar1;
  *param_1 = &PTR_LAB_149f5ef50;
  puVar7 = (undefined8 *)(param_2 + 0x20);
  puVar8 = param_1 + 4;
  for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  pvVar3 = *(void **)(param_2 + 0x98);
  *(int *)(param_1 + 0x14) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x13,iVar2,0);
    memcpy((void *)param_1[0x13],pvVar3,(longlong)iVar2 << 3);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3ff00000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ff00000;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  iVar2 = *(int *)(param_2 + 0x118);
  pvVar3 = *(void **)(param_2 + 0x110);
  *(int *)(param_1 + 0x23) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_144756262(param_1 + 0x22,iVar2,0);
    memcpy((void *)param_1[0x22],pvVar3,(longlong)iVar2 * 0x60);
  }
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  iVar2 = *(int *)(param_2 + 0x148);
  pvVar3 = *(void **)(param_2 + 0x140);
  *(int *)(param_1 + 0x29) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x28,iVar2,0);
    memcpy((void *)param_1[0x28],pvVar3,(longlong)iVar2 << 2);
  }
  param_1[0x2c] = *(undefined8 *)(param_2 + 0x160);
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  param_1[0x2b] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x170);
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2e] = uVar4;
  param_1[0x2f] = *(undefined8 *)(param_2 + 0x178);
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  FUN_146e7a3b4(param_1 + 0x11,param_2 + 0x88);
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x188);
  FUN_146ddb48a(param_1 + 0x32,param_2 + 400);
  param_1[0x24] = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  FUN_1447cd5a6(param_1 + 0x26,param_2 + 0x130);
  cVar5 = *(char *)(param_2 + 0x228);
  if (cVar5 == '\0') {
    FUN_146e45688(param_1);
    cVar5 = *(char *)(param_2 + 0x228);
  }
  *(char *)(param_1 + 0x45) = cVar5;
  return param_1;
}



// FUNCTION 146e4552a FUN_146e4552a body=349 status=ok
// SIG undefined FUN_146e4552a(void)

void FUN_146e4552a(undefined8 *param_1,byte param_2,byte param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = param_2 & 1;
  *(bool *)((longlong)param_1 + 0x19) = (param_2 & 4) == 0;
  *(byte *)((longlong)param_1 + 0x1a) = param_2 >> 1 & 1;
  *(byte *)((longlong)param_1 + 0x1c) = param_3 | 0x20;
  *(byte *)((longlong)param_1 + 0x1d) = param_3 | 0x20;
  *param_1 = &PTR_LAB_149f5ef50;
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
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x7fefffffffffffff;
  param_1[0x2b] = 0x7fefffffffffffff;
  param_1[0x2c] = 0x7fefffffffffffff;
  param_1[0x2d] = 0xffefffffffffffff;
  param_1[0x2e] = 0xffefffffffffffff;
  param_1[0x2f] = 0xffefffffffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  return;
}



// FUNCTION 146e45688 FUN_146e45688 body=351 status=ok
// SIG undefined FUN_146e45688(void)

void FUN_146e45688(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x228) == '\x01') {
    local_48 = 0;
    uStack_40 = 0;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = *(int *)(param_1 + 0x54) * iVar3 * *(int *)(param_1 + 0x58);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 != 0) {
      FUN_146e7a8c2(&local_48);
      iVar3 = *(int *)(param_1 + 0x50);
    }
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar7 = 0;
      do {
        if (0 < iVar4) {
          iVar3 = *(int *)(param_1 + 0x58);
          iVar6 = 0;
          do {
            if (0 < iVar3) {
              lVar8 = 0;
              do {
                uVar1 = uStack_40;
                if (*(char *)(lVar8 + (longlong)(*(int *)(param_1 + 0x124) * iVar7 + iVar6) *
                                      (longlong)*(int *)(param_1 + 0x128) +
                                      *(longlong *)(param_1 + 0x130)) == '\0') {
                  lVar5 = (longlong)(int)uStack_40;
                  uVar2 = (int)uStack_40 + 1;
                  uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
                  if (uStack_40._4_4_ < uVar2) {
                    FUN_146e7a92a(&local_48,uVar1 & 0xffffffff);
                  }
                  *(longlong *)(local_48 + lVar5 * 0x18) = param_1;
                  *(int *)(local_48 + 8 + lVar5 * 0x18) = iVar7;
                  *(int *)(local_48 + 0xc + lVar5 * 0x18) = iVar6;
                  *(int *)(local_48 + 0x10 + lVar5 * 0x18) = (int)lVar8;
                  iVar3 = *(int *)(param_1 + 0x58);
                }
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < iVar3);
              iVar4 = *(int *)(param_1 + 0x54);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
          iVar3 = *(int *)(param_1 + 0x50);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    FUN_1429e8ac6(param_1 + 0x1a0,&local_48);
    *(undefined1 *)(param_1 + 0x228) = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e457ea FUN_146e457ea body=438 status=ok
// SIG undefined FUN_146e457ea(void)

void FUN_146e457ea(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x58);
  FUN_1448c4dd6(param_1 + 0x130,
                *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x58);
    iVar8 = 0;
    iVar9 = 1;
    do {
      if (0 < iVar2) {
        iVar10 = 0;
        iVar11 = 1;
        do {
          if (0 < iVar3) {
            lVar7 = 0;
            do {
              iVar13 = *(int *)(param_1 + 0x80);
              lVar4 = *(longlong *)(param_1 + 0x88);
              iVar12 = iVar8 * *(int *)(param_1 + 0x7c);
              iVar6 = (iVar10 + iVar12) * iVar13;
              bVar14 = true;
              if ((((*(char *)(lVar4 + (iVar6 + lVar7) * 0x4c) != '\0') &&
                   (iVar5 = (int)lVar7,
                   *(char *)(lVar4 + (longlong)(iVar5 + iVar6 + 1) * 0x4c) != '\0')) &&
                  (iVar6 = (iVar12 + iVar11) * iVar13,
                  *(char *)(lVar4 + (longlong)(iVar5 + iVar6) * 0x4c) != '\0')) &&
                 (*(char *)(lVar4 + (longlong)(iVar5 + iVar6 + 1) * 0x4c) != '\0')) {
                iVar6 = *(int *)(param_1 + 0x7c) * iVar9;
                iVar12 = (iVar10 + iVar6) * iVar13;
                if (((*(char *)(lVar4 + (longlong)(iVar5 + iVar12) * 0x4c) != '\0') &&
                    (*(char *)(lVar4 + (longlong)(iVar5 + iVar12 + 1) * 0x4c) != '\0')) &&
                   (iVar13 = iVar13 * (iVar6 + iVar11),
                   *(char *)(lVar4 + (longlong)(iVar5 + iVar13) * 0x4c) != '\0')) {
                  bVar14 = *(char *)(lVar4 + (longlong)(iVar5 + iVar13 + 1) * 0x4c) == '\0';
                }
              }
              *(bool *)(lVar7 + (longlong)(*(int *)(param_1 + 0x124) * iVar8 + iVar10) *
                                (longlong)*(int *)(param_1 + 0x128) + *(longlong *)(param_1 + 0x130)
                       ) = bVar14;
              lVar7 = lVar7 + 1;
            } while (iVar3 != (int)lVar7);
          }
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar10 != iVar2);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}



// FUNCTION 146e459a0 FUN_146e459a0 body=390 status=ok
// SIG undefined FUN_146e459a0(void)

void FUN_146e459a0(longlong param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [36];
  int local_54 [3];
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  iVar3 = *(int *)(param_1 + 0x54) + 1;
  iVar4 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x180) = iVar2;
  *(int *)(param_1 + 0x184) = iVar3;
  *(int *)(param_1 + 0x188) = iVar4;
  FUN_146ca6f88(param_1 + 400,iVar3 * iVar2 * iVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar5 = 0;
    do {
      if (-1 < iVar3) {
        iVar6 = 0;
        do {
          if (-1 < iVar4) {
            iVar7 = 0;
            do {
              local_54[0] = iVar5;
              local_54[1] = iVar6;
              local_54[2] = iVar7;
              local_48[0] = *(double *)(param_1 + 0x20);
              local_48[1] = *(double *)(param_1 + 0x28);
              local_48[2] = (double)*(undefined8 *)(param_1 + 0x30);
              lVar8 = 0;
              do {
                local_48[lVar8] =
                     (double)local_54[lVar8] * *(double *)(param_1 + 0x60 + lVar8 * 8) +
                     local_48[lVar8];
                lVar8 = lVar8 + 1;
              } while (lVar8 != 3);
              lVar8 = *(longlong *)(param_1 + 400);
              lVar9 = (longlong)
                      ((*(int *)(param_1 + 0x184) * iVar5 + iVar6) * *(int *)(param_1 + 0x188) +
                      iVar7);
              *(double *)(lVar8 + 0x10 + lVar9 * 0x18) = local_48[2];
              pdVar1 = (double *)(lVar8 + lVar9 * 0x18);
              *pdVar1 = local_48[0];
              pdVar1[1] = local_48[1];
              bVar10 = iVar7 != iVar4;
              iVar7 = iVar7 + 1;
            } while (bVar10);
          }
          bVar10 = iVar6 != iVar3;
          iVar6 = iVar6 + 1;
        } while (bVar10);
      }
      bVar10 = iVar5 != iVar2;
      iVar5 = iVar5 + 1;
    } while (bVar10);
  }
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x30);
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e45b27 FUN_146e45b27 body=256 status=ok
// SIG undefined FUN_146e45b27(void)

longlong * FUN_146e45b27(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1402191ca(param_2);
    }
    FUN_1406089a0(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        (**(code **)(*param_1 + 0x160))(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e45c2a FUN_146e45c2a body=3069 status=ok
// SIG undefined FUN_146e45c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e45c2a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  double *pdVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  bool bVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  undefined8 uStack_2a0;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_2a8 = 0;
  uStack_2a0 = 0;
  pdVar18 = (double *)(ulonglong)*(uint *)(param_2 + 1);
  puVar21 = (undefined8 *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  FUN_140ee84a4();
  if (0 < (int)param_2[1]) {
    lVar26 = 0;
    lVar19 = 0;
    do {
      auVar47 = _DAT_149934d80;
      lVar27 = *(longlong *)(param_1 + 0x110);
      lVar8 = *param_2;
      auVar37 = *(undefined1 (*) [16])(lVar8 + 0x40 + lVar26);
      dVar33 = auVar37._0_8_;
      dVar9 = auVar37._8_8_;
      auVar2 = *(undefined1 (*) [16])(lVar8 + 0x50 + lVar26);
      dVar34 = auVar2._0_8_;
      auVar3 = *(undefined1 (*) [16])(lVar27 + 0x40 + lVar26);
      auVar4 = *(undefined1 (*) [16])(lVar27 + 0x50 + lVar26);
      auVar37 = minpd(auVar3,auVar37);
      auVar45 = minpd(auVar4,auVar2);
      auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
      auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
      uVar17 = movmskpd((int)pdVar18,auVar38);
      pdVar18 = (double *)(ulonglong)uVar17;
      auVar37._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
      auVar37._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
      uVar20 = movmskpd((int)puVar21,auVar37);
      if ((uVar20 & 0x3fffffff) == 0 && uVar17 == 0) {
        dVar43 = *(double *)(lVar27 + lVar26);
        dVar44 = ((double *)(lVar27 + lVar26))[1];
        pdVar1 = (double *)(lVar27 + 0x10 + lVar26);
        dVar50 = *pdVar1;
        dVar12 = pdVar1[1];
        dVar13 = *(double *)(lVar8 + lVar26);
        dVar14 = ((double *)(lVar8 + lVar26))[1];
        pdVar1 = (double *)(lVar8 + 0x10 + lVar26);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x18 + lVar26);
        dVar35 = *pdVar1;
        dVar49 = *pdVar1;
        dVar51 = *(double *)(lVar8 + lVar26);
        dVar10 = *(double *)(lVar8 + lVar26);
        pdVar1 = (double *)(lVar8 + 8 + lVar26);
        dVar39 = *pdVar1;
        dVar41 = *pdVar1;
        pdVar1 = (double *)(lVar8 + 0x10 + lVar26);
        dVar48 = *pdVar1;
        dVar42 = *pdVar1;
        dVar36 = dVar44 * dVar48 * -1.0 + dVar50 * dVar39 + dVar12 * dVar51 * 1.0 + dVar43 * dVar35;
        dVar40 = dVar43 * dVar42 * 1.0 + dVar12 * dVar41 + dVar50 * dVar10 * -1.0 + dVar44 * dVar49;
        auVar47._0_8_ =
             dVar12 * dVar48 * 1.0 + ((dVar51 * dVar44 * 1.0 + dVar50 * dVar35) - dVar43 * dVar39);
        auVar47._8_8_ =
             dVar50 * dVar42 * -1.0 + ((dVar10 * dVar43 * -1.0 + dVar12 * dVar49) - dVar44 * dVar41)
        ;
        pdVar1 = (double *)(lVar27 + 0x20 + lVar26);
        dVar39 = *pdVar1 * dVar33;
        dVar42 = pdVar1[1] * dVar9;
        pdVar1 = (double *)(lVar27 + 0x30 + lVar26);
        dVar43 = *pdVar1 * dVar34;
        dVar44 = pdVar1[1] * auVar2._8_8_;
        dVar51 = dVar42 * dVar13 - dVar14 * dVar39;
        dVar10 = dVar43 * dVar14 - dVar15 * dVar42;
        dVar41 = dVar39 * dVar15 - dVar13 * dVar43;
        dVar48 = dVar44 * dVar16 - dVar16 * dVar44;
        dVar10 = dVar10 + dVar10;
        dVar41 = dVar41 + dVar41;
        dVar51 = dVar51 + dVar51;
        dVar48 = dVar48 + dVar48;
        pdVar1 = (double *)(lVar8 + 0x20 + lVar26);
        dVar39 = (dVar51 * dVar14 - dVar15 * dVar41) + dVar35 * dVar10 + dVar39 + *pdVar1;
        dVar42 = (dVar10 * dVar15 - dVar51 * dVar13) + dVar49 * dVar41 + dVar42 + pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x30 + lVar26);
        dVar35 = (dVar41 * dVar13 - dVar14 * dVar10) + dVar35 * dVar51 + dVar43 + *pdVar1;
        dVar49 = (dVar48 * dVar16 - dVar48 * dVar16) + dVar49 * dVar48 + dVar44 + pdVar1[1];
        puVar21 = (undefined8 *)0x0;
      }
      else {
        dVar51 = *(double *)(lVar8 + lVar26);
        dVar10 = ((double *)(lVar8 + lVar26))[1];
        dVar49 = *(double *)(lVar8 + 0x10 + lVar26);
        dVar39 = dVar10 + dVar10;
        dVar41 = dVar49 + dVar49;
        dVar35 = dVar51 * (dVar51 + dVar51);
        local_1f8 = ((double)DAT_149934d80 - (dVar49 * dVar41 + dVar10 * dVar39)) * dVar33;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar49 * dVar41 + dVar35)) * dVar9;
        local_1a8 = (1.0 - (dVar35 + dVar10 * dVar39)) * dVar34;
        dVar49 = *(double *)(lVar8 + lVar26) * dVar41;
        pdVar18 = (double *)(lVar8 + 0x18 + lVar26);
        dVar35 = *pdVar18;
        dVar42 = dVar41 * dVar35;
        dVar48 = (dVar51 + dVar51) * *pdVar18;
        dVar35 = dVar39 * dVar35;
        dStack_1f0 = (dVar39 * dVar51 + dVar42) * dVar33;
        local_1c8 = (dVar41 * dVar10 + dVar48) * dVar9;
        local_1b8 = (dVar35 + dVar49) * dVar34;
        local_1d8 = (dVar39 * dVar51 - dVar42) * dVar9;
        dStack_1b0 = (dVar41 * dVar10 - dVar48) * dVar34;
        local_1e8 = (dVar49 - dVar35) * dVar33;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        puVar21 = (undefined8 *)(lVar8 + 0x20 + lVar26);
        local_198 = *puVar21;
        uStack_190 = puVar21[1];
        local_188 = *(undefined8 *)(lVar8 + 0x30 + lVar26);
        uStack_180 = 0x3ff0000000000000;
        dVar51 = *(double *)(lVar27 + lVar26);
        dVar10 = ((double *)(lVar27 + lVar26))[1];
        dVar49 = *(double *)(lVar27 + 0x10 + lVar26);
        pdVar18 = (double *)(lVar27 + 0x40 + lVar26);
        local_268 = *pdVar18;
        local_258 = pdVar18[1];
        dStack_230 = *(double *)(lVar27 + 0x50 + lVar26);
        dVar48 = dVar10 + dVar10;
        dVar39 = dVar49 + dVar49;
        dVar35 = dVar51 * (dVar51 + dVar51);
        local_278 = ((double)DAT_149934d80 - (dVar49 * dVar39 + dVar10 * dVar48)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar49 * dVar39 + dVar35)) * local_258;
        local_228 = (1.0 - (dVar35 + dVar10 * dVar48)) * dStack_230;
        dVar49 = *(double *)(lVar27 + lVar26) * dVar39;
        pdVar18 = (double *)(lVar27 + 0x18 + lVar26);
        dVar35 = *pdVar18;
        dVar41 = dVar39 * dVar35;
        dVar42 = (dVar51 + dVar51) * *pdVar18;
        dVar35 = dVar48 * dVar35;
        dStack_270 = (dVar48 * dVar51 + dVar41) * local_268;
        local_248 = (dVar39 * dVar10 + dVar42) * local_258;
        local_238 = (dVar35 + dVar49) * dStack_230;
        local_268 = (dVar49 - dVar35) * local_268;
        local_258 = (dVar48 * dVar51 - dVar41) * local_258;
        dStack_230 = (dVar39 * dVar10 - dVar42) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        puVar21 = (undefined8 *)(lVar27 + 0x20 + lVar26);
        local_218 = *puVar21;
        uStack_210 = puVar21[1];
        local_208 = *(undefined8 *)(lVar27 + 0x30 + lVar26);
        uStack_200 = 0x3ff0000000000000;
        puVar21 = &local_1f8;
        FUN_1447fea8d(local_178,&local_278);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar45._8_8_ = -(ulonglong)(0.0 <= auVar3._8_8_ * dVar9);
        auVar45._0_8_ = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar33);
        auVar37 = blendvpd(_DAT_149936790,auVar47,auVar45);
        uVar31 = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar34);
        dVar35 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
        dVar49 = auVar37._0_8_;
        local_178[2] = local_178[2] * dVar49;
        local_178[1] = local_178[1] * dVar49;
        local_178[0] = local_178[0] * dVar49;
        dVar49 = auVar37._8_8_;
        local_148 = local_148 * dVar49;
        local_150 = local_150 * dVar49;
        local_158 = dVar49 * local_158;
        local_128 = local_128 * dVar35;
        local_130 = local_130 * dVar35;
        local_138 = dVar35 * local_138;
        pdVar18 = local_178;
        FUN_14481fd10(&local_298);
        dVar35 = local_288 * local_288 + local_298 * local_298;
        dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar46._0_8_ = dVar35 + dVar49;
        auVar46._8_8_ = dVar35 + dVar49;
        auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
        auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
        auVar37 = sqrtpd(auVar46,auVar46);
        auVar37 = divpd(auVar47,auVar37);
        auVar52._0_8_ = auVar37._0_8_ * local_288;
        auVar52._8_8_ = auVar37._8_8_ * dStack_280;
        dVar36 = (double)((ulonglong)(local_298 * auVar37._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_));
        dVar40 = (double)((ulonglong)(dStack_290 * auVar37._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_));
        auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar32);
        dVar49 = 0.0;
        dVar35 = local_108;
        dVar39 = local_118;
        dVar42 = dStack_110;
      }
      dVar51 = auVar4._8_8_ * auVar2._8_8_;
      dVar9 = auVar3._8_8_ * dVar9;
      *(double *)(local_2a8 + lVar26) = dVar36;
      ((double *)(local_2a8 + lVar26))[1] = dVar40;
      *(undefined1 (*) [16])(local_2a8 + 0x10 + lVar26) = auVar47;
      auVar2._8_4_ = SUB84(dVar42,0);
      auVar2._0_8_ = dVar39;
      auVar2._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      *(undefined1 (*) [16])(local_2a8 + 0x20 + lVar26) = auVar2;
      pdVar1 = (double *)(local_2a8 + 0x30 + lVar26);
      *pdVar1 = dVar35;
      pdVar1[1] = dVar49;
      auVar11._8_4_ = SUB84(dVar9,0);
      auVar11._0_8_ = auVar3._0_8_ * dVar33;
      auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(local_2a8 + 0x40 + lVar26) = auVar11;
      auVar3._8_4_ = SUB84(dVar51,0);
      auVar3._0_8_ = auVar4._0_8_ * dVar34;
      auVar3._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      *(undefined1 (*) [16])(local_2a8 + 0x50 + lVar26) = auVar3;
      lVar19 = lVar19 + 1;
      lVar26 = lVar26 + 0x60;
    } while (lVar19 < (int)param_2[1]);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  iVar6 = *(int *)(param_1 + 0x54);
  iVar7 = *(int *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x150) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x158) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x160) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x168) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x170) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x178) = 0xffefffffffffffff;
  if (-1 < iVar5) {
    dVar34 = 1.79769313486232e+308;
    dVar35 = -1.79769313486232e+308;
    dVar9 = -1.79769313486232e+308;
    dVar51 = -1.79769313486232e+308;
    dVar49 = 1.79769313486232e+308;
    dVar33 = 1.79769313486232e+308;
    iVar22 = 0;
    do {
      if (-1 < iVar6) {
        iVar23 = 0;
        do {
          if (-1 < iVar7) {
            lVar19 = 0;
            do {
              local_1f8 = (double)CONCAT44(iVar23,iVar22);
              iVar24 = (int)lVar19;
              dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,iVar24);
              iVar28 = (*(int *)(param_1 + 0x7c) * iVar22 + iVar23) * *(int *)(param_1 + 0x80);
              lVar26 = *(longlong *)(param_1 + 0x88);
              uVar31 = (ulonglong)*(byte *)(lVar26 + (longlong)(iVar28 + iVar24) * 0x4c);
              if (uVar31 == 0) {
                lVar26 = *(longlong *)(param_1 + 400);
                lVar27 = (longlong)
                         ((*(int *)(param_1 + 0x184) * iVar22 + iVar23) * *(int *)(param_1 + 0x188)
                         + iVar24);
                dVar10 = *(double *)(lVar26 + 0x10 + lVar27 * 0x18);
                if (dVar10 <= dVar33) {
                  dVar33 = dVar10;
                }
                dVar10 = *(double *)(lVar26 + 8 + lVar27 * 0x18);
                if (dVar10 <= dVar49) {
                  dVar49 = dVar10;
                }
                dVar10 = *(double *)(lVar26 + lVar27 * 0x18);
                if (dVar10 <= dVar34) {
                  dVar34 = dVar10;
                }
                *(double *)(param_1 + 0x150) = dVar34;
                *(double *)(param_1 + 0x158) = dVar49;
                *(double *)(param_1 + 0x160) = dVar33;
                dVar10 = *(double *)(lVar26 + 0x10 + lVar27 * 0x18);
                if (dVar51 <= dVar10) {
                  dVar51 = dVar10;
                }
                dVar10 = *(double *)(lVar26 + 8 + lVar27 * 0x18);
                if (dVar9 <= dVar10) {
                  dVar9 = dVar10;
                }
                dVar10 = *(double *)(lVar26 + lVar27 * 0x18);
                if (dVar35 <= dVar10) {
                  dVar35 = dVar10;
                }
              }
              else {
                local_178[2] = *(double *)(param_1 + 0x30);
                local_178[0] = *(double *)(param_1 + 0x20);
                local_178[1] = *(double *)(param_1 + 0x28);
                lVar27 = 0;
                do {
                  local_178[lVar27] =
                       (double)*(int *)((longlong)&local_1f8 + lVar27 * 4) *
                       *(double *)(param_1 + 0x60 + lVar27 * 8) + local_178[lVar27];
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 3);
                lVar26 = lVar26 + (iVar28 + lVar19) * 0x4c;
                dVar10 = 0.0;
                uVar29 = 0;
                dVar35 = 0.0;
                dVar9 = 0.0;
                do {
                  uVar25 = (ulonglong)((uint)*(ushort *)(lVar26 + 2 + uVar29 * 2) * 0x60);
                  pdVar18 = (double *)(local_2a8 + 0x40 + uVar25);
                  dVar43 = *pdVar18 * local_178[0];
                  dVar50 = pdVar18[1] * local_178[1];
                  dVar34 = *(double *)(local_2a8 + 0x50 + uVar25) * local_178[2];
                  dVar41 = *(double *)(local_2a8 + uVar25);
                  dVar42 = ((double *)(local_2a8 + uVar25))[1];
                  dVar48 = *(double *)(local_2a8 + 0x10 + uVar25);
                  pdVar18 = (double *)(local_2a8 + 0x18 + uVar25);
                  dVar33 = *pdVar18;
                  dVar49 = dVar50 * dVar41 - dVar43 * dVar42;
                  dVar51 = dVar34 * dVar42 - dVar50 * dVar48;
                  dVar39 = dVar43 * dVar48 - dVar41 * dVar34;
                  dVar51 = dVar51 + dVar51;
                  dVar39 = dVar39 + dVar39;
                  dVar49 = dVar49 + dVar49;
                  pdVar1 = (double *)(local_2a8 + 0x20 + uVar25);
                  dVar44 = (double)*(float *)(lVar26 + 0x1c + uVar29 * 4);
                  dVar9 = dVar9 + (dVar49 * dVar33 + dVar34 + (dVar39 * dVar41 - dVar51 * dVar42) +
                                  *(double *)(local_2a8 + 0x30 + uVar25)) * dVar44;
                  dVar35 = dVar35 + ((dVar48 * dVar51 - dVar41 * dVar49) +
                                     *pdVar18 * dVar39 + dVar50 + pdVar1[1]) * dVar44;
                  dVar10 = dVar10 + ((dVar49 * dVar42 - dVar39 * dVar48) + dVar33 * dVar51 + dVar43
                                    + *pdVar1) * dVar44;
                  uVar29 = uVar29 + 1;
                } while (uVar31 != uVar29);
                lVar26 = *(longlong *)(param_1 + 400);
                lVar27 = (longlong)
                         ((*(int *)(param_1 + 0x184) * iVar22 + iVar23) * *(int *)(param_1 + 0x188)
                         + iVar24);
                dVar33 = dVar10 - *(double *)(lVar26 + lVar27 * 0x18);
                dVar49 = dVar35 - *(double *)(lVar26 + 8 + lVar27 * 0x18);
                dVar34 = dVar9 - *(double *)(lVar26 + 0x10 + lVar27 * 0x18);
                *(bool *)(param_1 + 0x228) =
                     1.0000000168623835e-16 < dVar34 * dVar34 + dVar49 * dVar49 + dVar33 * dVar33;
                *(double *)(lVar26 + lVar27 * 0x18) = dVar10;
                *(double *)(lVar26 + 8 + lVar27 * 0x18) = dVar35;
                *(double *)(lVar26 + 0x10 + lVar27 * 0x18) = dVar9;
                dVar33 = *(double *)(param_1 + 0x160);
                if (dVar9 <= *(double *)(param_1 + 0x160)) {
                  dVar33 = dVar9;
                }
                dVar49 = *(double *)(param_1 + 0x158);
                if (dVar35 <= *(double *)(param_1 + 0x158)) {
                  dVar49 = dVar35;
                }
                dVar34 = *(double *)(param_1 + 0x150);
                if (dVar10 <= *(double *)(param_1 + 0x150)) {
                  dVar34 = dVar10;
                }
                *(double *)(param_1 + 0x150) = dVar34;
                *(double *)(param_1 + 0x158) = dVar49;
                *(double *)(param_1 + 0x160) = dVar33;
                dVar51 = *(double *)(param_1 + 0x178);
                if (*(double *)(param_1 + 0x178) <= dVar9) {
                  dVar51 = dVar9;
                }
                dVar9 = *(double *)(param_1 + 0x170);
                if (*(double *)(param_1 + 0x170) <= dVar35) {
                  dVar9 = dVar35;
                }
                dVar35 = *(double *)(param_1 + 0x168);
                if (*(double *)(param_1 + 0x168) <= dVar10) {
                  dVar35 = dVar10;
                }
              }
              *(double *)(param_1 + 0x168) = dVar35;
              *(double *)(param_1 + 0x170) = dVar9;
              *(double *)(param_1 + 0x178) = dVar51;
              lVar19 = lVar19 + 1;
            } while (iVar24 != iVar7);
          }
          bVar30 = iVar23 != iVar6;
          iVar23 = iVar23 + 1;
        } while (bVar30);
      }
      bVar30 = iVar22 != iVar5;
      iVar22 = iVar22 + 1;
    } while (bVar30);
  }
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e46828 FUN_146e46828 body=372 status=ok
// SIG undefined FUN_146e46828(void)

undefined4 * FUN_146e46828(longlong param_1,undefined4 *param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  double local_88 [6];
  double local_58;
  double local_50;
  double local_48;
  int local_3c [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146c9c584((double *)(param_1 + 0x20),local_3c);
  if (*(char *)(*(longlong *)(param_1 + 0x130) +
               (longlong)*(int *)(param_1 + 0x128) *
               ((longlong)*(int *)(param_1 + 0x124) * (longlong)local_3c[0] + (longlong)local_3c[1])
               + (longlong)local_3c[2]) == '\x01') {
    *(double *)(param_2 + 4) = param_3[2];
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 1);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  else {
    local_88[2] = *(double *)(param_1 + 0x30);
    local_88[0] = *(double *)(param_1 + 0x20);
    local_88[1] = *(double *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      local_88[lVar4] =
           (double)local_3c[lVar4] * *(double *)(param_1 + 0x60 + lVar4 * 8) + local_88[lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_48 = (param_3[2] - local_88[2]) / *(double *)(param_1 + 0x70);
    local_50 = (param_3[1] - local_88[1]) / *(double *)(param_1 + 0x68);
    local_58 = (*param_3 - local_88[0]) / *(double *)(param_1 + 0x60);
    if (1.0 <= local_48) {
      local_48 = 1.0;
    }
    if (local_48 <= 0.0) {
      local_48 = 0.0;
    }
    if (1.0 <= local_50) {
      local_50 = 1.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (1.0 <= local_58) {
      local_58 = 1.0;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    FUN_146e43cdc(local_88,local_3c);
    FUN_146e441a6(local_88,param_2,param_1 + 0x180);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4699e FUN_146e4699e body=660 status=ok
// SIG undefined FUN_146e4699e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146e4699e(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [16],ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 uStack_98;
  longlong local_90;
  longlong *plStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  uVar17 = (uint)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar10 = *(double *)*param_3;
  dVar5 = *(double *)(*param_3 + 8);
  auVar11 = *param_3;
  dVar6 = *(double *)param_3[1];
  plVar1 = param_1 + 5;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = param_1 + 7;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  plStack_88 = plVar2;
  if ((int)param_1[10] == 0) {
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar15 = (int)param_1[10];
  }
  uStack_98 = CONCAT44(uStack_74,uStack_78);
  local_a0 = local_80;
  iStack_9c = iStack_7c;
  local_b0 = local_90;
  plStack_a8 = plStack_88;
  local_b8 = plVar1;
  if ((iStack_7c != iVar15) || (plStack_88 != plVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_b8 + 8 + (longlong)iStack_9c * 0x18);
      auVar27._8_8_ = *puVar3;
      auVar27._0_8_ = *puVar3;
      auVar23 = divpd(auVar11,auVar27);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar6;
      auVar27 = divpd(auVar26,auVar27);
      iVar28 = (int)(auVar27._0_8_ + -0.5 + auVar27._0_8_) >> 1;
      uVar7 = *(undefined4 *)(*local_b8 + (longlong)iStack_9c * 0x18);
      uVar8 = CONCAT44((int)(auVar23._8_8_ + -0.5 + auVar23._8_8_) >> 1,
                       (int)(auVar23._0_8_ + -0.5 + auVar23._0_8_) >> 1);
      auVar23._8_4_ = iVar28;
      auVar23._0_8_ = uVar8;
      auVar23._12_4_ = uVar7;
      auVar23 = pmulld(_DAT_149f50230,auVar23);
      iVar18 = *(int *)(*param_1 +
                       ((longlong)
                        (int)(auVar23._12_4_ ^ auVar23._0_4_ ^ auVar23._8_4_ ^ auVar23._4_4_) &
                       (longlong)(int)param_1[1] - 1U) * 4);
      if (iVar18 != -1) {
        lVar12 = param_1[2];
        do {
          lVar20 = (longlong)iVar18 * 0x20;
          auVar9._8_4_ = iVar28;
          auVar9._0_8_ = uVar8;
          auVar9._12_4_ = uVar7;
          if (*(undefined1 (*) [16])(lVar12 + lVar20) == auVar9) {
            local_90 = *(longlong *)(lVar12 + 0x10 + lVar20);
            lVar13 = param_1[0xf];
            lVar14 = (local_90 >> 0x20) * 0x40;
            auVar21._8_8_ = -(ulonglong)(dVar5 < ((double *)(lVar13 + lVar14))[1]);
            auVar21._0_8_ = -(ulonglong)(dVar10 < *(double *)(lVar13 + lVar14));
            pdVar4 = (double *)(lVar13 + 0x10 + lVar14);
            auVar24._8_8_ = -(ulonglong)(0.0 < pdVar4[1]);
            auVar24._0_8_ = -(ulonglong)(dVar6 < *pdVar4);
            uVar17 = movmskpd(uVar17,auVar21);
            iVar18 = movmskpd((int)param_4,auVar24);
            uVar19 = iVar18 << 2 | uVar17;
            param_4 = (ulonglong)uVar19;
            if (uVar19 == 0) {
              lVar13 = lVar13 + lVar14;
              auVar22._8_8_ = -(ulonglong)(*(double *)(lVar13 + 0x28) < dVar5);
              auVar22._0_8_ = -(ulonglong)(*(double *)(lVar13 + 0x20) < dVar10);
              iVar18 = movmskpd((int)lVar13,auVar22);
              auVar25._8_8_ = -(ulonglong)(*(double *)(lVar13 + 0x38) < 0.0);
              auVar25._0_8_ = -(ulonglong)(*(double *)(lVar13 + 0x30) < dVar6);
              uVar19 = movmskpd((int)lVar14,auVar25);
              if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
                FUN_1449e3bb0(param_2,&local_90);
                lVar12 = param_1[2];
              }
            }
          }
          iVar18 = *(int *)(lVar12 + 0x18 + lVar20);
        } while (iVar18 != -1);
      }
      local_a0 = local_a0 & ~local_b0._4_4_;
      FUN_1449c0562(&local_b0);
      bVar16 = plStack_a8 != plVar2 || iStack_9c != iVar15;
      uVar17 = CONCAT31((int3)(uVar17 >> 8),bVar16);
    } while (local_b8 != plVar1 || bVar16);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e46c34 FUN_146e46c34 body=423 status=ok
// SIG undefined FUN_146e46c34(void)

undefined8 FUN_146e46c34(double *param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = param_1[0xb];
  local_a8 = param_1[2] - local_e0;
  local_e8 = param_1[10];
  local_c0 = param_1[1] - local_e8;
  local_f0 = param_1[9];
  local_d8 = *param_1 - local_f0;
  local_a0 = param_1[5] - local_e0;
  local_b8 = param_1[4] - local_e8;
  local_d0 = param_1[3] - local_f0;
  local_98 = param_1[8] - local_e0;
  local_b0 = param_1[7] - local_e8;
  local_c8 = param_1[6] - local_f0;
  local_e0 = param_3[2] - local_e0;
  local_e8 = param_3[1] - local_e8;
  local_f0 = *param_3 - local_f0;
  FUN_146e7add6(param_2);
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e46ddc FUN_146e46ddc body=307 status=ok
// SIG undefined FUN_146e46ddc(void)

void FUN_146e46ddc(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar4 = *param_1;
  dVar12 = -1.79769313486232e+308;
  dVar13 = 1.79769313486232e+308;
  lVar8 = 0;
  dVar14 = 1.79769313486232e+308;
  dVar15 = 1.79769313486232e+308;
  dVar16 = -1.79769313486232e+308;
  dVar17 = -1.79769313486232e+308;
  bVar5 = true;
  do {
    bVar10 = bVar5;
    lVar6 = 0;
    bVar5 = true;
    do {
      bVar9 = bVar5;
      lVar6 = (longlong)(int)param_1[2] * 0x18 + *(longlong *)(lVar4 + 400) +
              (lVar6 + (lVar8 + (int)param_1[1]) * (longlong)*(int *)(lVar4 + 0x184) +
                       (longlong)*(int *)((longlong)param_1 + 0xc)) *
              (longlong)*(int *)(lVar4 + 0x188) * 0x18;
      lVar11 = 0;
      bVar5 = true;
      do {
        bVar7 = bVar5;
        dVar1 = *(double *)(lVar6 + 0x10 + lVar11 * 0x18);
        if (dVar1 <= dVar13) {
          dVar13 = dVar1;
        }
        dVar2 = *(double *)(lVar6 + lVar11 * 0x18);
        dVar3 = *(double *)(lVar6 + 8 + lVar11 * 0x18);
        if (dVar3 <= dVar14) {
          dVar14 = dVar3;
        }
        if (dVar2 <= dVar15) {
          dVar15 = dVar2;
        }
        if (dVar12 <= dVar1) {
          dVar12 = dVar1;
        }
        if (dVar16 <= dVar3) {
          dVar16 = dVar3;
        }
        if (dVar17 <= dVar2) {
          dVar17 = dVar2;
        }
        lVar11 = 1;
        bVar5 = false;
      } while (bVar7);
      lVar6 = 1;
      bVar5 = false;
    } while (bVar9);
    lVar8 = 1;
    bVar5 = false;
  } while (bVar10);
  param_2[2] = dVar13;
  param_2[1] = dVar14;
  *param_2 = dVar15;
  param_2[5] = dVar12;
  param_2[4] = dVar16;
  param_2[3] = dVar17;
  return;
}



// FUNCTION 146e46f10 FUN_146e46f10 body=1721 status=ok
// SIG undefined FUN_146e46f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146e46f10(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_168 [32];
  double *local_148;
  double *local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146e46c34(param_1,&local_120);
  if ((((local_120 < 0.0) || (local_118 < 0.0)) || (local_110 < 0.0)) ||
     (1.0 < local_120 + local_118 + local_110)) {
    dVar3 = (double)FUN_146e7b14a(param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c996310) {
      FUN_144b3d300(&DAT_14c996310);
      if (DAT_14c996310 == -1) {
        _DAT_14c9962e0 = 0x100000000;
        _DAT_14c9962e8 = 2;
        _DAT_14c9962f0 = &DAT_100000003;
        uRam000000014c9962f8 = 0x200000000;
        _DAT_14c996300 = 3;
        uRam000000014c996304 = 1;
        uRam000000014c996308 = 3;
        uRam000000014c99630c = 2;
        _Init_thread_footer(&DAT_14c996310);
      }
    }
    local_138 = param_4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c996350) {
      FUN_144b3d300(&DAT_14c996350);
      if (DAT_14c996350 == -1) {
        _DAT_14c996320 = 0x200000000;
        _DAT_14c996328 = 1;
        _DAT_14c996330 = 0x300000001;
        uRam000000014c996338 = 0x300000000;
        _DAT_14c996340 = 2;
        uRam000000014c996344 = 1;
        uRam000000014c996348 = 2;
        uRam000000014c99634c = 3;
        _Init_thread_footer(&DAT_14c996350);
      }
    }
    puVar9 = &DAT_14c996320;
    if (dVar3 <= 0.0) {
      puVar9 = &DAT_14c9962e0;
    }
    lVar11 = 8;
    do {
      lVar7 = (longlong)*(int *)((longlong)puVar9 + lVar11 + -4);
      lVar8 = (longlong)*(int *)((longlong)puVar9 + lVar11 + -8);
      local_f8 = *(double *)(param_1 + 0x10 + lVar8 * 0x18);
      pdVar1 = (double *)(param_1 + lVar8 * 0x18);
      local_108 = *pdVar1;
      dStack_100 = pdVar1[1];
      local_e0 = *(double *)(param_1 + 0x10 + lVar7 * 0x18);
      pdVar1 = (double *)(param_1 + lVar7 * 0x18);
      local_f0 = *pdVar1;
      dStack_e8 = pdVar1[1];
      local_c8 = *(double *)(param_1 + 0x10 + (longlong)*(int *)((longlong)puVar9 + lVar11) * 0x18);
      pdVar1 = (double *)(param_1 + (longlong)*(int *)((longlong)puVar9 + lVar11) * 0x18);
      local_d8 = *pdVar1;
      dStack_d0 = pdVar1[1];
      dVar14 = (local_f0 - local_108) * (dStack_d0 - dStack_100) -
               (local_d8 - local_108) * (dStack_e8 - dStack_100);
      dVar13 = (local_e0 - local_f8) * (local_d8 - local_108) -
               (local_c8 - local_f8) * (local_f0 - local_108);
      dVar3 = (dStack_e8 - dStack_100) * (local_c8 - local_f8) -
              (local_e0 - local_f8) * (dStack_d0 - dStack_100);
      dVar4 = dVar14 * dVar14 + dVar3 * dVar3 + dVar13 * dVar13;
      if ((dVar4 != 1.0) || (NAN(dVar4))) {
        if (9.99999993922529e-09 <= dVar4) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar14 = dVar14 * dVar4;
          dVar13 = dVar13 * dVar4;
          dVar3 = dVar3 * dVar4;
        }
        else {
          dVar3 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar13 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar14 = DAT_14c8464f0;
        }
      }
      dVar4 = param_3[2];
      dVar2 = param_3[1];
      dVar5 = (dVar4 - local_f8) * dVar14 +
              (*param_3 - local_108) * dVar3 + (dVar2 - dStack_100) * dVar13;
      if (0.0 <= dVar5) {
        *param_2 = *param_3 - dVar3 * dVar5;
        param_2[1] = dVar2 - dVar13 * dVar5;
        param_2[2] = dVar4 - dVar14 * dVar5;
        local_148 = param_2;
        FUN_146dd4773(&local_130,&local_108,&local_f0,&local_d8);
        if (((0.0 <= local_130) && (0.0 <= local_128)) && (local_130 + local_128 <= 1.0)) {
          local_138[2] = 0.0;
          local_138[3] = 0.0;
          *local_138 = 0.0;
          local_138[1] = 0.0;
          local_138[*(int *)((longlong)puVar9 + lVar11 + -4)] = local_130;
          local_138[*(int *)((longlong)puVar9 + lVar11)] = local_128;
          local_138[*(int *)((longlong)puVar9 + lVar11 + -8)] = (1.0 - local_130) - local_128;
          goto LAB_146e47016;
        }
      }
      lVar11 = lVar11 + 0xc;
    } while (lVar11 != 0x38);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c996390) {
      FUN_144b3d300(&DAT_14c996390);
      if (DAT_14c996390 == -1) {
        _DAT_14c996360 = 0x100000000;
        _DAT_14c996368 = 0x200000000;
        _DAT_14c996370 = 0x300000000;
        uRam000000014c996378 = 0x200000001;
        _DAT_14c996380 = 1;
        uRam000000014c996384 = 3;
        uRam000000014c996388 = 2;
        uRam000000014c99638c = 3;
        _Init_thread_footer(&DAT_14c996390);
      }
    }
    param_2[2] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar16 = (undefined4)DAT_14c8464e8;
    uVar15 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar15;
    *(undefined4 *)(param_2 + 1) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar13 = param_3[2];
    uVar15 = 0;
    uVar16 = 0;
    uVar10 = 0xffffffff;
    dVar14 = 1.79769313486232e+308;
    uVar12 = 0;
    do {
      local_148 = &local_130;
      FUN_146e5443f(&local_108,param_1 + (longlong)(int)(&DAT_14c996360)[uVar12 * 2] * 0x18,
                    param_1 + (longlong)(int)(&DAT_14c996364)[uVar12 * 2] * 0x18,param_3);
      dVar2 = (local_f8 - dVar13) * (local_f8 - dVar13) +
              (dStack_100 - dVar4) * (dStack_100 - dVar4) +
              (local_108 - dVar3) * (local_108 - dVar3);
      if (dVar2 < dVar14) {
        param_2[2] = local_f8;
        *param_2 = local_108;
        param_2[1] = dStack_100;
        uVar15 = SUB84(local_130,0);
        uVar16 = (undefined4)((ulonglong)local_130 >> 0x20);
        uVar10 = uVar12 & 0xffffffff;
        dVar14 = dVar2;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 6);
    local_138[2] = 0.0;
    local_138[3] = 0.0;
    *local_138 = 0.0;
    local_138[1] = 0.0;
    local_138[(int)(&DAT_14c996360)[(longlong)(int)uVar10 * 2]] =
         1.0 - (double)CONCAT44(uVar16,uVar15);
    local_138[(int)(&DAT_14c996364)[(longlong)(int)uVar10 * 2]] = (double)CONCAT44(uVar16,uVar15);
  }
  else {
    *param_4 = local_120;
    param_4[1] = local_118;
    param_4[2] = local_110;
    param_4[3] = ((1.0 - local_120) - local_118) - local_110;
    param_2[2] = param_3[2];
    uVar15 = *(undefined4 *)((longlong)param_3 + 4);
    uVar16 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_2 + 4) = uVar15;
    *(undefined4 *)(param_2 + 1) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  }
LAB_146e47016:
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e475ca FUN_146e475ca body=63 status=ok
// SIG undefined FUN_146e475ca(void)

ulonglong FUN_146e475ca(byte *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*param_1;
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar1 = FUN_144a78877(uVar2 & 0xffffffff,*(undefined2 *)(param_1 + uVar3 * 2 + 2));
      uVar2 = FUN_144a78877(uVar1,*(undefined4 *)(param_1 + uVar3 * 4 + 0x1c));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_1);
  }
  return uVar2;
}



// FUNCTION 146e4760a FUN_146e4760a body=1662 status=ok
// SIG undefined FUN_146e4760a(void)

void FUN_146e4760a(longlong param_1,longlong param_2,float param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,float param_7)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_190;
  longlong local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  fVar17 = param_7;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar8 = (longlong)param_4;
  lVar2 = *(longlong *)(param_1 + 800);
  puVar10 = &param_5;
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar8) != '\0') {
    puVar10 = &param_6;
  }
  pfVar3 = (float *)*puVar10;
  fVar15 = *(float *)(lVar2 + 8 + lVar8 * 0xc) * pfVar3[2] +
           *(float *)(lVar2 + lVar8 * 0xc) * *pfVar3 +
           *(float *)(lVar2 + 4 + lVar8 * 0xc) * pfVar3[1];
  if (0.0 < fVar15) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar7 = lVar8 * 0x10;
    local_170 = (longlong)*(int *)(lVar2 + 0xc + lVar7);
    local_188 = (longlong)*(int *)(lVar2 + 8 + lVar7);
    lVar9 = (longlong)*(int *)(lVar2 + 4 + lVar7);
    lVar7 = (longlong)*(int *)(lVar2 + lVar7);
    lVar2 = *(longlong *)(param_2 + 0xa8);
    lVar14 = local_188 * 0x10;
    local_178 = *(float *)(lVar2 + 0xc + lVar14);
    lVar11 = lVar9 * 0x10;
    local_17c = *(float *)(lVar2 + 0xc + lVar11);
    lVar12 = lVar7 * 0x10;
    local_180 = *(float *)(lVar2 + 0xc + lVar12);
    lVar13 = local_170 * 0x10;
    local_174 = *(float *)(lVar2 + 0xc + lVar13);
    local_128 = *(float *)(lVar2 + 8 + lVar12);
    local_130 = *(undefined8 *)(lVar2 + lVar12);
    local_138 = *(float *)(lVar2 + 8 + lVar11);
    local_140 = *(undefined8 *)(lVar2 + lVar11);
    local_148 = *(float *)(lVar2 + 8 + lVar14);
    local_150 = *(undefined8 *)(lVar2 + lVar14);
    local_158 = *(float *)(lVar2 + 8 + lVar13);
    local_198 = &local_160;
    local_160 = *(undefined8 *)(lVar2 + lVar13);
    fVar16 = local_17c + local_180 + local_178 + local_174;
    local_190 = 0;
    local_168 = param_2;
    FUN_1429b9404(&local_120);
    fVar15 = fVar15 / fVar16;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    lVar6 = local_188;
    lVar4 = *(longlong *)(local_168 + 0x28);
    lVar1 = local_188 * 0xc;
    lVar2 = local_188 * 0xc;
    param_3 = (fVar17 + fVar17) * fVar15 * param_3;
    local_188 = CONCAT44(local_188._4_4_,local_118);
    lVar5 = *(longlong *)(param_1 + 0x280);
    fVar15 = (-param_3 *
              ((local_158 - *(float *)(lVar4 + 8 + local_170 * 0xc)) * local_f4 +
               ((float)local_160 - *(float *)(lVar4 + local_170 * 0xc)) * local_fc +
               (local_160._4_4_ - *(float *)(lVar4 + 4 + local_170 * 0xc)) * local_f8 +
              (local_148 - *(float *)(lVar4 + 8 + lVar6 * 0xc)) * local_100 +
              ((float)local_150 - *(float *)(lVar4 + lVar2)) * local_108 +
              (local_150._4_4_ - *(float *)(lVar4 + 4 + lVar1)) * local_104 +
              (local_138 - *(float *)(lVar4 + 8 + lVar9 * 0xc)) * local_10c +
              ((float)local_140 - *(float *)(lVar4 + lVar9 * 0xc)) * local_114 +
              (local_140._4_4_ - *(float *)(lVar4 + 4 + lVar9 * 0xc)) * local_110 +
              (local_128 - *(float *)(lVar4 + 8 + lVar7 * 0xc)) * local_118 +
              ((float)local_130 - *(float *)(lVar4 + lVar7 * 0xc)) * local_120 +
              (local_130._4_4_ - *(float *)(lVar4 + 4 + lVar7 * 0xc)) * local_11c) -
             *(float *)(lVar5 + lVar8 * 4)) /
             (((local_f4 * local_f4 + local_fc * local_fc + local_f8 * local_f8) * local_174 +
              (local_100 * local_100 + local_108 * local_108 + local_104 * local_104) * local_178 +
              (local_118 * local_118 + local_120 * local_120 + local_11c * local_11c) * local_180 +
              (local_10c * local_10c + local_114 * local_114 + local_110 * local_110) * local_17c) *
              (param_3 + 0.0) + 1.0);
    lVar2 = *(longlong *)(local_168 + 0xa8);
    fVar17 = local_180 * fVar15;
    *(float *)(lVar2 + lVar12) = local_120 * fVar17 + *(float *)(lVar2 + lVar12);
    *(float *)(lVar2 + 4 + lVar12) = local_11c * fVar17 + *(float *)(lVar2 + 4 + lVar12);
    *(float *)(lVar2 + 8 + lVar12) = fVar17 * local_118 + *(float *)(lVar2 + 8 + lVar12);
    fVar17 = local_17c * fVar15;
    lVar2 = *(longlong *)(local_168 + 0xa8);
    *(float *)(lVar2 + lVar11) = local_114 * fVar17 + *(float *)(lVar2 + lVar11);
    *(float *)(lVar2 + 4 + lVar11) = local_110 * fVar17 + *(float *)(lVar2 + 4 + lVar11);
    *(float *)(lVar2 + 8 + lVar11) = fVar17 * local_10c + *(float *)(lVar2 + 8 + lVar11);
    fVar17 = local_178 * fVar15;
    lVar2 = *(longlong *)(local_168 + 0xa8);
    *(float *)(lVar2 + lVar14) = local_108 * fVar17 + *(float *)(lVar2 + lVar14);
    *(float *)(lVar2 + 4 + lVar14) = local_104 * fVar17 + *(float *)(lVar2 + 4 + lVar14);
    *(float *)(lVar2 + 8 + lVar14) = fVar17 * local_100 + *(float *)(lVar2 + 8 + lVar14);
    fVar17 = local_174 * fVar15;
    lVar2 = *(longlong *)(local_168 + 0xa8);
    *(float *)(lVar2 + lVar13) = local_fc * fVar17 + *(float *)(lVar2 + lVar13);
    *(float *)(lVar2 + 4 + lVar13) = local_f8 * fVar17 + *(float *)(lVar2 + 4 + lVar13);
    *(float *)(lVar2 + 8 + lVar13) = fVar17 * local_f4 + *(float *)(lVar2 + 8 + lVar13);
    *(float *)(lVar5 + lVar8 * 4) = fVar15 + *(float *)(lVar5 + lVar8 * 4);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e47c8a FUN_146e47c8a body=1085 status=ok
// SIG undefined FUN_146e47c8a(void)

void FUN_146e47c8a(longlong param_1,longlong param_2,float param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  float *local_150;
  longlong local_140;
  float local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = (longlong)param_4;
  lVar1 = *(longlong *)(param_1 + 800);
  puVar5 = (undefined8 *)&stack0x00000028;
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar9) != '\0') {
    puVar5 = (undefined8 *)&stack0x00000030;
  }
  pfVar2 = (float *)*puVar5;
  fVar10 = *(float *)(lVar1 + 8 + lVar9 * 0xc) * pfVar2[2] +
           *(float *)(lVar1 + lVar9 * 0xc) * *pfVar2 +
           *(float *)(lVar1 + 4 + lVar9 * 0xc) * pfVar2[1];
  if (0.0 < fVar10) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = lVar9 * 0x10;
    lVar3 = *(longlong *)(param_2 + 0xa8);
    lVar7 = (longlong)*(int *)(lVar1 + 8 + lVar4) * 0x10;
    fVar12 = *(float *)(lVar3 + 0xc + lVar7);
    lVar8 = (longlong)*(int *)(lVar1 + 4 + lVar4) * 0x10;
    fVar13 = *(float *)(lVar3 + 0xc + lVar8);
    lVar6 = (longlong)*(int *)(lVar1 + lVar4) * 0x10;
    fVar14 = *(float *)(lVar3 + 0xc + lVar6);
    lVar4 = (longlong)*(int *)(lVar1 + 0xc + lVar4) * 0x10;
    fVar11 = *(float *)(lVar3 + 0xc + lVar4);
    local_f8 = *(undefined4 *)(lVar3 + 8 + lVar6);
    local_100 = *(undefined8 *)(lVar3 + lVar6);
    local_108 = *(undefined4 *)(lVar3 + 8 + lVar8);
    local_110 = *(undefined8 *)(lVar3 + lVar8);
    local_118 = *(undefined4 *)(lVar3 + 8 + lVar7);
    local_120 = *(undefined8 *)(lVar3 + lVar7);
    local_128 = *(undefined4 *)(lVar3 + 8 + lVar4);
    local_158 = &local_130;
    local_130 = *(undefined8 *)(lVar3 + lVar4);
    local_150 = &local_134;
    local_134 = 0.0;
    local_140 = param_2;
    FUN_1429b9404(&local_f0);
    param_3 = fVar10 * param_3 * param_3;
    lVar1 = *(longlong *)(param_1 + 0x270);
    fVar10 = (-param_3 * (local_134 - *(float *)(*(longlong *)(param_1 + 0xf8) + lVar9 * 4)) -
             *(float *)(lVar1 + lVar9 * 4)) /
             (((local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8) * fVar11 +
              (local_d0 * local_d0 + local_d8 * local_d8 + local_d4 * local_d4) * fVar12 +
              (local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec) * fVar14 +
              (local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0) * fVar13) *
              (param_3 + 0.0) + 1.0);
    fVar14 = fVar14 * fVar10;
    lVar3 = *(longlong *)(local_140 + 0xa8);
    *(float *)(lVar3 + lVar6) = local_f0 * fVar14 + *(float *)(lVar3 + lVar6);
    *(float *)(lVar3 + 4 + lVar6) = local_ec * fVar14 + *(float *)(lVar3 + 4 + lVar6);
    *(float *)(lVar3 + 8 + lVar6) = fVar14 * local_e8 + *(float *)(lVar3 + 8 + lVar6);
    fVar13 = fVar13 * fVar10;
    lVar3 = *(longlong *)(local_140 + 0xa8);
    *(float *)(lVar3 + lVar8) = local_e4 * fVar13 + *(float *)(lVar3 + lVar8);
    *(float *)(lVar3 + 4 + lVar8) = local_e0 * fVar13 + *(float *)(lVar3 + 4 + lVar8);
    *(float *)(lVar3 + 8 + lVar8) = fVar13 * local_dc + *(float *)(lVar3 + 8 + lVar8);
    fVar12 = fVar12 * fVar10;
    lVar3 = *(longlong *)(local_140 + 0xa8);
    *(float *)(lVar3 + lVar7) = local_d8 * fVar12 + *(float *)(lVar3 + lVar7);
    *(float *)(lVar3 + 4 + lVar7) = local_d4 * fVar12 + *(float *)(lVar3 + 4 + lVar7);
    *(float *)(lVar3 + 8 + lVar7) = fVar12 * local_d0 + *(float *)(lVar3 + 8 + lVar7);
    fVar11 = fVar11 * fVar10;
    lVar3 = *(longlong *)(local_140 + 0xa8);
    *(float *)(lVar3 + lVar4) = local_cc * fVar11 + *(float *)(lVar3 + lVar4);
    *(float *)(lVar3 + 4 + lVar4) = local_c8 * fVar11 + *(float *)(lVar3 + 4 + lVar4);
    *(float *)(lVar3 + 8 + lVar4) = fVar11 * local_c4 + *(float *)(lVar3 + 8 + lVar4);
    *(float *)(lVar1 + lVar9 * 4) = fVar10 + *(float *)(lVar1 + lVar9 * 4);
  }
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e480c8 FUN_146e480c8 body=1718 status=ok
// SIG undefined FUN_146e480c8(void)

void FUN_146e480c8(longlong param_1,longlong param_2,float param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,float param_7)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_190;
  longlong local_188;
  float local_17c;
  float local_178;
  float local_174;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  fVar16 = param_7;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar9 = (longlong)param_4;
  lVar4 = *(longlong *)(param_1 + 800);
  puVar6 = &param_5;
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar9) != '\0') {
    puVar6 = &param_6;
  }
  pfVar1 = (float *)*puVar6;
  fVar14 = *(float *)(lVar4 + 8 + lVar9 * 0xc) * pfVar1[2] +
           *(float *)(lVar4 + lVar9 * 0xc) * *pfVar1 +
           *(float *)(lVar4 + 4 + lVar9 * 0xc) * pfVar1[1];
  if (0.0 < fVar14) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar5 = lVar9 * 0x10;
    local_170 = (longlong)*(int *)(lVar4 + 0xc + lVar5);
    local_188 = (longlong)*(int *)(lVar4 + 8 + lVar5);
    lVar8 = (longlong)*(int *)(lVar4 + 4 + lVar5);
    lVar5 = (longlong)*(int *)(lVar4 + lVar5);
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    lVar12 = local_170 * 0x10;
    local_174 = *(float *)(lVar12 + 0xc + lVar4);
    lVar13 = local_188 * 0x10;
    local_178 = *(float *)(lVar13 + 0xc + lVar4);
    lVar10 = lVar8 * 0x10;
    local_17c = *(float *)(lVar10 + 0xc + lVar4);
    lVar11 = lVar5 * 0x10;
    fVar17 = *(float *)(lVar11 + 0xc + lVar4);
    local_128 = *(float *)(lVar11 + 8 + lVar4);
    local_130 = *(undefined8 *)(lVar11 + lVar4);
    local_138 = *(float *)(lVar10 + 8 + lVar4);
    local_140 = *(undefined8 *)(lVar10 + lVar4);
    local_148 = *(float *)(lVar13 + 8 + lVar4);
    local_150 = *(undefined8 *)(lVar13 + lVar4);
    local_158 = *(float *)(lVar12 + 8 + lVar4);
    local_198 = &local_160;
    local_160 = *(undefined8 *)(lVar12 + lVar4);
    fVar15 = local_17c + fVar17 + local_178 + local_174;
    local_190 = 0;
    local_168 = lVar9;
    FUN_1429b9404(&local_120);
    fVar14 = fVar14 / fVar15;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    lVar3 = local_188;
    param_3 = (fVar16 + fVar16) * fVar14 * param_3;
    lVar7 = (longlong)*(int *)(param_2 + 0x10) * 0xc +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
    lVar9 = local_188 * 0xc;
    lVar4 = local_188 * 0xc;
    local_188 = CONCAT44(local_188._4_4_,local_118);
    lVar2 = *(longlong *)(param_1 + 0x280);
    fVar14 = (-param_3 *
              ((local_158 - *(float *)(lVar7 + 8 + local_170 * 0xc)) * local_f4 +
               ((float)local_160 - *(float *)(lVar7 + local_170 * 0xc)) * local_fc +
               (local_160._4_4_ - *(float *)(lVar7 + 4 + local_170 * 0xc)) * local_f8 +
              (local_148 - *(float *)(lVar7 + 8 + lVar3 * 0xc)) * local_100 +
              ((float)local_150 - *(float *)(lVar7 + lVar4)) * local_108 +
              (local_150._4_4_ - *(float *)(lVar7 + 4 + lVar9)) * local_104 +
              (local_138 - *(float *)(lVar7 + 8 + lVar8 * 0xc)) * local_10c +
              ((float)local_140 - *(float *)(lVar7 + lVar8 * 0xc)) * local_114 +
              (local_140._4_4_ - *(float *)(lVar7 + 4 + lVar8 * 0xc)) * local_110 +
              (local_128 - *(float *)(lVar7 + 8 + lVar5 * 0xc)) * local_118 +
              ((float)local_130 - *(float *)(lVar7 + lVar5 * 0xc)) * local_120 +
              (local_130._4_4_ - *(float *)(lVar7 + 4 + lVar5 * 0xc)) * local_11c) -
             *(float *)(lVar2 + local_168 * 4)) /
             (((local_f4 * local_f4 + local_fc * local_fc + local_f8 * local_f8) * local_174 +
              (local_100 * local_100 + local_108 * local_108 + local_104 * local_104) * local_178 +
              (local_118 * local_118 + local_120 * local_120 + local_11c * local_11c) * fVar17 +
              (local_10c * local_10c + local_114 * local_114 + local_110 * local_110) * local_17c) *
              (param_3 + 0.0) + 1.0);
    fVar17 = fVar17 * fVar14;
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar11 + lVar4) = local_120 * fVar17 + *(float *)(lVar11 + lVar4);
    *(float *)(lVar11 + 4 + lVar4) = local_11c * fVar17 + *(float *)(lVar11 + 4 + lVar4);
    *(float *)(lVar11 + 8 + lVar4) = fVar17 * local_118 + *(float *)(lVar11 + 8 + lVar4);
    fVar16 = local_17c * fVar14;
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar10 + lVar4) = local_114 * fVar16 + *(float *)(lVar10 + lVar4);
    *(float *)(lVar10 + 4 + lVar4) = local_110 * fVar16 + *(float *)(lVar10 + 4 + lVar4);
    *(float *)(lVar10 + 8 + lVar4) = fVar16 * local_10c + *(float *)(lVar10 + 8 + lVar4);
    fVar16 = local_178 * fVar14;
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar13 + lVar4) = local_108 * fVar16 + *(float *)(lVar13 + lVar4);
    *(float *)(lVar13 + 4 + lVar4) = local_104 * fVar16 + *(float *)(lVar13 + 4 + lVar4);
    *(float *)(lVar13 + 8 + lVar4) = fVar16 * local_100 + *(float *)(lVar13 + 8 + lVar4);
    fVar16 = local_174 * fVar14;
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar12 + lVar4) = local_fc * fVar16 + *(float *)(lVar12 + lVar4);
    *(float *)(lVar12 + 4 + lVar4) = local_f8 * fVar16 + *(float *)(lVar12 + 4 + lVar4);
    *(float *)(lVar12 + 8 + lVar4) = fVar16 * local_f4 + *(float *)(lVar12 + 8 + lVar4);
    *(float *)(lVar2 + local_168 * 4) = fVar14 + *(float *)(lVar2 + local_168 * 4);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e48780 FUN_146e48780 body=1153 status=ok
// SIG undefined FUN_146e48780(void)

void FUN_146e48780(longlong param_1,longlong param_2,float param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  float *local_150;
  longlong local_140;
  float local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = (longlong)param_4;
  lVar1 = *(longlong *)(param_1 + 800);
  puVar5 = (undefined8 *)&stack0x00000028;
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar6) != '\0') {
    puVar5 = (undefined8 *)&stack0x00000030;
  }
  pfVar2 = (float *)*puVar5;
  fVar10 = *(float *)(lVar1 + 8 + lVar6 * 0xc) * pfVar2[2] +
           *(float *)(lVar1 + lVar6 * 0xc) * *pfVar2 +
           *(float *)(lVar1 + 4 + lVar6 * 0xc) * pfVar2[1];
  if (0.0 < fVar10) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = lVar6 * 0x10;
    lVar3 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    lVar9 = (longlong)*(int *)(lVar1 + 0xc + lVar4) * 0x10;
    fVar11 = *(float *)(lVar9 + 0xc + lVar3);
    lVar7 = (longlong)*(int *)(lVar1 + 8 + lVar4) * 0x10;
    fVar12 = *(float *)(lVar7 + 0xc + lVar3);
    lVar8 = (longlong)*(int *)(lVar1 + 4 + lVar4) * 0x10;
    fVar13 = *(float *)(lVar8 + 0xc + lVar3);
    lVar4 = (longlong)*(int *)(lVar1 + lVar4) * 0x10;
    fVar14 = *(float *)(lVar4 + 0xc + lVar3);
    local_f8 = *(undefined4 *)(lVar4 + 8 + lVar3);
    local_100 = *(undefined8 *)(lVar4 + lVar3);
    local_108 = *(undefined4 *)(lVar8 + 8 + lVar3);
    local_110 = *(undefined8 *)(lVar8 + lVar3);
    local_118 = *(undefined4 *)(lVar7 + 8 + lVar3);
    local_120 = *(undefined8 *)(lVar7 + lVar3);
    local_128 = *(undefined4 *)(lVar9 + 8 + lVar3);
    local_158 = &local_130;
    local_130 = *(undefined8 *)(lVar9 + lVar3);
    local_150 = &local_134;
    local_134 = 0.0;
    local_140 = lVar6;
    FUN_1429b9404(&local_f0);
    param_3 = fVar10 * param_3 * param_3;
    lVar1 = *(longlong *)(param_1 + 0x270);
    fVar10 = (-param_3 * (local_134 - *(float *)(*(longlong *)(param_1 + 0xf8) + local_140 * 4)) -
             *(float *)(lVar1 + local_140 * 4)) /
             (((local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8) * fVar11 +
              (local_d0 * local_d0 + local_d8 * local_d8 + local_d4 * local_d4) * fVar12 +
              (local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec) * fVar14 +
              (local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0) * fVar13) *
              (param_3 + 0.0) + 1.0);
    fVar14 = fVar14 * fVar10;
    lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar4 + lVar6) = local_f0 * fVar14 + *(float *)(lVar4 + lVar6);
    *(float *)(lVar4 + 4 + lVar6) = local_ec * fVar14 + *(float *)(lVar4 + 4 + lVar6);
    *(float *)(lVar4 + 8 + lVar6) = fVar14 * local_e8 + *(float *)(lVar4 + 8 + lVar6);
    fVar13 = fVar13 * fVar10;
    lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar8 + lVar6) = local_e4 * fVar13 + *(float *)(lVar8 + lVar6);
    *(float *)(lVar8 + 4 + lVar6) = local_e0 * fVar13 + *(float *)(lVar8 + 4 + lVar6);
    *(float *)(lVar8 + 8 + lVar6) = fVar13 * local_dc + *(float *)(lVar8 + 8 + lVar6);
    fVar12 = fVar12 * fVar10;
    lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar7 + lVar6) = local_d8 * fVar12 + *(float *)(lVar7 + lVar6);
    *(float *)(lVar7 + 4 + lVar6) = local_d4 * fVar12 + *(float *)(lVar7 + 4 + lVar6);
    *(float *)(lVar7 + 8 + lVar6) = fVar12 * local_d0 + *(float *)(lVar7 + 8 + lVar6);
    fVar11 = fVar11 * fVar10;
    lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    *(float *)(lVar9 + lVar6) = local_cc * fVar11 + *(float *)(lVar9 + lVar6);
    *(float *)(lVar9 + 4 + lVar6) = local_c8 * fVar11 + *(float *)(lVar9 + 4 + lVar6);
    *(float *)(lVar9 + 8 + lVar6) = fVar11 * local_c4 + *(float *)(lVar9 + 8 + lVar6);
    *(float *)(lVar1 + local_140 * 4) = fVar10 + *(float *)(lVar1 + local_140 * 4);
  }
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e48c02 FUN_146e48c02 body=3677 status=ok
// SIG undefined FUN_146e48c02(void)

undefined8 *
FUN_146e48c02(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1a8 [32];
  undefined2 **local_188;
  undefined8 *local_180;
  ulonglong *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118 [2];
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  float fStack_f4;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_1 = &PTR_FUN_149f5f4a0;
  local_84 = 0;
  local_130 = param_3;
  local_128 = param_4;
  local_120 = param_2;
  uVar3 = FUN_146e49a60(param_6);
  FUN_146e49ae2(local_8c,param_6);
  FUN_146e49b76(local_94,param_6);
  local_a0 = 0;
  FUN_146e49c1c(local_9c,param_6);
  FUN_146e49cca(local_a8,param_6);
  FUN_146e49d70(&local_b8,param_5,param_6);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1400021e4(&DAT_14c996284,&local_f8);
  FUN_146e49ebe(&local_e8,param_6,&local_f8);
  iVar5 = local_e0 + -1;
  puVar9 = local_e8;
  if (local_e0 == 0) {
    iVar5 = 0;
    puVar9 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar4,&local_e8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_d8 = (undefined2 *)0x0;
    iStack_d0 = 0;
  }
  else {
    local_d8 = *(undefined2 **)(lVar7 + 0x10);
    iStack_d0 = *(int *)(lVar7 + 0x18);
    uStack_cc = *(undefined4 *)(lVar7 + 0x1c);
  }
  local_108 = 0;
  local_100 = 0;
  FUN_1403402f8(local_130,local_118);
  uVar2 = local_120;
  local_158 = local_8c;
  local_160 = local_94;
  local_168 = local_9c;
  local_180 = &local_c8;
  local_188 = &local_d8;
  local_140 = 0x4b189680;
  local_148 = 1;
  local_178 = &local_b8;
  local_170 = local_a8;
  local_150 = uVar3;
  FUN_146e49f3e(param_1,local_120,local_118,&local_108);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(fStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f5f4a0;
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996264,&local_e8);
  FUN_146e4a192(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e49cca(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x24,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x26) = local_b0;
  if (*(int *)(param_1 + 0x25) == local_b0) {
    uVar8 = param_1[0x24];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x27] = uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  *(float *)(param_1 + 0x29) = fVar11;
  *(float *)((longlong)param_1 + 0x14c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99626c,&local_e8);
  FUN_146e4a212(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a292(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x2a,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x2c) = local_b0;
  if (*(int *)(param_1 + 0x2b) == local_b0) {
    uVar8 = param_1[0x2a];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x2d] = uVar8;
  *(int *)(param_1 + 0x2e) = iVar5;
  *(float *)(param_1 + 0x2f) = fVar11;
  *(float *)((longlong)param_1 + 0x17c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996274,&local_e8);
  FUN_146e4a338(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a3b8(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x30,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x32) = local_b0;
  if (*(int *)(param_1 + 0x31) == local_b0) {
    uVar8 = param_1[0x30];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x33] = uVar8;
  *(int *)(param_1 + 0x34) = iVar5;
  *(float *)(param_1 + 0x35) = fVar11;
  *(float *)((longlong)param_1 + 0x1ac) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99628c,&local_e8);
  FUN_146e4a45e(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e49b76(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x36,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x38) = local_b0;
  if (*(int *)(param_1 + 0x37) == local_b0) {
    uVar8 = param_1[0x36];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x39] = uVar8;
  *(int *)(param_1 + 0x3a) = iVar5;
  *(float *)(param_1 + 0x3b) = fVar11;
  *(float *)((longlong)param_1 + 0x1dc) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996294,&local_e8);
  FUN_146e4a4de(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a55e(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x3c,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x3e) = local_b0;
  if (*(int *)(param_1 + 0x3d) == local_b0) {
    uVar8 = param_1[0x3c];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x3f] = uVar8;
  *(int *)(param_1 + 0x40) = iVar5;
  *(float *)(param_1 + 0x41) = fVar11;
  *(float *)((longlong)param_1 + 0x20c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99629c,&local_e8);
  FUN_146e4a604(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a684(&local_f8,param_6);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x42,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x44) = local_b0;
  if (*(int *)(param_1 + 0x43) == local_b0) {
    uVar8 = param_1[0x42];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x45] = uVar8;
  *(int *)(param_1 + 0x46) = iVar5;
  *(float *)(param_1 + 0x47) = fVar11;
  *(float *)((longlong)param_1 + 0x23c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99627c,&local_e8);
  FUN_146e4a72a(&local_d8,param_6,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_5,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_5;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a7aa(&local_f8,param_6);
  if (1000.0 <= fStack_f4) {
    fStack_f4 = 1000.0;
  }
  if (fStack_f4 <= 0.0) {
    fStack_f4 = 0.0;
  }
  fVar10 = local_f8;
  if (1000.0 <= local_f8) {
    fVar10 = 1000.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_188 = (undefined2 **)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x48,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x4a) = local_b0;
  if (*(int *)(param_1 + 0x49) == local_b0) {
    uVar8 = param_1[0x48];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x4b] = uVar8;
  *(int *)(param_1 + 0x4c) = iVar5;
  *(float *)(param_1 + 0x4d) = fVar10;
  *(float *)((longlong)param_1 + 0x26c) = fStack_f4 - fVar10;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  memset(param_1 + 0x4e,0,0xb0);
  FUN_146e4a84a(param_1,param_1 + 100,local_128,local_130);
  FUN_146e4ae82(param_1 + 0x66,param_6);
  FUN_146e4aef0((longlong)param_1 + 0x334,param_6);
  FUN_146e4af5e(param_1 + 0x67,param_6);
  FUN_146e4afcc((longlong)param_1 + 0x33c,param_6);
  FUN_146e4b03a(param_1 + 0x68,param_6);
  FUN_146e4b0a8((longlong)param_1 + 0x344,param_6);
  FUN_146e4b116(param_1 + 0x69,param_6);
  FUN_146e4b184((longlong)param_1 + 0x34c,param_6);
  FUN_146e4b1f2(param_1 + 0x6a,param_6);
  FUN_146e4b260((longlong)param_1 + 0x354,param_6);
  FUN_146e4b2ce(param_1 + 0x6b,param_6);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x4e,&local_b8,*(undefined4 *)(param_1 + 2));
  FUN_146e4b33c(param_1,uVar2);
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49a60 FUN_146e49a60 body=129 status=ok
// SIG undefined FUN_146e49a60(void)

undefined4 FUN_146e49a60(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962b4,local_30);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = FUN_142991408(param_1,iVar1,param_1 + 0x18);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49ae2 FUN_146e49ae2 body=147 status=ok
// SIG undefined FUN_146e49ae2(void)

undefined8 * FUN_146e49ae2(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_146e49a60(param_2);
  if (cVar1 == '\x01') {
    local_1c = 0;
    FUN_146e4e352(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    local_1c = 0;
    FUN_146e4e400(param_1,param_2);
  }
  else {
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49b76 FUN_146e49b76 body=164 status=ok
// SIG undefined FUN_146e49b76(void)

undefined8 * FUN_146e49b76(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99628c,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49c1c FUN_146e49c1c body=173 status=ok
// SIG undefined FUN_146e49c1c(void)

undefined8 * FUN_146e49c1c(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996284,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49cca FUN_146e49cca body=164 status=ok
// SIG undefined FUN_146e49cca(void)

undefined8 * FUN_146e49cca(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996264,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49d70 FUN_146e49d70 body=333 status=ok
// SIG undefined FUN_146e49d70(void)

undefined8 * FUN_146e49d70(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  cVar3 = FUN_146e49a60(param_3);
  if (cVar3 == '\x01') {
    FUN_1400021e4(&DAT_14c9962a4,local_50);
    FUN_146e4e4ae(&local_40,param_3,local_50);
  }
  else {
    if (cVar3 != '\x02') {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_146e49dc0;
    }
    FUN_1400021e4(&DAT_14c9962ac,local_50);
    FUN_146e4e52e(&local_40,param_3,local_50);
  }
  if (local_38 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)CONCAT44(uStack_3c,local_40);
  }
  iVar5 = local_38 + -1;
  if (local_38 == 0) {
    iVar5 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar7);
  iVar5 = FUN_140aad9fa(param_2,uVar4,&local_40);
  lVar6 = (longlong)iVar5 * 0x28 + *param_2;
  if (lVar6 == 0 || iVar5 == -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar6 + 0x14);
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    uVar2 = *(undefined4 *)(lVar6 + 0x1c);
    *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  }
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_146e49dc0:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49ebe FUN_146e49ebe body=127 status=ok
// SIG undefined FUN_146e49ebe(void)

undefined8 FUN_146e49ebe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996284,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e49f3e FUN_146e49f3e body=594 status=ok
// SIG undefined FUN_146e49f3e(void)

undefined8 *
FUN_146e49f3e(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             float *param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             char param_13,undefined4 param_14)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_149f5f4a8;
  if (param_13 == '\0') {
    param_1[1] = 0;
    param_1[1] = *param_3;
    *param_3 = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  else {
    FUN_146e4e5ae(param_1 + 1,param_3,param_2);
  }
  FUN_1408e9172(param_1 + 3,param_1 + 1);
  *(undefined4 *)(param_1 + 5) = 0;
  local_a0._0_4_ = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x2c) = (undefined4)local_a0;
  local_70 = param_1[3];
  local_68 = *(undefined4 *)(param_1 + 4);
  local_88 = param_14;
  local_90 = CONCAT44(local_90._4_4_,0x447a0000);
  local_98 = 0x10;
  local_a8._0_4_ = 0;
  FUN_140a9b824(param_1 + 6,param_8,param_4,&local_70);
  local_a8._0_4_ = *(undefined4 *)(param_1 + 5);
  local_a0._0_4_ = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_70 = param_1[3];
  local_68 = *(undefined4 *)(param_1 + 4);
  local_78 = *param_9;
  local_74 = param_9[1];
  if (1.0 <= local_74) {
    local_74 = 1.0;
  }
  if (local_74 <= 0.0) {
    local_74 = 0.0;
  }
  if (1.0 <= local_78) {
    local_78 = 1.0;
  }
  if (local_78 <= 0.0) {
    local_78 = 0.0;
  }
  local_98 = 0x10;
  local_90 = 0;
  FUN_140a9b934(param_1 + 0xf,&local_78,param_5,&local_70);
  local_70 = param_1[3];
  local_68 = *(undefined4 *)(param_1 + 4);
  local_88 = param_14;
  local_90 = CONCAT44(local_90._4_4_,0x447a0000);
  local_98 = 0x10;
  local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)((longlong)param_1 + 0x2c));
  local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 5));
  FUN_140a9b824(param_1 + 0x16,param_10,param_6,&local_70);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)param_1[0x12];
  local_98 = CONCAT31(local_98._1_3_,param_12);
  local_a0 = param_11;
  local_a8 = param_7;
  FUN_146ddabe2(param_1,param_2,*(undefined4 *)(param_1 + 5),
                *(undefined4 *)((longlong)param_1 + 0x2c));
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a192 FUN_146e4a192 body=127 status=ok
// SIG undefined FUN_146e4a192(void)

undefined8 FUN_146e4a192(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996264,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a212 FUN_146e4a212 body=127 status=ok
// SIG undefined FUN_146e4a212(void)

undefined8 FUN_146e4a212(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c99626c,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a292 FUN_146e4a292 body=164 status=ok
// SIG undefined FUN_146e4a292(void)

undefined8 * FUN_146e4a292(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99626c,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a338 FUN_146e4a338 body=127 status=ok
// SIG undefined FUN_146e4a338(void)

undefined8 FUN_146e4a338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996274,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a3b8 FUN_146e4a3b8 body=164 status=ok
// SIG undefined FUN_146e4a3b8(void)

undefined8 * FUN_146e4a3b8(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996274,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a45e FUN_146e4a45e body=127 status=ok
// SIG undefined FUN_146e4a45e(void)

undefined8 FUN_146e4a45e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c99628c,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a4de FUN_146e4a4de body=127 status=ok
// SIG undefined FUN_146e4a4de(void)

undefined8 FUN_146e4a4de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996294,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a55e FUN_146e4a55e body=164 status=ok
// SIG undefined FUN_146e4a55e(void)

undefined8 * FUN_146e4a55e(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996294,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a604 FUN_146e4a604 body=127 status=ok
// SIG undefined FUN_146e4a604(void)

undefined8 FUN_146e4a604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c99629c,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a684 FUN_146e4a684 body=164 status=ok
// SIG undefined FUN_146e4a684(void)

undefined8 * FUN_146e4a684(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99629c,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a72a FUN_146e4a72a body=127 status=ok
// SIG undefined FUN_146e4a72a(void)

undefined8 FUN_146e4a72a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c99627c,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a7aa FUN_146e4a7aa body=158 status=ok
// SIG undefined FUN_146e4a7aa(void)

undefined8 * FUN_146e4a7aa(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99627c,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4a84a FUN_146e4a84a body=1590 status=ok
// SIG undefined FUN_146e4a84a(void)

longlong * FUN_146e4a84a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  uint local_120;
  uint uStack_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_128 = param_3;
  if (0 < (int)param_4[1]) {
    lVar13 = 8;
    lVar14 = 0;
    local_130 = param_4;
    do {
      lVar9 = *param_4;
      lVar4 = *local_128;
      uVar2 = *(uint *)(lVar9 + -8 + lVar13);
      uStack_11c = *(uint *)(lVar9 + -4 + lVar13);
      local_120 = uStack_11c;
      if ((int)uVar2 < (int)uStack_11c) {
        local_120 = uVar2;
      }
      if ((int)uStack_11c < (int)uVar2) {
        uStack_11c = uVar2;
      }
      plVar7 = (longlong *)
               FUN_146e7b2f6(&local_118,
                             local_120 * 0x40 + uStack_11c +
                             ((uint)(CONCAT44(uStack_11c,local_120) >> 2) & 0x3fffffff) + 0x9e3779b9
                             ^ local_120,&local_120);
      fVar15 = ABS(*(float *)(lVar4 + -4 + lVar13 * 2) - *(float *)(lVar4 + -0xc + lVar13 * 2));
      fVar16 = ABS(*(float *)(lVar4 + -8 + lVar13 * 2) - *(float *)(lVar4 + -0x10 + lVar13 * 2));
      fVar18 = fVar15;
      if (fVar16 <= fVar15) {
        fVar18 = fVar16;
      }
      fVar17 = (float)(~-(uint)(fVar15 < fVar16) & (uint)(fVar15 - fVar16) |
                      -(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) + fVar18;
      fVar19 = 0.0;
      fVar20 = 1.0;
      fVar21 = 0.0;
      if (1e-08 < fVar17) {
        if (fVar16 <= fVar15) {
          fVar19 = fVar15 - fVar16;
        }
        fVar21 = fVar18 / fVar17;
        fVar20 = (float)(-(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) / fVar17;
        fVar19 = fVar19 / fVar17;
      }
      iVar11 = (int)plVar7[1];
      lVar8 = (longlong)iVar11;
      *(uint *)(plVar7 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar11 + 1U) {
        FUN_140aacb36(plVar7,iVar11);
      }
      lVar5 = *plVar7;
      *(float *)(lVar5 + lVar8 * 0xc) = fVar19;
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar20;
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar21;
      uVar2 = *(uint *)(lVar9 + -4 + lVar13);
      uStack_11c = *(uint *)(lVar9 + lVar13);
      local_120 = uStack_11c;
      if ((int)uVar2 < (int)uStack_11c) {
        local_120 = uVar2;
      }
      if ((int)uStack_11c < (int)uVar2) {
        uStack_11c = uVar2;
      }
      plVar7 = (longlong *)
               FUN_146e7b2f6(&local_118,
                             local_120 * 0x40 + uStack_11c +
                             ((uint)(CONCAT44(uStack_11c,local_120) >> 2) & 0x3fffffff) + 0x9e3779b9
                             ^ local_120,&local_120);
      fVar15 = ABS(*(float *)(lVar4 + 4 + lVar13 * 2) - *(float *)(lVar4 + -4 + lVar13 * 2));
      fVar16 = ABS(*(float *)(lVar4 + lVar13 * 2) - *(float *)(lVar4 + -8 + lVar13 * 2));
      fVar18 = fVar15;
      if (fVar16 <= fVar15) {
        fVar18 = fVar16;
      }
      fVar17 = (float)(~-(uint)(fVar15 < fVar16) & (uint)(fVar15 - fVar16) |
                      -(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) + fVar18;
      fVar19 = 0.0;
      fVar20 = 1.0;
      fVar21 = 0.0;
      if (1e-08 < fVar17) {
        if (fVar16 <= fVar15) {
          fVar19 = fVar15 - fVar16;
        }
        fVar21 = fVar18 / fVar17;
        fVar20 = (float)(-(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) / fVar17;
        fVar19 = fVar19 / fVar17;
      }
      iVar11 = (int)plVar7[1];
      lVar8 = (longlong)iVar11;
      *(uint *)(plVar7 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar11 + 1U) {
        FUN_140aacb36(plVar7,iVar11);
      }
      lVar5 = *plVar7;
      *(float *)(lVar5 + lVar8 * 0xc) = fVar19;
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar20;
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar21;
      uStack_11c = *(uint *)(lVar9 + -8 + lVar13);
      uVar2 = *(uint *)(lVar9 + lVar13);
      local_120 = uStack_11c;
      if ((int)uVar2 < (int)uStack_11c) {
        local_120 = uVar2;
      }
      if ((int)uStack_11c < (int)uVar2) {
        uStack_11c = uVar2;
      }
      plVar7 = (longlong *)
               FUN_146e7b2f6(&local_118,
                             local_120 * 0x40 + uStack_11c +
                             ((uint)(CONCAT44(uStack_11c,local_120) >> 2) & 0x3fffffff) + 0x9e3779b9
                             ^ local_120,&local_120);
      param_4 = local_130;
      fVar15 = ABS(*(float *)(lVar4 + -0xc + lVar13 * 2) - *(float *)(lVar4 + 4 + lVar13 * 2));
      fVar16 = ABS(*(float *)(lVar4 + -0x10 + lVar13 * 2) - *(float *)(lVar4 + lVar13 * 2));
      fVar18 = fVar15;
      if (fVar16 <= fVar15) {
        fVar18 = fVar16;
      }
      fVar17 = (float)(~-(uint)(fVar15 < fVar16) & (uint)(fVar15 - fVar16) |
                      -(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) + fVar18;
      fVar19 = 0.0;
      fVar20 = 1.0;
      fVar21 = 0.0;
      if (1e-08 < fVar17) {
        if (fVar16 <= fVar15) {
          fVar19 = fVar15 - fVar16;
        }
        fVar21 = fVar18 / fVar17;
        fVar20 = (float)(-(uint)(fVar15 < fVar16) & (uint)(fVar16 - fVar15)) / fVar17;
        fVar19 = fVar19 / fVar17;
      }
      iVar11 = (int)plVar7[1];
      lVar9 = (longlong)iVar11;
      *(uint *)(plVar7 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xc) < iVar11 + 1U) {
        FUN_140aacb36(plVar7,iVar11);
      }
      lVar4 = *plVar7;
      *(float *)(lVar4 + lVar9 * 0xc) = fVar19;
      *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar20;
      *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar21;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0xc;
    } while (lVar14 < (int)param_4[1]);
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140aacae8(param_2,*(undefined4 *)(param_1 + 0x10),1);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar13 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8);
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar13 * 8);
      uVar6 = uVar3;
      if ((int)uVar3 < (int)uVar2) {
        uVar6 = uVar2;
      }
      if ((int)uVar2 < (int)uVar3) {
        uVar3 = uVar2;
      }
      if ((int)uStack_110 != local_e4) {
        puVar12 = local_d8;
        if (local_d8 == (undefined1 *)0x0) {
          puVar12 = local_e0;
        }
        iVar11 = *(int *)(puVar12 +
                         (ulonglong)
                         (local_d0 - 1U & (uVar3 * 0x40 + uVar6 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)
                         ) * 4);
        if (iVar11 != -1) {
          do {
            lVar14 = local_118 + (longlong)iVar11 * 0x20;
            if (*(longlong *)(local_118 + (longlong)iVar11 * 0x20) == CONCAT44(uVar6,uVar3))
            goto LAB_146e4acdf;
            iVar11 = *(int *)(lVar14 + 0x18);
          } while (iVar11 != -1);
        }
      }
      lVar14 = 0;
LAB_146e4acdf:
      iVar11 = *(int *)(lVar14 + 0x10);
      if ((longlong)iVar11 == 0) {
        fVar18 = 0.0;
        fVar16 = 0.0;
        fVar15 = 0.0;
      }
      else {
        pfVar10 = *(float **)(lVar14 + 8);
        pfVar1 = pfVar10 + (longlong)iVar11 * 3;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar19 = 0.0;
        do {
          fVar15 = fVar15 + *pfVar10;
          fVar16 = fVar16 + pfVar10[1];
          fVar19 = fVar19 + pfVar10[2];
          pfVar10 = pfVar10 + 3;
        } while (pfVar10 != pfVar1);
        fVar18 = 1.0 / (float)iVar11;
        fVar15 = fVar15 * fVar18;
        fVar16 = fVar16 * fVar18;
        fVar18 = fVar18 * fVar19;
      }
      lVar14 = *param_2;
      *(float *)(lVar14 + lVar13 * 0xc) = fVar15;
      *(float *)(lVar14 + 4 + lVar13 * 0xc) = fVar16;
      *(float *)(lVar14 + 8 + lVar13 * 0xc) = fVar18;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x10));
  }
  local_d0 = 0;
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146e4e6f0(&local_118);
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e4ae82 FUN_146e4ae82 body=109 status=ok
// SIG undefined FUN_146e4ae82(void)

undefined4 * FUN_146e4ae82(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996264,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4aef0 FUN_146e4aef0 body=109 status=ok
// SIG undefined FUN_146e4aef0(void)

undefined4 * FUN_146e4aef0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99626c,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4af5e FUN_146e4af5e body=109 status=ok
// SIG undefined FUN_146e4af5e(void)

undefined4 * FUN_146e4af5e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996274,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4afcc FUN_146e4afcc body=109 status=ok
// SIG undefined FUN_146e4afcc(void)

undefined4 * FUN_146e4afcc(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99627c,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b03a FUN_146e4b03a body=109 status=ok
// SIG undefined FUN_146e4b03a(void)

undefined4 * FUN_146e4b03a(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996284,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b0a8 FUN_146e4b0a8 body=109 status=ok
// SIG undefined FUN_146e4b0a8(void)

undefined4 * FUN_146e4b0a8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99628c,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b116 FUN_146e4b116 body=109 status=ok
// SIG undefined FUN_146e4b116(void)

undefined4 * FUN_146e4b116(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996294,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b184 FUN_146e4b184 body=109 status=ok
// SIG undefined FUN_146e4b184(void)

undefined4 * FUN_146e4b184(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c99629c,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b1f2 FUN_146e4b1f2 body=109 status=ok
// SIG undefined FUN_146e4b1f2(void)

undefined4 * FUN_146e4b1f2(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962a4,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b260 FUN_146e4b260 body=109 status=ok
// SIG undefined FUN_146e4b260(void)

undefined4 * FUN_146e4b260(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962ac,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b2ce FUN_146e4b2ce body=109 status=ok
// SIG undefined FUN_146e4b2ce(void)

undefined4 * FUN_146e4b2ce(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962b4,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b33c FUN_146e4b33c body=1267 status=ok
// SIG undefined FUN_146e4b33c(void)

void FUN_146e4b33c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong *local_b0;
  longlong local_a8 [3];
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c75f304 < *(int *)(param_1 + 0x10)) {
    local_b0 = (longlong *)(param_1 + 8);
    local_b8 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_146d8f40e(&local_58,local_b0,param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8[2] = 0;
    uStack_90 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_1412883ce(&local_68,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140bfb9f0(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(&local_88,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140aacae8(local_a8 + 2,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(local_a8,*(undefined4 *)(param_1 + 0x10),1);
    plVar1 = (longlong *)(param_1 + 0x290);
    FUN_144a9ff88(plVar1,local_50 + 1);
    iVar11 = 0;
    if ((longlong)local_50 != 0) {
      plVar10 = local_58 + (longlong)local_50 * 2;
      iVar11 = 0;
      plVar15 = local_58;
      do {
        iVar4 = *(int *)(param_1 + 0x298);
        *(uint *)(param_1 + 0x298) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x29c) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar11;
        lVar7 = plVar15[1];
        if ((longlong)(int)lVar7 != 0) {
          lVar8 = *plVar15;
          lVar9 = (longlong)iVar11 * 4;
          lVar12 = (longlong)iVar11 * 0xc;
          lVar13 = 0;
          do {
            lVar14 = (longlong)*(int *)(lVar8 + lVar13);
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar14 * 0x10);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(local_68 + lVar9 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            *(undefined8 *)(local_78 + lVar9 * 2) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8);
            *(undefined4 *)(local_88 + lVar9) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar14 * 4);
            lVar5 = *(longlong *)(param_1 + 800);
            *(undefined4 *)(local_a8[2] + 8 + lVar12) = *(undefined4 *)(lVar5 + 8 + lVar14 * 0xc);
            *(undefined8 *)(local_a8[2] + lVar12) = *(undefined8 *)(lVar5 + lVar14 * 0xc);
            *(int *)(local_a8[0] + lVar14 * 4) = iVar11;
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0xc;
            lVar9 = lVar9 + 4;
            lVar13 = lVar13 + 4;
          } while ((longlong)(int)lVar7 * 4 != lVar13);
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar10);
    }
    iVar4 = *(int *)(param_1 + 0x298);
    *(uint *)(param_1 + 0x298) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x29c) < iVar4 + 1U) {
      FUN_1446f48e2(plVar1,iVar4);
    }
    *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar11;
    if (local_b0 != &local_68) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != &local_78) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0xf8) != &local_88) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xf8) = local_88;
      local_88 = 0;
      *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x104) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    if ((longlong *)(param_1 + 800) != local_a8 + 2) {
      if (*(longlong *)(param_1 + 800) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 800) = local_a8[2];
      local_a8[2] = 0;
      *(undefined4 *)(param_1 + 0x328) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 0x32c) = uStack_90._4_4_;
      uStack_90 = 0;
    }
    FUN_146e41322(param_1 + 0x120,local_a8);
    FUN_146e41322(param_1 + 0x150,local_a8);
    FUN_146e41322(param_1 + 0x180,local_a8);
    FUN_141729db6(param_1 + 0x78,local_a8);
    FUN_146e41322(param_1 + 0x1b0,local_a8);
    FUN_146e41322(param_1 + 0x1e0,local_a8);
    FUN_146e41322(param_1 + 0x210,local_a8);
    FUN_146e41322(param_1 + 0x240,local_a8);
    FUN_144a127d2(param_1 + 0x2a0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2c0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2d0,*(undefined4 *)(param_1 + 0x10),1);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc + lVar7 * 4);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 4;
      } while (lVar8 < *(int *)(param_1 + 0x10));
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4b830 FUN_146e4b830 body=3743 status=ok
// SIG undefined FUN_146e4b830(void)

undefined8 *
FUN_146e4b830(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 *local_180;
  undefined2 **local_178;
  undefined8 *local_170;
  ulonglong *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  longlong local_118 [2];
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  float fStack_f4;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_1 = &PTR_FUN_149f5f4a0;
  local_84 = 0;
  local_128 = param_3;
  local_124 = param_4;
  local_120 = param_2;
  uVar3 = FUN_146e49a60(param_8);
  FUN_146e49ae2(local_8c,param_8);
  FUN_146e49b76(local_94,param_8);
  local_a0 = 0;
  FUN_146e49c1c(local_9c,param_8);
  FUN_146e49cca(local_a8,param_8);
  FUN_146e49d70(&local_b8,param_7,param_8);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1400021e4(&DAT_14c996284,&local_f8);
  FUN_146e49ebe(&local_e8,param_8,&local_f8);
  iVar5 = local_e0 + -1;
  puVar9 = local_e8;
  if (local_e0 == 0) {
    iVar5 = 0;
    puVar9 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar4,&local_e8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_d8 = (undefined2 *)0x0;
    iStack_d0 = 0;
  }
  else {
    local_d8 = *(undefined2 **)(lVar7 + 0x10);
    iStack_d0 = *(int *)(lVar7 + 0x18);
    uStack_cc = *(undefined4 *)(lVar7 + 0x1c);
  }
  local_108 = 0;
  local_100 = 0;
  FUN_1403402f8(param_5,local_118);
  uVar2 = local_120;
  local_148 = local_8c;
  local_150 = local_94;
  local_158 = local_9c;
  local_170 = &local_c8;
  local_178 = &local_d8;
  local_130 = 0x4b189680;
  local_138 = 1;
  local_188 = local_118;
  local_180 = &local_108;
  local_168 = &local_b8;
  local_160 = local_a8;
  local_140 = uVar3;
  FUN_1408e8d8e(param_1,local_120,local_128,local_124);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(fStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f5f4a0;
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996264,&local_e8);
  FUN_146e4a192(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e49cca(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x24,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x26) = local_b0;
  if (*(int *)(param_1 + 0x25) == local_b0) {
    uVar8 = param_1[0x24];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x27] = uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  *(float *)(param_1 + 0x29) = fVar11;
  *(float *)((longlong)param_1 + 0x14c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99626c,&local_e8);
  FUN_146e4a212(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a292(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x2a,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x2c) = local_b0;
  if (*(int *)(param_1 + 0x2b) == local_b0) {
    uVar8 = param_1[0x2a];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x2d] = uVar8;
  *(int *)(param_1 + 0x2e) = iVar5;
  *(float *)(param_1 + 0x2f) = fVar11;
  *(float *)((longlong)param_1 + 0x17c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996274,&local_e8);
  FUN_146e4a338(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a3b8(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x30,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x32) = local_b0;
  if (*(int *)(param_1 + 0x31) == local_b0) {
    uVar8 = param_1[0x30];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x33] = uVar8;
  *(int *)(param_1 + 0x34) = iVar5;
  *(float *)(param_1 + 0x35) = fVar11;
  *(float *)((longlong)param_1 + 0x1ac) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99628c,&local_e8);
  FUN_146e4a45e(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e49b76(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x36,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x38) = local_b0;
  if (*(int *)(param_1 + 0x37) == local_b0) {
    uVar8 = param_1[0x36];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x39] = uVar8;
  *(int *)(param_1 + 0x3a) = iVar5;
  *(float *)(param_1 + 0x3b) = fVar11;
  *(float *)((longlong)param_1 + 0x1dc) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996294,&local_e8);
  FUN_146e4a4de(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a55e(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x3c,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x3e) = local_b0;
  if (*(int *)(param_1 + 0x3d) == local_b0) {
    uVar8 = param_1[0x3c];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x3f] = uVar8;
  *(int *)(param_1 + 0x40) = iVar5;
  *(float *)(param_1 + 0x41) = fVar11;
  *(float *)((longlong)param_1 + 0x20c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99629c,&local_e8);
  FUN_146e4a604(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a684(&local_f8,param_8);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x42,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x44) = local_b0;
  if (*(int *)(param_1 + 0x43) == local_b0) {
    uVar8 = param_1[0x42];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x45] = uVar8;
  *(int *)(param_1 + 0x46) = iVar5;
  *(float *)(param_1 + 0x47) = fVar11;
  *(float *)((longlong)param_1 + 0x23c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c99627c,&local_e8);
  FUN_146e4a72a(&local_d8,param_8,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_7,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_7;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_146e4a7aa(&local_f8,param_8);
  if (1000.0 <= fStack_f4) {
    fStack_f4 = 1000.0;
  }
  if (fStack_f4 <= 0.0) {
    fStack_f4 = 0.0;
  }
  fVar10 = local_f8;
  if (1000.0 <= local_f8) {
    fVar10 = 1000.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_188 = (longlong *)CONCAT44(local_188._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x48,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x4a) = local_b0;
  if (*(int *)(param_1 + 0x49) == local_b0) {
    uVar8 = param_1[0x48];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x4b] = uVar8;
  *(int *)(param_1 + 0x4c) = iVar5;
  *(float *)(param_1 + 0x4d) = fVar10;
  *(float *)((longlong)param_1 + 0x26c) = fStack_f4 - fVar10;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  memset(param_1 + 0x4e,0,0xb0);
  FUN_146e4a84a(param_1,param_1 + 100,param_6,param_5);
  FUN_146e4ae82(param_1 + 0x66,param_8);
  FUN_146e4aef0((longlong)param_1 + 0x334,param_8);
  FUN_146e4af5e(param_1 + 0x67,param_8);
  FUN_146e4afcc((longlong)param_1 + 0x33c,param_8);
  FUN_146e4b03a(param_1 + 0x68,param_8);
  FUN_146e4b0a8((longlong)param_1 + 0x344,param_8);
  FUN_146e4b116(param_1 + 0x69,param_8);
  FUN_146e4b184((longlong)param_1 + 0x34c,param_8);
  FUN_146e4b1f2(param_1 + 0x6a,param_8);
  FUN_146e4b260((longlong)param_1 + 0x354,param_8);
  FUN_146e4b2ce(param_1 + 0x6b,param_8);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x4e,&local_b8,*(undefined4 *)(param_1 + 2));
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x50,&local_b8,*(undefined4 *)(param_1 + 2));
  FUN_146e4c6d0(param_1,uVar2);
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4c6d0 FUN_146e4c6d0 body=1267 status=ok
// SIG undefined FUN_146e4c6d0(void)

void FUN_146e4c6d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong *local_b0;
  longlong local_a8 [3];
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c75f304 < *(int *)(param_1 + 0x10)) {
    local_b0 = (longlong *)(param_1 + 8);
    local_b8 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_14128841c(&local_58,local_b0,param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8[2] = 0;
    uStack_90 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_1412883ce(&local_68,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140bfb9f0(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(&local_88,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140aacae8(local_a8 + 2,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(local_a8,*(undefined4 *)(param_1 + 0x10),1);
    plVar1 = (longlong *)(param_1 + 0x290);
    FUN_144a9ff88(plVar1,local_50 + 1);
    iVar11 = 0;
    if ((longlong)local_50 != 0) {
      plVar10 = local_58 + (longlong)local_50 * 2;
      iVar11 = 0;
      plVar15 = local_58;
      do {
        iVar4 = *(int *)(param_1 + 0x298);
        *(uint *)(param_1 + 0x298) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x29c) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar11;
        lVar7 = plVar15[1];
        if ((longlong)(int)lVar7 != 0) {
          lVar8 = *plVar15;
          lVar9 = (longlong)iVar11 * 4;
          lVar12 = (longlong)iVar11 * 0xc;
          lVar13 = 0;
          do {
            lVar14 = (longlong)*(int *)(lVar8 + lVar13);
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar14 * 0x10);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(local_68 + lVar9 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            *(undefined8 *)(local_78 + lVar9 * 2) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8);
            *(undefined4 *)(local_88 + lVar9) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar14 * 4);
            lVar5 = *(longlong *)(param_1 + 800);
            *(undefined4 *)(local_a8[2] + 8 + lVar12) = *(undefined4 *)(lVar5 + 8 + lVar14 * 0xc);
            *(undefined8 *)(local_a8[2] + lVar12) = *(undefined8 *)(lVar5 + lVar14 * 0xc);
            *(int *)(local_a8[0] + lVar14 * 4) = iVar11;
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0xc;
            lVar9 = lVar9 + 4;
            lVar13 = lVar13 + 4;
          } while ((longlong)(int)lVar7 * 4 != lVar13);
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar10);
    }
    iVar4 = *(int *)(param_1 + 0x298);
    *(uint *)(param_1 + 0x298) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x29c) < iVar4 + 1U) {
      FUN_1446f48e2(plVar1,iVar4);
    }
    *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar11;
    if (local_b0 != &local_68) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != &local_78) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0xf8) != &local_88) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xf8) = local_88;
      local_88 = 0;
      *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x104) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    if ((longlong *)(param_1 + 800) != local_a8 + 2) {
      if (*(longlong *)(param_1 + 800) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 800) = local_a8[2];
      local_a8[2] = 0;
      *(undefined4 *)(param_1 + 0x328) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 0x32c) = uStack_90._4_4_;
      uStack_90 = 0;
    }
    FUN_146e41322(param_1 + 0x120,local_a8);
    FUN_146e41322(param_1 + 0x150,local_a8);
    FUN_146e41322(param_1 + 0x180,local_a8);
    FUN_141729db6(param_1 + 0x78,local_a8);
    FUN_146e41322(param_1 + 0x1b0,local_a8);
    FUN_146e41322(param_1 + 0x1e0,local_a8);
    FUN_146e41322(param_1 + 0x210,local_a8);
    FUN_146e41322(param_1 + 0x240,local_a8);
    FUN_144a127d2(param_1 + 0x2a0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2c0,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(param_1 + 0x2d0,*(undefined4 *)(param_1 + 0x10),1);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + lVar7 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc + lVar7 * 4);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 4;
      } while (lVar8 < *(int *)(param_1 + 0x10));
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4cbc4 FUN_146e4cbc4 body=4475 status=ok
// SIG undefined FUN_146e4cbc4(void)

void FUN_146e4cbc4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  int local_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = (longlong)*(int *)(param_1 + 0x330);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar10 - fVar11;
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x148) = fVar11;
      *(float *)(param_1 + 0x14c) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_a0 = fVar11;
      fStack_9c = fVar10;
      if ((undefined ***)(param_1 + 0x120) == &local_c8) {
        *(int *)(param_1 + 0x140) = local_a8;
        *(ulonglong *)(param_1 + 0x144) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x14c) = fVar10;
        *(int *)(param_1 + 0x130) = local_68;
        *(undefined4 *)(param_1 + 0x134) = uStack_b4;
        *(undefined ***)(param_1 + 0x138) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x120) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x120));
        }
        *(undefined ***)(param_1 + 0x120) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x128) = local_c0;
        *(undefined4 *)(param_1 + 300) = uStack_bc;
        *(int *)(param_1 + 0x130) = local_b8;
        *(undefined4 *)(param_1 + 0x134) = uStack_b4;
        *(undefined4 *)(param_1 + 0x138) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x13c) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x140) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x148) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x334);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar10 - fVar11;
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x178) = fVar11;
      *(float *)(param_1 + 0x17c) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_a0 = fVar11;
      fStack_9c = fVar10;
      if ((undefined ***)(param_1 + 0x150) == &local_c8) {
        *(int *)(param_1 + 0x170) = local_a8;
        *(ulonglong *)(param_1 + 0x174) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x17c) = fVar10;
        *(int *)(param_1 + 0x160) = local_68;
        *(undefined4 *)(param_1 + 0x164) = uStack_b4;
        *(undefined ***)(param_1 + 0x168) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x150) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x150));
        }
        *(undefined ***)(param_1 + 0x150) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x158) = local_c0;
        *(undefined4 *)(param_1 + 0x15c) = uStack_bc;
        *(int *)(param_1 + 0x160) = local_b8;
        *(undefined4 *)(param_1 + 0x164) = uStack_b4;
        *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x16c) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x170) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x178) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x338);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar10 - fVar11;
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x1a8) = fVar11;
      *(float *)(param_1 + 0x1ac) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_a0 = fVar11;
      fStack_9c = fVar10;
      if ((undefined ***)(param_1 + 0x180) == &local_c8) {
        *(int *)(param_1 + 0x1a0) = local_a8;
        *(ulonglong *)(param_1 + 0x1a4) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x1ac) = fVar10;
        *(int *)(param_1 + 400) = local_68;
        *(undefined4 *)(param_1 + 0x194) = uStack_b4;
        *(undefined ***)(param_1 + 0x198) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x180) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x180));
        }
        *(undefined ***)(param_1 + 0x180) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x188) = local_c0;
        *(undefined4 *)(param_1 + 0x18c) = uStack_bc;
        *(int *)(param_1 + 400) = local_b8;
        *(undefined4 *)(param_1 + 0x194) = uStack_b4;
        *(undefined4 *)(param_1 + 0x198) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x19c) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x1a0) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x1a8) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x340);
  if ((lVar8 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar8) & 0x92) == 0x82)) {
    fStack_8c = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    local_90 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1.0 <= fStack_8c) {
      fStack_8c = 1.0;
    }
    if (fStack_8c <= 0.0) {
      fStack_8c = 0.0;
    }
    if (1.0 <= local_90) {
      local_90 = 1.0;
    }
    if (local_90 <= 0.0) {
      local_90 = 0.0;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar8) & 0x40) == 0) {
      bVar5 = 1;
      if ((*(float *)(param_1 + 0xa0) == local_90) &&
         (!NAN(*(float *)(param_1 + 0xa0)) && !NAN(local_90))) {
        bVar5 = -(fStack_8c != *(float *)(param_1 + 0xa4)) & 1;
      }
      *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | bVar5;
      *(ulonglong *)(param_1 + 0xa0) = CONCAT44(fStack_8c,local_90);
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_d0 = 0;
      local_d8 = 0x10;
      local_e8 = uVar1;
      local_e0 = uVar2;
      FUN_140a9b934(&local_c8,&local_90,&local_88,&local_70);
      FUN_14025ef54(param_1 + 0x78,&local_c8);
      local_c8 = &PTR_FUN_149f57480;
      if (uStack_b0 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_bc,local_c0) != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x344);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar10 - fVar11;
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x1d8) = fVar11;
      *(float *)(param_1 + 0x1dc) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_a0 = fVar11;
      fStack_9c = fVar10;
      if ((undefined ***)(param_1 + 0x1b0) == &local_c8) {
        *(int *)(param_1 + 0x1d0) = local_a8;
        *(ulonglong *)(param_1 + 0x1d4) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x1dc) = fVar10;
        *(int *)(param_1 + 0x1c0) = local_68;
        *(undefined4 *)(param_1 + 0x1c4) = uStack_b4;
        *(undefined ***)(param_1 + 0x1c8) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1b0) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x1b0));
        }
        *(undefined ***)(param_1 + 0x1b0) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x1b8) = local_c0;
        *(undefined4 *)(param_1 + 0x1bc) = uStack_bc;
        *(int *)(param_1 + 0x1c0) = local_b8;
        *(undefined4 *)(param_1 + 0x1c4) = uStack_b4;
        *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x1cc) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x1d0) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x1d8) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x348);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar10 - fVar11;
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x208) = fVar11;
      *(float *)(param_1 + 0x20c) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_a0 = fVar11;
      fStack_9c = fVar10;
      if ((undefined ***)(param_1 + 0x1e0) == &local_c8) {
        *(int *)(param_1 + 0x200) = local_a8;
        *(ulonglong *)(param_1 + 0x204) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x20c) = fVar10;
        *(int *)(param_1 + 0x1f0) = local_68;
        *(undefined4 *)(param_1 + 500) = uStack_b4;
        *(undefined ***)(param_1 + 0x1f8) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1e0) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x1e0));
        }
        *(undefined ***)(param_1 + 0x1e0) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x1e8) = local_c0;
        *(undefined4 *)(param_1 + 0x1ec) = uStack_bc;
        *(int *)(param_1 + 0x1f0) = local_b8;
        *(undefined4 *)(param_1 + 500) = uStack_b4;
        *(undefined4 *)(param_1 + 0x1f8) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x1fc) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x200) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x208) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x34c);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1e+07 <= fVar10) {
      fVar10 = 1e+07;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1e+07 <= fVar11) {
      fVar11 = 1e+07;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x238) = fVar11;
      *(float *)(param_1 + 0x23c) = fVar10 - fVar11;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_9c = fVar10 - fVar11;
      fStack_a0 = fVar11;
      if ((undefined ***)(param_1 + 0x210) == &local_c8) {
        *(int *)(param_1 + 0x230) = local_a8;
        *(ulonglong *)(param_1 + 0x234) = CONCAT44(fVar11,uStack_a4);
        *(float *)(param_1 + 0x23c) = fStack_9c;
        *(int *)(param_1 + 0x220) = local_68;
        *(undefined4 *)(param_1 + 0x224) = uStack_b4;
        *(undefined ***)(param_1 + 0x228) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x210) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x210));
        }
        *(undefined ***)(param_1 + 0x210) = local_c8;
        local_c8 = (undefined **)0x0;
        *(int *)(param_1 + 0x218) = local_c0;
        *(undefined4 *)(param_1 + 0x21c) = uStack_bc;
        *(int *)(param_1 + 0x220) = local_b8;
        *(undefined4 *)(param_1 + 0x224) = uStack_b4;
        *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x22c) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x230) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x238) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x33c);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (1000.0 <= fVar10) {
      fVar10 = 1000.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x268) = fVar10;
      *(float *)(param_1 + 0x26c) = fVar10 - fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_70 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar8 + 0x10);
        uStack_80 = *(undefined4 *)(lVar8 + 0x18);
        uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_e8 = uVar2;
      FUN_146e7b22e(&local_c8,&local_88,&local_70,uVar1);
      local_b8 = local_68;
      local_a8 = 0;
      uStack_b0 = (undefined **)0x0;
      if (local_c0 == local_68) {
        uStack_b0 = local_c8;
        local_a8 = local_68;
      }
      fStack_9c = fVar10 - fVar10;
      fStack_a0 = fVar10;
      if ((undefined ***)(param_1 + 0x240) == &local_c8) {
        *(int *)(param_1 + 0x260) = local_a8;
        *(ulonglong *)(param_1 + 0x264) = CONCAT44(fVar10,uStack_a4);
        *(float *)(param_1 + 0x26c) = fStack_9c;
        *(int *)(param_1 + 0x250) = local_68;
        *(undefined4 *)(param_1 + 0x254) = uStack_b4;
        *(undefined ***)(param_1 + 600) = uStack_b0;
        if (local_c8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x240) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x240));
        }
        *(undefined ***)(param_1 + 0x240) = local_c8;
        *(int *)(param_1 + 0x248) = local_c0;
        *(undefined4 *)(param_1 + 0x24c) = uStack_bc;
        *(int *)(param_1 + 0x250) = local_b8;
        *(undefined4 *)(param_1 + 0x254) = uStack_b4;
        *(undefined4 *)(param_1 + 600) = (undefined4)uStack_b0;
        *(undefined4 *)(param_1 + 0x25c) = uStack_b0._4_4_;
        *(ulonglong *)(param_1 + 0x260) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(param_1 + 0x268) = CONCAT44(fStack_9c,fStack_a0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e4dd40 FUN_146e4dd40 body=38 status=ok
// SIG undefined FUN_146e4dd40(void)

undefined8 FUN_146e4dd40(undefined8 param_1,int param_2)

{
  FUN_146e4e85e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e4dd98 FUN_146e4dd98 body=38 status=ok
// SIG undefined FUN_146e4dd98(void)

undefined8 FUN_146e4dd98(undefined8 param_1,int param_2)

{
  FUN_146e7bce8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e4ddbe FUN_146e4ddbe body=368 status=ok
// SIG undefined FUN_146e4ddbe(void)

longlong * FUN_146e4ddbe(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1405c2e9e(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146caa7ea(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1405c2e9e(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146e4df30(param_2);
        FUN_146caa7ea(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146e4df30 FUN_146e4df30 body=68 status=ok
// SIG undefined FUN_146e4df30(void)

longlong FUN_146e4df30(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141087970(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_146d8b5fb(lVar2,1);
  return lVar2;
}



// FUNCTION 146e4df74 FUN_146e4df74 body=658 status=ok
// SIG undefined FUN_146e4df74(void)

void FUN_146e4df74(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar5 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_14004b71e(param_2);
  }
  FUN_146deebdc(param_2,param_1 + 0x10);
  FUN_146def01a(param_2,param_1 + 0x20);
  FUN_146deecda(param_2,param_1 + 0x30);
  FUN_146deecda(param_2,param_1 + 0x100);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar5) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_38 = CONCAT44(local_38._4_4_,1);
      (**(code **)(*param_2 + 0x170))(param_2,&local_38,4);
      uVar2 = (uint)local_38;
      if (1 < (uint)local_38) {
        FUN_14572541c(param_2);
        uVar2 = (uint)local_38;
      }
    }
    else {
      uVar2 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar2 == 0) goto LAB_146e4e06d;
  }
  FUN_146def3e6(param_1 + 0x110,param_2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_145784e7e(param_1 + 0x110,0);
  }
LAB_146e4e06d:
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x120),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x124),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x128),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 200) = 0x3f80000000000000;
    *(undefined1 *)(param_1 + 0x179) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x178) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x17a) = 1;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e4e208 FUN_146e4e208 body=62 status=ok
// SIG undefined FUN_146e4e208(void)

void FUN_146e4e208(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e4e246(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 146e4e246 FUN_146e4e246 body=112 status=ok
// SIG undefined FUN_146e4e246(void)

ulonglong FUN_146e4e246(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146e4e280;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      param_2 = param_2 / 0x50;
    }
  }
LAB_146e4e280:
  return param_2 & 0xffffffff;
}



// FUNCTION 146e4e2b6 FUN_146e4e2b6 body=62 status=ok
// SIG undefined FUN_146e4e2b6(void)

void FUN_146e4e2b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e4e2f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,0x10);
  }
  return;
}



// FUNCTION 146e4e2f4 FUN_146e4e2f4 body=93 status=ok
// SIG undefined FUN_146e4e2f4(void)

ulonglong FUN_146e4e2f4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,0x10);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146e4e352 FUN_146e4e352 body=173 status=ok
// SIG undefined FUN_146e4e352(void)

undefined8 * FUN_146e4e352(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962a4,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4e400 FUN_146e4e400 body=173 status=ok
// SIG undefined FUN_146e4e400(void)

undefined8 * FUN_146e4e400(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9962ac,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4e4ae FUN_146e4e4ae body=127 status=ok
// SIG undefined FUN_146e4e4ae(void)

undefined8 FUN_146e4e4ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9962a4,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4e52e FUN_146e4e52e body=127 status=ok
// SIG undefined FUN_146e4e52e(void)

undefined8 FUN_146e4e52e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9962ac,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4e5ae FUN_146e4e5ae body=283 status=ok
// SIG undefined FUN_146e4e5ae(void)

longlong * FUN_146e4e5ae(longlong *param_1,longlong *param_2,longlong param_3)

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
  longlong lVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  if (-1 < iVar4) {
    if (iVar4 != 0) {
      FUN_1408e9306(param_1);
      lVar10 = param_2[1];
      if ((longlong)(int)lVar10 != 0) {
        lVar5 = *param_2;
        lVar12 = 0;
        do {
          lVar11 = (longlong)*(int *)(param_3 + 0x10);
          lVar6 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
          fVar3 = *(float *)(lVar6 + (*(int *)(lVar5 + lVar12) + lVar11) * 4);
          if (((((fVar3 != 0.0) || (NAN(fVar3))) ||
               (fVar3 = *(float *)(lVar6 + (*(int *)(lVar5 + 4 + lVar12) + lVar11) * 4),
               fVar3 != 0.0)) ||
              ((NAN(fVar3) ||
               (fVar3 = *(float *)(lVar6 + (*(int *)(lVar5 + 8 + lVar12) + lVar11) * 4),
               fVar3 != 0.0)))) ||
             ((NAN(fVar3) ||
              ((fVar3 = *(float *)(lVar6 + (*(int *)(lVar5 + 0xc + lVar12) + lVar11) * 4),
               fVar3 != 0.0 || (NAN(fVar3))))))) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_1403412ae(param_1,iVar4);
            }
            puVar1 = (undefined4 *)(lVar5 + lVar12);
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(*param_1 + (longlong)iVar4 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
          }
          lVar12 = lVar12 + 0x10;
        } while ((longlong)(int)lVar10 * 0x10 != lVar12);
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



// FUNCTION 146e4e6ca FUN_146e4e6ca body=38 status=ok
// SIG undefined FUN_146e4e6ca(void)

undefined8 FUN_146e4e6ca(undefined8 param_1,int param_2)

{
  FUN_14062d09a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e4e6f0 FUN_146e4e6f0 body=52 status=ok
// SIG undefined FUN_146e4e6f0(void)

void FUN_146e4e6f0(longlong *param_1)

{
  FUN_146e4e724();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e4e724 FUN_146e4e724 body=313 status=ok
// SIG undefined FUN_146e4e724(void)

void FUN_146e4e724(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4e85e FUN_146e4e85e body=65 status=ok
// SIG undefined FUN_146e4e85e(void)

void FUN_146e4e85e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f5ee00;
  puVar2 = (undefined8 *)param_1[0x46];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_146e4e8a0(param_1);
  return;
}



// FUNCTION 146e4e8a0 FUN_146e4e8a0 body=151 status=ok
// SIG undefined FUN_146e4e8a0(void)

undefined4 FUN_146e4e8a0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f5ef50;
  FUN_146e4e938(param_1 + 0x34);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 146e4e938 FUN_146e4e938 body=97 status=ok
// SIG undefined FUN_146e4e938(void)

void FUN_146e4e938(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2d074(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e4e99a FUN_146e4e99a body=38 status=ok
// SIG undefined FUN_146e4e99a(void)

undefined8 FUN_146e4e99a(undefined8 param_1,int param_2)

{
  FUN_140c0c5dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e4e9dc FUN_146e4e9dc body=905 status=ok
// SIG undefined FUN_146e4e9dc(void)

void FUN_146e4e9dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_146e4f166(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(param_2 + 0x179);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_146ded8b0(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_146ded910(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x3c) < iVar2) {
      FUN_1409694e8(param_1 + 0x30);
    }
    uVar5 = (longlong)*(int *)(param_2 + 0x58) - (longlong)*(int *)(param_2 + 0x84);
    uVar4 = (uint)uVar5;
    if ((uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84)) < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar5);
      }
      FUN_146ded982(param_1 + 0x50,uVar5 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar4) {
        uVar4 = (uVar4 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
        *(int *)(param_1 + 0x98) = iVar2;
        FUN_146dedb2e(param_1 + 0x50);
      }
    }
    iVar2 = *(int *)(param_2 + 0xa8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xac) < iVar2) {
      FUN_14481578e(param_1 + 0xa0);
    }
    iVar2 = *(int *)(param_2 + 0xb8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xbc) < iVar2) {
      FUN_14481578e(param_1 + 0xb0);
    }
    iVar2 = *(int *)(param_2 + 0x108);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x10c) < iVar2) {
      FUN_1409694e8(param_1 + 0x100);
    }
    iVar2 = *(int *)(param_2 + 0x118);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x11c) < iVar2) {
      FUN_145784e7e(param_1 + 0x110);
    }
    iVar2 = *(int *)(param_2 + 0x188);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x18c) < iVar2) {
      FUN_14481578e(param_1 + 0x180);
    }
    iVar2 = *(int *)(param_2 + 0x198);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x19c) < iVar2) {
      FUN_14481578e(param_1 + 400);
    }
    iVar2 = *(int *)(param_2 + 0x1a8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1ac) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1a0);
    }
    iVar2 = *(int *)(param_2 + 0x1b8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1bc) < iVar2) {
      FUN_14481578e(param_1 + 0x1b0);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar3 == 0) {
        return;
      }
      FUN_140c0c5dc(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d0,0x10);
      FUN_146e3fbb0(lVar3);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      *(longlong *)(param_1 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_140c0c5dc(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    param_1 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 146e4ed66 FUN_146e4ed66 body=608 status=ok
// SIG undefined FUN_146e4ed66(void)

void FUN_146e4ed66(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_3;
  cVar1 = FUN_146e4f5ec(&local_40,param_3,0);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  else {
    if (ABS(*(double *)(param_1 + 0x138)) <= 1e-08) {
      QueryPerformanceCounter(&local_30);
      *(double *)(param_1 + 0x138) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    cVar1 = FUN_146e4f6d0(param_2 + 0x10,param_1 + 0x10,&local_34,&local_40);
    if ((((((cVar1 != '\0') &&
           (cVar1 = FUN_146e4f746(param_2 + 0x20,param_1 + 0x20,&local_34,&local_40), cVar1 != '\0')
           ) && (cVar1 = FUN_146e4f7bc(param_2 + 0x30,param_1 + 0x30,&local_34,&local_40),
                cVar1 != '\0')) &&
         ((cVar1 = FUN_146e4f8aa(param_2 + 0xa0,param_1 + 0xa0,&local_34,&local_40), cVar1 != '\0'
          && (cVar1 = FUN_146e4f8aa(param_2 + 0xb0,param_1 + 0xb0,&local_34,&local_40),
             cVar1 != '\0')))) &&
        (((cVar1 = FUN_146e4f7bc(param_2 + 0x100,param_1 + 0x100,&local_34,&local_40), cVar1 != '\0'
          && ((cVar1 = FUN_146e4f948(param_2 + 0x110,param_1 + 0x110,&local_34,&local_40),
              cVar1 != '\0' &&
              (cVar1 = FUN_146e4f8aa(param_2 + 0x180,param_1 + 0x180,&local_34,&local_40),
              cVar1 != '\0')))) &&
         (cVar1 = FUN_146e4f8aa(param_2 + 400,param_1 + 400,&local_34,&local_40), cVar1 != '\0'))))
       && (((cVar1 = FUN_146e4f8aa(param_2 + 0x1b0,param_1 + 0x1b0,&local_34,&local_40),
            cVar1 != '\0' &&
            (cVar1 = FUN_146e4fa08(param_2 + 0x1a0,param_1 + 0x1a0,&local_34,&local_40),
            cVar1 != '\0')) &&
           ((*(longlong *)(param_1 + 0xc0) == 0 ||
            (FUN_146e4ed66(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),param_3),
            *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc) == '\x01')))))) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e4efd6 FUN_146e4efd6 body=79 status=ok
// SIG undefined FUN_146e4efd6(void)

undefined8 * FUN_146e4efd6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_146e4ff54(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4f026 FUN_146e4f026 body=69 status=ok
// SIG undefined FUN_146e4f026(void)

void FUN_146e4f026(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  FUN_146e507ce();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4f06c FUN_146e4f06c body=185 status=ok
// SIG undefined FUN_146e4f06c(void)

void FUN_146e4f06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [40];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_6;
  local_88 = *param_5;
  uStack_84 = param_5[1];
  uStack_80 = param_5[2];
  uStack_7c = param_5[3];
  local_78 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(local_68,param_3,param_4);
  local_98 = local_38;
  local_a0 = local_60;
  local_a8 = &local_70;
  FUN_146e517a6(param_1,param_2,local_68,&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4f126 FUN_146e4f126 body=62 status=ok
// SIG undefined FUN_146e4f126(void)

void FUN_146e4f126(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_146e5244a(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4f166 FUN_146e4f166 body=848 status=ok
// SIG undefined FUN_146e4f166(void)

void FUN_146e4f166(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_146ded8b0(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_140c0c7b9(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_146ded910(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_1409694e8(param_1 + 0x30,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_1402a3552(param_1 + 0x50);
    if (*(int *)(param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_14481578e(param_1 + 0xa0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      FUN_14481578e(param_1 + 0xb0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xdc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    if (*(int *)(param_1 + 0x10c) < 0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      FUN_1409694e8(param_1 + 0x100,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    if (*(int *)(param_1 + 0x11c) < 0) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      FUN_145784e7e(param_1 + 0x110,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    if (*(int *)(param_1 + 0x18c) < 0) {
      *(undefined4 *)(param_1 + 0x188) = 0;
      FUN_14481578e(param_1 + 0x180,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    if (*(int *)(param_1 + 0x19c) < 0) {
      *(undefined4 *)(param_1 + 0x198) = 0;
      FUN_14481578e(param_1 + 400,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
    if (*(int *)(param_1 + 0x1ac) < 0) {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      FUN_146dedcd2(param_1 + 0x1a0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    if (*(int *)(param_1 + 0x1bc) < 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      FUN_14481578e(param_1 + 0x1b0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (*(int *)(param_1 + 0x154) < 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      FUN_14481578e(param_1 + 0x148,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    if (*(int *)(param_1 + 0x164) < 0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      FUN_14481578e(param_1 + 0x158,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x174);
    FUN_140c0c7e4(*(undefined8 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
      FUN_146e52a12(param_1 + 0x168);
    }
    *(undefined1 *)(param_1 + 0x179) = 1;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 0xc0);
  } while (param_1 != 0);
  return;
}



// FUNCTION 146e4f4b6 FUN_146e4f4b6 body=56 status=ok
// SIG undefined FUN_146e4f4b6(void)

undefined8 * FUN_146e4f4b6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1d0,0x10);
  FUN_146e52e1a(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146e4f4f4 FUN_146e4f4f4 body=247 status=ok
// SIG undefined FUN_146e4f4f4(void)

/* WARNING: Removing unreachable block (ram,0x000146e4f5e5) */

void FUN_146e4f4f4(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)(**(longlong **)(param_1 + 10) + 0x3c + (longlong)*param_1 * 0x40);
  *pbVar1 = *pbVar1 | 1;
  plVar3 = *(longlong **)(param_1 + 8);
  FUN_140969456(&local_40);
  iVar2 = (int)plVar3[1];
  lVar5 = (longlong)iVar2;
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_140969c9a(plVar3);
  }
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar4 + lVar5 * 0x18) = local_40;
  *(undefined4 *)(lVar4 + 8 + lVar5 * 0x18) = (undefined4)local_38;
  *(undefined4 *)(lVar4 + 0xc + lVar5 * 0x18) = local_38._4_4_;
  *(undefined1 *)(lVar4 + 0x10 + lVar5 * 0x18) = local_30;
  *(int *)(**(longlong **)(param_1 + 10) + 0x30 + (longlong)*param_1 * 0x40) = iVar2;
  local_38 = 0;
  local_40 = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e4f5ec FUN_146e4f5ec body=226 status=ok
// SIG undefined FUN_146e4f5ec(void)

ulonglong FUN_146e4f5ec(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x144);
      *(int *)(lVar2 + 0x144) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_20);
        if (1e-08 < ABS(*(double *)(lVar2 + 0x138))) {
          if ((double)DAT_14c75efd8 <
              ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar2 + 0x138))
          {
            uVar3 = 0;
          }
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x144) = 0;
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,param_3 < param_2 || param_2 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4f6d0 FUN_146e4f6d0 body=118 status=ok
// SIG undefined FUN_146e4f6d0(void)

undefined4 FUN_146e4f6d0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e4f5ec(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e4faa6(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x40;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e4f746 FUN_146e4f746 body=118 status=ok
// SIG undefined FUN_146e4f746(void)

undefined4 FUN_146e4f746(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e4f5ec(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e4fb24(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e4f7bc FUN_146e4f7bc body=238 status=ok
// SIG undefined FUN_146e4f7bc(void)

undefined4 FUN_146e4f7bc(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar7 = (longlong)(int)param_2[1];
  uVar8 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar3 = lVar7 * 0x1c;
    uVar8 = 0;
    do {
      cVar5 = FUN_146e4f5ec(param_4,*param_3,uVar8 & 0xffffffff);
      if (cVar5 == '\0') break;
      lVar9 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_140969b20(param_2,iVar1);
      }
      lVar9 = lVar9 + lVar3;
      lVar2 = *param_2;
      lVar4 = (longlong)iVar1 * 0x1c;
      *(undefined4 *)(lVar2 + lVar4) = *(undefined4 *)(uVar8 + lVar9);
      *(undefined4 *)(lVar2 + 0xc + lVar4) = *(undefined4 *)(uVar8 + 0xc + lVar9);
      *(undefined8 *)(lVar2 + 4 + lVar4) = *(undefined8 *)(uVar8 + 4 + lVar9);
      *(undefined4 *)(lVar2 + 0x18 + lVar4) = *(undefined4 *)(uVar8 + 0x18 + lVar9);
      *(undefined8 *)(lVar2 + 0x10 + lVar4) = *(undefined8 *)(uVar8 + 0x10 + lVar9);
      lVar7 = lVar7 + 1;
      uVar8 = uVar8 + 0x1c;
    } while (lVar7 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar6 = iVar1 - (int)uVar8;
    if (iVar1 < (int)uVar8) {
      iVar6 = 0;
    }
    *param_3 = iVar6;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e4f8aa FUN_146e4f8aa body=157 status=ok
// SIG undefined FUN_146e4f8aa(void)

undefined4 FUN_146e4f8aa(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e4f5ec(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar6 * 4);
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e4f948 FUN_146e4f948 body=191 status=ok
// SIG undefined FUN_146e4f948(void)

undefined4 FUN_146e4f948(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)(int)param_2[1];
  iVar11 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar12 * 0x18;
    iVar11 = 0;
    do {
      cVar9 = FUN_146e4f5ec(param_4,*param_3,iVar11);
      if (cVar9 == '\0') break;
      lVar4 = *param_1;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140c110b2(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + lVar13);
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar11 = iVar11 + 0x14;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 < (int)param_1[1]);
  }
  iVar3 = *param_3;
  if (0 < iVar3) {
    iVar10 = iVar3 - iVar11;
    if (iVar3 < iVar11) {
      iVar10 = 0;
    }
    *param_3 = iVar10;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e4fa08 FUN_146e4fa08 body=157 status=ok
// SIG undefined FUN_146e4fa08(void)

undefined4 FUN_146e4fa08(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e4f5ec(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1400232c6(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6 * 8);
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e4faa6 FUN_146e4faa6 body=125 status=ok
// SIG undefined FUN_146e4faa6(void)

void FUN_146e4faa6(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_3 * 0x40 + *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14096990c(param_2,iVar1);
  }
  lVar5 = (longlong)iVar1 * 0x40 + *param_2;
  lVar3 = 0xc;
  do {
    *(undefined4 *)(lVar5 + -4 + lVar3) = *(undefined4 *)(lVar4 + -4 + lVar3);
    *(undefined8 *)(lVar5 + -0xc + lVar3) = *(undefined8 *)(lVar4 + -0xc + lVar3);
    *(undefined8 *)(lVar5 + lVar3) = *(undefined8 *)(lVar4 + lVar3);
    *(undefined4 *)(lVar5 + 8 + lVar3) = *(undefined4 *)(lVar4 + 8 + lVar3);
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x3c);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined8 *)(lVar5 + 0x35) = *(undefined8 *)(lVar4 + 0x35);
  *(undefined8 *)(lVar5 + 0x30) = uVar2;
  return;
}



// FUNCTION 146e4fb24 FUN_146e4fb24 body=79 status=ok
// SIG undefined FUN_146e4fb24(void)

void FUN_146e4fb24(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140969c9a(param_2,iVar1);
  }
  FUN_146dedd32((longlong)iVar1 * 0x18 + *param_2,lVar2 + (longlong)param_3 * 0x18);
  return;
}



// FUNCTION 146e4fb74 FUN_146e4fb74 body=465 status=ok
// SIG undefined FUN_146e4fb74(void)

void FUN_146e4fb74(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(int *)(param_1 + 0x44) != -1)) {
    plVar1 = (longlong *)(param_1 + 400);
    FUN_144a1a59e(plVar1,*(int *)(param_1 + 0x28) + 1,0);
    plVar2 = (longlong *)(param_1 + 0x1b0);
    FUN_144a1a59e(plVar2,*(undefined4 *)(param_1 + 0x28),0);
    plVar3 = (longlong *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if (*(int *)(param_1 + 0x1ac) < 0) {
      FUN_146dedcd2(plVar3,0);
    }
    iVar4 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar4) {
      puVar12 = (undefined1 *)0x0;
      lVar10 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x1a8);
        *(uint *)(param_1 + 0x1a8) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x1ac) < iVar5 + 1U) {
          FUN_1400232c6(plVar3,iVar5);
        }
        *(undefined1 **)(*plVar3 + (longlong)iVar5 * 8) = puVar12;
        *(undefined4 *)(*plVar2 + lVar10 * 4) = 1;
        lVar10 = lVar10 + 1;
        puVar12 = &DAT_100000001 + (longlong)puVar12;
      } while (iVar4 != lVar10);
    }
    FUN_146e4fd46(param_1,(longlong)*(int *)(param_1 + 0x44) * 0x40 + *(longlong *)(param_1 + 0x10))
    ;
    **(undefined4 **)(param_1 + 400) = 0;
    iVar4 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar4) {
      lVar10 = 0;
      do {
        *(int *)(*plVar1 + 4 + lVar10 * 4) =
             *(int *)(*plVar2 + lVar10 * 4) + *(int *)(*plVar1 + lVar10 * 4);
        *(undefined4 *)(*plVar2 + lVar10 * 4) = *(undefined4 *)(*plVar1 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while (iVar4 != lVar10);
    }
    plVar1 = (longlong *)(param_1 + 0x180);
    FUN_144a1a59e(plVar1,*(undefined4 *)
                          (*(longlong *)(param_1 + 400) +
                          (longlong)(*(int *)(param_1 + 0x198) + -1) * 4),0);
    iVar4 = *(int *)(param_1 + 0x1a8);
    if ((longlong)iVar4 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1a0);
      lVar9 = 0;
      do {
        iVar5 = *(int *)(lVar10 + lVar9);
        iVar6 = *(int *)(lVar10 + 4 + lVar9);
        iVar7 = *(int *)(*plVar2 + (longlong)iVar5 * 4);
        *(int *)(*plVar2 + (longlong)iVar5 * 4) = iVar7 + 1;
        if (iVar5 == iVar6) {
          *(int *)(*plVar1 + (longlong)iVar7 * 4) = iVar5;
        }
        else {
          *(int *)(*plVar1 + (longlong)iVar7 * 4) = iVar6;
          uVar8 = *(undefined4 *)(lVar10 + lVar9);
          lVar11 = (longlong)*(int *)(lVar10 + 4 + lVar9);
          iVar5 = *(int *)(*plVar2 + lVar11 * 4);
          *(int *)(*plVar2 + lVar11 * 4) = iVar5 + 1;
          *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = uVar8;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar4 * 8 != lVar9);
    }
  }
  return;
}



// FUNCTION 146e4fd46 FUN_146e4fd46 body=110 status=ok
// SIG undefined FUN_146e4fd46(void)

void FUN_146e4fd46(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x3c) & 1) == 0) {
    FUN_146e4fd46(param_1,(longlong)*(int *)(param_2 + 0x30) * 0x40 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_146e4fd46(param_1,(longlong)*(int *)(param_2 + 0x34) * 0x40 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_146e4fdb4(param_1,(longlong)*(int *)(param_2 + 0x30) * 0x40 + *(longlong *)(param_1 + 0x10),
                  param_2,(longlong)*(int *)(param_2 + 0x34) * 0x40 + *(longlong *)(param_1 + 0x10),
                  param_2 + 0x18);
  }
  return;
}



// FUNCTION 146e4fdb4 FUN_146e4fdb4 body=415 status=ok
// SIG undefined FUN_146e4fdb4(void)

void FUN_146e4fdb4(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  float local_60 [4];
  undefined1 *local_50;
  float local_48 [4];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  while( true ) {
    while( true ) {
      lVar7 = 0;
      do {
        fVar3 = *(float *)(param_3 + lVar7 * 4);
        pfVar2 = (float *)(param_5 + 0xc + lVar7 * 4);
        if ((*pfVar2 <= fVar3 && fVar3 != *pfVar2) ||
           (fVar3 = *(float *)(param_5 + lVar7 * 4), pfVar2 = (float *)(param_3 + 0xc + lVar7 * 4),
           *pfVar2 <= fVar3 && fVar3 != *pfVar2)) goto LAB_146e4fefa;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      if ((*(byte *)(param_2 + 0x3c) & 1) != 0) break;
      local_68 = param_5;
      FUN_146e4fdb4(param_1,(longlong)*(int *)(param_2 + 0x30) * 0x40 +
                            *(longlong *)(param_1 + 0x10),param_2,param_4);
      param_3 = param_2 + 0x18;
      param_2 = (longlong)*(int *)(param_2 + 0x34) * 0x40 + *(longlong *)(param_1 + 0x10);
    }
    if ((*(byte *)(param_4 + 0x3c) & 1) != 0) break;
    local_68 = param_4;
    FUN_146e4fdb4(param_1,param_2,param_3,
                  (longlong)*(int *)(param_4 + 0x30) * 0x40 + *(longlong *)(param_1 + 0x10));
    param_5 = param_4 + 0x18;
    param_4 = (longlong)*(int *)(param_4 + 0x34) * 0x40 + *(longlong *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_4 + 0x30);
  local_48[0] = 3.4028235e+38;
  local_48[1] = 3.4028235e+38;
  local_48[2] = 3.4028235e+38;
  local_48[3] = -3.4028235e+38;
  local_38 = &DAT_ff7fffffff7fffff;
  local_60[0] = 3.4028235e+38;
  local_60[1] = 3.4028235e+38;
  local_60[2] = 3.4028235e+38;
  local_60[3] = -3.4028235e+38;
  local_50 = &DAT_ff7fffffff7fffff;
  lVar7 = 0;
  do {
    if ((local_60[lVar7 + 3] <= local_48[lVar7] && local_48[lVar7] != local_60[lVar7 + 3]) ||
       (local_48[lVar7 + 3] <= local_60[lVar7] && local_60[lVar7] != local_48[lVar7 + 3]))
    goto LAB_146e4fefa;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  iVar6 = *(int *)(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x1a8) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1ac) < iVar6 + 1U) {
    FUN_1400232c6(param_1 + 0x1a0,iVar6);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 8) = CONCAT44(iVar5,iVar4);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar4 * 4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar5 * 4);
  *piVar1 = *piVar1 + 1;
LAB_146e4fefa:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4ff54 FUN_146e4ff54 body=85 status=ok
// SIG undefined FUN_146e4ff54(void)

void FUN_146e4ff54(void)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_20;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_26 = 0;
  FUN_146e4ffaa();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e4ffaa FUN_146e4ffaa body=807 status=ok
// SIG undefined FUN_146e4ffaa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146e4ffaa(longlong param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auStack_10a8 [40];
  longlong *local_1080;
  double local_1078 [6];
  double local_1048 [510];
  double *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10a8;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    puVar11 = *(undefined4 **)(param_1 + 0x100);
    puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x108) * 7;
    do {
      local_1048[0] = (double)(float)puVar11[1];
      local_1048[1] = (double)(float)puVar11[2];
      local_1048[2] = (double)(float)puVar11[3];
      local_1048[3] = (double)(float)puVar11[4];
      local_1048[4] = (double)(float)puVar11[5];
      local_1048[5] = (double)(float)puVar11[6];
      lVar6 = 0;
      do {
        dVar1 = *(double *)(param_2 + lVar6 * 8);
        if ((local_1048[lVar6 + 3] <= dVar1 && dVar1 != local_1048[lVar6 + 3]) ||
           (pdVar9 = (double *)(param_2 + 0x18 + lVar6 * 8),
           *pdVar9 <= local_1048[lVar6] && local_1048[lVar6] != *pdVar9)) goto LAB_146e500b5;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      uVar2 = *puVar11;
      plVar3 = (longlong *)*param_3;
      iVar5 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(plVar3,iVar5);
      }
      *(undefined4 *)(*plVar3 + (longlong)iVar5 * 4) = uVar2;
LAB_146e500b5:
      puVar11 = puVar11 + 7;
    } while (puVar11 != puVar10);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_146e4ffaa(*(longlong *)(param_1 + 0xc0),param_2,param_3);
  }
  local_58 = (double *)0x0;
  local_4c = 0xff;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 == -1) goto LAB_146e50294;
  }
  else {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_146e50294;
  }
  local_1048[0] = (double)CONCAT44(local_1048[0]._4_4_,iVar5);
  local_1048[1] = 0.0;
  local_50 = 1;
  local_1080 = param_3;
  do {
    pdVar9 = local_58;
    if (local_58 == (double *)0x0) {
      pdVar9 = local_1048;
    }
    lVar7 = (longlong)(int)local_50;
    local_50 = local_50 - 1;
    lVar6 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(pdVar9 + lVar7 * 2 + -2) * 0x40;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x3c +
                  (longlong)*(int *)(pdVar9 + lVar7 * 2 + -2) * 0x40) & 1) == 0) {
      lVar12 = 0;
      lVar7 = 0;
      do {
        uVar4 = local_50;
        local_1078[0] = (double)*(float *)(lVar6 + lVar7);
        local_1078[1] = (double)*(float *)(lVar6 + 4 + lVar7);
        local_1078[2] = (double)*(float *)(lVar6 + 8 + lVar7);
        local_1078[3] = (double)*(float *)(lVar6 + 0xc + lVar7);
        local_1078[4] = (double)*(float *)(lVar6 + 0x10 + lVar7);
        local_1078[5] = (double)*(float *)(lVar6 + 0x14 + lVar7);
        lVar8 = 0;
        do {
          dVar1 = *(double *)(param_2 + lVar8 * 8);
          if ((local_1078[lVar8 + 3] <= dVar1 && dVar1 != local_1078[lVar8 + 3]) ||
             (pdVar9 = (double *)(param_2 + 0x18 + lVar8 * 8),
             *pdVar9 <= local_1078[lVar8] && local_1078[lVar8] != *pdVar9)) goto LAB_146e50235;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        uVar2 = *(undefined4 *)(lVar6 + 0x30 + lVar12 * 4);
        lVar8 = (longlong)(int)local_50;
        local_50 = local_50 + 1;
        if (local_4c < local_50) {
          FUN_146e506c0(local_1048,uVar4);
        }
        pdVar9 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar9 = local_1048;
        }
        *(undefined4 *)(pdVar9 + lVar8 * 2) = uVar2;
        pdVar9[lVar8 * 2 + 1] = 0.0;
LAB_146e50235:
        lVar12 = lVar12 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != 0x30);
    }
    else {
      FUN_146e502d2((longlong)*(int *)(lVar6 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x20),param_2,
                    local_1080);
    }
  } while (local_50 != 0);
  if (local_58 != (double *)0x0) {
    FUN_1400020a8();
  }
LAB_146e50294:
  if ((local_48 ^ (ulonglong)auStack_10a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e502d2 FUN_146e502d2 body=1006 status=ok
// SIG undefined FUN_146e502d2(void)

void FUN_146e502d2(longlong *param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar2;
  
  iVar5 = (int)param_1[1];
  iVar16 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar16 = iVar5;
  }
  if (3 < iVar5) {
    lVar19 = 0;
    uVar24 = 0;
    do {
      lVar20 = *param_1;
      lVar23 = uVar24 * 0x70 + 0x54;
      lVar18 = uVar24 * 0x70 + 0x38;
      lVar22 = uVar24 * 0x70 + 0x1c;
      lVar21 = uVar24 * 0x70;
      dVar1 = param_2[3];
      dVar2 = param_2[3];
      lVar25 = -(ulonglong)((double)*(float *)(lVar20 + 0x10 + lVar22) < *param_2);
      lVar26 = -(ulonglong)((double)*(float *)(lVar20 + 0x10 + lVar23) < *param_2);
      lVar27 = -(ulonglong)(dVar2 < (double)*(float *)(lVar20 + 4 + lVar22));
      lVar28 = -(ulonglong)(dVar2 < (double)*(float *)(lVar20 + 4 + lVar23));
      dVar2 = param_2[1];
      dVar3 = param_2[1];
      auVar33._8_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x14 + lVar22) < dVar3);
      auVar33._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x14 + lVar21) < dVar2);
      auVar12._8_4_ = (int)lVar25;
      auVar12._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x10 + lVar21) < *param_2);
      auVar12._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      auVar29._8_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x14 + lVar23) < dVar3);
      auVar29._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x14 + lVar18) < dVar2);
      dVar2 = param_2[4];
      dVar3 = param_2[4];
      auVar10._8_4_ = (int)lVar26;
      auVar10._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x10 + lVar18) < *param_2);
      auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      lVar25 = -(ulonglong)(dVar3 < (double)*(float *)(lVar20 + 8 + lVar22));
      lVar26 = -(ulonglong)(dVar3 < (double)*(float *)(lVar20 + 8 + lVar23));
      dVar3 = param_2[2];
      dVar4 = param_2[2];
      auVar34._8_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x18 + lVar22) < dVar4);
      auVar34._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x18 + lVar21) < dVar3);
      auVar14._8_4_ = (int)lVar27;
      auVar14._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar20 + 4 + lVar21));
      auVar14._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      auVar32._8_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x18 + lVar23) < dVar4);
      auVar32._0_8_ = -(ulonglong)((double)*(float *)(lVar20 + 0x18 + lVar18) < dVar3);
      auVar13._8_4_ = (int)lVar28;
      auVar13._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar20 + 4 + lVar18));
      auVar13._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      dVar1 = param_2[5];
      dVar3 = param_2[5];
      auVar30._8_8_ = -(ulonglong)(dVar3 < (double)*(float *)(lVar20 + 0xc + lVar22));
      auVar30._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar20 + 0xc + lVar21));
      auVar11._8_4_ = (int)lVar25;
      auVar11._0_8_ = -(ulonglong)(dVar2 < (double)*(float *)(lVar20 + 8 + lVar21));
      auVar11._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      auVar31._8_8_ = -(ulonglong)(dVar3 < (double)*(float *)(lVar20 + 0xc + lVar23));
      auVar31._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar20 + 0xc + lVar18));
      auVar9._8_4_ = (int)lVar26;
      auVar9._0_8_ = -(ulonglong)(dVar2 < (double)*(float *)(lVar20 + 8 + lVar18));
      auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar15 = movmskpd((int)lVar20,auVar30 | auVar11 | auVar34 | auVar14 | auVar33 | auVar12);
      iVar17 = movmskpd((int)lVar18,auVar31 | auVar9 | auVar32 | auVar13 | auVar29 | auVar10);
      lVar20 = 0;
      lVar18 = lVar19;
      do {
        if (((uint)(iVar15 + iVar17 * 4) >> ((uint)lVar20 & 0x1f) & 1) == 0) {
          uVar7 = *(undefined4 *)(*param_1 + lVar18);
          plVar8 = (longlong *)*param_3;
          iVar6 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar6 + 1U) {
            FUN_1446f48e2(plVar8,iVar6);
          }
          *(undefined4 *)(*plVar8 + (longlong)iVar6 * 4) = uVar7;
        }
        lVar20 = lVar20 + 1;
        lVar18 = lVar18 + 0x1c;
      } while (lVar20 != 4);
      uVar24 = uVar24 + 1;
      lVar19 = lVar19 + 0x70;
    } while (uVar24 != (uint)(iVar16 >> 2));
  }
  iVar16 = (iVar16 >> 2) << 2;
  if (iVar16 < iVar5) {
    lVar19 = (longlong)iVar16;
    lVar18 = lVar19 * 0x1c + 0x10;
    do {
      lVar20 = *param_1 + lVar18;
      lVar21 = -3;
      do {
        dVar1 = (double)*(float *)(lVar20 + lVar21 * 4);
        if (param_2[lVar21 + 6] <= dVar1 && dVar1 != param_2[lVar21 + 6]) goto LAB_146e5065f;
        if ((double)*(float *)(lVar20 + 0xc + lVar21 * 4) < param_2[lVar21 + 3]) goto LAB_146e5065f;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0);
      uVar7 = *(undefined4 *)(lVar19 * 0x1c + *param_1);
      plVar8 = (longlong *)*param_3;
      iVar16 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar16 + 1U) {
        FUN_1446f48e2(plVar8,iVar16);
      }
      *(undefined4 *)(*plVar8 + (longlong)iVar16 * 4) = uVar7;
LAB_146e5065f:
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x1c;
    } while (iVar5 != (int)lVar19);
  }
  return;
}



// FUNCTION 146e506c0 FUN_146e506c0 body=125 status=ok
// SIG undefined FUN_146e506c0(void)

void FUN_146e506c0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xff;
    if (0xff < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xffc) = iVar5;
    FUN_146e5073e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e5073e FUN_146e5073e body=144 status=ok
// SIG undefined FUN_146e5073e(void)

void FUN_146e5073e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146e507ce FUN_146e507ce body=135 status=ok
// SIG undefined FUN_146e507ce(void)

void FUN_146e507ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_68 = local_30;
  local_70 = local_58;
  local_78 = local_60;
  FUN_146e50856(param_1,param_2,&local_60,param_5);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e50856 FUN_146e50856 body=3648 status=ok
// SIG undefined FUN_146e50856(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146e50856(longlong param_1,undefined1 (*param_2) [16],longlong param_3,
                       undefined8 *param_4,undefined1 (*param_5) [16],double *param_6,
                       longlong param_7)

{
  double *pdVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
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
  undefined1 auVar19 [16];
  char cVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar25;
  float fVar26;
  undefined8 *unaff_RBP;
  int iVar27;
  int iVar28;
  longlong lVar29;
  double *pdVar30;
  int iVar31;
  int iVar32;
  undefined8 *puVar33;
  longlong lVar34;
  bool bVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  ulonglong uVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  ulonglong uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  undefined8 uVar110;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar111;
  double dVar117;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar118 [16];
  undefined4 uVar119;
  undefined4 uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auStack_11b8 [32];
  undefined1 (*local_1198) [16];
  double *local_1190;
  longlong local_1188;
  undefined1 (*local_1180) [16];
  undefined1 local_1178 [16];
  ulonglong local_1168;
  undefined8 uStack_1160;
  double local_1158;
  double dStack_1150;
  ulonglong local_1148;
  undefined8 uStack_1140;
  undefined1 local_1138 [16];
  double local_1128 [4];
  double local_1108 [3];
  undefined8 local_10f0;
  double local_10e8;
  double local_10e0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  longlong *plVar24;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_11b8;
  local_1180 = param_2;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    unaff_RBP = *(undefined8 **)(param_1 + 0x100);
    puVar33 = (undefined8 *)((longlong)*(int *)(param_1 + 0x108) * 0x1c + (longlong)unaff_RBP);
    dVar36 = *(double *)param_2[1];
    dVar38 = *(double *)*param_2;
    dVar96 = *(double *)(*param_2 + 8);
    do {
      local_1128[2] = param_6[2];
      local_1128[0] = *param_6;
      local_1128[1] = param_6[1];
      local_10f0 = (double)*(float *)((longlong)unaff_RBP + 4) - dVar38;
      local_10e8 = (double)*(float *)(unaff_RBP + 1) - dVar96;
      local_10e0 = (double)*(float *)((longlong)unaff_RBP + 0xc) - dVar36;
      local_1108[0] = (double)*(float *)(unaff_RBP + 2) - dVar38;
      local_1108[1] = (double)*(float *)((longlong)unaff_RBP + 0x14) - dVar96;
      local_1108[2] = (double)*(float *)(unaff_RBP + 3) - dVar36;
      lVar25 = 0;
      dVar48 = 1.79769313486232e+308;
      dVar57 = 0.0;
      do {
        if (*(char *)(param_7 + lVar25) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar25]) goto LAB_146e50a96;
          dVar37 = 0.0;
          dVar111 = 1.79769313486232e+308;
          if (local_1108[lVar25] <= 0.0 && local_1108[lVar25] != 0.0) goto LAB_146e50a96;
        }
        else {
          dVar37 = (double)(&local_10f0)[lVar25] * local_1128[lVar25];
          dVar111 = local_1128[lVar25] * local_1108[lVar25];
        }
        dVar117 = dVar111;
        if (dVar37 <= dVar111) {
          dVar117 = dVar37;
        }
        if (dVar57 <= dVar117) {
          dVar57 = dVar117;
        }
        if (dVar37 <= dVar111) {
          dVar37 = dVar111;
        }
        if (dVar37 <= dVar48) {
          dVar48 = dVar37;
        }
        if (dVar48 < dVar57) goto LAB_146e50a96;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
      if ((dVar57 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar48)) {
        local_10f0._4_4_ = (undefined4)((ulonglong)local_10f0 >> 0x20);
        local_10f0 = (double)CONCAT44(local_10f0._4_4_,*(undefined4 *)unaff_RBP);
        cVar20 = (**(code **)(*(longlong *)*param_4 + 0x10))
                           ((longlong *)*param_4,&local_10f0,param_3);
        if (cVar20 == '\0') goto LAB_146e51458;
      }
LAB_146e50a96:
      unaff_RBP = (undefined8 *)((longlong)unaff_RBP + 0x1c);
    } while (unaff_RBP != puVar33);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_1188 = param_7;
    local_1190 = param_6;
    local_1198 = param_5;
    cVar20 = FUN_146e50856(*(longlong *)(param_1 + 0xc0),local_1180,param_3,param_4);
    if (cVar20 == '\0') {
LAB_146e51458:
      unaff_RBP = (undefined8 *)0x0;
      goto LAB_146e51536;
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar21 = *(uint *)(param_1 + 0x44);
    if (uVar21 == 0xffffffff) {
      uVar21 = 0;
      goto LAB_146e50b19;
    }
  }
  else {
    uVar21 = 0;
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_146e50b19;
  }
  local_f8 = 0xff00000001;
  local_10f0 = (double)CONCAT44(local_10f0._4_4_,uVar21);
  local_10e8 = 0.0;
  uVar21 = 1;
LAB_146e50b19:
  auVar54 = *param_5;
  uVar40 = *(ulonglong *)param_5[1];
  uVar110 = 0;
  auVar41 = *(undefined1 (*) [16])(param_3 + 0x20);
  uVar6 = auVar41._0_8_;
  auVar52 = divpd(_DAT_149934d80,auVar54);
  bVar4 = (double)(auVar54._0_8_ & DAT_149931180) < 1e-08;
  dVar36 = (double)-(ulonglong)bVar4;
  bVar5 = (double)(auVar54._8_8_ & DAT_149931180._8_8_) < 1e-08;
  dVar38 = (double)-(ulonglong)bVar5;
  local_1148 = CONCAT44((float)dVar38,(float)dVar36);
  auVar54._8_4_ = 0xffffffff;
  auVar54._0_8_ = 0xffffffffffffffff;
  auVar54._12_4_ = 0xffffffff;
  uStack_1140 = 0;
  uVar58 = ~local_1148 & CONCAT44((float)auVar52._8_8_,(float)auVar52._0_8_);
  local_1158 = (double)(float)uVar58;
  dStack_1150 = (double)(float)(uVar58 >> 0x20);
  local_1138._0_8_ = local_1148 ^ 0xffffffffffffffff;
  local_1138._8_8_ = auVar54._8_8_;
  uVar119 = auVar41._0_4_;
  uVar120 = auVar41._4_4_;
  auVar54 = _DAT_149931180;
  auVar52 = _DAT_149934d80;
  do {
    puVar33 = local_100;
    if (local_100 == (undefined8 *)0x0) {
      puVar33 = &local_10f0;
    }
    lVar29 = (longlong)(int)uVar21;
    pdVar30 = (double *)(puVar33 + lVar29 * 2 + -1);
    lVar34 = lVar29 << 0x20;
    iVar22 = -1;
    lVar25 = 0;
    do {
      unaff_RBP = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar29 == lVar25);
      if (lVar29 == lVar25) goto LAB_146e5152c;
      pdVar1 = pdVar30 + -1;
      dVar96 = *pdVar30;
      local_f8 = CONCAT44(local_f8._4_4_,iVar22 + uVar21);
      lVar25 = lVar25 + 1;
      pdVar30 = pdVar30 + -2;
      lVar34 = lVar34 + -0x100000000;
      iVar22 = iVar22 + -1;
    } while (auVar41._0_8_ < dVar96);
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)pdVar1 * 0x40);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x3c + (longlong)*(int *)pdVar1 * 0x40) & 1) == 0
       ) {
      dVar48 = SUB168(*local_1180,0);
      dVar57 = SUB168(*local_1180,8);
      dVar96 = *(double *)local_1180[1];
      auVar80._8_8_ = 0;
      auVar80._0_8_ = uVar40;
      dVar37 = (double)-(ulonglong)(SUB168(auVar80 & auVar54,0) < 1e-08);
      dVar111 = (double)-(ulonglong)(SUB168(auVar80 & auVar54,8) < 1e-08);
      auVar65._8_8_ = dVar111;
      auVar65._0_8_ = dVar37;
      dVar39 = (double)pfVar2[4];
      dVar117 = (double)pfVar2[3];
      auVar74._8_4_ = SUB84(dVar39,0);
      auVar74._0_8_ = dVar117;
      auVar74._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar102._8_8_ = 0;
      auVar102._0_8_ = -(ulonglong)((double)pfVar2[5] < dVar96 || dVar96 < (double)pfVar2[2]);
      auVar99._0_8_ = -(ulonglong)((dVar117 < dVar48 || dVar48 < (double)*pfVar2) && bVar4);
      auVar99._8_8_ = -(ulonglong)((auVar74._8_8_ < dVar57 || dVar57 < (double)pfVar2[1]) && bVar5);
      iVar27 = movmskpd((int)local_1180,auVar99);
      uVar23 = movmskpd((int)pdVar30,auVar102 & auVar65);
      if ((uVar23 & 0x3fffffff) == 0 && iVar27 == 0) {
        auVar54 = divpd(auVar52,auVar80);
        uVar58 = ~CONCAT44((float)dVar111,(float)dVar37) &
                 CONCAT44((float)auVar54._8_8_,(float)auVar54._0_8_);
        dVar50 = (double)(float)uVar58;
        dVar51 = (double)(float)(uVar58 >> 0x20);
        uVar58 = ~local_1148 &
                 CONCAT44((float)(((double)pfVar2[1] - dVar57) * dStack_1150),
                          (float)(((double)*pfVar2 - dVar48) * local_1158));
        auVar90._0_8_ = (double)(float)uVar58;
        auVar90._8_8_ = (double)(float)(uVar58 >> 0x20);
        uVar58 = ~CONCAT44((float)dVar111,(float)dVar37) &
                 CONCAT44((float)(dVar51 * 0.0),(float)(((double)pfVar2[2] - dVar96) * dVar50));
        auVar92._0_8_ = (double)(float)uVar58;
        auVar92._8_8_ = (double)(float)(uVar58 >> 0x20);
        auVar82._0_8_ = (dVar117 - dVar48) * local_1158;
        auVar82._8_8_ = (dVar39 - dVar57) * dStack_1150;
        auVar44._8_8_ = dVar38;
        auVar44._0_8_ = dVar36;
        auVar15._8_4_ = uVar119;
        auVar15._0_8_ = uVar6;
        auVar15._12_4_ = uVar120;
        auVar54 = blendvpd(auVar82,auVar15,auVar44);
        auVar114._0_8_ = ((double)pfVar2[5] - dVar96) * dVar50;
        auVar114._8_8_ = dVar51 * 0.0;
        auVar45._8_8_ = dVar111;
        auVar45._0_8_ = dVar37;
        auVar16._8_4_ = uVar119;
        auVar16._0_8_ = uVar6;
        auVar16._12_4_ = uVar120;
        auVar102 = blendvpd(auVar114,auVar16,auVar45);
        auVar123._8_8_ = auVar90._8_8_;
        auVar123._0_8_ = auVar90._0_8_;
        auVar99 = minpd(auVar123,auVar54);
        auVar106._8_8_ = auVar92._8_8_;
        auVar106._0_8_ = auVar92._0_8_;
        auVar74 = minpd(auVar106,auVar102);
        auVar41 = maxpd(auVar90,auVar54);
        auVar102 = maxpd(auVar92,auVar102);
        auVar107._0_8_ = auVar74._0_8_;
        auVar83._8_8_ = auVar74._8_8_;
        auVar83._0_8_ = auVar99._0_8_;
        auVar115._8_8_ = auVar107._0_8_;
        auVar115._0_8_ = auVar99._8_8_;
        auVar118._8_8_ = auVar74._8_8_;
        auVar118._0_8_ = auVar99._8_8_;
        auVar107._8_8_ = auVar99._0_8_;
        auVar99 = maxpd(auVar99,auVar115);
        auVar54 = maxpd(auVar74,auVar83);
        auVar54 = maxpd(auVar54,auVar118);
        auVar99 = maxpd(auVar99,auVar107);
        auVar93._0_8_ = auVar102._0_8_;
        auVar84._8_8_ = auVar102._8_8_;
        auVar84._0_8_ = auVar41._0_8_;
        auVar97._8_8_ = auVar93._0_8_;
        auVar97._0_8_ = auVar41._8_8_;
        auVar116._8_8_ = auVar102._8_8_;
        auVar116._0_8_ = auVar41._8_8_;
        auVar93._8_8_ = auVar41._0_8_;
        auVar41 = minpd(auVar41,auVar97);
        auVar102 = minpd(auVar102,auVar84);
        auVar74 = minpd(auVar102,auVar116);
        auVar102 = minpd(auVar41,auVar93);
        auVar54 = maxpd(auVar54,ZEXT816(0));
        auVar17._8_4_ = uVar119;
        auVar17._0_8_ = uVar6;
        auVar17._12_4_ = uVar120;
        auVar41 = minpd(auVar74,auVar17);
        auVar108._8_8_ = -(ulonglong)(auVar41._8_8_ < auVar54._8_8_);
        auVar108._0_8_ = -(ulonglong)(auVar41._0_8_ < auVar54._0_8_);
        auVar41 = maxpd(auVar99,ZEXT816(0));
        auVar18._8_4_ = uVar119;
        auVar18._0_8_ = uVar6;
        auVar18._12_4_ = uVar120;
        auVar54 = minpd(auVar102,auVar18);
        auVar91._8_8_ = -(ulonglong)(auVar54._8_8_ < auVar41._8_8_);
        auVar91._0_8_ = -(ulonglong)(auVar54._0_8_ < auVar41._0_8_);
        iVar27 = movmskpd(iVar27,auVar91);
        uVar23 = movmskpd(0,auVar108);
        bVar35 = (uVar23 & 0x3fffffff) == 0 && iVar27 == 0;
      }
      else {
        bVar35 = false;
        auVar41 = local_1178;
      }
      dVar117 = auVar41._0_8_;
      iVar27 = (int)lVar25;
      iVar28 = (uVar21 + 1) - iVar27;
      uVar23 = (uVar21 + 1) - iVar27;
      uVar58 = (ulonglong)uVar21 - lVar25;
      iVar32 = (int)uVar58;
      dVar50 = (double)pfVar2[10];
      dVar39 = (double)pfVar2[9];
      auVar112._8_4_ = SUB84(dVar50,0);
      auVar112._0_8_ = dVar39;
      auVar112._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      auVar105._8_8_ = 0;
      auVar105._0_8_ = -(ulonglong)(dVar96 < (double)pfVar2[8] || (double)pfVar2[0xb] < dVar96);
      auVar113._0_8_ = -(ulonglong)((dVar39 < dVar48 || dVar48 < (double)pfVar2[6]) && bVar4);
      auVar113._8_8_ =
           -(ulonglong)((auVar112._8_8_ < dVar57 || dVar57 < (double)pfVar2[7]) && bVar5);
      iVar27 = movmskpd(iVar27,auVar113);
      uVar21 = movmskpd(iVar22,auVar105 & auVar65);
      local_1178 = auVar41;
      auVar54 = _DAT_149931180;
      if ((uVar21 & 0x3fffffff) == 0 && iVar27 == 0) {
        auVar65 = divpd(auVar52,auVar80);
        uVar49 = ~CONCAT44((float)dVar111,(float)dVar37) &
                 CONCAT44((float)auVar65._8_8_,(float)auVar65._0_8_);
        dVar51 = (double)(float)uVar49;
        dVar59 = (double)(float)(uVar49 >> 0x20);
        auVar85._0_8_ = (dVar39 - dVar48) * local_1158;
        auVar85._8_8_ = (dVar50 - dVar57) * dStack_1150;
        uVar49 = ~local_1148 &
                 CONCAT44((float)(((double)pfVar2[7] - dVar57) * dStack_1150),
                          (float)(((double)pfVar2[6] - dVar48) * local_1158));
        auVar62._0_8_ = (double)(float)uVar49;
        auVar62._8_8_ = (double)(float)(uVar49 >> 0x20);
        auVar98._0_8_ = ((double)pfVar2[0xb] - dVar96) * dVar51;
        auVar98._8_8_ = dVar59 * 0.0;
        uVar49 = ~CONCAT44((float)dVar111,(float)dVar37) &
                 CONCAT44((float)(dVar59 * 0.0),(float)(((double)pfVar2[8] - dVar96) * dVar51));
        auVar67._0_8_ = (double)(float)uVar49;
        auVar67._8_8_ = (double)(float)(uVar49 >> 0x20);
        auVar46._8_8_ = dVar38;
        auVar46._0_8_ = dVar36;
        auVar11._8_4_ = uVar119;
        auVar11._0_8_ = uVar6;
        auVar11._12_4_ = uVar120;
        auVar80 = blendvpd(auVar85,auVar11,auVar46);
        auVar47._8_8_ = dVar111;
        auVar47._0_8_ = dVar37;
        auVar12._8_4_ = uVar119;
        auVar12._0_8_ = uVar6;
        auVar12._12_4_ = uVar120;
        auVar102 = blendvpd(auVar98,auVar12,auVar47);
        auVar55._8_8_ = auVar62._8_8_;
        auVar55._0_8_ = auVar62._0_8_;
        auVar65 = minpd(auVar55,auVar80);
        auVar73._8_8_ = auVar67._8_8_;
        auVar73._0_8_ = auVar67._0_8_;
        auVar74 = minpd(auVar73,auVar102);
        auVar80 = maxpd(auVar62,auVar80);
        auVar102 = maxpd(auVar67,auVar102);
        auVar75._0_8_ = auVar74._0_8_;
        auVar86._8_8_ = auVar74._8_8_;
        auVar86._0_8_ = auVar65._0_8_;
        auVar94._8_8_ = auVar75._0_8_;
        auVar94._0_8_ = auVar65._8_8_;
        auVar109._8_8_ = auVar74._8_8_;
        auVar109._0_8_ = auVar65._8_8_;
        auVar75._8_8_ = auVar65._0_8_;
        auVar99 = maxpd(auVar65,auVar94);
        auVar65 = maxpd(auVar74,auVar86);
        auVar65 = maxpd(auVar65,auVar109);
        auVar74 = maxpd(auVar99,auVar75);
        auVar74 = maxpd(auVar74,ZEXT816(0));
        auVar65 = maxpd(auVar65,ZEXT816(0));
        auVar68._0_8_ = auVar102._0_8_;
        auVar56._8_8_ = auVar102._8_8_;
        auVar56._0_8_ = auVar80._0_8_;
        auVar76._8_8_ = auVar68._0_8_;
        auVar76._0_8_ = auVar80._8_8_;
        auVar95._8_8_ = auVar102._8_8_;
        auVar95._0_8_ = auVar80._8_8_;
        auVar68._8_8_ = auVar80._0_8_;
        auVar80 = minpd(auVar80,auVar76);
        auVar102 = minpd(auVar102,auVar56);
        auVar102 = minpd(auVar102,auVar95);
        auVar80 = minpd(auVar80,auVar68);
        auVar13._8_4_ = uVar119;
        auVar13._0_8_ = uVar6;
        auVar13._12_4_ = uVar120;
        auVar80 = minpd(auVar80,auVar13);
        auVar14._8_4_ = uVar119;
        auVar14._0_8_ = uVar6;
        auVar14._12_4_ = uVar120;
        auVar102 = minpd(auVar102,auVar14);
        auVar87._8_8_ = -(ulonglong)(auVar102._8_8_ < auVar65._8_8_);
        auVar87._0_8_ = -(ulonglong)(auVar102._0_8_ < auVar65._0_8_);
        dVar96 = auVar74._0_8_;
        auVar63._8_8_ = -(ulonglong)(auVar80._8_8_ < auVar74._8_8_);
        auVar63._0_8_ = -(ulonglong)(auVar80._0_8_ < dVar96);
        iVar31 = movmskpd(0,auVar63);
        iVar22 = movmskpd(iVar27,auVar87);
        local_1178 = auVar74;
        if (bVar35 && (iVar22 << 2 == 0 && iVar31 == 0)) {
          lVar34 = lVar34 >> 0x1c;
          if (dVar96 <= dVar117) {
            fVar3 = pfVar2[0xc];
            local_f8 = CONCAT44(local_f8._4_4_,iVar28);
            local_1178 = auVar41;
            local_1168 = uVar40;
            uStack_1160 = uVar110;
            if (local_f8._4_4_ < uVar23) {
              FUN_146e51698(&local_10f0,uVar58 & 0xffffffff);
            }
            puVar33 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar33 = &local_10f0;
            }
            *(float *)((longlong)puVar33 + lVar34) = fVar3;
            *(double *)((longlong)puVar33 + lVar34 + 8) = dVar117;
            fVar26 = pfVar2[0xd];
            iVar32 = (uint)local_f8;
            uVar58 = local_f8 & 0xffffffff;
            uVar21 = (uint)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar21);
            dVar117 = dVar96;
            if (local_f8._4_4_ < uVar21) {
              FUN_146e51698(&local_10f0,uVar58);
            }
          }
          else {
            fVar3 = pfVar2[0xd];
            local_f8 = CONCAT44(local_f8._4_4_,iVar28);
            local_1178 = auVar41;
            local_1168 = uVar40;
            uStack_1160 = uVar110;
            if (local_f8._4_4_ < uVar23) {
              FUN_146e51698(&local_10f0,uVar58 & 0xffffffff);
            }
            puVar33 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar33 = &local_10f0;
            }
            *(float *)((longlong)puVar33 + lVar34) = fVar3;
            *(double *)((longlong)puVar33 + lVar34 + 8) = dVar96;
            fVar26 = pfVar2[0xc];
            iVar32 = (uint)local_f8;
            uVar58 = local_f8 & 0xffffffff;
            uVar21 = (uint)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar21);
            if (local_f8._4_4_ < uVar21) {
              FUN_146e51698(&local_10f0,uVar58);
            }
          }
          unaff_RBP = (undefined8 *)(ulonglong)(uint)fVar3;
          local_1178 = auVar74;
        }
        else {
          if (bVar35) goto LAB_146e51022;
          local_1168 = uVar40;
          uStack_1160 = uVar110;
          if (iVar22 << 2 != 0 || iVar31 != 0) goto LAB_146e51060;
          fVar26 = pfVar2[0xd];
          local_f8 = CONCAT44(local_f8._4_4_,iVar28);
          dVar117 = dVar96;
          if (local_f8._4_4_ < uVar23) {
            unaff_RBP = &local_10f0;
            local_1178 = auVar41;
            FUN_146e51698(unaff_RBP,uVar58 & 0xffffffff);
            local_1178 = auVar74;
          }
        }
      }
      else {
        local_1168 = uVar40;
        uStack_1160 = uVar110;
        if (!bVar35) goto LAB_146e51060;
LAB_146e51022:
        fVar26 = pfVar2[0xc];
        local_f8 = CONCAT44(local_f8._4_4_,iVar28);
        local_1168 = uVar40;
        uStack_1160 = uVar110;
        if (local_f8._4_4_ < uVar23) {
          FUN_146e51698(&local_10f0,uVar58 & 0xffffffff);
        }
      }
      puVar33 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar33 = &local_10f0;
      }
      *(float *)(puVar33 + (longlong)iVar32 * 2) = fVar26;
      puVar33[(longlong)iVar32 * 2 + 1] = dVar117;
    }
    else {
      uVar58 = (ulonglong)
               *(int *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)pfVar2[0xc] * 0x18);
      if (uVar58 != 0) {
        lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)pfVar2[0xc] * 0x18);
        dVar48 = SUB168(*local_1180,0);
        dVar57 = SUB168(*local_1180,8);
        dVar96 = *(double *)local_1180[1];
        auVar88._8_8_ = 0;
        auVar88._0_8_ = uVar40;
        auVar41 = divpd(auVar52,auVar88);
        dVar37 = (double)-(ulonglong)((double)(uVar40 & auVar54._0_8_) < 1e-08);
        auVar89._8_8_ = 0xffffffffffffffff;
        auVar89._0_8_ = dVar37;
        uVar49 = ~CONCAT44(0xffc00000,(float)dVar37) &
                 CONCAT44((float)auVar41._8_8_,(float)auVar41._0_8_);
        dVar111 = (double)(float)uVar49;
        dVar117 = (double)(float)(uVar49 >> 0x20);
        plVar24 = (longlong *)(uVar58 * 9);
        lVar29 = uVar58 * 0x1c;
        lVar34 = 0;
        local_1168 = uVar40;
        uStack_1160 = uVar110;
        do {
          dVar59 = (double)*(float *)(lVar25 + 0xc + lVar34);
          dVar50 = (double)*(float *)(lVar25 + 8 + lVar34);
          dVar39 = (double)*(float *)(lVar25 + 4 + lVar34);
          dVar100 = (double)*(float *)(lVar25 + 0x18 + lVar34);
          dVar69 = (double)*(float *)(lVar25 + 0x14 + lVar34);
          dVar51 = (double)*(float *)(lVar25 + 0x10 + lVar34);
          auVar77._8_4_ = SUB84(dVar69,0);
          auVar77._0_8_ = dVar51;
          auVar77._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
          auVar52._8_8_ = 0;
          auVar52._0_8_ = -(ulonglong)(dVar100 < dVar96 || dVar96 < dVar59);
          auVar78._0_8_ = -(ulonglong)((dVar51 < dVar48 || dVar48 < dVar39) && bVar4);
          auVar78._8_8_ = -(ulonglong)((auVar77._8_8_ < dVar57 || dVar57 < dVar50) && bVar5);
          uVar21 = movmskpd((int)uVar58,auVar78);
          uVar58 = (ulonglong)uVar21;
          iVar22 = movmskpd((int)plVar24,auVar52 & auVar89);
          uVar23 = iVar22 << 2 | uVar21;
          plVar24 = (longlong *)(ulonglong)uVar23;
          if (uVar23 == 0) {
            auVar53._0_8_ = (dVar51 - dVar48) * local_1158;
            auVar53._8_8_ = (dVar69 - dVar57) * dStack_1150;
            uVar40 = CONCAT44((float)((dVar50 - dVar57) * dStack_1150),
                              (float)((dVar39 - dVar48) * local_1158)) & local_1138._0_8_;
            auVar60._0_8_ = (double)(float)uVar40;
            auVar60._8_8_ = (double)(float)(uVar40 >> 0x20);
            auVar70._0_8_ = (dVar100 - dVar96) * dVar111;
            auVar70._8_8_ = dVar117 * 0.0;
            uVar40 = CONCAT44((float)(dVar117 * 0.0),(float)((dVar59 - dVar96) * dVar111)) &
                     (CONCAT44(0xffc00000,(float)dVar37) ^ 0xffffffffffffffff);
            auVar64._0_8_ = (double)(float)uVar40;
            auVar64._8_8_ = (double)(float)(uVar40 >> 0x20);
            auVar42._8_8_ = dVar38;
            auVar42._0_8_ = dVar36;
            auVar7._8_4_ = uVar119;
            auVar7._0_8_ = uVar6;
            auVar7._12_4_ = uVar120;
            auVar54 = blendvpd(auVar53,auVar7,auVar42);
            auVar43._8_8_ = 0xffffffffffffffff;
            auVar43._0_8_ = dVar37;
            auVar8._8_4_ = uVar119;
            auVar8._0_8_ = uVar6;
            auVar8._12_4_ = uVar120;
            auVar41 = blendvpd(auVar70,auVar8,auVar43);
            auVar79._8_8_ = auVar60._8_8_;
            auVar79._0_8_ = auVar60._0_8_;
            auVar80 = minpd(auVar79,auVar54);
            auVar101._8_8_ = auVar64._8_8_;
            auVar101._0_8_ = auVar64._0_8_;
            auVar102 = minpd(auVar101,auVar41);
            auVar52 = maxpd(auVar60,auVar54);
            auVar65 = maxpd(auVar64,auVar41);
            auVar103._0_8_ = auVar102._0_8_;
            auVar71._8_8_ = auVar102._8_8_;
            auVar71._0_8_ = auVar80._0_8_;
            auVar121._8_8_ = auVar103._0_8_;
            auVar121._0_8_ = auVar80._8_8_;
            auVar103._8_8_ = auVar80._0_8_;
            auVar41 = maxpd(auVar80,auVar121);
            auVar54 = maxpd(auVar102,auVar71);
            auVar19._8_4_ = auVar102._8_4_;
            auVar19._0_8_ = auVar80._8_8_;
            auVar19._12_4_ = auVar102._12_4_;
            auVar54 = maxpd(auVar54,auVar19);
            auVar41 = maxpd(auVar41,auVar103);
            auVar66._0_8_ = auVar65._0_8_;
            auVar72._8_8_ = auVar65._8_8_;
            auVar72._0_8_ = auVar52._0_8_;
            auVar81._8_8_ = auVar66._0_8_;
            auVar81._0_8_ = auVar52._8_8_;
            auVar122._8_8_ = auVar65._8_8_;
            auVar122._0_8_ = auVar52._8_8_;
            auVar66._8_8_ = auVar52._0_8_;
            auVar52 = minpd(auVar52,auVar81);
            auVar65 = minpd(auVar65,auVar72);
            auVar65 = minpd(auVar65,auVar122);
            auVar52 = minpd(auVar52,auVar66);
            auVar41 = maxpd(auVar41,ZEXT816(0));
            auVar9._8_4_ = uVar119;
            auVar9._0_8_ = uVar6;
            auVar9._12_4_ = uVar120;
            auVar52 = minpd(auVar52,auVar9);
            auVar61._8_8_ = -(ulonglong)(auVar52._8_8_ < auVar41._8_8_);
            auVar61._0_8_ = -(ulonglong)(auVar52._0_8_ < auVar41._0_8_);
            auVar54 = maxpd(auVar54,ZEXT816(0));
            auVar10._8_4_ = uVar119;
            auVar10._0_8_ = uVar6;
            auVar10._12_4_ = uVar120;
            auVar41 = minpd(auVar65,auVar10);
            auVar104._8_8_ = -(ulonglong)(auVar41._8_8_ < auVar54._8_8_);
            auVar104._0_8_ = -(ulonglong)(auVar41._0_8_ < auVar54._0_8_);
            uVar21 = movmskpd(uVar21,auVar61);
            uVar58 = (ulonglong)uVar21;
            iVar22 = movmskpd(0,auVar104);
            uVar21 = iVar22 << 2 | uVar21;
            plVar24 = (longlong *)(ulonglong)uVar21;
            if (uVar21 == 0) {
              local_1108[0] = (double)CONCAT44(local_1108[0]._4_4_,*(undefined4 *)(lVar25 + lVar34))
              ;
              plVar24 = (longlong *)*param_4;
              uVar58 = (**(code **)(*plVar24 + 0x10))(plVar24,local_1108,param_3);
              if ((char)uVar58 == '\0') goto LAB_146e5152c;
            }
          }
          lVar34 = lVar34 + 0x1c;
          auVar54 = _DAT_149931180;
          auVar52 = _DAT_149934d80;
          uVar40 = local_1168;
          uVar110 = uStack_1160;
        } while (lVar29 != lVar34);
      }
    }
LAB_146e51060:
    auVar41._8_8_ = 0;
    auVar41._0_8_ = *(ulonglong *)(param_3 + 0x20);
    uVar21 = (uint)local_f8;
  } while( true );
LAB_146e5152c:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_146e51536:
  if ((local_f0 ^ (ulonglong)auStack_11b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBP & 0xffffffff;
}



// FUNCTION 146e51698 FUN_146e51698 body=125 status=ok
// SIG undefined FUN_146e51698(void)

void FUN_146e51698(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xff;
    if (0xff < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xffc) = iVar5;
    FUN_146e51716(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e51716 FUN_146e51716 body=144 status=ok
// SIG undefined FUN_146e51716(void)

void FUN_146e51716(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146e517a6 FUN_146e517a6 body=2964 status=ok
// SIG undefined FUN_146e517a6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e517a6(longlong param_1,double *param_2,longlong param_3,double *param_4,
                       undefined8 *param_5,double *param_6,longlong param_7)

{
  float *pfVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_1208 [32];
  undefined8 *local_11e8;
  double *local_11e0;
  longlong local_11d8;
  double local_11d0;
  longlong local_11c8;
  double local_11c0;
  double local_11b8;
  double local_11b0;
  double local_11a8;
  double local_11a0;
  double local_1198 [4];
  double local_1178 [4];
  double local_1158 [4];
  double local_1138 [6];
  undefined8 local_1108;
  double local_1100;
  double local_10f8;
  undefined8 local_10f0;
  double local_10e8;
  double local_10e0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e517bc;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1208;
  puVar13 = (undefined8 *)0x0;
  local_11c8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x100);
    puVar13 = (undefined8 *)((longlong)*(int *)(param_1 + 0x108) * 0x1c + (longlong)puVar11);
    dVar2 = param_2[2];
    dVar25 = *param_2;
    dVar22 = param_2[1];
    do {
      local_1158[2] = param_6[2];
      local_1158[0] = *param_6;
      local_1158[1] = param_6[1];
      local_10f0 = ((double)*(float *)((longlong)puVar11 + 4) - *param_4) - dVar25;
      local_10e8 = ((double)*(float *)(puVar11 + 1) - param_4[1]) - dVar22;
      local_10e0 = ((double)*(float *)((longlong)puVar11 + 0xc) - param_4[2]) - dVar2;
      local_1108 = ((double)*(float *)(puVar11 + 2) + *param_4) - dVar25;
      local_1100 = ((double)*(float *)((longlong)puVar11 + 0x14) + param_4[1]) - dVar22;
      local_10f8 = ((double)*(float *)(puVar11 + 3) + param_4[2]) - dVar2;
      lVar9 = 0;
      dVar20 = 0.0;
      uVar18 = 0xffffffff;
      uVar19 = 0x7fefffff;
      do {
        if (*(char *)(param_7 + lVar9) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar9]) goto LAB_146e51a21;
          dVar23 = 0.0;
          dVar26 = 1.79769313486232e+308;
          if ((double)(&local_1108)[lVar9] <= 0.0 && (double)(&local_1108)[lVar9] != 0.0)
          goto LAB_146e51a21;
        }
        else {
          dVar23 = (double)(&local_10f0)[lVar9] * local_1158[lVar9];
          dVar26 = local_1158[lVar9] * (double)(&local_1108)[lVar9];
        }
        dVar28 = dVar26;
        if (dVar23 <= dVar26) {
          dVar28 = dVar23;
        }
        if (dVar20 <= dVar28) {
          dVar20 = dVar28;
        }
        if (dVar23 <= dVar26) {
          dVar23 = dVar26;
        }
        if (dVar23 <= (double)CONCAT44(uVar19,uVar18)) {
          uVar18 = SUB84(dVar23,0);
          uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        if ((double)CONCAT44(uVar19,uVar18) <= dVar20 && dVar20 != (double)CONCAT44(uVar19,uVar18))
        goto LAB_146e51a21;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      if ((dVar20 <= *(double *)(param_3 + 0x20)) &&
         (0.0 < (double)CONCAT44(uVar19,uVar18) || (double)CONCAT44(uVar19,uVar18) == 0.0)) {
        local_10f0._4_4_ = (undefined4)((ulonglong)local_10f0 >> 0x20);
        local_10f0 = (double)CONCAT44(local_10f0._4_4_,*(undefined4 *)puVar11);
        cVar5 = (**(code **)(*(longlong *)*param_5 + 0x18))
                          ((longlong *)*param_5,&local_10f0,param_3);
        if (cVar5 == '\0') goto LAB_146e521d3;
      }
LAB_146e51a21:
      puVar11 = (undefined8 *)((longlong)puVar11 + 0x1c);
    } while (puVar11 != puVar13);
  }
  lVar9 = local_11c8;
  if (*(longlong *)(local_11c8 + 0xc0) != 0) {
    local_11d8 = param_7;
    local_11e0 = param_6;
    local_11e8 = param_5;
    cVar5 = FUN_146e517a6(*(longlong *)(local_11c8 + 0xc0),param_2,param_3,param_4);
    if (cVar5 == '\0') {
LAB_146e521d3:
      puVar13 = (undefined8 *)0x0;
      goto LAB_146e520ab;
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(lVar9 + 0x40) == '\x01') {
    iVar6 = *(int *)(lVar9 + 0x44);
    if (iVar6 != -1) {
LAB_146e51a79:
      local_f8 = 0xff00000001;
      local_10f0 = (double)CONCAT44(local_10f0._4_4_,iVar6);
      local_10e8 = 0.0;
    }
  }
  else {
    iVar6 = 0;
    if (*(int *)(lVar9 + 0x18) != 0) goto LAB_146e51a79;
  }
  local_11b0 = param_2[2];
  local_11b8 = *param_2;
  local_11c0 = param_2[1];
  fVar17 = (float)local_11b8;
  local_11a0 = (double)(float)local_11b0;
  local_11a8 = (double)(float)local_11c0;
LAB_146e51af1:
  uVar4 = local_f8;
  uVar7 = (uint)local_f8;
  lVar8 = (longlong)(int)(uint)local_f8;
  puVar13 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar13 >> 8),lVar8 == 0);
  if (lVar8 == 0) goto LAB_146e520a1;
  puVar11 = local_100;
  if (local_100 == (undefined8 *)0x0) {
    puVar11 = &local_10f0;
  }
  uVar16 = lVar8 - 1;
  iVar14 = (int)uVar16;
  local_f8 = CONCAT44(local_f8._4_4_,iVar14);
  dVar2 = *(double *)(param_3 + 0x20);
  iVar6 = 4;
  if ((double)puVar11[lVar8 * 2 + -1] <= dVar2) {
    pfVar1 = (float *)(*(longlong *)(lVar9 + 0x10) +
                      (longlong)*(int *)(puVar11 + lVar8 * 2 + -2) * 0x40);
    if ((*(byte *)(*(longlong *)(lVar9 + 0x10) + 0x3c +
                  (longlong)*(int *)(puVar11 + lVar8 * 2 + -2) * 0x40) & 1) == 0) {
      local_1178[2] = param_6[2];
      local_1178[0] = *param_6;
      local_1178[1] = param_6[1];
      dVar25 = param_4[2];
      dVar22 = *param_4;
      dVar20 = param_4[1];
      local_1108 = ((double)*pfVar1 - dVar22) - local_11b8;
      local_1100 = ((double)pfVar1[1] - dVar20) - local_11c0;
      local_10f8 = ((double)pfVar1[2] - dVar25) - local_11b0;
      local_1138[3] = ((double)pfVar1[3] + dVar22) - local_11b8;
      local_1138[4] = ((double)pfVar1[4] + dVar20) - local_11c0;
      local_1138[5] = ((double)pfVar1[5] + dVar25) - local_11b0;
      dVar23 = 0.0;
      lVar8 = 0;
      dVar26 = 1.79769313486232e+308;
      do {
        if (*(char *)(param_7 + lVar8) == '\x01') {
          bVar3 = true;
          if ((0.0 < (double)(&local_1108)[lVar8]) ||
             (dVar28 = 0.0, dVar21 = 1.79769313486232e+308,
             local_1138[lVar8 + 3] <= 0.0 && local_1138[lVar8 + 3] != 0.0)) goto LAB_146e51efc;
        }
        else {
          dVar28 = (double)(&local_1108)[lVar8] * local_1178[lVar8];
          dVar21 = local_1178[lVar8] * local_1138[lVar8 + 3];
        }
        dVar27 = dVar21;
        if (dVar28 <= dVar21) {
          dVar27 = dVar28;
        }
        if (dVar23 <= dVar27) {
          dVar23 = dVar27;
        }
        if (dVar28 <= dVar21) {
          dVar28 = dVar21;
        }
        if (dVar28 <= dVar26) {
          dVar26 = dVar28;
        }
        bVar3 = true;
        if (dVar26 < dVar23) goto LAB_146e51efc;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      if ((dVar23 <= dVar2) && (0.0 <= dVar26)) {
        bVar3 = false;
        local_11d0 = dVar23;
      }
LAB_146e51efc:
      local_1198[2] = param_6[2];
      local_1198[0] = *param_6;
      local_1198[1] = param_6[1];
      local_1108 = ((double)pfVar1[6] - dVar22) - local_11b8;
      local_1100 = ((double)pfVar1[7] - dVar20) - local_11c0;
      local_10f8 = ((double)pfVar1[8] - dVar25) - local_11b0;
      local_1138[3] = ((double)pfVar1[9] + dVar22) - local_11b8;
      local_1138[4] = ((double)pfVar1[10] + dVar20) - local_11c0;
      local_1138[5] = ((double)pfVar1[0xb] + dVar25) - local_11b0;
      uVar30 = 0;
      uVar31 = 0;
      lVar8 = 0;
      uVar18 = 0xffffffff;
      uVar19 = 0x7fefffff;
      do {
        if (*(char *)(param_7 + lVar8) == '\x01') {
          if (0.0 < (double)(&local_1108)[lVar8]) goto LAB_146e52048;
          dVar22 = 0.0;
          dVar25 = 1.79769313486232e+308;
          if (local_1138[lVar8 + 3] <= 0.0 && local_1138[lVar8 + 3] != 0.0) goto LAB_146e52048;
        }
        else {
          dVar22 = (double)(&local_1108)[lVar8] * local_1198[lVar8];
          dVar25 = local_1198[lVar8] * local_1138[lVar8 + 3];
        }
        dVar20 = dVar25;
        if (dVar22 <= dVar25) {
          dVar20 = dVar22;
        }
        if ((double)CONCAT44(uVar31,uVar30) <= dVar20) {
          uVar30 = SUB84(dVar20,0);
          uVar31 = (undefined4)((ulonglong)dVar20 >> 0x20);
        }
        if (dVar22 <= dVar25) {
          dVar22 = dVar25;
        }
        if (dVar22 <= (double)CONCAT44(uVar19,uVar18)) {
          uVar18 = SUB84(dVar22,0);
          uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        if ((double)CONCAT44(uVar19,uVar18) <= (double)CONCAT44(uVar31,uVar30) &&
            (double)CONCAT44(uVar31,uVar30) != (double)CONCAT44(uVar19,uVar18)) goto LAB_146e52048;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      if ((dVar2 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != dVar2) ||
         ((double)CONCAT44(uVar19,uVar18) <= 0.0 && (double)CONCAT44(uVar19,uVar18) != 0.0)) {
LAB_146e52048:
        if (bVar3) goto LAB_146e51af1;
        fVar10 = pfVar1[0xc];
        bVar3 = local_f8._4_4_ < uVar7;
        local_f8 = uVar4;
        if (bVar3) {
          puVar13 = &local_10f0;
          FUN_146e5233c(puVar13,uVar16 & 0xffffffff);
        }
LAB_146e52068:
        uVar30 = SUB84(local_11d0,0);
        uVar31 = (undefined4)((ulonglong)local_11d0 >> 0x20);
      }
      else if (bVar3) {
        fVar10 = pfVar1[0xd];
        bVar3 = local_f8._4_4_ < uVar7;
        local_f8 = uVar4;
        if (bVar3) {
          puVar13 = &local_10f0;
          FUN_146e5233c(puVar13,uVar16 & 0xffffffff);
        }
      }
      else {
        if (local_11d0 <= (double)CONCAT44(uVar31,uVar30) &&
            (double)CONCAT44(uVar31,uVar30) != local_11d0) {
          fVar10 = pfVar1[0xd];
          bVar3 = local_f8._4_4_ < uVar7;
          local_f8 = uVar4;
          if (bVar3) {
            puVar13 = &local_10f0;
            FUN_146e5233c(puVar13,uVar16 & 0xffffffff);
          }
          puVar11 = local_100;
          if (local_100 == (undefined8 *)0x0) {
            puVar11 = &local_10f0;
          }
          *(float *)(puVar11 + uVar16 * 2) = fVar10;
          puVar11[uVar16 * 2 + 1] = CONCAT44(uVar31,uVar30);
          fVar10 = pfVar1[0xc];
          uVar16 = local_f8 & 0xffffffff;
          uVar7 = (uint)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar7);
          if (local_f8._4_4_ < uVar7) {
            FUN_146e5233c(&local_10f0,uVar16);
          }
          goto LAB_146e52068;
        }
        fVar10 = pfVar1[0xc];
        bVar3 = local_f8._4_4_ < uVar7;
        local_f8 = uVar4;
        if (bVar3) {
          puVar13 = &local_10f0;
          FUN_146e5233c(puVar13,uVar16 & 0xffffffff);
        }
        puVar11 = local_100;
        if (local_100 == (undefined8 *)0x0) {
          puVar11 = &local_10f0;
        }
        *(float *)(puVar11 + (longlong)iVar14 * 2) = fVar10;
        puVar11[(longlong)iVar14 * 2 + 1] = local_11d0;
        fVar10 = pfVar1[0xd];
        uVar16 = local_f8 & 0xffffffff;
        uVar7 = (uint)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,uVar7);
        if (local_f8._4_4_ < uVar7) {
          FUN_146e5233c(&local_10f0,uVar16);
        }
      }
      puVar11 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar11 = &local_10f0;
      }
      *(float *)(puVar11 + (longlong)(int)uVar16 * 2) = fVar10;
      puVar11[(longlong)(int)uVar16 * 2 + 1] = CONCAT44(uVar31,uVar30);
      lVar9 = local_11c8;
      goto LAB_146e51af1;
    }
    lVar8 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x20) + 8 + (longlong)(int)pfVar1[0xc] * 0x18);
    iVar6 = 0;
    if (lVar8 != 0) {
      dVar2 = *param_4;
      dVar25 = param_4[1];
      dVar22 = param_4[2];
      puVar12 = *(undefined4 **)(*(longlong *)(lVar9 + 0x20) + (longlong)(int)pfVar1[0xc] * 0x18);
      dVar20 = *param_6;
      dVar26 = param_6[1];
      dVar23 = param_6[2];
      puVar15 = puVar12 + lVar8 * 7;
      do {
        local_1138[0] = (double)(float)dVar20;
        local_1138[1] = (double)(float)dVar26;
        local_1138[2] = (double)(float)dVar23;
        dVar28 = ((double)(float)puVar12[1] - (double)(float)dVar2) - (double)fVar17;
        local_1108 = dVar28;
        local_1100 = ((double)(float)puVar12[2] - (double)(float)dVar25) - local_11a8;
        local_10f8 = ((double)(float)puVar12[3] - (double)(float)dVar22) - local_11a0;
        local_1138[3] = ((double)(float)puVar12[4] + (double)(float)dVar2) - (double)fVar17;
        local_1138[4] = ((double)(float)puVar12[5] + (double)(float)dVar25) - local_11a8;
        local_1138[5] = ((double)(float)puVar12[6] + (double)(float)dVar22) - local_11a0;
        dVar21 = 0.0;
        lVar9 = 0;
        uVar18 = 0xffffffff;
        uVar19 = 0x7fefffff;
        do {
          if (*(char *)(param_7 + lVar9) == '\x01') {
            if (0.0 < (double)(&local_1108)[lVar9]) goto LAB_146e51d76;
            dVar24 = 0.0;
            dVar27 = 1.79769313486232e+308;
            if (local_1138[lVar9 + 3] <= 0.0 && local_1138[lVar9 + 3] != 0.0) goto LAB_146e51d76;
          }
          else {
            dVar24 = (double)(&local_1108)[lVar9] * local_1138[lVar9];
            dVar27 = local_1138[lVar9] * local_1138[lVar9 + 3];
          }
          dVar29 = dVar27;
          if (dVar24 <= dVar27) {
            dVar29 = dVar24;
          }
          if (dVar21 <= dVar29) {
            dVar21 = dVar29;
          }
          if (dVar24 <= dVar27) {
            dVar24 = dVar27;
          }
          if (dVar24 <= (double)CONCAT44(uVar19,uVar18)) {
            uVar18 = SUB84(dVar24,0);
            uVar19 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          if ((double)CONCAT44(uVar19,uVar18) <= dVar21 && dVar21 != (double)CONCAT44(uVar19,uVar18)
             ) goto LAB_146e51d76;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        if ((dVar21 <= *(double *)(param_3 + 0x20)) &&
           (0.0 < (double)CONCAT44(uVar19,uVar18) || (double)CONCAT44(uVar19,uVar18) == 0.0)) {
          local_1108 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*puVar12);
          cVar5 = (**(code **)(*(longlong *)*param_5 + 0x18))
                            ((longlong *)*param_5,&local_1108,param_3);
          if (cVar5 == '\0') {
            iVar6 = 1;
            lVar9 = local_11c8;
            break;
          }
        }
LAB_146e51d76:
        puVar12 = puVar12 + 7;
        lVar9 = local_11c8;
        iVar6 = 0;
      } while (puVar12 != puVar15);
    }
  }
  if ((iVar6 == 4) || (iVar6 == 0)) goto LAB_146e51af1;
LAB_146e520a1:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_146e520ab:
  if ((local_f0 ^ (ulonglong)auStack_1208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar13 & 0xffffffff;
}



// FUNCTION 146e5233c FUN_146e5233c body=125 status=ok
// SIG undefined FUN_146e5233c(void)

void FUN_146e5233c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xff;
    if (0xff < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xffc) = iVar5;
    FUN_146e523ba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e523ba FUN_146e523ba body=144 status=ok
// SIG undefined FUN_146e523ba(void)

void FUN_146e523ba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146e5244a FUN_146e5244a body=85 status=ok
// SIG undefined FUN_146e5244a(void)

void FUN_146e5244a(void)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_20;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_26 = 0;
  FUN_146e524a0();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e524a0 FUN_146e524a0 body=891 status=ok
// SIG undefined FUN_146e524a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e524a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong unaff_RSI;
  undefined7 uVar12;
  ulonglong uVar11;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_10a8 [40];
  undefined8 *local_1080;
  double local_1078 [6];
  double local_1048 [510];
  double *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10a8;
  local_1080 = param_3;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    puVar13 = *(undefined4 **)(param_1 + 0x100);
    puVar15 = puVar13 + (longlong)*(int *)(param_1 + 0x108) * 7;
    do {
      local_1048[0] = (double)(float)puVar13[1];
      local_1048[1] = (double)(float)puVar13[2];
      local_1048[2] = (double)(float)puVar13[3];
      local_1048[3] = (double)(float)puVar13[4];
      local_1048[4] = (double)(float)puVar13[5];
      local_1048[5] = (double)(float)puVar13[6];
      lVar7 = 0;
      do {
        dVar1 = *(double *)(param_2 + lVar7 * 8);
        if ((local_1048[lVar7 + 3] <= dVar1 && dVar1 != local_1048[lVar7 + 3]) ||
           (pdVar10 = (double *)(param_2 + 0x18 + lVar7 * 8),
           *pdVar10 <= local_1048[lVar7] && local_1048[lVar7] != *pdVar10)) goto LAB_146e525ad;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      local_1078[0] = (double)CONCAT44(local_1078[0]._4_4_,*puVar13);
      cVar4 = (**(code **)(*(longlong *)*local_1080 + 8))((longlong *)*local_1080,local_1078);
      if (cVar4 == '\0') goto LAB_146e527e8;
LAB_146e525ad:
      puVar13 = puVar13 + 7;
    } while (puVar13 != puVar15);
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (cVar4 = FUN_146e524a0(*(longlong *)(param_1 + 0xc0),param_2,local_1080), cVar4 == '\0')) {
LAB_146e527e8:
    uVar11 = 0;
    goto LAB_146e5279f;
  }
  bVar5 = *(byte *)(param_1 + 0x40);
  uVar12 = (undefined7)(unaff_RSI >> 8);
  if ((bVar5 == 1) && (*(int *)(param_1 + 0x188) != 0)) {
    local_1048[0] = (double)CONCAT71(local_1048[0]._1_7_,1);
    cVar4 = FUN_146e5281c(param_1,param_2,local_1080);
    if (cVar4 != '\0') {
      uVar11 = CONCAT71(uVar12,local_1048[0]._0_1_);
      goto LAB_146e5279f;
    }
    bVar5 = *(byte *)(param_1 + 0x40);
  }
  local_58 = (double *)0x0;
  local_4c = 0xff;
  if ((bVar5 & 1) == 0) {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_146e52611;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x44);
    if (iVar6 != -1) {
LAB_146e52611:
      local_1048[0] = (double)CONCAT44(local_1048[0]._4_4_,iVar6);
      local_1048[1] = 0.0;
      local_50 = 1;
      do {
        pdVar10 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar10 = local_1048;
        }
        lVar8 = (longlong)(int)local_50;
        local_50 = local_50 - 1;
        lVar7 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(pdVar10 + lVar8 * 2 + -2) * 0x40;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x3c +
                      (longlong)*(int *)(pdVar10 + lVar8 * 2 + -2) * 0x40) & 1) == 0) {
          lVar14 = 0;
          lVar8 = 0;
          do {
            uVar3 = local_50;
            local_1078[0] = (double)*(float *)(lVar7 + lVar8);
            local_1078[1] = (double)*(float *)(lVar7 + 4 + lVar8);
            local_1078[2] = (double)*(float *)(lVar7 + 8 + lVar8);
            local_1078[3] = (double)*(float *)(lVar7 + 0xc + lVar8);
            local_1078[4] = (double)*(float *)(lVar7 + 0x10 + lVar8);
            local_1078[5] = (double)*(float *)(lVar7 + 0x14 + lVar8);
            lVar9 = 0;
            do {
              dVar1 = *(double *)(param_2 + lVar9 * 8);
              if ((local_1078[lVar9 + 3] <= dVar1 && dVar1 != local_1078[lVar9 + 3]) ||
                 (pdVar10 = (double *)(param_2 + 0x18 + lVar9 * 8),
                 *pdVar10 <= local_1078[lVar9] && local_1078[lVar9] != *pdVar10))
              goto LAB_146e52739;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 3);
            uVar2 = *(uint *)(lVar7 + 0x30 + lVar14 * 4);
            unaff_RSI = (ulonglong)uVar2;
            lVar9 = (longlong)(int)local_50;
            local_50 = local_50 + 1;
            if (local_4c < local_50) {
              FUN_146e52904(local_1048,uVar3);
            }
            pdVar10 = local_58;
            if (local_58 == (double *)0x0) {
              pdVar10 = local_1048;
            }
            *(uint *)(pdVar10 + lVar9 * 2) = uVar2;
            pdVar10[lVar9 * 2 + 1] = 0.0;
LAB_146e52739:
            lVar14 = lVar14 + 1;
            lVar8 = lVar8 + 0x18;
          } while (lVar8 != 0x30);
        }
        else {
          cVar4 = FUN_146dede12((longlong)*(int *)(lVar7 + 0x30) * 0x18 +
                                *(longlong *)(param_1 + 0x20),param_2,local_1080);
          if (cVar4 == '\0') {
            uVar11 = 0;
            goto LAB_146e5278d;
          }
        }
      } while (local_50 != 0);
      uVar11 = CONCAT71((int7)(unaff_RSI >> 8),1);
LAB_146e5278d:
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146e5279f;
    }
  }
  uVar11 = CONCAT71(uVar12,1);
LAB_146e5279f:
  if ((local_48 ^ (ulonglong)auStack_10a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 146e5281c FUN_146e5281c body=231 status=ok
// SIG undefined FUN_146e5281c(void)

undefined8
FUN_146e5281c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  *param_4 = 1;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if (lVar3 != 0) {
    piVar4 = (int *)(**(code **)(*(longlong *)*param_3 + 0x38))();
    iVar1 = *piVar4;
    if (iVar1 < *(int *)(param_1 + 0x118)) {
      lVar3 = *(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 0x18;
      if (lVar3 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x110) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = (longlong)iVar1;
      if ((lVar3 != -1) && (iVar1 < *(int *)(param_1 + 0x198) + -1)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 400) + lVar3 * 4);
        lVar5 = (longlong)iVar1;
        if (*(int *)(*(longlong *)(param_1 + 400) + 4 + lVar3 * 4) <= iVar1) {
          return 1;
        }
        do {
          cVar2 = FUN_146dede12((longlong)*(int *)(*(longlong *)(param_1 + 0x180) + lVar5 * 4) *
                                0x18 + *(longlong *)(param_1 + 0x20),param_2,param_3);
          if (cVar2 == '\0') {
            *param_4 = 0;
            return 1;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(*(longlong *)(param_1 + 400) + 4 + lVar3 * 4));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 146e52904 FUN_146e52904 body=125 status=ok
// SIG undefined FUN_146e52904(void)

void FUN_146e52904(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xff;
    if (0xff < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xffc) = iVar5;
    FUN_146e52982(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e52982 FUN_146e52982 body=144 status=ok
// SIG undefined FUN_146e52982(void)

void FUN_146e52982(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146e52a12 FUN_146e52a12 body=48 status=ok
// SIG undefined FUN_146e52a12(void)

void FUN_146e52a12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 146e52a42 FUN_146e52a42 body=270 status=ok
// SIG undefined FUN_146e52a42(void)

undefined8 * FUN_146e52a42(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f5f4b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x10;
  *(undefined4 *)(param_1 + 0x25) = 0x47c35000;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)((longlong)param_1 + 0x179) = 0x101;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_1429ebb5c(param_1);
  return param_1;
}



// FUNCTION 146e52b50 FUN_146e52b50 body=713 status=ok
// SIG undefined FUN_146e52b50(void)

longlong FUN_146e52b50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1;
  while( true ) {
    *(undefined1 *)(lVar4 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(lVar4 + 0x150) = 0;
    if (*(int *)(lVar4 + 0x154) != 0) {
      FUN_14481578e(lVar4 + 0x148,0);
    }
    FUN_140c0c7e4(*(undefined8 *)(lVar4 + 0x168),*(undefined4 *)(lVar4 + 0x170));
    *(undefined4 *)(lVar4 + 0x170) = 0;
    if (*(int *)(lVar4 + 0x174) != 0) {
      FUN_146e52a12(lVar4 + 0x168);
    }
    *(undefined4 *)(lVar4 + 0x160) = 0;
    if (*(int *)(lVar4 + 0x164) != 0) {
      FUN_14481578e(lVar4 + 0x158,0);
    }
    if (lVar4 == param_2) break;
    FUN_146dee7fe(lVar4 + 0x10,param_2 + 0x10);
    FUN_146dee958(lVar4 + 0x20,param_2 + 0x20);
    FUN_146dee84e(lVar4 + 0x30,param_2 + 0x30);
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    FUN_140484a40(lVar4 + 0x50,param_2 + 0x50);
    FUN_14054c6c4(lVar4 + 0xa0,param_2 + 0xa0);
    FUN_14054c6c4(lVar4 + 0xb0,param_2 + 0xb0);
    uVar2 = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar4 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
    *(undefined8 *)(lVar4 + 0xe4) = uVar2;
    *(undefined4 *)(lVar4 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    uVar2 = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar4 + 0xec) = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar4 + 0xf4) = uVar2;
    *(undefined4 *)(lVar4 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(lVar4 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(lVar4 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(lVar4 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    FUN_146dee84e(lVar4 + 0x100,param_2 + 0x100);
    FUN_146deea5e(lVar4 + 0x110);
    *(undefined4 *)(lVar4 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(lVar4 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(lVar4 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(lVar4 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined1 *)(lVar4 + 0x178) = *(undefined1 *)(param_2 + 0x178);
    *(undefined1 *)(lVar4 + 0x179) = *(undefined1 *)(param_2 + 0x179);
    *(undefined1 *)(lVar4 + 0x17a) = *(undefined1 *)(param_2 + 0x17a);
    lVar3 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_140c0c5dc(lVar3);
        FUN_1400020a8(lVar3);
      }
      return param_1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d0);
      FUN_146e3fbb0(lVar3);
      lVar1 = *(longlong *)(lVar4 + 0xc0);
      *(longlong *)(lVar4 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_140c0c5dc(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
    }
    lVar4 = lVar3;
    param_2 = *(longlong *)(param_2 + 0xc0);
  }
  return param_1;
}



// FUNCTION 146e52e1a FUN_146e52e1a body=1322 status=ok
// SIG undefined FUN_146e52e1a(void)

undefined8 * FUN_146e52e1a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f5f4b0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146dee89e(param_1 + 2,iVar1,0);
    FUN_146dee900(param_1[2],uVar7,iVar1);
  }
  FUN_146deeb2c(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1409697b8(param_1 + 6,iVar1,0);
    FUN_1409694a7(param_1[6],uVar7,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140484a40(param_1 + 10,param_2 + 0x50);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar2 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar2 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xf0);
  uVar5 = *(undefined4 *)(param_2 + 0xf4);
  uVar6 = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1e) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar5;
  *(undefined4 *)(param_1 + 0x1f) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_2 + 0x108);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  *(int *)(param_1 + 0x21) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1409697b8(param_1 + 0x20,iVar1,0);
    FUN_1409694a7(param_1[0x20],uVar7,iVar1);
  }
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  pvVar2 = *(void **)(param_2 + 0x110);
  *(int *)(param_1 + 0x23) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_146deeab8(param_1 + 0x22,iVar1,0);
    memcpy((void *)param_1[0x22],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x178);
  *(undefined1 *)((longlong)param_1 + 0x179) = *(undefined1 *)(param_2 + 0x179);
  *(undefined1 *)((longlong)param_1 + 0x17a) = *(undefined1 *)(param_2 + 0x17a);
  param_1[0x30] = 0;
  iVar1 = *(int *)(param_2 + 0x188);
  pvVar2 = *(void **)(param_2 + 0x180);
  *(int *)(param_1 + 0x31) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x30,iVar1,0);
    memcpy((void *)param_1[0x30],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x32] = 0;
  iVar1 = *(int *)(param_2 + 0x198);
  pvVar2 = *(void **)(param_2 + 400);
  *(int *)(param_1 + 0x33) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x32,iVar1,0);
    memcpy((void *)param_1[0x32],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x34] = 0;
  iVar1 = *(int *)(param_2 + 0x1a8);
  pvVar2 = *(void **)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x35) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x34,iVar1,0);
    memcpy((void *)param_1[0x34],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x36] = 0;
  iVar1 = *(int *)(param_2 + 0x1b8);
  pvVar2 = *(void **)(param_2 + 0x1b0);
  *(int *)(param_1 + 0x37) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x36,iVar1,0);
    memcpy((void *)param_1[0x36],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_146dee728(param_1 + 0x38,0x20);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1d0,0x10);
    FUN_146e52e1a(uVar7,lVar3);
    lVar3 = param_1[0x18];
    param_1[0x18] = uVar7;
    if (lVar3 != 0) {
      FUN_140c0c5dc(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 146e53344 FUN_146e53344 body=513 status=ok
// SIG undefined FUN_146e53344(void)

bool FUN_146e53344(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5385c(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e53546 FUN_146e53546 body=513 status=ok
// SIG undefined FUN_146e53546(void)

bool FUN_146e53546(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5385c(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e53748 FUN_146e53748 body=275 status=ok
// SIG undefined FUN_146e53748(void)

void FUN_146e53748(double *param_1,int param_2,longlong param_3,longlong *param_4,double *param_5,
                  double *param_6,double *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)param_2 * 0xc;
  lVar7 = (longlong)*(int *)(*param_4 + lVar6);
  dVar3 = param_1[2];
  lVar5 = *(longlong *)(param_3 + 0x28);
  fVar1 = *(float *)(lVar5 + 8 + lVar7 * 0xc);
  dVar4 = param_1[1];
  fVar2 = *(float *)(lVar5 + 4 + lVar7 * 0xc);
  *param_5 = (double)((float)*param_1 * *(float *)(lVar5 + lVar7 * 0xc));
  param_5[1] = (double)((float)dVar4 * fVar2);
  param_5[2] = (double)((float)dVar3 * fVar1);
  lVar7 = (longlong)*(int *)(*param_4 + 4 + lVar6);
  dVar3 = param_1[2];
  lVar5 = *(longlong *)(param_3 + 0x28);
  fVar1 = *(float *)(lVar5 + 8 + lVar7 * 0xc);
  dVar4 = param_1[1];
  fVar2 = *(float *)(lVar5 + 4 + lVar7 * 0xc);
  *param_6 = (double)((float)*param_1 * *(float *)(lVar5 + lVar7 * 0xc));
  param_6[1] = (double)((float)dVar4 * fVar2);
  param_6[2] = (double)((float)dVar3 * fVar1);
  lVar6 = (longlong)*(int *)(*param_4 + 8 + lVar6);
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  fVar1 = *(float *)(lVar5 + 8 + lVar6 * 0xc);
  fVar2 = *(float *)(lVar5 + 4 + lVar6 * 0xc);
  *param_7 = (double)((float)*param_1 * *(float *)(lVar5 + lVar6 * 0xc));
  param_7[1] = (double)((float)dVar4 * fVar2);
  param_7[2] = (double)((float)dVar3 * fVar1);
  return;
}



// FUNCTION 146e5385c FUN_146e5385c body=407 status=ok
// SIG undefined FUN_146e5385c(void)

void FUN_146e5385c(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = &LAB_1406863be;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e539f4 FUN_146e539f4 body=2634 status=ok
// SIG undefined FUN_146e539f4(void)

ulonglong FUN_146e539f4(longlong *param_1,int param_2,float *param_3)

{
  double *pdVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *pdStack_2a8;
  double *local_2a0;
  undefined1 *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  undefined1 *local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined1 local_254 [4];
  double local_250;
  double local_248;
  double dStack_240;
  ulonglong local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  char local_1cb [3];
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined2 local_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  double local_158 [3];
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  double local_108 [3];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  ulonglong local_c0;
  undefined7 uVar12;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar7 = *(longlong *)param_1[1];
  lVar9 = (longlong)param_2;
  lVar13 = (longlong)*(int *)(lVar7 + lVar9 * 0xc);
  lVar2 = *(longlong *)(*param_1 + 0x28);
  local_1d8 = (double)*(float *)(lVar2 + 8 + lVar13 * 0xc);
  dStack_1e0 = (double)*(float *)(lVar2 + 4 + lVar13 * 0xc);
  pdVar1 = (double *)param_1[4];
  local_1e8 = (double)*(float *)(lVar2 + lVar13 * 0xc);
  lVar13 = (longlong)*(int *)(lVar7 + 4 + lVar9 * 0xc);
  local_1f0 = (double)*(float *)(lVar2 + 8 + lVar13 * 0xc);
  local_1f8 = (double)*(float *)(lVar2 + 4 + lVar13 * 0xc);
  local_200 = (double)*(float *)(lVar2 + lVar13 * 0xc);
  lVar7 = (longlong)*(int *)(lVar7 + 8 + lVar9 * 0xc);
  local_208 = (double)*(float *)(lVar2 + 8 + lVar7 * 0xc);
  local_210 = (double)*(float *)(lVar2 + 4 + lVar7 * 0xc);
  local_218 = (double)*(float *)(lVar2 + lVar7 * 0xc);
  dVar14 = (local_200 - local_1e8) * (local_210 - dStack_1e0) -
           (local_218 - local_1e8) * (local_1f8 - dStack_1e0);
  dVar17 = (local_1f0 - local_1d8) * (local_218 - local_1e8) -
           (local_208 - local_1d8) * (local_200 - local_1e8);
  dVar4 = (local_1f8 - dStack_1e0) * (local_208 - local_1d8) -
          (local_210 - dStack_1e0) * (local_1f0 - local_1d8);
  dVar19 = dVar14 * dVar14 + dVar4 * dVar4 + dVar17 * dVar17;
  uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar11 = CONCAT71(uVar12,1);
  if ((dVar19 < 9.99999993922529e-09) || (dVar19 = SQRT(dVar19), dVar19 <= 9.99999993922529e-09))
  goto LAB_146e543cb;
  pdVar3 = (double *)param_1[3];
  if ((0.0 < pdVar3[2] * (dVar14 / dVar19) +
             *pdVar3 * (dVar4 / dVar19) + pdVar3[1] * (dVar17 / dVar19)) &&
     (*(char *)((longlong)param_1 + 100) != '\0')) goto LAB_146e543cb;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0x100;
  local_1ae = 0;
  local_1ac = 0x202;
  local_1c8 = &PTR_FUN_149f48540;
  local_2a0 = &local_248;
  local_2b0 = &local_250;
  local_2b8 = pdVar1;
  pdStack_2a8 = &local_230;
  local_298 = local_254;
  local_1a8 = local_1e8;
  dStack_1a0 = dStack_1e0;
  local_198 = local_1d8;
  local_190 = dVar4 / dVar19;
  local_188 = dVar17 / dVar19;
  local_180 = dVar14 / dVar19;
  cVar6 = FUN_1406644e2(&local_1a8,param_1[2],pdVar3,(double)*param_3);
  dVar4 = local_220;
  dVar17 = local_228;
  dVar14 = local_230;
  uVar11 = CONCAT71(uVar12,1);
  if (cVar6 != '\0') {
    if ((local_250 != 0.0) || (NAN(local_250))) {
      local_2b8 = &local_218;
      local_2b0 = &local_230;
      FUN_1449056f5(local_108,&local_230,&local_1e8,&local_200);
      if (9.999999878450581e-17 <
          (local_220 - local_108[2]) * (local_220 - local_108[2]) +
          (local_230 - local_108[0]) * (local_230 - local_108[0]) +
          (local_228 - local_108[1]) * (local_228 - local_108[1])) goto LAB_146e53e02;
LAB_146e54358:
      if (local_250 < (double)param_1[5]) {
        param_1[6] = (longlong)dVar14;
        param_1[7] = (longlong)dVar17;
        param_1[8] = (longlong)dVar4;
        param_1[9] = (longlong)local_248;
        param_1[10] = (longlong)dStack_240;
        param_1[0xb] = local_238;
        param_1[5] = (longlong)local_250;
        *param_3 = (float)local_250;
        *(int *)(param_1 + 0xc) = param_2;
      }
    }
    else {
      dVar19 = (double)pdVar1 + 9.99999993922529e-09;
      local_2b0 = (double *)param_1[2];
      dVar20 = (local_2b0[2] - local_198) * local_180 +
               (*local_2b0 - local_1a8) * local_190 + (local_2b0[1] - dStack_1a0) * local_188;
      local_108[2] = local_2b0[2] - dVar20 * local_180;
      local_108[1] = local_2b0[1] - local_188 * dVar20;
      local_108[0] = *local_2b0 - local_190 * dVar20;
      local_2b8 = &local_218;
      FUN_1449056f5(local_158,local_108,&local_1e8,&local_200);
      pdVar1 = (double *)param_1[2];
      if ((pdVar1[2] - local_158[2]) * (pdVar1[2] - local_158[2]) +
          (*pdVar1 - local_158[0]) * (*pdVar1 - local_158[0]) +
          (pdVar1[1] - local_158[1]) * (pdVar1[1] - local_158[1]) <= dVar19 * dVar19) {
        param_1[5] = 0;
        *(int *)(param_1 + 0xc) = param_2;
        uVar11 = 0;
      }
      else {
LAB_146e53e02:
        dVar15 = local_1f0 - local_1d8;
        dVar18 = local_1f8 - dStack_1e0;
        dVar21 = local_200 - local_1e8;
        dVar19 = dVar15 * dVar15 + dVar21 * dVar21 + dVar18 * dVar18;
        dVar20 = 0.0;
        dVar22 = 1.0;
        local_270 = 1.0;
        local_268 = 0.0;
        local_260 = 0.0;
        uVar16 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar16 = SUB84(dVar19,0);
          local_260 = dVar15 / dVar19;
          local_268 = dVar18 / dVar19;
          local_270 = dVar21 / dVar19;
        }
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_280 = local_158;
        local_288 = local_108;
        local_290 = &local_178;
        local_2b8 = &local_200;
        local_298 = (undefined1 *)0x0;
        local_278 = local_254;
        local_1cb[0] = FUN_140663684(param_1[4],uVar16,&local_270,&local_1e8);
        dVar15 = local_208 - local_1f0;
        dVar18 = local_210 - local_1f8;
        dVar21 = local_218 - local_200;
        dVar19 = dVar15 * dVar15 + dVar21 * dVar21 + dVar18 * dVar18;
        local_270 = 1.0;
        local_260 = 0.0;
        uVar16 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar16 = SUB84(dVar19,0);
          local_260 = dVar15 / dVar19;
          dVar20 = dVar18 / dVar19;
          local_270 = dVar21 / dVar19;
        }
        local_280 = (double *)local_140;
        local_288 = (double *)local_f0;
        local_290 = (double *)local_170;
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_298 = (undefined1 *)0x0;
        local_2b8 = &local_218;
        local_278 = local_254;
        local_268 = dVar20;
        local_1cb[1] = FUN_140663684(param_1[4],uVar16,&local_270,&local_200);
        dVar20 = local_208 - local_1d8;
        dVar15 = local_210 - dStack_1e0;
        dVar18 = local_218 - local_1e8;
        dVar19 = dVar20 * dVar20 + dVar18 * dVar18 + dVar15 * dVar15;
        uVar23 = 0;
        uVar24 = 0;
        local_268 = 0.0;
        local_260 = 0.0;
        uVar16 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar16 = SUB84(dVar19,0);
          local_260 = dVar20 / dVar19;
          local_268 = dVar15 / dVar19;
          dVar22 = dVar18 / dVar19;
        }
        local_280 = (double *)local_128;
        local_288 = (double *)local_d8;
        local_290 = (double *)local_168;
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_298 = (undefined1 *)0x0;
        local_2b8 = &local_218;
        local_278 = local_254;
        local_270 = dVar22;
        local_1cb[2] = FUN_140663684(param_1[4],uVar16,&local_270,&local_1e8);
        uVar8 = 0xffffffff;
        uVar10 = 0;
        bVar5 = false;
        do {
          if ((local_1cb[uVar10] == '\x01') &&
             ((dVar19 = *(double *)(local_170 + uVar10 * 8 + -8), !bVar5 ||
              (dVar19 <= (double)CONCAT44(uVar24,uVar23) &&
               (double)CONCAT44(uVar24,uVar23) != dVar19)))) {
            bVar5 = true;
            uVar8 = uVar10 & 0xffffffff;
            uVar23 = SUB84(dVar19,0);
            uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != 3);
        if ((int)uVar8 != -1) {
          lVar7 = (longlong)(int)uVar8;
          dVar14 = (double)param_1[4];
          if ((local_250 == 0.0) && (!NAN(local_250))) {
            pdVar1 = (double *)param_1[2];
            dVar4 = (pdVar1[2] - local_198) * local_180 +
                    (*pdVar1 - local_1a8) * local_190 + (pdVar1[1] - dStack_1a0) * local_188;
            uVar8 = -(ulonglong)(dVar4 < 0.0);
            local_238 = ~uVar8 & (ulonglong)local_180 | (ulonglong)-local_180 & uVar8;
            local_248 = local_190;
            dStack_240 = local_188;
            if (dVar4 < 0.0) {
              dStack_240 = -local_188;
              local_248 = -local_190;
            }
          }
          dVar4 = *(double *)(local_f0 + lVar7 * 0x18 + -8) -
                  *(double *)(local_140 + lVar7 * 0x18 + -8) * dVar14;
          dVar17 = local_108[lVar7 * 3 + 1] - local_158[lVar7 * 3 + 1] * dVar14;
          dVar14 = local_108[lVar7 * 3] - dVar14 * local_158[lVar7 * 3];
          local_250 = (double)CONCAT44(uVar24,uVar23);
        }
        if (bVar5) goto LAB_146e54358;
      }
    }
  }
  local_1c8 = &PTR_FUN_149f553e0;
LAB_146e543cb:
  if ((local_c0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 146e5443f FUN_146e5443f body=294 status=ok
// SIG undefined FUN_146e5443f(void)

void FUN_146e5443f(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = param_3[2] - param_2[2];
  dVar3 = param_3[1] - param_2[1];
  dVar4 = *param_3 - *param_2;
  dVar5 = (param_4[2] - param_2[2]) * dVar2 +
          (*param_4 - *param_2) * dVar4 + (param_4[1] - param_2[1]) * dVar3;
  if ((dVar5 < 0.0) || (dVar6 = dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3, dVar6 < 0.0001)) {
    *param_5 = 0.0;
    param_1[2] = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
  }
  else {
    dVar5 = dVar5 / dVar6;
    if (dVar5 <= 1.0) {
      *param_5 = dVar5;
      dVar6 = param_2[2];
      dVar1 = param_2[1];
      *param_1 = dVar4 * dVar5 + *param_2;
      param_1[1] = dVar3 * dVar5 + dVar1;
      param_1[2] = dVar2 * dVar5 + dVar6;
      return;
    }
    *param_5 = 1.0;
    param_1[2] = param_3[2];
    dVar2 = *param_3;
    dVar3 = param_3[1];
  }
  *param_1 = dVar2;
  param_1[1] = dVar3;
  return;
}



// FUNCTION 146e54566 FUN_146e54566 body=1335 status=ok
// SIG undefined FUN_146e54566(void)

void FUN_146e54566(longlong *param_1,int param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
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
  double local_108;
  double local_e8;
  double local_d8;
  
  lVar10 = *(longlong *)param_1[1];
  lVar11 = (longlong)param_2;
  lVar12 = (longlong)*(int *)(lVar10 + lVar11 * 0xc);
  lVar3 = *(longlong *)(*param_1 + 0x28);
  dVar23 = (double)*(float *)(lVar3 + 8 + lVar12 * 0xc);
  dVar6 = (double)*(float *)(lVar3 + 4 + lVar12 * 0xc);
  dVar14 = (double)*(float *)(lVar3 + lVar12 * 0xc);
  lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar11 * 0xc);
  lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar11 * 0xc);
  dVar15 = (double)*(float *)(lVar3 + 8 + lVar12 * 0xc) - dVar23;
  dVar5 = (double)*(float *)(lVar3 + 4 + lVar12 * 0xc) - dVar6;
  dVar19 = (double)*(float *)(lVar3 + lVar12 * 0xc) - dVar14;
  dVar21 = (double)*(float *)(lVar3 + 8 + lVar10 * 0xc) - dVar23;
  dVar17 = (double)*(float *)(lVar3 + 4 + lVar10 * 0xc) - dVar6;
  dVar9 = (double)*(float *)(lVar3 + lVar10 * 0xc) - dVar14;
  dVar18 = dVar19 * dVar17 - dVar9 * dVar5;
  dVar13 = dVar15 * dVar9 - dVar21 * dVar19;
  dVar16 = dVar5 * dVar21 - dVar17 * dVar15;
  pdVar4 = (double *)param_1[3];
  if (*(char *)((longlong)param_1 + 100) == '\0') {
    local_108 = pdVar4[2];
    local_d8 = *pdVar4;
    local_e8 = pdVar4[1];
  }
  else {
    local_d8 = *pdVar4;
    local_e8 = pdVar4[1];
    local_108 = pdVar4[2];
    if (0.0 < local_108 * dVar18 + local_d8 * dVar16 + dVar13 * local_e8) {
      return;
    }
  }
  dVar8 = (-local_d8 * dVar16 - dVar13 * local_e8) - local_108 * dVar18;
  if (9.99999993922529e-09 <= ABS(dVar8)) {
    pdVar4 = (double *)param_1[2];
    dVar22 = 1.0 / dVar8;
    dVar1 = pdVar4[2];
    dVar23 = dVar1 - dVar23;
    dVar2 = pdVar4[1];
    dVar6 = dVar2 - dVar6;
    dVar14 = *pdVar4 - dVar14;
    dVar7 = (dVar23 * dVar18 + dVar14 * dVar16 + dVar13 * dVar6) * dVar22;
    if ((0.0 <= dVar7) && (dVar7 <= (double)*param_3)) {
      dVar20 = -local_d8 * dVar6 + local_e8 * dVar14;
      dVar14 = -local_108 * dVar14 + local_d8 * dVar23;
      dVar23 = -local_e8 * dVar23 + dVar6 * local_108;
      dVar21 = (dVar21 * dVar20 + dVar9 * dVar23 + dVar17 * dVar14) * dVar22;
      if ((-9.99999993922529e-09 <= dVar21) &&
         (((dVar21 <= 1.00000001 &&
           (dVar22 = dVar22 * -(dVar15 * dVar20 + dVar19 * dVar23 + dVar5 * dVar14),
           -9.99999993922529e-09 <= dVar22)) && (dVar22 + dVar21 <= 1.00000001)))) {
        dVar21 = dVar18 * dVar18 + dVar16 * dVar16 + dVar13 * dVar13;
        if (((dVar21 != 1.0) || (dVar15 = dVar13, dVar17 = dVar16, dVar19 = dVar18, NAN(dVar21))) &&
           (dVar15 = DAT_14c8464e8, dVar17 = DAT_14c8464e0, dVar19 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar21)) {
          dVar21 = 1.0 / SQRT(dVar21);
          dVar15 = dVar13 * dVar21;
          dVar17 = dVar16 * dVar21;
          dVar19 = dVar18 * dVar21;
        }
        dVar21 = (double)(-(ulonglong)(0.0 < dVar8) & 0x3ff0000000000000 |
                         ~-(ulonglong)(0.0 < dVar8) & -(ulonglong)(dVar8 < 0.0) & 0xbff0000000000000
                         );
        param_1[6] = (longlong)(*pdVar4 + local_d8 * dVar7);
        param_1[7] = (longlong)(dVar2 + local_e8 * dVar7);
        param_1[8] = (longlong)(dVar1 + local_108 * dVar7);
        param_1[9] = (longlong)(dVar17 * dVar21);
        param_1[10] = (longlong)(dVar15 * dVar21);
        param_1[0xb] = (longlong)(dVar21 * dVar19);
        param_1[5] = (longlong)dVar7;
        *(int *)(param_1 + 0xc) = param_2;
        *param_3 = (float)dVar7;
      }
    }
  }
  return;
}



// FUNCTION 146e54a9e FUN_146e54a9e body=513 status=ok
// SIG undefined FUN_146e54a9e(void)

bool FUN_146e54a9e(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e54ea2(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e54ca0 FUN_146e54ca0 body=513 status=ok
// SIG undefined FUN_146e54ca0(void)

bool FUN_146e54ca0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e54ea2(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e54ea2 FUN_146e54ea2 body=407 status=ok
// SIG undefined FUN_146e54ea2(void)

void FUN_146e54ea2(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = FUN_1406863dc;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e5503a FUN_146e5503a body=513 status=ok
// SIG undefined FUN_146e5503a(void)

bool FUN_146e5503a(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5543e(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e5523c FUN_146e5523c body=513 status=ok
// SIG undefined FUN_146e5523c(void)

bool FUN_146e5523c(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5543e(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e5543e FUN_146e5543e body=407 status=ok
// SIG undefined FUN_146e5543e(void)

void FUN_146e5543e(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = &LAB_1406864a0;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e555d6 FUN_146e555d6 body=513 status=ok
// SIG undefined FUN_146e555d6(void)

bool FUN_146e555d6(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e559da(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e557d8 FUN_146e557d8 body=513 status=ok
// SIG undefined FUN_146e557d8(void)

bool FUN_146e557d8(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e559da(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e559da FUN_146e559da body=407 status=ok
// SIG undefined FUN_146e559da(void)

void FUN_146e559da(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = FUN_14172543a;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e55b72 FUN_146e55b72 body=513 status=ok
// SIG undefined FUN_146e55b72(void)

bool FUN_146e55b72(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e55f76(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e55d74 FUN_146e55d74 body=513 status=ok
// SIG undefined FUN_146e55d74(void)

bool FUN_146e55d74(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e55f76(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e55f76 FUN_146e55f76 body=407 status=ok
// SIG undefined FUN_146e55f76(void)

void FUN_146e55f76(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = &LAB_140686536;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e5610e FUN_146e5610e body=513 status=ok
// SIG undefined FUN_146e5610e(void)

bool FUN_146e5610e(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e56512(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e56310 FUN_146e56310 body=513 status=ok
// SIG undefined FUN_146e56310(void)

bool FUN_146e56310(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e56512(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e56512 FUN_146e56512 body=407 status=ok
// SIG undefined FUN_146e56512(void)

void FUN_146e56512(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = FUN_146cc490a;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e566aa FUN_146e566aa body=513 status=ok
// SIG undefined FUN_146e566aa(void)

bool FUN_146e566aa(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e56aae(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e568ac FUN_146e568ac body=513 status=ok
// SIG undefined FUN_146e568ac(void)

bool FUN_146e568ac(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e56aae(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e56aae FUN_146e56aae body=407 status=ok
// SIG undefined FUN_146e56aae(void)

void FUN_146e56aae(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = &LAB_146cc4a26;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e56c46 FUN_146e56c46 body=513 status=ok
// SIG undefined FUN_146e56c46(void)

bool FUN_146e56c46(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_146e53748(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5704a(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e56e48 FUN_146e56e48 body=513 status=ok
// SIG undefined FUN_146e56e48(void)

bool FUN_146e56e48(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  double *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [24];
  longlong local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  local_90[0] = 3.4028234663852886e+38;
  FUN_140d8788e(lVar4 + 0xe0,&local_d0,param_1[1]);
  lVar10 = local_d0;
  if ((longlong)local_c8 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined4 *)(lVar10 + lVar12);
      local_138 = (double *)&local_128;
      local_140 = &local_108;
      local_148 = (undefined8 *)local_e8;
      FUN_1457bf7cf(param_1[2],uVar3,lVar4 + 0x20,param_2);
      uVar9 = local_f8;
      if (*(char *)param_1[3] == '\0') {
        uVar7 = CONCAT44(uStack_124,local_128);
        uVar8 = CONCAT44(uStack_11c,uStack_120);
        local_f8 = local_118;
        local_128 = (undefined4)local_108;
        uStack_124 = local_108._4_4_;
        uStack_120 = (undefined4)uStack_100;
        uStack_11c = uStack_100._4_4_;
        local_118 = uVar9;
        local_108 = uVar7;
        uStack_100 = uVar8;
      }
      local_138 = local_90;
      local_140 = (undefined8 *)&local_c0;
      local_148 = &local_a8;
      cVar11 = FUN_146e5704a(param_1[4],local_e8,&local_108,&local_128);
      if ((cVar11 != '\0') && (local_90[0] < *(double *)param_1[5])) {
        *(double *)param_1[5] = local_90[0];
        puVar5 = (undefined8 *)param_1[6];
        puVar5[2] = local_98;
        *puVar5 = local_a8;
        puVar5[1] = uStack_a0;
        puVar6 = (undefined4 *)param_1[7];
        *(undefined8 *)(puVar6 + 4) = local_b0;
        *puVar6 = local_c0;
        puVar6[1] = uStack_bc;
        puVar6[2] = uStack_b8;
        puVar6[3] = uStack_b4;
        *(undefined4 *)param_1[8] = uVar3;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_c8 * 4 != lVar12);
  }
  dVar1 = *(double *)param_1[5];
  dVar2 = *(double *)param_1[9];
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < dVar2;
}



// FUNCTION 146e5704a FUN_146e5704a body=407 status=ok
// SIG undefined FUN_146e5704a(void)

void FUN_146e5704a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulonglong *param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = param_2[2];
  local_88 = &local_58;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = param_4[2];
  local_110 = &local_f8;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_70 = *param_1;
  local_68 = FUN_14068657c;
  local_60 = *(undefined8 *)(local_70 + 0x10);
  local_80 = &LAB_1429b1b78;
  local_78 = 0;
  local_108 = 0x3f50624de0000000;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_e0;
  local_130 = local_dc;
  local_138 = &local_d8;
  local_140 = &local_c0;
  local_148 = local_a8;
  cVar1 = FUN_146d0f62b(&local_88,&local_70,param_1[1],&local_90);
  if (cVar1 != '\0') {
    param_5[2] = local_b0;
    *param_5 = local_c0;
    param_5[1] = uStack_b8;
    param_6[2] = local_c8;
    *param_6 = local_d8;
    param_6[1] = uStack_d0;
    *param_7 = local_90 ^ 0x8000000000000000;
  }
  if ((local_8 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e571e2 FUN_146e571e2 body=719 status=ok
// SIG undefined FUN_146e571e2(void)

undefined8 FUN_146e571e2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = &LAB_1406863be;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e574b2 FUN_146e574b2 body=719 status=ok
// SIG undefined FUN_146e574b2(void)

undefined8 FUN_146e574b2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = FUN_1406863dc;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e57782 FUN_146e57782 body=745 status=ok
// SIG undefined FUN_146e57782(void)

uint FUN_146e57782(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar6 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar6 == 0) {
    local_1ac = 0;
  }
  else {
    lVar1 = *(longlong *)*param_1;
    lVar2 = param_1[1];
    local_1a8 = param_3 + 3;
    lVar5 = 0;
    local_1ac = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_1457bf7cf(param_1[2],*(undefined4 *)(lVar1 + lVar5),lVar2 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = FUN_1406863dc;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      uVar3 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if ((char)uVar3 != '\0') {
        uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
        if (local_140 < (double)param_3[6] || local_140 == (double)param_3[6]) {
          local_1ac = (uint)CONCAT71(uVar4,1);
        }
        else {
          local_1ac = (uint)CONCAT71(uVar4,1);
          param_3[6] = local_140;
          param_3[2] = local_128;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          *(undefined4 *)local_1a8 = (undefined4)local_158;
          *(undefined4 *)((longlong)local_1a8 + 4) = local_158._4_4_;
          *(undefined4 *)(local_1a8 + 1) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)local_1a8 + 0xc) = uStack_150._4_4_;
          local_1a8[2] = local_148;
        }
      }
      lVar5 = lVar5 + 4;
    } while (lVar6 * 4 != lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_1ac & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e57a6c FUN_146e57a6c body=719 status=ok
// SIG undefined FUN_146e57a6c(void)

undefined8 FUN_146e57a6c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = &LAB_1406864a0;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e57d3c FUN_146e57d3c body=745 status=ok
// SIG undefined FUN_146e57d3c(void)

uint FUN_146e57d3c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar6 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar6 == 0) {
    local_1ac = 0;
  }
  else {
    lVar1 = *(longlong *)*param_1;
    lVar2 = param_1[1];
    local_1a8 = param_3 + 3;
    lVar5 = 0;
    local_1ac = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_1457bf7cf(param_1[2],*(undefined4 *)(lVar1 + lVar5),lVar2 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = &LAB_1406864a0;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      uVar3 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if ((char)uVar3 != '\0') {
        uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
        if (local_140 < (double)param_3[6] || local_140 == (double)param_3[6]) {
          local_1ac = (uint)CONCAT71(uVar4,1);
        }
        else {
          local_1ac = (uint)CONCAT71(uVar4,1);
          param_3[6] = local_140;
          param_3[2] = local_128;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          *(undefined4 *)local_1a8 = (undefined4)local_158;
          *(undefined4 *)((longlong)local_1a8 + 4) = local_158._4_4_;
          *(undefined4 *)(local_1a8 + 1) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)local_1a8 + 0xc) = uStack_150._4_4_;
          local_1a8[2] = local_148;
        }
      }
      lVar5 = lVar5 + 4;
    } while (lVar6 * 4 != lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_1ac & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e58026 FUN_146e58026 body=719 status=ok
// SIG undefined FUN_146e58026(void)

undefined8 FUN_146e58026(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = FUN_14172543a;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e582f6 FUN_146e582f6 body=745 status=ok
// SIG undefined FUN_146e582f6(void)

uint FUN_146e582f6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar6 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar6 == 0) {
    local_1ac = 0;
  }
  else {
    lVar1 = *(longlong *)*param_1;
    lVar2 = param_1[1];
    local_1a8 = param_3 + 3;
    lVar5 = 0;
    local_1ac = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_1457bf7cf(param_1[2],*(undefined4 *)(lVar1 + lVar5),lVar2 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = FUN_14172543a;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      uVar3 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if ((char)uVar3 != '\0') {
        uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
        if (local_140 < (double)param_3[6] || local_140 == (double)param_3[6]) {
          local_1ac = (uint)CONCAT71(uVar4,1);
        }
        else {
          local_1ac = (uint)CONCAT71(uVar4,1);
          param_3[6] = local_140;
          param_3[2] = local_128;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          *(undefined4 *)local_1a8 = (undefined4)local_158;
          *(undefined4 *)((longlong)local_1a8 + 4) = local_158._4_4_;
          *(undefined4 *)(local_1a8 + 1) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)local_1a8 + 0xc) = uStack_150._4_4_;
          local_1a8[2] = local_148;
        }
      }
      lVar5 = lVar5 + 4;
    } while (lVar6 * 4 != lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_1ac & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e585e0 FUN_146e585e0 body=719 status=ok
// SIG undefined FUN_146e585e0(void)

undefined8 FUN_146e585e0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = &LAB_140686536;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e588b0 FUN_146e588b0 body=719 status=ok
// SIG undefined FUN_146e588b0(void)

undefined8 FUN_146e588b0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  local_1a0 = param_2;
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(longlong *)*param_1;
    lVar1 = param_1[1];
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_1e8 = &local_120;
      local_1f0 = &local_108;
      local_1f8 = &local_f0;
      FUN_146e53748(param_1[2],*(undefined4 *)(local_1a8 + lVar4),lVar1 + 0x20,local_1a0);
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_c0 = param_1[3];
      local_98 = local_e0;
      local_a8 = local_f0;
      uStack_a0 = uStack_e8;
      local_80 = local_f8;
      local_90 = local_108;
      uStack_88 = uStack_100;
      local_68 = local_110;
      local_78 = local_120;
      uStack_70 = uStack_118;
      local_b8 = FUN_146cc490a;
      local_b0 = *(undefined8 *)(local_c0 + 0x10);
      local_d8 = &local_a8;
      local_d0 = &LAB_1429b1b78;
      local_c8 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      cVar2 = FUN_14068570a(&local_d8,&local_c0,param_1[4],&local_140);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if ((double)param_3[6] <= local_140 && local_140 != (double)param_3[6]) {
          param_3[6] = local_140;
          *param_3 = local_138;
          param_3[1] = uStack_130;
          param_3[2] = local_128;
          *(undefined4 *)(param_3 + 3) = (undefined4)local_158;
          *(undefined4 *)((longlong)param_3 + 0x1c) = local_158._4_4_;
          *(undefined4 *)(param_3 + 4) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_3 + 0x24) = uStack_150._4_4_;
          param_3[5] = local_148;
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


