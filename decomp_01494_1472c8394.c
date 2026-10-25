// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472c8394 FUN_1472c8394 body=83 status=ok
// SIG undefined FUN_1472c8394(void)

void FUN_1472c8394(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined4 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = param_2;
  if (*(char *)(param_2 + 0x23) == '\0') {
    local_20 = &local_10;
    local_18 = 1;
    (**(code **)(*param_1 + 0x50))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c83e8 FUN_1472c83e8 body=62 status=ok
// SIG undefined FUN_1472c83e8(void)

void FUN_1472c83e8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_140127426();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8428 FUN_1472c8428 body=62 status=ok
// SIG undefined FUN_1472c8428(void)

void FUN_1472c8428(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142f9d4a2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8468 FUN_1472c8468 body=60 status=ok
// SIG undefined FUN_1472c8468(void)

void FUN_1472c8468(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong **)(param_1 + 0x4d70) != (longlong *)0x0) &&
      (lVar1 = **(longlong **)(param_1 + 0x4d70), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x1065) == '\x01')) {
    FUN_1472ea668(1);
    FUN_1472ea672(0x1f400);
    return;
  }
  return;
}



// FUNCTION 1472c84a4 FUN_1472c84a4 body=83 status=ok
// SIG undefined FUN_1472c84a4(void)

void FUN_1472c84a4(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38b8);
    *(uint *)(param_1 + 0x38b8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x38bc) < iVar1 + 1U) {
      FUN_14717cbb8((longlong *)(param_1 + 0x38b0),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x38b0) + (longlong)iVar1 * 8) = param_2;
    *(int *)(param_2 + 0x10) = iVar1;
  }
  return;
}



// FUNCTION 1472c84f8 FUN_1472c84f8 body=168 status=ok
// SIG undefined FUN_1472c84f8(void)

void FUN_1472c84f8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    lVar5 = (longlong)(int)uVar1;
    if (lVar5 < 0) {
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38b8);
      if ((int)uVar1 < iVar2) {
        iVar3 = ~uVar1 + iVar2;
        if (iVar3 != 0) {
          iVar4 = 1;
          if (iVar3 < 1) {
            iVar4 = iVar3;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x38b0) + lVar5 * 8),
                  (void *)(*(longlong *)(param_1 + 0x38b0) + (ulonglong)(uint)(iVar2 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar2 = *(int *)(param_1 + 0x38b8);
        }
        *(int *)(param_1 + 0x38b8) = iVar2 + -1;
        FUN_1472d550a((longlong *)(param_1 + 0x38b0));
      }
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      if ((int)uVar1 < *(int *)(param_1 + 0x38b8)) {
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x38b0) + lVar5 * 8) + 0x10) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 1472c85a0 FUN_1472c85a0 body=38 status=ok
// SIG undefined FUN_1472c85a0(void)

void FUN_1472c85a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1471ba6f6(*(undefined4 *)(param_2 + 0x228));
    *(undefined4 *)(param_3 + 0x80) = uVar1;
  }
  return;
}



// FUNCTION 1472c85c6 FUN_1472c85c6 body=104 status=ok
// SIG undefined FUN_1472c85c6(void)

void FUN_1472c85c6(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1472c5214(&local_30,*(undefined4 *)(param_2 + 0x2d0));
    *(undefined8 *)(param_3 + 0x6c) = local_30;
    *(undefined8 *)(param_3 + 0x74) = local_28;
    *(undefined4 *)(param_3 + 0x7c) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8630 FUN_1472c8630 body=206 status=ok
// SIG undefined FUN_1472c8630(void)

undefined8 FUN_1472c8630(longlong param_1,double *param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x3758)) {
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x3750) + 0x18);
    iVar2 = -1;
    fVar4 = 3.4028235e+38;
    lVar3 = 0;
    do {
      fVar5 = (float)((pdVar1[-1] - param_2[2]) * (pdVar1[-1] - param_2[2]) +
                     (pdVar1[-3] - *param_2) * (pdVar1[-3] - *param_2) +
                     (pdVar1[-2] - param_2[1]) * (pdVar1[-2] - param_2[1]));
      if (((double)fVar5 <= *pdVar1 * *pdVar1) && ((iVar2 == -1 || (fVar5 < fVar4)))) {
        iVar2 = (int)lVar3;
        fVar4 = fVar5;
      }
      lVar3 = lVar3 + 1;
      pdVar1 = pdVar1 + 4;
    } while (*(int *)(param_1 + 0x3758) != lVar3);
    if (iVar2 != -1) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x3740) + (longlong)iVar2 * 8);
    }
  }
  return 0;
}



// FUNCTION 1472c86fe FUN_1472c86fe body=380 status=ok
// SIG undefined FUN_1472c86fe(void)

double * FUN_1472c86fe(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if ((longlong)*(int *)(param_1 + 0x3720) < 1) {
    pdVar8 = (double *)0x0;
  }
  else {
    dVar1 = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar5 = dVar1 - param_2[5];
    dVar6 = dVar3 - param_2[4];
    dVar7 = dVar2 - param_2[3];
    fVar10 = 3.4028235e+38;
    lVar9 = 0;
    pdVar8 = (double *)0x0;
    do {
      pdVar4 = *(double **)(*(longlong *)(param_1 + 0x3718) + lVar9 * 8);
      if ((((dVar7 < pdVar4[3] || dVar7 == pdVar4[3]) && (*pdVar4 <= dVar2 + param_2[3])) &&
          (dVar6 < pdVar4[4] || dVar6 == pdVar4[4])) &&
         (((pdVar4[1] <= dVar3 + param_2[4] && (dVar5 < pdVar4[5] || dVar5 == pdVar4[5])) &&
          ((pdVar4[2] <= dVar1 + param_2[5] &&
           (fVar11 = ABS((float)((pdVar4[10] * dVar1 + pdVar4[8] * dVar2 + pdVar4[9] * dVar3) -
                                pdVar4[0xb])), fVar11 < fVar10)))))) {
        pdVar8 = pdVar4;
        fVar10 = fVar11;
      }
      lVar9 = lVar9 + 1;
    } while (*(int *)(param_1 + 0x3720) != lVar9);
  }
  return pdVar8;
}



// FUNCTION 1472c887a FUN_1472c887a body=1791 status=ok
// SIG undefined FUN_1472c887a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1472c887a(longlong param_1,double *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 **ppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [12];
  float afStack_394 [3];
  undefined8 auStack_388 [5];
  uint local_360;
  undefined4 local_35c;
  undefined4 *local_358;
  undefined1 *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar6 = *(uint *)(param_1 + 0x3758);
  uVar26 = 3;
  if ((int)uVar6 < 3) {
    uVar26 = uVar6;
  }
  local_35c = 3;
  local_360 = uVar26;
  if (3 < uVar26) {
    FUN_142fc79b6(afStack_394 + 1);
  }
  uVar27 = (ulonglong)uVar26;
  if (0 < (int)uVar6) {
    lVar15 = *(longlong *)(param_1 + 0x3750);
    dVar3 = param_2[2];
    dVar4 = *param_2;
    dVar5 = param_2[1];
    lVar12 = 4;
    uVar19 = 0;
    do {
      *(int *)((longlong)afStack_394 + lVar12) = (int)uVar19;
      dVar30 = *(double *)(lVar15 + 8 + lVar12 * 2) - dVar3;
      dVar32 = *(double *)(lVar15 + lVar12 * 2) - dVar5;
      dVar31 = *(double *)(lVar15 + -8 + lVar12 * 2) - dVar4;
      *(float *)((longlong)afStack_394 + lVar12 + 4U) =
           (float)(dVar30 * dVar30 + dVar31 * dVar31 + dVar32 * dVar32);
      uVar19 = uVar19 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar27 != uVar19);
    uVar19 = uVar27;
    if (3 < (int)uVar6) {
      do {
        lVar12 = uVar19 * 0x20;
        dVar30 = *(double *)(lVar15 + 0x10 + lVar12) - dVar3;
        dVar32 = *(double *)(lVar15 + 8 + lVar12) - dVar5;
        dVar31 = *(double *)(lVar15 + lVar12) - dVar4;
        fVar29 = (float)(dVar30 * dVar30 + dVar31 * dVar31 + dVar32 * dVar32);
        lVar12 = 4;
        do {
          if (fVar29 < *(float *)((longlong)afStack_394 + lVar12 + 4U)) {
            *(float *)((longlong)afStack_394 + lVar12 + 4U) = fVar29;
            *(int *)((longlong)afStack_394 + lVar12) = (int)uVar19;
            break;
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x34);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar6);
    }
    lVar15 = *(longlong *)(param_1 + 0x3740);
    lVar12 = 0;
    do {
      *(undefined8 *)((longlong)auStack_388 + lVar12) =
           *(undefined8 *)(lVar15 + (longlong)*(int *)((longlong)afStack_394 + lVar12 + 4U) * 8);
      lVar12 = lVar12 + 0x10;
    } while (uVar27 << 4 != lVar12);
  }
  uVar26 = local_360;
  lVar15 = (longlong)(int)local_360;
  if (1 < lVar15) {
    memset(local_348,0,0x2f0);
    local_358 = afStack_394 + 1;
    local_350 = auStack_3a0 + lVar15 * 0x10;
    fVar29 = logf((float)(int)uVar26);
    local_348[0] = (int)(longlong)(fVar29 + fVar29);
    ppuVar11 = &local_358;
    do {
      puVar14 = (undefined8 *)*ppuVar11;
      puVar20 = (undefined8 *)ppuVar11[1];
      iVar22 = *(int *)(ppuVar11 + 2);
      iVar18 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar14) >> 4);
      uVar19 = (ulonglong)(iVar18 + 1);
      if (iVar22 != 0) {
LAB_1472c8a72:
        if (8 < (int)(uint)uVar19) {
          uVar19 = (ulonglong)((uint)uVar19 >> 1);
          uVar7 = puVar14[uVar19 * 2];
          uVar8 = (puVar14 + uVar19 * 2)[1];
          uVar9 = puVar14[1];
          puVar14[uVar19 * 2] = *puVar14;
          (puVar14 + uVar19 * 2)[1] = uVar9;
          *puVar14 = uVar7;
          puVar14[1] = uVar8;
          puVar13 = puVar14;
          puVar21 = puVar20 + 2;
          do {
            puVar13 = puVar13 + 2;
            if (puVar13 <= puVar20) {
              fVar29 = *(float *)(puVar14[1] + 0x40);
              do {
                fVar2 = *(float *)(puVar13[1] + 0x40);
                if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
                  if (fVar29 < fVar2) break;
                }
                else if (*(uint *)(puVar14[1] + 0x48) < *(uint *)(puVar13[1] + 0x48)) break;
                puVar13 = puVar13 + 2;
              } while (puVar13 <= puVar20);
            }
            puVar17 = puVar21 + -2;
            if (puVar14 < puVar17) {
              fVar29 = *(float *)(puVar14[1] + 0x40);
              puVar10 = puVar21;
              do {
                puVar21 = puVar10;
                puVar16 = puVar17;
                fVar2 = *(float *)(puVar21[-1] + 0x40);
                if ((fVar2 != fVar29) || (NAN(fVar2) || NAN(fVar29))) {
                  puVar17 = puVar16;
                  if (fVar2 < fVar29) goto LAB_1472c8b56;
                }
                else if (*(uint *)(puVar21[-1] + 0x48) < *(uint *)(puVar14[1] + 0x48)) {
                  puVar17 = puVar21 + -2;
                  goto LAB_1472c8b56;
                }
                puVar17 = puVar16 + -2;
                puVar10 = puVar21 + -2;
              } while (puVar14 < puVar21 + -4);
              puVar17 = puVar21 + -4;
              puVar21 = puVar16;
            }
LAB_1472c8b56:
            if (puVar17 < puVar13) goto LAB_1472c8b84;
            uVar7 = *puVar13;
            uVar8 = puVar13[1];
            uVar9 = puVar17[1];
            *puVar13 = *puVar17;
            puVar13[1] = uVar9;
            *puVar17 = uVar7;
            puVar17[1] = uVar8;
            puVar21 = puVar17;
          } while( true );
        }
        for (; puVar21 = puVar14, puVar13 = puVar14, puVar14 < puVar20;
            puVar20 = (undefined8 *)((longlong)puVar20 + 0xfffffffffffffff0)) {
          while (puVar17 = puVar21, puVar13 = puVar13 + 2, puVar13 <= puVar20) {
            fVar29 = *(float *)(puVar17[1] + 0x40);
            fVar2 = *(float *)(puVar13[1] + 0x40);
            if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
              bVar28 = fVar29 < fVar2;
            }
            else {
              bVar28 = *(uint *)(puVar17[1] + 0x48) < *(uint *)(puVar13[1] + 0x48);
            }
            puVar21 = puVar13;
            if (!bVar28) {
              puVar21 = puVar17;
            }
          }
          local_58 = *puVar17;
          uStack_50 = puVar17[1];
          uVar8 = local_58;
          uVar9 = uStack_50;
          uVar7 = *(undefined8 *)((longlong)puVar20 + 8);
          *puVar17 = *puVar20;
          puVar17[1] = uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
          *(undefined4 *)((longlong)puVar20 + 8) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
          local_58 = uVar8;
          uStack_50 = uVar9;
        }
        goto LAB_1472c8f13;
      }
