// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1483b6fdc FUN_1483b6fdc body=886 status=ok
// SIG undefined FUN_1483b6fdc(void)

float * FUN_1483b6fdc(longlong param_1,float *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  float *local_88;
  float *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_3 + 0xe0);
  param_2[2] = *(float *)(param_1 + 0xa8);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0xa0);
  if (6 < *(int *)(param_1 + 8) - 1U) goto LAB_1483b7177;
  uVar3 = *(undefined4 *)(param_3 + 0xe8);
  pfVar4 = (float *)(param_3 + 0xf0);
  switch(*(int *)(param_1 + 8)) {
  case 1:
    local_88 = pfVar4;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),&local_78);
    dVar11 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70);
    dVar11 = ((double)CONCAT44(fStack_74,local_78) - *(double *)(param_1 + 0x70)) /
             (double)(-(ulonglong)(0.0 <= dVar11) & (ulonglong)dVar11);
    dVar7 = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78);
    dVar7 = ((double)CONCAT44(uStack_6c,fStack_70) - *(double *)(param_1 + 0x78)) /
            (double)(-(ulonglong)(0.0 <= dVar7) & (ulonglong)dVar7);
    dVar8 = *(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x80);
    dVar8 = (local_68 - *(double *)(param_1 + 0x80)) /
            (double)(-(ulonglong)(0.0 <= dVar8) & (ulonglong)dVar8);
    goto LAB_1483b7161;
  case 2:
    local_88 = &local_78;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe8))
                      (*(longlong **)(param_1 + 0x10),uVar1,uVar3,pfVar4);
    if (cVar2 == '\0') goto LAB_1483b7177;
    fVar9 = SQRT(fStack_70 * fStack_70 + local_78 * local_78 + fStack_74 * fStack_74);
    fVar10 = 1.0 / fVar9;
    if (0.0 < fVar9) {
      fVar5 = local_78 * fVar10;
      fVar6 = fStack_74 * fVar10;
    }
    else {
      fVar5 = 0.0;
      fVar6 = 0.0;
    }
    local_68 = (double)(float)(-(uint)(0.0 < fVar9) & (uint)(fStack_70 * fVar10));
    dVar7 = (double)fVar6;
    dVar11 = (double)fVar5;
    break;
  case 3:
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))(*(longlong **)(param_1 + 0x10),&local_78);
    dVar11 = (double)CONCAT44(fStack_74,local_78);
    dVar7 = (double)CONCAT44(uStack_6c,fStack_70);
    break;
  case 4:
    local_80 = &local_78;
    local_88 = (float *)((ulonglong)local_88 & 0xffffffff00000000);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                      (*(longlong **)(param_1 + 0x10),uVar1,uVar3,pfVar4);
    if (cVar2 != '\0') {
      fVar9 = 1.0;
      if (local_78 <= 1.0) {
        fVar9 = local_78;
      }
      fVar10 = 1.0;
      if (fStack_74 <= 1.0) {
        fVar10 = fStack_74;
      }
      *param_2 = (float)(~-(uint)(local_78 < 0.0) & (uint)fVar9);
      param_2[1] = (float)(~-(uint)(fStack_74 < 0.0) & (uint)fVar10);
      param_2[2] = 0.0;
    }
    goto LAB_1483b7177;
  case 5:
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),uVar1,uVar3);
    goto LAB_1483b733c;
  case 6:
    local_88 = &local_78;
    local_78 = 0.0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
    uStack_6c = 0x3f800000;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf8))
                      (*(longlong **)(param_1 + 0x10),uVar1,uVar3,pfVar4);
    if (cVar2 != '\0') {
      *(ulonglong *)param_2 = CONCAT44(fStack_74,local_78);
      param_2[2] = fStack_70;
    }
    goto LAB_1483b7177;
  case 7:
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
                      (*(longlong **)(param_1 + 0x10),uVar1,uVar3);
LAB_1483b733c:
    FUN_1483b6702(param_2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  dVar8 = (local_68 + DAT_14c846520) * 0.5;
  dVar7 = (dVar7 + DAT_14c846518) * 0.5;
  dVar11 = (dVar11 + DAT_14c846510) * 0.5;
LAB_1483b7161:
  *param_2 = (float)dVar11;
  param_2[1] = (float)dVar7;
  param_2[2] = (float)dVar8;
LAB_1483b7177:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b7358 FUN_1483b7358 body=585 status=ok
// SIG undefined FUN_1483b7358(void)

void FUN_1483b7358(int *param_1,float *param_2,double *param_3,undefined8 *param_4)

{
  float fVar1;
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
  double dVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 in_XMM5 [16];
  undefined1 auVar35 [16];
  
  dVar13 = *param_3;
  if (0.0 <= dVar13) {
    iVar15 = *param_1;
    if (((dVar13 <= (double)iVar15) && (dVar14 = param_3[1], 0.0 <= dVar14)) &&
       (dVar14 <= (double)param_1[1])) {
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar14 + -0.5;
      auVar33 = roundsd(in_XMM4,auVar32,9);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar13 + -0.5;
      auVar35 = roundsd(in_XMM5,auVar29,9);
      auVar31._0_8_ = dVar14 + 0.5;
      auVar31._8_8_ = 0;
      auVar32 = roundsd(auVar31,auVar31,9);
      auVar28._0_8_ = dVar13 + 0.5;
      auVar28._8_8_ = 0;
      auVar29 = roundsd(auVar28,auVar28,9);
      uVar22 = (uint)auVar35._0_8_;
      uVar21 = (uint)auVar33._0_8_;
      dVar14 = (dVar14 + -0.5) - auVar33._0_8_;
      dVar13 = (dVar13 + -0.5) - auVar35._0_8_;
      if ((int)uVar22 < 1) {
        uVar22 = 0;
      }
      uVar19 = 0;
      if (0 < (int)uVar21) {
        uVar19 = (ulonglong)uVar21;
      }
      iVar16 = (int)auVar29._0_8_;
      if (iVar15 + -1 < (int)auVar29._0_8_) {
        iVar16 = iVar15 + -1;
      }
      iVar25 = param_1[1] + -1;
      if ((int)auVar32._0_8_ <= iVar25) {
        iVar25 = (int)auVar32._0_8_;
      }
      lVar20 = uVar19 * (longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 2);
      lVar23 = (ulonglong)uVar22 * 0x10;
      lVar18 = (longlong)iVar16 * 0x10;
      fVar34 = (float)((DAT_14c846320 - dVar13) * (DAT_14c846328 - dVar14));
      fVar1 = *(float *)(lVar23 + 0xc + lVar20);
      fVar2 = *(float *)(lVar23 + 8 + lVar20);
      fVar3 = *(float *)(lVar23 + 4 + lVar20);
      fVar30 = (float)(dVar14 * (DAT_14c846320 - dVar13));
      lVar24 = (longlong)iVar25 * (longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 2);
      fVar4 = *(float *)(lVar23 + 0xc + lVar24);
      fVar5 = *(float *)(lVar23 + 8 + lVar24);
      fVar6 = *(float *)(lVar23 + 4 + lVar24);
      fVar27 = (float)((DAT_14c846328 - dVar14) * dVar13);
      fVar7 = *(float *)(lVar18 + 0xc + lVar20);
      fVar8 = *(float *)(lVar18 + 8 + lVar20);
      fVar9 = *(float *)(lVar18 + 4 + lVar20);
      fVar26 = (float)(dVar13 * dVar14);
      fVar10 = *(float *)(lVar18 + 0xc + lVar24);
      fVar11 = *(float *)(lVar18 + 8 + lVar24);
      fVar12 = *(float *)(lVar18 + 4 + lVar24);
      *param_2 = fVar26 * *(float *)(lVar18 + lVar24) +
                 fVar27 * *(float *)(lVar18 + lVar20) +
                 fVar30 * *(float *)(lVar23 + lVar24) + fVar34 * *(float *)(lVar23 + lVar20);
      param_2[1] = fVar12 * fVar26 + fVar9 * fVar27 + fVar6 * fVar30 + fVar3 * fVar34;
      param_2[2] = fVar11 * fVar26 + fVar8 * fVar27 + fVar5 * fVar30 + fVar2 * fVar34;
      param_2[3] = fVar10 * fVar26 + fVar7 * fVar27 + fVar4 * fVar30 + fVar1 * fVar34;
      return;
    }
  }
  uVar17 = param_4[1];
  *(undefined8 *)param_2 = *param_4;
  *(undefined8 *)(param_2 + 2) = uVar17;
  return;
}



// FUNCTION 1483b75a2 FUN_1483b75a2 body=832 status=ok
// SIG undefined FUN_1483b75a2(void)

void FUN_1483b75a2(longlong param_1)

{
  double dVar1;
  ulonglong uVar2;
  short sVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [32];
  double *local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
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
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = 0;
  uStack_e0 = 0;
  plVar5 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar5;
  iVar6 = *(int *)(lVar7 + 0x170);
  if (iVar6 < 0) {
LAB_1483b78db:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 == 0) {
    local_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    FUN_14481578e(&local_e8);
    plVar5 = *(longlong **)(param_1 + 8);
    lVar7 = *plVar5;
    iVar6 = *(int *)(lVar7 + 0x170);
    local_f8 = 0;
    uStack_f0 = 0;
    if (iVar6 < 0) goto LAB_1483b78db;
    if (iVar6 != 0) {
      FUN_1447a8aa0(&local_f8);
      plVar5 = *(longlong **)(param_1 + 8);
      lVar7 = *plVar5;
    }
  }
  if (0 < *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144)) {
    uVar8 = 0;
    iVar6 = 0;
    do {
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(plVar5[1] + 0x78) + (ulonglong)(uVar8 >> 9) * 8)
                       + (ulonglong)(uVar8 & 0x1ff) * 4)) {
        local_108 = &local_a8;
        FUN_1483a692a(plVar5,iVar6,&local_d8,&local_c0);
        dVar1 = (local_c8 + local_b0 + local_98) * 0.3333333333333333;
        dVar10 = (local_d0 + local_b8 + local_a0) * 0.3333333333333333;
        dVar9 = (local_d8 + local_c0 + local_a8) * 0.3333333333333333;
        dVar1 = dVar1 * dVar1 + dVar9 * dVar9 + dVar10 * dVar10;
        local_d8 = dVar1;
        sVar3 = _dtest(&local_d8);
        if ((sVar3 != 2) &&
           (local_d8 = dVar1, sVar3 = _dtest(&local_d8), uVar2 = uStack_e0, sVar3 < 1)) {
          lVar7 = (longlong)(int)uStack_e0;
          uVar4 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4);
          if (uStack_e0._4_4_ < uVar4) {
            FUN_1446f48e2(&local_e8,uVar2 & 0xffffffff);
          }
          *(int *)(local_e8 + lVar7 * 4) = iVar6;
          local_108 = &local_a8;
          FUN_1483a692a(*(undefined8 *)(param_1 + 8),iVar6,&local_d8,&local_c0);
          uVar2 = uStack_f0;
          dVar1 = local_c8 + local_b0 + local_98;
          dVar9 = local_d0 + local_b8 + local_a0;
          dVar10 = local_d8 + local_c0 + local_a8;
          lVar7 = (longlong)(int)uStack_f0;
          uVar4 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
          if (uStack_f0._4_4_ < uVar4) {
            FUN_1403e3958(&local_f8,uVar2 & 0xffffffff);
          }
          *(double *)(local_f8 + lVar7 * 0x18) = dVar10 * 0.3333333333333333;
          *(double *)(local_f8 + 8 + lVar7 * 0x18) = dVar9 * 0.3333333333333333;
          *(double *)(local_f8 + 0x10 + lVar7 * 0x18) = dVar1 * 0.3333333333333333;
        }
      }
      iVar6 = iVar6 + 1;
      plVar5 = *(longlong **)(param_1 + 8);
      uVar8 = uVar8 + 3;
    } while (iVar6 < *(int *)(*plVar5 + 0x140) * 0x200 + *(int *)(*plVar5 + 0x144));
  }
  FUN_1483b78e4(param_1,&local_e8,&local_f8,uStack_e0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b78e4 FUN_1483b78e4 body=773 status=ok
// SIG undefined FUN_1483b78e4(void)

void FUN_1483b78e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1483b7bea(&local_b0);
  FUN_1483b7bea(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_1483b7c24(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_1483b83c8(local_118);
  FUN_1483b83c8(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b7bea FUN_1483b7bea body=57 status=ok
// SIG undefined FUN_1483b7bea(void)

longlong FUN_1483b7bea(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 1483b7c24 FUN_1483b7c24 body=1954 status=ok
// SIG undefined FUN_1483b7c24(void)

uint FUN_1483b7c24(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_1483b7c24(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_1483b7c24(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_1483b8440(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 1483b83c8 FUN_1483b83c8 body=120 status=ok
// SIG undefined FUN_1483b83c8(void)

void FUN_1483b83c8(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483b8440 FUN_1483b8440 body=268 status=ok
// SIG undefined FUN_1483b8440(void)

void FUN_1483b8440(double *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar5 = param_3 * 3 + 2;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x78);
  uVar7 = param_3 * 3 + 1;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x48);
  uVar8 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
                   (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  lVar3 = *(longlong *)(lVar2 + (ulonglong)(uVar8 >> 5 & 0x3fffff8));
  uVar9 = (ulonglong)((uVar8 & 0xff) << 3);
  dVar10 = (double)*(float *)(lVar3 + 4 + uVar9);
  dVar12 = (double)*(float *)(lVar3 + uVar9);
  bVar6 = false;
  dVar11 = dVar10;
  dVar15 = dVar12;
  uVar8 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  do {
    lVar3 = *(longlong *)(lVar2 + (ulonglong)(uVar8 >> 5 & 0x3fffff8));
    uVar9 = (ulonglong)((uVar8 & 0xff) << 3);
    dVar14 = (double)*(float *)(lVar3 + uVar9);
    dVar13 = dVar14;
    if ((dVar15 <= dVar14) && (dVar13 = dVar15, dVar12 < dVar14)) {
      dVar12 = dVar14;
    }
    dVar15 = (double)*(float *)(lVar3 + 4 + uVar9);
    dVar14 = dVar15;
    if ((dVar11 <= dVar15) && (dVar14 = dVar11, dVar10 < dVar15)) {
      dVar10 = dVar15;
    }
    bVar4 = !bVar6;
    bVar6 = true;
    dVar11 = dVar14;
    dVar15 = dVar13;
    uVar8 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
  } while (bVar4);
  *param_1 = dVar13;
  param_1[1] = dVar14;
  param_1[2] = 0.0;
  param_1[3] = dVar12;
  param_1[4] = dVar10;
  param_1[5] = 0.0;
  return;
}



// FUNCTION 1483b854c FUN_1483b854c body=48 status=ok
// SIG undefined FUN_1483b854c(void)

void FUN_1483b854c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1483b857c FUN_1483b857c body=132 status=ok
// SIG undefined FUN_1483b857c(void)

void FUN_1483b857c(longlong param_1,int param_2)

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



// FUNCTION 1483b8602 FUN_1483b8602 body=82 status=ok
// SIG undefined FUN_1483b8602(void)

void FUN_1483b8602(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = (char *)param_1[1];
  if (*pcVar4 == '\x01') {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (lVar2 == *param_2) {
      bVar5 = true;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x170);
      iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x38) + 0x10))();
      bVar5 = iVar1 == iVar3;
      pcVar4 = (char *)param_1[1];
    }
  }
  else {
    bVar5 = false;
  }
  *pcVar4 = bVar5;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  return;
}



// FUNCTION 1483b865c FUN_1483b865c body=768 status=ok
// SIG undefined FUN_1483b865c(void)

void FUN_1483b865c(longlong *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [40];
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = *param_1;
  pcVar2 = *(code **)(lVar10 + 0xa0);
  plVar6 = (longlong *)(lVar10 + 0xc0);
  if (*(longlong **)(lVar10 + 0xb0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar10 + 0xb0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    iVar1 = *(int *)param_1[1];
    iVar8 = ((int *)param_1[1])[2];
    iVar7 = param_2 % (int)((iVar1 / iVar8 + 1) - (uint)(iVar1 % iVar8 == 0));
    iVar4 = iVar7 * iVar8;
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    iVar8 = (iVar7 + 1) * iVar8;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    if (iVar8 - iVar4 != 0 && iVar4 <= iVar8) {
      lVar10 = (longlong)(param_2 << 10);
      uVar11 = (ulonglong)(uint)(iVar8 - iVar4);
      uVar9 = 0;
      do {
        local_178 = 0xffffffff;
        uStack_174 = 0xffffffff;
        uStack_170 = 0xffffffff;
        uStack_16c = 0xffffffff;
        local_158 = DAT_14c8464f0;
        local_168 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_160 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_140 = DAT_14c8464f0;
        local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_148 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_128 = DAT_14c8464f0;
        local_138 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_130 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_120 = 0xffffffffffffffff;
        local_118 = 0xffffffff;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_d0 = DAT_14c8464f0;
        local_e0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_d8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_b8 = DAT_14c8464f0;
        local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_a0 = DAT_14c8464f0;
        local_b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_98 = 0;
        local_90 = 0xffffffff;
        local_78 = DAT_14c8464f0;
        local_88 = (undefined4)DAT_14c8464e0;
        uStack_84 = DAT_14c8464e0._4_4_;
        uStack_80 = (undefined4)DAT_14c8464e8;
        uStack_7c = DAT_14c8464e8._4_4_;
        FUN_1483b895e(param_1[3],lVar10 + uVar9 & 0xffffffff,&local_178);
        if (((local_98 != 0) &&
            (cVar3 = (**(code **)(**(longlong **)(*param_1 + 0x38) + 0x90))
                               (*(longlong **)(*param_1 + 0x38),local_98,local_90), cVar3 != '\0'))
           && (lVar14 = (lVar10 + uVar9) * 0x10 + *(longlong *)(*(longlong *)(*param_1 + 0xf0) + 8),
              local_190 = uVar11, local_188 = lVar10, local_180 = lVar14,
              0 < *(int *)((longlong)param_1 + 0x14))) {
          lVar10 = 0x20;
          lVar12 = 0;
          do {
            (**(code **)(*(longlong *)(*param_1 + 0x108) + -0x20 + lVar10))
                      (&local_180,&local_178,
                       *(undefined8 *)(*(longlong *)(*param_1 + 0x108) + lVar10));
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 0x40;
          } while (lVar12 < *(int *)((longlong)param_1 + 0x14));
          lVar10 = local_188;
          uVar11 = local_190;
          local_180 = lVar14;
          if (0 < *(int *)((longlong)param_1 + 0x14)) {
            lVar12 = 0x20;
            lVar13 = 0;
            do {
              (**(code **)(*(longlong *)(*param_1 + 0x108) + -0x10 + lVar12))
                        (0,&local_180,lVar14,
                         *(undefined8 *)(*(longlong *)(*param_1 + 0x108) + lVar12));
              lVar13 = lVar13 + 1;
              lVar12 = lVar12 + 0x40;
              lVar10 = local_188;
              uVar11 = local_190;
            } while (lVar13 < *(int *)((longlong)param_1 + 0x14));
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b895e FUN_1483b895e body=1363 status=ok
// SIG undefined FUN_1483b895e(void)

void FUN_1483b895e(longlong *param_1,ulonglong param_2,uint *param_3)

{
  uint *puVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  float extraout_XMM0_Da;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_158 [32];
  uint *local_138;
  undefined8 local_130;
  undefined1 local_128;
  uint *local_120;
  float local_114;
  undefined8 local_110;
  double local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar11 = (uint)param_2;
  if ((-1 < (int)uVar11) &&
     (lVar3 = param_1[2], (int)uVar11 < *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc))) {
    uVar10 = param_2 >> 9 & 0x7fffff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar10 * 8) +
                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar10 * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      local_88 = DAT_14c8464f0;
      local_98 = DAT_14c8464e0;
      uStack_90 = DAT_14c8464e8;
      local_a8 = (uint *)0x0;
      uStack_a0 = 0;
      FUN_146c34cac(lVar3,param_2,&local_a8);
      dVar4 = local_98;
      dVar6 = local_88;
      dVar5 = uStack_90;
      if ((longlong)(int)uStack_a0 != 0) {
        puVar1 = local_a8 + (int)uStack_a0;
        puVar13 = local_a8;
        local_120 = param_3;
        do {
          uVar14 = *puVar13;
          local_138 = (uint *)&local_e8;
          FUN_146c1477c(param_1[1],uVar14,&local_c8,local_108 + 3);
          local_130 = CONCAT71(local_130._1_7_,1);
          local_138 = (uint *)CONCAT71(local_138._1_7_,1);
          FUN_146c382de(local_108,param_1[1],uVar14,local_108[3]);
          lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
          uVar10 = (ulonglong)(uVar14 & 0x1ff);
          iVar7 = 0;
          if ((*(uint *)(lVar3 + uVar10 * 0xc) != uVar11) &&
             (iVar7 = 1, *(uint *)(lVar3 + uVar10 * 0xc + 4) != uVar11)) {
            iVar7 = (uint)(*(uint *)(lVar3 + 8 + uVar10 * 0xc) == uVar11) * 3 + -1;
          }
          lVar3 = param_1[3];
          if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x78) + (ulonglong)(uVar14 * 3 >> 9) * 8)
                      + (ulonglong)(uVar14 * 3 & 0x1ff) * 4) < 0) {
            dVar17 = local_108[iVar7];
            dVar16 = local_b8 * dVar17;
            dVar18 = dStack_c0 * dVar17;
            dVar17 = dVar17 * local_c8;
          }
          else {
            iVar8 = FUN_146c31d60(lVar3,uVar14,uVar11);
            fVar15 = extraout_XMM0_Da;
            if (iVar8 != -1) {
              lVar3 = *(longlong *)(lVar3 + 0x48);
              lVar12 = 0;
              do {
                uVar14 = iVar8 * 3 + (int)lVar12;
                (&local_114)[lVar12] =
                     *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                               (ulonglong)(uVar14 & 0x1ff) * 4);
                lVar12 = lVar12 + 1;
                fVar15 = local_114;
              } while (lVar12 != 3);
            }
            dVar17 = local_108[iVar7];
            dVar16 = (double)local_110._4_4_ * dVar17;
            dVar18 = (double)(float)local_110 * dVar17;
            dVar17 = (double)fVar15 * dVar17;
          }
          dVar6 = dVar6 + dVar16;
          dVar5 = dVar5 + dVar18;
          dVar4 = dVar4 + dVar17;
          puVar13 = puVar13 + 1;
          param_3 = local_120;
        } while (puVar13 != puVar1);
      }
      dVar17 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
      dVar16 = 1.0 / dVar17;
      if (0.0 < dVar17) {
        dVar4 = dVar4 * dVar16;
        dVar5 = dVar5 * dVar16;
      }
      else {
        dVar4 = 0.0;
        dVar5 = 0.0;
      }
      local_88 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar6 * dVar16));
      lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      local_b8 = *(double *)(lVar3 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
      pdVar2 = (double *)(lVar3 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
      local_c8 = *pdVar2;
      dStack_c0 = pdVar2[1];
      uVar14 = *local_a8;
      lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
      uVar10 = (ulonglong)uVar14 & 0x1ff;
      if (*(uint *)(lVar3 + uVar10 * 0xc) == uVar11) {
        lVar12 = 0;
      }
      else {
        lVar12 = 1;
        if (*(uint *)(lVar3 + uVar10 * 0xc + 4) != uVar11) {
          lVar12 = (ulonglong)(*(uint *)(lVar3 + 8 + uVar10 * 0xc) == uVar11) * 3 + -1;
        }
      }
      local_d8 = DAT_14c8464f0;
      local_e8 = DAT_14c8464e0;
      uStack_e0 = DAT_14c8464e8;
      (&local_e8)[lVar12] = 0x3ff0000000000000;
      *param_3 = uVar14;
      *(double *)(param_3 + 0x2c) = local_c8;
      *(double *)(param_3 + 0x2e) = dStack_c0;
      *(double *)(param_3 + 0x30) = local_b8;
      *(double *)(param_3 + 0x26) = local_e8;
      *(double *)(param_3 + 0x28) = uStack_e0;
      *(double *)(param_3 + 0x2a) = local_d8;
      param_3[0x38] = 0;
      param_3[0x39] = 0;
      param_3[0x3a] = 0xffffffff;
      *(double *)(param_3 + 0x36) = local_88;
      local_98._0_4_ = SUB84(dVar4,0);
      local_98._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
      uStack_90._0_4_ = SUB84(dVar5,0);
      uStack_90._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      param_3[0x32] = (uint)local_98;
      param_3[0x33] = local_98._4_4_;
      param_3[0x34] = (uint)uStack_90;
      param_3[0x35] = uStack_90._4_4_;
      iVar7 = (int)param_1[4];
      local_98 = dVar4;
      uStack_90 = dVar5;
      if (iVar7 == 3) {
        *(longlong *)(param_3 + 0x38) = param_1[1];
        param_3[0x3a] = uVar14;
        param_3[0x3c] = (uint)local_e8;
        param_3[0x3d] = local_e8._4_4_;
        param_3[0x3e] = (uint)uStack_e0;
        param_3[0x3f] = uStack_e0._4_4_;
        *(double *)(param_3 + 0x40) = local_d8;
      }
      else {
        if (iVar7 == 1) {
          uVar9 = FUN_14837f3d4(*(undefined8 *)(*param_1 + 0x38),&local_c8,param_3 + 0x3a,
                                param_3 + 0x3c);
        }
        else {
          local_130 = *(undefined8 *)(*param_1 + 0x28);
          local_138 = param_3 + 0x3c;
          local_128 = iVar7 == 2;
          uVar9 = FUN_14837ee87(*(undefined8 *)(*param_1 + 0x38),&local_c8,&local_98,param_3 + 0x3a)
          ;
        }
        *(undefined8 *)(param_3 + 0x38) = uVar9;
      }
      if (local_a8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b8eb2 FUN_1483b8eb2 body=82 status=ok
// SIG undefined FUN_1483b8eb2(void)

void FUN_1483b8eb2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = (char *)param_1[1];
  if (*pcVar4 == '\x01') {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (lVar2 == *param_2) {
      bVar5 = true;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x170);
      iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x38) + 0x10))();
      bVar5 = iVar1 == iVar3;
      pcVar4 = (char *)param_1[1];
    }
  }
  else {
    bVar5 = false;
  }
  *pcVar4 = bVar5;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  return;
}



// FUNCTION 1483b8f0c FUN_1483b8f0c body=840 status=ok
// SIG undefined FUN_1483b8f0c(void)

void FUN_1483b8f0c(longlong *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar12 = *param_1;
  pcVar2 = *(code **)(lVar12 + 0xa0);
  plVar6 = (longlong *)(lVar12 + 0xc0);
  if (*(longlong **)(lVar12 + 0xb0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar12 + 0xb0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    iVar1 = *(int *)param_1[1];
    iVar8 = ((int *)param_1[1])[2];
    iVar7 = param_2 % (int)((iVar1 / iVar8 + 1) - (uint)(iVar1 % iVar8 == 0));
    iVar4 = iVar7 * iVar8;
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    iVar8 = (iVar7 + 1) * iVar8;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    if (iVar8 - iVar4 != 0 && iVar4 <= iVar8) {
      local_188 = (longlong)(param_2 << 10);
      uVar10 = (ulonglong)(uint)(iVar8 - iVar4);
      lVar12 = local_188 << 4;
      uVar9 = 0;
      do {
        lVar11 = local_188 + uVar9;
        local_178 = 0xffffffff;
        uStack_174 = 0xffffffff;
        uStack_170 = 0xffffffff;
        uStack_16c = 0xffffffff;
        local_158 = DAT_14c8464f0;
        local_168 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_160 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_140 = DAT_14c8464f0;
        local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_148 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_128 = DAT_14c8464f0;
        local_138 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_130 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_120 = 0xffffffffffffffff;
        local_118 = 0xffffffff;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_d0 = DAT_14c8464f0;
        local_e0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_d8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_b8 = DAT_14c8464f0;
        local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_a0 = DAT_14c8464f0;
        local_b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_98 = 0;
        local_90 = 0xffffffff;
        local_78 = DAT_14c8464f0;
        local_88 = (undefined4)DAT_14c8464e0;
        uStack_84 = DAT_14c8464e0._4_4_;
        uStack_80 = (undefined4)DAT_14c8464e8;
        uStack_7c = DAT_14c8464e8._4_4_;
        FUN_1483b9256(param_1[3],lVar11,&local_178);
        if ((local_98 != 0) &&
           (cVar3 = (**(code **)(**(longlong **)(*param_1 + 0x38) + 0x90))
                              (*(longlong **)(*param_1 + 0x38),local_98,local_90), cVar3 != '\0')) {
          lVar14 = *(longlong *)(*(longlong *)(*param_1 + 0xf0) + 8);
          local_180 = lVar11 * 0x10 + lVar14;
          local_1a0 = lVar12;
          local_190 = uVar10;
          if (0 < *(int *)((longlong)param_1 + 0x14)) {
            lVar11 = 0x20;
            lVar12 = 0;
            local_198 = local_180;
            do {
              (**(code **)(*(longlong *)(*param_1 + 0x108) + -0x20 + lVar11))
                        (&local_180,&local_178,
                         *(undefined8 *)(*(longlong *)(*param_1 + 0x108) + lVar11));
              lVar12 = lVar12 + 1;
              lVar11 = lVar11 + 0x40;
            } while (lVar12 < *(int *)((longlong)param_1 + 0x14));
            local_180 = local_198;
            uVar10 = local_190;
            lVar12 = local_1a0;
            if (0 < *(int *)((longlong)param_1 + 0x14)) {
              lVar14 = lVar14 + local_1a0;
              lVar13 = 8;
              lVar11 = 0;
              do {
                (**(code **)(*(longlong *)(*param_1 + 0x108) + -8 + lVar13 * 4))
                          (0,&local_180,lVar14,
                           *(undefined8 *)(*(longlong *)(*param_1 + 0x108) + lVar13 * 4));
                lVar11 = lVar11 + 1;
                lVar14 = lVar14 + 4;
                lVar13 = lVar13 + 0x10;
                uVar10 = local_190;
                lVar12 = local_1a0;
              } while (lVar11 < *(int *)((longlong)param_1 + 0x14));
            }
          }
        }
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar9 != uVar10);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b9256 FUN_1483b9256 body=1363 status=ok
// SIG undefined FUN_1483b9256(void)

void FUN_1483b9256(longlong *param_1,ulonglong param_2,uint *param_3)

{
  uint *puVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  float extraout_XMM0_Da;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_158 [32];
  uint *local_138;
  undefined8 local_130;
  undefined1 local_128;
  uint *local_120;
  float local_114;
  undefined8 local_110;
  double local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar11 = (uint)param_2;
  if ((-1 < (int)uVar11) &&
     (lVar3 = param_1[2], (int)uVar11 < *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc))) {
    uVar10 = param_2 >> 9 & 0x7fffff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar10 * 8) +
                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar10 * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      local_88 = DAT_14c8464f0;
      local_98 = DAT_14c8464e0;
      uStack_90 = DAT_14c8464e8;
      local_a8 = (uint *)0x0;
      uStack_a0 = 0;
      FUN_146c34cac(lVar3,param_2,&local_a8);
      dVar4 = local_98;
      dVar6 = local_88;
      dVar5 = uStack_90;
      if ((longlong)(int)uStack_a0 != 0) {
        puVar1 = local_a8 + (int)uStack_a0;
        puVar13 = local_a8;
        local_120 = param_3;
        do {
          uVar14 = *puVar13;
          local_138 = (uint *)&local_e8;
          FUN_146c1477c(param_1[1],uVar14,&local_c8,local_108 + 3);
          local_130 = CONCAT71(local_130._1_7_,1);
          local_138 = (uint *)CONCAT71(local_138._1_7_,1);
          FUN_146c382de(local_108,param_1[1],uVar14,local_108[3]);
          lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
          uVar10 = (ulonglong)(uVar14 & 0x1ff);
          iVar7 = 0;
          if ((*(uint *)(lVar3 + uVar10 * 0xc) != uVar11) &&
             (iVar7 = 1, *(uint *)(lVar3 + uVar10 * 0xc + 4) != uVar11)) {
            iVar7 = (uint)(*(uint *)(lVar3 + 8 + uVar10 * 0xc) == uVar11) * 3 + -1;
          }
          lVar3 = param_1[3];
          if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x78) + (ulonglong)(uVar14 * 3 >> 9) * 8)
                      + (ulonglong)(uVar14 * 3 & 0x1ff) * 4) < 0) {
            dVar17 = local_108[iVar7];
            dVar16 = local_b8 * dVar17;
            dVar18 = dStack_c0 * dVar17;
            dVar17 = dVar17 * local_c8;
          }
          else {
            iVar8 = FUN_146c31d60(lVar3,uVar14,uVar11);
            fVar15 = extraout_XMM0_Da;
            if (iVar8 != -1) {
              lVar3 = *(longlong *)(lVar3 + 0x48);
              lVar12 = 0;
              do {
                uVar14 = iVar8 * 3 + (int)lVar12;
                (&local_114)[lVar12] =
                     *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar14 >> 9) * 8) +
                               (ulonglong)(uVar14 & 0x1ff) * 4);
                lVar12 = lVar12 + 1;
                fVar15 = local_114;
              } while (lVar12 != 3);
            }
            dVar17 = local_108[iVar7];
            dVar16 = (double)local_110._4_4_ * dVar17;
            dVar18 = (double)(float)local_110 * dVar17;
            dVar17 = (double)fVar15 * dVar17;
          }
          dVar6 = dVar6 + dVar16;
          dVar5 = dVar5 + dVar18;
          dVar4 = dVar4 + dVar17;
          puVar13 = puVar13 + 1;
          param_3 = local_120;
        } while (puVar13 != puVar1);
      }
      dVar17 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
      dVar16 = 1.0 / dVar17;
      if (0.0 < dVar17) {
        dVar4 = dVar4 * dVar16;
        dVar5 = dVar5 * dVar16;
      }
      else {
        dVar4 = 0.0;
        dVar5 = 0.0;
      }
      local_88 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar6 * dVar16));
      lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      local_b8 = *(double *)(lVar3 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
      pdVar2 = (double *)(lVar3 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
      local_c8 = *pdVar2;
      dStack_c0 = pdVar2[1];
      uVar14 = *local_a8;
      lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
      uVar10 = (ulonglong)uVar14 & 0x1ff;
      if (*(uint *)(lVar3 + uVar10 * 0xc) == uVar11) {
        lVar12 = 0;
      }
      else {
        lVar12 = 1;
        if (*(uint *)(lVar3 + uVar10 * 0xc + 4) != uVar11) {
          lVar12 = (ulonglong)(*(uint *)(lVar3 + 8 + uVar10 * 0xc) == uVar11) * 3 + -1;
        }
      }
      local_d8 = DAT_14c8464f0;
      local_e8 = DAT_14c8464e0;
      uStack_e0 = DAT_14c8464e8;
      (&local_e8)[lVar12] = 0x3ff0000000000000;
      *param_3 = uVar14;
      *(double *)(param_3 + 0x2c) = local_c8;
      *(double *)(param_3 + 0x2e) = dStack_c0;
      *(double *)(param_3 + 0x30) = local_b8;
      *(double *)(param_3 + 0x26) = local_e8;
      *(double *)(param_3 + 0x28) = uStack_e0;
      *(double *)(param_3 + 0x2a) = local_d8;
      param_3[0x38] = 0;
      param_3[0x39] = 0;
      param_3[0x3a] = 0xffffffff;
      *(double *)(param_3 + 0x36) = local_88;
      local_98._0_4_ = SUB84(dVar4,0);
      local_98._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
      uStack_90._0_4_ = SUB84(dVar5,0);
      uStack_90._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      param_3[0x32] = (uint)local_98;
      param_3[0x33] = local_98._4_4_;
      param_3[0x34] = (uint)uStack_90;
      param_3[0x35] = uStack_90._4_4_;
      iVar7 = (int)param_1[4];
      local_98 = dVar4;
      uStack_90 = dVar5;
      if (iVar7 == 3) {
        *(longlong *)(param_3 + 0x38) = param_1[1];
        param_3[0x3a] = uVar14;
        param_3[0x3c] = (uint)local_e8;
        param_3[0x3d] = local_e8._4_4_;
        param_3[0x3e] = (uint)uStack_e0;
        param_3[0x3f] = uStack_e0._4_4_;
        *(double *)(param_3 + 0x40) = local_d8;
      }
      else {
        if (iVar7 == 1) {
          uVar9 = FUN_14837f3d4(*(undefined8 *)(*param_1 + 0x38),&local_c8,param_3 + 0x3a,
                                param_3 + 0x3c);
        }
        else {
          local_130 = *(undefined8 *)(*param_1 + 0x28);
          local_138 = param_3 + 0x3c;
          local_128 = iVar7 == 2;
          uVar9 = FUN_14837ee87(*(undefined8 *)(*param_1 + 0x38),&local_c8,&local_98,param_3 + 0x3a)
          ;
        }
        *(undefined8 *)(param_3 + 0x38) = uVar9;
      }
      if (local_a8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b97aa FUN_1483b97aa body=48 status=ok
// SIG undefined FUN_1483b97aa(void)

void FUN_1483b97aa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1483b97da FUN_1483b97da body=96 status=ok
// SIG undefined FUN_1483b97da(void)

void FUN_1483b97da(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_140345a6c(param_1,param_2,1);
  return;
}



// FUNCTION 1483b983a FUN_1483b983a body=305 status=ok
// SIG undefined FUN_1483b983a(void)

undefined4 *
FUN_1483b983a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
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
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140345af6(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_1403459de(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14034644e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b996c FUN_1483b996c body=338 status=ok
// SIG undefined FUN_1483b996c(void)

undefined8 FUN_1483b996c(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar7 = uVar3 - iVar2;
    iVar6 = iVar7;
    if ((int)param_1[6] == -1) {
      uVar9 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar9 = 0;
      iVar10 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x10);
        if (iVar10 < iVar7) {
          puVar14 = (undefined8 *)((longlong)iVar10 * 0x10 + lVar5);
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          puVar17 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar8 = uVar11;
          do {
            puVar16 = puVar17;
            uVar11 = uVar8 - 1;
            uVar13 = uVar8 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar13 = uVar11;
            }
            puVar17 = puVar16 + -2;
            uVar8 = uVar11;
          } while ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar13 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar8 = 1 << ((byte)iVar10 & 0x1f);
          uVar9 = puVar16[-1];
          *puVar14 = *puVar17;
          puVar14[1] = uVar9;
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          iVar15 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar15 = iVar10;
          }
          puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
          *puVar1 = *puVar1 | uVar8;
          uVar9 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
        }
        iVar10 = iVar4;
      } while (iVar4 != -1);
      iVar10 = (int)param_1[1] - uVar3;
      if (iVar10 != 0) {
        _Dst = (void *)((longlong)iVar7 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar10 << 4);
        iVar6 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar6;
    FUN_144a6134a(param_1 + 2,iVar7,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14474875a(param_1);
    }
  }
  return uVar9;
}



// FUNCTION 1483b9abe FUN_1483b9abe body=96 status=ok
// SIG undefined FUN_1483b9abe(void)

void FUN_1483b9abe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 7) {
    iVar3 = 6;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar3 = (int)(uVar1 >> 2);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_1483b9aef;
  }
  iVar2 = iVar3;
  FUN_146f0014e(param_1,0,iVar2,4);
LAB_1483b9aef:
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



// FUNCTION 1483b9b1e FUN_1483b9b1e body=147 status=ok
// SIG undefined FUN_1483b9b1e(void)

void FUN_1483b9b1e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483b9bb2 FUN_1483b9bb2 body=98 status=ok
// SIG undefined FUN_1483b9bb2(void)

void FUN_1483b9bb2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483b9c14 FUN_1483b9c14 body=115 status=ok
// SIG undefined FUN_1483b9c14(void)

void FUN_1483b9c14(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb8)) {
      uVar2 = uVar1 / 0xb8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb8,8);
  }
  return;
}



// FUNCTION 1483b9c87 FUN_1483b9c87 body=177 status=ok
// SIG undefined FUN_1483b9c87(void)

void FUN_1483b9c87(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 2) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = DAT_14c8464f0;
    *(undefined8 *)(param_1 + 8) = 0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 10) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    *(undefined8 *)(param_1 + 0xe) = DAT_14c8464f0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x1a) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x1c) = 0x3ff0000000000000;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1e) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x22) = DAT_14c8464f0;
    uVar1 = DAT_14c8463a8;
    *(undefined8 *)(param_1 + 0x24) = DAT_14c8463a0;
    *(undefined8 *)(param_1 + 0x26) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = DAT_14c8463b0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    param_1 = param_1 + 0x2e;
  }
  return;
}



// FUNCTION 1483b9d38 FUN_1483b9d38 body=149 status=ok
// SIG undefined FUN_1483b9d38(void)

void FUN_1483b9d38(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483b9dce FUN_1483b9dce body=62 status=ok
// SIG undefined FUN_1483b9dce(void)

void FUN_1483b9dce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483b9e0c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 1483b9e0c FUN_1483b9e0c body=113 status=ok
// SIG undefined FUN_1483b9e0c(void)

ulonglong FUN_1483b9e0c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483b9e45;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb8,8);
      param_2 = param_2 / 0xb8;
    }
  }
LAB_1483b9e45:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483b9e7e FUN_1483b9e7e body=132 status=ok
// SIG undefined FUN_1483b9e7e(void)

void FUN_1483b9e7e(longlong param_1,int param_2)

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



// FUNCTION 1483b9f04 FUN_1483b9f04 body=147 status=ok
// SIG undefined FUN_1483b9f04(void)

void FUN_1483b9f04(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483b9f98 FUN_1483b9f98 body=132 status=ok
// SIG undefined FUN_1483b9f98(void)

void FUN_1483b9f98(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483ba01e FUN_1483ba01e body=208 status=ok
// SIG undefined FUN_1483ba01e(void)

undefined1 * FUN_1483ba01e(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
  param_1[0x80] = 0;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  uVar3 = DAT_14c8463a8._4_4_;
  uVar2 = (undefined4)DAT_14c8463a8;
  uVar1 = DAT_14c8463a0._4_4_;
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)DAT_14c8463a0;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = DAT_14c8463b0;
  param_1[200] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_1411b354a(param_1 + 0xd0,0,0,0,0);
  return param_1;
}



// FUNCTION 1483ba0ee FUN_1483ba0ee body=146 status=ok
// SIG undefined FUN_1483ba0ee(void)

void FUN_1483ba0ee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x220,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x220)) {
      uVar5 = uVar4 / 0x220 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x220,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483ba182 FUN_1483ba182 body=302 status=ok
// SIG undefined FUN_1483ba182(void)

undefined8 * FUN_1483ba182(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0x3f50624dd2f1a9fc;
  param_1[1] = 0x3f50624dd2f1a9fc;
  param_1[2] = 0x3e7ad7f29abcaf48;
  param_1[3] = 0x3fefae147ae147ae;
  param_1[4] = 0x403e000000000000;
  param_1[5] = 0x4065400000000000;
  param_1[6] = 0x3fb999999999999a;
  *(undefined4 *)(param_1 + 7) = 0x32;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  param_1[0x15] = DAT_14c846520;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_146ba10c8(param_1);
  return param_1;
}



// FUNCTION 1483ba2b0 FUN_1483ba2b0 body=149 status=ok
// SIG undefined FUN_1483ba2b0(void)

undefined8 * FUN_1483ba2b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_1[3] = DAT_14c8464f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0x3f847ae147ae147b;
  param_1[10] = 0x3fb999999999999a;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1411b354a(param_1 + 0x10,0,0,0,0);
  *(undefined1 *)(param_1 + 0x54) = 0;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1483ba346 FUN_1483ba346 body=60 status=ok
// SIG undefined FUN_1483ba346(void)

void FUN_1483ba346(longlong param_1)

{
  FUN_141082778(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483ba382 FUN_1483ba382 body=774 status=ok
// SIG undefined FUN_1483ba382(void)

undefined8 FUN_1483ba382(longlong param_1,double *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  double local_c0 [6];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar2 = FUN_1483ba7c0();
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x34);
    iVar5 = iVar3 * 2;
    if (iVar1 <= iVar5) {
      iVar5 = 2;
      if (2 < iVar1 / 2) {
        iVar5 = iVar1 / 2;
      }
      iVar3 = iVar5 + -1;
      *(int *)(param_1 + 0x14) = iVar3;
      iVar5 = iVar5 * 2 + -2;
    }
    local_c0[5] = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x28) +
                  (param_2[5] - param_2[2]);
    local_c0[4] = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x20) +
                  (param_2[4] - param_2[1]);
    local_c0[3] = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x18) +
                  (param_2[3] - *param_2);
    fVar7 = *(float *)(param_1 + 0x10);
    local_c0[0] = 1.0 / (double)fVar7;
    local_c0[2] = local_c0[5] * local_c0[0];
    local_c0[1] = local_c0[4] * local_c0[0];
    local_c0[0] = local_c0[0] * local_c0[3];
    uVar6 = (ulonglong)((uint)(local_c0[0] < local_c0[2]) * 2);
    if (local_c0[0] < local_c0[1]) {
      uVar6 = (ulonglong)(local_c0[1] < local_c0[2]) + 1;
    }
    if (local_c0[uVar6] <= (double)(iVar1 - iVar5)) {
LAB_1483ba577:
      fVar8 = (float)iVar3 * fVar7;
      if ((*(int *)(param_1 + 0x38) == 2) && (fVar8 <= (float)*(double *)(param_1 + 0x40))) {
        fVar8 = (float)*(double *)(param_1 + 0x40);
      }
      local_d0 = ((float)param_2[2] - DAT_14c846358 * fVar8) - (float)*(double *)(param_1 + 0x28);
      local_d4 = ((float)param_2[1] - DAT_14c846350._4_4_ * fVar8) -
                 (float)*(double *)(param_1 + 0x20);
      local_d8 = ((float)*param_2 - fVar8 * (float)DAT_14c846350) -
                 (float)*(double *)(param_1 + 0x18);
      local_c4 = (int)((((float)param_2[5] + DAT_14c846358 * fVar8 +
                        (float)*(double *)(param_1 + 0x28)) - local_d0) / fVar7) + 1;
      local_c8 = (int)((((float)param_2[4] + DAT_14c846350._4_4_ * fVar8 +
                        (float)*(double *)(param_1 + 0x20)) - local_d4) / fVar7) + 1;
      local_cc = (int)((((float)param_2[3] + fVar8 * (float)DAT_14c846350 +
                        (float)*(double *)(param_1 + 0x18)) - local_d8) / fVar7) + 1;
      uVar4 = FUN_1483ba8aa(param_1);
      goto LAB_1483ba514;
    }
    fVar7 = ((float)(local_c0[uVar6 + 3] / (double)(iVar1 - iVar5)) / fVar7) * fVar7;
    *(float *)(param_1 + 0x10) = fVar7;
    if (0.0 < fVar7) {
      iVar3 = _finite((double)fVar7);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x14);
        fVar7 = *(float *)(param_1 + 0x10);
        goto LAB_1483ba577;
      }
    }
  }
  uVar4 = 0;
LAB_1483ba514:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ba68a FUN_1483ba68a body=200 status=ok
// SIG undefined FUN_1483ba68a(void)

void FUN_1483ba68a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (longlong *)*param_2;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  local_40 = (undefined4)param_2[1];
  local_38 = 3;
  FUN_1402160b8(&uStack_30);
  iVar2 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1483beae2((longlong *)(param_1 + 0xb0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  FUN_14023423e(lVar3 + (longlong)iVar2 * 0x20,&local_48);
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ba754 FUN_1483ba754 body=103 status=ok
// SIG undefined FUN_1483ba754(void)

void FUN_1483ba754(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
                    /* WARNING: Could not recover jumptable at 0x0001483ba7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1483ba7c0 FUN_1483ba7c0 body=233 status=ok
// SIG undefined FUN_1483ba7c0(void)

undefined8 FUN_1483ba7c0(longlong param_1,double *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
  if (*param_2 <= param_2[3]) {
    if (param_2[1] <= param_2[4]) {
      if (((param_2[2] <= param_2[5]) &&
          (dVar4 = param_2[5] - param_2[2],
          dVar4 = (double)(-(ulonglong)(0.0 <= dVar4) & (ulonglong)dVar4),
          dVar3 = param_2[4] - param_2[1],
          dVar3 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3),
          uVar2 = -(ulonglong)(dVar4 <= dVar3),
          dVar4 = (double)(~uVar2 & (ulonglong)dVar4 | uVar2 & (ulonglong)dVar3),
          dVar3 = param_2[3] - *param_2,
          dVar3 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3),
          uVar2 = -(ulonglong)(dVar4 <= dVar3),
          iVar1 = _finite((double)(uVar2 & (ulonglong)dVar3 | ~uVar2 & (ulonglong)dVar4)),
          iVar1 != 0)) && (0.0 < *(float *)(param_1 + 0x10))) {
        iVar1 = _finite((double)*(float *)(param_1 + 0x10));
        if (iVar1 != 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),4 < *(int *)(param_1 + 0x34));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1483ba8aa FUN_1483ba8aa body=450 status=ok
// SIG undefined FUN_1483ba8aa(void)

ulonglong FUN_1483ba8aa(longlong param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (-1 < (int)(*param_3 | uVar1 | uVar2)) {
    if (*(int *)(param_1 + 0x38) != 2) {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        local_68 = param_1 + 0xb0;
        local_60 = *(undefined4 *)(param_1 + 0x14);
        if (*(longlong *)(param_1 + 8) == 0) {
          local_40 = *(undefined4 *)(param_2 + 1);
          local_48 = *param_2;
          local_78 = uVar1;
          local_70 = uVar2;
          FUN_1483baf72(param_1,&local_48);
        }
        else {
          local_30 = *(undefined4 *)(param_2 + 1);
          local_38 = *param_2;
          local_78 = uVar1;
          local_70 = uVar2;
          FUN_1483baa6e(param_1,&local_38,*(undefined4 *)(param_1 + 0x10));
        }
      }
      else {
        local_60 = *(undefined4 *)(param_1 + 0x14);
        local_68 = param_1 + 0xb0;
        local_50 = *(undefined4 *)(param_2 + 1);
        local_58 = *param_2;
        local_78 = uVar1;
        local_70 = uVar2;
        FUN_1483bb474(param_1,&local_58,*(undefined4 *)(param_1 + 0x10));
      }
LAB_1483ba96e:
      FUN_1483bbd4c(param_1);
      pcVar3 = *(code **)(param_1 + 0x60);
      plVar6 = (longlong *)(param_1 + 0x80);
      if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
        plVar6 = *(longlong **)(param_1 + 0x70);
      }
      uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
      uVar5 = (*pcVar3)(uVar4);
      uVar5 = uVar5 ^ 1;
      goto LAB_1483ba8f2;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      if ((*(double *)(param_1 + 0x40) != 0.0) || (NAN(*(double *)(param_1 + 0x40)))) {
        local_68 = param_1 + 0xb0;
        local_20 = *(undefined4 *)(param_2 + 1);
        local_28 = *param_2;
        local_78 = uVar1;
        local_70 = uVar2;
        FUN_143b22b86(param_1,&local_28,*(undefined4 *)(param_1 + 0x10));
        goto LAB_1483ba96e;
      }
    }
  }
  uVar5 = 0;
LAB_1483ba8f2:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483baa6e FUN_1483baa6e body=1283 status=ok
// SIG undefined FUN_1483baa6e(void)

void FUN_1483baa6e(longlong *param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6,longlong *param_7,int param_8)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  int local_13c;
  longlong *local_138;
  longlong *local_130;
  float *local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  longlong *local_100;
  float *local_f8;
  float local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 *local_a0;
  undefined1 local_91;
  undefined1 *local_90;
  longlong **local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  fVar11 = (float)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar9 = param_5 * param_4 * param_6;
  local_128 = param_2;
  FUN_144a12820(param_7,iVar9,1);
  *(int *)(param_7 + 2) = param_4;
  *(int *)((longlong)param_7 + 0x14) = param_5;
  *(int *)(param_7 + 3) = param_6;
  fVar12 = *(float *)(param_1 + 2);
  fVar12 = (float)param_6 * fVar12 + (float)param_4 * fVar12 + (float)param_5 * fVar12;
  if (0 < (int)param_7[1]) {
    lVar5 = 0;
    do {
      *(float *)(*param_7 + lVar5 * 4) = fVar12;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_7[1]);
  }
  local_138 = param_1 + 0x1a;
  FUN_144a127d2(local_138,iVar9,1);
  *(int *)(param_1 + 0x1c) = param_4;
  *(int *)((longlong)param_1 + 0xe4) = param_5;
  *(int *)(param_1 + 0x1d) = param_6;
  if (0 < (int)param_1[0x1b]) {
    lVar5 = 0;
    do {
      *(undefined4 *)(param_1[0x1a] + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x1b]);
  }
  plVar10 = param_1 + 0x1e;
  FUN_144a127d2(plVar10,iVar9,1);
  pfVar2 = local_128;
  *(int *)(param_1 + 0x20) = param_4;
  *(int *)((longlong)param_1 + 0x104) = param_5;
  *(int *)(param_1 + 0x21) = param_6;
  if (0 < (int)param_1[0x1f]) {
    lVar5 = 0;
    do {
      *(undefined4 *)(param_1[0x1e] + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x1f]);
  }
  local_c0 = (double)*local_128;
  local_b8 = (double)local_128[1];
  local_b0 = (double)local_128[2];
  local_a8 = 1.0 / (double)fVar11;
  local_a0 = &local_91;
  local_91 = 0;
  local_f8 = local_128;
  local_e8 = param_5;
  local_e4 = param_6;
  local_e0 = param_7;
  local_d8 = (double)CONCAT44(fVar12,param_8);
  local_d0 = local_138;
  local_80 = 0;
  local_78 = 0;
  local_90 = &LAB_1483bdf3c;
  local_150._0_4_ = 0;
  local_148 = &local_80;
  local_130 = plVar10;
  local_100 = param_1;
  local_f0 = fVar11;
  local_ec = param_4;
  local_c8 = plVar10;
  local_88 = &local_100;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1,&local_90);
  local_d8 = (double)(fVar11 * 1.7320508) * (double)param_8;
  local_f8 = pfVar2;
  local_e8 = param_5;
  local_e4 = param_6;
  local_e0 = param_7;
  local_d0 = (longlong *)CONCAT44(local_d0._4_4_,fVar12);
  local_c8 = local_138;
  local_80 = 0;
  local_78 = 0;
  local_90 = &LAB_1483be2d6;
  local_150 = (longlong *)((ulonglong)local_150._4_4_ << 0x20);
  local_148 = &local_80;
  local_13c = param_4;
  local_100 = param_1;
  local_f0 = fVar11;
  local_ec = param_4;
  local_88 = &local_100;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)((longlong)param_1 + 0xc4) * (int)param_1[0x18] * (int)param_1[0x19],1,
                &local_90);
  pcVar1 = (code *)param_1[0xc];
  plVar10 = param_1 + 0x10;
  plVar7 = (longlong *)param_1[0xe];
  if ((longlong *)param_1[0xe] == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar4 = (*pcVar1)(uVar6);
  if (cVar4 != '\0') goto LAB_1483badb9;
  if ((char)param_1[9] == '\x01') {
    local_108 = local_128[2];
    local_110 = *(undefined8 *)local_128;
    local_148 = local_130;
    local_150 = (longlong *)CONCAT44(local_150._4_4_,param_6);
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_5);
    FUN_1483bbe74(param_1,&local_110,param_3,local_13c);
    pcVar1 = (code *)param_1[0xc];
    plVar7 = (longlong *)param_1[0xe];
    if ((longlong *)param_1[0xe] == (longlong *)0x0) {
      plVar7 = plVar10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar1)(uVar6);
    if (cVar4 != '\0') goto LAB_1483badb9;
    if ((int)param_1[7] == 0) {
      bVar3 = true;
      do {
        bVar8 = bVar3;
        local_118 = local_128[2];
        local_120 = *(undefined8 *)local_128;
        local_158 = local_138;
        FUN_1483bbfd4(param_1,&local_120,param_3,param_7);
        pcVar1 = (code *)param_1[0xc];
        plVar7 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar7 = plVar10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar1)(uVar6);
        if (cVar4 != '\0') goto LAB_1483badb9;
        bVar3 = false;
      } while (bVar8);
    }
    local_150 = local_130;
    local_158 = param_7;
    FUN_1483bc322(param_1,local_13c,param_5,param_6);
    pcVar1 = (code *)param_1[0xc];
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0xe];
    }
    uVar6 = (**(code **)(*plVar10 + 8))(plVar10);
    cVar4 = (*pcVar1)(uVar6);
    if (cVar4 != '\0') goto LAB_1483badb9;
    if (*(char *)((longlong)param_1 + 0x51) == '\0') {
      FUN_144a127d2(local_130,0,1);
      param_1[0x20] = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
    }
  }
  if ((char)param_1[10] == '\0') {
    FUN_144a127d2(local_138,0,1);
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
LAB_1483badb9:
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483baf72 FUN_1483baf72 body=1281 status=ok
// SIG undefined FUN_1483baf72(void)

void FUN_1483baf72(longlong *param_1,float *param_2,undefined8 param_3,ulonglong param_4,int param_5
                  ,int param_6,longlong *param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar16;
  undefined1 local_308 [32];
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2c8;
  longlong *local_2c0;
  code *local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  undefined8 local_2a0;
  float local_298;
  longlong *local_290;
  float *local_288;
  float local_280;
  int local_27c;
  int local_278;
  int local_274;
  longlong *local_270;
  undefined4 local_268;
  longlong *local_260;
  longlong *local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  int local_230;
  int local_22c;
  int local_228;
  _RTL_CRITICAL_SECTION *local_220;
  undefined1 *local_218;
  undefined1 local_209;
  undefined1 *local_208;
  longlong **local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  _RTL_CRITICAL_SECTION local_1e8 [8];
  ulonglong local_a0;
  
  iVar14 = (int)param_4;
  local_a0 = DAT_14c707940 ^ (ulonglong)local_308;
  iVar15 = param_5 * iVar14 * param_6;
  FUN_144a12820(param_7,iVar15,1);
  *(int *)(param_7 + 2) = iVar14;
  *(int *)((longlong)param_7 + 0x14) = param_5;
  *(int *)(param_7 + 3) = param_6;
  if (0 < (int)param_7[1]) {
    lVar10 = param_1[0x18];
    fVar1 = *(float *)(param_1 + 2);
    iVar4 = *(int *)((longlong)param_1 + 0xc4);
    lVar6 = param_1[0x19];
    lVar9 = 0;
    do {
      *(float *)(*param_7 + lVar9 * 4) =
           (float)(int)lVar6 * fVar1 + (float)(int)lVar10 * fVar1 + (float)iVar4 * fVar1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_7[1]);
  }
  local_2c0 = param_1 + 0x1a;
  FUN_144a127d2(local_2c0,iVar15,1);
  *(int *)(param_1 + 0x1c) = iVar14;
  *(int *)((longlong)param_1 + 0xe4) = param_5;
  *(int *)(param_1 + 0x1d) = param_6;
  if (0 < (int)param_1[0x1b]) {
    lVar10 = 0;
    do {
      *(undefined4 *)(param_1[0x1a] + lVar10 * 4) = 0xffffffff;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0x1b]);
  }
  local_2c8 = param_1 + 0x1e;
  FUN_144a127d2(local_2c8,iVar15,1);
  *(int *)(param_1 + 0x20) = iVar14;
  *(int *)((longlong)param_1 + 0x104) = param_5;
  *(int *)(param_1 + 0x21) = param_6;
  if (0 < (int)param_1[0x1f]) {
    lVar10 = 0;
    do {
      *(undefined4 *)(param_1[0x1e] + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0x1f]);
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  lVar10 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)((longlong)&local_1e8[0].DebugInfo + lVar10);
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0x140);
  local_22c = param_5 / 2;
  local_250 = (double)fVar1;
  local_248 = (double)fVar2;
  local_240 = (double)fVar3;
  local_230 = (int)(((uint)(param_4 >> 0x1f) & 1) + iVar14) >> 1;
  local_228 = param_6 / 2;
  local_218 = &local_209;
  local_209 = 0;
  local_200 = &local_290;
  local_278 = param_5;
  local_274 = param_6;
  local_270 = param_7;
  local_268 = param_8;
  local_260 = local_2c0;
  local_258 = local_2c8;
  local_220 = local_1e8;
  local_2d8 = &local_1f8;
  local_1f8 = 0;
  local_1f0 = 0;
  local_208 = &LAB_1483be4cc;
  local_2e0 = (longlong *)((ulonglong)local_2e0 & 0xffffffff00000000);
  local_290 = param_1;
  local_288 = param_2;
  local_280 = (float)param_3;
  local_27c = iVar14;
  local_238 = 1.0 / (double)(float)param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1);
  pcVar5 = (code *)param_1[0xc];
  plVar16 = param_1 + 0x10;
  plVar12 = (longlong *)param_1[0xe];
  if ((longlong *)param_1[0xe] == (longlong *)0x0) {
    plVar12 = plVar16;
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  cVar8 = (*pcVar5)(uVar11);
  if (cVar8 != '\0') goto LAB_1483bb281;
  if ((char)param_1[9] == '\x01') {
    local_298 = param_2[2];
    local_2a0 = *(undefined8 *)param_2;
    local_2d8 = local_2c8;
    local_2e0 = (longlong *)CONCAT44(local_2e0._4_4_,param_6);
    local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,param_5);
    FUN_1483bbe74(param_1,&local_2a0,param_3,param_4 & 0xffffffff);
    pcVar5 = (code *)param_1[0xc];
    plVar12 = (longlong *)param_1[0xe];
    if ((longlong *)param_1[0xe] == (longlong *)0x0) {
      plVar12 = plVar16;
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar5)(uVar11);
    if (cVar8 != '\0') goto LAB_1483bb281;
    if ((int)param_1[7] == 0) {
      bVar7 = true;
      do {
        bVar13 = bVar7;
        local_2a8 = param_2[2];
        local_2b0 = *(undefined8 *)param_2;
        local_2e8 = local_2c0;
        FUN_1483bbfd4(param_1,&local_2b0,param_3,param_7);
        local_2b8 = (code *)param_1[0xc];
        plVar12 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar12 = plVar16;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        cVar8 = (*local_2b8)(uVar11);
        if (cVar8 != '\0') goto LAB_1483bb281;
        bVar7 = false;
      } while (bVar13);
    }
    local_2e0 = local_2c8;
    local_2e8 = param_7;
    FUN_1483bc322(param_1,param_4 & 0xffffffff,param_5,param_6);
    pcVar5 = (code *)param_1[0xc];
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[0xe];
    }
    uVar11 = (**(code **)(*plVar16 + 8))(plVar16);
    cVar8 = (*pcVar5)(uVar11);
    if (cVar8 != '\0') goto LAB_1483bb281;
    if (*(char *)((longlong)param_1 + 0x51) == '\0') {
      FUN_144a127d2(local_2c8,0,1);
      param_1[0x20] = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
    }
  }
  if ((char)param_1[10] == '\0') {
    FUN_144a127d2(local_2c0,0,1);
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
LAB_1483bb281:
  lVar10 = 0x118;
  do {
    DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)&local_1e8[0].DebugInfo + lVar10));
    lVar10 = lVar10 + -0x28;
  } while (lVar10 != -0x28);
  if ((local_a0 ^ (ulonglong)local_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bb474 FUN_1483bb474 body=2263 status=ok
// SIG undefined FUN_1483bb474(void)

void FUN_1483bb474(longlong *param_1,float *param_2,undefined8 param_3,uint param_4,int param_5,
                  int param_6,longlong *param_7,int param_8)

{
  double *pdVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  uint local_1c4;
  longlong *local_1c0;
  ulonglong local_1b8;
  longlong *local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  longlong *local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  fVar31 = (float)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar22 = param_5 * param_4 * param_6;
  FUN_144a12820(param_7,iVar22,1);
  *(uint *)(param_7 + 2) = param_4;
  *(int *)((longlong)param_7 + 0x14) = param_5;
  *(int *)(param_7 + 3) = param_6;
  if (0 < (int)param_7[1]) {
    fVar2 = *(float *)(param_1 + 2);
    lVar17 = 0;
    do {
      *(float *)(*param_7 + lVar17 * 4) =
           (float)param_6 * fVar2 + (float)(int)param_4 * fVar2 + (float)param_5 * fVar2;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_7[1]);
  }
  local_188 = param_1 + 0x1a;
  FUN_144a127d2(local_188,iVar22,1);
  *(uint *)(param_1 + 0x1c) = param_4;
  *(int *)((longlong)param_1 + 0xe4) = param_5;
  *(int *)(param_1 + 0x1d) = param_6;
  if (0 < (int)param_1[0x1b]) {
    lVar17 = 0;
    do {
      *(undefined4 *)(param_1[0x1a] + lVar17 * 4) = 0xffffffff;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x1b]);
  }
  local_1c0 = param_1 + 0x1e;
  FUN_144a127d2(local_1c0,iVar22,1);
  *(uint *)(param_1 + 0x20) = param_4;
  *(int *)((longlong)param_1 + 0x104) = param_5;
  *(int *)(param_1 + 0x21) = param_6;
  if (0 < (int)param_1[0x1f]) {
    lVar17 = 0;
    do {
      *(undefined4 *)(param_1[0x1e] + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x1f]);
  }
  lVar17 = *param_1;
  local_1b8 = (ulonglong)param_4;
  if (0 < *(int *)(lVar17 + 0x140) * 0x200 + *(int *)(lVar17 + 0x144)) {
    dVar8 = (double)fVar31;
    dVar9 = (double)*param_2;
    dVar10 = (double)param_2[1];
    dVar11 = (double)param_2[2];
    local_180 = param_1 + 0x10;
    local_19c = param_4 - 1;
    local_1a0 = param_8 + 1;
    local_1a4 = param_5 + -1;
    local_1a8 = param_6 + -1;
    uVar28 = 0;
    local_1b0 = param_1;
    do {
      param_1 = local_1b0;
      local_1c4 = (uint)uVar28;
      uVar27 = (ulonglong)(local_1c4 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x148) + (uVar28 >> 9) * 8) +
                             uVar27 * 2) - 1U) < 0xfffe) {
        if ((local_1c4 * -0x3d70a3d7 >> 2 | local_1c4 * 0x40000000) < 0x28f5c29) {
          pcVar5 = (code *)local_1b0[0xc];
          plVar20 = (longlong *)local_1b0[0xe];
          if ((longlong *)local_1b0[0xe] == (longlong *)0x0) {
            plVar20 = local_180;
          }
          uVar18 = (**(code **)(*plVar20 + 8))();
          cVar15 = (*pcVar5)(uVar18);
          if (cVar15 != '\0') break;
          lVar17 = *param_1;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + (uVar28 >> 9) * 8);
        uVar23 = *(uint *)(lVar3 + uVar27 * 0xc);
        lVar4 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
        uVar28 = (ulonglong)uVar23 & 0x1ff;
        local_e8 = *(double *)(lVar4 + 0x10 + uVar28 * 0x18);
        pdVar1 = (double *)(lVar4 + uVar28 * 0x18);
        local_f8 = *pdVar1;
        dStack_f0 = pdVar1[1];
        uVar23 = *(uint *)(lVar3 + 4 + uVar27 * 0xc);
        lVar4 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
        uVar28 = (ulonglong)uVar23 & 0x1ff;
        local_108 = *(double *)(lVar4 + 0x10 + uVar28 * 0x18);
        pdVar1 = (double *)(lVar4 + uVar28 * 0x18);
        local_118 = *pdVar1;
        dStack_110 = pdVar1[1];
        uVar23 = *(uint *)(lVar3 + 8 + uVar27 * 0xc);
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
        uVar28 = (ulonglong)uVar23 & 0x1ff;
        local_128 = *(double *)(lVar17 + 0x10 + uVar28 * 0x18);
        pdVar1 = (double *)(lVar17 + uVar28 * 0x18);
        local_138 = *pdVar1;
        dStack_130 = pdVar1[1];
        dVar35 = (local_f8 - dVar9) / dVar8;
        dVar29 = (dStack_f0 - dVar10) / dVar8;
        dVar7 = (local_e8 - dVar11) / dVar8;
        dVar36 = (local_118 - dVar9) / dVar8;
        dVar33 = (dStack_110 - dVar10) / dVar8;
        dVar32 = (local_108 - dVar11) / dVar8;
        dVar34 = (local_138 - dVar9) / dVar8;
        dVar30 = (dStack_130 - dVar10) / dVar8;
        dVar14 = dVar35;
        if (dVar36 <= dVar35) {
          dVar14 = dVar36;
        }
        if (dVar34 <= dVar14) {
          dVar14 = dVar34;
        }
        uVar23 = (int)dVar14 - param_8;
        if ((int)local_19c <= (int)dVar14 - param_8) {
          uVar23 = local_19c;
        }
        uVar16 = 0;
        if (0 < (int)uVar23) {
          uVar16 = uVar23;
        }
        if (dVar35 <= dVar36) {
          dVar35 = dVar36;
        }
        if (dVar35 <= dVar34) {
          dVar35 = dVar34;
        }
        uVar12 = (int)dVar35 + local_1a0;
        if ((int)local_19c <= (int)dVar35 + local_1a0) {
          uVar12 = local_19c;
        }
        dVar34 = (local_128 - dVar11) / dVar8;
        dVar36 = dVar29;
        if (dVar33 <= dVar29) {
          dVar36 = dVar33;
        }
        if (dVar30 <= dVar36) {
          dVar36 = dVar30;
        }
        local_18c = (int)dVar36 - param_8;
        if (local_1a4 <= (int)dVar36 - param_8) {
          local_18c = local_1a4;
        }
        local_198 = 0;
        if (0 < local_18c) {
          local_198 = local_18c;
        }
        if (dVar29 <= dVar33) {
          dVar29 = dVar33;
        }
        if (dVar29 <= dVar30) {
          dVar29 = dVar30;
        }
        iVar22 = (int)dVar29 + local_1a0;
        if (local_1a4 <= (int)dVar29 + local_1a0) {
          iVar22 = local_1a4;
        }
        dVar30 = dVar7;
        if (dVar32 <= dVar7) {
          dVar30 = dVar32;
        }
        if (dVar34 <= dVar30) {
          dVar30 = dVar34;
        }
        iVar13 = (int)dVar30 - param_8;
        if (local_1a8 <= (int)dVar30 - param_8) {
          iVar13 = local_1a8;
        }
        if (dVar7 <= dVar32) {
          dVar7 = dVar32;
        }
        if (dVar7 <= dVar34) {
          dVar7 = dVar34;
        }
        local_190 = (int)dVar7 + local_1a0;
        if (local_1a8 <= (int)dVar7 + local_1a0) {
          local_190 = local_1a8;
        }
        iVar19 = 0;
        if (0 < local_190) {
          iVar19 = local_190;
        }
        if (iVar13 <= iVar19) {
          local_194 = 0;
          if (0 < iVar22) {
            local_194 = iVar22;
          }
          uVar26 = 0;
          if (0 < (int)uVar12) {
            uVar26 = uVar12;
          }
          if (iVar13 < 1) {
            iVar13 = 0;
          }
          local_178 = (ulonglong)uVar16;
          do {
            if (local_18c <= local_194) {
              iVar19 = local_198;
              do {
                if ((int)uVar23 <= (int)uVar26) {
                  uVar28 = local_178;
                  do {
                    local_140 = (double)(param_2[2] + (float)iVar13 * fVar31);
                    iVar25 = (int)uVar28;
                    local_148 = (double)(param_2[1] + (float)iVar19 * fVar31);
                    local_150 = (double)((float)iVar25 * fVar31 + *param_2);
                    dVar7 = (double)FUN_1483bd946(&local_150,&local_f8,&local_118,&local_138);
                    lVar17 = (longlong)(*(int *)((longlong)param_7 + 0x14) * iVar13 + iVar19) *
                             (longlong)(int)param_7[2] + uVar28;
                    if ((float)dVar7 < *(float *)(*param_7 + lVar17 * 4)) {
                      *(float *)(*param_7 + lVar17 * 4) = (float)dVar7;
                      *(uint *)(local_1b0[0x1a] +
                               ((longlong)(*(int *)((longlong)local_1b0 + 0xe4) * iVar13 + iVar19) *
                                (longlong)(int)local_1b0[0x1c] + uVar28) * 4) = local_1c4;
                    }
                    uVar28 = uVar28 + 1;
                  } while (iVar25 < (int)uVar12);
                }
                bVar6 = iVar19 < iVar22;
                iVar19 = iVar19 + 1;
              } while (bVar6);
            }
            bVar6 = iVar13 < local_190;
            iVar13 = iVar13 + 1;
          } while (bVar6);
        }
      }
      uVar28 = (ulonglong)(local_1c4 + 1);
      lVar17 = *local_1b0;
      param_1 = local_1b0;
    } while ((int)(local_1c4 + 1) < *(int *)(lVar17 + 0x140) * 0x200 + *(int *)(lVar17 + 0x144));
  }
  pcVar5 = (code *)param_1[0xc];
  plVar20 = param_1 + 0x10;
  plVar21 = (longlong *)param_1[0xe];
  if ((longlong *)param_1[0xe] == (longlong *)0x0) {
    plVar21 = plVar20;
  }
  uVar18 = (**(code **)(*plVar21 + 8))();
  cVar15 = (*pcVar5)(uVar18);
  if (cVar15 != '\0') goto LAB_1483bbb1b;
  if ((char)param_1[9] == '\x01') {
    local_158 = param_2[2];
    local_160 = *(undefined8 *)param_2;
    local_1d8 = local_1c0;
    local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,param_5);
    FUN_1483bbe74(param_1,&local_160,param_3,local_1b8);
    pcVar5 = (code *)param_1[0xc];
    plVar21 = (longlong *)param_1[0xe];
    if ((longlong *)param_1[0xe] == (longlong *)0x0) {
      plVar21 = plVar20;
    }
    uVar18 = (**(code **)(*plVar21 + 8))();
    cVar15 = (*pcVar5)(uVar18);
    if (cVar15 != '\0') goto LAB_1483bbb1b;
    if ((int)param_1[7] == 0) {
      bVar6 = true;
      do {
        bVar24 = bVar6;
        local_168 = param_2[2];
        local_170 = *(undefined8 *)param_2;
        local_1e8 = local_188;
        FUN_1483bbfd4(param_1,&local_170,param_3,param_7);
        pcVar5 = (code *)param_1[0xc];
        plVar21 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar21 = plVar20;
        }
        uVar18 = (**(code **)(*plVar21 + 8))();
        cVar15 = (*pcVar5)(uVar18);
        if (cVar15 != '\0') goto LAB_1483bbb1b;
        bVar6 = false;
      } while (bVar24);
    }
    local_1e0 = local_1c0;
    local_1e8 = param_7;
    FUN_1483bc322(param_1,local_1b8,param_5,param_6);
    pcVar5 = (code *)param_1[0xc];
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[0xe];
    }
    uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
    cVar15 = (*pcVar5)(uVar18);
    if (cVar15 != '\0') goto LAB_1483bbb1b;
    if (*(char *)((longlong)param_1 + 0x51) == '\0') {
      FUN_144a127d2(local_1c0,0,1);
      param_1[0x20] = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
    }
  }
  if ((char)param_1[10] == '\0') {
    FUN_144a127d2(local_188,0,1);
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
LAB_1483bbb1b:
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bbd4c FUN_1483bbd4c body=102 status=ok
// SIG undefined FUN_1483bbd4c(void)

void FUN_1483bbd4c(longlong param_1)

{
  if (*(char *)(param_1 + 0x51) == '\0') {
    FUN_144a127d2(param_1 + 0xf0,0,1);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_144a127d2(param_1 + 0xd0,0,1);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 1483bbdb2 FUN_1483bbdb2 body=193 status=ok
// SIG undefined FUN_1483bbdb2(void)

void FUN_1483bbdb2(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar6 = *param_1;
  *(undefined4 *)(lVar6 + 8) = 0;
  if (*(int *)(lVar6 + 0xc) < 0) {
    FUN_14481578e(lVar6,0);
  }
  lVar6 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar6 != 0) {
    plVar8 = *(longlong **)param_1[1];
    plVar5 = plVar8 + lVar6 * 2;
    do {
      lVar6 = plVar8[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar3 = *plVar8;
        lVar7 = 0;
        do {
          uVar1 = *(undefined4 *)(lVar3 + lVar7);
          plVar4 = (longlong *)*param_1;
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(plVar4,iVar2);
          }
          *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = uVar1;
          lVar7 = lVar7 + 4;
        } while ((longlong)(int)lVar6 * 4 != lVar7);
      }
      *(undefined4 *)(plVar8 + 1) = 0;
      if (*(int *)((longlong)plVar8 + 0xc) < 0) {
        FUN_14481578e(plVar8,0);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar5);
  }
  return;
}



// FUNCTION 1483bbe74 FUN_1483bbe74 body=350 status=ok
// SIG undefined FUN_1483bbe74(void)

void FUN_1483bbe74(longlong *param_1,float *param_2,float param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_108 [40];
  uint local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  float *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  double *local_88;
  undefined1 *local_80;
  undefined1 local_71;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  longlong **local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = &local_4c;
  local_58 = (double)*param_2;
  local_a0 = &local_58;
  local_60 = (double)param_2[1];
  local_98 = &local_60;
  local_68 = (double)param_2[2];
  local_90 = &local_68;
  local_70 = 1.0 / (double)param_3;
  local_88 = &local_70;
  local_80 = &local_71;
  local_71 = 0;
  local_40 = &local_d0;
  local_b8 = (undefined1 *)&param_5;
  local_b0 = (undefined1 *)&param_6;
  local_a8 = param_7;
  local_e0 = *(byte *)(param_1 + 6) ^ 1;
  local_d8 = &local_38;
  local_38 = 0;
  local_30 = 0;
  local_48 = &LAB_1483bcc24;
  local_d0 = param_1;
  local_c8 = param_2;
  local_4c = param_4;
  FUN_1427ae281(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bbfd4 FUN_1483bbfd4 body=845 status=ok
// SIG undefined FUN_1483bbfd4(void)

void FUN_1483bbfd4(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_e0 = 1;
  local_e8 = 1;
  local_f0 = 1;
  local_f8 = param_3;
  FUN_1483bd37e(param_1,param_4,param_5);
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar5 = (longlong *)(param_1 + 0x80);
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    local_68 = *(undefined4 *)(param_2 + 1);
    local_70 = *param_2;
    local_e0 = 0xffffffff;
    local_e8 = 0xffffffff;
    local_f0 = 0xffffffff;
    local_f8 = param_3;
    FUN_1483bd37e(param_1,param_4,param_5);
    pcVar1 = *(code **)(param_1 + 0x60);
    plVar4 = *(longlong **)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      local_78 = *(undefined4 *)(param_2 + 1);
      local_80 = *param_2;
      local_e8 = 1;
      local_f0 = 1;
      local_e0 = 0xffffffff;
      local_f8 = param_3;
      FUN_1483bd37e(param_1,param_4,param_5);
      pcVar1 = *(code **)(param_1 + 0x60);
      plVar4 = *(longlong **)(param_1 + 0x70);
      if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
        plVar4 = plVar5;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3);
      if (cVar2 == '\0') {
        local_88 = *(undefined4 *)(param_2 + 1);
        local_90 = *param_2;
        local_e8 = 0xffffffff;
        local_f0 = 0xffffffff;
        local_e0 = 1;
        local_f8 = param_3;
        FUN_1483bd37e(param_1,param_4,param_5);
        pcVar1 = *(code **)(param_1 + 0x60);
        plVar4 = *(longlong **)(param_1 + 0x70);
        if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
          plVar4 = plVar5;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        cVar2 = (*pcVar1)(uVar3);
        if (cVar2 == '\0') {
          local_98 = *(undefined4 *)(param_2 + 1);
          local_a0 = *param_2;
          local_e0 = 1;
          local_f0 = 1;
          local_e8 = 0xffffffff;
          local_f8 = param_3;
          FUN_1483bd37e(param_1,param_4,param_5);
          pcVar1 = *(code **)(param_1 + 0x60);
          plVar4 = *(longlong **)(param_1 + 0x70);
          if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
            plVar4 = plVar5;
          }
          uVar3 = (**(code **)(*plVar4 + 8))();
          cVar2 = (*pcVar1)(uVar3);
          if (cVar2 == '\0') {
            local_a8 = *(undefined4 *)(param_2 + 1);
            local_b0 = *param_2;
            local_e0 = 0xffffffff;
            local_f0 = 0xffffffff;
            local_e8 = 1;
            local_f8 = param_3;
            FUN_1483bd37e(param_1,param_4,param_5);
            pcVar1 = *(code **)(param_1 + 0x60);
            plVar4 = *(longlong **)(param_1 + 0x70);
            if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
              plVar4 = plVar5;
            }
            uVar3 = (**(code **)(*plVar4 + 8))();
            cVar2 = (*pcVar1)(uVar3);
            if (cVar2 == '\0') {
              local_b8 = *(undefined4 *)(param_2 + 1);
              local_c0 = *param_2;
              local_e0 = 0xffffffff;
              local_e8 = 0xffffffff;
              local_f0 = 1;
              local_f8 = param_3;
              FUN_1483bd37e(param_1,param_4,param_5);
              pcVar1 = *(code **)(param_1 + 0x60);
              if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
                plVar5 = *(longlong **)(param_1 + 0x70);
              }
              uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
              cVar2 = (*pcVar1)(uVar3);
              if (cVar2 == '\0') {
                local_c8 = *(undefined4 *)(param_2 + 1);
                local_d0 = *param_2;
                local_e0 = 1;
                local_e8 = 1;
                local_f0 = 0xffffffff;
                local_f8 = param_3;
                FUN_1483bd37e(param_1,param_4,param_5);
              }
            }
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bc322 FUN_1483bc322 body=517 status=ok
// SIG undefined FUN_1483bc322(void)

void FUN_1483bc322(longlong param_1,int param_2,int param_3,int param_4,longlong *param_5,
                  longlong *param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  code *local_c8;
  longlong local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_8c = param_2;
  local_88 = param_3;
  local_84 = param_4;
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (0 < param_4) {
      local_d0 = (longlong *)(param_1 + 0x80);
      iVar7 = 0;
      do {
        local_c8 = *(code **)(param_1 + 0x60);
        plVar3 = *(longlong **)(param_1 + 0x70);
        if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
          plVar3 = local_d0;
        }
        (**(code **)(*plVar3 + 8))();
        cVar1 = (*local_c8)();
        if (cVar1 != '\0') break;
        if (0 < param_3) {
          iVar2 = 0;
          do {
            if (0 < param_2) {
              lVar4 = 0;
              uVar5 = 0;
              do {
                uVar5 = uVar5 + *(int *)(*param_6 +
                                        ((longlong)
                                         (*(int *)((longlong)param_6 + 0x14) * iVar7 + iVar2) *
                                         (longlong)(int)param_6[2] + lVar4) * 4);
                if (((*(int *)(param_1 + 0x4c) == 1) && (0 < (int)uVar5)) ||
                   ((*(int *)(param_1 + 0x4c) == 0 && ((uVar5 & 0x80000001) == 1)))) {
                  lVar6 = (longlong)(*(int *)((longlong)param_5 + 0x14) * iVar7 + iVar2) *
                          (longlong)(int)param_5[2] + lVar4;
                  *(uint *)(*param_5 + lVar6 * 4) = *(uint *)(*param_5 + lVar6 * 4) ^ 0x80000000;
                }
                lVar4 = lVar4 + 1;
              } while (param_2 != (int)lVar4);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != param_3);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != param_4);
    }
  }
  else {
    local_78 = &local_c0;
    local_b8 = &local_8c;
    local_b0 = &local_88;
    local_a8 = &local_84;
    local_a0 = param_5;
    local_98 = param_6;
    local_d8 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = &LAB_1483bde46;
    local_e0 = 0;
    local_c0 = param_1;
    FUN_1427ae281(L"ParallelFor Task",param_4 * param_3,1);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bc530 FUN_1483bc530 body=864 status=ok
// SIG undefined FUN_1483bc530(void)

void FUN_1483bc530(longlong *param_1,ulonglong param_2)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8 [2];
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar15 = (uint)param_2;
  if (-1 < (int)uVar15) {
    plVar14 = (longlong *)*param_1;
    lVar10 = *plVar14;
    if ((int)uVar15 < *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24)) {
      uVar17 = param_2 >> 9 & 0x7fffff;
      uVar18 = (ulonglong)(uVar15 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x28) + uVar17 * 8) + uVar18 * 2)
                  - 1U) < 0xfffe) {
        if ((uVar15 * -0x3d70a3d7 >> 2 | uVar15 * 0x40000000) < 0x28f5c29) {
          pcVar4 = (code *)plVar14[0xc];
          plVar13 = plVar14 + 0x10;
          if ((longlong *)plVar14[0xe] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar14[0xe];
          }
          uVar9 = (**(code **)(*plVar13 + 8))();
          uVar6 = (*pcVar4)(uVar9);
          *(undefined1 *)param_1[1] = uVar6;
        }
        if (*(char *)param_1[1] == '\0') {
          lVar10 = *(longlong *)(*(longlong *)(*plVar14 + 0x10) + uVar17 * 8);
          dVar3 = *(double *)param_1[3];
          iVar7 = (int)((*(double *)(lVar10 + 0x10 + uVar18 * 0x18) - *(double *)param_1[5]) * dVar3
                       );
          iVar16 = *(int *)param_1[8] + -1;
          if (iVar7 < *(int *)param_1[8] + -1) {
            iVar16 = iVar7;
          }
          iVar7 = 0;
          if (iVar16 < 1) {
            iVar16 = iVar7;
          }
          iVar11 = (int)((*(double *)(lVar10 + 8 + uVar18 * 0x18) - *(double *)param_1[4]) * dVar3);
          iVar19 = *(int *)param_1[7] + -1;
          if (iVar11 < *(int *)param_1[7] + -1) {
            iVar19 = iVar11;
          }
          if (iVar19 < 1) {
            iVar19 = iVar7;
          }
          iVar12 = (int)((*(double *)(lVar10 + uVar18 * 0x18) - *(double *)param_1[2]) * dVar3);
          iVar11 = *(int *)param_1[6] + -1;
          if (iVar12 < *(int *)param_1[6] + -1) {
            iVar11 = iVar12;
          }
          if (iVar11 < 1) {
            iVar11 = iVar7;
          }
          lVar10 = param_1[9];
          lpCriticalSection =
               (LPCRITICAL_SECTION)
               ((longlong)
                (int)((longlong)
                      ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x14) * iVar16 + iVar19) *
                       *(int *)(*(longlong *)(lVar10 + 0x10) + 0x10) + iVar11) /
                     *(longlong *)(lVar10 + 8)) * 0x28 + **(longlong **)(lVar10 + 0x18));
          EnterCriticalSection(lpCriticalSection);
          plVar13 = (longlong *)param_1[10];
          pfVar1 = (float *)(*plVar13 +
                            (longlong)
                            ((*(int *)((longlong)plVar13 + 0x14) * iVar16 + iVar19) *
                             (int)plVar13[2] + iVar11) * 4);
          if (*(float *)param_1[0xb] < *pfVar1 || *(float *)param_1[0xb] == *pfVar1) {
            fVar2 = *(float *)(plVar14 + 2);
            local_b0 = (double)((float)iVar16 * fVar2 + *(float *)(plVar14 + 0x15));
            local_b8 = (double)((float)iVar19 * fVar2 + *(float *)((longlong)plVar14 + 0xa4));
            local_c0 = (double)((float)iVar11 * fVar2 + *(float *)(plVar14 + 0x14));
            local_a8[0] = 0x7fefffffffffffff;
            local_98 = 0;
            local_88 = (longlong *)0x0;
            local_58 = 0;
            uVar8 = (**(code **)(*(longlong *)plVar14[1] + 0x20))
                              ((longlong *)plVar14[1],&local_c0,&local_c8,local_a8);
            if (local_98 != 0) {
              plVar14 = local_88;
              if (local_88 == (longlong *)0x0) {
                plVar14 = local_78;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            if (local_c8 < 0.0) {
              local_c8 = sqrt(local_c8);
            }
            else {
              local_c8 = SQRT(local_c8);
            }
            plVar14 = (longlong *)param_1[10];
            *(float *)(*plVar14 +
                      (longlong)
                      ((*(int *)((longlong)plVar14 + 0x14) * iVar16 + iVar19) * (int)plVar14[2] +
                      iVar11) * 4) = (float)local_c8;
            plVar14 = (longlong *)param_1[0xc];
            *(undefined4 *)
             (*plVar14 +
             (longlong)
             ((*(int *)((longlong)plVar14 + 0x14) * iVar16 + iVar19) * (int)plVar14[2] + iVar11) * 4
             ) = uVar8;
            iVar11 = (iVar16 * *(int *)(param_1[10] + 0x14) + iVar19) * *(int *)(param_1[10] + 0x10)
                     + iVar11;
            lVar10 = (longlong)iVar11;
            if (*(char *)(*(longlong *)param_1[0xd] + lVar10) == '\0') {
              *(undefined1 *)(*(longlong *)param_1[0xd] + lVar10) = 1;
              lVar5 = *(longlong *)((longlong *)param_1[0xe])[1];
              lVar10 = (longlong)(int)(lVar10 / *(longlong *)param_1[0xe]) * 0x10;
              iVar16 = *(int *)(lVar5 + 8 + lVar10);
              *(uint *)(lVar5 + 8 + lVar10) = iVar16 + 1U;
              if (*(uint *)(lVar5 + 0xc + lVar10) < iVar16 + 1U) {
                FUN_1446f48e2((longlong *)(lVar5 + lVar10),iVar16);
              }
              *(int *)(*(longlong *)(lVar5 + lVar10) + (longlong)iVar16 * 4) = iVar11;
            }
          }
          if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bc89a FUN_1483bc89a body=905 status=ok
// SIG undefined FUN_1483bc89a(void)

void FUN_1483bc89a(undefined8 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar13;
  int iVar14;
  double dVar15;
  undefined1 auStack_178 [32];
  longlong *local_158;
  int local_150;
  uint local_14c;
  longlong local_148;
  longlong local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = param_1[4];
  iVar2 = *(int *)(*(longlong *)*param_1 + (longlong)param_2 * 4);
  iVar3 = *(int *)(param_1[1] + 0x10);
  iVar4 = *(int *)(param_1[1] + 0x14);
  uVar7 = (longlong)iVar2 / (longlong)(iVar4 * iVar3) & 0xffffffff;
  lVar13 = 8;
  do {
    iVar14 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar13) + iVar2 % iVar3;
    piVar5 = (int *)param_1[2];
    if ((*piVar5 <= iVar14) &&
       (iVar10 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar13 + 4) +
                 (int)((longlong)
                       ((ulonglong)(uint)((int)((longlong)iVar2 / (longlong)iVar3) >> 0x1f) << 0x20
                       | (longlong)iVar2 / (longlong)iVar3 & 0xffffffffU) % (longlong)iVar4),
       piVar5[1] <= iVar10)) {
      iVar12 = *(int *)((longlong)&DAT_149f3c870 + lVar13) + (uint)uVar7;
      if ((piVar5[2] <= iVar12) &&
         (((iVar14 <= piVar5[3] && (iVar10 <= piVar5[4])) && (iVar12 <= piVar5[5])))) {
        iVar11 = (*(int *)(param_1[1] + 0x14) * iVar12 + iVar10) * *(int *)(param_1[1] + 0x10) +
                 iVar14;
        if (*(char *)(*(longlong *)param_1[3] + (longlong)iVar11) == '\0') {
          fVar1 = *(float *)(local_140 + 0x10);
          local_120 = (double)((float)iVar12 * fVar1 + *(float *)(local_140 + 0xa8));
          local_128 = (double)((float)iVar10 * fVar1 + *(float *)(local_140 + 0xa4));
          local_130 = (double)((float)iVar14 * fVar1 + *(float *)(local_140 + 0xa0));
          local_158 = *(longlong **)(local_140 + 8);
          local_118[0] = 0;
          local_108 = 0;
          local_150 = iVar11;
          local_14c = (uint)uVar7;
          local_148 = (longlong)iVar11;
          FUN_146bee698(local_d8,*(undefined8 *)param_1[5],local_118);
          iVar11 = (**(code **)(*local_158 + 0x20))(local_158,&local_130,&local_138,local_d8);
          local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar11);
          if (local_c8 != 0) {
            plVar9 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar9 = local_a8;
            }
            (**(code **)(*plVar9 + 0x10))();
            iVar11 = (int)local_158;
          }
          if (iVar11 == -1) {
            lVar6 = param_1[6];
            lVar8 = (longlong)
                    (int)((longlong)
                          ((iVar12 * *(int *)(*(longlong *)(lVar6 + 0x10) + 0x14) + iVar10) *
                           *(int *)(*(longlong *)(lVar6 + 0x10) + 0x10) + iVar14) /
                         *(longlong *)(lVar6 + 8)) * 0x28;
            lVar6 = **(longlong **)(lVar6 + 0x18);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + lVar8));
            *(undefined1 *)(*(longlong *)param_1[3] + local_148) = 1;
            lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + lVar6);
          }
          else {
            if (local_138 < 0.0) {
              dVar15 = sqrt(local_138);
            }
            else {
              dVar15 = SQRT(local_138);
            }
            lVar6 = param_1[6];
            lpCriticalSection =
                 (LPCRITICAL_SECTION)
                 ((longlong)
                  (int)((longlong)
                        ((iVar12 * *(int *)(*(longlong *)(lVar6 + 0x10) + 0x14) + iVar10) *
                         *(int *)(*(longlong *)(lVar6 + 0x10) + 0x10) + iVar14) /
                       *(longlong *)(lVar6 + 8)) * 0x28 + **(longlong **)(lVar6 + 0x18));
            EnterCriticalSection(lpCriticalSection);
            if (*(char *)(*(longlong *)param_1[3] + local_148) == '\0') {
              *(float *)(*(longlong *)param_1[1] + local_148 * 4) = (float)dVar15;
              *(int *)(*(longlong *)param_1[7] + local_148 * 4) = (int)local_158;
              *(undefined1 *)(*(longlong *)param_1[3] + local_148) = 1;
              if (dVar15 < *(double *)param_1[8]) {
                lVar6 = *(longlong *)((longlong *)param_1[9])[1];
                lVar8 = (longlong)(int)(local_148 / *(longlong *)param_1[9]) * 0x10;
                iVar14 = *(int *)(lVar6 + 8 + lVar8);
                *(uint *)(lVar6 + 8 + lVar8) = iVar14 + 1U;
                if (*(uint *)(lVar6 + 0xc + lVar8) < iVar14 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar6 + lVar8),iVar14);
                }
                *(int *)(*(longlong *)(lVar6 + lVar8) + (longlong)iVar14 * 4) = local_150;
              }
            }
          }
          if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          uVar7 = (ulonglong)local_14c;
        }
      }
    }
    lVar13 = lVar13 + 0xc;
  } while (lVar13 != 0x140);
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bcc2c FUN_1483bcc2c body=1316 status=ok
// SIG undefined FUN_1483bcc2c(void)

void FUN_1483bcc2c(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  bool bVar16;
  double dVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double *local_128;
  double *local_120;
  double *local_118;
  undefined4 local_110;
  int local_10c;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar24 = (uint)param_2;
  if (-1 < (int)uVar24) {
    plVar11 = (longlong *)*param_1;
    lVar20 = *plVar11;
    if ((int)uVar24 < *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144)) {
      uVar22 = param_2 >> 9 & 0x7fffff;
      uVar29 = (ulonglong)(uVar24 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar20 + 0x148) + uVar22 * 8) + uVar29 * 2
                             ) - 1U) < 0xfffe) {
        if ((uVar24 * -0x3d70a3d7 >> 2 | uVar24 * 0x40000000) < 0x28f5c29) {
          pcVar15 = (code *)plVar11[0xc];
          plVar23 = plVar11 + 0x10;
          if ((longlong *)plVar11[0xe] != (longlong *)0x0) {
            plVar23 = (longlong *)plVar11[0xe];
          }
          uVar21 = (**(code **)(*plVar23 + 8))();
          cVar18 = (*pcVar15)(uVar21);
          if (cVar18 != '\0') {
            *(undefined1 *)param_1[10] = 1;
          }
        }
        if (*(char *)param_1[10] == '\0') {
          lVar20 = *(longlong *)(*plVar11 + 0x10);
          lVar12 = *(longlong *)(*(longlong *)(*plVar11 + 0x130) + uVar22 * 8);
          uVar24 = *(uint *)(lVar12 + uVar29 * 0xc);
          uVar10 = *(uint *)(lVar12 + 4 + uVar29 * 0xc);
          lVar13 = *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 9) * 8);
          uVar22 = (ulonglong)uVar24 & 0x1ff;
          dVar2 = *(double *)(lVar13 + 8 + uVar22 * 0x18);
          dVar3 = *(double *)(lVar13 + 0x10 + uVar22 * 0x18);
          lVar14 = *(longlong *)(lVar20 + (ulonglong)(uVar10 >> 9) * 8);
          uVar28 = (ulonglong)uVar10 & 0x1ff;
          dVar4 = *(double *)(lVar14 + 8 + uVar28 * 0x18);
          dVar5 = *(double *)(lVar14 + 0x10 + uVar28 * 0x18);
          uVar24 = *(uint *)(lVar12 + 8 + uVar29 * 0xc);
          lVar20 = *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 9) * 8);
          uVar29 = (ulonglong)uVar24 & 0x1ff;
          dVar6 = *(double *)(lVar20 + 8 + uVar29 * 0x18);
          dVar35 = *(double *)(lVar20 + 0x10 + uVar29 * 0x18);
          local_110 = 0;
          if (*(int *)((longlong)plVar11 + 0x4c) == 1) {
            local_110 = (undefined4)
                        CONCAT71((int7)((ulonglong)plVar11 >> 8),
                                 0.0 < (dVar5 - dVar3) * (dVar6 - dVar2) -
                                       (dVar4 - dVar2) * (dVar35 - dVar3));
          }
          dVar7 = *(double *)param_1[9];
          dVar34 = *(double *)param_1[7];
          dVar17 = (dVar2 - dVar34) * dVar7;
          dVar2 = *(double *)param_1[8];
          dVar3 = (dVar3 - dVar2) * dVar7;
          dVar4 = (dVar4 - dVar34) * dVar7;
          dVar5 = (dVar5 - dVar2) * dVar7;
          dVar6 = (dVar6 - dVar34) * dVar7;
          iVar26 = *(int *)param_1[3] + -1;
          dVar34 = dVar17;
          if (dVar4 <= dVar17) {
            dVar34 = dVar4;
          }
          if (dVar6 <= dVar34) {
            dVar34 = dVar6;
          }
          iVar25 = -((int)ROUND(-0.5 - (dVar34 + dVar34)) >> 1);
          if (iVar26 <= iVar25) {
            iVar25 = iVar26;
          }
          local_10c = 0;
          if (0 < iVar25) {
            local_10c = iVar25;
          }
          dVar2 = (dVar35 - dVar2) * dVar7;
          dVar35 = dVar17;
          if (dVar17 <= dVar4) {
            dVar35 = dVar4;
          }
          if (dVar35 <= dVar6) {
            dVar35 = dVar6;
          }
          iVar31 = (int)ROUND(dVar35 + dVar35 + -0.5) >> 1;
          if (iVar26 <= iVar31) {
            iVar31 = iVar26;
          }
          iVar26 = *(int *)param_1[4] + -1;
          dVar35 = dVar3;
          if (dVar5 <= dVar3) {
            dVar35 = dVar5;
          }
          if (dVar2 <= dVar35) {
            dVar35 = dVar2;
          }
          iVar27 = -((int)ROUND(-0.5 - (dVar35 + dVar35)) >> 1);
          if (iVar26 <= iVar27) {
            iVar27 = iVar26;
          }
          dVar35 = dVar3;
          if (dVar3 <= dVar5) {
            dVar35 = dVar5;
          }
          if (dVar35 <= dVar2) {
            dVar35 = dVar2;
          }
          iVar32 = (int)ROUND(dVar35 + dVar35 + -0.5) >> 1;
          if (iVar26 <= iVar32) {
            iVar32 = iVar26;
          }
          iVar26 = 0;
          if (0 < iVar32) {
            iVar26 = iVar32;
          }
          if (iVar27 <= iVar26) {
            dVar35 = *(double *)(lVar13 + uVar22 * 0x18);
            dVar34 = *(double *)(lVar14 + uVar28 * 0x18);
            dVar8 = *(double *)(lVar20 + uVar29 * 0x18);
            dVar9 = *(double *)param_1[6];
            iVar26 = 0;
            if (0 < iVar31) {
              iVar26 = iVar31;
            }
            iVar30 = 0;
            if (0 < iVar27) {
              iVar30 = iVar27;
            }
            do {
              if (iVar25 <= iVar26) {
                iVar27 = local_10c;
                do {
                  local_118 = &local_108;
                  local_120 = &local_100;
                  local_148 = dVar4;
                  local_140 = dVar5;
                  local_138 = dVar6;
                  local_130 = dVar2;
                  local_128 = &local_f8;
                  cVar18 = FUN_1483bd152((double)iVar27,(double)iVar30,dVar17,dVar3);
                  if (cVar18 != '\0') {
                    dVar33 = local_108 * (dVar8 - dVar9) * dVar7 +
                             local_f8 * (dVar35 - dVar9) * dVar7 +
                             local_100 * (dVar34 - dVar9) * dVar7;
                    iVar19 = (int)ROUND(-0.5 - (dVar33 + dVar33)) >> 1;
                    if (iVar19 < 1) {
                      if (-iVar19 < *(int *)param_1[2]) {
                        plVar11 = (longlong *)param_1[5];
                        lVar20 = (longlong)
                                 ((*(int *)((longlong)plVar11 + 0x14) * iVar30 + iVar27) *
                                  (int)plVar11[2] - iVar19);
                        if ((char)local_110 == '\0') {
                          LOCK();
                          piVar1 = (int *)(*plVar11 + lVar20 * 4);
                          *piVar1 = *piVar1 + 1;
                          UNLOCK();
                        }
                        else {
                          LOCK();
                          piVar1 = (int *)(*plVar11 + lVar20 * 4);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                        }
                      }
                    }
                    else {
                      plVar11 = (longlong *)param_1[5];
                      lVar20 = (longlong)(*(int *)((longlong)plVar11 + 0x14) * iVar30 + iVar27) *
                               (longlong)(int)plVar11[2];
                      if ((char)local_110 == '\0') {
                        LOCK();
                        piVar1 = (int *)(*plVar11 + lVar20 * 4);
                        *piVar1 = *piVar1 + 1;
                        UNLOCK();
                      }
                      else {
                        LOCK();
                        piVar1 = (int *)(*plVar11 + lVar20 * 4);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                      }
                    }
                  }
                  bVar16 = iVar27 < iVar31;
                  iVar27 = iVar27 + 1;
                } while (bVar16);
              }
              bVar16 = iVar30 < iVar32;
              iVar30 = iVar30 + 1;
            } while (bVar16);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bd152 FUN_1483bd152 body=556 status=ok
// SIG undefined FUN_1483bd152(void)

undefined8
FUN_1483bd152(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,double *param_9,double *param_10,
             double *param_11)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  *param_11 = 0.0;
  *param_10 = 0.0;
  param_5 = param_5 - param_1;
  param_7 = param_7 - param_1;
  param_6 = param_6 - param_2;
  param_8 = param_8 - param_2;
  dVar3 = param_6 * param_7 - param_8 * param_5;
  *param_9 = dVar3;
  iVar1 = 1;
  if (dVar3 <= 0.0) {
    if (dVar3 < 0.0) {
LAB_1483bd29b:
      iVar1 = -1;
    }
    else if (param_8 <= param_6) {
      if (param_8 < param_6) goto LAB_1483bd29b;
      if ((param_5 <= param_7) && (iVar1 = -1, param_7 <= param_5)) {
        return 0;
      }
    }
  }
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  dVar3 = param_8 * param_3 - param_4 * param_7;
  *param_10 = dVar3;
  if (dVar3 <= 0.0) {
    iVar2 = -1;
    if (0.0 <= dVar3) {
      if (param_8 < param_4) goto LAB_1483bd219;
      if ((param_8 <= param_4) && (iVar2 = 1, param_7 <= param_3)) {
        iVar2 = -(uint)(param_7 < param_3);
      }
    }
  }
  else {
LAB_1483bd219:
    iVar2 = 1;
  }
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = param_4 * param_5 - param_6 * param_3;
  *param_11 = dVar3;
  if (dVar3 <= 0.0) {
    iVar2 = -1;
    if (dVar3 < 0.0) goto LAB_1483bd254;
    if (param_6 <= param_4) {
      if ((param_4 <= param_6) && (iVar2 = 1, param_3 <= param_5)) {
        iVar2 = -(uint)(param_3 < param_5);
      }
      goto LAB_1483bd254;
    }
  }
  iVar2 = 1;
LAB_1483bd254:
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = dVar3 + *param_10 + *param_9;
  *param_9 = *param_9 / dVar3;
  *param_10 = *param_10 / dVar3;
  *param_11 = *param_11 / dVar3;
  return 1;
}



// FUNCTION 1483bd37e FUN_1483bd37e body=1029 status=ok
// SIG undefined FUN_1483bd37e(void)

void FUN_1483bd37e(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,float param_5
                  ,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  int local_128;
  int local_120;
  int local_118;
  int local_110;
  int local_108;
  int local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  float *local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_ec = *(uint *)(param_2 + 0x10) - 2;
  if (0 < param_6) {
    local_ec = 1;
  }
  uVar11 = 0xffffffff;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (param_6 < 1) {
    uVar2 = uVar11;
  }
  local_c8 = (ulonglong)uVar2;
  local_f0 = *(uint *)(param_2 + 0x14) - 2;
  if (0 < param_7) {
    local_f0 = 1;
    uVar11 = *(uint *)(param_2 + 0x14);
  }
  local_d0 = (ulonglong)uVar11;
  local_f4 = *(int *)(param_2 + 0x18) + -2;
  if (0 < param_8) {
    local_f4 = 1;
  }
  local_d8 = -1;
  if (0 < param_8) {
    local_d8 = *(int *)(param_2 + 0x18);
  }
  local_e0 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  if (local_f4 != local_d8) {
    local_c0 = (longlong *)(param_1 + 0x80);
    local_b8 = (ulonglong)(uint)-param_6;
    do {
      pcVar1 = *(code **)(local_e0 + 0x60);
      plVar10 = *(longlong **)(local_e0 + 0x70);
      if (*(longlong **)(local_e0 + 0x70) == (longlong *)0x0) {
        plVar10 = local_c0;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar8 = (*pcVar1)(uVar9);
      if (cVar8 != '\0') break;
      if (local_f0 != (int)local_d0) {
        fVar14 = (float)local_f4;
        local_d4 = local_f4 - param_8;
        iVar12 = local_f0;
        do {
          if (local_ec != (int)local_c8) {
            local_e8 = iVar12 - param_7;
            iVar13 = local_ec;
            do {
              lVar6 = local_e0;
              iVar3 = local_f4;
              local_88 = (double)(local_a0[2] + fVar14 * param_5);
              local_90 = (double)(local_a0[1] + (float)iVar12 * param_5);
              local_98 = (double)((float)iVar13 * param_5 + *local_a0);
              local_110 = (int)local_b8 + iVar13;
              local_100 = local_f4;
              local_118 = local_f4;
              local_128 = iVar13;
              local_120 = iVar12;
              local_108 = iVar12;
              local_e4 = local_110;
              FUN_1483bd784(local_e0,param_2,param_3,&local_98);
              iVar4 = local_e8;
              local_100 = iVar3;
              local_108 = local_e8;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              local_110 = iVar13;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              iVar5 = local_e4;
              local_100 = iVar3;
              local_108 = iVar4;
              local_110 = local_e4;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              iVar7 = local_d4;
              local_100 = local_d4;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              local_110 = iVar13;
              local_108 = iVar12;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              local_100 = iVar7;
              local_110 = iVar5;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              local_108 = iVar12;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              iVar4 = local_e8;
              local_100 = iVar7;
              local_108 = local_e8;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              local_110 = iVar13;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              local_100 = iVar7;
              local_108 = iVar4;
              local_110 = local_e4;
              local_118 = iVar3;
              local_128 = iVar13;
              local_120 = iVar12;
              FUN_1483bd784(lVar6,param_2,param_3,&local_98);
              iVar13 = iVar13 + param_6;
            } while ((int)local_c8 != iVar13);
          }
          iVar12 = iVar12 + param_7;
        } while (iVar12 != (int)local_d0);
      }
      local_f4 = local_f4 + param_8;
    } while (local_f4 != local_d8);
  }
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bd784 FUN_1483bd784 body=449 status=ok
// SIG undefined FUN_1483bd784(void)

void FUN_1483bd784(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,int param_9,int param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(*param_3 +
                   (longlong)
                   ((*(int *)((longlong)param_3 + 0x14) * param_10 + param_9) * (int)param_3[2] +
                   param_8) * 4);
  if (-1 < (int)uVar3) {
    lVar8 = *(longlong *)(*param_1 + 0x10);
    lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
    uVar7 = (ulonglong)(uVar3 & 0x1ff);
    uVar3 = *(uint *)(lVar4 + uVar7 * 0xc);
    lVar5 = *(longlong *)(lVar8 + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)uVar3 & 0x1ff;
    local_58 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
    puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x18);
    local_68 = *puVar1;
    uStack_60 = puVar1[1];
    uVar3 = *(uint *)(lVar4 + 4 + uVar7 * 0xc);
    lVar5 = *(longlong *)(lVar8 + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)uVar3 & 0x1ff;
    local_78 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
    puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x18);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    uVar3 = *(uint *)(lVar4 + 8 + uVar7 * 0xc);
    lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar3 >> 9) * 8);
    uVar7 = (ulonglong)uVar3 & 0x1ff;
    local_98 = *(undefined8 *)(lVar8 + 0x10 + uVar7 * 0x18);
    puVar2 = (undefined4 *)(lVar8 + uVar7 * 0x18);
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    dVar6 = (double)FUN_1483bd946(param_4,&local_68,&local_88,&local_a8);
    lVar8 = (longlong)
            ((*(int *)((longlong)param_2 + 0x14) * param_7 + param_6) * (int)param_2[2] + param_5);
    if ((float)dVar6 < *(float *)(*param_2 + lVar8 * 4)) {
      *(float *)(*param_2 + lVar8 * 4) = (float)dVar6;
      *(undefined4 *)
       (*param_3 +
       (longlong)
       ((param_7 * *(int *)((longlong)param_3 + 0x14) + param_6) * (int)param_3[2] + param_5) * 4) =
           *(undefined4 *)
            (*param_3 +
            (longlong)
            ((param_10 * *(int *)((longlong)param_3 + 0x14) + param_9) * (int)param_3[2] + param_8)
            * 4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bd946 FUN_1483bd946 body=875 status=ok
// SIG undefined FUN_1483bd946(void)

double FUN_1483bd946(double *param_1,double *param_2,double *param_3,double *param_4)

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
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  dVar9 = param_4[2];
  dVar1 = param_2[2] - dVar9;
  dVar11 = *param_4;
  dVar12 = param_4[1];
  dVar5 = param_2[1] - dVar12;
  dVar16 = *param_2 - dVar11;
  dVar8 = param_3[1] - dVar12;
  dVar13 = *param_3 - dVar11;
  dVar2 = dVar1 * dVar1 + dVar16 * dVar16 + dVar5 * dVar5;
  dVar14 = param_1[1] - dVar12;
  dVar3 = *param_1 - dVar11;
  dVar6 = param_3[2] - dVar9;
  dVar15 = param_1[2] - dVar9;
  dVar7 = dVar6 * dVar6 + dVar13 * dVar13 + dVar8 * dVar8;
  dVar4 = dVar1 * dVar6 + dVar16 * dVar13 + dVar5 * dVar8;
  dVar1 = dVar1 * dVar15 + dVar16 * dVar3 + dVar5 * dVar14;
  dVar16 = dVar15 * dVar6 + dVar3 * dVar13 + dVar14 * dVar8;
  dVar14 = dVar2 * dVar7 - dVar4 * dVar4;
  if (dVar14 <= 1e-30) {
    dVar14 = 1e-30;
  }
  dVar3 = (dVar7 * dVar1 - dVar16 * dVar4) * (1.0 / dVar14);
  dVar1 = (dVar2 * dVar16 - dVar1 * dVar4) * (1.0 / dVar14);
  if (((0.0 <= dVar3) && (0.0 <= dVar1)) && (dVar14 = (1.0 - dVar3) - dVar1, 0.0 <= dVar14)) {
    dVar11 = (dVar11 * dVar14 + *param_3 * dVar1 + *param_2 * dVar3) - *param_1;
    dVar12 = (dVar12 * dVar14 + param_3[1] * dVar1 + param_2[1] * dVar3) - param_1[1];
    dVar9 = (dVar9 * dVar14 + param_3[2] * dVar1 + param_2[2] * dVar3) - param_1[2];
    return SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12);
  }
  if (dVar3 <= 0.0) {
    uVar10 = FUN_1483bdcb2(param_1,param_3,param_4);
    uVar17 = (undefined4)uVar10;
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (dVar1 <= 0.0) goto LAB_1483bdc7e;
  }
  else {
    uVar10 = FUN_1483bdcb2(param_1,param_2,param_4);
    uVar17 = (undefined4)uVar10;
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  param_4 = param_3;
LAB_1483bdc7e:
  dVar9 = (double)FUN_1483bdcb2(param_1,param_2,param_4);
  if ((double)CONCAT44(uVar18,uVar17) <= dVar9) {
    dVar9 = (double)CONCAT44(uVar18,uVar17);
  }
  return dVar9;
}



// FUNCTION 1483bdcb2 FUN_1483bdcb2 body=404 status=ok
// SIG undefined FUN_1483bdcb2(void)

double FUN_1483bdcb2(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_3[2];
  dVar3 = dVar4 - param_2[2];
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar1 = dVar6 - param_2[1];
  dVar2 = dVar5 - *param_2;
  dVar1 = ((dVar4 - param_1[2]) * dVar3 + (dVar5 - *param_1) * dVar2 + (dVar6 - param_1[1]) * dVar1)
          / (dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  dVar2 = 0.0;
  if ((0.0 <= dVar1) && (dVar2 = dVar1, 1.0 < dVar1)) {
    dVar2 = 1.0;
  }
  dVar1 = 1.0 - dVar2;
  dVar5 = (dVar5 * dVar1 + *param_2 * dVar2) - *param_1;
  dVar6 = (dVar6 * dVar1 + param_2[1] * dVar2) - param_1[1];
  dVar4 = (dVar4 * dVar1 + param_2[2] * dVar2) - param_1[2];
  return SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6);
}



// FUNCTION 1483bde4e FUN_1483bde4e body=238 status=ok
// SIG undefined FUN_1483bde4e(void)

void FUN_1483bde4e(longlong *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x60);
  plVar6 = (longlong *)(lVar1 + 0x80);
  if (*(longlong **)(lVar1 + 0x70) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x70);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    iVar4 = param_2 / *(int *)param_1[2];
    param_2 = param_2 % *(int *)param_1[2];
    iVar9 = *(int *)param_1[1];
    if (0 < iVar9) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_1[5];
        uVar8 = uVar8 + *(int *)(*plVar6 +
                                ((longlong)(*(int *)((longlong)plVar6 + 0x14) * iVar4 + param_2) *
                                 (longlong)(int)plVar6[2] + lVar7) * 4);
        if (((*(int *)(lVar1 + 0x4c) == 1) && (0 < (int)uVar8)) ||
           ((*(int *)(lVar1 + 0x4c) == 0 && ((uVar8 & 0x80000001) == 1)))) {
          plVar6 = (longlong *)param_1[4];
          lVar10 = (longlong)(*(int *)((longlong)plVar6 + 0x14) * iVar4 + param_2) *
                   (longlong)(int)plVar6[2] + lVar7;
          *(uint *)(*plVar6 + lVar10 * 4) = *(uint *)(*plVar6 + lVar10 * 4) ^ 0x80000000;
          iVar9 = *(int *)param_1[1];
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < iVar9);
    }
  }
  return;
}



// FUNCTION 1483bdf44 FUN_1483bdf44 body=914 status=ok
// SIG undefined FUN_1483bdf44(void)

void FUN_1483bdf44(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  
  uVar14 = (uint)param_2;
  if (-1 < (int)uVar14) {
    plVar3 = (longlong *)*param_1;
    lVar4 = *plVar3;
    if ((int)uVar14 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144)) {
      uVar17 = param_2 >> 9 & 0x7fffff;
      uVar29 = (ulonglong)(uVar14 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + uVar17 * 8) + uVar29 * 2)
                  - 1U) < 0xfffe) {
        if ((uVar14 * -0x3d70a3d7 >> 2 | uVar14 * 0x40000000) < 0x28f5c29) {
          pcVar5 = (code *)plVar3[0xc];
          plVar16 = plVar3 + 0x10;
          if ((longlong *)plVar3[0xe] != (longlong *)0x0) {
            plVar16 = (longlong *)plVar3[0xe];
          }
          uVar15 = (**(code **)(*plVar16 + 8))();
          uVar13 = (*pcVar5)(uVar15);
          *(undefined1 *)param_1[0xc] = uVar13;
        }
        if (*(char *)param_1[0xc] == '\0') {
          lVar4 = *(longlong *)(*plVar3 + 0x10);
          lVar6 = *(longlong *)(*(longlong *)(*plVar3 + 0x130) + uVar17 * 8);
          uVar14 = *(uint *)(lVar6 + uVar29 * 0xc);
          uVar2 = *(uint *)(lVar6 + 4 + uVar29 * 0xc);
          lVar7 = *(longlong *)(lVar4 + (ulonglong)(uVar14 >> 9) * 8);
          uVar22 = (ulonglong)uVar14 & 0x1ff;
          lVar8 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
          uVar25 = (ulonglong)uVar2 & 0x1ff;
          uVar14 = *(uint *)(lVar6 + 8 + uVar29 * 0xc);
          lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar14 >> 9) * 8);
          uVar17 = (ulonglong)uVar14 & 0x1ff;
          dVar33 = (double)param_1[8];
          dVar34 = (double)param_1[0xb];
          dVar36 = (*(double *)(lVar7 + uVar22 * 0x18) - dVar33) * dVar34;
          dVar37 = (double)param_1[9];
          dVar32 = (*(double *)(lVar7 + 8 + uVar22 * 0x18) - dVar37) * dVar34;
          dVar1 = (double)param_1[10];
          dVar30 = (*(double *)(lVar7 + 0x10 + uVar22 * 0x18) - dVar1) * dVar34;
          dVar10 = (*(double *)(lVar8 + uVar25 * 0x18) - dVar33) * dVar34;
          dVar35 = (*(double *)(lVar8 + 8 + uVar25 * 0x18) - dVar37) * dVar34;
          dVar31 = (*(double *)(lVar8 + 0x10 + uVar25 * 0x18) - dVar1) * dVar34;
          dVar11 = (*(double *)(lVar4 + uVar17 * 0x18) - dVar33) * dVar34;
          dVar33 = (*(double *)(lVar4 + 8 + uVar17 * 0x18) - dVar37) * dVar34;
          dVar34 = (*(double *)(lVar4 + 0x10 + uVar17 * 0x18) - dVar1) * dVar34;
          uVar14 = *(int *)((longlong)param_1 + 0x14) - 1;
          dVar37 = dVar36;
          if (dVar10 <= dVar36) {
            dVar37 = dVar10;
          }
          if (dVar11 <= dVar37) {
            dVar37 = dVar11;
          }
          iVar19 = (int)param_1[5];
          uVar2 = (int)dVar37 - iVar19;
          if ((int)uVar14 <= (int)dVar37 - iVar19) {
            uVar2 = uVar14;
          }
          uVar20 = 0;
          if (0 < (int)uVar2) {
            uVar20 = uVar2;
          }
          if (dVar36 <= dVar10) {
            dVar36 = dVar10;
          }
          if (dVar36 <= dVar11) {
            dVar36 = dVar11;
          }
          uVar23 = (int)dVar36 + iVar19 + 1;
          if ((int)uVar23 < (int)uVar14) {
            uVar14 = uVar23;
          }
          iVar18 = (int)param_1[3] + -1;
          dVar37 = dVar32;
          if (dVar35 <= dVar32) {
            dVar37 = dVar35;
          }
          if (dVar33 <= dVar37) {
            dVar37 = dVar33;
          }
          iVar24 = (int)dVar37 - iVar19;
          if (iVar18 <= (int)dVar37 - iVar19) {
            iVar24 = iVar18;
          }
          iVar26 = 0;
          if (0 < iVar24) {
            iVar26 = iVar24;
          }
          if (dVar32 <= dVar35) {
            dVar32 = dVar35;
          }
          if (dVar32 <= dVar33) {
            dVar32 = dVar33;
          }
          iVar27 = (int)dVar32 + iVar19 + 1;
          if (iVar27 < iVar18) {
            iVar18 = iVar27;
          }
          iVar27 = *(int *)((longlong)param_1 + 0x1c) + -1;
          dVar33 = dVar30;
          if (dVar31 <= dVar30) {
            dVar33 = dVar31;
          }
          if (dVar34 <= dVar33) {
            dVar33 = dVar34;
          }
          iVar28 = (int)dVar33 - iVar19;
          if (iVar27 <= (int)dVar33 - iVar19) {
            iVar28 = iVar27;
          }
          if (dVar30 <= dVar31) {
            dVar30 = dVar31;
          }
          if (dVar30 <= dVar34) {
            dVar30 = dVar34;
          }
          iVar19 = iVar19 + (int)dVar30 + 1;
          if (iVar19 < iVar27) {
            iVar27 = iVar19;
          }
          iVar19 = 0;
          if (0 < iVar27) {
            iVar19 = iVar27;
          }
          if (iVar28 <= iVar19) {
            iVar19 = 0;
            if (0 < iVar18) {
              iVar19 = iVar18;
            }
            uVar23 = 0;
            if (0 < (int)uVar14) {
              uVar23 = uVar14;
            }
            iVar21 = 0;
            if (0 < iVar28) {
              iVar21 = iVar28;
            }
            do {
              iVar28 = iVar26;
              if (iVar24 <= iVar19) {
                do {
                  uVar17 = (ulonglong)uVar20;
                  if ((int)uVar2 <= (int)uVar23) {
                    do {
                      plVar3 = (longlong *)param_1[4];
                      *(undefined4 *)
                       (*plVar3 +
                       ((longlong)(*(int *)((longlong)plVar3 + 0x14) * iVar21 + iVar28) *
                        (longlong)(int)plVar3[2] + uVar17) * 4) = 0x3f800000;
                      iVar12 = (int)uVar17;
                      uVar17 = uVar17 + 1;
                    } while (iVar12 < (int)uVar14);
                  }
                  bVar9 = iVar28 < iVar18;
                  iVar28 = iVar28 + 1;
                } while (bVar9);
              }
              bVar9 = iVar21 < iVar27;
              iVar21 = iVar21 + 1;
            } while (bVar9);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1483be2de FUN_1483be2de body=492 status=ok
// SIG undefined FUN_1483be2de(void)

void FUN_1483be2de(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined1 local_a8 [16];
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *param_1;
  plVar3 = (longlong *)param_1[4];
  iVar7 = *(int *)(lVar2 + 0xc0);
  iVar8 = param_2 % iVar7;
  iVar6 = param_2 / (*(int *)(lVar2 + 0xc4) * iVar7);
  iVar7 = (int)((longlong)
                ((ulonglong)(uint)((int)((longlong)param_2 / (longlong)iVar7) >> 0x1f) << 0x20 |
                (longlong)param_2 / (longlong)iVar7 & 0xffffffffU) %
               (longlong)*(int *)(lVar2 + 0xc4));
  fVar1 = *(float *)(*plVar3 +
                    (longlong)
                    ((*(int *)((longlong)plVar3 + 0x14) * iVar6 + iVar7) * (int)plVar3[2] + iVar8) *
                    4);
  if ((fVar1 == 1.0) && (!NAN(fVar1))) {
    fVar1 = *(float *)(param_1 + 2);
    pfVar4 = (float *)param_1[1];
    local_f0 = (double)((float)iVar6 * fVar1 + pfVar4[2]);
    local_f8 = (double)((float)iVar7 * fVar1 + pfVar4[1]);
    local_100 = (double)((float)iVar8 * fVar1 + *pfVar4);
    plVar3 = *(longlong **)(lVar2 + 8);
    local_e8 = 0;
    local_d8 = 0;
    FUN_146bee698(local_a8);
    iVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_100,&local_108,local_a8);
    if (local_98 != 0) {
      if (local_88 == (longlong *)0x0) {
        local_88 = local_78;
      }
      (**(code **)(*local_88 + 0x10))();
    }
    if (iVar5 == -1) {
      plVar3 = (longlong *)param_1[4];
      *(int *)(*plVar3 +
              (longlong)
              ((iVar6 * *(int *)((longlong)plVar3 + 0x14) + iVar7) * (int)plVar3[2] + iVar8) * 4) =
           (int)param_1[6];
    }
    else {
      if (local_108 < 0.0) {
        local_108 = sqrt(local_108);
      }
      else {
        local_108 = SQRT(local_108);
      }
      plVar3 = (longlong *)param_1[4];
      *(float *)(*plVar3 +
                (longlong)
                ((*(int *)((longlong)plVar3 + 0x14) * iVar6 + iVar7) * (int)plVar3[2] + iVar8) * 4)
           = (float)local_108;
      plVar3 = (longlong *)param_1[7];
      *(int *)(*plVar3 +
              (longlong)
              ((iVar6 * *(int *)((longlong)plVar3 + 0x14) + iVar7) * (int)plVar3[2] + iVar8) * 4) =
           iVar5;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483be4d4 FUN_1483be4d4 body=1401 status=ok
// SIG undefined FUN_1483be4d4(void)

void FUN_1483be4d4(longlong *param_1,uint param_2)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  float *pfVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 auStack_168 [36];
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  ulonglong local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (-1 < (int)param_2) {
    plVar4 = (longlong *)*param_1;
    lVar5 = *plVar4;
    if ((int)param_2 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144)) {
      uVar18 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar5 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                             uVar18 * 2) - 1U) < 0xfffe) {
        if ((param_2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
          pcVar6 = (code *)plVar4[0xc];
          plVar17 = plVar4 + 0x10;
          if ((longlong *)plVar4[0xe] != (longlong *)0x0) {
            plVar17 = (longlong *)plVar4[0xe];
          }
          uVar15 = (**(code **)(*plVar17 + 8))();
          uVar13 = (*pcVar6)(uVar15);
          *(undefined1 *)param_1[0xf] = uVar13;
        }
        if (*(char *)param_1[0xf] == '\0') {
          lVar5 = *(longlong *)(*plVar4 + 0x10);
          lVar19 = *(longlong *)(*(longlong *)(*plVar4 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
          uVar22 = *(uint *)(lVar19 + uVar18 * 0xc);
          lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar22 >> 9) * 8);
          uVar23 = (ulonglong)uVar22 & 0x1ff;
          local_b8 = *(double *)(lVar7 + 0x10 + uVar23 * 0x18);
          pdVar1 = (double *)(lVar7 + uVar23 * 0x18);
          local_c8 = *pdVar1;
          dStack_c0 = pdVar1[1];
          uVar22 = *(uint *)(lVar19 + 4 + uVar18 * 0xc);
          lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar22 >> 9) * 8);
          uVar23 = (ulonglong)uVar22 & 0x1ff;
          local_d8 = *(double *)(lVar7 + 0x10 + uVar23 * 0x18);
          pdVar1 = (double *)(lVar7 + uVar23 * 0x18);
          local_e8 = *pdVar1;
          dStack_e0 = pdVar1[1];
          uVar22 = *(uint *)(lVar19 + 8 + uVar18 * 0xc);
          lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar22 >> 9) * 8);
          uVar18 = (ulonglong)uVar22 & 0x1ff;
          local_f8 = *(double *)(lVar5 + 0x10 + uVar18 * 0x18);
          pdVar1 = (double *)(lVar5 + uVar18 * 0x18);
          local_108 = *pdVar1;
          dStack_100 = pdVar1[1];
          dVar26 = (double)param_1[8];
          dVar28 = (double)param_1[0xb];
          dVar30 = (local_c8 - dVar26) * dVar28;
          dVar31 = (double)param_1[9];
          dVar25 = (dStack_c0 - dVar31) * dVar28;
          dVar3 = (double)param_1[10];
          dVar10 = (local_b8 - dVar3) * dVar28;
          dVar11 = (local_e8 - dVar26) * dVar28;
          dVar29 = (dStack_e0 - dVar31) * dVar28;
          dVar27 = (local_d8 - dVar3) * dVar28;
          dVar12 = (local_108 - dVar26) * dVar28;
          dVar26 = (dStack_100 - dVar31) * dVar28;
          dVar28 = (local_f8 - dVar3) * dVar28;
          uVar22 = *(int *)((longlong)param_1 + 0x14) - 1;
          dVar31 = dVar30;
          if (dVar11 <= dVar30) {
            dVar31 = dVar11;
          }
          if (dVar12 <= dVar31) {
            dVar31 = dVar12;
          }
          iVar16 = (int)param_1[5];
          local_12c = (int)dVar31 - iVar16;
          if ((int)uVar22 <= (int)dVar31 - iVar16) {
            local_12c = uVar22;
          }
          uVar14 = 0;
          if (0 < (int)local_12c) {
            uVar14 = local_12c;
          }
          if (dVar30 <= dVar11) {
            dVar30 = dVar11;
          }
          if (dVar30 <= dVar12) {
            dVar30 = dVar12;
          }
          uVar20 = (int)dVar30 + iVar16 + 1;
          if ((int)uVar20 < (int)uVar22) {
            uVar22 = uVar20;
          }
          local_144 = (int)param_1[3] + -1;
          dVar31 = dVar25;
          if (dVar29 <= dVar25) {
            dVar31 = dVar29;
          }
          if (dVar26 <= dVar31) {
            dVar31 = dVar26;
          }
          local_134 = (int)dVar31 - iVar16;
          if (local_144 <= (int)dVar31 - iVar16) {
            local_134 = local_144;
          }
          local_140 = 0;
          if (0 < local_134) {
            local_140 = local_134;
          }
          if (dVar25 <= dVar29) {
            dVar25 = dVar29;
          }
          if (dVar25 <= dVar26) {
            dVar25 = dVar26;
          }
          iVar21 = (int)dVar25 + iVar16 + 1;
          if (iVar21 < local_144) {
            local_144 = iVar21;
          }
          local_138 = *(int *)((longlong)param_1 + 0x1c) + -1;
          dVar26 = dVar10;
          if (dVar27 <= dVar10) {
            dVar26 = dVar27;
          }
          if (dVar28 <= dVar26) {
            dVar26 = dVar28;
          }
          iVar21 = (int)dVar26 - iVar16;
          if (local_138 <= (int)dVar26 - iVar16) {
            iVar21 = local_138;
          }
          if (dVar10 <= dVar27) {
            dVar10 = dVar27;
          }
          if (dVar10 <= dVar28) {
            dVar10 = dVar28;
          }
          iVar16 = iVar16 + (int)dVar10 + 1;
          if (iVar16 < local_138) {
            local_138 = iVar16;
          }
          iVar16 = 0;
          if (0 < local_138) {
            iVar16 = local_138;
          }
          local_130 = param_2;
          if (iVar21 <= iVar16) {
            local_13c = 0;
            if (0 < local_144) {
              local_13c = local_144;
            }
            uVar20 = 0;
            if (0 < (int)uVar22) {
              uVar20 = uVar22;
            }
            iVar16 = 0;
            if (0 < iVar21) {
              iVar16 = iVar21;
            }
            local_128 = (ulonglong)uVar14;
            do {
              if (local_134 <= local_13c) {
                iVar21 = local_140;
                do {
                  iVar2 = *(int *)((longlong)param_1 + 100);
                  lVar5 = param_1[0xd];
                  if ((int)local_12c <= (int)uVar20) {
                    uVar18 = local_128;
                    do {
                      fVar32 = *(float *)(param_1 + 2);
                      pfVar8 = (float *)param_1[1];
                      local_110 = (double)((float)iVar16 * fVar32 + pfVar8[2]);
                      iVar24 = (int)uVar18;
                      local_118 = (double)((float)iVar21 * fVar32 + pfVar8[1]);
                      local_120 = (double)((float)iVar24 * fVar32 + *pfVar8);
                      dVar26 = (double)FUN_1483bd946(&local_120,&local_c8,&local_e8,&local_108);
                      fVar32 = (float)dVar26;
                      plVar4 = (longlong *)param_1[4];
                      if (fVar32 < *(float *)(*plVar4 +
                                             ((longlong)
                                              (*(int *)((longlong)plVar4 + 0x14) * iVar16 + iVar21)
                                              * (longlong)(int)plVar4[2] + uVar18) * 4)) {
                        lpCriticalSection =
                             (LPCRITICAL_SECTION)
                             ((ulonglong)
                              (((uint)(iVar2 <= iVar21) + (uint)((int)lVar5 <= iVar16) * 2 +
                               (uint)((int)param_1[0xc] <= iVar24) * 4) * 0x28) + param_1[0xe]);
                        EnterCriticalSection(lpCriticalSection);
                        plVar4 = (longlong *)param_1[4];
                        lVar19 = (longlong)(*(int *)((longlong)plVar4 + 0x14) * iVar16 + iVar21) *
                                 (longlong)(int)plVar4[2] + uVar18;
                        if (fVar32 < *(float *)(*plVar4 + lVar19 * 4)) {
                          *(float *)(*plVar4 + lVar19 * 4) = fVar32;
                          plVar4 = (longlong *)param_1[6];
                          *(uint *)(*plVar4 +
                                   ((longlong)(*(int *)((longlong)plVar4 + 0x14) * iVar16 + iVar21)
                                    * (longlong)(int)plVar4[2] + uVar18) * 4) = local_130;
                        }
                        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                          LeaveCriticalSection(lpCriticalSection);
                        }
                      }
                      uVar18 = uVar18 + 1;
                    } while (iVar24 < (int)uVar22);
                  }
                  bVar9 = iVar21 < local_144;
                  iVar21 = iVar21 + 1;
                } while (bVar9);
              }
              bVar9 = iVar16 < local_138;
              iVar16 = iVar16 + 1;
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bea4e FUN_1483bea4e body=147 status=ok
// SIG undefined FUN_1483bea4e(void)

void FUN_1483bea4e(longlong param_1,int param_2)

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



// FUNCTION 1483beae2 FUN_1483beae2 body=132 status=ok
// SIG undefined FUN_1483beae2(void)

void FUN_1483beae2(longlong param_1,int param_2)

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



// FUNCTION 1483beb67 FUN_1483beb67 body=41 status=ok
// SIG undefined FUN_1483beb67(void)

void FUN_1483beb67(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141082778(param_1);
    param_1 = param_1 + 0x220;
  }
  return;
}



// FUNCTION 1483beb90 FUN_1483beb90 body=146 status=ok
// SIG undefined FUN_1483beb90(void)

undefined8 * FUN_1483beb90(undefined8 *param_1,undefined8 *param_2)

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
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  _Src = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],_Src,(longlong)iVar1 << 2);
  }
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 1483bec22 FUN_1483bec22 body=111 status=ok
// SIG undefined FUN_1483bec22(void)

void FUN_1483bec22(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x220,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x220)) {
      uVar2 = uVar1 / 0x220 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x220,8);
  }
  return;
}



// FUNCTION 1483bec92 FUN_1483bec92 body=112 status=ok
// SIG undefined FUN_1483bec92(void)

void FUN_1483bec92(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x90,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 1483bed02 FUN_1483bed02 body=341 status=ok
// SIG undefined FUN_1483bed02(void)

void FUN_1483bed02(undefined1 (*param_1) [16],double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar8 = *(double *)*param_1 * param_2[8];
  dVar9 = *(double *)(*param_1 + 8) * param_2[9];
  dVar2 = *(double *)param_1[1] * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar1 = param_2[3];
  dVar10 = dVar9 * dVar5 - dVar8 * dVar6;
  dVar11 = dVar2 * dVar6 - dVar9 * dVar7;
  dVar12 = dVar8 * dVar7 - dVar5 * dVar2;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar4 = (dVar7 * dVar11 - dVar5 * dVar10) + param_2[3] * dVar12 + dVar9 + param_2[5];
  dVar9 = param_2[6];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar10 * dVar6 - dVar12 * dVar7) + dVar1 * dVar11 + dVar8 + param_2[4];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_1 = auVar3;
  *(double *)param_1[1] = dVar10 * dVar1 + dVar2 + (dVar12 * dVar5 - dVar11 * dVar6) + dVar9;
  local_70 = *(undefined4 *)param_2;
  uStack_6c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_68 = *(undefined4 *)(param_2 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = *(undefined4 *)(param_2 + 2);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_58 = *(undefined4 *)(param_2 + 3);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1482ff674();
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bee58 FUN_1483bee58 body=63 status=ok
// SIG undefined FUN_1483bee58(void)

void FUN_1483bee58(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1483aebc6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1483befdc(param_1);
    return;
  }
  FUN_1483bee98(param_1);
  FUN_1483aebc6(param_1);
  return;
}



// FUNCTION 1483bee98 FUN_1483bee98 body=322 status=ok
// SIG undefined FUN_1483bee98(void)

void FUN_1483bee98(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1483befdc FUN_1483befdc body=422 status=ok
// SIG undefined FUN_1483befdc(void)

void FUN_1483befdc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 1483bf184 FUN_1483bf184 body=473 status=ok
// SIG undefined FUN_1483bf184(void)

undefined8 * FUN_1483bf184(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_14ae74d90;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0x38);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_146de45bc(param_1 + 0x23,0,0);
  local_98[0] = 0;
  local_90 = 0xffffffffffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_146de45bc(local_98,0,0);
  local_e0[0] = 0;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  FUN_146de45bc(local_e0,0,0);
  FUN_1483bf417(param_2,param_1 + 0x17,local_98,local_e0);
  FUN_1483bf58e(param_1,param_2,local_98,local_e0);
  FUN_146de5508(local_e0);
  FUN_146de5508(local_98);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bf35e FUN_1483bf35e body=184 status=ok
// SIG undefined FUN_1483bf35e(void)

void FUN_1483bf35e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14839a04c(param_3,*(undefined4 *)(param_1 + 0xb0));
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar1 = 0;
    do {
      FUN_1483a40a6(param_2,&local_48,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar1 * 4));
      *(undefined8 *)(*param_3 + lVar1 * 8) = local_48;
      *(undefined8 *)(param_3[2] + lVar1 * 8) = local_40;
      *(undefined8 *)(param_3[4] + lVar1 * 8) = local_38;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xb0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bf417 FUN_1483bf417 body=373 status=ok
// SIG undefined FUN_1483bf417(void)

void FUN_1483bf417(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x38),param_1 + 8);
  FUN_1483bfbbe(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_1483bf7e9(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bf58e FUN_1483bf58e body=602 status=ok
// SIG undefined FUN_1483bf58e(void)

void FUN_1483bf58e(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined7 uStack_8f;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xac) - uVar1;
  local_a0 = (undefined1 *)0x0;
  local_98 = *(int *)(param_1 + 0xc0);
  lVar6 = (longlong)local_98;
  _Src = *(void **)(param_1 + 0xb8);
  if (lVar6 == 0) {
    local_94 = 0;
  }
  else {
    FUN_144a06ca8(&local_a0,local_98,0);
    memcpy(local_a0,_Src,lVar6 << 2);
  }
  FUN_14839a04c(param_1 + 0xe0,uVar1);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      FUN_1483a40a6(param_2,&local_90,
                    *(undefined4 *)(local_a0 + ((longlong)*(int *)(param_1 + 0xb0) + uVar7) * 4));
      *(ulonglong *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 8) = CONCAT71(uStack_8f,local_90);
      *(ulonglong *)(*(longlong *)(param_1 + 0xf0) + uVar7 * 8) = local_88;
      *(ulonglong *)(*(longlong *)(param_1 + 0x100) + uVar7 * 8) = local_80;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined1 *)FUN_14001cc68(0x48,0x10);
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  FUN_146de45bc(puVar4,uVar3,uVar2);
  local_90 = 0;
  local_a0 = puVar4;
  local_88 = param_3;
  local_80 = param_3;
  FUN_14839d134(puVar4,&local_90);
  local_70 = *(undefined8 *)(param_3 + 8);
  local_78 = *(undefined8 *)(param_3 + 0x10);
  local_90 = 0;
  local_88 = local_88 & 0xffffffffffffff00;
  local_68 = 0xbff0000000000000;
  local_60 = param_3;
  local_50 = param_4;
  FUN_1483afd38(param_1 + 0x118,&local_90);
  lVar5 = FUN_14001cc68(0xd8,0x10);
  FUN_1483996b6(lVar5,&local_a0,0);
  lVar6 = *(longlong *)(param_1 + 0x110);
  if ((lVar6 != lVar5) && (*(longlong *)(param_1 + 0x110) = lVar5, lVar6 != 0)) {
    FUN_1483c0eca(lVar6);
    FUN_1400020a8(lVar6);
  }
  puVar4 = local_a0;
  if (local_a0 != (undefined1 *)0x0) {
    FUN_146de5508(local_a0);
    FUN_1400020a8(puVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483bf7e9 FUN_1483bf7e9 body=980 status=ok
// SIG undefined FUN_1483bf7e9(void)

void FUN_1483bf7e9(code *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ulonglong local_1f0;
  code *local_1e8;
  code *local_1e0;
  code *local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  int local_1a0;
  int local_19c;
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined4 local_120;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar8 = (int)param_2[1] - (int)param_2[4];
  uVar2 = FUN_1483bfe78();
  local_148 = (undefined1 *)CONCAT44(local_148._4_4_,uVar2);
  pcVar7 = (code *)*param_3;
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar7)(uVar4,&local_148);
  if (0 < (int)uVar8) {
    local_1e8 = param_1 + 0x40;
    local_1d0 = (longlong *)(param_4 + 0x60);
    local_1f8 = param_3 + 0xc;
    local_1f0 = (ulonglong)uVar8;
    uVar6 = 0;
    local_1e0 = param_1;
    do {
      local_120 = *(undefined4 *)(*param_2 + uVar6 * 4);
      local_138 = 0;
      local_128 = &PTR_LAB_14ae753c0;
      local_148 = &LAB_1483b13ae;
      local_118 = local_1e0;
      FUN_146c41260(local_1e8,&local_d8,local_120,&local_148);
      FUN_146c41458(CONCAT44(uStack_d4,local_d8),&local_148,local_d0,local_c8);
      FUN_146c41662(CONCAT44(uStack_d4,local_d8),&local_1b8,local_d0,local_c8);
      dVar1 = 0.0;
      while ((((pcVar7 = local_118, uVar2 = (undefined4)uVar6,
               local_148 != (undefined1 *)CONCAT44(uStack_1b4,local_1b8) || (local_140 != local_1b0)
               ) || ((int)local_130 != local_1a0)) || (local_130._4_4_ != local_19c))) {
        local_1c0 = CONCAT44(local_1c0._4_4_,local_128._0_4_);
        plVar5 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar5 = local_f8;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        iVar3 = (*pcVar7)(uVar4,&local_1c0);
        local_1c4 = *(int *)(param_2[2] + (longlong)iVar3 * 4);
        dVar1 = dVar1 + 1.0;
        iVar3 = local_1c4 - uVar8;
        if (local_1c4 < (int)uVar8) {
          pcVar7 = (code *)param_3[8];
          plVar5 = (longlong *)param_3[10];
          if (plVar5 == (longlong *)0x0) {
            plVar5 = local_1f8;
          }
        }
        else {
          pcVar7 = *(code **)(param_4 + 0x40);
          plVar5 = *(longlong **)(param_4 + 0x50);
          local_1c4 = iVar3;
          if (*(longlong **)(param_4 + 0x50) == (longlong *)0x0) {
            plVar5 = local_1d0;
          }
        }
        local_1c0 = 0x3ff0000000000000;
        local_1c8 = uVar2;
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar7)(uVar4,&local_1c8,&local_1c4,&local_1c0);
        if ((int)local_138 == 0) {
          local_13c = 0xffffffff;
          local_130 = 0xffffffffffffffff;
        }
        else {
          FUN_146be9922(&local_148);
        }
      }
      if (local_188 != 0) {
        plVar5 = local_178;
        if (local_178 == (longlong *)0x0) {
          plVar5 = local_168;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_118 != (code *)0x0) {
        plVar5 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar5 = local_f8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_c8[0] != 0) {
        plVar5 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar5 = local_a8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_148 = (undefined1 *)((ulonglong)dVar1 ^ 0x8000000000000000);
      local_1d8 = (code *)param_3[8];
      plVar5 = (longlong *)param_3[10];
      if ((longlong *)param_3[10] == (longlong *)0x0) {
        plVar5 = local_1f8;
      }
      local_1b8 = uVar2;
      local_d8 = uVar2;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*local_1d8)(uVar4,&local_d8,&local_1b8,&local_148);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_1f0);
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bfbbe FUN_1483bfbbe body=486 status=ok
// SIG undefined FUN_1483bfbbe(void)

void FUN_1483bfbbe(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  void **ppvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = (int)param_1[1];
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_14481578e();
    lVar8 = param_1[1];
    if (0 < (longlong)(int)lVar8) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(*param_1 + lVar9 * 4);
        iVar6 = FUN_1483bfda6(param_2,uVar2);
        if ((iVar6 < 1) || (cVar5 = FUN_1483bfe12(param_2,uVar2), uVar4 = uStack_70, cVar5 != '\0'))
        {
          uVar4 = uStack_60;
          iVar6 = (uint)uStack_60;
          uVar1 = (uint)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
          ppvVar7 = &local_68;
          if (uStack_60._4_4_ < uVar1) {
            FUN_1446f48e2(&local_68,uVar4 & 0xffffffff);
          }
        }
        else {
          iVar6 = (int)uStack_70;
          uVar1 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
          ppvVar7 = (void **)&local_78;
          if (uStack_70._4_4_ < uVar1) {
            FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
          }
        }
        uVar4 = uStack_70;
        *(undefined4 *)((longlong)*ppvVar7 + (longlong)iVar6 * 4) = uVar2;
        lVar9 = lVar9 + 1;
      } while ((int)lVar8 != lVar9);
      lVar8 = (longlong)(int)(uint)uStack_60;
      *(uint *)(param_1 + 4) = (uint)uStack_60;
      if (lVar8 != 0) {
        iVar6 = (int)uStack_70;
        lVar9 = (longlong)(int)uStack_70;
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + (uint)uStack_60);
        if (uStack_70._4_4_ - iVar6 < (uint)uStack_60) {
          FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
        }
        memcpy((void *)(lVar9 * 4 + (longlong)local_78),local_68,lVar8 << 2);
      }
      goto LAB_1483bfcaa;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
LAB_1483bfcaa:
  lVar8 = param_1[3];
  if (0 < (longlong)(int)lVar8) {
    lVar9 = 0;
    do {
      *(undefined4 *)(param_1[2] + lVar9 * 4) = 0xffffffff;
      lVar9 = lVar9 + 1;
    } while ((int)lVar8 != lVar9);
  }
  if (0 < (longlong)(int)uStack_70) {
    lVar8 = 0;
    do {
      *(int *)(param_1[2] + (longlong)*(int *)((longlong)local_78 + lVar8 * 4) * 4) = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while ((int)uStack_70 != lVar8);
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = (int)uStack_70;
  uStack_4c = uStack_70._4_4_;
  pvVar3 = (void *)*param_1;
  lVar8 = param_1[1];
  *(undefined4 *)param_1 = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 4) = local_78._4_4_;
  *(int *)(param_1 + 1) = (int)uStack_70;
  *(uint *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  local_78 = pvVar3;
  uStack_70 = lVar8;
  if (pvVar3 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483bfda6 FUN_1483bfda6 body=108 status=ok
// SIG undefined FUN_1483bfda6(void)

undefined4 FUN_1483bfda6(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      uVar2 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)(uVar1 & 0x1ff) * 4);
    }
  }
  return uVar2;
}



// FUNCTION 1483bfe12 FUN_1483bfe12 body=102 status=ok
// SIG undefined FUN_1483bfe12(void)

undefined4 FUN_1483bfe12(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (uVar1 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 4), uVar1 != 0xffffffff)) {
      return CONCAT31((int3)((uVar1 & 0x1ff) >> 8),
                      *(int *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                              (ulonglong)(uVar1 & 0x1ff) * 4) == 1);
    }
  }
  return 0;
}



// FUNCTION 1483bfe78 FUN_1483bfe78 body=172 status=ok
// SIG undefined FUN_1483bfe78(void)

int FUN_1483bfe78(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)(int)param_2[1];
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a127d2(local_38,(int)param_2[1],1);
  if (lVar2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_1483bfda6(param_1,*(undefined4 *)(*param_2 + lVar4 * 4));
      *(undefined4 *)(local_38[0] + lVar4 * 4) = uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar4 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + *(int *)(local_38[0] + lVar4 * 4) + 1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1483bff26 FUN_1483bff26 body=284 status=ok
// SIG undefined FUN_1483bff26(void)

longlong FUN_1483bff26(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146de45bc(local_80,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8),
                *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 8));
  local_38 = *(undefined4 *)(param_2 + 8);
  uStack_34 = *(undefined4 *)(param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 0x10);
  uStack_2c = *(undefined4 *)(param_2 + 0x14);
  FUN_1483c0150(&local_38,*(undefined8 *)(param_2 + 0x18),local_80);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_68;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_78;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_60;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_58;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_50;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_48;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_40;
  local_78 = uVar3;
  uStack_70 = uVar2;
  local_68 = uVar1;
  uStack_60 = uVar4;
  local_58 = uVar5;
  uStack_50 = uVar6;
  local_48 = uVar7;
  uStack_40 = uVar8;
  FUN_146de5508(local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c0044 FUN_1483c0044 body=267 status=ok
// SIG undefined FUN_1483c0044(void)

longlong FUN_1483c0044(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_146de45bc(local_68,*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8),
                *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  FUN_1483c022e(local_68,param_2 + 8,*(undefined8 *)(param_2 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_38;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_30;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_28;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = uVar1;
  uStack_48 = uVar4;
  local_40 = uVar5;
  uStack_38 = uVar6;
  local_30 = uVar7;
  uStack_28 = uVar8;
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c0150 FUN_1483c0150 body=221 status=ok
// SIG undefined FUN_1483c0150(void)

void FUN_1483c0150(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146de620e(local_88);
  local_d0[0] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_146dd941a(local_d0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                *(undefined8 *)(param_2 + 8));
  FUN_143b23b0e(local_88,param_1,local_d0);
  FUN_146de570e(param_3,local_d0);
  FUN_146de3a5a(local_d0);
  FUN_146de3a5a(local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c022e FUN_1483c022e body=115 status=ok
// SIG undefined FUN_1483c022e(void)

void FUN_1483c022e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1483c03be(local_68);
  FUN_1483c02a2(local_68,param_3,param_1);
  FUN_1483c037c(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c02a2 FUN_1483c02a2 body=217 status=ok
// SIG undefined FUN_1483c02a2(void)

void FUN_1483c02a2(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146de620e(local_88);
  local_d0[0] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_146dd941a(local_d0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  FUN_143b23fb2(local_88,param_1,local_d0);
  FUN_146de570e(param_3,local_d0);
  FUN_146de3a5a(local_d0);
  FUN_146de3a5a(local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c037c FUN_1483c037c body=66 status=ok
// SIG undefined FUN_1483c037c(void)

void FUN_1483c037c(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483c03be FUN_1483c03be body=1211 status=ok
// SIG undefined FUN_1483c03be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483c03be(longlong param_1,char *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = *(double *)(param_2 + 0x20);
  lVar11 = *(longlong *)(param_2 + 0x30);
  lVar8 = *(longlong *)(lVar11 + 8);
  local_e8 = param_1;
  if (*param_2 == '\x01') {
    FUN_1483c087a(param_1,lVar8,*(undefined8 *)(lVar11 + 0x10));
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 8 + 8);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(local_e8 + 8) << 3);
      param_1 = local_e8;
    }
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
    lVar12 = lVar14;
    if (lVar14 < lVar13) {
      lVar12 = lVar13;
    }
    lVar9 = lVar13 * lVar14;
    if (lVar12 * 2 < lVar13 * lVar14) {
      lVar9 = lVar12 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar9 + *(longlong *)(param_1 + 0x38)) {
      FUN_1483b0638(param_1 + 0x28);
      param_1 = local_e8;
    }
    if (0 < lVar8) {
      local_d0 = param_1 + 0x28;
      lVar13 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar13 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8);
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + lVar13 * 4);
        if (*(longlong *)(lVar11 + 0x20) == 0) {
          lVar12 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 4 + lVar13 * 4);
        }
        else {
          lVar12 = *(int *)(*(longlong *)(lVar11 + 0x20) + lVar13 * 4) + lVar14;
        }
        if (lVar14 < lVar12) {
          local_d8 = *(longlong *)(lVar11 + 0x28);
          local_e0 = *(longlong *)(lVar11 + 0x30);
          do {
            dVar2 = *(double *)(local_d8 + lVar14 * 8);
            iVar3 = *(int *)(local_e0 + lVar14 * 4);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar13 * 8);
            *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar13 * 8) = lVar9 + 1;
            lVar4 = *(longlong *)(param_1 + 0x38);
            FUN_1483b06fe(local_d0,lVar4 + 1,0x3ff0000000000000);
            *(undefined8 *)(*(longlong *)(local_e8 + 0x28) + lVar4 * 8) = 0;
            *(longlong *)(*(longlong *)(local_e8 + 0x30) + lVar4 * 8) = (longlong)iVar3;
            *(double *)(*(longlong *)(local_e8 + 0x28) + lVar9 * 8) = dVar2 * dVar1;
            lVar14 = lVar14 + 1;
            param_1 = local_e8;
          } while (lVar12 != lVar14);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar8);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar11 = *(longlong *)(param_1 + 8), -1 < lVar11))
    {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      lVar8 = lVar11;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) != 0) goto LAB_1483c0706;
        bVar6 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar6);
      lVar8 = -1;
LAB_1483c0706:
      if (lVar8 < lVar11) {
        do {
          *(undefined8 *)(*(longlong *)(local_e8 + 0x18) + 8 + lVar8 * 8) = uVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(longlong *)(local_e8 + 8));
      }
    }
  }
  else {
    local_c8[0] = 0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    FUN_1483c087a(local_c8,lVar8,*(undefined8 *)(lVar11 + 0x10));
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
    lVar12 = lVar14;
    if (lVar14 < lVar13) {
      lVar12 = lVar13;
    }
    lVar9 = lVar13 * lVar14;
    if (lVar12 * 2 < lVar13 * lVar14) {
      lVar9 = lVar12 * 2;
    }
    if ((longlong)local_90._8_8_ < lVar9 + local_90._0_8_) {
      FUN_1483b0638(local_a0);
    }
    if (0 < lVar8) {
      lVar13 = 0;
      local_e0 = lVar8;
      do {
        *(undefined8 *)(local_b0._0_8_ + 8 + lVar13 * 8) =
             *(undefined8 *)(local_b0._0_8_ + lVar13 * 8);
        lVar8 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + lVar13 * 4);
        if (*(longlong *)(lVar11 + 0x20) == 0) {
          lVar14 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 4 + lVar13 * 4);
        }
        else {
          lVar14 = *(int *)(*(longlong *)(lVar11 + 0x20) + lVar13 * 4) + lVar8;
        }
        if (lVar8 < lVar14) {
          local_d8 = *(longlong *)(lVar11 + 0x28);
          lVar12 = *(longlong *)(lVar11 + 0x30);
          do {
            dVar2 = *(double *)(local_d8 + lVar8 * 8);
            iVar3 = *(int *)(lVar12 + lVar8 * 4);
            lVar9 = *(longlong *)(local_b0._0_8_ + 8 + lVar13 * 8);
            *(longlong *)(local_b0._0_8_ + 8 + lVar13 * 8) = lVar9 + 1;
            uVar5 = local_90._0_8_;
            FUN_1483b06fe(local_a0,local_90._0_8_ + 1,0x3ff0000000000000);
            *(undefined8 *)(local_a0._0_8_ + uVar5 * 8) = 0;
            *(longlong *)(local_a0._8_8_ + uVar5 * 8) = (longlong)iVar3;
            *(double *)(local_a0._0_8_ + lVar9 * 8) = dVar2 * dVar1;
            lVar8 = lVar8 + 1;
          } while (lVar14 != lVar8);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != local_e0);
    }
    auVar7 = _DAT_149931e80;
    if ((local_b0._8_8_ == 0) && (-1 < (longlong)local_c0._0_8_)) {
      lVar11 = local_c0._0_8_;
      do {
        if (*(longlong *)(local_b0._0_8_ + lVar11 * 8) != 0) goto LAB_1483c076c;
        bVar6 = 0 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar6);
      lVar11 = -1;
LAB_1483c076c:
      lVar8 = local_c0._0_8_ - lVar11;
      if (lVar8 != 0 && lVar11 <= (longlong)local_c0._0_8_) {
        lVar13 = lVar8 + -1;
        auVar15._8_4_ = (int)lVar13;
        auVar15._0_8_ = lVar13;
        auVar15._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
        lVar11 = local_b0._0_8_ + lVar11 * 8;
        uVar10 = 0;
        auVar16 = pmovsxbq(in_XMM1,0x100);
        auVar15 = auVar15 ^ _DAT_149931e80;
        do {
          if ((bool)(~(auVar15._0_8_ < (longlong)(uVar10 ^ auVar7._0_8_)) & 1)) {
            *(undefined8 *)(lVar11 + 8 + uVar10 * 8) = local_90._0_8_;
          }
          auVar17._8_4_ = (int)uVar10;
          auVar17._0_8_ = uVar10;
          auVar17._12_4_ = (int)(uVar10 >> 0x20);
          if ((longlong)((auVar17._8_8_ | auVar16._8_8_) ^ auVar7._8_8_) <= auVar15._8_8_) {
            *(undefined8 *)(lVar11 + 0x10 + uVar10 * 8) = local_90._0_8_;
          }
          uVar10 = uVar10 + 2;
        } while ((lVar8 + 1U & 0xfffffffffffffffe) != uVar10);
      }
    }
    local_c8[0] = 1;
    FUN_1483c0922(local_e8,local_c8);
    FUN_1483c037c(local_c8);
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c087a FUN_1483c087a body=168 status=ok
// SIG undefined FUN_1483c087a(void)

void FUN_1483c087a(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_2 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_2 * 8 + 8 +
                          (ulonglong)((param_2 & 0x1fffffffffffffff) == 0x1fffffffffffffff));
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    *(ulonglong *)(param_1 + 8) = param_2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_2 = *(ulonglong *)(param_1 + 8);
  }
  memset(*(void **)(param_1 + 0x18),0,param_2 * 8 + 8);
  return;
}



// FUNCTION 1483c0922 FUN_1483c0922 body=154 status=ok
// SIG undefined FUN_1483c0922(void)

char * FUN_1483c0922(char *param_1,char *param_2)

{
  size_t _Size;
  
  if (*param_2 == '\x01') {
    FUN_1483c09bc(param_1,param_2);
  }
  else if (param_1 != param_2) {
    FUN_1483c087a(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(longlong *)(param_2 + 0x20) == 0) {
      _Size = *(longlong *)(param_1 + 8) * 8 + 8;
      if (_Size != 0) {
        memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size);
      }
      FUN_1483b07d4(param_1 + 0x28,param_2 + 0x28);
    }
    else {
      FUN_1483c0a3d(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 1483c09bc FUN_1483c09bc body=129 status=ok
// SIG undefined FUN_1483c09bc(void)

void FUN_1483c09bc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  return;
}



// FUNCTION 1483c0a3d FUN_1483c0a3d body=1163 status=ok
// SIG undefined FUN_1483c0a3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483c0a3d(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar10 = *(longlong *)(param_2 + 8);
  local_d8 = param_1;
  if (*param_2 == '\x01') {
    FUN_1483c087a(param_1,lVar10,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 8 + 8);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(local_d8 + 8) << 3);
      param_1 = local_d8;
    }
    lVar12 = *(longlong *)(param_2 + 8);
    lVar9 = *(longlong *)(param_2 + 0x10);
    lVar11 = lVar9;
    if (lVar9 < lVar12) {
      lVar11 = lVar12;
    }
    lVar7 = lVar12 * lVar9;
    if (lVar11 * 2 < lVar12 * lVar9) {
      lVar7 = lVar11 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar7 + *(longlong *)(param_1 + 0x38)) {
      FUN_1483b0638(param_1 + 0x28);
      param_1 = local_d8;
    }
    if (0 < lVar10) {
      local_c0 = param_1 + 0x28;
      lVar12 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8);
        lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar12 * 8);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar12 * 8);
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar12 * 8) + lVar9;
        }
        if (lVar9 < lVar11) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          local_d0 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar9 * 8);
            uVar2 = *(undefined8 *)(local_d0 + lVar9 * 8);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12 * 8);
            *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12 * 8) = lVar7 + 1;
            lVar3 = *(longlong *)(param_1 + 0x38);
            FUN_1483b06fe(local_c0,lVar3 + 1,0x3ff0000000000000);
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar3 * 8) = 0;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x30) + lVar3 * 8) = uVar2;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar7 * 8) = uVar1;
            lVar9 = lVar9 + 1;
            param_1 = local_d8;
          } while (lVar11 != lVar9);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar10);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar10 = *(longlong *)(param_1 + 8), -1 < lVar10))
    {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      lVar12 = lVar10;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) != 0) goto LAB_1483c0d5e;
        bVar4 = 0 < lVar12;
        lVar12 = lVar12 + -1;
      } while (bVar4);
      lVar12 = -1;
LAB_1483c0d5e:
      if (lVar12 < lVar10) {
        do {
          *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 8 + lVar12 * 8) = uVar1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(longlong *)(local_d8 + 8));
      }
    }
  }
  else {
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    FUN_1483c087a(local_b8,lVar10,*(undefined8 *)(param_2 + 0x10));
    lVar12 = *(longlong *)(param_2 + 8);
    lVar9 = *(longlong *)(param_2 + 0x10);
    lVar11 = lVar9;
    if (lVar9 < lVar12) {
      lVar11 = lVar12;
    }
    lVar7 = lVar12 * lVar9;
    if (lVar11 * 2 < lVar12 * lVar9) {
      lVar7 = lVar11 * 2;
    }
    if ((longlong)local_80._8_8_ < lVar7 + local_80._0_8_) {
      FUN_1483b0638(local_90);
    }
    if (0 < lVar10) {
      lVar12 = 0;
      local_d0 = lVar10;
      do {
        *(undefined8 *)(local_a0._0_8_ + 8 + lVar12 * 8) =
             *(undefined8 *)(local_a0._0_8_ + lVar12 * 8);
        lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar12 * 8);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar12 * 8);
        }
        else {
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar12 * 8) + lVar10;
        }
        if (lVar10 < lVar9) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          lVar11 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar10 * 8);
            uVar2 = *(undefined8 *)(lVar11 + lVar10 * 8);
            lVar7 = *(longlong *)(local_a0._0_8_ + 8 + lVar12 * 8);
            *(longlong *)(local_a0._0_8_ + 8 + lVar12 * 8) = lVar7 + 1;
            uVar6 = local_80._0_8_;
            FUN_1483b06fe(local_90,local_80._0_8_ + 1,0x3ff0000000000000);
            *(undefined8 *)(local_90._0_8_ + uVar6 * 8) = 0;
            *(undefined8 *)(local_90._8_8_ + uVar6 * 8) = uVar2;
            *(undefined8 *)(local_90._0_8_ + lVar7 * 8) = uVar1;
            lVar10 = lVar10 + 1;
          } while (lVar9 != lVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != local_d0);
    }
    auVar5 = _DAT_149931e80;
    if ((local_a0._8_8_ == 0) && (-1 < (longlong)local_b0._0_8_)) {
      lVar10 = local_b0._0_8_;
      do {
        if (*(longlong *)(local_a0._0_8_ + lVar10 * 8) != 0) goto LAB_1483c0dc4;
        bVar4 = 0 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar4);
      lVar10 = -1;
LAB_1483c0dc4:
      lVar12 = local_b0._0_8_ - lVar10;
      if (lVar12 != 0 && lVar10 <= (longlong)local_b0._0_8_) {
        lVar9 = lVar12 + -1;
        auVar13._8_4_ = (int)lVar9;
        auVar13._0_8_ = lVar9;
        auVar13._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
        lVar10 = local_a0._0_8_ + lVar10 * 8;
        uVar8 = 0;
        auVar14 = pmovsxbq(in_XMM1,0x100);
        auVar13 = auVar13 ^ _DAT_149931e80;
        do {
          if ((bool)(~(auVar13._0_8_ < (longlong)(uVar8 ^ auVar5._0_8_)) & 1)) {
            *(undefined8 *)(lVar10 + 8 + uVar8 * 8) = local_80._0_8_;
          }
          auVar15._8_4_ = (int)uVar8;
          auVar15._0_8_ = uVar8;
          auVar15._12_4_ = (int)(uVar8 >> 0x20);
          if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar5._8_8_) <= auVar13._8_8_) {
            *(undefined8 *)(lVar10 + 0x10 + uVar8 * 8) = local_80._0_8_;
          }
          uVar8 = uVar8 + 2;
        } while ((lVar12 + 1U & 0xfffffffffffffffe) != uVar8);
      }
    }
    local_b8[0] = 1;
    FUN_1483c0922(local_d8,local_b8);
    FUN_1483c037c(local_b8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c0eca FUN_1483c0eca body=91 status=ok
// SIG undefined FUN_1483c0eca(void)

void FUN_1483c0eca(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146de5508(param_1 + 0x80);
  FUN_146de5508(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    FUN_146de5508(lVar2);
    FUN_1400020a8(lVar2);
  }
  FUN_148398478(param_1);
  return;
}



// FUNCTION 1483c0f26 FUN_1483c0f26 body=303 status=ok
// SIG undefined FUN_1483c0f26(void)

undefined4 * FUN_1483c0f26(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483c1056(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar15 = *(uint *)*param_3;
  *local_40 = uVar15;
  uVar14 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  uVar8 = puVar1[8];
  uVar9 = puVar1[9];
  uVar10 = puVar1[10];
  uVar11 = puVar1[0xb];
  local_40[2] = *puVar1;
  local_40[3] = uVar14;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  local_40[10] = uVar8;
  local_40[0xb] = uVar9;
  local_40[0xc] = uVar10;
  local_40[0xd] = uVar11;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  cVar13 = FUN_1483c113c(param_1,uVar15,local_40,&local_4c);
  uVar12 = local_4c;
  if (cVar13 == '\0') {
    uVar14 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar14) {
      uVar16 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar18 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar17 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      local_40[0xf] = uVar15;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4)
      ;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar17;
      FUN_1483befdc(param_1);
    }
  }
  *param_2 = uVar12;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c1056 FUN_1483c1056 body=229 status=ok
// SIG undefined FUN_1483c1056(void)

int * FUN_1483c1056(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1483c113c FUN_1483c113c body=157 status=ok
// SIG undefined FUN_1483c113c(void)

undefined8 FUN_1483c113c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1483c11da(iVar2,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483c11da FUN_1483c11da body=114 status=ok
// SIG undefined FUN_1483c11da(void)

void FUN_1483c11da(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1483c124c FUN_1483c124c body=304 status=ok
// SIG undefined FUN_1483c124c(void)

undefined4 * FUN_1483c124c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e37104(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_146e371ea(param_1,uVar4,local_40);
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
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146e37308(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c137e FUN_1483c137e body=486 status=ok
// SIG undefined FUN_1483c137e(void)

void FUN_1483c137e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  void **ppvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = (int)param_1[1];
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_14481578e();
    lVar8 = param_1[1];
    if (0 < (longlong)(int)lVar8) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(*param_1 + lVar9 * 4);
        iVar6 = FUN_146be99b0(param_2,uVar2);
        if ((iVar6 < 1) || (cVar5 = FUN_146c0b51e(param_2,uVar2), uVar4 = uStack_70, cVar5 != '\0'))
        {
          uVar4 = uStack_60;
          iVar6 = (uint)uStack_60;
          uVar1 = (uint)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
          ppvVar7 = &local_68;
          if (uStack_60._4_4_ < uVar1) {
            FUN_1446f48e2(&local_68,uVar4 & 0xffffffff);
          }
        }
        else {
          iVar6 = (int)uStack_70;
          uVar1 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
          ppvVar7 = (void **)&local_78;
          if (uStack_70._4_4_ < uVar1) {
            FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
          }
        }
        uVar4 = uStack_70;
        *(undefined4 *)((longlong)*ppvVar7 + (longlong)iVar6 * 4) = uVar2;
        lVar9 = lVar9 + 1;
      } while ((int)lVar8 != lVar9);
      lVar8 = (longlong)(int)(uint)uStack_60;
      *(uint *)(param_1 + 4) = (uint)uStack_60;
      if (lVar8 != 0) {
        iVar6 = (int)uStack_70;
        lVar9 = (longlong)(int)uStack_70;
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + (uint)uStack_60);
        if (uStack_70._4_4_ - iVar6 < (uint)uStack_60) {
          FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
        }
        memcpy((void *)(lVar9 * 4 + (longlong)local_78),local_68,lVar8 << 2);
      }
      goto LAB_1483c146a;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
LAB_1483c146a:
  lVar8 = param_1[3];
  if (0 < (longlong)(int)lVar8) {
    lVar9 = 0;
    do {
      *(undefined4 *)(param_1[2] + lVar9 * 4) = 0xffffffff;
      lVar9 = lVar9 + 1;
    } while ((int)lVar8 != lVar9);
  }
  if (0 < (longlong)(int)uStack_70) {
    lVar8 = 0;
    do {
      *(int *)(param_1[2] + (longlong)*(int *)((longlong)local_78 + lVar8 * 4) * 4) = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while ((int)uStack_70 != lVar8);
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  iStack_50 = (int)uStack_70;
  uStack_4c = uStack_70._4_4_;
  pvVar3 = (void *)*param_1;
  lVar8 = param_1[1];
  *(undefined4 *)param_1 = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 4) = local_78._4_4_;
  *(int *)(param_1 + 1) = (int)uStack_70;
  *(uint *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  local_78 = pvVar3;
  uStack_70 = lVar8;
  if (pvVar3 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c1566 FUN_1483c1566 body=221 status=ok
// SIG undefined FUN_1483c1566(void)

void FUN_1483c1566(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146de620e(local_88);
  local_d0[0] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_146dd941a(local_d0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                *(undefined8 *)(param_2 + 8));
  FUN_143b2447c(local_88,param_1,local_d0);
  FUN_146de570e(param_3,local_d0);
  FUN_146de3a5a(local_d0);
  FUN_146de3a5a(local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c1644 FUN_1483c1644 body=303 status=ok
// SIG undefined FUN_1483c1644(void)

undefined4 * FUN_1483c1644(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483c1056(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar15 = *(uint *)*param_3;
  *local_40 = uVar15;
  uVar14 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  uVar8 = puVar1[8];
  uVar9 = puVar1[9];
  uVar10 = puVar1[10];
  uVar11 = puVar1[0xb];
  local_40[2] = *puVar1;
  local_40[3] = uVar14;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  local_40[10] = uVar8;
  local_40[0xb] = uVar9;
  local_40[0xc] = uVar10;
  local_40[0xd] = uVar11;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  cVar13 = FUN_1483c113c(param_1,uVar15,local_40,&local_4c);
  uVar12 = local_4c;
  if (cVar13 == '\0') {
    uVar14 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar17 = 1;
    if (3 < uVar14) {
      uVar16 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar18 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar17 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      local_40[0xf] = uVar15;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4)
      ;
      lVar18 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar18 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar18 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar17;
      FUN_1483befdc(param_1);
    }
  }
  *param_2 = uVar12;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c1774 FUN_1483c1774 body=146 status=ok
// SIG undefined FUN_1483c1774(void)

void FUN_1483c1774(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1483c1808(&local_78);
  local_58 = &local_40;
  local_40 = local_78;
  local_38[0] = *param_1;
  local_60 = local_38;
  local_28 = param_1[1];
  local_50 = param_3;
  local_48 = param_1;
  FUN_1483af45e();
  FUN_1400020a8(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c1808 FUN_1483c1808 body=186 status=ok
// SIG undefined FUN_1483c1808(void)

void FUN_1483c1808(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong lStack_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_2;
  lStack_50 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(param_1 + 8) != lStack_50) {
    FUN_146de3c6e(param_1,lStack_50,1);
    lVar1 = *param_2;
    lStack_50 = *(longlong *)(param_1 + 8);
  }
  local_40 = 0;
  FUN_146de41cc(param_1,&local_58,&local_60);
  local_60 = 0x3ff0000000000000;
  local_48 = param_2[3];
  local_58 = (undefined4)param_2[1];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  lStack_50 = param_2[2];
  FUN_1483c18c4(lVar1,&local_58,param_1,&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c18c4 FUN_1483c18c4 body=131 status=ok
// SIG undefined FUN_1483c18c4(void)

void FUN_1483c18c4(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < lVar7) {
    lVar4 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4) + lVar8;
      }
      if (lVar8 < lVar6) {
        dVar1 = *param_4;
        dVar2 = *(double *)(*param_2 + lVar4 * 8);
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar3 = *(longlong *)(param_1 + 0x30);
        do {
          lVar5 = (longlong)*(int *)(lVar3 + lVar8 * 4);
          *(double *)(*param_3 + lVar5 * 8) =
               *(double *)(lVar7 + lVar8 * 8) * dVar1 * dVar2 + *(double *)(*param_3 + lVar5 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar7 = *(longlong *)(param_1 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
  }
  return;
}



// FUNCTION 1483c1947 FUN_1483c1947 body=143 status=ok
// SIG undefined FUN_1483c1947(void)

void FUN_1483c1947(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (param_1[1] != lVar4) {
    FUN_146de3c6e(param_1,lVar4,1);
    lVar4 = param_1[1];
  }
  if (0 < lVar4) {
    lVar2 = *param_1;
    lVar3 = 0;
    do {
      uVar5 = *(int *)(lVar1 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar1 + 4) = uVar5;
      dVar6 = (double)((float)(uVar5 >> 9 | 0x3f800000) + -1.0);
      *(double *)(lVar2 + lVar3 * 8) = dVar6 + dVar6 + -1.0;
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}



// FUNCTION 1483c19d6 FUN_1483c19d6 body=147 status=ok
// SIG undefined FUN_1483c19d6(void)

void FUN_1483c19d6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *param_2;
  local_28 = param_2[1];
  if ((param_1[1] != local_28) || (param_1[2] != 1)) {
    FUN_1482a9550(param_1,local_28,local_28,1);
    local_28 = param_1[1];
  }
  local_30 = *param_1;
  local_50 = &local_30;
  local_48 = &local_20;
  local_40 = param_3;
  local_38 = param_1;
  FUN_1483c1a6a();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c1a6a FUN_1483c1a6a body=114 status=ok
// SIG undefined FUN_1483c1a6a(void)

void FUN_1483c1a6a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1[3] + 0x10) * *(longlong *)(param_1[3] + 8);
  uVar5 = lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar6) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar4 * 8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar4 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar4 = lVar4 + 2;
    } while (lVar4 < (longlong)uVar5);
  }
  if ((longlong)uVar5 < lVar6) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar5 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (lVar6 - uVar5 != 0);
  }
  return;
}



// FUNCTION 1483c1adc FUN_1483c1adc body=95 status=ok
// SIG undefined FUN_1483c1adc(void)

void FUN_1483c1adc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  FUN_1483c1b3c(param_3,iVar1);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      FUN_1483a25d0(*param_3 + lVar3,param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x50;
    } while (iVar1 != lVar2);
  }
  return;
}



// FUNCTION 1483c1b3c FUN_1483c1b3c body=71 status=ok
// SIG undefined FUN_1483c1b3c(void)

void FUN_1483c1b3c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483c1b84();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1483c1c18();
      return;
    }
  }
  return;
}



// FUNCTION 1483c1b84 FUN_1483c1b84 body=147 status=ok
// SIG undefined FUN_1483c1b84(void)

void FUN_1483c1b84(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483c1c18 FUN_1483c1c18 body=62 status=ok
// SIG undefined FUN_1483c1c18(void)

void FUN_1483c1c18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483c1c56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 1483c1c56 FUN_1483c1c56 body=112 status=ok
// SIG undefined FUN_1483c1c56(void)

ulonglong FUN_1483c1c56(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483c1c90;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1483c1c90:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483c1cc6 FUN_1483c1cc6 body=983 status=ok
// SIG undefined FUN_1483c1cc6(void)

void FUN_1483c1cc6(code *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ulonglong local_1f0;
  code *local_1e8;
  code *local_1e0;
  code *local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  int local_1a0;
  int local_19c;
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined4 local_120;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar8 = (int)param_2[1] - (int)param_2[4];
  uVar2 = FUN_14836b4e1();
  local_148 = (undefined1 *)CONCAT44(local_148._4_4_,uVar2);
  pcVar7 = (code *)*param_3;
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar7)(uVar4,&local_148);
  if (0 < (int)uVar8) {
    local_1e8 = param_1 + 0xb8;
    local_1d0 = (longlong *)(param_4 + 0x60);
    local_1f8 = param_3 + 0xc;
    local_1f0 = (ulonglong)uVar8;
    uVar6 = 0;
    local_1e0 = param_1;
    do {
      local_120 = *(undefined4 *)(*param_2 + uVar6 * 4);
      local_138 = 0;
      local_128 = &PTR_LAB_149f3b7b0;
      local_148 = &LAB_146c413d0;
      local_118 = local_1e0;
      FUN_146c41260(local_1e8,&local_d8,local_120,&local_148);
      FUN_146c41458(CONCAT44(uStack_d4,local_d8),&local_148,local_d0,local_c8);
      FUN_146c41662(CONCAT44(uStack_d4,local_d8),&local_1b8,local_d0,local_c8);
      dVar1 = 0.0;
      while ((((pcVar7 = local_118, uVar2 = (undefined4)uVar6,
               local_148 != (undefined1 *)CONCAT44(uStack_1b4,local_1b8) || (local_140 != local_1b0)
               ) || ((int)local_130 != local_1a0)) || (local_130._4_4_ != local_19c))) {
        local_1c0 = CONCAT44(local_1c0._4_4_,local_128._0_4_);
        plVar5 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar5 = local_f8;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        iVar3 = (*pcVar7)(uVar4,&local_1c0);
        local_1c4 = *(int *)(param_2[2] + (longlong)iVar3 * 4);
        dVar1 = dVar1 + 1.0;
        iVar3 = local_1c4 - uVar8;
        if (local_1c4 < (int)uVar8) {
          pcVar7 = (code *)param_3[8];
          plVar5 = (longlong *)param_3[10];
          if (plVar5 == (longlong *)0x0) {
            plVar5 = local_1f8;
          }
        }
        else {
          pcVar7 = *(code **)(param_4 + 0x40);
          plVar5 = *(longlong **)(param_4 + 0x50);
          local_1c4 = iVar3;
          if (*(longlong **)(param_4 + 0x50) == (longlong *)0x0) {
            plVar5 = local_1d0;
          }
        }
        local_1c0 = 0x3ff0000000000000;
        local_1c8 = uVar2;
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar7)(uVar4,&local_1c8,&local_1c4,&local_1c0);
        if ((int)local_138 == 0) {
          local_13c = 0xffffffff;
          local_130 = 0xffffffffffffffff;
        }
        else {
          FUN_146be9922(&local_148);
        }
      }
      if (local_188 != 0) {
        plVar5 = local_178;
        if (local_178 == (longlong *)0x0) {
          plVar5 = local_168;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_118 != (code *)0x0) {
        plVar5 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar5 = local_f8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_c8[0] != 0) {
        plVar5 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar5 = local_a8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_148 = (undefined1 *)((ulonglong)dVar1 ^ 0x8000000000000000);
      local_1d8 = (code *)param_3[8];
      plVar5 = (longlong *)param_3[10];
      if ((longlong *)param_3[10] == (longlong *)0x0) {
        plVar5 = local_1f8;
      }
      local_1b8 = uVar2;
      local_d8 = uVar2;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*local_1d8)(uVar4,&local_d8,&local_1b8,&local_148);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_1f0);
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c209e FUN_1483c209e body=238 status=ok
// SIG undefined FUN_1483c209e(void)

undefined1 * FUN_1483c209e(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_146de45bc(param_1 + 0x30,0,0);
  param_1[0xc0] = 0;
  param_1[0x1e8] = 0;
  memset(param_1 + 200,0,200);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0x10;
  *(undefined8 *)(param_1 + 0x1f8) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0x80;
  *(undefined8 *)(param_1 + 0x208) = 0x10;
  *(undefined8 *)(param_1 + 0x210) = 8;
  *(undefined8 *)(param_1 + 0x218) = 0x14;
  return param_1;
}



// FUNCTION 1483c218c FUN_1483c218c body=52 status=ok
// SIG undefined FUN_1483c218c(void)

undefined8 * FUN_1483c218c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae75750;
  FUN_1483c2300(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483c21c4 FUN_1483c21c4 body=136 status=ok
// SIG undefined FUN_1483c21c4(void)

void FUN_1483c21c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_40;
    local_48 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483c23b6;
    local_50 = 0;
    local_40 = param_3;
    local_38 = param_1;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c225e FUN_1483c225e body=79 status=ok
// SIG undefined FUN_1483c225e(void)

void FUN_1483c225e(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (*(char *)(param_1 + 8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_3 + 8) != *(longlong *)(param_1 + 0x48)) {
    FUN_146de3c6e(param_3,*(longlong *)(param_1 + 0x48),1);
  }
  FUN_1483c3e80(param_1 + 0x10,param_2,param_3);
  return;
}



// FUNCTION 1483c22ae FUN_1483c22ae body=64 status=ok
// SIG undefined FUN_1483c22ae(void)

void FUN_1483c22ae(longlong param_1,longlong param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f8) = param_3;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1483c469a(param_1 + 0x10);
    FUN_1483c4ab6(param_1 + 0x10,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 1483c2300 FUN_1483c2300 body=82 status=ok
// SIG undefined FUN_1483c2300(void)

void FUN_1483c2300(longlong param_1)

{
  FUN_1483c2352(param_1 + 0x130);
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x120));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x110));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x100));
  FUN_146de5508(param_1 + 0x30);
  FUN_1401d9a90(param_1 + 0x10);
  return;
}



// FUNCTION 1483c2352 FUN_1483c2352 body=99 status=ok
// SIG undefined FUN_1483c2352(void)

void FUN_1483c2352(undefined8 *param_1)

{
  FUN_1400020a8(param_1[0x12]);
  FUN_1400020a8(param_1[0x10]);
  FUN_1400020a8(param_1[0xe]);
  FUN_1400020a8(param_1[10]);
  FUN_1400020a8(param_1[8]);
  FUN_1400020a8(param_1[6]);
  FUN_1400020a8(param_1[4]);
  FUN_1400020a8(param_1[2]);
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 1483c23be FUN_1483c23be body=171 status=ok
// SIG undefined FUN_1483c23be(void)

void FUN_1483c23be(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  lVar2 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar2 = local_28;
  }
  lVar1 = (longlong)*(int *)(param_1[2] + 8 + lVar2);
  local_20 = 0;
  if (0 < lVar1) {
    local_28 = *(longlong *)(param_1[2] + lVar2);
    local_20 = lVar1;
  }
  lVar1 = (longlong)*(int *)(*param_1 + 8 + lVar2);
  local_48 = 0;
  local_40 = 0;
  if (0 < lVar1) {
    local_48 = *(undefined8 *)(*param_1 + lVar2);
    local_40 = lVar1;
  }
  FUN_1483c246a(param_1[1] + 0x10,&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c246a FUN_1483c246a body=340 status=ok
// SIG undefined FUN_1483c246a(void)

void FUN_1483c246a(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong lStack_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = param_1 + 0x110;
  local_88 = *param_2;
  local_80 = param_2[1];
  local_60 = param_2[2];
  local_50 = 0;
  local_e0 = *param_3;
  lStack_d8 = param_3[1];
  local_c8 = (undefined4)*param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_c0 = (undefined4)param_3[1];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_98 = param_3[1];
  local_b8 = param_3[2];
  local_a8 = 0;
  local_70 = local_88;
  local_68 = local_80;
  local_40 = local_80;
  FUN_1483c2738(&local_e0,local_90,&local_88);
  FUN_1483c2866(param_1 + 0x78,param_3);
  local_88 = param_1 + 0xc0;
  local_90 = param_1 + 0x78;
  FUN_1483c25c0(&local_90,param_3);
  local_90 = param_1 + 0x100;
  local_e0 = *param_3;
  lStack_d8 = param_3[1];
  local_60 = param_3[2];
  local_50 = 0;
  local_c8 = (undefined4)*param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_c0 = (undefined4)param_3[1];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_98 = param_3[1];
  local_b8 = param_3[2];
  local_a8 = 0;
  local_88 = local_e0;
  local_80 = lStack_d8;
  local_70 = local_e0;
  local_68 = lStack_d8;
  local_40 = lStack_d8;
  FUN_1483c3ad0(&local_e0,local_90);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c25c0 FUN_1483c25c0 body=375 status=ok
// SIG undefined FUN_1483c25c0(void)

void FUN_1483c25c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (-1 < *(longlong *)(*param_1 + 0x10)) {
    lVar3 = param_2[1];
    lVar12 = *(longlong *)(*param_1 + 0x10);
    do {
      lVar4 = *param_1;
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x40) + lVar12 * 4);
      lVar11 = (longlong)iVar1;
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
      iVar2 = *(int *)(*(longlong *)(lVar4 + 0x40) + 4 + lVar12 * 4);
      lVar9 = iVar2 - lVar11;
      if (lVar9 == 1) {
        *(double *)(*param_2 + lVar11 * 8) =
             *(double *)(*param_2 + lVar11 * 8) /
             *(double *)(*(longlong *)(lVar4 + 0x18) + lVar8 * 8);
      }
      else {
        local_80 = *(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4) - lVar8;
        local_98 = lVar8 * 8 + *(longlong *)(lVar4 + 0x18);
        local_70 = lVar11 * 8 + *param_2;
        local_90 = lVar9;
        local_88 = lVar9;
        local_68 = lVar9;
        local_58 = lVar3;
        FUN_1483c3902(&local_98,&local_70,&local_70);
      }
      if (iVar1 < iVar2) {
        do {
          lVar4 = param_1[1];
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
          if (*(longlong *)(lVar4 + 0x38) == 0) {
            lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4);
          }
          else {
            lVar9 = *(int *)(*(longlong *)(lVar4 + 0x38) + lVar11 * 4) + lVar8;
          }
          if (lVar8 < lVar9) {
            lVar5 = *(longlong *)(lVar4 + 0x30);
            lVar4 = *(longlong *)(lVar4 + 0x28);
            do {
              lVar10 = (longlong)*(int *)(lVar4 + lVar8 * 4);
              lVar6 = *param_2;
              *(double *)(lVar6 + lVar10 * 8) =
                   *(double *)(lVar6 + lVar10 * 8) -
                   *(double *)(lVar6 + lVar11 * 8) * *(double *)(lVar5 + lVar8 * 8);
              lVar8 = lVar8 + 1;
            } while (lVar9 != lVar8);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != iVar2);
      }
      bVar7 = 0 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c2738 FUN_1483c2738 body=301 status=ok
// SIG undefined FUN_1483c2738(void)

void FUN_1483c2738(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (param_1[4] == param_3[4])) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined8 *)(lVar3 + lVar4 * 8);
            *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar3 + -8 + lVar5 * 8);
            *(undefined8 *)(lVar3 + -8 + lVar5 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1483c2857;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1483c2857:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 8) =
           *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c2866 FUN_1483c2866 body=771 status=ok
// SIG undefined FUN_1483c2866(void)

void FUN_1483c2866(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = (longlong)(int)param_2[1];
  local_120 = *(longlong *)(param_1 + 0x18);
  local_108 = 0;
  lStack_100 = 0;
  FUN_146de3c6e(&local_108,local_118,1);
  local_b8 = lStack_100;
  local_a8 = 0;
  FUN_146de41cc(&local_108,&local_c0,&local_f8);
  if (-1 < *(longlong *)(param_1 + 0x10)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = *(longlong *)(param_1 + 0x40);
      lVar8 = (longlong)*(int *)(lVar4 + lVar7 * 4);
      lVar3 = (longlong)*(int *)(lVar4 + 4 + lVar7 * 4);
      lVar9 = lVar3 - lVar8;
      if (lVar9 == 1) {
        lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4);
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar8 * 4);
        if (lVar3 + 1 < lVar9) {
          lVar5 = (longlong)
                  *(int *)(lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4) * 4
                          );
          lVar4 = (longlong)*(int *)(lVar2 + lVar5 * 4);
          lVar2 = (longlong)*(int *)(lVar2 + 4 + lVar5 * 4);
          if (lVar4 + 1 < lVar2) {
            lVar3 = lVar3 + 2;
            lVar4 = lVar4 + 2;
            do {
              lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + -4 + lVar4 * 4);
              lVar5 = *param_2;
              *(double *)(lVar5 + lVar6 * 8) =
                   *(double *)(lVar5 + lVar6 * 8) -
                   *(double *)(lVar5 + lVar8 * 8) *
                   *(double *)(*(longlong *)(param_1 + 0x18) + -8 + lVar3 * 8);
              if (lVar9 <= lVar3) break;
              lVar3 = lVar3 + 1;
              bVar1 = lVar4 < lVar2;
              lVar4 = lVar4 + 1;
            } while (bVar1);
          }
        }
      }
      else {
        local_128 = (longlong)*(int *)(lVar2 + lVar8 * 4);
        lVar4 = (longlong)*(int *)(lVar2 + 4 + lVar8 * 4) - (local_128 + lVar9);
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4);
        lVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar8 * 4) - lVar2;
        local_70 = lVar8 * 8 + *param_2;
        local_110 = local_120 + lVar2 * 8;
        local_58 = local_118;
        local_c0 = local_110;
        local_b8 = lVar9;
        local_b0 = lVar9;
        local_a8 = lVar5;
        lStack_68 = lVar9;
        FUN_1483c2b6a(&local_c0,&local_70,&local_70);
        local_c0 = local_110 + lVar9 * 8;
        local_88 = local_60;
        local_98 = local_70;
        lStack_90 = lStack_68;
        local_80 = local_58;
        local_f8 = local_108;
        local_e0 = &local_108;
        local_d8 = 0;
        local_c8 = lStack_100;
        local_f0 = lVar4;
        local_b8 = lVar4;
        local_b0 = lVar9;
        local_a8 = lVar5;
        FUN_1483c30a6(&local_f8,&local_c0);
        if (0 < lVar4) {
          lVar2 = 0;
          do {
            lVar9 = (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x28) + lVar3 * 4 + local_128 * 4 + lVar8 * -4
                            + lVar2 * 4);
            *(double *)(*param_2 + lVar9 * 8) =
                 *(double *)(*param_2 + lVar9 * 8) - *(double *)(local_108 + lVar2 * 8);
            *(undefined8 *)(local_108 + lVar2 * 8) = 0;
            lVar2 = lVar2 + 1;
          } while (lVar2 < lVar4);
        }
      }
      bVar1 = lVar7 < *(longlong *)(param_1 + 0x10);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  FUN_1400020a8(local_108);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c2b6a FUN_1483c2b6a body=168 status=ok
// SIG undefined FUN_1483c2b6a(void)

void FUN_1483c2b6a(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1483c2c14();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1483c2ccc(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c2c14 FUN_1483c2c14 body=145 status=ok
// SIG undefined FUN_1483c2c14(void)

void FUN_1483c2c14(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483c2ca6(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483c2ca6(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483c2ca6 FUN_1483c2ca6 body=38 status=ok
// SIG undefined FUN_1483c2ca6(void)

void FUN_1483c2ca6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483c2ccc FUN_1483c2ccc body=286 status=ok
// SIG undefined FUN_1483c2ccc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483c2ccc(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3d != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 8;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1483c2d63;
  FUN_1483c2df0(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 3)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1483c2d82;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1483c2da9;
  FUN_144d8e3a0();
}



// FUNCTION 1483c2df0 FUN_1483c2df0 body=693 status=ok
// SIG undefined FUN_1483c2df0(void)

void FUN_1483c2df0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_e9;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_a8 [2];
  longlong local_98;
  longlong local_90;
  double local_88;
  longlong local_78;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  if (0 < param_1) {
    param_2 = param_2 + 8;
    local_110 = (longlong)param_3 * 0x40 + 0x40;
    param_4 = param_4 + 8;
    lVar7 = 0;
    lVar5 = param_1;
    local_118 = param_1;
    do {
      lVar4 = 8;
      if (lVar5 < 8) {
        lVar4 = lVar5;
      }
      lVar3 = 1;
      if (1 < lVar4) {
        lVar3 = lVar4;
      }
      lVar2 = param_1 - lVar7;
      lVar6 = 8;
      if (lVar2 < 8) {
        lVar6 = lVar2;
      }
      if (0 < lVar2) {
        lVar2 = param_2;
        lVar8 = 1;
        lVar9 = param_4;
        local_108 = lVar6;
        local_100 = lVar7;
        local_f8 = param_4;
        do {
          lVar4 = lVar4 + -1;
          dVar1 = *(double *)(lVar9 + -8);
          if (((dVar1 != 0.0) || (NAN(dVar1))) && (0 < lVar4)) {
            local_68 = local_130;
            local_e8 = local_a8;
            local_e0 = &local_90;
            local_d8 = &local_e9;
            local_d0 = &local_c8;
            local_c8 = lVar9;
            local_c0 = lVar4;
            local_a8[0] = lVar9;
            local_98 = lVar4;
            local_88 = dVar1;
            local_78 = lVar2;
            FUN_1482a9dd0(&local_e8);
            param_1 = local_118;
            lVar6 = local_108;
            lVar7 = local_100;
            param_4 = local_f8;
          }
          lVar2 = lVar2 + (longlong)param_3 * 8 + 8;
          lVar9 = lVar9 + 8;
          bVar10 = lVar8 != lVar3;
          lVar8 = lVar8 + 1;
        } while (bVar10);
      }
      lVar4 = lVar6 + lVar7;
      if (param_1 - lVar4 != 0 && lVar4 <= param_1) {
        local_148 = local_120 + lVar4 * 8;
        local_90 = local_120 + lVar7 * 8;
        local_88 = 4.94065645841247e-324;
        local_e8 = (longlong *)(local_128 + lVar7 * (longlong)local_130 * 8 + lVar4 * 8);
        local_e0 = local_130;
        local_138 = 0xbff0000000000000;
        local_140 = 1;
        FUN_1482a9836(param_1 - lVar4,lVar6,&local_e8,&local_90);
        param_1 = local_118;
      }
      lVar7 = lVar7 + 8;
      lVar5 = lVar5 + -8;
      param_2 = param_2 + local_110;
      param_4 = param_4 + 0x40;
    } while (lVar7 < param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c30a6 FUN_1483c30a6 body=165 status=ok
// SIG undefined FUN_1483c30a6(void)

void FUN_1483c30a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = local_38;
  local_38[0] = 0;
  local_50[0] = *param_1;
  local_70 = local_50;
  local_40 = *(undefined8 *)(param_1[3] + 8);
  local_60 = &local_71;
  local_58 = param_1;
  FUN_1483c314c(&local_70);
  local_70 = (undefined8 *)0x3ff0000000000000;
  FUN_1483c31fe(param_1,param_2,param_3,&local_70);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c314c FUN_1483c314c body=143 status=ok
// SIG undefined FUN_1483c314c(void)

void FUN_1483c314c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar5 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar5 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar5)) {
    uVar5 = uVar4;
  }
  lVar7 = uVar4 - uVar5;
  lVar6 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
  FUN_1483c31dc(param_1,0,uVar5);
  if (1 < lVar7) {
    do {
      uVar2 = *(undefined8 *)param_1[1];
      puVar1 = (undefined8 *)(*(longlong *)*param_1 + uVar5 * 8);
      *puVar1 = *(undefined8 *)param_1[1];
      puVar1[1] = uVar2;
      uVar5 = uVar5 + 2;
    } while ((longlong)uVar5 < lVar6);
  }
  FUN_1483c31dc(param_1,lVar6,uVar4);
  return;
}



// FUNCTION 1483c31dc FUN_1483c31dc body=34 status=ok
// SIG undefined FUN_1483c31dc(void)

void FUN_1483c31dc(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) = *(undefined8 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483c31fe FUN_1483c31fe body=235 status=ok
// SIG undefined FUN_1483c31fe(void)

void FUN_1483c31fe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,double *param_4)

{
  longlong lVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2[1] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      dVar4 = 0.0;
    }
    else {
      pdVar2 = (double *)*param_2;
      dVar4 = *(double *)*param_3 * *pdVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pdVar2 = pdVar2 + param_2[3];
          dVar4 = dVar4 + ((double *)*param_3)[lVar3] * *pdVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(double *)*param_1 = *param_4 * dVar4 + *(double *)*param_1;
  }
  else {
    local_28 = *param_2;
    local_20 = param_2[3];
    local_18 = *param_3;
    local_30 = *param_4;
    local_38 = *param_1;
    local_10 = 1;
    FUN_1483c32ea(param_2[1],param_2[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c32ea FUN_1483c32ea body=1560 status=ok
// SIG undefined FUN_1483c32ea(void)

void FUN_1483c32ea(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,double param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
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
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar6;
  
  lVar7 = param_3[1];
  uVar2 = lVar7 * 8;
  lVar18 = 4;
  if (uVar2 < 32000) {
    lVar18 = 0x10;
  }
  if (param_2 < 0x80) {
    lVar18 = param_2;
  }
  if (0 < param_2) {
    lVar20 = *param_3;
    pdVar14 = (double *)(lVar20 + 0x70);
    lVar22 = 0;
    lVar19 = 0;
    do {
      lVar1 = lVar19 + lVar18;
      lVar25 = lVar1;
      if (param_2 < lVar1) {
        lVar25 = param_2;
      }
      if ((longlong)param_1 < 0x10) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        pdVar16 = pdVar14;
        do {
          pdVar15 = (double *)(lVar22 * param_4[1] + *param_4);
          dVar39 = 0.0;
          dVar41 = 0.0;
          dVar35 = 0.0;
          dVar37 = 0.0;
          dVar31 = 0.0;
          dVar33 = 0.0;
          dVar27 = 0.0;
          dVar29 = 0.0;
          dVar38 = 0.0;
          dVar40 = 0.0;
          dVar34 = 0.0;
          dVar36 = 0.0;
          dVar30 = 0.0;
          dVar32 = 0.0;
          dVar26 = 0.0;
          dVar28 = 0.0;
          pdVar21 = pdVar16;
          lVar23 = lVar19;
          do {
            dVar5 = *pdVar15;
            dVar6 = *pdVar15;
            dVar39 = dVar39 + pdVar21[-0xe] * dVar5;
            dVar41 = dVar41 + pdVar21[-0xd] * dVar6;
            dVar35 = dVar35 + pdVar21[-0xc] * dVar5;
            dVar37 = dVar37 + pdVar21[-0xb] * dVar6;
            dVar31 = dVar31 + pdVar21[-10] * dVar5;
            dVar33 = dVar33 + pdVar21[-9] * dVar6;
            dVar27 = dVar27 + pdVar21[-8] * dVar5;
            dVar29 = dVar29 + pdVar21[-7] * dVar6;
            dVar38 = dVar38 + pdVar21[-6] * dVar5;
            dVar40 = dVar40 + pdVar21[-5] * dVar6;
            dVar34 = dVar34 + pdVar21[-4] * dVar5;
            dVar36 = dVar36 + pdVar21[-3] * dVar6;
            dVar30 = dVar30 + pdVar21[-2] * dVar5;
            dVar32 = dVar32 + pdVar21[-1] * dVar6;
            dVar26 = dVar26 + *pdVar21 * dVar5;
            dVar28 = dVar28 + pdVar21[1] * dVar6;
            lVar23 = lVar23 + 1;
            pdVar21 = pdVar21 + lVar7;
            pdVar15 = pdVar15 + param_4[1];
          } while (lVar23 < lVar25);
          pdVar21 = (double *)(param_5 + uVar17 * 8);
          dVar13 = pdVar21[1] + dVar41 * param_6;
          pdVar15 = (double *)(param_5 + 0x10 + uVar17 * 8);
          dVar5 = pdVar15[1];
          pdVar3 = (double *)(param_5 + 0x20 + uVar17 * 8);
          dVar6 = pdVar3[1];
          pdVar4 = (double *)(param_5 + 0x30 + uVar17 * 8);
          dVar41 = pdVar4[1];
          auVar12._8_4_ = SUB84(dVar13,0);
          auVar12._0_8_ = *pdVar21 + dVar39 * param_6;
          auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          *(undefined1 (*) [16])(param_5 + uVar17 * 8) = auVar12;
          dVar5 = dVar37 * param_6 + dVar5;
          auVar11._8_4_ = SUB84(dVar5,0);
          auVar11._0_8_ = dVar35 * param_6 + *pdVar15;
          auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x10 + uVar17 * 8) = auVar11;
          dVar6 = dVar33 * param_6 + dVar6;
          auVar10._8_4_ = SUB84(dVar6,0);
          auVar10._0_8_ = dVar31 * param_6 + *pdVar3;
          auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x20 + uVar17 * 8) = auVar10;
          dVar41 = dVar29 * param_6 + dVar41;
          auVar8._8_4_ = SUB84(dVar41,0);
          auVar8._0_8_ = dVar27 * param_6 + *pdVar4;
          auVar8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          *(undefined1 (*) [16])(param_5 + 0x30 + uVar17 * 8) = auVar8;
          pdVar21 = (double *)(param_5 + 0x40 + uVar17 * 8);
          dVar27 = pdVar21[1];
          pdVar15 = (double *)(param_5 + 0x40 + uVar17 * 8);
          *pdVar15 = dVar38 * param_6 + *pdVar21;
          pdVar15[1] = dVar40 * param_6 + dVar27;
          pdVar21 = (double *)(param_5 + 0x50 + uVar17 * 8);
          dVar27 = pdVar21[1];
          pdVar15 = (double *)(param_5 + 0x50 + uVar17 * 8);
          *pdVar15 = dVar34 * param_6 + *pdVar21;
          pdVar15[1] = dVar36 * param_6 + dVar27;
          pdVar21 = (double *)(param_5 + 0x60 + uVar17 * 8);
          dVar27 = pdVar21[1];
          pdVar15 = (double *)(param_5 + 0x60 + uVar17 * 8);
          *pdVar15 = dVar30 * param_6 + *pdVar21;
          pdVar15[1] = dVar32 * param_6 + dVar27;
          pdVar21 = (double *)(param_5 + 0x70 + uVar17 * 8);
          dVar27 = pdVar21[1];
          pdVar15 = (double *)(param_5 + 0x70 + uVar17 * 8);
          *pdVar15 = dVar26 * param_6 + *pdVar21;
          pdVar15[1] = dVar28 * param_6 + dVar27;
          uVar17 = uVar17 + 0x10;
          pdVar16 = pdVar16 + 0x10;
        } while ((longlong)uVar17 < (longlong)(param_1 - 0xf));
      }
      if ((longlong)uVar17 < (longlong)(param_1 - 7)) {
        pdVar21 = (double *)(param_4[1] * lVar22 + *param_4);
        pdVar16 = (double *)(lVar20 + uVar17 * 8);
        dVar39 = 0.0;
        dVar41 = 0.0;
        dVar35 = 0.0;
        dVar37 = 0.0;
        dVar31 = 0.0;
        dVar33 = 0.0;
        dVar27 = 0.0;
        dVar29 = 0.0;
        lVar23 = lVar19;
        do {
          dVar28 = *pdVar21;
          dVar26 = *pdVar21;
          dVar39 = dVar39 + *pdVar16 * dVar28;
          dVar41 = dVar41 + pdVar16[1] * dVar26;
          dVar35 = dVar35 + pdVar16[2] * dVar28;
          dVar37 = dVar37 + pdVar16[3] * dVar26;
          dVar31 = dVar31 + pdVar16[4] * dVar28;
          dVar33 = dVar33 + pdVar16[5] * dVar26;
          dVar27 = dVar27 + pdVar16[6] * dVar28;
          dVar29 = dVar29 + pdVar16[7] * dVar26;
          lVar23 = lVar23 + 1;
          pdVar21 = pdVar21 + param_4[1];
          pdVar16 = pdVar16 + lVar7;
        } while (lVar23 < lVar25);
        pdVar16 = (double *)(param_5 + uVar17 * 8);
        dVar41 = pdVar16[1] + dVar41 * param_6;
        pdVar21 = (double *)(param_5 + 0x10 + uVar17 * 8);
        dVar26 = pdVar21[1];
        pdVar15 = (double *)(param_5 + 0x20 + uVar17 * 8);
        dVar28 = *pdVar15;
        dVar30 = pdVar15[1];
        pdVar15 = (double *)(param_5 + 0x30 + uVar17 * 8);
        dVar32 = *pdVar15;
        dVar34 = pdVar15[1];
        auVar9._8_4_ = SUB84(dVar41,0);
        auVar9._0_8_ = *pdVar16 + dVar39 * param_6;
        auVar9._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        *(undefined1 (*) [16])(param_5 + uVar17 * 8) = auVar9;
        pdVar16 = (double *)(param_5 + 0x10 + uVar17 * 8);
        *pdVar16 = dVar35 * param_6 + *pdVar21;
        pdVar16[1] = dVar37 * param_6 + dVar26;
        pdVar16 = (double *)(param_5 + 0x20 + uVar17 * 8);
        *pdVar16 = dVar31 * param_6 + dVar28;
        pdVar16[1] = dVar33 * param_6 + dVar30;
        pdVar16 = (double *)(param_5 + 0x30 + uVar17 * 8);
        *pdVar16 = dVar27 * param_6 + dVar32;
        pdVar16[1] = dVar29 * param_6 + dVar34;
        uVar17 = uVar17 | 8;
      }
      if ((longlong)uVar17 < (longlong)(param_1 - 5)) {
        lVar23 = uVar17 * 8;
        pdVar16 = (double *)(param_4[1] * lVar22 + *param_4);
        dVar35 = 0.0;
        dVar37 = 0.0;
        dVar31 = 0.0;
        dVar33 = 0.0;
        dVar27 = 0.0;
        dVar29 = 0.0;
        lVar24 = lVar19;
        do {
          dVar39 = *pdVar16;
          dVar41 = *pdVar16;
          pdVar21 = (double *)(lVar20 + 0x10 + lVar23);
          pdVar15 = (double *)(lVar20 + 0x20 + lVar23);
          dVar35 = dVar35 + *(double *)(lVar20 + lVar23) * dVar39;
          dVar37 = dVar37 + ((double *)(lVar20 + lVar23))[1] * dVar41;
          dVar31 = dVar31 + *pdVar21 * dVar39;
          dVar33 = dVar33 + pdVar21[1] * dVar41;
          dVar27 = dVar27 + *pdVar15 * dVar39;
          dVar29 = dVar29 + pdVar15[1] * dVar41;
          lVar24 = lVar24 + 1;
          lVar23 = lVar23 + uVar2;
          pdVar16 = pdVar16 + param_4[1];
        } while (lVar24 < lVar25);
        pdVar16 = (double *)(param_5 + uVar17 * 8);
        dVar39 = pdVar16[1];
        pdVar21 = (double *)(param_5 + 0x10 + uVar17 * 8);
        dVar41 = *pdVar21;
        dVar26 = pdVar21[1];
        pdVar21 = (double *)(param_5 + 0x20 + uVar17 * 8);
        dVar28 = *pdVar21;
        dVar30 = pdVar21[1];
        pdVar21 = (double *)(param_5 + uVar17 * 8);
        *pdVar21 = *pdVar16 + dVar35 * param_6;
        pdVar21[1] = dVar39 + dVar37 * param_6;
        pdVar16 = (double *)(param_5 + 0x10 + uVar17 * 8);
        *pdVar16 = dVar31 * param_6 + dVar41;
        pdVar16[1] = dVar33 * param_6 + dVar26;
        pdVar16 = (double *)(param_5 + 0x20 + uVar17 * 8);
        *pdVar16 = dVar27 * param_6 + dVar28;
        pdVar16[1] = dVar29 * param_6 + dVar30;
        uVar17 = uVar17 + 6;
      }
      if ((longlong)uVar17 < (longlong)(param_1 - 3)) {
        lVar23 = uVar17 * 8;
        pdVar16 = (double *)(param_4[1] * lVar22 + *param_4);
        dVar27 = 0.0;
        dVar29 = 0.0;
        dVar31 = 0.0;
        dVar33 = 0.0;
        lVar24 = lVar19;
        do {
          pdVar21 = (double *)(lVar20 + 0x10 + lVar23);
          dVar31 = dVar31 + *(double *)(lVar20 + lVar23) * *pdVar16;
          dVar33 = dVar33 + ((double *)(lVar20 + lVar23))[1] * *pdVar16;
          dVar27 = dVar27 + *pdVar21 * *pdVar16;
          dVar29 = dVar29 + pdVar21[1] * *pdVar16;
          lVar24 = lVar24 + 1;
          lVar23 = lVar23 + uVar2;
          pdVar16 = pdVar16 + param_4[1];
        } while (lVar24 < lVar25);
        pdVar16 = (double *)(param_5 + uVar17 * 8);
        dVar35 = pdVar16[1];
        pdVar21 = (double *)(param_5 + 0x10 + uVar17 * 8);
        dVar37 = *pdVar21;
        dVar39 = pdVar21[1];
        pdVar21 = (double *)(param_5 + uVar17 * 8);
        *pdVar21 = *pdVar16 + dVar31 * param_6;
        pdVar21[1] = dVar35 + dVar33 * param_6;
        pdVar16 = (double *)(param_5 + 0x10 + uVar17 * 8);
        *pdVar16 = dVar27 * param_6 + dVar37;
        pdVar16[1] = dVar29 * param_6 + dVar39;
        uVar17 = uVar17 + 4;
      }
      if ((longlong)uVar17 < (longlong)(param_1 - 1)) {
        pdVar21 = (double *)(param_4[1] * lVar22 + *param_4);
        pdVar16 = (double *)(lVar20 + uVar17 * 8);
        dVar27 = 0.0;
        dVar29 = 0.0;
        lVar23 = lVar19;
        do {
          dVar27 = dVar27 + *pdVar16 * *pdVar21;
          dVar29 = dVar29 + pdVar16[1] * *pdVar21;
          lVar23 = lVar23 + 1;
          pdVar16 = pdVar16 + lVar7;
          pdVar21 = pdVar21 + param_4[1];
        } while (lVar23 < lVar25);
        pdVar16 = (double *)(param_5 + uVar17 * 8);
        dVar31 = pdVar16[1];
        pdVar21 = (double *)(param_5 + uVar17 * 8);
        *pdVar21 = dVar27 * param_6 + *pdVar16;
        pdVar21[1] = dVar29 * param_6 + dVar31;
        uVar17 = uVar17 + 2;
      }
      if ((longlong)uVar17 < (longlong)param_1) {
        pdVar16 = (double *)(lVar20 + uVar17 * 8);
        do {
          pdVar15 = (double *)(lVar22 * param_4[1] + *param_4);
          dVar27 = 0.0;
          lVar23 = lVar19;
          pdVar21 = pdVar16;
          do {
            dVar27 = dVar27 + *pdVar21 * *pdVar15;
            lVar23 = lVar23 + 1;
            pdVar21 = pdVar21 + lVar7;
            pdVar15 = pdVar15 + param_4[1];
          } while (lVar23 < lVar25);
          *(double *)(param_5 + uVar17 * 8) = dVar27 * param_6 + *(double *)(param_5 + uVar17 * 8);
          uVar17 = uVar17 + 1;
          pdVar16 = pdVar16 + 1;
        } while (uVar17 != param_1);
      }
      pdVar14 = pdVar14 + lVar7 * lVar18;
      lVar22 = lVar22 + lVar18 * 8;
      lVar20 = lVar20 + lVar7 * lVar18 * 8;
      lVar19 = lVar1;
    } while (lVar1 < param_2);
  }
  return;
}



// FUNCTION 1483c3902 FUN_1483c3902 body=168 status=ok
// SIG undefined FUN_1483c3902(void)

void FUN_1483c3902(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1483c2c14();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1483c39ac(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c39ac FUN_1483c39ac body=286 status=ok
// SIG undefined FUN_1483c39ac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483c39ac(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3d != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 8;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1483c3a43;
  FUN_1482a95a2(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 3)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1483c3a62;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1483c3a89;
  FUN_144d8e3a0();
}



// FUNCTION 1483c3ad0 FUN_1483c3ad0 body=299 status=ok
// SIG undefined FUN_1483c3ad0(void)

void FUN_1483c3ad0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_3;
  lVar4 = param_3[1];
  if ((*param_1 == lVar5) && (param_1[4] == param_3[4])) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar5 = param_2[1];
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        while (*(char *)((longlong)local_38 + lVar4) == '\x01') {
          lVar4 = lVar4 + 1;
          if (lVar5 <= lVar4) goto LAB_1483c3bed;
        }
        *(undefined1 *)((longlong)local_38 + lVar4) = 1;
        iVar2 = *(int *)(*param_2 + lVar4 * 4);
        lVar5 = lVar4;
        while (lVar6 = (longlong)iVar2, lVar6 != lVar4) {
          lVar3 = *param_1;
          uVar1 = *(undefined8 *)(lVar3 + lVar6 * 8);
          *(undefined8 *)(lVar3 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
          *(undefined8 *)(lVar3 + lVar5 * 8) = uVar1;
          *(undefined1 *)((longlong)local_38 + lVar6) = 1;
          lVar5 = lVar6;
          iVar2 = *(int *)(*param_2 + lVar6 * 4);
        }
        lVar4 = lVar4 + 1;
        lVar5 = param_2[1];
      } while (lVar4 < lVar5);
    }
LAB_1483c3bed:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar4) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_2 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c3bfc FUN_1483c3bfc body=340 status=ok
// SIG undefined FUN_1483c3bfc(void)

void FUN_1483c3bfc(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong lStack_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = param_1 + 0x110;
  local_88 = *param_2;
  local_80 = param_2[1];
  local_60 = param_2[2];
  local_50 = 0;
  local_e0 = *param_3;
  lStack_d8 = param_3[1];
  local_c8 = (undefined4)*param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_c0 = (undefined4)param_3[1];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_98 = param_3[1];
  local_b8 = param_3[2];
  local_a8 = 0;
  local_70 = local_88;
  local_68 = local_80;
  local_40 = local_80;
  FUN_1483c3d52(&local_e0,local_90,&local_88);
  FUN_1483c2866(param_1 + 0x78,param_3);
  local_88 = param_1 + 0xc0;
  local_90 = param_1 + 0x78;
  FUN_1483c25c0(&local_90,param_3);
  local_90 = param_1 + 0x100;
  local_e0 = *param_3;
  lStack_d8 = param_3[1];
  local_60 = param_3[2];
  local_50 = 0;
  local_c8 = (undefined4)*param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_c0 = (undefined4)param_3[1];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_98 = param_3[1];
  local_b8 = param_3[2];
  local_a8 = 0;
  local_88 = local_e0;
  local_80 = lStack_d8;
  local_70 = local_e0;
  local_68 = lStack_d8;
  local_40 = lStack_d8;
  FUN_1483c3ad0(&local_e0,local_90);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c3d52 FUN_1483c3d52 body=301 status=ok
// SIG undefined FUN_1483c3d52(void)

void FUN_1483c3d52(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (param_1[4] == param_3[4])) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined8 *)(lVar3 + lVar4 * 8);
            *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar3 + -8 + lVar5 * 8);
            *(undefined8 *)(lVar3 + -8 + lVar5 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1483c3e71;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1483c3e71:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 8) =
           *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c3e80 FUN_1483c3e80 body=306 status=ok
// SIG undefined FUN_1483c3e80(void)

void FUN_1483c3e80(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong *local_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146de3c6e(param_3,param_2[1],1);
  local_78 = param_1 + 0x110;
  local_70 = *param_2;
  local_68 = param_2[1];
  local_50 = 0;
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_90 = 0;
  local_98 = param_3;
  local_80 = local_a8;
  local_58 = param_2;
  local_40 = local_68;
  FUN_1483c412c(&local_b0,local_78,&local_70);
  FUN_1483c4262(param_1 + 0x78,param_3);
  local_70 = param_1 + 0xc0;
  local_78 = param_1 + 0x78;
  FUN_1483c3fb4(&local_78,param_3);
  local_78 = param_1 + 0x100;
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_50 = 0;
  local_90 = 0;
  local_98 = param_3;
  local_80 = local_a8;
  local_70 = local_b0;
  local_68 = local_a8;
  local_58 = param_3;
  local_40 = local_a8;
  FUN_1483c4566(&local_b0,local_78);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c3fb4 FUN_1483c3fb4 body=375 status=ok
// SIG undefined FUN_1483c3fb4(void)

void FUN_1483c3fb4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (-1 < *(longlong *)(*param_1 + 0x10)) {
    lVar3 = param_2[1];
    lVar12 = *(longlong *)(*param_1 + 0x10);
    do {
      lVar4 = *param_1;
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x40) + lVar12 * 4);
      lVar11 = (longlong)iVar1;
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
      iVar2 = *(int *)(*(longlong *)(lVar4 + 0x40) + 4 + lVar12 * 4);
      lVar9 = iVar2 - lVar11;
      if (lVar9 == 1) {
        *(double *)(*param_2 + lVar11 * 8) =
             *(double *)(*param_2 + lVar11 * 8) /
             *(double *)(*(longlong *)(lVar4 + 0x18) + lVar8 * 8);
      }
      else {
        local_80 = *(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4) - lVar8;
        local_98 = lVar8 * 8 + *(longlong *)(lVar4 + 0x18);
        local_70 = lVar11 * 8 + *param_2;
        local_90 = lVar9;
        local_88 = lVar9;
        local_68 = lVar9;
        local_58 = lVar3;
        FUN_1483c3902(&local_98,&local_70,&local_70);
      }
      if (iVar1 < iVar2) {
        do {
          lVar4 = param_1[1];
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
          if (*(longlong *)(lVar4 + 0x38) == 0) {
            lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4);
          }
          else {
            lVar9 = *(int *)(*(longlong *)(lVar4 + 0x38) + lVar11 * 4) + lVar8;
          }
          if (lVar8 < lVar9) {
            lVar5 = *(longlong *)(lVar4 + 0x30);
            lVar4 = *(longlong *)(lVar4 + 0x28);
            do {
              lVar10 = (longlong)*(int *)(lVar4 + lVar8 * 4);
              lVar6 = *param_2;
              *(double *)(lVar6 + lVar10 * 8) =
                   *(double *)(lVar6 + lVar10 * 8) -
                   *(double *)(lVar6 + lVar11 * 8) * *(double *)(lVar5 + lVar8 * 8);
              lVar8 = lVar8 + 1;
            } while (lVar9 != lVar8);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != iVar2);
      }
      bVar7 = 0 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c412c FUN_1483c412c body=309 status=ok
// SIG undefined FUN_1483c412c(void)

void FUN_1483c412c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (*(longlong *)(param_1[3] + 8) == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined8 *)(lVar3 + lVar4 * 8);
            *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar3 + -8 + lVar5 * 8);
            *(undefined8 *)(lVar3 + -8 + lVar5 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1483c4253;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1483c4253:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 8) =
           *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c4262 FUN_1483c4262 body=771 status=ok
// SIG undefined FUN_1483c4262(void)

void FUN_1483c4262(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = (longlong)(int)param_2[1];
  local_120 = *(longlong *)(param_1 + 0x18);
  local_108 = 0;
  lStack_100 = 0;
  FUN_146de3c6e(&local_108,local_118,1);
  local_b8 = lStack_100;
  local_a8 = 0;
  FUN_146de41cc(&local_108,&local_c0,&local_f8);
  if (-1 < *(longlong *)(param_1 + 0x10)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = *(longlong *)(param_1 + 0x40);
      lVar8 = (longlong)*(int *)(lVar4 + lVar7 * 4);
      lVar3 = (longlong)*(int *)(lVar4 + 4 + lVar7 * 4);
      lVar9 = lVar3 - lVar8;
      if (lVar9 == 1) {
        lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4);
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar8 * 4);
        if (lVar3 + 1 < lVar9) {
          lVar5 = (longlong)
                  *(int *)(lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4) * 4
                          );
          lVar4 = (longlong)*(int *)(lVar2 + lVar5 * 4);
          lVar2 = (longlong)*(int *)(lVar2 + 4 + lVar5 * 4);
          if (lVar4 + 1 < lVar2) {
            lVar3 = lVar3 + 2;
            lVar4 = lVar4 + 2;
            do {
              lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + -4 + lVar4 * 4);
              lVar5 = *param_2;
              *(double *)(lVar5 + lVar6 * 8) =
                   *(double *)(lVar5 + lVar6 * 8) -
                   *(double *)(lVar5 + lVar8 * 8) *
                   *(double *)(*(longlong *)(param_1 + 0x18) + -8 + lVar3 * 8);
              if (lVar9 <= lVar3) break;
              lVar3 = lVar3 + 1;
              bVar1 = lVar4 < lVar2;
              lVar4 = lVar4 + 1;
            } while (bVar1);
          }
        }
      }
      else {
        local_128 = (longlong)*(int *)(lVar2 + lVar8 * 4);
        lVar4 = (longlong)*(int *)(lVar2 + 4 + lVar8 * 4) - (local_128 + lVar9);
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4);
        lVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar8 * 4) - lVar2;
        local_70 = lVar8 * 8 + *param_2;
        local_110 = local_120 + lVar2 * 8;
        local_58 = local_118;
        local_c0 = local_110;
        local_b8 = lVar9;
        local_b0 = lVar9;
        local_a8 = lVar5;
        lStack_68 = lVar9;
        FUN_1483c2b6a(&local_c0,&local_70,&local_70);
        local_c0 = local_110 + lVar9 * 8;
        local_88 = local_60;
        local_98 = local_70;
        lStack_90 = lStack_68;
        local_80 = local_58;
        local_f8 = local_108;
        local_e0 = &local_108;
        local_d8 = 0;
        local_c8 = lStack_100;
        local_f0 = lVar4;
        local_b8 = lVar4;
        local_b0 = lVar9;
        local_a8 = lVar5;
        FUN_1483c30a6(&local_f8,&local_c0);
        if (0 < lVar4) {
          lVar2 = 0;
          do {
            lVar9 = (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x28) + lVar3 * 4 + local_128 * 4 + lVar8 * -4
                            + lVar2 * 4);
            *(double *)(*param_2 + lVar9 * 8) =
                 *(double *)(*param_2 + lVar9 * 8) - *(double *)(local_108 + lVar2 * 8);
            *(undefined8 *)(local_108 + lVar2 * 8) = 0;
            lVar2 = lVar2 + 1;
          } while (lVar2 < lVar4);
        }
      }
      bVar1 = lVar7 < *(longlong *)(param_1 + 0x10);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  FUN_1400020a8(local_108);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c4566 FUN_1483c4566 body=307 status=ok
// SIG undefined FUN_1483c4566(void)

void FUN_1483c4566(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_3;
  lVar4 = param_3[1];
  if ((*param_1 == lVar5) && (*(longlong *)(param_1[3] + 8) == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar5 = param_2[1];
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        while (*(char *)((longlong)local_38 + lVar4) == '\x01') {
          lVar4 = lVar4 + 1;
          if (lVar5 <= lVar4) goto LAB_1483c468b;
        }
        *(undefined1 *)((longlong)local_38 + lVar4) = 1;
        iVar2 = *(int *)(*param_2 + lVar4 * 4);
        lVar5 = lVar4;
        while (lVar6 = (longlong)iVar2, lVar6 != lVar4) {
          lVar3 = *param_1;
          uVar1 = *(undefined8 *)(lVar3 + lVar6 * 8);
          *(undefined8 *)(lVar3 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
          *(undefined8 *)(lVar3 + lVar5 * 8) = uVar1;
          *(undefined1 *)((longlong)local_38 + lVar6) = 1;
          lVar5 = lVar6;
          iVar2 = *(int *)(*param_2 + lVar6 * 4);
        }
        lVar4 = lVar4 + 1;
        lVar5 = param_2[1];
      } while (lVar4 < lVar5);
    }
LAB_1483c468b:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar4) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_2 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c469a FUN_1483c469a body=1047 status=ok
// SIG undefined FUN_1483c469a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483c469a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined1 **local_d8;
  longlong *plStack_d0;
  undefined1 *local_c8;
  undefined1 **local_c0;
  undefined1 *local_b8;
  longlong lStack_b0;
  undefined1 *local_90 [2];
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_68;
  lVar1 = param_1 + 0x30;
  FUN_146de5a4e(lVar1);
  FUN_1483c5918(lVar1,(longlong *)(param_1 + 0x100));
  puVar12 = auStack_e8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1483c5d1c(lVar1);
    if ((uint)((ulonglong)(*(longlong *)(param_2 + 8) + -0x3fffffffffffffff) >> 0x3e) < 3) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    puVar12 = auStack_e8;
    puVar9 = *(undefined1 **)(param_2 + 0x18);
    if (puVar9 == (undefined1 *)0x0 || *(longlong *)(param_2 + 0x20) != 0) {
      uVar3 = *(longlong *)(param_2 + 8) * 4 + 1;
      if (uVar3 < 0x20001) {
        lVar14 = -(*(longlong *)(param_2 + 8) * 4 + 0x1fU & 0xfffffffffffffff0);
        puVar12 = auStack_e8 + lVar14;
        puVar9 = auStack_e8 + lVar14;
      }
      else {
        puVar9 = (undefined1 *)FUN_14001cc68(uVar3,0x10);
        puVar12 = auStack_e8;
        if (puVar9 == (undefined1 *)0x0) {
          FUN_14001cc68(0xffffffffffffffff,0x10);
          puVar12 = auStack_e8;
          puVar9 = (undefined1 *)0x0;
        }
      }
    }
    puVar13 = (undefined1 *)0x0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      puVar13 = puVar9;
    }
    uVar3 = *(ulonglong *)(param_2 + 8);
    uVar8 = uVar3;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      lStack_b0 = uVar3 + 1;
      local_78 = *(longlong *)(param_1 + 0x48);
      local_c0 = &local_b8;
      plStack_d0 = &local_78;
      local_d8 = local_90;
      local_c8 = &local_d9;
      local_b8 = puVar9;
      local_90[0] = puVar9;
      local_80 = lStack_b0;
      local_68 = lStack_b0;
      *(undefined8 *)(puVar12 + -0x28) = 0x1483c486e;
      FUN_1483c6342();
      uVar8 = *(ulonglong *)(param_2 + 8);
      puVar13 = puVar9;
    }
    if (0 < (longlong)uVar8) {
      lVar14 = 0;
      do {
        iVar4 = *(int *)(puVar9 + lVar14 * 4);
        *(int *)(*(longlong *)(param_1 + 0x48) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar14 * 4) * 4) = iVar4;
        lVar11 = lVar14 * 4;
        lVar10 = lVar14 * 4;
        lVar14 = lVar14 + 1;
        *(int *)(*(longlong *)(param_1 + 0x50) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar10) * 4) =
             *(int *)(puVar9 + lVar11 + 4) - iVar4;
      } while (lVar14 < *(longlong *)(param_2 + 8));
    }
    if ((uVar3 & 0x3fffffffffff8000) != 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x1483c48da;
      FUN_1400020a8(puVar13);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x120);
  local_d8 = (undefined1 **)0x0;
  plStack_d0 = (longlong *)0x0;
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c4729;
  FUN_1483c5d7c(lVar1,plVar2,&local_d8,0);
  if (*(char *)(param_1 + 0x1e8) != '\0') goto LAB_1483c473a;
  local_b8 = (undefined1 *)0x0;
  lStack_b0 = 0;
  local_78 = 0;
  lStack_70 = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c494b;
  FUN_1483c6193(uVar5,plVar2);
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar14 = lVar1 + 1;
  if (lVar14 == 0) {
LAB_1483c496b:
    lStack_70 = lVar14;
    *(undefined8 *)(puVar12 + -0x28) = 0x1483c4977;
    FUN_148291d6a(plVar2,&local_78,local_90);
    lVar14 = 0;
    lVar10 = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
LAB_1483c498d:
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      *(longlong *)(param_1 + 0x100) = lVar10;
      *(longlong *)(param_1 + 0x108) = lVar1;
      *(undefined8 *)(puVar12 + -0x28) = 0x1483c49ab;
      FUN_1400020a8(uVar6);
    }
  }
  else {
    if (lVar1 < 0) {
      local_78 = 0;
      goto LAB_1483c496b;
    }
    *(undefined8 *)(puVar12 + -0x28) = 0x1483c49f7;
    local_78 = FUN_141729f83();
    if (lVar1 == 0) goto LAB_1483c496b;
    lVar10 = 0;
    do {
      *(undefined4 *)(local_78 + (longlong)*(int *)(local_b8 + lVar10 * 4) * 4) =
           *(undefined4 *)(local_b8 + (longlong)*(int *)(*plVar2 + lVar10 * 4) * 4);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lStack_70 = lVar14;
    *(undefined8 *)(puVar12 + -0x28) = 0x1483c4a57;
    FUN_148291d6a(plVar2,&local_78,local_90);
    *(undefined8 *)(puVar12 + -0x28) = 0x1483c4a5f;
    lVar14 = FUN_141729f83(lVar1);
    lVar10 = 0;
    do {
      *(undefined4 *)(lVar14 + lVar10 * 4) = *(undefined4 *)(local_b8 + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x1483c4a95;
      lVar10 = FUN_141729f83();
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar11 * 4) =
             *(undefined4 *)
              (lVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar11 * 4) * 4);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      goto LAB_1483c498d;
    }
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c49bb;
  FUN_1400020a8(lVar14);
  lVar1 = local_78;
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c49cc;
  FUN_1400020a8(lVar1);
  puVar9 = local_b8;
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c49dd;
  FUN_1400020a8(puVar9);
LAB_1483c473a:
  ppuVar7 = local_d8;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)(puVar12 + -0x28) = 0x1483c474b;
  FUN_1400020a8(ppuVar7);
  if ((local_60 ^ (ulonglong)&local_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x28) = &UNK_1483c48ec;
  FUN_144d8e3a0();
}



// FUNCTION 1483c4ab6 FUN_1483c4ab6 body=3680 status=ok
// SIG undefined FUN_1483c4ab6(void)

void FUN_1483c4ab6(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *****pppppuVar7;
  undefined1 *puVar8;
  undefined8 *****pppppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined8 *****pppppuVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined8 ****ppppuVar20;
  undefined1 auStack_3f8 [32];
  undefined8 ****local_3d8;
  undefined8 ****local_3d0;
  undefined8 ****local_3c8;
  undefined8 ****local_3c0;
  undefined8 ****local_3b8;
  undefined8 ****local_3b0;
  undefined8 ***local_3a8;
  undefined8 **local_3a0;
  undefined8 ***local_398;
  undefined8 ****local_390;
  undefined8 ****local_388;
  undefined8 ****local_380;
  undefined8 ****local_378;
  undefined1 *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 ****local_358;
  undefined1 *local_350;
  longlong local_348;
  undefined8 ****local_340;
  undefined1 *local_338;
  longlong local_330;
  longlong local_328;
  undefined8 ****local_320;
  undefined8 ***local_318;
  undefined1 *local_310;
  longlong local_308;
  longlong lStack_300;
  undefined8 ***local_2f8;
  longlong local_2f0;
  undefined8 ***local_2e8;
  longlong local_2e0;
  undefined8 **local_2d8;
  longlong local_2d0;
  undefined8 ***local_2c8;
  undefined1 *puStack_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined8 ***local_2a8;
  longlong lStack_2a0;
  undefined8 ***local_298;
  longlong lStack_290;
  undefined8 **local_288;
  longlong lStack_280;
  undefined8 ***local_278;
  longlong local_270;
  undefined8 ***local_268;
  longlong local_260;
  undefined8 ****local_248 [2];
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  undefined **local_220;
  undefined4 local_214;
  undefined8 local_210;
  ios_base local_1a0 [96];
  undefined8 ***local_140;
  longlong local_138;
  undefined8 ***local_120;
  longlong local_118;
  undefined8 ***local_100;
  longlong local_f8;
  undefined8 ***local_e0;
  longlong local_d8;
  undefined8 ***local_c0;
  longlong local_b8;
  longlong local_a0;
  longlong local_98;
  undefined8 ***local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  *param_1 = 1;
  puVar17 = param_1 + 0x30;
  FUN_146de5a4e(puVar17);
  plVar1 = (longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    FUN_141729ef6(plVar1,*(undefined8 *)(param_2 + 8));
    if (0 < *(longlong *)(param_2 + 8)) {
      lVar4 = 0;
      do {
        *(int *)(*plVar1 + lVar4 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(longlong *)(param_2 + 8));
    }
    goto LAB_1483c4bab;
  }
  FUN_1483c5d1c();
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 == 0) {
    lVar6 = *(longlong *)(param_2 + 8);
    lVar19 = *(longlong *)(param_2 + 0x18);
LAB_1483c4b50:
    if (0 < lVar6) {
      lVar4 = 0;
      do {
        iVar2 = *(int *)(lVar19 + lVar4 * 4);
        *(int *)(*(longlong *)(param_1 + 0x48) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar4 * 4) * 4) = iVar2;
        lVar15 = lVar4 * 4;
        lVar6 = lVar4 * 4;
        lVar4 = lVar4 + 1;
        *(int *)(*(longlong *)(param_1 + 0x50) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar6) * 4) =
             *(int *)(lVar19 + 4 + lVar15) - iVar2;
      } while (lVar4 < *(longlong *)(param_2 + 8));
      lVar4 = *(longlong *)(param_2 + 0x20);
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    lVar19 = FUN_144a7d36f(-(ulonglong)(lVar6 + 1U >> 0x3e != 0) | lVar6 * 4 + 4U);
    if (-1 < lVar6) {
      lVar15 = *(longlong *)(param_1 + 0x48);
      lVar11 = -1;
      do {
        *(undefined4 *)(lVar19 + 4 + lVar11 * 4) = *(undefined4 *)(lVar15 + 4 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      goto LAB_1483c4b50;
    }
  }
  if ((lVar19 != 0) && (lVar4 != 0)) {
    thunk_FUN_1400020a8(lVar19);
  }
LAB_1483c4bab:
  puVar18 = *(undefined1 **)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar5 = FUN_146de5690(puVar17);
  lVar19 = *(longlong *)(param_1 + 0x1f0) * lVar4;
  pppppuVar14 = (undefined8 *****)(param_1 + 0x130);
  local_3d8 = pppppuVar14;
  lVar6 = FUN_1483c63fa(lVar4,puVar18,uVar5,*(undefined8 *)(param_1 + 0x218));
  if (lVar6 == 0) {
    local_278 = (undefined8 ****)0x0;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        local_278 = (undefined8 ****)0x0;
      }
      else {
        local_278 = (undefined8 ***)FUN_141729f83(lVar4);
      }
    }
    local_214 = 0;
    local_270 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_278,&local_228,local_248);
    local_288 = (undefined8 ***)0x0;
    lStack_280 = 0;
    if (0 < lVar4) {
      local_288 = (undefined8 **)FUN_141729f83(lVar4);
    }
    local_214 = 0;
    lStack_280 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_288,&local_228,local_248);
    local_298 = (undefined8 ****)0x0;
    lStack_290 = 0;
    if (0 < lVar4) {
      local_298 = (undefined8 ***)FUN_141729f83(lVar4);
    }
    local_214 = 0;
    lStack_290 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_298,&local_228,local_248);
    local_2a8 = (undefined8 ****)0x0;
    lStack_2a0 = 0;
    lVar6 = lStack_2a0;
    if ((lVar19 == 0) || (lVar6 = lVar19, lVar19 < 1)) {
      lStack_2a0 = lVar6;
      local_2b8 = 0;
    }
    else {
      local_2a8 = (undefined8 ***)FUN_141729f83(lVar19);
      lStack_2b0 = 0;
      lStack_2a0 = lVar19;
      local_2b8 = FUN_141729f83(lVar19);
    }
    local_2c8 = (undefined8 ****)0x0;
    puStack_2c0 = (undefined1 *)0x0;
    local_380 = pppppuVar14;
    lStack_2b0 = lVar19;
    if (0 < (longlong)puVar18) {
      local_2c8 = (undefined8 ***)FUN_141729f83(puVar18);
    }
    local_214 = 0;
    local_370 = puVar18;
    puStack_2c0 = puVar18;
    local_220 = (undefined **)puVar18;
    FUN_146de04ef(&local_2c8,&local_228,local_248);
    local_2d0 = lVar4 * 3;
    local_2d8 = (undefined8 ***)0x0;
    if (0 < lVar4) {
      local_2d8 = (undefined8 **)FUN_141729f83(local_2d0);
    }
    local_214 = 0;
    local_220 = (undefined **)local_2d0;
    FUN_146de04ef(&local_2d8,&local_228,local_248);
    local_220 = (undefined **)lStack_2a0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2a8,&local_228,local_248);
    local_220 = (undefined **)lStack_2b0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2b8,&local_228,local_248);
    local_2e8 = (undefined8 ****)0x0;
    if (0 < lVar19) {
      local_2e8 = (undefined8 ***)FUN_146de3b53(lVar19);
    }
    local_210 = 0;
    local_2e0 = lVar19;
    local_220 = (undefined **)lVar19;
    FUN_146de41cc(&local_2e8,&local_228,local_248);
    local_2f8 = (undefined8 ****)0x0;
    local_2f0 = (*(longlong *)(param_1 + 0x200) + lVar4) * *(longlong *)(param_1 + 0x1f0);
    if (local_2f0 < lVar4) {
      local_2f0 = lVar4;
    }
    if (0 < local_2f0) {
      local_2f8 = (undefined8 ***)FUN_146de3b53(local_2f0);
    }
    local_210 = 0;
    local_220 = (undefined **)local_2f0;
    FUN_146de41cc(&local_2f8,&local_228,local_248);
    lVar6 = *(longlong *)(param_1 + 0x108);
    local_308 = 0;
    lStack_300 = 0;
    if (lVar6 != 0) {
      if (lVar6 < 1) {
        local_308 = 0;
      }
      else {
        local_308 = FUN_141729f83();
      }
      lStack_300 = lVar6;
      if (0 < (int)(uint)lVar6) {
        uVar10 = 0;
        do {
          *(int *)(local_308 + (longlong)*(int *)(*plVar1 + uVar10 * 4) * 4) = (int)uVar10;
          uVar10 = uVar10 + 1;
        } while (((uint)lVar6 & 0x7fffffff) != uVar10);
      }
    }
    puVar18 = local_370;
    local_318 = (undefined8 ****)0x0;
    if (0 < (longlong)local_370) {
      local_318 = (undefined8 ***)FUN_141729f83(local_370);
    }
    local_310 = puVar18;
    if (param_1[0x1e8] == '\x01') {
      local_3d8 = &local_318;
      FUN_1483c65bc(puVar18,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1f8),&local_2d8);
    }
    else {
      local_3d8 = &local_318;
      FUN_1483c68b2(puVar18,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1f8),&local_2d8);
    }
    pppppuVar14 = (undefined8 *****)(param_1 + 0x110);
    FUN_141729ef6(pppppuVar14,lVar4);
    local_220 = *(undefined ***)(param_1 + 0x118);
    local_214 = 0xffffffff;
    local_378 = pppppuVar14;
    FUN_146de04ef(pppppuVar14,&local_228,local_248);
    local_220 = (undefined **)local_2d0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2d8,&local_228,local_248);
    pppppuVar14 = (undefined8 *****)local_380;
    *(undefined8 *)(param_1 + 0x238) = 1;
    **(undefined4 **)(param_1 + 0x140) = 0xffffffff;
    local_220 = *(undefined ***)(param_1 + 0x138);
    local_214 = 0;
    FUN_146de04ef(local_380,&local_228,local_248);
    **(undefined4 **)(param_1 + 0x170) = 0;
    **(undefined4 **)(param_1 + 0x1c0) = 0;
    **(undefined4 **)(param_1 + 0x180) = 0;
    **(undefined4 **)(param_1 + 0x130) = 0;
    if (0 < (longlong)puVar18) {
      local_338 = param_1 + 2;
      pppppuVar7 = (undefined8 *****)0x0;
      local_368 = lVar4;
      local_350 = puVar17;
      do {
        local_3d0 = (undefined8 ****)&local_328;
        lVar6 = *(longlong *)(param_1 + 0x1f0);
        puVar12 = (undefined1 *)(lVar6 + (longlong)pppppuVar7);
        if ((longlong)puVar18 < lVar6 + (longlong)pppppuVar7) {
          puVar12 = puVar18;
        }
        puVar8 = (undefined1 *)((longlong)pppppuVar7 + 1);
        if ((longlong)pppppuVar7 + 1 < (longlong)puVar12) {
          puVar8 = puVar12;
        }
        lVar19 = 0;
        do {
          if ((longlong)puVar12 <= (longlong)((longlong)pppppuVar7 + lVar19 + 1))
          goto LAB_1483c51b0;
          lVar15 = lVar19 + 1;
          lVar11 = lVar19 * 4;
          lVar19 = lVar15;
        } while (*(int *)((longlong)local_318 + lVar11 + (longlong)pppppuVar7 * 4 + 4) == -1);
        puVar8 = (undefined1 *)(lVar15 + (longlong)pppppuVar7);
        lVar6 = lVar15;
LAB_1483c51b0:
        lVar19 = (longlong)puVar18 - (longlong)pppppuVar7;
        if (puVar8 != puVar18) {
          lVar19 = lVar6;
        }
        local_390 = &local_298;
        local_398 = &local_288;
        local_3a0 = &local_2d8;
        local_3a8 = &local_2c8;
        local_3b8 = &local_278;
        local_3c0 = (undefined8 ****)&local_2b8;
        local_3c8 = &local_2e8;
        local_3d8 = local_378;
        local_3b0 = &local_2a8;
        local_388 = pppppuVar14;
        FUN_1483c69ca(lVar4,lVar19,pppppuVar7,puVar17);
        lVar6 = local_328;
        local_3c8 = &local_278;
        local_3d0 = &local_2f8;
        local_3d8 = &local_2e8;
        local_3c0 = &local_2a8;
        local_3b8 = pppppuVar14;
        FUN_1483c6bfa(lVar4,lVar19,pppppuVar7,local_328);
        pppppuVar9 = (undefined8 *****)(lVar19 + (longlong)pppppuVar7);
        if (0 < lVar19) {
          local_348 = lVar4 - lVar6;
          local_360 = lVar6;
          pppppuVar14 = pppppuVar7;
          local_340 = (undefined8 *****)(lVar19 + (longlong)pppppuVar7);
          do {
            lVar19 = local_348;
            lVar15 = ((longlong)pppppuVar14 - (longlong)pppppuVar7) * lVar4;
            lVar6 = lVar15 * 4;
            local_a0 = local_2b8 + lVar6;
            ppppuVar20 = (undefined8 ****)(lVar6 + (longlong)local_2a8);
            local_3d8 = *(undefined8 *****)(param_1 + 0x200);
            local_390 = local_380;
            local_398 = &local_298;
            local_3a0 = &local_288;
            local_3a8 = &local_2d8;
            local_3b0 = &local_2c8;
            local_3b8 = &local_80;
            local_3c0 = &local_278;
            local_3c8 = (undefined8 ****)&local_a0;
            local_3d0 = (undefined8 ****)&local_330;
            local_330 = local_360;
            local_98 = lVar4;
            local_80 = ppppuVar20;
            local_78 = lVar4;
            FUN_1483c74ec(local_338,lVar4,pppppuVar14,local_378);
            lVar6 = local_330;
            ppppuVar16 = (undefined8 ****)(local_2e8 + lVar15);
            local_e0 = (undefined8 ***)(local_360 * 4 + (longlong)local_278);
            local_3c0 = local_380;
            local_3d0 = &local_c0;
            local_3d8 = &local_e0;
            local_3c8 = pppppuVar7;
            local_100 = ppppuVar16;
            local_f8 = lVar4;
            local_d8 = lVar19;
            local_c0 = ppppuVar20;
            local_b8 = lVar4;
            lVar19 = FUN_1483c7802(pppppuVar14,local_330 - local_360,&local_100,&local_2f8);
            ppppuVar3 = local_380;
            if (lVar19 != 0) {
              pcVar13 = "UNABLE TO EXPAND MEMORY IN COLUMN_BMOD() ";
LAB_1483c571b:
              FUN_1401d7cf8(param_1 + 0x10,pcVar13);
              *(undefined4 *)(param_1 + 4) = 1;
              param_1[8] = 0;
              goto LAB_1483c572b;
            }
            local_3c8 = local_380;
            local_3d0 = &local_120;
            local_3d8 = local_378;
            local_140 = ppppuVar20;
            local_138 = lVar4;
            local_120 = ppppuVar16;
            local_118 = lVar4;
            lVar4 = FUN_1483c7c58(pppppuVar14,lVar6,&local_278,&local_140);
            ppppuVar16 = local_378;
            if (lVar4 != 0) {
              pcVar13 = "UNABLE TO EXPAND MEMORY IN COPY_TO_UCOL() ";
              goto LAB_1483c571b;
            }
            local_3d0 = ppppuVar3;
            local_3d8 = &local_320;
            lVar4 = FUN_1483c7e5a(pppppuVar14,param_1 + 0x220,local_378,&local_308);
            if (lVar4 != 0) {
              FUN_1401d7cf8(param_1 + 0x10,"THE MATRIX IS STRUCTURALLY SINGULAR ... ZERO COLUMN AT "
                           );
              FUN_1483c8064((basic_ostream<char,std::char_traits<char>_> *)&local_228,1);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        ((basic_ostream<char,std::char_traits<char>_> *)&local_228,lVar4);
              FUN_1470ab43c((basic_streambuf<char,std::char_traits<char>_> *)&local_220,local_248);
              pppppuVar14 = local_248;
              if (0xf < local_230) {
                pppppuVar14 = (undefined8 *****)local_248[0];
              }
              FUN_144a6594a(param_1 + 0x10,pppppuVar14,local_238);
              FUN_1401d9a90(local_248);
              *(undefined4 *)(param_1 + 4) = 1;
              param_1[8] = 0;
              *(undefined ***)((longlong)&local_228 + (longlong)*(int *)(local_228 + 4)) =
                   &PTR_LAB_14ae75850;
              *(int *)((longlong)&local_230 + (longlong)*(int *)(local_228 + 4) + 4) =
                   *(int *)(local_228 + 4) + -0x88;
              local_220 = &PTR_FUN_14a179f40;
              FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)&local_220);
              std::basic_streambuf<char,std::char_traits<char>_>::
              ~basic_streambuf<char,std::char_traits<char>_>
                        ((basic_streambuf<char,std::char_traits<char>_> *)&local_220);
              std::ios_base::~ios_base(local_1a0);
              goto LAB_1483c572b;
            }
            if ((undefined8 *****)local_320 != pppppuVar14) {
              *(longlong *)(param_1 + 0x238) = -*(longlong *)(param_1 + 0x238);
            }
            local_260 = local_368;
            local_3c0 = local_380;
            local_3c8 = &local_2c8;
            local_3d0 = &local_268;
            local_3d8 = &local_278;
            local_358 = pppppuVar14;
            local_268 = ppppuVar20;
            FUN_1483c8152(pppppuVar14,ppppuVar16,local_320,lVar6);
            if (0 < lVar6) {
              lVar4 = 0;
              do {
                *(undefined4 *)
                 ((longlong)ppppuVar20 + (longlong)*(int *)((longlong)local_278 + lVar4 * 4) * 4) =
                     0xffffffff;
                lVar4 = lVar4 + 1;
              } while (lVar6 != lVar4);
            }
            pppppuVar14 = (undefined8 *****)((longlong)local_358 + 1);
            pppppuVar9 = (undefined8 *****)local_340;
            puVar17 = local_350;
            lVar4 = local_368;
          } while ((longlong)pppppuVar14 < (longlong)local_340);
        }
        pppppuVar7 = pppppuVar9;
        puVar18 = local_370;
        pppppuVar14 = (undefined8 *****)local_380;
      } while ((longlong)pppppuVar9 < (longlong)local_370);
    }
    ppppuVar3 = local_378;
    uVar5 = FUN_1483c82d8(local_378);
    *(undefined8 *)(param_1 + 0x238) = uVar5;
    uVar5 = FUN_1483c82d8(plVar1);
    *(undefined8 *)(param_1 + 0x240) = uVar5;
    FUN_1483c83ae(puVar18,param_1 + 0x228,param_1 + 0x230);
    FUN_1483c843e(puVar18,ppppuVar3,pppppuVar14);
    *(longlong *)(param_1 + 0x78) = lVar4;
    *(undefined1 **)(param_1 + 0x80) = puVar18;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x180);
    *(longlong *)(param_1 + 0x88) =
         (longlong)*(int *)(*(longlong *)(param_1 + 0x140) + (longlong)puVar18 * 4);
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x130);
    param_1[0xc0] = 0;
    *(undefined1 **)(param_1 + 200) = puVar18;
    *(longlong *)(param_1 + 0xd0) = lVar4;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[8] = 1;
LAB_1483c572b:
    FUN_1400020a8(local_318);
    FUN_1400020a8(local_308);
    FUN_1400020a8(local_2f8);
    FUN_1400020a8(local_2e8);
    FUN_1400020a8(local_2d8);
    FUN_1400020a8(local_2c8);
    FUN_1400020a8(local_2b8);
    FUN_1400020a8(local_2a8);
    FUN_1400020a8(local_298);
    FUN_1400020a8(local_288);
    FUN_1400020a8(local_278);
  }
  else {
    FUN_1401d7cf8(param_1 + 0x10,"UNABLE TO ALLOCATE WORKING MEMORY\n\n");
    param_1[8] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c5918 FUN_1483c5918 body=1027 status=ok
// SIG undefined FUN_1483c5918(void)

void FUN_1483c5918(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_1b8 [32];
  int *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  undefined4 *local_170;
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  undefined4 local_144;
  int local_140;
  int local_13c;
  int local_138 [20];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar11 = *(ulonglong *)(param_1 + 8);
  uVar6 = FUN_146de5690();
  uVar15 = (uint)uVar11;
  if ((int)(uVar15 | uVar3 | uVar6) < 0) {
    lVar17 = (uVar11 << 0x20) + 0x100000000;
    local_160 = 0xffffffff;
  }
  else {
    lVar17 = (uVar11 << 0x20) + 0x100000000;
    local_160 = (ulonglong)
                ((int)((ulonglong)((lVar17 >> 0x1d) * 3) >> 2) +
                 uVar15 + uVar3 * 4 + uVar6 * 2 + uVar6 / 5 + 4);
  }
  local_158 = uVar11 << 0x20;
  piVar9 = (int *)0x0;
  local_150 = (ulonglong)uVar3;
  memset(local_d8,0,0x90);
  local_e8 = 0x3fe0000000000000;
  local_e0 = 0x3fe0000000000000;
  if (0 < lVar17 >> 0x20 && lVar17 != 0) {
    piVar9 = (int *)FUN_141729f83();
  }
  if ((int)local_160 < 1) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_141729f83();
  }
  uVar5 = local_150;
  if (-1 < (int)uVar15) {
    uVar12 = 0;
    do {
      piVar9[uVar12] = *(int *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar15 + 1 != uVar12);
  }
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      piVar10[uVar12] = *(int *)(*(longlong *)(param_1 + 0x30) + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while ((uVar6 & 0x7fffffff) != uVar12);
  }
  local_138[6] = 0;
  local_138[7] = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[8] = 0;
  local_138[9] = 0;
  local_138[10] = 0;
  local_138[0xb] = 0;
  local_138[0xc] = 0;
  local_138[0xd] = 0;
  local_138[0xe] = 0;
  local_138[0xf] = 0;
  local_138[0x10] = 0;
  local_138[0x11] = 0;
  local_138[0x12] = 0;
  local_138[0x13] = 0;
  local_138[4] = -1;
  local_138[5] = -1;
  if (piVar10 == (int *)0x0) {
    local_138[2] = 0;
    local_138[3] = -1;
  }
  else if (piVar9 == (int *)0x0) {
    local_138[2] = 0;
    local_138[3] = -2;
  }
  else {
    iVar14 = (int)local_150;
    if (iVar14 < 0) {
      local_138[2] = 0;
      local_138[3] = -3;
      local_138[5] = 0xffffffff;
      local_138[4] = iVar14;
    }
    else {
      if ((int)uVar15 < 0) {
        FUN_141729ef6(param_2,local_158 >> 0x20);
        goto LAB_1483c5b41;
      }
      iVar4 = piVar9[uVar15 & 0x7fffffff];
      if (iVar4 < 0) {
        local_138[2] = 0;
        local_138[3] = -5;
        local_138[5] = 0xffffffff;
        local_138[4] = iVar4;
      }
      else if (*piVar9 == 0) {
        iVar7 = uVar15 * 6 + 6;
        iVar13 = uVar15 + iVar14 * 4 + iVar7 + iVar4 * 2 + 4;
        iVar16 = (int)local_160;
        if (iVar16 < iVar13) {
          local_138[2] = 0;
          local_138[3] = -7;
          local_138[5] = iVar16;
          local_138[4] = iVar13;
        }
        else {
          iVar16 = iVar16 - (iVar14 * 4 + uVar15 * 6);
          iVar13 = iVar16 + -10;
          local_160 = CONCAT44(local_160._4_4_,iVar13);
          piVar1 = piVar10 + iVar13;
          piVar2 = piVar10 + (iVar16 + -10 + iVar7);
          local_188 = local_138;
          local_198 = piVar10;
          local_190 = piVar9;
          iVar7 = FUN_143b24920(local_150 & 0xffffffff,uVar11 & 0xffffffff,piVar2,piVar1);
          if (iVar7 != 0) {
            local_170 = &local_144;
            local_178 = &local_13c;
            local_180 = &local_140;
            local_188 = (int *)&local_e8;
            local_198 = piVar10;
            local_190 = piVar9;
            FUN_143b24c87(uVar5 & 0xffffffff,uVar11 & 0xffffffff,piVar2,piVar1);
            local_170 = (undefined4 *)CONCAT44(local_170._4_4_,iVar4 * 2);
            local_178 = (int *)CONCAT44(local_178._4_4_,local_144);
            local_180 = (int *)CONCAT44(local_180._4_4_,local_13c);
            local_198 = piVar1;
            local_190 = piVar10;
            local_188 = piVar9;
            uVar8 = FUN_143b24f5e(uVar5 & 0xffffffff,uVar11 & 0xffffffff,local_160 & 0xffffffff,
                                  piVar2);
            FUN_143b25823(uVar11 & 0xffffffff,piVar1,piVar9);
            local_138[1] = uVar15 - local_13c;
            local_138[0] = iVar14 - local_140;
            local_138[2] = uVar8;
          }
        }
      }
      else {
        local_138[2] = 0;
        local_138[3] = -6;
        local_138[5] = 0xffffffff;
        local_138[4] = *piVar9;
      }
    }
  }
  FUN_141729ef6(param_2,local_158 >> 0x20);
  if (0 < (int)uVar15) {
    uVar11 = 0;
    do {
      *(int *)(*param_2 + (longlong)piVar9[uVar11] * 4) = (int)uVar11;
      uVar11 = uVar11 + 1;
    } while ((uVar15 & 0x7fffffff) != uVar11);
  }
LAB_1483c5b41:
  FUN_1400020a8(piVar10);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    FUN_1400020a8(piVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c5d1c FUN_1483c5d1c body=96 status=ok
// SIG undefined FUN_1483c5d1c(void)

void FUN_1483c5d1c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = *(longlong *)(param_1 + 8) * 4;
    uVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    if (0 < *(longlong *)(param_1 + 8)) {
      lVar2 = 0;
      do {
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 4) -
             *(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(longlong *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 1483c5d7c FUN_1483c5d7c body=1046 status=ok
// SIG undefined FUN_1483c5d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483c5d7c(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_79;
  undefined1 local_78 [8];
  longlong local_70;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *(ulonglong *)(param_1 + 8);
  uVar13 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar7 = (uint)local_c0;
  uVar12 = uVar7;
  if ((int)uVar13 < (int)uVar7) {
    uVar12 = uVar13;
  }
  lVar17 = (longlong)(int)uVar7;
  local_90 = 0;
  local_b8 = param_4;
  if ((local_c0 & 0xffffffff) != 0) {
    if (lVar17 < 1) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_141729f83(lVar17);
    }
  }
  local_64 = 0;
  local_88 = lVar17;
  local_70 = lVar17;
  FUN_146de04ef(&local_90,local_78,&local_a0);
  local_a0 = 0;
  if (0 < lVar17) {
    local_a0 = FUN_141729f83(lVar17);
  }
  local_64 = 0;
  local_98 = lVar17;
  local_70 = lVar17;
  FUN_146de04ef(&local_a0,local_78,&local_79);
  FUN_141729ef6(param_2,*(undefined8 *)(param_1 + 8));
  local_b0 = (longlong)(int)uVar13;
  FUN_141729ef6(param_3);
  local_70 = param_3[1];
  local_64 = uVar7;
  FUN_146de04ef(param_3,local_78,&local_79);
  auVar4 = _DAT_149931e80;
  iVar5 = uVar12 - 1;
  iVar16 = 1;
  if (1 < (int)uVar12) {
    iVar16 = iVar5;
  }
  iVar3 = iVar5 / iVar16;
  uVar11 = (longlong)iVar5 % (longlong)iVar16 & 0xffffffff;
  if (0 < (int)uVar12) {
    lVar17 = *param_3;
    lVar10 = (ulonglong)uVar12 - 1;
    auVar19._8_4_ = (int)lVar10;
    auVar19._0_8_ = lVar10;
    auVar19._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = (ulonglong)(uint)(iVar3 * 3);
    auVar20 = pmovsxbq(in_XMM1,0x302);
    auVar21 = pmovsxbq(in_XMM2,0x100);
    iVar16 = 0;
    auVar19 = auVar19 ^ _DAT_149931e80;
    lVar15 = auVar19._0_8_;
    auVar22 = pmovsxbq(in_XMM5,0x404);
    lVar10 = 0;
    do {
      auVar23 = auVar21 ^ auVar4;
      lVar18 = auVar19._8_8_;
      if ((bool)(~(lVar15 < auVar23._0_8_) & 1)) {
        *(int *)(lVar17 + lVar10) = iVar16;
      }
      if (auVar23._8_8_ <= lVar18) {
        *(int *)(lVar17 + 4 + lVar10) = iVar3 + iVar16;
      }
      auVar23 = auVar20 ^ auVar4;
      if (auVar23._0_8_ <= lVar15) {
        *(int *)(lVar17 + 8 + lVar10) = iVar3 * 2 + iVar16;
      }
      if (auVar23._8_8_ <= lVar18) {
        *(int *)(lVar17 + 0xc + lVar10) = iVar3 * 3 + iVar16;
      }
      lVar18 = auVar21._8_8_;
      auVar21._0_8_ = auVar21._0_8_ + auVar22._0_8_;
      auVar21._8_8_ = lVar18 + auVar22._8_8_;
      lVar18 = auVar20._8_8_;
      auVar20._0_8_ = auVar20._0_8_ + auVar22._0_8_;
      auVar20._8_8_ = lVar18 + auVar22._8_8_;
      lVar10 = lVar10 + 0x10;
      iVar16 = iVar16 + iVar3 * 4;
    } while ((ulonglong)(uVar12 + 3 >> 2) << 4 != lVar10);
  }
  if (0 < (int)(uint)local_c0) {
    local_a8 = (ulonglong)((uint)local_c0 & 0x7fffffff);
    uVar8 = 0;
    do {
      iVar5 = (int)uVar8;
      iVar16 = iVar5;
      if (local_b8 != 0) {
        iVar16 = *(int *)(local_b8 + uVar8 * 4);
      }
      lVar17 = (longlong)iVar16;
      uVar11 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar17 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        uVar14 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar17 * 4);
      }
      else {
        uVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar17 * 4) + uVar11;
      }
      if ((longlong)uVar11 < (longlong)uVar14) {
        lVar17 = *(longlong *)(param_1 + 0x30);
        do {
          lVar10 = (longlong)*(int *)(lVar17 + uVar11 * 4);
          iVar16 = *(int *)(*param_3 + lVar10 * 4);
          if (iVar5 < iVar16) {
            iVar16 = iVar5;
          }
          *(int *)(*param_3 + lVar10 * 4) = iVar16;
          uVar11 = uVar11 + 1;
        } while (uVar14 != uVar11);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_a8);
    uVar8 = 0;
    do {
      uVar11 = CONCAT71((int7)(uVar11 >> 8),local_b0 <= (longlong)uVar8);
      iVar5 = (int)uVar8;
      *(int *)(local_a0 + uVar8 * 4) = iVar5;
      *(int *)(local_90 + uVar8 * 4) = iVar5;
      *(uint *)(*param_2 + uVar8 * 4) = (uint)local_c0;
      iVar16 = iVar5;
      if (local_b8 != 0) {
        iVar16 = *(int *)(local_b8 + uVar8 * 4);
      }
      lVar10 = (longlong)iVar16;
      lVar17 = *(longlong *)(param_1 + 0x30);
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar10 * 4);
      }
      else {
        lVar10 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4) + lVar15;
      }
      bVar2 = lVar10 <= lVar15;
      if ((longlong)uVar8 < local_b0) {
        uVar14 = uVar8 & 0xffffffff;
LAB_1483c609a:
        do {
          uVar6 = uVar8;
          if (!bVar2) {
            uVar6 = (ulonglong)*(int *)(lVar17 + lVar15 * 4);
          }
          uVar12 = *(uint *)(*param_3 + uVar6 * 4);
          uVar7 = (uint)uVar14;
          if ((longlong)(int)uVar12 < (longlong)uVar8) {
            uVar13 = *(uint *)(local_a0 + (longlong)(int)uVar12 * 4);
            while( true ) {
              lVar18 = (longlong)(int)uVar13;
              uVar1 = *(uint *)(local_a0 + lVar18 * 4);
              if (uVar1 == uVar13) break;
              *(uint *)(local_a0 + (longlong)(int)uVar12 * 4) = uVar1;
              uVar13 = *(uint *)(local_a0 + (longlong)(int)uVar1 * 4);
              uVar12 = uVar1;
            }
            uVar12 = *(uint *)(local_90 + lVar18 * 4);
            if (uVar8 != uVar12) {
              *(int *)(*param_2 + (longlong)(int)uVar12 * 4) = iVar5;
              *(uint *)(local_a0 + (longlong)(int)uVar7 * 4) = uVar13;
              *(int *)(local_90 + lVar18 * 4) = iVar5;
              uVar7 = uVar13;
            }
          }
          bVar9 = (byte)uVar11 | uVar6 == uVar8;
          uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar9);
          lVar15 = lVar15 + 1;
          bVar2 = lVar10 <= lVar15;
          uVar14 = (ulonglong)uVar7;
        } while ((bVar2 & bVar9) == 0);
      }
      else {
        uVar14 = uVar8 & 0xffffffff;
        if (lVar15 < lVar10) goto LAB_1483c609a;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_a8);
  }
  FUN_1400020a8(local_a0,uVar11);
  FUN_1400020a8(local_90);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c6193 FUN_1483c6193 body=430 status=ok
// SIG undefined FUN_1483c6193(void)

void FUN_1483c6193(uint param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  undefined1 local_51;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  lStack_60 = 0;
  local_78 = 0;
  lVar7 = (longlong)(int)(param_1 + 1);
  lVar5 = lVar7;
  if (param_1 + 1 != 0) {
    if ((int)param_1 < 0) {
      local_78 = 0;
      local_68 = 0;
    }
    else {
      local_68 = FUN_141729f83(lVar7);
      lStack_60 = lVar7;
      local_78 = FUN_141729f83(lVar7);
      lVar5 = lStack_60;
    }
  }
  lStack_60 = lVar5;
  local_3c = 0;
  local_70 = lVar7;
  local_48 = lVar7;
  FUN_146de04ef(&local_78,local_50,&local_51);
  FUN_141729ef6(param_3,lVar7);
  local_48 = param_3[1];
  local_3c = 0;
  FUN_146de04ef(param_3,local_50,&local_51);
  local_3c = 0xffffffff;
  local_48 = lVar7;
  FUN_146de04ef(&local_68,local_50,&local_51);
  if (0 < (int)param_1) {
    uVar6 = (ulonglong)param_1;
    do {
      lVar5 = (longlong)*(int *)(*param_2 + -4 + uVar6 * 4);
      *(undefined4 *)(local_78 + -4 + uVar6 * 4) = *(undefined4 *)(local_68 + lVar5 * 4);
      *(int *)(local_68 + lVar5 * 4) = (int)(uVar6 - 1);
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  if (param_1 != 0) {
    uVar2 = 0;
    uVar4 = param_1;
    do {
      uVar6 = (ulonglong)uVar4;
      lVar5 = (longlong)(int)uVar4;
      uVar4 = *(uint *)(local_68 + lVar5 * 4);
      if (uVar4 == 0xffffffff) {
        *(uint *)(*param_3 + lVar5 * 4) = uVar2;
        uVar4 = *(uint *)(local_78 + lVar5 * 4);
        uVar3 = uVar2;
        while (uVar4 == 0xffffffff) {
          uVar3 = uVar3 + 1;
          uVar6 = (ulonglong)*(int *)(*param_2 + (longlong)(int)uVar6 * 4);
          *(uint *)(*param_3 + uVar6 * 4) = uVar3;
          uVar4 = *(uint *)(local_78 + uVar6 * 4);
        }
        uVar2 = uVar3 + 1;
        if (uVar3 == param_1) break;
      }
    } while (uVar2 != param_1);
  }
  FUN_1400020a8(local_78);
  FUN_1400020a8(local_68);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c6342 FUN_1483c6342 body=148 status=ok
// SIG undefined FUN_1483c6342(void)

void FUN_1483c6342(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_1483c63d6(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_1483c63d6(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 1483c63d6 FUN_1483c63d6 body=35 status=ok
// SIG undefined FUN_1483c63d6(void)

void FUN_1483c63d6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483c63fa FUN_1483c63fa body=449 status=ok
// SIG undefined FUN_1483c63fa(void)

longlong FUN_1483c63fa(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)(param_5 + 0xb0);
  *(undefined8 *)(param_5 + 0xb0) = 0;
  lVar5 = ((param_3 + 1) * param_4) / param_2;
  if (lVar5 < param_1) {
    param_1 = lVar5;
  }
  plVar1 = (longlong *)(param_5 + 0x68);
  *(longlong *)(param_5 + 0x68) = param_1 * param_2;
  plVar4 = (longlong *)(param_5 + 0xa0);
  *(longlong *)(param_5 + 0xa0) = param_1 * param_2;
  lVar5 = 4;
  if (4 < param_4) {
    lVar5 = param_4;
  }
  lVar5 = lVar5 * (param_3 + 1);
  lVar6 = lVar5 + 3;
  if (-1 < lVar5) {
    lVar6 = lVar5;
  }
  plVar2 = (longlong *)(param_5 + 0x60);
  *(longlong *)(param_5 + 0x60) = lVar6 >> 2;
  param_2 = param_2 + 1;
  FUN_141729ef6(param_5,param_2);
  FUN_141729ef6(param_5 + 0x10,param_2);
  FUN_141729ef6(param_5 + 0x50,param_2);
  FUN_141729ef6(param_5 + 0x40,param_2);
  FUN_141729ef6(param_5 + 0x90,param_2);
  do {
    lVar5 = FUN_1483c84e4(param_5 + 0x20,plVar1,0,plVar3);
    if ((((lVar5 < 0) || (lVar5 = FUN_1483c84e4(param_5 + 0x70,plVar4,0,plVar3), lVar5 < 0)) ||
        (lVar5 = FUN_1483c86e8(param_5 + 0x30,plVar2,0,0,plVar3), lVar5 < 0)) ||
       (lVar5 = FUN_1483c86e8(param_5 + 0x80,plVar4,0,1,plVar3), lVar5 < 0)) {
      lVar5 = *plVar1 / 2;
      *plVar1 = lVar5;
      *plVar4 = *plVar4 / 2;
      *plVar2 = *plVar2 / 2;
      if (lVar5 < param_3) {
        return lVar5;
      }
    }
  } while (((*(longlong *)(param_5 + 0x28) == 0) || (*(longlong *)(param_5 + 0x78) == 0)) ||
          ((*(longlong *)(param_5 + 0x38) == 0 || (*(longlong *)(param_5 + 0x88) == 0))));
  *plVar3 = *plVar3 + 1;
  return 0;
}



// FUNCTION 1483c65bc FUN_1483c65bc body=756 status=ok
// SIG undefined FUN_1483c65bc(void)

void FUN_1483c65bc(ulonglong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_79;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1483c6193();
  lVar10 = param_1 + 1;
  if ((lVar10 == 0) || ((longlong)param_1 < 0)) {
    local_a8 = 0;
    local_b8 = 0;
    lVar4 = 0;
    uStack_a0 = param_1;
  }
  else {
    lVar4 = FUN_141729f83(lVar10);
    lVar5 = 0;
    do {
      *(int *)(lVar4 + (longlong)*(int *)(local_98 + lVar5 * 4) * 4) = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar10 != lVar5);
    local_a8 = 0;
    uStack_a0 = 0;
    if (param_1 != 0) {
      lVar5 = FUN_141729f83(param_1);
      local_a8 = lVar5;
      uStack_a0 = param_1;
      local_b8 = FUN_141729f83(lVar10);
      uVar3 = 0;
      do {
        *(undefined4 *)(lVar5 + (longlong)*(int *)(local_98 + uVar3 * 4) * 4) =
             *(undefined4 *)(local_98 + (longlong)*(int *)(*param_2 + uVar3 * 4) * 4);
        uVar3 = uVar3 + 1;
      } while (param_1 != uVar3);
      bVar2 = true;
      goto LAB_1483c6634;
    }
    local_b8 = FUN_141729f83(1);
  }
  bVar2 = false;
LAB_1483c6634:
  lStack_b0 = lVar10;
  FUN_148291d6a(&local_b8,param_2,local_78);
  FUN_148291d6a(param_2,&local_a8,local_78);
  local_70 = param_5[1];
  local_64 = 0xffffffff;
  FUN_146de04ef(param_5,local_78,&local_79);
  local_70 = param_4[1];
  local_64 = 0;
  FUN_146de04ef(param_4,local_78,&local_79);
  if (bVar2) {
    uVar3 = 0;
    do {
      uVar6 = (ulonglong)*(int *)(*param_2 + uVar3 * 4);
      if (uVar6 != param_1) {
        lVar10 = *param_4;
        *(int *)(lVar10 + uVar6 * 4) =
             *(int *)(lVar10 + uVar3 * 4) + *(int *)(lVar10 + uVar6 * 4) + 1;
      }
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
    lVar10 = *param_4;
    uVar3 = 0;
    do {
      uVar6 = uVar3;
      do {
        uVar7 = uVar6;
        uVar6 = (ulonglong)*(int *)(*param_2 + uVar7 * 4);
        if (uVar6 == param_1) break;
      } while (*(int *)(lVar10 + uVar6 * 4) < param_3);
      iVar11 = (int)param_1;
      if ((longlong)uVar7 < (longlong)uVar3) {
        iVar9 = *(int *)(lVar4 + uVar7 * 4);
        if (uVar7 - uVar3 == (longlong)(iVar9 - iVar11)) {
LAB_1483c6743:
          *(int *)(*param_5 + (longlong)iVar11 * 4) = iVar9;
        }
      }
      else {
        uVar8 = param_1 & 0xffffffff;
        uVar6 = uVar3;
        do {
          uVar1 = *(uint *)(lVar4 + uVar6 * 4);
          if ((int)uVar1 < (int)uVar8) {
            uVar8 = (ulonglong)uVar1;
          }
          iVar11 = (int)uVar8;
          uVar6 = uVar6 + 1;
        } while (uVar7 + 1 != uVar6);
        iVar9 = *(int *)(lVar4 + uVar7 * 4);
        if (uVar7 - uVar3 == (longlong)(iVar9 - iVar11)) goto LAB_1483c6743;
        do {
          if (*(int *)(*param_4 + uVar3 * 4) == 0) {
            iVar11 = *(int *)(lVar4 + uVar3 * 4);
            *(int *)(*param_5 + (longlong)iVar11 * 4) = iVar11;
          }
          uVar3 = uVar3 + 1;
        } while (uVar7 + 1 != uVar3);
      }
      lVar10 = *param_4;
      uVar3 = uVar7;
      do {
        uVar3 = uVar3 + 1;
        if ((longlong)param_1 <= (longlong)uVar3) break;
      } while (*(int *)(lVar10 + uVar3 * 4) != 0);
    } while ((longlong)uVar3 < (longlong)param_1);
  }
  FUN_148291d6a(param_2,&local_b8,local_78);
  FUN_1400020a8(local_b8);
  FUN_1400020a8(local_a8);
  FUN_1400020a8(lVar4);
  FUN_1400020a8(local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c68b2 FUN_1483c68b2 body=279 status=ok
// SIG undefined FUN_1483c68b2(void)

void FUN_1483c68b2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_5[1];
  local_3c = 0xffffffff;
  FUN_146de04ef(param_5,local_50,&local_51);
  local_48 = param_4[1];
  local_3c = 0;
  FUN_146de04ef(param_4,local_50,&local_51);
  if (0 < param_1) {
    lVar1 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_2 + lVar1 * 4);
      if (lVar2 != param_1) {
        lVar4 = *param_4;
        *(int *)(lVar4 + lVar2 * 4) = *(int *)(lVar4 + lVar1 * 4) + *(int *)(lVar4 + lVar2 * 4) + 1;
      }
      lVar1 = lVar1 + 1;
    } while (param_1 != lVar1);
    lVar1 = *param_4;
    lVar2 = 0;
    do {
      lVar4 = lVar2;
      do {
        lVar3 = lVar4;
        lVar4 = (longlong)*(int *)(*param_2 + lVar3 * 4);
        if (lVar4 == param_1) break;
      } while (*(int *)(lVar1 + lVar4 * 4) < param_3);
      *(int *)(*param_5 + lVar2 * 4) = (int)lVar3;
      lVar1 = *param_4;
      lVar2 = lVar3;
      do {
        lVar2 = lVar2 + 1;
        if (param_1 <= lVar2) break;
      } while (*(int *)(lVar1 + lVar2 * 4) != 0);
    } while (lVar2 < param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c69ca FUN_1483c69ca body=559 status=ok
// SIG undefined FUN_1483c69ca(void)

void FUN_1483c69ca(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,undefined8 param_8,
                  undefined8 param_9,longlong *param_10,undefined8 param_11,longlong *param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = param_1 * 4 + *param_12;
  *param_6 = 0;
  local_b8 = param_2 + param_3;
  uVar5 = (ulonglong)(int)param_3;
  local_c0 = param_4;
  local_b0 = param_3;
  local_a0 = param_3;
  if ((longlong)uVar5 < local_b8) {
    do {
      local_90 = (uVar5 - local_b0) * param_1;
      lVar8 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x18) + uVar5 * 4);
      if (*(longlong *)(local_c0 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x18) + 4 + uVar5 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(local_c0 + 0x20) + uVar5 * 4) + lVar8;
      }
      if (lVar8 < lVar6) {
        local_a8 = local_90 * 4 + *param_10;
        lVar7 = local_90 * 8;
        lVar1 = *param_7;
        lVar2 = *(longlong *)(local_c0 + 0x28);
        lVar3 = *(longlong *)(local_c0 + 0x30);
        do {
          lVar4 = (longlong)*(int *)(lVar3 + lVar8 * 4);
          *(undefined8 *)(lVar7 + lVar1 + lVar4 * 8) = *(undefined8 *)(lVar2 + lVar8 * 8);
          if (*(int *)(*param_12 + lVar4 * 4) != (int)uVar5) {
            local_60 = param_12[1];
            local_88 = local_a8;
            local_d0 = &local_a0;
            local_e0 = &local_90;
            local_e8 = param_15;
            local_f0 = param_14;
            local_f8 = param_13;
            local_100 = &local_68;
            local_108 = param_11;
            local_110 = &local_88;
            local_118 = param_9;
            local_d8 = lVar4;
            local_80 = param_1;
            local_68 = *param_12;
            FUN_1483c8c80(uVar5 & 0xffffffff,param_5,param_6,param_8);
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < local_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c6bfa FUN_1483c6bfa body=2289 status=ok
// SIG undefined FUN_1483c6bfa(void)

void FUN_1483c6bfa(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  ulonglong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f1;
  longlong **local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  longlong **local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_70 [2];
  longlong *local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_180 = param_3;
  local_140 = param_2;
  local_128 = param_4;
  if (0 < param_4) {
    param_3 = param_3 + param_2;
    plVar1 = param_9 + 6;
    local_148 = param_9 + 4;
    lVar5 = param_1 * 4;
    local_160 = param_1 * 8;
    lVar4 = 0;
    local_178 = lVar5;
    do {
      local_168 = (ulonglong)*(int *)(*param_7 + -4 + param_4 * 4);
      local_158 = (longlong)*(int *)(*param_9 + (longlong)*(int *)(param_9[2] + local_168 * 4) * 4);
      uVar9 = local_168 - local_158;
      local_188 = (longlong *)(longlong)*(int *)(param_9[10] + local_158 * 4);
      lVar6 = (longlong)*(int *)(param_9[10] + 4 + local_158 * 4) - (longlong)local_188;
      local_170 = (longlong *)(~uVar9 + lVar6);
      local_110 = lVar4;
      local_108 = param_4;
      if (local_140 < 1) {
        if (0 < (longlong)uVar9) {
          lVar8 = 0;
          lVar4 = 0;
          goto LAB_1483c6f9f;
        }
      }
      else {
        lVar15 = local_168 * 4;
        piVar2 = (int *)(*param_8 + lVar15);
        lVar8 = 0;
        lVar4 = 0;
        lVar7 = local_180;
        do {
          if ((longlong)*piVar2 != -1) {
            lVar16 = (local_168 + 1) - (longlong)*piVar2;
            lVar8 = lVar8 + 1;
            if (lVar4 < lVar16) {
              lVar4 = lVar16;
            }
          }
          lVar7 = lVar7 + 1;
          piVar2 = (int *)((longlong)piVar2 + lVar5);
        } while (lVar7 < param_3);
        if ((longlong)uVar9 < 1) {
          lVar16 = 0;
          lVar7 = 0;
          lVar4 = local_160;
          lVar8 = local_180;
          local_130 = lVar6;
          do {
            local_d0 = (longlong *)(*param_5 + lVar16);
            local_b8 = param_5;
            local_a0 = param_5[1];
            lVar6 = (longlong)*(int *)(*param_8 + lVar15 + lVar7 * 4);
            local_c8 = param_1;
            local_b0 = lVar7;
            if (lVar6 != -1) {
              lVar5 = local_168 - lVar6;
              local_100 = (longlong)*(int *)(param_9[8] + local_158 * 4);
              local_1b8 = (longlong *)(*(int *)(param_9[8] + 4 + local_158 * 4) - local_100);
              plVar3 = (longlong *)(lVar6 - local_158);
              local_1a8 = plVar1;
              if (lVar5 == 2) {
                local_1a0 = local_188;
                local_1b0 = local_170;
                local_198 = plVar3;
                FUN_1483ca7a6(&local_d0,param_6,local_148,&local_100);
                lVar4 = local_160;
                lVar5 = local_178;
              }
              else if (lVar5 == 1) {
                local_1a0 = local_188;
                local_1b0 = local_170;
                local_198 = plVar3;
                FUN_1483ca54c(&local_d0,param_6,local_148,&local_100);
                lVar4 = local_160;
                lVar5 = local_178;
              }
              else if (lVar5 == 0) {
                local_1a8 = local_188;
                local_1b8 = local_170;
                local_1b0 = plVar1;
                local_1a0 = plVar3;
                FUN_1483ca43a(&local_d0,local_148,&local_100);
                lVar4 = local_160;
                lVar5 = local_178;
              }
              else {
                local_198 = local_188;
                local_1a8 = local_170;
                local_1b0 = local_1b8;
                local_1b8 = &local_100;
                local_1a0 = plVar1;
                local_190 = plVar3;
                FUN_1483ca9fc(lVar5 + 1,&local_d0,param_6,local_148);
                lVar4 = local_160;
                lVar5 = local_178;
              }
            }
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + param_1;
            lVar16 = lVar16 + lVar4;
          } while (lVar8 < param_3);
        }
        else {
LAB_1483c6f9f:
          local_120 = (longlong *)(lVar4 + 1U & 0xfffffffffffffffe);
          local_d0 = (longlong *)*param_6;
          if (0 < local_140) {
            local_150 = (longlong)local_188 - local_158;
            lVar15 = 0;
            lVar5 = local_180;
            do {
              lVar7 = (lVar5 - local_180) * param_1;
              lVar16 = (longlong)*(int *)(lVar7 * 4 + *param_8 + local_168 * 4);
              if (lVar16 != -1) {
                lVar13 = *param_5;
                uVar10 = ~(local_168 - lVar16);
                lVar11 = uVar10 + lVar4;
                if (lVar11 != 0 && SCARRY8(uVar10,lVar4) == lVar11 < 0) {
                  lVar14 = 0;
                  do {
                    local_d0[(longlong)local_120 * lVar15 + lVar14] = 0;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < lVar11);
                }
                if (-1 < (longlong)(local_168 - lVar16)) {
                  lVar11 = local_150 + lVar16;
                  uVar10 = ~local_168;
                  do {
                    local_d0[(longlong)local_120 * lVar15 + lVar4 + lVar16 + uVar10] =
                         *(longlong *)
                          (lVar7 * 8 + lVar13 + (longlong)*(int *)(*plVar1 + lVar11 * 4) * 8);
                    lVar11 = lVar11 + 1;
                    uVar10 = uVar10 + 1;
                  } while (-uVar10 != lVar16);
                }
                lVar15 = lVar15 + 1;
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < param_3);
          }
          local_138 = local_168 + 1;
          lVar5 = (longlong)*(int *)(param_9[8] + local_158 * 4);
          plVar12 = (longlong *)(*(int *)(param_9[8] + 4 + local_158 * 4) - lVar5);
          lVar5 = ((longlong)plVar12 + 1) * ((local_138 - lVar4) - local_158) + lVar5;
          local_98 = (longlong *)(lVar5 * 8 + param_9[4]);
          local_130 = lVar6;
          local_118 = uVar9;
          local_c8 = lVar4;
          local_c0 = lVar8;
          local_b8 = local_120;
          local_90 = (longlong *)lVar4;
          local_88 = lVar4;
          local_80 = plVar12;
          FUN_1483cac82(&local_98,&local_d0,&local_d0);
          lVar6 = local_140;
          plVar3 = local_170;
          local_100 = lVar5 + lVar4;
          local_150 = local_100 * 8 + param_9[4];
          local_80 = (longlong *)
                     ((local_130 - local_118) - ((longlong)(local_130 - local_118) >> 0x3f) &
                     0xfffffffffffffffe);
          uVar10 = (longlong)(local_150 << 0x3c) >> 0x3f;
          uVar9 = uVar10 + 2;
          if (uVar10 < 0xfffffffffffffffe) {
            uVar9 = uVar10;
          }
          if ((local_150 & 7) != 0) {
            uVar9 = 0;
          }
          local_98 = (longlong *)((longlong)local_120 * local_140 * 8 + *param_6 + uVar9 * 8);
          local_90 = local_170;
          local_58[0] = 0;
          local_f0 = local_70;
          local_e8 = local_58;
          local_e0 = &local_f1;
          local_d8 = &local_98;
          local_88 = lVar8;
          local_70[0] = local_98;
          local_60 = local_80;
          FUN_1483cd09c(&local_f0);
          local_198 = local_80;
          local_1a0 = local_98;
          local_1a8 = local_b8;
          local_1b0 = local_d0;
          local_1b8 = plVar12;
          FUN_1483c8e7e(local_90,local_88,lVar4,local_150);
          lVar5 = local_178;
          if (0 < lVar6) {
            local_150 = (longlong)local_188 - local_158;
            local_188 = (longlong *)((longlong)local_188 * 4 + local_158 * -4);
            lVar8 = 0;
            lVar6 = local_180;
            do {
              lVar7 = (lVar6 - local_180) * param_1;
              lVar15 = (longlong)*(int *)(lVar7 * 4 + *param_8 + local_168 * 4);
              if (lVar15 != -1) {
                lVar16 = lVar7 * 8 + *param_5;
                lVar7 = local_150 + lVar15;
                if (-1 < (longlong)(local_168 - lVar15)) {
                  lVar13 = 0;
                  do {
                    *(longlong *)
                     (lVar16 + (longlong)
                               *(int *)((longlong)local_188 + lVar13 * 4 + *plVar1 + lVar15 * 4) * 8
                     ) = local_d0[(longlong)local_b8 * lVar8 +
                                  lVar15 + ((lVar4 + lVar13 + -1) - local_168)];
                    local_d0[(longlong)local_b8 * lVar8 +
                             lVar15 + ((lVar4 + lVar13 + -1) - local_168)] = 0;
                    lVar13 = lVar13 + 1;
                  } while (local_138 - lVar15 != lVar13);
                  lVar7 = lVar7 + lVar13;
                  plVar3 = local_170;
                }
                if (0 < (longlong)plVar3) {
                  lVar15 = 0;
                  do {
                    lVar13 = (longlong)*(int *)(*plVar1 + lVar7 * 4 + lVar15 * 4);
                    *(double *)(lVar16 + lVar13 * 8) =
                         *(double *)(lVar16 + lVar13 * 8) -
                         (double)local_98[(longlong)local_80 * lVar8 + lVar15];
                    local_98[(longlong)local_80 * lVar8 + lVar15] = 0;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 < (longlong)plVar3);
                }
                lVar8 = lVar8 + 1;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < param_3);
          }
        }
      }
      param_4 = local_108 + -1;
      lVar4 = local_110 + 1;
    } while (lVar4 != local_128);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c74ec FUN_1483c74ec body=788 status=ok
// SIG undefined FUN_1483c74ec(void)

void FUN_1483c74ec(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7,undefined8 param_8,
                  undefined4 *param_9,longlong *param_10,longlong *param_11,undefined8 param_12,
                  undefined8 param_13,longlong *param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar6 = (undefined4 *)param_14[2];
  iVar3 = puVar6[param_3];
  local_90 = (longlong)iVar3;
  local_b0 = &local_90;
  local_98 = (longlong)*(int *)(param_14[10] + param_3 * 4);
  lVar7 = param_2 * 8 + *param_11;
  local_a8 = param_14;
  iVar8 = (int)param_3;
  local_b8 = param_3;
  local_a0 = param_1;
  if (0 < param_2) {
    lVar12 = 0;
    plVar10 = param_14 + 6;
    do {
      lVar4 = (longlong)*(int *)(*param_7 + lVar12 * 4);
      if (lVar4 == -1) break;
      *(undefined4 *)(*param_7 + lVar12 * 4) = 0xffffffff;
      if ((longlong)*(int *)(lVar7 + lVar4 * 4) != param_3) {
        local_88 = *param_9;
        uStack_84 = param_9[1];
        uStack_80 = param_9[2];
        uStack_7c = param_9[3];
        local_78 = *(undefined8 *)(param_9 + 4);
        local_d0 = &local_b8;
        local_e0 = &local_98;
        local_100 = &local_68;
        local_108 = param_10;
        local_110 = &local_88;
        local_118 = param_8;
        local_f8 = param_12;
        local_f0 = param_13;
        local_e8 = param_14;
        local_d8 = lVar4;
        local_c0 = plVar10;
        local_68 = lVar7;
        local_60 = param_2;
        FUN_1483cd8a2(param_3 & 0xffffffff,param_4,param_6);
        plVar10 = local_c0;
      }
      lVar12 = lVar12 + 1;
    } while (param_2 != lVar12);
    puVar6 = (undefined4 *)param_14[2];
    iVar3 = puVar6[param_3];
  }
  lVar7 = param_3 - 1;
  if (param_3 == 0) {
    *puVar6 = 0;
    iVar3 = 0;
  }
  else {
    lVar12 = param_14[10];
    lVar9 = (longlong)*(int *)(*param_14 + (longlong)iVar3 * 4);
    iVar11 = *(int *)(lVar12 + param_3 * 4);
    uVar1 = *(uint *)(lVar12 + lVar7 * 4);
    lVar4 = (longlong)(int)uVar1;
    if (((longlong)(param_3 - lVar9) < param_5) &&
       (local_98 - iVar11 == (longlong)(int)(~uVar1 + iVar11))) {
      if (local_90 != -1) goto LAB_1483c76de;
    }
    else {
      local_90 = -1;
    }
    if (lVar9 < (longlong)(param_3 - 2)) {
      uVar2 = *(uint *)(lVar12 + 4 + lVar9 * 4);
      uVar5 = (ulonglong)uVar2;
      *(uint *)(lVar12 + lVar7 * 4) = uVar2;
      iVar11 = (iVar11 - uVar1) + uVar2;
      *(int *)(*param_10 + lVar7 * 4) = iVar11;
      *(int *)(param_14[10] + param_3 * 4) = iVar11;
      if (lVar4 < local_98) {
        uVar5 = (ulonglong)(int)uVar2;
        do {
          *(undefined4 *)(param_14[6] + uVar5 * 4) = *(undefined4 *)(param_14[6] + lVar4 * 4);
          lVar4 = lVar4 + 1;
          uVar5 = uVar5 + 1;
        } while (local_98 != lVar4);
      }
      local_98 = (longlong)(int)uVar5;
      puVar6 = (undefined4 *)param_14[2];
    }
    iVar3 = iVar3 + 1;
    puVar6[param_3] = iVar3;
  }
LAB_1483c76de:
  *(int *)(*param_14 + 4 + (longlong)iVar3 * 4) = iVar8 + 1;
  *(int *)(param_14[2] + 4 + (longlong)iVar8 * 4) = iVar3;
  *(undefined4 *)(*param_10 + param_3 * 4) = (undefined4)local_98;
  *(undefined4 *)(param_14[10] + 4 + (longlong)iVar8 * 4) = (undefined4)local_98;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483c7802 FUN_1483c7802 body=1108 status=ok
// SIG undefined FUN_1483c7802(void)

longlong FUN_1483c7802(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                      longlong *param_5,longlong *param_6,ulonglong param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_129;
  longlong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  longlong *local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar1 = *(int *)(param_8[2] + param_1 * 4);
  local_150 = param_1;
  local_140 = param_4;
  if (0 < param_2) {
    local_158 = param_8 + 6;
    local_148 = param_8 + 4;
    do {
      uVar4 = (ulonglong)*(int *)(*param_5 + -4 + param_2 * 4);
      iVar2 = *(int *)(param_8[2] + uVar4 * 4);
      if (iVar1 != iVar2) {
        uVar8 = (ulonglong)*(int *)(*param_8 + (longlong)iVar2 * 4);
        uVar6 = uVar8;
        if ((longlong)uVar8 <= (longlong)param_7) {
          uVar6 = param_7;
        }
        lVar11 = uVar6 - uVar8;
        lVar3 = (longlong)*(int *)(param_8[8] + uVar6 * 4);
        local_138 = lVar11 + lVar3;
        uVar9 = (ulonglong)*(int *)(*param_6 + uVar4 * 4);
        if ((longlong)uVar9 <= (longlong)param_7) {
          uVar9 = param_7;
        }
        lVar5 = (longlong)*(int *)(param_8[10] + uVar8 * 4);
        local_160 = (longlong *)(lVar11 + lVar5);
        local_188 = (longlong *)
                    (((*(int *)(param_8[10] + 4 + uVar8 * 4) - lVar5) - lVar11) + ~uVar4 + uVar6);
        local_190 = (longlong *)(*(int *)(param_8[8] + 4 + uVar6 * 4) - lVar3);
        if (uVar9 == uVar4) {
          local_190 = local_158;
          local_198 = local_188;
          local_188 = local_160;
          local_180 = (longlong *)(uVar9 - uVar6);
          FUN_1483cdb68(param_3,local_148,&local_138);
        }
        else {
          local_180 = local_158;
          local_198 = &local_138;
          local_178 = local_160;
          local_170 = (longlong *)(uVar9 - uVar6);
          FUN_1483cdc7a((uVar4 - uVar9) + 1,param_3,local_140,local_148);
        }
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  lVar11 = (longlong)*(int *)(param_8[8] + local_150 * 4);
  uVar4 = (ulonglong)*(int *)(*param_8 + (longlong)iVar1 * 4);
  uVar8 = (*(int *)(param_8[10] + 4 + uVar4 * 4) + lVar11) -
          (longlong)*(int *)(param_8[10] + uVar4 * 4);
  uVar6 = (uVar8 - ((longlong)(uVar8 + 1) >> 0x3f)) + 1 & 0xfffffffffffffffe;
  local_158 = (longlong *)(uVar6 - uVar8);
  local_160 = param_8 + 4;
  while (plVar10 = local_158, param_8[0xd] < (longlong)uVar6) {
    lVar3 = FUN_1483c84e4(local_160,param_8 + 0xd,lVar11,param_8 + 0x16);
    if (lVar3 != 0) goto LAB_1483c7a8c;
  }
  iVar1 = *(int *)(param_8[10] + uVar4 * 4);
  lVar3 = (longlong)iVar1;
  if (iVar1 < *(int *)(param_8[10] + 4 + uVar4 * 4)) {
    do {
      lVar5 = (longlong)*(int *)(param_8[6] + lVar3 * 4);
      *(undefined8 *)(param_8[4] + lVar11 * 8) = *(undefined8 *)(*param_3 + lVar5 * 8);
      *(undefined8 *)(*param_3 + lVar5 * 8) = 0;
      lVar11 = lVar11 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_8[10] + 4 + uVar4 * 4));
  }
  if (uVar6 != uVar8) {
    local_128 = lVar11 * 8 + param_8[4];
    uStack_78 = &local_128;
    local_120 = local_158;
    local_110 = local_160;
    puStack_f8 = (undefined8 *)param_8[5];
    puStack_88 = local_58;
    local_58[0] = 0;
    local_90 = &local_c8;
    local_80 = &local_129;
    local_108 = lVar11;
    local_c8 = local_128;
    local_b8 = puStack_f8;
    FUN_1483c314c();
    lVar11 = lVar11 + (longlong)plVar10;
  }
  *(int *)(param_8[8] + 4 + local_150 * 4) = (int)lVar11;
  if ((longlong)param_7 < (longlong)uVar4) {
    param_7 = uVar4;
  }
  puVar12 = (undefined8 *)(local_150 - param_7);
  if (puVar12 != (undefined8 *)0x0 && (longlong)param_7 <= local_150) {
    lVar11 = param_8[8];
    lVar13 = (longlong)*(int *)(lVar11 + param_7 * 4) + (param_7 - uVar4);
    lVar5 = (uVar4 - local_150) +
            ((longlong)*(int *)(param_8[10] + 4 + uVar4 * 4) -
            (longlong)*(int *)(param_8[10] + uVar4 * 4));
    lVar3 = (longlong)*(int *)(lVar11 + local_150 * 4);
    lVar7 = (param_7 - uVar4) + lVar3;
    plVar10 = (longlong *)(*(int *)(lVar11 + 4 + local_150 * 4) - lVar3);
    local_128 = param_8[4] + lVar13 * 8;
    local_90 = (longlong *)(param_8[4] + lVar7 * 8);
    uStack_78 = local_160;
    local_60 = param_8[5];
    local_120 = puVar12;
    local_118 = puVar12;
    local_110 = plVar10;
    puStack_88 = puVar12;
    local_70 = lVar7;
    FUN_1483cdf00(&local_128,&local_90,&local_90);
    local_128 = param_8[4] + lVar13 * 8 + (longlong)puVar12 * 8;
    local_a8 = lVar7 + (longlong)puVar12;
    local_c8 = param_8[4] + local_a8 * 8;
    local_b0 = local_160;
    local_98 = param_8[5];
    local_100 = (undefined4)local_90;
    uStack_fc = local_90._4_4_;
    puStack_f8 = puStack_88;
    local_f0 = (undefined4)local_80;
    uStack_ec = local_80._4_4_;
    uStack_e8 = (undefined4)uStack_78;
    uStack_e4 = uStack_78._4_4_;
    local_e0 = (undefined4)local_70;
    uStack_dc = local_70._4_4_;
    uStack_d8 = uStack_68;
    uStack_d4 = uStack_64;
    local_d0 = local_60;
    local_58[0] = 0xbff0000000000000;
    local_120 = (undefined8 *)lVar5;
    local_118 = puVar12;
    local_110 = plVar10;
    local_c0 = lVar5;
    FUN_1483ce19e(&local_c8,&local_128);
  }
  lVar3 = 0;
LAB_1483c7a8c:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1483c7c58 FUN_1483c7c58 body=513 status=ok
// SIG undefined FUN_1483c7c58(void)

longlong FUN_1483c7c58(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = param_7[0x12];
  iVar8 = *(int *)(lVar11 + param_1 * 4);
  if (0 < param_2) {
    iVar2 = *(int *)(param_7[2] + param_1 * 4);
    plVar1 = param_7 + 0x14;
    lVar10 = 0;
    lVar11 = param_2;
    do {
      uVar12 = (ulonglong)*(int *)(*param_3 + -4 + lVar11 * 4);
      iVar3 = *(int *)(param_7[2] + uVar12 * 4);
      if ((iVar2 != iVar3) && (lVar9 = (longlong)*(int *)(*param_4 + uVar12 * 4), lVar9 != -1)) {
        lVar4 = (longlong)*(int *)(*param_7 + (longlong)iVar3 * 4);
        lVar4 = (lVar9 - lVar4) + (longlong)*(int *)(param_7[10] + lVar4 * 4);
        lVar7 = (longlong)iVar8;
        while (*plVar1 < (longlong)((uVar12 - lVar9) + lVar7 + 1)) {
          lVar5 = FUN_1483c84e4(param_7 + 0xe,plVar1,lVar7,param_7 + 0x16);
          if (lVar5 != 0) {
            return lVar5;
          }
          lVar5 = FUN_1483c86e8(param_7 + 0x10,plVar1,lVar7,1,param_7 + 0x16);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
        if (-1 < (longlong)(uVar12 - lVar9)) {
          lVar5 = 0;
          do {
            lVar6 = (longlong)*(int *)(param_7[6] + lVar4 * 4);
            *(undefined4 *)(param_7[0x10] + lVar7 * 4) = *(undefined4 *)(*param_5 + lVar6 * 4);
            *(undefined8 *)(param_7[0xe] + lVar7 * 8) = *(undefined8 *)(*param_6 + lVar6 * 8);
            *(undefined8 *)(*param_6 + lVar6 * 8) = 0;
            lVar7 = lVar7 + 1;
            lVar4 = lVar4 + 1;
            lVar5 = lVar5 + -1;
          } while (~uVar12 + lVar9 != lVar5);
          iVar8 = iVar8 - (int)lVar5;
        }
      }
      lVar11 = lVar11 + -1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != param_2);
    lVar11 = param_7[0x12];
  }
  *(int *)(lVar11 + 4 + param_1 * 4) = iVar8;
  return 0;
}



// FUNCTION 1483c7e5a FUN_1483c7e5a body=522 status=ok
// SIG undefined FUN_1483c7e5a(void)

longlong FUN_1483c7e5a(longlong param_1,double *param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  
  lVar12 = (longlong)*(int *)(*param_6 + (longlong)*(int *)(param_6[2] + param_1 * 4) * 4);
  lVar8 = param_1 - lVar12;
  lVar16 = (longlong)*(int *)(param_6[10] + lVar12 * 4);
  lVar7 = *(int *)(param_6[10] + 4 + lVar12 * 4) - lVar16;
  iVar9 = *(int *)(*param_4 + param_1 * 4);
  if (lVar8 < lVar7) {
    lVar4 = param_6[8];
    iVar2 = *(int *)(lVar4 + 4 + lVar12 * 4);
    lVar10 = (longlong)*(int *)(lVar4 + lVar12 * 4);
    lVar5 = param_6[4];
    lVar18 = lVar5 + lVar10 * 8;
    lVar13 = (longlong)*(int *)(lVar4 + param_1 * 4);
    lVar4 = lVar5 + lVar13 * 8;
    lVar17 = lVar16 * 4 + param_6[6];
    lVar15 = -1;
    lVar14 = lVar8;
    lVar16 = lVar8;
    dVar19 = -1.0;
    do {
      dVar20 = ABS(*(double *)(lVar4 + lVar14 * 8));
      lVar6 = lVar14;
      if (dVar20 <= dVar19) {
        dVar20 = dVar19;
        lVar6 = lVar16;
      }
      lVar16 = lVar6;
      if (*(int *)(lVar17 + lVar14 * 4) == iVar9) {
        lVar15 = lVar14;
      }
      lVar14 = lVar14 + 1;
      dVar19 = dVar20;
    } while (lVar14 < lVar7);
    if (0.0 < dVar20) {
      if ((-1 < lVar15) &&
         (dVar19 = *(double *)(lVar4 + lVar15 * 8),
         dVar19 != 0.0 && dVar20 * *param_2 <= ABS(dVar19))) {
        lVar16 = lVar15;
      }
      lVar14 = (longlong)*(int *)(lVar17 + lVar16 * 4);
      *param_5 = lVar14;
      *(int *)(*param_3 + lVar14 * 4) = (int)param_1;
      if (lVar16 != lVar8) {
        uVar3 = *(undefined4 *)(lVar17 + lVar16 * 4);
        *(undefined4 *)(lVar17 + lVar16 * 4) = *(undefined4 *)(lVar17 + lVar8 * 4);
        *(undefined4 *)(lVar17 + lVar8 * 4) = uVar3;
        if (-1 < lVar8) {
          lVar14 = (param_1 - lVar12) + 1;
          lVar15 = param_1 * 8 + lVar12 * -8;
          do {
            uVar1 = *(undefined8 *)(lVar18 + lVar16 * 8);
            *(undefined8 *)(lVar18 + lVar16 * 8) = *(undefined8 *)(lVar18 + lVar15);
            *(undefined8 *)(lVar18 + lVar15) = uVar1;
            lVar18 = lVar18 + (longlong)iVar2 * 8 + lVar10 * -8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      lVar16 = lVar8 + 1;
      if (lVar16 < lVar7) {
        dVar19 = *(double *)(lVar4 + lVar8 * 8);
        pdVar11 = (double *)((param_1 + lVar13) * 8 + lVar12 * -8 + lVar5);
        do {
          pdVar11 = pdVar11 + 1;
          *pdVar11 = *pdVar11 * (1.0 / dVar19);
          lVar16 = lVar16 + 1;
        } while (lVar16 < lVar7);
        return 0;
      }
      return 0;
    }
    if (0.0 <= dVar20) {
      iVar9 = *(int *)(lVar17 + lVar16 * 4);
    }
  }
  *param_5 = (longlong)iVar9;
  *(int *)(*param_3 + (longlong)iVar9 * 4) = (int)param_1;
  return param_1 + 1;
}



// FUNCTION 1483c8064 FUN_1483c8064 body=237 status=ok
// SIG undefined FUN_1483c8064(void)

longlong * FUN_1483c8064(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_14ae75844;
    std::ios_base::ios_base((ios_base *)(param_1 + 0x11));
    param_1[0x11] = (longlong)&PTR_FUN_149f63f58;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_14ae75850;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x88;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_FUN_149f63f60;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x10;
  std::basic_ios<char,std::char_traits<char>_>::init
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),
             (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 1),false);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_14ae75850;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 1));
  param_1[1] = (longlong)&PTR_FUN_14a179f40;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 4;
  return param_1;
}



// FUNCTION 1483c8152 FUN_1483c8152 body=389 status=ok
// SIG undefined FUN_1483c8152(void)

void FUN_1483c8152(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 < 1) {
    return;
  }
  iVar2 = *(int *)(param_8[2] + param_1 * 4);
  lVar9 = 0;
LAB_1483c8196:
  iVar3 = *(int *)(*param_5 + lVar9 * 4);
  lVar7 = (longlong)iVar3;
  if (((*(int *)(*param_6 + lVar7 * 4) != -1) &&
      (iVar4 = *(int *)(param_8[2] + lVar7 * 4), iVar4 != *(int *)(param_8[2] + 4 + lVar7 * 4))) &&
     (iVar4 != iVar2)) {
    iVar5 = *(int *)(param_8[10] + 4 + lVar7 * 4);
    if ((iVar5 <= *(int *)(*param_7 + lVar7 * 4)) &&
       (iVar6 = *(int *)(param_8[10] + lVar7 * 4), lVar13 = (longlong)iVar6, iVar6 < iVar5)) {
      lVar11 = (longlong)iVar5 + -1;
      lVar8 = lVar13 + -1;
      do {
        if (*(int *)(param_8[6] + 4 + lVar8 * 4) == param_3) {
          iVar4 = *(int *)(*param_8 + (longlong)iVar4 * 4);
          goto LAB_1483c8219;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar11);
    }
  }
  goto LAB_1483c82ba;
LAB_1483c8219:
  do {
    lVar8 = param_8[6];
    iVar5 = *(int *)(lVar8 + lVar11 * 4);
    if (*(int *)(*param_2 + (longlong)iVar5 * 4) == -1) {
LAB_1483c82a7:
      lVar11 = lVar11 + -1;
    }
    else {
      iVar6 = *(int *)(lVar8 + lVar13 * 4);
      if (*(int *)(*param_2 + (longlong)iVar6 * 4) == -1) {
        *(int *)(lVar8 + lVar13 * 4) = iVar5;
        *(int *)(lVar8 + lVar11 * 4) = iVar6;
        if (iVar3 == iVar4) {
          lVar10 = (longlong)*(int *)(param_8[8] + lVar7 * 4);
          lVar12 = (longlong)*(int *)(param_8[10] + lVar7 * 4);
          lVar8 = param_8[4] + (lVar11 - lVar12) * 8;
          lVar12 = param_8[4] + (lVar13 - lVar12) * 8;
          uVar1 = *(undefined8 *)(lVar12 + lVar10 * 8);
          *(undefined8 *)(lVar12 + lVar10 * 8) = *(undefined8 *)(lVar8 + lVar10 * 8);
          *(undefined8 *)(lVar8 + lVar10 * 8) = uVar1;
        }
        lVar13 = lVar13 + 1;
        goto LAB_1483c82a7;
      }
      lVar13 = lVar13 + 1;
    }
  } while (lVar13 <= lVar11);
  *(int *)(*param_7 + lVar7 * 4) = (int)lVar13;
LAB_1483c82ba:
  lVar9 = lVar9 + 1;
  if (lVar9 == param_4) {
    return;
  }
  goto LAB_1483c8196;
}



// FUNCTION 1483c82d8 FUN_1483c82d8 body=212 status=ok
// SIG undefined FUN_1483c82d8(void)

longlong FUN_1483c82d8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  local_38 = (void *)0x0;
  sStack_30 = 0;
  lVar5 = 1;
  FUN_146de2a82(&local_38,lVar2,lVar2,1);
  if (0 < (longlong)sStack_30) {
    memset(local_38,0,sStack_30);
  }
  if (0 < lVar2) {
    lVar5 = 1;
    lVar3 = 0;
    do {
      while (*(char *)((longlong)local_38 + lVar3) != '\x01') {
        *(undefined1 *)((longlong)local_38 + lVar3) = 1;
        iVar1 = *(int *)(*param_1 + lVar3 * 4);
        while (lVar4 = (longlong)iVar1, lVar4 != lVar3) {
          *(undefined1 *)((longlong)local_38 + lVar4) = 1;
          lVar5 = -lVar5;
          iVar1 = *(int *)(*param_1 + lVar4 * 4);
        }
        lVar3 = lVar3 + 1;
        if (lVar2 <= lVar3) goto LAB_1483c837f;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar2);
  }
LAB_1483c837f:
  FUN_1400020a8(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1483c83ae FUN_1483c83ae body=144 status=ok
// SIG undefined FUN_1483c83ae(void)

void FUN_1483c83ae(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *param_2 = 0;
  *param_3 = (longlong)*(int *)(param_4[0x12] + param_1 * 4);
  uVar2 = *(uint *)(param_4[2] + param_1 * 4);
  if (-1 < (int)uVar2 && 0 < param_1) {
    lVar6 = *param_4;
    uVar4 = 0;
    do {
      iVar3 = *(int *)(lVar6 + uVar4 * 4);
      lVar8 = (longlong)iVar3;
      if (iVar3 < *(int *)(lVar6 + 4 + uVar4 * 4)) {
        lVar7 = (longlong)*(int *)(param_4[10] + 4 + lVar8 * 4) -
                (longlong)*(int *)(param_4[10] + lVar8 * 4);
        lVar5 = 1;
        do {
          *param_2 = *param_2 + lVar7;
          *param_3 = *param_3 + lVar5;
          lVar7 = lVar7 + -1;
          lVar6 = *param_4;
          lVar1 = lVar8 + lVar5;
          lVar5 = lVar5 + 1;
        } while (lVar1 < *(int *)(lVar6 + (uVar4 + 1) * 4));
      }
      bVar9 = uVar4 != uVar2;
      uVar4 = uVar4 + 1;
    } while (bVar9);
  }
  return;
}



// FUNCTION 1483c843e FUN_1483c843e body=166 status=ok
// SIG undefined FUN_1483c843e(void)

void FUN_1483c843e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = (longlong)*(int *)(param_3[2] + param_1 * 4);
  if (lVar2 < 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = *param_3;
    lVar6 = 0;
    lVar3 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar4 + lVar3 * 4);
      iVar1 = *(int *)(param_3[10] + lVar7 * 4);
      lVar4 = (longlong)iVar1;
      *(int *)(param_3[10] + lVar7 * 4) = (int)lVar6;
      if (iVar1 < *(int *)(param_3[10] + 4 + lVar7 * 4)) {
        lVar6 = (longlong)(int)lVar6;
        do {
          *(undefined4 *)(param_3[6] + lVar6 * 4) =
               *(undefined4 *)(*param_2 + (longlong)*(int *)(param_3[6] + lVar4 * 4) * 4);
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_3[10] + 4 + lVar7 * 4));
      }
      uVar5 = (undefined4)lVar6;
      lVar4 = *param_3;
      iVar1 = *(int *)(lVar4 + 4 + lVar3 * 4);
      while (lVar7 = lVar7 + 1, lVar7 < iVar1) {
        *(undefined4 *)(param_3[10] + lVar7 * 4) = uVar5;
        lVar4 = *param_3;
        iVar1 = *(int *)(lVar4 + (lVar3 + 1) * 4);
      }
      bVar8 = lVar3 != lVar2;
      lVar3 = lVar3 + 1;
    } while (bVar8);
  }
  *(undefined4 *)(param_3[10] + param_1 * 4) = uVar5;
  return;
}



// FUNCTION 1483c84e4 FUN_1483c84e4 body=515 status=ok
// SIG undefined FUN_1483c84e4(void)

longlong FUN_1483c84e4(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e9;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined8 local_88 [2];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *param_2;
  lVar2 = lVar1;
  if (*param_4 != 0) {
    lVar2 = lVar1 + 1;
    if (lVar1 + 1 <= (longlong)((float)lVar1 * 1.5)) {
      lVar2 = (longlong)((float)lVar1 * 1.5);
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  if (0 < param_3) {
    local_c0 = *param_1;
    local_a0 = 0;
    local_90 = param_1[1];
    local_b8 = param_3;
    local_a8 = param_1;
    FUN_1483c8917(&local_108,&local_c0,&local_e8);
  }
  FUN_146de3b1a(param_1,lVar2);
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_4 == 0) {
      lVar2 = -1;
    }
    else {
      fVar4 = 1.5;
      lVar3 = 0xb;
      do {
        fVar4 = (fVar4 + 1.0) * 0.5;
        lVar1 = (longlong)((float)*param_2 * fVar4);
        lVar2 = *param_2 + 1;
        if (lVar2 <= lVar1) {
          lVar2 = lVar1;
        }
        FUN_146de3b1a(param_1,lVar2);
        lVar1 = param_1[1];
        if (lVar1 != 0) goto LAB_1483c85a3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
LAB_1483c85a3:
    if (0 < param_3) {
      local_c0 = *param_1;
      local_d0 = &local_c0;
      local_a0 = 0;
      local_e0 = &local_c8;
      local_c8 = local_108;
      local_e8 = local_88;
      local_d8 = &local_e9;
      local_b8 = param_3;
      local_a8 = param_1;
      local_90 = lVar1;
      local_88[0] = local_c0;
      local_78 = lVar1;
      FUN_1483c8a14();
    }
    *param_2 = lVar2;
    if (*param_4 != 0) {
      *param_4 = *param_4 + 1;
    }
    lVar2 = 0;
  }
  FUN_1400020a8(local_108);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1483c86e8 FUN_1483c86e8 body=558 status=ok
// SIG undefined FUN_1483c86e8(void)

ulonglong FUN_1483c86e8(undefined8 *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e9;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined8 local_88 [2];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *param_2;
  uVar3 = uVar2;
  if ((param_4 == 0) && (*param_5 != 0)) {
    uVar3 = uVar2 + 1;
    if ((longlong)(uVar2 + 1) <= (longlong)((float)(longlong)uVar2 * 1.5)) {
      uVar3 = (longlong)((float)(longlong)uVar2 * 1.5);
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  if (0 < param_3) {
    local_c0 = *param_1;
    local_a0 = 0;
    local_90 = param_1[1];
    local_b8 = param_3;
    local_a8 = param_1;
    FUN_1483c8acc(&local_108,&local_c0,&local_e8);
  }
  FUN_141729ef6(param_1,uVar3);
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_5 == 0 || param_4 != 0) {
      uVar3 = uVar3 | -(ulonglong)(*param_5 == 0);
    }
    else {
      fVar5 = 1.5;
      lVar4 = 0xb;
      do {
        fVar5 = (fVar5 + 1.0) * 0.5;
        uVar2 = (ulonglong)((float)(longlong)*param_2 * fVar5);
        uVar3 = *param_2 + 1;
        if ((longlong)uVar3 <= (longlong)uVar2) {
          uVar3 = uVar2;
        }
        FUN_141729ef6(param_1,uVar3);
        lVar1 = param_1[1];
        if (lVar1 != 0) goto LAB_1483c8787;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
LAB_1483c8787:
    if (0 < param_3) {
      local_c0 = *param_1;
      local_d0 = &local_c0;
      local_a0 = 0;
      local_e0 = &local_c8;
      local_c8 = local_108;
      local_e8 = local_88;
      local_d8 = &local_e9;
      local_b8 = param_3;
      local_a8 = param_1;
      local_90 = lVar1;
      local_88[0] = local_c0;
      local_78 = lVar1;
      FUN_1483c8bc8();
    }
    *param_2 = uVar3;
    if (*param_5 != 0) {
      *param_5 = *param_5 + 1;
    }
    uVar3 = 0;
  }
  FUN_1400020a8(local_108);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1483c8917 FUN_1483c8917 body=142 status=ok
// SIG undefined FUN_1483c8917(void)

void FUN_1483c8917(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = *(undefined8 *)(param_2[3] + 8);
  if (param_1[1] != param_2[1]) {
    FUN_146de3c6e(param_1,param_2[1],1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_1483c89a6();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c89a6 FUN_1483c89a6 body=109 status=ok
// SIG undefined FUN_1483c89a6(void)

void FUN_1483c89a6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 - ((longlong)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 8);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar6 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 1483c8a14 FUN_1483c8a14 body=145 status=ok
// SIG undefined FUN_1483c8a14(void)

void FUN_1483c8a14(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483c8aa6(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483c8aa6(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483c8aa6 FUN_1483c8aa6 body=38 status=ok
// SIG undefined FUN_1483c8aa6(void)

void FUN_1483c8aa6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483c8acc FUN_1483c8acc body=142 status=ok
// SIG undefined FUN_1483c8acc(void)

void FUN_1483c8acc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = *(undefined8 *)(param_2[3] + 8);
  if (param_1[1] != param_2[1]) {
    FUN_146de062c(param_1,param_2[1],1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_1483c8b5c();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483c8b5c FUN_1483c8b5c body=107 status=ok
// SIG undefined FUN_1483c8b5c(void)

void FUN_1483c8b5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 1483c8bc8 FUN_1483c8bc8 body=148 status=ok
// SIG undefined FUN_1483c8bc8(void)

void FUN_1483c8bc8(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_1483c8c5c(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_1483c8c5c(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 1483c8c5c FUN_1483c8c5c body=35 status=ok
// SIG undefined FUN_1483c8c5c(void)

void FUN_1483c8c5c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483c8c80 FUN_1483c8c80 body=510 status=ok
// SIG undefined FUN_1483c8c80(void)

void FUN_1483c8c80(int param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong param_13,longlong *param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  *(int *)(*param_8 + param_13 * 4) = param_1;
  iVar2 = *(int *)(*param_2 + param_13 * 4);
  if ((longlong)iVar2 == -1) {
    lVar4 = *param_12;
    *param_12 = lVar4 + 1;
    *(int *)(*param_4 + lVar4 * 4) = (int)param_13;
  }
  else {
    lVar4 = (longlong)
            *(int *)(*param_11 + 4 + (longlong)*(int *)(param_11[2] + (longlong)iVar2 * 4) * 4);
    iVar7 = *(int *)(*param_6 + -4 + lVar4 * 4);
    if (iVar7 == -1) {
      lVar8 = lVar4 + -1;
      *(undefined4 *)(*param_9 + -4 + lVar4 * 4) = 0xffffffff;
      *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
      piVar5 = (int *)(param_11[10] + lVar8 * 4);
      piVar3 = (int *)(lVar8 * 4 + *param_7);
      while( true ) {
        iVar7 = (int)lVar8;
        iVar2 = *piVar5;
        lVar4 = (longlong)*piVar3;
        if (iVar2 < *piVar3) {
          lVar6 = (longlong)iVar2;
          do {
            iVar7 = *(int *)(param_11[6] + lVar6 * 4);
            iVar2 = iVar2 + 1;
            lVar6 = (longlong)iVar7;
            if (*(int *)(*param_8 + lVar6 * 4) != param_1) {
              *(int *)(*param_8 + lVar6 * 4) = param_1;
              iVar1 = *(int *)(*param_2 + lVar6 * 4);
              if ((longlong)iVar1 == -1) {
                lVar6 = *param_12;
                *param_12 = lVar6 + 1;
                *(int *)(*param_4 + lVar6 * 4) = iVar7;
              }
              else {
                lVar6 = (longlong)
                        *(int *)(*param_11 + 4 +
                                (longlong)*(int *)(param_11[2] + (longlong)iVar1 * 4) * 4);
                iVar7 = *(int *)(*param_6 + -4 + lVar6 * 4);
                if (iVar7 == -1) {
                  iVar7 = (int)lVar8;
                  lVar8 = lVar6 + -1;
                  *(int *)(*param_10 + (longlong)iVar7 * 4) = iVar2;
                  *(int *)(*param_9 + -4 + lVar6 * 4) = iVar7;
                  *(int *)(*param_6 + -4 + lVar6 * 4) = iVar1;
                  iVar2 = *(int *)(param_11[10] + -4 + lVar6 * 4);
                  lVar4 = (longlong)*(int *)(*param_7 + -4 + lVar6 * 4);
                }
                else if (iVar1 < iVar7) {
                  *(int *)(*param_6 + -4 + lVar6 * 4) = iVar1;
                }
              }
            }
            iVar7 = (int)lVar8;
            lVar6 = (longlong)iVar2;
          } while (lVar6 < lVar4);
        }
        lVar4 = (longlong)iVar7;
        if ((longlong)*(int *)(param_14[1] + lVar4 * 4) < *param_14) {
          *(int *)(param_14[1] + lVar4 * 4) = param_1;
          *(int *)(*param_5 + *param_3 * 4) = iVar7;
          *param_3 = *param_3 + 1;
        }
        lVar8 = (longlong)*(int *)(*param_9 + lVar4 * 4);
        if (lVar8 == -1) break;
        piVar5 = (int *)(*param_10 + lVar8 * 4);
        piVar3 = (int *)(lVar8 * 4 + *param_7);
      }
    }
    else if (iVar2 < iVar7) {
      *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
    }
  }
  return;
}



// FUNCTION 1483c8e7e FUN_1483c8e7e body=5563 status=ok
// SIG undefined FUN_1483c8e7e(void)

void FUN_1483c8e7e(ulonglong param_1,longlong param_2,ulonglong param_3,double *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
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
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double *pdVar45;
  longlong lVar46;
  double *pdVar47;
  longlong lVar48;
  longlong lVar49;
  double *pdVar50;
  longlong lVar51;
  undefined8 ****ppppuVar52;
  double *pdVar53;
  ulonglong uVar54;
  double *pdVar55;
  longlong lVar56;
  double *pdVar57;
  longlong lVar58;
  double *pdVar59;
  double *pdVar60;
  ulonglong uVar61;
  double *pdVar62;
  double *pdVar63;
  undefined8 *puVar64;
  ulonglong uVar65;
  double *pdVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined1 auStack_418 [39];
  char local_3f1;
  double *local_3f0;
  double *local_3e8;
  double *local_3e0;
  double *local_3d8;
  double *local_3d0;
  double *local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  ulonglong local_3b0;
  double *local_3a8;
  double *local_3a0;
  undefined8 ***local_398;
  double *local_390;
  double *local_388;
  double *local_380;
  double *local_378;
  double *local_370;
  double *local_368;
  double *local_360;
  double *local_358;
  double *local_350;
  double *local_348;
  double *local_340;
  double *local_338;
  longlong local_330;
  longlong local_328;
  ulonglong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  ulonglong local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  longlong local_2e0;
  undefined8 ***local_2d8;
  double *local_2d0;
  double *local_2c8;
  longlong local_2c0;
  double *local_2b8;
  double *local_2b0;
  undefined8 *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double *local_288;
  ulonglong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  double *local_258;
  double *local_250;
  double *local_248;
  double *local_240;
  longlong local_238;
  ulonglong local_230;
  undefined8 ***local_228;
  longlong local_220;
  double *local_218;
  ulonglong local_210;
  double *local_208;
  double *local_200;
  double *local_1f8;
  undefined1 local_1e9;
  undefined8 ***local_1e8;
  double *local_1e0;
  double local_1c8 [2];
  double *local_1b8;
  double *local_1b0;
  undefined8 local_1a8;
  double *local_1a0;
  double *local_198;
  double *local_190;
  undefined8 local_180;
  double *local_170;
  double *local_160;
  undefined8 local_150;
  double *local_148;
  double *local_140;
  double *local_130;
  undefined8 ***local_118;
  double *local_110;
  undefined1 *local_108;
  undefined8 ***local_100;
  undefined8 ***local_f8 [2];
  double *local_e8;
  ulonglong local_e0;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3c0 = param_3 + 3;
  if (-1 < (longlong)param_3) {
    local_3c0 = param_3;
  }
  uVar54 = param_1;
  if ((((ulonglong)param_4 & 7) == 0) &&
     (uVar54 = (ulonglong)((uint)((ulonglong)param_4 >> 3) & 1),
     (longlong)param_1 <= (longlong)uVar54)) {
    uVar54 = param_1;
  }
  if (0 < (longlong)uVar54) {
    uVar65 = 0;
    pdVar47 = param_4;
    do {
      if (0 < param_2) {
        lVar48 = param_8 + uVar65 * 8;
        lVar51 = 0;
        lVar58 = param_6;
        do {
          dVar67 = *(double *)(lVar48 + lVar51 * param_9 * 8);
          if (0 < (longlong)param_3) {
            uVar61 = 0;
            pdVar50 = pdVar47;
            do {
              dVar67 = dVar67 + *(double *)(lVar58 + uVar61 * 8) * *pdVar50;
              uVar61 = uVar61 + 1;
              pdVar50 = pdVar50 + param_5;
            } while (param_3 != uVar61);
          }
          *(double *)(lVar48 + lVar51 * param_9 * 8) = dVar67;
          lVar51 = lVar51 + 1;
          lVar58 = lVar58 + param_7 * 8;
        } while (lVar51 != param_2);
      }
      uVar65 = uVar65 + 1;
      pdVar47 = pdVar47 + 1;
    } while (uVar65 != uVar54);
  }
  lVar48 = param_1 - uVar54;
  local_3c8 = param_4;
  local_2e8 = param_3;
  if (lVar48 != 0 && (longlong)uVar54 <= (longlong)param_1) {
    local_3c0 = local_3c0 & 0xfffffffffffffffc;
    local_230 = param_2 - (param_2 >> 0x3f) & 0xfffffffffffffffe;
    local_3f0 = (double *)CONCAT71(local_3f0._1_7_,param_2 <= (longlong)local_230);
    local_288 = (double *)(param_6 + (param_2 + -1) * param_7 * 8);
    local_300 = param_3 - local_3c0;
    local_290 = param_4 + local_3c0 * param_5;
    local_298 = param_4 + (local_3c0 | 1) * param_5;
    local_268 = param_9 * 8;
    local_308 = local_268 + uVar54 * 8;
    local_310 = param_8 + 0x70 + local_308;
    local_318 = param_8 + 0x70 + uVar54 * 8;
    local_308 = local_308 + param_8;
    local_398 = (undefined8 ***)(param_8 + uVar54 * 8);
    local_330 = (param_2 / 2) * param_9 * 0x10 + uVar54 * 8;
    local_2f0 = param_8 + local_330 + 0x70;
    local_330 = param_8 + local_330;
    local_2a0 = param_4 + (local_3c0 | 2) * param_5;
    local_3f1 = (longlong)param_3 < 4 || param_2 <= (longlong)local_230;
    local_238 = param_9 << 4;
    local_2e0 = param_5 << 5;
    local_378 = param_4 + param_5 * 3 + uVar54;
    local_340 = local_378 + 0x10;
    local_380 = param_4 + uVar54 + param_5 * 2;
    local_348 = local_380 + 0x10;
    local_388 = param_4 + uVar54 + param_5;
    local_350 = local_388 + 0x10;
    local_390 = param_4 + uVar54;
    local_338 = local_390 + 0x10;
    local_358 = param_4 + param_5 * 3 + uVar54 + 2;
    local_360 = param_4 + uVar54 + param_5 * 2 + 2;
    local_368 = param_4 + uVar54 + param_5 + 2;
    local_2a8 = (undefined8 *)(param_6 + local_3c0 * 8);
    local_370 = param_4 + uVar54 + 2;
    local_270 = param_7 * 8;
    local_280 = param_1;
    local_278 = param_2;
    do {
      lVar58 = local_278;
      local_328 = 0x200;
      if (lVar48 < 0x200) {
        local_328 = lVar48;
      }
      local_2c8 = (double *)(local_280 - uVar54);
      local_3e0 = (double *)&DAT_00000200;
      if ((longlong)local_2c8 < 0x200) {
        local_3e0 = local_2c8;
      }
      pdVar47 = (double *)((longlong)local_3e0 + 0xf);
      if (-1 < (longlong)local_3e0) {
        pdVar47 = local_3e0;
      }
      local_3b8 = (ulonglong)pdVar47 & 0xfffffffffffffff0;
      local_3e8 = (double *)((longlong)local_3e0 / 2);
      local_3b0 = (longlong)local_3e0 - ((longlong)local_3e0 >> 0x3f) & 0xfffffffffffffffe;
      local_2d0 = local_3c8 + uVar54;
      if (1 < param_2) {
        local_3f0 = (double *)(local_328 - local_3b0);
        lVar51 = local_308 + (longlong)local_3e8 * 0x10;
        ppppuVar52 = (undefined8 ****)(local_398 + (longlong)local_3e8 * 2);
        local_248 = local_378 + (longlong)local_3e8 * 2;
        local_250 = local_380 + (longlong)local_3e8 * 2;
        local_258 = local_388 + (longlong)local_3e8 * 2;
        local_240 = local_390 + (longlong)local_3e8 * 2;
        local_2d8 = local_398;
        local_320 = 0;
        lVar46 = local_318;
        lVar49 = local_308;
        lVar56 = local_310;
        do {
          local_2c0 = lVar49;
          if (3 < (longlong)local_2e8) {
            local_3d8 = (double *)(param_6 + (local_320 | 1) * param_7 * 8);
            local_3a8 = local_370;
            local_2b0 = local_368;
            local_2b8 = local_358;
            local_3d0 = local_240;
            pdVar47 = local_348;
            pdVar50 = local_360;
            pdVar53 = (double *)(param_6 + local_320 * param_7 * 8);
            pdVar55 = local_338;
            pdVar1 = local_248;
            pdVar59 = local_350;
            uVar65 = 0;
            pdVar57 = local_250;
            pdVar62 = local_340;
            pdVar45 = local_258;
            do {
              local_1f8 = pdVar45;
              local_200 = pdVar57;
              local_210 = uVar65;
              local_208 = pdVar1;
              local_218 = pdVar53;
              local_3a0 = pdVar50;
              dVar67 = *local_218;
              dVar2 = *local_218;
              dVar3 = local_218[1];
              dVar4 = local_218[1];
              dVar5 = local_218[2];
              dVar6 = local_218[2];
              dVar7 = local_218[3];
              dVar8 = local_218[3];
              dVar72 = *local_3d8;
              dVar74 = *local_3d8;
              dVar70 = local_3d8[1];
              dVar68 = local_3d8[1];
              dVar9 = local_3d8[2];
              dVar10 = local_3d8[2];
              dVar11 = local_3d8[3];
              dVar12 = local_3d8[3];
              pdVar50 = local_2d0 + local_210 * param_5;
              uVar80 = *(undefined4 *)pdVar50;
              uVar81 = *(undefined4 *)((longlong)pdVar50 + 4);
              uVar82 = *(undefined4 *)(pdVar50 + 1);
              uVar83 = *(undefined4 *)((longlong)pdVar50 + 0xc);
              pdVar50 = local_2d0 + (local_210 | 1) * param_5;
              uVar76 = *(undefined4 *)pdVar50;
              uVar77 = *(undefined4 *)((longlong)pdVar50 + 4);
              uVar78 = *(undefined4 *)(pdVar50 + 1);
              uVar79 = *(undefined4 *)((longlong)pdVar50 + 0xc);
              pdVar50 = local_2d0 + (local_210 | 2) * param_5;
              uVar84 = *(undefined4 *)pdVar50;
              uVar85 = *(undefined4 *)((longlong)pdVar50 + 4);
              uVar86 = *(undefined4 *)(pdVar50 + 1);
              uVar87 = *(undefined4 *)((longlong)pdVar50 + 0xc);
              pdVar50 = local_2d0 + (local_210 | 3) * param_5;
              uVar88 = *(undefined4 *)pdVar50;
              uVar89 = *(undefined4 *)((longlong)pdVar50 + 4);
              uVar90 = *(undefined4 *)(pdVar50 + 1);
              uVar91 = *(undefined4 *)((longlong)pdVar50 + 0xc);
              uVar65 = local_3b8;
              if (0xf < (longlong)local_2c8) {
                lVar49 = 0;
                do {
                  pdVar50 = (double *)(lVar46 + -0x70 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x70 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar73 = pdVar55[lVar49 + -0xe];
                  dVar75 = (pdVar55 + lVar49 + -0xe)[1];
                  dVar15 = pdVar59[lVar49 + -0xe];
                  dVar18 = (pdVar59 + lVar49 + -0xe)[1];
                  dVar19 = pdVar47[lVar49 + -0xe];
                  dVar20 = (pdVar47 + lVar49 + -0xe)[1];
                  dVar71 = dVar8 * (double)CONCAT44(uVar91,uVar90) +
                           dVar6 * (double)CONCAT44(uVar87,uVar86) +
                           dVar4 * (double)CONCAT44(uVar79,uVar78) +
                           dVar2 * (double)CONCAT44(uVar83,uVar82) + pdVar50[1];
                  dVar69 = (double)CONCAT44(uVar91,uVar90) * dVar12 +
                           (double)CONCAT44(uVar87,uVar86) * dVar10 +
                           (double)CONCAT44(uVar79,uVar78) * dVar68 +
                           (double)CONCAT44(uVar83,uVar82) * dVar74 + pdVar53[1];
                  dVar21 = pdVar62[lVar49 + -0xe];
                  dVar22 = (pdVar62 + lVar49 + -0xe)[1];
                  auVar34._8_4_ = SUB84(dVar71,0);
                  auVar34._0_8_ =
                       dVar7 * (double)CONCAT44(uVar89,uVar88) +
                       dVar5 * (double)CONCAT44(uVar85,uVar84) +
                       dVar3 * (double)CONCAT44(uVar77,uVar76) +
                       dVar67 * (double)CONCAT44(uVar81,uVar80) + *pdVar50;
                  auVar34._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x70 + lVar49 * 8) = auVar34;
                  auVar16._8_4_ = SUB84(dVar69,0);
                  auVar16._0_8_ =
                       (double)CONCAT44(uVar89,uVar88) * dVar11 +
                       (double)CONCAT44(uVar85,uVar84) * dVar9 +
                       (double)CONCAT44(uVar77,uVar76) * dVar70 +
                       (double)CONCAT44(uVar81,uVar80) * dVar72 + dVar13;
                  auVar16._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x70 + lVar49 * 8) = auVar16;
                  pdVar50 = (double *)(lVar46 + -0x60 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x60 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar23 = pdVar55[lVar49 + -0xc];
                  dVar24 = (pdVar55 + lVar49 + -0xc)[1];
                  dVar25 = pdVar59[lVar49 + -0xc];
                  dVar42 = (pdVar59 + lVar49 + -0xc)[1];
                  dVar43 = pdVar47[lVar49 + -0xc];
                  dVar44 = (pdVar47 + lVar49 + -0xc)[1];
                  dVar71 = dVar8 * dVar22 +
                           dVar6 * dVar20 + dVar4 * dVar18 + dVar2 * dVar75 + pdVar50[1];
                  dVar69 = dVar22 * dVar12 +
                           dVar20 * dVar10 + dVar18 * dVar68 + dVar75 * dVar74 + pdVar53[1];
                  dVar75 = pdVar62[lVar49 + -0xc];
                  dVar18 = (pdVar62 + lVar49 + -0xc)[1];
                  auVar35._8_4_ = SUB84(dVar71,0);
                  auVar35._0_8_ =
                       dVar7 * dVar21 + dVar5 * dVar19 + dVar3 * dVar15 + dVar67 * dVar73 + *pdVar50
                  ;
                  auVar35._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x60 + lVar49 * 8) = auVar35;
                  auVar29._8_4_ = SUB84(dVar69,0);
                  auVar29._0_8_ =
                       dVar21 * dVar11 + dVar19 * dVar9 + dVar15 * dVar70 + dVar73 * dVar72 + dVar13
                  ;
                  auVar29._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x60 + lVar49 * 8) = auVar29;
                  pdVar50 = (double *)(lVar46 + -0x50 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x50 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar73 = pdVar55[lVar49 + -10];
                  dVar15 = (pdVar55 + lVar49 + -10)[1];
                  dVar19 = pdVar59[lVar49 + -10];
                  dVar20 = (pdVar59 + lVar49 + -10)[1];
                  dVar21 = pdVar47[lVar49 + -10];
                  dVar22 = (pdVar47 + lVar49 + -10)[1];
                  dVar71 = dVar8 * dVar18 +
                           dVar6 * dVar44 + dVar4 * dVar42 + dVar2 * dVar24 + pdVar50[1];
                  dVar69 = dVar18 * dVar12 +
                           dVar44 * dVar10 + dVar42 * dVar68 + dVar24 * dVar74 + pdVar53[1];
                  dVar18 = pdVar62[lVar49 + -10];
                  dVar24 = (pdVar62 + lVar49 + -10)[1];
                  auVar36._8_4_ = SUB84(dVar71,0);
                  auVar36._0_8_ =
                       dVar7 * dVar75 + dVar5 * dVar43 + dVar3 * dVar25 + dVar67 * dVar23 + *pdVar50
                  ;
                  auVar36._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x50 + lVar49 * 8) = auVar36;
                  auVar26._8_4_ = SUB84(dVar69,0);
                  auVar26._0_8_ =
                       dVar75 * dVar11 + dVar43 * dVar9 + dVar25 * dVar70 + dVar23 * dVar72 + dVar13
                  ;
                  auVar26._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x50 + lVar49 * 8) = auVar26;
                  pdVar50 = (double *)(lVar46 + -0x40 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x40 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar75 = pdVar55[lVar49 + -8];
                  dVar23 = (pdVar55 + lVar49 + -8)[1];
                  dVar25 = pdVar59[lVar49 + -8];
                  dVar42 = (pdVar59 + lVar49 + -8)[1];
                  dVar43 = pdVar47[lVar49 + -8];
                  dVar44 = (pdVar47 + lVar49 + -8)[1];
                  dVar71 = dVar8 * dVar24 +
                           dVar6 * dVar22 + dVar4 * dVar20 + dVar2 * dVar15 + pdVar50[1];
                  dVar69 = dVar24 * dVar12 +
                           dVar22 * dVar10 + dVar20 * dVar68 + dVar15 * dVar74 + pdVar53[1];
                  dVar15 = pdVar62[lVar49 + -8];
                  dVar20 = (pdVar62 + lVar49 + -8)[1];
                  auVar37._8_4_ = SUB84(dVar71,0);
                  auVar37._0_8_ =
                       dVar7 * dVar18 + dVar5 * dVar21 + dVar3 * dVar19 + dVar67 * dVar73 + *pdVar50
                  ;
                  auVar37._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x40 + lVar49 * 8) = auVar37;
                  auVar30._8_4_ = SUB84(dVar69,0);
                  auVar30._0_8_ =
                       dVar18 * dVar11 + dVar21 * dVar9 + dVar19 * dVar70 + dVar73 * dVar72 + dVar13
                  ;
                  auVar30._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x40 + lVar49 * 8) = auVar30;
                  pdVar50 = (double *)(lVar46 + -0x30 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x30 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar73 = pdVar55[lVar49 + -6];
                  dVar18 = (pdVar55 + lVar49 + -6)[1];
                  dVar19 = pdVar59[lVar49 + -6];
                  dVar21 = (pdVar59 + lVar49 + -6)[1];
                  dVar22 = pdVar47[lVar49 + -6];
                  dVar24 = (pdVar47 + lVar49 + -6)[1];
                  dVar71 = dVar8 * dVar20 +
                           dVar6 * dVar44 + dVar4 * dVar42 + dVar2 * dVar23 + pdVar50[1];
                  dVar69 = dVar20 * dVar12 +
                           dVar44 * dVar10 + dVar42 * dVar68 + dVar23 * dVar74 + pdVar53[1];
                  dVar20 = pdVar62[lVar49 + -6];
                  dVar23 = (pdVar62 + lVar49 + -6)[1];
                  auVar38._8_4_ = SUB84(dVar71,0);
                  auVar38._0_8_ =
                       dVar7 * dVar15 + dVar5 * dVar43 + dVar3 * dVar25 + dVar67 * dVar75 + *pdVar50
                  ;
                  auVar38._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x30 + lVar49 * 8) = auVar38;
                  auVar27._8_4_ = SUB84(dVar69,0);
                  auVar27._0_8_ =
                       dVar15 * dVar11 + dVar43 * dVar9 + dVar25 * dVar70 + dVar75 * dVar72 + dVar13
                  ;
                  auVar27._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x30 + lVar49 * 8) = auVar27;
                  pdVar50 = (double *)(lVar46 + -0x20 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x20 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar75 = pdVar55[lVar49 + -4];
                  dVar15 = (pdVar55 + lVar49 + -4)[1];
                  dVar25 = pdVar59[lVar49 + -4];
                  dVar42 = (pdVar59 + lVar49 + -4)[1];
                  dVar43 = pdVar47[lVar49 + -4];
                  dVar44 = (pdVar47 + lVar49 + -4)[1];
                  dVar71 = dVar8 * dVar23 +
                           dVar6 * dVar24 + dVar4 * dVar21 + dVar2 * dVar18 + pdVar50[1];
                  dVar69 = dVar23 * dVar12 +
                           dVar24 * dVar10 + dVar21 * dVar68 + dVar18 * dVar74 + pdVar53[1];
                  dVar18 = pdVar62[lVar49 + -4];
                  dVar21 = (pdVar62 + lVar49 + -4)[1];
                  auVar39._8_4_ = SUB84(dVar71,0);
                  auVar39._0_8_ =
                       dVar7 * dVar20 + dVar5 * dVar22 + dVar3 * dVar19 + dVar67 * dVar73 + *pdVar50
                  ;
                  auVar39._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x20 + lVar49 * 8) = auVar39;
                  auVar31._8_4_ = SUB84(dVar69,0);
                  auVar31._0_8_ =
                       dVar20 * dVar11 + dVar22 * dVar9 + dVar19 * dVar70 + dVar73 * dVar72 + dVar13
                  ;
                  auVar31._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x20 + lVar49 * 8) = auVar31;
                  pdVar50 = (double *)(lVar46 + -0x10 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + -0x10 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  dVar73 = pdVar55[lVar49 + -2];
                  dVar19 = (pdVar55 + lVar49 + -2)[1];
                  dVar20 = pdVar59[lVar49 + -2];
                  dVar22 = (pdVar59 + lVar49 + -2)[1];
                  dVar23 = pdVar47[lVar49 + -2];
                  dVar24 = (pdVar47 + lVar49 + -2)[1];
                  dVar71 = dVar8 * dVar21 +
                           dVar6 * dVar44 + dVar4 * dVar42 + dVar2 * dVar15 + pdVar50[1];
                  dVar69 = dVar21 * dVar12 +
                           dVar44 * dVar10 + dVar42 * dVar68 + dVar15 * dVar74 + pdVar53[1];
                  dVar15 = pdVar62[lVar49 + -2];
                  dVar21 = (pdVar62 + lVar49 + -2)[1];
                  auVar40._8_4_ = SUB84(dVar71,0);
                  auVar40._0_8_ =
                       dVar7 * dVar18 + dVar5 * dVar43 + dVar3 * dVar25 + dVar67 * dVar75 + *pdVar50
                  ;
                  auVar40._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + -0x10 + lVar49 * 8) = auVar40;
                  auVar28._8_4_ = SUB84(dVar69,0);
                  auVar28._0_8_ =
                       dVar18 * dVar11 + dVar43 * dVar9 + dVar25 * dVar70 + dVar75 * dVar72 + dVar13
                  ;
                  auVar28._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + -0x10 + lVar49 * 8) = auVar28;
                  pdVar50 = (double *)(lVar46 + lVar49 * 8);
                  pdVar53 = (double *)(lVar56 + lVar49 * 8);
                  dVar13 = *pdVar53;
                  pdVar1 = pdVar55 + lVar49;
                  uVar80 = *(undefined4 *)pdVar1;
                  uVar81 = *(undefined4 *)((longlong)pdVar1 + 4);
                  uVar82 = *(undefined4 *)(pdVar1 + 1);
                  uVar83 = *(undefined4 *)((longlong)pdVar1 + 0xc);
                  pdVar1 = pdVar59 + lVar49;
                  uVar76 = *(undefined4 *)pdVar1;
                  uVar77 = *(undefined4 *)((longlong)pdVar1 + 4);
                  uVar78 = *(undefined4 *)(pdVar1 + 1);
                  uVar79 = *(undefined4 *)((longlong)pdVar1 + 0xc);
                  pdVar1 = pdVar47 + lVar49;
                  uVar84 = *(undefined4 *)pdVar1;
                  uVar85 = *(undefined4 *)((longlong)pdVar1 + 4);
                  uVar86 = *(undefined4 *)(pdVar1 + 1);
                  uVar87 = *(undefined4 *)((longlong)pdVar1 + 0xc);
                  dVar71 = dVar8 * dVar21 +
                           dVar6 * dVar24 + dVar4 * dVar22 + dVar2 * dVar19 + pdVar50[1];
                  dVar69 = dVar21 * dVar12 +
                           dVar24 * dVar10 + dVar22 * dVar68 + dVar19 * dVar74 + pdVar53[1];
                  pdVar53 = pdVar62 + lVar49;
                  uVar88 = *(undefined4 *)pdVar53;
                  uVar89 = *(undefined4 *)((longlong)pdVar53 + 4);
                  uVar90 = *(undefined4 *)(pdVar53 + 1);
                  uVar91 = *(undefined4 *)((longlong)pdVar53 + 0xc);
                  auVar41._8_4_ = SUB84(dVar71,0);
                  auVar41._0_8_ =
                       dVar7 * dVar15 + dVar5 * dVar23 + dVar3 * dVar20 + dVar67 * dVar73 + *pdVar50
                  ;
                  auVar41._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                  *(undefined1 (*) [16])(lVar46 + lVar49 * 8) = auVar41;
                  auVar32._8_4_ = SUB84(dVar69,0);
                  auVar32._0_8_ =
                       dVar15 * dVar11 + dVar23 * dVar9 + dVar20 * dVar70 + dVar73 * dVar72 + dVar13
                  ;
                  auVar32._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                  *(undefined1 (*) [16])(lVar56 + lVar49 * 8) = auVar32;
                  lVar49 = lVar49 + 0x10;
                } while (lVar49 < (longlong)local_3b8);
              }
              for (; (longlong)uVar65 < (longlong)local_3b0; uVar65 = uVar65 + 2) {
                dVar22 = (double)CONCAT44(uVar81,uVar80);
                dVar24 = (double)CONCAT44(uVar83,uVar82);
                dVar23 = (double)CONCAT44(uVar81,uVar80);
                dVar25 = (double)CONCAT44(uVar83,uVar82);
                pdVar50 = (double *)(local_2c0 + uVar65 * 8);
                dVar13 = *pdVar50;
                dVar19 = (double)CONCAT44(uVar77,uVar76);
                dVar21 = (double)CONCAT44(uVar79,uVar78);
                dVar20 = (double)CONCAT44(uVar77,uVar76);
                dVar18 = (double)CONCAT44(uVar79,uVar78);
                pdVar53 = local_3a8 + uVar65;
                uVar80 = *(undefined4 *)pdVar53;
                uVar81 = *(undefined4 *)((longlong)pdVar53 + 4);
                uVar82 = *(undefined4 *)(pdVar53 + 1);
                uVar83 = *(undefined4 *)((longlong)pdVar53 + 0xc);
                dVar69 = (double)CONCAT44(uVar85,uVar84);
                dVar73 = (double)CONCAT44(uVar87,uVar86);
                dVar71 = (double)CONCAT44(uVar85,uVar84);
                pdVar53 = local_2b0 + uVar65;
                uVar76 = *(undefined4 *)pdVar53;
                uVar77 = *(undefined4 *)((longlong)pdVar53 + 4);
                uVar78 = *(undefined4 *)(pdVar53 + 1);
                uVar79 = *(undefined4 *)((longlong)pdVar53 + 0xc);
                dVar75 = (double)CONCAT44(uVar89,uVar88);
                dVar15 = (double)CONCAT44(uVar89,uVar88);
                dVar18 = (double)CONCAT44(uVar91,uVar90) * dVar12 +
                         (double)CONCAT44(uVar87,uVar86) * dVar10 +
                         dVar18 * dVar68 + dVar25 * dVar74 + pdVar50[1];
                pdVar50 = local_3a0 + uVar65;
                uVar84 = *(undefined4 *)pdVar50;
                uVar85 = *(undefined4 *)((longlong)pdVar50 + 4);
                uVar86 = *(undefined4 *)(pdVar50 + 1);
                uVar87 = *(undefined4 *)((longlong)pdVar50 + 0xc);
                dVar73 = dVar8 * (double)CONCAT44(uVar91,uVar90) +
                         dVar6 * dVar73 +
                         dVar4 * dVar21 + dVar2 * dVar24 + (double)(local_2d8 + uVar65)[1];
                pdVar50 = local_2b8 + uVar65;
                uVar88 = *(undefined4 *)pdVar50;
                uVar89 = *(undefined4 *)((longlong)pdVar50 + 4);
                uVar90 = *(undefined4 *)(pdVar50 + 1);
                uVar91 = *(undefined4 *)((longlong)pdVar50 + 0xc);
                auVar33._8_4_ = SUB84(dVar73,0);
                auVar33._0_8_ =
                     dVar7 * dVar75 +
                     dVar5 * dVar69 + dVar3 * dVar19 + dVar67 * dVar22 + (double)local_2d8[uVar65];
                auVar33._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
                *(undefined1 (*) [16])(local_2d8 + uVar65) = auVar33;
                auVar17._8_4_ = SUB84(dVar18,0);
                auVar17._0_8_ =
                     dVar15 * dVar11 + dVar71 * dVar9 + dVar20 * dVar70 + dVar23 * dVar72 + dVar13;
                auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                *(undefined1 (*) [16])(local_2c0 + uVar65 * 8) = auVar17;
              }
              if ((longlong)local_3b0 < (longlong)local_3e0) {
                pdVar50 = (double *)0x0;
                do {
                  ppppuVar52[(longlong)pdVar50] =
                       (undefined8 ***)
                       (local_208[(longlong)pdVar50] * local_218[3] +
                        local_200[(longlong)pdVar50] * local_218[2] +
                        local_3d0[(longlong)pdVar50] * *local_218 +
                        local_1f8[(longlong)pdVar50] * local_218[1] +
                       (double)ppppuVar52[(longlong)pdVar50]);
                  *(double *)(lVar51 + (longlong)pdVar50 * 8) =
                       local_208[(longlong)pdVar50] * local_3d8[3] +
                       local_200[(longlong)pdVar50] * local_3d8[2] +
                       local_3d0[(longlong)pdVar50] * *local_3d8 +
                       local_1f8[(longlong)pdVar50] * local_3d8[1] +
                       *(double *)(lVar51 + (longlong)pdVar50 * 8);
                  pdVar50 = (double *)((longlong)pdVar50 + 1);
                } while (local_3f0 != pdVar50);
              }
              local_3d8 = local_3d8 + 4;
              pdVar62 = (double *)((longlong)pdVar62 + local_2e0);
              pdVar47 = (double *)((longlong)pdVar47 + local_2e0);
              pdVar59 = (double *)((longlong)pdVar59 + local_2e0);
              pdVar55 = (double *)((longlong)pdVar55 + local_2e0);
              local_2b8 = (double *)((longlong)local_2b8 + local_2e0);
              local_2b0 = (double *)((longlong)local_2b0 + local_2e0);
              local_3a8 = (double *)((longlong)local_3a8 + local_2e0);
              local_3d0 = (double *)((longlong)local_3d0 + local_2e0);
              pdVar50 = (double *)((longlong)local_3a0 + local_2e0);
              pdVar53 = local_218 + 4;
              pdVar1 = (double *)((longlong)local_208 + local_2e0);
              uVar65 = local_210 + 4;
              pdVar57 = (double *)((longlong)local_200 + local_2e0);
              pdVar45 = (double *)((longlong)local_1f8 + local_2e0);
              local_228 = ppppuVar52;
              local_220 = lVar51;
            } while ((longlong)(local_210 + 4) < (longlong)local_3c0);
          }
          local_320 = local_320 + 2;
          lVar56 = lVar56 + local_238;
          lVar46 = lVar46 + local_238;
          local_2d8 = (undefined8 ***)((longlong)local_2d8 + local_238);
          lVar51 = lVar51 + local_238;
          ppppuVar52 = (undefined8 ****)((longlong)ppppuVar52 + local_238);
          lVar49 = local_2c0 + local_238;
        } while ((longlong)local_320 < (longlong)local_230);
      }
      if (local_3f1 == '\0') {
        local_328 = local_328 - local_3b0;
        lVar56 = local_330 + (longlong)local_3e8 * 0x10;
        lVar51 = (longlong)local_3e8 * 2;
        lVar46 = (longlong)local_3e8 * 2;
        lVar49 = (longlong)local_3e8 * 2;
        local_3e8 = local_390 + (longlong)local_3e8 * 2;
        local_3f0 = local_370;
        pdVar47 = local_350;
        pdVar50 = (double *)0x0;
        pdVar53 = local_358;
        pdVar55 = local_338;
        pdVar1 = local_378 + lVar51;
        pdVar59 = local_388 + lVar49;
        pdVar57 = local_368;
        pdVar62 = local_360;
        pdVar45 = local_380 + lVar46;
        pdVar60 = local_288;
        pdVar63 = local_348;
        pdVar66 = local_340;
        do {
          local_3d8 = pdVar45;
          local_3a0 = pdVar59;
          local_3d0 = pdVar1;
          local_3a8 = pdVar50;
          dVar2 = *pdVar60;
          dVar67 = *pdVar60;
          dVar3 = pdVar60[1];
          dVar4 = pdVar60[1];
          dVar6 = pdVar60[2];
          dVar5 = pdVar60[2];
          dVar7 = pdVar60[3];
          dVar8 = pdVar60[3];
          pdVar50 = local_2d0 + (longlong)local_3a8 * param_5;
          uVar80 = *(undefined4 *)pdVar50;
          uVar81 = *(undefined4 *)((longlong)pdVar50 + 4);
          uVar82 = *(undefined4 *)(pdVar50 + 1);
          uVar83 = *(undefined4 *)((longlong)pdVar50 + 0xc);
          pdVar50 = local_2d0 + ((ulonglong)local_3a8 | 1) * param_5;
          uVar76 = *(undefined4 *)pdVar50;
          uVar77 = *(undefined4 *)((longlong)pdVar50 + 4);
          uVar78 = *(undefined4 *)(pdVar50 + 1);
          uVar79 = *(undefined4 *)((longlong)pdVar50 + 0xc);
          dVar72 = local_2d0[((ulonglong)local_3a8 | 2) * param_5];
          dVar74 = (local_2d0 + ((ulonglong)local_3a8 | 2) * param_5)[1];
          dVar68 = local_2d0[((ulonglong)local_3a8 | 3) * param_5];
          dVar70 = (local_2d0 + ((ulonglong)local_3a8 | 3) * param_5)[1];
          uVar65 = local_3b8;
          if (0xf < (longlong)local_2c8) {
            lVar51 = 0;
            do {
              pdVar50 = (double *)(local_2f0 + -0x70 + lVar51 * 8);
              dVar9 = pdVar50[1];
              dVar10 = pdVar55[lVar51 + -0xe];
              dVar11 = (pdVar55 + lVar51 + -0xe)[1];
              dVar12 = pdVar47[lVar51 + -0xe];
              dVar13 = (pdVar47 + lVar51 + -0xe)[1];
              dVar69 = pdVar63[lVar51 + -0xe];
              dVar71 = (pdVar63 + lVar51 + -0xe)[1];
              dVar73 = pdVar66[lVar51 + -0xe];
              dVar75 = (pdVar66 + lVar51 + -0xe)[1];
              pdVar1 = (double *)(local_2f0 + -0x70 + lVar51 * 8);
              *pdVar1 = dVar68 * dVar7 +
                        dVar72 * dVar6 +
                        (double)CONCAT44(uVar77,uVar76) * dVar3 +
                        (double)CONCAT44(uVar81,uVar80) * dVar2 + *pdVar50;
              pdVar1[1] = dVar70 * dVar8 +
                          dVar74 * dVar5 +
                          (double)CONCAT44(uVar79,uVar78) * dVar4 +
                          (double)CONCAT44(uVar83,uVar82) * dVar67 + dVar9;
              pdVar50 = (double *)(local_2f0 + -0x60 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar74 = pdVar55[lVar51 + -0xc];
              dVar68 = (pdVar55 + lVar51 + -0xc)[1];
              dVar70 = pdVar47[lVar51 + -0xc];
              dVar9 = (pdVar47 + lVar51 + -0xc)[1];
              dVar15 = pdVar63[lVar51 + -0xc];
              dVar18 = (pdVar63 + lVar51 + -0xc)[1];
              dVar19 = pdVar66[lVar51 + -0xc];
              dVar20 = (pdVar66 + lVar51 + -0xc)[1];
              pdVar1 = (double *)(local_2f0 + -0x60 + lVar51 * 8);
              *pdVar1 = dVar10 * dVar2 + *pdVar50 + dVar12 * dVar3 + dVar69 * dVar6 + dVar73 * dVar7
              ;
              pdVar1[1] = dVar11 * dVar67 + dVar72 + dVar13 * dVar4 + dVar71 * dVar5 +
                          dVar75 * dVar8;
              pdVar50 = (double *)(local_2f0 + -0x50 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar10 = pdVar55[lVar51 + -10];
              dVar11 = (pdVar55 + lVar51 + -10)[1];
              dVar12 = pdVar47[lVar51 + -10];
              dVar13 = (pdVar47 + lVar51 + -10)[1];
              dVar69 = pdVar63[lVar51 + -10];
              dVar71 = (pdVar63 + lVar51 + -10)[1];
              dVar73 = pdVar66[lVar51 + -10];
              dVar75 = (pdVar66 + lVar51 + -10)[1];
              pdVar1 = (double *)(local_2f0 + -0x50 + lVar51 * 8);
              *pdVar1 = dVar74 * dVar2 + *pdVar50 + dVar70 * dVar3 + dVar15 * dVar6 + dVar19 * dVar7
              ;
              pdVar1[1] = dVar68 * dVar67 + dVar72 + dVar9 * dVar4 + dVar18 * dVar5 + dVar20 * dVar8
              ;
              pdVar50 = (double *)(local_2f0 + -0x40 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar74 = pdVar55[lVar51 + -8];
              dVar68 = (pdVar55 + lVar51 + -8)[1];
              dVar70 = pdVar47[lVar51 + -8];
              dVar9 = (pdVar47 + lVar51 + -8)[1];
              dVar15 = pdVar63[lVar51 + -8];
              dVar18 = (pdVar63 + lVar51 + -8)[1];
              dVar19 = pdVar66[lVar51 + -8];
              dVar20 = (pdVar66 + lVar51 + -8)[1];
              pdVar1 = (double *)(local_2f0 + -0x40 + lVar51 * 8);
              *pdVar1 = dVar10 * dVar2 + *pdVar50 + dVar12 * dVar3 + dVar69 * dVar6 + dVar73 * dVar7
              ;
              pdVar1[1] = dVar11 * dVar67 + dVar72 + dVar13 * dVar4 + dVar71 * dVar5 +
                          dVar75 * dVar8;
              pdVar50 = (double *)(local_2f0 + -0x30 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar10 = pdVar55[lVar51 + -6];
              dVar11 = (pdVar55 + lVar51 + -6)[1];
              dVar12 = pdVar47[lVar51 + -6];
              dVar13 = (pdVar47 + lVar51 + -6)[1];
              dVar69 = pdVar63[lVar51 + -6];
              dVar71 = (pdVar63 + lVar51 + -6)[1];
              dVar73 = pdVar66[lVar51 + -6];
              dVar75 = (pdVar66 + lVar51 + -6)[1];
              pdVar1 = (double *)(local_2f0 + -0x30 + lVar51 * 8);
              *pdVar1 = dVar74 * dVar2 + *pdVar50 + dVar70 * dVar3 + dVar15 * dVar6 + dVar19 * dVar7
              ;
              pdVar1[1] = dVar68 * dVar67 + dVar72 + dVar9 * dVar4 + dVar18 * dVar5 + dVar20 * dVar8
              ;
              pdVar50 = (double *)(local_2f0 + -0x20 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar74 = pdVar55[lVar51 + -4];
              dVar68 = (pdVar55 + lVar51 + -4)[1];
              dVar70 = pdVar47[lVar51 + -4];
              dVar9 = (pdVar47 + lVar51 + -4)[1];
              dVar15 = pdVar63[lVar51 + -4];
              dVar18 = (pdVar63 + lVar51 + -4)[1];
              dVar19 = pdVar66[lVar51 + -4];
              dVar20 = (pdVar66 + lVar51 + -4)[1];
              pdVar1 = (double *)(local_2f0 + -0x20 + lVar51 * 8);
              *pdVar1 = dVar10 * dVar2 + *pdVar50 + dVar12 * dVar3 + dVar69 * dVar6 + dVar73 * dVar7
              ;
              pdVar1[1] = dVar11 * dVar67 + dVar72 + dVar13 * dVar4 + dVar71 * dVar5 +
                          dVar75 * dVar8;
              pdVar50 = (double *)(local_2f0 + -0x10 + lVar51 * 8);
              dVar72 = pdVar50[1];
              dVar10 = pdVar55[lVar51 + -2];
              dVar11 = (pdVar55 + lVar51 + -2)[1];
              dVar12 = pdVar47[lVar51 + -2];
              dVar13 = (pdVar47 + lVar51 + -2)[1];
              dVar69 = pdVar63[lVar51 + -2];
              dVar71 = (pdVar63 + lVar51 + -2)[1];
              dVar73 = pdVar66[lVar51 + -2];
              dVar75 = (pdVar66 + lVar51 + -2)[1];
              pdVar1 = (double *)(local_2f0 + -0x10 + lVar51 * 8);
              *pdVar1 = dVar74 * dVar2 + *pdVar50 + dVar70 * dVar3 + dVar15 * dVar6 + dVar19 * dVar7
              ;
              pdVar1[1] = dVar68 * dVar67 + dVar72 + dVar9 * dVar4 + dVar18 * dVar5 + dVar20 * dVar8
              ;
              pdVar50 = (double *)(local_2f0 + lVar51 * 8);
              dVar9 = dVar11 * dVar67 + pdVar50[1] + dVar13 * dVar4 + dVar71 * dVar5 +
                      dVar75 * dVar8;
              pdVar1 = pdVar55 + lVar51;
              uVar80 = *(undefined4 *)pdVar1;
              uVar81 = *(undefined4 *)((longlong)pdVar1 + 4);
              uVar82 = *(undefined4 *)(pdVar1 + 1);
              uVar83 = *(undefined4 *)((longlong)pdVar1 + 0xc);
              pdVar1 = pdVar47 + lVar51;
              uVar76 = *(undefined4 *)pdVar1;
              uVar77 = *(undefined4 *)((longlong)pdVar1 + 4);
              uVar78 = *(undefined4 *)(pdVar1 + 1);
              uVar79 = *(undefined4 *)((longlong)pdVar1 + 0xc);
              dVar72 = pdVar63[lVar51];
              dVar74 = (pdVar63 + lVar51)[1];
              dVar68 = pdVar66[lVar51];
              dVar70 = (pdVar66 + lVar51)[1];
              auVar14._8_4_ = SUB84(dVar9,0);
              auVar14._0_8_ =
                   dVar10 * dVar2 + *pdVar50 + dVar12 * dVar3 + dVar69 * dVar6 + dVar73 * dVar7;
              auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              *(undefined1 (*) [16])(local_2f0 + lVar51 * 8) = auVar14;
              lVar51 = lVar51 + 0x10;
            } while (lVar51 < (longlong)local_3b8);
          }
          for (; (longlong)uVar65 < (longlong)local_3b0; uVar65 = uVar65 + 2) {
            dVar12 = (double)CONCAT44(uVar81,uVar80);
            dVar13 = (double)CONCAT44(uVar83,uVar82);
            pdVar50 = (double *)(local_330 + uVar65 * 8);
            dVar9 = pdVar50[1];
            dVar10 = (double)CONCAT44(uVar77,uVar76);
            dVar11 = (double)CONCAT44(uVar79,uVar78);
            pdVar1 = local_3f0 + uVar65;
            uVar80 = *(undefined4 *)pdVar1;
            uVar81 = *(undefined4 *)((longlong)pdVar1 + 4);
            uVar82 = *(undefined4 *)(pdVar1 + 1);
            uVar83 = *(undefined4 *)((longlong)pdVar1 + 0xc);
            dVar73 = dVar72 * dVar6;
            dVar75 = dVar74 * dVar5;
            pdVar1 = pdVar57 + uVar65;
            uVar76 = *(undefined4 *)pdVar1;
            uVar77 = *(undefined4 *)((longlong)pdVar1 + 4);
            uVar78 = *(undefined4 *)(pdVar1 + 1);
            uVar79 = *(undefined4 *)((longlong)pdVar1 + 0xc);
            dVar69 = dVar68 * dVar7;
            dVar71 = dVar70 * dVar8;
            dVar72 = pdVar62[uVar65];
            dVar74 = (pdVar62 + uVar65)[1];
            dVar68 = pdVar53[uVar65];
            dVar70 = (pdVar53 + uVar65)[1];
            pdVar1 = (double *)(local_330 + uVar65 * 8);
            *pdVar1 = dVar69 + dVar73 + dVar10 * dVar3 + dVar12 * dVar2 + *pdVar50;
            pdVar1[1] = dVar71 + dVar75 + dVar11 * dVar4 + dVar13 * dVar67 + dVar9;
          }
          if ((longlong)local_3b0 < (longlong)local_3e0) {
            lVar51 = 0;
            do {
              *(double *)(lVar56 + lVar51 * 8) =
                   local_3d0[lVar51] * pdVar60[3] +
                   local_3d8[lVar51] * pdVar60[2] +
                   local_3e8[lVar51] * *pdVar60 + local_3a0[lVar51] * pdVar60[1] +
                   *(double *)(lVar56 + lVar51 * 8);
              lVar51 = lVar51 + 1;
            } while (local_328 != lVar51);
          }
          pdVar60 = pdVar60 + 4;
          pdVar66 = (double *)((longlong)pdVar66 + local_2e0);
          pdVar63 = (double *)((longlong)pdVar63 + local_2e0);
          pdVar47 = (double *)((longlong)pdVar47 + local_2e0);
          pdVar55 = (double *)((longlong)pdVar55 + local_2e0);
          pdVar53 = (double *)((longlong)pdVar53 + local_2e0);
          pdVar62 = (double *)((longlong)pdVar62 + local_2e0);
          pdVar57 = (double *)((longlong)pdVar57 + local_2e0);
          local_3f0 = (double *)((longlong)local_3f0 + local_2e0);
          local_3e8 = (double *)((longlong)local_3e8 + local_2e0);
          pdVar50 = (double *)((longlong)local_3a8 + 4);
          pdVar1 = (double *)((longlong)local_3d0 + local_2e0);
          pdVar59 = (double *)((longlong)local_3a0 + local_2e0);
          pdVar45 = (double *)((longlong)local_3d8 + local_2e0);
        } while ((longlong)local_3a8 + 4 < (longlong)local_3c0);
      }
      local_2f8 = uVar54;
      local_260 = lVar48;
      if ((0 < local_300) && (0 < local_278)) {
        pdVar47 = local_290 + uVar54;
        pdVar50 = local_298 + uVar54;
        pdVar53 = local_2a0 + uVar54;
        lVar51 = local_278;
        puVar64 = local_2a8;
        ppppuVar52 = (undefined8 ****)local_398;
        do {
          local_118 = ppppuVar52;
          if (local_300 == 2) {
            local_1a0 = (double *)*puVar64;
            local_150 = puVar64[1];
            local_1b0 = local_3e0;
            local_190 = local_3e0;
            local_160 = local_3e0;
            local_140 = local_3e0;
            local_110 = local_3e0;
            local_198 = pdVar47;
            local_148 = pdVar50;
            FUN_1483cd2d5(&local_118,local_1c8,&local_1e8);
          }
          else {
            local_1a0 = pdVar47;
            if (local_300 == 1) {
              local_1a8 = *puVar64;
              local_1b8 = local_3e0;
              local_198 = local_3e0;
              local_110 = local_3e0;
              FUN_1483cd1d6(&local_118,local_1c8,&local_1e8);
            }
            else {
              local_1b0 = (double *)*puVar64;
              local_180 = puVar64[1];
              local_150 = puVar64[2];
              local_1e0 = local_3e0;
              local_190 = local_3e0;
              local_160 = local_3e0;
              local_130 = local_3e0;
              local_e8 = local_3e0;
              local_118 = local_f8;
              local_110 = local_1c8;
              local_108 = &local_1e9;
              local_100 = &local_1e8;
              local_1e8 = ppppuVar52;
              local_170 = pdVar50;
              local_140 = pdVar53;
              local_f8[0] = ppppuVar52;
              FUN_1483cd424(&local_118);
            }
          }
          ppppuVar52 = (undefined8 ****)((longlong)ppppuVar52 + local_268);
          puVar64 = (undefined8 *)((longlong)puVar64 + local_270);
          lVar51 = lVar51 + -1;
        } while (lVar51 != 0);
      }
      uVar54 = local_2f8 + 0x200;
      lVar48 = lVar48 + -0x200;
      local_310 = local_310 + 0x1000;
      local_318 = local_318 + 0x1000;
      local_340 = local_340 + 0x200;
      local_348 = local_348 + 0x200;
      local_350 = local_350 + 0x200;
      local_338 = local_338 + 0x200;
      local_358 = local_358 + 0x200;
      local_360 = local_360 + 0x200;
      local_368 = local_368 + 0x200;
      local_370 = local_370 + 0x200;
      local_308 = local_308 + 0x1000;
      local_398 = local_398 + 0x200;
      local_378 = local_378 + 0x200;
      local_380 = local_380 + 0x200;
      local_388 = local_388 + 0x200;
      local_390 = local_390 + 0x200;
      local_2f0 = local_2f0 + 0x1000;
      local_330 = local_330 + 0x1000;
      param_2 = lVar58;
    } while ((longlong)uVar54 < (longlong)local_280);
  }
  if ((local_e0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ca43a FUN_1483ca43a body=273 status=ok
// SIG undefined FUN_1483ca43a(void)

void FUN_1483ca43a(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  double *pdVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  
  dVar1 = *(double *)(*param_1 + (longlong)*(int *)(*param_6 + param_7 * 4 + param_8 * 4) * 8);
  lVar12 = (param_4 + 1) * param_8;
  lVar13 = *param_3;
  *param_3 = lVar12 + lVar13 + 1;
  pdVar11 = (double *)((lVar12 + lVar13) * 8 + 8 + *param_2);
  piVar7 = (int *)(param_7 * 4 + *param_6 + param_8 * 4 + 4);
  if (param_5 < 2) {
    lVar13 = 0;
  }
  else {
    dVar14 = -dVar1;
    piVar5 = piVar7;
    pdVar6 = pdVar11;
    lVar12 = 0;
    do {
      pdVar10 = pdVar6;
      piVar9 = piVar5;
      piVar5 = piVar7 + lVar12;
      iVar4 = piVar5[1];
      lVar13 = *param_1;
      pdVar6 = pdVar11 + lVar12 + 2;
      dVar2 = pdVar6[-1];
      dVar3 = *(double *)(lVar13 + (longlong)iVar4 * 8);
      *(double *)(lVar13 + (longlong)*piVar5 * 8) =
           pdVar6[-2] * dVar14 + *(double *)(lVar13 + (longlong)*piVar5 * 8);
      *(double *)(*param_1 + (longlong)iVar4 * 8) = dVar2 * dVar14 + dVar3;
      lVar13 = lVar12 + 2;
      lVar8 = lVar12 + 3;
      piVar5 = piVar5 + 2;
      lVar12 = lVar13;
    } while (lVar8 < param_5);
    piVar7 = piVar9 + 2;
    pdVar11 = pdVar10 + 2;
  }
  if (lVar13 < param_5) {
    *(double *)(*param_1 + (longlong)*piVar7 * 8) =
         *(double *)(*param_1 + (longlong)*piVar7 * 8) - dVar1 * *pdVar11;
  }
  return;
}



// FUNCTION 1483ca54c FUN_1483ca54c body=600 status=ok
// SIG undefined FUN_1483ca54c(void)

void FUN_1483ca54c(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  longlong param_9)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  double *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  ulonglong local_d8;
  double *local_c8;
  undefined1 local_b9;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_80;
  longlong local_70 [2];
  ulonglong local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_8 = param_8 + param_9;
  lVar3 = param_8 * 4;
  lVar8 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    *(undefined8 *)(*param_2 + lVar8 * 8) =
         *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar3) * 8);
    lVar3 = lVar3 + 4;
    lVar8 = 1;
    bVar2 = false;
  } while (bVar4);
  lVar3 = (param_5 + 1) * param_9 + *param_4;
  *param_4 = lVar3;
  local_c8 = (double *)*param_2;
  local_c8[1] = local_c8[1] - *(double *)(*param_3 + 8 + lVar3 * 8) * *local_c8;
  lVar3 = *param_4;
  *param_4 = lVar3 + 2;
  local_80 = (param_6 - (param_6 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe;
  uVar6 = lVar3 * 8 + 0x10 + *param_3;
  uVar1 = *param_2 + 0x10;
  uVar7 = (longlong)(uVar6 << 0x3c) >> 0x3f;
  uVar9 = uVar7 + 2;
  if (uVar7 < 0xfffffffffffffffe) {
    uVar9 = uVar7;
  }
  uVar7 = 0;
  if ((uVar6 & 7) != 0) {
    uVar9 = uVar7;
  }
  uVar5 = 2;
  if ((uVar1 & 7) == 0) {
    uVar5 = (ulonglong)((uint)(uVar1 >> 3) & 1);
  }
  local_98 = *param_2 + 0x10 + uVar5 * 8 + uVar9 * 8;
  local_a0 = &local_98;
  local_90 = param_6;
  local_b0 = local_58;
  local_58[0] = 0;
  local_b8 = local_70;
  local_a8 = &local_b9;
  local_70[0] = local_98;
  local_60 = local_80;
  FUN_1483cd500();
  local_d8 = local_80;
  local_e0 = local_98;
  local_f0 = local_c8;
  local_f8 = param_5;
  local_e8 = 2;
  FUN_1483c8e7e(local_90,1,2,uVar6);
  bVar2 = true;
  do {
    bVar4 = bVar2;
    lVar3 = param_8 * 4;
    param_8 = param_8 + 1;
    *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar3) * 8) =
         *(undefined8 *)(*param_2 + uVar7 * 8);
    uVar7 = 1;
    bVar2 = false;
  } while (bVar4);
  if (0 < param_6) {
    lVar3 = 0;
    do {
      lVar8 = (longlong)*(int *)(*param_7 + (param_8 + lVar3) * 4);
      *(double *)(*param_1 + lVar8 * 8) =
           *(double *)(*param_1 + lVar8 * 8) - *(double *)(local_98 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_6 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ca7a6 FUN_1483ca7a6 body=596 status=ok
// SIG undefined FUN_1483ca7a6(void)

void FUN_1483ca7a6(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  longlong param_9)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_88 [3];
  longlong local_70 [2];
  ulonglong local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_9 + param_8;
  lVar3 = 0;
  do {
    *(undefined8 *)(*param_2 + lVar3 * 8) =
         *(undefined8 *)
          (*param_1 + (longlong)*(int *)(*param_7 + param_8 * 4 + param_9 * 4 + lVar3 * 4) * 8);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar3 = (param_5 + 1) * param_9 + *param_4;
  *param_4 = lVar3;
  local_b0 = lVar3 * 8 + *param_3;
  local_e0 = *param_2;
  local_a0 = param_5;
  local_88[0] = local_e0;
  FUN_1483cd5b2(&local_b0,local_88,local_88);
  lVar3 = *param_4;
  *param_4 = lVar3 + 3;
  local_98 = (param_6 - (param_6 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe;
  uVar8 = lVar3 * 8 + 0x18 + *param_3;
  uVar1 = *param_2 + 0x18;
  uVar6 = (longlong)(uVar8 << 0x3c) >> 0x3f;
  uVar7 = uVar6 + 2;
  if (uVar6 < 0xfffffffffffffffe) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if ((uVar8 & 7) != 0) {
    uVar7 = uVar6;
  }
  uVar4 = 2;
  if ((uVar1 & 7) == 0) {
    uVar4 = (ulonglong)((uint)(uVar1 >> 3) & 1);
  }
  local_b0 = *param_2 + uVar4 * 8 + 0x18 + uVar7 * 8;
  local_a8 = param_6;
  local_c8 = local_58;
  local_58[0] = 0;
  local_d0 = local_70;
  local_c0 = &local_d1;
  local_b8 = &local_b0;
  local_70[0] = local_b0;
  local_60 = local_98;
  FUN_1483cd500();
  local_e8 = local_98;
  local_f0 = local_b0;
  local_100 = local_e0;
  local_108 = param_5;
  local_f8 = 3;
  FUN_1483c8e7e(local_a8,1,3,uVar8);
  do {
    lVar3 = lVar5 * 4;
    lVar5 = lVar5 + 1;
    *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar3) * 8) =
         *(undefined8 *)(*param_2 + uVar6 * 8);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 3);
  if (0 < param_6) {
    lVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_7 + (lVar3 + lVar5) * 4);
      *(double *)(*param_1 + lVar2 * 8) =
           *(double *)(*param_1 + lVar2 * 8) - *(double *)(local_b0 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_6 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ca9fc FUN_1483ca9fc body=644 status=ok
// SIG undefined FUN_1483ca9fc(void)

void FUN_1483ca9fc(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8,
                  longlong param_9,longlong param_10)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_e8;
  undefined1 local_d9;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_90;
  longlong lStack_88;
  longlong local_70 [2];
  ulonglong local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (0 < param_1) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_3 + lVar3 * 8) =
           *(undefined8 *)
            (*param_2 + (longlong)*(int *)(*param_8 + param_9 * 4 + param_10 * 4 + lVar3 * 4) * 8);
      lVar3 = lVar3 + 1;
    } while (param_1 != lVar3);
  }
  param_9 = param_9 + param_10;
  lVar3 = (param_6 + 1) * param_10 + *param_5;
  *param_5 = lVar3;
  local_b8 = lVar3 * 8 + *param_4;
  local_90 = *param_3;
  local_a0 = param_6;
  local_e8 = param_4;
  local_b0 = param_1;
  local_a8 = param_1;
  lStack_88 = param_1;
  FUN_1483cd61c(&local_b8,&local_90,&local_90);
  lVar3 = *param_5;
  *param_5 = lVar3 + param_1;
  local_a0 = (param_7 - (param_7 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe;
  uVar6 = (lVar3 + param_1) * 8 + *local_e8;
  uVar1 = param_1 * 8 + *param_3;
  uVar4 = (longlong)(uVar6 << 0x3c) >> 0x3f;
  uVar5 = uVar4 + 2;
  if (uVar4 < 0xfffffffffffffffe) {
    uVar5 = uVar4;
  }
  uVar4 = 0;
  if ((uVar6 & 7) == 0) {
    uVar4 = uVar5;
  }
  uVar5 = 2;
  if ((uVar1 & 7) == 0) {
    uVar5 = (ulonglong)((uint)(uVar1 >> 3) & 1);
  }
  local_b8 = uVar1 + uVar5 * 8 + uVar4 * 8;
  local_b0 = param_7;
  local_d0 = local_58;
  local_58[0] = 0;
  local_d8 = local_70;
  local_c8 = &local_d9;
  local_c0 = &local_b8;
  local_70[0] = local_b8;
  local_60 = local_a0;
  FUN_1483cd500();
  local_f8 = local_a0;
  local_100 = local_b8;
  local_110 = local_90;
  lStack_108 = lStack_88;
  local_118 = param_6;
  FUN_1483c8e7e(local_b0,1,param_1,uVar6);
  if (0 < param_1) {
    lVar3 = 0;
    do {
      lVar2 = param_9 * 4;
      param_9 = param_9 + 1;
      *(undefined8 *)(*param_2 + (longlong)*(int *)(*param_8 + lVar2) * 8) =
           *(undefined8 *)(*param_3 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_1 != lVar3);
  }
  if (0 < param_7) {
    lVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_8 + param_9 * 4 + lVar3 * 4);
      *(double *)(*param_2 + lVar2 * 8) =
           *(double *)(*param_2 + lVar2 * 8) - *(double *)(local_b8 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_7 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cac82 FUN_1483cac82 body=168 status=ok
// SIG undefined FUN_1483cac82(void)

void FUN_1483cac82(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1483cad2c();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1483cae32(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cad2c FUN_1483cad2c body=261 status=ok
// SIG undefined FUN_1483cad2c(void)

void FUN_1483cad2c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = param_1[3];
  lVar3 = *(longlong *)(lVar11 + 0x10);
  if (0 < lVar3) {
    lVar4 = *(longlong *)(lVar11 + 8);
    uVar5 = *(undefined8 *)(lVar11 + 0x18);
    lVar10 = 0;
    lVar11 = 0;
    lVar12 = 0;
    do {
      if (0 < lVar11) {
        *(undefined8 *)(*(longlong *)*param_1 + ((longlong *)*param_1)[2] * lVar12 * 8) =
             *(undefined8 *)(*(longlong *)param_1[1] + ((longlong *)param_1[1])[2] * lVar12 * 8);
      }
      uVar7 = lVar4 - lVar11 & 0xfffffffffffffffe;
      lVar8 = uVar7 + lVar11;
      lVar9 = lVar11;
      if (0 < (longlong)uVar7) {
        do {
          puVar1 = (undefined8 *)
                   (((longlong *)param_1[1])[2] * lVar10 + *(longlong *)param_1[1] + lVar9 * 8);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)
                   (((longlong *)*param_1)[2] * lVar10 + *(longlong *)*param_1 + lVar9 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          lVar9 = lVar9 + 2;
        } while (lVar9 < lVar8);
      }
      for (; lVar8 < lVar4; lVar8 = lVar8 + 1) {
        *(undefined8 *)(((longlong *)*param_1)[2] * lVar10 + *(longlong *)*param_1 + lVar8 * 8) =
             *(undefined8 *)
              (((longlong *)param_1[1])[2] * lVar10 + *(longlong *)param_1[1] + lVar8 * 8);
      }
      lVar11 = (longlong)(lVar11 + (ulonglong)((uint)uVar5 & 1)) % 2;
      if (lVar4 < lVar11) {
        lVar11 = lVar4;
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 8;
    } while (lVar12 != lVar3);
  }
  return;
}



// FUNCTION 1483cae32 FUN_1483cae32 body=226 status=ok
// SIG undefined FUN_1483cae32(void)

void FUN_1483cae32(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  lVar2 = param_2[2];
  local_68 = param_2[1];
  local_78 = 0;
  uStack_70 = 0;
  local_60 = lVar2;
  local_58 = lVar1;
  local_38 = lVar2;
  FUN_1483cb6da(&local_58,&local_68);
  local_50 = local_68 * local_58;
  local_48 = local_58 * local_60;
  local_98 = *param_2;
  local_90 = param_2[3];
  local_88 = &local_78;
  FUN_1483caf16(lVar1,lVar2,*param_1,param_1[3]);
  FUN_1400020a8(local_78);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_1400020a8(uStack_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1483caf16 FUN_1483caf16 body=1983 status=ok
// SIG undefined FUN_1483caf16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483caf16(ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,longlong *param_7)

{
  double dVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_1d8 [8];
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [8];
  ulonglong local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_158;
  local_90 = param_7[4];
  local_b0 = param_7[2];
  if ((longlong)param_1 <= param_7[2]) {
    local_b0 = param_1;
  }
  uVar8 = local_b0 * local_90;
  local_130 = param_3;
  local_c0 = param_4;
  local_b8 = param_1;
  if (uVar8 >> 0x3d != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_1d8;
  uVar15 = local_90 * param_2;
  local_98 = (undefined1 *)*param_7;
  uVar8 = uVar8 * 8;
  if (local_98 == (undefined1 *)0x0) {
    if (uVar8 < 0x20001) {
      lVar17 = -(uVar8 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_1d8 + lVar17;
      local_98 = auStack_1d8 + lVar17;
    }
    else {
      local_98 = (undefined1 *)FUN_14001cc68(uVar8,0x10);
      puVar9 = auStack_1d8;
      if (local_98 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_1d8;
        local_98 = (undefined1 *)0x0;
      }
    }
  }
  local_178 = (undefined1 *)0x0;
  if (*param_7 == 0) {
    local_178 = local_98;
  }
  if (0x1fffffffffffffff < uVar15) {
    *(undefined8 *)(puVar9 + -0x28) = 0x1483caffd;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  local_148 = (undefined1 *)param_7[1];
  uVar15 = uVar15 * 8;
  if (local_148 == (undefined1 *)0x0) {
    if (uVar15 < 0x20001) {
      *(undefined8 *)(puVar9 + -8) = 0x1483cb653;
      lVar17 = -(uVar15 + 0x1e & 0xfffffffffffffff0);
      local_148 = puVar9 + lVar17;
      puVar9 = puVar9 + lVar17;
    }
    else {
      *(undefined8 *)(puVar9 + -0x28) = 0x1483cb6ad;
      local_148 = (undefined1 *)FUN_14001cc68(uVar15,0x10);
      if (local_148 == (undefined1 *)0x0) {
        *(undefined8 *)(puVar9 + -0x28) = 0x1483cb6cf;
        FUN_14001cc68(0xffffffffffffffff,0x10);
        local_148 = (undefined1 *)0x0;
      }
    }
  }
  uVar11 = 0;
  local_170 = (undefined1 *)0x0;
  if (param_7[1] == 0) {
    local_170 = local_148;
  }
  local_188 = uVar8;
  local_180 = uVar15;
  *(undefined8 *)(puVar9 + -0x28) = 0x1483cb059;
  FUN_14750920c(0,local_68,&local_70,local_78);
  if (0 < param_2) {
    uVar8 = local_b8;
    if ((longlong)local_b8 < (longlong)param_6) {
      uVar8 = param_6;
    }
    local_70 = local_70 / (uVar8 << 5);
    uVar11 = local_70 + 3;
    if (-1 < (longlong)local_70) {
      uVar11 = local_70;
    }
    uVar11 = uVar11 & 0xfffffffffffffffc;
  }
  if ((longlong)uVar11 < 5) {
    uVar11 = 4;
  }
  local_d0 = param_2;
  local_c8 = uVar11;
  if (0 < (longlong)local_b8) {
    local_110 = param_5 + 8;
    local_198 = local_90 * 8;
    local_1b0 = param_6 * uVar11 * 8;
    local_140 = local_130 + 8;
    local_1d0 = local_c0 * 8 + 8;
    local_190 = local_90 * local_1d0;
    local_1b8 = local_c0 * 0x20 + 0x20;
    local_128 = param_5 + local_90 * 8;
    local_138 = local_b0 * 8;
    local_120 = local_130 + local_90 * 8;
    local_118 = local_b8 - local_90;
    local_a0 = 0;
    local_1a0 = local_b8;
    uVar8 = local_b8;
    while( true ) {
      local_1a8 = local_1a0;
      if ((longlong)local_90 < (longlong)local_1a0) {
        local_1a8 = local_90;
      }
      uVar15 = uVar8 - local_a0;
      if ((longlong)local_90 < (longlong)(uVar8 - local_a0)) {
        uVar15 = local_90;
      }
      local_a8 = uVar15;
      if (0 < local_d0) {
        local_d8 = local_110;
        lVar17 = 0;
        do {
          local_108 = local_d0 - lVar17;
          local_e0 = local_108;
          if ((longlong)local_c8 < (longlong)local_108) {
            local_e0 = local_c8;
          }
          local_100 = lVar17;
          if (0 < (longlong)uVar15) {
            lVar14 = local_e0 + lVar17;
            local_158 = param_5 + lVar17 * param_6 * 8;
            local_150 = local_148 + lVar17 * uVar15 * 8;
            local_f8 = local_140;
            local_160 = local_d8;
            lVar17 = 0;
            uVar8 = local_1a8;
            do {
              uVar11 = 4;
              if ((longlong)uVar8 < 4) {
                uVar11 = uVar8;
              }
              if ((longlong)uVar11 < 2) {
                uVar11 = 1;
              }
              local_e8 = uVar15 - lVar17;
              local_168 = 4;
              if (local_e8 < 4) {
                local_168 = local_e8;
              }
              local_1c0 = lVar17 + local_a0;
              if (0 < local_e8) {
                uVar15 = 0;
                lVar5 = local_f8;
                lVar6 = local_160;
                do {
                  if (0 < (longlong)local_108) {
                    lVar12 = lVar6;
                    lVar16 = local_100;
                    do {
                      if (0 < (longlong)(~uVar15 + local_168)) {
                        dVar1 = *(double *)
                                 (param_5 + lVar16 * param_6 * 8 + (uVar15 + local_1c0) * 8);
                        lVar13 = 0;
                        do {
                          *(double *)(lVar12 + lVar13 * 8) =
                               *(double *)(lVar5 + lVar13 * 8) * -dVar1 +
                               *(double *)(lVar12 + lVar13 * 8);
                          lVar13 = lVar13 + 1;
                        } while (lVar13 < (longlong)(~uVar15 + local_168));
                      }
                      lVar16 = lVar16 + 1;
                      lVar12 = lVar12 + param_6 * 8;
                    } while (lVar16 < lVar14);
                  }
                  uVar15 = uVar15 + 1;
                  lVar6 = lVar6 + 8;
                  lVar5 = lVar5 + local_1d0;
                } while (uVar15 != uVar11);
              }
              local_88 = local_158 + local_1c0 * 8;
              local_80 = param_6;
              local_1c8 = uVar8;
              local_f0 = lVar17;
              *(longlong *)(puVar9 + -8) = lVar17;
              uVar15 = local_a8;
              *(ulonglong *)(puVar9 + -0x10) = local_a8;
              uVar8 = local_e0;
              puVar2 = local_150;
              lVar5 = local_168;
              *(undefined8 *)(puVar9 + -0x38) = 0x1483cb335;
              FUN_1483cb908(puVar2,&local_88,lVar5,uVar8);
              puVar2 = local_98;
              if (local_e8 - lVar5 != 0 && lVar5 <= local_e8) {
                lVar17 = lVar5 + local_1c0;
                local_88 = local_130 + local_1c0 * local_c0 * 8 + lVar17 * 8;
                local_80 = local_c0;
                local_e8 = local_e8 - lVar5;
                *(undefined8 *)(puVar9 + -0x28) = 0x1483cb3bb;
                FUN_1483cbae0(puVar2,&local_88,lVar5);
                uVar15 = local_a8;
                local_88 = local_158 + lVar17 * 8;
                local_80 = param_6;
                *(longlong *)(puVar9 + -0x10) = local_f0;
                *(ulonglong *)(puVar9 + -0x18) = uVar15;
                *(longlong *)(puVar9 + -0x20) = lVar5;
                *(ulonglong *)(puVar9 + -0x28) = local_e0;
                *(longlong *)(puVar9 + -0x30) = lVar5;
                puVar4 = local_98;
                lVar5 = local_e8;
                lVar17 = local_f0;
                puVar2 = local_150;
                *(undefined8 *)(puVar9 + -0x58) = 0x1483cb41c;
                FUN_1483cbbc6(&local_88,puVar4,puVar2,lVar5);
              }
              lVar17 = lVar17 + 4;
              uVar8 = local_1c8 - 4;
              local_160 = local_160 + 0x20;
              local_f8 = local_f8 + local_1b8;
            } while (lVar17 < (longlong)uVar15);
          }
          lVar17 = local_100 + local_c8;
          local_d8 = local_d8 + local_1b0;
        } while (lVar17 < local_d0);
      }
      lVar6 = local_a0 + local_90;
      uVar15 = local_b0;
      lVar17 = local_138;
      uVar11 = local_118;
      uVar8 = local_b8;
      lVar14 = local_120;
      lVar5 = local_128;
      local_a0 = lVar6;
      if ((longlong)local_b8 <= lVar6) break;
      do {
        puVar2 = local_98;
        uVar3 = local_a8;
        uVar7 = uVar11 - uVar15;
        uVar10 = uVar11;
        if ((longlong)uVar15 <= (longlong)uVar11) {
          uVar10 = uVar15;
        }
        uVar11 = uVar7;
        if (0 < (longlong)uVar10) {
          local_80 = local_c0;
          local_108 = uVar7;
          local_88 = lVar14;
          *(undefined8 *)(puVar9 + -0x28) = 0x1483cb4f3;
          FUN_1483cbae0(puVar2,&local_88,uVar3,uVar10);
          local_80 = param_6;
          local_88 = lVar5;
          *(undefined8 *)(puVar9 + -0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + -0x20) = 0xffffffffffffffff;
          *(longlong *)(puVar9 + -0x28) = local_d0;
          *(ulonglong *)(puVar9 + -0x30) = local_a8;
          *(undefined8 *)(puVar9 + -0x10) = 0;
          puVar4 = local_98;
          puVar2 = local_148;
          *(undefined8 *)(puVar9 + -0x58) = 0x1483cb555;
          FUN_1483cbbc6(&local_88,puVar4,puVar2,uVar10);
          uVar15 = local_b0;
          lVar17 = local_138;
          uVar11 = local_108;
          uVar8 = local_b8;
        }
        lVar6 = lVar6 + uVar15;
        lVar5 = lVar5 + lVar17;
        lVar14 = lVar14 + lVar17;
      } while (lVar6 < (longlong)uVar8);
      local_1a0 = local_1a0 - local_90;
      local_110 = local_110 + local_198;
      local_140 = local_140 + local_190;
      local_128 = local_128 + local_198;
      local_120 = local_120 + local_190;
      local_118 = local_118 - local_90;
    }
  }
  puVar2 = local_170;
  if (0x20000 < local_180) {
    *(undefined8 *)(puVar9 + -0x28) = 0x1483cb5c1;
    FUN_1400020a8(puVar2);
  }
  puVar2 = local_178;
  if (0x20000 < local_188) {
    *(undefined8 *)(puVar9 + -0x28) = 0x1483cb5dc;
    FUN_1400020a8(puVar2);
  }
  if ((local_60 ^ (ulonglong)&local_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -0x28) = &UNK_1483cb617;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cb6da FUN_1483cb6da body=556 status=ok
// SIG undefined FUN_1483cb6da(void)

void FUN_1483cb6da(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14750920c(0,&local_30,&local_38,&local_40);
  uVar8 = *param_2;
  uVar7 = *param_3;
  if ((longlong)*param_3 < (longlong)uVar8) {
    uVar7 = uVar8;
  }
  uVar2 = *param_1;
  if ((longlong)uVar7 < (longlong)uVar2) {
    uVar7 = uVar2;
  }
  if (0x2f < (longlong)uVar7) {
    lVar1 = local_30 - 0x80;
    lVar5 = local_30 + 0x7f;
    if (-1 < lVar1) {
      lVar5 = lVar1;
    }
    uVar6 = lVar5 >> 8 & 0xfffffffffffffff8;
    uVar7 = 1;
    if (1 < (longlong)uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = uVar2;
    if ((longlong)uVar7 < (longlong)uVar2) {
      uVar6 = uVar7;
      if (uVar2 % uVar7 != 0) {
        uVar6 = uVar7 + ((longlong)(~(uVar2 % uVar7) + uVar7) / (longlong)((uVar2 / uVar7) * 8 + 8))
                        * -8;
      }
      *param_1 = uVar6;
      uVar8 = *param_2;
    }
    uVar9 = lVar1 - uVar6 * 8 * uVar8;
    if ((longlong)uVar9 < (longlong)(uVar6 * 0x20)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7 << 5;
      uVar9 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x480000)) / auVar3,0);
    }
    else {
      uVar9 = uVar9 / (uVar6 * 8);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 << 4;
    uVar7 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x180000)) / auVar4,0);
    if ((longlong)uVar9 < (longlong)uVar7) {
      uVar7 = uVar9;
    }
    uVar7 = uVar7 & 0xfffffffffffffffc;
    uVar9 = *param_3;
    if ((longlong)uVar7 < (longlong)uVar9) {
      if ((longlong)uVar9 % (longlong)uVar7 != 0) {
        uVar7 = uVar7 + ((longlong)(uVar7 - (longlong)uVar9 % (longlong)uVar7) /
                        (((longlong)uVar9 / (longlong)uVar7) * 4 + 4)) * -4;
      }
      *param_3 = uVar7;
    }
    else if (uVar2 == uVar6) {
      uVar6 = uVar9 * uVar2 * 8;
      uVar7 = uVar8;
      if ((((0x400 < (longlong)uVar6) && (local_30 = 0x180000, uVar6 < 0x8001)) && (local_40 != 0))
         && (local_30 = local_38, uVar7 = 0x240, (longlong)uVar8 < 0x240)) {
        uVar7 = uVar8;
      }
      local_30 = local_30 / (uVar2 * 0x18);
      if ((longlong)uVar7 < (longlong)local_30) {
        local_30 = uVar7;
      }
      if ((longlong)local_30 < 5) {
        if (local_30 == 0) goto LAB_1483cb72e;
      }
      else {
        local_30 = local_30 & 0x7ffffffffffffffc;
      }
      if ((longlong)uVar8 % (longlong)local_30 != 0) {
        local_30 = local_30 +
                   ((longlong)(local_30 - (longlong)uVar8 % (longlong)local_30) /
                   (((longlong)uVar8 / (longlong)local_30) * 4 + 4)) * -4;
      }
      *param_2 = local_30;
    }
  }
LAB_1483cb72e:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cb908 FUN_1483cb908 body=472 status=ok
// SIG undefined FUN_1483cb908(void)

void FUN_1483cb908(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar3 = param_4 + 3;
  if (-1 < (longlong)param_4) {
    uVar3 = param_4;
  }
  uVar4 = uVar3 & 0xfffffffffffffffc;
  if ((longlong)param_4 < 4) {
    lVar8 = 0;
  }
  else {
    lVar11 = 0x18;
    lVar12 = 0x10;
    lVar6 = 8;
    lVar5 = 0;
    lVar13 = 0;
    lVar8 = 0;
    do {
      lVar7 = lVar8 + param_6 * 4;
      if (0 < param_3) {
        lVar1 = *param_2;
        lVar2 = param_2[1];
        lVar8 = param_6 * 0x20 + param_1 + 0x18 + lVar8 * 8;
        lVar10 = 0;
        lVar9 = param_3;
        do {
          *(undefined8 *)(lVar8 + -0x18 + lVar10 * 8) =
               *(undefined8 *)(lVar2 * lVar5 + lVar1 + lVar10 * 2);
          *(undefined8 *)(lVar8 + -0x10 + lVar10 * 8) =
               *(undefined8 *)(lVar2 * lVar6 + lVar1 + lVar10 * 2);
          *(undefined8 *)(lVar8 + -8 + lVar10 * 8) =
               *(undefined8 *)(lVar2 * lVar12 + lVar1 + lVar10 * 2);
          *(undefined8 *)(lVar8 + lVar10 * 8) = *(undefined8 *)(lVar2 * lVar11 + lVar1 + lVar10 * 2)
          ;
          lVar10 = lVar10 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar7 = lVar7 + lVar10;
      }
      lVar8 = lVar7 + ((param_5 - param_3) - param_6) * 4;
      lVar13 = lVar13 + 4;
      lVar11 = lVar11 + 0x20;
      lVar12 = lVar12 + 0x20;
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + 0x20;
    } while (lVar13 < (longlong)uVar4);
  }
  if ((longlong)uVar4 < (longlong)param_4) {
    lVar5 = ((longlong)uVar3 >> 2) << 5;
    do {
      lVar8 = lVar8 + param_6;
      if (0 < param_3) {
        lVar6 = param_2[1];
        lVar11 = *param_2;
        lVar12 = 0;
        do {
          *(undefined8 *)(param_1 + lVar8 * 8 + lVar12 * 8) =
               *(undefined8 *)(lVar6 * lVar5 + lVar11 + lVar12 * 8);
          lVar12 = lVar12 + 1;
        } while (param_3 != lVar12);
        lVar8 = lVar8 + lVar12;
      }
      lVar8 = lVar8 + ((param_5 - param_3) - param_6);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 != param_4);
  }
  return;
}



// FUNCTION 1483cbae0 FUN_1483cbae0 body=230 status=ok
// SIG undefined FUN_1483cbae0(void)

void FUN_1483cbae0(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((longlong)param_4 < 4) {
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    lVar8 = 0;
    do {
      if (0 < param_3) {
        lVar7 = 0;
        do {
          lVar9 = param_2[1] * lVar7 * 8 + *param_2;
          puVar1 = (undefined8 *)(lVar9 + uVar6 * 8);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + (uVar6 | 2) * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_1 + lVar8 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_1 + 0x10 + lVar8 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar8 = lVar8 + 4;
          lVar7 = lVar7 + 1;
        } while (param_3 != lVar7);
      }
      uVar6 = uVar6 + 4;
    } while ((longlong)uVar6 < (longlong)(param_4 & 0xfffffffffffffffc));
  }
  for (; (longlong)uVar6 < (longlong)(param_4 & 0xfffffffffffffffe); uVar6 = uVar6 + 2) {
    if (0 < param_3) {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(param_2[1] * lVar7 * 8 + *param_2 + uVar6 * 8);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + lVar8 * 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        lVar8 = lVar8 + 2;
        lVar7 = lVar7 + 1;
      } while (param_3 != lVar7);
    }
  }
  if ((longlong)uVar6 < (longlong)param_4) {
    do {
      if (0 < param_3) {
        lVar7 = 0;
        do {
          *(undefined8 *)(param_1 + lVar8 * 8 + lVar7 * 8) =
               *(undefined8 *)(param_2[1] * lVar7 * 8 + *param_2 + uVar6 * 8);
          lVar7 = lVar7 + 1;
        } while (param_3 != lVar7);
        lVar8 = lVar8 + lVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  return;
}



// FUNCTION 1483cbbc6 FUN_1483cbbc6 body=3617 status=ok
// SIG undefined FUN_1483cbbc6(void)

void FUN_1483cbbc6(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  double dVar18;
  double dVar20;
  double dVar22;
  double dVar24;
  double dVar26;
  double dVar28;
  double dVar30;
  double dVar32;
  double dVar34;
  double dVar36;
  double dVar38;
  double dVar40;
  double dVar42;
  double dVar44;
  double dVar46;
  double dVar48;
  double dVar50;
  double dVar52;
  double dVar54;
  double dVar56;
  double dVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  ulonglong uVar97;
  double *pdVar98;
  double *pdVar99;
  longlong lVar100;
  longlong lVar101;
  double *pdVar102;
  ulonglong uVar103;
  ulonglong uVar104;
  ulonglong uVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  longlong lVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  longlong lVar111;
  longlong lVar112;
  double *pdVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  double dVar124;
  double dVar125;
  double dVar126;
  double dVar127;
  double dVar128;
  double dVar129;
  ulonglong local_170;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar17;
  double dVar19;
  double dVar21;
  double dVar23;
  double dVar25;
  double dVar27;
  double dVar29;
  double dVar31;
  double dVar33;
  double dVar35;
  double dVar37;
  double dVar39;
  double dVar41;
  double dVar43;
  double dVar45;
  double dVar47;
  double dVar49;
  double dVar51;
  double dVar53;
  double dVar55;
  double dVar57;
  double dVar59;
  
  if (param_7 == 0xffffffffffffffff) {
    param_7 = param_5;
  }
  if (param_8 == 0xffffffffffffffff) {
    param_8 = param_5;
  }
  uVar106 = param_6 + 3;
  if (-1 < (longlong)param_6) {
    uVar106 = param_6;
  }
  uVar95 = (param_5 * -0x20 + 0x7f80) / (param_5 * 0x20);
  uVar105 = param_4 & 0xfffffffffffffffc;
  uVar104 = (ulonglong)((uint)(param_4 >> 1) & 1);
  lVar101 = uVar105 + uVar104 * 2;
  lVar108 = (longlong)(param_4 - lVar101) / 2 + uVar104;
  lVar100 = (ulonglong)((uint)param_4 & 3) + lVar108 * -2;
  local_170 = uVar106 & 0xfffffffffffffffc;
  uVar110 = param_5 & 0xfffffffffffffff8;
  uVar104 = 1;
  if (1 < (longlong)uVar95) {
    uVar104 = uVar95;
  }
  lVar100 = uVar105 + (((ulonglong)(lVar100 - (lVar100 >> 0x3f)) >> 1) + lVar108) * 2;
  if (3 < (longlong)param_4) {
    uVar95 = 0;
    do {
      uVar96 = uVar104 * 4 + uVar95;
      uVar97 = uVar96;
      if ((longlong)uVar105 < (longlong)uVar96) {
        uVar97 = uVar105;
      }
      if (3 < (longlong)param_6) {
        uVar107 = 0;
        do {
          if ((longlong)uVar95 < (longlong)uVar105) {
            pdVar113 = (double *)(param_9 * 0x20 + param_3 + uVar107 * param_8 * 8);
            uVar109 = uVar95;
            do {
              pdVar98 = (double *)(uVar109 * param_7 * 8 + param_2);
              lVar108 = *param_1;
              lVar111 = param_1[1];
              pdVar102 = pdVar113;
              if ((longlong)uVar110 < 1) {
                dVar114 = 0.0;
                dVar116 = 0.0;
                dVar122 = 0.0;
                dVar123 = 0.0;
                dVar124 = 0.0;
                dVar125 = 0.0;
                dVar128 = 0.0;
                dVar129 = 0.0;
                dVar118 = 0.0;
                dVar120 = 0.0;
                dVar126 = 0.0;
                dVar127 = 0.0;
                dVar115 = 0.0;
                dVar117 = 0.0;
                dVar119 = 0.0;
                dVar121 = 0.0;
              }
              else {
                dVar119 = 0.0;
                dVar121 = 0.0;
                lVar112 = 0;
                dVar115 = 0.0;
                dVar117 = 0.0;
                dVar126 = 0.0;
                dVar127 = 0.0;
                dVar118 = 0.0;
                dVar120 = 0.0;
                dVar128 = 0.0;
                dVar129 = 0.0;
                dVar124 = 0.0;
                dVar125 = 0.0;
                dVar122 = 0.0;
                dVar123 = 0.0;
                dVar114 = 0.0;
                dVar116 = 0.0;
                do {
                  dVar2 = pdVar102[1];
                  dVar3 = pdVar102[1];
                  dVar63 = *pdVar98;
                  dVar64 = pdVar98[1];
                  dVar65 = pdVar98[2];
                  dVar66 = pdVar98[3];
                  dVar4 = pdVar102[2];
                  dVar5 = pdVar102[2];
                  dVar6 = pdVar102[3];
                  dVar7 = pdVar102[3];
                  dVar67 = pdVar98[4];
                  dVar68 = pdVar98[5];
                  dVar69 = pdVar98[6];
                  dVar70 = pdVar98[7];
                  dVar8 = pdVar102[4];
                  dVar9 = pdVar102[4];
                  dVar10 = pdVar102[5];
                  dVar11 = pdVar102[5];
                  dVar12 = pdVar102[6];
                  dVar13 = pdVar102[6];
                  dVar14 = pdVar102[7];
                  dVar15 = pdVar102[7];
                  dVar71 = pdVar98[8];
                  dVar72 = pdVar98[9];
                  dVar73 = pdVar98[10];
                  dVar74 = pdVar98[0xb];
                  dVar16 = pdVar102[8];
                  dVar17 = pdVar102[8];
                  dVar18 = pdVar102[9];
                  dVar19 = pdVar102[9];
                  dVar20 = pdVar102[10];
                  dVar21 = pdVar102[10];
                  dVar22 = pdVar102[0xb];
                  dVar23 = pdVar102[0xb];
                  dVar75 = pdVar98[0xc];
                  dVar76 = pdVar98[0xd];
                  dVar77 = pdVar98[0xe];
                  dVar78 = pdVar98[0xf];
                  dVar24 = pdVar102[0xc];
                  dVar25 = pdVar102[0xc];
                  dVar26 = pdVar102[0xd];
                  dVar27 = pdVar102[0xd];
                  dVar28 = pdVar102[0xe];
                  dVar29 = pdVar102[0xe];
                  dVar30 = pdVar102[0xf];
                  dVar31 = pdVar102[0xf];
                  dVar32 = pdVar102[0x10];
                  dVar33 = pdVar102[0x10];
                  dVar34 = pdVar102[0x11];
                  dVar35 = pdVar102[0x11];
                  dVar79 = pdVar98[0x10];
                  dVar80 = pdVar98[0x11];
                  dVar81 = pdVar98[0x12];
                  dVar82 = pdVar98[0x13];
                  dVar36 = pdVar102[0x12];
                  dVar37 = pdVar102[0x12];
                  dVar38 = pdVar102[0x13];
                  dVar39 = pdVar102[0x13];
                  dVar83 = pdVar98[0x14];
                  dVar84 = pdVar98[0x15];
                  dVar85 = pdVar98[0x16];
                  dVar86 = pdVar98[0x17];
                  dVar40 = pdVar102[0x14];
                  dVar41 = pdVar102[0x14];
                  dVar42 = pdVar102[0x15];
                  dVar43 = pdVar102[0x15];
                  dVar44 = pdVar102[0x16];
                  dVar45 = pdVar102[0x16];
                  dVar46 = pdVar102[0x17];
                  dVar47 = pdVar102[0x17];
                  dVar87 = pdVar98[0x18];
                  dVar88 = pdVar98[0x19];
                  dVar89 = pdVar98[0x1a];
                  dVar90 = pdVar98[0x1b];
                  dVar48 = pdVar102[0x18];
                  dVar49 = pdVar102[0x18];
                  dVar50 = pdVar102[0x19];
                  dVar51 = pdVar102[0x19];
                  dVar52 = pdVar102[0x1a];
                  dVar53 = pdVar102[0x1a];
                  dVar54 = pdVar102[0x1b];
                  dVar55 = pdVar102[0x1b];
                  dVar91 = pdVar98[0x1c];
                  dVar92 = pdVar98[0x1d];
                  dVar93 = pdVar98[0x1e];
                  dVar94 = pdVar98[0x1f];
                  dVar56 = pdVar102[0x1c];
                  dVar57 = pdVar102[0x1c];
                  dVar119 = dVar91 * dVar56 +
                            dVar87 * dVar48 +
                            dVar83 * dVar40 +
                            dVar79 * dVar32 +
                            dVar75 * dVar24 +
                            dVar71 * dVar16 + dVar67 * dVar8 + dVar63 * *pdVar102 + dVar119;
                  dVar121 = dVar92 * dVar57 +
                            dVar88 * dVar49 +
                            dVar84 * dVar41 +
                            dVar80 * dVar33 +
                            dVar76 * dVar25 +
                            dVar72 * dVar17 + dVar68 * dVar9 + dVar64 * *pdVar102 + dVar121;
                  dVar58 = pdVar102[0x1d];
                  dVar59 = pdVar102[0x1d];
                  dVar128 = dVar56 * dVar93 +
                            dVar48 * dVar89 +
                            dVar40 * dVar85 +
                            dVar32 * dVar81 +
                            dVar24 * dVar77 +
                            dVar16 * dVar73 + dVar8 * dVar69 + *pdVar102 * dVar65 + dVar128;
                  dVar129 = dVar57 * dVar94 +
                            dVar49 * dVar90 +
                            dVar41 * dVar86 +
                            dVar33 * dVar82 +
                            dVar25 * dVar78 +
                            dVar17 * dVar74 + dVar9 * dVar70 + *pdVar102 * dVar66 + dVar129;
                  dVar115 = dVar91 * dVar58 +
                            dVar87 * dVar50 +
                            dVar83 * dVar42 +
                            dVar79 * dVar34 +
                            dVar75 * dVar26 +
                            dVar71 * dVar18 + dVar67 * dVar10 + dVar63 * dVar2 + dVar115;
                  dVar117 = dVar92 * dVar59 +
                            dVar88 * dVar51 +
                            dVar84 * dVar43 +
                            dVar80 * dVar35 +
                            dVar76 * dVar27 +
                            dVar72 * dVar19 + dVar68 * dVar11 + dVar64 * dVar3 + dVar117;
                  dVar8 = pdVar102[0x1e];
                  dVar9 = pdVar102[0x1e];
                  dVar124 = dVar58 * dVar93 +
                            dVar50 * dVar89 +
                            dVar42 * dVar85 +
                            dVar34 * dVar81 +
                            dVar26 * dVar77 +
                            dVar18 * dVar73 + dVar10 * dVar69 + dVar2 * dVar65 + dVar124;
                  dVar125 = dVar59 * dVar94 +
                            dVar51 * dVar90 +
                            dVar43 * dVar86 +
                            dVar35 * dVar82 +
                            dVar27 * dVar78 +
                            dVar19 * dVar74 + dVar11 * dVar70 + dVar3 * dVar66 + dVar125;
                  dVar126 = dVar91 * dVar8 +
                            dVar87 * dVar52 +
                            dVar83 * dVar44 +
                            dVar79 * dVar36 +
                            dVar75 * dVar28 +
                            dVar71 * dVar20 + dVar67 * dVar12 + dVar63 * dVar4 + dVar126;
                  dVar127 = dVar92 * dVar9 +
                            dVar88 * dVar53 +
                            dVar84 * dVar45 +
                            dVar80 * dVar37 +
                            dVar76 * dVar29 +
                            dVar72 * dVar21 + dVar68 * dVar13 + dVar64 * dVar5 + dVar127;
                  dVar122 = dVar8 * dVar93 +
                            dVar52 * dVar89 +
                            dVar44 * dVar85 +
                            dVar36 * dVar81 +
                            dVar28 * dVar77 +
                            dVar20 * dVar73 + dVar12 * dVar69 + dVar4 * dVar65 + dVar122;
                  dVar123 = dVar9 * dVar94 +
                            dVar53 * dVar90 +
                            dVar45 * dVar86 +
                            dVar37 * dVar82 +
                            dVar29 * dVar78 +
                            dVar21 * dVar74 + dVar13 * dVar70 + dVar5 * dVar66 + dVar123;
                  dVar3 = pdVar102[0x1f];
                  dVar2 = pdVar102[0x1f];
                  dVar118 = dVar91 * dVar3 +
                            dVar87 * dVar54 +
                            dVar83 * dVar46 +
                            dVar79 * dVar38 +
                            dVar75 * dVar30 +
                            dVar71 * dVar22 + dVar67 * dVar14 + dVar63 * dVar6 + dVar118;
                  dVar120 = dVar92 * dVar2 +
                            dVar88 * dVar55 +
                            dVar84 * dVar47 +
                            dVar80 * dVar39 +
                            dVar76 * dVar31 +
                            dVar72 * dVar23 + dVar68 * dVar15 + dVar64 * dVar7 + dVar120;
                  dVar114 = dVar93 * dVar3 +
                            dVar89 * dVar54 +
                            dVar85 * dVar46 +
                            dVar81 * dVar38 +
                            dVar77 * dVar30 +
                            dVar73 * dVar22 + dVar69 * dVar14 + dVar65 * dVar6 + dVar114;
                  dVar116 = dVar94 * dVar2 +
                            dVar90 * dVar55 +
                            dVar86 * dVar47 +
                            dVar82 * dVar39 +
                            dVar78 * dVar31 +
                            dVar74 * dVar23 + dVar70 * dVar15 + dVar66 * dVar7 + dVar116;
                  pdVar102 = pdVar102 + 0x20;
                  pdVar98 = pdVar98 + 0x20;
                  lVar112 = lVar112 + 8;
                } while (lVar112 < (longlong)uVar110);
              }
              if (uVar110 != param_5) {
                lVar112 = 0;
                uVar103 = uVar110;
                do {
                  dVar10 = *(double *)((longlong)pdVar98 + lVar112);
                  dVar11 = ((double *)((longlong)pdVar98 + lVar112))[1];
                  pdVar99 = (double *)((longlong)pdVar98 + lVar112 + 0x10);
                  dVar12 = *pdVar99;
                  dVar13 = pdVar99[1];
                  dVar3 = *(double *)((longlong)pdVar102 + lVar112);
                  dVar2 = *(double *)((longlong)pdVar102 + lVar112);
                  pdVar99 = (double *)((longlong)pdVar102 + lVar112 + 8);
                  dVar5 = *pdVar99;
                  dVar4 = *pdVar99;
                  pdVar99 = (double *)((longlong)pdVar102 + lVar112 + 0x10);
                  dVar7 = *pdVar99;
                  dVar6 = *pdVar99;
                  pdVar99 = (double *)((longlong)pdVar102 + lVar112 + 0x18);
                  dVar9 = *pdVar99;
                  dVar8 = *pdVar99;
                  dVar119 = dVar119 + dVar10 * dVar3;
                  dVar121 = dVar121 + dVar11 * dVar2;
                  dVar128 = dVar128 + dVar3 * dVar12;
                  dVar129 = dVar129 + dVar2 * dVar13;
                  dVar115 = dVar115 + dVar10 * dVar5;
                  dVar117 = dVar117 + dVar11 * dVar4;
                  dVar124 = dVar124 + dVar5 * dVar12;
                  dVar125 = dVar125 + dVar4 * dVar13;
                  dVar126 = dVar126 + dVar10 * dVar7;
                  dVar127 = dVar127 + dVar11 * dVar6;
                  dVar122 = dVar122 + dVar7 * dVar12;
                  dVar123 = dVar123 + dVar6 * dVar13;
                  dVar118 = dVar118 + dVar10 * dVar9;
                  dVar120 = dVar120 + dVar11 * dVar8;
                  dVar114 = dVar114 + dVar12 * dVar9;
                  dVar116 = dVar116 + dVar13 * dVar8;
                  uVar103 = uVar103 + 1;
                  lVar112 = lVar112 + 0x20;
                } while ((longlong)uVar103 < (longlong)param_5);
              }
              pauVar1 = (undefined1 (*) [16])(lVar108 + lVar111 * uVar107 * 8 + uVar109 * 8);
              pdVar102 = (double *)(lVar108 + lVar111 * (uVar107 | 1) * 8 + uVar109 * 8);
              pdVar98 = (double *)(lVar108 + lVar111 * (uVar107 | 2) * 8 + uVar109 * 8);
              pdVar99 = (double *)(uVar109 * 8 + lVar108 + lVar111 * (uVar107 | 3) * 8);
              dVar121 = *(double *)(*pauVar1 + 8) - dVar121;
              dVar3 = *(double *)pauVar1[1];
              dVar129 = *(double *)(pauVar1[1] + 8) - dVar129;
              dVar2 = *pdVar102;
              dVar4 = pdVar102[1];
              dVar5 = pdVar102[2];
              dVar6 = pdVar102[3];
              auVar62._8_4_ = SUB84(dVar121,0);
              auVar62._0_8_ = *(double *)*pauVar1 - dVar119;
              auVar62._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
              *pauVar1 = auVar62;
              auVar61._8_4_ = SUB84(dVar129,0);
              auVar61._0_8_ = dVar3 - dVar128;
              auVar61._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
              pauVar1[1] = auVar61;
              *pdVar102 = dVar2 - dVar115;
              pdVar102[1] = dVar4 - dVar117;
              auVar60._8_4_ = SUB84(dVar6 - dVar125,0);
              auVar60._0_8_ = dVar5 - dVar124;
              auVar60._12_4_ = (int)((ulonglong)(dVar6 - dVar125) >> 0x20);
              *(undefined1 (*) [16])(pdVar102 + 2) = auVar60;
              dVar115 = *pdVar99;
              dVar117 = pdVar99[1];
              dVar119 = pdVar99[2];
              dVar121 = pdVar99[3];
              *pdVar98 = *pdVar98 - dVar126;
              pdVar98[1] = pdVar98[1] - dVar127;
              pdVar98[2] = pdVar98[2] - dVar122;
              pdVar98[3] = pdVar98[3] - dVar123;
              *pdVar99 = dVar115 - dVar118;
              pdVar99[1] = dVar117 - dVar120;
              pdVar99[2] = dVar119 - dVar114;
              pdVar99[3] = dVar121 - dVar116;
              uVar109 = uVar109 + 4;
            } while ((longlong)uVar109 < (longlong)uVar97);
          }
          uVar107 = uVar107 + 4;
        } while ((longlong)uVar107 < (longlong)local_170);
      }
      uVar107 = local_170;
      if ((longlong)local_170 < (longlong)param_6) {
        do {
          if ((longlong)uVar95 < (longlong)uVar105) {
            pdVar113 = (double *)(param_3 + param_9 * 8 + uVar107 * param_8 * 8);
            uVar109 = uVar95;
            do {
              pdVar98 = (double *)(uVar109 * param_7 * 8 + param_2);
              pdVar102 = pdVar113;
              if ((longlong)uVar110 < 1) {
                dVar115 = 0.0;
                dVar117 = 0.0;
                dVar119 = 0.0;
                dVar121 = 0.0;
              }
              else {
                dVar119 = 0.0;
                dVar121 = 0.0;
                lVar108 = 0;
                dVar115 = 0.0;
                dVar117 = 0.0;
                do {
                  dVar114 = pdVar102[1];
                  dVar129 = pdVar102[1];
                  dVar118 = pdVar102[2];
                  dVar116 = pdVar102[2];
                  dVar120 = pdVar102[3];
                  dVar122 = pdVar102[3];
                  dVar124 = pdVar102[4];
                  dVar123 = pdVar102[4];
                  dVar125 = pdVar102[5];
                  dVar126 = pdVar102[5];
                  dVar127 = pdVar102[6];
                  dVar128 = pdVar102[6];
                  dVar2 = pdVar102[7];
                  dVar3 = pdVar102[7];
                  dVar119 = pdVar98[0x1c] * dVar2 +
                            pdVar98[0x18] * dVar127 +
                            pdVar98[0x14] * dVar125 +
                            pdVar98[0x10] * dVar124 +
                            pdVar98[0xc] * dVar120 +
                            pdVar98[8] * dVar118 +
                            pdVar98[4] * dVar114 + *pdVar98 * *pdVar102 + dVar119;
                  dVar121 = pdVar98[0x1d] * dVar3 +
                            pdVar98[0x19] * dVar128 +
                            pdVar98[0x15] * dVar126 +
                            pdVar98[0x11] * dVar123 +
                            pdVar98[0xd] * dVar122 +
                            pdVar98[9] * dVar116 +
                            pdVar98[5] * dVar129 + pdVar98[1] * *pdVar102 + dVar121;
                  dVar115 = dVar2 * pdVar98[0x1e] +
                            dVar127 * pdVar98[0x1a] +
                            dVar125 * pdVar98[0x16] +
                            dVar124 * pdVar98[0x12] +
                            dVar120 * pdVar98[0xe] +
                            dVar118 * pdVar98[10] +
                            dVar114 * pdVar98[6] + *pdVar102 * pdVar98[2] + dVar115;
                  dVar117 = dVar3 * pdVar98[0x1f] +
                            dVar128 * pdVar98[0x1b] +
                            dVar126 * pdVar98[0x17] +
                            dVar123 * pdVar98[0x13] +
                            dVar122 * pdVar98[0xf] +
                            dVar116 * pdVar98[0xb] +
                            dVar129 * pdVar98[7] + *pdVar102 * pdVar98[3] + dVar117;
                  pdVar102 = pdVar102 + 8;
                  pdVar98 = pdVar98 + 0x20;
                  lVar108 = lVar108 + 8;
                } while (lVar108 < (longlong)uVar110);
              }
              if (uVar110 != param_5) {
                lVar108 = 0;
                uVar103 = uVar110;
                do {
                  dVar114 = *(double *)((longlong)pdVar102 + lVar108);
                  dVar129 = *(double *)((longlong)pdVar102 + lVar108);
                  pdVar99 = (double *)((longlong)pdVar98 + lVar108 * 4);
                  dVar119 = dVar119 + *pdVar99 * dVar114;
                  dVar121 = dVar121 + pdVar99[1] * dVar129;
                  pdVar99 = (double *)((longlong)pdVar98 + lVar108 * 4 + 0x10);
                  dVar115 = dVar115 + dVar114 * *pdVar99;
                  dVar117 = dVar117 + dVar129 * pdVar99[1];
                  uVar103 = uVar103 + 1;
                  lVar108 = lVar108 + 8;
                } while ((longlong)uVar103 < (longlong)param_5);
              }
              pdVar102 = (double *)(param_1[1] * uVar107 * 8 + *param_1 + uVar109 * 8);
              *pdVar102 = *pdVar102 - dVar119;
              pdVar102[1] = pdVar102[1] - dVar121;
              pdVar102[2] = pdVar102[2] - dVar115;
              pdVar102[3] = pdVar102[3] - dVar117;
              uVar109 = uVar109 + 4;
            } while ((longlong)uVar109 < (longlong)uVar97);
          }
          uVar107 = uVar107 + 1;
        } while (uVar107 != param_6);
      }
      uVar95 = uVar96;
    } while ((longlong)uVar96 < (longlong)uVar105);
  }
  FUN_1483cc9e8(param_1,param_2,param_3,uVar105,lVar101,param_7,param_8,param_9,uVar110,param_6,
                param_5,local_170);
  if (lVar100 < (longlong)param_4) {
    if (3 < (longlong)param_6) {
      uVar104 = 0;
      do {
        lVar101 = lVar100;
        lVar108 = param_7 * lVar100 * 8 + param_2;
        do {
          if ((longlong)param_5 < 1) {
            dVar121 = 0.0;
            dVar119 = 0.0;
            dVar117 = 0.0;
            dVar115 = 0.0;
          }
          else {
            dVar115 = 0.0;
            uVar95 = 0;
            dVar117 = 0.0;
            dVar119 = 0.0;
            dVar121 = 0.0;
            pdVar113 = (double *)(param_9 * 0x20 + param_3 + uVar104 * param_8 * 8);
            do {
              dVar129 = *(double *)(lVar108 + uVar95 * 8);
              dVar121 = dVar121 + *pdVar113 * dVar129;
              dVar119 = dVar119 + pdVar113[1] * dVar129;
              dVar117 = dVar117 + pdVar113[2] * dVar129;
              dVar115 = dVar115 + dVar129 * pdVar113[3];
              pdVar113 = pdVar113 + 4;
              uVar95 = uVar95 + 1;
            } while (param_5 != uVar95);
          }
          lVar111 = param_1[1] * uVar104 * 8 + *param_1;
          *(double *)(lVar111 + lVar101 * 8) = *(double *)(lVar111 + lVar101 * 8) - dVar121;
          lVar111 = param_1[1] * (uVar104 | 1) * 8 + *param_1;
          *(double *)(lVar111 + lVar101 * 8) = *(double *)(lVar111 + lVar101 * 8) - dVar119;
          lVar111 = param_1[1] * (uVar104 | 2) * 8 + *param_1;
          *(double *)(lVar111 + lVar101 * 8) = *(double *)(lVar111 + lVar101 * 8) - dVar117;
          lVar111 = param_1[1] * (uVar104 | 3) * 8 + *param_1;
          *(double *)(lVar111 + lVar101 * 8) = *(double *)(lVar111 + lVar101 * 8) - dVar115;
          lVar101 = lVar101 + 1;
          lVar108 = lVar108 + param_7 * 8;
        } while (lVar101 < (longlong)param_4);
        uVar104 = uVar104 + 4;
      } while ((longlong)uVar104 < (longlong)local_170);
    }
    if ((longlong)local_170 < (longlong)param_6) {
      param_3 = param_3 + ((longlong)uVar106 >> 2) * param_8 * 0x20 + param_9 * 8;
      param_2 = param_7 * lVar100 * 8 + param_2;
      lVar101 = param_2;
      lVar108 = lVar100;
      do {
        do {
          dVar115 = 0.0;
          if (0 < (longlong)param_5) {
            uVar106 = 0;
            do {
              dVar115 = dVar115 + *(double *)(lVar101 + uVar106 * 8) *
                                  *(double *)(param_3 + uVar106 * 8);
              uVar106 = uVar106 + 1;
            } while (param_5 != uVar106);
          }
          lVar111 = param_1[1] * local_170 * 8 + *param_1;
          *(double *)(lVar111 + lVar108 * 8) = *(double *)(lVar111 + lVar108 * 8) - dVar115;
          lVar108 = lVar108 + 1;
          lVar101 = lVar101 + param_7 * 8;
        } while (lVar108 < (longlong)param_4);
        local_170 = local_170 + 1;
        param_3 = param_3 + param_8 * 8;
        lVar101 = param_2;
        lVar108 = lVar100;
      } while (local_170 != param_6);
    }
  }
  return;
}



// FUNCTION 1483cc9e8 FUN_1483cc9e8 body=1716 status=ok
// SIG undefined FUN_1483cc9e8(void)

void FUN_1483cc9e8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  double *pdVar31;
  double *pdVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  
  if (param_4 < param_5) {
    do {
      if (0 < param_12) {
        pdVar1 = (double *)(param_2 + param_4 * param_6 * 8);
        uVar30 = 0;
        do {
          lVar26 = *param_1;
          lVar29 = param_1[1];
          pdVar32 = (double *)(param_8 * 0x20 + param_3 + uVar30 * param_7 * 8);
          dVar37 = 0.0;
          dVar38 = 0.0;
          pdVar31 = pdVar1;
          if (param_9 < 1) {
            dVar39 = 0.0;
            dVar40 = 0.0;
            dVar35 = 0.0;
            dVar36 = 0.0;
            dVar33 = 0.0;
            dVar34 = 0.0;
          }
          else {
            lVar27 = 0;
            dVar39 = 0.0;
            dVar40 = 0.0;
            dVar35 = 0.0;
            dVar36 = 0.0;
            dVar33 = 0.0;
            dVar34 = 0.0;
            dVar8 = 0.0;
            dVar9 = 0.0;
            dVar6 = 0.0;
            dVar7 = 0.0;
            dVar43 = 0.0;
            dVar44 = 0.0;
            dVar41 = 0.0;
            dVar42 = 0.0;
            do {
              dVar10 = *pdVar31;
              dVar11 = pdVar31[1];
              dVar12 = pdVar31[2];
              dVar13 = pdVar31[3];
              dVar18 = pdVar31[4];
              dVar19 = pdVar31[5];
              dVar20 = pdVar31[6];
              dVar21 = pdVar31[7];
              dVar14 = pdVar31[8];
              dVar15 = pdVar31[9];
              dVar16 = pdVar31[10];
              dVar17 = pdVar31[0xb];
              dVar22 = pdVar31[0xc];
              dVar23 = pdVar31[0xd];
              dVar24 = pdVar31[0xe];
              dVar25 = pdVar31[0xf];
              dVar37 = pdVar32[0x18] * dVar22 +
                       pdVar32[0x10] * dVar14 + pdVar32[8] * dVar18 + *pdVar32 * dVar10 + dVar37;
              dVar38 = pdVar32[0x18] * dVar23 +
                       pdVar32[0x10] * dVar15 + pdVar32[8] * dVar19 + *pdVar32 * dVar11 + dVar38;
              dVar39 = pdVar32[0x19] * dVar22 +
                       pdVar32[0x11] * dVar14 + pdVar32[9] * dVar18 + pdVar32[1] * dVar10 + dVar39;
              dVar40 = pdVar32[0x19] * dVar23 +
                       pdVar32[0x11] * dVar15 + pdVar32[9] * dVar19 + pdVar32[1] * dVar11 + dVar40;
              dVar35 = pdVar32[0x1a] * dVar22 +
                       pdVar32[0x12] * dVar14 + pdVar32[10] * dVar18 + pdVar32[2] * dVar10 + dVar35;
              dVar36 = pdVar32[0x1a] * dVar23 +
                       pdVar32[0x12] * dVar15 + pdVar32[10] * dVar19 + pdVar32[2] * dVar11 + dVar36;
              dVar33 = pdVar32[0x1b] * dVar22 +
                       pdVar32[0x13] * dVar14 + pdVar32[0xb] * dVar18 + pdVar32[3] * dVar10 + dVar33
              ;
              dVar34 = pdVar32[0x1b] * dVar23 +
                       pdVar32[0x13] * dVar15 + pdVar32[0xb] * dVar19 + pdVar32[3] * dVar11 + dVar34
              ;
              dVar8 = pdVar32[0x1c] * dVar24 +
                      pdVar32[0x14] * dVar16 + pdVar32[0xc] * dVar20 + pdVar32[4] * dVar12 + dVar8;
              dVar9 = pdVar32[0x1c] * dVar25 +
                      pdVar32[0x14] * dVar17 + pdVar32[0xc] * dVar21 + pdVar32[4] * dVar13 + dVar9;
              dVar6 = pdVar32[0x1d] * dVar24 +
                      pdVar32[0x15] * dVar16 + pdVar32[0xd] * dVar20 + pdVar32[5] * dVar12 + dVar6;
              dVar7 = pdVar32[0x1d] * dVar25 +
                      pdVar32[0x15] * dVar17 + pdVar32[0xd] * dVar21 + pdVar32[5] * dVar13 + dVar7;
              dVar43 = pdVar32[0x1e] * dVar24 +
                       pdVar32[0x16] * dVar16 + pdVar32[0xe] * dVar20 + pdVar32[6] * dVar12 + dVar43
              ;
              dVar44 = pdVar32[0x1e] * dVar25 +
                       pdVar32[0x16] * dVar17 + pdVar32[0xe] * dVar21 + pdVar32[6] * dVar13 + dVar44
              ;
              dVar41 = pdVar32[0x1f] * dVar24 +
                       pdVar32[0x17] * dVar16 + pdVar32[0xf] * dVar20 + pdVar32[7] * dVar12 + dVar41
              ;
              dVar42 = pdVar32[0x1f] * dVar25 +
                       pdVar32[0x17] * dVar17 + pdVar32[0xf] * dVar21 + pdVar32[7] * dVar13 + dVar42
              ;
              pdVar32 = pdVar32 + 0x20;
              pdVar31 = pdVar31 + 0x10;
              lVar27 = lVar27 + 8;
            } while (lVar27 < param_9);
            dVar37 = dVar37 + dVar8;
            dVar38 = dVar38 + dVar9;
            dVar39 = dVar39 + dVar6;
            dVar40 = dVar40 + dVar7;
            dVar35 = dVar35 + dVar43;
            dVar36 = dVar36 + dVar44;
            dVar33 = dVar33 + dVar41;
            dVar34 = dVar34 + dVar42;
          }
          if (param_9 < param_11) {
            lVar28 = 0;
            lVar27 = param_11 - param_9;
            do {
              dVar6 = *(double *)((longlong)pdVar31 + lVar28);
              dVar7 = ((double *)((longlong)pdVar31 + lVar28))[1];
              pdVar2 = (double *)((longlong)pdVar32 + lVar28 * 2);
              pdVar3 = (double *)((longlong)pdVar32 + lVar28 * 2 + 8);
              pdVar4 = (double *)((longlong)pdVar32 + lVar28 * 2 + 0x10);
              pdVar5 = (double *)((longlong)pdVar32 + lVar28 * 2 + 0x18);
              dVar37 = dVar37 + *pdVar2 * dVar6;
              dVar38 = dVar38 + *pdVar2 * dVar7;
              dVar39 = dVar39 + *pdVar3 * dVar6;
              dVar40 = dVar40 + *pdVar3 * dVar7;
              dVar35 = dVar35 + *pdVar4 * dVar6;
              dVar36 = dVar36 + *pdVar4 * dVar7;
              dVar33 = dVar33 + *pdVar5 * dVar6;
              dVar34 = dVar34 + *pdVar5 * dVar7;
              lVar28 = lVar28 + 0x10;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          pdVar32 = (double *)(lVar26 + lVar29 * uVar30 * 8 + param_4 * 8);
          pdVar31 = (double *)(lVar26 + (uVar30 | 1) * lVar29 * 8 + param_4 * 8);
          pdVar2 = (double *)(lVar26 + (uVar30 | 2) * lVar29 * 8 + param_4 * 8);
          pdVar3 = (double *)(lVar26 + (uVar30 | 3) * lVar29 * 8 + param_4 * 8);
          dVar6 = *pdVar31;
          dVar7 = pdVar31[1];
          *pdVar32 = *pdVar32 - dVar37;
          pdVar32[1] = pdVar32[1] - dVar38;
          *pdVar31 = dVar6 - dVar39;
          pdVar31[1] = dVar7 - dVar40;
          dVar37 = *pdVar3;
          dVar38 = pdVar3[1];
          *pdVar2 = *pdVar2 - dVar35;
          pdVar2[1] = pdVar2[1] - dVar36;
          *pdVar3 = dVar37 - dVar33;
          pdVar3[1] = dVar38 - dVar34;
          uVar30 = uVar30 + 4;
        } while ((longlong)uVar30 < param_12);
      }
      if (param_12 < param_10) {
        pdVar1 = (double *)(param_2 + param_4 * param_6 * 8);
        lVar26 = param_12;
        do {
          pdVar32 = (double *)(param_3 + param_8 * 8 + lVar26 * param_7 * 8);
          dVar37 = 0.0;
          dVar38 = 0.0;
          pdVar31 = pdVar1;
          if (0 < param_9) {
            lVar29 = 0;
            do {
              dVar37 = pdVar32[7] * pdVar31[0xe] +
                       pdVar32[6] * pdVar31[0xc] +
                       pdVar32[5] * pdVar31[10] +
                       pdVar32[4] * pdVar31[8] +
                       pdVar32[3] * pdVar31[6] +
                       pdVar32[2] * pdVar31[4] +
                       pdVar32[1] * pdVar31[2] + *pdVar31 * *pdVar32 + dVar37;
              dVar38 = pdVar32[7] * pdVar31[0xf] +
                       pdVar32[6] * pdVar31[0xd] +
                       pdVar32[5] * pdVar31[0xb] +
                       pdVar32[4] * pdVar31[9] +
                       pdVar32[3] * pdVar31[7] +
                       pdVar32[2] * pdVar31[5] +
                       pdVar32[1] * pdVar31[3] + pdVar31[1] * *pdVar32 + dVar38;
              pdVar32 = pdVar32 + 8;
              pdVar31 = pdVar31 + 0x10;
              lVar29 = lVar29 + 8;
            } while (lVar29 < param_9);
          }
          lVar29 = param_1[1] * lVar26 * 8 + *param_1;
          if (param_9 < param_11) {
            lVar27 = 0;
            do {
              dVar37 = dVar37 + pdVar32[lVar27] * *pdVar31;
              dVar38 = dVar38 + pdVar32[lVar27] * pdVar31[1];
              pdVar31 = pdVar31 + 2;
              lVar27 = lVar27 + 1;
            } while (param_11 - param_9 != lVar27);
          }
          pdVar32 = (double *)(lVar29 + param_4 * 8);
          dVar33 = pdVar32[1];
          pdVar31 = (double *)(lVar29 + param_4 * 8);
          *pdVar31 = *pdVar32 - dVar37;
          pdVar31[1] = dVar33 - dVar38;
          lVar26 = lVar26 + 1;
        } while (lVar26 != param_10);
      }
      param_4 = param_4 + 2;
    } while (param_4 < param_5);
  }
  return;
}



// FUNCTION 1483cd09c FUN_1483cd09c body=314 status=ok
// SIG undefined FUN_1483cd09c(void)

void FUN_1483cd09c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  puVar12 = (ulonglong *)param_1[3];
  if ((*puVar12 & 7) == 0) {
    uVar3 = puVar12[2];
    if (0 < (longlong)uVar3) {
      uVar4 = puVar12[1];
      uVar5 = puVar12[3];
      uVar7 = (ulonglong)((uint)(*puVar12 >> 3) & 1);
      if ((longlong)uVar4 <= (longlong)uVar7) {
        uVar7 = uVar4;
      }
      lVar6 = 0;
      uVar13 = 0;
      do {
        if (0 < (longlong)uVar7) {
          *(undefined8 *)(*(longlong *)*param_1 + ((longlong *)*param_1)[2] * uVar13 * 8) =
               *(undefined8 *)param_1[1];
        }
        uVar9 = uVar4 - uVar7 & 0xfffffffffffffffe;
        lVar8 = uVar9 + uVar7;
        uVar10 = uVar7;
        if (0 < (longlong)uVar9) {
          do {
            uVar2 = *(undefined8 *)param_1[1];
            puVar1 = (undefined8 *)
                     (((longlong *)*param_1)[2] * lVar6 + *(longlong *)*param_1 + uVar10 * 8);
            *puVar1 = *(undefined8 *)param_1[1];
            puVar1[1] = uVar2;
            uVar10 = uVar10 + 2;
          } while ((longlong)uVar10 < lVar8);
        }
        for (; lVar8 < (longlong)uVar4; lVar8 = lVar8 + 1) {
          *(undefined8 *)(((longlong *)*param_1)[2] * lVar6 + *(longlong *)*param_1 + lVar8 * 8) =
               *(undefined8 *)param_1[1];
        }
        uVar7 = (longlong)(uVar7 + ((uint)uVar5 & 1)) % 2;
        if ((longlong)uVar4 < (longlong)uVar7) {
          uVar7 = uVar4;
        }
        uVar13 = uVar13 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar13 != uVar3);
    }
  }
  else if (0 < (longlong)puVar12[2]) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      if (0 < (longlong)puVar12[1]) {
        lVar11 = 0;
        do {
          *(undefined8 *)(((longlong *)*param_1)[2] * lVar6 + *(longlong *)*param_1 + lVar11 * 8) =
               *(undefined8 *)param_1[1];
          lVar11 = lVar11 + 1;
          puVar12 = (ulonglong *)param_1[3];
        } while (lVar11 < (longlong)puVar12[1]);
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar8 < (longlong)puVar12[2]);
  }
  return;
}



// FUNCTION 1483cd1d6 FUN_1483cd1d6 body=204 status=ok
// SIG undefined FUN_1483cd1d6(void)

void FUN_1483cd1d6(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50 [2];
  longlong local_40;
  undefined1 local_38 [8];
  double local_30;
  longlong local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = *(double *)(param_2 + 0x20);
  local_68 = local_38;
  local_20 = *(longlong *)(param_2 + 0x28);
  local_10 = *(undefined8 *)(param_2 + 0x30);
  local_50[0] = *param_1;
  local_70 = local_50;
  local_40 = param_1[1];
  if (1 < local_40) {
    lVar6 = 0;
    do {
      pdVar1 = (double *)(local_20 + lVar6 * 8);
      dVar5 = pdVar1[1];
      pdVar2 = (double *)(local_50[0] + lVar6 * 8);
      dVar4 = pdVar2[1];
      pdVar3 = (double *)(local_50[0] + lVar6 * 8);
      *pdVar3 = local_30 * *pdVar1 + *pdVar2;
      pdVar3[1] = local_30 * dVar5 + dVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 < (longlong)(local_40 - (local_40 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_60 = param_3;
  local_58 = param_1;
  FUN_1483cd2a4(&local_70);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cd2a4 FUN_1483cd2a4 body=49 status=ok
// SIG undefined FUN_1483cd2a4(void)

void FUN_1483cd2a4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)(param_1[1] + 0x18) + param_2 * 8) * *(double *)(param_1[1] + 8)
           + *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483cd2d5 FUN_1483cd2d5 body=263 status=ok
// SIG undefined FUN_1483cd2d5(void)

void FUN_1483cd2d5(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined1 local_70 [16];
  double local_60;
  longlong local_50;
  undefined8 local_40;
  double local_30;
  longlong local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = *(double *)(param_2 + 0x28);
  local_a0 = local_70;
  local_50 = *(longlong *)(param_2 + 0x30);
  local_40 = *(undefined8 *)(param_2 + 0x38);
  local_30 = *(double *)(param_2 + 0x78);
  local_20 = *(longlong *)(param_2 + 0x80);
  local_10 = *(undefined8 *)(param_2 + 0x88);
  local_88[0] = *param_1;
  local_a8 = local_88;
  local_78 = param_1[1];
  if (1 < local_78) {
    lVar8 = 0;
    do {
      pdVar1 = (double *)(local_20 + lVar8 * 8);
      dVar6 = pdVar1[1];
      pdVar2 = (double *)(local_50 + lVar8 * 8);
      dVar7 = pdVar2[1];
      pdVar3 = (double *)(local_88[0] + lVar8 * 8);
      dVar5 = pdVar3[1];
      pdVar4 = (double *)(local_88[0] + lVar8 * 8);
      *pdVar4 = local_60 * *pdVar2 + local_30 * *pdVar1 + *pdVar3;
      pdVar4[1] = local_60 * dVar7 + local_30 * dVar6 + dVar5;
      lVar8 = lVar8 + 2;
    } while (lVar8 < (longlong)(local_78 - (local_78 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_98 = param_3;
  local_90 = param_1;
  FUN_1483cd3de(&local_a8);
  if ((local_8 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cd3de FUN_1483cd3de body=70 status=ok
// SIG undefined FUN_1483cd3de(void)

void FUN_1483cd3de(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)(lVar1 + 0x20) + param_2 * 8) * *(double *)(lVar1 + 0x10) +
           *(double *)(*(longlong *)(lVar1 + 0x50) + param_2 * 8) * *(double *)(lVar1 + 0x40) +
           *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483cd424 FUN_1483cd424 body=219 status=ok
// SIG undefined FUN_1483cd424(void)

void FUN_1483cd424(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar10 = *(ulonglong *)(param_1[3] + 8);
  uVar16 = uVar10 - ((longlong)uVar10 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar10) {
    lVar15 = 0;
    do {
      lVar11 = param_1[1];
      dVar6 = *(double *)(lVar11 + 0x78);
      pdVar1 = (double *)(*(longlong *)(lVar11 + 0x88) + lVar15 * 8);
      dVar12 = pdVar1[1];
      dVar7 = *(double *)(lVar11 + 0x48);
      pdVar2 = (double *)(*(longlong *)(lVar11 + 0x58) + lVar15 * 8);
      dVar13 = pdVar2[1];
      dVar8 = *(double *)(lVar11 + 0x18);
      pdVar3 = (double *)(*(longlong *)(lVar11 + 0x28) + lVar15 * 8);
      dVar14 = pdVar3[1];
      pdVar4 = (double *)(*(longlong *)*param_1 + lVar15 * 8);
      dVar9 = pdVar4[1];
      pdVar5 = (double *)(*(longlong *)*param_1 + lVar15 * 8);
      *pdVar5 = *(double *)(lVar11 + 0x18) * *pdVar3 + *(double *)(lVar11 + 0x48) * *pdVar2 +
                *(double *)(lVar11 + 0x78) * *pdVar1 + *pdVar4;
      pdVar5[1] = dVar8 * dVar14 + dVar7 * dVar13 + dVar6 * dVar12 + dVar9;
      lVar15 = lVar15 + 2;
    } while (lVar15 < (longlong)uVar16);
  }
  if ((longlong)uVar16 < (longlong)uVar10) {
    do {
      lVar15 = param_1[1];
      *(double *)(*(longlong *)*param_1 + uVar16 * 8) =
           *(double *)(*(longlong *)(lVar15 + 0x28) + uVar16 * 8) * *(double *)(lVar15 + 0x18) +
           *(double *)(*(longlong *)(lVar15 + 0x58) + uVar16 * 8) * *(double *)(lVar15 + 0x48) +
           *(double *)(*(longlong *)(lVar15 + 0x88) + uVar16 * 8) * *(double *)(lVar15 + 0x78) +
           *(double *)(*(longlong *)*param_1 + uVar16 * 8);
      uVar16 = uVar16 + 1;
    } while (uVar10 != uVar16);
  }
  return;
}



// FUNCTION 1483cd500 FUN_1483cd500 body=143 status=ok
// SIG undefined FUN_1483cd500(void)

void FUN_1483cd500(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar5 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar5 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar5)) {
    uVar5 = uVar4;
  }
  lVar7 = uVar4 - uVar5;
  lVar6 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
  FUN_1483cd590(param_1,0,uVar5);
  if (1 < lVar7) {
    do {
      uVar2 = *(undefined8 *)param_1[1];
      puVar1 = (undefined8 *)(*(longlong *)*param_1 + uVar5 * 8);
      *puVar1 = *(undefined8 *)param_1[1];
      puVar1[1] = uVar2;
      uVar5 = uVar5 + 2;
    } while ((longlong)uVar5 < lVar6);
  }
  FUN_1483cd590(param_1,lVar6,uVar4);
  return;
}



// FUNCTION 1483cd590 FUN_1483cd590 body=34 status=ok
// SIG undefined FUN_1483cd590(void)

void FUN_1483cd590(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) = *(undefined8 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483cd5b2 FUN_1483cd5b2 body=105 status=ok
// SIG undefined FUN_1483cd5b2(void)

void FUN_1483cd5b2(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  
  pdVar3 = (double *)*param_3;
  pdVar1 = (double *)*param_2;
  if (pdVar3 != pdVar1) {
    dVar2 = pdVar1[1];
    *pdVar3 = *pdVar1;
    pdVar3[1] = dVar2;
    pdVar3[2] = pdVar1[2];
    pdVar3 = (double *)*param_3;
  }
  pdVar3[1] = pdVar3[1] - *(double *)(*param_1 + 8) * *pdVar3;
  pdVar3 = (double *)*param_3;
  pdVar3[2] = pdVar3[2] -
              (*(double *)(*param_1 + 0x10) * *pdVar3 +
              *(double *)(*param_1 + 0x10 + param_1[2] * 8) * pdVar3[1]);
  return;
}



// FUNCTION 1483cd61c FUN_1483cd61c body=168 status=ok
// SIG undefined FUN_1483cd61c(void)

void FUN_1483cd61c(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[1] != param_2[1])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[1];
    local_30[0] = *param_2;
    local_20 = param_2[1];
    FUN_1483cd6c6();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1483cd77e(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cd6c6 FUN_1483cd6c6 body=145 status=ok
// SIG undefined FUN_1483cd6c6(void)

void FUN_1483cd6c6(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483cd758(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483cd758(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483cd758 FUN_1483cd758 body=38 status=ok
// SIG undefined FUN_1483cd758(void)

void FUN_1483cd758(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483cd77e FUN_1483cd77e body=286 status=ok
// SIG undefined FUN_1483cd77e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483cd77e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3d != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 8;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1483cd815;
  FUN_1483c2df0(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 3)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1483cd834;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1483cd85b;
  FUN_144d8e3a0();
}



// FUNCTION 1483cd8a2 FUN_1483cd8a2 body=710 status=ok
// SIG undefined FUN_1483cd8a2(void)

void FUN_1483cd8a2(int param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong param_13,longlong *param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(*param_8 + param_13 * 4);
  *(int *)(*param_8 + param_13 * 4) = param_1;
  iVar7 = *(int *)(*param_2 + param_13 * 4);
  if ((longlong)iVar7 == -1) {
    lVar5 = *param_12;
    *param_12 = lVar5 + 1;
    *(int *)(*param_4 + lVar5 * 4) = (int)param_13;
    lVar5 = param_14[2];
    if (*(longlong *)(lVar5 + 0x60) <= *param_12) {
      FUN_1483c86e8(param_4,lVar5 + 0x60,*param_12,0,lVar5 + 0xb0);
    }
    if (*param_14 + -1 != (longlong)iVar9) {
      *(undefined8 *)param_14[1] = 0xffffffffffffffff;
    }
  }
  else {
    lVar5 = (longlong)
            *(int *)(*param_11 + 4 + (longlong)*(int *)(param_11[2] + (longlong)iVar7 * 4) * 4);
    iVar9 = *(int *)(*param_6 + -4 + lVar5 * 4);
    if (iVar9 == -1) {
      lVar8 = lVar5 + -1;
      *(undefined4 *)(*param_9 + -4 + lVar5 * 4) = 0xffffffff;
      *(int *)(*param_6 + -4 + lVar5 * 4) = iVar7;
      piVar6 = (int *)(param_11[10] + lVar8 * 4);
      piVar3 = (int *)(lVar8 * 4 + *param_7);
      while( true ) {
        iVar7 = (int)lVar8;
        iVar9 = *piVar6;
        lVar5 = (longlong)*piVar3;
        if (iVar9 < *piVar3) {
          lVar4 = (longlong)iVar9;
          do {
            iVar7 = *(int *)(param_11[6] + lVar4 * 4);
            iVar9 = iVar9 + 1;
            lVar4 = (longlong)iVar7;
            iVar1 = *(int *)(*param_8 + lVar4 * 4);
            if (iVar1 != param_1) {
              *(int *)(*param_8 + lVar4 * 4) = param_1;
              iVar2 = *(int *)(*param_2 + lVar4 * 4);
              if ((longlong)iVar2 == -1) {
                lVar4 = *param_12;
                *param_12 = lVar4 + 1;
                *(int *)(*param_4 + lVar4 * 4) = iVar7;
                lVar4 = param_14[2];
                if (*(longlong *)(lVar4 + 0x60) <= *param_12) {
                  FUN_1483c86e8(param_4,lVar4 + 0x60,*param_12,0,lVar4 + 0xb0);
                }
                if (*param_14 + -1 != (longlong)iVar1) {
                  *(undefined8 *)param_14[1] = 0xffffffffffffffff;
                }
              }
              else {
                lVar4 = (longlong)
                        *(int *)(*param_11 + 4 +
                                (longlong)*(int *)(param_11[2] + (longlong)iVar2 * 4) * 4);
                iVar7 = *(int *)(*param_6 + -4 + lVar4 * 4);
                if (iVar7 == -1) {
                  iVar7 = (int)lVar8;
                  lVar8 = lVar4 + -1;
                  *(int *)(*param_10 + (longlong)iVar7 * 4) = iVar9;
                  *(int *)(*param_9 + -4 + lVar4 * 4) = iVar7;
                  *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
                  iVar9 = *(int *)(param_11[10] + -4 + lVar4 * 4);
                  lVar5 = (longlong)*(int *)(*param_7 + -4 + lVar4 * 4);
                }
                else if (iVar2 < iVar7) {
                  *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
                }
              }
            }
            iVar7 = (int)lVar8;
            lVar4 = (longlong)iVar9;
          } while (lVar4 < lVar5);
        }
        *(int *)(*param_5 + *param_3 * 4) = iVar7;
        *param_3 = *param_3 + 1;
        lVar8 = (longlong)*(int *)(*param_9 + (longlong)iVar7 * 4);
        if (lVar8 == -1) break;
        piVar6 = (int *)(*param_10 + lVar8 * 4);
        piVar3 = (int *)(lVar8 * 4 + *param_7);
      }
    }
    else if (iVar7 < iVar9) {
      *(int *)(*param_6 + -4 + lVar5 * 4) = iVar7;
    }
  }
  return;
}



// FUNCTION 1483cdb68 FUN_1483cdb68 body=273 status=ok
// SIG undefined FUN_1483cdb68(void)

void FUN_1483cdb68(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  double *pdVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  
  dVar1 = *(double *)(*param_1 + (longlong)*(int *)(*param_6 + param_7 * 4 + param_8 * 4) * 8);
  lVar12 = (param_4 + 1) * param_8;
  lVar13 = *param_3;
  *param_3 = lVar12 + lVar13 + 1;
  pdVar11 = (double *)((lVar12 + lVar13) * 8 + 8 + *param_2);
  piVar7 = (int *)(param_7 * 4 + *param_6 + param_8 * 4 + 4);
  if (param_5 < 2) {
    lVar13 = 0;
  }
  else {
    dVar14 = -dVar1;
    piVar5 = piVar7;
    pdVar6 = pdVar11;
    lVar12 = 0;
    do {
      pdVar10 = pdVar6;
      piVar9 = piVar5;
      piVar5 = piVar7 + lVar12;
      iVar4 = piVar5[1];
      lVar13 = *param_1;
      pdVar6 = pdVar11 + lVar12 + 2;
      dVar2 = pdVar6[-1];
      dVar3 = *(double *)(lVar13 + (longlong)iVar4 * 8);
      *(double *)(lVar13 + (longlong)*piVar5 * 8) =
           pdVar6[-2] * dVar14 + *(double *)(lVar13 + (longlong)*piVar5 * 8);
      *(double *)(*param_1 + (longlong)iVar4 * 8) = dVar2 * dVar14 + dVar3;
      lVar13 = lVar12 + 2;
      lVar8 = lVar12 + 3;
      piVar5 = piVar5 + 2;
      lVar12 = lVar13;
    } while (lVar8 < param_5);
    piVar7 = piVar9 + 2;
    pdVar11 = pdVar10 + 2;
  }
  if (lVar13 < param_5) {
    *(double *)(*param_1 + (longlong)*piVar7 * 8) =
         *(double *)(*param_1 + (longlong)*piVar7 * 8) - dVar1 * *pdVar11;
  }
  return;
}



// FUNCTION 1483cdc7a FUN_1483cdc7a body=644 status=ok
// SIG undefined FUN_1483cdc7a(void)

void FUN_1483cdc7a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8,
                  longlong param_9,longlong param_10)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_e8;
  undefined1 local_d9;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_90;
  longlong lStack_88;
  longlong local_70 [2];
  ulonglong local_60;
  undefined8 local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (0 < param_1) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_3 + lVar3 * 8) =
           *(undefined8 *)
            (*param_2 + (longlong)*(int *)(*param_8 + param_9 * 4 + param_10 * 4 + lVar3 * 4) * 8);
      lVar3 = lVar3 + 1;
    } while (param_1 != lVar3);
  }
  param_9 = param_9 + param_10;
  lVar3 = (param_6 + 1) * param_10 + *param_5;
  *param_5 = lVar3;
  local_b8 = lVar3 * 8 + *param_4;
  local_90 = *param_3;
  local_a0 = param_6;
  local_e8 = param_4;
  local_b0 = param_1;
  local_a8 = param_1;
  lStack_88 = param_1;
  FUN_1483cd61c(&local_b8,&local_90,&local_90);
  lVar3 = *param_5;
  *param_5 = lVar3 + param_1;
  local_a0 = (param_7 - (param_7 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe;
  uVar6 = (lVar3 + param_1) * 8 + *local_e8;
  uVar1 = param_1 * 8 + *param_3;
  uVar4 = (longlong)(uVar6 << 0x3c) >> 0x3f;
  uVar5 = uVar4 + 2;
  if (uVar4 < 0xfffffffffffffffe) {
    uVar5 = uVar4;
  }
  uVar4 = 0;
  if ((uVar6 & 7) == 0) {
    uVar4 = uVar5;
  }
  uVar5 = 2;
  if ((uVar1 & 7) == 0) {
    uVar5 = (ulonglong)((uint)(uVar1 >> 3) & 1);
  }
  local_b8 = uVar1 + uVar5 * 8 + uVar4 * 8;
  local_b0 = param_7;
  local_d0 = local_58;
  local_58[0] = 0;
  local_d8 = local_70;
  local_c8 = &local_d9;
  local_c0 = &local_b8;
  local_70[0] = local_b8;
  local_60 = local_a0;
  FUN_1483cd500();
  local_f8 = local_a0;
  local_100 = local_b8;
  local_110 = local_90;
  lStack_108 = lStack_88;
  local_118 = param_6;
  FUN_1483c8e7e(local_b0,1,param_1,uVar6);
  if (0 < param_1) {
    lVar3 = 0;
    do {
      lVar2 = param_9 * 4;
      param_9 = param_9 + 1;
      *(undefined8 *)(*param_2 + (longlong)*(int *)(*param_8 + lVar2) * 8) =
           *(undefined8 *)(*param_3 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_1 != lVar3);
  }
  if (0 < param_7) {
    lVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_8 + param_9 * 4 + lVar3 * 4);
      *(double *)(*param_2 + lVar2 * 8) =
           *(double *)(*param_2 + lVar2 * 8) - *(double *)(local_b8 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_7 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cdf00 FUN_1483cdf00 body=192 status=ok
// SIG undefined FUN_1483cdf00(void)

void FUN_1483cdf00(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 == *param_2) {
    lVar2 = *(longlong *)(param_3[3] + 8);
    lVar1 = *(longlong *)(param_2[3] + 8);
    if (lVar2 == lVar1) goto LAB_1483cdf41;
  }
  else {
    lVar1 = *(longlong *)(param_2[3] + 8);
    lVar2 = *(longlong *)(param_3[3] + 8);
  }
  local_60 = local_30;
  local_68 = local_48;
  local_58 = &local_69;
  local_50 = param_3;
  local_48[0] = *param_3;
  local_38 = lVar2;
  local_30[0] = *param_2;
  local_20 = lVar1;
  FUN_1483cdfc2();
LAB_1483cdf41:
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1483ce07a(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cdfc2 FUN_1483cdfc2 body=145 status=ok
// SIG undefined FUN_1483cdfc2(void)

void FUN_1483cdfc2(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483ce054(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483ce054(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483ce054 FUN_1483ce054 body=38 status=ok
// SIG undefined FUN_1483ce054(void)

void FUN_1483ce054(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483ce07a FUN_1483ce07a body=286 status=ok
// SIG undefined FUN_1483ce07a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1483ce07a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3d != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 8;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1483ce111;
  FUN_1483c2df0(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 3)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1483ce130;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1483ce157;
  FUN_144d8e3a0();
}



// FUNCTION 1483ce19e FUN_1483ce19e body=235 status=ok
// SIG undefined FUN_1483ce19e(void)

void FUN_1483ce19e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,double *param_4)

{
  longlong lVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2[1] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      dVar4 = 0.0;
    }
    else {
      pdVar2 = (double *)*param_2;
      dVar4 = *(double *)*param_3 * *pdVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pdVar2 = pdVar2 + param_2[3];
          dVar4 = dVar4 + ((double *)*param_3)[lVar3] * *pdVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(double *)*param_1 = *param_4 * dVar4 + *(double *)*param_1;
  }
  else {
    local_28 = *param_2;
    local_20 = param_2[3];
    local_18 = *param_3;
    local_30 = *param_4;
    local_38 = *param_1;
    local_10 = 1;
    FUN_1483c32ea(param_2[1],param_2[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ce29a FUN_1483ce29a body=137 status=ok
// SIG undefined FUN_1483ce29a(void)

ios_base * FUN_1483ce29a(ios_base *param_1,int param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88) =
       &PTR_LAB_14ae75850;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x8c) =
       *(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88;
  *(undefined ***)(param_1 + -0x80) = &PTR_FUN_14a179f40;
  FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
  std::ios_base::~ios_base(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x88);
  }
  return param_1 + -0x88;
}



// FUNCTION 1483ce324 FUN_1483ce324 body=265 status=ok
// SIG undefined FUN_1483ce324(void)

undefined2 * FUN_1483ce324(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_146de45bc(param_1 + 0x14,0,0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_146de45bc(param_1 + 0x38,0,0);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  FUN_146de45bc(param_1 + 0x5c,0,0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[0xbc] = 0;
  return param_1;
}



// FUNCTION 1483ce42e FUN_1483ce42e body=52 status=ok
// SIG undefined FUN_1483ce42e(void)

undefined8 * FUN_1483ce42e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae75860;
  FUN_1483ce59c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ce466 FUN_1483ce466 body=136 status=ok
// SIG undefined FUN_1483ce466(void)

void FUN_1483ce466(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_40;
    local_48 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483ce61c;
    local_50 = 0;
    local_40 = param_3;
    local_38 = param_1;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ce500 FUN_1483ce500 body=79 status=ok
// SIG undefined FUN_1483ce500(void)

void FUN_1483ce500(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (*(char *)(param_1 + 8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_3 + 8) != *(longlong *)(param_1 + 0x40)) {
    FUN_146de3c6e(param_3,*(longlong *)(param_1 + 0x40),1);
  }
  FUN_1483cfa76(param_1 + 0x10,param_2,param_3);
  return;
}



// FUNCTION 1483ce550 FUN_1483ce550 body=57 status=ok
// SIG undefined FUN_1483ce550(void)

void FUN_1483ce550(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1483d013e(param_1 + 0x10);
    FUN_1483d02f8(param_1 + 0x10,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 1483ce59c FUN_1483ce59c body=127 status=ok
// SIG undefined FUN_1483ce59c(void)

void FUN_1483ce59c(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x168));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x158));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x130));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x120));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x110));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x100));
  FUN_146de5508(param_1 + 0xb8);
  FUN_146de5508(param_1 + 0x70);
  FUN_146de5508(param_1 + 0x28);
  FUN_1401d9a90(param_1 + 8);
  return;
}



// FUNCTION 1483ce624 FUN_1483ce624 body=171 status=ok
// SIG undefined FUN_1483ce624(void)

void FUN_1483ce624(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  lVar2 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar2 = local_28;
  }
  lVar1 = (longlong)*(int *)(param_1[2] + 8 + lVar2);
  local_20 = 0;
  if (0 < lVar1) {
    local_28 = *(longlong *)(param_1[2] + lVar2);
    local_20 = lVar1;
  }
  lVar1 = (longlong)*(int *)(*param_1 + 8 + lVar2);
  local_48 = 0;
  local_40 = 0;
  if (0 < lVar1) {
    local_48 = *(undefined8 *)(*param_1 + lVar2);
    local_40 = lVar1;
  }
  FUN_1483ce6d0(param_1[1] + 0x10,&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ce6d0 FUN_1483ce6d0 body=619 status=ok
// SIG undefined FUN_1483ce6d0(void)

void FUN_1483ce6d0(ulonglong param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  undefined8 *puStack_130;
  undefined1 local_121;
  undefined8 **local_120;
  undefined8 **local_118;
  undefined8 *local_110;
  undefined8 **local_108;
  undefined8 **ppuStack_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 **local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 **local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pppuVar1 = *(undefined8 ****)(param_1 + 0x150);
  local_138 = (undefined8 ***)0x0;
  puStack_130 = (undefined8 **)0x0;
  local_148 = (undefined8 **)0x0;
  uStack_140 = 0;
  local_108 = (undefined8 **)CONCAT71(local_108._1_7_,1);
  local_118 = (undefined8 **)param_1;
  local_110 = (undefined8 *)param_2;
  FUN_146de3c6e(&local_138,*(undefined8 *)(param_1 + 0x38),1);
  FUN_1483ce93c(&local_120,&local_138);
  FUN_146de611d(&local_148,&local_138,&local_120);
  ppuVar2 = (undefined8 **)puStack_130;
  if ((longlong)puStack_130 < (longlong)*(undefined8 ***)(param_1 + 0x30)) {
    ppuVar2 = *(undefined8 ***)(param_1 + 0x30);
  }
  FUN_146de3c6e(&local_138,ppuVar2,1);
  local_110 = (undefined8 *)(param_1 + 0x70);
  local_f8 = (longlong)(int)pppuVar1;
  local_120 = (undefined8 **)((ulonglong)local_120 & 0xffffffffffffff00);
  local_118 = (undefined8 **)((ulonglong)local_118 & 0xffffffffffffff00);
  local_108 = (undefined8 **)0x0;
  ppuStack_100 = (undefined8 **)0x0;
  local_a8 = (undefined8 **)local_148;
  local_88 = 0;
  local_78 = uStack_140;
  local_e0 = local_138;
  local_c0 = 0;
  local_b0 = puStack_130;
  local_f0 = (undefined8 *)local_f8;
  local_d8 = pppuVar1;
  local_c8 = &local_138;
  local_a0 = pppuVar1;
  local_90 = &local_148;
  FUN_1483cf016(&local_120,&local_a8,&local_e0);
  local_118 = (undefined8 **)((longlong)puStack_130 - (longlong)pppuVar1);
  local_120 = local_138 + (longlong)pppuVar1;
  local_f0 = puStack_130;
  local_70[0] = 0;
  local_d0 = puStack_130;
  local_98 = (undefined8 *)&local_121;
  local_108 = &local_138;
  ppuStack_100 = pppuVar1;
  local_e0 = local_120;
  local_a8 = &local_e0;
  local_a0 = (undefined8 **)local_70;
  local_90 = &local_120;
  FUN_1483c314c(&local_a8);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    local_a8 = local_138;
    local_98 = puStack_130;
    local_e0 = *param_3;
    local_d0 = param_3[1];
    local_120 = &local_e0;
    local_118 = &local_a8;
    local_110 = local_70;
    local_108 = param_3;
    FUN_1483cf362();
  }
  else {
    local_110 = *(undefined8 **)(param_1 + 0x30);
    local_120 = (undefined8 **)(param_1 + 0x130);
    local_118 = local_138;
    local_f8 = 0;
    local_e8 = puStack_130;
    ppuStack_100 = &local_138;
    FUN_1483cf230(param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1400020a8(local_148);
  FUN_1400020a8(local_138);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ce93c FUN_1483ce93c body=762 status=ok
// SIG undefined FUN_1483ce93c(void)

void FUN_1483ce93c(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  if (lVar3 < lVar4) {
    lVar4 = lVar3;
  }
  FUN_146de3ce5(param_2,*(undefined8 *)(param_1 + 0x10),&local_b0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar4);
    }
  }
  else {
    FUN_1483ced94(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38));
    if (0 < lVar4) {
      do {
        lVar3 = lVar4 + -1;
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        bVar2 = 1 < lVar4;
        lVar4 = lVar3;
      } while (bVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cec38 FUN_1483cec38 body=134 status=ok
// SIG undefined FUN_1483cec38(void)

undefined8 * FUN_1483cec38(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x28);
  param_1[1] = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x10) * 4 +
                  *(longlong *)(*(longlong *)(param_2 + 8) + 0x18));
  if (piVar2 == (int *)0x0) {
    param_1[3] = 0;
    lVar3 = FUN_1483a1788(param_2);
  }
  else {
    lVar3 = (longlong)*piVar2;
    param_1[3] = lVar3;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
    if ((lVar1 == 0) ||
       (piVar2 = (int *)(lVar1 + *(longlong *)(param_2 + 0x10) * 4), piVar2 == (int *)0x0)) {
      lVar3 = (longlong)
              *(int *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x18) + 4 +
                      *(longlong *)(param_2 + 0x10) * 4);
    }
    else {
      lVar3 = *piVar2 + lVar3;
    }
  }
  param_1[4] = lVar3;
  return param_1;
}



// FUNCTION 1483cecbe FUN_1483cecbe body=212 status=ok
// SIG undefined FUN_1483cecbe(void)

void FUN_1483cecbe(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  double *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_68;
  longlong local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  double local_40 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = local_40;
  local_40[0] = *(double *)(param_2 + 0x20);
  local_30 = param_2 + 0x28;
  local_28 = 0;
  lVar1 = *param_1;
  FUN_1483cec38(&local_80);
  local_58 = local_48;
  local_50 = 0;
  if (local_68 < local_60) {
    do {
      local_68 = local_68 + 1;
      lVar2 = (longlong)*(int *)(local_78 + -4 + local_68 * 4);
      *(double *)(lVar1 + lVar2 * 8) =
           *(double *)(lVar1 + lVar2 * 8) - *local_88 * *(double *)(local_80 + -8 + local_68 * 8);
    } while (local_68 != local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ced94 FUN_1483ced94 body=269 status=ok
// SIG undefined FUN_1483ced94(void)

void FUN_1483ced94(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_81;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[1] != param_2) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_146de3c6e(&local_98,param_2,1);
    local_48[0] = *param_1;
    local_38 = param_1[1];
    local_c8 = param_2;
    if (local_38 < param_2) {
      local_c8 = local_38;
    }
    local_68 = &local_d0;
    local_d0 = local_98;
    local_c0 = 1;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = uStack_90;
    local_78 = local_48;
    local_80 = local_60;
    local_60[0] = local_98;
    local_50 = uStack_90;
    local_70 = &local_81;
    local_b8 = &local_98;
    FUN_1483ceea2();
    uVar1 = *param_1;
    *param_1 = local_98;
    uVar2 = param_1[1];
    param_1[1] = uStack_90;
    local_98 = uVar1;
    uStack_90 = uVar2;
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ceea2 FUN_1483ceea2 body=371 status=ok
// SIG undefined FUN_1483ceea2(void)

void FUN_1483ceea2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  
  puVar13 = (ulonglong *)param_1[3];
  if ((*puVar13 & 7) == 0) {
    uVar3 = puVar13[2];
    if (0 < (longlong)uVar3) {
      uVar4 = puVar13[1];
      uVar5 = *(undefined8 *)(puVar13[3] + 8);
      uVar8 = (ulonglong)((uint)(*puVar13 >> 3) & 1);
      if ((longlong)uVar4 <= (longlong)uVar8) {
        uVar8 = uVar4;
      }
      lVar7 = 0;
      uVar14 = 0;
      do {
        if (0 < (longlong)uVar8) {
          *(undefined8 *)(*(longlong *)*param_1 + ((longlong *)*param_1)[2] * uVar14 * 8) =
               *(undefined8 *)(*(longlong *)param_1[1] + ((longlong *)param_1[1])[2] * uVar14 * 8);
        }
        uVar10 = uVar4 - uVar8 & 0xfffffffffffffffe;
        lVar9 = uVar10 + uVar8;
        uVar11 = uVar8;
        if (0 < (longlong)uVar10) {
          do {
            puVar1 = (undefined8 *)
                     (((longlong *)param_1[1])[2] * lVar7 + *(longlong *)param_1[1] + uVar11 * 8);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)
                     (((longlong *)*param_1)[2] * lVar7 + *(longlong *)*param_1 + uVar11 * 8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar11 = uVar11 + 2;
          } while ((longlong)uVar11 < lVar9);
        }
        for (; lVar9 < (longlong)uVar4; lVar9 = lVar9 + 1) {
          *(undefined8 *)(((longlong *)*param_1)[2] * lVar7 + *(longlong *)*param_1 + lVar9 * 8) =
               *(undefined8 *)
                (((longlong *)param_1[1])[2] * lVar7 + *(longlong *)param_1[1] + lVar9 * 8);
        }
        uVar8 = (longlong)(uVar8 + ((uint)uVar5 & 1)) % 2;
        if ((longlong)uVar4 < (longlong)uVar8) {
          uVar8 = uVar4;
        }
        uVar14 = uVar14 + 1;
        lVar7 = lVar7 + 8;
      } while (uVar14 != uVar3);
    }
  }
  else if (0 < (longlong)puVar13[2]) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      if (0 < (longlong)puVar13[1]) {
        lVar12 = 0;
        do {
          *(undefined8 *)(((longlong *)*param_1)[2] * lVar7 + *(longlong *)*param_1 + lVar12 * 8) =
               *(undefined8 *)
                (((longlong *)param_1[1])[2] * lVar7 + *(longlong *)param_1[1] + lVar12 * 8);
          lVar12 = lVar12 + 1;
          puVar13 = (ulonglong *)param_1[3];
        } while (lVar12 < (longlong)puVar13[1]);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar9 < (longlong)puVar13[2]);
  }
  return;
}



// FUNCTION 1483cf016 FUN_1483cf016 body=164 status=ok
// SIG undefined FUN_1483cf016(void)

void FUN_1483cf016(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 != *param_2) {
    local_60 = local_30;
    local_20 = *(undefined8 *)(param_2[3] + 8);
    local_68 = local_48;
    local_38 = *(undefined8 *)(param_3[3] + 8);
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_30[0] = *param_2;
    FUN_1483cdfc2();
  }
  FUN_1483cf0bc(param_1 + 8,param_3);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cf0bc FUN_1483cf0bc body=371 status=ok
// SIG undefined FUN_1483cf0bc(void)

void FUN_1483cf0bc(longlong param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (0 < *(longlong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar7 = *(longlong *)(param_1 + 0x28);
    do {
      lVar8 = lVar7 + -1;
      lVar3 = *param_2;
      dVar1 = *(double *)(lVar3 + -8 + lVar7 * 8);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        lVar9 = *(longlong *)(param_1 + 0x18) + lVar8;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar9 * 4);
        if (*(longlong *)(lVar2 + 0x20) == 0) {
          lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar9 * 4);
        }
        else {
          lVar9 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar9 * 4) + lVar10;
        }
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (lVar10 < lVar9) {
          do {
            if (lVar4 <= *(int *)(*(longlong *)(lVar2 + 0x30) + lVar10 * 4)) goto LAB_1483cf143;
            lVar10 = lVar10 + 1;
            lVar11 = lVar9;
          } while (lVar9 != lVar10);
        }
        else {
LAB_1483cf143:
          lVar11 = lVar10;
          if (lVar10 < lVar9) {
            do {
              lVar12 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + lVar10 * 4);
              lVar11 = lVar10;
              if ((*(longlong *)(param_1 + 0x20) + lVar4 <= lVar12) ||
                 (lVar8 == lVar12 - (int)lVar4)) break;
              lVar10 = lVar10 + 1;
              lVar11 = lVar9;
            } while (lVar9 != lVar10);
          }
        }
        *(double *)(lVar3 + lVar8 * 8) =
             dVar1 / *(double *)(*(longlong *)(lVar2 + 0x28) + lVar11 * 8);
        lVar9 = *(longlong *)(param_1 + 0x18) + lVar8;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar9 * 4);
        if (*(longlong *)(lVar2 + 0x20) == 0) {
          lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar9 * 4);
        }
        else {
          lVar9 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar9 * 4) + lVar10;
        }
        lVar4 = *(longlong *)(lVar2 + 0x28);
        lVar11 = *(longlong *)(lVar2 + 0x30);
        lVar12 = *(longlong *)(param_1 + 0x10);
        lVar5 = *(longlong *)(param_1 + 0x20);
        if (lVar10 < lVar9) {
          do {
            if (lVar12 <= *(int *)(lVar11 + lVar10 * 4)) goto LAB_1483cf1c4;
            lVar10 = lVar10 + 1;
          } while (lVar9 != lVar10);
        }
        else {
LAB_1483cf1c4:
          if (lVar10 < lVar9) {
            do {
              lVar13 = (longlong)*(int *)(lVar11 + lVar10 * 4);
              if ((lVar5 + lVar12 <= lVar13) ||
                 (lVar13 = lVar13 - *(int *)(param_1 + 0x10), lVar8 <= lVar13)) break;
              *(double *)(*param_2 + lVar13 * 8) =
                   *(double *)(*param_2 + lVar13 * 8) -
                   *(double *)(lVar3 + lVar8 * 8) * *(double *)(lVar4 + lVar10 * 8);
              lVar10 = lVar10 + 1;
            } while (lVar9 != lVar10);
          }
        }
      }
      bVar6 = 1 < lVar7;
      lVar7 = lVar8;
    } while (bVar6);
  }
  return;
}



// FUNCTION 1483cf230 FUN_1483cf230 body=305 status=ok
// SIG undefined FUN_1483cf230(void)

void FUN_1483cf230(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (param_1[1] == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined8 *)(lVar3 + lVar4 * 8);
            *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar3 + -8 + lVar5 * 8);
            *(undefined8 *)(lVar3 + -8 + lVar5 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1483cf353;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1483cf353:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 8) =
           *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cf362 FUN_1483cf362 body=145 status=ok
// SIG undefined FUN_1483cf362(void)

void FUN_1483cf362(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483cf3f4(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483cf3f4(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483cf3f4 FUN_1483cf3f4 body=38 status=ok
// SIG undefined FUN_1483cf3f4(void)

void FUN_1483cf3f4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483cf41a FUN_1483cf41a body=619 status=ok
// SIG undefined FUN_1483cf41a(void)

void FUN_1483cf41a(ulonglong param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  undefined8 *puStack_130;
  undefined1 local_121;
  undefined8 **local_120;
  undefined8 **local_118;
  undefined8 *local_110;
  undefined8 **local_108;
  undefined8 **ppuStack_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 **local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 **local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pppuVar1 = *(undefined8 ****)(param_1 + 0x150);
  local_138 = (undefined8 ***)0x0;
  puStack_130 = (undefined8 **)0x0;
  local_148 = (undefined8 **)0x0;
  uStack_140 = 0;
  local_108 = (undefined8 **)CONCAT71(local_108._1_7_,1);
  local_118 = (undefined8 **)param_1;
  local_110 = (undefined8 *)param_2;
  FUN_146de3c6e(&local_138,*(undefined8 *)(param_1 + 0x38),1);
  FUN_1483cf686(&local_120,&local_138);
  FUN_146de611d(&local_148,&local_138,&local_120);
  ppuVar2 = (undefined8 **)puStack_130;
  if ((longlong)puStack_130 < (longlong)*(undefined8 ***)(param_1 + 0x30)) {
    ppuVar2 = *(undefined8 ***)(param_1 + 0x30);
  }
  FUN_146de3c6e(&local_138,ppuVar2,1);
  local_110 = (undefined8 *)(param_1 + 0x70);
  local_f8 = (longlong)(int)pppuVar1;
  local_120 = (undefined8 **)((ulonglong)local_120 & 0xffffffffffffff00);
  local_118 = (undefined8 **)((ulonglong)local_118 & 0xffffffffffffff00);
  local_108 = (undefined8 **)0x0;
  ppuStack_100 = (undefined8 **)0x0;
  local_a8 = (undefined8 **)local_148;
  local_88 = 0;
  local_78 = uStack_140;
  local_e0 = local_138;
  local_c0 = 0;
  local_b0 = puStack_130;
  local_f0 = (undefined8 *)local_f8;
  local_d8 = pppuVar1;
  local_c8 = &local_138;
  local_a0 = pppuVar1;
  local_90 = &local_148;
  FUN_1483cf016(&local_120,&local_a8,&local_e0);
  local_118 = (undefined8 **)((longlong)puStack_130 - (longlong)pppuVar1);
  local_120 = local_138 + (longlong)pppuVar1;
  local_f0 = puStack_130;
  local_70[0] = 0;
  local_d0 = puStack_130;
  local_98 = (undefined8 *)&local_121;
  local_108 = &local_138;
  ppuStack_100 = pppuVar1;
  local_e0 = local_120;
  local_a8 = &local_e0;
  local_a0 = (undefined8 **)local_70;
  local_90 = &local_120;
  FUN_1483c314c(&local_a8);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    local_a8 = local_138;
    local_98 = puStack_130;
    local_e0 = *param_3;
    local_d0 = param_3[1];
    local_120 = &local_e0;
    local_118 = &local_a8;
    local_110 = local_70;
    local_108 = param_3;
    FUN_1483cf362();
  }
  else {
    local_110 = *(undefined8 **)(param_1 + 0x30);
    local_120 = (undefined8 **)(param_1 + 0x130);
    local_118 = local_138;
    local_f8 = 0;
    local_e8 = puStack_130;
    ppuStack_100 = &local_138;
    FUN_1483cf230(param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1400020a8(local_148);
  FUN_1400020a8(local_138);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cf686 FUN_1483cf686 body=762 status=ok
// SIG undefined FUN_1483cf686(void)

void FUN_1483cf686(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  if (lVar3 < lVar4) {
    lVar4 = lVar3;
  }
  FUN_1483cf981(param_2,*(undefined8 *)(param_1 + 0x10),&local_b0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar4);
    }
  }
  else {
    FUN_1483ced94(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38));
    if (0 < lVar4) {
      do {
        lVar3 = lVar4 + -1;
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        bVar2 = 1 < lVar4;
        lVar4 = lVar3;
      } while (bVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cf981 FUN_1483cf981 body=134 status=ok
// SIG undefined FUN_1483cf981(void)

void FUN_1483cf981(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = param_2[1];
  if (param_1[1] != local_20) {
    FUN_146de3c6e(param_1,local_20,1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_1483cfa08();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cfa08 FUN_1483cfa08 body=109 status=ok
// SIG undefined FUN_1483cfa08(void)

void FUN_1483cfa08(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 - ((longlong)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 8);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar6 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 1483cfa76 FUN_1483cfa76 body=599 status=ok
// SIG undefined FUN_1483cfa76(void)

void FUN_1483cfa76(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  longlong lStack_130;
  undefined1 local_121;
  ulonglong local_120;
  ulonglong local_118;
  longlong local_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x150);
  local_138 = 0;
  lStack_130 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_108 = (longlong *)CONCAT71(local_108._1_7_,1);
  local_118 = param_1;
  local_110 = param_2;
  FUN_146de3c6e(&local_138,*(undefined8 *)(param_1 + 0x38),1);
  FUN_1483cfcce(&local_120,&local_138);
  FUN_146de611d(&local_148,&local_138,&local_120);
  lVar2 = lStack_130;
  if (lStack_130 < *(longlong *)(param_1 + 0x30)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146de3c6e(&local_138,lVar2,1);
  local_110 = param_1 + 0x70;
  local_f8 = (longlong)(int)lVar1;
  local_120 = local_120 & 0xffffffffffffff00;
  local_118 = local_118 & 0xffffffffffffff00;
  local_108 = (longlong *)0x0;
  plStack_100 = (longlong *)0x0;
  local_a8 = local_148;
  local_88 = 0;
  local_78 = uStack_140;
  local_e0 = local_138;
  local_c0 = 0;
  local_b0 = lStack_130;
  local_f0 = local_f8;
  local_d8 = lVar1;
  local_c8 = (longlong *)&local_138;
  local_a0 = (undefined8 *)lVar1;
  local_90 = (ulonglong *)&local_148;
  FUN_1483cf016(&local_120,&local_a8,&local_e0);
  local_118 = lStack_130 - lVar1;
  local_120 = lVar1 * 8 + local_138;
  local_f0 = lStack_130;
  local_a0 = local_70;
  local_70[0] = 0;
  local_d0 = lStack_130;
  local_98 = &local_121;
  local_108 = (longlong *)&local_138;
  plStack_100 = (longlong *)lVar1;
  local_e0 = local_120;
  local_a8 = (longlong *)&local_e0;
  local_90 = &local_120;
  FUN_1483c314c(&local_a8);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    local_118 = *(ulonglong *)(param_1 + 0x30);
    local_120 = local_138;
    plStack_100 = (longlong *)0x0;
    local_f0 = lStack_130;
    local_108 = (longlong *)&local_138;
    FUN_1483c8917(param_3,&local_120,&local_a8);
  }
  else {
    local_110 = *(longlong *)(param_1 + 0x30);
    local_120 = param_1 + 0x130;
    local_118 = local_138;
    local_f8 = 0;
    local_e8 = lStack_130;
    plStack_100 = (longlong *)&local_138;
    FUN_1483cffca(param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1400020a8(local_148);
  FUN_1400020a8(local_138);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483cfcce FUN_1483cfcce body=762 status=ok
// SIG undefined FUN_1483cfcce(void)

void FUN_1483cfcce(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  if (lVar3 < lVar4) {
    lVar4 = lVar3;
  }
  FUN_146de611d(param_2,*(undefined8 *)(param_1 + 0x10),&local_b0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar4);
    }
  }
  else {
    FUN_1483ced94(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38));
    if (0 < lVar4) {
      do {
        lVar3 = lVar4 + -1;
        local_e0 = *(longlong *)(param_1 + 8) + 0xb8;
        local_e8 = local_e8 & 0xffffffffffffff00;
        uVar1 = *param_2;
        local_d8 = (longlong)(int)lVar3;
        FUN_1483cec38(&local_b0,&local_e8);
        if ((longlong)local_98 < (longlong)local_90) {
          dVar5 = 0.0;
          do {
            local_98 = (double)((longlong)local_98 + 1);
            dVar5 = dVar5 + *(double *)(CONCAT71(uStack_af,local_b0) + -8 + (longlong)local_98 * 8)
                            * *(double *)
                               (uVar1 + (longlong)*(int *)(local_a8 + -4 + (longlong)local_98 * 4) *
                                        8);
          } while (local_98 != local_90);
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            local_80 = *(longlong *)(param_1 + 8);
            local_90 = dVar5 * *(double *)(*(longlong *)(local_80 + 0x100) + lVar3 * 8);
            local_a0 = *(undefined8 *)(local_80 + 200);
            local_80 = local_80 + 0xb8;
            local_b0 = 0;
            local_88 = 0;
            local_e8 = *param_2;
            local_e0 = param_2[1];
            local_c8 = 0;
            local_d0 = param_2;
            local_b8 = local_e0;
            local_78 = (longlong)(int)lVar3;
            FUN_1483cecbe(&local_e8,&local_b0);
          }
        }
        bVar2 = 1 < lVar4;
        lVar4 = lVar3;
      } while (bVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483cffca FUN_1483cffca body=66 status=ok
// SIG undefined FUN_1483cffca(void)

void FUN_1483cffca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(longlong *)(param_1 + 8) != *(longlong *)(lVar1 + 8)) {
    FUN_146de3c6e(param_1,*(longlong *)(lVar1 + 8),1);
    lVar1 = *param_2;
  }
  FUN_1483d000c(param_1,lVar1,param_2 + 1);
  return;
}



// FUNCTION 1483d000c FUN_1483d000c body=305 status=ok
// SIG undefined FUN_1483d000c(void)

void FUN_1483d000c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (param_1[1] == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined8 *)(lVar3 + lVar4 * 8);
            *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar3 + -8 + lVar5 * 8);
            *(undefined8 *)(lVar3 + -8 + lVar5 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1483d012f;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1483d012f:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 8) =
           *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d013e FUN_1483d013e body=441 status=ok
// SIG undefined FUN_1483d013e(void)

void FUN_1483d013e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x110);
  FUN_1483c5918(param_2);
  lVar6 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar9 = lVar2;
  if (lVar6 < lVar2) {
    lVar9 = lVar6;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_141729ef6(plVar1,lVar6);
    local_44 = (int)lVar6 + -1;
    local_48 = 0;
    FUN_1483d1362(plVar1,lVar6);
    lVar5 = 0;
    lVar7 = 0;
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) goto LAB_1483d020b;
  }
  lVar7 = lVar4;
  if (lVar7 < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_141729f83(lVar7);
  }
  if (0 < (int)(uint)lVar7) {
    uVar8 = 0;
    do {
      *(int *)(lVar5 + (longlong)*(int *)(*plVar1 + uVar8 * 4) * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
    } while (((uint)lVar7 & 0x7fffffff) != uVar8);
  }
LAB_1483d020b:
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  *(longlong *)(param_1 + 0x130) = lVar5;
  *(longlong *)(param_1 + 0x138) = lVar7;
  FUN_1400020a8(uVar3);
  FUN_1483c5d7c(param_2,param_1 + 0x158,param_1 + 0x168,*(undefined8 *)(param_1 + 0x130));
  *(undefined1 *)(param_1 + 0x179) = 1;
  FUN_146de45bc(param_1 + 0x70,lVar2,lVar6);
  FUN_146de45bc(param_1 + 0xb8,lVar2,lVar9);
  lVar6 = FUN_146de5690(param_2);
  lVar6 = lVar6 * 2 + *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xb0) < lVar6) {
    FUN_146de55aa(param_1 + 0x98,lVar6);
  }
  lVar6 = FUN_146de5690(param_2);
  lVar6 = lVar6 * 2 + *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf8) < lVar6) {
    FUN_146de55aa(param_1 + 0xe0,lVar6);
  }
  FUN_146de3b1a(param_1 + 0x100,lVar9);
  *(undefined1 *)(param_1 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d02f8 FUN_1483d02f8 body=4200 status=ok
// SIG undefined FUN_1483d02f8(void)

void FUN_1483d02f8(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  char cVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  undefined4 uVar24;
  undefined1 *puVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined1 auStack_228 [40];
  undefined1 *local_200;
  uint local_1f4;
  int *local_1f0;
  longlong local_1e8;
  int local_1dc;
  longlong local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  ulonglong *local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  ulonglong local_150;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong *local_f8;
  ulonglong *local_f0;
  longlong *local_e8;
  ulonglong *local_e0;
  ulonglong local_d8 [2];
  longlong local_c8;
  ulonglong local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar16 = *(longlong *)(param_2 + 8);
  local_1c0 = *(ulonglong *)(param_2 + 0x10);
  uVar14 = (uint)lVar16;
  local_1f4 = (uint)local_1c0;
  uVar8 = uVar14;
  if ((int)uVar14 < (int)local_1f4) {
    uVar8 = local_1f4;
    local_1f4 = uVar14;
  }
  uVar18 = (ulonglong)(int)uVar8;
  local_158 = 0;
  if (uVar8 != 0) {
    if ((int)uVar8 < 1) {
      local_158 = 0;
    }
    else {
      local_158 = FUN_141729f83(uVar18);
    }
  }
  uStack_130 = (undefined1 *)CONCAT44(0xffffffff,(undefined4)uStack_130);
  local_150 = uVar18;
  local_138 = uVar18;
  FUN_146de04ef(&local_158,&local_140,&local_f8);
  lVar26 = (longlong)(int)uVar14;
  local_200 = param_1;
  if (lVar26 < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_141729f83(lVar26);
  }
  lVar27 = (longlong)(int)local_1c0;
  if (((local_1c0 & 0xffffffff) == 0) || (lVar27 < 1)) {
    local_168 = 0;
    local_1f0 = (int *)0x0;
  }
  else {
    local_1f0 = (int *)FUN_141729f83(lVar27);
    lStack_160 = 0;
    local_168 = FUN_146de3b53(lVar27);
  }
  puVar25 = local_200;
  dVar2 = *(double *)(local_200 + 0x140);
  *(undefined8 *)(local_200 + 0xa8) = 0;
  lStack_160 = lVar27;
  memset(*(void **)(local_200 + 0x88),0,*(longlong *)(local_200 + 0x78) * 4 + 4);
  if (*(void **)(puVar25 + 0x90) != (void *)0x0) {
    memset(*(void **)(puVar25 + 0x90),0,*(longlong *)(puVar25 + 0x78) << 2);
  }
  *(undefined8 *)(puVar25 + 0xf0) = 0;
  memset(*(void **)(puVar25 + 0xd0),0,*(longlong *)(puVar25 + 0xc0) * 4 + 4);
  if (*(void **)(puVar25 + 0xd8) != (void *)0x0) {
    memset(*(void **)(puVar25 + 0xd8),0,*(longlong *)(puVar25 + 0xc0) << 2);
  }
  puVar11 = puVar25 + 0x28;
  FUN_146de5a4e(puVar11);
  if (puVar25[0x179] == '\0') {
    lVar27 = *(longlong *)(puVar25 + 0x118);
    if (lVar27 == 0) {
      lVar22 = 0;
    }
    else {
      if (lVar27 < 1) {
        lVar22 = 0;
      }
      else {
        lVar22 = FUN_141729f83(lVar27);
      }
      if (0 < (int)(uint)lVar27) {
        uVar18 = 0;
        do {
          *(int *)(lVar22 + (longlong)*(int *)(*(longlong *)(puVar25 + 0x110) + uVar18 * 4) * 4) =
               (int)uVar18;
          uVar18 = uVar18 + 1;
        } while (((uint)lVar27 & 0x7fffffff) != uVar18);
      }
    }
    uVar30 = *(undefined8 *)(puVar25 + 0x130);
    *(longlong *)(puVar25 + 0x130) = lVar22;
    *(longlong *)(puVar25 + 0x138) = lVar27;
    FUN_1400020a8(uVar30);
    FUN_1483c5d7c(puVar11,puVar25 + 0x158,puVar25 + 0x168,*(undefined8 *)(puVar25 + 0x130));
    puVar25[0x179] = 1;
  }
  FUN_1483c5d1c();
  local_1d8 = lVar16;
  local_198 = puVar11;
  if ((int)uVar14 < 1) {
    dVar29 = 0.0;
    if (puVar25[0x148] == '\0') goto LAB_1483d066a;
  }
  else {
    lVar16 = *(longlong *)(param_2 + 0x18);
    puVar11 = (undefined1 *)0x0;
    do {
      if (*(longlong *)(puVar25 + 0x118) == 0) {
        iVar23 = (int)puVar11;
      }
      else {
        iVar23 = *(int *)(*(longlong *)(puVar25 + 0x110) + (longlong)puVar11 * 4);
      }
      iVar13 = *(int *)(lVar16 + (longlong)puVar11 * 4);
      *(int *)(*(longlong *)(puVar25 + 0x40) + (longlong)iVar23 * 4) = iVar13;
      lVar27 = (longlong)puVar11 * 4;
      puVar11 = puVar11 + 1;
      *(int *)(*(longlong *)(puVar25 + 0x48) + (longlong)iVar23 * 4) =
           *(int *)(lVar16 + 4 + lVar27) - iVar13;
    } while ((undefined1 *)(ulonglong)(uVar14 & 0x7fffffff) != puVar11);
    if (puVar25[0x148] == '\0') goto LAB_1483d066a;
    puVar25 = (undefined1 *)0x0;
    uVar24 = 0;
    uVar32 = 0;
    do {
      local_140 = local_140 & 0xffffffffffffff00;
      local_138 = local_138 & 0xffffffffffffff00;
      uStack_130 = local_198;
      local_128 = puVar25;
      dVar29 = (double)FUN_1483d1530(&local_140);
      if (dVar29 < 0.0) {
        dVar29 = sqrt(dVar29);
      }
      else {
        dVar29 = SQRT(dVar29);
      }
      if (dVar29 <= (double)CONCAT44(uVar32,uVar24)) {
        dVar29 = (double)CONCAT44(uVar32,uVar24);
      }
      puVar25 = puVar25 + 1;
      uVar24 = SUB84(dVar29,0);
      uVar32 = (undefined4)((ulonglong)dVar29 >> 0x20);
    } while ((undefined1 *)(ulonglong)(uVar14 & 0x7fffffff) != puVar25);
  }
  dVar2 = (double)(((int)local_1d8 + (int)local_1c0) * 0x14) *
          (double)(~-(ulonglong)(dVar29 == 0.0) & (ulonglong)dVar29 |
                  -(ulonglong)(dVar29 == 0.0) & 0x3ff0000000000000) * 2.220446049250313e-16;
LAB_1483d066a:
  puVar25 = local_200;
  plVar28 = (longlong *)(local_200 + 0x120);
  FUN_141729ef6(plVar28,lVar26);
  uVar30 = *(undefined8 *)(puVar25 + 0x128);
  if (0 < (int)(uint)uVar30) {
    uVar18 = 0;
    do {
      *(int *)(*plVar28 + uVar18 * 4) = (int)uVar18;
      uVar18 = uVar18 + 1;
    } while (((uint)uVar30 & 0x7fffffff) != uVar18);
  }
  local_1a0 = (ulonglong *)(puVar25 + 0xb8);
  (*(undefined4 **)(puVar25 + 0xd0))[1] = **(undefined4 **)(puVar25 + 0xd0);
  if ((int)local_1d8 < 1) {
    iVar23 = 0;
    puVar11 = puVar25;
  }
  else {
    local_188 = (longlong *)(puVar25 + 0x168);
    plVar1 = (longlong *)(puVar25 + 0x158);
    local_190 = lVar9 + -4;
    local_178 = (longlong)((int)local_1d8 + -1);
    local_180 = (local_1d8 << 0x20) + -0x100000000 >> 0x20;
    uVar18 = 0;
    iVar23 = 0;
    local_1c8 = lVar9;
    local_1b0 = plVar28;
    do {
      local_138 = local_150;
      uStack_130 = (undefined1 *)CONCAT44(0xffffffff,(undefined4)uStack_130);
      FUN_146de04ef(&local_158,&local_140,&local_f8);
      *(undefined4 *)(*(longlong *)(puVar25 + 0x88) + 4 + uVar18 * 4) =
           *(undefined4 *)(*(longlong *)(puVar25 + 0x88) + uVar18 * 4);
      local_1b8 = (longlong)iVar23;
      uVar24 = (undefined4)uVar18;
      *(undefined4 *)(local_158 + local_1b8 * 4) = uVar24;
      *local_1f0 = iVar23;
      bVar5 = (int)local_1c0 <= iVar23;
      local_138 = lStack_160;
      local_128 = (undefined1 *)0x0;
      FUN_146de41cc(&local_168,&local_140,&local_f8);
      lVar16 = local_1c8;
      puVar11 = local_200;
      lVar26 = (longlong)*(int *)(*(longlong *)(puVar25 + 0x40) + uVar18 * 4);
      if (*(longlong *)(puVar25 + 0x48) == 0) {
        puVar25 = (undefined1 *)(longlong)*(int *)(*(longlong *)(puVar25 + 0x40) + 4 + uVar18 * 4);
      }
      else {
        puVar25 = (undefined1 *)(*(int *)(*(longlong *)(puVar25 + 0x48) + uVar18 * 4) + lVar26);
      }
      bVar6 = (longlong)puVar25 <= lVar26;
      if (bVar6 && (int)local_1c0 <= iVar23) {
LAB_1483d10f7:
        plVar28 = local_1b0;
        puVar25 = local_200;
        lVar16 = local_1b8;
        if (local_1b8 < local_180) {
          do {
            lVar26 = *local_1b0;
            uVar24 = *(undefined4 *)(lVar26 + lVar16 * 4);
            *(undefined4 *)(lVar26 + lVar16 * 4) = *(undefined4 *)(lVar26 + 4 + lVar16 * 4);
            *(undefined4 *)(lVar26 + 4 + lVar16 * 4) = uVar24;
            lVar16 = lVar16 + 1;
          } while (local_178 != lVar16);
        }
        FUN_1483c5d7c(local_198,plVar1,local_188,*(undefined8 *)(local_200 + 0x120));
        puVar25[0x179] = 0;
        lVar16 = lVar9;
      }
      else {
        local_170 = *(longlong *)(local_200 + 0x50);
        local_1a8 = *(longlong *)(local_200 + 0x58);
        local_1e8 = 1;
        lVar27 = 0;
        do {
          lVar22 = local_1b8;
          iVar13 = iVar23;
          if (!bVar6) {
            iVar13 = *(int *)(local_1a8 + lVar26 * 4);
            lVar22 = (longlong)iVar13;
          }
          iVar10 = *(int *)(*local_188 + lVar22 * 4);
          lVar17 = (longlong)iVar10;
          local_1dc = iVar23;
          local_1d0 = puVar25;
          if (lVar17 < 0) {
            FUN_1401d7cf8(local_200 + 8,"Empty row found during numerical factorization");
            uVar24 = 3;
            goto LAB_1483d0d2b;
          }
          uVar8 = *(uint *)(local_158 + lVar17 * 4);
          lVar15 = lVar27;
          while (uVar18 != uVar8) {
            *(int *)(lVar9 + lVar15 * 4) = iVar10;
            *(undefined4 *)(local_158 + lVar17 * 4) = uVar24;
            lVar15 = lVar15 + 1;
            iVar10 = *(int *)(*plVar1 + lVar17 * 4);
            lVar17 = (longlong)iVar10;
            uVar8 = *(uint *)(local_158 + lVar17 * 4);
          }
          if (1 < lVar15 - lVar27) {
            lVar9 = local_1c8 + lVar27 * 4;
            puVar12 = (undefined4 *)(local_190 + lVar15 * 4);
            lVar17 = 0;
            do {
              uVar32 = *(undefined4 *)(lVar9 + lVar17 * 4);
              *(undefined4 *)(lVar9 + lVar17 * 4) = *puVar12;
              *puVar12 = uVar32;
              lVar17 = lVar17 + 1;
              puVar12 = puVar12 + -1;
            } while ((lVar15 - lVar27) / 2 != lVar17);
          }
          uVar30 = 0;
          if (!bVar6) {
            uVar30 = *(undefined8 *)(local_170 + lVar26 * 8);
          }
          *(undefined8 *)(local_168 + lVar22 * 8) = uVar30;
          if ((iVar23 < iVar13) && (uVar18 != *(uint *)(local_158 + lVar22 * 4))) {
            local_1f0[local_1e8] = iVar13;
            *(undefined4 *)(local_158 + lVar22 * 4) = uVar24;
            local_1e8 = local_1e8 + 1;
          }
          bVar5 = (bool)(bVar5 | iVar13 == iVar23);
          lVar26 = lVar26 + 1;
          bVar6 = (longlong)puVar25 <= lVar26;
          lVar27 = lVar15;
          lVar9 = local_1c8;
        } while (!(bool)(bVar6 & bVar5));
        lVar27 = local_1e8;
        lVar26 = lVar15;
        if (lVar15 < 1) {
          if (iVar23 < (int)local_1f4) goto LAB_1483d10b6;
          goto LAB_1483d10f7;
        }
        do {
          lVar26 = lVar26 + -1;
          plVar28 = (longlong *)(longlong)*(int *)(lVar16 + lVar26 * 4);
          local_f8 = (ulonglong *)((ulonglong)local_f8 & 0xffffffffffffff00);
          local_f0 = local_1a0;
          local_e8 = plVar28;
          FUN_1483d15b2(&local_140,&local_f8);
          dVar29 = 0.0;
          if ((longlong)local_128 < (longlong)puStack_120) {
            do {
              local_128 = local_128 + 1;
              dVar29 = dVar29 + *(double *)((local_140 - 8) + (longlong)local_128 * 8) *
                                *(double *)
                                 (local_168 +
                                 (longlong)*(int *)(local_138 + -4 + (longlong)local_128 * 4) * 8);
            } while (local_128 != puStack_120);
          }
          dVar4 = *(double *)(*(longlong *)(local_200 + 0x100) + (longlong)plVar28 * 8);
          lVar9 = *(longlong *)(local_200 + 0xe0);
          lVar22 = *(longlong *)(local_200 + 0xe8);
          lVar17 = (longlong)*(int *)(*(longlong *)(local_200 + 0xd0) + (longlong)plVar28 * 4);
          if (*(longlong *)(local_200 + 0xd8) == 0) {
            lVar20 = (longlong)*(int *)(*(longlong *)(local_200 + 0xd0) + 4 + (longlong)plVar28 * 4)
            ;
          }
          else {
            lVar20 = *(int *)(*(longlong *)(local_200 + 0xd8) + (longlong)plVar28 * 4) + lVar17;
          }
          if (lVar17 < lVar20) {
            do {
              lVar21 = (longlong)*(int *)(lVar22 + lVar17 * 4);
              *(double *)(local_168 + lVar21 * 8) =
                   *(double *)(local_168 + lVar21 * 8) -
                   *(double *)(lVar9 + lVar17 * 8) * dVar29 * dVar4;
              lVar17 = lVar17 + 1;
            } while (lVar20 != lVar17);
          }
          if (*(int *)(*plVar1 + (longlong)*(int *)(lVar16 + lVar26 * 4) * 4) == iVar23) {
            lVar9 = (longlong)*(int *)(*(longlong *)(local_200 + 0xd0) + (longlong)plVar28 * 4);
            if (*(longlong *)(local_200 + 0xd8) == 0) {
              lVar22 = (longlong)
                       *(int *)(*(longlong *)(local_200 + 0xd0) + 4 + (longlong)plVar28 * 4);
            }
            else {
              lVar22 = *(int *)(*(longlong *)(local_200 + 0xd8) + (longlong)plVar28 * 4) + lVar9;
            }
            if (lVar9 < lVar22) {
              lVar17 = *(longlong *)(local_200 + 0xe8);
              do {
                iVar13 = *(int *)(lVar17 + lVar9 * 4);
                lVar20 = (longlong)iVar13;
                if (uVar18 != *(uint *)(local_158 + lVar20 * 4)) {
                  local_1f0[lVar27] = iVar13;
                  lVar27 = lVar27 + 1;
                  *(undefined4 *)(local_158 + lVar20 * 4) = uVar24;
                }
                lVar9 = lVar9 + 1;
              } while (lVar22 != lVar9);
            }
          }
        } while (0 < lVar26);
        if (iVar23 < (int)local_1f4) {
LAB_1483d10b6:
          piVar7 = local_1f0;
          dVar29 = 0.0;
          uVar24 = 0;
          uVar32 = 0;
          if (lVar27 == 0) {
LAB_1483d11c0:
            *(undefined8 *)(local_168 + (longlong)*local_1f0 * 8) = 0x3ff0000000000000;
            dVar31 = (double)CONCAT44(uVar32,uVar24);
          }
          else {
            dVar4 = *(double *)(local_168 + (longlong)*local_1f0 * 8);
            uVar24 = SUB84(dVar4,0);
            uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
            if (lVar27 < 2) goto LAB_1483d11c0;
            dVar31 = 0.0;
            lVar26 = 1;
            do {
              dVar3 = *(double *)(local_168 + (longlong)local_1f0[lVar26] * 8);
              dVar31 = dVar31 + dVar3 * dVar3;
              lVar26 = lVar26 + 1;
            } while (lVar27 != lVar26);
            if ((dVar31 == 0.0) && (!NAN(dVar31))) goto LAB_1483d11c0;
            dVar31 = dVar4 * dVar4 + dVar31;
            if (dVar31 < 0.0) {
              dVar31 = sqrt(dVar31);
            }
            else {
              dVar31 = SQRT(dVar31);
            }
            dVar31 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)-dVar31 |
                             (ulonglong)dVar31 & -(ulonglong)(dVar4 < 0.0));
            *(undefined8 *)(local_168 + (longlong)*piVar7 * 8) = 0x3ff0000000000000;
            lVar26 = 1;
            do {
              lVar9 = (longlong)piVar7[lVar26];
              *(double *)(local_168 + lVar9 * 8) =
                   *(double *)(local_168 + lVar9 * 8) / (dVar4 - dVar31);
              lVar26 = lVar26 + 1;
            } while (lVar27 != lVar26);
            dVar29 = (dVar31 - dVar4) / dVar31;
          }
          cVar19 = '\0';
          uVar24 = 0;
          if (0 < lVar15) goto LAB_1483d11df;
        }
        else {
          dVar31 = 0.0;
          uVar24 = (undefined4)CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
          dVar29 = 0.0;
LAB_1483d11df:
          local_1a8 = CONCAT44(local_1a8._4_4_,uVar24);
          local_1d0 = local_200 + 0x98;
          local_1e8 = lVar27;
          do {
            puVar25 = local_200;
            iVar13 = *(int *)(local_190 + lVar15 * 4);
            if (iVar13 < iVar23) {
              uVar30 = *(undefined8 *)(local_168 + (longlong)iVar13 * 8);
              iVar23 = *(int *)(*(longlong *)(local_200 + 0x88) + 4 + uVar18 * 4);
              *(int *)(*(longlong *)(local_200 + 0x88) + 4 + uVar18 * 4) = iVar23 + 1;
              lVar16 = *(longlong *)(local_200 + 0xa8);
              FUN_146de554a(local_1d0,lVar16 + 1);
              *(undefined8 *)(*(longlong *)(puVar25 + 0x98) + lVar16 * 8) = 0;
              *(int *)(*(longlong *)(puVar25 + 0xa0) + lVar16 * 4) = iVar13;
              *(undefined8 *)(*(longlong *)(puVar25 + 0x98) + (longlong)iVar23 * 8) = uVar30;
              *(undefined8 *)(local_168 + (longlong)iVar13 * 8) = 0;
              lVar16 = local_1c8;
              lVar27 = local_1e8;
              iVar23 = local_1dc;
            }
            lVar15 = lVar15 + -1;
          } while (0 < lVar15);
          cVar19 = (char)local_1a8;
        }
        puVar25 = local_200;
        lVar9 = lVar16;
        if ((cVar19 != '\0') || (ABS(dVar31) < dVar2)) goto LAB_1483d10f7;
        iVar13 = *(int *)(*(longlong *)(local_200 + 0x88) + 4 + uVar18 * 4);
        *(int *)(*(longlong *)(local_200 + 0x88) + 4 + uVar18 * 4) = iVar13 + 1;
        lVar26 = *(longlong *)(local_200 + 0xa8);
        FUN_146de554a(local_200 + 0x98,lVar26 + 1);
        piVar7 = local_1f0;
        *(undefined8 *)(*(longlong *)(puVar25 + 0x98) + lVar26 * 8) = 0;
        *(int *)(*(longlong *)(puVar25 + 0xa0) + lVar26 * 4) = iVar23;
        *(double *)(*(longlong *)(puVar25 + 0x98) + (longlong)iVar13 * 8) = dVar31;
        *(double *)(*(longlong *)(puVar25 + 0x100) + local_1b8 * 8) = dVar29;
        if (0 < lVar27) {
          local_1d0 = puVar25 + 0xe0;
          lVar26 = 0;
          local_1e8 = lVar27;
          do {
            iVar23 = piVar7[lVar26];
            uVar30 = *(undefined8 *)(local_168 + (longlong)iVar23 * 8);
            iVar13 = *(int *)(*(longlong *)(puVar25 + 0xd0) + 4 + local_1b8 * 4);
            *(int *)(*(longlong *)(puVar25 + 0xd0) + 4 + local_1b8 * 4) = iVar13 + 1;
            lVar9 = *(longlong *)(local_200 + 0xf0);
            FUN_146de554a(local_1d0,lVar9 + 1);
            *(undefined8 *)(*(longlong *)(local_200 + 0xe0) + lVar9 * 8) = 0;
            *(int *)(*(longlong *)(local_200 + 0xe8) + lVar9 * 4) = iVar23;
            *(undefined8 *)(*(longlong *)(local_200 + 0xe0) + (longlong)iVar13 * 8) = uVar30;
            *(undefined8 *)(local_168 + (longlong)iVar23 * 8) = 0;
            lVar26 = lVar26 + 1;
            puVar25 = local_200;
          } while (local_1e8 != lVar26);
        }
        iVar23 = local_1dc + 1;
        plVar28 = local_1b0;
        if (iVar23 < (int)local_1f4) {
          *(undefined4 *)(*(longlong *)(puVar25 + 0xd0) + 4 + (longlong)iVar23 * 4) =
               *(undefined4 *)(*(longlong *)(puVar25 + 0xd0) + (longlong)iVar23 * 4);
        }
      }
      uVar18 = uVar18 + 1;
      lVar9 = lVar16;
      puVar11 = puVar25;
    } while (uVar18 != ((uint)local_1d8 & 0x7fffffff));
  }
  lVar16 = local_1d8;
  local_128 = puVar11 + 0x100;
  local_138 = (ulonglong)(int)(local_1f4 - iVar23);
  lStack_110 = *(longlong *)(puVar11 + 0x108);
  puStack_120 = (undefined1 *)(lStack_110 - local_138);
  local_140 = (longlong)puStack_120 * 8 + *(longlong *)(puVar11 + 0x100);
  local_f0 = local_c0;
  local_c0[0] = 0;
  local_f8 = local_d8;
  local_e8 = (longlong *)&local_141;
  local_e0 = &local_140;
  local_d8[0] = local_140;
  local_c8 = lStack_110;
  FUN_1483c314c();
  if ((*(longlong *)(puVar11 + 0xd8) == 0) && (lVar26 = *(longlong *)(puVar11 + 0xc0), -1 < lVar26))
  {
    uVar24 = *(undefined4 *)(puVar11 + 0xf0);
    lVar27 = lVar26;
    do {
      if (*(int *)(*(longlong *)(puVar11 + 0xd0) + lVar27 * 4) != 0) goto LAB_1483d0f05;
      bVar5 = 0 < lVar27;
      lVar27 = lVar27 + -1;
    } while (bVar5);
    lVar27 = -1;
LAB_1483d0f05:
    if (lVar27 < lVar26) {
      do {
        *(undefined4 *)(*(longlong *)(puVar11 + 0xd0) + 4 + lVar27 * 4) = uVar24;
        lVar27 = lVar27 + 1;
      } while (lVar27 < *(longlong *)(puVar11 + 0xc0));
    }
  }
  puVar25 = puVar11 + 0x70;
  FUN_14834db6e(local_1a0);
  if ((*(longlong *)(puVar11 + 0x90) == 0) && (lVar26 = *(longlong *)(puVar11 + 0x78), -1 < lVar26))
  {
    uVar24 = *(undefined4 *)(puVar11 + 0xa8);
    lVar27 = lVar26;
    do {
      if (*(int *)(*(longlong *)(puVar11 + 0x88) + lVar27 * 4) != 0) goto LAB_1483d0f70;
      bVar5 = 0 < lVar27;
      lVar27 = lVar27 + -1;
    } while (bVar5);
    lVar27 = -1;
LAB_1483d0f70:
    if (lVar27 < lVar26) {
      do {
        *(undefined4 *)(*(longlong *)(puVar11 + 0x88) + 4 + lVar27 * 4) = uVar24;
        lVar27 = lVar27 + 1;
      } while (lVar27 < *(longlong *)(puVar11 + 0x78));
    }
  }
  FUN_14834db6e(puVar25);
  puVar11[0x178] = 0;
  *(longlong *)(puVar11 + 0x150) = (longlong)iVar23;
  if (iVar23 < (int)lVar16) {
    lVar26 = 0;
    local_140 = local_140 & 0xffffffffffffff00;
    local_138 = 0;
    uStack_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    puStack_120 = (undefined1 *)0x0;
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    FUN_146de5a4e(&local_140,puVar25);
    local_f8 = (ulonglong *)((ulonglong)local_f8 & 0xffffffffffffff00);
    local_f0 = &local_140;
    local_e8 = plVar28;
    FUN_1483d1426(puVar25);
    lVar16 = *(longlong *)(puVar11 + 0x138);
    if (0 < lVar16) {
      lVar26 = FUN_141729f83(lVar16);
      lVar27 = 0;
      do {
        *(undefined4 *)(lVar26 + lVar27 * 4) =
             *(undefined4 *)
              (*(longlong *)(local_200 + 0x130) +
              (longlong)*(int *)(*(longlong *)(local_200 + 0x120) + lVar27 * 4) * 4);
        lVar27 = lVar27 + 1;
      } while (lVar16 != lVar27);
    }
    puVar11 = local_200;
    uVar30 = *(undefined8 *)(local_200 + 0x130);
    *(longlong *)(local_200 + 0x130) = lVar26;
    *(longlong *)(local_200 + 0x138) = lVar16;
    FUN_1400020a8(uVar30);
    FUN_146de5508(&local_140);
  }
  *puVar11 = 1;
  puVar11[2] = 1;
  uVar24 = 0;
LAB_1483d0d2b:
  *(undefined4 *)(puVar11 + 4) = uVar24;
  FUN_1400020a8(local_168);
  FUN_1400020a8(local_1f0);
  FUN_1400020a8(lVar9);
  FUN_1400020a8(local_158);
  if ((local_b0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d1362 FUN_1483d1362 body=195 status=ok
// SIG undefined FUN_1483d1362(void)

longlong * FUN_1483d1362(longlong *param_1,ulonglong param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar8 = *param_4;
  iVar6 = iVar8;
  if (param_2 != 1) {
    iVar6 = *param_3;
  }
  iVar10 = (int)param_2;
  iVar7 = 1;
  if (1 < (longlong)param_2) {
    iVar7 = iVar10 + -1;
  }
  bVar2 = 1 < (longlong)param_2;
  iVar4 = iVar8 - iVar6;
  iVar9 = -iVar10;
  if (iVar6 <= iVar8) {
    iVar9 = iVar10;
  }
  iVar8 = -iVar4;
  if (-iVar4 < 0) {
    iVar8 = iVar4;
  }
  bVar11 = iVar8 + 1U < param_2;
  if (param_1[1] != param_2) {
    FUN_146de062c(param_1,param_2,1);
    param_2 = param_1[1];
  }
  if (0 < (longlong)param_2) {
    lVar1 = *param_1;
    iVar10 = 0;
    uVar5 = 0;
    do {
      iVar3 = iVar10;
      if (bVar2 && bVar11) {
        iVar3 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff)
                     / (longlong)((iVar4 + iVar9) / (int)(iVar8 + 1U)));
      }
      *(int *)(lVar1 + uVar5 * 4) = iVar3 + iVar6;
      uVar5 = uVar5 + 1;
      iVar10 = iVar10 + iVar4 / iVar7;
    } while (param_2 != uVar5);
  }
  return param_1;
}



// FUNCTION 1483d1426 FUN_1483d1426 body=264 status=ok
// SIG undefined FUN_1483d1426(void)

longlong FUN_1483d1426(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_146de45bc(local_68,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10),
                *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8));
  FUN_1483d16c4(local_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_38;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_30;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_28;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = uVar1;
  uStack_48 = uVar4;
  local_40 = uVar5;
  uStack_38 = uVar6;
  local_30 = uVar7;
  uStack_28 = uVar8;
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d1530 FUN_1483d1530 body=128 status=ok
// SIG undefined FUN_1483d1530(void)

void FUN_1483d1530(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [3];
  longlong local_28;
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1483d15b2(local_40,param_1 + 8);
  dVar2 = 0.0;
  if (local_28 < local_20) {
    do {
      local_28 = local_28 + 1;
      dVar1 = *(double *)(local_40[0] + -8 + local_28 * 8);
      dVar2 = dVar2 + dVar1 * dVar1;
    } while (local_28 != local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar2);
  }
  return;
}



// FUNCTION 1483d15b2 FUN_1483d15b2 body=134 status=ok
// SIG undefined FUN_1483d15b2(void)

undefined8 * FUN_1483d15b2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x28);
  param_1[1] = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x10) * 4 +
                  *(longlong *)(*(longlong *)(param_2 + 8) + 0x18));
  if (piVar2 == (int *)0x0) {
    param_1[3] = 0;
    lVar3 = FUN_1483d1638(param_2);
  }
  else {
    lVar3 = (longlong)*piVar2;
    param_1[3] = lVar3;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
    if ((lVar1 == 0) ||
       (piVar2 = (int *)(lVar1 + *(longlong *)(param_2 + 0x10) * 4), piVar2 == (int *)0x0)) {
      lVar3 = (longlong)
              *(int *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x18) + 4 +
                      *(longlong *)(param_2 + 0x10) * 4);
    }
    else {
      lVar3 = *piVar2 + lVar3;
    }
  }
  param_1[4] = lVar3;
  return param_1;
}



// FUNCTION 1483d1638 FUN_1483d1638 body=139 status=ok
// SIG undefined FUN_1483d1638(void)

longlong FUN_1483d1638(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  undefined8 local_38;
  longlong local_20 [2];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  lVar1 = lVar3 + lVar2 * 4;
  if (lVar1 == 0 || lVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    iVar4 = *(int *)(lVar1 + 4 + lVar2 * 4) - *(int *)(lVar1 + lVar2 * 4);
  }
  else {
    local_38 = 1;
    local_10 = 1;
    local_40 = lVar1;
    local_20[0] = lVar1;
    iVar4 = FUN_146ddd0fe(local_20,&local_41);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (longlong)iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d16c4 FUN_1483d16c4 body=450 status=ok
// SIG undefined FUN_1483d16c4(void)

void FUN_1483d16c4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8[0] = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_e0 = param_1;
  FUN_146de45bc(local_c8,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  lVar5 = *(longlong *)(param_3 + 8);
  local_d8 = 0;
  lStack_d0 = 0;
  lVar8 = lStack_d0;
  if (((lVar5 != 0) && (lVar8 = lVar5, 0 < lVar5)) &&
     (lVar6 = FUN_141729f83(lVar5), local_d8 = lVar6, 0 < *(longlong *)(param_3 + 8))) {
    lVar7 = 0;
    lStack_d0 = lVar5;
    do {
      local_70 = (longlong)*(int *)(*param_2 + lVar7 * 4);
      local_80[0] = 0;
      local_78 = param_3;
      uVar3 = FUN_1483a1788(local_80);
      *(undefined4 *)(lVar6 + lVar7 * 4) = uVar3;
      lVar7 = lVar7 + 1;
      lVar8 = lStack_d0;
    } while (lVar7 < *(longlong *)(param_3 + 8));
  }
  lStack_d0 = lVar8;
  FUN_146de64cc(local_c8,&local_d8);
  lVar5 = *(longlong *)(param_3 + 8);
  if (0 < lVar5) {
    lVar8 = 0;
    do {
      lVar6 = (longlong)*(int *)(*param_2 + lVar8 * 4);
      lVar7 = (longlong)*(int *)(*(longlong *)(param_3 + 0x18) + lVar6 * 4);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_3 + 0x18) + 4 + lVar6 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_3 + 0x20) + lVar6 * 4) + lVar7;
      }
      if (lVar7 < lVar6) {
        lVar5 = *(longlong *)(param_3 + 0x28);
        lVar2 = *(longlong *)(param_3 + 0x30);
        do {
          uVar1 = *(undefined8 *)(lVar5 + lVar7 * 8);
          puVar4 = (undefined8 *)FUN_1483d1888(local_c8,(longlong)*(int *)(lVar2 + lVar7 * 4),lVar8)
          ;
          *puVar4 = uVar1;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar5 = *(longlong *)(param_3 + 8);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar5);
  }
  FUN_146de5a4e(local_e0,local_c8);
  FUN_1400020a8(local_d8);
  FUN_146de5508(local_c8);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d1888 FUN_1483d1888 body=804 status=ok
// SIG undefined FUN_1483d1888(void)

undefined8 * FUN_1483d1888(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar4 = FUN_146de5690(param_1);
    if (lVar4 == 0) {
      if ((*(longlong *)(param_1 + 0x40) == 0) &&
         (lVar4 = *(longlong *)(param_1 + 0x10) * 2, lVar8 = lVar4 + *(longlong *)(param_1 + 0x38),
         lVar8 != 0 && SCARRY8(lVar4,*(longlong *)(param_1 + 0x38)) == lVar8 < 0)) {
        FUN_146de55aa(param_1 + 0x28);
      }
      lVar4 = *(longlong *)(param_1 + 8) * 4;
      _Dst = (void *)FUN_14001cc68(lVar4 + (ulonglong)(lVar4 == 0));
      *(void **)(param_1 + 0x20) = _Dst;
      if (_Dst == (void *)0x0) {
        FUN_14001cc68(0xffffffffffffffff);
        _Dst = *(void **)(param_1 + 0x20);
      }
      memset(_Dst,0,*(longlong *)(param_1 + 8) << 2);
      if (0 < *(longlong *)(param_1 + 8)) {
        uVar3 = *(undefined4 *)(param_1 + 0x40);
        lVar4 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4 * 4) = uVar3;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(longlong *)(param_1 + 8));
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 8) * 4;
      lVar4 = FUN_14001cc68(lVar4 + (ulonglong)(lVar4 == 0),0x10);
      *(longlong *)(param_1 + 0x20) = lVar4;
      if (lVar4 == 0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
      }
      if (0 < *(longlong *)(param_1 + 8)) {
        lVar4 = 0;
        do {
          *(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4) =
               *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4 * 4) -
               *(int *)(*(longlong *)(param_1 + 0x18) + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(longlong *)(param_1 + 8));
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x40);
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + param_3 * 4);
  if (lVar4 != lVar8) {
    if (lVar4 == *(int *)(*(longlong *)(param_1 + 0x18) + 4 + param_3 * 4)) {
      lVar7 = *(longlong *)(param_1 + 0x38);
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4);
      if (lVar7 == lVar8 + iVar10) {
        *(int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4) = iVar10 + 1;
        FUN_146de554a(plVar1,*(longlong *)(param_1 + 0x38) + 1,0);
        lVar8 = *(longlong *)(param_1 + 0x40);
        if ((lVar4 != lVar8) &&
           (lVar7 = *(longlong *)(param_1 + 8), lVar9 = param_3, param_3 < lVar7)) {
          do {
            if (lVar4 == *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4)) {
              *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = (int)lVar8;
              lVar7 = *(longlong *)(param_1 + 8);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < lVar7);
        }
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x18) + param_3 * 4);
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4) + iVar10 + -1;
        lVar8 = (longlong)iVar6;
        lVar4 = (longlong)iVar6;
        if (iVar10 < iVar6) {
          do {
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + -4 + lVar8 * 4);
            lVar4 = lVar8;
            if (iVar6 <= param_2) break;
            lVar4 = lVar8 + -1;
            *(int *)(*(longlong *)(param_1 + 0x30) + lVar8 * 4) = iVar6;
            *(undefined8 *)(*plVar1 + lVar8 * 8) = *(undefined8 *)(*plVar1 + -8 + lVar8 * 8);
            lVar8 = lVar4;
          } while (iVar10 < lVar4);
        }
        *(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) = (int)param_2;
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
        *puVar5 = 0;
        goto LAB_1483d1a5f;
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x38);
    }
    if (lVar7 != lVar4) {
      FUN_146de554a(plVar1,lVar4,0);
      local_50 = *(undefined8 *)(param_1 + 8);
      local_44 = 2;
      FUN_1483d1bca(param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  iVar10 = (int)*(undefined8 *)(param_1 + 0x38);
  if (-1 < param_3) {
    lVar8 = param_3 + 1;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar8 * 4) != 0) break;
      *(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar8 * 4) = iVar10;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4);
  *piVar2 = *piVar2 + 1;
  lVar8 = *(longlong *)(param_1 + 0x38);
  FUN_146de554a(plVar1,lVar8 + 1,0x3ff0000000000000);
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8) = 0;
  *(int *)(*(longlong *)(param_1 + 0x30) + lVar8 * 4) = (int)param_2;
  lVar8 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != lVar8) && (lVar7 = *(longlong *)(param_1 + 8), param_3 < lVar7)) {
    do {
      if (lVar4 == *(int *)(*(longlong *)(param_1 + 0x18) + 4 + param_3 * 4)) {
        *(int *)(*(longlong *)(param_1 + 0x18) + 4 + param_3 * 4) = (int)lVar8;
        lVar7 = *(longlong *)(param_1 + 8);
      }
      param_3 = param_3 + 1;
    } while (param_3 < lVar7);
  }
  puVar5 = (undefined8 *)((longlong)iVar10 * 8 + *plVar1);
LAB_1483d1a5f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1483d1bca FUN_1483d1bca body=708 status=ok
// SIG undefined FUN_1483d1bca(void)

void FUN_1483d1bca(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar10 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar10 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar10;
    if (lVar10 == 0) {
      FUN_14001cc68();
      lVar10 = *(longlong *)(param_1 + 0x20);
    }
    lVar7 = *(longlong *)(param_1 + 8);
    iVar8 = 0;
    lVar11 = 0;
    if (0 < lVar7) {
      lVar12 = 0;
      do {
        *(int *)(lVar10 + lVar12 * 4) = iVar8;
        lVar7 = *(longlong *)(param_1 + 8);
        iVar8 = (iVar8 + *(int *)(param_2 + 0x14) +
                *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar12 * 4)) -
                *(int *)(*(longlong *)(param_1 + 0x18) + lVar12 * 4);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + *(int *)(param_2 + 0x14);
      } while (lVar12 < lVar7);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar11 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
      lVar7 = *(longlong *)(param_1 + 8);
    }
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar7) {
      iVar8 = *(int *)(lVar11 + lVar7 * 4);
      do {
        lVar11 = lVar7 + -1;
        lVar12 = *(longlong *)(param_1 + 0x18);
        iVar1 = *(int *)(lVar12 + -4 + lVar7 * 4);
        iVar9 = iVar8 - iVar1;
        bVar6 = iVar1 <= iVar8;
        iVar8 = iVar1;
        if (iVar9 != 0 && bVar6) {
          lVar12 = (ulonglong)(iVar9 - 1) << 2;
          do {
            *(undefined4 *)
             (lVar12 + *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 4)
                 = *(undefined4 *)
                    (lVar12 + *(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 8 +
             lVar12 * 2) = *(undefined8 *)
                            (*(longlong *)(param_1 + 0x28) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 +
                            lVar12 * 2);
            lVar12 = lVar12 + -4;
          } while (lVar12 != -4);
          lVar12 = *(longlong *)(param_1 + 0x18);
          iVar8 = *(int *)(lVar12 + lVar11 * 4);
        }
        *(undefined4 *)(lVar12 + lVar11 * 4) = *(undefined4 *)(lVar10 + lVar11 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4) = iVar9;
        bVar6 = 1 < lVar7;
        lVar7 = lVar11;
      } while (bVar6);
      lVar7 = *(longlong *)(param_1 + 8);
      lVar11 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar7) {
        *(int *)(lVar11 + lVar7 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar7 * 4) +
             *(int *)(lVar11 + -4 + lVar7 * 4) + *(int *)(param_2 + 0x14);
        lVar7 = *(longlong *)(param_1 + 8);
        lVar11 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de554a(param_1 + 0x28,(longlong)*(int *)(lVar11 + lVar7 * 4),0);
    return;
  }
  lVar10 = FUN_14001cc68(lVar10 + 4 + (ulonglong)(lVar10 == -4),0x10);
  if (lVar10 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar7 = *(longlong *)(param_1 + 8);
  iVar8 = 0;
  if (0 < lVar7) {
    piVar4 = *(int **)(param_1 + 0x18);
    lVar12 = *(longlong *)(param_1 + 0x20);
    iVar1 = *(int *)(param_2 + 0x14);
    lVar11 = 0;
    iVar8 = 0;
    iVar9 = *piVar4;
    do {
      *(int *)(lVar10 + lVar11 * 4) = iVar8;
      iVar2 = piVar4[lVar11 + 1];
      iVar3 = *(int *)(lVar12 + lVar11 * 4);
      lVar11 = lVar11 + 1;
      iVar9 = iVar2 - (iVar9 + iVar3);
      if (iVar9 < iVar1) {
        iVar9 = iVar1;
      }
      iVar8 = iVar3 + iVar8 + iVar9;
      iVar9 = iVar2;
    } while (lVar7 != lVar11);
  }
  *(int *)(lVar10 + lVar7 * 4) = iVar8;
  FUN_146de554a(param_1 + 0x28,(longlong)iVar8,0);
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar11 = lVar7 + -1;
      iVar8 = *(int *)(lVar10 + -4 + lVar7 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar7 * 4) < iVar8) &&
         (iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4), 0 < iVar1)) {
        lVar12 = (ulonglong)(iVar1 - 1) << 2;
        do {
          *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 4) =
               *(undefined4 *)
                (lVar12 + *(longlong *)(param_1 + 0x30) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8 + lVar12 * 2) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 + lVar12 * 2);
          lVar12 = lVar12 + -4;
        } while (lVar12 != -4);
      }
      bVar6 = 1 < lVar7;
      lVar7 = lVar11;
    } while (bVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar10;
  FUN_1400020a8(uVar5);
  return;
}



// FUNCTION 1483d1f80 FUN_1483d1f80 body=780 status=ok
// SIG undefined FUN_1483d1f80(void)

void FUN_1483d1f80(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  
  lVar8 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar8 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar8;
    if (lVar8 == 0) {
      FUN_14001cc68();
      lVar8 = *(longlong *)(param_1 + 0x20);
    }
    lVar6 = *(longlong *)(param_1 + 8);
    lVar9 = 0;
    if (0 < lVar6) {
      iVar10 = 0;
      lVar12 = 0;
      do {
        *(int *)(lVar8 + lVar12 * 4) = iVar10;
        lVar6 = *(longlong *)(param_1 + 8);
        iVar1 = param_2[1];
        lVar13 = (longlong)iVar1;
        if (lVar12 != *param_2) {
          lVar13 = 0;
          iVar1 = 0;
        }
        iVar10 = (iVar1 + iVar10 + *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar12 * 4)) -
                 *(int *)(*(longlong *)(param_1 + 0x18) + lVar12 * 4);
        lVar12 = lVar12 + 1;
        lVar9 = lVar9 + lVar13;
      } while (lVar12 < lVar6);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar9 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
      lVar6 = *(longlong *)(param_1 + 8);
    }
    lVar9 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar6) {
      iVar10 = *(int *)(lVar9 + lVar6 * 4);
      do {
        lVar9 = lVar6 + -1;
        lVar12 = *(longlong *)(param_1 + 0x18);
        iVar1 = *(int *)(lVar12 + -4 + lVar6 * 4);
        iVar7 = iVar10 - iVar1;
        bVar15 = iVar1 <= iVar10;
        iVar10 = iVar1;
        if (iVar7 != 0 && bVar15) {
          lVar12 = (ulonglong)(iVar7 - 1) << 2;
          do {
            *(undefined4 *)
             (lVar12 + *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar8 + lVar9 * 4) * 4) =
                 *(undefined4 *)
                  (lVar12 + *(longlong *)(param_1 + 0x30) +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar8 + lVar9 * 4) * 8 + lVar12 * 2
             ) = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x28) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) * 8 + lVar12 * 2);
            lVar12 = lVar12 + -4;
          } while (lVar12 != -4);
          lVar12 = *(longlong *)(param_1 + 0x18);
          iVar10 = *(int *)(lVar12 + lVar9 * 4);
        }
        *(undefined4 *)(lVar12 + lVar9 * 4) = *(undefined4 *)(lVar8 + lVar9 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4) = iVar7;
        bVar15 = 1 < lVar6;
        lVar6 = lVar9;
      } while (bVar15);
      lVar6 = *(longlong *)(param_1 + 8);
      lVar9 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar6) {
        iVar10 = 0;
        if (lVar6 + -1 == (longlong)*param_2) {
          iVar10 = param_2[1];
        }
        *(int *)(lVar9 + lVar6 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar6 * 4) +
             *(int *)(lVar9 + -4 + lVar6 * 4) + iVar10;
        lVar6 = *(longlong *)(param_1 + 8);
        lVar9 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de554a(param_1 + 0x28,(longlong)*(int *)(lVar9 + lVar6 * 4),0);
    return;
  }
  lVar8 = FUN_14001cc68(lVar8 + 4 + (ulonglong)(lVar8 == -4),0x10);
  if (lVar8 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  iVar10 = 0;
  if (0 < lVar6) {
    piVar4 = *(int **)(param_1 + 0x18);
    lVar12 = *(longlong *)(param_1 + 0x20);
    iVar1 = *param_2;
    iVar7 = param_2[1];
    lVar9 = 0;
    iVar10 = 0;
    iVar11 = *piVar4;
    do {
      *(int *)(lVar8 + lVar9 * 4) = iVar10;
      iVar2 = piVar4[lVar9 + 1];
      iVar3 = *(int *)(lVar12 + lVar9 * 4);
      iVar14 = iVar2 - (iVar11 + iVar3);
      bVar15 = iVar1 == lVar9;
      lVar9 = lVar9 + 1;
      iVar11 = 0;
      if (bVar15) {
        iVar11 = iVar7;
      }
      if (iVar11 <= iVar14) {
        iVar11 = iVar14;
      }
      iVar10 = iVar3 + iVar10 + iVar11;
      iVar11 = iVar2;
    } while (lVar6 != lVar9);
  }
  *(int *)(lVar8 + lVar6 * 4) = iVar10;
  FUN_146de554a(param_1 + 0x28,(longlong)iVar10,0);
  lVar6 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar9 = lVar6 + -1;
      iVar10 = *(int *)(lVar8 + -4 + lVar6 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar6 * 4) < iVar10) &&
         (iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4), 0 < iVar1)) {
        lVar12 = (ulonglong)(iVar1 - 1) << 2;
        do {
          *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 4) =
               *(undefined4 *)
                (lVar12 + *(longlong *)(param_1 + 0x30) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) * 4);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 8 + lVar12 * 2) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) * 8 + lVar12 * 2);
          lVar12 = lVar12 + -4;
        } while (lVar12 != -4);
      }
      bVar15 = 1 < lVar6;
      lVar6 = lVar9;
    } while (bVar15);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar8;
  FUN_1400020a8(uVar5);
  return;
}


