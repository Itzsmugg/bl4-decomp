// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147946c6c FUN_147946c6c body=172 status=ok
// SIG undefined FUN_147946c6c(void)

void FUN_147946c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar2;
  if (iVar2 < *(int *)(param_2 + 2)) {
    do {
      uVar4 = *(undefined8 *)(param_2[1] + (longlong)iVar2 * 0x18);
      uVar1 = *(undefined8 *)(param_2[1] + 0x10 + (longlong)iVar2 * 0x18);
      iVar2 = FUN_147946a12(*param_1,uVar4);
      uVar5 = *param_1;
      uVar3 = FUN_145cd0626();
      uVar4 = FUN_14792a902(uVar5,uVar3,uVar4);
      FUN_14792fa86(*param_2,*(undefined4 *)
                              (param_2[1] + 8 + (longlong)*(int *)(param_2 + 3) * 0x18));
      if (iVar2 == -1) {
        uVar5 = FUN_145cd0626();
        FUN_1449b16b6(uVar5,uVar4,uVar1,1);
      }
      iVar2 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar2;
    } while (iVar2 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147946d18 FUN_147946d18 body=186 status=ok
// SIG undefined FUN_147946d18(void)

void FUN_147946d18(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_147947038(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_1479475ee();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946dd4 FUN_147946dd4 body=191 status=ok
// SIG undefined FUN_147946dd4(void)

void FUN_147946dd4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_68 = param_1;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_147947780(&local_68,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_68 = param_3;
  local_58 = param_2;
  FUN_147947b2e();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946e94 FUN_147946e94 body=91 status=ok
// SIG undefined FUN_147946e94(void)

void FUN_147946e94(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147947d16(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946ef0 FUN_147946ef0 body=91 status=ok
// SIG undefined FUN_147946ef0(void)

void FUN_147946ef0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147947e74(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946f4c FUN_147946f4c body=91 status=ok
// SIG undefined FUN_147946f4c(void)

void FUN_147946f4c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_14794800c(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147946fa8 FUN_147946fa8 body=144 status=ok
// SIG undefined FUN_147946fa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147946fa8(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pdVar6 = param_5;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_2;
    param_2 = param_2 + 1;
    pdVar6 = pdVar6 + 1;
  }
  FUN_14794811e(param_5,param_3);
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar4 = param_5[3];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar10 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar11 = divpd(_DAT_149934d80,auVar9);
  auVar12._0_8_ = auVar11._0_8_ * dVar3;
  auVar12._8_8_ = auVar11._8_8_ * dVar4;
  auVar9._8_8_ = -(ulonglong)(1e-08 <= auVar8._8_8_);
  auVar9._0_8_ = -(ulonglong)(1e-08 <= auVar8._0_8_);
  auVar9 = blendvpd(_DAT_149935300,auVar12,auVar9);
  *param_5 = (double)((ulonglong)(dVar1 * auVar11._0_8_) & -(ulonglong)(1e-08 <= auVar8._0_8_));
  param_5[1] = (double)((ulonglong)(dVar2 * auVar11._8_8_) & -(ulonglong)(1e-08 <= auVar8._8_8_));
  *(undefined1 (*) [16])(param_5 + 2) = auVar9;
  return;
}



// FUNCTION 147947038 FUN_147947038 body=399 status=ok
// SIG undefined FUN_147947038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147947038(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
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
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar23 = *(undefined8 *)(param_2[1] + 0x20);
  cVar14 = FUN_1479381c0(uVar23);
  uVar1 = *param_1;
  uVar16 = FUN_145cd0b36();
  pdVar17 = (double *)FUN_14792a902(uVar1,uVar16,uVar23);
  if (cVar14 == '\0') {
    pdVar20 = *(double **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2[1] + 0x2c) * 8);
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar17 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar17 = pdVar17 + 1;
    }
  }
  else {
    while( true ) {
      iVar15 = (int)param_2[2] + 1;
      *(int *)(param_2 + 2) = iVar15;
      plVar2 = (longlong *)param_2[1];
      if ((int)plVar2[1] <= iVar15) break;
      pdVar20 = *(double **)(*plVar2 + (longlong)iVar15 * 8);
      uVar23 = FUN_14792fa86(*param_2,*(undefined4 *)(plVar2[2] + (longlong)iVar15 * 4));
      if ((int)param_2[2] == 0) {
        pdVar19 = pdVar20;
        pdVar21 = pdVar17;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *pdVar21 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar21 = pdVar21 + 1;
        }
        dVar3 = (double)(float)uVar23;
        dVar4 = (double)(float)uVar23;
        dVar5 = pdVar20[8];
        dVar6 = pdVar20[9];
        dVar24 = pdVar20[10];
        dVar27 = pdVar20[0xb];
        dVar7 = pdVar20[4];
        dVar8 = pdVar20[5];
        dVar9 = pdVar20[6];
        dVar10 = pdVar20[7];
        dVar11 = pdVar20[1];
        dVar12 = pdVar20[2];
        dVar13 = pdVar20[3];
        *pdVar17 = *pdVar20 * dVar3;
        pdVar17[1] = dVar11 * dVar4;
        auVar28._8_4_ = SUB84(dVar4 * dVar13,0);
        auVar28._0_8_ = dVar3 * dVar12;
        auVar28._12_4_ = (int)((ulonglong)(dVar4 * dVar13) >> 0x20);
        *(undefined1 (*) [16])(pdVar17 + 2) = auVar28;
        pdVar17[4] = dVar7 * dVar3;
        pdVar17[5] = dVar8 * dVar4;
        pdVar17[6] = dVar9 * dVar3;
        pdVar17[7] = dVar10 * dVar4;
        pdVar17[8] = dVar5 * dVar3;
        pdVar17[9] = dVar6 * dVar4;
        pdVar17[10] = dVar24 * dVar3;
        pdVar17[0xb] = dVar27 * dVar4;
      }
      else {
        FUN_1479471c8(pdVar17,pdVar20,uVar23,*(undefined4 *)(*param_2 + 0x48));
      }
    }
    dVar3 = *pdVar17;
    dVar4 = pdVar17[1];
    dVar5 = pdVar17[2];
    dVar6 = pdVar17[3];
    dVar24 = dVar5 * dVar5 + dVar3 * dVar3;
    dVar27 = dVar6 * dVar6 + dVar4 * dVar4;
    auVar25._0_8_ = dVar24 + dVar27;
    auVar25._8_8_ = dVar24 + dVar27;
    uVar22 = -(ulonglong)(1e-08 <= auVar25._8_8_);
    auVar26 = sqrtpd(auVar25,auVar25);
    auVar28 = divpd(_DAT_149934d80,auVar26);
    auVar29._0_8_ = auVar28._0_8_ * dVar5;
    auVar29._8_8_ = auVar28._8_8_ * dVar6;
    auVar26._8_4_ = (int)uVar22;
    auVar26._0_8_ = -(ulonglong)(1e-08 <= auVar25._0_8_);
    auVar26._12_4_ = (int)(uVar22 >> 0x20);
    auVar26 = blendvpd(_DAT_149935300,auVar29,auVar26);
    *pdVar17 = (double)((ulonglong)(dVar3 * auVar28._0_8_) & -(ulonglong)(1e-08 <= auVar25._0_8_));
    pdVar17[1] = (double)((ulonglong)(dVar4 * auVar28._8_8_) & uVar22);
    *(undefined1 (*) [16])(pdVar17 + 2) = auVar26;
  }
  return;
}



// FUNCTION 1479471c8 FUN_1479471c8 body=1061 status=ok
// SIG undefined FUN_1479471c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479471c8(undefined1 (*param_1) [16],double *param_2,float param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  double dVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  if (param_4 == 0) {
    dVar24 = (double)param_3;
    dVar26 = (double)param_3;
    dVar29 = *param_2 * dVar24;
    dVar23 = param_2[1] * dVar26;
    dVar42 = param_2[2] * dVar24;
    dVar36 = param_2[3] * dVar26;
    dVar39 = *(double *)(*param_1 + 8);
    dVar22 = *(double *)param_1[1];
    dVar25 = *(double *)(param_1[1] + 8);
    dVar38 = dVar42 * dVar22 + dVar29 * *(double *)*param_1;
    dVar32 = dVar36 * dVar25 + dVar23 * dVar39;
    lVar17 = -(ulonglong)(0.0 <= dVar38 + dVar32);
    lVar19 = -(ulonglong)(0.0 <= dVar38 + dVar32);
    uVar20 = (undefined4)lVar19;
    uVar21 = (undefined4)((ulonglong)lVar19 >> 0x20);
    auVar31._0_8_ = 0.0 - dVar29;
    auVar31._8_8_ = 0.0 - dVar23;
    auVar37._8_4_ = uVar20;
    auVar37._0_8_ = lVar17;
    auVar37._12_4_ = uVar21;
    auVar10._8_4_ = SUB84(dVar23,0);
    auVar10._0_8_ = dVar29;
    auVar10._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar37 = blendvpd(auVar31,auVar10,auVar37);
    auVar34._0_8_ = 0.0 - dVar42;
    auVar34._8_8_ = 0.0 - dVar36;
    auVar40._8_4_ = uVar20;
    auVar40._0_8_ = lVar17;
    auVar40._12_4_ = uVar21;
    auVar12._8_8_ = dVar36;
    auVar12._0_8_ = dVar42;
    auVar40 = blendvpd(auVar34,auVar12,auVar40);
    *(double *)*param_1 = auVar37._0_8_ + *(double *)*param_1;
    *(double *)(*param_1 + 8) = auVar37._8_8_ + dVar39;
    *(double *)param_1[1] = auVar40._0_8_ + dVar22;
    *(double *)(param_1[1] + 8) = auVar40._8_8_ + dVar25;
    dVar22 = param_2[6];
    dVar23 = param_2[5] * dVar26 + *(double *)(param_1[2] + 8);
    dVar29 = *(double *)param_1[3];
    dVar39 = param_2[7] * dVar26 + *(double *)(param_1[3] + 8);
    auVar6._8_4_ = SUB84(dVar23,0);
    auVar6._0_8_ = param_2[4] * dVar24 + *(double *)param_1[2];
    auVar6._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    param_1[2] = auVar6;
    auVar11._8_4_ = SUB84(dVar39,0);
    auVar11._0_8_ = dVar22 * dVar24 + dVar29;
    auVar11._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    param_1[3] = auVar11;
    dVar29 = param_2[9] * dVar26 + *(double *)(param_1[4] + 8);
    dVar23 = dVar24 * param_2[10] + *(double *)param_1[5];
    dVar39 = dVar26 * param_2[0xb] + *(double *)(param_1[5] + 8);
    auVar7._8_4_ = SUB84(dVar29,0);
    auVar7._0_8_ = param_2[8] * dVar24 + *(double *)param_1[4];
    auVar7._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    param_1[4] = auVar7;
  }
  else {
    dVar22 = (double)param_3;
    dVar25 = (double)param_3;
    dVar29 = param_2[2];
    dVar23 = param_2[3];
    if (0.99999 <= param_3) {
      dVar39 = *param_2 * dVar22;
      dVar24 = param_2[1] * dVar25;
      dVar29 = dVar29 * dVar22;
      dVar23 = dVar23 * dVar25;
      dVar26 = *(double *)*param_1;
      dVar42 = *(double *)(*param_1 + 8);
      dVar36 = *(double *)param_1[1];
      dVar38 = *(double *)(param_1[1] + 8);
      *(double *)*param_1 =
           dVar42 * dVar29 * -1.0 + dVar36 * dVar24 + dVar39 * dVar38 * 1.0 + dVar23 * dVar26;
      *(double *)(*param_1 + 8) =
           dVar26 * dVar29 * 1.0 + dVar38 * dVar24 + dVar39 * dVar36 * -1.0 + dVar23 * dVar42;
      *(double *)param_1[1] =
           dVar38 * dVar29 * 1.0 + ((dVar39 * dVar42 * 1.0 + dVar23 * dVar36) - dVar24 * dVar26);
      *(double *)(param_1[1] + 8) =
           dVar36 * dVar29 * -1.0 + ((dVar39 * dVar26 * -1.0 + dVar23 * dVar38) - dVar24 * dVar42);
      dVar24 = param_2[6];
      dVar23 = param_2[5] * dVar25 + *(double *)(param_1[2] + 8);
      dVar29 = *(double *)param_1[3];
      dVar39 = param_2[7] * dVar25 + *(double *)(param_1[3] + 8);
      auVar4._8_4_ = SUB84(dVar23,0);
      auVar4._0_8_ = param_2[4] * dVar22 + *(double *)param_1[2];
      auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      param_1[2] = auVar4;
      auVar8._8_4_ = SUB84(dVar39,0);
      auVar8._0_8_ = dVar24 * dVar22 + dVar29;
      auVar8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      param_1[3] = auVar8;
      dVar39 = param_2[10];
      dVar29 = (param_2[9] * dVar25 + 1.0) * *(double *)(param_1[4] + 8);
      dVar24 = *(double *)param_1[5];
      dVar23 = (dVar25 * param_2[0xb] + 0.0) * *(double *)(param_1[5] + 8);
      auVar5._8_4_ = SUB84(dVar29,0);
      auVar5._0_8_ = (param_2[8] * dVar22 + 1.0) * *(double *)param_1[4];
      auVar5._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      param_1[4] = auVar5;
      auVar9._8_4_ = SUB84(dVar23,0);
      auVar9._0_8_ = (dVar22 * dVar39 + 1.0) * dVar24;
      auVar9._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      param_1[5] = auVar9;
      return;
    }
    dVar24 = (double)DAT_149934d80;
    dVar26 = DAT_149934d80._8_8_;
    dVar39 = dVar24 - dVar22;
    dVar42 = dVar26 - dVar25;
    dVar27 = dVar39 * 0.0;
    dVar28 = dVar42 * 0.0;
    auVar1._8_4_ = (int)-(ulonglong)(0.0 <= dVar23);
    auVar1._0_8_ = -(ulonglong)(0.0 <= dVar29);
    auVar1._12_4_ = (int)(-(ulonglong)(0.0 <= dVar23) >> 0x20);
    auVar37 = blendvpd(ZEXT816(0xbff0000000000000) << 0x40,ZEXT816(0x3ff0000000000000) << 0x40,
                       auVar1);
    dVar36 = auVar37._0_8_ * dVar39 + dVar29 * dVar22;
    dVar38 = auVar37._8_8_ * dVar42 + dVar23 * dVar25;
    dVar29 = *param_2 * dVar22 + dVar27;
    dVar23 = param_2[1] * dVar25 + dVar28;
    dVar39 = dVar36 * dVar36 + dVar29 * dVar29;
    dVar42 = dVar38 * dVar38 + dVar23 * dVar23;
    auVar30._0_8_ = dVar39 + dVar42;
    auVar30._8_8_ = dVar39 + dVar42;
    uVar18 = -(ulonglong)(1e-08 <= auVar30._8_8_);
    auVar37 = sqrtpd(auVar30,auVar30);
    auVar40 = divpd(_DAT_149934d80,auVar37);
    auVar41._0_8_ = auVar40._0_8_ * dVar36;
    auVar41._8_8_ = auVar40._8_8_ * dVar38;
    auVar2._8_4_ = (int)uVar18;
    auVar2._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
    auVar2._12_4_ = (int)(uVar18 >> 0x20);
    auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar2);
    dVar33 = auVar37._0_8_;
    dVar35 = auVar37._8_8_;
    dVar36 = *(double *)*param_1;
    dVar38 = *(double *)(*param_1 + 8);
    dVar32 = *(double *)param_1[1];
    dVar16 = *(double *)(param_1[1] + 8);
    dVar29 = (double)((ulonglong)(dVar29 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar30._0_8_));
    dVar23 = (double)((ulonglong)(dVar23 * auVar40._8_8_) & uVar18);
    dVar39 = dVar36 * dVar33 * 1.0 + dVar16 * dVar23 + dVar32 * dVar29 * -1.0 + dVar38 * dVar35;
    dVar42 = dVar32 * dVar33 * -1.0 + ((dVar29 * dVar36 * -1.0 + dVar35 * dVar16) - dVar38 * dVar23)
    ;
    auVar14._8_4_ = SUB84(dVar39,0);
    auVar14._0_8_ =
         dVar38 * dVar33 * -1.0 + dVar32 * dVar23 + dVar16 * dVar29 * 1.0 + dVar36 * dVar35;
    auVar14._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *param_1 = auVar14;
    auVar15._8_4_ = SUB84(dVar42,0);
    auVar15._0_8_ =
         dVar16 * dVar33 * 1.0 + ((dVar29 * dVar38 * 1.0 + dVar35 * dVar32) - dVar36 * dVar23);
    auVar15._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    param_1[1] = auVar15;
    dVar42 = param_2[6];
    dVar36 = param_2[8];
    dVar38 = param_2[9];
    dVar32 = param_2[10];
    dVar16 = param_2[0xb];
    dVar23 = param_2[5] * dVar25 + dVar28 + *(double *)(param_1[2] + 8);
    dVar29 = *(double *)param_1[3];
    dVar39 = param_2[7] * dVar25 + dVar28 + *(double *)(param_1[3] + 8);
    auVar3._8_4_ = SUB84(dVar23,0);
    auVar3._0_8_ = param_2[4] * dVar22 + dVar27 + *(double *)param_1[2];
    auVar3._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    param_1[2] = auVar3;
    auVar13._8_4_ = SUB84(dVar39,0);
    auVar13._0_8_ = dVar42 * dVar22 + dVar27 + dVar29;
    auVar13._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    param_1[3] = auVar13;
    dVar29 = *(double *)(param_1[4] + 8);
    dVar23 = (dVar22 * dVar32 + dVar27 + 1.0) * *(double *)param_1[5];
    dVar39 = (dVar25 * dVar16 + dVar28 + 0.0) * *(double *)(param_1[5] + 8);
    *(double *)param_1[4] = (dVar36 * dVar22 + dVar27 + dVar24) * *(double *)param_1[4];
    *(double *)(param_1[4] + 8) = (dVar38 * dVar25 + dVar28 + dVar26) * dVar29;
  }
  *(double *)param_1[5] = dVar23;
  *(double *)(param_1[5] + 8) = dVar39;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 1479475ee FUN_1479475ee body=402 status=ok
// SIG undefined FUN_1479475ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479475ee(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  double *pdVar14;
  longlong lVar15;
  double *pdVar16;
  double *pdVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar12 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar12;
  auVar10 = _DAT_149935300;
  auVar9 = _DAT_149934d80;
  if (iVar12 < *(int *)(param_2 + 2)) {
    do {
      pdVar16 = *(double **)(param_2[1] + 0x10 + (longlong)iVar12 * 0x18);
      fVar19 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 + (longlong)iVar12 * 0x18));
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18);
      cVar11 = FUN_1479381c0(uVar1);
      uVar2 = *param_1;
      uVar13 = FUN_145cd0b36();
      pdVar14 = (double *)FUN_14792a902(uVar2,uVar13,uVar1);
      if (cVar11 == '\0') {
        pdVar17 = pdVar14;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar17 = *pdVar16;
          pdVar16 = pdVar16 + 1;
          pdVar17 = pdVar17 + 1;
        }
        dVar24 = *pdVar14;
        dVar25 = pdVar14[1];
        dVar21 = pdVar14[2];
        dVar23 = pdVar14[3];
      }
      else {
        dVar20 = (double)fVar19;
        dVar22 = (double)fVar19;
        dVar26 = pdVar16[8];
        dVar29 = pdVar16[9];
        dVar4 = pdVar16[10];
        dVar5 = pdVar16[0xb];
        dVar6 = pdVar16[5];
        dVar7 = pdVar16[6];
        dVar8 = pdVar16[7];
        dVar24 = *pdVar16 * dVar20;
        dVar25 = pdVar16[1] * dVar22;
        dVar21 = dVar20 * pdVar16[2];
        dVar23 = dVar22 * pdVar16[3];
        pdVar14[4] = pdVar16[4] * dVar20;
        pdVar14[5] = dVar6 * dVar22;
        pdVar14[6] = dVar7 * dVar20;
        pdVar14[7] = dVar8 * dVar22;
        auVar28._8_4_ = SUB84(dVar29 * dVar22,0);
        auVar28._0_8_ = dVar26 * dVar20;
        auVar28._12_4_ = (int)((ulonglong)(dVar29 * dVar22) >> 0x20);
        *(undefined1 (*) [16])(pdVar14 + 8) = auVar28;
        pdVar14[10] = dVar4 * dVar20;
        pdVar14[0xb] = dVar5 * dVar22;
      }
      dVar26 = dVar21 * dVar21 + dVar24 * dVar24;
      dVar29 = dVar23 * dVar23 + dVar25 * dVar25;
      auVar27._0_8_ = dVar26 + dVar29;
      auVar27._8_8_ = dVar26 + dVar29;
      uVar18 = -(ulonglong)(1e-08 <= auVar27._8_8_);
      auVar28 = sqrtpd(auVar27,auVar27);
      auVar30 = divpd(auVar9,auVar28);
      auVar31._0_8_ = auVar30._0_8_ * dVar21;
      auVar31._8_8_ = auVar30._8_8_ * dVar23;
      auVar3._8_4_ = (int)uVar18;
      auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
      auVar3._12_4_ = (int)(uVar18 >> 0x20);
      auVar28 = blendvpd(auVar10,auVar31,auVar3);
      *pdVar14 = (double)((ulonglong)(dVar24 * auVar30._0_8_) & -(ulonglong)(1e-08 <= auVar27._0_8_)
                         );
      pdVar14[1] = (double)((ulonglong)(dVar25 * auVar30._8_8_) & uVar18);
      *(undefined1 (*) [16])(pdVar14 + 2) = auVar28;
      iVar12 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar12;
    } while (iVar12 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147947780 FUN_147947780 body=454 status=ok
// SIG undefined FUN_147947780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147947780(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  char cVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  double *pdVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar13 = FUN_1479381c0(uVar1);
  iVar14 = FUN_147947946(*(undefined8 *)(param_1 + 8),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar16 = FUN_145cd0b36();
  pdVar17 = (double *)FUN_14792a902(uVar2,uVar16,uVar1);
  if (cVar13 == '\0') {
    pdVar18 = (double *)FUN_147947a5c(param_2);
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar17 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar17 = pdVar17 + 1;
    }
  }
  else {
    iVar15 = *(int *)(param_2 + 2) + 1;
    *(int *)(param_2 + 2) = iVar15;
    lVar19 = param_2[1];
    if (iVar15 < *(int *)(lVar19 + 8)) {
LAB_1479477f5:
      fVar22 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                              (*(longlong *)(lVar19 + 0x10) + (longlong)iVar15 * 4),
                                    *(undefined4 *)(*(longlong *)(lVar19 + 0x20) + 0x10));
      pdVar18 = *(double **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2 + 2) * 8);
      if (fVar22 < 0.99999) goto code_r0x000147947827;
      pdVar20 = pdVar17;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar20 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar20 = pdVar20 + 1;
      }
    }
LAB_1479478be:
    dVar4 = *pdVar17;
    dVar5 = pdVar17[1];
    dVar6 = pdVar17[2];
    dVar7 = pdVar17[3];
    dVar23 = dVar6 * dVar6 + dVar4 * dVar4;
    dVar26 = dVar7 * dVar7 + dVar5 * dVar5;
    auVar24._0_8_ = dVar23 + dVar26;
    auVar24._8_8_ = dVar23 + dVar26;
    uVar21 = -(ulonglong)(1e-08 <= auVar24._8_8_);
    auVar25 = sqrtpd(auVar24,auVar24);
    auVar27 = divpd(_DAT_149934d80,auVar25);
    auVar28._0_8_ = auVar27._0_8_ * dVar6;
    auVar28._8_8_ = auVar27._8_8_ * dVar7;
    auVar3._8_4_ = (int)uVar21;
    auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar24._0_8_);
    auVar3._12_4_ = (int)(uVar21 >> 0x20);
    auVar25 = blendvpd(_DAT_149935300,auVar28,auVar3);
    *pdVar17 = (double)((ulonglong)(dVar4 * auVar27._0_8_) & -(ulonglong)(1e-08 <= auVar24._0_8_));
    pdVar17[1] = (double)((ulonglong)(dVar5 * auVar27._8_8_) & uVar21);
    *(undefined1 (*) [16])(pdVar17 + 2) = auVar25;
  }
  return;
code_r0x000147947827:
  if ((iVar14 == -1) && (*(int *)(param_2 + 2) == 0)) {
    dVar4 = (double)fVar22;
    dVar5 = (double)fVar22;
    dVar6 = pdVar18[8];
    dVar7 = pdVar18[9];
    auVar27._0_8_ = pdVar18[10] * dVar4;
    auVar27._8_8_ = pdVar18[0xb] * dVar5;
    dVar23 = pdVar18[4];
    dVar26 = pdVar18[5];
    dVar8 = pdVar18[6];
    dVar9 = pdVar18[7];
    dVar10 = pdVar18[1];
    dVar11 = pdVar18[2];
    dVar12 = pdVar18[3];
    *pdVar17 = *pdVar18 * dVar4;
    pdVar17[1] = dVar10 * dVar5;
    auVar25._8_4_ = SUB84(dVar5 * dVar12,0);
    auVar25._0_8_ = dVar4 * dVar11;
    auVar25._12_4_ = (int)((ulonglong)(dVar5 * dVar12) >> 0x20);
    *(undefined1 (*) [16])(pdVar17 + 2) = auVar25;
    pdVar17[4] = dVar23 * dVar4;
    pdVar17[5] = dVar26 * dVar5;
    pdVar17[6] = dVar8 * dVar4;
    pdVar17[7] = dVar9 * dVar5;
    pdVar17[8] = dVar6 * dVar4;
    pdVar17[9] = dVar7 * dVar5;
    *(undefined1 (*) [16])(pdVar17 + 10) = auVar27;
  }
  else {
    FUN_1479471c8(pdVar17);
  }
  iVar15 = *(int *)(param_2 + 2) + 1;
  *(int *)(param_2 + 2) = iVar15;
  lVar19 = param_2[1];
  if (*(int *)(lVar19 + 8) <= iVar15) goto LAB_1479478be;
  goto LAB_1479477f5;
}



// FUNCTION 147947946 FUN_147947946 body=278 status=ok
// SIG undefined FUN_147947946(void)