LAB_1472c8c21:
      iVar22 = (int)uVar19;
      if (iVar22 != 0) {
        iVar18 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
        iVar25 = iVar18;
joined_r0x0001472c8c48:
        do {
          iVar24 = iVar18 * 2 + 1;
          if (iVar24 < iVar22) {
            iVar23 = iVar18 * 2 + 2;
            if (iVar23 < iVar22) {
              fVar29 = *(float *)(puVar14[(longlong)iVar23 * 2 + 1] + 0x40);
              fVar2 = *(float *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x40);
              if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
                bVar28 = fVar29 < fVar2;
              }
              else {
                bVar28 = *(uint *)(puVar14[(longlong)iVar23 * 2 + 1] + 0x48) <
                         *(uint *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x48);
              }
              if (!bVar28) {
                iVar24 = iVar23;
              }
            }
            fVar29 = *(float *)(puVar14[(longlong)iVar18 * 2 + 1] + 0x40);
            fVar2 = *(float *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x40);
            if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
              if (fVar29 < fVar2) goto LAB_1472c8cd6;
            }
            else if (*(uint *)(puVar14[(longlong)iVar18 * 2 + 1] + 0x48) <
                     *(uint *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x48)) {
LAB_1472c8cd6:
              puVar20 = puVar14 + (longlong)iVar18 * 2;
              puVar13 = puVar14 + (longlong)iVar24 * 2;
              local_58 = *puVar20;
              uStack_50 = puVar20[1];
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar7 = puVar13[1];
              *puVar20 = *puVar13;
              puVar20[1] = uVar7;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar13 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
              iVar18 = iVar24;
              local_58 = uVar8;
              uStack_50 = uVar9;
              goto joined_r0x0001472c8c48;
            }
          }
          bVar28 = iVar25 != 0;
          iVar18 = iVar25 + -1;
          iVar25 = iVar18;
        } while (bVar28);
        if (1 < iVar22) {
          uVar19 = uVar19 - 1;
          local_58 = *puVar14;
          uStack_50 = puVar14[1];
          uVar8 = local_58;
          uVar9 = uStack_50;
          uVar7 = (puVar14 + uVar19 * 2)[1];
          *puVar14 = puVar14[uVar19 * 2];
          puVar14[1] = uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar20 = puVar14 + uVar19 * 2;
          *(undefined4 *)puVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
          local_58 = uVar8;
          uStack_50 = uVar9;
          if (iVar22 != 2) {
            do {
              iVar22 = 0;
              iVar25 = 1;
              iVar18 = 0;
              do {
                iVar22 = iVar22 + 2;
                iVar24 = iVar25;
                if ((longlong)iVar22 < (longlong)uVar19) {
                  fVar29 = *(float *)(puVar14[(longlong)iVar22 * 2 + 1] + 0x40);
                  fVar2 = *(float *)(puVar14[(longlong)iVar25 * 2 + 1] + 0x40);
                  if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
                    bVar28 = fVar29 < fVar2;
                  }
                  else {
                    bVar28 = *(uint *)(puVar14[(longlong)iVar22 * 2 + 1] + 0x48) <
                             *(uint *)(puVar14[(longlong)iVar25 * 2 + 1] + 0x48);
                  }
                  if (!bVar28) {
                    iVar24 = iVar22;
                  }
                }
                fVar29 = *(float *)(puVar14[(longlong)iVar18 * 2 + 1] + 0x40);
                fVar2 = *(float *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x40);
                if ((fVar29 != fVar2) || (NAN(fVar29) || NAN(fVar2))) {
                  if (fVar2 <= fVar29) break;
                }
                else if (*(uint *)(puVar14[(longlong)iVar24 * 2 + 1] + 0x48) <=
                         *(uint *)(puVar14[(longlong)iVar18 * 2 + 1] + 0x48)) break;
                puVar20 = puVar14 + (longlong)iVar18 * 2;
                puVar13 = puVar14 + (longlong)iVar24 * 2;
                uVar7 = *puVar20;
                uVar8 = puVar20[1];
                uVar9 = puVar13[1];
                *puVar20 = *puVar13;
                puVar20[1] = uVar9;
                *puVar13 = uVar7;
                puVar13[1] = uVar8;
                iVar22 = iVar24 * 2;
                iVar25 = iVar24 * 2 + 1;
                iVar18 = iVar24;
              } while ((longlong)iVar25 < (longlong)uVar19);
              uVar1 = uVar19 - 1;
              local_58 = *puVar14;
              uStack_50 = puVar14[1];
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar7 = (puVar14 + uVar1 * 2)[1];
              *puVar14 = puVar14[uVar1 * 2];
              puVar14[1] = uVar7;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar20 = puVar14 + uVar1 * 2;
              *(undefined4 *)puVar20 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
              bVar28 = 2 < uVar19;
              uVar19 = uVar1;
              local_58 = uVar8;
              uStack_50 = uVar9;
            } while (bVar28);
          }
        }
      }
LAB_1472c8f13:
      ppuVar11 = ppuVar11 + -3;
    } while (&local_358 <= ppuVar11);
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (0 < (int)uVar6) {
    lVar15 = 0;
    do {
      *(undefined8 *)((longlong)param_3 + lVar15) =
           *(undefined8 *)((longlong)auStack_388 + lVar15 * 2);
      lVar15 = lVar15 + 8;
    } while (uVar27 << 3 != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1472c8b84:
  local_58 = *puVar14;
  uStack_50 = puVar14[1];
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar7 = puVar17[1];
  *puVar14 = *puVar17;
  puVar14[1] = uVar7;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar17 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
  iVar22 = iVar22 + -1;
  puVar21 = puVar21 + -4;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if ((longlong)puVar21 - (longlong)puVar14 < (longlong)puVar20 - (longlong)puVar13) {
    if (puVar13 < puVar20) {
      *ppuVar11 = (undefined4 *)puVar13;
      ppuVar11[1] = (undefined4 *)puVar20;
      *(int *)(ppuVar11 + 2) = iVar22;
      ppuVar11 = ppuVar11 + 3;
    }
    if (puVar17 <= puVar14 + 2) goto LAB_1472c8f13;
  }
  else {
    if (puVar14 + 2 < puVar17) {
      *ppuVar11 = (undefined4 *)puVar14;
      ppuVar11[1] = (undefined4 *)puVar21;
      *(int *)(ppuVar11 + 2) = iVar22;
      ppuVar11 = ppuVar11 + 3;
    }
    puVar21 = puVar20;
    puVar14 = puVar13;
    if (puVar20 <= puVar13) goto LAB_1472c8f13;
  }
  iVar18 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar14) >> 4);
  uVar19 = (ulonglong)(iVar18 + 1);
  puVar20 = puVar21;
  if (iVar22 == 0) goto LAB_1472c8c21;
  goto LAB_1472c8a72;
}



// FUNCTION 1472c8f7a FUN_1472c8f7a body=112 status=ok
// SIG undefined FUN_1472c8f7a(void)

void FUN_1472c8f7a(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c8);
  *(uint *)(param_1 + 0x3c8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3cc) < iVar1 + 1U) {
    FUN_1472d5762((longlong *)(param_1 + 0x3c0),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar1 * 8) = param_2;
  if (param_3 != '\0') {
    *(undefined8 **)(param_1 + 0x3b8) = param_2;
  }
  FUN_147cae79c(*param_2,param_1 + 0x50);
  FUN_1472d57e8(param_1);
  return;
}



// FUNCTION 1472c8fea FUN_1472c8fea body=154 status=ok
// SIG undefined FUN_1472c8fea(void)

