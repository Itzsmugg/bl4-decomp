// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478e8c18 FUN_1478e8c18 body=900 status=ok
// SIG undefined FUN_1478e8c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e8c18(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar7 = *(longlong *)(param_3 + 0x10);
  iVar14 = *(int *)(*(longlong *)(lVar7 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar5 = (float *)((longlong)
                     *(int *)(*(longlong *)(lVar7 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(lVar7 + 0x38));
  if ((longlong)iVar14 == 1) {
    fVar15 = *pfVar5;
    auVar23 = ZEXT416((uint)fVar15);
    fVar17 = pfVar5[1];
    fVar16 = pfVar5[2];
    fVar15 = ((1.0 - fVar15 * fVar15) - fVar17 * fVar17) - fVar16 * fVar16;
    dVar18 = 0.0;
    if (0.0 < fVar15) {
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      dVar18 = (double)fVar15;
    }
  }
  else {
    uVar6 = 0;
    if (1 < iVar14) {
      fVar17 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
      uVar6 = 0;
      if ((0.0 < fVar17) && (uVar6 = iVar14 - 1, fVar17 < 1.0)) {
        uVar13 = (longlong)pfVar5 + (longlong)iVar14 * 0x10 + 3 & 0xfffffffffffffffc;
        iVar14 = *(int *)(lVar7 + 8);
        fVar16 = (float)(iVar14 + -1) * fVar17;
        uVar8 = (uint)fVar16;
        uVar9 = iVar14 - 2U;
        if ((int)uVar8 < (int)(iVar14 - 2U)) {
          uVar9 = uVar8;
        }
        if ((int)uVar9 < 1) {
          uVar9 = 0;
        }
        uVar8 = (int)((float)(int)uVar6 * fVar17);
        if ((int)uVar6 <= (int)((float)(int)uVar6 * fVar17)) {
          uVar8 = uVar6;
        }
        uVar10 = (ulonglong)uVar8;
        if ((int)uVar8 < 1) {
          uVar10 = 0;
        }
        if (iVar14 < 0x100) {
          if (uVar9 < *(byte *)(uVar13 + uVar10)) {
            do {
              if ((longlong)uVar10 < 2) {
                uVar10 = 0;
                break;
              }
              pbVar3 = (byte *)((uVar13 - 1) + uVar10);
              uVar10 = uVar10 - 1;
            } while (uVar9 < *pbVar3);
          }
          else {
            do {
              if (uVar6 == uVar10) {
                uVar10 = (ulonglong)uVar6;
                goto LAB_1478e8e06;
              }
              pbVar3 = (byte *)(uVar13 + 1 + uVar10);
              uVar10 = uVar10 + 1;
            } while (*pbVar3 <= uVar9);
            uVar10 = (ulonglong)((int)uVar10 - 1);
          }
LAB_1478e8e06:
          uVar9 = (uint)uVar10;
          uVar8 = (uint)*(byte *)(uVar13 + (longlong)(int)uVar9);
          if ((int)uVar9 < (int)uVar6) {
            uVar6 = uVar9 + 1;
          }
          uVar12 = (uint)*(byte *)(uVar13 + (longlong)(int)uVar6);
        }
        else {
          if (uVar9 < *(ushort *)(uVar13 + uVar10 * 2)) {
            do {
              if ((longlong)uVar10 < 2) {
                uVar10 = 0;
                break;
              }
              lVar7 = uVar10 * 2;
              uVar10 = uVar10 - 1;
            } while (uVar9 < *(ushort *)((uVar13 - 2) + lVar7));
          }
          else {
            do {
              if (uVar6 == uVar10) {
                uVar10 = (ulonglong)uVar6;
                goto LAB_1478e8de8;
              }
              lVar7 = uVar10 * 2;
              uVar10 = uVar10 + 1;
            } while (*(ushort *)(uVar13 + 2 + lVar7) <= uVar9);
            uVar10 = (ulonglong)((int)uVar10 - 1);
          }
LAB_1478e8de8:
          uVar9 = (uint)uVar10;
          uVar8 = (uint)*(ushort *)(uVar13 + (longlong)(int)uVar9 * 2);
          if ((int)uVar9 < (int)uVar6) {
            uVar6 = uVar9 + 1;
          }
          uVar12 = (uint)*(ushort *)(uVar13 + (longlong)(int)uVar6 * 2);
        }
        if (uVar9 != uVar6) {
          iVar14 = 1;
          if (1 < (int)(uVar12 - uVar8)) {
            iVar14 = uVar12 - uVar8;
          }
          fVar17 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar17 = (fVar16 - (float)uVar8) / (float)iVar14;
          }
          lVar11 = (longlong)(int)uVar9;
          lVar7 = (longlong)(int)uVar6;
          pfVar1 = pfVar5 + lVar11 * 4;
          pfVar2 = pfVar5 + lVar7 * 4;
          uVar6 = -(uint)(0.0 <= pfVar5[lVar11 * 4 + 3] * pfVar5[lVar7 * 4 + 3] +
                                 pfVar5[lVar11 * 4 + 2] * pfVar5[lVar7 * 4 + 2] +
                                 pfVar5[lVar11 * 4] * pfVar5[lVar7 * 4] +
                                 pfVar5[lVar11 * 4 + 1] * pfVar5[lVar7 * 4 + 1]);
          fVar16 = (float)(~uVar6 & (uint)-(1.0 - fVar17) | (uint)(1.0 - fVar17) & uVar6);
          fVar15 = fVar16 * *pfVar1 + fVar17 * *pfVar2;
          fVar19 = fVar16 * pfVar1[1] + fVar17 * pfVar2[1];
          fVar20 = fVar16 * pfVar1[2] + fVar17 * pfVar2[2];
          fVar21 = fVar16 * pfVar1[3] + fVar17 * pfVar2[3];
          fVar17 = fVar15 * fVar15 + fVar19 * fVar19;
          fVar16 = fVar20 * fVar20 + fVar21 * fVar21;
          auVar22._0_4_ = fVar16 + fVar17;
          auVar22._4_4_ = fVar16 + fVar17;
          auVar22._8_4_ = fVar17 + fVar16;
          auVar22._12_4_ = fVar17 + fVar16;
          auVar23 = sqrtps(auVar22,auVar22);
          auVar23 = divps(_DAT_1499314a0,auVar23);
          auVar24._0_4_ = auVar23._0_4_ * fVar15;
          auVar24._4_4_ = auVar23._4_4_ * fVar19;
          auVar24._8_4_ = auVar23._8_4_ * fVar20;
          auVar24._12_4_ = auVar23._12_4_ * fVar21;
          auVar23._4_4_ = -(uint)(1e-08 <= auVar22._4_4_);
          auVar23._0_4_ = -(uint)(1e-08 <= auVar22._0_4_);
          auVar23._8_4_ = -(uint)(1e-08 <= auVar22._8_4_);
          auVar23._12_4_ = -(uint)(1e-08 <= auVar22._12_4_);
          auVar23 = blendvps(_DAT_149932320,auVar24,auVar23);
          fVar17 = auVar23._4_4_;
          fVar16 = auVar23._8_4_;
          dVar18 = (double)auVar23._12_4_;
          goto LAB_1478e8e46;
        }
      }
    }
    lVar7 = (longlong)(int)uVar6;
    auVar23 = ZEXT416((uint)pfVar5[lVar7 * 4]);
    fVar17 = pfVar5[lVar7 * 4 + 1];
    fVar16 = pfVar5[lVar7 * 4 + 2];
    dVar18 = (double)pfVar5[lVar7 * 4 + 3];
  }
LAB_1478e8e46:
  *param_2 = (double)auVar23._0_4_;
  param_2[1] = (double)fVar17;
  auVar4._8_4_ = SUB84(dVar18,0);
  auVar4._0_8_ = (double)fVar16;
  auVar4._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar4;
  return;
}



// FUNCTION 1478e8f9c FUN_1478e8f9c body=611 status=ok
// SIG undefined FUN_1478e8f9c(void)

void FUN_1478e8f9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(lVar5 + 0x38);
  uVar4 = 0;
  if (1 < (longlong)iVar6) {
    fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    uVar4 = 0;
    if ((0.0 < fVar16) && (uVar4 = iVar6 - 1, fVar16 < 1.0)) {
      uVar12 = lVar3 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar16;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar4 * fVar16);
      if ((int)uVar4 <= (int)((float)(int)uVar4 * fVar16)) {
        uVar8 = uVar4;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478e9113;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e9113:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar4);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478e90f6;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e90f6:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar4 * 2);
      }
      if (uVar9 != uVar4) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar4;
        fVar13 = *(float *)(lVar3 + lVar7 * 0xc);
        fVar14 = *(float *)(lVar3 + 4 + lVar7 * 0xc);
        fVar15 = *(float *)(lVar3 + 8 + lVar7 * 0xc);
        fVar15 = (*(float *)(lVar3 + 8 + lVar5 * 0xc) - fVar15) * fVar16 + fVar15;
        fVar14 = (*(float *)(lVar3 + 4 + lVar5 * 0xc) - fVar14) * fVar16 + fVar14;
        fVar13 = (*(float *)(lVar3 + lVar5 * 0xc) - fVar13) * fVar16 + fVar13;
        goto LAB_1478e9148;
      }
    }
  }
  lVar5 = (longlong)(int)uVar4;
  fVar13 = *(float *)(lVar3 + lVar5 * 0xc);
  fVar14 = *(float *)(lVar3 + 4 + lVar5 * 0xc);
  fVar15 = *(float *)(lVar3 + 8 + lVar5 * 0xc);
LAB_1478e9148:
  auVar2._8_4_ = SUB84((double)fVar14,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  *(double *)(param_2 + 0x30) = (double)fVar15;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e9200 FUN_1478e9200 body=615 status=ok
// SIG undefined FUN_1478e9200(void)

void FUN_1478e9200(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar5 + 0x30);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x20) + 4 + lVar4 * 4);
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + lVar4 * 4) + *(longlong *)(lVar5 + 0x38);
  uVar3 = 0;
  if (1 < (longlong)iVar6) {
    fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    uVar3 = 0;
    if ((0.0 < fVar16) && (uVar3 = iVar6 - 1, fVar16 < 1.0)) {
      uVar12 = lVar4 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar16;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar3 * fVar16);
      if ((int)uVar3 <= (int)((float)(int)uVar3 * fVar16)) {
        uVar8 = uVar3;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478e937b;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e937b:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar3);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478e935e;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e935e:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar3 * 2);
      }
      if (uVar9 != uVar3) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar3;
        fVar13 = *(float *)(lVar4 + lVar7 * 0xc);
        fVar14 = *(float *)(lVar4 + 4 + lVar7 * 0xc);
        fVar15 = *(float *)(lVar4 + 8 + lVar7 * 0xc);
        fVar15 = (*(float *)(lVar4 + 8 + lVar5 * 0xc) - fVar15) * fVar16 + fVar15;
        fVar14 = (*(float *)(lVar4 + 4 + lVar5 * 0xc) - fVar14) * fVar16 + fVar14;
        fVar13 = (*(float *)(lVar4 + lVar5 * 0xc) - fVar13) * fVar16 + fVar13;
        goto LAB_1478e93b0;
      }
    }
  }
  lVar5 = (longlong)(int)uVar3;
  fVar13 = *(float *)(lVar4 + lVar5 * 0xc);
  fVar14 = *(float *)(lVar4 + 4 + lVar5 * 0xc);
  fVar15 = *(float *)(lVar4 + 8 + lVar5 * 0xc);
LAB_1478e93b0:
  auVar2._8_4_ = SUB84((double)fVar14,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar2;
  *(double *)(param_2 + 0x50) = (double)fVar15;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e9468 FUN_1478e9468 body=1304 status=ok
// SIG undefined FUN_1478e9468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e9468(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float _X;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  lVar6 = *(longlong *)(param_3 + 0x10);
  iVar14 = *(int *)(*(longlong *)(lVar6 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar13 = (float *)((longlong)
                      *(int *)(*(longlong *)(lVar6 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                     *(longlong *)(lVar6 + 0x38));
  if ((longlong)iVar14 == 1) {
    fVar15 = *pfVar13;
    auVar19 = ZEXT416((uint)fVar15);
    fVar25 = pfVar13[1];
    fVar16 = pfVar13[2];
    fVar15 = ((1.0 - fVar15 * fVar15) - fVar25 * fVar25) - fVar16 * fVar16;
    dVar18 = 0.0;
    if (fVar15 <= 0.0) goto LAB_1478e973e;
    if (fVar15 < 0.0) goto LAB_1478e9731;
LAB_1478e952d:
    fVar15 = SQRT(fVar15);
  }
  else {
    uVar5 = 0;
    if (1 < iVar14) {
      fVar25 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
      uVar5 = 0;
      if ((0.0 < fVar25) && (uVar5 = iVar14 - 1, fVar25 < 1.0)) {
        uVar12 = (longlong)pfVar13 + (longlong)iVar14 * 0xc + 3 & 0xfffffffffffffffc;
        iVar14 = *(int *)(lVar6 + 8);
        fVar16 = (float)(iVar14 + -1) * fVar25;
        uVar7 = (uint)fVar16;
        uVar8 = iVar14 - 2U;
        if ((int)uVar7 < (int)(iVar14 - 2U)) {
          uVar8 = uVar7;
        }
        if ((int)uVar8 < 1) {
          uVar8 = 0;
        }
        uVar7 = (int)((float)(int)uVar5 * fVar25);
        if ((int)uVar5 <= (int)((float)(int)uVar5 * fVar25)) {
          uVar7 = uVar5;
        }
        uVar9 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar9 = 0;
        }
        if (iVar14 < 0x100) {
          if (uVar8 < *(byte *)(uVar12 + uVar9)) {
            do {
              if ((longlong)uVar9 < 2) {
                uVar9 = 0;
                break;
              }
              pbVar1 = (byte *)((uVar12 - 1) + uVar9);
              uVar9 = uVar9 - 1;
            } while (uVar8 < *pbVar1);
          }
          else {
            do {
              if (uVar5 == uVar9) {
                uVar9 = (ulonglong)uVar5;
                goto LAB_1478e9684;
              }
              pbVar1 = (byte *)(uVar12 + 1 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pbVar1 <= uVar8);
            uVar9 = (ulonglong)((int)uVar9 - 1);
          }
LAB_1478e9684:
          uVar8 = (uint)uVar9;
          uVar7 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar8);
          if ((int)uVar8 < (int)uVar5) {
            uVar5 = uVar8 + 1;
          }
          uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar5);
        }
        else {
          if (uVar8 < *(ushort *)(uVar12 + uVar9 * 2)) {
            do {
              if ((longlong)uVar9 < 2) {
                uVar9 = 0;
                break;
              }
              lVar6 = uVar9 * 2;
              uVar9 = uVar9 - 1;
            } while (uVar8 < *(ushort *)((uVar12 - 2) + lVar6));
          }
          else {
            do {
              if (uVar5 == uVar9) {
                uVar9 = (ulonglong)uVar5;
                goto LAB_1478e9665;
              }
              lVar6 = uVar9 * 2;
              uVar9 = uVar9 + 1;
            } while (*(ushort *)(uVar12 + 2 + lVar6) <= uVar8);
            uVar9 = (ulonglong)((int)uVar9 - 1);
          }
LAB_1478e9665:
          uVar8 = (uint)uVar9;
          uVar7 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar8 * 2);
          if ((int)uVar8 < (int)uVar5) {
            uVar5 = uVar8 + 1;
          }
          uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar5 * 2);
        }
        iVar14 = 1;
        if (1 < (int)(uVar11 - uVar7)) {
          iVar14 = uVar11 - uVar7;
        }
        fVar25 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar25 = (fVar16 - (float)uVar7) / (float)iVar14;
        }
        if (uVar8 != uVar5) {
          lVar10 = (longlong)(int)uVar8;
          lVar6 = (longlong)(int)uVar5;
          fVar16 = pfVar13[lVar10 * 3];
          fVar15 = pfVar13[lVar10 * 3 + 1];
          fVar27 = pfVar13[lVar10 * 3 + 2];
          fVar17 = ((1.0 - fVar16 * fVar16) - fVar15 * fVar15) - fVar27 * fVar27;
          fVar21 = 0.0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          auVar19 = ZEXT816(0);
          if (0.0 < fVar17) {
            if (fVar17 < 0.0) {
              fVar17 = sqrtf(fVar17);
              auVar19._4_4_ = extraout_XMM0_Db;
              auVar19._0_4_ = fVar17;
              auVar19._8_4_ = extraout_XMM0_Dc;
              auVar19._12_4_ = extraout_XMM0_Dd;
            }
            else {
              auVar19 = ZEXT416((uint)SQRT(fVar17));
            }
          }
          auVar26 = insertps(ZEXT416((uint)fVar16),ZEXT416((uint)fVar15),0x10);
          auVar26 = insertps(auVar26,ZEXT416((uint)fVar27),0x20);
          auVar26 = insertps(auVar26,auVar19,0x30);
          fVar17 = pfVar13[lVar6 * 3];
          fVar2 = pfVar13[lVar6 * 3 + 1];
          fVar3 = pfVar13[lVar6 * 3 + 2];
          _X = ((1.0 - fVar17 * fVar17) - fVar2 * fVar2) - fVar3 * fVar3;
          if (0.0 < _X) {
            if (_X < 0.0) {
              fVar21 = sqrtf(_X);
              uVar22 = extraout_XMM0_Db_00;
              uVar23 = extraout_XMM0_Dc_00;
              uVar24 = extraout_XMM0_Dd_00;
            }
            else {
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              fVar21 = SQRT(_X);
            }
          }
          auVar28 = insertps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar2),0x10);
          auVar29 = insertps(auVar28,ZEXT416((uint)fVar3),0x20);
          auVar28._4_4_ = uVar22;
          auVar28._0_4_ = fVar21;
          auVar28._8_4_ = uVar23;
          auVar28._12_4_ = uVar24;
          auVar28 = insertps(auVar29,auVar28,0x30);
          uVar5 = -(uint)(0.0 <= auVar19._0_4_ * fVar21 +
                                 fVar27 * fVar3 + fVar15 * fVar2 + fVar16 * fVar17);
          fVar16 = (float)(~uVar5 & (uint)-(1.0 - fVar25) | (uint)(1.0 - fVar25) & uVar5);
          fVar15 = auVar26._0_4_ * fVar16 + fVar25 * auVar28._0_4_;
          fVar27 = auVar26._4_4_ * fVar16 + fVar25 * auVar28._4_4_;
          fVar17 = auVar26._8_4_ * fVar16 + fVar25 * auVar28._8_4_;
          fVar21 = auVar26._12_4_ * fVar16 + fVar25 * auVar28._12_4_;
          fVar25 = fVar15 * fVar15 + fVar27 * fVar27;
          fVar16 = fVar17 * fVar17 + fVar21 * fVar21;
          auVar29._0_4_ = fVar16 + fVar25;
          auVar29._4_4_ = fVar16 + fVar25;
          auVar29._8_4_ = fVar25 + fVar16;
          auVar29._12_4_ = fVar25 + fVar16;
          auVar19 = sqrtps(auVar29,auVar29);
          auVar19 = divps(_DAT_1499314a0,auVar19);
          auVar20._0_4_ = auVar19._0_4_ * fVar15;
          auVar20._4_4_ = auVar19._4_4_ * fVar27;
          auVar20._8_4_ = auVar19._8_4_ * fVar17;
          auVar20._12_4_ = auVar19._12_4_ * fVar21;
          auVar26._4_4_ = -(uint)(1e-08 <= auVar29._4_4_);
          auVar26._0_4_ = -(uint)(1e-08 <= auVar29._0_4_);
          auVar26._8_4_ = -(uint)(1e-08 <= auVar29._8_4_);
          auVar26._12_4_ = -(uint)(1e-08 <= auVar29._12_4_);
          auVar19 = blendvps(_DAT_149932320,auVar20,auVar26);
          fVar25 = auVar19._4_4_;
          fVar16 = auVar19._8_4_;
          dVar18 = (double)auVar19._12_4_;
          goto LAB_1478e973e;
        }
      }
    }
    lVar6 = (longlong)(int)uVar5;
    fVar15 = pfVar13[lVar6 * 3];
    auVar19 = ZEXT416((uint)fVar15);
    fVar25 = pfVar13[lVar6 * 3 + 1];
    fVar16 = pfVar13[lVar6 * 3 + 2];
    fVar15 = ((1.0 - fVar15 * fVar15) - fVar25 * fVar25) - fVar16 * fVar16;
    dVar18 = 0.0;
    if (fVar15 <= 0.0) goto LAB_1478e973e;
    if (0.0 <= fVar15) goto LAB_1478e952d;
LAB_1478e9731:
    fVar15 = sqrtf(fVar15);
  }
  dVar18 = (double)fVar15;
LAB_1478e973e:
  *param_2 = (double)auVar19._0_4_;
  param_2[1] = (double)fVar25;
  auVar4._8_4_ = SUB84(dVar18,0);
  auVar4._0_8_ = (double)fVar16;
  auVar4._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar4;
  return;
}



// FUNCTION 1478e9980 FUN_1478e9980 body=611 status=ok
// SIG undefined FUN_1478e9980(void)

void FUN_1478e9980(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(lVar5 + 0x38);
  uVar4 = 0;
  if (1 < (longlong)iVar6) {
    fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    uVar4 = 0;
    if ((0.0 < fVar16) && (uVar4 = iVar6 - 1, fVar16 < 1.0)) {
      uVar12 = lVar3 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar16;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar4 * fVar16);
      if ((int)uVar4 <= (int)((float)(int)uVar4 * fVar16)) {
        uVar8 = uVar4;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478e9af7;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e9af7:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar4);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478e9ada;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e9ada:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar4 * 2);
      }
      if (uVar9 != uVar4) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar4;
        fVar13 = *(float *)(lVar3 + lVar7 * 0xc);
        fVar14 = *(float *)(lVar3 + 4 + lVar7 * 0xc);
        fVar15 = *(float *)(lVar3 + 8 + lVar7 * 0xc);
        fVar15 = (*(float *)(lVar3 + 8 + lVar5 * 0xc) - fVar15) * fVar16 + fVar15;
        fVar14 = (*(float *)(lVar3 + 4 + lVar5 * 0xc) - fVar14) * fVar16 + fVar14;
        fVar13 = (*(float *)(lVar3 + lVar5 * 0xc) - fVar13) * fVar16 + fVar13;
        goto LAB_1478e9b2c;
      }
    }
  }
  lVar5 = (longlong)(int)uVar4;
  fVar13 = *(float *)(lVar3 + lVar5 * 0xc);
  fVar14 = *(float *)(lVar3 + 4 + lVar5 * 0xc);
  fVar15 = *(float *)(lVar3 + 8 + lVar5 * 0xc);