int FUN_147947946(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd0b36();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 147947a5c FUN_147947a5c body=209 status=ok
// SIG undefined FUN_147947a5c(void)

undefined8 FUN_147947a5c(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 147947b2e FUN_147947b2e body=487 status=ok
// SIG undefined FUN_147947b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147947b2e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  int iVar18;
  undefined8 uVar19;
  double *pdVar20;
  longlong lVar21;
  double *pdVar22;
  double *pdVar23;
  ulonglong uVar24;
  float fVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar18 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar18;
  auVar16 = _DAT_149935300;
  auVar15 = _DAT_149934d80;
  if (iVar18 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar18 * 0x18);
      iVar18 = FUN_147947946(*param_1,uVar1);
      fVar25 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 +
                                              (longlong)*(int *)(param_2 + 3) * 0x18),
                                    *(undefined4 *)
                                     (*(longlong *)
                                       (param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18) + 0x10)
                                   );
      uVar2 = *param_1;
      uVar19 = FUN_145cd0b36();
      pdVar20 = (double *)FUN_14792a902(uVar2,uVar19,uVar1);
      cVar17 = FUN_1479381c0(uVar1);
      pdVar22 = *(double **)(param_2[1] + 0x10 + (longlong)*(int *)(param_2 + 3) * 0x18);
      if (cVar17 == '\0') {
        pdVar23 = pdVar20;
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *pdVar23 = *pdVar22;
          pdVar22 = pdVar22 + 1;
          pdVar23 = pdVar23 + 1;
        }
      }
      else if (iVar18 == -1) {
        dVar4 = (double)fVar25;
        dVar5 = (double)fVar25;
        dVar6 = pdVar22[8];
        dVar7 = pdVar22[9];
        dVar26 = pdVar22[10];
        dVar29 = pdVar22[0xb];
        dVar8 = pdVar22[4];
        dVar9 = pdVar22[5];
        dVar10 = pdVar22[6];
        dVar11 = pdVar22[7];
        dVar12 = pdVar22[1];
        dVar13 = pdVar22[2];
        dVar14 = pdVar22[3];
        *pdVar20 = *pdVar22 * dVar4;
        pdVar20[1] = dVar12 * dVar5;
        auVar28._8_4_ = SUB84(dVar5 * dVar14,0);
        auVar28._0_8_ = dVar4 * dVar13;
        auVar28._12_4_ = (int)((ulonglong)(dVar5 * dVar14) >> 0x20);
        *(undefined1 (*) [16])(pdVar20 + 2) = auVar28;
        pdVar20[4] = dVar8 * dVar4;
        pdVar20[5] = dVar9 * dVar5;
        pdVar20[6] = dVar10 * dVar4;
        pdVar20[7] = dVar11 * dVar5;
        pdVar20[8] = dVar6 * dVar4;
        pdVar20[9] = dVar7 * dVar5;
        pdVar20[10] = dVar26 * dVar4;
        pdVar20[0xb] = dVar29 * dVar5;
      }
      else {
        FUN_1479471c8(pdVar20);
      }
      dVar4 = *pdVar20;
      dVar5 = pdVar20[1];
      dVar6 = pdVar20[2];
      dVar7 = pdVar20[3];
      dVar26 = dVar6 * dVar6 + dVar4 * dVar4;
      dVar29 = dVar7 * dVar7 + dVar5 * dVar5;
      auVar27._0_8_ = dVar26 + dVar29;
      auVar27._8_8_ = dVar26 + dVar29;
      uVar24 = -(ulonglong)(1e-08 <= auVar27._8_8_);
      auVar28 = sqrtpd(auVar27,auVar27);
      auVar30 = divpd(auVar15,auVar28);
      auVar31._0_8_ = auVar30._0_8_ * dVar6;
      auVar31._8_8_ = auVar30._8_8_ * dVar7;
      auVar3._8_4_ = (int)uVar24;
      auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
      auVar3._12_4_ = (int)(uVar24 >> 0x20);
      auVar28 = blendvpd(auVar16,auVar31,auVar3);
      *pdVar20 = (double)((ulonglong)(dVar4 * auVar30._0_8_) & -(ulonglong)(1e-08 <= auVar27._0_8_))
      ;
      pdVar20[1] = (double)((ulonglong)(dVar5 * auVar30._8_8_) & uVar24);
      *(undefined1 (*) [16])(pdVar20 + 2) = auVar28;
      iVar18 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar18;
    } while (iVar18 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147947d16 FUN_147947d16 body=349 status=ok
// SIG undefined FUN_147947d16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147947d16(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  iVar10 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar10;
  auVar9 = _DAT_149935300;
  auVar8 = _DAT_149934d80;
  if (iVar10 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar10 * 0x18);
      pdVar2 = *(double **)(param_2[1] + 0x10 + (longlong)iVar10 * 0x18);
      uVar3 = *param_1;
      uVar11 = FUN_145cd0b36();
      puVar12 = (ulonglong *)FUN_14792a902(uVar3,uVar11,uVar1);
      fVar14 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 +
                                              (longlong)*(int *)(param_2 + 3) * 0x18));
      dVar15 = (double)fVar14;
      dVar17 = (double)fVar14;
      dVar22 = pdVar2[8];
      dVar26 = pdVar2[9];
      auVar24._0_8_ = pdVar2[10] * dVar15;
      auVar24._8_8_ = pdVar2[0xb] * dVar17;
      dVar5 = pdVar2[5];
      dVar6 = pdVar2[6];
      dVar7 = pdVar2[7];
      dVar19 = *pdVar2 * dVar15;
      dVar20 = pdVar2[1] * dVar17;
      dVar16 = dVar15 * pdVar2[2];
      dVar18 = dVar17 * pdVar2[3];
      puVar12[4] = (ulonglong)(pdVar2[4] * dVar15);
      puVar12[5] = (ulonglong)(dVar5 * dVar17);
      puVar12[6] = (ulonglong)(dVar6 * dVar15);
      puVar12[7] = (ulonglong)(dVar7 * dVar17);
      auVar21._8_4_ = SUB84(dVar26 * dVar17,0);
      auVar21._0_8_ = dVar22 * dVar15;
      auVar21._12_4_ = (int)((ulonglong)(dVar26 * dVar17) >> 0x20);
      *(undefined1 (*) [16])(puVar12 + 8) = auVar21;
      dVar22 = dVar16 * dVar16 + dVar19 * dVar19;
      dVar26 = dVar18 * dVar18 + dVar20 * dVar20;
      auVar23._0_8_ = dVar22 + dVar26;
      auVar23._8_8_ = dVar22 + dVar26;
      *(undefined1 (*) [16])(puVar12 + 10) = auVar24;
      uVar13 = -(ulonglong)(1e-08 <= auVar23._8_8_);
      auVar21 = sqrtpd(auVar24,auVar23);
      auVar24 = divpd(auVar8,auVar21);
      auVar25._0_8_ = auVar24._0_8_ * dVar16;
      auVar25._8_8_ = auVar24._8_8_ * dVar18;
      auVar4._8_4_ = (int)uVar13;
      auVar4._0_8_ = -(ulonglong)(1e-08 <= auVar23._0_8_);
      auVar4._12_4_ = (int)(uVar13 >> 0x20);
      auVar21 = blendvpd(auVar9,auVar25,auVar4);
      *puVar12 = (ulonglong)(dVar19 * auVar24._0_8_) & -(ulonglong)(1e-08 <= auVar23._0_8_);
      puVar12[1] = (ulonglong)(dVar20 * auVar24._8_8_) & uVar13;
      *(undefined1 (*) [16])(puVar12 + 2) = auVar21;
      iVar10 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar10;
    } while (iVar10 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147947e74 FUN_147947e74 body=408 status=ok
// SIG undefined FUN_147947e74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147947e74(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  undefined8 uVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar11 = (int)param_2[3] + 1;
  *(int *)(param_2 + 3) = iVar11;
  auVar10 = _DAT_149935300;
  auVar9 = _DAT_149934d80;
  if (iVar11 < (int)param_2[2]) {
    do {
      uVar15 = *(undefined8 *)(param_2[1] + (longlong)iVar11 * 0x18);
      pdVar1 = *(double **)(param_2[1] + 0x10 + (longlong)iVar11 * 0x18);
      iVar11 = FUN_147947946(*param_1,uVar15);
      uVar2 = *param_1;
      uVar12 = FUN_145cd0b36();
      pdVar13 = (double *)FUN_14792a902(uVar2,uVar12,uVar15);
      uVar15 = FUN_14792fa86(*param_2,*(undefined4 *)
                                       (param_2[1] + 8 + (longlong)(int)param_2[3] * 0x18));
      if (iVar11 == -1) {
        dVar16 = (double)(float)uVar15;
        dVar18 = (double)(float)uVar15;
        dVar22 = pdVar1[8];
        dVar25 = pdVar1[9];
        dVar4 = pdVar1[10];
        dVar5 = pdVar1[0xb];
        dVar6 = pdVar1[5];
        dVar7 = pdVar1[6];
        dVar8 = pdVar1[7];
        dVar20 = *pdVar1 * dVar16;
        dVar21 = pdVar1[1] * dVar18;
        dVar17 = dVar16 * pdVar1[2];
        dVar19 = dVar18 * pdVar1[3];
        pdVar13[4] = pdVar1[4] * dVar16;
        pdVar13[5] = dVar6 * dVar18;
        pdVar13[6] = dVar7 * dVar16;
        pdVar13[7] = dVar8 * dVar18;
        auVar24._8_4_ = SUB84(dVar25 * dVar18,0);
        auVar24._0_8_ = dVar22 * dVar16;
        auVar24._12_4_ = (int)((ulonglong)(dVar25 * dVar18) >> 0x20);
        *(undefined1 (*) [16])(pdVar13 + 8) = auVar24;
        pdVar13[10] = dVar4 * dVar16;
        pdVar13[0xb] = dVar5 * dVar18;
      }
      else {
        FUN_1479471c8(pdVar13,pdVar1,uVar15,*(undefined4 *)(*param_2 + 0x48));
        dVar20 = *pdVar13;
        dVar21 = pdVar13[1];
        dVar17 = pdVar13[2];
        dVar19 = pdVar13[3];
      }
      dVar22 = dVar17 * dVar17 + dVar20 * dVar20;
      dVar25 = dVar19 * dVar19 + dVar21 * dVar21;
      auVar23._0_8_ = dVar22 + dVar25;
      auVar23._8_8_ = dVar22 + dVar25;
      uVar14 = -(ulonglong)(1e-08 <= auVar23._8_8_);
      auVar24 = sqrtpd(auVar23,auVar23);
      auVar26 = divpd(auVar9,auVar24);
      auVar27._0_8_ = auVar26._0_8_ * dVar17;
      auVar27._8_8_ = auVar26._8_8_ * dVar19;
      auVar3._8_4_ = (int)uVar14;
      auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar23._0_8_);
      auVar3._12_4_ = (int)(uVar14 >> 0x20);
      auVar24 = blendvpd(auVar10,auVar27,auVar3);
      *pdVar13 = (double)((ulonglong)(dVar20 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar23._0_8_)
                         );
      pdVar13[1] = (double)((ulonglong)(dVar21 * auVar26._8_8_) & uVar14);
      *(undefined1 (*) [16])(pdVar13 + 2) = auVar24;
      iVar11 = (int)param_2[3] + 1;
      *(int *)(param_2 + 3) = iVar11;
    } while (iVar11 < (int)param_2[2]);
  }
  return;
}



// FUNCTION 14794800c FUN_14794800c body=274 status=ok
// SIG undefined FUN_14794800c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794800c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 uVar11;
  double *pdVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  iVar10 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar10;
  auVar9 = _DAT_149935300;
  auVar8 = _DAT_149934d80;
  if (iVar10 < *(int *)(param_2 + 0x10)) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar10 * 0x18);
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar10 * 0x18);
      FUN_147947946(*param_1,uVar1);
      uVar3 = *param_1;
      uVar11 = FUN_145cd0b36();
      pdVar12 = (double *)FUN_14792a902(uVar3,uVar11,uVar1);
      FUN_1478d1ef6(pdVar12,uVar2);
      dVar4 = *pdVar12;
      dVar5 = pdVar12[1];
      dVar6 = pdVar12[2];
      dVar7 = pdVar12[3];
      dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
      dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
      auVar14._0_8_ = dVar13 + dVar16;
      auVar14._8_8_ = dVar13 + dVar16;
      auVar15 = sqrtpd(auVar14,auVar14);
      auVar17 = divpd(auVar8,auVar15);
      auVar18._0_8_ = auVar17._0_8_ * dVar6;
      auVar18._8_8_ = auVar17._8_8_ * dVar7;
      auVar15._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
      auVar15._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
      auVar15 = blendvpd(auVar9,auVar18,auVar15);
      *pdVar12 = (double)((ulonglong)(dVar4 * auVar17._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_))
      ;
      pdVar12[1] = (double)((ulonglong)(dVar5 * auVar17._8_8_) &
                           -(ulonglong)(1e-08 <= auVar14._8_8_));
      *(undefined1 (*) [16])(pdVar12 + 2) = auVar15;
      iVar10 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar10;
    } while (iVar10 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14794811e FUN_14794811e body=420 status=ok
// SIG undefined FUN_14794811e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794811e(undefined1 (*param_1) [16],double *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar11 = _DAT_149934d80;
  if (1e-05 < param_3) {
    if (0.99999 <= param_3) {
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(double *)*param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = (undefined1 (*) [16])(*param_1 + 8);
      }
    }
    else {
      dVar13 = (double)param_3;
      dVar14 = (double)param_3;
      dVar9 = (double)DAT_149934d80 - dVar13;
      dVar12 = DAT_149934d80._8_8_ - dVar14;
      dVar19 = *(double *)(param_1[2] + 8);
      dVar16 = *(double *)param_1[3];
      dVar20 = param_2[5];
      dVar21 = param_2[6];
      dVar15 = param_2[7] * dVar14 + *(double *)(param_1[3] + 8) * dVar12;
      *(double *)param_1[2] = param_2[4] * dVar13 + *(double *)param_1[2] * dVar9;
      *(double *)(param_1[2] + 8) = dVar20 * dVar14 + dVar19 * dVar12;
      auVar18._8_4_ = SUB84(dVar15,0);
      auVar18._0_8_ = dVar21 * dVar13 + dVar16 * dVar9;
      auVar18._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      param_1[3] = auVar18;
      dVar19 = *(double *)(param_1[4] + 8);
      dVar16 = *(double *)param_1[5];
      dVar20 = param_2[9];
      dVar21 = param_2[10];
      dVar15 = param_2[0xb] * dVar14 + *(double *)(param_1[5] + 8) * dVar12;
      *(double *)param_1[4] = param_2[8] * dVar13 + *(double *)param_1[4] * dVar9;
      *(double *)(param_1[4] + 8) = dVar20 * dVar14 + dVar19 * dVar12;
      auVar23._8_4_ = SUB84(dVar15,0);
      auVar23._0_8_ = dVar21 * dVar13 + dVar16 * dVar9;
      auVar23._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      param_1[5] = auVar23;
      auVar18 = *param_1;
      auVar23 = param_1[1];
      dVar15 = param_2[2] * auVar23._0_8_ + *param_2 * auVar18._0_8_;
      dVar19 = param_2[3] * auVar23._8_8_ + param_2[1] * auVar18._8_8_;
      lVar3 = -(ulonglong)(0.0 <= dVar15 + dVar19);
      lVar4 = -(ulonglong)(0.0 <= dVar15 + dVar19);
      uVar6 = (undefined4)lVar4;
      uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
      auVar17._0_8_ = 0.0 - auVar18._0_8_;
      auVar17._8_8_ = 0.0 - auVar18._8_8_;
      auVar22._0_8_ = 0.0 - auVar23._0_8_;
      auVar22._8_8_ = 0.0 - auVar23._8_8_;
      auVar1._8_4_ = uVar6;
      auVar1._0_8_ = lVar3;
      auVar1._12_4_ = uVar7;
      auVar18 = blendvpd(auVar17,auVar18,auVar1);
      auVar2._8_4_ = uVar6;
      auVar2._0_8_ = lVar3;
      auVar2._12_4_ = uVar7;
      auVar23 = blendvpd(auVar22,auVar23,auVar2);
      dVar16 = auVar18._0_8_ * dVar9 + *param_2 * dVar13;
      dVar20 = auVar18._8_8_ * dVar12 + param_2[1] * dVar14;
      dVar21 = auVar23._0_8_ * dVar9 + param_2[2] * dVar13;
      dVar9 = auVar23._8_8_ * dVar12 + param_2[3] * dVar14;
      dVar15 = dVar21 * dVar21 + dVar16 * dVar16;
      dVar19 = dVar9 * dVar9 + dVar20 * dVar20;
      auVar10._0_8_ = dVar15 + dVar19;
      auVar10._8_8_ = dVar15 + dVar19;
      uVar5 = -(ulonglong)(1e-08 <= auVar10._8_8_);
      auVar18 = sqrtpd(auVar10,auVar10);
      auVar18 = divpd(auVar11,auVar18);
      auVar8._0_8_ = auVar18._0_8_ * dVar21;
      auVar8._8_8_ = auVar18._8_8_ * dVar9;
      auVar11._8_4_ = (int)uVar5;
      auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
      auVar11._12_4_ = (int)(uVar5 >> 0x20);
      auVar11 = blendvpd(_DAT_149935300,auVar8,auVar11);
      *(ulonglong *)*param_1 =
           (ulonglong)(dVar16 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar10._0_8_);
      *(ulonglong *)(*param_1 + 8) = (ulonglong)(dVar20 * auVar18._8_8_) & uVar5;
      param_1[1] = auVar11;
    }
  }
  return;
}



// FUNCTION 1479482c2 FUN_1479482c2 body=186 status=ok
// SIG undefined FUN_1479482c2(void)