void FUN_1472c8fea(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_28 = param_2;
  FUN_1472d5972(param_1 + 0x3c0);
  uVar1 = 0;
  if (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(**(longlong **)(param_1 + 0x3b8) + 0x2f8);
  }
  FUN_147caf0a6(*local_28,param_1 + 0x50,uVar1);
  if (*(undefined8 **)(param_1 + 0x3b8) == local_28) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  FUN_1472d57e8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c9086 FUN_1472c9086 body=8 status=ok
// SIG undefined FUN_1472c9086(void)

longlong FUN_1472c9086(longlong param_1)

{
  return param_1 + 0x388;
}



// FUNCTION 1472c90c0 FUN_1472c90c0 body=376 status=ok
// SIG undefined FUN_1472c90c0(void)

void FUN_1472c90c0(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 0x5140;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x5158) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = (longlong *)(param_1 + 0x5130);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 8) == param_3) {
        *(int *)param_2 = iStack_54;
        *(byte **)(*local_70 + (longlong)iStack_54 * 8) = param_2;
        if (param_3 != 0) {
          FUN_145837bd0(param_3);
          FUN_1400020a8(param_3);
        }
        bVar1 = (byte)(1 << (*param_2 & 0x1f));
        bVar3 = *(byte *)(param_1 + 0x5210) & ~bVar1;
        *(byte *)(param_1 + 0x5210) = bVar3;
        bVar2 = 0;
        if (param_2[0x10] != 0) {
          bVar2 = bVar1;
        }
        *(byte *)(param_1 + 0x5210) = bVar2 | bVar3;
        bVar2 = ~bVar1 & *(byte *)(param_1 + 0x5211);
        *(byte *)(param_1 + 0x5211) = bVar2;
        if (param_2[0x11] == 0) {
          bVar1 = 0;
        }
        *(byte *)(param_1 + 0x5211) = bVar1 | bVar2;
        break;
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c9254 FUN_1472c9254 body=677 status=ok
// SIG undefined FUN_1472c9254(void)

void FUN_1472c9254(longlong param_1,undefined8 param_2,double *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  float local_120;
  double local_118;
  double local_110;
  double dStack_108;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0.0;
  if (0 < *(int *)(param_1 + 0x4d80)) {
    lVar5 = 0;
    fVar9 = 0.0;
    dVar1 = 0.0;
    dVar2 = 0.0;
    dVar3 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    iVar6 = 0;
    fVar8 = 0.0;
    local_138 = param_3;
    local_130 = param_4;
    do {
      local_128 = 0;
      local_120 = 0.0;
      local_118 = 1.0;
      local_110 = 0.0;
      dStack_108 = 0.0;
      cVar4 = FUN_14020b2f8(*(undefined8 *)(*(longlong *)(param_1 + 0x4d78) + lVar5 * 8),param_2,
                            &local_128,&local_fc);
      if (cVar4 != '\0') {
        fVar11 = fVar11 + (float)local_128 * local_fc;
        fVar10 = fVar10 + local_128._4_4_ * local_fc;
        fVar9 = fVar9 + local_120 * local_fc;
        dVar7 = (double)local_fc;
        dVar3 = dVar3 + dVar7 * local_118;
        dVar2 = dVar2 + local_110 * dVar7;
        dVar1 = dVar1 + dStack_108 * dVar7;
        fVar8 = fVar8 + local_fc;
        iVar6 = iVar6 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x4d80));
    local_f8 = CONCAT44(fVar10,fVar11);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,fVar9);
    local_e8 = dVar3;
    dStack_e0 = dVar2;
    local_d8 = dVar1;
    FUN_14020b04a(&local_f8,fVar8);
    param_3 = local_138;
    param_4 = local_130;
    if (iVar6 != 0) goto LAB_1472c9457;
  }
  local_e8 = 1.0;
  dStack_e0 = 0.0;
  local_d8 = 0.0;
LAB_1472c9457:
  param_3[2] = local_d8;
  *param_3 = local_e8;
  param_3[1] = dStack_e0;
  *param_4 = (undefined4)local_f8;
  *param_5 = local_f8._4_4_;
  *param_6 = (undefined4)uStack_f0;
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c94fa FUN_1472c94fa body=592 status=ok
// SIG undefined FUN_1472c94fa(void)

void FUN_1472c94fa(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x4da0) != *(int *)(param_1 + 0x4dcc)) {
    uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar7 = param_1 + 0x4dd0;
    if (*(longlong *)(param_1 + 0x4dd8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x4dd8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x4de0) - 1U & (uVar6 >> 0x10 ^ uVar6))
                             * 4);
    if (iVar8 != -1) {
      do {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x4d98) + (longlong)iVar8 * 0x18);
        if (*puVar3 == param_3) {
          if (puVar3 + 1 != (ulonglong *)0x0 && puVar3 != (ulonglong *)0x0) {
            uVar4 = puVar3[1];
            iVar8 = *(int *)(uVar4 + 0x898);
            *(int *)(uVar4 + 0x898) = iVar8 + -1;
            if (iVar8 < 2) {
              plVar2 = (longlong *)(param_1 + 0x4de8);
              local_40 = param_1 + 0x4df8;
              local_48 = 0x100000000;
              local_38 = 0xffffffff;
              local_30 = 0;
              if (*(int *)(param_1 + 0x4e10) != 0) {
                FUN_1449c0562(&local_48);
              }
              local_70 = local_38;
              uVar5 = local_70;
              local_68 = local_30;
              local_64 = local_2c;
              local_80 = local_48;
              local_78 = local_40;
              local_50 = 0;
              local_70._4_4_ = (int)((ulonglong)local_38 >> 0x20);
              local_88 = plVar2;
              local_60 = plVar2;
              local_58 = plVar2;
              if (local_70._4_4_ < *(int *)(local_40 + 0x18)) {
                iVar8 = local_70._4_4_;
                local_70 = uVar5;
                do {
                  if (*(ulonglong *)(*local_88 + 8 + (longlong)iVar8 * 0x18) == param_3) {
                    FUN_1472d677c(local_60);
                    local_50 = CONCAT11(local_50._1_1_,1);
                  }
                  local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
                  FUN_1449c0562(&local_80);
                  iVar8 = local_70._4_4_;
                } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
                uVar5 = local_70;
                if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
                  FUN_1472d6060(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
                  uVar5 = local_70;
                }
              }
              local_70 = uVar5;
              FUN_1472d67d4((longlong *)(param_1 + 0x4d98),param_3);
              if (uVar4 != 0) {
                if (*(longlong *)(uVar4 + 0x890) != 0) {
                  LOCK();
                  puVar1 = (uint *)(*(longlong *)(uVar4 + 0x890) + 8);
                  uVar6 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar6 & 0x3fffffff) == 1) {
                    FUN_144a54812();
                  }
                }
                FUN_1400020a8(uVar4);
              }
            }
          }
          break;
        }
        iVar8 = (int)puVar3[2];
      } while (iVar8 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c98be FUN_1472c98be body=582 status=ok
// SIG undefined FUN_1472c98be(void)

void FUN_1472c98be(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [72];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar3 = FUN_144ab6403(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2));
  if ((cVar3 == '\0') || ((*(byte *)(param_2 + 0x74) & 8) == 0)) {
    for (plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x218) + 0x140); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[5]) {
      lVar2 = *plVar4;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1472d691e(param_3,iVar1);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x28);
    }
  }
  else if (*(char *)(param_2 + 0x82) != '\0') {
    FUN_144b1550a(local_a8,*(undefined8 *)(param_2 + 0x218));
    local_b8 = local_a8;
    local_b0 = param_3;
    cVar3 = FUN_144b15d64(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2));
    if (cVar3 != '\0') {
      local_e8 = *(double *)(param_2 + 400) - *(double *)(param_2 + 0x1a8);
      local_f0 = *(double *)(param_2 + 0x188) - *(double *)(param_2 + 0x1a0);
      local_f8 = *(double *)(param_2 + 0x180) - *(double *)(param_2 + 0x198);
      local_c8 = ((*(double *)(param_2 + 400) + *(double *)(param_2 + 0x1a8)) - local_e8) * 0.5;
      local_d0 = ((*(double *)(param_2 + 0x188) + *(double *)(param_2 + 0x1a0)) - local_f0) * 0.5;
      local_d8 = ((*(double *)(param_2 + 0x180) + *(double *)(param_2 + 0x198)) - local_f8) * 0.5;
      local_e8 = local_e8 + local_c8;
      local_f0 = local_f0 + local_d0;
      local_f8 = local_f8 + local_d8;
      local_e0 = 0;
      local_c0 = 0;
      local_108 = &local_b8;
      FUN_142fcb37e(param_1 + 0x4e90,0,param_1 + 0x4e90);
    }
    iVar1 = *(int *)(param_1 + 0x4f48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x4f40);
      lVar5 = 0;
      do {
        FUN_142fa996a(&local_b8,
                      (longlong)*(int *)(lVar2 + lVar5) * 0x40 + *(longlong *)(param_1 + 0x3550));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c9b32 FUN_1472c9b32 body=239 status=ok
// SIG undefined FUN_1472c9b32(void)

void FUN_1472c9b32(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 4);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_141775394(&local_38);
  }
  FUN_140a27a86(param_1,0,&local_38);
  FUN_1472d6a2a(param_1);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 * 0x48;
    lVar4 = local_38;
    do {
      dVar1 = param_2[1];
      dVar2 = param_2[2];
      *(double *)(lVar4 + 0x10) = *param_2 + *(double *)(lVar4 + 0x10);
      *(double *)(lVar4 + 0x18) = dVar1 + *(double *)(lVar4 + 0x18);
      *(double *)(lVar4 + 0x20) = dVar2 + *(double *)(lVar4 + 0x20);
      FUN_14472daa4(param_1,lVar4);
      lVar4 = lVar4 + 0x48;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c9c24 FUN_1472c9c24 body=269 status=ok
// SIG undefined FUN_1472c9c24(void)

void FUN_1472c9c24(longlong param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auStack_468 [32];
  double local_448 [128];
  double *local_48;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_48 = (double *)0x0;
  local_38 = 0x1000000000;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) + 4);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (0x10 < uVar2) {
    FUN_1471e6f36(local_448);
  }
  FUN_14095273a(param_1,0,local_448);
  FUN_1472d6c38(param_1);
  pdVar4 = local_48;
  if (local_48 == (double *)0x0) {
    pdVar4 = local_448;
  }
  if ((longlong)(int)local_38 != 0) {
    pdVar5 = pdVar4 + (longlong)(int)local_38 * 8;
    do {
      dVar3 = param_2[1];
      dVar1 = param_2[2];
      *pdVar4 = *param_2 + *pdVar4;
      pdVar4[1] = dVar3 + pdVar4[1];
      pdVar4[2] = dVar1 + pdVar4[2];
      pdVar4[3] = pdVar4[3] + 0.0;
      FUN_14177bdaa(param_1,pdVar4);
      pdVar4 = pdVar4 + 8;
    } while (pdVar4 != pdVar5);
  }
  if (local_48 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c9d34 FUN_1472c9d34 body=161 status=ok
// SIG undefined FUN_1472c9d34(void)

void FUN_1472c9d34(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  *param_1 = dVar2 + *param_1;
  param_1[1] = dVar3 + param_1[1];
  param_1[2] = dVar1 + param_1[2];
  param_1[3] = param_1[3] + dVar2;
  param_1[4] = param_1[4] + dVar3;
  param_1[5] = param_1[5] + dVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  dVar1 = *param_2;
  dVar2 = param_1[0xc];
  param_1[0xc] = dVar1 + dVar2;
  dVar3 = param_2[1];
  dVar4 = param_1[0xd];
  param_1[0xd] = dVar3 + dVar4;
  dVar5 = param_2[2];
  dVar6 = param_1[0xe];
  param_1[0xe] = dVar5 + dVar6;
  param_1[0xb] = (dVar5 + dVar6) * param_1[10] +
                 (dVar1 + dVar2) * param_1[8] + (dVar3 + dVar4) * param_1[9];
  return;
}



// FUNCTION 1472c9dd6 FUN_1472c9dd6 body=439 status=ok
// SIG undefined FUN_1472c9dd6(void)

void FUN_1472c9dd6(longlong param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  local_30 = param_1 + 0x18;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar4 = *local_78;
      lVar5 = (longlong)iStack_5c * 0x150;
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      *(double *)(lVar4 + 0x80 + lVar5) = *(double *)(lVar4 + 0x80 + lVar5) + *param_2;
      *(double *)(lVar4 + 0x88 + lVar5) = *(double *)(lVar4 + 0x88 + lVar5) + dVar3;
      *(double *)(lVar4 + 0x90 + lVar5) = *(double *)(lVar4 + 0x90 + lVar5) + dVar2;
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      *(double *)(lVar4 + 0x100 + lVar5) = *(double *)(lVar4 + 0x100 + lVar5) + *param_2;
      *(double *)(lVar4 + 0x108 + lVar5) = *(double *)(lVar4 + 0x108 + lVar5) + dVar3;
      *(double *)(lVar4 + 0x110 + lVar5) = *(double *)(lVar4 + 0x110 + lVar5) + dVar2;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_1472ced98(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c9f8e FUN_1472c9f8e body=399 status=ok
// SIG undefined FUN_1472c9f8e(void)

void FUN_1472c9f8e(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    if ((*(byte *)(param_2 + 0x171) & 8) != 0) {
      *(byte *)(param_2 + 0x171) = *(byte *)(param_2 + 0x171) & 0xf7;
      local_34 = *(undefined4 *)(param_2 + 0x10);
      FUN_1472cedde(param_1 + 0x5020);
    }
  }
  else {
    bVar2 = 1;
    bVar6 = 1;
    if (1 < (byte)(*(char *)(*(longlong *)(param_2 + 8) + 0x68) - 1U)) {
      bVar6 = (*(byte *)(*(longlong *)(param_2 + 8) + 0x78) & 0x10) >> 4;
    }
    if ((&DAT_14ca814b8)
        [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2) * 0xf] == 1) {
      bVar2 = FUN_143224a65();
    }
    if (((bVar6 & bVar2) == 1) && (uVar1 = *(uint *)(param_2 + 0x158), (~uVar1 & 0x7fffffff) != 0))
    {
      *(byte *)(param_2 + 0x171) = *(byte *)(param_2 + 0x171) | 8;
      uVar4 = uVar1 + 0x3ff;
      if (-1 < (int)uVar1) {
        uVar4 = uVar1;
      }
      plVar9 = (longlong *)
               ((longlong)((int)uVar1 % 0x400) * 0x80 +
               **(longlong **)(*(longlong *)(param_1 + 0x3340) + (longlong)((int)uVar4 >> 10) * 8));
      plVar3 = (longlong *)
               FUN_144a62fbe(param_1 + 0x5020,*(undefined4 *)(param_2 + 0x10),param_2 + 0x10);
      plVar7 = plVar9;
      plVar8 = plVar3 + 2;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar8 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar8 = plVar8 + 1;
      }
      lVar5 = *(longlong *)(param_1 + 0x5018);
      plVar3[0x22] = lVar5;
      plVar3[0x23] = lVar5;
      *plVar3 = param_2;
      if ((char)plVar3[0x24] == '\0') {
        plVar7 = plVar3 + 0x12;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *plVar7 = *plVar9;
          plVar9 = plVar9 + 1;
          plVar7 = plVar7 + 1;
        }
        *(undefined1 *)(plVar3 + 0x24) = 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ca11e FUN_1472ca11e body=551 status=ok
// SIG undefined FUN_1472ca11e(void)

void FUN_1472ca11e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4);
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar8 = uVar7 & uVar1;
  puVar9 = (undefined4 *)(param_1 + 0x40);
  puVar4 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
    puVar4 = puVar9;
  }
  do {
    if (puVar4[(int)uVar8] == param_2) {
      FUN_1472d74ee(param_1);
      puVar4 = (undefined4 *)(param_1 + 0x58);
      puVar5 = *(undefined4 **)(param_1 + 0x60);
      if (*(undefined4 **)(param_1 + 0x60) == (undefined4 *)0x0) {
        puVar5 = puVar4;
      }
      puVar5[(int)uVar8] = 0x80000000;
      uVar1 = *(uint *)(param_1 + 0x70);
      if ((ulonglong)(((longlong)*(int *)(param_1 + 8) - (longlong)*(int *)(param_1 + 0x38)) * 0x14)
          < (ulonglong)(uVar1 * 3)) {
        puVar5 = *(undefined4 **)(param_1 + 0x48);
        if (puVar5 == (undefined4 *)0x0) {
          local_58[0] = *puVar9;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        local_48 = *(undefined4 *)(param_1 + 0x50);
        local_44 = *(undefined4 *)(param_1 + 0x54);
        *(undefined8 *)(param_1 + 0x50) = 0x100000000;
        puVar2 = *(undefined4 **)(param_1 + 0x60);
        if (puVar2 == (undefined4 *)0x0) {
          local_70[0] = *puVar4;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_60 = *(undefined4 *)(param_1 + 0x68);
        local_5c = *(undefined4 *)(param_1 + 0x6c);
        *(undefined8 *)(param_1 + 0x68) = 0x100000000;
        *(uint *)(param_1 + 0x70) = uVar1 >> 1;
        *(undefined4 *)(param_1 + 0x74) = 0;
        local_68 = puVar2;
        local_50 = puVar5;
        if ((int)((uVar1 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(0x80000000);
        }
        if (uVar1 < 2) {
          iVar3 = 0;
          uVar7 = 1;
          iVar6 = 1;
        }
        else {
          FUN_14475fe8c(puVar9);
          iVar3 = *(int *)(param_1 + 0x50);
          iVar6 = *(int *)(param_1 + 0x54);
          uVar7 = *(int *)(param_1 + 0x70) + 1;
        }
        *(uint *)(param_1 + 0x50) = iVar3 + uVar7;
        if ((uint)(iVar6 - iVar3) < uVar7) {
          FUN_146f3c7b6(puVar9,iVar3);
          uVar7 = *(int *)(param_1 + 0x70) + 1;
        }
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar7);
        }
        if (*(int *)(param_1 + 0x6c) < (int)uVar7) {
          FUN_14476002c(puVar4);
          uVar7 = *(int *)(param_1 + 0x70) + 1;
        }
        FUN_144a7a6da(puVar4,uVar7);
        puVar9 = local_70;
        if (puVar2 != (undefined4 *)0x0) {
          puVar9 = puVar2;
        }
        puVar4 = local_58;
        if (puVar5 != (undefined4 *)0x0) {
          puVar4 = puVar5;
        }
        uVar7 = 0;
        do {
          if (!SBORROW4(0,puVar9[(int)uVar7])) {
            FUN_1472d70a2(param_1,puVar4[(int)uVar7]);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= uVar1);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar2);
        }
        if (puVar5 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar5);
        }
      }
      break;
    }
    uVar8 = uVar8 + 1 & uVar7;
  } while (uVar8 != (uVar1 + *(int *)(param_1 + 0x74) + 1 & uVar7));
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ca348 FUN_1472ca348 body=126 status=ok
// SIG undefined FUN_1472ca348(void)

void FUN_1472ca348(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x150;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x150) == param_2) {
          if ((lVar1 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          puVar3 = (undefined8 *)(lVar1 + 0xa0);
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *param_3;
            param_3 = param_3 + 1;
            puVar3 = puVar3 + 1;
          }
          *(undefined1 *)(lVar1 + 0x130) = 1;
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x140);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1472ca3c6 FUN_1472ca3c6 body=96 status=ok
// SIG undefined FUN_1472ca3c6(void)

longlong * FUN_1472ca3c6(longlong *param_1,longlong param_2,char param_3)

{
  *(undefined4 *)(param_1 + 1) = DAT_14c760db4;
  *param_1 = (longlong)&PTR_LAB_14a2e6a00;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(longlong **)(param_2 + 0x218) = param_1;
  if (param_3 == '\0') {
    *(undefined8 *)(param_1[2] + 0x620) = 0;
    (**(code **)(*param_1 + 0x418))(param_1,0);
  }
  else {
    FUN_14597dd98();
  }
  return param_1;
}



// FUNCTION 1472ca426 FUN_1472ca426 body=253 status=ok
// SIG undefined FUN_1472ca426(void)

void FUN_1472ca426(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      (**(code **)(**(longlong **)(*local_70 + (longlong)iStack_54 * 0x10) + 0x260))();
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ca524 FUN_1472ca524 body=68 status=ok
// SIG undefined FUN_1472ca524(void)

void FUN_1472ca524(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1472d8464();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1472ca570 FUN_1472ca570 body=40 status=ok
// SIG undefined FUN_1472ca570(void)

void FUN_1472ca570(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x21e0,0x10);
  FUN_1456ee678(uVar1,param_2,0);
  return;
}



// FUNCTION 1472ca598 FUN_1472ca598 body=79 status=ok
// SIG undefined FUN_1472ca598(void)

undefined8 FUN_1472ca598(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5348);
  *(uint *)(param_1 + 0x5348) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x534c) < iVar1 + 1U) {
    FUN_1472d8c2c((longlong *)(param_1 + 0x5340),iVar1);
  }
  FUN_1472d8b4c((longlong)iVar1 * 0x220 + *(longlong *)(param_1 + 0x5340),param_3);
  return 1;
}