LAB_1478e9b2c:
  auVar2._8_4_ = SUB84((double)fVar14,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  *(double *)(param_2 + 0x30) = (double)fVar15;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e9be4 FUN_1478e9be4 body=615 status=ok
// SIG undefined FUN_1478e9be4(void)

void FUN_1478e9be4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar5 + 0x30);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x20) + 4 + lVar4 * 4);
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + lVar4 * 4) + *(longlong *)(lVar5 + 0x38);
  uVar3 = 0;
  if (1 < (longlong)iVar6) {
    fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    uVar3 = 0;
    if ((0.0 < fVar16) && (uVar3 = iVar6 - 1, fVar16 < 1.0)) {
      uVar12 = lVar4 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar16;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar3 * fVar16);
      if ((int)uVar3 <= (int)((float)(int)uVar3 * fVar16)) {
        uVar8 = uVar3;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478e9d5f;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e9d5f:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar3);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478e9d42;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478e9d42:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar3 * 2);
      }
      if (uVar9 != uVar3) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar3;
        fVar13 = *(float *)(lVar4 + lVar7 * 0xc);
        fVar14 = *(float *)(lVar4 + 4 + lVar7 * 0xc);
        fVar15 = *(float *)(lVar4 + 8 + lVar7 * 0xc);
        fVar15 = (*(float *)(lVar4 + 8 + lVar5 * 0xc) - fVar15) * fVar16 + fVar15;
        fVar14 = (*(float *)(lVar4 + 4 + lVar5 * 0xc) - fVar14) * fVar16 + fVar14;
        fVar13 = (*(float *)(lVar4 + lVar5 * 0xc) - fVar13) * fVar16 + fVar13;
        goto LAB_1478e9d94;
      }
    }
  }
  lVar5 = (longlong)(int)uVar3;
  fVar13 = *(float *)(lVar4 + lVar5 * 0xc);
  fVar14 = *(float *)(lVar4 + 4 + lVar5 * 0xc);
  fVar15 = *(float *)(lVar4 + 8 + lVar5 * 0xc);
LAB_1478e9d94:
  auVar2._8_4_ = SUB84((double)fVar14,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar2;
  *(double *)(param_2 + 0x50) = (double)fVar15;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e9e4c FUN_1478e9e4c body=1444 status=ok
// SIG undefined FUN_1478e9e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e9e4c(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float fVar29;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float fVar33;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float fVar34;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  float fVar35;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auVar36 [16];
  
  lVar8 = *(longlong *)(param_3 + 0x10);
  iVar16 = *(int *)(*(longlong *)(lVar8 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar15 = (float *)((longlong)
                      *(int *)(*(longlong *)(lVar8 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                     *(longlong *)(lVar8 + 0x38));
  if ((longlong)iVar16 == 1) {
    fVar17 = *pfVar15;
    auVar32 = ZEXT416((uint)fVar17);
    fVar19 = pfVar15[1];
    fVar18 = pfVar15[2];
    fVar17 = ((1.0 - fVar17 * fVar17) - fVar19 * fVar19) - fVar18 * fVar18;
    dVar20 = 0.0;
    if (fVar17 <= 0.0) goto LAB_1478ea157;
    if (fVar17 < 0.0) goto LAB_1478ea14a;
LAB_1478e9f15:
    fVar17 = SQRT(fVar17);
  }
  else {
    uVar7 = 0;
    if (1 < iVar16) {
      fVar19 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      uVar7 = 0;
      if ((0.0 < fVar19) && (uVar7 = iVar16 - 1, fVar19 < 1.0)) {
        uVar14 = (longlong)pfVar15 + (longlong)iVar16 * 6 + 3 & 0xfffffffffffffffc;
        iVar16 = *(int *)(lVar8 + 8);
        fVar18 = (float)(iVar16 + -1) * fVar19;
        uVar9 = (uint)fVar18;
        uVar10 = iVar16 - 2U;
        if ((int)uVar9 < (int)(iVar16 - 2U)) {
          uVar10 = uVar9;
        }
        if ((int)uVar10 < 1) {
          uVar10 = 0;
        }
        uVar9 = (int)((float)(int)uVar7 * fVar19);
        if ((int)uVar7 <= (int)((float)(int)uVar7 * fVar19)) {
          uVar9 = uVar7;
        }
        uVar11 = (ulonglong)uVar9;
        if ((int)uVar9 < 1) {
          uVar11 = 0;
        }
        if (iVar16 < 0x100) {
          if (uVar10 < *(byte *)(uVar14 + uVar11)) {
            do {
              if ((longlong)uVar11 < 2) {
                uVar11 = 0;
                break;
              }
              pbVar1 = (byte *)((uVar14 - 1) + uVar11);
              uVar11 = uVar11 - 1;
            } while (uVar10 < *pbVar1);
          }
          else {
            do {
              if (uVar7 == uVar11) {
                uVar11 = (ulonglong)uVar7;
                goto LAB_1478ea06c;
              }
              pbVar1 = (byte *)(uVar14 + 1 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pbVar1 <= uVar10);
            uVar11 = (ulonglong)((int)uVar11 - 1);
          }
LAB_1478ea06c:
          uVar10 = (uint)uVar11;
          uVar9 = (uint)*(byte *)(uVar14 + (longlong)(int)uVar10);
          if ((int)uVar10 < (int)uVar7) {
            uVar7 = uVar10 + 1;
          }
          uVar13 = (uint)*(byte *)(uVar14 + (longlong)(int)uVar7);
        }
        else {
          if (uVar10 < *(ushort *)(uVar14 + uVar11 * 2)) {
            do {
              if ((longlong)uVar11 < 2) {
                uVar11 = 0;
                break;
              }
              lVar8 = uVar11 * 2;
              uVar11 = uVar11 - 1;
            } while (uVar10 < *(ushort *)((uVar14 - 2) + lVar8));
          }
          else {
            do {
              if (uVar7 == uVar11) {
                uVar11 = (ulonglong)uVar7;
                goto LAB_1478ea04d;
              }
              lVar8 = uVar11 * 2;
              uVar11 = uVar11 + 1;
            } while (*(ushort *)(uVar14 + 2 + lVar8) <= uVar10);
            uVar11 = (ulonglong)((int)uVar11 - 1);
          }
LAB_1478ea04d:
          uVar10 = (uint)uVar11;
          uVar9 = (uint)*(ushort *)(uVar14 + (longlong)(int)uVar10 * 2);
          if ((int)uVar10 < (int)uVar7) {
            uVar7 = uVar10 + 1;
          }
          uVar13 = (uint)*(ushort *)(uVar14 + (longlong)(int)uVar7 * 2);
        }
        iVar16 = 1;
        if (1 < (int)(uVar13 - uVar9)) {
          iVar16 = uVar13 - uVar9;
        }
        fVar19 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar19 = (fVar18 - (float)uVar9) / (float)iVar16;
        }
        if (uVar10 != uVar7) {
          lVar12 = (longlong)(int)uVar10;
          lVar8 = (longlong)(int)uVar7 * 6;
          fVar17 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar12 * 6) - 0x7fff) / 32767.0;
          fVar34 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar12 * 6 + 2) - 0x7fff) / 32767.0;
          fVar33 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar12 * 6 + 4) - 0x7fff) / 32767.0;
          fVar18 = ((1.0 - fVar17 * fVar17) - fVar34 * fVar34) - fVar33 * fVar33;
          auVar30._4_4_ = unaff_XMM11_Db;
          auVar30._0_4_ = fVar17;
          auVar30._8_4_ = unaff_XMM11_Dc;
          auVar30._12_4_ = unaff_XMM11_Dd;
          auVar31._4_4_ = unaff_XMM13_Db;
          auVar31._0_4_ = fVar34;
          auVar31._8_4_ = unaff_XMM13_Dc;
          auVar31._12_4_ = unaff_XMM13_Dd;
          auVar31 = insertps(auVar30,auVar31,0x10);
          auVar32._4_4_ = unaff_XMM12_Db;
          auVar32._0_4_ = fVar33;
          auVar32._8_4_ = unaff_XMM12_Dc;
          auVar32._12_4_ = unaff_XMM12_Dd;
          auVar32 = insertps(auVar31,auVar32,0x20);
          auVar27 = ZEXT816(0);
          if (0.0 < fVar18) {
            if (fVar18 < 0.0) {
              fVar18 = sqrtf(fVar18);
              auVar27._4_4_ = extraout_XMM0_Db;
              auVar27._0_4_ = fVar18;
              auVar27._8_4_ = extraout_XMM0_Dc;
              auVar27._12_4_ = extraout_XMM0_Dd;
            }
            else {
              auVar27 = ZEXT416((uint)SQRT(fVar18));
            }
          }
          uVar26 = 0;
          uVar25 = 0;
          uVar24 = 0;
          fVar23 = 0.0;
          auVar32 = insertps(auVar32,auVar27,0x30);
          fVar28 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8) - 0x7fff) / 32767.0;
          fVar35 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8 + 2) - 0x7fff) / 32767.0;
          fVar29 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8 + 4) - 0x7fff) / 32767.0;
          fVar18 = ((1.0 - fVar28 * fVar28) - fVar35 * fVar35) - fVar29 * fVar29;
          auVar36._4_4_ = unaff_XMM7_Db;
          auVar36._0_4_ = fVar28;
          auVar36._8_4_ = unaff_XMM7_Dc;
          auVar36._12_4_ = unaff_XMM7_Dd;
          auVar6._4_4_ = unaff_XMM14_Db;
          auVar6._0_4_ = fVar35;
          auVar6._8_4_ = unaff_XMM14_Dc;
          auVar6._12_4_ = unaff_XMM14_Dd;
          auVar31 = insertps(auVar36,auVar6,0x10);
          auVar5._4_4_ = unaff_XMM8_Db;
          auVar5._0_4_ = fVar29;
          auVar5._8_4_ = unaff_XMM8_Dc;
          auVar5._12_4_ = unaff_XMM8_Dd;
          auVar31 = insertps(auVar31,auVar5,0x20);
          if (0.0 < fVar18) {
            if (fVar18 < 0.0) {
              fVar23 = sqrtf(fVar18);
              uVar24 = extraout_XMM0_Db_00;
              uVar25 = extraout_XMM0_Dc_00;
              uVar26 = extraout_XMM0_Dd_00;
            }
            else {
              uVar24 = 0;
              uVar25 = 0;
              uVar26 = 0;
              fVar23 = SQRT(fVar18);
            }
          }
          auVar4._4_4_ = uVar24;
          auVar4._0_4_ = fVar23;
          auVar4._8_4_ = uVar25;
          auVar4._12_4_ = uVar26;
          auVar31 = insertps(auVar31,auVar4,0x30);
          uVar7 = -(uint)(0.0 <= auVar27._0_4_ * fVar23 +
                                 fVar33 * fVar29 + fVar17 * fVar28 + fVar34 * fVar35);
          fVar18 = (float)(~uVar7 & (uint)-(1.0 - fVar19) | (uint)(1.0 - fVar19) & uVar7);
          fVar17 = auVar32._0_4_ * fVar18 + fVar19 * auVar31._0_4_;
          fVar33 = auVar32._4_4_ * fVar18 + fVar19 * auVar31._4_4_;
          fVar34 = auVar32._8_4_ * fVar18 + fVar19 * auVar31._8_4_;
          fVar23 = auVar32._12_4_ * fVar18 + fVar19 * auVar31._12_4_;
          fVar19 = fVar17 * fVar17 + fVar33 * fVar33;
          fVar18 = fVar34 * fVar34 + fVar23 * fVar23;
          auVar21._0_4_ = fVar18 + fVar19;
          auVar21._4_4_ = fVar18 + fVar19;
          auVar21._8_4_ = fVar19 + fVar18;
          auVar21._12_4_ = fVar19 + fVar18;
          auVar32 = sqrtps(auVar21,auVar21);
          auVar32 = divps(_DAT_1499314a0,auVar32);
          auVar22._0_4_ = auVar32._0_4_ * fVar17;
          auVar22._4_4_ = auVar32._4_4_ * fVar33;
          auVar22._8_4_ = auVar32._8_4_ * fVar34;
          auVar22._12_4_ = auVar32._12_4_ * fVar23;
          auVar3._4_4_ = -(uint)(1e-08 <= auVar21._4_4_);
          auVar3._0_4_ = -(uint)(1e-08 <= auVar21._0_4_);
          auVar3._8_4_ = -(uint)(1e-08 <= auVar21._8_4_);
          auVar3._12_4_ = -(uint)(1e-08 <= auVar21._12_4_);
          auVar32 = blendvps(_DAT_149932320,auVar22,auVar3);
          fVar19 = auVar32._4_4_;
          fVar18 = auVar32._8_4_;
          dVar20 = (double)auVar32._12_4_;
          goto LAB_1478ea157;
        }
      }
    }
    lVar8 = (longlong)(int)uVar7;
    fVar17 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8 * 6) - 0x7fff) / 32767.0;
    auVar32 = ZEXT416((uint)fVar17);
    fVar19 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8 * 6 + 2) - 0x7fff) / 32767.0;
    fVar18 = (float)(int)(*(ushort *)((longlong)pfVar15 + lVar8 * 6 + 4) - 0x7fff) / 32767.0;
    fVar17 = ((1.0 - fVar17 * fVar17) - fVar19 * fVar19) - fVar18 * fVar18;
    dVar20 = 0.0;
    if (fVar17 <= 0.0) goto LAB_1478ea157;
    if (0.0 <= fVar17) goto LAB_1478e9f15;
LAB_1478ea14a:
    fVar17 = sqrtf(fVar17);
  }
  dVar20 = (double)fVar17;
LAB_1478ea157:
  *param_2 = (double)auVar32._0_4_;
  param_2[1] = (double)fVar19;
  auVar2._8_4_ = SUB84(dVar20,0);
  auVar2._0_8_ = (double)fVar18;
  auVar2._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  return;
}



// FUNCTION 1478ea3f0 FUN_1478ea3f0 body=843 status=ok
// SIG undefined FUN_1478ea3f0(void)