void FUN_1479482c2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_1479485cc(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_1479486cc();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794837e FUN_14794837e body=191 status=ok
// SIG undefined FUN_14794837e(void)

void FUN_14794837e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_68 = param_1;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_1479487ae(&local_68,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_68 = param_3;
  local_58 = param_2;
  FUN_147948ab4();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794843e FUN_14794843e body=91 status=ok
// SIG undefined FUN_14794843e(void)

void FUN_14794843e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147948bd8(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794849a FUN_14794849a body=91 status=ok
// SIG undefined FUN_14794849a(void)

void FUN_14794849a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147948c82(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479484f6 FUN_1479484f6 body=91 status=ok
// SIG undefined FUN_1479484f6(void)

void FUN_1479484f6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147948d62(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147948552 FUN_147948552 body=121 status=ok
// SIG undefined FUN_147948552(void)

void FUN_147948552(undefined8 param_1,double *param_2,double *param_3,float param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_5[2] = param_2[2];
  dVar1 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = dVar1;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = (double)param_4;
  *param_5 = (*param_3 - *param_5) * dVar3 + *param_5;
  param_5[1] = (dVar2 - param_5[1]) * dVar3 + param_5[1];
  param_5[2] = (dVar1 - param_5[2]) * dVar3 + param_5[2];
  return;
}



// FUNCTION 1479485cc FUN_1479485cc body=256 status=ok
// SIG undefined FUN_1479485cc(void)

void FUN_1479485cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  double *pdVar10;
  float fVar11;
  double dVar12;
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar7 = FUN_1479381c0(uVar1);
  uVar2 = *param_1;
  uVar9 = FUN_145cd09d6();
  pdVar10 = (double *)FUN_14792a902(uVar2,uVar9,uVar1);
  if (cVar7 == '\0') {
    pdVar4 = *(double **)
              (*(longlong *)param_2[1] + (longlong)*(int *)((longlong)param_2[1] + 0x2c) * 8);
    pdVar10[2] = pdVar4[2];
    dVar6 = pdVar4[1];
    *pdVar10 = *pdVar4;
    pdVar10[1] = dVar6;
  }
  else {
    while( true ) {
      iVar8 = *(int *)(param_2 + 2) + 1;
      *(int *)(param_2 + 2) = iVar8;
      plVar3 = (longlong *)param_2[1];
      if ((int)plVar3[1] <= iVar8) break;
      pdVar4 = *(double **)(*plVar3 + (longlong)iVar8 * 8);
      fVar11 = (float)FUN_14792fa86(*param_2,*(undefined4 *)(plVar3[2] + (longlong)iVar8 * 4));
      if (*(int *)(param_2 + 2) == 0) {
        pdVar10[2] = pdVar4[2];
        dVar6 = pdVar4[1];
        *pdVar10 = *pdVar4;
        pdVar10[1] = dVar6;
        dVar6 = (double)fVar11;
        dVar5 = pdVar4[2] * dVar6;
        dVar12 = pdVar4[1] * dVar6;
        dVar6 = dVar6 * *pdVar4;
      }
      else {
        dVar5 = (double)fVar11;
        dVar6 = dVar5 * *pdVar4 + *pdVar10;
        dVar12 = pdVar4[1] * dVar5 + pdVar10[1];
        dVar5 = pdVar4[2] * dVar5 + pdVar10[2];
      }
      *pdVar10 = dVar6;
      pdVar10[1] = dVar12;
      pdVar10[2] = dVar5;
    }
  }
  return;
}



// FUNCTION 1479486cc FUN_1479486cc body=225 status=ok
// SIG undefined FUN_1479486cc(void)

void FUN_1479486cc(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  double *pdVar13;
  float fVar14;
  
  iVar11 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar11;
  if (iVar11 < *(int *)(param_2 + 2)) {
    do {
      pdVar3 = *(double **)(param_2[1] + 0x10 + (longlong)iVar11 * 0x18);
      fVar14 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 + (longlong)iVar11 * 0x18));
      uVar4 = *(undefined8 *)(param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18);
      cVar10 = FUN_1479381c0(uVar4);
      uVar5 = *param_1;
      uVar12 = FUN_145cd09d6();
      pdVar13 = (double *)FUN_14792a902(uVar5,uVar12,uVar4);
      if (cVar10 == '\0') {
        pdVar13[2] = pdVar3[2];
        uVar7 = *(undefined4 *)((longlong)pdVar3 + 4);
        uVar8 = *(undefined4 *)(pdVar3 + 1);
        uVar9 = *(undefined4 *)((longlong)pdVar3 + 0xc);
        *(undefined4 *)pdVar13 = *(undefined4 *)pdVar3;
        *(undefined4 *)((longlong)pdVar13 + 4) = uVar7;
        *(undefined4 *)(pdVar13 + 1) = uVar8;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uVar9;
      }
      else {
        dVar6 = (double)fVar14;
        dVar1 = pdVar3[2];
        dVar2 = pdVar3[1];
        *pdVar13 = dVar6 * *pdVar3;
        pdVar13[1] = dVar2 * dVar6;
        pdVar13[2] = dVar1 * dVar6;
      }
      iVar11 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar11;
    } while (iVar11 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 1479487ae FUN_1479487ae body=285 status=ok
// SIG undefined FUN_1479487ae(void)

void FUN_1479487ae(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  cVar4 = FUN_1479381c0(uVar1);
  iVar5 = FUN_1479488cc(*(undefined8 *)(param_1 + 8),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar7 = FUN_145cd09d6();
  pdVar8 = (double *)FUN_14792a902(uVar2,uVar7,uVar1);
  if (cVar4 == '\0') {
    pdVar9 = (double *)FUN_1479489e2(param_2);
LAB_1479488ab:
    pdVar8[2] = pdVar9[2];
    dVar3 = pdVar9[1];
    *pdVar8 = *pdVar9;
    pdVar8[1] = dVar3;
  }
  else {
    iVar6 = *(int *)(param_2 + 2) + 1;
    *(int *)(param_2 + 2) = iVar6;
    lVar10 = param_2[1];
    if (iVar6 < *(int *)(lVar10 + 8)) {
      do {
        fVar11 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                                (*(longlong *)(lVar10 + 0x10) + (longlong)iVar6 * 4)
                                      ,*(undefined4 *)(*(longlong *)(lVar10 + 0x20) + 0x10));
        pdVar9 = *(double **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2 + 2) * 8);
        if (0.99999 <= fVar11) goto LAB_1479488ab;
        dVar12 = (double)fVar11;
        dVar3 = pdVar9[2] * dVar12;
        dVar13 = pdVar9[1] * dVar12;
        dVar12 = dVar12 * *pdVar9;
        if (*(int *)(param_2 + 2) != 0 || iVar5 != -1) {
          dVar12 = dVar12 + *pdVar8;
          dVar13 = dVar13 + pdVar8[1];
          dVar3 = dVar3 + pdVar8[2];
        }
        *pdVar8 = dVar12;
        pdVar8[1] = dVar13;
        pdVar8[2] = dVar3;
        iVar6 = *(int *)(param_2 + 2) + 1;
        *(int *)(param_2 + 2) = iVar6;
        lVar10 = param_2[1];
      } while (iVar6 < *(int *)(lVar10 + 8));
    }
  }
  return;
}



// FUNCTION 1479488cc FUN_1479488cc body=278 status=ok
// SIG undefined FUN_1479488cc(void)

int FUN_1479488cc(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd09d6();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 1479489e2 FUN_1479489e2 body=209 status=ok
// SIG undefined FUN_1479489e2(void)

undefined8 FUN_1479489e2(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 147948ab4 FUN_147948ab4 body=291 status=ok
// SIG undefined FUN_147948ab4(void)

void FUN_147948ab4(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  double *pdVar12;
  float fVar13;
  double dVar14;
  
  iVar10 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar10;
  if (iVar10 < *(int *)(param_2 + 2)) {
    do {
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)iVar10 * 0x18);
      iVar10 = FUN_1479488cc(*param_1,uVar2);
      fVar13 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 +
                                              (longlong)*(int *)(param_2 + 3) * 0x18),
                                    *(undefined4 *)
                                     (*(longlong *)
                                       (param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18) + 0x10)
                                   );
      uVar3 = *param_1;
      uVar11 = FUN_145cd09d6();
      pdVar12 = (double *)FUN_14792a902(uVar3,uVar11,uVar2);
      cVar9 = FUN_1479381c0(uVar2);
      pdVar4 = *(double **)(param_2[1] + 0x10 + (longlong)*(int *)(param_2 + 3) * 0x18);
      if (cVar9 == '\0') {
        pdVar12[2] = pdVar4[2];
        uVar6 = *(undefined4 *)((longlong)pdVar4 + 4);
        uVar7 = *(undefined4 *)(pdVar4 + 1);
        uVar8 = *(undefined4 *)((longlong)pdVar4 + 0xc);
        *(undefined4 *)pdVar12 = *(undefined4 *)pdVar4;
        *(undefined4 *)((longlong)pdVar12 + 4) = uVar6;
        *(undefined4 *)(pdVar12 + 1) = uVar7;
        *(undefined4 *)((longlong)pdVar12 + 0xc) = uVar8;
      }
      else {
        dVar14 = (double)fVar13;
        dVar5 = pdVar4[2] * dVar14;
        dVar1 = pdVar4[1];
        if (iVar10 == -1) {
          *pdVar12 = dVar14 * *pdVar4;
          pdVar12[1] = dVar1 * dVar14;
        }
        else {
          *pdVar12 = dVar14 * *pdVar4 + *pdVar12;
          pdVar12[1] = dVar1 * dVar14 + pdVar12[1];
          dVar5 = dVar5 + pdVar12[2];
        }
        pdVar12[2] = dVar5;
      }
      iVar10 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar10;
    } while (iVar10 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147948bd8 FUN_147948bd8 body=170 status=ok
// SIG undefined FUN_147948bd8(void)

void FUN_147948bd8(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  float fVar9;
  double dVar10;
  
  iVar6 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar6;
  if (iVar6 < *(int *)(param_2 + 2)) {
    do {
      uVar3 = *(undefined8 *)(param_2[1] + (longlong)iVar6 * 0x18);
      pdVar4 = *(double **)(param_2[1] + 0x10 + (longlong)iVar6 * 0x18);
      uVar5 = *param_1;
      uVar7 = FUN_145cd09d6();
      pdVar8 = (double *)FUN_14792a902(uVar5,uVar7,uVar3);
      fVar9 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      dVar10 = (double)fVar9;
      dVar1 = pdVar4[2];
      dVar2 = pdVar4[1];
      *pdVar8 = dVar10 * *pdVar4;
      pdVar8[1] = dVar2 * dVar10;
      pdVar8[2] = dVar1 * dVar10;
      iVar6 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar6;
    } while (iVar6 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147948c82 FUN_147948c82 body=224 status=ok
// SIG undefined FUN_147948c82(void)

void FUN_147948c82(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  double *pdVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar5;
  if (iVar5 < *(int *)(param_2 + 2)) {
    do {
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)iVar5 * 0x18);
      pdVar3 = *(double **)(param_2[1] + 0x10 + (longlong)iVar5 * 0x18);
      iVar5 = FUN_1479488cc(*param_1,uVar2);
      uVar4 = *param_1;
      uVar6 = FUN_145cd09d6();
      pdVar7 = (double *)FUN_14792a902(uVar4,uVar6,uVar2);
      fVar8 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      dVar10 = (double)fVar8;
      dVar9 = pdVar3[2] * dVar10;
      dVar1 = pdVar3[1];
      if (iVar5 == -1) {
        *pdVar7 = dVar10 * *pdVar3;
        pdVar7[1] = dVar1 * dVar10;
      }
      else {
        *pdVar7 = dVar10 * *pdVar3 + *pdVar7;
        pdVar7[1] = dVar1 * dVar10 + pdVar7[1];
        dVar9 = dVar9 + pdVar7[2];
      }
      pdVar7[2] = dVar9;
      iVar5 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar5;
    } while (iVar5 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147948d62 FUN_147948d62 body=152 status=ok
// SIG undefined FUN_147948d62(void)

void FUN_147948d62(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  
  iVar6 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar6;
  if (iVar6 < *(int *)(param_2 + 0x10)) {
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar6 * 0x18);
      pdVar4 = *(double **)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar6 * 0x18);
      FUN_1479488cc(*param_1,uVar3);
      uVar5 = *param_1;
      uVar7 = FUN_145cd09d6();
      pdVar8 = (double *)FUN_14792a902(uVar5,uVar7,uVar3);
      dVar1 = pdVar4[2];
      dVar2 = pdVar4[1];
      *pdVar8 = *pdVar8 - *pdVar4;
      pdVar8[1] = pdVar8[1] - dVar2;
      pdVar8[2] = pdVar8[2] - dVar1;
      iVar6 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar6;
    } while (iVar6 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 147948dfa FUN_147948dfa body=186 status=ok
// SIG undefined FUN_147948dfa(void)

void FUN_147948dfa(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_60 = param_3;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_14794911a(&local_60,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_60 = param_3;
  local_58 = param_2;
  FUN_1479494c8();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147948eb6 FUN_147948eb6 body=191 status=ok
// SIG undefined FUN_147948eb6(void)

void FUN_147948eb6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] * 0x30;
    local_68 = param_1;
    do {
      local_48 = 0xffffffff;
      local_58 = param_2;
      local_50 = lVar2;
      FUN_14794962e(&local_68,&local_58);
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  local_50 = param_2[2];
  local_48 = (undefined4)param_2[3];
  local_40 = 0xffffffff;
  local_68 = param_3;
  local_58 = param_2;
  FUN_1479499a6();
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147948f76 FUN_147948f76 body=91 status=ok
// SIG undefined FUN_147948f76(void)

void FUN_147948f76(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147949b54(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147948fd2 FUN_147948fd2 body=91 status=ok
// SIG undefined FUN_147948fd2(void)

void FUN_147948fd2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147949c7c(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794902e FUN_14794902e body=91 status=ok
// SIG undefined FUN_14794902e(void)

void FUN_14794902e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_30 = param_3;
  local_28 = param_2;
  FUN_147949dda(&local_30,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794908a FUN_14794908a body=144 status=ok
// SIG undefined FUN_14794908a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794908a(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  dVar5 = *(double *)(param_2 + 6);
  param_5[2] = *(double *)(param_2 + 4);
  param_5[3] = dVar5;
  *(undefined4 *)param_5 = uVar1;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  FUN_14794a000(param_5,param_3,param_4);
  dVar5 = *param_5;
  dVar6 = param_5[1];
  dVar7 = param_5[2];
  dVar8 = param_5[3];
  dVar10 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar13 = dVar8 * dVar8 + dVar6 * dVar6;
  auVar11._0_8_ = dVar10 + dVar13;
  auVar11._8_8_ = dVar10 + dVar13;
  uVar9 = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
  auVar12 = sqrtpd(auVar11,auVar11);
  auVar12 = divpd(_DAT_149934d80,auVar12);
  auVar14._0_8_ = auVar12._0_8_ * dVar7;
  auVar14._8_8_ = auVar12._8_8_ * dVar8;
  *param_5 = (double)((ulonglong)(dVar5 * auVar12._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
  param_5[1] = (double)((ulonglong)(dVar6 * auVar12._8_8_) & uVar9);
  auVar12._8_4_ = (int)uVar9;
  auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
  auVar12._12_4_ = (int)(uVar9 >> 0x20);
  auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar12);
  *(undefined1 (*) [16])(param_5 + 2) = auVar12;
  return;
}



// FUNCTION 14794911a FUN_14794911a body=330 status=ok
// SIG undefined FUN_14794911a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794911a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  double *pdVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  
  uVar12 = *(undefined8 *)(param_2[1] + 0x20);
  cVar8 = FUN_1479381c0(uVar12);
  uVar1 = *param_1;
  uVar10 = FUN_145cd0c96();
  pdVar11 = (double *)FUN_14792a902(uVar1,uVar10,uVar12);
  if (cVar8 == '\0') {
    pdVar3 = *(double **)(*(longlong *)param_2[1] + (longlong)*(int *)(param_2[1] + 0x2c) * 8);
    dVar4 = *pdVar3;
    dVar5 = pdVar3[1];
    dVar6 = pdVar3[3];
    pdVar11[2] = pdVar3[2];
    pdVar11[3] = dVar6;
    *pdVar11 = dVar4;
    pdVar11[1] = dVar5;
  }
  else {
    while( true ) {
      iVar9 = (int)param_2[2] + 1;
      *(int *)(param_2 + 2) = iVar9;
      plVar2 = (longlong *)param_2[1];
      if ((int)plVar2[1] <= iVar9) break;
      pdVar3 = *(double **)(*plVar2 + (longlong)iVar9 * 8);
      uVar12 = FUN_14792fa86(*param_2,*(undefined4 *)(plVar2[2] + (longlong)iVar9 * 4));
      if ((int)param_2[2] == 0) {
        dVar4 = *pdVar3;
        dVar5 = pdVar3[1];
        dVar6 = pdVar3[3];
        pdVar11[2] = pdVar3[2];
        pdVar11[3] = dVar6;
        *pdVar11 = dVar4;
        pdVar11[1] = dVar5;
        dVar4 = (double)(float)uVar12;
        dVar5 = pdVar3[1];
        dVar6 = pdVar3[2];
        dVar7 = pdVar3[3];
        *pdVar11 = *pdVar3 * dVar4;
        pdVar11[1] = dVar5 * dVar4;
        pdVar11[2] = dVar4 * dVar6;
        pdVar11[3] = dVar4 * dVar7;
      }
      else {
        FUN_147949264(pdVar11,pdVar3,uVar12,*(undefined4 *)(*param_2 + 0x48));
      }
    }
    dVar4 = *pdVar11;
    dVar5 = pdVar11[1];
    dVar6 = pdVar11[2];
    dVar7 = pdVar11[3];
    dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
    dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
    auVar14._0_8_ = dVar13 + dVar16;
    auVar14._8_8_ = dVar13 + dVar16;
    auVar15 = sqrtpd(auVar14,auVar14);
    auVar15 = divpd(_DAT_149934d80,auVar15);
    auVar17._0_8_ = auVar15._0_8_ * dVar6;
    auVar17._8_8_ = auVar15._8_8_ * dVar7;
    *pdVar11 = (double)((ulonglong)(dVar4 * auVar15._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
    pdVar11[1] = (double)((ulonglong)(dVar5 * auVar15._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
    auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar15);
    *(undefined1 (*) [16])(pdVar11 + 2) = auVar15;
  }
  return;
}



// FUNCTION 147949264 FUN_147949264 body=611 status=ok
// SIG undefined FUN_147949264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147949264(undefined1 (*param_1) [16],double *param_2,float param_3,int param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  
  if (param_4 == 0) {
    dVar6 = (double)param_3;
    dVar12 = param_2[2];
    dVar4 = param_2[3];
    dVar3 = (double)(&DAT_149931160)
                    [0.0 <= dVar6 * dVar4 * *(double *)(param_1[1] + 8) +
                            *(double *)param_1[1] * dVar6 * dVar12 +
                            *(double *)*param_1 * *param_2 * dVar6 +
                            param_2[1] * dVar6 * *(double *)(*param_1 + 8)];
    dVar2 = (double)(&DAT_149931160)
                    [0.0 <= dVar6 * dVar4 * *(double *)(param_1[1] + 8) +
                            *(double *)param_1[1] * dVar6 * dVar12 +
                            *(double *)*param_1 * *param_2 * dVar6 +
                            param_2[1] * dVar6 * *(double *)(*param_1 + 8)];
    dVar15 = param_2[1] * dVar6 * dVar2 + *(double *)(*param_1 + 8);
    dVar7 = *(double *)param_1[1];
    dVar8 = *(double *)(param_1[1] + 8);
    auVar11._8_4_ = SUB84(dVar15,0);
    auVar11._0_8_ = *param_2 * dVar6 * dVar3 + *(double *)*param_1;
    auVar11._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *param_1 = auVar11;
    *(double *)param_1[1] = dVar6 * dVar12 * dVar3 + dVar7;
    *(double *)(param_1[1] + 8) = dVar6 * dVar4 * dVar2 + dVar8;
  }
  else {
    dVar7 = (double)param_3;
    uVar5 = -(ulonglong)
             (0.0 <= DAT_14c8463e8 * param_2[3] +
                     DAT_14c8463e0 * param_2[2] +
                     DAT_14c8463d0 * *param_2 + DAT_14c8463d8 * param_2[1]);
    dVar15 = (double)(~uVar5 & (ulonglong)-(1.0 - dVar7) | (ulonglong)(1.0 - dVar7) & uVar5);
    dVar2 = DAT_14c8463d0 * dVar15 + *param_2 * dVar7;
    dVar3 = DAT_14c8463d8 * dVar15 + param_2[1] * dVar7;
    dVar8 = dVar15 * DAT_14c8463e0 + dVar7 * param_2[2];
    dVar7 = dVar15 * DAT_14c8463e8 + dVar7 * param_2[3];
    dVar15 = dVar8 * dVar8 + dVar2 * dVar2;
    dVar12 = dVar7 * dVar7 + dVar3 * dVar3;
    auVar10._0_8_ = dVar15 + dVar12;
    auVar10._8_8_ = dVar15 + dVar12;
    auVar11 = sqrtpd(auVar10,auVar10);
    auVar13 = divpd(_DAT_149934d80,auVar11);
    auVar14._0_8_ = auVar13._0_8_ * dVar8;
    auVar14._8_8_ = auVar13._8_8_ * dVar7;
    auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_);
    auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
    auVar11 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar1);
    dVar2 = (double)((ulonglong)(dVar2 * auVar13._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_));
    dVar3 = (double)((ulonglong)(dVar3 * auVar13._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_));
    dVar8 = *(double *)*param_1;
    dVar15 = *(double *)(*param_1 + 8);
    dVar12 = *(double *)param_1[1];
    dVar4 = *(double *)(param_1[1] + 8);
    dVar6 = auVar11._0_8_;
    dVar9 = auVar11._8_8_;
    dVar7 = dVar12 * dVar6 * -1.0 + ((dVar2 * dVar8 * -1.0 + dVar9 * dVar4) - dVar15 * dVar3);
    *(double *)*param_1 =
         dVar15 * dVar6 * -1.0 + dVar12 * dVar3 + dVar4 * dVar2 * 1.0 + dVar8 * dVar9;
    *(double *)(*param_1 + 8) =
         dVar8 * dVar6 * 1.0 + dVar4 * dVar3 + dVar12 * dVar2 * -1.0 + dVar15 * dVar9;
    auVar13._8_4_ = SUB84(dVar7,0);
    auVar13._0_8_ = dVar4 * dVar6 * 1.0 + ((dVar2 * dVar15 * 1.0 + dVar9 * dVar12) - dVar8 * dVar3);
    auVar13._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    param_1[1] = auVar13;
  }
  return;
}



// FUNCTION 1479494c8 FUN_1479494c8 body=358 status=ok
// SIG undefined FUN_1479494c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479494c8(undefined8 *param_1,undefined8 *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  double *pdVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  
  iVar6 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar6;
  auVar4 = _DAT_149934d80;
  if (iVar6 < *(int *)(param_2 + 2)) {
    do {
      pdVar1 = *(double **)(param_2[1] + 0x10 + (longlong)iVar6 * 0x18);
      fVar10 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                              (param_2[1] + 8 + (longlong)iVar6 * 0x18));
      uVar2 = *(undefined8 *)(param_2[1] + (longlong)*(int *)(param_2 + 3) * 0x18);
      cVar5 = FUN_1479381c0(uVar2);
      uVar3 = *param_1;
      uVar7 = FUN_145cd0c96();
      pdVar8 = (double *)FUN_14792a902(uVar3,uVar7,uVar2);
      if (cVar5 == '\0') {
        dVar14 = pdVar1[1];
        dVar11 = pdVar1[2];
        dVar12 = pdVar1[3];
        *pdVar8 = *pdVar1;
        pdVar8[1] = dVar14;
        pdVar8[2] = dVar11;
        pdVar8[3] = dVar12;
        dVar11 = *pdVar8;
        dVar12 = pdVar8[1];
        dVar13 = pdVar8[2];
        dVar14 = pdVar8[3];
      }
      else {
        dVar14 = (double)fVar10;
        dVar11 = *pdVar1 * dVar14;
        dVar12 = pdVar1[1] * dVar14;
        dVar13 = dVar14 * pdVar1[2];
        dVar14 = dVar14 * pdVar1[3];
      }
      dVar15 = dVar13 * dVar13 + dVar11 * dVar11;
      dVar18 = dVar14 * dVar14 + dVar12 * dVar12;
      auVar16._0_8_ = dVar15 + dVar18;
      auVar16._8_8_ = dVar15 + dVar18;
      uVar9 = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
      auVar17 = sqrtpd(auVar16,auVar16);
      auVar17 = divpd(auVar4,auVar17);
      auVar19._0_8_ = auVar17._0_8_ * dVar13;
      auVar19._8_8_ = auVar17._8_8_ * dVar14;
      *pdVar8 = (double)((ulonglong)(dVar11 * auVar17._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
      pdVar8[1] = (double)((ulonglong)(dVar12 * auVar17._8_8_) & uVar9);
      auVar17._8_4_ = (int)uVar9;
      auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
      auVar17._12_4_ = (int)(uVar9 >> 0x20);
      auVar17 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar17);
      *(undefined1 (*) [16])(pdVar8 + 2) = auVar17;
      iVar6 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar6;
    } while (iVar6 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 14794962e FUN_14794962e body=399 status=ok
// SIG undefined FUN_14794962e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794962e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  double *pdVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  
  uVar15 = *(undefined8 *)(param_2[1] + 0x20);
  cVar7 = FUN_1479381c0(uVar15);
  iVar8 = FUN_1479497be(*(undefined8 *)(param_1 + 8),uVar15);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar10 = FUN_145cd0c96();
  pdVar11 = (double *)FUN_14792a902(uVar1,uVar10,uVar15);
  if (cVar7 == '\0') {
    pdVar12 = (double *)FUN_1479498d4(param_2);
    dVar3 = pdVar12[1];
    dVar4 = pdVar12[2];
    dVar5 = pdVar12[3];
    *pdVar11 = *pdVar12;
    pdVar11[1] = dVar3;
    pdVar11[2] = dVar4;
    pdVar11[3] = dVar5;
  }
  else {
    iVar9 = (int)param_2[2] + 1;
    *(int *)(param_2 + 2) = iVar9;
    lVar13 = param_2[1];
    if (iVar9 < *(int *)(lVar13 + 8)) {
      do {
        uVar15 = FUN_14792f4f2(*param_2,*(undefined4 *)
                                         (*(longlong *)(lVar13 + 0x10) + (longlong)iVar9 * 4),
                               *(undefined4 *)(*(longlong *)(lVar13 + 0x20) + 0x10));
        pdVar12 = *(double **)(*(longlong *)param_2[1] + (longlong)(int)param_2[2] * 8);
        if (0.99999 <= (float)uVar15) {
          dVar3 = *pdVar12;
          dVar4 = pdVar12[1];
          dVar5 = pdVar12[3];
          pdVar11[2] = pdVar12[2];
          pdVar11[3] = dVar5;
          *pdVar11 = dVar3;
          pdVar11[1] = dVar4;
          break;
        }
        if ((iVar8 == -1) && ((int)param_2[2] == 0)) {
          dVar3 = (double)(float)uVar15;
          dVar4 = pdVar12[1];
          dVar5 = pdVar12[2];
          dVar6 = pdVar12[3];
          *pdVar11 = *pdVar12 * dVar3;
          pdVar11[1] = dVar4 * dVar3;
          auVar18._8_4_ = SUB84(dVar3 * dVar6,0);
          auVar18._0_8_ = dVar3 * dVar5;
          auVar18._12_4_ = (int)((ulonglong)(dVar3 * dVar6) >> 0x20);
          *(undefined1 (*) [16])(pdVar11 + 2) = auVar18;
        }
        else {
          FUN_147949264(pdVar11,pdVar12,uVar15,*(undefined4 *)(*param_2 + 0x48));
        }
        iVar9 = (int)param_2[2] + 1;
        *(int *)(param_2 + 2) = iVar9;
        lVar13 = param_2[1];
      } while (iVar9 < *(int *)(lVar13 + 8));
    }
    dVar3 = *pdVar11;
    dVar4 = pdVar11[1];
    dVar5 = pdVar11[2];
    dVar6 = pdVar11[3];
    dVar16 = dVar5 * dVar5 + dVar3 * dVar3;
    dVar19 = dVar6 * dVar6 + dVar4 * dVar4;
    auVar17._0_8_ = dVar16 + dVar19;
    auVar17._8_8_ = dVar16 + dVar19;
    uVar14 = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
    auVar18 = sqrtpd(auVar17,auVar17);
    auVar18 = divpd(_DAT_149934d80,auVar18);
    auVar20._0_8_ = auVar18._0_8_ * dVar5;
    auVar20._8_8_ = auVar18._8_8_ * dVar6;
    *pdVar11 = (double)((ulonglong)(dVar3 * auVar18._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
    pdVar11[1] = (double)((ulonglong)(dVar4 * auVar18._8_8_) & uVar14);
    auVar2._8_4_ = (int)uVar14;
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
    auVar2._12_4_ = (int)(uVar14 >> 0x20);
    auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar2);
    *(undefined1 (*) [16])(pdVar11 + 2) = auVar18;
  }
  return;
}



// FUNCTION 1479497be FUN_1479497be body=278 status=ok
// SIG undefined FUN_1479497be(void)

int FUN_1479497be(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_145cd0c96();
  lVar3 = param_1[7];
  if ((longlong)(int)lVar3 == 0) {
    return -1;
  }
  lVar6 = param_1[6];
  uVar4 = 0;
  lVar5 = 0;
  while (cVar1 = FUN_1400063ec(lVar6 + uVar4,uVar2), cVar1 == '\0') {
    lVar5 = lVar5 + 0x100000000;
    uVar4 = uVar4 + 8;
    if ((longlong)(int)lVar3 * 8 == uVar4) {
      return -1;
    }
  }
  if ((int)(~uVar4 >> 3) == 0) {
    return -1;
  }
  lVar6 = (lVar5 >> 0x20) * 0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar6);
  if (lVar3 == 0) {
    return -1;
  }
  lVar5 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar6) + lVar5) == (int)param_2[2]) {
      lVar3 = (longlong)*(int *)(param_1[2] + 8 + lVar6);
      if (lVar3 == 0) {
        return -1;
      }
      lVar6 = *(longlong *)(param_1[2] + lVar6);
      uVar4 = 0;
      while (((*(int *)(lVar6 + 0x10 + uVar4) != (int)param_2[2] ||
              (*(longlong *)(lVar6 + 8 + uVar4) != param_2[1])) ||
             (*(longlong *)(lVar6 + uVar4) != *param_2))) {
        uVar4 = uVar4 + 0x14;
        if (lVar3 * 0x14 == uVar4) {
          return -1;
        }
      }
      return (int)(uVar4 >> 2) * -0x33333333;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  return -1;
}



// FUNCTION 1479498d4 FUN_1479498d4 body=209 status=ok
// SIG undefined FUN_1479498d4(void)

undefined8 FUN_1479498d4(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 1479499a6 FUN_1479499a6 body=430 status=ok
// SIG undefined FUN_1479499a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479499a6(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  
  iVar11 = (int)param_2[3] + 1;
  *(int *)(param_2 + 3) = iVar11;
  auVar9 = _DAT_149934d80;
  if (iVar11 < (int)param_2[2]) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar11 * 0x18);
      iVar11 = FUN_1479497be(*param_1,uVar1);
      uVar15 = FUN_14792f4f2(*param_2,*(undefined4 *)
                                       (param_2[1] + 8 + (longlong)(int)param_2[3] * 0x18),
                             *(undefined4 *)
                              (*(longlong *)(param_2[1] + (longlong)(int)param_2[3] * 0x18) + 0x10))
      ;
      uVar2 = *param_1;
      uVar12 = FUN_145cd0c96();
      pdVar13 = (double *)FUN_14792a902(uVar2,uVar12,uVar1);
      cVar10 = FUN_1479381c0(uVar1);
      pdVar3 = *(double **)(param_2[1] + 0x10 + (longlong)(int)param_2[3] * 0x18);
      if (cVar10 == '\0') {
        dVar5 = *pdVar3;
        dVar6 = pdVar3[1];
        dVar7 = pdVar3[3];
        pdVar13[2] = pdVar3[2];
        pdVar13[3] = dVar7;
        *pdVar13 = dVar5;
        pdVar13[1] = dVar6;
      }
      else if (iVar11 == -1) {
        dVar5 = (double)(float)uVar15;
        dVar6 = pdVar3[1];
        dVar7 = pdVar3[2];
        dVar8 = pdVar3[3];
        *pdVar13 = *pdVar3 * dVar5;
        pdVar13[1] = dVar6 * dVar5;
        auVar18._8_4_ = SUB84(dVar5 * dVar8,0);
        auVar18._0_8_ = dVar5 * dVar7;
        auVar18._12_4_ = (int)((ulonglong)(dVar5 * dVar8) >> 0x20);
        *(undefined1 (*) [16])(pdVar13 + 2) = auVar18;
      }
      else {
        FUN_147949264(pdVar13,pdVar3,uVar15,*(undefined4 *)(*param_2 + 0x48));
      }
      dVar5 = *pdVar13;
      dVar6 = pdVar13[1];
      dVar7 = pdVar13[2];
      dVar8 = pdVar13[3];
      dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
      dVar19 = dVar8 * dVar8 + dVar6 * dVar6;
      auVar17._0_8_ = dVar16 + dVar19;
      auVar17._8_8_ = dVar16 + dVar19;
      uVar14 = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
      auVar18 = sqrtpd(auVar17,auVar17);
      auVar18 = divpd(auVar9,auVar18);
      auVar20._0_8_ = auVar18._0_8_ * dVar7;
      auVar20._8_8_ = auVar18._8_8_ * dVar8;
      *pdVar13 = (double)((ulonglong)(dVar5 * auVar18._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
      pdVar13[1] = (double)((ulonglong)(dVar6 * auVar18._8_8_) & uVar14);
      auVar4._8_4_ = (int)uVar14;
      auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
      auVar4._12_4_ = (int)(uVar14 >> 0x20);
      auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar4);
      *(undefined1 (*) [16])(pdVar13 + 2) = auVar18;
      iVar11 = (int)param_2[3] + 1;
      *(int *)(param_2 + 3) = iVar11;
    } while (iVar11 < (int)param_2[2]);
  }
  return;
}



// FUNCTION 147949b54 FUN_147949b54 body=295 status=ok
// SIG undefined FUN_147949b54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147949b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  
  iVar5 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar5;
  auVar4 = _DAT_149934d80;
  if (iVar5 < *(int *)(param_2 + 2)) {
    do {
      uVar1 = *(undefined8 *)(param_2[1] + (longlong)iVar5 * 0x18);
      pdVar2 = *(double **)(param_2[1] + 0x10 + (longlong)iVar5 * 0x18);
      uVar3 = *param_1;
      uVar6 = FUN_145cd0c96();
      puVar7 = (ulonglong *)FUN_14792a902(uVar3,uVar6,uVar1);
      fVar8 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      dVar10 = (double)fVar8;
      dVar11 = *pdVar2 * dVar10;
      dVar12 = pdVar2[1] * dVar10;
      dVar9 = dVar10 * pdVar2[2];
      dVar10 = dVar10 * pdVar2[3];
      dVar13 = dVar9 * dVar9 + dVar11 * dVar11;
      dVar16 = dVar10 * dVar10 + dVar12 * dVar12;
      auVar14._0_8_ = dVar13 + dVar16;
      auVar14._8_8_ = dVar13 + dVar16;
      auVar15 = sqrtpd(auVar14,auVar14);
      auVar15 = divpd(auVar4,auVar15);
      auVar17._0_8_ = auVar15._0_8_ * dVar9;
      auVar17._8_8_ = auVar15._8_8_ * dVar10;
      *puVar7 = (ulonglong)(dVar11 * auVar15._0_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
      puVar7[1] = (ulonglong)(dVar12 * auVar15._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
      auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
      auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
      auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar15);
      *(undefined1 (*) [16])(puVar7 + 2) = auVar15;
      iVar5 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar5;
    } while (iVar5 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 147949c7c FUN_147949c7c body=349 status=ok
// SIG undefined FUN_147949c7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147949c7c(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  
  iVar4 = (int)param_2[3] + 1;
  *(int *)(param_2 + 3) = iVar4;
  auVar3 = _DAT_149934d80;
  if (iVar4 < (int)param_2[2]) {
    do {
      uVar8 = *(undefined8 *)(param_2[1] + (longlong)iVar4 * 0x18);
      pdVar1 = *(double **)(param_2[1] + 0x10 + (longlong)iVar4 * 0x18);
      iVar4 = FUN_1479497be(*param_1,uVar8);
      uVar2 = *param_1;
      uVar5 = FUN_145cd0c96();
      pdVar6 = (double *)FUN_14792a902(uVar2,uVar5,uVar8);
      uVar8 = FUN_14792fa86(*param_2,*(undefined4 *)
                                      (param_2[1] + 8 + (longlong)(int)param_2[3] * 0x18));
      if (iVar4 == -1) {
        dVar12 = (double)(float)uVar8;
        dVar9 = *pdVar1 * dVar12;
        dVar10 = pdVar1[1] * dVar12;
        dVar11 = dVar12 * pdVar1[2];
        dVar12 = dVar12 * pdVar1[3];
      }
      else {
        FUN_147949264(pdVar6,pdVar1,uVar8,*(undefined4 *)(*param_2 + 0x48));
        dVar9 = *pdVar6;
        dVar10 = pdVar6[1];
        dVar11 = pdVar6[2];
        dVar12 = pdVar6[3];
      }
      dVar13 = dVar11 * dVar11 + dVar9 * dVar9;
      dVar16 = dVar12 * dVar12 + dVar10 * dVar10;
      auVar14._0_8_ = dVar13 + dVar16;
      auVar14._8_8_ = dVar13 + dVar16;
      uVar7 = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
      auVar15 = sqrtpd(auVar14,auVar14);
      auVar15 = divpd(auVar3,auVar15);
      auVar17._0_8_ = auVar15._0_8_ * dVar11;
      auVar17._8_8_ = auVar15._8_8_ * dVar12;
      *pdVar6 = (double)((ulonglong)(dVar9 * auVar15._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
      pdVar6[1] = (double)((ulonglong)(dVar10 * auVar15._8_8_) & uVar7);
      auVar15._8_4_ = (int)uVar7;
      auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
      auVar15._12_4_ = (int)(uVar7 >> 0x20);
      auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar15);
      *(undefined1 (*) [16])(pdVar6 + 2) = auVar15;
      iVar4 = (int)param_2[3] + 1;
      *(int *)(param_2 + 3) = iVar4;
    } while (iVar4 < (int)param_2[2]);
  }
  return;
}



// FUNCTION 147949dda FUN_147949dda body=550 status=ok
// SIG undefined FUN_147949dda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147949dda(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  iVar8 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar8;
  auVar7 = _DAT_149934d80;
  if (iVar8 < *(int *)(param_2 + 0x10)) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar8 * 0x18);
      pdVar2 = *(double **)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar8 * 0x18);
      FUN_1479497be(*param_1,uVar1);
      uVar3 = *param_1;
      uVar9 = FUN_145cd0c96();
      pdVar10 = (double *)FUN_14792a902(uVar3,uVar9,uVar1);
      dVar5 = *pdVar2;
      dVar6 = pdVar2[1];
      dVar11 = pdVar2[2] * -1.0;
      dVar13 = pdVar2[3] * 1.0;
      dVar15 = pdVar10[3];
      dVar16 = pdVar10[3];
      dVar17 = pdVar10[1];
      dVar22 = pdVar10[1];
      dVar18 = pdVar10[2];
      dVar23 = pdVar10[2];
      dVar12 = (dVar11 * dVar17 + (*pdVar10 * dVar13 * 1.0 - dVar15 * dVar5)) -
               dVar6 * dVar18 * -1.0;
      dVar14 = (dVar13 * dVar22 + (*pdVar10 * dVar11 * -1.0 - dVar16 * dVar6)) -
               dVar5 * dVar23 * 1.0;
      dVar15 = dVar13 * dVar18 * 1.0 + dVar5 * dVar17 + (dVar11 * dVar15 - *pdVar10 * dVar6 * 1.0);
      dVar16 = dVar11 * dVar23 * -1.0 + dVar6 * dVar22 + (dVar13 * dVar16 - *pdVar10 * dVar5 * -1.0)
      ;
      dVar17 = dVar15 * dVar15 + dVar12 * dVar12;
      dVar22 = dVar16 * dVar16 + dVar14 * dVar14;
      auVar19._0_8_ = dVar17 + dVar22;
      auVar19._8_8_ = dVar17 + dVar22;
      auVar20 = sqrtpd(auVar19,auVar19);
      auVar20 = divpd(auVar7,auVar20);
      auVar24._0_8_ = auVar20._0_8_ * dVar15;
      auVar24._8_8_ = auVar20._8_8_ * dVar16;
      dVar16 = (double)((ulonglong)(dVar12 * auVar20._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
      dVar15 = (double)((ulonglong)(dVar14 * auVar20._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar20);
      dVar17 = auVar20._0_8_;
      dVar22 = auVar20._8_8_;
      dVar18 = dVar17 * dVar17 + dVar16 * dVar16;
      dVar23 = dVar22 * dVar22 + dVar15 * dVar15;
      auVar21._0_8_ = dVar18 + dVar23;
      auVar21._8_8_ = dVar18 + dVar23;
      auVar20 = sqrtpd(auVar21,auVar21);
      auVar20 = divpd(auVar7,auVar20);
      auVar25._0_8_ = auVar20._0_8_ * dVar17;
      auVar25._8_8_ = auVar20._8_8_ * dVar22;
      *pdVar10 = (double)((ulonglong)(dVar16 * auVar20._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
      pdVar10[1] = (double)((ulonglong)(dVar15 * auVar20._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
      auVar4._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
      auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
      auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar4);
      *(undefined1 (*) [16])(pdVar10 + 2) = auVar20;
      iVar8 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar8;
    } while (iVar8 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14794a000 FUN_14794a000 body=330 status=ok
// SIG undefined FUN_14794a000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14794a000(double *param_1,double *param_2,float param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  undefined1 auVar6 [16];
  double dVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  dVar7 = (double)param_3;
  uVar1 = -(ulonglong)
           (0.0 <= param_1[3] * param_2[3] +
                   param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]);
  dVar12 = (double)(~uVar1 & (ulonglong)-(1.0 - dVar7) | (ulonglong)(1.0 - dVar7) & uVar1);
  dVar4 = *param_1 * dVar12 + *param_2 * dVar7;
  dVar3 = param_1[1] * dVar12 + param_2[1] * dVar7;
  dVar5 = dVar12 * param_1[2] + dVar7 * param_2[2];
  dVar7 = dVar12 * param_1[3] + dVar7 * param_2[3];
  dVar12 = dVar5 * dVar5 + dVar4 * dVar4;
  dVar11 = dVar7 * dVar7 + dVar3 * dVar3;
  auVar8._0_8_ = dVar12 + dVar11;
  auVar8._8_8_ = dVar12 + dVar11;
  auVar6._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar9);
  auVar14._0_8_ = auVar9._0_8_ * dVar5;
  auVar14._8_8_ = auVar9._8_8_ * dVar7;
  dVar7 = (double)((ulonglong)(dVar4 * auVar9._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_));
  dVar4 = (double)((ulonglong)(dVar3 * auVar9._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_));
  auVar6 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar6);
  auVar9._0_8_ = dVar7 * dVar7;
  auVar9._8_8_ = dVar4 * dVar4;
  dVar3 = auVar6._0_8_;
  dVar5 = auVar6._8_8_;
  dVar12 = dVar3 * dVar3 + auVar9._0_8_;
  dVar11 = dVar5 * dVar5 + auVar9._8_8_;
  auVar10._0_8_ = dVar12 + dVar11;
  auVar10._8_8_ = dVar12 + dVar11;
  auVar6 = sqrtpd(auVar9,auVar10);
  auVar6 = divpd(_DAT_149934d80,auVar6);
  auVar13._0_8_ = auVar6._0_8_ * dVar3;
  auVar13._8_8_ = auVar6._8_8_ * dVar5;
  *param_1 = (double)((ulonglong)(dVar7 * auVar6._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_));
  param_1[1] = (double)((ulonglong)(dVar4 * auVar6._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_));
  auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_);
  auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
  auVar6 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar13,auVar2);
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  return;
}



// FUNCTION 14794a14a FUN_14794a14a body=61 status=ok
// SIG undefined FUN_14794a14a(void)

longlong FUN_14794a14a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1408cc5f4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14794a188 FUN_14794a188 body=29 status=ok
// SIG undefined FUN_14794a188(void)

undefined8 FUN_14794a188(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794a1a6 FUN_14794a1a6 body=202 status=ok
// SIG undefined FUN_14794a1a6(void)

void FUN_14794a1a6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x30;
    local_70 = param_3;
    local_68 = param_1;
    do {
      local_50 = 0xffffffff;
      local_60 = param_2;
      local_58 = lVar1;
      FUN_14794a4ac(&local_70,&local_60);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  local_58 = param_2[2];
  local_50 = (undefined4)param_2[3];
  local_48 = 0xffffffff;
  local_70 = param_3;
  local_68 = param_1;
  local_60 = param_2;
  FUN_14794a520();
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794a272 FUN_14794a272 body=202 status=ok
// SIG undefined FUN_14794a272(void)

void FUN_14794a272(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x30;
    local_70 = param_3;
    local_68 = param_1;
    do {
      local_50 = 0xffffffff;
      local_60 = param_2;
      local_58 = lVar1;
      FUN_14794a5b4(&local_70,&local_60);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  local_58 = param_2[2];
  local_50 = (undefined4)param_2[3];
  local_48 = 0xffffffff;
  local_70 = param_3;
  local_68 = param_1;
  local_60 = param_2;
  FUN_14794a6ee();
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794a33e FUN_14794a33e body=100 status=ok
// SIG undefined FUN_14794a33e(void)

void FUN_14794a33e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14794a912(&local_38,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794a3a4 FUN_14794a3a4 body=100 status=ok
// SIG undefined FUN_14794a3a4(void)

void FUN_14794a3a4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14794a9a0(&local_38,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794a40a FUN_14794a40a body=100 status=ok
// SIG undefined FUN_14794a40a(void)

void FUN_14794a40a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_18 = *(undefined4 *)(param_2 + 0x18);
  local_10 = 0xffffffff;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14794aa88(&local_38,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794a470 FUN_14794a470 body=60 status=ok
// SIG undefined FUN_14794a470(void)

void FUN_14794a470(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 <= 0.5) {
    param_3 = param_2;
  }
  uVar1 = FUN_14479d2ce(param_1 + 8);
  FUN_1449b16b6(uVar1,param_5,param_3,1);
  return;
}



// FUNCTION 14794a4ac FUN_14794a4ac body=116 status=ok
// SIG undefined FUN_14794a4ac(void)

void FUN_14794a4ac(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[1];
  uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x20);
  FUN_1479381c0(uVar3);
  uVar4 = *param_1;
  uVar2 = FUN_14479d2ce(lVar1 + 8);
  uVar3 = FUN_147946670(uVar4,uVar2,uVar3);
  uVar4 = FUN_14479d2ce(lVar1 + 8);
  FUN_1449b16b6(uVar4,uVar3,
                *(undefined8 *)
                 (**(longlong **)(param_2 + 8) +
                 (longlong)*(int *)((longlong)*(longlong **)(param_2 + 8) + 0x2c) * 8),1);
  return;
}



// FUNCTION 14794a520 FUN_14794a520 body=147 status=ok
// SIG undefined FUN_14794a520(void)

void FUN_14794a520(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  iVar2 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar2;
  if (iVar2 < *(int *)(param_2 + 0x10)) {
    do {
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar2 * 0x18);
      uVar5 = *param_1;
      uVar3 = FUN_14479d2ce(lVar1 + 8);
      uVar4 = FUN_147946670(uVar5,uVar3,uVar4);
      uVar5 = FUN_14479d2ce(lVar1 + 8);
      FUN_1449b16b6(uVar5,uVar4,
                    *(undefined8 *)
                     (*(longlong *)(param_2 + 8) + 0x10 + (longlong)*(int *)(param_2 + 0x18) * 0x18)
                    ,1);
      iVar2 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar2;
    } while (iVar2 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14794a5b4 FUN_14794a5b4 body=104 status=ok
// SIG undefined FUN_14794a5b4(void)

void FUN_14794a5b4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  lVar1 = param_1[1];
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x20);
  uVar2 = FUN_14479d2ce(lVar1 + 8);
  uVar3 = FUN_14792a902(uVar3,uVar2,uVar4);
  uVar4 = FUN_14479d2ce(lVar1 + 8);
  uVar2 = FUN_14794a61c(param_2);
  FUN_1449b16b6(uVar4,uVar3,uVar2,1);
  return;
}



// FUNCTION 14794a61c FUN_14794a61c body=209 status=ok
// SIG undefined FUN_14794a61c(void)

undefined8 FUN_14794a61c(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar5 = plVar2[3];
  lVar3 = -1;
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = plVar2[2];
    iVar4 = -1;
    lVar7 = 0;
    fVar9 = -1.0;
    do {
      iVar1 = *(int *)(lVar6 + lVar7);
      fVar8 = (float)FUN_14792f4f2(*param_1,iVar1);
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar7 = lVar7 + 4;
      fVar9 = fVar8;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    plVar2 = (longlong *)param_1[1];
    if ((longlong)(int)plVar2[3] != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(plVar2[2] + lVar6) == iVar4) {
          lVar3 = lVar5 >> 0x20;
          break;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar2[3] * 4 != lVar6);
    }
  }
  return *(undefined8 *)(*plVar2 + lVar3 * 8);
}



// FUNCTION 14794a6ee FUN_14794a6ee body=278 status=ok
// SIG undefined FUN_14794a6ee(void)

void FUN_14794a6ee(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar7 = param_1[1];
  iVar3 = (int)param_2[3] + 1;
  *(int *)(param_2 + 3) = iVar3;
  if (iVar3 < (int)param_2[2]) {
    lVar7 = lVar7 + 8;
    do {
      uVar5 = *(undefined8 *)(param_2[1] + (longlong)iVar3 * 0x18);
      uVar1 = *param_1;
      uVar4 = FUN_14479d2ce(lVar7);
      iVar3 = FUN_14794a804(uVar1,uVar4,uVar5);
      fVar8 = (float)FUN_14792f4f2(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 + (longlong)(int)param_2[3] * 0x18),
                                   *(undefined4 *)
                                    (*(longlong *)(param_2[1] + (longlong)(int)param_2[3] * 0x18) +
                                    0x10));
      if ((iVar3 == -1) || (1e-05 < fVar8)) {
        uVar1 = *param_1;
        uVar4 = FUN_14479d2ce(lVar7);
        uVar5 = FUN_14792a902(uVar1,uVar4,uVar5);
        lVar6 = (longlong)(int)param_2[3];
        lVar2 = param_2[1];
        if ((iVar3 == -1) ||
           (*(int *)(*(longlong *)(*param_2 + 0x60) +
                    (longlong)*(int *)(*(longlong *)(lVar2 + lVar6 * 0x18) + 0x10) * 4) ==
            *(int *)(lVar2 + 8 + lVar6 * 0x18))) {
          uVar1 = *(undefined8 *)(lVar2 + 0x10 + lVar6 * 0x18);
          uVar4 = FUN_14479d2ce(lVar7);
          FUN_1449b16b6(uVar4,uVar5,uVar1,1);
        }
      }
      iVar3 = (int)param_2[3] + 1;
      *(int *)(param_2 + 3) = iVar3;
    } while (iVar3 < (int)param_2[2]);
  }
  return;
}



// FUNCTION 14794a804 FUN_14794a804 body=270 status=ok
// SIG undefined FUN_14794a804(void)

int FUN_14794a804(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_1[7];
  if ((longlong)(int)lVar2 == 0) {
    return -1;
  }
  lVar5 = param_1[6];
  uVar3 = 0;
  lVar4 = 0;
  while (cVar1 = FUN_1400063ec(lVar5 + uVar3,param_2), cVar1 == '\0') {
    lVar4 = lVar4 + 0x100000000;
    uVar3 = uVar3 + 8;
    if ((longlong)(int)lVar2 * 8 == uVar3) {
      return -1;
    }
  }
  if ((int)(~uVar3 >> 3) == 0) {
    return -1;
  }
  lVar5 = (lVar4 >> 0x20) * 0x10;
  lVar2 = (longlong)*(int *)(*param_1 + 8 + lVar5);
  if (lVar2 == 0) {
    return -1;
  }
  lVar4 = 0;
  do {
    if (*(int *)(*(longlong *)(*param_1 + lVar5) + lVar4) == (int)param_3[2]) {
      lVar2 = (longlong)*(int *)(param_1[2] + 8 + lVar5);
      if (lVar2 == 0) {
        return -1;
      }
      lVar5 = *(longlong *)(param_1[2] + lVar5);
      uVar3 = 0;
      while (((*(int *)(lVar5 + 0x10 + uVar3) != (int)param_3[2] ||
              (*(longlong *)(lVar5 + 8 + uVar3) != param_3[1])) ||
             (*(longlong *)(lVar5 + uVar3) != *param_3))) {
        uVar3 = uVar3 + 0x14;
        if (lVar2 * 0x14 == uVar3) {
          return -1;
        }
      }
      return (int)(uVar3 >> 2) * -0x33333333;
    }
    lVar4 = lVar4 + 4;
  } while (lVar2 * 4 != lVar4);
  return -1;
}



// FUNCTION 14794a912 FUN_14794a912 body=142 status=ok
// SIG undefined FUN_14794a912(void)

void FUN_14794a912(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1[1];
  iVar3 = *(int *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar3;
  if (iVar3 < *(int *)(param_2 + 0x10)) {
    do {
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 8) + (longlong)iVar3 * 0x18);
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10 + (longlong)iVar3 * 0x18);
      uVar6 = *param_1;
      uVar4 = FUN_14479d2ce(lVar1 + 8);
      uVar5 = FUN_14792a902(uVar6,uVar4,uVar5);
      uVar6 = FUN_14479d2ce(lVar1 + 8);
      FUN_1449b16b6(uVar6,uVar5,uVar2,1);
      iVar3 = *(int *)(param_2 + 0x18) + 1;
      *(int *)(param_2 + 0x18) = iVar3;
    } while (iVar3 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14794a9a0 FUN_14794a9a0 body=231 status=ok
// SIG undefined FUN_14794a9a0(void)

void FUN_14794a9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  
  lVar6 = param_1[1];
  iVar2 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar2;
  if (iVar2 < *(int *)(param_2 + 2)) {
    lVar6 = lVar6 + 8;
    do {
      uVar4 = *(undefined8 *)(param_2[1] + (longlong)iVar2 * 0x18);
      uVar1 = *(undefined8 *)(param_2[1] + 0x10 + (longlong)iVar2 * 0x18);
      uVar5 = *param_1;
      uVar3 = FUN_14479d2ce(lVar6);
      iVar2 = FUN_14794a804(uVar5,uVar3,uVar4);
      uVar5 = *param_1;
      uVar3 = FUN_14479d2ce(lVar6);
      uVar4 = FUN_14792a902(uVar5,uVar3,uVar4);
      fVar7 = (float)FUN_14792fa86(*param_2,*(undefined4 *)
                                             (param_2[1] + 8 +
                                             (longlong)*(int *)(param_2 + 3) * 0x18));
      if ((iVar2 == -1) || (0.5 < fVar7)) {
        uVar5 = FUN_14479d2ce(lVar6);
        FUN_1449b16b6(uVar5,uVar4,uVar1,1);
      }
      iVar2 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar2;
    } while (iVar2 < *(int *)(param_2 + 2));
  }
  return;
}



// FUNCTION 14794aa88 FUN_14794aa88 body=255 status=ok
// SIG undefined FUN_14794aa88(void)

void FUN_14794aa88(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[1];
  iVar1 = *(int *)(param_2 + 3) + 1;
  *(int *)(param_2 + 3) = iVar1;
  if (iVar1 < *(int *)(param_2 + 2)) {
    lVar5 = lVar5 + 8;
    do {
      local_48 = *(undefined8 *)(param_2[1] + 0x10 + (longlong)iVar1 * 0x18);
      uVar3 = *(undefined8 *)(param_2[1] + (longlong)iVar1 * 0x18);
      uVar4 = *param_1;
      uVar2 = FUN_14479d2ce(lVar5);
      iVar1 = FUN_14794a804(uVar4,uVar2,uVar3);
      uVar4 = *param_1;
      uVar2 = FUN_14479d2ce(lVar5);
      uVar3 = FUN_14792a902(uVar4,uVar2,uVar3);
      FUN_14792fa86(*param_2,*(undefined4 *)
                              (param_2[1] + 8 + (longlong)*(int *)(param_2 + 3) * 0x18));
      if (iVar1 == -1) {
        uVar4 = FUN_14479d2ce(lVar5);
        FUN_1449b16b6(uVar4,uVar3,&local_48,1);
      }
      iVar1 = *(int *)(param_2 + 3) + 1;
      *(int *)(param_2 + 3) = iVar1;
    } while (iVar1 < *(int *)(param_2 + 2));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794ac46 FUN_14794ac46 body=74 status=ok
// SIG undefined FUN_14794ac46(void)

undefined8 * FUN_14794ac46(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df7f0;
  puVar1 = TlsGetValue(DAT_14c7612e8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612e8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794ac90 FUN_14794ac90 body=147 status=ok
// SIG undefined FUN_14794ac90(void)

void FUN_14794ac90(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14794ad24 FUN_14794ad24 body=62 status=ok
// SIG undefined FUN_14794ad24(void)

void FUN_14794ad24(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14794ad62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 14794ad62 FUN_14794ad62 body=112 status=ok
// SIG undefined FUN_14794ad62(void)

ulonglong FUN_14794ad62(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14794ad9c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14794ad9c:
  return param_2 & 0xffffffff;
}



// FUNCTION 14794adea FUN_14794adea body=29 status=ok
// SIG undefined FUN_14794adea(void)

undefined8 FUN_14794adea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794ae08 FUN_14794ae08 body=82 status=ok
// SIG undefined FUN_14794ae08(void)

void FUN_14794ae08(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x70),
              (longlong)*(int *)((longlong)param_1 + 0x78) * 0x1c);
      FUN_1446efa72((longlong)param_1 + 0x70,0,0,0x1c);
      return;
    }
  }
  return;
}



// FUNCTION 14794ae5a FUN_14794ae5a body=146 status=ok
// SIG undefined FUN_14794ae5a(void)

void FUN_14794ae5a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,0x1c);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 * 0x1c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,0x1c);
  return;
}



// FUNCTION 14794aeec FUN_14794aeec body=92 status=ok
// SIG undefined FUN_14794aeec(void)

void FUN_14794aeec(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x38 + *param_1);
  FUN_140280a77(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14794af48 FUN_14794af48 body=62 status=ok
// SIG undefined FUN_14794af48(void)

void FUN_14794af48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14794af86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14794af86 FUN_14794af86 body=104 status=ok
// SIG undefined FUN_14794af86(void)

ulonglong FUN_14794af86(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14794afbc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_14794afbc:
  return param_2 & 0xffffffff;
}



// FUNCTION 14794afee FUN_14794afee body=115 status=ok
// SIG undefined FUN_14794afee(void)

void FUN_14794afee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14794b062 FUN_14794b062 body=48 status=ok
// SIG undefined FUN_14794b062(void)

void FUN_14794b062(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 14794b092 FUN_14794b092 body=147 status=ok
// SIG undefined FUN_14794b092(void)

void FUN_14794b092(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14794b126 FUN_14794b126 body=115 status=ok
// SIG undefined FUN_14794b126(void)

void FUN_14794b126(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14794b19a FUN_14794b19a body=62 status=ok
// SIG undefined FUN_14794b19a(void)

void FUN_14794b19a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14794b1d8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14794b1d8 FUN_14794b1d8 body=93 status=ok
// SIG undefined FUN_14794b1d8(void)

ulonglong FUN_14794b1d8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14794b24c FUN_14794b24c body=74 status=ok
// SIG undefined FUN_14794b24c(void)

undefined8 * FUN_14794b24c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df830;
  puVar1 = TlsGetValue(DAT_14c7612ec);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612ec,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794b296 FUN_14794b296 body=132 status=ok
// SIG undefined FUN_14794b296(void)

void FUN_14794b296(longlong param_1,int param_2)

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



// FUNCTION 14794b31c FUN_14794b31c body=147 status=ok
// SIG undefined FUN_14794b31c(void)

void FUN_14794b31c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14794b3b0 FUN_14794b3b0 body=74 status=ok
// SIG undefined FUN_14794b3b0(void)

undefined8 * FUN_14794b3b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df840;
  puVar1 = TlsGetValue(DAT_14c7612f0);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612f0,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794b3fa FUN_14794b3fa body=230 status=ok
// SIG undefined FUN_14794b3fa(void)

int * FUN_14794b3fa(longlong *param_1,int *param_2)

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



// FUNCTION 14794b4e0 FUN_14794b4e0 body=128 status=ok
// SIG undefined FUN_14794b4e0(void)

undefined8 FUN_14794b4e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14794b560((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14794b560 FUN_14794b560 body=114 status=ok
// SIG undefined FUN_14794b560(void)

void FUN_14794b560(longlong *param_1,int param_2)

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



// FUNCTION 14794b5d2 FUN_14794b5d2 body=473 status=ok
// SIG undefined FUN_14794b5d2(void)

void FUN_14794b5d2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14794b7ac FUN_14794b7ac body=322 status=ok
// SIG undefined FUN_14794b7ac(void)

void FUN_14794b7ac(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 14794b8f0 FUN_14794b8f0 body=335 status=ok
// SIG undefined FUN_14794b8f0(void)

undefined4 * FUN_14794b8f0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14794b3fa(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14794b4e0(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14794b5d2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794ba40 FUN_14794ba40 body=197 status=ok
// SIG undefined FUN_14794ba40(void)

void FUN_14794ba40(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    uVar7 = 0;
    do {
      cVar5 = FUN_144a7afa6(lVar3 + 8 + uVar7,param_2 + 1);
      if (cVar5 != '\0') {
        if ((int)(uVar7 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar7 = uVar7 + 0x28;
    } while ((longlong)(int)lVar6 * 0x28 != uVar7);
  }
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1417b88b4(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar6 * 0x28) = *param_2;
  uVar4 = param_2[2];
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar6 * 0x28);
  *puVar1 = param_2[1];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x24 + lVar6 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return;
}



// FUNCTION 14794bb06 FUN_14794bb06 body=251 status=ok
// SIG undefined FUN_14794bb06(void)

void FUN_14794bb06(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  lVar8 = param_1[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar3 = *param_1;
    uVar10 = 0;
    do {
      cVar7 = FUN_144a7afa6(lVar3 + 8 + uVar10,param_2 + 1);
      if (cVar7 != '\0') {
        if ((int)(uVar10 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar10 = uVar10 + 0x28;
    } while ((longlong)(int)lVar8 * 0x28 != uVar10);
  }
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1417b88b4(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar8 * 0x28) = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar8 * 0x28);
  *puVar1 = *(undefined4 *)(param_2 + 1);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
  iVar2 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(lVar3 + 0x20 + lVar8 * 0x28) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar8 * 0x28 + 0x24) = 0;
    return;
  }
  puVar9 = (undefined8 *)(lVar3 + lVar8 * 0x28 + 0x18);
  FUN_1446dd670(puVar9,iVar2,0);
  memcpy((void *)*puVar9,_Src,(longlong)iVar2 * 2);
  return;
}



// FUNCTION 14794bc02 FUN_14794bc02 body=31 status=ok
// SIG undefined FUN_14794bc02(void)

undefined8 FUN_14794bc02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14794bc38 FUN_14794bc38 body=93 status=ok
// SIG undefined FUN_14794bc38(void)

void FUN_14794bc38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a46d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7df850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14794bc96 FUN_14794bc96 body=93 status=ok
// SIG undefined FUN_14794bc96(void)

void FUN_14794bc96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a46d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7df850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14794bcf4 FUN_14794bcf4 body=126 status=ok
// SIG undefined FUN_14794bcf4(void)

void FUN_14794bcf4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a46d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7df850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014794bd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14794bd7e FUN_14794bd7e body=22 status=ok
// SIG undefined FUN_14794bd7e(void)

undefined8 FUN_14794bd7e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14794bd94 FUN_14794bd94 body=114 status=ok
// SIG undefined FUN_14794bd94(void)

void FUN_14794bd94(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14794be06 FUN_14794be06 body=446 status=ok
// SIG undefined FUN_14794be06(void)

void FUN_14794be06(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x18),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x18));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14794bfc6 FUN_14794bfc6 body=436 status=ok
// SIG undefined FUN_14794bfc6(void)

void FUN_14794bfc6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14794c17c FUN_14794c17c body=114 status=ok
// SIG undefined FUN_14794c17c(void)

void FUN_14794c17c(longlong *param_1,int param_2)

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



// FUNCTION 14794c1ee FUN_14794c1ee body=87 status=ok
// SIG undefined FUN_14794c1ee(void)

int * FUN_14794c1ee(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x18) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 14794c246 FUN_14794c246 body=288 status=ok
// SIG undefined FUN_14794c246(void)

undefined4 * FUN_14794c246(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14794c368(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_14794c44e(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14794be06(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794c368 FUN_14794c368 body=230 status=ok
// SIG undefined FUN_14794c368(void)

int * FUN_14794c368(longlong *param_1,int *param_2)

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



// FUNCTION 14794c44e FUN_14794c44e body=155 status=ok
// SIG undefined FUN_14794c44e(void)

undefined8 FUN_14794c44e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18) == param_3[1])
           ) {
          FUN_140f76f64(*(undefined8 *)(piVar1 + 2));
          iVar2 = param_3[1];
          iVar3 = param_3[2];
          iVar4 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_14794c4ea(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = piVar1[4];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14794c4ea FUN_14794c4ea body=114 status=ok
// SIG undefined FUN_14794c4ea(void)

void FUN_14794c4ea(longlong *param_1,int param_2)

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



// FUNCTION 14794c55c FUN_14794c55c body=53 status=ok
// SIG undefined FUN_14794c55c(void)

ulonglong FUN_14794c55c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14794c592 FUN_14794c592 body=87 status=ok
// SIG undefined FUN_14794c592(void)

void FUN_14794c592(longlong *param_1,int param_2)

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
  FUN_14794c5ea();
  return;
}



// FUNCTION 14794c5ea FUN_14794c5ea body=45 status=ok
// SIG undefined FUN_14794c5ea(void)

void FUN_14794c5ea(longlong *param_1,int param_2)

{
  FUN_140f76f64(*(undefined8 *)(*param_1 + 8 + (longlong)param_2 * 0x18));
  FUN_14794c4ea(param_1,param_2);
  return;
}



// FUNCTION 14794c618 FUN_14794c618 body=87 status=ok
// SIG undefined FUN_14794c618(void)

void FUN_14794c618(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_14794c6a6();
  return;
}



// FUNCTION 14794c670 FUN_14794c670 body=53 status=ok
// SIG undefined FUN_14794c670(void)

ulonglong FUN_14794c670(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14794c6a6 FUN_14794c6a6 body=114 status=ok
// SIG undefined FUN_14794c6a6(void)

void FUN_14794c6a6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 14794c718 FUN_14794c718 body=201 status=ok
// SIG undefined FUN_14794c718(void)

void FUN_14794c718(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x14;
  lVar9 = (longlong)*(int *)(lVar1 + 0x10);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0xc + lVar9 * 0x14);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x14 + 0xc);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0xc);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14794c7e2 FUN_14794c7e2 body=230 status=ok
// SIG undefined FUN_14794c7e2(void)

int * FUN_14794c7e2(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14794c8c8 FUN_14794c8c8 body=141 status=ok
// SIG undefined FUN_14794c8c8(void)

undefined8 FUN_14794c8c8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_14794c956();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_14794c6a6(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_14794c8ec;
    }
  }
  uVar3 = 0;
LAB_14794c8ec:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794c956 FUN_14794c956 body=180 status=ok
// SIG undefined FUN_14794c956(void)

int FUN_14794c956(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14794c670(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14794c9e4;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14794c9e4:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794ca0c FUN_14794ca0c body=147 status=ok
// SIG undefined FUN_14794ca0c(void)

void FUN_14794ca0c(longlong param_1,int param_2)

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



// FUNCTION 14794caa0 FUN_14794caa0 body=81 status=ok
// SIG undefined FUN_14794caa0(void)

void FUN_14794caa0(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14794caf2(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14794caf2 FUN_14794caf2 body=87 status=ok
// SIG undefined FUN_14794caf2(void)

void FUN_14794caf2(longlong *param_1,int param_2)

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
  FUN_14794cb4a();
  return;
}



// FUNCTION 14794cb4a FUN_14794cb4a body=45 status=ok
// SIG undefined FUN_14794cb4a(void)

void FUN_14794cb4a(longlong *param_1,int param_2)

{
  FUN_140f76f64(*(undefined8 *)(*param_1 + 8 + (longlong)param_2 * 0x18));
  FUN_14794c17c(param_1,param_2);
  return;
}



// FUNCTION 14794cb78 FUN_14794cb78 body=138 status=ok
// SIG undefined FUN_14794cb78(void)

void FUN_14794cb78(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14794cc02 FUN_14794cc02 body=68 status=ok
// SIG undefined FUN_14794cc02(void)

void FUN_14794cc02(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14794cc46();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14794cc46 FUN_14794cc46 body=322 status=ok
// SIG undefined FUN_14794cc46(void)

void FUN_14794cc46(longlong *param_1)

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



// FUNCTION 14794cd8a FUN_14794cd8a body=48 status=ok
// SIG undefined FUN_14794cd8a(void)

void FUN_14794cd8a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 14794cdba FUN_14794cdba body=62 status=ok
// SIG undefined FUN_14794cdba(void)

void FUN_14794cdba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14794cdf8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 14794cdf8 FUN_14794cdf8 body=93 status=ok
// SIG undefined FUN_14794cdf8(void)

ulonglong FUN_14794cdf8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 14794ce56 FUN_14794ce56 body=129 status=ok
// SIG undefined FUN_14794ce56(void)

longlong FUN_14794ce56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14794ced7();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14499e768(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14794ced7 FUN_14794ced7 body=886 status=ok
// SIG undefined FUN_14794ced7(void)

longlong * FUN_14794ced7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar6 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        puVar7 = (undefined4 *)((longlong)iVar8 * 0x10 + *local_80);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar7 = puVar7 + 1;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_140201afa(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar6 = local_68;
    if (0 < (int)local_50) {
      iVar8 = 0;
      do {
        FUN_144a49c02(param_2,&local_80);
        puVar4 = local_78;
        *local_78 = 0;
        *(undefined4 *)(local_78 + 1) = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_78,4);
          }
          else {
            FUN_14572512c(param_1,local_78);
          }
        }
        else {
          *(undefined4 *)local_78 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar7 = (undefined4 *)((longlong)puVar4 + 4);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar8 = iVar8 + 1;
        uVar6 = local_68;
      } while (iVar8 < (int)local_50);
    }
  }
  local_68 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14794d24e FUN_14794d24e body=251 status=ok
// SIG undefined FUN_14794d24e(void)

int * FUN_14794d24e(longlong *param_1,int *param_2)

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
      FUN_1401600aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 14794d34a FUN_14794d34a body=486 status=ok
// SIG undefined FUN_14794d34a(void)

void FUN_14794d34a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x88;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x84 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 14794d532 FUN_14794d532 body=391 status=ok
// SIG undefined FUN_14794d532(void)

undefined4 * FUN_14794d532(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14794d6ba();
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48;
  lVar12 = 0;
  uVar13 = 0;
  bVar6 = true;
  do {
    bVar7 = bVar6;
    uVar10 = *(ulonglong *)(local_40 + lVar12 * 2);
    uVar9 = (uint)(uVar10 >> 0x10);
    uVar13 = (int)((uVar10 & 0xffff) >> 4) +
             (int)(uVar10 >> 0x20) + (int)(uVar10 & 0xffff) +
             (uVar13 >> 2) + uVar13 * 0x40 + (int)uVar10 * 0x10000 +
             (uVar9 << 0x13 | uVar9 & 0xffff) + 0x9e3779b9 ^ uVar13;
    lVar12 = 1;
    bVar6 = false;
  } while (bVar7);
  cVar8 = FUN_14794d7a0(param_1,uVar13,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar8 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar13 = *(int *)(param_1 + 0x48) - 1U & uVar13;
      local_40[7] = uVar13;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4
                     );
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14794d8e4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794d6ba FUN_14794d6ba body=229 status=ok
// SIG undefined FUN_14794d6ba(void)

int * FUN_14794d6ba(longlong *param_1,int *param_2)

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



// FUNCTION 14794d7a0 FUN_14794d7a0 body=93 status=ok
// SIG undefined FUN_14794d7a0(void)

undefined8 FUN_14794d7a0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14794d7fe(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14794d872(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14794d7fe FUN_14794d7fe body=116 status=ok
// SIG undefined FUN_14794d7fe(void)

int FUN_14794d7fe(longlong *param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = 0;
        bVar5 = true;
        while (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20 + lVar3 * 8) ==
               *(longlong *)(param_3 + lVar3 * 8)) {
          lVar3 = 1;
          bVar1 = !bVar5;
          bVar5 = false;
          if (bVar1) {
            return iVar2;
          }
        }
        iVar2 = *(int *)(*param_1 + 0x18 + (longlong)iVar2 * 0x20);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14794d872 FUN_14794d872 body=114 status=ok
// SIG undefined FUN_14794d872(void)

void FUN_14794d872(longlong *param_1,int param_2)

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



// FUNCTION 14794d8e4 FUN_14794d8e4 body=540 status=ok
// SIG undefined FUN_14794d8e4(void)

void FUN_14794d8e4(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar6 = (longlong)iVar5 * 0x20 + *local_80;
        lVar12 = 0;
        uVar11 = 0;
        bVar3 = true;
        do {
          bVar8 = bVar3;
          uVar2 = *(ulonglong *)(lVar6 + lVar12 * 8);
          uVar13 = (uint)(uVar2 >> 0x10);
          uVar13 = (int)((uVar2 & 0xffff) >> 4) +
                   (int)(uVar2 >> 0x20) + (int)(uVar2 & 0xffff) +
                   (int)(uVar11 >> 2) + (uint)uVar11 * 0x40 + (int)uVar2 * 0x10000 +
                   (uVar13 << 0x13 | uVar13 & 0xffff) + 0x9e3779b9 ^ (uint)uVar11;
          uVar11 = (ulonglong)uVar13;
          lVar12 = 1;
          bVar3 = false;
        } while (bVar8);
        uVar11 = (longlong)(int)uVar13 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar6 + 0x1c) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14794db02 FUN_14794db02 body=188 status=ok
// SIG undefined FUN_14794db02(void)

void FUN_14794db02(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x88);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x88) == *param_3) {
          FUN_14793de3e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x80);
          FUN_14794dcc8(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14794db7f;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14794db7f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14794dbbe FUN_14794dbbe body=147 status=ok
// SIG undefined FUN_14794dbbe(void)

undefined8 FUN_14794dbbe(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_28 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  FUN_14794dc52(param_2,*param_1,&local_98);
  FUN_14793de3e(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794dc52 FUN_14794dc52 body=117 status=ok
// SIG undefined FUN_14794dc52(void)

undefined8 * FUN_14794dc52(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[3] = 0;
  param_1[3] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  FUN_1401fe838(param_1 + 5,param_3 + 4);
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_3 + 0xe);
  return param_1;
}



// FUNCTION 14794dcc8 FUN_14794dcc8 body=128 status=ok
// SIG undefined FUN_14794dcc8(void)

void FUN_14794dcc8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 14794dd48 FUN_14794dd48 body=132 status=ok
// SIG undefined FUN_14794dd48(void)

undefined4 * FUN_14794dd48(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  
  bVar1 = true;
  do {
    bVar2 = bVar1;
    bVar1 = false;
  } while (bVar2);
  uVar3 = FUN_14794d7fe();
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14794ddcc FUN_14794ddcc body=90 status=ok
// SIG undefined FUN_14794ddcc(void)

void FUN_14794ddcc(longlong *param_1,int param_2)

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
  FUN_14794d872();
  return;
}



// FUNCTION 14794de26 FUN_14794de26 body=95 status=ok
// SIG undefined FUN_14794de26(void)

void FUN_14794de26(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14794de86 FUN_14794de86 body=132 status=ok
// SIG undefined FUN_14794de86(void)

void FUN_14794de86(longlong param_1,int param_2)

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



// FUNCTION 14794df0c FUN_14794df0c body=89 status=ok
// SIG undefined FUN_14794df0c(void)

void FUN_14794df0c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14794df66 FUN_14794df66 body=354 status=ok
// SIG undefined FUN_14794df66(void)

undefined4 *
FUN_14794df66(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14794d24e(param_1,local_50);
  FUN_14794dbbe(param_3,local_48);
  *(undefined4 *)(local_48 + 0x10) = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = *local_48;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  local_68 = param_4;
  cVar3 = FUN_14794db02(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x84) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14794d34a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794e0ca FUN_14794e0ca body=96 status=ok
// SIG undefined FUN_14794e0ca(void)

void FUN_14794e0ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14794e12a FUN_14794e12a body=132 status=ok
// SIG undefined FUN_14794e12a(void)

void FUN_14794e12a(longlong param_1,int param_2)

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



// FUNCTION 14794e1b0 FUN_14794e1b0 body=364 status=ok
// SIG undefined FUN_14794e1b0(void)

void FUN_14794e1b0(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cacd640;
  if (DAT_14cacd648 != (undefined *)0x0) {
    puVar5 = DAT_14cacd648;
  }
  iVar4 = DAT_14cacd650 + 3;
  if (-1 < DAT_14cacd650) {
    iVar4 = DAT_14cacd650;
  }
  if (DAT_14cacd610 - DAT_14cacd63c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cacd618;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cacd630 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cacd630;
    }
    local_78 = &DAT_14cacd608;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cacd618)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cacd608 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cacd618 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cacd650) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cacd650);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14794e31e FUN_14794e31e body=143 status=ok
// SIG undefined FUN_14794e31e(void)

void FUN_14794e31e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14794e3ae FUN_14794e3ae body=146 status=ok
// SIG undefined FUN_14794e3ae(void)

longlong FUN_14794e3ae(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_14794e442();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_14794e3ed;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_14794e52e(param_1,&local_2c,param_2);
  lVar2 = (longlong)local_2c;
  lVar3 = *param_1;
LAB_14794e3ed:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x14 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794e442 FUN_14794e442 body=180 status=ok
// SIG undefined FUN_14794e442(void)

int FUN_14794e442(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14794e4f8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14794e4d0;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14794e4d0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794e4f8 FUN_14794e4f8 body=53 status=ok
// SIG undefined FUN_14794e4f8(void)

ulonglong FUN_14794e4f8(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14794e52e FUN_14794e52e body=279 status=ok
// SIG undefined FUN_14794e52e(void)

undefined4 * FUN_14794e52e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14794c7e2(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar2 = FUN_14794c8c8(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14794bfc6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14794e646 FUN_14794e646 body=132 status=ok
// SIG undefined FUN_14794e646(void)

void FUN_14794e646(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1d0);
  if (param_2 <= (int)uVar1) {
    iVar6 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1d4)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 4;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1d4) = iVar6;
    FUN_14794e6cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14794e6cc FUN_14794e6cc body=141 status=ok
// SIG undefined FUN_14794e6cc(void)

void FUN_14794e6cc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,0x70);
  return;
}



// FUNCTION 14794e75a FUN_14794e75a body=53 status=ok
// SIG undefined FUN_14794e75a(void)

ulonglong FUN_14794e75a(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14794e790 FUN_14794e790 body=319 status=ok
// SIG undefined FUN_14794e790(void)

void FUN_14794e790(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x1d0);
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x1c0);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar8 = param_1;
    }
    bVar2 = FUN_14794e8cf(lVar8,*param_2);
    iVar9 = 0;
    iVar5 = 0;
    do {
      lVar4 = (longlong)iVar5;
      iVar12 = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar4 * 0x70;
      lVar13 = lVar8 + 0x70 + lVar11;
      iVar6 = iVar5;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar12;
        if (lVar10 <= lVar4) break;
        bVar3 = FUN_14794e8cf(lVar13,*param_2);
        iVar6 = iVar6 + 1;
        lVar13 = lVar13 + 0x70;
        iVar7 = iVar6;
      } while ((bVar2 & 1) == bVar3);
      iVar12 = iVar7 - iVar5;
      if ((bVar2 & 1) == 0) {
        if (iVar9 != iVar5) {
          memmove((void *)((longlong)iVar9 * 0x70 + lVar8),(void *)(lVar11 + lVar8),
                  (longlong)iVar12 * 0x70);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_14585e30b(lVar11 + lVar8,iVar12);
      }
      iVar5 = iVar7;
      bVar2 = bVar2 ^ 1;
    } while (lVar4 < lVar10);
    *(int *)(param_1 + 0x1d0) = iVar9;
  }
  return;
}



// FUNCTION 14794e8cf FUN_14794e8cf body=91 status=ok
// SIG undefined FUN_14794e8cf(void)

undefined8 FUN_14794e8cf(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    if (*(longlong *)(param_1 + lVar5 * 8) != *(longlong *)(param_2 + lVar5 * 8)) {
      return 0;
    }
    lVar5 = 1;
    bVar2 = false;
  } while (bVar1);
  cVar3 = FUN_14794e75a(param_1 + 0x68,param_2 + 0x68);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar4 = FUN_1401246e4(param_1 + 0x60,param_2 + 0x60);
  return uVar4;
}



// FUNCTION 14794e92a FUN_14794e92a body=135 status=ok
// SIG undefined FUN_14794e92a(void)

void FUN_14794e92a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x70);
  if (*(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 0x70) != 0) {
    plVar4 = (longlong *)((longlong)_Dst + 0x40);
    if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)_Dst + 0x30);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar3 = 1;
    if (iVar5 < 1) {
      iVar3 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x70),(longlong)iVar3 * 0x70);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14794e9b2 FUN_14794e9b2 body=62 status=ok
// SIG undefined FUN_14794e9b2(void)

void FUN_14794e9b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14794e9f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,0x10);
  }
  return;
}



// FUNCTION 14794e9f0 FUN_14794e9f0 body=104 status=ok
// SIG undefined FUN_14794e9f0(void)

ulonglong FUN_14794e9f0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14794ea26;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,0x10);
      param_2 = param_2 / 0x70;
    }
  }
LAB_14794ea26:
  return param_2 & 0xffffffff;
}



// FUNCTION 14794ea58 FUN_14794ea58 body=79 status=ok
// SIG undefined FUN_14794ea58(void)

void FUN_14794ea58(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1433f3994(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1433f3994(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014794ea8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14794eaa8 FUN_14794eaa8 body=147 status=ok
// SIG undefined FUN_14794eaa8(void)

void FUN_14794eaa8(longlong param_1,int param_2)

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



// FUNCTION 14794eb3c FUN_14794eb3c body=131 status=ok
// SIG undefined FUN_14794eb3c(void)

longlong FUN_14794eb3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14794ebbf();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146b19466(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14794ebbf FUN_14794ebbf body=652 status=ok
// SIG undefined FUN_14794ebbf(void)

longlong * FUN_14794ebbf(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_140731304(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_146b19258(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_1402ac1b3(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14794ee4c FUN_14794ee4c body=131 status=ok
// SIG undefined FUN_14794ee4c(void)

longlong FUN_14794ee4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14794eecf();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14794f2c6(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14794eecf FUN_14794eecf body=784 status=ok
// SIG undefined FUN_14794eecf(void)

longlong * FUN_14794eecf(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined2 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar6 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        puVar7 = (undefined2 *)((longlong)iVar8 * 0x14 + *local_80);
        puVar4 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,2);
          }
          else {
            thunk_FUN_1457251a8(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        (**(code **)(*param_1 + 0x160))(param_1,puVar7 + 2);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined2 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined2 *)CONCAT44(uVar5,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_147943de8(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar6 = local_68;
    if (0 < (int)local_50) {
      iVar8 = 0;
      do {
        FUN_14794f1e0(param_2,&local_80);
        puVar7 = local_78;
        *local_78 = 0;
        *(undefined8 *)(local_78 + 2) = 0;
        *(undefined4 *)(local_78 + 6) = 0xffffffff;
        puVar4 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_78,2);
          }
          else {
            thunk_FUN_1457251a8(param_1,local_78);
          }
        }
        else {
          *local_78 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        (**(code **)(*param_1 + 0x160))(param_1,puVar7 + 2);
        iVar8 = iVar8 + 1;
        uVar6 = local_68;
      } while (iVar8 < (int)local_50);
    }
  }
  local_68 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14794f1e0 FUN_14794f1e0 body=230 status=ok
// SIG undefined FUN_14794f1e0(void)

int * FUN_14794f1e0(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14794f2c6 FUN_14794f2c6 body=410 status=ok
// SIG undefined FUN_14794f2c6(void)

void FUN_14794f2c6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0x14);
        *(uint *)(lVar2 + 0x10 + lVar5 * 0x14) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 14794f462 FUN_14794f462 body=131 status=ok
// SIG undefined FUN_14794f462(void)

longlong FUN_14794f462(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14794f4e5();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1478fb4da(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14794f4e5 FUN_14794f4e5 body=646 status=ok
// SIG undefined FUN_14794f4e5(void)

longlong * FUN_14794f4e5(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_58._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_5c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_5c,4);
      }
      else {
        FUN_14572512c(param_1,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_50 = param_2 + 2;
    local_58 = (undefined8 *)&DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_70 = local_48;
    uVar8 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = param_2;
    if (local_70._4_4_ < (int)local_50[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar8;
      do {
        lVar5 = *local_88;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar9 * 0x28);
        FUN_1478e29f2(param_1,lVar5 + (longlong)iVar9 * 0x28 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar8 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  else {
    local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
      }
      else {
        FUN_14572512c(param_1,&local_58);
      }
    }
    else {
      local_58 = (undefined8 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_14094692c(param_2,(ulonglong)local_58 & 0xffffffff);
    uVar8 = local_70;
    if (0 < (int)local_58) {
      iVar9 = 0;
      do {
        FUN_1478fb2ae(param_2,&local_88);
        puVar6 = local_80;
        *local_80 = 0;
        puVar3 = local_80 + 1;
        FUN_1433d28c4(puVar3);
        *(undefined4 *)(puVar6 + 4) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1,puVar6);
        FUN_1478e29f2(param_1,puVar3);
        iVar9 = iVar9 + 1;
        uVar8 = local_70;
      } while (iVar9 < (int)local_58);
    }
  }
  local_70 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14794f76c FUN_14794f76c body=68 status=ok
// SIG undefined FUN_14794f76c(void)

void FUN_14794f76c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1479432e9(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14794f7b2(param_1,param_2);
  return;
}



// FUNCTION 14794f7b2 FUN_14794f7b2 body=112 status=ok
// SIG undefined FUN_14794f7b2(void)

void FUN_14794f7b2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14794f822 FUN_14794f822 body=229 status=ok
// SIG undefined FUN_14794f822(void)

int * FUN_14794f822(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 14794f908 FUN_14794f908 body=476 status=ok
// SIG undefined FUN_14794f908(void)

void FUN_14794f908(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x7c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar7) =
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



// FUNCTION 14794faea FUN_14794faea body=8 status=ok
// SIG undefined FUN_14794faea(void)

bool FUN_14794faea(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x10);
}



// FUNCTION 14794faf2 FUN_14794faf2 body=899 status=ok
// SIG undefined FUN_14794faf2(void)

void FUN_14794faf2(undefined1 *param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *param_1 = 0;
  if ((0 < (longlong)*(int *)(param_3 + 0x10)) && (1e-08 < ABS(param_2))) {
    fVar13 = *(float *)(*(longlong *)(param_3 + 8) + -0x10 +
                       (longlong)*(int *)(param_3 + 0x10) * 0x10);
    *(float *)(param_1 + 4) = fVar13;
    fVar12 = fVar13 / ABS(param_2);
    *(float *)(param_1 + 8) = fVar12;
    uVar3 = *(uint *)(param_3 + 0x10);
    lVar9 = (longlong)(int)(uVar3 - 1);
    if (fVar13 <= fVar12) {
      fVar11 = *(float *)(*(longlong *)(param_3 + 8) + 8 + lVar9 * 0x10);
      if (fVar12 <= fVar11) {
        fVar13 = (fVar12 - fVar13) / (fVar11 - fVar13);
        fVar12 = 1.0;
      }
      else {
        fVar12 = fVar12 / fVar11;
        fVar13 = 1.0;
      }
      lVar10 = 2;
    }
    else {
      fVar11 = *(float *)(*(longlong *)(param_3 + 8) + 4 + lVar9 * 0x10);
      if (fVar11 <= fVar12) {
        fVar13 = (fVar13 - fVar12) / (fVar13 - fVar11);
        fVar12 = 1.0;
      }
      else {
        fVar12 = fVar12 / fVar11;
        fVar13 = 1.0;
      }
      lVar10 = 1;
    }
    plVar1 = (longlong *)(param_1 + 0x20);
    FUN_14005ea14(plVar1,uVar3);
    iVar4 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar4) < uVar3) {
      FUN_14475e4ac(plVar1);
    }
    if (1 < (int)uVar3) {
      lVar5 = 0;
      do {
        *(float *)(*plVar1 + lVar5) =
             (*(float *)(*(longlong *)(param_3 + 8) + lVar5 * 4) * (1.0 - fVar13) +
             *(float *)((ulonglong)(uint)((int)lVar10 * 4) + *(longlong *)(param_3 + 8) + lVar5 * 4)
             * fVar13) * fVar12;
        lVar5 = lVar5 + 4;
      } while (lVar9 * 4 - lVar5 != 0);
    }
    fVar11 = *(float *)(param_1 + 8);
    *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4) = fVar11;
    fVar13 = ((1.0 - fVar13) * *(float *)(param_3 + 0x18) +
             fVar13 * *(float *)(param_3 + 0x18 + lVar10 * 4)) * fVar12 * fVar12;
    if (1e-08 < ABS(fVar13)) {
      fVar13 = (*(float *)(param_1 + 4) - fVar11 * fVar12) / fVar13;
      if ((-1.0 < fVar13) && (1e-08 <= (fVar13 + 1.0) * fVar12)) {
        plVar2 = (longlong *)(param_1 + 0x10);
        FUN_14005ea14(plVar2,uVar3);
        iVar4 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar4 + uVar3;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar4) < uVar3) {
          FUN_14475e4ac();
        }
        if (1 < (int)uVar3) {
          fVar11 = 0.0;
          lVar10 = 0;
          do {
            *(float *)(*plVar2 + lVar10) = fVar11;
            fVar11 = fVar11 + (*(float *)(*(longlong *)(param_3 + 8) + 0xc + lVar10 * 4) * fVar13 +
                              1.0) * (*(float *)(lVar10 + 4 + *plVar1) -
                                     *(float *)(lVar10 + *plVar1)) * fVar12;
            lVar10 = lVar10 + 4;
          } while (lVar9 * 4 - lVar10 != 0);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + lVar9 * 4) = *(undefined4 *)(param_1 + 4);
        iVar4 = *(int *)(param_1 + 0x18);
        if (1 < iVar4) {
          iVar6 = 0;
          do {
            lVar10 = *plVar1;
            lVar5 = (longlong)iVar6;
            lVar9 = lVar5 + 1;
            if ((ABS(*(float *)(lVar10 + 4 + lVar5 * 4) - *(float *)(lVar10 + lVar5 * 4)) <= 0.0001)
               || (ABS(*(float *)(*plVar2 + lVar9 * 4) - *(float *)(*plVar2 + lVar5 * 4)) <= 0.0001)
               ) {
              iVar7 = *(int *)(param_1 + 0x28);
              iVar8 = iVar7 + (-2 - iVar6);
              if (iVar8 != 0) {
                lVar10 = lVar10 + lVar5 * 4;
                memmove((void *)(lVar10 + 4),(void *)(lVar10 + 8),(longlong)iVar8 << 2);
                iVar4 = *(int *)(param_1 + 0x18);
                iVar7 = *(int *)(param_1 + 0x28);
              }
              *(int *)(param_1 + 0x28) = iVar7 + -1;
              iVar7 = (-2 - iVar6) + iVar4;
              if (iVar7 != 0) {
                memmove((void *)(*(longlong *)(param_1 + 0x10) + lVar9 * 4),
                        (void *)(*(longlong *)(param_1 + 0x10) + lVar9 * 4 + 4),(longlong)iVar7 << 2
                       );
                iVar4 = *(int *)(param_1 + 0x18);
              }
              iVar4 = iVar4 + -1;
              *(int *)(param_1 + 0x18) = iVar4;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          } while (iVar6 < iVar4 + -1);
          if (2 < iVar4) {
            *param_1 = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14794fe76 FUN_14794fe76 body=182 status=ok
// SIG undefined FUN_14794fe76(void)

void FUN_14794fe76(undefined8 param_1,uint *param_2,float param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = (longlong)(int)*param_2;
  iVar6 = (int)param_4[1];
  if ((lVar5 < 0) || (iVar7 = iVar6 + -2, iVar7 < (int)*param_2)) {
    uVar4 = 0xffffffff;
    if (1 < iVar6) {
      iVar6 = iVar6 + -2;
      iVar7 = 0;
      do {
        uVar4 = (uint)(iVar7 + iVar6) >> 1;
        fVar1 = *(float *)(*param_4 + (ulonglong)uVar4 * 4);
        fVar2 = *(float *)(*param_4 + 4 + (ulonglong)uVar4 * 4);
        if ((fVar1 <= param_3) && (param_3 <= fVar2)) break;
        if (param_3 <= fVar2) {
          if (fVar1 <= param_3) break;
          iVar6 = uVar4 - 1;
        }
        else {
          iVar7 = uVar4 + 1;
        }
      } while (iVar7 <= iVar6);
    }
  }
  else {
    lVar3 = *param_4;
    if ((*(float *)(lVar3 + lVar5 * 4) <= param_3) && (param_3 <= *(float *)(lVar3 + 4 + lVar5 * 4))
       ) {
      return;
    }
    iVar6 = 0;
    do {
      uVar4 = (uint)(iVar6 + iVar7) >> 1;
      fVar1 = *(float *)(lVar3 + (ulonglong)uVar4 * 4);
      fVar2 = *(float *)(lVar3 + 4 + (ulonglong)uVar4 * 4);
      if ((fVar1 <= param_3) && (param_3 <= fVar2)) break;
      if (param_3 <= fVar2) {
        if (fVar1 <= param_3) break;
        iVar7 = uVar4 - 1;
      }
      else {
        iVar6 = uVar4 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  *param_2 = uVar4;
  return;
}



// FUNCTION 14794ff2c FUN_14794ff2c body=77 status=ok
// SIG undefined FUN_14794ff2c(void)

ulonglong FUN_14794ff2c(undefined8 param_1,float param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0xffffffff;
  if (1 < (int)param_3[1]) {
    iVar5 = (int)param_3[1] + -2;
    iVar6 = 0;
    do {
      uVar3 = (uint)(iVar6 + iVar5) >> 1;
      uVar4 = (ulonglong)uVar3;
      fVar1 = *(float *)(*param_3 + uVar4 * 4);
      fVar2 = *(float *)(*param_3 + 4 + uVar4 * 4);
      if ((fVar1 <= param_2) && (param_2 <= fVar2)) {
        return uVar4;
      }
      if (param_2 <= fVar2) {
        if (fVar1 <= param_2) {
          return uVar4;
        }
        iVar5 = uVar3 - 1;
      }
      else {
        iVar6 = uVar3 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return uVar4;
}



// FUNCTION 14794ff7a FUN_14794ff7a body=58 status=ok
// SIG undefined FUN_14794ff7a(void)

float FUN_14794ff7a(longlong param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + lVar3 * 4);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
  return (*(float *)(*(longlong *)(param_1 + 0x20) + 4 + lVar3 * 4) - fVar2) *
         ((param_3 - fVar1) / (*(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar3 * 4) - fVar1)) +
         fVar2;
}



// FUNCTION 14794ffb4 FUN_14794ffb4 body=58 status=ok
// SIG undefined FUN_14794ffb4(void)

float FUN_14794ffb4(longlong param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x10) + lVar3 * 4);
  return (*(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar3 * 4) - fVar2) *
         ((param_3 - fVar1) / (*(float *)(*(longlong *)(param_1 + 0x20) + 4 + lVar3 * 4) - fVar1)) +
         fVar2;
}



// FUNCTION 14794ffee FUN_14794ffee body=27 status=ok
// SIG undefined FUN_14794ffee(void)

float FUN_14794ffee(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 0x28) + -1) * 4);
  if (fVar1 <= param_2) {
    param_2 = fVar1;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  return param_2;
}



// FUNCTION 14795002e FUN_14795002e body=75 status=ok
// SIG undefined FUN_14795002e(void)

void FUN_14795002e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14797ce42(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479500f6 FUN_1479500f6 body=169 status=ok
// SIG undefined FUN_1479500f6(void)

void FUN_1479500f6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = FUN_1415cecbb(param_2);
  if (*(int *)(param_1 + 0x2f8) != *(int *)(param_1 + 0x324)) {
    lVar3 = param_1 + 0x328;
    if (*(longlong *)(param_1 + 0x330) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x330);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x338) - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar4 * 0x28);
        if ((*plVar1 == *param_2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 8 + (longlong)iVar4 * 0x28) == param_2[1]
           )) {
          if (plVar1 + 2 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          lVar3 = plVar1[3];
          *param_3 = plVar1[2];
          param_3[1] = lVar3;
          return;
        }
        iVar4 = (int)plVar1[4];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 14795019f FUN_14795019f body=148 status=ok
// SIG undefined FUN_14795019f(void)

undefined8 FUN_14795019f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145986a76();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147950234 FUN_147950234 body=61 status=ok
// SIG undefined FUN_147950234(void)

longlong FUN_147950234(void)

{
  longlong lVar1;
  
  if (DAT_14cb0d2b0 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x360);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 14795027e FUN_14795027e body=1859 status=ok
// SIG undefined FUN_14795027e(void)

int FUN_14795027e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_368 [47];
  char local_339;
  longlong local_338;
  int local_32c;
  longlong *local_328;
  code *local_320;
  undefined8 *local_318;
  undefined8 local_310;
  code *local_308;
  undefined8 *local_300;
  longlong *local_2f8;
  int local_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 *local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  longlong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  void *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_138;
  undefined1 local_136;
  undefined8 local_134;
  undefined1 local_120 [112];
  void *local_b0;
  uint local_a8;
  undefined1 local_a0 [88];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar9 = 0;
  if ((param_3[6] != 0) && (iVar2 = *(int *)(param_3 + 1), iVar2 != 0)) {
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = (longlong *)0x0;
    uVar5 = *param_3;
    local_2f0 = iVar2;
    FUN_140b856de(&local_2f8,iVar2,0);
    FUN_140b8566a(local_2f8,uVar5,iVar2);
    if (*(char *)((longlong)param_3 + 0x3a) == '\0') {
      (**(code **)(*param_1 + 0x2e8))(param_1,&local_2f8);
    }
    if ((longlong)local_2f0 != 0) {
      plVar11 = local_2f8 + (longlong)local_2f0 * 2;
      plVar6 = local_2f8;
      do {
        iVar9 = (int)plVar6[1];
        if ((longlong)iVar9 != 0) {
          lVar14 = (longlong)iVar9 * 2;
          lVar10 = 0;
          do {
            if (*(short *)(*plVar6 + lVar10 * 2) == 0x2e) {
              if ((int)lVar10 != -1) {
                FUN_144a63a7c(plVar6,&local_278,0);
                plVar7 = &local_2e8;
                goto LAB_1479506b9;
              }
              break;
            }
            lVar10 = lVar10 + 1;
            lVar14 = lVar14 + -2;
          } while (lVar14 != 0);
          if (iVar9 - 2U < 0x7fffffff) {
            FUN_1479509c2(&local_278,plVar6);
            plVar7 = &local_2d8;
LAB_1479506b9:
            FUN_1405e9454(plVar7,&local_278);
            if (local_278 != 0) {
              FUN_1400020a8();
            }
          }
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar11);
    }
    FUN_147950a66(local_120,param_3);
    local_32c = *(int *)(param_2 + 8);
    local_208 = 0;
    local_200 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = (void *)0x0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_168 = 0;
    local_160 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_15c = 0xffffffff00000080;
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_136 = 0;
    local_134 = 0;
    local_338 = param_2;
    local_328 = (longlong *)FUN_145d0c2fa(param_1);
    if (param_3[6] != 0) {
      if (*(char *)(param_3 + 7) == '\0') {
        uStack_230 = CONCAT44(uStack_230._4_4_,local_a8);
        if (local_a8 == 0 && uStack_230._4_4_ == 0) {
          uStack_230 = (ulonglong)local_a8;
        }
        else {
          FUN_1401b3898(&local_238,local_a8);
          if (local_a8 != 0) {
            memcpy(local_238,local_b0,(longlong)(int)local_a8 << 4);
          }
        }
        local_138 = CONCAT11(1,(undefined1)local_138);
      }
      else {
        uVar5 = FUN_145a51fd4();
        FUN_1414d7078(uVar5,&local_2c8);
        uVar3 = uStack_230;
        lVar14 = (longlong)(int)uStack_230;
        uVar4 = (int)uStack_230 + 1;
        uStack_230 = CONCAT44(uStack_230._4_4_,uVar4);
        if (uStack_230._4_4_ < uVar4) {
          FUN_1401d5364(&local_238,uVar3 & 0xffffffff);
        }
        puVar1 = (undefined4 *)((longlong)local_238 + lVar14 * 0x10);
        *puVar1 = (undefined4)local_2c8;
        puVar1[1] = local_2c8._4_4_;
        puVar1[2] = (undefined4)uStack_2c0;
        puVar1[3] = uStack_2c0._4_4_;
        local_138 = CONCAT11(1,(undefined1)local_138);
        plVar6 = (longlong *)FUN_145d0c2fa(param_1);
        local_2a8 = 0;
        local_2a0 = 0;
        local_2c8 = (longlong *)0x0;
        uStack_2c0 = 0;
        local_29c = 0xffffffff00000080;
        local_294 = 0;
        local_288 = 0;
        local_280 = 0;
        (**(code **)(*plVar6 + 0x168))(plVar6,&local_b0,&local_2c8,local_a0);
        local_280 = 0;
        if (local_288 != 0) {
          FUN_1400020a8();
        }
        FUN_1403950f6(&local_2c8);
      }
    }
    lVar14 = local_2d8;
    lVar10 = (longlong)(int)uStack_2d0;
    local_339 = 0 < (int)uStack_2e0 && 0 < lVar10;
    if (lVar10 != 0) {
      lVar13 = 0;
      do {
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(lVar14 + 8 + lVar13) != 0) {
          puVar8 = *(undefined2 **)(lVar14 + lVar13);
        }
        FUN_1446f470e(&local_2c8,puVar8,1);
        uVar3 = uStack_260;
        lVar12 = (longlong)(int)uStack_260;
        uVar4 = (int)uStack_260 + 1;
        uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
        if (uStack_260._4_4_ < uVar4) {
          FUN_1446f84a2(&local_268,uVar3 & 0xffffffff);
        }
        *(longlong **)(local_268 + lVar12 * 8) = local_2c8;
        lVar13 = lVar13 + 0x10;
      } while (lVar10 * 0x10 != lVar13);
    }
    lVar14 = local_2e8;
    if (local_339 == '\0') {
      lVar10 = (longlong)(int)uStack_2e0;
      if (lVar10 != 0) {
        lVar13 = 0;
        do {
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(lVar14 + 8 + lVar13) != 0) {
            puVar8 = *(undefined2 **)(lVar14 + lVar13);
          }
          FUN_1446f470e(&local_2c8,puVar8,1);
          uVar3 = uStack_270;
          lVar12 = (longlong)(int)uStack_270;
          uVar4 = (int)uStack_270 + 1;
          uStack_270 = CONCAT44(uStack_270._4_4_,uVar4);
          if (uStack_270._4_4_ < uVar4) {
            FUN_1446f84a2(&local_278,uVar3 & 0xffffffff);
          }
          *(longlong **)(local_278 + lVar12 * 8) = local_2c8;
          lVar13 = lVar13 + 0x10;
        } while (lVar10 * 0x10 != lVar13);
      }
      local_138 = CONCAT11(local_138._1_1_,1);
      local_136 = 1;
      uStack_2c0 = local_338;
      local_2b8 = local_120;
      lVar14 = local_338;
      local_2c8 = param_1;
    }
    else {
      local_138 = CONCAT11(local_138._1_1_,1);
      local_136 = 1;
      local_300 = &local_2c8;
      uStack_2c0 = local_338;
      local_2b8 = local_120;
      local_308 = FUN_143408eee;
      local_2c8 = param_1;
      (**(code **)(*local_328 + 0x80))();
      lVar14 = local_2e8;
      lVar10 = (longlong)(int)uStack_2e0;
      if (lVar10 != 0) {
        lVar13 = 0;
        do {
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(lVar14 + 8 + lVar13) != 0) {
            puVar8 = *(undefined2 **)(lVar14 + lVar13);
          }
          FUN_1446f470e(&local_310,puVar8,1);
          uVar3 = uStack_270;
          lVar12 = (longlong)(int)uStack_270;
          uVar4 = (int)uStack_270 + 1;
          uStack_270 = CONCAT44(uStack_270._4_4_,uVar4);
          if (uStack_270._4_4_ < uVar4) {
            FUN_1446f84a2(&local_278,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_278 + lVar12 * 8) = local_310;
          lVar13 = lVar13 + 0x10;
        } while (lVar10 * 0x10 != lVar13);
      }
      lVar14 = local_338;
      uVar3 = uStack_260 >> 0x20;
      uStack_260 = uStack_260 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        FUN_1402191ca(&local_268,0);
      }
    }
    local_318 = &local_2c8;
    local_320 = FUN_143408eee;
    (**(code **)(*local_328 + 0x80))(local_328,&local_278);
    iVar9 = *(int *)(lVar14 + 8);
    FUN_14019571a(&local_278);
    FUN_147950cc0(local_120);
    FUN_1447a1747(local_2f8,local_2f0);
    if (local_2f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_2e8,uStack_2e0 & 0xffffffff);
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_2d8,uStack_2d0 & 0xffffffff);
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    iVar9 = iVar9 - local_32c;
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1479509c2 FUN_1479509c2 body=163 status=ok
// SIG undefined FUN_1479509c2(void)

undefined8 * FUN_1479509c2(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_147951086(&local_38);
  *param_1 = local_38;
  *(int *)(param_1 + 1) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147950a66 FUN_147950a66 body=600 status=ok
// SIG undefined FUN_147950a66(void)

longlong FUN_147950a66(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147964198();
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong **)(param_2 + 0x40) != (longlong *)0x0 && *(int *)(param_2 + 0x48) != 0) {
    uVar8 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x30))();
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar8;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  iVar3 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar3 != 0) {
    local_60 = (longlong *)(param_1 + 0x50);
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar10 = 0;
    do {
      if (1 < *(uint *)(lVar5 + 8 + lVar10)) {
        iVar4 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
          FUN_1447a1bd6(local_60,iVar4);
        }
        lVar6 = *local_60;
        lVar9 = (longlong)iVar4 * 0x10;
        puVar1 = (undefined8 *)(lVar6 + lVar9);
        *(undefined8 *)(lVar6 + lVar9) = 0;
        iVar4 = *(int *)(lVar5 + 8 + lVar10);
        pvVar7 = *(void **)(lVar5 + lVar10);
        *(int *)(lVar6 + 8 + lVar9) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar4,0);
          memcpy((void *)*puVar1,pvVar7,(longlong)iVar4 * 2);
        }
        *(undefined1 *)(param_1 + 0xd1) = 1;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar10);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    local_60 = (longlong *)(param_1 + 0x60);
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      if (1 < *(uint *)(lVar5 + 8 + lVar10)) {
        iVar4 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar4 + 1U) {
          FUN_1447a1bd6(local_60,iVar4);
        }
        lVar6 = *local_60;
        lVar9 = (longlong)iVar4 * 0x10;
        puVar1 = (undefined8 *)(lVar6 + lVar9);
        *(undefined8 *)(lVar6 + lVar9) = 0;
        iVar4 = *(int *)(lVar5 + 8 + lVar10);
        pvVar7 = *(void **)(lVar5 + lVar10);
        *(int *)(lVar6 + 8 + lVar9) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar4,0);
          memcpy((void *)*puVar1,pvVar7,(longlong)iVar4 * 2);
        }
        *(undefined1 *)(param_1 + 0xd1) = 1;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar10);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1414d7078(*(longlong *)(param_1 + 0x30),&local_58);
    iVar3 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
      FUN_1401d5364((longlong *)(param_1 + 0x70),iVar3);
    }
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 0x10);
    *puVar2 = local_58;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = uStack_4c;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147950cc0 FUN_147950cc0 body=131 status=ok
// SIG undefined FUN_147950cc0(void)

void FUN_147950cc0(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_147951932(param_1);
  return;
}



// FUNCTION 147950d44 FUN_147950d44 body=832 status=ok
// SIG undefined FUN_147950d44(void)

undefined4 FUN_147950d44(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStack_1a8 [32];
  longlong local_188 [2];
  undefined8 *local_178;
  ulonglong uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_120 [112];
  undefined1 local_b0 [16];
  longlong local_a0;
  int local_98;
  int local_6c;
  undefined1 local_68 [8];
  undefined1 *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_147950a66(local_120,param_3);
  if (param_3[6] == 0) {
LAB_147950d89:
    local_178 = (undefined8 *)0x0;
    iVar1 = *(int *)(param_3 + 1);
    uVar2 = *param_3;
    uStack_170 = CONCAT44(uStack_170._4_4_,iVar1);
    if (iVar1 == 0) {
      uStack_170 = 0;
    }
    else {
      FUN_140b856de(&local_178,iVar1,0);
      FUN_140b8566a(local_178,uVar2,iVar1);
    }
    if (*(char *)((longlong)param_3 + 0x3a) == '\0') {
      (**(code **)(*param_1 + 0x2e8))(param_1,&local_178);
    }
    if ((longlong)(int)uStack_170 == 0) {
LAB_147950e93:
      uVar7 = FUN_1479510fe(local_120,param_2,param_1);
    }
    else {
      puVar16 = local_178 + (longlong)(int)uStack_170 * 2;
      puVar11 = local_178;
      do {
        FUN_147951086(puVar11);
        FUN_1400021e4(param_2,local_188);
        iVar1 = *(int *)(puVar11 + 1);
        iVar12 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar12 = 0;
        }
        puVar10 = &DAT_149dfb77a;
        if (iVar1 != 0) {
          puVar10 = (undefined2 *)*puVar11;
        }
        cVar6 = FUN_144a791f8(local_188,puVar10,iVar12,1);
        if (local_188[0] != 0) {
          FUN_1400020a8();
        }
        if (cVar6 != '\0') goto LAB_147950e93;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar16);
      uVar7 = 0;
    }
    FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
    if (local_178 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar8 = (longlong *)FUN_145d0c2fa(param_1);
    local_158 = 0;
    local_150 = 0;
    local_178 = (undefined8 *)0x0;
    uStack_170 = 0;
    local_14c = 0xffffffff00000080;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0;
    (**(code **)(*plVar8 + 0x168))(plVar8,local_b0,&local_178,&local_a0);
    local_130 = 0;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1403950f6(&local_178);
    if (*(char *)(param_3 + 7) == '\0') {
      if (local_98 != local_6c) {
        lVar3 = *(longlong *)(param_2 + 0x20);
        lVar4 = *(longlong *)(param_2 + 0x28);
        uVar15 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar14 = (uint)lVar3 & 0xffff;
        uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar9 = (uint)lVar4 & 0xffff;
        uVar15 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar14) +
                 (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar14 >> 4);
        if (local_60 == (undefined1 *)0x0) {
          local_60 = local_68;
        }
        iVar1 = *(int *)(local_60 +
                        (ulonglong)
                        (local_58 - 1U &
                        ((uVar15 >> 2) +
                         ((uint)lVar4 << 0x10 | uVar9) + (int)((ulonglong)lVar4 >> 0x20) +
                         (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) + uVar15 * 0x40 +
                         0x9e3779b9 ^ uVar15)) * 4);
        while (iVar1 != -1) {
          lVar13 = (longlong)iVar1;
          if ((*(longlong *)(local_a0 + lVar13 * 0x18) == lVar3) &&
             (*(longlong *)(local_a0 + 8 + lVar13 * 0x18) == lVar4)) goto LAB_147950d89;
          iVar1 = *(int *)(local_a0 + lVar13 * 0x18 + 0x10);
        }
      }
    }
    else {
      cVar6 = (**(code **)(*param_1 + 0x430))(param_1,param_2,&local_a0);
      if (cVar6 != '\0') goto LAB_147950d89;
    }
    uVar7 = 0;
  }
  FUN_147950cc0(local_120);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147951086 FUN_147951086 body=119 status=ok
// SIG undefined FUN_147951086(void)

void FUN_147951086(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_1448097c4(param_1,&DAT_149e35204,&DAT_149e065c6,0);
  cVar1 = FUN_144a38768(param_1,&DAT_149e065c6,1,0);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 8) + -1;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    FUN_14496493a(param_1,iVar2 + -1,1,1);
    return;
  }
  return;
}



// FUNCTION 1479510fe FUN_1479510fe body=407 status=ok
// SIG undefined FUN_1479510fe(void)

undefined8 FUN_1479510fe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xd1) == '\x01') {
    local_68 = param_3;
    FUN_1400021e4(param_2,local_58);
    iVar1 = *(int *)(param_1 + 0x68);
    local_60 = param_2;
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
      iVar5 = 0;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + 8 + lVar9);
        iVar10 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar10 = iVar5;
        }
        puVar8 = &DAT_149dfb77a;
        if (iVar2 != 0) {
          puVar8 = *(undefined2 **)(lVar3 + lVar9);
        }
        cVar4 = FUN_14038a98c(local_58,puVar8,iVar10,1);
        if (cVar4 != '\0') goto LAB_147951207;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar9);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar1 == 0) {
      iVar5 = 1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x50);
      lVar9 = 0;
      do {
        iVar5 = *(int *)(lVar3 + 8 + lVar9);
        iVar2 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar2 = 0;
        }
        puVar8 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar8 = *(undefined2 **)(lVar3 + lVar9);
        }
        iVar5 = FUN_14038a98c(local_58,puVar8,iVar2,1);
      } while (((char)iVar5 == '\0') &&
              (bVar11 = (longlong)iVar1 * 0x10 + -0x10 != lVar9, lVar9 = lVar9 + 0x10, bVar11));
    }
LAB_147951207:
    param_2 = local_60;
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    param_3 = local_68;
    if ((char)iVar5 != '\0') goto LAB_147951225;
  }
  else {
LAB_147951225:
    if ((*(char *)(param_1 + 0x3b) != '\0') ||
       (cVar4 = (**(code **)(*param_3 + 0x540))(param_3,param_2,param_1), cVar4 != '\0')) {
      if (*(char *)(param_1 + 0xd0) == '\x01') {
        if (*(int *)(param_1 + 0x48) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x40);
        }
        cVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1);
        if (cVar4 == '\0') goto LAB_147951268;
      }
      uVar6 = 1;
      goto LAB_14795126a;
    }
  }
LAB_147951268:
  uVar6 = 0;
LAB_14795126a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147951296 FUN_147951296 body=129 status=ok
// SIG undefined FUN_147951296(void)

undefined8 FUN_147951296(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1411df190();
  if (0 < *(int *)(lVar2 + 0x50)) {
    FUN_1400021e4(param_2,local_38);
    cVar1 = (**(code **)(*param_1 + 0x538))(param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      uVar3 = 0;
      goto LAB_1479512f7;
    }
  }
  uVar3 = 1;
LAB_1479512f7:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147951318 FUN_147951318 body=1338 status=ok
// SIG undefined FUN_147951318(void)

void FUN_147951318(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    plVar4 = (longlong *)*param_2;
    plVar9 = plVar4 + (longlong)(int)param_2[1] * 2;
    local_c0 = (longlong *)(param_1 + 0x1b8);
LAB_147951389:
    if ((longlong)(int)plVar4[1] != 0) {
      uVar7 = 0;
      do {
        if (*(short *)(*plVar4 + uVar7) == 0x2e) {
          if ((~uVar7 & 0x1fffffffe) != 0) {
            FUN_14064b666(&local_98);
            if ((longlong)*(int *)(param_1 + 0x1c0) == 0) goto LAB_1479515db;
            plVar11 = *(longlong **)(param_1 + 0x1b8);
            plVar15 = plVar11 + (longlong)*(int *)(param_1 + 0x1c0) * 2;
            goto LAB_1479514f7;
          }
          break;
        }
        uVar7 = uVar7 + 2;
      } while ((longlong)(int)plVar4[1] * 2 != uVar7);
    }
    if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
      plVar11 = *(longlong **)(param_1 + 0x1b8);
      plVar15 = plVar11 + (longlong)*(int *)(param_1 + 0x1c0) * 2;
LAB_1479513cc:
      iVar10 = (int)plVar4[1];
      if (iVar10 == (int)plVar11[1]) {
        if (1 < iVar10) {
          lVar12 = 0;
          do {
            uVar6 = *(ushort *)(*plVar4 + lVar12);
            uVar7 = (ulonglong)uVar6;
            uVar13 = *(ushort *)(*plVar11 + lVar12);
            if (uVar6 == uVar13) {
              if (uVar6 == 0) break;
            }
            else {
              if (0x7f < (uVar13 | uVar6)) goto LAB_14795176a;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar14 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar14]) goto LAB_14795176a;
            }
            lVar12 = lVar12 + 2;
          } while( true );
        }
      }
      else if ((int)plVar11[1] + iVar10 != 1) goto LAB_147951440;
      goto LAB_14795174e;
    }
    iVar10 = 0;
    goto LAB_147951642;
  }
LAB_147951782:
  if (0 < (int)uStack_80) {
    plVar4 = (longlong *)FUN_145d0c2fa(param_1);
    (**(code **)(*plVar4 + 0x248))(plVar4,&local_88,0);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1479514f7:
  if ((int)uStack_90 == (int)plVar11[1]) {
    if (1 < (int)uStack_90) {
      lVar12 = 0;
      do {
        uVar6 = *(ushort *)((longlong)local_98 + lVar12);
        uVar7 = (ulonglong)uVar6;
        uVar13 = *(ushort *)(*plVar11 + lVar12);
        if (uVar6 == uVar13) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar13 | uVar6)) goto LAB_1479517f6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar14]) goto LAB_1479517f6;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
  }
  else if ((int)plVar11[1] + (int)uStack_90 != 1) goto LAB_14795156e;
  goto LAB_14795173f;
LAB_1479517f6:
  if (uVar6 == uVar13) goto LAB_14795173f;
LAB_14795156e:
  FUN_1449b8608(&local_a8,plVar11,&DAT_149e065c6);
  iVar10 = (int)uStack_a0 + -1;
  if ((int)uStack_a0 == 0) {
    iVar10 = 0;
  }
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    puVar8 = local_a8;
  }
  cVar2 = FUN_144a791f8(&local_98,puVar8,iVar10,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') goto LAB_14795173f;
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar15) goto LAB_1479515db;
  goto LAB_1479514f7;
LAB_1479515db:
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  uVar3 = FUN_146872264();
  cVar2 = FUN_1404d3cb6(&local_98,&local_a8,uVar3);
  if (cVar2 != '\0') {
    FUN_1412fabe8(&local_88,&local_a8);
  }
  FUN_141538082();
  cVar2 = FUN_1404d3cb6(&local_98);
  if (cVar2 != '\0') {
    FUN_1412fabe8(&local_88);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14795173f;
LAB_14795176a:
  if (uVar6 == uVar13) goto LAB_14795174e;
LAB_147951440:
  FUN_1449b8608(&local_98,plVar11,&DAT_149e065c6);
  iVar10 = (int)uStack_90 + -1;
  if ((int)uStack_90 == 0) {
    iVar10 = 0;
  }
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar8 = local_98;
  }
  cVar2 = FUN_144a791f8(plVar4,puVar8,iVar10,1);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') goto LAB_14795174e;
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar15) goto code_r0x0001479514ad;
  goto LAB_1479513cc;
code_r0x0001479514ad:
  iVar10 = *(int *)(param_1 + 0x1c0);
LAB_147951642:
  *(uint *)(param_1 + 0x1c0) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x1c4) < iVar10 + 1U) {
    FUN_1447a1bd6(local_c0,iVar10);
  }
  lVar12 = *local_c0;
  lVar5 = (longlong)iVar10 * 0x10;
  puVar1 = (undefined8 *)(lVar12 + lVar5);
  *(undefined8 *)(lVar12 + lVar5) = 0;
  iVar10 = (int)plVar4[1];
  _Src = (void *)*plVar4;
  *(int *)(lVar12 + 8 + lVar5) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar10,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar10 * 2);
  }
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  FUN_140056680(&local_a8,&DAT_149dfb77a);
  local_c8 = ((int)plVar4[1] == 0) + 1;
  local_b8[0] = 0;
  FUN_14125bce8(local_b8,*plVar4,(int)plVar4[1],0);
  FUN_1401aebe8(local_b8,&DAT_149dfb77a,0);
  cVar2 = FUN_1404d3cb6(local_b8);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1412fabe8(&local_78);
  }
LAB_14795173f:
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14795174e:
  plVar4 = plVar4 + 2;
  if (plVar4 == plVar9) goto LAB_147951777;
  goto LAB_147951389;
LAB_147951777:
  if (0 < (int)uStack_70) {
    plVar4 = (longlong *)FUN_145d0c2fa(param_1);
    (**(code **)(*plVar4 + 0x240))(plVar4,&local_78,0,0);
  }
  goto LAB_147951782;
}



// FUNCTION 147951854 FUN_147951854 body=221 status=ok
// SIG undefined FUN_147951854(void)

longlong FUN_147951854(longlong param_1)

{
  FUN_147964332();
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return param_1;
}



// FUNCTION 147951932 FUN_147951932 body=105 status=ok
// SIG undefined FUN_147951932(void)

void FUN_147951932(longlong *param_1)

{
  FUN_1449db362(param_1 + 8);
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14795199c FUN_14795199c body=673 status=ok
// SIG undefined FUN_14795199c(void)

void FUN_14795199c(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char param_5,char param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *_Src;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_6 == '\0') && ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4))) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar5 = param_1 + 0x97;
    if ((longlong *)param_1[0x98] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x98];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0x99] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = param_1[0x90] + (longlong)iVar3 * 0x20;
        if (*(longlong *)(param_1[0x90] + (longlong)iVar3 * 0x20) == param_2) {
          if (((((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) &&
               (lVar1 = *(longlong *)(lVar1 + 8), *(longlong *)(lVar1 + 0x30) == param_4)) &&
              (*(char *)(lVar1 + 0x38) == param_5)) && (*(char *)(lVar1 + 0x39) == '\0')) {
            local_68 = 0;
            uStack_60 = 0;
            iVar3 = *(int *)(param_3 + 1);
            if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar3);
            }
            if (iVar3 != 0) {
              FUN_1408be2c4(&local_68);
              if ((longlong)*(int *)(param_3 + 1) != 0) {
                puVar8 = (undefined8 *)*param_3;
                local_70 = lVar1 + 0x70;
                local_78 = lVar1 + 0x88;
                local_80 = lVar1 + 0xd8;
                lVar10 = (longlong)*(int *)(param_3 + 1) << 4;
                do {
                  local_50 = puVar8;
                  iVar3 = FUN_140c8411c(local_70,&local_50);
                  uVar7 = uStack_60;
                  if (iVar3 != 0) {
                    lVar9 = (longlong)(int)uStack_60;
                    uVar4 = (int)uStack_60 + 1;
                    uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
                    if (uStack_60._4_4_ < uVar4) {
                      FUN_1447a1bd6(&local_68,uVar7 & 0xffffffff);
                    }
                    lVar9 = lVar9 * 0x10;
                    puVar2 = (undefined8 *)(local_68 + lVar9);
                    *(undefined8 *)(local_68 + lVar9) = 0;
                    iVar3 = *(int *)(puVar8 + 1);
                    _Src = (void *)*puVar8;
                    *(int *)(local_68 + 8 + lVar9) = iVar3;
                    if ((longlong)iVar3 == 0) {
                      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
                    }
                    else {
                      FUN_1446dd670(puVar2,iVar3,0);
                      memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
                    }
                  }
                  FUN_1411a58b4(local_78,puVar8);
                  FUN_1411a58b4(local_80,puVar8);
                  puVar8 = puVar8 + 2;
                  lVar10 = lVar10 + -0x10;
                } while (lVar10 != 0);
              }
            }
            (**(code **)(*param_1 + 0x2e8))(param_1,&local_68);
            if ((longlong)(int)uStack_60 == 0) {
              uVar7 = 0;
            }
            else {
              lVar9 = (longlong)(int)uStack_60 << 4;
              lVar10 = local_68;
              do {
                FUN_1411a58b4(lVar1 + 0x128,lVar10);
                lVar10 = lVar10 + 0x10;
                lVar9 = lVar9 + -0x10;
              } while (lVar9 != 0);
              uVar7 = uStack_60 & 0xffffffff;
            }
            FUN_1447a1747(local_68,uVar7);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147951c40 FUN_147951c40 body=285 status=ok
// SIG undefined FUN_147951c40(void)

void FUN_147951c40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar6 = param_1 + 0x4b8;
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x4c0);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x480) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar8 * 0x20) == param_2) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          uVar3 = *(undefined8 *)(lVar6 + 8);
          plVar4 = *(longlong **)(lVar6 + 0x10);
          if (plVar4 == (longlong *)0x0) {
            FUN_147967294();
            FUN_140c9de40(uVar3,param_1 + 0x28);
            return;
          }
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_147967294();
          FUN_140c9de40(uVar3,param_1 + 0x28);
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000147951d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar8 = *(int *)(lVar6 + 0x18);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 147951d5e FUN_147951d5e body=417 status=ok
// SIG undefined FUN_147951d5e(void)