// FUNCTION 1472ca5ec FUN_1472ca5ec body=215 status=ok
// SIG undefined FUN_1472ca5ec(void)

void FUN_1472ca5ec(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_888 [32];
  undefined1 **local_868;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined1 *local_850;
  undefined1 *local_848;
  undefined1 *local_840;
  char local_838;
  undefined1 local_830 [2070];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_888;
  if (param_2[2] == 0) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    if (*(int *)(param_1 + 0x6cc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_888);
    }
  }
  else {
    local_850 = local_830;
    local_838 = '\0';
    local_840 = local_1a;
    local_868 = &local_850;
    local_860 = *param_2;
    uStack_85c = param_2[1];
    uStack_858 = param_2[2];
    uStack_854 = param_2[3];
    local_848 = local_850;
    uVar1 = FUN_1472d8cbf(param_1 + 0x6c0,&local_868);
    FUN_1472d8d64(param_1 + 0x6c0,uVar1);
    if (local_838 == '\x01') {
      FUN_1400020a8(local_850);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ca724 FUN_1472ca724 body=30 status=ok
// SIG undefined FUN_1472ca724(void)

undefined8 FUN_1472ca724(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14728bf98(param_1 + 0x668,*(undefined4 *)(param_1 + 0x668));
  return *puVar1;
}



// FUNCTION 1472ca786 FUN_1472ca786 body=45 status=ok
// SIG undefined FUN_1472ca786(void)

longlong FUN_1472ca786(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145a3ffc6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ca82c FUN_1472ca82c body=138 status=ok
// SIG undefined FUN_1472ca82c(void)

code * FUN_1472ca82c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWRayDistanceUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d8000000ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ca8b6;
}



// FUNCTION 1472ca8b6 FUN_1472ca8b6 body=138 status=ok
// SIG undefined FUN_1472ca8b6(void)

code * FUN_1472ca8b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWOcclusionMaskUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d0000000ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ca940;
}



// FUNCTION 1472ca940 FUN_1472ca940 body=138 status=ok
// SIG undefined FUN_1472ca940(void)

code * FUN_1472ca940(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TLAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RaytracingAccelerationStructure";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c8000000ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ca9ca;
}



// FUNCTION 1472ca9ca FUN_1472ca9ca body=138 status=ok
// SIG undefined FUN_1472ca9ca(void)

code * FUN_1472ca9ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairLightChannelMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000000eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463032cc;
}



// FUNCTION 1472caa54 FUN_1472caa54 body=138 status=ok
// SIG undefined FUN_1472caa54(void)

code * FUN_1472caa54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTranslucencyHitCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472caade;
}



// FUNCTION 1472caade FUN_1472caade body=138 status=ok
// SIG undefined FUN_1472caade(void)

code * FUN_1472caade(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucentShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x74000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cab68;
}



// FUNCTION 1472cab68 FUN_1472cab68 body=138 status=ok
// SIG undefined FUN_1472cab68(void)

code * FUN_1472cab68(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bTwoSidedGeometry";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cabf2;
}