void FUN_1478ea3f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(lVar5 + 0x38);
  uVar4 = 0;
  if (1 < (longlong)iVar6) {
    fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    uVar4 = 0;
    if ((0.0 < fVar14) && (uVar4 = iVar6 - 1, fVar14 < 1.0)) {
      uVar12 = lVar3 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar14;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar4 * fVar14);
      if ((int)uVar4 <= (int)((float)(int)uVar4 * fVar14)) {
        uVar8 = uVar4;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478ea572;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478ea572:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar4);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar4 == uVar10) {
              uVar10 = (ulonglong)uVar4;
              goto LAB_1478ea555;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478ea555:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar4) {
          uVar4 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar4 * 2);
      }
      if (uVar9 != uVar4) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar14 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar14 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar4;
        fVar13 = ((float)(int)(*(ushort *)(lVar3 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar15 = ((float)(int)(*(ushort *)(lVar3 + 2 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar16 = ((float)(int)(*(ushort *)(lVar3 + 4 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar16 = (((float)(int)(*(ushort *)(lVar3 + 4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar16) * fVar14 + fVar16;
        fVar15 = (((float)(int)(*(ushort *)(lVar3 + 2 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar15) * fVar14 + fVar15;
        fVar13 = (((float)(int)(*(ushort *)(lVar3 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar13) * fVar14 + fVar13;
        goto LAB_1478ea5f5;
      }
    }
  }
  lVar5 = (longlong)(int)uVar4;
  fVar13 = ((float)(int)(*(ushort *)(lVar3 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar15 = ((float)(int)(*(ushort *)(lVar3 + 2 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar16 = ((float)(int)(*(ushort *)(lVar3 + 4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
LAB_1478ea5f5:
  auVar2._8_4_ = SUB84((double)fVar15,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  *(double *)(param_2 + 0x30) = (double)fVar16;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478ea73c FUN_1478ea73c body=847 status=ok
// SIG undefined FUN_1478ea73c(void)

void FUN_1478ea73c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar5 + 0x30);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x20) + 4 + lVar4 * 4);
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + lVar4 * 4) + *(longlong *)(lVar5 + 0x38);
  uVar3 = 0;
  if (1 < (longlong)iVar6) {
    fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    uVar3 = 0;
    if ((0.0 < fVar14) && (uVar3 = iVar6 - 1, fVar14 < 1.0)) {
      uVar12 = lVar4 + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      iVar6 = *(int *)(lVar5 + 8);
      fVar13 = (float)(iVar6 + -1) * fVar14;
      uVar8 = (uint)fVar13;
      uVar9 = iVar6 - 2U;
      if ((int)uVar8 < (int)(iVar6 - 2U)) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar8 = (int)((float)(int)uVar3 * fVar14);
      if ((int)uVar3 <= (int)((float)(int)uVar3 * fVar14)) {
        uVar8 = uVar3;
      }
      uVar10 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar12 + uVar10)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar12 - 1) + uVar10);
            uVar10 = uVar10 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478ea8c2;
            }
            pbVar1 = (byte *)(uVar12 + 1 + uVar10);
            uVar10 = uVar10 + 1;
          } while (*pbVar1 <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478ea8c2:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar9);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(byte *)(uVar12 + (longlong)(int)uVar3);
      }
      else {
        if (uVar9 < *(ushort *)(uVar12 + uVar10 * 2)) {
          do {
            if ((longlong)uVar10 < 2) {
              uVar10 = 0;
              break;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 - 1;
          } while (uVar9 < *(ushort *)((uVar12 - 2) + lVar5));
        }
        else {
          do {
            if (uVar3 == uVar10) {
              uVar10 = (ulonglong)uVar3;
              goto LAB_1478ea8a5;
            }
            lVar5 = uVar10 * 2;
            uVar10 = uVar10 + 1;
          } while (*(ushort *)(uVar12 + 2 + lVar5) <= uVar9);
          uVar10 = (ulonglong)((int)uVar10 - 1);
        }
LAB_1478ea8a5:
        uVar9 = (uint)uVar10;
        uVar8 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar9 * 2);
        if ((int)uVar9 < (int)uVar3) {
          uVar3 = uVar9 + 1;
        }
        uVar11 = (uint)*(ushort *)(uVar12 + (longlong)(int)uVar3 * 2);
      }
      if (uVar9 != uVar3) {
        iVar6 = 1;
        if (1 < (int)(uVar11 - uVar8)) {
          iVar6 = uVar11 - uVar8;
        }
        fVar14 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar14 = (fVar13 - (float)uVar8) / (float)iVar6;
        }
        lVar7 = (longlong)(int)uVar9;
        lVar5 = (longlong)(int)uVar3;
        fVar13 = ((float)(int)(*(ushort *)(lVar4 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar15 = ((float)(int)(*(ushort *)(lVar4 + 2 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar16 = ((float)(int)(*(ushort *)(lVar4 + 4 + lVar7 * 0xc) - 0x7fff) / 32767.0) * 128.0;
        fVar16 = (((float)(int)(*(ushort *)(lVar4 + 4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar16) * fVar14 + fVar16;
        fVar15 = (((float)(int)(*(ushort *)(lVar4 + 2 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar15) * fVar14 + fVar15;
        fVar13 = (((float)(int)(*(ushort *)(lVar4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0 -
                 fVar13) * fVar14 + fVar13;
        goto LAB_1478ea945;
      }
    }
  }
  lVar5 = (longlong)(int)uVar3;
  fVar13 = ((float)(int)(*(ushort *)(lVar4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar15 = ((float)(int)(*(ushort *)(lVar4 + 2 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar16 = ((float)(int)(*(ushort *)(lVar4 + 4 + lVar5 * 0xc) - 0x7fff) / 32767.0) * 128.0;
LAB_1478ea945:
  auVar2._8_4_ = SUB84((double)fVar15,0);
  auVar2._0_8_ = (double)fVar13;
  auVar2._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar2;
  *(double *)(param_2 + 0x50) = (double)fVar16;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478eaa8c FUN_1478eaa8c body=1030 status=ok
// SIG undefined FUN_1478eaa8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478eaa8c(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar11 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar10 = (float *)((longlong)
                      *(int *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                     *(longlong *)(lVar2 + 0x38));
  if ((longlong)iVar11 == 1) {
    fVar12 = *pfVar10;
    auVar16 = ZEXT416((uint)fVar12);
    fStack_84 = pfVar10[1];
    fStack_80 = pfVar10[2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fStack_84 * fStack_84) - fStack_80 * fStack_80;
    dVar14 = 0.0;
    if (0.0 < fVar12) {
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      dVar14 = (double)fVar12;
    }
  }
  else {
    uVar7 = 0;
    if (1 < iVar11) {
      fVar12 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      uVar7 = 0;
      if ((0.0 < fVar12) && (uVar7 = iVar11 - 1, fVar12 < 1.0)) {
        uVar9 = (longlong)pfVar10 + (longlong)iVar11 * 4 + 0x1b & 0xfffffffffffffffc;
        iVar11 = *(int *)(lVar2 + 8);
        fVar13 = (float)(iVar11 + -1) * fVar12;
        uVar4 = (uint)fVar13;
        uVar5 = iVar11 - 2U;
        if ((int)uVar4 < (int)(iVar11 - 2U)) {
          uVar5 = uVar4;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uVar4 = (int)((float)(int)uVar7 * fVar12);
        if ((int)uVar7 <= (int)((float)(int)uVar7 * fVar12)) {
          uVar4 = uVar7;
        }
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 1) {
          uVar6 = 0;
        }
        if (iVar11 < 0x100) {
          if (uVar5 < *(byte *)(uVar9 + uVar6)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              pbVar1 = (byte *)((uVar9 - 1) + uVar6);
              uVar6 = uVar6 - 1;
            } while (uVar5 < *pbVar1);
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478eace7;
              }
              pbVar1 = (byte *)(uVar9 + 1 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pbVar1 <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478eace7:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(byte *)(uVar9 + (longlong)(int)uVar5);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar8 = (uint)*(byte *)(uVar9 + (longlong)(int)uVar7);
        }
        else {
          if (uVar5 < *(ushort *)(uVar9 + uVar6 * 2)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 - 1;
            } while (uVar5 < *(ushort *)((uVar9 - 2) + lVar2));
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478eacc9;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 + 1;
            } while (*(ushort *)(uVar9 + 2 + lVar2) <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478eacc9:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(ushort *)(uVar9 + (longlong)(int)uVar5 * 2);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar8 = (uint)*(ushort *)(uVar9 + (longlong)(int)uVar7 * 2);
        }
        if (uVar5 != uVar7) {
          iVar11 = 1;
          if (1 < (int)(uVar8 - uVar4)) {
            iVar11 = uVar8 - uVar4;
          }
          fVar12 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar12 = (fVar13 - (float)uVar4) / (float)iVar11;
          }
          FUN_1478fb73a(&local_88,pfVar10,pfVar10 + 3,
                        (longlong)pfVar10 + (longlong)(int)(uVar5 << 2) + 0x18);
          fVar22 = fStack_7c;
          fVar21 = fStack_80;
          fVar20 = fStack_84;
          fVar13 = local_88;
          FUN_1478fb73a(&local_88,pfVar10,pfVar10 + 3,
                        (longlong)pfVar10 + (longlong)(int)(uVar7 << 2) + 0x18);
          uVar7 = -(uint)(0.0 <= fStack_7c * fVar22 +
                                 fVar13 * local_88 + fVar20 * fStack_84 + fVar21 * fStack_80);
          fVar18 = (float)(~uVar7 & (uint)-(1.0 - fVar12) | (uint)(1.0 - fVar12) & uVar7);
          fVar19 = fVar18 * fVar13 + fVar12 * local_88;
          fVar20 = fVar18 * fVar20 + fVar12 * fStack_84;
          fVar21 = fVar18 * fVar21 + fVar12 * fStack_80;
          fVar22 = fVar18 * fVar22 + fVar12 * fStack_7c;
          fVar12 = fVar19 * fVar19 + fVar20 * fVar20;
          fVar13 = fVar21 * fVar21 + fVar22 * fVar22;
          auVar15._0_4_ = fVar13 + fVar12;
          auVar15._4_4_ = fVar13 + fVar12;
          auVar15._8_4_ = fVar12 + fVar13;
          auVar15._12_4_ = fVar12 + fVar13;
          auVar16 = sqrtps(auVar15,auVar15);
          auVar16 = divps(_DAT_1499314a0,auVar16);
          auVar17._0_4_ = auVar16._0_4_ * fVar19;
          auVar17._4_4_ = auVar16._4_4_ * fVar20;
          auVar17._8_4_ = auVar16._8_4_ * fVar21;
          auVar17._12_4_ = auVar16._12_4_ * fVar22;
          auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
          auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
          auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
          auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
          auVar16 = blendvps(_DAT_149932320,auVar17,auVar16);
          fStack_84 = auVar16._4_4_;
          fStack_80 = auVar16._8_4_;
          dVar14 = (double)auVar16._12_4_;
          goto LAB_1478eab43;
        }
      }
    }
    FUN_1478fb73a(&local_88,pfVar10,pfVar10 + 3,
                  (longlong)pfVar10 + (longlong)(int)(uVar7 << 2) + 0x18);
    auVar16 = ZEXT416((uint)local_88);
    dVar14 = (double)fStack_7c;
  }
LAB_1478eab43:
  *param_2 = (double)auVar16._0_4_;
  param_2[1] = (double)fStack_84;
  auVar3._8_4_ = SUB84(dVar14,0);
  auVar3._0_8_ = (double)fStack_80;
  auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478eae94 FUN_1478eae94 body=1013 status=ok
// SIG undefined FUN_1478eae94(void)

void FUN_1478eae94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = *(longlong *)(param_3 + 0x10);
  lVar8 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)(param_4 << 2) * 4);
  iVar9 = *(int *)(*(longlong *)(lVar3 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
  pfVar1 = (float *)(*(longlong *)(lVar3 + 0x38) + lVar8);
  uVar10 = 0;
  pfVar6 = (float *)(*(longlong *)(lVar3 + 0x38) + lVar8 + 0x18);
  pfVar5 = pfVar1;
  if (1 < (longlong)iVar9) {
    fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    pfVar5 = pfVar6;
    if ((0.0 < fVar16) && (uVar10 = iVar9 - 1, fVar16 < 1.0)) {
      uVar14 = (longlong)pfVar6 + (longlong)iVar9 * 4 + 3 & 0xfffffffffffffffc;
      iVar9 = *(int *)(lVar3 + 8);
      fVar15 = (float)(iVar9 + -1) * fVar16;
      uVar11 = (uint)fVar15;
      uVar7 = iVar9 - 2U;
      if ((int)uVar11 < (int)(iVar9 - 2U)) {
        uVar7 = uVar11;
      }
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      uVar11 = (int)((float)(int)uVar10 * fVar16);
      if ((int)uVar10 <= (int)((float)(int)uVar10 * fVar16)) {
        uVar11 = uVar10;
      }
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar11 < 1) {
        uVar12 = 0;
      }
      if (iVar9 < 0x100) {
        if (uVar7 < *(byte *)(uVar14 + uVar12)) {
          do {
            if ((longlong)uVar12 < 2) {
              uVar12 = 0;
              break;
            }
            pbVar2 = (byte *)((uVar14 - 1) + uVar12);
            uVar12 = uVar12 - 1;
          } while (uVar7 < *pbVar2);
        }
        else {
          do {
            if (uVar10 == uVar12) {
              uVar12 = (ulonglong)uVar10;
              goto LAB_1478eb037;
            }
            pbVar2 = (byte *)(uVar14 + 1 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pbVar2 <= uVar7);
          uVar12 = (ulonglong)((int)uVar12 - 1);
        }
LAB_1478eb037:
        uVar11 = (uint)uVar12;
        uVar7 = (uint)*(byte *)(uVar14 + (longlong)(int)uVar11);
        if ((int)uVar11 < (int)uVar10) {
          uVar10 = uVar11 + 1;
        }
        uVar13 = (uint)*(byte *)(uVar14 + (longlong)(int)uVar10);
      }
      else {
        if (uVar7 < *(ushort *)(uVar14 + uVar12 * 2)) {
          do {
            if ((longlong)uVar12 < 2) {
              uVar12 = 0;
              break;
            }
            lVar3 = uVar12 * 2;
            uVar12 = uVar12 - 1;
          } while (uVar7 < *(ushort *)((uVar14 - 2) + lVar3));
        }
        else {
          do {
            if (uVar10 == uVar12) {
              uVar12 = (ulonglong)uVar10;
              goto LAB_1478eb018;
            }
            lVar3 = uVar12 * 2;
            uVar12 = uVar12 + 1;
          } while (*(ushort *)(uVar14 + 2 + lVar3) <= uVar7);
          uVar12 = (ulonglong)((int)uVar12 - 1);
        }
LAB_1478eb018:
        uVar11 = (uint)uVar12;
        uVar7 = (uint)*(ushort *)(uVar14 + (longlong)(int)uVar11 * 2);
        if ((int)uVar11 < (int)uVar10) {
          uVar10 = uVar11 + 1;
        }
        uVar13 = (uint)*(ushort *)(uVar14 + (longlong)(int)uVar10 * 2);
      }
      if (uVar11 != uVar10) {
        iVar9 = 1;
        if (1 < (int)(uVar13 - uVar7)) {
          iVar9 = uVar13 - uVar7;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar15 - (float)uVar7) / (float)iVar9;
        }
        fVar15 = pfVar6[(int)uVar11];
        fVar17 = ((float)(int)(((uint)fVar15 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1;
        fVar18 = ((float)(int)(((uint)fVar15 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] +
                 pfVar1[1];
        fVar19 = ((float)(int)(((uint)fVar15 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2];
        fVar15 = pfVar6[(int)uVar10];
        fVar19 = ((((float)(int)(((uint)fVar15 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2])
                 - fVar19) * fVar16 + fVar19;
        fVar18 = ((((float)(int)(((uint)fVar15 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] +
                  pfVar1[1]) - fVar18) * fVar16 + fVar18;
        fVar17 = ((((float)(int)(((uint)fVar15 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1) -
                 fVar17) * fVar16 + fVar17;
        goto LAB_1478eb0d8;
      }
    }
  }
  fVar16 = pfVar5[(int)uVar10];
  fVar17 = ((float)(int)(((uint)fVar16 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1;
  fVar18 = ((float)(int)(((uint)fVar16 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] + pfVar1[1];
  fVar19 = ((float)(int)(((uint)fVar16 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2];
LAB_1478eb0d8:
  auVar4._8_4_ = SUB84((double)fVar18,0);
  auVar4._0_8_ = (double)fVar17;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar4;
  *(double *)(param_2 + 0x30) = (double)fVar19;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478eb28a FUN_1478eb28a body=1017 status=ok
// SIG undefined FUN_1478eb28a(void)

void FUN_1478eb28a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar3 = *(longlong *)(param_3 + 0x10);
  lVar6 = (longlong)param_4 * (longlong)*(int *)(lVar3 + 0x30);
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x20) + lVar6 * 4);
  iVar10 = *(int *)(*(longlong *)(lVar3 + 0x20) + 4 + lVar6 * 4);
  pfVar1 = (float *)(*(longlong *)(lVar3 + 0x38) + lVar9);
  uVar11 = 0;
  pfVar7 = (float *)(*(longlong *)(lVar3 + 0x38) + lVar9 + 0x18);
  pfVar5 = pfVar1;
  if (1 < (longlong)iVar10) {
    fVar17 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    pfVar5 = pfVar7;
    if ((0.0 < fVar17) && (uVar11 = iVar10 - 1, fVar17 < 1.0)) {
      uVar15 = (longlong)pfVar7 + (longlong)iVar10 * 4 + 3 & 0xfffffffffffffffc;
      iVar10 = *(int *)(lVar3 + 8);
      fVar16 = (float)(iVar10 + -1) * fVar17;
      uVar12 = (uint)fVar16;
      uVar8 = iVar10 - 2U;
      if ((int)uVar12 < (int)(iVar10 - 2U)) {
        uVar8 = uVar12;
      }
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      uVar12 = (int)((float)(int)uVar11 * fVar17);
      if ((int)uVar11 <= (int)((float)(int)uVar11 * fVar17)) {
        uVar12 = uVar11;
      }
      uVar13 = (ulonglong)uVar12;
      if ((int)uVar12 < 1) {
        uVar13 = 0;
      }
      if (iVar10 < 0x100) {
        if (uVar8 < *(byte *)(uVar15 + uVar13)) {
          do {
            if ((longlong)uVar13 < 2) {
              uVar13 = 0;
              break;
            }
            pbVar2 = (byte *)((uVar15 - 1) + uVar13);
            uVar13 = uVar13 - 1;
          } while (uVar8 < *pbVar2);
        }
        else {
          do {
            if (uVar11 == uVar13) {
              uVar13 = (ulonglong)uVar11;
              goto LAB_1478eb431;
            }
            pbVar2 = (byte *)(uVar15 + 1 + uVar13);
            uVar13 = uVar13 + 1;
          } while (*pbVar2 <= uVar8);
          uVar13 = (ulonglong)((int)uVar13 - 1);
        }
LAB_1478eb431:
        uVar12 = (uint)uVar13;
        uVar8 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar12);
        if ((int)uVar12 < (int)uVar11) {
          uVar11 = uVar12 + 1;
        }
        uVar14 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar11);
      }
      else {
        if (uVar8 < *(ushort *)(uVar15 + uVar13 * 2)) {
          do {
            if ((longlong)uVar13 < 2) {
              uVar13 = 0;
              break;
            }
            lVar3 = uVar13 * 2;
            uVar13 = uVar13 - 1;
          } while (uVar8 < *(ushort *)((uVar15 - 2) + lVar3));
        }
        else {
          do {
            if (uVar11 == uVar13) {
              uVar13 = (ulonglong)uVar11;
              goto LAB_1478eb412;
            }
            lVar3 = uVar13 * 2;
            uVar13 = uVar13 + 1;
          } while (*(ushort *)(uVar15 + 2 + lVar3) <= uVar8);
          uVar13 = (ulonglong)((int)uVar13 - 1);
        }
LAB_1478eb412:
        uVar12 = (uint)uVar13;
        uVar8 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar12 * 2);
        if ((int)uVar12 < (int)uVar11) {
          uVar11 = uVar12 + 1;
        }
        uVar14 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar11 * 2);
      }
      if (uVar12 != uVar11) {
        iVar10 = 1;
        if (1 < (int)(uVar14 - uVar8)) {
          iVar10 = uVar14 - uVar8;
        }
        fVar17 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar17 = (fVar16 - (float)uVar8) / (float)iVar10;
        }
        fVar16 = pfVar7[(int)uVar12];
        fVar18 = ((float)(int)(((uint)fVar16 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1;
        fVar19 = ((float)(int)(((uint)fVar16 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] +
                 pfVar1[1];
        fVar20 = ((float)(int)(((uint)fVar16 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2];
        fVar16 = pfVar7[(int)uVar11];
        fVar20 = ((((float)(int)(((uint)fVar16 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2])
                 - fVar20) * fVar17 + fVar20;
        fVar19 = ((((float)(int)(((uint)fVar16 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] +
                  pfVar1[1]) - fVar19) * fVar17 + fVar19;
        fVar18 = ((((float)(int)(((uint)fVar16 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1) -
                 fVar18) * fVar17 + fVar18;
        goto LAB_1478eb4d2;
      }
    }
  }
  fVar17 = pfVar5[(int)uVar11];
  fVar18 = ((float)(int)(((uint)fVar17 & 0x3ff) - 0x1ff) / 511.0) * pfVar1[3] + *pfVar1;
  fVar19 = ((float)(int)(((uint)fVar17 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar1[4] + pfVar1[1];
  fVar20 = ((float)(int)(((uint)fVar17 >> 0x15) - 0x3ff) / 1023.0) * pfVar1[5] + pfVar1[2];
LAB_1478eb4d2:
  auVar4._8_4_ = SUB84((double)fVar19,0);
  auVar4._0_8_ = (double)fVar18;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar4;
  *(double *)(param_2 + 0x50) = (double)fVar20;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478eb684 FUN_1478eb684 body=999 status=ok
// SIG undefined FUN_1478eb684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478eb684(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar11 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar8 = (float *)((longlong)
                     *(int *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(lVar2 + 0x38));
  if ((longlong)iVar11 == 1) {
    fVar12 = *pfVar8;
    auVar16 = ZEXT416((uint)fVar12);
    fStack_74 = pfVar8[1];
    fStack_70 = pfVar8[2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fStack_74 * fStack_74) - fStack_70 * fStack_70;
    dVar14 = 0.0;
    if (0.0 < fVar12) {
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      dVar14 = (double)fVar12;
    }
  }
  else {
    uVar7 = 0;
    if (1 < iVar11) {
      fVar12 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      uVar7 = 0;
      if ((0.0 < fVar12) && (uVar7 = iVar11 - 1, fVar12 < 1.0)) {
        uVar10 = (longlong)pfVar8 + (longlong)iVar11 * 4 + 3 & 0xfffffffffffffffc;
        iVar11 = *(int *)(lVar2 + 8);
        fVar13 = (float)(iVar11 + -1) * fVar12;
        uVar4 = (uint)fVar13;
        uVar5 = iVar11 - 2U;
        if ((int)uVar4 < (int)(iVar11 - 2U)) {
          uVar5 = uVar4;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uVar4 = (int)((float)(int)uVar7 * fVar12);
        if ((int)uVar7 <= (int)((float)(int)uVar7 * fVar12)) {
          uVar4 = uVar7;
        }
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 1) {
          uVar6 = 0;
        }
        if (iVar11 < 0x100) {
          if (uVar5 < *(byte *)(uVar10 + uVar6)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              pbVar1 = (byte *)((uVar10 - 1) + uVar6);
              uVar6 = uVar6 - 1;
            } while (uVar5 < *pbVar1);
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478eb8d7;
              }
              pbVar1 = (byte *)(uVar10 + 1 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pbVar1 <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478eb8d7:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(byte *)(uVar10 + (longlong)(int)uVar5);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar9 = (uint)*(byte *)(uVar10 + (longlong)(int)uVar7);
        }
        else {
          if (uVar5 < *(ushort *)(uVar10 + uVar6 * 2)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 - 1;
            } while (uVar5 < *(ushort *)((uVar10 - 2) + lVar2));
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478eb8b9;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 + 1;
            } while (*(ushort *)(uVar10 + 2 + lVar2) <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478eb8b9:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(ushort *)(uVar10 + (longlong)(int)uVar5 * 2);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar9 = (uint)*(ushort *)(uVar10 + (longlong)(int)uVar7 * 2);
        }
        if (uVar5 != uVar7) {
          iVar11 = 1;
          if (1 < (int)(uVar9 - uVar4)) {
            iVar11 = uVar9 - uVar4;
          }
          fVar12 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar12 = (fVar13 - (float)uVar4) / (float)iVar11;
          }
          FUN_1478fb84a(&local_78,(longlong)(int)(uVar5 << 2) + (longlong)pfVar8);
          fVar22 = fStack_6c;
          fVar21 = fStack_70;
          fVar20 = fStack_74;
          fVar13 = local_78;
          FUN_1478fb84a(&local_78,(longlong)(int)(uVar7 << 2) + (longlong)pfVar8);
          uVar7 = -(uint)(0.0 <= fStack_6c * fVar22 +
                                 fVar13 * local_78 + fVar20 * fStack_74 + fVar21 * fStack_70);
          fVar18 = (float)(~uVar7 & (uint)-(1.0 - fVar12) | (uint)(1.0 - fVar12) & uVar7);
          fVar19 = fVar18 * fVar13 + fVar12 * local_78;
          fVar20 = fVar18 * fVar20 + fVar12 * fStack_74;
          fVar21 = fVar18 * fVar21 + fVar12 * fStack_70;
          fVar22 = fVar18 * fVar22 + fVar12 * fStack_6c;
          fVar12 = fVar19 * fVar19 + fVar20 * fVar20;
          fVar13 = fVar21 * fVar21 + fVar22 * fVar22;
          auVar15._0_4_ = fVar13 + fVar12;
          auVar15._4_4_ = fVar13 + fVar12;
          auVar15._8_4_ = fVar12 + fVar13;
          auVar15._12_4_ = fVar12 + fVar13;
          auVar16 = sqrtps(auVar15,auVar15);
          auVar16 = divps(_DAT_1499314a0,auVar16);
          auVar17._0_4_ = auVar16._0_4_ * fVar19;
          auVar17._4_4_ = auVar16._4_4_ * fVar20;
          auVar17._8_4_ = auVar16._8_4_ * fVar21;
          auVar17._12_4_ = auVar16._12_4_ * fVar22;
          auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
          auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
          auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
          auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
          auVar16 = blendvps(_DAT_149932320,auVar17,auVar16);
          fStack_74 = auVar16._4_4_;
          fStack_70 = auVar16._8_4_;
          dVar14 = (double)auVar16._12_4_;
          goto LAB_1478eb737;
        }
      }
    }
    FUN_1478fb84a(&local_78,(longlong)pfVar8 + (longlong)(int)(uVar7 << 2));
    auVar16 = ZEXT416((uint)local_78);
    dVar14 = (double)fStack_6c;
  }
LAB_1478eb737:
  *param_2 = (double)auVar16._0_4_;
  param_2[1] = (double)fStack_74;
  auVar3._8_4_ = SUB84(dVar14,0);
  auVar3._0_8_ = (double)fStack_70;
  auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478eba6c FUN_1478eba6c body=732 status=ok
// SIG undefined FUN_1478eba6c(void)

void FUN_1478eba6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (fVar14 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
    if ((1 < iVar6) && (0.0 < fVar14)) {
      uVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(param_4 << 2) * 4) +
              *(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      uVar5 = iVar6 - 1;
      iVar6 = *(int *)(lVar2 + 8);
      fVar11 = (float)(iVar6 + -1) * fVar14;
      uVar7 = (uint)fVar11;
      uVar9 = iVar6 - 2U;
      if ((int)uVar7 < (int)(iVar6 - 2U)) {
        uVar9 = uVar7;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar7 = (int)((float)(int)uVar5 * fVar14);
      if ((int)uVar5 <= (int)((float)(int)uVar5 * fVar14)) {
        uVar7 = uVar5;
      }
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar8 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar4 + uVar8)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar4 - 1) + uVar8);
            uVar8 = uVar8 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar5 == uVar8) {
              uVar8 = (ulonglong)uVar5;
              goto LAB_1478ebbee;
            }
            pbVar1 = (byte *)(uVar4 + 1 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pbVar1 <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ebbee:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(byte *)(uVar4 + (longlong)(int)uVar7);
        uVar9 = uVar7 + 1;
        if ((int)uVar5 <= (int)uVar7) {
          uVar9 = uVar5;
        }
        uVar5 = (uint)*(byte *)(uVar4 + (longlong)(int)uVar9);
      }
      else {
        if (uVar9 < *(ushort *)(uVar4 + uVar8 * 2)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 - 1;
          } while (uVar9 < *(ushort *)((uVar4 - 2) + lVar2));
        }
        else {
          do {
            if (uVar5 == uVar8) {
              uVar8 = (ulonglong)uVar5;
              goto LAB_1478ebbd0;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 + 1;
          } while (*(ushort *)(uVar4 + 2 + lVar2) <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ebbd0:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(ushort *)(uVar4 + (longlong)(int)uVar7 * 2);
        uVar9 = uVar7 + 1;
        if ((int)uVar5 <= (int)uVar7) {
          uVar9 = uVar5;
        }
        uVar5 = (uint)*(ushort *)(uVar4 + (longlong)(int)uVar9 * 2);
      }
      if (uVar7 != uVar9) {
        iVar6 = 1;
        if (1 < (int)(uVar5 - uVar10)) {
          iVar6 = uVar5 - uVar10;
        }
        fVar14 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar14 = (fVar11 - (float)uVar10) / (float)iVar6;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar13 = DAT_14c846338;
        fVar12 = DAT_14c846330._4_4_;
        fVar11 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar13 = (DAT_14c846338 - fVar13) * fVar14 + fVar13;
        fVar12 = (DAT_14c846330._4_4_ - fVar12) * fVar14 + fVar12;
        fVar11 = ((float)DAT_14c846330 - fVar11) * fVar14 + fVar11;
        goto LAB_1478ebc43;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                L"%i: unknown or unsupported animation compression format",4);
  fVar11 = (float)DAT_14c846330;
  fVar13 = DAT_14c846338;
  fVar12 = DAT_14c846330._4_4_;
LAB_1478ebc43:
  auVar3._8_4_ = SUB84((double)fVar12,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
  *(double *)(param_2 + 0x30) = (double)fVar13;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478ebd48 FUN_1478ebd48 body=736 status=ok
// SIG undefined FUN_1478ebd48(void)

void FUN_1478ebd48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar2 + 0x30);
    iVar7 = *(int *)(*(longlong *)(lVar2 + 0x20) + 4 + lVar4 * 4);
    if ((1 < iVar7) && (0.0 < fVar15)) {
      uVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + lVar4 * 4) +
              *(longlong *)(lVar2 + 0x38) + (longlong)iVar7 * 0xc + 3U & 0xfffffffffffffffc;
      uVar6 = iVar7 - 1;
      iVar7 = *(int *)(lVar2 + 8);
      fVar12 = (float)(iVar7 + -1) * fVar15;
      uVar8 = (uint)fVar12;
      uVar10 = iVar7 - 2U;
      if ((int)uVar8 < (int)(iVar7 - 2U)) {
        uVar10 = uVar8;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      uVar8 = (int)((float)(int)uVar6 * fVar15);
      if ((int)uVar6 <= (int)((float)(int)uVar6 * fVar15)) {
        uVar8 = uVar6;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      if (iVar7 < 0x100) {
        if (uVar10 < *(byte *)(uVar5 + uVar9)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar5 - 1) + uVar9);
            uVar9 = uVar9 - 1;
          } while (uVar10 < *pbVar1);
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ebece;
            }
            pbVar1 = (byte *)(uVar5 + 1 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pbVar1 <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ebece:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar8);
        uVar10 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar10 = uVar6;
        }
        uVar6 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar10);
      }
      else {
        if (uVar10 < *(ushort *)(uVar5 + uVar9 * 2)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 - 1;
          } while (uVar10 < *(ushort *)((uVar5 - 2) + lVar2));
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ebeb0;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 + 1;
          } while (*(ushort *)(uVar5 + 2 + lVar2) <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ebeb0:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar8 * 2);
        uVar10 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar10 = uVar6;
        }
        uVar6 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar10 * 2);
      }
      if (uVar8 != uVar10) {
        iVar7 = 1;
        if (1 < (int)(uVar6 - uVar11)) {
          iVar7 = uVar6 - uVar11;
        }
        fVar15 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar15 = (fVar12 - (float)uVar11) / (float)iVar7;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar14 = DAT_14c846338;
        fVar13 = DAT_14c846330._4_4_;
        fVar12 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar14 = (DAT_14c846338 - fVar14) * fVar15 + fVar14;
        fVar13 = (DAT_14c846330._4_4_ - fVar13) * fVar15 + fVar13;
        fVar12 = ((float)DAT_14c846330 - fVar12) * fVar15 + fVar12;
        goto LAB_1478ebf23;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                L"%i: unknown or unsupported animation compression format",4);
  fVar12 = (float)DAT_14c846330;
  fVar14 = DAT_14c846338;
  fVar13 = DAT_14c846330._4_4_;
LAB_1478ebf23:
  auVar3._8_4_ = SUB84((double)fVar13,0);
  auVar3._0_8_ = (double)fVar12;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar3;
  *(double *)(param_2 + 0x50) = (double)fVar14;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478ec028 FUN_1478ec028 body=999 status=ok
// SIG undefined FUN_1478ec028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478ec028(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar11 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar8 = (float *)((longlong)
                     *(int *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(lVar2 + 0x38));
  if ((longlong)iVar11 == 1) {
    fVar12 = *pfVar8;
    auVar16 = ZEXT416((uint)fVar12);
    fStack_74 = pfVar8[1];
    fStack_70 = pfVar8[2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fStack_74 * fStack_74) - fStack_70 * fStack_70;
    dVar14 = 0.0;
    if (0.0 < fVar12) {
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      dVar14 = (double)fVar12;
    }
  }
  else {
    uVar7 = 0;
    if (1 < iVar11) {
      fVar12 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      uVar7 = 0;
      if ((0.0 < fVar12) && (uVar7 = iVar11 - 1, fVar12 < 1.0)) {
        uVar10 = (longlong)pfVar8 + (longlong)iVar11 * 4 + 3 & 0xfffffffffffffffc;
        iVar11 = *(int *)(lVar2 + 8);
        fVar13 = (float)(iVar11 + -1) * fVar12;
        uVar4 = (uint)fVar13;
        uVar5 = iVar11 - 2U;
        if ((int)uVar4 < (int)(iVar11 - 2U)) {
          uVar5 = uVar4;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uVar4 = (int)((float)(int)uVar7 * fVar12);
        if ((int)uVar7 <= (int)((float)(int)uVar7 * fVar12)) {
          uVar4 = uVar7;
        }
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 1) {
          uVar6 = 0;
        }
        if (iVar11 < 0x100) {
          if (uVar5 < *(byte *)(uVar10 + uVar6)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              pbVar1 = (byte *)((uVar10 - 1) + uVar6);
              uVar6 = uVar6 - 1;
            } while (uVar5 < *pbVar1);
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478ec27b;
              }
              pbVar1 = (byte *)(uVar10 + 1 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pbVar1 <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478ec27b:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(byte *)(uVar10 + (longlong)(int)uVar5);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar9 = (uint)*(byte *)(uVar10 + (longlong)(int)uVar7);
        }
        else {
          if (uVar5 < *(ushort *)(uVar10 + uVar6 * 2)) {
            do {
              if ((longlong)uVar6 < 2) {
                uVar6 = 0;
                break;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 - 1;
            } while (uVar5 < *(ushort *)((uVar10 - 2) + lVar2));
          }
          else {
            do {
              if (uVar7 == uVar6) {
                uVar6 = (ulonglong)uVar7;
                goto LAB_1478ec25d;
              }
              lVar2 = uVar6 * 2;
              uVar6 = uVar6 + 1;
            } while (*(ushort *)(uVar10 + 2 + lVar2) <= uVar5);
            uVar6 = (ulonglong)((int)uVar6 - 1);
          }
LAB_1478ec25d:
          uVar5 = (uint)uVar6;
          uVar4 = (uint)*(ushort *)(uVar10 + (longlong)(int)uVar5 * 2);
          if ((int)uVar5 < (int)uVar7) {
            uVar7 = uVar5 + 1;
          }
          uVar9 = (uint)*(ushort *)(uVar10 + (longlong)(int)uVar7 * 2);
        }
        if (uVar5 != uVar7) {
          iVar11 = 1;
          if (1 < (int)(uVar9 - uVar4)) {
            iVar11 = uVar9 - uVar4;
          }
          fVar12 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar12 = (fVar13 - (float)uVar4) / (float)iVar11;
          }
          FUN_1478fb932(&local_78,(longlong)(int)(uVar5 << 2) + (longlong)pfVar8);
          fVar22 = fStack_6c;
          fVar21 = fStack_70;
          fVar20 = fStack_74;
          fVar13 = local_78;
          FUN_1478fb932(&local_78,(longlong)(int)(uVar7 << 2) + (longlong)pfVar8);
          uVar7 = -(uint)(0.0 <= fStack_6c * fVar22 +
                                 fVar13 * local_78 + fVar20 * fStack_74 + fVar21 * fStack_70);
          fVar18 = (float)(~uVar7 & (uint)-(1.0 - fVar12) | (uint)(1.0 - fVar12) & uVar7);
          fVar19 = fVar18 * fVar13 + fVar12 * local_78;
          fVar20 = fVar18 * fVar20 + fVar12 * fStack_74;
          fVar21 = fVar18 * fVar21 + fVar12 * fStack_70;
          fVar22 = fVar18 * fVar22 + fVar12 * fStack_6c;
          fVar12 = fVar19 * fVar19 + fVar20 * fVar20;
          fVar13 = fVar21 * fVar21 + fVar22 * fVar22;
          auVar15._0_4_ = fVar13 + fVar12;
          auVar15._4_4_ = fVar13 + fVar12;
          auVar15._8_4_ = fVar12 + fVar13;
          auVar15._12_4_ = fVar12 + fVar13;
          auVar16 = sqrtps(auVar15,auVar15);
          auVar16 = divps(_DAT_1499314a0,auVar16);
          auVar17._0_4_ = auVar16._0_4_ * fVar19;
          auVar17._4_4_ = auVar16._4_4_ * fVar20;
          auVar17._8_4_ = auVar16._8_4_ * fVar21;
          auVar17._12_4_ = auVar16._12_4_ * fVar22;
          auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
          auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
          auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
          auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
          auVar16 = blendvps(_DAT_149932320,auVar17,auVar16);
          fStack_74 = auVar16._4_4_;
          fStack_70 = auVar16._8_4_;
          dVar14 = (double)auVar16._12_4_;
          goto LAB_1478ec0db;
        }
      }
    }
    FUN_1478fb932(&local_78,(longlong)pfVar8 + (longlong)(int)(uVar7 << 2));
    auVar16 = ZEXT416((uint)local_78);
    dVar14 = (double)fStack_6c;
  }
LAB_1478ec0db:
  *param_2 = (double)auVar16._0_4_;
  param_2[1] = (double)fStack_74;
  auVar3._8_4_ = SUB84(dVar14,0);
  auVar3._0_8_ = (double)fStack_70;
  auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478ec410 FUN_1478ec410 body=732 status=ok
// SIG undefined FUN_1478ec410(void)

void FUN_1478ec410(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (fVar14 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
    if ((1 < iVar6) && (0.0 < fVar14)) {
      uVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(param_4 << 2) * 4) +
              *(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 0xc + 3U & 0xfffffffffffffffc;
      uVar5 = iVar6 - 1;
      iVar6 = *(int *)(lVar2 + 8);
      fVar11 = (float)(iVar6 + -1) * fVar14;
      uVar7 = (uint)fVar11;
      uVar9 = iVar6 - 2U;
      if ((int)uVar7 < (int)(iVar6 - 2U)) {
        uVar9 = uVar7;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar7 = (int)((float)(int)uVar5 * fVar14);
      if ((int)uVar5 <= (int)((float)(int)uVar5 * fVar14)) {
        uVar7 = uVar5;
      }
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar8 = 0;
      }
      if (iVar6 < 0x100) {
        if (uVar9 < *(byte *)(uVar4 + uVar8)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar4 - 1) + uVar8);
            uVar8 = uVar8 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar5 == uVar8) {
              uVar8 = (ulonglong)uVar5;
              goto LAB_1478ec592;
            }
            pbVar1 = (byte *)(uVar4 + 1 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pbVar1 <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ec592:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(byte *)(uVar4 + (longlong)(int)uVar7);
        uVar9 = uVar7 + 1;
        if ((int)uVar5 <= (int)uVar7) {
          uVar9 = uVar5;
        }
        uVar5 = (uint)*(byte *)(uVar4 + (longlong)(int)uVar9);
      }
      else {
        if (uVar9 < *(ushort *)(uVar4 + uVar8 * 2)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 - 1;
          } while (uVar9 < *(ushort *)((uVar4 - 2) + lVar2));
        }
        else {
          do {
            if (uVar5 == uVar8) {
              uVar8 = (ulonglong)uVar5;
              goto LAB_1478ec574;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 + 1;
          } while (*(ushort *)(uVar4 + 2 + lVar2) <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ec574:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(ushort *)(uVar4 + (longlong)(int)uVar7 * 2);
        uVar9 = uVar7 + 1;
        if ((int)uVar5 <= (int)uVar7) {
          uVar9 = uVar5;
        }
        uVar5 = (uint)*(ushort *)(uVar4 + (longlong)(int)uVar9 * 2);
      }
      if (uVar7 != uVar9) {
        iVar6 = 1;
        if (1 < (int)(uVar5 - uVar10)) {
          iVar6 = uVar5 - uVar10;
        }
        fVar14 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar14 = (fVar11 - (float)uVar10) / (float)iVar6;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar13 = DAT_14c846338;
        fVar12 = DAT_14c846330._4_4_;
        fVar11 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar13 = (DAT_14c846338 - fVar13) * fVar14 + fVar13;
        fVar12 = (DAT_14c846330._4_4_ - fVar12) * fVar14 + fVar12;
        fVar11 = ((float)DAT_14c846330 - fVar11) * fVar14 + fVar11;
        goto LAB_1478ec5e7;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                L"%i: unknown or unsupported animation compression format",5);
  fVar11 = (float)DAT_14c846330;
  fVar13 = DAT_14c846338;
  fVar12 = DAT_14c846330._4_4_;
LAB_1478ec5e7:
  auVar3._8_4_ = SUB84((double)fVar12,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
  *(double *)(param_2 + 0x30) = (double)fVar13;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478ec6ec FUN_1478ec6ec body=736 status=ok
// SIG undefined FUN_1478ec6ec(void)

void FUN_1478ec6ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar2 + 0x30);
    iVar7 = *(int *)(*(longlong *)(lVar2 + 0x20) + 4 + lVar4 * 4);
    if ((1 < iVar7) && (0.0 < fVar15)) {
      uVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + lVar4 * 4) +
              *(longlong *)(lVar2 + 0x38) + (longlong)iVar7 * 0xc + 3U & 0xfffffffffffffffc;
      uVar6 = iVar7 - 1;
      iVar7 = *(int *)(lVar2 + 8);
      fVar12 = (float)(iVar7 + -1) * fVar15;
      uVar8 = (uint)fVar12;
      uVar10 = iVar7 - 2U;
      if ((int)uVar8 < (int)(iVar7 - 2U)) {
        uVar10 = uVar8;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      uVar8 = (int)((float)(int)uVar6 * fVar15);
      if ((int)uVar6 <= (int)((float)(int)uVar6 * fVar15)) {
        uVar8 = uVar6;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      if (iVar7 < 0x100) {
        if (uVar10 < *(byte *)(uVar5 + uVar9)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar5 - 1) + uVar9);
            uVar9 = uVar9 - 1;
          } while (uVar10 < *pbVar1);
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ec872;
            }
            pbVar1 = (byte *)(uVar5 + 1 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pbVar1 <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ec872:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar8);
        uVar10 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar10 = uVar6;
        }
        uVar6 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar10);
      }
      else {
        if (uVar10 < *(ushort *)(uVar5 + uVar9 * 2)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 - 1;
          } while (uVar10 < *(ushort *)((uVar5 - 2) + lVar2));
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ec854;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 + 1;
          } while (*(ushort *)(uVar5 + 2 + lVar2) <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ec854:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar8 * 2);
        uVar10 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar10 = uVar6;
        }
        uVar6 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar10 * 2);
      }
      if (uVar8 != uVar10) {
        iVar7 = 1;
        if (1 < (int)(uVar6 - uVar11)) {
          iVar7 = uVar6 - uVar11;
        }
        fVar15 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar15 = (fVar12 - (float)uVar11) / (float)iVar7;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar14 = DAT_14c846338;
        fVar13 = DAT_14c846330._4_4_;
        fVar12 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar14 = (DAT_14c846338 - fVar14) * fVar15 + fVar14;
        fVar13 = (DAT_14c846330._4_4_ - fVar13) * fVar15 + fVar13;
        fVar12 = ((float)DAT_14c846330 - fVar12) * fVar15 + fVar12;
        goto LAB_1478ec8c7;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                L"%i: unknown or unsupported animation compression format",5);
  fVar12 = (float)DAT_14c846330;
  fVar14 = DAT_14c846338;
  fVar13 = DAT_14c846330._4_4_;
LAB_1478ec8c7:
  auVar3._8_4_ = SUB84((double)fVar13,0);
  auVar3._0_8_ = (double)fVar12;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar3;
  *(double *)(param_2 + 0x50) = (double)fVar14;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478ec9cc FUN_1478ec9cc body=865 status=ok
// SIG undefined FUN_1478ec9cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478ec9cc(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar4 = (float *)((longlong)
                     *(int *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(lVar2 + 0x38));
  if (iVar7 == 1) {
    fVar12 = *pfVar4;
    auVar20 = ZEXT416((uint)fVar12);
    fVar14 = pfVar4[1];
    fVar13 = pfVar4[2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fVar14 * fVar14) - fVar13 * fVar13;
    dVar15 = 0.0;
    if (0.0 < fVar12) {
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      dVar15 = (double)fVar12;
    }
  }
  else {
    fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
             (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    if (((fVar14 < 1.0) && (1 < iVar7)) && (0.0 < fVar14)) {
      uVar5 = (longlong)pfVar4 + 3U & 0xfffffffffffffffc;
      uVar6 = iVar7 - 1;
      iVar7 = *(int *)(lVar2 + 8);
      fVar13 = (float)(iVar7 + -1) * fVar14;
      uVar8 = (uint)fVar13;
      uVar11 = iVar7 - 2U;
      if ((int)uVar8 < (int)(iVar7 - 2U)) {
        uVar11 = uVar8;
      }
      if ((int)uVar11 < 1) {
        uVar11 = 0;
      }
      uVar8 = (int)((float)(int)uVar6 * fVar14);
      if ((int)uVar6 <= (int)((float)(int)uVar6 * fVar14)) {
        uVar8 = uVar6;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      if (iVar7 < 0x100) {
        if (uVar11 < *(byte *)(uVar5 + uVar9)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar5 - 1) + uVar9);
            uVar9 = uVar9 - 1;
          } while (uVar11 < *pbVar1);
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ecbae;
            }
            pbVar1 = (byte *)(uVar5 + 1 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pbVar1 <= uVar11);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ecbae:
        uVar8 = (uint)uVar9;
        uVar10 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar8);
        uVar11 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar11 = uVar6;
        }
        uVar6 = (uint)*(byte *)(uVar5 + (longlong)(int)uVar11);
      }
      else {
        if (uVar11 < *(ushort *)(uVar5 + uVar9 * 2)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 - 1;
          } while (uVar11 < *(ushort *)((uVar5 - 2) + lVar2));
        }
        else {
          do {
            if (uVar6 == uVar9) {
              uVar9 = (ulonglong)uVar6;
              goto LAB_1478ecb90;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 + 1;
          } while (*(ushort *)(uVar5 + 2 + lVar2) <= uVar11);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ecb90:
        uVar8 = (uint)uVar9;
        uVar10 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar8 * 2);
        uVar11 = uVar8 + 1;
        if ((int)uVar6 <= (int)uVar8) {
          uVar11 = uVar6;
        }
        uVar6 = (uint)*(ushort *)(uVar5 + (longlong)(int)uVar11 * 2);
      }
      if (uVar8 != uVar11) {
        iVar7 = 1;
        if (1 < (int)(uVar6 - uVar10)) {
          iVar7 = uVar6 - uVar10;
        }
        fVar14 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar14 = (fVar13 - (float)uVar10) / (float)iVar7;
        }
        uVar11 = -(uint)(0.0 <= DAT_14c84634c * DAT_14c84634c +
                                DAT_14c846348 * DAT_14c846348 +
                                DAT_14c84633c._4_4_ * DAT_14c84633c._4_4_ +
                                DAT_14c846344 * DAT_14c846344);
        fVar13 = (float)(~uVar11 & (uint)-(1.0 - fVar14) | (uint)(1.0 - fVar14) & uVar11);
        fVar12 = fVar13 * DAT_14c84633c._4_4_ + fVar14 * DAT_14c84633c._4_4_;
        fVar16 = fVar13 * DAT_14c846344 + fVar14 * DAT_14c846344;
        fVar17 = fVar13 * DAT_14c846348 + fVar14 * DAT_14c846348;
        fVar18 = fVar13 * DAT_14c84634c + fVar14 * DAT_14c84634c;
        fVar14 = fVar12 * fVar12 + fVar16 * fVar16;
        fVar13 = fVar17 * fVar17 + fVar18 * fVar18;
        auVar19._0_4_ = fVar13 + fVar14;
        auVar19._4_4_ = fVar13 + fVar14;
        auVar19._8_4_ = fVar14 + fVar13;
        auVar19._12_4_ = fVar14 + fVar13;
        auVar20 = sqrtps(auVar19,auVar19);
        auVar20 = divps(_DAT_1499314a0,auVar20);
        auVar21._0_4_ = auVar20._0_4_ * fVar12;
        auVar21._4_4_ = auVar20._4_4_ * fVar16;
        auVar21._8_4_ = auVar20._8_4_ * fVar17;
        auVar21._12_4_ = auVar20._12_4_ * fVar18;
        auVar20._4_4_ = -(uint)(1e-08 <= auVar19._4_4_);
        auVar20._0_4_ = -(uint)(1e-08 <= auVar19._0_4_);
        auVar20._8_4_ = -(uint)(1e-08 <= auVar19._8_4_);
        auVar20._12_4_ = -(uint)(1e-08 <= auVar19._12_4_);
        auVar20 = blendvps(_DAT_149932320,auVar21,auVar20);
        fVar14 = auVar20._4_4_;
        fVar13 = auVar20._8_4_;
        dVar15 = (double)auVar20._12_4_;
        goto LAB_1478ecbf1;
      }
    }
    auVar20 = ZEXT416((uint)DAT_14c84633c._4_4_);
    dVar15 = (double)DAT_14c84634c;
    fVar14 = DAT_14c846344;
    fVar13 = DAT_14c846348;
  }
LAB_1478ecbf1:
  *param_2 = (double)auVar20._0_4_;
  param_2[1] = (double)fVar14;
  auVar3._8_4_ = SUB84(dVar15,0);
  auVar3._0_8_ = (double)fVar13;
  auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  return;
}



// FUNCTION 1478ecd2e FUN_1478ecd2e body=584 status=ok
// SIG undefined FUN_1478ecd2e(void)

void FUN_1478ecd2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  fVar14 = (float)DAT_14c846330;
  fVar13 = DAT_14c846330._4_4_;
  fVar12 = DAT_14c846338;
  if (fVar15 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 4 + (longlong)(param_4 << 2) * 4);
    if ((1 < iVar5) && (0.0 < fVar15)) {
      uVar6 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(param_4 << 2) * 4) +
              *(longlong *)(lVar2 + 0x38) + 3U & 0xfffffffffffffffc;
      uVar4 = iVar5 - 1;
      iVar5 = *(int *)(lVar2 + 8);
      fVar11 = (float)(iVar5 + -1) * fVar15;
      uVar7 = (uint)fVar11;
      uVar9 = iVar5 - 2U;
      if ((int)uVar7 < (int)(iVar5 - 2U)) {
        uVar9 = uVar7;
      }
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      uVar7 = (int)((float)(int)uVar4 * fVar15);
      if ((int)uVar4 <= (int)((float)(int)uVar4 * fVar15)) {
        uVar7 = uVar4;
      }
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar8 = 0;
      }
      if (iVar5 < 0x100) {
        if (uVar9 < *(byte *)(uVar6 + uVar8)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar6 - 1) + uVar8);
            uVar8 = uVar8 - 1;
          } while (uVar9 < *pbVar1);
        }
        else {
          do {
            if (uVar4 == uVar8) {
              uVar8 = (ulonglong)uVar4;
              goto LAB_1478ece9e;
            }
            pbVar1 = (byte *)(uVar6 + 1 + uVar8);
            uVar8 = uVar8 + 1;
          } while (*pbVar1 <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ece9e:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(byte *)(uVar6 + (longlong)(int)uVar7);
        uVar9 = uVar7 + 1;
        if ((int)uVar4 <= (int)uVar7) {
          uVar9 = uVar4;
        }
        uVar4 = (uint)*(byte *)(uVar6 + (longlong)(int)uVar9);
      }
      else {
        if (uVar9 < *(ushort *)(uVar6 + uVar8 * 2)) {
          do {
            if ((longlong)uVar8 < 2) {
              uVar8 = 0;
              break;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 - 1;
          } while (uVar9 < *(ushort *)((uVar6 - 2) + lVar2));
        }
        else {
          do {
            if (uVar4 == uVar8) {
              uVar8 = (ulonglong)uVar4;
              goto LAB_1478ece80;
            }
            lVar2 = uVar8 * 2;
            uVar8 = uVar8 + 1;
          } while (*(ushort *)(uVar6 + 2 + lVar2) <= uVar9);
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
LAB_1478ece80:
        uVar7 = (uint)uVar8;
        uVar10 = (uint)*(ushort *)(uVar6 + (longlong)(int)uVar7 * 2);
        uVar9 = uVar7 + 1;
        if ((int)uVar4 <= (int)uVar7) {
          uVar9 = uVar4;
        }
        uVar4 = (uint)*(ushort *)(uVar6 + (longlong)(int)uVar9 * 2);
      }
      if (uVar7 != uVar9) {
        iVar5 = 1;
        if (1 < (int)(uVar4 - uVar10)) {
          iVar5 = uVar4 - uVar10;
        }
        fVar15 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar15 = (fVar11 - (float)uVar10) / (float)iVar5;
        }
        fVar14 = ((float)DAT_14c846330 - (float)DAT_14c846330) * fVar15 + (float)DAT_14c846330;
        fVar13 = (DAT_14c846330._4_4_ - DAT_14c846330._4_4_) * fVar15 + DAT_14c846330._4_4_;
        fVar12 = (DAT_14c846338 - DAT_14c846338) * fVar15 + DAT_14c846338;
      }
    }
  }
  auVar3._8_4_ = SUB84((double)fVar13,0);
  auVar3._0_8_ = (double)fVar14;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
  *(double *)(param_2 + 0x30) = (double)fVar12;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478ecf76 FUN_1478ecf76 body=588 status=ok
// SIG undefined FUN_1478ecf76(void)

void FUN_1478ecf76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
           (float)*(int *)(param_3 + 0x50);
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
  fVar15 = (float)DAT_14c846330;
  fVar14 = DAT_14c846330._4_4_;
  fVar13 = DAT_14c846338;
  if (fVar16 < 1.0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar6 = (longlong)param_4 * (longlong)*(int *)(lVar2 + 0x30);
    iVar5 = *(int *)(*(longlong *)(lVar2 + 0x20) + 4 + lVar6 * 4);
    if ((1 < iVar5) && (0.0 < fVar16)) {
      uVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + lVar6 * 4) +
              *(longlong *)(lVar2 + 0x38) + 3U & 0xfffffffffffffffc;
      uVar4 = iVar5 - 1;
      iVar5 = *(int *)(lVar2 + 8);
      fVar12 = (float)(iVar5 + -1) * fVar16;
      uVar8 = (uint)fVar12;
      uVar10 = iVar5 - 2U;
      if ((int)uVar8 < (int)(iVar5 - 2U)) {
        uVar10 = uVar8;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      uVar8 = (int)((float)(int)uVar4 * fVar16);
      if ((int)uVar4 <= (int)((float)(int)uVar4 * fVar16)) {
        uVar8 = uVar4;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      if (iVar5 < 0x100) {
        if (uVar10 < *(byte *)(uVar7 + uVar9)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            pbVar1 = (byte *)((uVar7 - 1) + uVar9);
            uVar9 = uVar9 - 1;
          } while (uVar10 < *pbVar1);
        }
        else {
          do {
            if (uVar4 == uVar9) {
              uVar9 = (ulonglong)uVar4;
              goto LAB_1478ed0ea;
            }
            pbVar1 = (byte *)(uVar7 + 1 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pbVar1 <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ed0ea:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(byte *)(uVar7 + (longlong)(int)uVar8);
        uVar10 = uVar8 + 1;
        if ((int)uVar4 <= (int)uVar8) {
          uVar10 = uVar4;
        }
        uVar4 = (uint)*(byte *)(uVar7 + (longlong)(int)uVar10);
      }
      else {
        if (uVar10 < *(ushort *)(uVar7 + uVar9 * 2)) {
          do {
            if ((longlong)uVar9 < 2) {
              uVar9 = 0;
              break;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 - 1;
          } while (uVar10 < *(ushort *)((uVar7 - 2) + lVar2));
        }
        else {
          do {
            if (uVar4 == uVar9) {
              uVar9 = (ulonglong)uVar4;
              goto LAB_1478ed0cc;
            }
            lVar2 = uVar9 * 2;
            uVar9 = uVar9 + 1;
          } while (*(ushort *)(uVar7 + 2 + lVar2) <= uVar10);
          uVar9 = (ulonglong)((int)uVar9 - 1);
        }
LAB_1478ed0cc:
        uVar8 = (uint)uVar9;
        uVar11 = (uint)*(ushort *)(uVar7 + (longlong)(int)uVar8 * 2);
        uVar10 = uVar8 + 1;
        if ((int)uVar4 <= (int)uVar8) {
          uVar10 = uVar4;
        }
        uVar4 = (uint)*(ushort *)(uVar7 + (longlong)(int)uVar10 * 2);
      }
      if (uVar8 != uVar10) {
        iVar5 = 1;
        if (1 < (int)(uVar4 - uVar11)) {
          iVar5 = uVar4 - uVar11;
        }
        fVar16 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar16 = (fVar12 - (float)uVar11) / (float)iVar5;
        }
        fVar15 = ((float)DAT_14c846330 - (float)DAT_14c846330) * fVar16 + (float)DAT_14c846330;
        fVar14 = (DAT_14c846330._4_4_ - DAT_14c846330._4_4_) * fVar16 + DAT_14c846330._4_4_;
        fVar13 = (DAT_14c846338 - DAT_14c846338) * fVar16 + DAT_14c846338;
      }
    }
  }
  auVar3._8_4_ = SUB84((double)fVar14,0);
  auVar3._0_8_ = (double)fVar15;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar3;
  *(double *)(param_2 + 0x50) = (double)fVar13;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478ed1c2 FUN_1478ed1c2 body=98 status=ok
// SIG undefined FUN_1478ed1c2(void)

undefined8 FUN_1478ed1c2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    puVar4 = (undefined8 *)*param_1;
    if ((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 1) != 3)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
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
  return uVar7;
}



// FUNCTION 1478ed22f FUN_1478ed22f body=79 status=ok
// SIG undefined FUN_1478ed22f(void)

void FUN_1478ed22f(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_3[4];
  uStack_14 = param_3[5];
  uStack_10 = param_3[6];
  uStack_c = param_3[7];
  local_30 = param_2;
  FUN_1447cd2ec(local_28,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed2a0 FUN_1478ed2a0 body=165 status=ok
// SIG undefined FUN_1478ed2a0(void)

void FUN_1478ed2a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478ed346(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed346 FUN_1478ed346 body=168 status=ok
// SIG undefined FUN_1478ed346(void)

void FUN_1478ed346(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = param_1[4];
  local_20 = param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff5e4(lVar3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed3f0 FUN_1478ed3f0 body=251 status=ok
// SIG undefined FUN_1478ed3f0(void)

void FUN_1478ed3f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1478ed4ec(puVar1,puVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed4ec FUN_1478ed4ec body=751 status=ok
// SIG undefined FUN_1478ed4ec(void)

ulonglong FUN_1478ed4ec(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 extraout_XMM0_Db;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (((9.999999747378752e-05 < ABS(*param_1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (uVar11 = 0, 9.999999747378752e-05 < ABS(param_1[2]))) {
    dVar8 = *param_2;
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar5 = sin(dVar8 * 0.01745329238474369);
    dVar6 = sin(dVar1 * 0.01745329238474369);
    dVar7 = sin(dVar2 * 0.01745329238474369);
    sin(0.0);
    dVar8 = cos(dVar8 * 0.01745329238474369);
    dVar9 = cos(dVar1 * 0.01745329238474369);
    dVar10 = cos(dVar2 * 0.01745329238474369);
    cos(0.0);
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar13 = dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar13 != 1.0) || (NAN(dVar13))) {
      if (9.99999993922529e-09 <= dVar13) {
        dVar2 = dVar2 * (1.0 / SQRT(dVar13));
        dVar1 = dVar1 * (1.0 / SQRT(dVar13));
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        uVar14 = (undefined4)DAT_14c8464f0;
        uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar2 = DAT_14c8464e8;
        dVar1 = DAT_14c8464e0;
      }
    }
    else {
      uVar11 = -(ulonglong)(param_1[2] == 0.0) & (ulonglong)param_1[2];
      uVar14 = (undefined4)uVar11;
      uVar15 = (undefined4)(uVar11 >> 0x20);
    }
    fVar4 = (float)(dVar5 * (double)CONCAT44(uVar15,uVar14) +
                   dVar8 * dVar9 * dVar1 + dVar6 * dVar8 * dVar2);
    fVar12 = fVar4;
    if (1.0 <= fVar4) {
      fVar12 = 1.0;
    }
    fVar12 = acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 |
                          ~-(uint)(fVar4 < -1.0) & (uint)fVar12));
    uVar3 = -(uint)((float)(-dVar7 * dVar8 * (double)CONCAT44(uVar15,uVar14) +
                           (dVar5 * dVar7 * dVar9 - dVar6 * dVar10) * dVar1 +
                           (dVar5 * dVar7 * dVar6 + dVar9 * dVar10) * dVar2) < 0.0);
    uVar11 = (ulonglong)(uVar3 & (uint)-(fVar12 * 57.295776)) |
             CONCAT44(extraout_XMM0_Db,~uVar3 & (uint)(fVar12 * 57.295776));
  }
  return uVar11;
}



// FUNCTION 1478ed7f2 FUN_1478ed7f2 body=120 status=ok
// SIG undefined FUN_1478ed7f2(void)

void FUN_1478ed7f2(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479026b8(lVar3);
  return;
}



// FUNCTION 1478ed888 FUN_1478ed888 body=156 status=ok
// SIG undefined FUN_1478ed888(void)

void FUN_1478ed888(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478ed926(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed926 FUN_1478ed926 body=168 status=ok
// SIG undefined FUN_1478ed926(void)

void FUN_1478ed926(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = param_1[4];
  local_20 = param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902666(lVar3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ed9d6 FUN_1478ed9d6 body=163 status=ok
// SIG undefined FUN_1478ed9d6(void)

void FUN_1478ed9d6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478eda7a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eda7a FUN_1478eda7a body=397 status=ok
// SIG undefined FUN_1478eda7a(void)

undefined1 FUN_1478eda7a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = local_70;
  if (param_2 != 0) {
    lVar6 = FUN_144a718e6();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) != lVar6 + 0x30)) {
      plVar8 = (longlong *)(param_1 + 0x98);
      lVar6 = param_1 + 0xa8;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = lVar6;
      if (*(int *)(param_1 + 0xc0) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar9 = *(int *)(param_1 + 0xc0);
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar2 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_88 = plVar8;
      if ((local_70._4_4_ != iVar9) || (uStack_58 != lVar6)) {
        iVar5 = local_70._4_4_;
        local_70 = uVar2;
        do {
          lVar7 = *local_88;
          cVar4 = FUN_147903dbe(*(undefined8 *)(lVar7 + (longlong)iVar5 * 0x18));
          if (cVar4 != '\0') {
            puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x18);
            lVar7 = FUN_147903ac8(*puVar1);
            if (lVar7 == param_2) {
              plVar8 = (longlong *)puVar1[1];
              goto LAB_1478edbe1;
            }
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar2 = local_70;
        } while (local_88 != plVar8 ||
                 (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar9));
      }
    }
    else {
      plVar8 = (longlong *)FUN_1478f778a(param_1,param_2);
      uVar2 = local_70;
      if (plVar8 != (longlong *)0x0) {
LAB_1478edbe1:
        uVar2 = local_70;
        if (*plVar8 != 0) {
          uVar3 = (undefined1)plVar8[7];
          goto LAB_1478edb45;
        }
      }
    }
  }
  local_70 = uVar2;
  uVar3 = 0;
LAB_1478edb45:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1478edc08 FUN_1478edc08 body=251 status=ok
// SIG undefined FUN_1478edc08(void)

void FUN_1478edc08(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478edd04(param_1,local_21,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478edd04 FUN_1478edd04 body=151 status=ok
// SIG undefined FUN_1478edd04(void)

void FUN_1478edd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1478f6bca(0,param_2,&local_78);
  FUN_1478f64a2(&local_78,param_3);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478edd9c FUN_1478edd9c body=182 status=ok
// SIG undefined FUN_1478edd9c(void)

void FUN_1478edd9c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478edd04(param_1,0,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ede54 FUN_1478ede54 body=184 status=ok
// SIG undefined FUN_1478ede54(void)

void FUN_1478ede54(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14793c74c(*(longlong *)(param_1 + 0x28),&local_28);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478edf68 FUN_1478edf68 body=71 status=ok
// SIG undefined FUN_1478edf68(void)

longlong FUN_1478edf68(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    uVar3 = (longlong)*(int *)(param_1 + 0x90) + 1;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + -0x10 + uVar3 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) {
        if (*(float *)(plVar1 + 0x2e) != 0.0) {
          return lVar2;
        }
        if (NAN(*(float *)(plVar1 + 0x2e))) {
          return lVar2;
        }
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return 0;
}



// FUNCTION 1478edfb0 FUN_1478edfb0 body=174 status=ok
// SIG undefined FUN_1478edfb0(void)

void FUN_1478edfb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478ee060(param_1,&local_30,local_24);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee060 FUN_1478ee060 body=122 status=ok
// SIG undefined FUN_1478ee060(void)

undefined8 * FUN_1478ee060(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_144a83cc4();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (((plVar3 != (longlong *)0x0) &&
        (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3), -1 < (int)param_3)) &&
       ((int)param_3 < (int)plVar3[1])) {
      FUN_147912e72(param_1 + *(int *)(*(longlong *)
                                        (*plVar3 + (longlong)(int)((int)plVar3[1] + ~param_3) * 8) +
                                      0x44),param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1478ee0e0 FUN_1478ee0e0 body=39 status=ok
// SIG undefined FUN_1478ee0e0(void)

void FUN_1478ee0e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee108();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478ee108 FUN_1478ee108 body=121 status=ok
// SIG undefined FUN_1478ee108(void)

undefined4 FUN_1478ee108(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  return *(undefined4 *)(lVar3 + 0x158);
}



// FUNCTION 1478ee182 FUN_1478ee182 body=163 status=ok
// SIG undefined FUN_1478ee182(void)

void FUN_1478ee182(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee226(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee226 FUN_1478ee226 body=126 status=ok
// SIG undefined FUN_1478ee226(void)

void FUN_1478ee226(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147901250(lVar3,param_2);
  return;
}



// FUNCTION 1478ee2a4 FUN_1478ee2a4 body=163 status=ok
// SIG undefined FUN_1478ee2a4(void)

void FUN_1478ee2a4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee348(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee348 FUN_1478ee348 body=126 status=ok
// SIG undefined FUN_1478ee348(void)

void FUN_1478ee348(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479012c4(lVar3,param_2);
  return;
}



// FUNCTION 1478ee3c6 FUN_1478ee3c6 body=163 status=ok
// SIG undefined FUN_1478ee3c6(void)

void FUN_1478ee3c6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee46a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee46a FUN_1478ee46a body=126 status=ok
// SIG undefined FUN_1478ee46a(void)

void FUN_1478ee46a(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479012ec(lVar3,param_2);
  return;
}



// FUNCTION 1478ee4e8 FUN_1478ee4e8 body=163 status=ok
// SIG undefined FUN_1478ee4e8(void)

void FUN_1478ee4e8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee58c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee58c FUN_1478ee58c body=126 status=ok
// SIG undefined FUN_1478ee58c(void)

void FUN_1478ee58c(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479013a0(lVar3,param_2);
  return;
}



// FUNCTION 1478ee60a FUN_1478ee60a body=163 status=ok
// SIG undefined FUN_1478ee60a(void)

void FUN_1478ee60a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee6ae(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee6ae FUN_1478ee6ae body=126 status=ok
// SIG undefined FUN_1478ee6ae(void)

void FUN_1478ee6ae(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790133a(lVar3,param_2);
  return;
}



// FUNCTION 1478ee72c FUN_1478ee72c body=163 status=ok
// SIG undefined FUN_1478ee72c(void)

void FUN_1478ee72c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee7d0(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee7d0 FUN_1478ee7d0 body=126 status=ok
// SIG undefined FUN_1478ee7d0(void)

void FUN_1478ee7d0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479015c2(lVar3,param_2);
  return;
}



// FUNCTION 1478ee84e FUN_1478ee84e body=163 status=ok
// SIG undefined FUN_1478ee84e(void)

void FUN_1478ee84e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ee8f2(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ee8f2 FUN_1478ee8f2 body=126 status=ok
// SIG undefined FUN_1478ee8f2(void)

void FUN_1478ee8f2(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479013ee(lVar3,param_2);
  return;
}



// FUNCTION 1478ee970 FUN_1478ee970 body=238 status=ok
// SIG undefined FUN_1478ee970(void)

void FUN_1478ee970(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478eea60(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eea60 FUN_1478eea60 body=136 status=ok
// SIG undefined FUN_1478eea60(void)

void FUN_1478eea60(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479014b8(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478eeae8 FUN_1478eeae8 body=238 status=ok
// SIG undefined FUN_1478eeae8(void)

void FUN_1478eeae8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478eebd8(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eebd8 FUN_1478eebd8 body=136 status=ok
// SIG undefined FUN_1478eebd8(void)

void FUN_1478eebd8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147901622(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478eec60 FUN_1478eec60 body=238 status=ok
// SIG undefined FUN_1478eec60(void)

void FUN_1478eec60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478eed50(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eed50 FUN_1478eed50 body=136 status=ok
// SIG undefined FUN_1478eed50(void)

void FUN_1478eed50(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790169e(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478eedd8 FUN_1478eedd8 body=238 status=ok
// SIG undefined FUN_1478eedd8(void)

void FUN_1478eedd8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478eeec8(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eeec8 FUN_1478eeec8 body=136 status=ok
// SIG undefined FUN_1478eeec8(void)

void FUN_1478eeec8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147901770(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478eef50 FUN_1478eef50 body=164 status=ok
// SIG undefined FUN_1478eef50(void)

void FUN_1478eef50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478eeff6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478eeff6 FUN_1478eeff6 body=127 status=ok
// SIG undefined FUN_1478eeff6(void)

undefined8 FUN_1478eeff6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_144a83cc4();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1463a8422();
      lVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,uVar1);
      if (lVar3 != 0) {
        uVar1 = FUN_1417b54d8();
        lVar3 = FUN_14792dff0(lVar3,param_2,param_1,uVar1);
        if (lVar3 != 0) {
          uVar1 = FUN_147508a86(lVar3);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1478ef076 FUN_1478ef076 body=256 status=ok
// SIG undefined FUN_1478ef076(void)

void FUN_1478ef076(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478ef178(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ef178 FUN_1478ef178 body=65 status=ok
// SIG undefined FUN_1478ef178(void)

void FUN_1478ef178(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1478eeff6();
  if (lVar2 != 0) {
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_1478fd772(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1478ef1c0 FUN_1478ef1c0 body=275 status=ok
// SIG undefined FUN_1478ef1c0(void)

void FUN_1478ef1c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar2 = FUN_1478ef2d4(param_1,&local_40,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ef2d4 FUN_1478ef2d4 body=309 status=ok
// SIG undefined FUN_1478ef2d4(void)

longlong FUN_1478ef2d4(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar5 = FUN_144a83cc4();
    plVar6 = (longlong *)FUN_144718840(lVar1,uVar5);
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
      lVar1 = plVar6[1];
      if ((longlong)(int)lVar1 != 0) {
        lVar2 = *plVar6;
        lVar9 = 0;
        do {
          lVar7 = FUN_147508a86(*(int *)(*(longlong *)(lVar2 + lVar9) + 0x44) + param_1);
          if ((lVar7 != 0) && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) {
            lVar4 = *param_2;
            if (param_3 == '\0') {
              if ((((lVar4 != 0) && (lVar8 = FUN_1402e44f4(), lVar8 != 0)) &&
                  (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
                 ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                   == lVar8 + 0x30 && (lVar3 == *param_2)))) {
                return lVar7;
              }
            }
            else if ((((lVar4 != 0) && (lVar8 = FUN_1402e44f4(), lVar8 != 0)) &&
                     ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                      (((*(longlong *)
                          (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                         lVar8 + 0x30 && (lVar4 = *param_2, lVar4 != 0)) &&
                       (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                     lVar4 + 0x30)) {
              return lVar7;
            }
          }
          lVar9 = lVar9 + 8;
          if ((longlong)(int)lVar1 * 8 == lVar9) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 1478ef40a FUN_1478ef40a body=164 status=ok
// SIG undefined FUN_1478ef40a(void)

void FUN_1478ef40a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478ef4b0(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ef4b0 FUN_1478ef4b0 body=830 status=ok
// SIG undefined FUN_1478ef4b0(void)

undefined8 FUN_1478ef4b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar5 = FUN_144a83cc4();
    plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
      if ((longlong)(int)plVar6[1] != 0) {
        plVar11 = (longlong *)*plVar6;
        plVar6 = plVar11 + (int)plVar6[1];
        local_88 = plVar6;
        do {
          lVar12 = *(int *)(*plVar11 + 0x44) + param_1;
          local_58 = (longlong *)0x0;
          local_50 = 0x400000000;
          lVar7 = FUN_147508a86();
          uVar3 = local_50;
          if (lVar7 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x10);
            lVar10 = (longlong)(int)local_50;
            uVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar4);
            if (local_50._4_4_ < uVar4) {
              FUN_1478fee40(local_78,uVar3 & 0xffffffff);
            }
            plVar9 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar9 = local_78;
            }
            plVar9[lVar10] = lVar7;
          }
          lVar7 = *(longlong *)(lVar12 + 0x80);
          if ((((lVar7 != 0) && (lVar10 = FUN_1402e44f4(), uVar3 = local_50, lVar10 != 0)) &&
              (*(int *)(lVar10 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
               lVar10 + 0x30 && (lVar7 = *(longlong *)(lVar12 + 0x80), lVar7 != 0)))) {
            lVar10 = (longlong)(int)local_50;
            uVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar4);
            if (local_50._4_4_ < uVar4) {
              FUN_1478fee40(local_78,uVar3 & 0xffffffff);
            }
            plVar9 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar9 = local_78;
            }
            plVar9[lVar10] = lVar7;
          }
          lVar7 = *(longlong *)(lVar12 + 0xc0);
          if (((lVar7 != 0) && (lVar10 = FUN_145a6af0a(), uVar3 = local_50, lVar10 != 0)) &&
             ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar7 + 0x38) &&
              ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30 && (lVar7 = *(longlong *)(lVar12 + 0xc0), lVar7 != 0)))))) {
            lVar10 = (longlong)(int)local_50;
            uVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar4);
            if (local_50._4_4_ < uVar4) {
              FUN_1478fee40(local_78,uVar3 & 0xffffffff);
            }
            plVar9 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar9 = local_78;
            }
            plVar9[lVar10] = lVar7;
          }
          uVar3 = local_50;
          lVar7 = *(longlong *)(param_1 + 0x10);
          lVar10 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_1478fee40(local_78,uVar3 & 0xffffffff);
          }
          plVar9 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar9 = local_78;
          }
          plVar9[lVar10] = lVar7;
          plVar9 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar9 = local_78;
          }
          local_8c = 0;
          bVar2 = true;
          if ((longlong)(int)local_50 != 0) {
            plVar1 = plVar9 + (int)local_50;
            do {
              lVar7 = *plVar9;
              if (lVar7 == 0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                uVar5 = FUN_144a83cc4();
                plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x80))();
              if ((longlong)*(int *)(puVar8 + 1) != 0) {
                plVar6 = (longlong *)*puVar8;
                lVar7 = (longlong)*(int *)(puVar8 + 1) * 0x78;
                do {
                  if (*plVar6 == *(longlong *)(lVar12 + 200)) {
                    if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
                      local_80 = FUN_147508a86(lVar12);
                      local_8c = 1;
                      bVar2 = false;
                      plVar6 = local_88;
                      goto LAB_1478ef6a6;
                    }
                    break;
                  }
                  plVar6 = plVar6 + 0xf;
                  lVar7 = lVar7 + -0x78;
                } while (lVar7 != 0);
              }
              plVar9 = plVar9 + 1;
              plVar6 = local_88;
            } while (plVar9 != plVar1);
          }
LAB_1478ef6a6:
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (!bVar2) goto LAB_1478ef756;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar6);
        local_8c = 2;
LAB_1478ef756:
        uVar5 = local_80;
        if ((local_8c & 1) == 0) {
          uVar5 = 0;
        }
        goto LAB_1478ef726;
      }
    }
  }
  uVar5 = 0;
LAB_1478ef726:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1478ef7f0 FUN_1478ef7f0 body=269 status=ok
// SIG undefined FUN_1478ef7f0(void)

void FUN_1478ef7f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1478ef8fe(param_1,local_28,&local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ef8fe FUN_1478ef8fe body=425 status=ok
// SIG undefined FUN_1478ef8fe(void)

longlong FUN_1478ef8fe(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_144a83cc4();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
      if ((longlong)(int)plVar2[1] != 0) {
        plVar9 = (longlong *)*plVar2;
        plVar2 = plVar9 + (int)plVar2[1];
        do {
          lVar10 = *(int *)(*plVar9 + 0x44) + param_1;
          lVar3 = FUN_147508a86();
          if (lVar3 != 0) {
            lVar8 = *(longlong *)(lVar3 + 0x10);
            lVar5 = *param_3;
            if ((((lVar5 == 0) || (lVar4 = FUN_1402e44f4(), lVar4 == 0)) ||
                (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              lVar5 = 0;
            }
            else {
              lVar5 = *param_3;
            }
            if (lVar8 == lVar5) {
              lVar8 = *(longlong *)(lVar10 + 0xc0);
              if ((((lVar8 == 0) || (lVar5 = FUN_145a6af0a(), lVar5 == 0)) ||
                  ((*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38) ||
                   ((*(longlong *)
                      (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                     lVar5 + 0x30 || (lVar8 = *(longlong *)(lVar10 + 0xc0), lVar8 == 0)))))) &&
                 (lVar8 = *(longlong *)(param_1 + 0x10), lVar8 == 0)) {
                plVar6 = (longlong *)0x0;
              }
              else {
                uVar1 = FUN_144a83cc4();
                plVar6 = (longlong *)FUN_144718840(lVar8,uVar1);
              }
              puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x80))();
              if ((longlong)*(int *)(puVar7 + 1) != 0) {
                plVar6 = (longlong *)*puVar7;
                lVar8 = (longlong)*(int *)(puVar7 + 1) * 0x78;
                do {
                  if (*plVar6 == *(longlong *)(lVar10 + 200)) {
                    if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
                      return lVar3;
                    }
                    break;
                  }
                  plVar6 = plVar6 + 0xf;
                  lVar8 = lVar8 + -0x78;
                } while (lVar8 != 0);
              }
            }
          }
          plVar9 = plVar9 + 1;
          if (plVar9 == plVar2) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 1478efaa8 FUN_1478efaa8 body=256 status=ok
// SIG undefined FUN_1478efaa8(void)

void FUN_1478efaa8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478efbaa(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478efbaa FUN_1478efbaa body=858 status=ok
// SIG undefined FUN_1478efbaa(void)

void FUN_1478efbaa(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_80 = param_2;
  if (lVar6 != 0) {
    uVar4 = FUN_144a83cc4();
    plVar5 = (longlong *)FUN_144718840(lVar6,uVar4);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
      if ((longlong)(int)plVar5[1] != 0) {
        plVar10 = (longlong *)*plVar5;
        local_88 = plVar10 + (int)plVar5[1];
        do {
          lVar13 = *(int *)(*plVar10 + 0x44) + param_1;
          local_58 = (longlong *)0x0;
          local_50 = 0x400000000;
          lVar6 = FUN_147508a86(lVar13);
          uVar2 = local_50;
          if (lVar6 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x10);
            lVar11 = (longlong)(int)local_50;
            uVar3 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar3);
            if (local_50._4_4_ < uVar3) {
              FUN_1478fee40(local_78,uVar2 & 0xffffffff);
            }
            plVar5 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar5 = local_78;
            }
            plVar5[lVar11] = lVar6;
          }
          lVar6 = *(longlong *)(lVar13 + 0x80);
          if ((((lVar6 != 0) && (lVar11 = FUN_1402e44f4(), uVar2 = local_50, lVar11 != 0)) &&
              (*(int *)(lVar11 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
               lVar11 + 0x30 && (lVar6 = *(longlong *)(lVar13 + 0x80), lVar6 != 0)))) {
            lVar11 = (longlong)(int)local_50;
            uVar3 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar3);
            if (local_50._4_4_ < uVar3) {
              FUN_1478fee40(local_78,uVar2 & 0xffffffff);
            }
            plVar5 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar5 = local_78;
            }
            plVar5[lVar11] = lVar6;
          }
          lVar6 = *(longlong *)(lVar13 + 0xc0);
          if (((lVar6 != 0) && (lVar11 = FUN_145a6af0a(), uVar2 = local_50, lVar11 != 0)) &&
             ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar6 + 0x38) &&
              ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30 && (lVar6 = *(longlong *)(lVar13 + 0xc0), lVar6 != 0)))))) {
            lVar11 = (longlong)(int)local_50;
            uVar3 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar3);
            if (local_50._4_4_ < uVar3) {
              FUN_1478fee40(local_78,uVar2 & 0xffffffff);
            }
            plVar5 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar5 = local_78;
            }
            plVar5[lVar11] = lVar6;
          }
          uVar2 = local_50;
          lVar6 = *(longlong *)(param_1 + 0x10);
          lVar11 = (longlong)(int)local_50;
          uVar3 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar3);
          if (local_50._4_4_ < uVar3) {
            FUN_1478fee40(local_78,uVar2 & 0xffffffff);
          }
          plVar5 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar5 = local_78;
          }
          plVar5[lVar11] = lVar6;
          plVar5 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar5 = local_78;
          }
          if ((longlong)(int)local_50 != 0) {
            plVar1 = plVar5 + (int)local_50;
LAB_1478efd38:
            lVar6 = *plVar5;
            if (lVar6 == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              FUN_144a83cc4();
              plVar7 = (longlong *)FUN_144718840(lVar6);
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x80))();
            if ((longlong)*(int *)(puVar8 + 1) != 0) {
              plVar7 = (longlong *)*puVar8;
              lVar6 = (longlong)*(int *)(puVar8 + 1) * 0x78;
              do {
                if (*plVar7 == *(longlong *)(lVar13 + 200)) {
                  if ((plVar7 != (longlong *)0x0) &&
                     (lVar6 = FUN_147508a86(), plVar7[1] == local_80)) {
                    lVar11 = *param_3;
                    lVar12 = (longlong)(int)param_3[1];
                    if (lVar12 == 0) goto LAB_1478efdd4;
                    lVar9 = 0;
                    goto LAB_1478efdc5;
                  }
                  break;
                }
                plVar7 = plVar7 + 0xf;
                lVar6 = lVar6 + -0x78;
              } while (lVar6 != 0);
            }
            goto LAB_1478efd8e;
          }
LAB_1478efdef:
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar9 = lVar9 + 8, lVar12 * 8 - lVar9 != 0) {
LAB_1478efdc5:
    if (*(longlong *)(lVar11 + lVar9) == lVar6) goto LAB_1478efd8e;
  }
LAB_1478efdd4:
  uVar3 = (int)param_3[1] + 1;
  *(uint *)(param_3 + 1) = uVar3;
  if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
    FUN_1478fd772();
    lVar11 = *param_3;
  }
  *(longlong *)(lVar11 + lVar12 * 8) = lVar6;
LAB_1478efd8e:
  plVar5 = plVar5 + 1;
  if (plVar5 == plVar1) goto LAB_1478efdef;
  goto LAB_1478efd38;
}



// FUNCTION 1478eff5e FUN_1478eff5e body=238 status=ok
// SIG undefined FUN_1478eff5e(void)

void FUN_1478eff5e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f004e(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f004e FUN_1478f004e body=136 status=ok
// SIG undefined FUN_1478f004e(void)

void FUN_1478f004e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790193a(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478f00d6 FUN_1478f00d6 body=238 status=ok
// SIG undefined FUN_1478f00d6(void)

void FUN_1478f00d6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f01c6(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f01c6 FUN_1478f01c6 body=136 status=ok
// SIG undefined FUN_1478f01c6(void)

void FUN_1478f01c6(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1479019e8(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478f024e FUN_1478f024e body=238 status=ok
// SIG undefined FUN_1478f024e(void)

void FUN_1478f024e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f033e(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f033e FUN_1478f033e body=136 status=ok
// SIG undefined FUN_1478f033e(void)

void FUN_1478f033e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147901a10(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478f03c6 FUN_1478f03c6 body=238 status=ok
// SIG undefined FUN_1478f03c6(void)

void FUN_1478f03c6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f04b6(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f04b6 FUN_1478f04b6 body=136 status=ok
// SIG undefined FUN_1478f04b6(void)

void FUN_1478f04b6(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790184a(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478f053e FUN_1478f053e body=181 status=ok
// SIG undefined FUN_1478f053e(void)

void FUN_1478f053e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1478f05f4(param_1,&local_3c,local_28);
  param_3[4] = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f05f4 FUN_1478f05f4 body=142 status=ok
// SIG undefined FUN_1478f05f4(void)

undefined8 FUN_1478f05f4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff414(lVar3,param_2,param_3);
  return param_2;
}



// FUNCTION 1478f0688 FUN_1478f0688 body=327 status=ok
// SIG undefined FUN_1478f0688(void)

void FUN_1478f0688(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = &local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f07d0(param_1,local_28,local_30,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f07d0 FUN_1478f07d0 body=148 status=ok
// SIG undefined FUN_1478f07d0(void)

void FUN_1478f07d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff3f0(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478f086a FUN_1478f086a body=239 status=ok
// SIG undefined FUN_1478f086a(void)

void FUN_1478f086a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f095a(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f095a FUN_1478f095a body=138 status=ok
// SIG undefined FUN_1478f095a(void)

void FUN_1478f095a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff3fc(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1478f0a24 FUN_1478f0a24 body=11 status=ok
// SIG undefined FUN_1478f0a24(void)

bool FUN_1478f0a24(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x90);
}



// FUNCTION 1478f0a36 FUN_1478f0a36 body=244 status=ok
// SIG undefined FUN_1478f0a36(void)

void FUN_1478f0a36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f75d0(param_1,local_30,local_38,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f0b32 FUN_1478f0b32 body=163 status=ok
// SIG undefined FUN_1478f0b32(void)

void FUN_1478f0b32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f0bd6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f0bd6 FUN_1478f0bd6 body=215 status=ok
// SIG undefined FUN_1478f0bd6(void)

undefined8 FUN_1478f0bd6(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)) && (cVar1 = FUN_144a61b4f(), cVar1 != '\0')) {
        FUN_14036294a(param_1[4],1,1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
    plVar4 = (longlong *)FUN_1433d89a0(lVar3);
    if ((longlong)(int)plVar4[1] != 0) {
      lVar3 = *plVar4;
      lVar2 = (longlong)(int)plVar4[1] * 0x58;
      do {
        cVar1 = FUN_144729dda(lVar3);
        if (cVar1 != '\0') {
          uVar5 = FUN_14479d2ce(lVar3);
          cVar1 = FUN_14790116e(uVar5,param_2);
          if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x55) != '\0')) {
            return 1;
          }
        }
        lVar3 = lVar3 + 0x58;
        lVar2 = lVar2 + -0x58;
      } while (lVar2 != 0);
    }
  }
  return 0;
}



// FUNCTION 1478f0cba FUN_1478f0cba body=396 status=ok
// SIG undefined FUN_1478f0cba(void)

void FUN_1478f0cba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  uVar1 = FUN_1478f0e48(param_1,local_28,local_30,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f0e48 FUN_1478f0e48 body=148 status=ok
// SIG undefined FUN_1478f0e48(void)

void FUN_1478f0e48(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff408(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478f0efc FUN_1478f0efc body=191 status=ok
// SIG undefined FUN_1478f0efc(void)

void FUN_1478f0efc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f0fbc FUN_1478f0fbc body=261 status=ok
// SIG undefined FUN_1478f0fbc(void)

void FUN_1478f0fbc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1478f10c2(param_1,local_20,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f10c2 FUN_1478f10c2 body=208 status=ok
// SIG undefined FUN_1478f10c2(void)

void FUN_1478f10c2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_144a83cc4();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1463a8422();
      lVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,uVar1);
      if (lVar3 != 0) {
        uVar1 = FUN_1417b54d8();
        lVar3 = FUN_14792dff0(lVar3,param_2,param_1,uVar1);
        if (lVar3 != 0) {
          local_30 = *param_3;
          if ((local_30 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_14790f630(lVar3,&local_30,param_1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f119e FUN_1478f119e body=207 status=ok
// SIG undefined FUN_1478f119e(void)

void FUN_1478f119e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f126e FUN_1478f126e body=165 status=ok
// SIG undefined FUN_1478f126e(void)

void FUN_1478f126e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f1314(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1314 FUN_1478f1314 body=100 status=ok
// SIG undefined FUN_1478f1314(void)

undefined4 FUN_1478f1314(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e))))))
        goto LAB_1478f136e;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a();
    if (plVar1 != (longlong *)0x0) {
LAB_1478f136e:
      return (int)plVar1[0x2b];
    }
  }
  return 0;
}



// FUNCTION 1478f1378 FUN_1478f1378 body=175 status=ok
// SIG undefined FUN_1478f1378(void)

void FUN_1478f1378(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1478f1428(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1428 FUN_1478f1428 body=118 status=ok
// SIG undefined FUN_1478f1428(void)

undefined8 * FUN_1478f1428(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e))))))
        goto LAB_1478f1494;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a(param_1,param_3);
    if (plVar1 != (longlong *)0x0) {
LAB_1478f1494:
      FUN_147905288(plVar1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1478f149e FUN_1478f149e body=165 status=ok
// SIG undefined FUN_1478f149e(void)

void FUN_1478f149e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f1544(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1544 FUN_1478f1544 body=115 status=ok
// SIG undefined FUN_1478f1544(void)

float FUN_1478f1544(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (param_2 = *plVar1, param_2 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e))))))
        goto LAB_1478f15a5;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a();
    if (plVar1 != (longlong *)0x0) {
LAB_1478f15a5:
      return *(float *)((longlong)plVar1 + 0x14c) * *(float *)(param_2 + 0xb0);
    }
  }
  return 0.0;
}



// FUNCTION 1478f15be FUN_1478f15be body=178 status=ok
// SIG undefined FUN_1478f15be(void)

void FUN_1478f15be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  bVar2 = true;
  if (local_28 != 0) {
    lVar1 = FUN_1478f778a(param_1);
    bVar2 = lVar1 == 0;
  }
  *param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1672 FUN_1478f1672 body=29 status=ok
// SIG undefined FUN_1478f1672(void)

bool FUN_1478f1672(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_2 != 0) {
    lVar1 = FUN_1478f778a();
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 1478f1690 FUN_1478f1690 body=165 status=ok
// SIG undefined FUN_1478f1690(void)

void FUN_1478f1690(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f1736(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1736 FUN_1478f1736 body=100 status=ok
// SIG undefined FUN_1478f1736(void)

undefined4 FUN_1478f1736(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e))))))
        goto LAB_1478f1790;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a();
    if (plVar1 != (longlong *)0x0) {
LAB_1478f1790:
      return *(undefined4 *)((longlong)plVar1 + 0x14c);
    }
  }
  return 0;
}



// FUNCTION 1478f179a FUN_1478f179a body=165 status=ok
// SIG undefined FUN_1478f179a(void)

void FUN_1478f179a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f1840(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1840 FUN_1478f1840 body=100 status=ok
// SIG undefined FUN_1478f1840(void)

undefined4 FUN_1478f1840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e))))))
        goto LAB_1478f189a;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a();
    if (plVar1 != (longlong *)0x0) {
LAB_1478f189a:
      return (int)plVar1[0x29];
    }
  }
  return 0;
}



// FUNCTION 1478f18aa FUN_1478f18aa body=163 status=ok
// SIG undefined FUN_1478f18aa(void)

void FUN_1478f18aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f194e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f194e FUN_1478f194e body=100 status=ok
// SIG undefined FUN_1478f194e(void)

undefined8 FUN_1478f194e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) {
          return 1;
        }
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    lVar2 = FUN_1478f778a();
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1478f19b8 FUN_1478f19b8 body=163 status=ok
// SIG undefined FUN_1478f19b8(void)

void FUN_1478f19b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1478f1a5c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1a5c FUN_1478f1a5c body=111 status=ok
// SIG undefined FUN_1478f1a5c(void)

undefined1 FUN_1478f1a5c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x90)) {
      lVar2 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar2 * 8);
        if ((((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
            ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) &&
           ((char)plVar1[7] != '\0')) {
          return 1;
        }
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x90) != lVar2);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1478f778a();
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      return (char)plVar1[7];
    }
  }
  return 0;
}



// FUNCTION 1478f1acc FUN_1478f1acc body=232 status=ok
// SIG undefined FUN_1478f1acc(void)

void FUN_1478f1acc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_1478f1bb6(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1bb6 FUN_1478f1bb6 body=217 status=ok
// SIG undefined FUN_1478f1bb6(void)

void FUN_1478f1bb6(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
          if ((*(float *)(plVar1 + 0x2e) != 0.0) || (NAN(*(float *)(plVar1 + 0x2e)))) {
            FUN_1433daa70(plVar1,&local_38,
                          *(float *)((longlong)plVar1 + 0x14c) <= 0.0 &&
                          *(float *)((longlong)plVar1 + 0x14c) != 0.0);
            iVar2 = *(int *)(param_1 + 0x90);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1,param_3);
    if (lVar3 != 0) {
      FUN_1433daa70(lVar3,&local_38,
                    *(float *)(lVar3 + 0x14c) <= 0.0 && *(float *)(lVar3 + 0x14c) != 0.0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1c90 FUN_1478f1c90 body=232 status=ok
// SIG undefined FUN_1478f1c90(void)

void FUN_1478f1c90(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_1478f1d7a(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1d7a FUN_1478f1d7a body=225 status=ok
// SIG undefined FUN_1478f1d7a(void)

void FUN_1478f1d7a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
          if ((*(float *)(plVar1 + 0x2e) != 0.0) || (NAN(*(float *)(plVar1 + 0x2e)))) {
            FUN_1433daa70(plVar1,&local_38,0.0 <= *(float *)((longlong)plVar1 + 0x14c));
            iVar2 = *(int *)(param_1 + 0x90);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1,param_3);
    if (lVar3 != 0) {
      FUN_1433daa70(lVar3,&local_38,0.0 <= *(float *)(lVar3 + 0x14c));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1e5c FUN_1478f1e5c body=156 status=ok
// SIG undefined FUN_1478f1e5c(void)

void FUN_1478f1e5c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f1efa(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f1efa FUN_1478f1efa body=137 status=ok
// SIG undefined FUN_1478f1efa(void)

void FUN_1478f1efa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
          if ((*(float *)(plVar1 + 0x2e) != 0.0) || (NAN(*(float *)(plVar1 + 0x2e)))) {
            FUN_147904f10();
            iVar2 = *(int *)(param_1 + 0x90);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1);
    if (lVar3 != 0) {
      FUN_147904f10(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1478f1f8a FUN_1478f1f8a body=476 status=ok
// SIG undefined FUN_1478f1f8a(void)

void FUN_1478f1f8a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38 != 0;
  local_48 = local_34;
  uVar1 = FUN_1478f2168(param_1,local_28,local_2c,local_2d);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2168 FUN_1478f2168 body=380 status=ok
// SIG undefined FUN_1478f2168(void)

void FUN_1478f2168(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0x3e4ccccd;
  local_84 = 0;
  local_80 = 0;
  lVar4 = local_98;
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 200);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    uVar1 = *(undefined4 *)(param_2 + 0xd0);
    uVar2 = *(undefined1 *)(param_2 + 0xec);
    if ((~DAT_14c950c29 & 1) == 0 && lVar3 != 0) {
      FUN_1456cec3c(lVar3);
    }
    local_80 = *(undefined1 *)(param_2 + 0xc0);
    lVar4 = *(longlong *)(param_2 + 0x180);
    lStack_90 = lVar3;
    local_88 = uVar1;
    local_84 = uVar2;
    if ((DAT_14c950c29 & 1) != 0) {
      if (*(longlong *)(param_2 + 0x180) == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x180);
      }
    }
  }
  local_98 = lVar4;
  local_a8 = param_6;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_1433d6832(param_1,param_2,&local_98,param_3);
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f22ec FUN_1478f22ec body=585 status=ok
// SIG undefined FUN_1478f22ec(void)

void FUN_1478f22ec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_40 = 0;
  local_38 = 0x3e4ccccd;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_45 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  puVar2 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  local_60 = local_4c;
  local_68 = local_45;
  uVar3 = FUN_1478f2536(param_1,local_30,puVar2,local_44);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2536 FUN_1478f2536 body=289 status=ok
// SIG undefined FUN_1478f2536(void)

void FUN_1478f2536(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = 0;
  local_68 = 0;
  local_78 = *param_3;
  if (DAT_14c950c29 == '\x01') {
    if (local_78 == 0) {
      local_78 = 0;
    }
    else {
      FUN_1456cec3c();
      local_78 = *param_3;
    }
  }
  local_6c = *(undefined1 *)((longlong)param_3 + 0xc);
  local_70 = (undefined4)param_3[1];
  lVar1 = local_80;
  if (param_2 != 0) {
    local_68 = *(undefined1 *)(param_2 + 0xc0);
    lVar1 = *(longlong *)(param_2 + 0x180);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(param_2 + 0x180) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_2 + 0x180);
      }
    }
  }
  local_80 = lVar1;
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  FUN_1433d6832(param_1,param_2,&local_80,param_4);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f265e FUN_1478f265e body=640 status=ok
// SIG undefined FUN_1478f265e(void)

void FUN_1478f265e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  int local_68;
  undefined4 local_64;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3e4ccccd;
  local_44 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_5d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68 != 0;
  puVar2 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  local_80 = local_64;
  local_88 = local_5d;
  uVar3 = FUN_1433d6832(param_1,local_30,puVar2,local_5c);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f28e0 FUN_1478f28e0 body=156 status=ok
// SIG undefined FUN_1478f28e0(void)

void FUN_1478f28e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f297e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f297e FUN_1478f297e body=124 status=ok
// SIG undefined FUN_1478f297e(void)

void FUN_1478f297e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
            ((*(float *)(plVar2 + 0x2e) != 0.0 || (NAN(*(float *)(plVar2 + 0x2e)))))) &&
           ((char)plVar2[7] == '\0')) {
          *(undefined1 *)(plVar2 + 7) = 1;
          iVar1 = *(int *)(param_1 + 0x90);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  else {
    plVar2 = (longlong *)FUN_1478f778a();
    if ((plVar2 != (longlong *)0x0) && ((*plVar2 == 0 || ((char)plVar2[7] == '\0')))) {
      *(undefined1 *)(plVar2 + 7) = 1;
    }
  }
  return;
}



// FUNCTION 1478f29fa FUN_1478f29fa body=308 status=ok
// SIG undefined FUN_1478f29fa(void)

void FUN_1478f29fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f2b30(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2b30 FUN_1478f2b30 body=215 status=ok
// SIG undefined FUN_1478f2b30(void)

void FUN_1478f2b30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  local_48 = param_2;
  if (param_4 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
          if ((*(float *)(plVar1 + 0x2e) != 0.0) || (NAN(*(float *)(plVar1 + 0x2e)))) {
            FUN_1479051e0(plVar1,&local_48,&local_50);
            iVar2 = *(int *)(param_1 + 0x90);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1,param_4);
    if (lVar3 != 0) {
      FUN_1479051e0(lVar3,&local_48,&local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2c08 FUN_1478f2c08 body=232 status=ok
// SIG undefined FUN_1478f2c08(void)

void FUN_1478f2c08(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f2cf2(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2cf2 FUN_1478f2cf2 body=126 status=ok
// SIG undefined FUN_1478f2cf2(void)

void FUN_1478f2cf2(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) {
          *(undefined4 *)((longlong)plVar1 + 0x14c) = param_3;
          iVar2 = *(int *)(param_1 + 0x90);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x14c) = param_3;
    }
  }
  return;
}



// FUNCTION 1478f2d70 FUN_1478f2d70 body=232 status=ok
// SIG undefined FUN_1478f2d70(void)

void FUN_1478f2d70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f2e5a(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2e5a FUN_1478f2e5a body=151 status=ok
// SIG undefined FUN_1478f2e5a(void)

void FUN_1478f2e5a(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) {
          *(undefined4 *)(plVar1 + 0x29) = param_3;
          *(undefined4 *)((longlong)plVar1 + 0x4c) = 0xfffffffe;
          *(undefined4 *)((longlong)plVar1 + 0x54) = 0xfffffffe;
          iVar2 = *(int *)(param_1 + 0x90);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x148) = param_3;
      *(undefined4 *)(lVar3 + 0x4c) = 0xfffffffe;
      *(undefined4 *)(lVar3 + 0x54) = 0xfffffffe;
    }
  }
  return;
}



// FUNCTION 1478f2ef2 FUN_1478f2ef2 body=260 status=ok
// SIG undefined FUN_1478f2ef2(void)

void FUN_1478f2ef2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_34;
  code *local_30;
  undefined4 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = &local_1c;
  local_1c = local_34;
  local_30 = FUN_1433d7384;
  FUN_1478f7686(param_1,&local_30,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f2ff8 FUN_1478f2ff8 body=79 status=ok
// SIG undefined FUN_1478f2ff8(void)

void FUN_1478f2ff8(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  code *local_20;
  undefined4 *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_c;
  local_20 = FUN_1433d7384;
  local_c = param_2;
  FUN_1478f7686();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f3048 FUN_1478f3048 body=232 status=ok
// SIG undefined FUN_1478f3048(void)

void FUN_1478f3048(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_1478f3132(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f3132 FUN_1478f3132 body=251 status=ok
// SIG undefined FUN_1478f3132(void)

void FUN_1478f3132(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  longlong local_90 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if ((((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
          ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) &&
         (FUN_147903b66(*plVar1,local_90), local_90[0] == param_3)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        FUN_1478cde98(local_90,*plVar1 + 0xf8,param_2);
        FUN_147904e32(uVar2,local_90,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x90));
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f322e FUN_1478f322e body=260 status=ok
// SIG undefined FUN_1478f322e(void)

void FUN_1478f322e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0x3e4ccccd;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f3334(param_1,puVar2,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f3334 FUN_1478f3334 body=137 status=ok
// SIG undefined FUN_1478f3334(void)

void FUN_1478f3334(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  longlong *local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_24 = *(undefined1 *)((longlong)param_2 + 0xc);
  local_38 = &local_30;
  local_28 = (undefined4)param_2[1];
  local_40 = FUN_1433d7458;
  FUN_1478f7686(param_1,&local_40,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f33be FUN_1478f33be body=308 status=ok
// SIG undefined FUN_1478f33be(void)

void FUN_1478f33be(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  code *local_50;
  undefined1 *local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3e4ccccd;
  local_64 = 0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar2 = local_80;
  puVar3 = &local_78;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f7838(local_40,puVar3);
  local_50 = FUN_1433d74fa;
  local_48 = local_40;
  FUN_1478f7686(param_1,&local_50,uVar2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f34f4 FUN_1478f34f4 body=308 status=ok
// SIG undefined FUN_1478f34f4(void)

void FUN_1478f34f4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f362a(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f362a FUN_1478f362a body=101 status=ok
// SIG undefined FUN_1478f362a(void)

void FUN_1478f362a(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0 && (param_3 != 0 && param_2 != 0)) {
    lVar1 = FUN_1478f778a();
    lVar2 = FUN_1478f778a(param_3,param_4);
    if (lVar2 != 0 && lVar1 != 0) {
      FUN_1479053c8(lVar1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478f3690 FUN_1478f3690 body=217 status=ok
// SIG undefined FUN_1478f3690(void)

void FUN_1478f3690(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_28 != 0) {
    lVar1 = FUN_1478f778a(param_1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1c8) != 0)) {
      local_20 = lVar1;
      FUN_1479054b8(*(longlong *)(lVar1 + 0x1c8) + 0x1b8,&local_20,1);
      *(undefined8 *)(lVar1 + 0x1c8) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f376a FUN_1478f376a body=860 status=ok
// SIG undefined FUN_1478f376a(void)

void FUN_1478f376a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  local_d8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_dc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  local_e0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_e8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  uVar6 = local_c8;
  uVar7 = local_d0;
  uVar5 = local_d8;
  uVar4 = local_dc;
  uVar3 = local_e0;
  uVar2 = local_e4;
  uVar1 = local_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479064ca(local_a0,local_d4);
  FUN_1479064ca(local_c0,uVar5);
  local_f8 = uVar1;
  local_100 = uVar2;
  local_108 = uVar3;
  local_110 = uVar4;
  local_118 = local_c0;
  uVar7 = FUN_1478f41aa(param_1,uVar6,uVar7,local_a0);
  *param_3 = uVar7;
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f3ac8 FUN_1478f3ac8 body=915 status=ok
// SIG undefined FUN_1478f3ac8(void)

void FUN_1478f3ac8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_e0 = 0;
  local_d8 = 0x3e4ccccd;
  local_d4 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_f0 = 0;
  local_e8 = 0x3e4ccccd;
  local_e4 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x38);
  local_f4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f4);
  }
  local_f8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  uVar6 = local_c8;
  uVar7 = local_d0;
  uVar5 = local_f4;
  uVar4 = local_f8;
  uVar3 = local_fc;
  uVar2 = local_100;
  puVar9 = &local_f0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  puVar8 = &local_e0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar8 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479065a0(local_a0,puVar8);
  FUN_1479065a0(local_c0,puVar9);
  local_108 = uVar2;
  local_110 = uVar3;
  local_118 = uVar4;
  local_120 = uVar5;
  local_128 = local_c0;
  uVar7 = FUN_1478f41aa(param_1,uVar6,uVar7,local_a0);
  *param_3 = uVar7;
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f3e5c FUN_1478f3e5c body=844 status=ok
// SIG undefined FUN_1478f3e5c(void)

void FUN_1478f3e5c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3e4ccccd;
  local_54 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3e4ccccd;
  local_74 = 0;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_98 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_c8 = &local_88;
  if (puVar3 != (undefined8 *)0x0) {
    local_c8 = puVar3;
  }
  puVar3 = &local_68;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_98;
  local_b0 = local_94;
  local_b8 = local_90;
  local_c0 = local_8c;
  uVar2 = FUN_1478f41aa(param_1,local_38,local_40,puVar3);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f41aa FUN_1478f41aa body=170 status=ok
// SIG undefined FUN_1478f41aa(void)

longlong FUN_1478f41aa(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                      undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (((param_2 == 0) || (*(longlong *)(param_2 + 0x40) == 0)) ||
     (lVar1 = FUN_1433d9104(param_2,param_3,param_4,param_5,param_6,param_7,param_8), lVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    fVar3 = (float)FUN_1478f2168(param_1,lVar1,param_6,0,param_9,1);
    lVar2 = 0;
    if (0.0 < fVar3) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 1478f425a FUN_1478f425a body=312 status=ok
// SIG undefined FUN_1478f425a(void)

void FUN_1478f425a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f4394(param_1,local_24,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4394 FUN_1478f4394 body=184 status=ok
// SIG undefined FUN_1478f4394(void)

void FUN_1478f4394(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[4];
  local_30 = param_4;
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902704(lVar3,param_2,param_3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4454 FUN_1478f4454 body=312 status=ok
// SIG undefined FUN_1478f4454(void)

void FUN_1478f4454(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478f458e(param_1,local_24,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f458e FUN_1478f458e body=184 status=ok
// SIG undefined FUN_1478f458e(void)

void FUN_1478f458e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[4];
  local_30 = param_4;
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902592(lVar3,param_2,param_3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4648 FUN_1478f4648 body=156 status=ok
// SIG undefined FUN_1478f4648(void)

void FUN_1478f4648(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f46e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f46e6 FUN_1478f46e6 body=126 status=ok
// SIG undefined FUN_1478f46e6(void)

void FUN_1478f46e6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  FUN_1479030f6(lVar3,param_2);
  return;
}



// FUNCTION 1478f4764 FUN_1478f4764 body=308 status=ok
// SIG undefined FUN_1478f4764(void)

void FUN_1478f4764(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478f489a(param_1,local_20,local_24,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f489a FUN_1478f489a body=459 status=ok
// SIG undefined FUN_1478f489a(void)

void FUN_1478f489a(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_78;
  longlong local_68;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_2;
  FUN_144ae08a0(local_98);
  local_98[0] = param_3;
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar6 = (uint)param_2 & 0xffff;
  local_90 = param_4;
  uVar3 = FUN_1478fc558(param_1 + 0x27,
                        ((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4),&local_48);
  FUN_14785af7c(uVar3,local_98);
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_144a74fb4();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
      FUN_14036294a(param_1[4],1,1);
    }
  }
  lVar5 = param_1[0x7c];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar5;
  }
  if (((*(byte *)(lVar5 + 0x7e1) & 0x10) != 0) && (*(longlong *)(lVar5 + 0x150) != 0)) {
    lVar5 = *(longlong *)(lVar5 + 0x150);
  }
  uVar1 = (uint)((ulonglong)local_48 >> 0x10);
  uVar6 = (uint)local_48 & 0xffff;
  uVar3 = FUN_1478fc558(lVar5 + 0x720,
                        ((uint)local_48 << 0x10 | uVar6) + (int)((ulonglong)local_48 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4));
  FUN_14785af7c(uVar3,local_98);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f4a6c FUN_1478f4a6c body=387 status=ok
// SIG undefined FUN_1478f4a6c(void)

void FUN_1478f4a6c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_32 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_32;
  uVar1 = FUN_1478f4bf0(param_1,local_28,local_30,local_31);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4bf0 FUN_1478f4bf0 body=207 status=ok
// SIG undefined FUN_1478f4bf0(void)

void FUN_1478f4bf0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[4];
  local_39 = param_4;
  local_38 = param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  local_48 = &stack0x00000028;
  FUN_147902310(lVar3,&local_38,param_3,&local_39);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4cc0 FUN_1478f4cc0 body=161 status=ok
// SIG undefined FUN_1478f4cc0(void)

void FUN_1478f4cc0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x1b8);
  bVar1 = local_19;
  if (local_19 < bVar2) {
    bVar1 = bVar2;
  }
  *(byte *)(param_1 + 0x1b8) = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4d62 FUN_1478f4d62 body=160 status=ok
// SIG undefined FUN_1478f4d62(void)

void FUN_1478f4d62(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4e04 FUN_1478f4e04 body=251 status=ok
// SIG undefined FUN_1478f4e04(void)

void FUN_1478f4e04(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_147a0ae5e(*(longlong *)(param_1 + 0x20),local_20,local_24,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4f04 FUN_1478f4f04 body=164 status=ok
// SIG undefined FUN_1478f4f04(void)

void FUN_1478f4f04(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xdf | (local_1c != 0) << 5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f4fae FUN_1478f4fae body=164 status=ok
// SIG undefined FUN_1478f4fae(void)

void FUN_1478f4fae(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xef | (local_1c != 0) << 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5054 FUN_1478f5054 body=146 status=ok
// SIG undefined FUN_1478f5054(void)

void FUN_1478f5054(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x30) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f50ec FUN_1478f50ec body=164 status=ok
// SIG undefined FUN_1478f50ec(void)

void FUN_1478f50ec(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xbf | (local_1c != 0) << 6;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5192 FUN_1478f5192 body=218 status=ok
// SIG undefined FUN_1478f5192(void)

void FUN_1478f5192(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,plVar1);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f526e FUN_1478f526e body=232 status=ok
// SIG undefined FUN_1478f526e(void)

void FUN_1478f526e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_1478f5358(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5358 FUN_1478f5358 body=353 status=ok
// SIG undefined FUN_1478f5358(void)

void FUN_1478f5358(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  code *local_98;
  undefined4 *local_90;
  undefined8 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == 0) {
    local_90 = &local_64;
    local_98 = FUN_1433d7384;
    local_64 = param_2;
    FUN_1478f7686(param_1,&local_98,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x90);
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar6 * 8);
        if ((((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) &&
            ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) &&
           ((((char)plVar1[7] == '\x01' && (*(longlong *)(lVar2 + 0x20) == DAT_14c951640)) &&
            (lVar4 = (longlong)*(int *)(lVar2 + 0x170), 0 < lVar4)))) {
          plVar5 = *(longlong **)(lVar2 + 0x168);
          do {
            if ((plVar5 != (longlong *)0x0) && (*plVar5 == param_3)) {
              local_98 = (code *)0x0;
              local_90 = (undefined4 *)CONCAT44(local_90._4_4_,param_2);
              local_7c = 0x3f80000000000000;
              local_74 = 0;
              FUN_1404163bc(&local_98);
              FUN_147904e32(plVar1,&local_98,1);
              iVar3 = *(int *)(param_1 + 0x90);
              break;
            }
            plVar5 = plVar5 + 3;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f54ba FUN_1478f54ba body=191 status=ok
// SIG undefined FUN_1478f54ba(void)

void FUN_1478f54ba(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5584 FUN_1478f5584 body=207 status=ok
// SIG undefined FUN_1478f5584(void)

void FUN_1478f5584(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f565a FUN_1478f565a body=198 status=ok
// SIG undefined FUN_1478f565a(void)

void FUN_1478f565a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = &local_28;
  local_28 = local_48;
  local_30 = &local_40;
  local_38 = &LAB_1433d7ab2;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5728 FUN_1478f5728 body=368 status=ok
// SIG undefined FUN_1478f5728(void)

void FUN_1478f5728(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_28;
  local_28 = local_68;
  local_50 = &local_2c;
  local_2c = local_60;
  local_58 = &local_30;
  local_30 = local_5c;
  local_38 = &local_58;
  local_40 = &LAB_1433d79ae;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f58a0 FUN_1478f58a0 body=283 status=ok
// SIG undefined FUN_1478f58a0(void)

void FUN_1478f58a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_60 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_28;
  local_28 = local_60;
  local_50 = &local_2c;
  local_2c = local_54;
  local_38 = &local_50;
  local_40 = &LAB_1433d7a38;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f59c2 FUN_1478f59c2 body=219 status=ok
// SIG undefined FUN_1478f59c2(void)

void FUN_1478f59c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_38 = &local_48;
  local_28 = &local_38;
  local_30 = FUN_1433d77f8;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5aa4 FUN_1478f5aa4 body=389 status=ok
// SIG undefined FUN_1478f5aa4(void)

void FUN_1478f5aa4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_48 = &local_24;
  local_24 = local_58;
  local_50 = &local_28;
  local_28 = local_54;
  local_30 = &local_50;
  local_40 = &local_68;
  local_38 = FUN_1433d78c6;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5c30 FUN_1478f5c30 body=304 status=ok
// SIG undefined FUN_1478f5c30(void)

void FUN_1478f5c30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_58;
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_48 = &local_24;
  local_24 = local_4c;
  local_30 = &local_48;
  local_40 = &local_60;
  local_38 = FUN_1433d785a;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5d68 FUN_1478f5d68 body=219 status=ok
// SIG undefined FUN_1478f5d68(void)

void FUN_1478f5d68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_38 = &local_48;
  local_28 = &local_38;
  local_30 = FUN_1433d7a50;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5e4a FUN_1478f5e4a body=389 status=ok
// SIG undefined FUN_1478f5e4a(void)

void FUN_1478f5e4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_48 = &local_24;
  local_24 = local_58;
  local_50 = &local_28;
  local_28 = local_54;
  local_30 = &local_50;
  local_40 = &local_68;
  local_38 = FUN_1433d793a;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f5fd6 FUN_1478f5fd6 body=304 status=ok
// SIG undefined FUN_1478f5fd6(void)

void FUN_1478f5fd6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_58;
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_48 = &local_24;
  local_24 = local_4c;
  local_30 = &local_48;
  local_40 = &local_60;
  local_38 = FUN_1433d79cc;
  uVar1 = FUN_1478f8002(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f613a FUN_1478f613a body=152 status=ok
// SIG undefined FUN_1478f613a(void)

void FUN_1478f613a(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  switchD_143c3d4dc::caseD_21();
  if ((~*(byte *)(param_2 + 0x28) & 5) == 0) {
    return;
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478f69e2(param_2,*(undefined8 *)(lVar3 + 0x6a0));
  return;
}



// FUNCTION 1478f61e0 FUN_1478f61e0 body=184 status=ok
// SIG undefined FUN_1478f61e0(void)

void FUN_1478f61e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  FUN_14499183d(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1478fa580(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x28);
  FUN_1449db362(param_1 + 0x18);
  FUN_1449db362(param_1 + 8);
  return;
}



// FUNCTION 1478f6298 FUN_1478f6298 body=117 status=ok
// SIG undefined FUN_1478f6298(void)

void FUN_1478f6298(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_1478ff50e(lVar3,param_2);
  return;
}



// FUNCTION 1478f630e FUN_1478f630e body=201 status=ok
// SIG undefined FUN_1478f630e(void)

void FUN_1478f630e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  local_48 = &local_38;
  local_38 = 0;
  FUN_1479027d6(lVar3,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f63d8 FUN_1478f63d8 body=201 status=ok
// SIG undefined FUN_1478f63d8(void)

void FUN_1478f63d8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  local_48 = &local_38;
  local_38 = 0;
  FUN_1479028aa(lVar3,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f64a2 FUN_1478f64a2 body=763 status=ok
// SIG undefined FUN_1478f64a2(void)

void FUN_1478f64a2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x14);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1478f664e;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x14 + lVar1);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x14 + *local_e0,0);
LAB_1478f664e:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f67a0 FUN_1478f67a0 body=449 status=ok
// SIG undefined FUN_1478f67a0(void)

void FUN_1478f67a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  int local_68;
  int local_60;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x8a8) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x40) + 8) + -1;
    }
    if (param_1 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_144a74fb4();
      iVar2 = *(int *)(lVar5 + 0x38);
      if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
          lVar5 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),1);
      }
      lVar5 = param_1[0x7c];
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar5;
      }
    }
    local_60 = (int)*(short *)(lVar5 + 0x5c8);
    local_68 = (int)*(short *)(lVar5 + 0x5d8);
    local_70 = (uint)*(short *)(lVar5 + 0x5f8);
    local_78 = (uint)*(short *)(lVar5 + 0x5e8);
    local_58 = (double)*(float *)(lVar5 + 0x158);
    FUN_140002266(&local_40,
                  L"LOD(%d/%d) UpdateCounter(%d) EvalCounter(%d) CacheBoneCounter(%d) InitCounter(%d) DeltaSeconds(%.3f)"
                  ,*(undefined4 *)(lVar3 + 0x854),iVar6);
    FUN_147d8f316(param_2,&local_40,param_3);
    cVar4 = FUN_144b22262(lVar3);
    if ((cVar4 != '\0') && (lVar3 = *(longlong *)(lVar3 + 0x9c0), lVar3 != 0)) {
      bVar1 = *(byte *)(lVar3 + 2);
      local_70 = bVar1 & 1;
      local_78 = bVar1 >> 4 & 1;
      FUN_140002266(&local_50,L"URO Rate(%d) SkipUpdate(%d) SkipEval(%d) Interp(%d)",
                    *(undefined4 *)(lVar3 + 4),bVar1 >> 3 & 1);
      if (CONCAT44(uStack_3c,local_40) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      FUN_147d8f316(param_2,&local_40,param_3);
    }
    if (CONCAT44(uStack_3c,local_40) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f6962 FUN_1478f6962 body=1 status=ok
// SIG undefined FUN_1478f6962(void)

void FUN_1478f6962(void)

{
  return;
}



// FUNCTION 1478f6964 FUN_1478f6964 body=126 status=ok
// SIG undefined FUN_1478f6964(void)

void FUN_1478f6964(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  FUN_1478ff6f8(lVar3,param_2);
  return;
}



// FUNCTION 1478f69e2 FUN_1478f69e2 body=486 status=ok
// SIG undefined FUN_1478f69e2(void)

undefined8 FUN_1478f69e2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14041268c();
  FUN_146897be2(param_2 + 0x10,plVar2);
  (**(code **)(*plVar2 + 0x120))(plVar2,param_2 + 0x30);
  (**(code **)(*plVar2 + 0x120))(plVar2,param_2 + 0x38);
  (**(code **)(*plVar2 + 0x120))(plVar2,param_2 + 0x40);
  uVar3 = FUN_1403b0476(plVar2,param_2 + 0x50);
  plVar2 = (longlong *)FUN_1403b0476(uVar3,param_2 + 0x60);
  piVar1 = *(int **)plVar2[1];
  if ((int *)((undefined8 *)plVar2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_2 + 0xfa);
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(plVar2);
    }
    *(bool *)(param_2 + 0xfa) = local_2c != 0;
  }
  else {
    *(bool *)(param_2 + 0xfa) = *piVar1 != 0;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  piVar1 = *(int **)plVar2[1];
  if ((int *)((undefined8 *)plVar2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_2 + 0xfb);
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(plVar2);
    }
    *(bool *)(param_2 + 0xfb) = local_2c != 0;
  }
  else {
    *(bool *)(param_2 + 0xfb) = *piVar1 != 0;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  piVar1 = *(int **)plVar2[1];
  if ((int *)((undefined8 *)plVar2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_2 + 0xfc);
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(plVar2);
    }
    *(bool *)(param_2 + 0xfc) = local_2c != 0;
  }
  else {
    *(bool *)(param_2 + 0xfc) = *piVar1 != 0;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f6bca FUN_1478f6bca body=150 status=ok
// SIG undefined FUN_1478f6bca(void)

void FUN_1478f6bca(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147508b56(param_3,lVar3 + (ulonglong)((param_2 & 0xff) * 0x50) + 0x470);
  return;
}



// FUNCTION 1478f6c60 FUN_1478f6c60 body=136 status=ok
// SIG undefined FUN_1478f6c60(void)

longlong FUN_1478f6c60(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  return lVar3 + (ulonglong)((param_2 & 0xff) * 0x50) + 0x470;
}



// FUNCTION 1478f6ce8 FUN_1478f6ce8 body=274 status=ok
// SIG undefined FUN_1478f6ce8(void)

void FUN_1478f6ce8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  lVar2 = param_2[4];
  if (lVar2 != 0) {
    lVar4 = FUN_144a74fb4();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_2[4],1,1);
      }
    }
  }
  lVar2 = param_2[0x7c];
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_2 + 0x350))(param_2);
    param_2[0x7c] = lVar2;
  }
  lVar4 = 0;
  do {
    FUN_140d188f2(lVar3 + 0x470 + lVar4,lVar2 + 0x470 + lVar4);
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0xf0);
  return;
}



// FUNCTION 1478f6dfa FUN_1478f6dfa body=128 status=ok
// SIG undefined FUN_1478f6dfa(void)

bool FUN_1478f6dfa(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  return *(int *)(lVar3 + 0x544) < *(int *)(lVar3 + 0x518);
}



// FUNCTION 1478f6e7a FUN_1478f6e7a body=169 status=ok
// SIG undefined FUN_1478f6e7a(void)

void FUN_1478f6e7a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_30 = 0;
  local_38 = param_2;
  local_28 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  local_20 = 0;
  local_1c = 0;
  FUN_14063ce9e(param_1,&local_48);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f6f24 FUN_1478f6f24 body=331 status=ok
// SIG undefined FUN_1478f6f24(void)

void FUN_1478f6f24(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    cVar4 = FUN_14348dd60(plVar2);
    bVar5 = FUN_144b220e8(plVar2);
    bVar6 = (**(code **)(*plVar2 + 0xb48))(plVar2);
    iVar1 = (int)DAT_14c872be0;
    if (((cVar4 == '\0') && ((bVar5 & bVar6) == 0)) &&
       (iVar9 = *(int *)(param_1 + 0x2b0), *(int *)(param_1 + 0x2b0) = (int)DAT_14c872be0,
       iVar9 != iVar1)) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (0 < (longlong)iVar1) {
        iVar9 = -iVar1;
        uVar8 = (longlong)iVar1;
        do {
          if (((((longlong)uVar8 <= (longlong)*(int *)(param_1 + 0x90)) &&
               (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + -8 + uVar8 * 8),
               plVar2 != (longlong *)0x0)) &&
              ((*plVar2 != 0 &&
               ((*(float *)(plVar2 + 0x2e) == 0.0 && (!NAN(*(float *)(plVar2 + 0x2e)))))))) &&
             (cVar4 = FUN_1417b384c(plVar2 + 0x2a), cVar4 != '\0')) {
            FUN_1433da692(plVar2);
            FUN_1433d54a2(param_1,plVar2);
            FUN_1478f61e0(plVar2);
            FUN_1400020a8(plVar2);
            uVar7 = *(uint *)(param_1 + 0x90);
            if (uVar8 != uVar7) {
              memmove((void *)(*(longlong *)(param_1 + 0x88) + uVar8 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x88) + uVar8 * 8),
                      (longlong)(int)(uVar7 + iVar9) << 3);
              uVar7 = *(uint *)(param_1 + 0x90);
            }
            *(uint *)(param_1 + 0x90) = uVar7 - 1;
            FUN_1478fc166((longlong *)(param_1 + 0x88));
          }
          iVar9 = iVar9 + 1;
          bVar3 = 1 < uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar3);
      }
    }
  }
  return;
}



// FUNCTION 1478f7070 FUN_1478f7070 body=160 status=ok
// SIG undefined FUN_1478f7070(void)

void FUN_1478f7070(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    FUN_147903b66(param_2,local_28);
    uVar2 = local_28._0_4_ & 0xffff;
    uVar1 = FUN_1478fcba8(param_1 + 0x138,
                          (local_28._0_4_ << 0x10 | uVar2) + local_28._4_4_ +
                          (local_28._2_4_ << 0x13 | local_28._2_4_ & 0xffff) + (uVar2 >> 4),local_28
                         );
    FUN_14785af7c(uVar1,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f7112 FUN_1478f7112 body=97 status=ok
// SIG undefined FUN_1478f7112(void)

void FUN_1478f7112(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    FUN_1478f7174(param_1,param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
    FUN_1478fce52((longlong *)(param_1 + 0x188),iVar1);
  }
  FUN_1478fcdfc((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x188),param_2);
  return;
}



// FUNCTION 1478f7174 FUN_1478f7174 body=119 status=ok
// SIG undefined FUN_1478f7174(void)

void FUN_1478f7174(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)param_2[2];
  if (plVar1 != (longlong *)0x0 && *(int *)(param_2 + 3) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_2,*(undefined1 *)(param_2 + 1));
  }
  local_20 = *(undefined1 *)(param_2 + 1);
  local_28 = *param_2;
  FUN_1447cd2ec(param_1 + 0x38);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f71ec FUN_1478f71ec body=98 status=ok
// SIG undefined FUN_1478f71ec(void)

void FUN_1478f71ec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    FUN_1478f724e(param_1,param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_1478fcfac((longlong *)(param_1 + 0x198),iVar1);
  }
  FUN_1478fcf5c((longlong)iVar1 * 0x18 + *(longlong *)(param_1 + 0x198),param_2);
  return;
}



// FUNCTION 1478f724e FUN_1478f724e body=109 status=ok
// SIG undefined FUN_1478f724e(void)

void FUN_1478f724e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0 && *(int *)(param_2 + 2) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_2);
  }
  local_20 = *param_2;
  FUN_1447cd2ec(param_1 + 0x48);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f72bc FUN_1478f72bc body=97 status=ok
// SIG undefined FUN_1478f72bc(void)

void FUN_1478f72bc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    FUN_1478f731e(param_1,param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_1478fd120((longlong *)(param_1 + 0x1a8),iVar1);
  }
  FUN_1478fd0c4((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x1a8),param_2);
  return;
}



// FUNCTION 1478f731e FUN_1478f731e body=689 status=ok
// SIG undefined FUN_1478f731e(void)

void FUN_1478f731e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_1[4];
  if ((local_68 != 0) && (0 < (longlong)(int)param_1[0x51])) {
    plVar8 = param_1 + 0x50;
    local_78 = param_1 + 0x52;
    uVar9 = (longlong)(int)param_1[0x51];
    local_90 = plVar8;
    local_88 = param_2;
    do {
      if ((longlong)(int)param_1[0x51] < (longlong)uVar9) break;
      uVar10 = uVar9 - 1;
      local_60 = *plVar8;
      plVar7 = (longlong *)(uVar10 * 0x30 + *local_78);
      local_70 = uVar10 * 0xb8;
      lVar13 = *(longlong *)(*(longlong *)(local_60 + 0x50 + local_70) + 0x20);
      if (lVar13 == 0) {
LAB_1478f73eb:
        lVar13 = 0;
      }
      else {
        lVar6 = FUN_144a718e6();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1478f73eb;
      }
      plVar1 = (longlong *)*plVar7;
      iVar12 = -1;
      if ((plVar1 != (longlong *)0x0) &&
         (lVar6 = plVar1[1], plVar8 = local_90, (longlong)(int)lVar6 != 0)) {
        lVar2 = *plVar1;
        lVar14 = 0;
        local_80 = uVar10;
        do {
          plVar8 = *(longlong **)(lVar2 + lVar14);
          (**(code **)(*plVar8 + 8))(plVar8,&local_58);
          plVar8 = local_90;
          uVar10 = local_80;
          param_2 = local_88;
          if (local_58 == DAT_14cacb0b0) {
            lVar6 = *(longlong *)(lVar2 + lVar14);
            if (lVar6 != 0) {
              iVar12 = *(int *)(lVar6 + 8);
            }
            break;
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar14);
      }
      if ((lVar13 != 0) && (iVar12 == (int)param_2[1])) {
        puVar11 = (undefined8 *)(local_60 + local_70 + 0x50);
        cVar4 = (**(code **)(*param_1 + 0x360))(param_1,*puVar11);
        if (cVar4 != '\0') {
          local_98 = *(undefined1 *)((longlong)param_2 + 0xc);
          plVar1 = (longlong *)*puVar11;
          (**(code **)(*plVar1 + 0x2d0))(plVar1,local_68,lVar13,plVar7);
        }
        uVar5 = *(uint *)(param_1 + 0x51);
        if ((longlong)(int)uVar5 < (longlong)uVar9) goto LAB_1478f75a8;
        if (uVar9 != uVar5) {
          iVar12 = uVar5 - (int)uVar9;
          if (0 < iVar12) {
            iVar12 = 1;
          }
          memmove((void *)(local_70 + param_1[0x50]),
                  (void *)((ulonglong)(uVar5 - iVar12) * 0xb8 + param_1[0x50]),
                  (longlong)iVar12 * 0xb8);
          uVar5 = *(uint *)(param_1 + 0x51);
        }
        *(uint *)(param_1 + 0x51) = uVar5 - 1;
        FUN_1478fc208(plVar8);
        plVar7 = local_78;
        FUN_1433d7122(local_78,uVar10 & 0xffffffff);
        FUN_1478fc2be(plVar7);
      }
      bVar3 = 1 < (longlong)uVar9;
      uVar9 = uVar10;
    } while (bVar3);
  }
  plVar8 = (longlong *)param_2[2];
  if (plVar8 != (longlong *)0x0 && (int)param_2[3] != 0) {
    (**(code **)(*plVar8 + 0x60))(plVar8,*param_2,*(undefined1 *)((longlong)param_2 + 0xc));
  }
  local_50 = *(undefined1 *)((longlong)param_2 + 0xc);
  local_58 = *param_2;
  FUN_1447cd2ec(param_1 + 0xd);
LAB_1478f75a8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478f75d0 FUN_1478f75d0 body=181 status=ok
// SIG undefined FUN_1478f75d0(void)

undefined8 FUN_1478f75d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar4 * 8);
      if (((((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) &&
          ((((char)plVar1[7] == '\x01' && (*(longlong *)(lVar2 + 0x20) == DAT_14c951640)) &&
           (puVar3 = (undefined8 *)FUN_1456b2ecc(lVar2,param_3), puVar3 != (undefined8 *)0x0)))) &&
         (*(int *)(puVar3 + 1) == 1)) {
        *param_4 = lVar2;
        return CONCAT71((int7)((ulonglong)*puVar3 >> 8),*(longlong *)*puVar3 == param_2);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x90));
  }
  return 0;
}



// FUNCTION 1478f7686 FUN_1478f7686 body=258 status=ok
// SIG undefined FUN_1478f7686(void)

void FUN_1478f7686(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
          if ((*(float *)(plVar2 + 0x2e) != 0.0) || (NAN(*(float *)(plVar2 + 0x2e)))) {
            local_58 = plVar2;
            (*(code *)*param_2)(local_78,param_2[1],&local_58);
            FUN_1433da1c6(plVar2,local_78,1);
            iVar1 = *(int *)(param_1 + 0x90);
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  else {
    plVar2 = (longlong *)FUN_1478f778a(param_1,param_3);
    if (plVar2 != (longlong *)0x0) {
      local_58 = plVar2;
      (*(code *)*param_2)(local_78,param_2[1]);
      FUN_1433da1c6(plVar2,local_78,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f778a FUN_1478f778a body=174 status=ok
// SIG undefined FUN_1478f778a(void)

ulonglong FUN_1478f778a(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1478f7838 FUN_1478f7838 body=106 status=ok
// SIG undefined FUN_1478f7838(void)

longlong * FUN_1478f7838(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 1478f78a2 FUN_1478f78a2 body=164 status=ok
// SIG undefined FUN_1478f78a2(void)

void FUN_1478f78a2(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) {
          FUN_1478fced8(plVar1 + 1,param_2);
          iVar2 = *(int *)(param_1 + 0x90);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1,param_3);
    if (lVar3 != 0) {
      FUN_1478fced8(lVar3 + 8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1478f7946 FUN_1478f7946 body=164 status=ok
// SIG undefined FUN_1478f7946(void)

void FUN_1478f7946(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
           ((*(float *)(plVar1 + 0x2e) != 0.0 || (NAN(*(float *)(plVar1 + 0x2e)))))) {
          FUN_1478fced8(plVar1 + 3,param_2);
          iVar2 = *(int *)(param_1 + 0x90);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  else {
    lVar3 = FUN_1478f778a(param_1,param_3);
    if (lVar3 != 0) {
      FUN_1478fced8(lVar3 + 0x18,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1478f79ea thunk_FUN_1433d54a2 body=5 status=ok
// SIG undefined thunk_FUN_1433d54a2(void)

void thunk_FUN_1433d54a2(void)

{
  FUN_1433d54a2();
  return;
}



// FUNCTION 1478f79f0 FUN_1478f79f0 body=254 status=ok
// SIG undefined FUN_1478f79f0(void)

longlong FUN_1478f79f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) == param_2) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0x18;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1478f7af0 FUN_1478f7af0 body=326 status=ok
// SIG undefined FUN_1478f7af0(void)

longlong FUN_1478f7af0(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (cVar1 = FUN_144a61b4f(), cVar1 != '\0')) {
      FUN_14036294a(param_1[4],1,1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  if (param_2 == 0 && param_3 == 0) {
    lVar3 = *(longlong *)(lVar3 + 0x178);
  }
  else {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      uVar4 = FUN_144a83cc4();
      plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        if (param_2 == 0) {
          param_2 = DAT_14cacc358;
        }
        if (param_3 == 0) {
          param_3 = DAT_14cacc360;
        }
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x80))(plVar5);
        if ((longlong)(int)plVar5[1] != 0) {
          plVar6 = (longlong *)*plVar5;
          plVar5 = plVar6 + (longlong)(int)plVar5[1] * 0xf;
          do {
            if ((*plVar6 == param_3) && (0 < (longlong)(int)plVar6[4])) {
              lVar3 = 0;
              do {
                if ((*(longlong *)(plVar6[3] + lVar3 * 8) == param_2) &&
                   (lVar2 = *(longlong *)(plVar6[8] + lVar3 * 8), lVar2 != 0)) {
                  return (longlong)param_1 + (longlong)*(int *)(lVar2 + 0x44);
                }
                lVar3 = lVar3 + 1;
              } while ((int)plVar6[4] != lVar3);
            }
            plVar6 = plVar6 + 0xf;
            if (plVar6 == plVar5) {
              return 0;
            }
          } while( true );
        }
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1478f7c36 FUN_1478f7c36 body=138 status=ok
// SIG undefined FUN_1478f7c36(void)

void FUN_1478f7c36(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  undefined1 *local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x9c) & 1) != 0) {
    local_20 = &local_11;
    local_28 = FUN_1433d76be;
    local_30 = *param_2;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140f48eb4(param_1,&local_30,&local_28,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f7cc2 FUN_1478f7cc2 body=138 status=ok
// SIG undefined FUN_1478f7cc2(void)

void FUN_1478f7cc2(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  undefined1 *local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x9c) & 1) != 0) {
    local_20 = &local_11;
    local_28 = FUN_1433d770e;
    local_30 = *param_2;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140f48eb4(param_1,&local_30,&local_28,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f7d4e FUN_1478f7d4e body=55 status=ok
// SIG undefined FUN_1478f7d4e(void)

longlong FUN_1478f7d4e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar2);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x130) == param_2)) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x90) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1478f7d86 FUN_1478f7d86 body=437 status=ok
// SIG undefined FUN_1478f7d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1478f7d86(longlong param_1,undefined1 *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_138 [32];
  undefined8 local_118 [12];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar11 = (double)param_3;
  dVar1 = *(double *)(param_1 + 0x40);
  dVar9 = *(double *)(param_1 + 0x38) * dVar11;
  dVar2 = *(double *)(param_1 + 0x30);
  local_118[0] = *(undefined8 *)(param_1 + 0x10);
  local_118[1] = *(undefined8 *)(param_1 + 0x18);
  local_118[2] = *(undefined8 *)(param_1 + 0x20);
  local_118[3] = *(undefined8 *)(param_1 + 0x28);
  FUN_144a44da6(local_b8,&DAT_14c8463d0);
  dVar12 = (double)local_a8._0_8_ * (double)local_a8._0_8_ +
           (double)local_b8._0_8_ * (double)local_b8._0_8_;
  dVar15 = (double)local_a8._8_8_ * (double)local_a8._8_8_ +
           (double)local_b8._8_8_ * (double)local_b8._8_8_;
  auVar13._0_8_ = dVar12 + dVar15;
  auVar13._8_8_ = dVar12 + dVar15;
  auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
  auVar14 = sqrtpd(auVar13,auVar13);
  auVar14 = divpd(_DAT_149934d80,auVar14);
  auVar16._0_8_ = auVar14._0_8_ * (double)local_a8._0_8_;
  auVar16._8_8_ = auVar14._8_8_ * (double)local_a8._8_8_;
  local_a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar10);
  uVar3 = (ulonglong)((double)local_b8._8_8_ * auVar14._8_8_) &
          -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  local_b8._8_4_ = (int)uVar3;
  local_b8._0_8_ =
       (ulonglong)((double)local_b8._0_8_ * auVar14._0_8_) &
       -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
  local_b8._12_4_ = (int)(uVar3 >> 0x20);
  local_98._8_4_ = SUB84(dVar9,0);
  local_98._0_8_ = dVar2 * dVar11;
  local_98._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_70 = (undefined4)DAT_14cacb0e8;
  uStack_6c = (undefined4)((ulonglong)DAT_14cacb0e8 >> 0x20);
  uStack_80 = 0;
  local_78 = _DAT_14cacb0e0;
  uStack_74 = uRam000000014cacb0e4;
  local_68 = DAT_14cacb0f0;
  uStack_60 = 0;
  local_88 = dVar1 * dVar11;
  FUN_1449437a2((undefined8 *)(param_1 + 0x10),local_118,local_b8);
  puVar7 = local_118;
  puVar8 = (undefined8 *)(param_1 + 0x10);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 0x10) = local_b8._0_8_;
  *(undefined8 *)(param_2 + 0x18) = local_b8._8_8_;
  *(undefined8 *)(param_2 + 0x20) = local_a8._0_8_;
  *(undefined8 *)(param_2 + 0x28) = local_a8._8_8_;
  *(undefined4 *)(param_2 + 0x30) = local_98._0_4_;
  *(undefined4 *)(param_2 + 0x34) = local_98._4_4_;
  *(undefined4 *)(param_2 + 0x38) = local_98._8_4_;
  *(undefined4 *)(param_2 + 0x3c) = local_98._12_4_;
  *(double *)(param_2 + 0x40) = local_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  uVar5 = DAT_14cacb0f0;
  uVar4 = DAT_14cacb0e8;
  *(ulonglong *)(param_2 + 0x50) = CONCAT44(uRam000000014cacb0e4,_DAT_14cacb0e0);
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f7f3c FUN_1478f7f3c body=198 status=ok
// SIG undefined FUN_1478f7f3c(void)

undefined8 *
FUN_1478f7f3c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined1 param_5,undefined1 param_6,longlong *param_7,undefined8 param_8,
             undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  FUN_14485c47a();
  lVar1 = *param_7;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 6) = (int)param_7[5];
  lVar1 = param_7[1];
  lVar2 = param_7[2];
  lVar3 = param_7[4];
  param_1[4] = param_7[3];
  param_1[5] = lVar3;
  param_1[2] = lVar1;
  param_1[3] = lVar2;
  param_1[7] = param_8;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x44) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 10) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x54) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x55) = param_6;
  return param_1;
}



// FUNCTION 1478f8002 FUN_1478f8002 body=234 status=ok
// SIG undefined FUN_1478f8002(void)

undefined8 FUN_1478f8002(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  local_28 = lVar3;
  cVar1 = (*(code *)*param_2)(param_2[1]);
  uVar4 = 1;
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(lVar3 + 0x150);
    if (lVar2 == lVar3 || lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_28 = lVar2;
      uVar4 = (*(code *)*param_2)(param_2[1]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f80ee FUN_1478f80ee body=126 status=ok
// SIG undefined FUN_1478f80ee(void)

void FUN_1478f80ee(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790146c(lVar3,param_2);
  return;
}



// FUNCTION 1478f816c FUN_1478f816c body=128 status=ok
// SIG undefined FUN_1478f816c(void)

void FUN_1478f816c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_14790297e(lVar3,param_2);
  return;
}



// FUNCTION 1478f81ec FUN_1478f81ec body=128 status=ok
// SIG undefined FUN_1478f81ec(void)

void FUN_1478f81ec(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902a92(lVar3,param_2);
  return;
}



// FUNCTION 1478f826c FUN_1478f826c body=148 status=ok
// SIG undefined FUN_1478f826c(void)

void FUN_1478f826c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902baa(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478f8300 FUN_1478f8300 body=137 status=ok
// SIG undefined FUN_1478f8300(void)

void FUN_1478f8300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902cd0(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478f838a FUN_1478f838a body=142 status=ok
// SIG undefined FUN_1478f838a(void)

undefined8 FUN_1478f838a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902e3c(lVar3,param_2,param_3);
  return param_2;
}



// FUNCTION 1478f8418 FUN_1478f8418 body=142 status=ok
// SIG undefined FUN_1478f8418(void)

undefined8 FUN_1478f8418(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_147902f70(lVar3,param_2,param_3);
  return param_2;
}



// FUNCTION 1478f84a6 FUN_1478f84a6 body=118 status=ok
// SIG undefined FUN_1478f84a6(void)

undefined8 FUN_1478f84a6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar2 = FUN_144a74fb4();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  return *(undefined8 *)(lVar3 + 0x6a0);
}



// FUNCTION 1478f851c FUN_1478f851c body=120 status=ok
// SIG undefined FUN_1478f851c(void)

undefined8 FUN_1478f851c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_144a74fb4();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  return *(undefined8 *)(lVar3 + 0x6a0);
}



// FUNCTION 1478f8594 FUN_1478f8594 body=187 status=ok
// SIG undefined FUN_1478f8594(void)

void FUN_1478f8594(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar6 = local_a8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = *param_3;
  iVar1 = *(int *)(param_1 + 0x368);
  *(uint *)(param_1 + 0x368) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x36c) < iVar1 + 1U) {
    FUN_1478ff032((longlong *)(param_1 + 0x360),iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x360);
  lVar5 = (longlong)iVar1 * 0x70;
  puVar6 = local_a8;
  puVar7 = (undefined8 *)(lVar3 + lVar5);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined8 *)(lVar3 + 0x60 + lVar5) = uVar2;
  *(undefined4 *)(lVar3 + 0x68 + lVar5) = param_4;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f8650 FUN_1478f8650 body=55 status=ok
// SIG undefined FUN_1478f8650(void)

undefined8 * FUN_1478f8650(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimBoneCompressionCodec.h",0x57,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::AllocateAnimData"
               );
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1478f8688 FUN_1478f8688 body=41 status=ok
// SIG undefined FUN_1478f8688(void)

void FUN_1478f8688(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimBoneCompressionCodec.h",0x60,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::ByteSwapIn");
  return;
}



// FUNCTION 1478f86b2 FUN_1478f86b2 body=41 status=ok
// SIG undefined FUN_1478f86b2(void)

void FUN_1478f86b2(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimBoneCompressionCodec.h",0x69,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::ByteSwapOut");
  return;
}



// FUNCTION 1478f86dc FUN_1478f86dc body=41 status=ok
// SIG undefined FUN_1478f86dc(void)

void FUN_1478f86dc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimBoneCompressionCodec.h",0x70,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::DecompressPose");
  return;
}



// FUNCTION 1478f8706 FUN_1478f8706 body=41 status=ok
// SIG undefined FUN_1478f8706(void)

void FUN_1478f8706(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimBoneCompressionCodec.h",0x73,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::DecompressBone");
  return;
}



// FUNCTION 1478f8730 FUN_1478f8730 body=45 status=ok
// SIG undefined FUN_1478f8730(void)

longlong FUN_1478f8730(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140eff6fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f875e FUN_1478f875e body=45 status=ok
// SIG undefined FUN_1478f875e(void)

longlong FUN_1478f875e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140eff6fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f878c FUN_1478f878c body=45 status=ok
// SIG undefined FUN_1478f878c(void)

longlong FUN_1478f878c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140eff6fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f87ba FUN_1478f87ba body=41 status=ok
// SIG undefined FUN_1478f87ba(void)

void FUN_1478f87ba(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h",0x183,
                L"Pure virtual not implemented (%s)",L"UAnimCompositeBase::InvalidateRecursiveAsset"
               );
  return;
}



// FUNCTION 1478f87e4 FUN_1478f87e4 body=42 status=ok
// SIG undefined FUN_1478f87e4(void)

undefined8 FUN_1478f87e4(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h",0x188,
                L"Pure virtual not implemented (%s)",L"UAnimCompositeBase::ContainRecursive");
  return 0;
}



// FUNCTION 1478f880e FUN_1478f880e body=41 status=ok
// SIG undefined FUN_1478f880e(void)

void FUN_1478f880e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h",0x18a,
                L"Pure virtual not implemented (%s)",L"UAnimCompositeBase::SetCompositeLength");
  return;
}



// FUNCTION 1478f8838 FUN_1478f8838 body=45 status=ok
// SIG undefined FUN_1478f8838(void)

longlong FUN_1478f8838(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f8866 FUN_1478f8866 body=45 status=ok
// SIG undefined FUN_1478f8866(void)

longlong FUN_1478f8866(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f8894 FUN_1478f8894 body=45 status=ok
// SIG undefined FUN_1478f8894(void)

longlong FUN_1478f8894(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f88cc FUN_1478f88cc body=41 status=ok
// SIG undefined FUN_1478f88cc(void)

void FUN_1478f88cc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimCurveCompressionCodec.h",0x48,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::DecompressCurves"
               );
  return;
}



// FUNCTION 1478f88fa FUN_1478f88fa body=43 status=ok
// SIG undefined FUN_1478f88fa(void)

undefined8 FUN_1478f88fa(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimCurveCompressionCodec.h",0x4f,
                L"Pure virtual not implemented (%s)",L"UAnimCurveCompressionCodec::DecompressCurve")
  ;
  return 0;
}



// FUNCTION 1478f892a FUN_1478f892a body=45 status=ok
// SIG undefined FUN_1478f892a(void)

longlong FUN_1478f892a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c27320(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f89e6 FUN_1478f89e6 body=54 status=ok
// SIG undefined FUN_1478f89e6(void)

undefined1 FUN_1478f89e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478f8af8(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1478f8a44 FUN_1478f8a44 body=59 status=ok
// SIG undefined FUN_1478f8a44(void)

undefined8 FUN_1478f8a44(longlong *param_1)

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



// FUNCTION 1478f8a8a FUN_1478f8a8a body=32 status=ok
// SIG undefined FUN_1478f8a8a(void)

void FUN_1478f8a8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140002ec8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1478f8af8 FUN_1478f8af8 body=113 status=ok
// SIG undefined FUN_1478f8af8(void)

undefined4 * FUN_1478f8af8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1406fa324(param_1 + 6,param_2 + 6);
  FUN_14054c6c4(param_1 + 10,param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  FUN_1478f8b6a(param_1 + 0x10,param_2 + 0x10);
  FUN_1478f8bc2(param_1 + 0x14,param_2 + 0x14);
  FUN_145860d02(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1478f8b6a FUN_1478f8b6a body=88 status=ok
// SIG undefined FUN_1478f8b6a(void)

undefined8 * FUN_1478f8b6a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478deba0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478f8bc2 FUN_1478f8bc2 body=89 status=ok
// SIG undefined FUN_1478f8bc2(void)

undefined8 * FUN_1478f8bc2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478dec02(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}