ulonglong FUN_147951d5e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_40 [2];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  uVar6 = 0;
  if ((lVar2 != 0) && (param_2[1] != 0)) {
    if ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4)) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar7 = (uint)lVar2 & 0xffff;
      plVar5 = param_1 + 0x97;
      if ((longlong *)param_1[0x98] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x98];
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_1[0x99] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar1 = param_1[0x90] + (longlong)iVar8 * 0x20;
          if (*(longlong *)(param_1[0x90] + (longlong)iVar8 * 0x20) == lVar2) {
            if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
              lVar2 = *(longlong *)(lVar1 + 8);
              uVar6 = 0;
              cVar4 = (**(code **)(*param_1 + 0x4f0))(param_1,param_2,param_3,0);
              if (cVar4 != '\0') {
                FUN_1468fc08c(local_60,*param_3,param_3[2]);
                FUN_14475cc44(local_60,local_40);
                FUN_1412fabe8(lVar2 + 0x70,local_40);
                if (*(char *)((longlong)param_1 + 0x479) == '\0') {
                  FUN_14482b35e(lVar2 + 0xd8,local_2c,local_40,0);
                }
                if (local_40[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_50 != 0) {
                  FUN_1400020a8();
                }
                (**(code **)(*param_1 + 0x500))(param_1);
                uVar6 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
              }
              goto LAB_147951d9a;
            }
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x18);
        } while (iVar8 != -1);
      }
    }
    uVar6 = 0;
  }