// FUNCTION 1472cabf2 FUN_1472cabf2 body=138 status=ok
// SIG undefined FUN_1472cabf2(void)

code * FUN_1472cabf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bAcceptFirstHit";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cac7c;
}



// FUNCTION 1472cac7c FUN_1472cac7c body=138 status=ok
// SIG undefined FUN_1472cac7c(void)

code * FUN_1472cac7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RejectionSamplingTrials";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cad06;
}



// FUNCTION 1472cad06 FUN_1472cad06 body=138 status=ok
// SIG undefined FUN_1472cad06(void)

code * FUN_1472cad06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransmissionMeanFreePathType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cad90;
}



// FUNCTION 1472cad90 FUN_1472cad90 body=138 status=ok
// SIG undefined FUN_1472cad90(void)

code * FUN_1472cad90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransmissionSamplingTechnique";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e288be;
}



// FUNCTION 1472cae1a FUN_1472cae1a body=138 status=ok
// SIG undefined FUN_1472cae1a(void)

code * FUN_1472cae1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AvoidSelfIntersectionTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e28948;
}



// FUNCTION 1472caea4 FUN_1472caea4 body=138 status=ok
// SIG undefined FUN_1472caea4(void)

code * FUN_1472caea4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LODTransitionStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472caf2e;
}



// FUNCTION 1472caf2e FUN_1472caf2e body=138 status=ok
// SIG undefined FUN_1472caf2e(void)

code * FUN_1472caf2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000000da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463033ec;
}



// FUNCTION 1472cafb8 FUN_1472cafb8 body=138 status=ok
// SIG undefined FUN_1472cafb8(void)

code * FUN_1472cafb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PixelOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb042;
}



// FUNCTION 1472cb042 FUN_1472cb042 body=138 status=ok
// SIG undefined FUN_1472cb042(void)

code * FUN_1472cb042(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightScissor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb0cc;
}



// FUNCTION 1472cb0cc FUN_1472cb0cc body=138 status=ok
// SIG undefined FUN_1472cb0cc(void)

code * FUN_1472cb0cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightingChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb156;
}



// FUNCTION 1472cb156 FUN_1472cb156 body=138 status=ok
// SIG undefined FUN_1472cb156(void)

code * FUN_1472cb156(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb1e0;
}



// FUNCTION 1472cb1e0 FUN_1472cb1e0 body=138 status=ok
// SIG undefined FUN_1472cb1e0(void)

code * FUN_1472cb1e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146303474;
}



// FUNCTION 1472cb26e FUN_1472cb26e body=138 status=ok
// SIG undefined FUN_1472cb26e(void)

code * FUN_1472cb26e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNormalBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d4ceda;
}



// FUNCTION 1472cb2f8 FUN_1472cb2f8 body=138 status=ok
// SIG undefined FUN_1472cb2f8(void)

code * FUN_1472cb2f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWSkyOcclusionRayDistanceUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb382;
}



// FUNCTION 1472cb382 FUN_1472cb382 body=138 status=ok
// SIG undefined FUN_1472cb382(void)

code * FUN_1472cb382(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWSkyOcclusionMaskUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5a2c6;
}



// FUNCTION 1472cb414 FUN_1472cb414 body=108 status=ok
// SIG undefined FUN_1472cb414(void)

undefined4 * FUN_1472cb414(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f756c0();
  FUN_145f756c0();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca41010,0);
  FUN_145f756c0();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472cb481 FUN_1472cb481 body=177 status=ok
// SIG undefined FUN_1472cb481(void)

void FUN_1472cb481(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f7592e();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca437f8,param_4);
  local_78 = &DAT_14ca437f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472cb552(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472cb534 FUN_1472cb534 body=29 status=ok
// SIG undefined FUN_1472cb534(void)

undefined8 FUN_1472cb534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cb552 FUN_1472cb552 body=384 status=ok
// SIG undefined FUN_1472cb552(void)

void FUN_1472cb552(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca43840;
  if (DAT_14ca43840 != 0) {
    LOCK();
    *(int *)(DAT_14ca43840 + 8) = *(int *)(DAT_14ca43840 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca437f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2e5d50;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472cb6d4 FUN_1472cb6d4 body=38 status=ok
// SIG undefined FUN_1472cb6d4(void)

undefined8 FUN_1472cb6d4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cb6fa FUN_1472cb6fa body=163 status=ok
// SIG undefined FUN_1472cb6fa(void)

void FUN_1472cb6fa(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142fafc16();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142fafcfe(param_1,param_2);
  return;
}



// FUNCTION 1472cb79d FUN_1472cb79d body=374 status=ok
// SIG undefined FUN_1472cb79d(void)

void FUN_1472cb79d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472cb914 FUN_1472cb914 body=138 status=ok
// SIG undefined FUN_1472cb914(void)

code * FUN_1472cb914(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1080000027c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f355e6;
}



// FUNCTION 1472cb9a2 FUN_1472cb9a2 body=138 status=ok
// SIG undefined FUN_1472cb9a2(void)

code * FUN_1472cb9a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FreeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000013c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cba2c;
}



// FUNCTION 1472cba2c FUN_1472cba2c body=138 status=ok
// SIG undefined FUN_1472cba2c(void)

code * FUN_1472cba2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HorizonBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000013b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146303b84;
}



// FUNCTION 1472cbab6 FUN_1472cbab6 body=138 status=ok
// SIG undefined FUN_1472cbab6(void)

code * FUN_1472cbab6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000139;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbb40;
}



// FUNCTION 1472cbb40 FUN_1472cbb40 body=138 status=ok
// SIG undefined FUN_1472cbb40(void)

code * FUN_1472cbb40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000138;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f76030;
}



// FUNCTION 1472cbbca FUN_1472cbbca body=138 status=ok
// SIG undefined FUN_1472cbbca(void)

code * FUN_1472cbbca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasFormat";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbc54;
}



// FUNCTION 1472cbc54 FUN_1472cbc54 body=138 status=ok
// SIG undefined FUN_1472cbc54(void)

code * FUN_1472cbc54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasSourceTextureMIPBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000135;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbcde;
}



// FUNCTION 1472cbcde FUN_1472cbcde body=138 status=ok
// SIG undefined FUN_1472cbcde(void)

code * FUN_1472cbcde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasMIPIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000134;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbd68;
}



// FUNCTION 1472cbd68 FUN_1472cbd68 body=138 status=ok
// SIG undefined FUN_1472cbd68(void)

code * FUN_1472cbd68(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000133;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbdf2;
}



// FUNCTION 1472cbdf2 FUN_1472cbdf2 body=138 status=ok
// SIG undefined FUN_1472cbdf2(void)

code * FUN_1472cbdf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FreeCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f760ba;
}



// FUNCTION 1472cbe7c FUN_1472cbe7c body=138 status=ok
// SIG undefined FUN_1472cbe7c(void)

code * FUN_1472cbe7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SlotCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbf06;
}



// FUNCTION 1472cbf06 FUN_1472cbf06 body=138 status=ok
// SIG undefined FUN_1472cbf06(void)

code * FUN_1472cbf06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Occupancy";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000012f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbf90;
}



// FUNCTION 1472cbf90 FUN_1472cbf90 body=138 status=ok
// SIG undefined FUN_1472cbf90(void)

code * FUN_1472cbf90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasMaxMipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc01a;
}



// FUNCTION 1472cc01a FUN_1472cc01a body=132 status=ok
// SIG undefined FUN_1472cc01a(void)

undefined1 * FUN_1472cc01a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cc09e;
}



// FUNCTION 1472cc0a2 FUN_1472cc0a2 body=138 status=ok
// SIG undefined FUN_1472cc0a2(void)

code * FUN_1472cc0a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler7";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc12c;
}



// FUNCTION 1472cc12c FUN_1472cc12c body=138 status=ok
// SIG undefined FUN_1472cc12c(void)

code * FUN_1472cc12c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler6";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000001cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146303dae;
}



// FUNCTION 1472cc1b6 FUN_1472cc1b6 body=138 status=ok
// SIG undefined FUN_1472cc1b6(void)

code * FUN_1472cc1b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc240;
}



// FUNCTION 1472cc240 FUN_1472cc240 body=138 status=ok
// SIG undefined FUN_1472cc240(void)

code * FUN_1472cc240(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000001cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc2ca;
}



// FUNCTION 1472cc2ca FUN_1472cc2ca body=138 status=ok
// SIG undefined FUN_1472cc2ca(void)

code * FUN_1472cc2ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000001cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc354;
}



// FUNCTION 1472cc354 FUN_1472cc354 body=138 status=ok
// SIG undefined FUN_1472cc354(void)

code * FUN_1472cc354(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000001ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc3de;
}



// FUNCTION 1472cc3de FUN_1472cc3de body=138 status=ok
// SIG undefined FUN_1472cc3de(void)

code * FUN_1472cc3de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc468;
}



// FUNCTION 1472cc468 FUN_1472cc468 body=138 status=ok
// SIG undefined FUN_1472cc468(void)

code * FUN_1472cc468(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture7";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1b552;
}



// FUNCTION 1472cc4f2 FUN_1472cc4f2 body=138 status=ok
// SIG undefined FUN_1472cc4f2(void)

code * FUN_1472cc4f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc57c;
}



// FUNCTION 1472cc57c FUN_1472cc57c body=138 status=ok
// SIG undefined FUN_1472cc57c(void)

code * FUN_1472cc57c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc606;
}



// FUNCTION 1472cc606 FUN_1472cc606 body=138 status=ok
// SIG undefined FUN_1472cc606(void)

code * FUN_1472cc606(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc690;
}



// FUNCTION 1472cc690 FUN_1472cc690 body=138 status=ok
// SIG undefined FUN_1472cc690(void)

code * FUN_1472cc690(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc71a;
}



// FUNCTION 1472cc71a FUN_1472cc71a body=138 status=ok
// SIG undefined FUN_1472cc71a(void)

code * FUN_1472cc71a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1b444;
}



// FUNCTION 1472cc7a8 FUN_1472cc7a8 body=138 status=ok
// SIG undefined FUN_1472cc7a8(void)

code * FUN_1472cc7a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSlotBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000024b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4ac4e;
}



// FUNCTION 1472cc832 FUN_1472cc832 body=138 status=ok
// SIG undefined FUN_1472cc832(void)

code * FUN_1472cc832(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc8bc;
}



// FUNCTION 1472cc8bc FUN_1472cc8bc body=138 status=ok
// SIG undefined FUN_1472cc8bc(void)

code * FUN_1472cc8bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceAtlasSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08a6a;
}



// FUNCTION 1472cc946 FUN_1472cc946 body=138 status=ok
// SIG undefined FUN_1472cc946(void)

code * FUN_1472cc946(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstSlotBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08af2;
}



// FUNCTION 1472cc9d4 FUN_1472cc9d4 body=103 status=ok
// SIG undefined FUN_1472cc9d4(void)

void FUN_1472cc9d4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1472ccedc(param_1,iVar1);
    }
    FUN_1472cceaa((longlong)iVar1 * 0x28 + *param_1,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_1472ccf70(param_1,iVar1);
  return;
}



// FUNCTION 1472cca3c FUN_1472cca3c body=68 status=ok
// SIG undefined FUN_1472cca3c(void)

longlong FUN_1472cca3c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1472ccedc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1472cceaa(lVar2,1);
  return lVar2;
}