LAB_147951d9a:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147951f00 FUN_147951f00 body=545 status=ok
// SIG undefined FUN_147951f00(void)

ulonglong FUN_147951f00(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong *puVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined8 uStack_280;
  ulonglong *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  ulonglong *local_250;
  uint local_248;
  undefined4 local_244;
  ulonglong local_240 [64];
  ulonglong local_40 [4];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = *param_1;
  lVar2 = param_1[2];
  if (lVar2 == 0 || lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    param_2[2] = 0;
    param_2[3] = 0;
    goto LAB_147952060;
  }
  cVar3 = FUN_143408f6e(param_1 + 4);
  if (cVar3 == '\0') {
    FUN_1468fc08c(&local_260,*param_1,param_1[2]);
    *(undefined4 *)param_2 = (undefined4)local_260;
    *(undefined4 *)((longlong)param_2 + 4) = local_260._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_258;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_258._4_4_;
    if (&local_260 != param_2) {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = local_250;
      *(uint *)(param_2 + 3) = local_248;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_244;
      goto LAB_147952060;
    }
    puVar4 = local_250;
    if (local_250 == (ulonglong *)0x0) goto LAB_147952060;
  }
  else {
    local_260 = local_240;
    local_248 = local_248 & 0xffffff00;
    local_250 = local_40;
    uStack_258 = local_260;
    FUN_1468fc08c(&local_298,*param_1,param_1[2]);
    thunk_FUN_140007958(&local_298,&local_260);
    if (local_250 <= (ulonglong *)((longlong)uStack_258 + 4)) {
      FUN_140213274(&local_260,2);
    }
    *(undefined4 *)uStack_258 = 0x43005f;
    uStack_258 = (ulonglong *)((longlong)uStack_258 + 4);
    if (local_288 != 0) {
      FUN_1400020a8();
    }
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_270 = local_260;
    local_268 = (undefined4)((ulonglong)((longlong)uStack_258 - (longlong)local_260) >> 1);
    FUN_14475bf92(&local_298);
    *(undefined4 *)param_2 = (undefined4)local_298;
    *(undefined4 *)((longlong)param_2 + 4) = local_298._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_290;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_290._4_4_;
    if (&local_298 == param_2) {
      if (local_288 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = local_288;
      local_288 = 0;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_280;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_280._4_4_;
    }
    puVar4 = local_260;
    if ((char)local_248 != '\x01') goto LAB_147952060;
  }
  FUN_1400020a8(puVar4);
LAB_147952060:
  if ((local_40[0] ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar2 != 0 && lVar1 != 0) & 0xffffffff;
}



// FUNCTION 147952122 FUN_147952122 body=318 status=ok
// SIG undefined FUN_147952122(void)

undefined4
FUN_147952122(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  void *_Src;
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  void **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_50;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  local_78 = &local_58;
  local_70 = &local_48;
  FUN_141469cae(&local_68);
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,param_2,&local_68,param_4);
  FUN_1447a1747(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147952262 FUN_147952262 body=849 status=ok
// SIG undefined FUN_147952262(void)

void FUN_147952262(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_110 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar7 = *param_2;
    lVar10 = lVar7 + (longlong)(int)param_2[1] * 0x18;
    do {
      FUN_144a13f80(&local_b8,&local_f8,lVar7,0);
      if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
        lVar11 = *(longlong *)(lVar7 + 8);
        lVar8 = (longlong)*(int *)(lVar7 + 0x10) << 4;
        do {
          FUN_141215d9e(&local_d8,lVar11);
          lVar11 = lVar11 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar10);
    if (0 < (int)uStack_d0) {
      lVar10 = 0;
      do {
        puVar1 = (undefined4 *)(local_d8 + lVar10 * 0x10);
        local_108 = *puVar1;
        uStack_104 = puVar1[1];
        uStack_100 = puVar1[2];
        uStack_fc = puVar1[3];
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = (longlong *)0x0;
        uStack_f0 = 0;
        local_c8 = 0;
        lStack_c0 = 0;
        FUN_1400b3bc2(&local_f8,&local_108,&local_c8);
        (**(code **)(*param_1 + 0x338))(param_1,&local_c8,&local_f8);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        local_f8 = (longlong *)0x0;
        uStack_f0 = 0;
        uVar9 = 0;
        if ((local_c8 != 0) && (lStack_c0 != 0)) {
          cVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,&local_c8,&local_f8);
          if (cVar4 == '\0') {
            uVar9 = uStack_f0 & 0xffffffff;
          }
          else {
            uVar9 = 0;
            if ((int)uStack_f0 != 0) {
              plVar13 = local_f8 + (longlong)(int)uStack_f0 * 3;
              plVar12 = local_f8;
              do {
                if ((int)uStack_b0 != local_84) {
                  lVar7 = *plVar12;
                  uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
                  uVar6 = (uint)lVar7 & 0xffff;
                  puVar5 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar5 = local_80;
                  }
                  for (iVar2 = *(int *)(puVar5 + (ulonglong)
                                                 (local_70 - 1U &
                                                 (int)((ulonglong)lVar7 >> 0x20) +
                                                 ((uint)lVar7 << 0x10 | uVar6) +
                                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) *
                                                 4); iVar2 != -1;
                      iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_b8 + 8)) {
                    if (*(longlong *)(local_b8 + (longlong)iVar2 * 0x10) == lVar7) {
                      FUN_141215cda(local_110,lVar7,plVar12 + 1);
                      if ((longlong)(int)plVar12[2] != 0) {
                        lVar7 = plVar12[1];
                        lVar11 = (longlong)(int)plVar12[2] << 4;
                        do {
                          FUN_141215d9e(&local_d8,lVar7);
                          lVar7 = lVar7 + 0x10;
                          lVar11 = lVar11 + -0x10;
                        } while (lVar11 != 0);
                      }
                      break;
                    }
                  }
                }
                plVar12 = plVar12 + 3;
              } while (plVar12 != plVar13);
              uVar9 = uStack_f0 & 0xffffffff;
            }
          }
        }
        FUN_1401a56c2(local_f8,uVar9);
        if (local_f8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uStack_d0);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_b8);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795266e FUN_14795266e body=370 status=ok
// SIG undefined FUN_14795266e(void)

int * FUN_14795266e(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  param_2[0] = -1;
  param_2[1] = -1;
  *(undefined2 *)(param_2 + 2) = 1;
  if (*(int *)(param_1 + 0x488) == *(int *)(param_1 + 0x4b4)) {
    return param_2;
  }
  lVar4 = *param_3;
  uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
  uVar5 = (uint)lVar4 & 0xffff;
  lVar3 = param_1 + 0x4b8;
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4c0);
  }
  iVar6 = *(int *)(lVar3 + (ulonglong)
                           (*(int *)(param_1 + 0x4c8) - 1U &
                           (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
  if (iVar6 == -1) {
    return param_2;
  }
  while (lVar3 = *(longlong *)(param_1 + 0x480) + (longlong)iVar6 * 0x20,
        *(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar6 * 0x20) != lVar4) {
    iVar6 = *(int *)(lVar3 + 0x18);
    if (iVar6 == -1) {
      return param_2;
    }
  }
  if ((longlong *)(lVar3 + 8) == (longlong *)0x0 || lVar3 == 0) {
    return param_2;
  }
  lVar4 = *(longlong *)(lVar3 + 8);
  param_2[2] = *(int *)(lVar4 + 0x68);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + 0x60);
  uVar2 = FUN_1415cecbb(param_3);
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar4 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar6 * 0x28);
        if ((*plVar1 == *param_3) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)iVar6 * 0x28) == param_3[1])
           ) {
          if (plVar1 + 2 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            FUN_1479527e0(plVar1 + 2,param_2);
          }
          break;
        }
        iVar6 = (int)plVar1[4];
      } while (iVar6 != -1);
    }
  }
  if (*param_2 < 0) {
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1479527e0 FUN_1479527e0 body=51 status=ok
// SIG undefined FUN_1479527e0(void)

void FUN_1479527e0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 3);
  if ((bVar1 & 1) != 0) {
    *param_2 = *param_1;
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 & 2) != 0) {
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 & 4) != 0) {
    param_2[1] = param_1[1];
    bVar1 = *(byte *)(param_1 + 3);
  }
  if ((bVar1 & 8) != 0) {
    *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_1 + 9);
  }
  return;
}



// FUNCTION 147952814 FUN_147952814 body=196 status=ok
// SIG undefined FUN_147952814(void)

undefined8 FUN_147952814(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14088624c(param_1,param_2,1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_145d0c2fa(param_1);
    local_98 = 1;
    (**(code **)(*plVar2 + 0x98))(plVar2,local_90,lVar1 + 0x28,*(undefined1 *)(param_1 + 0x35f));
    if ((local_90[0] != 0) && (local_80 != 0)) {
      FUN_14128b194(param_3,local_90);
      FUN_14128b0c2(local_90);
      uVar3 = 1;
      goto LAB_147952845;
    }
    FUN_14128b0c2(local_90);
  }
  uVar3 = 0;
LAB_147952845:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479528da FUN_1479528da body=644 status=ok
// SIG undefined FUN_1479528da(void)

ulonglong FUN_1479528da(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar7 = (longlong *)FUN_145d0c2fa();
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    lVar8 = param_1 + 0x4b8;
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x4c0);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x480) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar5 * 0x20) == param_2) {
          uVar10 = 0;
          iVar5 = 0;
          if ((longlong *)(lVar8 + 8) != (longlong *)0x0 && lVar8 != 0) {
            lVar2 = *(longlong *)(lVar8 + 8);
            plVar1 = (longlong *)(lVar2 + 0x178);
            lVar8 = lVar2 + 0x188;
            local_b8 = 0x100000000;
            local_a8 = 0xffffffff;
            local_a0 = 0;
            local_b0 = lVar8;
            if (*(int *)(lVar2 + 0x1a0) != 0) {
              FUN_1449c0562(&local_b8);
              iVar5 = *(int *)(lVar2 + 0x1a0);
            }
            local_c8 = local_a8;
            lVar2 = local_c8;
            local_c0 = local_a0;
            local_bc = local_9c;
            local_d8 = local_b8;
            local_d0 = local_b0;
            local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
            local_e0 = plVar1;
            local_c8 = lVar2;
            if ((local_c8._4_4_ == iVar5) && (local_b0 == lVar8)) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              iVar6 = local_c8._4_4_;
              local_e8 = param_3;
              do {
                local_f8 = 1;
                (**(code **)(*plVar7 + 0x98))
                          (plVar7,&local_b8,*local_e0 + (longlong)iVar6 * 0x98 + 0x30,
                           *(undefined1 *)(param_1 + 0x35f));
                plVar4 = local_e8;
                if ((local_b8 != 0) && (local_a8 != 0)) {
                  iVar6 = (int)local_e8[1];
                  *(uint *)(local_e8 + 1) = iVar6 + 1U;
                  if (*(uint *)((longlong)local_e8 + 0xc) < iVar6 + 1U) {
                    FUN_14171b750(local_e8,iVar6);
                  }
                  FUN_14583ed9c((longlong)iVar6 * 0x70 + *plVar4,&local_b8);
                  uVar10 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
                }
                FUN_14128b0c2(&local_b8);
                local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
                FUN_1449c0562(&local_d8);
                iVar6 = local_c8._4_4_;
              } while (local_e0 != plVar1 || (local_d0 != lVar8 || local_c8._4_4_ != iVar5));
            }
            uVar10 = uVar10 & 0xffffffff;
          }
          goto LAB_147952920;
        }
        iVar5 = *(int *)(lVar8 + 0x18);
      } while (iVar5 != -1);
    }
  }
  uVar10 = 0;