// FUNCTION 1472cca80 FUN_1472cca80 body=147 status=ok
// SIG undefined FUN_1472cca80(void)

void FUN_1472cca80(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472ccb14 FUN_1472ccb14 body=59 status=ok
// SIG undefined FUN_1472ccb14(void)

longlong FUN_1472ccb14(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1472ccb6e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1472ccb4f(lVar2);
  return lVar2;
}



// FUNCTION 1472ccb4f FUN_1472ccb4f body=30 status=ok
// SIG undefined FUN_1472ccb4f(void)

void FUN_1472ccb4f(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14ca41490;
  *param_1 = DAT_14ca41490;
  uVar1 = DAT_14c967818;
  param_1[1] = DAT_14c967818;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return;
}



// FUNCTION 1472ccb6e FUN_1472ccb6e body=132 status=ok
// SIG undefined FUN_1472ccb6e(void)

void FUN_1472ccb6e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472ccbf4 FUN_1472ccbf4 body=76 status=ok
// SIG undefined FUN_1472ccbf4(void)

longlong FUN_1472ccbf4(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14ca41518;
  lVar2 = (longlong)(int)DAT_14ca41518;
  DAT_14ca41518 = DAT_14ca41518 + 1;
  if (DAT_14ca4151c < DAT_14ca41518) {
    FUN_1472cccfa(&DAT_14ca41510,iVar1);
  }
  lVar2 = lVar2 * 0x10 + DAT_14ca41510;
  FUN_1472cccdb(lVar2,1);
  return lVar2;
}



// FUNCTION 1472ccc40 FUN_1472ccc40 body=62 status=ok
// SIG undefined FUN_1472ccc40(void)

void FUN_1472ccc40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ccc7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1472ccc7e FUN_1472ccc7e body=93 status=ok
// SIG undefined FUN_1472ccc7e(void)

ulonglong FUN_1472ccc7e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1472cccdb FUN_1472cccdb body=30 status=ok
// SIG undefined FUN_1472cccdb(void)

void FUN_1472cccdb(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14ca41490;
  do {
    *param_1 = uVar1;
    param_1[1] = DAT_14c967818;
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1472cccfa FUN_1472cccfa body=132 status=ok
// SIG undefined FUN_1472cccfa(void)

void FUN_1472cccfa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472ccd80 FUN_1472ccd80 body=86 status=ok
// SIG undefined FUN_1472ccd80(void)

void FUN_1472ccd80(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1472ccdd6 FUN_1472ccdd6 body=99 status=ok
// SIG undefined FUN_1472ccdd6(void)

void FUN_1472ccdd6(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_1 << 5,4);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_1 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_2 < iVar3) {
    FUN_1446f8d3c(&DAT_14ca41500,0,iVar3,0x20,4);
    param_2 = iVar3;
  }
  DAT_14ca4150c = param_2;
  return;
}



// FUNCTION 1472cce3a FUN_1472cce3a body=112 status=ok
// SIG undefined FUN_1472cce3a(void)

void FUN_1472cce3a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1472cceaa FUN_1472cceaa body=49 status=ok
// SIG undefined FUN_1472cceaa(void)

void FUN_1472cceaa(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14ca41490;
  do {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 3) = uVar1;
    *(undefined8 *)(param_1 + 5) = DAT_14c967818;
    *(undefined8 *)(param_1 + 8) = 0;
    param_1 = param_1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1472ccedc FUN_1472ccedc body=147 status=ok
// SIG undefined FUN_1472ccedc(void)

void FUN_1472ccedc(longlong param_1,int param_2)

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



// FUNCTION 1472ccf70 FUN_1472ccf70 body=76 status=ok
// SIG undefined FUN_1472ccf70(void)

void FUN_1472ccf70(undefined8 *param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  
  _Dst = (void *)*param_1;
  FUN_1472ccfbc(_Dst);
  uVar1 = param_2;
  if (*(int *)(param_1 + 1) - param_2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_2 * 0x28),
            (longlong)(int)(*(int *)(param_1 + 1) - param_2) * 0x28);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - param_2;
  return;
}



// FUNCTION 1472ccfbc FUN_1472ccfbc body=67 status=ok
// SIG undefined FUN_1472ccfbc(void)

void FUN_1472ccfbc(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472cd000 FUN_1472cd000 body=29 status=ok
// SIG undefined FUN_1472cd000(void)

undefined8 FUN_1472cd000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cd01e FUN_1472cd01e body=29 status=ok
// SIG undefined FUN_1472cd01e(void)

undefined8 FUN_1472cd01e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cd03c FUN_1472cd03c body=29 status=ok
// SIG undefined FUN_1472cd03c(void)

undefined8 FUN_1472cd03c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cd05a FUN_1472cd05a body=138 status=ok
// SIG undefined FUN_1472cd05a(void)

code * FUN_1472cd05a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BoxTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55400000032a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x155;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd0e4;
}



// FUNCTION 1472cd0e4 FUN_1472cd0e4 body=138 status=ok
// SIG undefined FUN_1472cd0e4(void)

code * FUN_1472cd0e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureOffsetAndAverageBrightness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3ff000000328;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x155;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b22724;
}



// FUNCTION 1472cd172 FUN_1472cd172 body=138 status=ok
// SIG undefined FUN_1472cd172(void)

code * FUN_1472cd172(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureOffsetAndAverageBrightness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12c000000339;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 100;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd1fc;
}



// FUNCTION 1472cd1fc FUN_1472cd1fc body=138 status=ok
// SIG undefined FUN_1472cd1fc(void)

code * FUN_1472cd1fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureProperties";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000000338;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 100;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d5a0de;
}



// FUNCTION 1472cd286 FUN_1472cd286 body=132 status=ok
// SIG undefined FUN_1472cd286(void)

undefined1 * FUN_1472cd286(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionHighAndRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x334;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 100;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d5a0da;
}



// FUNCTION 1472cd30a FUN_1472cd30a body=138 status=ok
// SIG undefined FUN_1472cd30a(void)

code * FUN_1472cd30a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd394;
}



// FUNCTION 1472cd394 FUN_1472cd394 body=138 status=ok
// SIG undefined FUN_1472cd394(void)

code * FUN_1472cd394(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d44ac4;
}



// FUNCTION 1472cd41e FUN_1472cd41e body=138 status=ok
// SIG undefined FUN_1472cd41e(void)

code * FUN_1472cd41e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d44a40;
}



// FUNCTION 1472cd4ac FUN_1472cd4ac body=138 status=ok
// SIG undefined FUN_1472cd4ac(void)

code * FUN_1472cd4ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LowerHemisphereColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd536;
}



// FUNCTION 1472cd536 FUN_1472cd536 body=138 status=ok
// SIG undefined FUN_1472cd536(void)

code * FUN_1472cd536(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCaptureParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd5c0;
}



// FUNCTION 1472cd5c0 FUN_1472cd5c0 body=138 status=ok
// SIG undefined FUN_1472cd5c0(void)

code * FUN_1472cd5c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e754ec;
}



// FUNCTION 1472cd64a FUN_1472cd64a body=138 status=ok
// SIG undefined FUN_1472cd64a(void)

code * FUN_1472cd64a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd6d4;
}



// FUNCTION 1472cd6d4 FUN_1472cd6d4 body=138 status=ok
// SIG undefined FUN_1472cd6d4(void)

code * FUN_1472cd6d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e75574;
}



// FUNCTION 1472cd75e FUN_1472cd75e body=138 status=ok
// SIG undefined FUN_1472cd75e(void)

code * FUN_1472cd75e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClampToFP16";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a9ebb0;
}



// FUNCTION 1472cd7e8 FUN_1472cd7e8 body=138 status=ok
// SIG undefined FUN_1472cd7e8(void)

code * FUN_1472cd7e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463044a8;
}



// FUNCTION 1472cd872 FUN_1472cd872 body=138 status=ok
// SIG undefined FUN_1472cd872(void)

code * FUN_1472cd872(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorAlphaMultiplier";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd8fc;
}



// FUNCTION 1472cd8fc FUN_1472cd8fc body=138 status=ok
// SIG undefined FUN_1472cd8fc(void)

code * FUN_1472cd8fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LowerHemisphereColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd986;
}



// FUNCTION 1472cd986 FUN_1472cd986 body=138 status=ok
// SIG undefined FUN_1472cd986(void)

code * FUN_1472cd986(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCaptureParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a9eb26;
}



// FUNCTION 1472cda10 FUN_1472cda10 body=132 status=ok
// SIG undefined FUN_1472cda10(void)

undefined1 * FUN_1472cda10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145a9eb22;
}



// FUNCTION 1472cda94 FUN_1472cda94 body=31 status=ok
// SIG undefined FUN_1472cda94(void)

undefined8 FUN_1472cda94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cdab4 FUN_1472cdab4 body=138 status=ok
// SIG undefined FUN_1472cdab4(void)

code * FUN_1472cdab4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamples";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x440000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f35c6a;
}



// FUNCTION 1472cdb3e FUN_1472cdb3e body=138 status=ok
// SIG undefined FUN_1472cdb3e(void)

code * FUN_1472cdb3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f35b58;
}



// FUNCTION 1472cdbc8 FUN_1472cdbc8 body=138 status=ok
// SIG undefined FUN_1472cdbc8(void)

code * FUN_1472cdbc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdc52;
}



// FUNCTION 1472cdc52 FUN_1472cdc52 body=138 status=ok
// SIG undefined FUN_1472cdc52(void)

code * FUN_1472cdc52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CoefficientMask1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f35be0;
}



// FUNCTION 1472cdcdc FUN_1472cdcdc body=138 status=ok
// SIG undefined FUN_1472cdcdc(void)

code * FUN_1472cdcdc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdd66;
}



// FUNCTION 1472cdd66 FUN_1472cdd66 body=132 status=ok
// SIG undefined FUN_1472cdd66(void)

undefined1 * FUN_1472cdd66(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cddea;
}



// FUNCTION 1472cddee FUN_1472cddee body=138 status=ok
// SIG undefined FUN_1472cddee(void)

code * FUN_1472cddee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cde78;
}



// FUNCTION 1472cde78 FUN_1472cde78 body=138 status=ok
// SIG undefined FUN_1472cde78(void)

code * FUN_1472cde78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdf02;
}



// FUNCTION 1472cdf02 FUN_1472cdf02 body=138 status=ok
// SIG undefined FUN_1472cdf02(void)

code * FUN_1472cdf02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e75a5a;
}



// FUNCTION 1472cdf8c FUN_1472cdf8c body=138 status=ok
// SIG undefined FUN_1472cdf8c(void)

code * FUN_1472cdf8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Sample01";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e75ae2;
}



// FUNCTION 1472ce016 FUN_1472ce016 body=132 status=ok
// SIG undefined FUN_1472ce016(void)

undefined1 * FUN_1472ce016(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e75a56;
}



// FUNCTION 1472ce09a FUN_1472ce09a body=138 status=ok
// SIG undefined FUN_1472ce09a(void)

code * FUN_1472ce09a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5c26a;
}



// FUNCTION 1472ce124 FUN_1472ce124 body=138 status=ok
// SIG undefined FUN_1472ce124(void)

code * FUN_1472ce124(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1b91e;
}



// FUNCTION 1472ce1ae FUN_1472ce1ae body=138 status=ok
// SIG undefined FUN_1472ce1ae(void)

code * FUN_1472ce1ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce238;
}