LAB_147952920:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147952b60 FUN_147952b60 body=172 status=ok
// SIG undefined FUN_147952b60(void)

longlong FUN_147952b60(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14088624c(param_1,param_2,1);
  if (lVar3 != 0) {
    lVar4 = FUN_14479d2ce(lVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar3,lVar4);
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar3,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        return lVar4;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147952c0c FUN_147952c0c body=686 status=ok
// SIG undefined FUN_147952c0c(void)

undefined4 FUN_147952c0c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    lVar7 = param_1 + 0x4b8;
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x4c0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x480) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar5 * 0x20) == param_2) {
          uVar10 = 0;
          iVar5 = 0;
          if ((longlong *)(lVar7 + 8) == (longlong *)0x0 || lVar7 == 0) goto LAB_147952c3b;
          lVar9 = *(longlong *)(lVar7 + 8);
          plVar1 = (longlong *)(lVar9 + 0x178);
          lVar7 = lVar9 + 0x188;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar7;
          if (*(int *)(lVar9 + 0x1a0) != 0) {
            FUN_1449c0562(&local_68);
            iVar5 = *(int *)(lVar9 + 0x1a0);
          }
          local_78 = local_58;
          uVar3 = local_78;
          local_70 = local_50;
          local_6c = local_4c;
          local_88 = local_68;
          local_80 = local_60;
          local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          local_90 = plVar1;
          local_78 = uVar3;
          if ((local_78._4_4_ != iVar5) || (local_60 != lVar7)) {
            uVar10 = 0;
            iVar6 = local_78._4_4_;
            goto LAB_147952daf;
          }
          uVar10 = 0;
          goto LAB_147952c3b;
        }
        iVar5 = *(int *)(lVar7 + 0x18);
      } while (iVar5 != -1);
    }
  }
  uVar10 = 0;
  goto LAB_147952c3b;
LAB_147952daf:
  do {
    lVar9 = *local_90 + (longlong)iVar6 * 0x98;
    lVar12 = lVar9 + 8;
    lVar8 = FUN_14479d2ce(lVar12);
    if (lVar8 == 0) {
      if (*(longlong *)(lVar9 + 0x10) != 0) {
        lVar8 = FUN_140007850();
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar8 == 0) || (cVar4 == '\0')) {
          FUN_14485c47a(lVar12,lVar8);
          if (lVar8 == 0) goto LAB_147952df8;
        }
        else {
          uVar2 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar12,lVar8);
          }
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_147952dd3;
      }
    }
    else {
LAB_147952dd3:
      iVar6 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
        FUN_1447f76d2(param_3,iVar6);
      }
      *(longlong *)(*param_3 + (longlong)iVar6 * 8) = lVar8;
      uVar10 = 1;
    }
LAB_147952df8:
    local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
    FUN_1449c0562(&local_88);
    iVar6 = local_78._4_4_;
  } while (local_90 != plVar1 || (local_80 != lVar7 || local_78._4_4_ != iVar5));
LAB_147952c3b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147952ebc FUN_147952ebc body=130 status=ok
// SIG undefined FUN_147952ebc(void)

undefined8 * FUN_147952ebc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = FUN_14088624c(param_1,param_3,1);
  if (lVar5 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0xc);
    uVar3 = *(undefined4 *)(lVar5 + 0x10);
    uVar4 = *(undefined4 *)(lVar5 + 0x14);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + 8);
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    param_2[2] = 0;
    iVar1 = *(int *)(lVar5 + 0x20);
    _Src = *(void **)(lVar5 + 0x18);
    *(int *)(param_2 + 3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 2,iVar1,0);
      memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 147952f3e FUN_147952f3e body=475 status=ok
// SIG undefined FUN_147952f3e(void)

undefined8 FUN_147952f3e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
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
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x488);
  if (*(uint *)(param_1 + 0x488) != *(uint *)(param_1 + 0x4b4)) {
    uVar6 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    uVar4 = param_1 + 0x4b8;
    if (*(ulonglong *)(param_1 + 0x4c0) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x4c0);
    }
    iVar8 = *(int *)(uVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      uVar4 = *(ulonglong *)(param_1 + 0x480);
      do {
        lVar2 = uVar4 + (longlong)iVar8 * 0x20;
        if (*(longlong *)(uVar4 + (longlong)iVar8 * 0x20) == param_2) {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),lVar2 == 0);
          if ((longlong *)(lVar2 + 8) != (longlong *)0x0 && lVar2 != 0) {
            lVar5 = *(longlong *)(lVar2 + 8);
            plVar1 = (longlong *)(lVar5 + 0x178);
            lVar2 = lVar5 + 0x188;
            local_50 = 0x100000000;
            local_40 = 0xffffffff;
            uStack_38 = 0;
            uStack_48 = lVar2;
            if (*(int *)(lVar5 + 0x1a0) == 0) {
              uVar6 = 0;
            }
            else {
              FUN_1449c0562(&local_50);
              uVar6 = *(uint *)(lVar5 + 0x1a0);
            }
            local_70 = (undefined4)local_50;
            uStack_6c = local_50._4_4_;
            uStack_68 = (undefined4)uStack_48;
            uStack_64 = uStack_48._4_4_;
            uStack_58 = CONCAT44(uStack_34,uStack_38);
            local_60 = local_40;
            uVar3 = local_60;
            local_60._4_4_ = (uint)((ulonglong)local_40 >> 0x20);
            uVar4 = (ulonglong)local_60._4_4_;
            bVar9 = local_60._4_4_ != uVar6;
            local_78 = plVar1;
            local_60 = uVar3;
            if ((bVar9) || (uStack_48 != lVar2)) {
              do {
                lVar5 = (longlong)(int)uVar4 * 0x98;
                if (*(longlong *)(*local_78 + 0x10 + lVar5) != 0) {
                  FUN_144a6c37a(param_3,*local_78 + lVar5 + 0x10);
                }
                local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
                FUN_1449c0562(&local_70);
                uVar4 = (ulonglong)local_60._4_4_;
              } while (local_78 != plVar1 ||
                       (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != uVar6));
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),0 < *(int *)(param_3 + 8));
}



// FUNCTION 14795311a FUN_14795311a body=109 status=ok
// SIG undefined FUN_14795311a(void)

undefined8 FUN_14795311a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bbfc4(local_40,param_3);
  (**(code **)(*param_1 + 0x338))(param_1,param_2,local_40);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147953188 FUN_147953188 body=110 status=ok
// SIG undefined FUN_147953188(void)

undefined8 FUN_147953188(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x438))(param_1,local_40);
  (**(code **)(*param_1 + 0x338))(param_1,param_2,local_40);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479531f8 FUN_1479531f8 body=605 status=ok
// SIG undefined FUN_1479531f8(void)

undefined4 * FUN_1479531f8(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = param_1 + 5;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar12 = (uint)uVar3 & 0xffff;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  uVar5 = ((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4);
  iVar14 = 0;
  uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                          ((uint)uVar3 << 0x10 | uVar12) + (int)((ulonglong)uVar3 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4) + uVar5 * 0x40 +
                          0x9e3779b9 ^ uVar5);
  if (*(int *)(param_3 + 3) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)param_3[2];
    iVar14 = *(int *)(param_3 + 3) + -1;
  }
  uVar7 = FUN_144a49b4a(iVar14,puVar10);
  uVar6 = FUN_144a78877(uVar6,uVar7);
  iVar14 = FUN_14796643a(plVar1,uVar6,param_3);
  if (iVar14 == -1) {
LAB_147953308:
    (**(code **)(*param_1 + 0x458))(param_1,local_58,param_3);
    puVar13 = (undefined4 *)0x0;
    if (local_58[0] != 0) {
      uVar4 = (uint)((ulonglong)local_58[1] >> 0x10);
      uVar12 = (uint)local_58[1] & 0xffff;
      uVar5 = (uint)((ulonglong)local_58[0] >> 0x10);
      uVar11 = (uint)local_58[0] & 0xffff;
      uVar5 = ((uint)local_58[0] << 0x10 | uVar11) + (int)((ulonglong)local_58[0] >> 0x20) +
              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4);
      uVar6 = FUN_144a78877(0,(uVar12 >> 4) +
                              (uint)local_58[1] * 0x10000 + uVar12 +
                              (int)((ulonglong)local_58[1] >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 2) + uVar5 * 0x40 +
                              0x9e3779b9 ^ uVar5);
      puVar10 = local_48;
      if (local_40 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      puVar9 = (undefined4 *)(ulonglong)(local_40 - 1);
      if (local_40 == 0) {
        puVar9 = puVar13;
      }
      uVar7 = FUN_144a49b4a(puVar9,puVar10);
      uVar6 = FUN_144a78877(uVar6,uVar7);
      iVar14 = FUN_14796643a(plVar1,uVar6,local_58);
      if (iVar14 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)iVar14 * 0x38 + *plVar1;
      }
      puVar13 = (undefined4 *)(lVar8 + 0x20);
      if (lVar8 == 0) {
        puVar13 = (undefined4 *)0x0;
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar13 == (undefined4 *)0x0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar15 = 0;
      uVar16 = 0;
      goto LAB_147953342;
    }
  }
  else {
    if (*plVar1 + (longlong)iVar14 * 0x38 == 0) goto LAB_147953308;
    puVar13 = (undefined4 *)(*plVar1 + (longlong)iVar14 * 0x38 + 0x20);
  }
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  uVar15 = puVar13[2];
  uVar16 = puVar13[3];
LAB_147953342:
  *param_2 = uVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar15;
  param_2[3] = uVar16;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147953456 FUN_147953456 body=119 status=ok
// SIG undefined FUN_147953456(void)

undefined8 FUN_147953456(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1468fc182(&local_48,param_3);
  (**(code **)(*param_1 + 0x338))(param_1,param_2,&local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479534ce FUN_1479534ce body=561 status=ok
// SIG undefined FUN_1479534ce(void)

longlong * FUN_1479534ce(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = param_3;
  FUN_1400021e4(&local_58,&local_68);
  FUN_140d2bdd2(&local_78,&local_68);
  *param_2 = 0;
  param_2[1] = 0;
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  FUN_140002266(&local_50,L"%s.%s",puVar2,puVar3);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = local_50;
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar1);
  FUN_14475bf92();
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    (**(code **)(*param_1 + 0x338))(param_1,param_2,&local_98);
    if ((*param_2 != 0) && (param_2[1] != 0)) goto LAB_14795369e;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  FUN_140002266(&local_c8,L"%s.%s_C",puVar2,puVar3);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = local_c8;
  local_48 = local_c0 + -1;
  if (local_c0 == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_b8);
  local_98 = local_b8;
  uStack_90 = uStack_b0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_88 = local_a8;
  uStack_80 = uStack_a0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    (**(code **)(*param_1 + 0x338))(param_1,&local_b8,&local_98);
    *(undefined4 *)param_2 = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 4) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b0._4_4_;
  }
LAB_14795369e:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147953700 FUN_147953700 body=568 status=ok
// SIG undefined FUN_147953700(void)

longlong * FUN_147953700(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_2b8 [40];
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 *local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 *local_260;
  undefined1 *local_258;
  ulonglong *local_250;
  char local_248;
  undefined1 local_240 [512];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1400b428a(param_3,&local_270);
  if (param_4 != 0 && (CONCAT44(uStack_264,uStack_268) == 0 || CONCAT44(uStack_26c,local_270) == 0))
  {
    if ((*(byte *)((longlong)param_3 + 0x3e) & 2) != 0) {
      local_260 = local_240;
      local_248 = '\0';
      local_250 = &local_40;
      local_258 = local_260;
      FUN_14005eb5c(param_3,&local_260);
      local_280 = local_260;
      local_278 = (undefined4)((ulonglong)((longlong)local_258 - (longlong)local_260) >> 1);
      cVar4 = FUN_1468723c6();
      if (local_248 == '\x01') {
        FUN_1400020a8(local_260);
      }
      if (cVar4 != '\0') {
        lVar2 = *param_3;
        *param_2 = DAT_14cacd8b0;
        param_2[1] = lVar2;
        goto LAB_147953795;
      }
    }
    plVar5 = param_3 + 2;
    if (DAT_14cace040 == param_4) {
      plVar5 = param_3;
    }
    if ((*(char *)((longlong)param_1 + 0x351) == '\x01') &&
       ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4))) {
      uVar3 = (uint)((ulonglong)param_4 >> 0x10);
      uVar8 = (uint)param_4 & 0xffff;
      plVar7 = param_1 + 0x97;
      if ((longlong *)param_1[0x98] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x98];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)param_1[0x99] - 1U &
                      (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar8) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar6 != -1) {
        lVar2 = *plVar5;
        do {
          lVar1 = param_1[0x90] + (longlong)iVar6 * 0x20;
          if (*(longlong *)(param_1[0x90] + (longlong)iVar6 * 0x20) == param_4) {
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
              (**(code **)(*param_1 + 0x438))(param_1,&local_260,param_3);
              (**(code **)(*param_1 + 0x338))(param_1,&local_290,&local_260);
              if (local_250 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              if ((CONCAT44(uStack_28c,local_290) == 0) ||
                 (local_270 = local_290, uStack_26c = uStack_28c, uStack_268 = uStack_288,
                 uStack_264 = uStack_284, CONCAT44(uStack_284,uStack_288) == 0)) {
                *param_2 = param_4;
                param_2[1] = lVar2;
                goto LAB_147953795;
              }
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x18);
        } while (iVar6 != -1);
      }
    }
  }
  *(undefined4 *)param_2 = local_270;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_26c;
  *(undefined4 *)(param_2 + 1) = uStack_268;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_264;
LAB_147953795:
  if ((local_40 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14795393a FUN_14795393a body=535 status=ok
// SIG undefined FUN_14795393a(void)

undefined8 FUN_14795393a(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x488);
  if (*(uint *)(param_1 + 0x488) != *(uint *)(param_1 + 0x4b4)) {
    uVar9 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    uVar5 = param_1 + 0x4b8;
    if (*(ulonglong *)(param_1 + 0x4c0) != 0) {
      uVar5 = *(ulonglong *)(param_1 + 0x4c0);
    }
    iVar8 = *(int *)(uVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      uVar5 = *(ulonglong *)(param_1 + 0x480);
      do {
        lVar2 = uVar5 + (longlong)iVar8 * 0x20;
        if (*(longlong *)(uVar5 + (longlong)iVar8 * 0x20) == param_2) {
          uVar5 = CONCAT71((int7)(uVar5 >> 8),lVar2 == 0);
          if ((longlong *)(lVar2 + 8) != (longlong *)0x0 && lVar2 != 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            plVar1 = (longlong *)(lVar3 + 0x178);
            lVar2 = lVar3 + 0x188;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar2;
            if (*(int *)(lVar3 + 0x1a0) == 0) {
              uVar9 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              uVar9 = *(uint *)(lVar3 + 0x1a0);
            }
            local_88 = (undefined4)local_68;
            uStack_84 = local_68._4_4_;
            uStack_80 = (undefined4)uStack_60;
            uStack_7c = uStack_60._4_4_;
            uStack_70 = CONCAT44(uStack_4c,uStack_50);
            local_78 = local_58;
            uVar4 = local_78;
            local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uVar5 = (ulonglong)local_78._4_4_;
            bVar10 = local_78._4_4_ != uVar9;
            local_90 = plVar1;
            local_78 = uVar4;
            if ((bVar10) || (uStack_60 != lVar2)) {
              do {
                puVar6 = (undefined8 *)((longlong)(int)uVar5 * 0x98 + *local_90);
                if (((param_4 & 1) == 0) ||
                   ((*(int *)(puVar6 + 0xd) == 0 && (*(int *)(puVar6 + 0x11) == 0)))) {
                  uVar4 = *puVar6;
                  iVar8 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_1417b92ae(param_3,iVar8);
                  }
                  lVar3 = *param_3;
                  *(longlong *)(lVar3 + (longlong)iVar8 * 0x10) = param_2;
                  *(undefined8 *)(lVar3 + 8 + (longlong)iVar8 * 0x10) = uVar4;
                }
                local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
                FUN_1449c0562(&local_88);
                uVar5 = (ulonglong)local_78._4_4_;
                bVar10 = local_78._4_4_ != uVar9;
              } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || bVar10));
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < (int)param_3[1]);
}



// FUNCTION 147953b52 FUN_147953b52 body=200 status=ok
// SIG undefined FUN_147953b52(void)

bool FUN_147953b52(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x4b8;
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4c0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x4c8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x480) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar2 * 0x20) == param_2)
        goto LAB_147953b67;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_147953b67:
  puVar4 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_147953c1a(param_3,*puVar4);
  }
  return puVar4 != (undefined8 *)0x0;
}



// FUNCTION 147953c1a FUN_147953c1a body=167 status=ok
// SIG undefined FUN_147953c1a(void)

undefined8 * FUN_147953c1a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  lVar4 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[6];
    }
  }
  param_1[6] = lVar4;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  FUN_1479644ae(param_1 + 8,param_2 + 8);
  FUN_14591fc3c(param_1 + 10,param_2 + 10);
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 147953cc2 FUN_147953cc2 body=321 status=ok
// SIG undefined FUN_147953cc2(void)

void FUN_147953cc2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x480);
  lVar2 = param_1 + 0x490;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x4a8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x4a8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_88 + 8 + (longlong)iStack_6c * 0x20);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_147967760(param_2,iVar3);
      }
      FUN_145d54c92((longlong)iVar3 * 0x88 + *param_2,uVar4);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147953e04 FUN_147953e04 body=103 status=ok
// SIG undefined FUN_147953e04(void)

void * FUN_147953e04(void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 0x108) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x10c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x20;
  }
  else {
    FUN_1470556f4(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x100);
      if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 147953e6c FUN_147953e6c body=274 status=ok
// SIG undefined FUN_147953e6c(void)

undefined8 *
FUN_147953e6c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48[0] = 0;
  local_48[1] = 0;
  local_98 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_90 = 0;
  cVar1 = FUN_147953f80();
  if (cVar1 == '\0') {
    if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_5 + 0x60))();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_78 = *param_5;
    local_88 = &local_78;
    *param_5 = 0;
    local_70 = (undefined4)param_5[1];
    *(undefined4 *)(param_5 + 1) = 0;
    local_80 = param_6;
    local_90 = 0;
    local_98 = param_4;
    (**(code **)(*param_1 + 0x398))(param_1,param_2,local_48,param_3);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_5);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147953f80 FUN_147953f80 body=1022 status=ok
// SIG undefined FUN_147953f80(void)

ulonglong FUN_147953f80(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5,char param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = (longlong *)(param_1 + 0x480);
  local_d0 = param_1 + 0x490;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  local_e8 = param_2;
  local_c8 = param_4;
  uStack_b0 = local_d0;
  if (*(int *)(param_1 + 0x4a8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar11 = *(int *)(param_1 + 0x4a8);
  }
  local_78 = local_a8;
  lVar13 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_e0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_78 = lVar13;
  if ((local_78._4_4_ == iVar11) && (uStack_b0 == local_d0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    iVar6 = local_78._4_4_;
    local_d4 = iVar11;
    local_c0 = param_3;
    do {
      plVar15 = (longlong *)((longlong)iVar6 * 0x20 + *local_90);
      if ((longlong)(int)param_3[1] < 1) {
LAB_1479540d9:
        lVar10 = plVar15[1];
        lVar13 = lVar10 + 0x188;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar13;
        if (*(int *)(lVar10 + 0x1a0) == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar6 = *(int *)(lVar10 + 0x1a0);
        }
        plVar18 = (longlong *)(lVar10 + 0x178);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar5 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar7 = uStack_a0._4_4_;
        local_b8 = plVar18;
        if ((uStack_a0._4_4_ != iVar6) ||
           (param_3 = local_c0, iVar11 = local_d4, uStack_a0 = uVar5, lStack_60 != lVar13)) {
          do {
            uStack_a0 = uVar5;
            puVar8 = (undefined8 *)((longlong)iVar7 * 0x98 + *local_b8);
            if ((param_6 == '\0') &&
               (((lVar10 = puVar8[0xe], lVar10 != 0 && (*(char *)(lVar10 + 0x12) == '\0')) &&
                (*(char *)(lVar10 + 0x11) != '\x01')))) {
              puVar9 = puVar8 + 0xe;
              bVar12 = 0;
LAB_1479542c3:
              if (((bVar12 & 1) == 0) && (*(char *)(lVar10 + 0x11) == '\0')) {
                bVar4 = true;
                if ((longlong)(int)local_c8[1] != 0) {
                  if ((longlong)*(int *)(puVar9 + 3) == 0) {
LAB_1479541f8:
                    bVar4 = false;
                  }
                  else {
                    plVar14 = (longlong *)*local_c8;
                    plVar1 = plVar14 + (int)local_c8[1];
                    do {
                      lVar10 = 0;
                      while (*(longlong *)(puVar9[2] + lVar10) != *plVar14) {
                        lVar10 = lVar10 + 8;
                        if ((longlong)*(int *)(puVar9 + 3) * 8 == lVar10) goto LAB_1479541f8;
                      }
                      plVar14 = plVar14 + 1;
                    } while (plVar14 != plVar1);
                  }
                }
                if ((longlong)(int)param_5[1] != 0) {
                  plVar14 = (longlong *)*param_5;
                  plVar1 = plVar14 + (int)param_5[1];
                  do {
                    if (*(int *)(puVar9 + 3) != 0) {
                      lVar10 = 0;
                      do {
                        if (*(longlong *)(puVar9[2] + lVar10) == *plVar14) goto LAB_1479542d3;
                        lVar10 = lVar10 + 8;
                      } while ((longlong)*(int *)(puVar9 + 3) << 3 != lVar10);
                    }
                    plVar14 = plVar14 + 1;
                  } while (plVar14 != plVar1);
                }
                if (bVar4) {
                  uVar2 = *puVar8;
                  lVar10 = *plVar15;
                  iVar11 = (int)local_e8[1];
                  *(uint *)(local_e8 + 1) = iVar11 + 1U;
                  if (*(uint *)((longlong)local_e8 + 0xc) < iVar11 + 1U) {
                    FUN_1417b92ae(local_e8,iVar11);
                  }
                  lVar3 = *local_e8;
                  lVar16 = (longlong)iVar11 * 0x10;
                  *(longlong *)(lVar3 + lVar16) = lVar10;
                  *(undefined8 *)(lVar3 + 8 + lVar16) = uVar2;
                  uVar17 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
                }
              }
            }
            else {
              lVar10 = puVar8[10];
              if (lVar10 != 0) {
                puVar9 = puVar8 + 10;
                bVar12 = *(byte *)(lVar10 + 0x12);
                goto LAB_1479542c3;
              }
            }
LAB_1479542d3:
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            param_3 = local_c0;
            iVar11 = local_d4;
            iVar7 = uStack_a0._4_4_;
            uVar5 = uStack_a0;
          } while (local_b8 != plVar18 || (local_a8 != lVar13 || uStack_a0._4_4_ != iVar6));
        }
      }
      else {
        lVar13 = 0;
        do {
          if (*(longlong *)(*param_3 + lVar13) == *plVar15) goto LAB_1479540d9;
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)param_3[1] * 8 != lVar13);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
    } while (local_90 != local_e0 ||
             (CONCAT44(uStack_7c,uStack_80) != local_d0 || local_78._4_4_ != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffff01;
}



// FUNCTION 147954380 FUN_147954380 body=941 status=ok
// SIG undefined FUN_147954380(void)

/* WARNING: Removing unreachable block (ram,0x000147954661) */

bool FUN_147954380(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = FUN_14088624c(param_1,param_3,1);
  if (lVar8 == 0) {
    FUN_140056680(&local_a8,L"GetPrimaryAssetLoadList failed to find NameData");
    (**(code **)(*param_1 + 0x4d0))(param_1,param_3,&local_a8);
    plVar10 = local_a8;
  }
  else {
    if (*(longlong *)(lVar8 + 8) != 0) {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      local_d0 = param_3;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1406f071e(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar12 = (longlong)iVar2 * 0x20;
      uVar5 = *(undefined4 *)(lVar8 + 0xc);
      uVar6 = *(undefined4 *)(lVar8 + 0x10);
      uVar7 = *(undefined4 *)(lVar8 + 0x14);
      puVar1 = (undefined4 *)(lVar3 + lVar12);
      *puVar1 = *(undefined4 *)(lVar8 + 8);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined8 *)(lVar3 + 0x10 + lVar12) = 0;
      iVar2 = *(int *)(lVar8 + 0x20);
      pvVar4 = *(void **)(lVar8 + 0x18);
      *(int *)(lVar3 + 0x18 + lVar12) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(lVar3 + lVar12 + 0x1c) = 0;
        param_3 = local_d0;
      }
      else {
        puVar13 = (undefined8 *)(lVar12 + lVar3 + 0x10);
        FUN_1446dd670(puVar13,iVar2,0);
        memcpy((void *)*puVar13,pvVar4,(longlong)iVar2 * 2);
        param_3 = local_d0;
      }
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    lVar3 = param_4[1];
    local_c0 = lVar8;
    if ((longlong)(int)lVar3 != 0) {
      lVar8 = *param_4;
      lVar12 = 0;
      local_c8 = param_1;
      do {
        (**(code **)(*param_1 + 0x3b0))(param_1,&local_a8,param_3,*(undefined8 *)(lVar8 + lVar12));
        uVar11 = uStack_80;
        if (local_a8 != (longlong *)0x0) {
          lVar14 = (longlong)(int)uStack_80;
          uVar9 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
          if (uStack_80._4_4_ < uVar9) {
            FUN_141499410(&local_88,uVar11 & 0xffffffff);
          }
          pvVar4 = uStack_a0;
          local_88[lVar14 * 3] = (longlong)local_a8;
          local_88[lVar14 * 3 + 1] = 0;
          lVar15 = (longlong)(int)local_98;
          *(int *)(local_88 + lVar14 * 3 + 2) = (int)local_98;
          if (lVar15 == 0) {
            *(undefined4 *)((longlong)local_88 + lVar14 * 0x18 + 0x14) = 0;
          }
          else {
            plVar10 = local_88 + lVar14 * 3 + 1;
            FUN_1401b3898(plVar10,local_98 & 0xffffffff,0);
            param_1 = local_c8;
            memcpy((void *)*plVar10,pvVar4,lVar15 << 4);
          }
        }
        if (uStack_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)lVar3 << 3 != lVar12);
    }
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_88);
    }
    if ((longlong)(int)uStack_80 == 0) {
      uVar11 = 0;
    }
    else {
      local_d0 = local_88 + (longlong)(int)uStack_80 * 3;
      plVar10 = local_88;
      do {
        lVar8 = plVar10[2];
        local_c8 = plVar10;
        if ((longlong)(int)lVar8 != 0) {
          lVar3 = plVar10[1];
          lVar12 = 0;
          do {
            puVar1 = (undefined4 *)(lVar3 + lVar12);
            local_b8 = *puVar1;
            uStack_b4 = puVar1[1];
            uStack_b0 = puVar1[2];
            uStack_ac = puVar1[3];
            local_a8 = (longlong *)0x0;
            uStack_a0 = (void *)0x0;
            local_98 = 0;
            uStack_90 = 0;
            local_78 = 0;
            uStack_70 = 0;
            FUN_1400b3bc2(&local_a8,&local_b8,&local_78);
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1406f071e(param_2,iVar2);
            }
            lVar14 = *param_2;
            lVar15 = (longlong)iVar2 * 0x20;
            puVar1 = (undefined4 *)(lVar14 + lVar15);
            *puVar1 = (undefined4)local_a8;
            puVar1[1] = local_a8._4_4_;
            puVar1[2] = (undefined4)uStack_a0;
            puVar1[3] = uStack_a0._4_4_;
            *(undefined8 *)(lVar14 + 0x10 + lVar15) = 0;
            *(ulonglong *)(lVar14 + 0x10 + lVar15) = local_98;
            *(undefined4 *)(lVar14 + 0x18 + lVar15) = (undefined4)uStack_90;
            *(undefined4 *)(lVar14 + 0x1c + lVar15) = uStack_90._4_4_;
            uStack_90 = 0;
            local_98 = 0;
            lVar12 = lVar12 + 0x10;
          } while ((longlong)(int)lVar8 * 0x10 != lVar12);
        }
        plVar10 = local_c8 + 3;
      } while (plVar10 != local_d0);
      uVar11 = uStack_80 & 0xffffffff;
    }
    FUN_1401a56c2(local_88,uVar11);
    lVar8 = local_c0;
    plVar10 = local_88;
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8 != 0;
}



// FUNCTION 14795472e FUN_14795472e body=201 status=ok
// SIG undefined FUN_14795472e(void)

undefined8
FUN_14795472e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*param_1 + 0x350))(0,param_3,local_48,0);
  local_58 = *param_5;
  local_68 = &local_58;
  *param_5 = 0;
  local_50 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  local_60 = param_6;
  (**(code **)(*param_1 + 0x368))(param_1,param_2,local_48,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_5);
  if ((local_48[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479547f8 FUN_1479547f8 body=128 status=ok
// SIG undefined FUN_1479547f8(void)

undefined8 *
FUN_1479547f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,char param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14088624c(param_1,param_3,1);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((((param_4 == '\0') && (lVar1 = *(longlong *)(lVar2 + 0x68), lVar1 != 0)) &&
        (*(char *)(lVar1 + 0x12) == '\0')) && (*(char *)(lVar1 + 0x11) != '\x01')) {
      puVar3 = (undefined8 *)(lVar2 + 0x68);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 0x48);
    }
    if (param_5 != 0) {
      FUN_1406fa324(param_5,puVar3 + 2);
    }
    *param_2 = *puVar3;
    lVar2 = puVar3[1];
    param_2[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 147954878 FUN_147954878 body=111 status=ok
// SIG undefined FUN_147954878(void)

undefined4 FUN_147954878(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x350))(0,param_2,local_28,0);
  uVar1 = (**(code **)(*param_1 + 0x380))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479548e8 FUN_1479548e8 body=203 status=ok
// SIG undefined FUN_1479548e8(void)

undefined8 FUN_1479548e8(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0a348 == '\0') {
    local_28 = *param_4;
    *param_4 = 0;
    local_20 = (undefined4)param_4[1];
    local_1c = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  local_48 = &local_28;
  local_38 = *param_3;
  *param_3 = 0;
  local_30 = (undefined4)param_3[1];
  local_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FUN_1414d0442(param_1,param_2,&local_38,0);
  FUN_140861e20(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479549b4 FUN_1479549b4 body=184 status=ok
// SIG undefined FUN_1479549b4(void)

undefined8 FUN_1479549b4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar2 = FUN_1415cecbb(param_2);
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    lVar3 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x158);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x160) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 0x28);
        if ((*plVar1 == *param_2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x118) + 8 + (longlong)iVar5 * 0x28) == param_2[1]
           )) {
          plVar4 = plVar1 + 2;
          if (plVar4 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          FUN_147954a6c(param_3,*plVar4);
          return CONCAT71((int7)((ulonglong)*plVar4 >> 8),0 < *(int *)(*plVar4 + 8));
        }
        iVar5 = (int)plVar1[4];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147954a6c FUN_147954a6c body=96 status=ok
// SIG undefined FUN_147954a6c(void)

void FUN_147954a6c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_141499410(param_1,iVar2);
    }
    FUN_1401b3808((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147954acc FUN_147954acc body=1963 status=ok
// SIG undefined FUN_147954acc(void)

ulonglong FUN_147954acc(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStack_2c8 [40];
  undefined8 local_2a0;
  longlong *local_298;
  longlong local_290;
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  uint *local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_244;
  uint local_240;
  undefined1 local_23c [4];
  uint *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  uint local_218 [4];
  undefined1 local_208 [16];
  undefined8 local_1f8;
  uint local_1f0;
  undefined8 local_1ec;
  int local_1e4;
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  uint local_1a0;
  undefined8 local_19c;
  int local_194;
  longlong local_188;
  undefined4 local_180;
  uint local_178 [8];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  int local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puVar11 = (uint *)0x0;
  if (*(char *)((longlong)param_1 + 0x353) == '\x01') {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_278 = (longlong *)FUN_140d57cf8();
    uVar5 = FUN_1400dbadc();
    local_2a0 = FUN_145aa0930(uVar5,L"PakFile");
    puVar6 = (undefined1 *)0x0;
    if ((longlong)(int)param_2[1] != 0) {
      lVar10 = *param_2;
      local_290 = (longlong)(int)param_2[1] * 0x20 + lVar10;
      local_298 = param_3;
      local_288 = param_1;
      do {
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_f8 = 0xffffffff;
        local_c8 = 0;
        local_c0 = 0;
        local_d4 = 0;
        local_e4 = 0;
        uStack_dc = 0;
        local_f4 = 0;
        uStack_ec = 0;
        local_bc = 2;
        local_280 = lVar10;
        (**(code **)(*local_288 + 0x428))();
        local_158 = 0;
        local_150 = 0;
        local_178[0] = 0;
        local_178[1] = 0;
        local_178[2] = 0;
        local_178[3] = 0;
        local_14c = 0xffffffff00000080;
        local_144 = 0;
        local_138 = 0;
        local_130 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1c8[0] = 0;
        local_1c8[1] = 0;
        local_1c8[2] = 0;
        local_1c8[3] = 0;
        local_19c = 0xffffffff00000080;
        local_194 = 0;
        local_188 = 0;
        local_180 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_218[0] = 0;
        local_218[1] = 0;
        local_218[2] = 0;
        local_218[3] = 0;
        local_1ec = 0xffffffff00000080;
        local_1e4 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        FUN_14163426a(&local_128,&local_238);
        if ((longlong)(int)uStack_230 != 0) {
          puVar11 = local_238 + (int)uStack_230;
          puVar9 = local_238;
          do {
            local_240 = *puVar9;
            if ((int)uStack_b0 != local_84) {
              puVar6 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar6 = local_80;
              }
              for (iVar4 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & local_240) * 4);
                  iVar4 != -1; iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_b8 + 8)) {
                if (*(uint *)(local_b8 + (longlong)iVar4 * 0x10) == local_240) goto LAB_147954e18;
              }
            }
            local_244 = (**(code **)(*local_278 + 0x10))();
            if ((1 < (int)local_244) && (cVar3 = FUN_14707c0ee(local_2a0), cVar3 != '\0')) {
              local_244 = FUN_14707c066(local_2a0,local_240);
            }
            local_268 = &local_244;
            local_270 = &local_240;
            FUN_147967b0e(&local_b8,local_23c);
LAB_147954e18:
            if ((int)uStack_b0 != local_84) {
              puVar6 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar6 = local_80;
              }
              iVar4 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & local_240) * 4);
              while (iVar4 != -1) {
                lVar10 = local_b8 + (longlong)iVar4 * 0x10;
                if (*(uint *)(local_b8 + (longlong)iVar4 * 0x10) == local_240) goto LAB_147954e1e;
                iVar4 = *(int *)(lVar10 + 8);
              }
            }
            lVar10 = 0;
LAB_147954e1e:
            iVar4 = *(int *)(lVar10 + 4);
            if (iVar4 - 2U < 2) {
              puVar7 = local_178;
LAB_147954e89:
              FUN_1447cbafe(puVar7,&local_270,&local_240,0);
            }
            else {
              if (iVar4 == 1) {
                puVar7 = local_1c8;
                goto LAB_147954e89;
              }
              if (iVar4 == 0) {
                puVar7 = local_218;
                goto LAB_147954e89;
              }
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar11);
        }
        uVar5 = local_258;
        if (local_178[2] == local_144) {
          if (local_194 < (int)local_1c8[2]) {
            local_238 = (uint *)&DAT_100000000;
            uStack_230 = local_1b8;
            local_228 = 0xffffffff;
            uStack_220 = 0;
            if (local_1a0 == 0) {
              puVar11 = (uint *)0x0;
            }
            else {
              FUN_1449c0562(&local_238);
              puVar11 = (uint *)(ulonglong)local_1a0;
            }
            uStack_250 = CONCAT44(uStack_21c,uStack_220);
            local_258 = local_228;
            uVar5 = local_258;
            local_268 = local_238;
            uStack_260 = (int)uStack_230;
            uStack_25c = uStack_230._4_4_;
            local_270 = local_1c8;
            local_258._4_4_ = (int)((ulonglong)local_228 >> 0x20);
            if ((local_258._4_4_ != (int)puVar11) || (uStack_230 != local_1b8)) {
              iVar8 = -1;
              iVar4 = local_258._4_4_;
              local_258 = uVar5;
              do {
                iVar4 = *(int *)(*(longlong *)local_270 + (longlong)iVar4 * 0xc);
                if ((longlong)(int)param_3[1] != 0) {
                  lVar10 = 0;
                  do {
                    uVar5 = local_258;
                    if (*(int *)(*param_3 + lVar10) == iVar4) goto LAB_14795517b;
                    lVar10 = lVar10 + 4;
                  } while ((longlong)(int)param_3[1] * 4 != lVar10);
                }
                if (iVar8 == -1) {
                  iVar8 = iVar4;
                }
                local_258 = CONCAT44(local_258._4_4_,(uint)local_258 & ~local_268._4_4_);
                FUN_1449c0562(&local_268);
                iVar4 = local_258._4_4_;
              } while (local_270 != local_1c8 ||
                       ((undefined1 *)CONCAT44(uStack_25c,uStack_260) != local_1b8 ||
                       local_258._4_4_ != (int)puVar11));
              uVar5 = local_258;
              if (iVar8 != -1) {
                iVar4 = (int)param_3[1];
                puVar11 = (uint *)(longlong)iVar4;
                *(uint *)(param_3 + 1) = iVar4 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
                  FUN_1446f48e2(param_3,iVar4);
                }
                *(int *)(*param_3 + (longlong)puVar11 * 4) = iVar8;
                uVar5 = local_258;
              }
            }
          }
          else if (local_1e4 < (int)local_218[2]) {
            local_238 = (uint *)&DAT_100000000;
            uStack_230 = local_208;
            local_228 = 0xffffffff;
            uStack_220 = 0;
            if (local_1f0 == 0) {
              puVar11 = (uint *)0x0;
            }
            else {
              FUN_1449c0562(&local_238);
              puVar11 = (uint *)(ulonglong)local_1f0;
            }
            uStack_250 = CONCAT44(uStack_21c,uStack_220);
            local_258 = local_228;
            uVar5 = local_258;
            local_268 = local_238;
            uStack_260 = (int)uStack_230;
            uStack_25c = uStack_230._4_4_;
            local_270 = local_218;
            local_258._4_4_ = (int)((ulonglong)local_228 >> 0x20);
            iVar4 = local_258._4_4_;
            if ((local_258._4_4_ != (int)puVar11) || (param_3 = local_298, uStack_230 != local_208))
            {
              do {
                local_258 = uVar5;
                uVar1 = *(undefined4 *)(*(longlong *)local_270 + (longlong)iVar4 * 0xc);
                iVar4 = (int)param_4[1];
                *(uint *)(param_4 + 1) = iVar4 + 1U;
                if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
                  FUN_1446f48e2(param_4,iVar4);
                }
                *(undefined4 *)(*param_4 + (longlong)iVar4 * 4) = uVar1;
                local_258 = CONCAT44(local_258._4_4_,(uint)local_258 & ~local_268._4_4_);
                FUN_1449c0562(&local_268);
                param_3 = local_298;
                iVar4 = local_258._4_4_;
                uVar5 = local_258;
              } while (local_270 != local_218 ||
                       ((undefined1 *)CONCAT44(uStack_25c,uStack_260) != local_208 ||
                       local_258._4_4_ != (int)puVar11));
            }
          }
        }
LAB_14795517b:
        local_258 = uVar5;
        local_1d0 = 0;
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(local_218);
        local_180 = 0;
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(local_1c8);
        local_130 = 0;
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(local_178);
        FUN_14128b0c2(&local_128);
        lVar10 = local_280 + 0x20;
        puVar6 = local_78;
      } while (lVar10 != local_290);
    }
    lVar10 = param_3[1];
    lVar2 = param_4[1];
    local_70 = 0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_1400020a8(puVar6);
    }
    puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar11 >> 8),0 < (int)lVar10 || 0 < (int)lVar2);
    FUN_14796450c(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return (ulonglong)puVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147955278 FUN_147955278 body=591 status=ok
// SIG undefined FUN_147955278(void)

void FUN_147955278(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x2e8);
  *(uint *)(param_1 + 0x2e8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2ec) < iVar4 + 1U) {
    FUN_147967fac((longlong *)(param_1 + 0x2e0),iVar4);
  }
  lVar8 = *(longlong *)(param_1 + 0x2e0);
  lVar9 = (longlong)iVar4 * 0x40;
  lVar3 = lVar8 + lVar9;
  lVar10 = lVar8 + 0x30 + lVar9;
  *(undefined8 *)(lVar10 + -4) = 0;
  *(undefined8 *)(lVar10 + 4) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined8 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined8 *)(lVar10 + -0x18) = 0;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined8 *)(lVar10 + -0x28) = 0;
  FUN_144a450dc(lVar10,param_3);
  FUN_14054c6c4(lVar3,param_2);
  FUN_14054c6c4(lVar8 + lVar9 + 0x10,param_2);
  uVar5 = *param_5;
  lVar10 = param_5[1];
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(longlong *)(lVar3 + 0x28) = lVar10;
  if (plVar7 != (longlong *)0x0) {
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
  }
  plVar7 = (longlong *)FUN_140d57cf8();
  if (*(longlong *)(param_1 + 0x470) == 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar6 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a7ecea0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_60[2] = lVar8;
    *local_60 = &PTR_FUN_14a7ec450;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    puVar6[4] = &LAB_1479554c8;
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0x470) = local_50;
  }
  iVar4 = *(int *)(lVar3 + 0x18);
  if ((longlong)iVar4 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x10);
    lVar10 = 0;
    do {
      (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined4 *)(lVar3 + lVar10),param_4);
      lVar10 = lVar10 + 4;
    } while ((longlong)iVar4 * 4 != lVar10);
  }
  FUN_1449db362(param_3);
  plVar7 = (longlong *)param_5[1];
  if (plVar7 != (longlong *)0x0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479554d6 FUN_1479554d6 body=273 status=ok
// SIG undefined FUN_1479554d6(void)

void FUN_1479554d6(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_3;
  *param_3 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a7ec530;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_50[2] = lVar4;
  *local_50 = &PTR_FUN_14a7ec4c0;
  local_50[3] = uVar2;
  local_60 = 0;
  *(undefined4 *)(local_50 + 4) = uVar1;
  local_58 = 0;
  (**(code **)(*param_1 + 0x3d0))(param_1,param_2,&local_50,param_4);
  FUN_1449db362(&local_60);
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479555e8 FUN_1479555e8 body=1113 status=ok
// SIG undefined FUN_1479555e8(void)

void FUN_1479555e8(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 **ppuVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x3c0))();
  _Src = local_58;
  if ((int)uStack_60 < 1) {
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_98 = (undefined8 *)*param_3;
      *param_3 = 0;
      uStack_90._0_4_ = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_3 + 1) = 0;
      local_88 = (void *)0x0;
      local_80._0_4_ = (int)uStack_50;
      FUN_144a06ca8(&local_88,uStack_50 & 0xffffffff,0);
      memcpy(local_88,_Src,lVar7 << 2);
      local_d8 = (undefined8 *)0x0;
      local_d0 = 0;
      FUN_1446efa72(&local_d8,0,4,0x10);
      local_d0 = 4;
      *local_d8 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_d8[2] = lVar4;
      *local_d8 = &PTR_FUN_14a7ec680;
      local_d8[3] = local_98;
      local_98 = (undefined8 *)0x0;
      *(undefined4 *)(local_d8 + 4) = (undefined4)uStack_90;
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
      local_d8[5] = local_88;
      local_88 = (void *)0x0;
      *(int *)(local_d8 + 6) = (int)local_80;
      *(undefined4 *)((longlong)local_d8 + 0x34) = local_80._4_4_;
      local_80 = 0;
      local_e8 = &local_c8;
      (**(code **)(*param_1 + 0x548))(param_1,&local_58,&local_d8,param_4);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      ppuVar3 = &local_98;
      goto LAB_14795578f;
    }
    uVar2 = *param_3;
    *param_3 = 0;
    uVar1 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_3 + 1) = 0;
    local_98 = (undefined8 *)0x0;
    uStack_90._0_4_ = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,3);
    *local_98 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_98[2] = lVar4;
    *local_98 = &PTR_FUN_14a7ec610;
    local_98[3] = uVar2;
    local_78 = (undefined8 *)0x0;
    *(undefined4 *)(local_98 + 4) = uVar1;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1449db362(&local_78);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    puVar5 = &local_b8;
    local_b8 = 0;
    uStack_b0 = 0;
    ppuVar3 = &local_98;
    ppuVar6 = &local_78;
  }
  else {
    local_98 = (undefined8 *)*param_3;
    *param_3 = 0;
    uStack_90._0_4_ = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_3 + 1) = 0;
    local_88 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_50;
    local_80._0_4_ = (int)uStack_50;
    if (lVar7 == 0) {
      local_80._4_4_ = 0;
    }
    else {
      FUN_144a06ca8(&local_88,uStack_50 & 0xffffffff,0);
      memcpy(local_88,_Src,lVar7 << 2);
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1446efa72(&local_78,0,4,0x10);
    uStack_70 = CONCAT44(uStack_70._4_4_,4);
    *local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_78[2] = lVar4;
    *local_78 = &PTR_FUN_14a7ec5a0;
    local_78[3] = local_98;
    local_98 = (undefined8 *)0x0;
    *(undefined4 *)(local_78 + 4) = (undefined4)uStack_90;
    uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
    local_78[5] = local_88;
    local_88 = (void *)0x0;
    *(int *)(local_78 + 6) = (int)local_80;
    *(undefined4 *)((longlong)local_78 + 0x34) = local_80._4_4_;
    local_80 = 0;
    FUN_1449db362(&local_98);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    puVar5 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    ppuVar3 = &local_78;
    ppuVar6 = &local_98;
  }
  FUN_1402a1d54(ppuVar3,puVar5,ppuVar6);
  FUN_1449db362(ppuVar6);
LAB_14795578f:
  FUN_1449db362(ppuVar3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147955a42 FUN_147955a42 body=735 status=ok
// SIG undefined FUN_147955a42(void)

void FUN_147955a42(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_134 = param_4;
  local_130 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x10 + lVar8;
    local_128 = lVar6;
    local_120 = param_1;
    do {
      lVar3 = FUN_14088624c(param_1,lVar8,1);
      if (lVar3 == 0) {
        FUN_140056680(&local_f8,L"AcquireResourcesForPrimaryAssetList failed to find NameData");
        (**(code **)(*param_1 + 0x4d0))(param_1,lVar8,&local_f8);
        plVar4 = local_f8;
      }
      else {
        if (*(longlong *)(lVar3 + 8) != 0) {
          FUN_1449774fc(&local_b8,&local_f8,lVar3 + 8,0);
        }
        local_d8 = (longlong *)0x0;
        uStack_d0 = 0;
        (**(code **)(*param_1 + 0x3b8))(param_1,lVar8,&local_d8);
        if ((longlong)(int)uStack_d0 == 0) {
          uVar5 = 0;
        }
        else {
          plVar4 = local_d8 + (longlong)(int)uStack_d0 * 3;
          plVar7 = local_d8;
          do {
            if ((*plVar7 != 0) && (lVar6 = plVar7[2], (longlong)(int)lVar6 != 0)) {
              lVar3 = plVar7[1];
              lVar9 = 0;
              do {
                puVar1 = (undefined4 *)(lVar3 + lVar9);
                local_108 = *puVar1;
                uStack_104 = puVar1[1];
                uStack_100 = puVar1[2];
                uStack_fc = puVar1[3];
                local_f8 = (longlong *)0x0;
                uStack_f0 = 0;
                local_e8 = 0;
                uStack_e0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                FUN_1400b3bc2(&local_f8,&local_108,&local_c8);
                FUN_14700811a(&local_b8,&local_c8,&local_f8);
                if (local_e8 != 0) {
                  FUN_1400020a8();
                }
                lVar9 = lVar9 + 0x10;
              } while ((longlong)(int)lVar6 * 0x10 != lVar9);
            }
            plVar7 = plVar7 + 3;
          } while (plVar7 != plVar4);
          uVar5 = uStack_d0 & 0xffffffff;
          lVar6 = local_128;
          param_1 = local_120;
        }
        FUN_1401a56c2(local_d8,uVar5);
        plVar4 = local_d8;
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar6);
  }
  puVar2 = local_130;
  local_118 = *local_130;
  *local_130 = 0;
  local_110 = *(undefined4 *)(local_130 + 1);
  *(undefined4 *)(local_130 + 1) = 0;
  FUN_1403b01b4(&local_b8,&local_f8);
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_f8,&local_118,local_134);
  FUN_140861e20(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(&local_b8);
  FUN_1449db362(puVar2);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147955d6c FUN_147955d6c body=957 status=ok
// SIG undefined FUN_147955d6c(void)

void FUN_147955d6c(longlong param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  void **ppvVar14;
  longlong lVar15;
  undefined1 auStack_118 [35];
  byte local_f5;
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  void *local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined4 *local_98;
  int local_90;
  longlong local_88;
  longlong *local_78;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar6 = (longlong *)FUN_140d57cf8();
  if (*(int *)(param_1 + 0x2e8) < 1) {
LAB_147956051:
    if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar13 = (longlong *)(param_1 + 0x2e0);
  param_3 = param_3 ^ 1;
  iVar10 = 0;
  local_e8 = plVar13;
LAB_147955dd5:
  local_e0 = (void *)((longlong)iVar10 * 0x40);
  FUN_14795612a(local_a8,*plVar13 + (longlong)local_e0);
  lVar7 = (longlong)local_90;
  if (lVar7 != 0) {
    puVar11 = local_98 + lVar7;
    lVar8 = 0;
    do {
      local_f4 = iVar10;
      if (*(int *)((longlong)local_98 + lVar8) == param_2) {
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        puVar12 = local_98;
        local_f5 = param_3;
        local_f0 = param_1;
        goto LAB_147955ef0;
      }
      lVar8 = lVar8 + 4;
      plVar13 = local_e8;
    } while (lVar7 * 4 != lVar8);
  }
  goto LAB_147955e01;
  while( true ) {
    if (iVar10 != 0) goto LAB_147955f3c;
    puVar12 = puVar12 + 1;
    param_3 = 1;
    if (puVar12 == puVar11) break;
LAB_147955ef0:
    uVar1 = *puVar12;
    iVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar1);
    uVar3 = uStack_b0;
    if (iVar10 == 1) {
      lVar7 = (longlong)(int)uStack_b0;
      uVar5 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      if (uStack_b0._4_4_ < uVar5) {
        FUN_1446f48e2(&local_b8,uVar3 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_b8 + lVar7 * 4) = uVar1;
LAB_147955f3c:
      pvVar2 = local_e0;
      plVar13 = local_e8;
      iVar10 = local_f4;
      puVar12 = puVar12 + 1;
      if (puVar12 == puVar11) {
        if ((param_3 & 1) == 0) {
          lVar7 = (longlong)(int)uStack_b0;
          if (lVar7 != 0) {
            lVar8 = *local_e8;
            ppvVar14 = (void **)((longlong)local_e0 + lVar8 + 0x10);
            param_1 = local_f0;
            param_3 = local_f5;
            if (ppvVar14 != &local_b8) {
              uVar1 = *(undefined4 *)((longlong)local_e0 + lVar8 + 0x1c);
              local_e0 = local_b8;
              *(int *)((longlong)pvVar2 + lVar8 + 0x18) = (int)uStack_b0;
              FUN_144a06ca8(ppvVar14,uStack_b0 & 0xffffffff,uVar1);
              memcpy(*ppvVar14,local_e0,lVar7 << 2);
              param_1 = local_f0;
            }
            goto LAB_147956039;
          }
          FUN_14795620c(local_e8,local_f4);
          param_3 = local_f5;
          if (local_88 == 0) goto LAB_147955fe2;
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_147d5d93e(local_88,&local_c8,1);
          lVar7 = local_c8;
          lVar8 = (longlong)(int)uStack_c0;
          if (lVar8 == 0) goto LAB_1479560a3;
          lVar15 = 0;
          goto LAB_147955e18;
        }
        break;
      }
      goto LAB_147955ef0;
    }
  }
  plVar13 = local_e8;
  iVar10 = local_f4;
  FUN_14795620c(local_e8,local_f4);
  if (local_88 != 0) {
    FUN_140886972();
  }
  param_1 = local_f0;
  param_3 = local_f5;
  iVar10 = iVar10 + -1;
  if (local_78 != (longlong *)0x0 && local_70 != 0) {
    (**(code **)(*local_78 + 0x60))(local_78,0);
  }
  goto LAB_147956039;
  while( true ) {
    FUN_1446f470e(&local_68,puVar9,1);
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    cVar4 = FUN_145c98cec(local_68);
    if (cVar4 != '\0') {
      FUN_1468b81ea(local_68);
    }
    lVar15 = lVar15 + 0x20;
    if (lVar8 << 5 == lVar15) break;
LAB_147955e18:
    local_68 = *(longlong *)(lVar7 + lVar15);
    if (local_68 == 0) {
      local_d8 = (undefined2 *)0x0;
      uStack_d0 = 0;
LAB_147955e4e:
      puVar9 = &DAT_149dfb77a;
    }
    else {
      FUN_1400021e4(&local_68,&local_d8);
      puVar9 = local_d8;
      if ((int)uStack_d0 == 0) goto LAB_147955e4e;
    }
  }
LAB_1479560a3:
  FUN_140420124(local_88);
  FUN_140861e20(local_c8,uStack_c0 & 0xffffffff);
  iVar10 = local_f4;
  if (local_c8 != 0) {
    FUN_1400020a8();
    iVar10 = local_f4;
  }
LAB_147955fe2:
  iVar10 = iVar10 + -1;
  param_1 = local_f0;
  if (local_78 != (longlong *)0x0 && local_70 != 0) {
    (**(code **)(*local_78 + 0x60))(local_78,1);
    param_1 = local_f0;
  }
LAB_147956039:
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147955e01:
  FUN_14795625e(local_a8);
  iVar10 = iVar10 + 1;
  if (*(int *)(param_1 + 0x2e8) <= iVar10) goto LAB_147956051;
  goto LAB_147955dd5;
}



// FUNCTION 14795612a FUN_14795612a body=225 status=ok
// SIG undefined FUN_14795612a(void)

undefined8 * FUN_14795612a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = param_2[4];
  lVar3 = param_2[5];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14114e6dc(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 14795620c FUN_14795620c body=82 status=ok
// SIG undefined FUN_14795620c(void)

void FUN_14795620c(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_14795625e(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147968364(param_1);
  return;
}



// FUNCTION 14795625e FUN_14795625e body=97 status=ok
// SIG undefined FUN_14795625e(void)

void FUN_14795625e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479562c0 FUN_1479562c0 body=120 status=ok
// SIG undefined FUN_1479562c0(void)

undefined8 * FUN_1479562c0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd9d0) {
    FUN_144b3d300(&DAT_14cacd9d0);
    if (DAT_14cacd9d0 == -1) {
      FUN_1446f470e(&DAT_14cacd9c8,L"EncryptionKey",1);
      _Init_thread_footer(&DAT_14cacd9d0);
    }
  }
  *param_1 = DAT_14cacd9c8;
  return param_1;
}



// FUNCTION 14795633a FUN_14795633a body=738 status=ok
// SIG undefined FUN_14795633a(void)

void FUN_14795633a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14088662c(param_2,&local_78);
  plVar1 = (longlong *)(param_1 + 0x3b8);
  lVar2 = param_1 + 0x3c8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x3e0) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x3e0);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x28);
      iVar4 = *(int *)(puVar3 + 3);
      if (iVar4 == local_70) {
        if (1 < iVar4) {
          lVar6 = 0;
          while( true ) {
            uVar7 = *(ushort *)(puVar3[2] + lVar6);
            uVar8 = (ulonglong)uVar7;
            uVar9 = *(ushort *)(local_78 + lVar6);
            if (uVar7 != uVar9) break;
            if (uVar7 == 0) goto LAB_147956474;
LAB_147956438:
            lVar6 = lVar6 + 2;
          }
          if ((uVar9 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            uVar10 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_147956438;
          }
          if (uVar7 != uVar9) goto LAB_1479564ac;
        }
LAB_147956474:
        iVar4 = 0;
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
          iVar4 = *(int *)(puVar3 + 1) + -1;
        }
        FUN_1468c7b6a(&local_68,puVar5,iVar4);
        FUN_147968d6e(param_3,&local_68);
      }
      else if (local_70 + iVar4 == 1) goto LAB_147956474;
LAB_1479564ac:
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar11));
  }
  plVar1 = (longlong *)(param_1 + 0x368);
  lVar2 = param_1 + 0x378;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x390) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x390);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar2)) {
    do {
      if (*(longlong *)(*local_a0 + 8 + (longlong)iStack_84 * 0x18) == *param_2) {
        uStack_60 = param_2[1];
        local_68 = *(undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x18);
        FUN_147968d6e(param_3);
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar11));
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795661e FUN_14795661e body=370 status=ok
// SIG undefined FUN_14795661e(void)

undefined8 * FUN_14795661e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1468fc182(&local_58,param_3);
  uVar1 = (uint)((ulonglong)uStack_50 >> 0x10);
  uVar10 = (uint)uStack_50 & 0xffff;
  uVar2 = (uint)((ulonglong)local_58 >> 0x10);
  uVar9 = (uint)local_58 & 0xffff;
  uVar2 = ((uint)local_58 << 0x10 | uVar9) + (int)((ulonglong)local_58 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
  uVar11 = 0;
  uVar3 = FUN_144a78877(0,(uVar2 >> 2) +
                          ((uint)uStack_50 << 0x10 | uVar10) + (int)((ulonglong)uStack_50 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4) + uVar2 * 0x40 +
                          0x9e3779b9 ^ uVar2);
  puVar7 = local_48;
  if ((int)uStack_40 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  uVar6 = (ulonglong)((int)uStack_40 - 1);
  if ((int)uStack_40 == 0) {
    uVar6 = uVar11;
  }
  uVar4 = FUN_144a49b4a(uVar6,puVar7);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  iVar5 = FUN_14587a5e6((longlong *)(param_1 + 0x408),uVar3,&local_58);
  if (iVar5 != -1) {
    uVar11 = (longlong)iVar5 * 0x48 + *(longlong *)(param_1 + 0x408);
  }
  lVar8 = uVar11 + 0x20;
  if (uVar11 == 0) {
    lVar8 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar8 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_147956792(lVar8,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147956792 FUN_147956792 body=118 status=ok
// SIG undefined FUN_147956792(void)

undefined8 FUN_147956792(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(param_1,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14795680a FUN_14795680a body=35 status=ok
// SIG undefined FUN_14795680a(void)

undefined8 * FUN_14795680a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14795682d(param_3);
  return param_2;
}



// FUNCTION 14795682d FUN_14795682d body=557 status=ok
// SIG undefined FUN_14795682d(void)

void FUN_14795682d(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong *puVar2;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  ulonglong *local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulonglong *local_240;
  uint local_238;
  undefined4 local_234;
  ulonglong local_230 [64];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    param_2[2] = 0;
    param_2[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30[0] ^ (ulonglong)auStack_2a8);
  }
  cVar1 = FUN_143408f6e(param_1 + 4);
  if (cVar1 == '\0') {
    FUN_1468fc08c(&local_250,*param_1,param_1[2]);
    *(undefined4 *)param_2 = (undefined4)local_250;
    *(undefined4 *)((longlong)param_2 + 4) = local_250._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_248;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_248._4_4_;
    if (&local_250 != param_2) {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = local_240;
      *(uint *)(param_2 + 3) = local_238;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_234;
      goto LAB_147956968;
    }
    puVar2 = local_240;
    if (local_240 == (ulonglong *)0x0) goto LAB_147956968;
  }
  else {
    local_250 = local_230;
    local_238 = local_238 & 0xffffff00;
    local_240 = local_30;
    uStack_248 = local_250;
    FUN_1468fc08c(&local_288,*param_1,param_1[2]);
    thunk_FUN_140007958(&local_288,&local_250);
    if (local_240 <= (ulonglong *)((longlong)uStack_248 + 4)) {
      FUN_140213274(&local_250,2);
    }
    *(undefined4 *)uStack_248 = 0x43005f;
    uStack_248 = (ulonglong *)((longlong)uStack_248 + 4);
    if (local_278 != 0) {
      FUN_1400020a8();
    }
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_260 = local_250;
    local_258 = (undefined4)((ulonglong)((longlong)uStack_248 - (longlong)local_250) >> 1);
    FUN_14475bf92(&local_288);
    *(undefined4 *)param_2 = (undefined4)local_288;
    *(undefined4 *)((longlong)param_2 + 4) = local_288._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_280._4_4_;
    if (&local_288 == param_2) {
      if (local_278 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = local_278;
      local_278 = 0;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_270;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_270._4_4_;
    }
    puVar2 = local_250;
    if ((char)local_238 != '\x01') goto LAB_147956968;
  }
  FUN_1400020a8(puVar2);
LAB_147956968:
  if ((local_30[0] ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