// FUNCTION 1472ce238 FUN_1472ce238 body=132 status=ok
// SIG undefined FUN_1472ce238(void)

undefined1 * FUN_1472ce238(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472ce2bc;
}



// FUNCTION 1472ce2c0 FUN_1472ce2c0 body=138 status=ok
// SIG undefined FUN_1472ce2c0(void)

code * FUN_1472ce2c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce34a;
}



// FUNCTION 1472ce34a FUN_1472ce34a body=138 status=ok
// SIG undefined FUN_1472ce34a(void)

code * FUN_1472ce34a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe5c2;
}



// FUNCTION 1472ce3d4 FUN_1472ce3d4 body=138 status=ok
// SIG undefined FUN_1472ce3d4(void)

code * FUN_1472ce3d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce45e;
}



// FUNCTION 1472ce45e FUN_1472ce45e body=138 status=ok
// SIG undefined FUN_1472ce45e(void)

code * FUN_1472ce45e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFaceOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe64c;
}



// FUNCTION 1472ce4ec FUN_1472ce4ec body=138 status=ok
// SIG undefined FUN_1472ce4ec(void)

code * FUN_1472ce4ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efb4ba;
}



// FUNCTION 1472ce57a FUN_1472ce57a body=138 status=ok
// SIG undefined FUN_1472ce57a(void)

code * FUN_1472ce57a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4b014;
}



// FUNCTION 1472ce604 FUN_1472ce604 body=138 status=ok
// SIG undefined FUN_1472ce604(void)

code * FUN_1472ce604(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LowerHemisphereSolidColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4af8c;
}



// FUNCTION 1472ce692 FUN_1472ce692 body=31 status=ok
// SIG undefined FUN_1472ce692(void)

undefined8 FUN_1472ce692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ce6c6 FUN_1472ce6c6 body=93 status=ok
// SIG undefined FUN_1472ce6c6(void)

void FUN_1472ce6c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a2e9780;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2e6900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1472ce724 FUN_1472ce724 body=93 status=ok
// SIG undefined FUN_1472ce724(void)

void FUN_1472ce724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a2e9780;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2e6900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1472ce782 FUN_1472ce782 body=126 status=ok
// SIG undefined FUN_1472ce782(void)

void FUN_1472ce782(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a2e9780;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a2e6900;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001472ce7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1472ce80c FUN_1472ce80c body=64 status=ok
// SIG undefined FUN_1472ce80c(void)

void FUN_1472ce80c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x28));
  FUN_1405f9c04(param_2,lVar1 + 0x70);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x28) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001472ce83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 1472ce84c FUN_1472ce84c body=115 status=ok
// SIG undefined FUN_1472ce84c(void)

void FUN_1472ce84c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x240,0x10);
    iVar2 = (int)(uVar1 / 0x240);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x240,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472ce8bf FUN_1472ce8bf body=60 status=ok
// SIG undefined FUN_1472ce8bf(void)

void FUN_1472ce8bf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1472ce8fc(param_1,param_2);
    param_1 = param_1 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return;
}



// FUNCTION 1472ce8fc FUN_1472ce8fc body=312 status=ok
// SIG undefined FUN_1472ce8fc(void)

void * FUN_1472ce8fc(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  memcpy(param_1,param_2,0x120);
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  FUN_144899d7a((longlong)param_1 + 0x120,(longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0;
  FUN_144899d7a((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0;
  FUN_144899d7a((longlong)param_1 + 0x1c0,(longlong)param_2 + 0x1c0);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x218);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x220);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x228);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x230);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x238);
  *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)((longlong)param_2 + 0x210);
  *(undefined8 *)((longlong)param_1 + 0x218) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x220) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x228) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x230) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x238) = uVar5;
  return param_1;
}



// FUNCTION 1472cea34 FUN_1472cea34 body=141 status=ok
// SIG undefined FUN_1472cea34(void)

void FUN_1472cea34(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1 + 0x120);
  return;
}



// FUNCTION 1472ceac2 FUN_1472ceac2 body=62 status=ok
// SIG undefined FUN_1472ceac2(void)

void FUN_1472ceac2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ceb00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472ceb00 FUN_1472ceb00 body=93 status=ok
// SIG undefined FUN_1472ceb00(void)

ulonglong FUN_1472ceb00(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472ceb5e FUN_1472ceb5e body=38 status=ok
// SIG undefined FUN_1472ceb5e(void)

undefined8 FUN_1472ceb5e(undefined8 param_1,int param_2)

{
  FUN_145a407c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ceb84 FUN_1472ceb84 body=66 status=ok
// SIG undefined FUN_1472ceb84(void)

undefined8 * FUN_1472ceb84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e69d0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cebc6 FUN_1472cebc6 body=52 status=ok
// SIG undefined FUN_1472cebc6(void)

void FUN_1472cebc6(longlong *param_1)

{
  FUN_1472cebfa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472cebfa FUN_1472cebfa body=89 status=ok
// SIG undefined FUN_1472cebfa(void)

void FUN_1472cebfa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1472cec54 FUN_1472cec54 body=112 status=ok
// SIG undefined FUN_1472cec54(void)

void FUN_1472cec54(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,0x10);
  }
  return;
}



// FUNCTION 1472cecc4 FUN_1472cecc4 body=48 status=ok
// SIG undefined FUN_1472cecc4(void)

void FUN_1472cecc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 1472cecf4 FUN_1472cecf4 body=48 status=ok
// SIG undefined FUN_1472cecf4(void)

void FUN_1472cecf4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1472ced24 FUN_1472ced24 body=115 status=ok
// SIG undefined FUN_1472ced24(void)

void FUN_1472ced24(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xbe0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xbe0)) {
      uVar2 = uVar1 / 0xbe0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xbe0,0x10);
  }
  return;
}



// FUNCTION 1472ced98 FUN_1472ced98 body=69 status=ok
// SIG undefined FUN_1472ced98(void)

void FUN_1472ced98(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140c1d880(param_1);
    return;
  }
  return;
}



// FUNCTION 1472cedde FUN_1472cedde body=87 status=ok
// SIG undefined FUN_1472cedde(void)

void FUN_1472cedde(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x150) == *param_2) {
          FUN_1403e1574();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x150 + *param_1 + 0x140);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1472cee36 FUN_1472cee36 body=48 status=ok
// SIG undefined FUN_1472cee36(void)

void FUN_1472cee36(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1472cef4e FUN_1472cef4e body=106 status=ok
// SIG undefined FUN_1472cef4e(void)

undefined8 * FUN_1472cef4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca44550) {
    FUN_144b3d300(&DAT_14ca44550);
    if (DAT_14ca44550 == -1) {
      DAT_14ca44540 = 0;
      uRam000000014ca44548 = 0;
      atexit((_func_5014 *)&LAB_142fb49d5);
      _Init_thread_footer(&DAT_14ca44550);
    }
  }
  return &DAT_14ca44540;
}



// FUNCTION 1472cf05e FUN_1472cf05e body=5 status=ok
// SIG undefined FUN_1472cf05e(void)

void FUN_1472cf05e(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1472cf0c8 FUN_1472cf0c8 body=29 status=ok
// SIG undefined FUN_1472cf0c8(void)

undefined8 FUN_1472cf0c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cf102 FUN_1472cf102 body=123 status=ok
// SIG undefined FUN_1472cf102(void)

undefined8 * FUN_1472cf102(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1472cf17e();
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



// FUNCTION 1472cf17e FUN_1472cf17e body=389 status=ok
// SIG undefined FUN_1472cf17e(void)

longlong * FUN_1472cf17e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1472cf304 FUN_1472cf304 body=52 status=ok
// SIG undefined FUN_1472cf304(void)

void FUN_1472cf304(longlong *param_1)

{
  FUN_1472cf338();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472cf338 FUN_1472cf338 body=313 status=ok
// SIG undefined FUN_1472cf338(void)

void FUN_1472cf338(longlong *param_1)

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



// FUNCTION 1472cf472 FUN_1472cf472 body=96 status=ok
// SIG undefined FUN_1472cf472(void)

void FUN_1472cf472(longlong param_1,int param_2)

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



// FUNCTION 1472cf4d2 FUN_1472cf4d2 body=132 status=ok
// SIG undefined FUN_1472cf4d2(void)

void FUN_1472cf4d2(longlong param_1,int param_2)

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



// FUNCTION 1472cf558 FUN_1472cf558 body=141 status=ok
// SIG undefined FUN_1472cf558(void)

longlong FUN_1472cf558(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1472cf5e6();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_1472cf595;
  }
  local_30 = param_3;
  FUN_1472cf654(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_1472cf595:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472cf5e6 FUN_1472cf5e6 body=109 status=ok
// SIG undefined FUN_1472cf5e6(void)

int FUN_1472cf5e6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 8) == param_3[1])) &&
           (*(int *)(lVar2 + lVar4 + 0x10) == (int)param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1472cf654 FUN_1472cf654 body=285 status=ok
// SIG undefined FUN_1472cf654(void)

undefined4 * FUN_1472cf654(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472cf772(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  local_40[2] = puVar1[2];
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_1472cf860(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1472cf944(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472cf772 FUN_1472cf772 body=238 status=ok
// SIG undefined FUN_1472cf772(void)

int * FUN_1472cf772(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1472cf860 FUN_1472cf860 body=106 status=ok
// SIG undefined FUN_1472cf860(void)

undefined8 FUN_1472cf860(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_1472cf5e6(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1472cf8ca(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 1472cf8ca FUN_1472cf8ca body=122 status=ok
// SIG undefined FUN_1472cf8ca(void)

void FUN_1472cf8ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1472cf944 FUN_1472cf944 body=445 status=ok
// SIG undefined FUN_1472cf944(void)

void FUN_1472cf944(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_1472cfb02(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
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



// FUNCTION 1472cfb02 FUN_1472cfb02 body=91 status=ok
// SIG undefined FUN_1472cfb02(void)

void FUN_1472cfb02(ulonglong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_144a78877((int)(param_1[1] >> 0x20) * 0x17 + (int)param_1[1],(int)param_1[2]);
  uVar2 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  FUN_144a78877(uVar2 >> 0x10 ^ uVar2,uVar1);
  return;
}



// FUNCTION 1472cfb5e FUN_1472cfb5e body=142 status=ok
// SIG undefined FUN_1472cfb5e(void)

void FUN_1472cfb5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1472cfb02(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x30;
        if (((*(longlong *)(*param_1 + (longlong)iVar2 * 0x30) == *param_2) &&
            (*(longlong *)(lVar1 + 8) == param_2[1])) && (*(int *)(lVar1 + 0x10) == (int)param_2[2])
           ) {
          FUN_1472cfbec(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1472cfbec FUN_1472cfbec body=95 status=ok
// SIG undefined FUN_1472cfbec(void)

void FUN_1472cfbec(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1472cf8ca();
  return;
}



// FUNCTION 1472cfc4c FUN_1472cfc4c body=196 status=ok
// SIG undefined FUN_1472cfc4c(void)

void FUN_1472cfc4c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 1;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  return;
}



// FUNCTION 1472cfd10 FUN_1472cfd10 body=29 status=ok
// SIG undefined FUN_1472cfd10(void)

undefined8 FUN_1472cfd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cfd2e FUN_1472cfd2e body=29 status=ok
// SIG undefined FUN_1472cfd2e(void)

undefined8 FUN_1472cfd2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472cfd4b FUN_1472cfd4b body=152 status=ok
// SIG undefined FUN_1472cfd4b(void)

void FUN_1472cfd4b(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142fb4bf9();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142fb4cde(param_1,param_2);
  return;
}



// FUNCTION 1472cfde3 FUN_1472cfde3 body=374 status=ok
// SIG undefined FUN_1472cfde3(void)

void FUN_1472cfde3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472cff59 FUN_1472cff59 body=36 status=ok
// SIG undefined FUN_1472cff59(void)

void FUN_1472cff59(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)uRam000000014ca43614;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = uRam000000014ca43614;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472cff7e FUN_1472cff7e body=156 status=ok
// SIG undefined FUN_1472cff7e(void)

void FUN_1472cff7e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 8;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  lVar1 = 0x82;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x142);
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0;
  return;
}



// FUNCTION 1472d001a FUN_1472d001a body=29 status=ok
// SIG undefined FUN_1472d001a(void)

undefined8 FUN_1472d001a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0038 FUN_1472d0038 body=258 status=ok
// SIG undefined FUN_1472d0038(void)

void FUN_1472d0038(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca44638) {
    FUN_144b3d300(&DAT_14ca44638);
    if (DAT_14ca44638 == -1) {
      FUN_1472d013c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDitheredLODFadingOutMaskParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x24e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca445b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb595a);
      _Init_thread_footer(&DAT_14ca44638);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d013c FUN_1472d013c body=226 status=ok
// SIG undefined FUN_1472d013c(void)

longlong * FUN_1472d013c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1472d0220;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d0220 FUN_1472d0220 body=136 status=ok
// SIG undefined FUN_1472d0220(void)

code * FUN_1472d0220(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000251;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472d02a8;
}



// FUNCTION 1472d02a8 FUN_1472d02a8 body=142 status=ok
// SIG undefined FUN_1472d02a8(void)

code * FUN_1472d02a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000250;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472d0336;
}



// FUNCTION 1472d0336 FUN_1472d0336 body=136 status=ok
// SIG undefined FUN_1472d0336(void)

undefined1 * FUN_1472d0336(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x24f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472d03be;
}



// FUNCTION 1472d03c2 FUN_1472d03c2 body=29 status=ok
// SIG undefined FUN_1472d03c2(void)

undefined8 FUN_1472d03c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d03df FUN_1472d03df body=36 status=ok
// SIG undefined FUN_1472d03df(void)

void FUN_1472d03df(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)uRam000000014ca43724;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = uRam000000014ca43724;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472d0404 FUN_1472d0404 body=29 status=ok
// SIG undefined FUN_1472d0404(void)

undefined8 FUN_1472d0404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0422 FUN_1472d0422 body=56 status=ok
// SIG undefined FUN_1472d0422(void)

undefined8 * FUN_1472d0422(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e7020;
  FUN_144725486();
  FUN_145ee547e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0476 FUN_1472d0476 body=38 status=ok
// SIG undefined FUN_1472d0476(void)

undefined8 FUN_1472d0476(undefined8 param_1,int param_2)

{
  FUN_145ee547e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d049c FUN_1472d049c body=112 status=ok
// SIG undefined FUN_1472d049c(void)

void FUN_1472d049c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1472d050c FUN_1472d050c body=56 status=ok
// SIG undefined FUN_1472d050c(void)

void FUN_1472d050c(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14ca41490;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 3) = DAT_14c967818;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x25) = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1472d0544 FUN_1472d0544 body=101 status=ok
// SIG undefined FUN_1472d0544(void)

void FUN_1472d0544(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_145ee550a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1472d05aa FUN_1472d05aa body=62 status=ok
// SIG undefined FUN_1472d05aa(void)

void FUN_1472d05aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d05e8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1472d05e8 FUN_1472d05e8 body=112 status=ok
// SIG undefined FUN_1472d05e8(void)

ulonglong FUN_1472d05e8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472d0622;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1472d0622:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472d0658 FUN_1472d0658 body=68 status=ok
// SIG undefined FUN_1472d0658(void)

void FUN_1472d0658(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_146038584(param_1);
  return;
}



// FUNCTION 1472d069c FUN_1472d069c body=196 status=ok
// SIG undefined FUN_1472d069c(void)

void FUN_1472d069c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x24);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x24);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x24) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x24) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x24);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1407f13e6(param_1,iVar5);
  return;
}



// FUNCTION 1472d0760 FUN_1472d0760 body=311 status=ok
// SIG undefined FUN_1472d0760(void)

undefined4 * FUN_1472d0760(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1460381e6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146038180(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146038584(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d0898 FUN_1472d0898 body=48 status=ok
// SIG undefined FUN_1472d0898(void)

void FUN_1472d0898(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1472d08c8 FUN_1472d08c8 body=48 status=ok
// SIG undefined FUN_1472d08c8(void)

void FUN_1472d08c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1472d08f8 FUN_1472d08f8 body=31 status=ok
// SIG undefined FUN_1472d08f8(void)

undefined8 FUN_1472d08f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0918 FUN_1472d0918 body=31 status=ok
// SIG undefined FUN_1472d0918(void)

undefined8 FUN_1472d0918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0938 FUN_1472d0938 body=38 status=ok
// SIG undefined FUN_1472d0938(void)

undefined8 FUN_1472d0938(undefined8 param_1,int param_2)

{
  FUN_146302f76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0992 FUN_1472d0992 body=148 status=ok
// SIG undefined FUN_1472d0992(void)

void FUN_1472d0992(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x2c) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  lVar1 = 0x62;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x122);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 1472d0a26 FUN_1472d0a26 body=29 status=ok
// SIG undefined FUN_1472d0a26(void)

undefined8 FUN_1472d0a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0a4e FUN_1472d0a4e body=72 status=ok
// SIG undefined FUN_1472d0a4e(void)

void FUN_1472d0a4e(undefined4 *param_1)

{
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_144893a1c(param_1 + 2,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_144893a1c(param_1 + 6,0);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



// FUNCTION 1472d0aa0 FUN_1472d0aa0 body=108 status=ok
// SIG undefined FUN_1472d0aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d0aa0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1416735ec(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1416735ec(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d0ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d0b16 FUN_1472d0b16 body=100 status=ok
// SIG undefined FUN_1472d0b16(void)

ulonglong FUN_1472d0b16(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
    uVar3 = FUN_1400020a8(plVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d0b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1472d0b7a FUN_1472d0b7a body=354 status=ok
// SIG undefined FUN_1472d0b7a(void)

void FUN_1472d0b7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43d08;
  if (DAT_14ca43d08 != 0) {
    LOCK();
    *(int *)(DAT_14ca43d08 + 8) = *(int *)(DAT_14ca43d08 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43cc0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e7760;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d0cde FUN_1472d0cde body=38 status=ok
// SIG undefined FUN_1472d0cde(void)

undefined8 FUN_1472d0cde(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0d04 FUN_1472d0d04 body=354 status=ok
// SIG undefined FUN_1472d0d04(void)

void FUN_1472d0d04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43d90;
  if (DAT_14ca43d90 != 0) {
    LOCK();
    *(int *)(DAT_14ca43d90 + 8) = *(int *)(DAT_14ca43d90 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43d48;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e7780;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d0e68 FUN_1472d0e68 body=38 status=ok
// SIG undefined FUN_1472d0e68(void)

undefined8 FUN_1472d0e68(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0ea0 FUN_1472d0ea0 body=12 status=ok
// SIG undefined FUN_1472d0ea0(void)

void FUN_1472d0ea0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d0ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d0eac FUN_1472d0eac body=29 status=ok
// SIG undefined FUN_1472d0eac(void)

undefined8 FUN_1472d0eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0eca FUN_1472d0eca body=108 status=ok
// SIG undefined FUN_1472d0eca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d0eca(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1416735ec(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1416735ec(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d0f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d0f36 FUN_1472d0f36 body=131 status=ok
// SIG undefined FUN_1472d0f36(void)

void FUN_1472d0f36(undefined1 (*param_1) [16])

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(*param_1 + 0xc) = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[1] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0x3f800000;
  lVar1 = 0x62;
  do {
    *(undefined1 (*) [16])(param_1[-2] + lVar1 + 0xe) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1[-1] + lVar1 + 0xe) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x122);
  *(undefined4 *)(param_1[0x12] + 4) = 0;
  param_1[0x11] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0x12] = 0;
  *(undefined4 *)(param_1[0x12] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x12] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[0x13] = 0xffffffff;
  *(undefined4 *)(param_1[0x13] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[0x13] + 8) = 0;
  *(undefined2 *)(param_1[0x13] + 0xc) = 0;
  *(undefined8 *)param_1[0x14] = 0;
  return;
}



// FUNCTION 1472d0fba FUN_1472d0fba body=29 status=ok
// SIG undefined FUN_1472d0fba(void)

undefined8 FUN_1472d0fba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d0fd8 FUN_1472d0fd8 body=354 status=ok
// SIG undefined FUN_1472d0fd8(void)

void FUN_1472d0fd8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43f28;
  if (DAT_14ca43f28 != 0) {
    LOCK();
    *(int *)(DAT_14ca43f28 + 8) = *(int *)(DAT_14ca43f28 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43ee0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e78a0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d113c FUN_1472d113c body=38 status=ok
// SIG undefined FUN_1472d113c(void)

undefined8 FUN_1472d113c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d1162 FUN_1472d1162 body=131 status=ok
// SIG undefined FUN_1472d1162(void)

void FUN_1472d1162(undefined1 (*param_1) [16])

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(*param_1 + 0xc) = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[1] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0x3f800000;
  lVar1 = 0x52;
  do {
    *(undefined1 (*) [16])(param_1[-2] + lVar1 + 0xe) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1[-1] + lVar1 + 0xe) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x112);
  *(undefined4 *)(param_1[0x11] + 4) = 0;
  param_1[0x10] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0x11] = 0;
  *(undefined4 *)(param_1[0x11] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x11] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[0x12] = 0xffffffff;
  *(undefined4 *)(param_1[0x12] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[0x12] + 8) = 0;
  *(undefined2 *)(param_1[0x12] + 0xc) = 0;
  *(undefined8 *)param_1[0x13] = 0;
  return;
}



// FUNCTION 1472d11e6 FUN_1472d11e6 body=29 status=ok
// SIG undefined FUN_1472d11e6(void)

undefined8 FUN_1472d11e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d1204 FUN_1472d1204 body=354 status=ok
// SIG undefined FUN_1472d1204(void)

void FUN_1472d1204(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43fb0;
  if (DAT_14ca43fb0 != 0) {
    LOCK();
    *(int *)(DAT_14ca43fb0 + 8) = *(int *)(DAT_14ca43fb0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43f68;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e78c0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d1368 FUN_1472d1368 body=38 status=ok
// SIG undefined FUN_1472d1368(void)

undefined8 FUN_1472d1368(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d138e FUN_1472d138e body=29 status=ok
// SIG undefined FUN_1472d138e(void)

undefined8 FUN_1472d138e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d13ac FUN_1472d13ac body=354 status=ok
// SIG undefined FUN_1472d13ac(void)

void FUN_1472d13ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca44038;
  if (DAT_14ca44038 != 0) {
    LOCK();
    *(int *)(DAT_14ca44038 + 8) = *(int *)(DAT_14ca44038 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43ff0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e78e0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


