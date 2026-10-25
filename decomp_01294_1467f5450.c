// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467f5450 FUN_1467f5450 body=27 status=ok
// SIG undefined FUN_1467f5450(void)

undefined * FUN_1467f5450(longlong param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149e1f938;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x58))) {
    puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x50) + (ulonglong)param_2 * 8);
  }
  return puVar1;
}



// FUNCTION 1467f546c FUN_1467f546c body=157 status=ok
// SIG undefined FUN_1467f546c(void)

undefined8 * FUN_1467f546c(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c846040) {
    FUN_144b3d300(&DAT_14c846040);
    if (DAT_14c846040 == -1) {
      FUN_140056680(&DAT_14c846030,L"BadIndex");
      atexit((_func_5014 *)&LAB_14276e1b9);
      _Init_thread_footer(&DAT_14c846040);
    }
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x58))) {
    puVar1 = (undefined8 *)
             FUN_1467f550a(param_1,*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x50) + (ulonglong)param_2 * 8));
    return puVar1;
  }
  return &DAT_14c846030;
}



// FUNCTION 1467f550a FUN_1467f550a body=245 status=ok
// SIG undefined FUN_1467f550a(void)

longlong FUN_1467f550a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20) == param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x20;
        goto LAB_1467f55dd;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_1467f55dd:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f5600 FUN_1467f5600 body=191 status=ok
// SIG undefined FUN_1467f5600(void)

undefined8 * FUN_1467f5600(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c846050) && (FUN_144b3d300(&DAT_14c846050), DAT_14c846050 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c846048 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LegacyLuminanceFactors",1);
    _Init_thread_footer(&DAT_14c846050);
  }
  if ((DAT_14c846048 != (longlong *)0x0) &&
     (iVar1 = (**(code **)(*DAT_14c846048 + 0xb0))(), iVar1 != 0)) {
    *param_1 = 0x3f170a3d3e99999a;
    param_1[1] = 0x3f8000003de147ae;
    return param_1;
  }
  uVar2 = FUN_14029dc1a();
  FUN_145731c30(uVar2,param_1);
  return param_1;
}



// FUNCTION 1467f56c0 FUN_1467f56c0 body=70 status=ok
// SIG undefined FUN_1467f56c0(void)

float FUN_1467f56c0(uint param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  param_3 = param_3 & 0xffffff;
  lVar1 = 0;
  do {
    uVar2 = 0;
    if ((param_1 & 1) != 0) {
      uVar2 = *(uint *)(&DAT_149e243d0 + (longlong)param_2 * 0x80 + lVar1 * 4);
    }
    param_3 = param_3 ^ uVar2;
    lVar1 = lVar1 + 1;
    param_1 = (int)param_1 >> 1;
  } while (lVar1 != 0x20);
  return (float)(int)param_3 * 5.9604645e-08;
}



// FUNCTION 1467f5706 FUN_1467f5706 body=78 status=ok
// SIG undefined FUN_1467f5706(void)

float FUN_1467f5706(uint param_1,int param_2,float param_3)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    param_3 = (float)(int)((uint)(int)ROUND(param_3 * 16777216.0 + param_3 * 16777216.0 + -0.5) >> 1
                           & 0xffffff ^
                          *(uint *)(&DAT_149e1fad0 + (ulonglong)uVar1 * 4 + (longlong)param_2 * 0x80
                                   )) * 5.9604645e-08;
  }
  return param_3;
}



// FUNCTION 1467f5754 FUN_1467f5754 body=427 status=ok
// SIG undefined FUN_1467f5754(void)

void FUN_1467f5754(double *param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  double dVar12;
  
  bVar3 = (byte)param_3;
  uVar6 = ~(-1 << (bVar3 & 0x1f));
  uVar7 = ((uint)((ulonglong)param_5 >> 0x20) & 0xffffff) >> (bVar3 & 0x1f);
  uVar8 = ((uint)param_5 & 0xffffff) >> (bVar3 & 0x1f);
  uVar5 = (uint)((ulonglong)param_4 >> 0x20) & uVar6;
  uVar6 = uVar6 & (uint)param_4;
  if (uVar6 != 0 && 0 < (int)param_3) {
    lVar4 = (ulonglong)param_3 * 0x100;
    uVar9 = 1;
    do {
      uVar8 = *(int *)(&UNK_149e202c8 + uVar9 * 8 + lVar4) * (uVar6 & 1) ^ uVar8;
      uVar7 = (uVar6 & 1) * *(int *)(&UNK_149e202cc + uVar9 * 8 + lVar4) ^ uVar7;
      if (param_3 <= uVar9) break;
      uVar9 = uVar9 + 1;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar1);
  }
  iVar2 = param_3 * 2;
  lVar4 = (longlong)(int)param_3;
  if (uVar5 != 0 && (int)param_3 < iVar2) {
    piVar11 = (int *)(&DAT_149e202d4 + lVar4 * 0x108);
    lVar10 = lVar4;
    do {
      lVar10 = lVar10 + 1;
      uVar8 = piVar11[-1] * (uVar5 & 1) ^ uVar8;
      uVar7 = (uVar5 & 1) * *piVar11 ^ uVar7;
      if (iVar2 <= lVar10) break;
      piVar11 = piVar11 + 2;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
  }
  if (param_2 != 0 && (int)param_3 < 0x10) {
    lVar10 = (longlong)iVar2;
    do {
      uVar8 = *(int *)(&DAT_149e202d0 + lVar10 * 8 + lVar4 * 0x100) * (param_2 & 1) ^ uVar8;
      uVar7 = (param_2 & 1) * *(int *)(&DAT_149e202d4 + lVar10 * 8 + lVar4 * 0x100) ^ uVar7;
      if (0x1e < lVar10) break;
      lVar10 = lVar10 + 1;
      bVar1 = 1 < param_2;
      param_2 = (int)param_2 >> 1;
    } while (bVar1);
  }
  dVar12 = 1.0 / (double)(1 << (0x18 - bVar3 & 0x1f));
  *param_1 = dVar12 * (double)(int)uVar8;
  param_1[1] = (double)(int)uVar7 * dVar12;
  return;
}



// FUNCTION 1467f5900 FUN_1467f5900 body=153 status=ok
// SIG undefined FUN_1467f5900(void)

void FUN_1467f5900(double *param_1,uint param_2,int param_3,double *param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  if (param_2 != 0) {
    dVar4 = (double)(1 << (0x18U - (char)param_3 & 0x1f));
    dVar1 = param_4[1];
    uVar3 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    uVar2 = *(uint *)(&DAT_149e212d4 + (ulonglong)uVar3 * 8 + (longlong)param_3 * 0x100);
    *param_1 = (1.0 / dVar4) *
               (double)(int)((int)(*param_4 * dVar4) & 0xffffffU ^
                            *(uint *)(&DAT_149e212d0 +
                                     (ulonglong)uVar3 * 8 + (longlong)param_3 * 0x100));
    param_1[1] = (double)(int)((int)(dVar1 * dVar4) & 0xffffffU ^ uVar2) * (1.0 / dVar4);
    return;
  }
  dVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 1467f599a FUN_1467f599a body=604 status=ok
// SIG undefined FUN_1467f599a(void)

void FUN_1467f599a(double *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  double dVar17;
  
  bVar3 = (byte)param_3;
  uVar7 = ~(-1 << (bVar3 & 0x1f));
  uVar9 = param_4[2] & uVar7;
  uVar6 = param_4[1] & uVar7;
  uVar7 = uVar7 & *param_4;
  *param_4 = uVar7;
  param_4[1] = uVar6;
  param_4[2] = uVar9;
  uVar13 = (param_5[2] & 0xffffff) >> (bVar3 & 0x1f);
  uVar8 = (param_5[1] & 0xffffff) >> (bVar3 & 0x1f);
  uVar14 = (*param_5 & 0xffffff) >> (bVar3 & 0x1f);
  if (0 < (int)param_3) {
    lVar12 = (ulonglong)param_3 * 0x180;
    lVar15 = 0;
    do {
      if (uVar7 == 0) break;
      uVar4 = 0;
      uVar11 = 0;
      uVar10 = 0;
      if ((uVar7 & 1) != 0) {
        uVar4 = *(uint *)(&DAT_149e222d0 + lVar15 + lVar12);
        uVar11 = *(uint *)(&DAT_149e222d4 + lVar15 + lVar12);
        uVar10 = *(uint *)(&DAT_149e222d8 + lVar15 + lVar12);
      }
      uVar14 = uVar14 ^ uVar4;
      uVar8 = uVar8 ^ uVar11;
      uVar13 = uVar13 ^ uVar10;
      uVar7 = uVar7 >> 1;
      *param_4 = uVar7;
      lVar15 = lVar15 + 0xc;
    } while ((ulonglong)param_3 * 0xc != lVar15);
  }
  iVar2 = param_3 * 2;
  lVar12 = (longlong)(int)param_3;
  if ((int)param_3 < iVar2) {
    puVar16 = (uint *)(&DAT_149e222d8 + lVar12 * 0x18c);
    uVar7 = param_3;
    do {
      if (uVar6 == 0) break;
      uVar4 = 0;
      uVar11 = 0;
      uVar10 = 0;
      if ((uVar6 & 1) != 0) {
        uVar4 = puVar16[-2];
        uVar11 = puVar16[-1];
        uVar10 = *puVar16;
      }
      uVar14 = uVar14 ^ uVar4;
      uVar8 = uVar8 ^ uVar11;
      uVar13 = uVar13 ^ uVar10;
      uVar6 = uVar6 >> 1;
      param_4[1] = uVar6;
      puVar16 = puVar16 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar2 < (int)(param_3 * 3)) {
    puVar16 = (uint *)(&DAT_149e222d8 + lVar12 * 0x180 + (longlong)iVar2 * 0xc);
    uVar6 = param_3;
    do {
      if (uVar9 == 0) break;
      uVar7 = 0;
      uVar4 = 0;
      uVar11 = 0;
      if ((uVar9 & 1) != 0) {
        uVar7 = puVar16[-2];
        uVar4 = puVar16[-1];
        uVar11 = *puVar16;
      }
      uVar14 = uVar14 ^ uVar7;
      uVar8 = uVar8 ^ uVar4;
      uVar13 = uVar13 ^ uVar11;
      uVar9 = uVar9 >> 1;
      param_4[2] = uVar9;
      puVar16 = puVar16 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_2 != 0 && (int)param_3 < 0xb) {
    lVar15 = (longlong)(int)(param_3 * 3);
    piVar5 = (int *)(&DAT_149e222d8 + lVar12 * 0x180 + lVar15 * 0xc);
    do {
      uVar6 = param_2 & 1;
      uVar14 = piVar5[-2] * uVar6 ^ uVar14;
      uVar8 = piVar5[-1] * uVar6 ^ uVar8;
      uVar13 = uVar6 * *piVar5 ^ uVar13;
      if (0x1e < lVar15) break;
      lVar15 = lVar15 + 1;
      piVar5 = piVar5 + 3;
      bVar1 = 1 < param_2;
      param_2 = (int)param_2 >> 1;
    } while (bVar1);
  }
  dVar17 = 1.0 / (double)(1 << (0x18 - bVar3 & 0x1f));
  *param_1 = dVar17 * (double)(int)uVar14;
  param_1[1] = (double)(int)uVar8 * dVar17;
  param_1[2] = (double)(int)uVar13 * dVar17;
  return;
}



// FUNCTION 1467f5bf6 FUN_1467f5bf6 body=206 status=ok
// SIG undefined FUN_1467f5bf6(void)

void FUN_1467f5bf6(double *param_1,uint param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  
  if (param_2 != 0) {
    uVar4 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar6 = (ulonglong)uVar4;
    dVar5 = (double)(1 << (0x18U - (char)param_3 & 0x1f));
    dVar1 = param_4[2];
    dVar2 = param_4[1];
    lVar7 = (longlong)param_3 * 0x180;
    uVar4 = *(uint *)(&UNK_149e23354 + uVar6 * 0xc + lVar7);
    uVar3 = *(uint *)(&UNK_149e23358 + uVar6 * 0xc + lVar7);
    dVar8 = 1.0 / dVar5;
    *param_1 = dVar8 * (double)(int)((int)(*param_4 * dVar5) & 0xffffffU ^
                                    *(uint *)(&DAT_149e23350 + uVar6 * 0xc + lVar7));
    param_1[1] = (double)(int)((int)(dVar2 * dVar5) & 0xffffffU ^ uVar4) * dVar8;
    param_1[2] = (double)(int)((int)(dVar1 * dVar5) & 0xffffffU ^ uVar3) * dVar8;
    return;
  }
  param_1[2] = param_4[2];
  dVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 1467f5cc4 FUN_1467f5cc4 body=327 status=ok
// SIG undefined FUN_1467f5cc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467f5cc4(undefined1 (*param_1) [16],ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_74;
  undefined4 local_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  undefined1 auVar7 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  local_48 = param_2[4];
  uStack_40 = param_2[5];
  local_38 = param_2[6];
  uStack_30 = param_2[7];
  FUN_1467f60ee(&local_68,&local_74);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_74;
  auVar4 = insertps(auVar4,local_6c,0x28);
  param_1[2] = auVar4;
  fVar3 = (float)FUN_1467f62d8(param_2);
  if (fVar3 < 0.0) {
    fVar3 = *(float *)(param_1[2] + 4);
    fVar1 = *(float *)(param_1[2] + 8);
    fVar2 = *(float *)(param_1[2] + 0xc);
    *(float *)param_1[2] = *(float *)param_1[2] * -1.0;
    *(float *)(param_1[2] + 4) = fVar3 * 1.0;
    *(float *)(param_1[2] + 8) = fVar1 * 1.0;
    *(float *)(param_1[2] + 0xc) = fVar2 * 1.0;
    local_68 = local_68 ^ 0x8000000080000000;
    uStack_60 = uStack_60 ^ 0x80000000;
  }
  FUN_14066c2ac(&local_88,&local_68);
  *(float *)*param_1 = local_88;
  *(float *)(*param_1 + 4) = fStack_84;
  *(float *)(*param_1 + 8) = fStack_80;
  *(float *)(*param_1 + 0xc) = fStack_7c;
  auVar4 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 6),7);
  auVar6._0_4_ = local_88 * local_88 + fStack_84 * fStack_84;
  auVar7._4_4_ = fStack_80 * fStack_80 + fStack_7c * fStack_7c;
  auVar7._0_4_ = auVar6._0_4_;
  param_1[1] = auVar4;
  auVar7._8_4_ = auVar7._4_4_;
  auVar7._12_4_ = auVar7._4_4_;
  auVar6._8_8_ = auVar7._8_8_;
  auVar6._4_4_ = auVar6._0_4_;
  auVar8._0_4_ = auVar7._4_4_ + auVar6._0_4_;
  auVar8._4_4_ = auVar7._4_4_ + auVar6._0_4_;
  auVar8._8_4_ = auVar6._0_4_ + auVar7._4_4_;
  auVar8._12_4_ = auVar6._0_4_ + auVar7._4_4_;
  auVar5._4_4_ = -(uint)(1e-08 <= auVar8._4_4_);
  auVar5._0_4_ = -(uint)(1e-08 <= auVar8._0_4_);
  auVar5._8_4_ = -(uint)(1e-08 <= auVar8._8_4_);
  auVar5._12_4_ = -(uint)(1e-08 <= auVar8._12_4_);
  auVar4 = sqrtps(auVar6,auVar8);
  auVar4 = divps(_DAT_1499314a0,auVar4);
  auVar9._0_4_ = auVar4._0_4_ * local_88;
  auVar9._4_4_ = auVar4._4_4_ * fStack_84;
  auVar9._8_4_ = auVar4._8_4_ * fStack_80;
  auVar9._12_4_ = auVar4._12_4_ * fStack_7c;
  auVar4 = blendvps(_DAT_149932320,auVar9,auVar5);
  *param_1 = auVar4;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f5e0c FUN_1467f5e0c body=737 status=ok
// SIG undefined FUN_1467f5e0c(void)

float * FUN_1467f5e0c(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar8 = param_1[2];
  fVar9 = param_1[1];
  fVar7 = fVar8 * *param_1 - fVar9 * param_1[3];
  fVar2 = param_1[3] * fVar8 + *param_1 * fVar9;
  fVar2 = fVar2 + fVar2;
  fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
  fVar8 = 1.0 - (fVar8 + fVar8);
  if (-0.4999995 <= fVar7) {
    if (fVar7 <= 0.4999995) {
      fVar10 = ABS(fVar7 + fVar7);
      fVar9 = 0.0;
      if (0.0 <= 1.0 - fVar10) {
        fVar9 = 1.0 - fVar10;
      }
      fVar9 = (((((((fVar10 * -0.0012624911 + 0.00667009) * fVar10 + -0.017088126) * fVar10 +
                  0.03089188) * fVar10 + -0.050174303) * fVar10 + 0.08897899) * fVar10 + -0.2145988)
               * fVar10 + 1.5707963) * SQRT(fVar9);
      uVar1 = -(uint)(0.0 <= fVar7 + fVar7);
      fVar10 = (float)(~uVar1 & (uint)(fVar9 + -1.5707963) | (uint)(1.5707963 - fVar9) & uVar1) *
               57.295776;
      fVar2 = (float)FUN_144a7ed88(fVar2,fVar8);
      fVar2 = fVar2 * 57.295776;
      fVar8 = *param_1;
      fVar9 = param_1[1];
      fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
      fVar8 = (float)FUN_144a7ed88((fVar8 * param_1[3] + fVar9 * param_1[2]) * -2.0,
                                   1.0 - (fVar7 + fVar7));
      fVar8 = fVar8 * 57.295776;
    }
    else {
      fVar2 = (float)FUN_144a7ed88(fVar2,fVar8);
      fVar2 = fVar2 * 57.295776;
      auVar5._0_8_ = FUN_144a7ed88();
      auVar5._8_8_ = extraout_XMM0_Qb_00;
      auVar6._4_12_ = auVar5._4_12_;
      auVar6._0_4_ = (float)auVar5._0_8_ * -2.0 * 57.295776 + fVar2;
      fVar8 = (float)FUN_1447c7e44(auVar6._0_8_);
      fVar8 = (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar8 |
                     (uint)(fVar8 + 360.0) & -(uint)(fVar8 < 0.0));
      fVar8 = (float)(~-(uint)(180.0 < fVar8) & (uint)fVar8 |
                     (uint)(fVar8 + -360.0) & -(uint)(180.0 < fVar8));
      fVar10 = 90.0;
    }
  }
  else {
    fVar2 = (float)FUN_144a7ed88(fVar2,fVar8);
    fVar2 = fVar2 * 57.295776;
    auVar3._0_8_ = FUN_144a7ed88();
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_ * -2.0 * 57.295776 - fVar2;
    fVar8 = (float)FUN_1447c7e44(auVar4._0_8_);
    fVar8 = (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar8 |
                   (uint)(fVar8 + 360.0) & -(uint)(fVar8 < 0.0));
    fVar8 = (float)(~-(uint)(180.0 < fVar8) & (uint)fVar8 |
                   (uint)(fVar8 + -360.0) & -(uint)(180.0 < fVar8));
    fVar10 = -90.0;
  }
  *param_2 = fVar10;
  param_2[1] = fVar2;
  param_2[2] = fVar8;
  return param_2;
}



// FUNCTION 1467f60ee FUN_1467f60ee body=490 status=ok
// SIG undefined FUN_1467f60ee(void)

void FUN_1467f60ee(float *param_1,float *param_2,float param_3)

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
  float fVar13;
  
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar1 = param_1[2];
  fVar12 = fVar1 * fVar1 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar11 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar10 = 0.0;
  fVar13 = 0.0;
  if (param_3 < fVar12) {
    fVar13 = SQRT(fVar12);
    fVar12 = 1.0 / fVar13;
    *param_1 = fVar8 * fVar12;
    param_1[1] = fVar9 * fVar12;
    param_1[2] = fVar1 * fVar12;
  }
  fVar8 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
  *param_2 = fVar13;
  if (param_3 < fVar11) {
    fVar10 = SQRT(fVar11);
    fVar9 = 1.0 / fVar10;
    param_1[4] = fVar2 * fVar9;
    param_1[5] = fVar3 * fVar9;
    param_1[6] = fVar4 * fVar9;
  }
  param_2[1] = fVar10;
  fVar9 = 0.0;
  if (param_3 < fVar8) {
    fVar9 = SQRT(fVar8);
    fVar8 = 1.0 / fVar9;
    param_1[8] = fVar5 * fVar8;
    param_1[9] = fVar6 * fVar8;
    param_1[10] = fVar7 * fVar8;
  }
  param_2[2] = fVar9;
  return;
}



// FUNCTION 1467f62d8 FUN_1467f62d8 body=466 status=ok
// SIG undefined FUN_1467f62d8(void)

float FUN_1467f62d8(float *param_1)

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
  float fVar13;
  float fVar14;
  
  fVar1 = param_1[5];
  fVar9 = param_1[10];
  fVar2 = param_1[0xf];
  fVar12 = param_1[0xb];
  fVar3 = param_1[0xe];
  fVar13 = fVar9 * fVar2 - fVar3 * fVar12;
  fVar4 = param_1[9];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar11 = fVar5 * fVar2 - fVar3 * fVar6;
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar10 = fVar2 * fVar7 - fVar3 * fVar8;
  fVar2 = param_1[0xd];
  fVar14 = fVar5 * fVar12 - fVar9 * fVar6;
  fVar3 = param_1[1];
  fVar9 = fVar12 * fVar7 - fVar9 * fVar8;
  fVar12 = fVar7 * fVar6 - fVar5 * fVar8;
  return ((fVar2 * fVar12 + (fVar11 * fVar3 - fVar10 * fVar1)) * param_1[8] +
         ((fVar2 * fVar14 + (fVar1 * fVar13 - fVar11 * fVar4)) * *param_1 -
         (fVar2 * fVar9 + (fVar13 * fVar3 - fVar10 * fVar4)) * param_1[4])) -
         (fVar12 * fVar4 + (fVar14 * fVar3 - fVar9 * fVar1)) * param_1[0xc];
}



// FUNCTION 1467f64aa FUN_1467f64aa body=206 status=ok
// SIG undefined FUN_1467f64aa(void)

undefined8 FUN_1467f64aa(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = *(undefined4 *)(param_1 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1448052ee(&local_58,&local_70);
  local_a8 = param_1[6];
  local_88 = *(undefined4 *)(param_1 + 8);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_80 = *(undefined4 *)(param_1 + 9);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_78 = param_1[10];
  local_90 = local_60;
  local_a0 = local_70;
  uStack_98 = uStack_68;
  FUN_140002266(param_2,L"%f,%f,%f|%f,%f,%f|%f,%f,%f",param_1[4],param_1[5]);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f657a FUN_1467f657a body=809 status=ok
// SIG undefined FUN_1467f657a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1467f657a(double *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1403de9f2(param_2,&local_b8,&DAT_149e06184,1);
  if ((int)uStack_b0 != 3) {
    uVar9 = 0;
    goto LAB_1467f6819;
  }
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  cVar8 = FUN_14680f866(local_b8);
  if (cVar8 == '\0') {
LAB_1467f6810:
    uVar9 = 0;
  }
  else {
    local_e8 = DAT_14c846508;
    local_f8 = (undefined4)DAT_14c8464f8;
    uStack_f4 = DAT_14c8464f8._4_4_;
    uStack_f0 = (undefined4)DAT_14c846500;
    uStack_ec = DAT_14c846500._4_4_;
    cVar8 = FUN_14680fa0a(local_b8 + 0x10);
    if (cVar8 == '\0') goto LAB_1467f6810;
    local_108 = DAT_14c846520;
    local_118 = (undefined4)DAT_14c846510;
    uStack_114 = DAT_14c846510._4_4_;
    uStack_110 = (undefined4)DAT_14c846518;
    uStack_10c = DAT_14c846518._4_4_;
    uVar9 = FUN_14680f866(local_b8 + 0x20);
    if ((char)uVar9 != '\0') {
      auVar12._4_4_ = uStack_f4;
      auVar12._0_4_ = local_f8;
      auVar12._8_4_ = uStack_f0;
      auVar12._12_4_ = uStack_ec;
      auVar10 = divpd(auVar12,_DAT_1499387d0);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_e8;
      auVar12 = divpd(auVar11,_DAT_1499387d0);
      auVar10 = roundpd(auVar10,auVar10,3);
      auVar12 = roundpd(auVar12,auVar12,3);
      dVar6 = ((double)CONCAT44(uStack_f4,local_f8) - auVar10._0_8_ * (double)DAT_1499387d0) *
              0.008726646259971648;
      dVar7 = ((double)CONCAT44(uStack_ec,uStack_f0) - auVar10._8_8_ * DAT_1499387d0._8_8_) *
              0.008726646259971648;
      dVar4 = (local_e8 - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar5 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar1 = sin(dVar6);
      dVar2 = sin(dVar7);
      dVar3 = sin(dVar4);
      sin(dVar5);
      dVar6 = cos(dVar6);
      dVar7 = cos(dVar7);
      dVar4 = cos(dVar4);
      cos(dVar5);
      dVar5 = dVar2 * dVar1 * dVar3 + dVar7 * dVar6 * dVar4;
      *param_1 = dVar1 * dVar2 * dVar4 - dVar6 * dVar7 * dVar3;
      param_1[1] = -(dVar1 * dVar7 * dVar4) - dVar6 * dVar2 * dVar3;
      auVar10._8_4_ = SUB84(dVar5,0);
      auVar10._0_8_ = -(dVar7 * dVar1 * dVar3) + dVar2 * dVar6 * dVar4;
      auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 2) = auVar10;
      param_1[4] = (double)CONCAT44(uStack_d4,local_d8);
      param_1[5] = (double)CONCAT44(uStack_cc,uStack_d0);
      param_1[6] = local_c8;
      param_1[7] = 0.0;
      *(undefined4 *)(param_1 + 8) = local_118;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_114;
      *(undefined4 *)(param_1 + 9) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_10c;
      param_1[10] = local_108;
      param_1[0xb] = 0.0;
    }
  }
LAB_1467f6819:
  FUN_1447a1747(local_b8,(int)uStack_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f68a4 FUN_1467f68a4 body=293 status=ok
// SIG undefined FUN_1467f68a4(void)

void FUN_1467f68a4(ulonglong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  if (param_2 == 3) {
    param_1[2] = param_1[2] ^ 0x8000000000000000;
    param_1[6] = param_1[6] ^ 0x8000000000000000;
    param_1[10] = param_1[10] ^ 0x8000000000000000;
    param_1[0xe] = param_1[0xe] ^ 0x8000000000000000;
  }
  else if (param_2 == 2) {
    param_1[1] = param_1[1] ^ 0x8000000000000000;
    param_1[5] = param_1[5] ^ 0x8000000000000000;
    param_1[9] = param_1[9] ^ 0x8000000000000000;
    param_1[0xd] = param_1[0xd] ^ 0x8000000000000000;
  }
  else if (param_2 == 1) {
    *param_1 = *param_1 ^ 0x8000000000000000;
    param_1[4] = param_1[4] ^ 0x8000000000000000;
    param_1[8] = param_1[8] ^ 0x8000000000000000;
    param_1[0xc] = param_1[0xc] ^ 0x8000000000000000;
  }
  if (param_3 == 1) {
    lVar1 = 0x10;
    lVar2 = 8;
    puVar3 = param_1;
  }
  else if (param_3 == 3) {
    lVar1 = 0x50;
    lVar2 = 0x48;
    puVar3 = param_1 + 8;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    lVar1 = 0x30;
    lVar2 = 0x28;
    puVar3 = param_1 + 4;
  }
  *puVar3 = *puVar3 ^ 0x8000000000000000;
  *(ulonglong *)((longlong)param_1 + lVar2) =
       *(ulonglong *)((longlong)param_1 + lVar2) ^ 0x8000000000000000;
  *(ulonglong *)((longlong)param_1 + lVar1) =
       *(ulonglong *)((longlong)param_1 + lVar1) ^ 0x8000000000000000;
  return;
}



// FUNCTION 1467f69ca FUN_1467f69ca body=23 status=ok
// SIG undefined FUN_1467f69ca(void)

undefined * FUN_1467f69ca(byte param_1)

{
  if (param_1 == 0x4b) {
    return (undefined *)0x0;
  }
  return (&PTR_DAT_149e24d40)[param_1];
}



// FUNCTION 1467f69e1 FUN_1467f69e1 body=21 status=ok
// SIG undefined FUN_1467f69e1(void)

undefined8 FUN_1467f69e1(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed20 + (ulonglong)(param_1 == '\v') * 8);
}



// FUNCTION 1467f69f6 FUN_1467f69f6 body=33 status=ok
// SIG undefined FUN_1467f69f6(void)

undefined8 FUN_1467f69f6(char param_1)

{
  if ((byte)(param_1 - 0xcU) < 4) {
    return *(undefined8 *)(&DAT_149e25e40 + (ulonglong)(byte)(param_1 - 0xcU) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6a17 FUN_1467f6a17 body=21 status=ok
// SIG undefined FUN_1467f6a17(void)

undefined8 FUN_1467f6a17(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed30 + (ulonglong)(param_1 == '\x11') * 8);
}



// FUNCTION 1467f6a2c FUN_1467f6a2c body=21 status=ok
// SIG undefined FUN_1467f6a2c(void)

undefined8 FUN_1467f6a2c(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed40 + (ulonglong)(param_1 == '\x12') * 8);
}



// FUNCTION 1467f6a41 FUN_1467f6a41 body=33 status=ok
// SIG undefined FUN_1467f6a41(void)

undefined8 FUN_1467f6a41(char param_1)

{
  if ((byte)(param_1 - 0x17U) < 8) {
    return *(undefined8 *)(&DAT_149e25e60 + (ulonglong)(byte)(param_1 - 0x17U) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6a62 FUN_1467f6a62 body=33 status=ok
// SIG undefined FUN_1467f6a62(void)

undefined8 FUN_1467f6a62(char param_1)

{
  if ((byte)(param_1 - 0x20U) < 3) {
    return *(undefined8 *)(&DAT_149e25ea0 + (ulonglong)(byte)(param_1 - 0x20U) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6a83 FUN_1467f6a83 body=33 status=ok
// SIG undefined FUN_1467f6a83(void)

undefined8 FUN_1467f6a83(char param_1)

{
  if ((byte)(param_1 - 0x24U) < 3) {
    return *(undefined8 *)(&DAT_149e25eb8 + (ulonglong)(byte)(param_1 - 0x24U) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6aa4 FUN_1467f6aa4 body=21 status=ok
// SIG undefined FUN_1467f6aa4(void)

undefined8 FUN_1467f6aa4(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed50 + (ulonglong)(param_1 == '(') * 8);
}



// FUNCTION 1467f6ab9 FUN_1467f6ab9 body=21 status=ok
// SIG undefined FUN_1467f6ab9(void)

undefined8 FUN_1467f6ab9(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed60 + (ulonglong)(param_1 == '*') * 8);
}



// FUNCTION 1467f6ace FUN_1467f6ace body=33 status=ok
// SIG undefined FUN_1467f6ace(void)

undefined8 FUN_1467f6ace(char param_1)

{
  if ((byte)(param_1 - 0x2cU) < 5) {
    return *(undefined8 *)(&DAT_149e25ed0 + (ulonglong)(byte)(param_1 - 0x2cU) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6aef FUN_1467f6aef body=33 status=ok
// SIG undefined FUN_1467f6aef(void)

undefined8 FUN_1467f6aef(char param_1)

{
  if ((byte)(param_1 - 0x31U) < 5) {
    return *(undefined8 *)(&DAT_149e25ef8 + (ulonglong)(byte)(param_1 - 0x31U) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6b10 FUN_1467f6b10 body=112 status=ok
// SIG undefined FUN_1467f6b10(void)

double FUN_1467f6b10(undefined1 param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  switch(param_1) {
  case 0x3b:
    dVar1 = 0.001;
  case 0x3c:
    dVar1 = dVar1 / 1000.0;
  case 0x3d:
    dVar1 = dVar1 / 1000.0;
  case 0x3e:
    dVar1 = dVar1 / 60.0;
  case 0x3f:
    return dVar1 / 60.0;
  default:
    return 1.0;
  case 0x41:
    return 24.0;
  case 0x42:
    return 730.484;
  case 0x43:
    return 8765.808;
  }
}



// FUNCTION 1467f6b80 FUN_1467f6b80 body=21 status=ok
// SIG undefined FUN_1467f6b80(void)

undefined8 FUN_1467f6b80(char param_1)

{
  return *(undefined8 *)(&DAT_149e1ed60 + (ulonglong)(param_1 == 'E') * 8);
}



// FUNCTION 1467f6b95 FUN_1467f6b95 body=33 status=ok
// SIG undefined FUN_1467f6b95(void)

undefined8 FUN_1467f6b95(char param_1)

{
  if ((byte)(param_1 + 0xb8U) < 3) {
    return *(undefined8 *)(&DAT_149e25f20 + (ulonglong)(byte)(param_1 + 0xb8U) * 8);
  }
  return 0x3ff0000000000000;
}



// FUNCTION 1467f6bb6 FUN_1467f6bb6 body=226 status=ok
// SIG undefined FUN_1467f6bb6(void)

undefined8 * FUN_1467f6bb6(undefined8 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c846168) && (FUN_144b3d300(&DAT_14c846168), DAT_14c846168 == -1)) {
    FUN_14276e2ec();
    atexit(FUN_14276edc5);
    _Init_thread_footer(&DAT_14c846168);
  }
  uVar1 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    puVar2 = &DAT_14c8460d8;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    puVar2 = &DAT_14c8460e8;
    break;
  default:
    goto switchD_1467f6bfa_caseD_9;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    puVar2 = &DAT_14c8460f8;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    puVar2 = &DAT_14c846108;
    break;
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    puVar2 = &DAT_14c846118;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
    puVar2 = &DAT_14c846128;
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
    puVar2 = &DAT_14c846138;
    break;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    puVar2 = &DAT_14c846148;
    break;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
    puVar2 = &DAT_14c846158;
  }
  *param_1 = puVar2;
  uVar1 = 1;
switchD_1467f6bfa_caseD_9:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1467f6c98 FUN_1467f6c98 body=272 status=ok
// SIG undefined FUN_1467f6c98(void)

void FUN_1467f6c98(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar5 = param_3[2] - dVar1;
  dVar6 = param_3[1] - dVar3;
  dVar7 = *param_3 - dVar2;
  dVar4 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
  if (dVar4 < 9.99999993922529e-09) {
    param_1[2] = param_2[2];
    dVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = dVar1;
  }
  else {
    dVar4 = -((dVar1 - param_4[2]) * dVar5 +
             (dVar2 - *param_4) * dVar7 + (dVar3 - param_4[1]) * dVar6) / dVar4;
    *param_1 = dVar4 * dVar7 + dVar2;
    param_1[1] = dVar6 * dVar4 + dVar3;
    param_1[2] = dVar5 * dVar4 + dVar1;
  }
  return;
}



// FUNCTION 1467f6da8 FUN_1467f6da8 body=985 status=ok
// SIG undefined FUN_1467f6da8(void)

undefined8
FUN_1467f6da8(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
             longlong *param_6,float *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  dVar3 = *param_1 - *param_4;
  dVar14 = *param_4 + param_1[3];
  dVar13 = param_1[4] + param_4[1];
  dVar9 = param_1[5] + param_4[2];
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar8 = param_2[1];
  dVar5 = *param_3 - dVar2;
  if (dVar3 <= dVar2) {
    uVar15 = 0x3ff00000;
    if (dVar14 < dVar2) {
      dVar4 = dVar14;
      if (0.0 <= dVar5) {
        return 0;
      }
      goto LAB_1467f6e86;
    }
    bVar7 = true;
    dVar2 = 0.0;
  }
  else {
    if (dVar5 <= 0.0) {
      return 0;
    }
    uVar15 = 0xbff00000;
    dVar4 = dVar3;
LAB_1467f6e86:
    dVar2 = (dVar4 - dVar2) / dVar5;
    bVar7 = false;
  }
  dVar12 = param_1[1] - param_4[1];
  dVar4 = param_3[1] - dVar8;
  if (dVar12 <= dVar8) {
    uVar18 = 0x3ff00000;
    dVar11 = 0.0;
    if (dVar8 <= dVar13) goto LAB_1467f6ec9;
    dVar11 = dVar13;
    if (0.0 <= dVar4) {
      return 0;
    }
  }
  else {
    if (dVar4 <= 0.0) {
      return 0;
    }
    uVar18 = 0xbff00000;
    dVar11 = dVar12;
  }
  dVar11 = (dVar11 - dVar8) / dVar4;
  bVar7 = false;
LAB_1467f6ec9:
  dVar8 = param_1[2] - param_4[2];
  dVar10 = param_3[2] - dVar1;
  if (dVar8 <= dVar1) {
    if (dVar1 <= dVar9) {
      if (bVar7) {
        param_5[2] = param_2[2];
        dVar1 = param_2[1];
        *param_5 = *param_2;
        param_5[1] = dVar1;
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0x3ff0000000000000;
        *param_7 = 0.0;
        return 1;
      }
      dVar1 = 0.0;
    }
    else {
      if (0.0 <= dVar10) {
        return 0;
      }
      dVar1 = (dVar9 - dVar1) / dVar10;
    }
    uVar17 = 0x3ff00000;
  }
  else {
    if (dVar10 <= 0.0) {
      return 0;
    }
    dVar1 = (dVar8 - dVar1) / dVar10;
    uVar17 = 0xbff00000;
  }
  dVar6 = dVar11;
  if (dVar11 <= dVar1) {
    dVar6 = dVar1;
  }
  uVar19 = 0;
  if (dVar11 <= dVar1) {
    uVar19 = uVar17;
  }
  *param_7 = (float)dVar6;
  *param_6 = 0;
  param_6[1] = (ulonglong)((uint)(-(ulonglong)(dVar1 < dVar11) >> 0x20) & uVar18) << 0x20;
  param_6[2] = (ulonglong)uVar19 << 0x20;
  fVar16 = *param_7;
  if ((double)fVar16 < dVar2) {
    *param_7 = (float)dVar2;
    *param_6 = (ulonglong)uVar15 << 0x20;
    param_6[1] = 0;
    param_6[2] = 0;
    fVar16 = *param_7;
  }
  if (fVar16 < 0.0) {
    return 0;
  }
  if (1.0 < fVar16) {
    return 0;
  }
  dVar2 = (double)fVar16;
  dVar11 = dVar10 * dVar2 + param_2[2];
  dVar1 = dVar4 * dVar2 + param_2[1];
  dVar2 = dVar5 * dVar2 + *param_2;
  *param_5 = dVar2;
  param_5[1] = dVar1;
  param_5[2] = dVar11;
  if ((((dVar3 + -0.10000000149011612 < dVar2) && (dVar2 < dVar14 + 0.10000000149011612)) &&
      (dVar12 + -0.10000000149011612 < dVar1)) &&
     (((dVar1 < dVar13 + 0.10000000149011612 && (dVar8 + -0.10000000149011612 < dVar11)) &&
      (dVar11 < dVar9 + 0.10000000149011612)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1467f7181 FUN_1467f7181 body=187 status=ok
// SIG undefined FUN_1467f7181(void)

void FUN_1467f7181(undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  byte local_38;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x3aU >> (*(byte *)(param_1 + 4) & 0x1f) & *(byte *)(param_1 + 4) < 6;
  local_48 = param_2[2];
  local_40 = *param_2;
  local_50 = param_2[1];
  local_58 = *param_1;
  FUN_14276ee6c(&local_2c,&local_30,param_1[1],param_1[3]);
  fVar1 = *param_3;
  if (local_2c <= *param_3) {
    fVar1 = local_2c;
  }
  *param_3 = fVar1;
  fVar1 = *param_4;
  if (*param_4 <= local_30) {
    fVar1 = local_30;
  }
  *param_4 = fVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f723d FUN_1467f723d body=304 status=ok
// SIG undefined FUN_1467f723d(void)

void FUN_1467f723d(undefined4 *param_1,undefined4 *param_2,double *param_3,double *param_4)

{
  byte bVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  byte local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = 0x3aU >> (*(byte *)(param_1 + 0xe) & 0x1f) & *(byte *)(param_1 + 0xe) < 6;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 6);
  local_70 = *(undefined8 *)(param_2 + 2);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 10));
  dVar2 = *param_3;
  if (local_48 <= *param_3) {
    dVar2 = local_48;
  }
  *param_3 = dVar2;
  dVar2 = *param_4;
  if (*param_4 <= local_50) {
    dVar2 = local_50;
  }
  *param_4 = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 0xc));
  dVar2 = param_3[1];
  if (local_48 <= param_3[1]) {
    dVar2 = local_48;
  }
  param_3[1] = dVar2;
  dVar2 = param_4[1];
  if (param_4[1] <= local_50) {
    dVar2 = local_50;
  }
  param_4[1] = dVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f736e FUN_1467f736e body=732 status=ok
// SIG undefined FUN_1467f736e(void)

void FUN_1467f736e(undefined4 *param_1,undefined4 *param_2,double *param_3,double *param_4)

{
  byte bVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  byte local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = 0x3aU >> (*(byte *)(param_1 + 0x26) & 0x1f) & *(byte *)(param_1 + 0x26) < 6;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0xe);
  local_70 = *(undefined8 *)(param_2 + 2);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 0x1a));
  dVar2 = *param_3;
  if (local_48 <= *param_3) {
    dVar2 = local_48;
  }
  *param_3 = dVar2;
  dVar2 = *param_4;
  if (*param_4 <= local_50) {
    dVar2 = local_50;
  }
  *param_4 = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_70 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 0x1c));
  dVar2 = param_3[1];
  if (local_48 <= param_3[1]) {
    dVar2 = local_48;
  }
  param_3[1] = dVar2;
  dVar2 = param_4[1];
  if (param_4[1] <= local_50) {
    dVar2 = local_50;
  }
  param_4[1] = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0x12);
  local_70 = *(undefined8 *)(param_2 + 6);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x1e));
  dVar2 = param_3[2];
  if (local_48 <= param_3[2]) {
    dVar2 = local_48;
  }
  param_3[2] = dVar2;
  dVar2 = param_4[2];
  if (param_4[2] <= local_50) {
    dVar2 = local_50;
  }
  param_4[2] = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0x14);
  local_70 = *(undefined8 *)(param_2 + 8);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  dVar2 = param_3[3];
  if (local_48 <= param_3[3]) {
    dVar2 = local_48;
  }
  param_3[3] = dVar2;
  dVar2 = param_4[3];
  if (param_4[3] <= local_50) {
    dVar2 = local_50;
  }
  param_4[3] = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0x16);
  local_70 = *(undefined8 *)(param_2 + 10);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0x22));
  dVar2 = param_3[4];
  if (local_48 <= param_3[4]) {
    dVar2 = local_48;
  }
  param_3[4] = dVar2;
  dVar2 = param_4[4];
  if (param_4[4] <= local_50) {
    dVar2 = local_50;
  }
  param_4[4] = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0x18);
  local_70 = *(undefined8 *)(param_2 + 0xc);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x24));
  dVar2 = param_3[5];
  if (local_48 <= param_3[5]) {
    dVar2 = local_48;
  }
  param_3[5] = dVar2;
  dVar2 = param_4[5];
  if (param_4[5] <= local_50) {
    dVar2 = local_50;
  }
  param_4[5] = dVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f764c FUN_1467f764c body=332 status=ok
// SIG undefined FUN_1467f764c(void)

undefined8 FUN_1467f764c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = *param_2;
  dVar4 = param_2[1];
  dVar7 = param_2[2];
  dVar6 = dVar7 * dVar7 + dVar2 * dVar2 + dVar4 * dVar4;
  if (((dVar6 != 1.0) || (dVar1 = dVar4, dVar3 = dVar7, dVar5 = dVar2, NAN(dVar6))) &&
     (dVar1 = DAT_14c8464e8, dVar3 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar1 = dVar4 * dVar6;
    dVar3 = dVar7 * dVar6;
    dVar5 = dVar2 * dVar6;
  }
  dVar7 = (param_1[2] - param_3[2]) * dVar3 +
          (*param_1 - *param_3) * dVar5 + (param_1[1] - param_3[1]) * dVar1;
  dVar4 = dVar3 * dVar7 + param_3[2];
  dVar2 = dVar1 * dVar7 + param_3[1];
  dVar7 = dVar7 * dVar5 + *param_3;
  *param_4 = dVar7;
  param_4[1] = dVar2;
  param_4[2] = dVar4;
  dVar4 = dVar4 - param_1[2];
  dVar2 = dVar2 - param_1[1];
  dVar7 = dVar7 - *param_1;
  dVar2 = SQRT(dVar4 * dVar4 + dVar7 * dVar7 + dVar2 * dVar2);
  return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
}



// FUNCTION 1467f7798 FUN_1467f7798 body=163 status=ok
// SIG undefined FUN_1467f7798(void)

void FUN_1467f7798(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_4[1] - dVar3;
  dVar1 = *param_4 - dVar2;
  dVar5 = (*param_2 - dVar2) * dVar1 + (param_2[1] - dVar3) * dVar4;
  if (dVar5 <= 0.0) {
    dVar2 = *param_3;
    dVar3 = param_3[1];
  }
  else {
    dVar6 = dVar1 * dVar1 + dVar4 * dVar4;
    if (dVar5 < dVar6) {
      dVar5 = dVar5 / dVar6;
      *param_1 = dVar2 + dVar1 * dVar5;
      param_1[1] = dVar3 + dVar4 * dVar5;
      return;
    }
    dVar2 = *param_4;
    dVar3 = param_4[1];
  }
  *param_1 = dVar2;
  param_1[1] = dVar3;
  return;
}



// FUNCTION 1467f783c FUN_1467f783c body=819 status=ok
// SIG undefined FUN_1467f783c(void)

void FUN_1467f783c(char *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *(double *)(param_1 + 0x18);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  dVar4 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x40);
  dVar9 = dVar3 * dVar11 + dVar1 * dVar4 + dVar2 * dVar7;
  dVar6 = dVar3 * *(double *)(param_1 + 0x58) +
          dVar1 * *(double *)(param_1 + 0x48) + dVar2 * *(double *)(param_1 + 0x50);
  dVar10 = dVar11 * dVar11 + dVar4 * dVar4 + dVar7 * dVar7;
  dVar7 = dVar11 * *(double *)(param_1 + 0x58) +
          dVar4 * *(double *)(param_1 + 0x48) + dVar7 * *(double *)(param_1 + 0x50);
  dVar4 = dVar8 * dVar10 - dVar9 * dVar9;
  if ((dVar4 < 9.999999747378752e-05) || (*param_1 != '\0')) {
    dVar11 = 0.0;
    dVar4 = 1.0;
  }
  else {
    dVar11 = dVar9 * dVar7 - dVar6 * dVar10;
    if (dVar11 < 0.0) {
      dVar11 = 0.0;
    }
    else if (dVar4 < dVar11) {
      dVar7 = dVar7 + dVar9;
      dVar11 = dVar4;
    }
    else {
      dVar7 = dVar7 * dVar8 + -dVar9 * dVar6;
      dVar10 = dVar4;
    }
  }
  if (dVar7 < 0.0) {
    dVar7 = 0.0;
    if (0.0 < dVar6) {
      dVar11 = 0.0;
    }
    else {
      dVar6 = -dVar6;
      dVar11 = (double)(~-(ulonglong)(dVar8 < dVar6) & (ulonglong)dVar6 |
                       -(ulonglong)(dVar8 < dVar6) & (ulonglong)dVar4);
      if (dVar6 <= dVar8) {
        dVar4 = dVar8;
      }
    }
  }
  else if (dVar10 < dVar7) {
    dVar9 = dVar9 - dVar6;
    dVar11 = 0.0;
    dVar7 = dVar10;
    if ((0.0 <= dVar9) &&
       (dVar11 = (double)(~-(ulonglong)(dVar8 < dVar9) & (ulonglong)dVar9 |
                         -(ulonglong)(dVar8 < dVar9) & (ulonglong)dVar4), dVar9 <= dVar8)) {
      dVar4 = dVar8;
    }
  }
  dVar11 = (double)(~-(ulonglong)(ABS(dVar11) < 9.999999747378752e-05) & (ulonglong)(dVar11 / dVar4)
                   );
  dVar9 = (double)(~-(ulonglong)(ABS(dVar7) < 9.999999747378752e-05) & (ulonglong)(dVar7 / dVar10));
  pdVar5 = *(double **)(param_1 + 8);
  dVar4 = pdVar5[2];
  dVar7 = pdVar5[1];
  *param_2 = dVar1 * dVar11 + *pdVar5;
  param_2[1] = dVar2 * dVar11 + dVar7;
  param_2[2] = dVar3 * dVar11 + dVar4;
  pdVar5 = *(double **)(param_1 + 0x10);
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = pdVar5[2];
  dVar4 = pdVar5[1];
  *param_3 = dVar9 * *(double *)(param_1 + 0x30) + *pdVar5;
  param_3[1] = dVar2 * dVar9 + dVar4;
  param_3[2] = dVar1 * dVar9 + dVar3;
  return;
}



// FUNCTION 1467f7b70 FUN_1467f7b70 body=303 status=ok
// SIG undefined FUN_1467f7b70(void)

void FUN_1467f7b70(double *param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  double *local_98;
  double *local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0[0] = 0;
  local_78 = param_2[2] - param_1[2];
  local_80 = param_2[1] - param_1[1];
  local_88 = *param_2 - *param_1;
  local_60 = param_4[2] - param_3[2];
  local_68 = param_4[1] - param_3[1];
  local_70 = *param_4 - *param_3;
  local_48 = param_1[2] - param_3[2];
  local_50 = param_1[1] - param_3[1];
  local_58 = *param_1 - *param_3;
  local_98 = param_1;
  local_90 = param_3;
  FUN_1467f783c(local_a0,param_5,param_6);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f7ca0 FUN_1467f7ca0 body=273 status=ok
// SIG undefined FUN_1467f7ca0(void)

uint FUN_1467f7ca0(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  uint uVar8;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  fVar7 = (float)((param_3[3] - (dVar3 * param_3[2] + dVar1 * *param_3 + dVar2 * param_3[1])) /
                 (param_3[2] * (dVar4 - dVar3) +
                 *param_3 * (*param_2 - dVar1) + param_3[1] * (dVar5 - dVar2)));
  uVar8 = -(uint)(-0.0001 < fVar7 && fVar7 < 1.0001);
  if ((uVar8 & 1) != 0) {
    dVar6 = (double)fVar7;
    *param_4 = dVar1 + (*param_2 - dVar1) * dVar6;
    param_4[1] = dVar2 + (dVar5 - dVar2) * dVar6;
    param_4[2] = dVar3 + (dVar4 - dVar3) * dVar6;
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1467f7db2 FUN_1467f7db2 body=696 status=ok
// SIG undefined FUN_1467f7db2(void)

undefined8
FUN_1467f7db2(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d8 [32];
  double *local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_3[2];
  dVar10 = param_4[2] - dVar1;
  dVar9 = *param_3;
  dVar2 = param_3[1];
  dVar11 = param_4[1] - dVar2;
  dVar12 = *param_4 - dVar9;
  dVar3 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
  if (9.99999993922529e-09 < dVar3) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar12 = dVar12 * dVar3;
    dVar11 = dVar11 * dVar3;
    dVar10 = dVar10 * dVar3;
  }
  dVar6 = param_5[2] - dVar1;
  dVar4 = param_5[1] - dVar2;
  dVar3 = *param_5 - dVar9;
  dVar5 = dVar6 * dVar6 + dVar3 * dVar3 + dVar4 * dVar4;
  if (9.99999993922529e-09 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar3 = dVar3 * dVar5;
    dVar4 = dVar4 * dVar5;
    dVar6 = dVar6 * dVar5;
  }
  dVar5 = dVar3 * dVar11 - dVar12 * dVar4;
  dVar12 = dVar6 * dVar12 - dVar10 * dVar3;
  dVar3 = dVar4 * dVar10 - dVar11 * dVar6;
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3 + dVar12 * dVar12;
  if (9.99999993922529e-09 < dVar10) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar3 = dVar3 * dVar10;
    dVar12 = dVar12 * dVar10;
    dVar5 = dVar5 * dVar10;
    dVar9 = dVar9 * dVar3 + dVar2 * dVar12;
    local_90 = dVar1 * dVar5 + dVar9;
    local_a8 = dVar3;
    local_a0 = dVar12;
    local_98 = dVar5;
    cVar7 = FUN_1467f7ca0(local_90,dVar9,&local_a8,param_6);
    if (cVar7 != '\0') {
      local_b8 = &local_a8;
      cVar7 = FUN_1467f806c(param_6,param_3,param_4,param_5);
      if (cVar7 != '\0') {
        uVar8 = 0;
        if (((0.0 <= local_a8) && (0.0 <= local_a0)) && (0.0 <= local_98)) {
          *param_7 = dVar3;
          param_7[1] = dVar12;
          param_7[2] = dVar5;
          uVar8 = 1;
        }
        goto LAB_1467f7f41;
      }
    }
  }
  uVar8 = 0;
LAB_1467f7f41:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f806c FUN_1467f806c body=701 status=ok
// SIG undefined FUN_1467f806c(void)

bool FUN_1467f806c(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  
  dVar11 = param_3[2] - param_2[2];
  dVar9 = param_3[1] - param_2[1];
  dVar7 = *param_3 - *param_2;
  dVar12 = param_4[2] - param_2[2];
  dVar4 = param_4[1] - param_2[1];
  dVar10 = *param_4 - *param_2;
  dVar8 = dVar7 * dVar4 - dVar10 * dVar9;
  dVar7 = dVar11 * dVar10 - dVar12 * dVar7;
  dVar10 = dVar9 * dVar12 - dVar4 * dVar11;
  dVar12 = dVar8 * dVar8 + dVar10 * dVar10 + dVar7 * dVar7;
  if (1e-08 < dVar12) {
    dVar4 = 1.0 / SQRT(dVar12);
    dVar11 = param_3[2] - param_1[2];
    dVar9 = param_3[1] - param_1[1];
    dVar5 = *param_3 - *param_1;
    dVar1 = param_4[2] - param_1[2];
    dVar2 = param_4[1] - param_1[1];
    dVar3 = *param_4 - *param_1;
    dVar6 = ((dVar5 * dVar2 - dVar3 * dVar9) * dVar8 * dVar4 +
            (dVar9 * dVar1 - dVar2 * dVar11) * dVar10 * dVar4 +
            (dVar11 * dVar3 - dVar1 * dVar5) * dVar7 * dVar4) * dVar4;
    *param_5 = dVar6;
    dVar1 = param_4[2] - param_1[2];
    dVar11 = param_4[1] - param_1[1];
    dVar9 = *param_4 - *param_1;
    dVar3 = param_2[2] - param_1[2];
    dVar5 = param_2[1] - param_1[1];
    dVar2 = *param_2 - *param_1;
    dVar4 = ((dVar9 * dVar5 - dVar2 * dVar11) * dVar8 * dVar4 +
            (dVar11 * dVar3 - dVar5 * dVar1) * dVar10 * dVar4 +
            (dVar1 * dVar2 - dVar3 * dVar9) * dVar7 * dVar4) * dVar4;
    param_5[1] = dVar4;
    param_5[2] = (1.0 - dVar6) - dVar4;
  }
  return 1e-08 < dVar12;
}



// FUNCTION 1467f832a FUN_1467f832a body=289 status=ok
// SIG undefined FUN_1467f832a(void)

uint FUN_1467f832a(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_1;
  dVar7 = param_2[1] - param_1[1];
  dVar8 = *param_2 - dVar1;
  dVar10 = param_4[1] - param_3[1];
  dVar2 = *param_4 - *param_3;
  dVar3 = dVar1 - *param_3;
  dVar5 = param_1[1] - param_3[1];
  dVar6 = dVar8 * dVar10 - dVar2 * dVar7;
  dVar9 = (dVar8 * dVar5 - dVar7 * dVar3) / dVar6;
  dVar6 = (dVar5 * dVar2 - dVar3 * dVar10) / dVar6;
  uVar4 = -(uint)((dVar9 <= 1.0 && 0.0 <= dVar9) && (dVar6 <= 1.0 && 0.0 <= dVar6));
  if ((uVar4 & 1) != 0) {
    dVar2 = param_2[2];
    dVar3 = param_1[2];
    *param_5 = dVar8 * dVar6 + dVar1;
    param_5[1] = dVar7 * dVar6 + param_1[1];
    param_5[2] = (dVar2 - dVar3) * dVar6 + param_1[2];
  }
  return uVar4 & 0xffffff01;
}



// FUNCTION 1467f844c FUN_1467f844c body=298 status=ok
// SIG undefined FUN_1467f844c(void)

double * FUN_1467f844c(double *param_1,double *param_2,undefined4 *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = param_5[2];
  local_88 = *param_5;
  uStack_80 = param_5[1];
  local_a8 = *param_4;
  uStack_a0 = param_4[1];
  local_98 = param_4[2];
  local_c8 = *param_3;
  uStack_c4 = param_3[1];
  uStack_c0 = param_3[2];
  uStack_bc = param_3[3];
  local_b8 = *(undefined8 *)(param_3 + 4);
  FUN_144afe018(&local_68,&local_c8,&local_a8,&local_88);
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  local_50 = (local_58 * dVar2 + local_68 * *param_2 + local_60 * dVar1) - local_50;
  *param_1 = *param_2 - local_50 * local_68;
  param_1[1] = dVar1 - local_60 * local_50;
  param_1[2] = dVar2 - local_58 * local_50;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f8578 FUN_1467f8578 body=451 status=ok
// SIG undefined FUN_1467f8578(void)

bool FUN_1467f8578(undefined8 *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double *pdVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  bVar7 = true;
  if (3 < (int)*(uint *)(param_1 + 1)) {
    pdVar8 = (double *)*param_1;
    dVar1 = pdVar8[2];
    dVar2 = *pdVar8;
    dVar3 = pdVar8[1];
    dVar13 = (pdVar8[6] - dVar2) * (pdVar8[4] - dVar3) - (pdVar8[3] - dVar2) * (pdVar8[7] - dVar3);
    dVar4 = (pdVar8[8] - dVar1) * (pdVar8[3] - dVar2) - (pdVar8[5] - dVar1) * (pdVar8[6] - dVar2);
    dVar11 = (pdVar8[7] - dVar3) * (pdVar8[5] - dVar1) - (pdVar8[8] - dVar1) * (pdVar8[4] - dVar3);
    dVar5 = dVar13 * dVar13 + dVar11 * dVar11 + dVar4 * dVar4;
    if (((dVar5 != 1.0) || (dVar12 = dVar11, dVar14 = dVar13, dVar6 = dVar4, NAN(dVar5))) &&
       (dVar12 = DAT_14c8464e0, dVar14 = DAT_14c8464f0, dVar6 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar5)) {
      dVar5 = 1.0 / SQRT(dVar5);
      dVar12 = dVar11 * dVar5;
      dVar14 = dVar13 * dVar5;
      dVar6 = dVar4 * dVar5;
    }
    lVar9 = (ulonglong)*(uint *)(param_1 + 1) - 4;
    pdVar8 = pdVar8 + 0xb;
    do {
      dVar4 = ABS((pdVar8[-2] - dVar2) * dVar12 + (pdVar8[-1] - dVar3) * dVar6 +
                  (*pdVar8 - dVar1) * dVar14);
      bVar10 = lVar9 != 0;
      lVar9 = lVar9 + -1;
      bVar7 = dVar4 <= (double)param_2;
      if ((double)param_2 < dVar4) {
        return bVar7;
      }
      pdVar8 = pdVar8 + 3;
    } while (bVar10);
  }
  return bVar7;
}



// FUNCTION 1467f873c FUN_1467f873c body=690 status=ok
// SIG undefined FUN_1467f873c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1467f873c(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

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
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14022d702(&local_b8);
  dVar5 = dStack_a0;
  if (1.0 <= dStack_a0) {
    dVar5 = 1.0;
  }
  dVar5 = acos((double)(~-(ulonglong)(dStack_a0 < -1.0) & (ulonglong)dVar5 |
                       -(ulonglong)(dStack_a0 < -1.0) & 0xbff0000000000000));
  dVar5 = dVar5 + dVar5;
  param_4 = param_5 * 0.017453292 * param_4;
  dVar6 = (double)param_4;
  if (ABS(dVar5) <= dVar6) {
    param_1[2] = param_3[2];
    dVar5 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar5;
  }
  else {
    dVar8 = local_b8 * local_b8 + local_a8 * local_a8;
    dVar11 = dStack_b0 * dStack_b0 + 0.0;
    auVar10._0_8_ = dVar8 + dVar11;
    auVar10._8_8_ = dVar8 + dVar11;
    auVar14._8_8_ = -(ulonglong)(1e-08 <= auVar10._8_8_);
    auVar14._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
    auVar12 = sqrtpd(in_XMM4,auVar10);
    auVar12 = divpd(_DAT_149934d80,auVar12);
    if ((-(ulonglong)(1e-08 <= auVar10._0_8_) & 1) == 0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = local_a8 * auVar12._0_8_;
    }
    auVar1._8_8_ = dStack_b0 * auVar12._8_8_;
    auVar1._0_8_ = local_b8 * auVar12._0_8_;
    auVar14 = blendvpd(ZEXT816(0x3ff0000000000000),auVar1,auVar14);
    dVar11 = (double)-param_4;
    if (dVar6 <= dVar5) {
      dVar5 = dVar6;
    }
    if (dVar5 <= dVar11) {
      dVar5 = dVar11;
    }
    dVar6 = sin(dVar5 * 0.5);
    dVar4 = cos(dVar5 * 0.5);
    dVar13 = auVar14._0_8_ * dVar6;
    dVar2 = auVar14._8_8_ * dVar6;
    dVar8 = dVar8 * dVar6;
    dVar5 = *param_2;
    dVar6 = param_2[1];
    dVar11 = param_2[2];
    dVar9 = dVar2 * dVar11 - dVar6 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar3 = dVar13 * dVar6 - dVar5 * dVar2;
    dVar3 = dVar3 + dVar3;
    dVar7 = dVar8 * dVar5 - dVar11 * dVar13;
    dVar7 = dVar7 + dVar7;
    *param_1 = (dVar2 * dVar3 - dVar7 * dVar8) + dVar4 * dVar9 + dVar5;
    param_1[1] = (dVar8 * dVar9 - dVar3 * dVar13) + dVar4 * dVar7 + dVar6;
    param_1[2] = (dVar13 * dVar7 - dVar9 * dVar2) + dVar4 * dVar3 + dVar11;
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f89f0 FUN_1467f89f0 body=171 status=ok
// SIG undefined FUN_1467f89f0(void)

void FUN_1467f89f0(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_2[1];
  dVar4 = param_3[1] - dVar2;
  dVar1 = *param_3 - *param_2;
  dVar3 = SQRT(dVar1 * dVar1 + dVar4 * dVar4);
  dVar5 = (double)(param_4 * param_5);
  if (dVar3 <= dVar5) {
    dVar2 = *param_3;
    dVar3 = param_3[1];
  }
  else {
    if (0.0 < param_4 * param_5) {
      dVar3 = 1.0 / dVar3;
      *param_1 = *param_2 + dVar1 * dVar3 * dVar5;
      param_1[1] = dVar2 + dVar4 * dVar3 * dVar5;
      return;
    }
    dVar2 = *param_2;
    dVar3 = param_2[1];
  }
  *param_1 = dVar2;
  param_1[1] = dVar3;
  return;
}



// FUNCTION 1467f8a9c FUN_1467f8a9c body=167 status=ok
// SIG undefined FUN_1467f8a9c(void)

void FUN_1467f8a9c(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (0.0 < param_5) {
    dVar1 = param_2[1];
    dVar3 = param_3[1] - dVar1;
    dVar2 = *param_3 - *param_2;
    if (9.999999747378752e-05 <= dVar2 * dVar2 + dVar3 * dVar3) {
      param_4 = param_4 * param_5;
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      *param_1 = *param_2 + dVar2 * (double)param_4;
      param_1[1] = dVar1 + dVar3 * (double)param_4;
      return;
    }
  }
  dVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 1467f8b44 FUN_1467f8b44 body=228 status=ok
// SIG undefined FUN_1467f8b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1467f8b44(undefined1 (*param_1) [16],double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 in_EAX;
  int iVar6;
  uint uVar7;
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
  double dVar20;
  double dVar21;
  
  auVar17 = *param_1;
  dVar5 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar8 = divpd(auVar17,_DAT_1499387d0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(double *)param_1[1];
  auVar15 = divpd(auVar14,_DAT_1499387d0);
  auVar8 = roundpd(auVar8,auVar8,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar20 = auVar17._0_8_ - auVar8._0_8_ * dVar5;
  dVar21 = auVar17._8_8_ - auVar8._8_8_ * dVar1;
  dVar3 = *(double *)param_1[1] - auVar15._0_8_ * dVar5;
  dVar4 = 0.0 - auVar15._8_8_ * dVar1;
  auVar18._0_8_ = dVar20 + dVar5;
  auVar18._8_8_ = dVar21 + dVar1;
  auVar16._0_8_ = dVar5 + dVar3;
  auVar16._8_8_ = dVar1 + dVar4;
  auVar9._8_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar9._0_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar8._8_8_ = dVar21;
  auVar8._0_8_ = dVar20;
  auVar8 = blendvpd(auVar18,auVar8,auVar9);
  auVar10._8_8_ = -(ulonglong)(0.0 <= dVar4);
  auVar10._0_8_ = -(ulonglong)(0.0 <= dVar3);
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar17 = blendvpd(auVar16,auVar19,auVar10);
  dVar5 = auVar8._8_8_ + -360.0;
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = auVar8._0_8_ + -360.0;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar19 = blendvpd(auVar8,auVar2,auVar11);
  auVar12._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
  auVar12._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
  auVar15._8_8_ = auVar17._8_8_ + -360.0;
  auVar15._0_8_ = auVar17._0_8_ + -360.0;
  auVar8 = blendvpd(auVar17,auVar15,auVar12);
  auVar17._8_8_ = -(ulonglong)(param_2 < ABS(auVar19._8_8_));
  auVar17._0_8_ = -(ulonglong)(param_2 < ABS(auVar19._0_8_));
  iVar6 = movmskpd(in_EAX,auVar17);
  auVar13._8_8_ = -(ulonglong)(param_2 < ABS(auVar8._8_8_));
  auVar13._0_8_ = -(ulonglong)(param_2 < ABS(auVar8._0_8_));
  uVar7 = movmskpd((int)param_1,auVar13);
  return CONCAT31((int3)((uint)iVar6 >> 8),(uVar7 & 0x3fffffff) == 0 && iVar6 == 0);
}



// FUNCTION 1467f8c28 FUN_1467f8c28 body=336 status=ok
// SIG undefined FUN_1467f8c28(void)

void FUN_1467f8c28(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0.0 < param_5) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_3[1];
    fVar9 = fVar1 - *param_3;
    fVar10 = fVar2 - fVar3;
    fVar4 = param_2[2];
    fVar5 = param_3[2];
    fVar11 = fVar4 - fVar5;
    fVar6 = param_2[3];
    fVar7 = param_3[3];
    fVar12 = fVar6 - fVar7;
    if (0.0001 <= SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9)) {
      param_4 = param_4 * param_5;
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      *param_1 = param_4 * (*param_3 - fVar1) + fVar1;
      param_1[1] = (fVar3 - fVar2) * param_4 + fVar2;
      param_1[2] = (fVar5 - fVar4) * param_4 + fVar4;
      param_1[3] = (fVar7 - fVar6) * param_4 + fVar6;
      return;
    }
  }
  uVar8 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 2) = uVar8;
  return;
}



// FUNCTION 1467f8d78 FUN_1467f8d78 body=396 status=ok
// SIG undefined FUN_1467f8d78(void)

float FUN_1467f8d78(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_5 - param_3;
  param_3 = param_3 - param_1;
  fVar1 = 0.0;
  if (((param_3 < 0.0) || (0.0 < fVar5)) && ((0.0 < param_3 || (fVar5 < 0.0)))) {
    fVar2 = 0.0001;
    if (0.0001 <= param_6 - param_2) {
      fVar2 = param_6 - param_2;
    }
    fVar4 = 0.0001;
    if (0.0001 <= param_4 - param_2) {
      fVar4 = param_4 - param_2;
    }
    fVar6 = 0.0001;
    if (0.0001 <= param_6 - param_4) {
      fVar6 = param_6 - param_4;
    }
    param_5 = param_5 - param_1;
    fVar2 = param_5 / fVar2;
    fVar3 = param_3 / param_5;
    fVar1 = fVar2;
    if (param_5 <= 0.0) {
      if ((fVar3 < 0.333) &&
         (fVar4 = (param_3 / fVar4 - fVar2) * (fVar3 / -0.333 + 1.0) + fVar2, fVar2 <= fVar4)) {
        fVar1 = fVar4;
      }
      if ((0.667 < fVar3) &&
         (fVar2 = (fVar5 / fVar6 - fVar2) * ((fVar3 + -0.667) / 0.333) + fVar2, fVar1 <= fVar2)) {
        fVar1 = fVar2;
      }
    }
    else {
      if ((fVar3 < 0.333) &&
         (fVar4 = (param_3 / fVar4 - fVar2) * (fVar3 / -0.333 + 1.0) + fVar2, fVar4 <= fVar2)) {
        fVar1 = fVar4;
      }
      if ((0.667 < fVar3) &&
         (fVar2 = (fVar5 / fVar6 - fVar2) * ((fVar3 + -0.667) / 0.333) + fVar2, fVar2 <= fVar1)) {
        fVar1 = fVar2;
      }
    }
  }
  return fVar1;
}



// FUNCTION 1467f8f04 FUN_1467f8f04 body=1083 status=ok
// SIG undefined FUN_1467f8f04(void)

double * FUN_1467f8f04(double *param_1,double *param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float _X;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    dVar5 = *param_2;
    dVar7 = param_2[1];
    dVar6 = param_2[2];
    dVar9 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
    if ((dVar9 == 1.0) && (!NAN(dVar9))) {
      param_1[2] = param_2[2];
      dVar7 = *param_2;
      dVar6 = param_2[1];
LAB_1467f9280:
      *param_1 = dVar7;
      param_1[1] = dVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
    }
    if (dVar9 < 9.99999993922529e-09) {
      param_1[2] = DAT_14c8464f0;
      dVar7 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
      goto LAB_1467f9280;
    }
  }
  else {
    uVar1 = rand();
    uVar2 = rand();
    _X = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    fVar3 = (float)(uVar2 & 0x7fff) / 32767.0;
    fVar4 = fVar3 + fVar3 + -1.0;
    fVar3 = fVar4;
    if (1.0 <= fVar4) {
      fVar3 = 1.0;
    }
    acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 | ~-(uint)(fVar4 < -1.0) & (uint)fVar3));
    cosf(_X);
    sinf(_X);
    fVar3 = (float)FUN_1447c7e44();
    dVar7 = *param_2;
    dVar6 = param_2[1];
    dVar5 = 0.0;
    if ((((dVar7 != 0.0) || (NAN(dVar7))) || (dVar6 != 0.0)) || (NAN(dVar6))) {
      dVar5 = atan2(dVar6,dVar7);
      dVar5 = dVar5 * 57.29577951308232;
      dVar7 = *param_2;
      dVar6 = param_2[1];
    }
    dVar9 = SQRT(dVar7 * dVar7 + dVar6 * dVar6);
    dVar7 = param_2[2];
    dVar6 = 0.0;
    if (((dVar7 != 0.0) || (NAN(dVar7))) || ((dVar9 != 0.0 || (NAN(dVar9))))) {
      dVar6 = atan2(dVar7,dVar9);
      dVar6 = dVar6 * 57.29577951308232;
    }
    dVar7 = sin(dVar6 * 0.01745329238474369);
    dVar9 = sin(dVar5 * 0.01745329238474369);
    dVar6 = cos(dVar6 * 0.01745329238474369);
    local_b8 = cos(dVar5 * 0.01745329238474369);
    local_a8 = dVar6 * local_b8;
    local_a0 = dVar9 * dVar6;
    local_c0 = dVar7 * 0.0 * local_b8 - dVar9;
    local_b0 = dVar6 * -0.0;
    local_b8 = dVar7 * 0.0 * dVar9 + local_b8;
    local_98 = dVar7;
    FUN_140ccff96(param_2,param_1,(double)((fVar3 * 180.0) / 3.1415927) * 0.017453292519943295);
    FUN_140ccff96(param_1,&local_d8,(double)((_X * 180.0) / 3.1415927) * 0.017453292519943295,
                  &local_a8);
    param_1[2] = local_c8;
    *param_1 = local_d8;
    param_1[1] = dStack_d0;
    dVar5 = *param_1;
    dVar7 = param_1[1];
    dVar6 = param_1[2];
    dVar9 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
    if (((dVar9 == 1.0) && (dVar10 = dVar7, dVar11 = dVar6, dVar8 = dVar5, !NAN(dVar9))) ||
       (dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464f0, dVar8 = DAT_14c8464e0,
       dVar9 < 9.99999993922529e-09)) goto LAB_1467f9215;
  }
  dVar9 = 1.0 / SQRT(dVar9);
  dVar10 = dVar7 * dVar9;
  dVar11 = dVar6 * dVar9;
  dVar8 = dVar5 * dVar9;
LAB_1467f9215:
  *param_1 = dVar8;
  param_1[1] = dVar10;
  param_1[2] = dVar11;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f9340 FUN_1467f9340 body=259 status=ok
// SIG undefined FUN_1467f9340(void)

double * FUN_1467f9340(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  dVar1 = param_2[2];
  dVar2 = param_2[5];
  uVar7 = rand();
  dVar3 = param_2[1];
  dVar4 = param_2[4];
  uVar8 = rand();
  dVar5 = *param_2;
  dVar6 = param_2[3];
  uVar9 = rand();
  *param_1 = (double)((float)(uVar9 & 0x7fff) / 32767.0) * (dVar6 - dVar5) + dVar5;
  param_1[1] = (double)((float)(uVar8 & 0x7fff) / 32767.0) * (dVar4 - dVar3) + dVar3;
  param_1[2] = (double)((float)(uVar7 & 0x7fff) / 32767.0) * (dVar2 - dVar1) + dVar1;
  return param_1;
}



// FUNCTION 1467f9444 FUN_1467f9444 body=255 status=ok
// SIG undefined FUN_1467f9444(void)

void FUN_1467f9444(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar2, dVar5 = dVar1, dVar6 = dVar3, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar4 = dVar2 * dVar7;
    dVar5 = dVar1 * dVar7;
    dVar6 = dVar3 * dVar7;
  }
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = dVar2 * dVar6 + *param_2 * dVar5 + dVar4 * dVar1;
  dVar3 = dVar3 + dVar3;
  *param_1 = *param_2 - dVar3 * dVar5;
  param_1[1] = dVar1 - dVar4 * dVar3;
  param_1[2] = dVar2 - dVar6 * dVar3;
  return;
}



// FUNCTION 1467f9544 FUN_1467f9544 body=154 status=ok
// SIG undefined FUN_1467f9544(void)

ulonglong FUN_1467f9544(double param_1)

{
  bool bVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0.0;
  dVar3 = modf(param_1,&local_28);
  uVar2 = 0;
  bVar1 = 0.5 < dVar3;
  if (param_1 < 0.0) {
    bVar1 = dVar3 < -0.5;
  }
  dVar3 = local_28;
  if (bVar1) {
    uVar2 = (ulonglong)(param_1 < 0.0);
    dVar3 = local_28 + *(double *)(&DAT_149931170 + uVar2 * 8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar3);
}



// FUNCTION 1467f95e0 FUN_1467f95e0 body=112 status=ok
// SIG undefined FUN_1467f95e0(void)

void FUN_1467f95e0(float param_1,float *param_2)

{
  undefined1 auVar1 [16];
  
  param_1 = param_1 - *param_2;
  if (180.0 < ABS(param_1)) {
    auVar1 = ZEXT416((uint)(ABS(param_1) / 360.0 + 0.5));
    auVar1 = roundps(auVar1,auVar1,1);
    *param_2 = auVar1._0_4_ *
               (float)(-(uint)(0.0 < param_1) & 0x43b40000 |
                      ~-(uint)(0.0 < param_1) & -(uint)(param_1 < 0.0) & 0xc3b40000) + *param_2;
  }
  return;
}



// FUNCTION 1467f9650 FUN_1467f9650 body=4553 status=ok
// SIG undefined FUN_1467f9650(void)

undefined8 FUN_1467f9650(double *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  float fVar26;
  undefined4 uVar27;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  float fVar28;
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar8;
  
  uVar27 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar25 = (undefined4)((ulonglong)param_3 >> 0x20);
  auVar29 = roundps(in_XMM4,ZEXT416((uint)(float)*param_1),1);
  fVar24 = (float)param_1[1];
  fVar23 = (float)param_1[2];
  auVar31 = roundps(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24),1);
  auVar9 = roundps(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23),1);
  uVar2 = (ulonglong)((int)auVar29._0_4_ & 0xff);
  uVar5 = (ulonglong)((int)auVar31._0_4_ & 0xff);
  uVar6 = (ulonglong)((int)auVar9._0_4_ & 0xff);
  fVar26 = (float)*param_1 - auVar29._0_4_;
  fVar24 = fVar24 - auVar31._0_4_;
  fVar23 = fVar23 - auVar9._0_4_;
  fVar28 = fVar26 + -1.0;
  fVar32 = fVar24 + -1.0;
  fVar30 = fVar23 + -1.0;
  lVar3 = (longlong)*(int *)(&DAT_149e25020 + uVar2 * 4) + uVar5;
  lVar1 = (longlong)*(int *)(&DAT_149e25020 + lVar3 * 4) + uVar6;
  lVar4 = (longlong)*(int *)(&DAT_149e25024 + lVar3 * 4) + uVar6;
  lVar7 = (longlong)*(int *)(&DAT_149e25024 + uVar2 * 4) + uVar5;
  lVar3 = (longlong)*(int *)(&DAT_149e25020 + lVar7 * 4) + uVar6;
  lVar7 = (longlong)*(int *)(&DAT_149e25024 + lVar7 * 4) + uVar6;
  switch(*(uint *)(&DAT_149e25024 + lVar7 * 4) & 0xf) {
  case 0:
    auVar10._4_4_ = uVar27;
    auVar10._0_4_ = fVar28;
    auVar10._8_4_ = in_XMM3_Dc;
    auVar10._12_4_ = in_XMM3_Dd;
    auVar29._4_12_ = auVar10._4_12_;
    auVar29._0_4_ = fVar28 + fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 0:
      goto switchD_1467f9867_caseD_0;
    case 1:
switchD_1467f9867_caseD_1:
      fVar33 = fVar26 + fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 0:
        goto switchD_1467f9a93_caseD_0;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      goto switchD_1467f9a93_caseD_1;
    case 2:
switchD_1467f9867_caseD_2:
      fVar33 = fVar32 + fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 3:
switchD_1467f9867_caseD_3:
      fVar33 = fVar32 - fVar26;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 4:
switchD_1467f9867_caseD_4:
      fVar33 = fVar30 - fVar26;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 5:
switchD_1467f9867_caseD_5:
      fVar33 = -fVar26 - fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 6:
switchD_1467f9867_caseD_6:
      fVar33 = fVar30 - fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 7:
switchD_1467f9867_caseD_7:
      fVar33 = fVar26 - fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 8:
switchD_1467f9867_caseD_8:
      fVar33 = fVar26 - fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 9:
switchD_1467f9867_caseD_9:
      fVar33 = fVar32 - fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 10:
switchD_1467f9867_caseD_a:
      fVar33 = -fVar26 - fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 0xb:
switchD_1467f9867_caseD_b:
      fVar33 = -fVar32 - fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 0xc:
switchD_1467f9867_caseD_c:
      fVar33 = fVar26 + fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 0xd:
switchD_1467f9867_caseD_d:
      fVar33 = fVar32 - fVar26;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 0xe:
switchD_1467f9867_caseD_e:
      fVar33 = fVar30 - fVar32;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
      break;
    case 0xf:
switchD_1467f9867_caseD_f:
      fVar33 = -fVar32 - fVar30;
      switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9a93_caseD_1;
      case 2:
        goto switchD_1467f9a93_caseD_2;
      case 3:
        goto switchD_1467f9a93_caseD_3;
      case 4:
        goto switchD_1467f9a93_caseD_4;
      case 5:
        goto switchD_1467f9a93_caseD_5;
      case 6:
        goto switchD_1467f9a93_caseD_6;
      case 7:
        goto switchD_1467f9a93_caseD_7;
      case 8:
        goto switchD_1467f9a93_caseD_8;
      case 9:
        goto switchD_1467f9a93_caseD_9;
      case 10:
        goto switchD_1467f9a93_caseD_a;
      case 0xb:
        goto switchD_1467f9a93_caseD_b;
      case 0xc:
        goto switchD_1467f9a93_caseD_c;
      case 0xd:
        goto switchD_1467f9a93_caseD_d;
      case 0xe:
        goto switchD_1467f9a93_caseD_e;
      case 0xf:
        goto switchD_1467f9a93_caseD_f;
      }
    }
    goto switchD_1467f9a93_caseD_0;
  case 1:
    auVar17._4_4_ = uVar27;
    auVar17._0_4_ = fVar28;
    auVar17._8_4_ = in_XMM3_Dc;
    auVar17._12_4_ = in_XMM3_Dd;
    auVar29._4_12_ = auVar17._4_12_;
    auVar29._0_4_ = fVar28 + fVar32;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 2:
    auVar14._4_4_ = uVar25;
    auVar14._0_4_ = fVar32;
    auVar14._8_4_ = in_XMM2_Dc;
    auVar14._12_4_ = in_XMM2_Dd;
    auVar29._4_12_ = auVar14._4_12_;
    auVar29._0_4_ = fVar32 + fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 3:
    auVar15._4_4_ = uVar25;
    auVar15._0_4_ = fVar32;
    auVar15._8_4_ = in_XMM2_Dc;
    auVar15._12_4_ = in_XMM2_Dd;
    auVar29._4_12_ = auVar15._4_12_;
    auVar29._0_4_ = fVar32 - fVar28;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 4:
    auVar29 = ZEXT416((uint)(fVar30 - fVar28));
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 5:
    auVar18._0_8_ = CONCAT44(uVar27,fVar28) ^ 0x8000000080000000;
    auVar18._8_4_ = in_XMM3_Dc ^ 0x80000000;
    auVar18._12_4_ = in_XMM3_Dd ^ 0x80000000;
    auVar29._4_12_ = auVar18._4_12_;
    auVar29._0_4_ = -fVar28 - fVar32;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 6:
    auVar29 = ZEXT416((uint)(fVar30 - fVar32));
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 7:
    auVar16._4_4_ = uVar27;
    auVar16._0_4_ = fVar28;
    auVar16._8_4_ = in_XMM3_Dc;
    auVar16._12_4_ = in_XMM3_Dd;
    auVar29._4_12_ = auVar16._4_12_;
    auVar29._0_4_ = fVar28 - fVar32;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 8:
    auVar20._4_4_ = uVar27;
    auVar20._0_4_ = fVar28;
    auVar20._8_4_ = in_XMM3_Dc;
    auVar20._12_4_ = in_XMM3_Dd;
    auVar29._4_12_ = auVar20._4_12_;
    auVar29._0_4_ = fVar28 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 9:
    auVar13._4_4_ = uVar25;
    auVar13._0_4_ = fVar32;
    auVar13._8_4_ = in_XMM2_Dc;
    auVar13._12_4_ = in_XMM2_Dd;
    auVar29._4_12_ = auVar13._4_12_;
    auVar29._0_4_ = fVar32 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 10:
    auVar19._0_8_ = CONCAT44(uVar27,fVar28) ^ 0x8000000080000000;
    auVar19._8_4_ = in_XMM3_Dc ^ 0x80000000;
    auVar19._12_4_ = in_XMM3_Dd ^ 0x80000000;
    auVar29._4_12_ = auVar19._4_12_;
    auVar29._0_4_ = -fVar28 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 0xb:
    auVar11._0_8_ = CONCAT44(uVar25,fVar32) ^ 0x8000000080000000;
    auVar11._8_4_ = in_XMM2_Dc ^ 0x80000000;
    auVar11._12_4_ = in_XMM2_Dd ^ 0x80000000;
    auVar29._4_12_ = auVar11._4_12_;
    auVar29._0_4_ = -fVar32 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 0xc:
    auVar12._4_4_ = uVar27;
    auVar12._0_4_ = fVar28;
    auVar12._8_4_ = in_XMM3_Dc;
    auVar12._12_4_ = in_XMM3_Dd;
    auVar29._4_12_ = auVar12._4_12_;
    auVar29._0_4_ = fVar28 + fVar32;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 0xd:
    auVar31._4_4_ = uVar25;
    auVar31._0_4_ = fVar32;
    auVar31._8_4_ = in_XMM2_Dc;
    auVar31._12_4_ = in_XMM2_Dd;
    auVar29._4_12_ = auVar31._4_12_;
    auVar29._0_4_ = fVar32 - fVar28;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 0xe:
    auVar29 = ZEXT416((uint)(fVar30 - fVar32));
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
    break;
  case 0xf:
    auVar9._0_8_ = CONCAT44(uVar25,fVar32) ^ 0x8000000080000000;
    auVar9._8_4_ = in_XMM2_Dc ^ 0x80000000;
    auVar9._12_4_ = in_XMM2_Dd ^ 0x80000000;
    auVar29._4_12_ = auVar9._4_12_;
    auVar29._0_4_ = -fVar32 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9867_caseD_1;
    case 2:
      goto switchD_1467f9867_caseD_2;
    case 3:
      goto switchD_1467f9867_caseD_3;
    case 4:
      goto switchD_1467f9867_caseD_4;
    case 5:
      goto switchD_1467f9867_caseD_5;
    case 6:
      goto switchD_1467f9867_caseD_6;
    case 7:
      goto switchD_1467f9867_caseD_7;
    case 8:
      goto switchD_1467f9867_caseD_8;
    case 9:
      goto switchD_1467f9867_caseD_9;
    case 10:
      goto switchD_1467f9867_caseD_a;
    case 0xb:
      goto switchD_1467f9867_caseD_b;
    case 0xc:
      goto switchD_1467f9867_caseD_c;
    case 0xd:
      goto switchD_1467f9867_caseD_d;
    case 0xe:
      goto switchD_1467f9867_caseD_e;
    case 0xf:
      goto switchD_1467f9867_caseD_f;
    }
  }
switchD_1467f9867_caseD_0:
  fVar33 = fVar26 + fVar30;
  switch(*(uint *)(&DAT_149e25024 + lVar3 * 4) & 0xf) {
  case 0:
switchD_1467f9a93_caseD_0:
    fVar34 = fVar28 + fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467f9cd1_caseD_0;
    case 1:
switchD_1467f9cd1_caseD_1:
      fVar30 = fVar26 + fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 0:
        goto switchD_1467f9f0f_caseD_0;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      goto switchD_1467f9f0f_caseD_1;
    case 2:
switchD_1467f9cd1_caseD_2:
      fVar30 = fVar30 + fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 3:
switchD_1467f9cd1_caseD_3:
      fVar30 = fVar24 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 4:
switchD_1467f9cd1_caseD_4:
      fVar30 = fVar30 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 5:
switchD_1467f9cd1_caseD_5:
      fVar30 = -fVar26 - fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 6:
switchD_1467f9cd1_caseD_6:
      fVar30 = fVar30 - fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 7:
switchD_1467f9cd1_caseD_7:
      fVar30 = fVar26 - fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 8:
switchD_1467f9cd1_caseD_8:
      fVar30 = fVar26 - fVar30;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 9:
switchD_1467f9cd1_caseD_9:
      fVar30 = fVar24 - fVar30;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 10:
switchD_1467f9cd1_caseD_a:
      fVar30 = -fVar26 - fVar30;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 0xb:
switchD_1467f9cd1_caseD_b:
      fVar30 = -fVar24 - fVar30;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 0xc:
switchD_1467f9cd1_caseD_c:
      fVar30 = fVar26 + fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 0xd:
switchD_1467f9cd1_caseD_d:
      fVar30 = fVar24 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 0xe:
switchD_1467f9cd1_caseD_e:
      fVar30 = fVar30 - fVar24;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
      break;
    case 0xf:
switchD_1467f9cd1_caseD_f:
      fVar30 = -fVar24 - fVar30;
      switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
      case 1:
        goto switchD_1467f9f0f_caseD_1;
      case 2:
        goto switchD_1467f9f0f_caseD_2;
      case 3:
        goto switchD_1467f9f0f_caseD_3;
      case 4:
        goto switchD_1467f9f0f_caseD_4;
      case 5:
        goto switchD_1467f9f0f_caseD_5;
      case 6:
        goto switchD_1467f9f0f_caseD_6;
      case 7:
        goto switchD_1467f9f0f_caseD_7;
      case 8:
        goto switchD_1467f9f0f_caseD_8;
      case 9:
        goto switchD_1467f9f0f_caseD_9;
      case 10:
        goto switchD_1467f9f0f_caseD_a;
      case 0xb:
        goto switchD_1467f9f0f_caseD_b;
      case 0xc:
        goto switchD_1467f9f0f_caseD_c;
      case 0xd:
        goto switchD_1467f9f0f_caseD_d;
      case 0xe:
        goto switchD_1467f9f0f_caseD_e;
      case 0xf:
        goto switchD_1467f9f0f_caseD_f;
      }
    }
    goto switchD_1467f9f0f_caseD_0;
  case 1:
switchD_1467f9a93_caseD_1:
    fVar34 = fVar28 + fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 2:
switchD_1467f9a93_caseD_2:
    fVar34 = fVar24 + fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 3:
switchD_1467f9a93_caseD_3:
    fVar34 = fVar24 - fVar28;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 4:
switchD_1467f9a93_caseD_4:
    fVar34 = fVar30 - fVar28;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 5:
switchD_1467f9a93_caseD_5:
    fVar34 = -fVar28 - fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 6:
switchD_1467f9a93_caseD_6:
    fVar34 = fVar30 - fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 7:
switchD_1467f9a93_caseD_7:
    fVar34 = fVar28 - fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 8:
switchD_1467f9a93_caseD_8:
    fVar34 = fVar28 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 9:
switchD_1467f9a93_caseD_9:
    fVar34 = fVar24 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 10:
switchD_1467f9a93_caseD_a:
    fVar34 = -fVar28 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 0xb:
switchD_1467f9a93_caseD_b:
    fVar34 = -fVar24 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 0xc:
switchD_1467f9a93_caseD_c:
    fVar34 = fVar28 + fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 0xd:
switchD_1467f9a93_caseD_d:
    fVar34 = fVar24 - fVar28;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 0xe:
switchD_1467f9a93_caseD_e:
    fVar34 = fVar30 - fVar24;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
    break;
  case 0xf:
switchD_1467f9a93_caseD_f:
    fVar34 = -fVar24 - fVar30;
    switch(*(uint *)(&DAT_149e25024 + lVar1 * 4) & 0xf) {
    case 1:
      goto switchD_1467f9cd1_caseD_1;
    case 2:
      goto switchD_1467f9cd1_caseD_2;
    case 3:
      goto switchD_1467f9cd1_caseD_3;
    case 4:
      goto switchD_1467f9cd1_caseD_4;
    case 5:
      goto switchD_1467f9cd1_caseD_5;
    case 6:
      goto switchD_1467f9cd1_caseD_6;
    case 7:
      goto switchD_1467f9cd1_caseD_7;
    case 8:
      goto switchD_1467f9cd1_caseD_8;
    case 9:
      goto switchD_1467f9cd1_caseD_9;
    case 10:
      goto switchD_1467f9cd1_caseD_a;
    case 0xb:
      goto switchD_1467f9cd1_caseD_b;
    case 0xc:
      goto switchD_1467f9cd1_caseD_c;
    case 0xd:
      goto switchD_1467f9cd1_caseD_d;
    case 0xe:
      goto switchD_1467f9cd1_caseD_e;
    case 0xf:
      goto switchD_1467f9cd1_caseD_f;
    }
  }
switchD_1467f9cd1_caseD_0:
  fVar30 = fVar30 + fVar26;
  switch(*(uint *)(&DAT_149e25020 + lVar7 * 4) & 0xf) {
  case 0:
switchD_1467f9f0f_caseD_0:
    fVar35 = fVar28 + fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa147_caseD_0;
    case 1:
switchD_1467fa147_caseD_1:
      fVar32 = fVar32 + fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 0:
        goto switchD_1467fa355_caseD_0;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      goto switchD_1467fa355_caseD_1;
    case 2:
switchD_1467fa147_caseD_2:
      fVar32 = fVar32 + fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 3:
switchD_1467fa147_caseD_3:
      fVar32 = fVar32 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 4:
switchD_1467fa147_caseD_4:
      fVar32 = fVar23 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 5:
switchD_1467fa147_caseD_5:
      fVar32 = -fVar26 - fVar32;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 6:
switchD_1467fa147_caseD_6:
      fVar32 = fVar23 - fVar32;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 7:
switchD_1467fa147_caseD_7:
      fVar32 = fVar26 - fVar32;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 8:
switchD_1467fa147_caseD_8:
      fVar32 = fVar26 - fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 9:
switchD_1467fa147_caseD_9:
      fVar32 = fVar32 - fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 10:
switchD_1467fa147_caseD_a:
      fVar32 = -fVar26 - fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 0xb:
switchD_1467fa147_caseD_b:
      fVar32 = -fVar32 - fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 0xc:
switchD_1467fa147_caseD_c:
      fVar32 = fVar32 + fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 0xd:
switchD_1467fa147_caseD_d:
      fVar32 = fVar32 - fVar26;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 0xe:
switchD_1467fa147_caseD_e:
      fVar32 = fVar23 - fVar32;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
      break;
    case 0xf:
switchD_1467fa147_caseD_f:
      fVar32 = -fVar32 - fVar23;
      switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
      case 1:
        goto switchD_1467fa355_caseD_1;
      case 2:
        goto switchD_1467fa355_caseD_2;
      case 3:
        goto switchD_1467fa355_caseD_3;
      case 4:
        goto switchD_1467fa355_caseD_4;
      case 5:
        goto switchD_1467fa355_caseD_5;
      case 6:
        goto switchD_1467fa355_caseD_6;
      case 7:
        goto switchD_1467fa355_caseD_7;
      case 8:
        goto switchD_1467fa355_caseD_8;
      case 9:
        goto switchD_1467fa355_caseD_9;
      case 10:
        goto switchD_1467fa355_caseD_a;
      case 0xb:
        goto switchD_1467fa355_caseD_b;
      case 0xc:
        goto switchD_1467fa355_caseD_c;
      case 0xd:
        goto switchD_1467fa355_caseD_d;
      case 0xe:
        goto switchD_1467fa355_caseD_e;
      case 0xf:
        goto switchD_1467fa355_caseD_f;
      }
    }
    goto switchD_1467fa355_caseD_0;
  case 1:
switchD_1467f9f0f_caseD_1:
    fVar35 = fVar28 + fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 2:
switchD_1467f9f0f_caseD_2:
    fVar35 = fVar32 + fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 3:
switchD_1467f9f0f_caseD_3:
    fVar35 = fVar32 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 4:
switchD_1467f9f0f_caseD_4:
    fVar35 = fVar23 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 5:
switchD_1467f9f0f_caseD_5:
    fVar35 = -fVar28 - fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 6:
switchD_1467f9f0f_caseD_6:
    fVar35 = fVar23 - fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 7:
switchD_1467f9f0f_caseD_7:
    fVar35 = fVar28 - fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 8:
switchD_1467f9f0f_caseD_8:
    fVar35 = fVar28 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 9:
switchD_1467f9f0f_caseD_9:
    fVar35 = fVar32 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 10:
switchD_1467f9f0f_caseD_a:
    fVar35 = -fVar28 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 0xb:
switchD_1467f9f0f_caseD_b:
    fVar35 = -fVar32 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 0xc:
switchD_1467f9f0f_caseD_c:
    fVar35 = fVar28 + fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 0xd:
switchD_1467f9f0f_caseD_d:
    fVar35 = fVar32 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 0xe:
switchD_1467f9f0f_caseD_e:
    fVar35 = fVar23 - fVar32;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
    break;
  case 0xf:
switchD_1467f9f0f_caseD_f:
    fVar35 = -fVar32 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar4 * 4) & 0xf) {
    case 1:
      goto switchD_1467fa147_caseD_1;
    case 2:
      goto switchD_1467fa147_caseD_2;
    case 3:
      goto switchD_1467fa147_caseD_3;
    case 4:
      goto switchD_1467fa147_caseD_4;
    case 5:
      goto switchD_1467fa147_caseD_5;
    case 6:
      goto switchD_1467fa147_caseD_6;
    case 7:
      goto switchD_1467fa147_caseD_7;
    case 8:
      goto switchD_1467fa147_caseD_8;
    case 9:
      goto switchD_1467fa147_caseD_9;
    case 10:
      goto switchD_1467fa147_caseD_a;
    case 0xb:
      goto switchD_1467fa147_caseD_b;
    case 0xc:
      goto switchD_1467fa147_caseD_c;
    case 0xd:
      goto switchD_1467fa147_caseD_d;
    case 0xe:
      goto switchD_1467fa147_caseD_e;
    case 0xf:
      goto switchD_1467fa147_caseD_f;
    }
  }
switchD_1467fa147_caseD_0:
  fVar32 = fVar26 + fVar23;
  switch(*(uint *)(&DAT_149e25020 + lVar3 * 4) & 0xf) {
  case 1:
switchD_1467fa355_caseD_1:
    fVar28 = fVar28 + fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 2:
switchD_1467fa355_caseD_2:
    fVar28 = fVar24 + fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 3:
switchD_1467fa355_caseD_3:
    fVar28 = fVar24 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 4:
switchD_1467fa355_caseD_4:
    fVar28 = fVar23 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 5:
switchD_1467fa355_caseD_5:
    fVar28 = -fVar28 - fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 6:
switchD_1467fa355_caseD_6:
    fVar28 = fVar23 - fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 7:
switchD_1467fa355_caseD_7:
    fVar28 = fVar28 - fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 8:
switchD_1467fa355_caseD_8:
    fVar28 = fVar28 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 9:
switchD_1467fa355_caseD_9:
    fVar28 = fVar24 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 10:
switchD_1467fa355_caseD_a:
    fVar28 = -fVar28 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 0xb:
switchD_1467fa355_caseD_b:
    fVar28 = -fVar24 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 0xc:
switchD_1467fa355_caseD_c:
    fVar28 = fVar28 + fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 0xd:
switchD_1467fa355_caseD_d:
    fVar28 = fVar24 - fVar28;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 0xe:
switchD_1467fa355_caseD_e:
    fVar28 = fVar23 - fVar24;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  case 0xf:
switchD_1467fa355_caseD_f:
    fVar28 = -fVar24 - fVar23;
    switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
    case 0:
      goto switchD_1467fa54b_caseD_0;
    default:
      goto switchD_1467fa54b_caseD_1;
    case 2:
      goto switchD_1467fa54b_caseD_2;
    case 3:
    case 0xd:
      goto switchD_1467fa54b_caseD_3;
    case 4:
      goto switchD_1467fa54b_caseD_4;
    case 5:
      goto switchD_1467fa54b_caseD_5;
    case 6:
    case 0xe:
      goto switchD_1467fa54b_caseD_6;
    case 7:
      goto switchD_1467fa54b_caseD_7;
    case 8:
      goto switchD_1467fa54b_caseD_8;
    case 9:
      goto switchD_1467fa54b_caseD_9;
    case 10:
      goto switchD_1467fa54b_caseD_a;
    case 0xb:
    case 0xf:
      goto switchD_1467fa54b_caseD_b;
    }
  }
switchD_1467fa355_caseD_0:
  fVar28 = fVar28 + fVar23;
  switch(*(uint *)(&DAT_149e25020 + lVar1 * 4) & 0xf) {
  case 0:
    goto switchD_1467fa54b_caseD_0;
  default:
switchD_1467fa54b_caseD_1:
    fVar36 = fVar26 + fVar24;
    goto LAB_1467fa672;
  case 2:
switchD_1467fa54b_caseD_2:
    fVar36 = fVar24;
    goto LAB_1467fa7ec;
  case 3:
  case 0xd:
switchD_1467fa54b_caseD_3:
    fVar36 = fVar24;
    goto LAB_1467fa65a;
  case 4:
switchD_1467fa54b_caseD_4:
    fVar36 = fVar23;
LAB_1467fa65a:
    fVar36 = fVar36 - fVar26;
    goto LAB_1467fa672;
  case 5:
switchD_1467fa54b_caseD_5:
    fVar36 = -fVar26;
    goto LAB_1467fa64f;
  case 6:
  case 0xe:
switchD_1467fa54b_caseD_6:
    fVar36 = fVar23;
    goto LAB_1467fa64f;
  case 7:
switchD_1467fa54b_caseD_7:
    fVar36 = fVar26;
LAB_1467fa64f:
    fVar36 = fVar36 - fVar24;
    goto LAB_1467fa672;
  case 8:
switchD_1467fa54b_caseD_8:
    fVar36 = fVar26;
    break;
  case 9:
switchD_1467fa54b_caseD_9:
    fVar36 = fVar24;
    break;
  case 10:
switchD_1467fa54b_caseD_a:
    fVar36 = -fVar26;
    break;
  case 0xb:
  case 0xf:
switchD_1467fa54b_caseD_b:
    fVar36 = -fVar24;
  }
  fVar36 = fVar36 - fVar23;
  goto LAB_1467fa672;
switchD_1467fa54b_caseD_0:
  fVar36 = fVar26;
LAB_1467fa7ec:
  fVar36 = fVar36 + fVar23;
LAB_1467fa672:
  fVar26 = ((fVar26 * 6.0 + -15.0) * fVar26 + 10.0) * fVar26 * fVar26 * fVar26;
  fVar24 = ((fVar24 * 6.0 + -15.0) * fVar24 + 10.0) * fVar24 * fVar24 * fVar24;
  auVar21._4_12_ = auVar29._4_12_;
  fVar30 = (fVar34 - fVar30) * fVar26 + fVar30;
  fVar36 = (fVar28 - fVar36) * fVar26 + fVar36;
  fVar36 = (((fVar35 - fVar32) * fVar26 + fVar32) - fVar36) * fVar24 + fVar36;
  fVar23 = ((((((auVar29._0_4_ - fVar33) * fVar26 + fVar33) - fVar30) * fVar24 + fVar30) - fVar36) *
            ((fVar23 * 6.0 + -15.0) * fVar23 + 10.0) * fVar23 * fVar23 * fVar23 + fVar36) * 0.97;
  if (1.0 <= fVar23) {
    fVar23 = 1.0;
  }
  auVar21._0_4_ = fVar23;
  uVar8 = auVar21._0_8_;
  if (fVar23 <= -1.0) {
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = 0xbf800000;
    uVar8 = auVar22._0_8_;
  }
  return uVar8;
}



// FUNCTION 1467fa81a FUN_1467fa81a body=71 status=ok
// SIG undefined FUN_1467fa81a(void)

ulonglong FUN_1467fa81a(float *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite((double)*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite((double)param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite((double)param_1[2]);
      uVar2 = CONCAT71(uVar3,iVar1 == 0);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1467fa862 FUN_1467fa862 body=737 status=ok
// SIG undefined FUN_1467fa862(void)

void FUN_1467fa862(float *param_1,longlong *param_2)

{
  ushort *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined1 auStack_68 [41];
  char local_3f;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_2 + 5);
  bVar5 = false;
  local_3a = 0;
  local_3c = 0;
  local_3e = 0;
  bVar4 = false;
  local_3f = false;
  if ((bVar2 & 1) == 0) {
    fVar6 = (*param_1 * 65536.0) / 360.0;
    local_3a = (ushort)((uint)(int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
    fVar6 = (param_1[1] * 65536.0) / 360.0;
    local_3c = (ushort)((uint)(int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
    fVar6 = (param_1[2] * 65536.0) / 360.0;
    local_3e = (ushort)((uint)(int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
    local_3f = local_3a != 0;
    bVar4 = local_3c != 0;
    bVar5 = local_3e != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3a = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3a,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3a);
      }
    }
    else {
      local_3a = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  local_3f = bVar4;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3c = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  local_3f = bVar5;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3f,1);
  if (local_3f == '\0') {
    local_3e = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3e,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_3e);
      }
    }
    else {
      local_3e = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  if ((bVar2 & 1) != 0) {
    *param_1 = (float)local_3a * 360.0 * 1.5258789e-05;
    param_1[1] = (float)local_3c * 360.0 * 1.5258789e-05;
    param_1[2] = (float)local_3e * 360.0 * 1.5258789e-05;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fab44 FUN_1467fab44 body=24 status=ok
// SIG undefined FUN_1467fab44(void)

undefined1 FUN_1467fab44(void)

{
  undefined1 *in_R9;
  
  FUN_1467fa862();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1467fab5c FUN_1467fab5c body=244 status=ok
// SIG undefined FUN_1467fab5c(void)

longlong * FUN_1467fab5c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1467fac50 FUN_1467fac50 body=514 status=ok
// SIG undefined FUN_1467fac50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467fac50(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double _X;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  auVar1 = *param_1;
  auVar9 = divpd(auVar1,_DAT_1499387d0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(double *)param_1[1];
  auVar10 = divpd(auVar10,_DAT_1499387d0);
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar10 = roundpd(auVar10,auVar10,3);
  dVar6 = (auVar1._0_8_ - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (auVar1._8_8_ - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = (*(double *)param_1[1] - auVar10._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  _X = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar7);
  dVar5 = sin(dVar2);
  sin(_X);
  dVar6 = cos(dVar6);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar2);
  cos(_X);
  local_b8 = -(dVar3 * dVar4 * dVar8 - dVar6 * dVar7 * dVar5);
  dStack_b0 = -(-(dVar3 * dVar7 * dVar8) - dVar6 * dVar4 * dVar5);
  dVar2 = (dVar4 * dVar3 * dVar5 + dVar7 * dVar6 * dVar8) * 1.0;
  local_a8._8_4_ = SUB84(dVar2,0);
  local_a8._0_8_ = (-(dVar7 * dVar3 * dVar5) + dVar4 * dVar6 * dVar8) * -1.0;
  local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FUN_1448052ee(&local_b8,param_2);
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fae54 FUN_1467fae54 body=364 status=ok
// SIG undefined FUN_1467fae54(void)

void FUN_1467fae54(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_144719204(param_1[1],0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  param_3[1] = dVar1;
  param_2[1] = param_1[1] - dVar1;
  dVar1 = (double)FUN_144719204(*param_1,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  *param_3 = dVar1;
  *param_2 = *param_1 - dVar1;
  dVar1 = (double)FUN_144719204(param_1[2],0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar1 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  param_3[2] = dVar1;
  param_2[2] = param_1[2] - dVar1;
  return;
}



// FUNCTION 1467fafc0 FUN_1467fafc0 body=804 status=ok
// SIG undefined FUN_1467fafc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467fafc0(undefined1 (*param_1) [16],undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  auVar17 = *param_1;
  dVar15 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar6 = divpd(auVar17,_DAT_1499387d0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(double *)param_1[1];
  auVar13 = divpd(auVar12,_DAT_1499387d0);
  auVar6 = roundpd(auVar6,auVar6,3);
  auVar13 = roundpd(auVar13,auVar13,3);
  dVar19 = auVar17._0_8_ - auVar6._0_8_ * dVar15;
  dVar20 = auVar17._8_8_ - auVar6._8_8_ * dVar1;
  dVar21 = *(double *)param_1[1] - auVar13._0_8_ * dVar15;
  dVar22 = 0.0 - auVar13._8_8_ * dVar1;
  auVar18._0_8_ = dVar19 + dVar15;
  auVar18._8_8_ = dVar20 + dVar1;
  auVar16._0_8_ = dVar15 + dVar21;
  auVar16._8_8_ = dVar1 + dVar22;
  auVar7._8_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar7._0_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar17._8_8_ = dVar20;
  auVar17._0_8_ = dVar19;
  auVar6 = blendvpd(auVar18,auVar17,auVar7);
  auVar8._8_8_ = -(ulonglong)(0.0 <= dVar22);
  auVar8._0_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar13._8_8_ = dVar22;
  auVar13._0_8_ = dVar21;
  auVar17 = blendvpd(auVar16,auVar13,auVar8);
  auVar9._8_8_ = -(ulonglong)(180.0 < auVar6._8_8_);
  auVar9._0_8_ = -(ulonglong)(180.0 < auVar6._0_8_);
  auVar2._8_8_ = auVar6._8_8_ + -360.0;
  auVar2._0_8_ = auVar6._0_8_ + -360.0;
  auVar13 = blendvpd(auVar6,auVar2,auVar9);
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
  auVar6._8_8_ = auVar17._8_8_ + -360.0;
  auVar6._0_8_ = auVar17._0_8_ + -360.0;
  auVar17 = blendvpd(auVar17,auVar6,auVar10);
  auVar14._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._8_8_));
  auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._0_8_));
  iVar4 = movmskpd((int)local_30,auVar14);
  auVar11._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar17._8_8_));
  auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar17._0_8_));
  uVar5 = movmskpd((int)param_1,auVar11);
  if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
    FUN_140056680(param_2,L"R(0)");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_140056680(param_2,&DAT_149e25db4);
  bVar3 = true;
  if (1e-08 < ABS(*(double *)*param_1)) {
    FUN_140002266(&local_40,L"P=%.2f",*(double *)*param_1);
    iVar4 = local_38 + -1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar4);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    bVar3 = false;
  }
  dVar15 = *(double *)(*param_1 + 8);
  if (1e-08 < ABS(dVar15)) {
    if (!bVar3) {
      FUN_140056680(&local_40,&DAT_149e19f34);
      iVar4 = local_38 + -1;
      if (local_38 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(param_2,local_40,iVar4);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      dVar15 = *(double *)(*param_1 + 8);
    }
    FUN_140002266(&local_40,L"Y=%.2f",dVar15);
    iVar4 = local_38 + -1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar4);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    bVar3 = false;
  }
  dVar15 = *(double *)param_1[1];
  if (1e-08 < ABS(dVar15)) {
    if (!bVar3) {
      FUN_140056680(&local_40,&DAT_149e19f34);
      iVar4 = local_38 + -1;
      if (local_38 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(param_2,local_40,iVar4);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      dVar15 = *(double *)param_1[1];
    }
    FUN_140002266(&local_40,L"R=%.2f",dVar15);
    iVar4 = local_38 + -1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar4);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(&local_40,&DAT_149e06144);
  iVar4 = local_38 + -1;
  if (local_38 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar4);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467fb2e6 FUN_1467fb2e6 body=153 status=ok
// SIG undefined FUN_1467fb2e6(void)

undefined8 FUN_1467fb2e6(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_140c2d9be(puVar3,&DAT_149e25d2a,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_140c2d9be(puVar3,&DAT_149e25ddc,param_1 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_140c2d9be(puVar3,&DAT_149e1dcf4,param_1 + 2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1467fb380 FUN_1467fb380 body=20 status=ok
// SIG undefined FUN_1467fb380(void)

undefined8 * FUN_1467fb380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *param_1 = param_2[1];
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 1467fb394 FUN_1467fb394 body=1097 status=ok
// SIG undefined FUN_1467fb394(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1467fb394(undefined1 (*param_1) [16],longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_48._0_4_ = (undefined4)*(undefined8 *)*param_1;
    local_48._4_4_ = (undefined4)((ulonglong)*(undefined8 *)*param_1 >> 0x20);
    fStack_40 = (float)*(undefined8 *)(*param_1 + 8);
    fStack_3c = (float)((ulonglong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    if (fStack_3c * fStack_3c +
        fStack_40 * fStack_40 +
        (float)local_48._0_4_ * (float)local_48._0_4_ +
        (float)local_48._4_4_ * (float)local_48._4_4_ <= 1e-08) {
      local_48._4_4_ = DAT_14c846344;
      local_48._0_4_ = DAT_14c84633c._4_4_;
      fStack_40 = (float)DAT_14c846348;
      fStack_3c = (float)DAT_14c84634c;
    }
    else {
      fVar10 = (float)local_48._0_4_ * (float)local_48._0_4_ +
               (float)local_48._4_4_ * (float)local_48._4_4_;
      auVar14._12_4_ = fStack_40 * fStack_40 + fStack_3c * fStack_3c;
      auVar12._0_4_ = auVar14._12_4_ + fVar10;
      auVar12._4_4_ = auVar14._12_4_ + fVar10;
      auVar12._8_4_ = fVar10 + auVar14._12_4_;
      auVar12._12_4_ = fVar10 + auVar14._12_4_;
      auVar13._4_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._4_4_ - auVar12._4_4_));
      auVar13._0_4_ = -(uint)(0.01 < ABS((float)DAT_1499314a0 - auVar12._0_4_));
      auVar13._8_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._8_4_ - auVar12._8_4_));
      auVar13._12_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._12_4_ - auVar12._12_4_));
      iVar9 = movmskps(uVar7,auVar13);
      if (iVar9 == 0) {
        auVar15._4_4_ = fStack_3c;
        auVar15._0_4_ = fStack_3c;
        auVar15._8_4_ = fStack_3c;
        auVar15._12_4_ = fStack_3c;
        auVar17 = ZEXT416((uint)fStack_40);
        fVar10 = (float)local_48._4_4_;
        auVar14._12_4_ = fStack_3c;
        _local_48 = *param_1;
      }
      else {
        auVar13 = sqrtps(auVar12,auVar12);
        auVar13 = divps(_DAT_1499314a0,auVar13);
        auVar11._0_4_ = (float)local_48._0_4_ * auVar13._0_4_;
        auVar11._4_4_ = (float)local_48._4_4_ * auVar13._4_4_;
        auVar11._8_4_ = fStack_40 * auVar13._8_4_;
        auVar11._12_4_ = fStack_3c * auVar13._12_4_;
        auVar4._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
        auVar4._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
        auVar4._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
        auVar4._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
        _local_48 = blendvps(_DAT_149932320,auVar11,auVar4);
        auVar14._12_4_ = local_48._12_4_;
        auVar6._4_8_ = auVar13._8_8_;
        auVar6._0_4_ = local_48._4_4_;
        auVar16._0_8_ = auVar6._0_8_ << 0x20;
        auVar16._8_4_ = local_48._8_4_;
        auVar16._12_4_ = auVar14._12_4_;
        auVar14._4_4_ = auVar14._12_4_;
        auVar14._0_4_ = auVar14._12_4_;
        auVar14._8_4_ = auVar14._12_4_;
        auVar17._8_8_ = auVar16._8_8_;
        auVar17._0_8_ = auVar17._8_8_;
        fVar10 = local_48._4_4_;
        auVar15 = auVar14;
      }
      if (auVar15._0_4_ < 0.0) {
        auVar5._4_4_ = fVar10;
        auVar5._0_4_ = fVar10;
        auVar5._8_4_ = auVar14._12_4_;
        auVar5._12_4_ = auVar14._12_4_;
        auVar13 = insertps(_local_48,auVar5,0x10);
        auVar13 = insertps(auVar13,auVar17,0x20);
        auVar13 = insertps(auVar13,auVar15,0x30);
        local_48 = (undefined1  [8])(auVar13._0_8_ ^ 0x8000000080000000);
        fStack_40 = (float)(auVar13._8_4_ ^ 0x80000000);
        fStack_3c = (float)(auVar13._12_4_ ^ 0x80000000);
      }
    }
  }
  uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x15 < uVar8) {
    iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar9 != 0x1a) {
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_48,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_48);
        }
      }
      else {
        local_48._0_4_ = *(undefined4 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      plVar3 = (longlong *)param_2[1];
      if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_48 + 4,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_48 + 4);
        }
      }
      else {
        local_48._4_4_ = *(undefined4 *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = (longlong *)param_2[1];
      if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_48 + 8,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_48 + 8);
        }
      }
      else {
        fStack_40 = (float)*(undefined4 *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      goto LAB_1467fb5cb;
    }
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_50);
    }
  }
  else {
    local_50 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_54);
    }
  }
  else {
    local_54 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  auVar13 = _local_48;
  local_48._4_4_ = local_50;
  local_48._0_4_ = local_4c;
  fStack_3c = auVar13._12_4_;
  fStack_40 = (float)local_54;
LAB_1467fb5cb:
  auVar6 = _local_48;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    fVar18 = fStack_40 * fStack_40 +
             (float)local_48._0_4_ * (float)local_48._0_4_ +
             (float)local_48._4_4_ * (float)local_48._4_4_;
    auVar14._12_4_ = 1.0 - fVar18;
    fVar10 = 0.0;
    if (auVar14._12_4_ < 0.0) {
      auVar14._12_4_ = 1.0 / SQRT(fVar18);
      local_48._4_4_ = (float)local_48._4_4_ * auVar14._12_4_;
      local_48._0_4_ = (float)local_48._0_4_ * auVar14._12_4_;
      fStack_40 = fStack_40 * auVar14._12_4_;
    }
    else if (auVar14._12_4_ < 0.0) {
      fVar10 = sqrtf(auVar14._12_4_);
    }
    else {
      fVar10 = SQRT(auVar14._12_4_);
      _local_48 = auVar6;
    }
    fStack_3c = fVar10;
    auVar13 = _local_48;
    *(undefined4 *)*param_1 = local_48._0_4_;
    *(undefined4 *)(*param_1 + 4) = local_48._4_4_;
    *(float *)(*param_1 + 8) = fStack_40;
    *(float *)(*param_1 + 0xc) = fVar10;
    _local_48 = auVar13;
  }
  *param_4 = 1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fb7de FUN_1467fb7de body=462 status=ok
// SIG undefined FUN_1467fb7de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1467fb7de(undefined1 (*param_1) [16],float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  fVar4 = (param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]) *
          (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar11 = fVar3 * param_3[2] + fVar1 * *param_3 + fVar2 * param_3[1] + fVar4;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar10 = *param_3;
  if (fVar11 < fVar4 * 1e-06) {
    if ((ABS(fVar1) <= ABS(fVar2)) || (ABS(fVar1) <= ABS(fVar3))) {
      fVar6 = -DAT_14c846384;
      fVar5 = -_DAT_14c846380;
      fVar10 = -DAT_14c84637c;
      fVar11 = 0.0;
    }
    else {
      fVar11 = 0.0;
      fVar5 = DAT_14c846370._4_4_;
      fVar6 = DAT_14c846378;
      fVar10 = (float)DAT_14c846370;
    }
  }
  *(float *)*param_1 = fVar2 * fVar6 - fVar5 * fVar3;
  *(float *)(*param_1 + 4) = fVar3 * fVar10 - fVar6 * fVar1;
  *(float *)(*param_1 + 8) = fVar1 * fVar5 - fVar10 * fVar2;
  *(float *)(*param_1 + 0xc) = fVar11;
  fVar4 = *(float *)*param_1;
  fVar1 = *(float *)(*param_1 + 4);
  fVar2 = *(float *)(*param_1 + 8);
  fVar3 = *(float *)(*param_1 + 0xc);
  fVar5 = fVar4 * fVar4 + fVar1 * fVar1;
  fVar6 = fVar2 * fVar2 + fVar3 * fVar3;
  auVar7._0_4_ = fVar6 + fVar5;
  auVar7._4_4_ = fVar6 + fVar5;
  auVar7._8_4_ = fVar5 + fVar6;
  auVar7._12_4_ = fVar5 + fVar6;
  auVar8 = sqrtps(auVar7,auVar7);
  auVar8 = divps(_DAT_1499314a0,auVar8);
  auVar9._0_4_ = auVar8._0_4_ * fVar4;
  auVar9._4_4_ = auVar8._4_4_ * fVar1;
  auVar9._8_4_ = auVar8._8_4_ * fVar2;
  auVar9._12_4_ = auVar8._12_4_ * fVar3;
  auVar8._4_4_ = -(uint)(1e-08 <= auVar7._4_4_);
  auVar8._0_4_ = -(uint)(1e-08 <= auVar7._0_4_);
  auVar8._8_4_ = -(uint)(1e-08 <= auVar7._8_4_);
  auVar8._12_4_ = -(uint)(1e-08 <= auVar7._12_4_);
  auVar8 = blendvps(_DAT_149932320,auVar9,auVar8);
  *param_1 = auVar8;
  return param_1;
}



// FUNCTION 1467fb9ac FUN_1467fb9ac body=189 status=ok
// SIG undefined FUN_1467fb9ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467fb9ac(double *param_1,undefined1 (*param_2) [16],float *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  
  dVar1 = param_1[3];
  dVar3 = dVar1;
  if (1.0 <= dVar1) {
    dVar3 = 1.0;
  }
  dVar1 = acos((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar3 |
                       -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  *param_3 = (float)(dVar1 + dVar1);
  dVar1 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[2];
  dVar5 = dVar4 * dVar4 + dVar1 * dVar1;
  dVar8 = dVar3 * dVar3 + 0.0;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  auVar2._8_8_ = -(ulonglong)(1e-08 <= auVar6._8_8_);
  auVar2._0_8_ = -(ulonglong)(1e-08 <= auVar6._0_8_);
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar9 = divpd(_DAT_149934d80,auVar7);
  auVar7._8_8_ = dVar3 * auVar9._8_8_;
  auVar7._0_8_ = dVar1 * auVar9._0_8_;
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000),auVar7,auVar2);
  if ((-(ulonglong)(1e-08 <= auVar6._0_8_) & 1) == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar4 * auVar9._0_8_;
  }
  *param_2 = auVar7;
  *(double *)param_2[1] = dVar4;
  return;
}



// FUNCTION 1467fba6a FUN_1467fba6a body=188 status=ok
// SIG undefined FUN_1467fba6a(void)

double * FUN_1467fba6a(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  dVar1 = sin(dVar3);
  dVar2 = cos(dVar3);
  param_2[3] = dVar2;
  if (9.99999993922529e-09 <= ABS(dVar1)) {
    dVar1 = dVar1 / dVar3;
    dVar3 = *param_1 * dVar1;
    dVar2 = param_1[1] * dVar1;
    dVar1 = dVar1 * param_1[2];
  }
  else {
    dVar3 = *param_1;
    dVar2 = param_1[1];
    dVar1 = param_1[2];
  }
  *param_2 = dVar3;
  param_2[1] = dVar2;
  param_2[2] = dVar1;
  return param_2;
}



// FUNCTION 1467fbb26 FUN_1467fbb26 body=116 status=ok
// SIG undefined FUN_1467fbb26(void)

float * FUN_1467fbb26(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_144a7ed88(param_1[1],*param_1);
  param_2[1] = fVar1 * 57.295776;
  fVar1 = (float)FUN_144a7ed88(param_1[2],SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]));
  *param_2 = fVar1 * 57.295776;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 1467fbb9a FUN_1467fbb9a body=153 status=ok
// SIG undefined FUN_1467fbb9a(void)

undefined8 FUN_1467fbb9a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_14170b16c(puVar3,&DAT_149e25dd6,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_14170b16c(puVar3,&DAT_149e25ddc,(longlong)param_1 + 4);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_14170b16c(puVar3,&DAT_149e25de2,param_1 + 1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1467fbc34 FUN_1467fbc34 body=860 status=ok
// SIG undefined FUN_1467fbc34(void)

void FUN_1467fbc34(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar6 = (param_1[2] * fVar4 + *param_1 * fVar2 + param_1[1] * fVar3) /
          (fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  *param_1 = *param_1 - fVar6 * fVar2;
  param_1[1] = param_1[1] - fVar3 * fVar6;
  param_1[2] = param_1[2] - fVar4 * fVar6;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar7 = (param_2[2] * fVar4 + *param_2 * fVar2 + param_2[1] * fVar3) /
          (fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar6 = *param_2 - fVar7 * fVar2;
  *param_2 = fVar6;
  fVar1 = param_2[1] - fVar3 * fVar7;
  param_2[1] = fVar1;
  fVar7 = param_2[2] - fVar4 * fVar7;
  param_2[2] = fVar7;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  if (fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3 < 9.9999994e-11) {
    fVar4 = fVar6 * param_3[1] - *param_3 * fVar1;
    fVar3 = fVar7 * *param_3 - fVar6 * param_3[2];
    fVar2 = fVar1 * param_3[2] - param_3[1] * fVar7;
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar4;
    fVar6 = *param_2;
    fVar1 = param_2[1];
    fVar7 = param_2[2];
  }
  if (fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1 < 9.9999994e-11) {
    fVar7 = fVar2 * param_3[1] - *param_3 * fVar3;
    fVar1 = fVar4 * *param_3 - fVar2 * param_3[2];
    fVar6 = fVar3 * param_3[2] - param_3[1] * fVar4;
    *param_2 = fVar6;
    param_2[1] = fVar1;
    param_2[2] = fVar7;
    fVar2 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
  }
  fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  if (1e-08 < fVar5) {
    fVar6 = 1.0 / SQRT(fVar5);
    *param_1 = fVar2 * fVar6;
    param_1[1] = fVar3 * fVar6;
    param_1[2] = fVar4 * fVar6;
    fVar6 = *param_2;
    fVar1 = param_2[1];
    fVar7 = param_2[2];
  }
  fVar2 = fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1;
  if (1e-08 < fVar2) {
    fVar2 = 1.0 / SQRT(fVar2);
    *param_2 = fVar6 * fVar2;
    param_2[1] = fVar1 * fVar2;
    param_2[2] = fVar7 * fVar2;
  }
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  if (1e-08 < fVar6) {
    fVar6 = 1.0 / SQRT(fVar6);
    *param_3 = fVar2 * fVar6;
    param_3[1] = fVar3 * fVar6;
    param_3[2] = fVar4 * fVar6;
  }
  return;
}



// FUNCTION 1467fbf90 FUN_1467fbf90 body=310 status=ok
// SIG undefined FUN_1467fbf90(void)

void FUN_1467fbf90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_3[2] - param_2[2];
  fVar1 = param_3[1] - param_2[1];
  fVar2 = *param_3 - *param_2;
  fVar5 = param_4[2] - param_2[2];
  fVar7 = param_4[1] - param_2[1];
  fVar6 = *param_4 - *param_2;
  fVar3 = fVar2 * fVar7 - fVar6 * fVar1;
  fVar2 = fVar4 * fVar6 - fVar5 * fVar2;
  fVar1 = fVar1 * fVar5 - fVar7 * fVar4;
  fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  if (((fVar4 != 1.0) || (fVar5 = fVar1, fVar6 = fVar3, fVar7 = fVar2, NAN(fVar4))) &&
     (fVar5 = (float)DAT_14c846330, fVar6 = DAT_14c846338, fVar7 = DAT_14c846330._4_4_,
     1e-08 <= fVar4)) {
    fVar4 = 1.0 / SQRT(fVar4);
    fVar5 = fVar1 * fVar4;
    fVar6 = fVar3 * fVar4;
    fVar7 = fVar2 * fVar4;
  }
  *param_1 = fVar5;
  param_1[1] = fVar7;
  param_1[2] = fVar6;
  param_1[3] = fVar6 * param_2[2] + fVar5 * *param_2 + fVar7 * param_2[1];
  return;
}



// FUNCTION 1467fc0c6 FUN_1467fc0c6 body=611 status=ok
// SIG undefined FUN_1467fc0c6(void)

undefined8 FUN_1467fc0c6(undefined4 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x15 < uVar3) {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar4 != 0x1a) {
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
        }
        else {
          thunk_FUN_14572512c(param_2,param_1);
        }
      }
      else {
        *param_1 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        param_1[1] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      param_1 = param_1 + 2;
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
        }
        else {
          thunk_FUN_14572512c(param_2,param_1);
        }
      }
      else {
        *param_1 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      goto LAB_1467fc1eb;
    }
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_20);
    }
  }
  else {
    local_20 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  *param_1 = local_1c;
  param_1[1] = local_20;
  param_1[2] = local_24;
LAB_1467fc1eb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fc32a FUN_1467fc32a body=425 status=ok
// SIG undefined FUN_1467fc32a(void)

void FUN_1467fc32a(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = 1.0;
  dVar5 = 0.0;
  if (ABS(param_1[2]) <= ABS(*param_1) || ABS(param_1[2]) <= ABS(param_1[1])) {
    dVar3 = 0.0;
    dVar5 = 1.0;
  }
  *param_2 = dVar3;
  param_2[1] = 0.0;
  param_2[2] = dVar5;
  dVar7 = dVar5 * param_1[2] + dVar3 * *param_1 + param_1[1] * 0.0;
  dVar5 = dVar5 - param_1[2] * dVar7;
  dVar1 = 0.0 - param_1[1] * dVar7;
  dVar3 = dVar3 - dVar7 * *param_1;
  dVar7 = dVar5 * dVar5 + dVar3 * dVar3 + dVar1 * dVar1;
  if (((dVar7 != 1.0) || (dVar2 = dVar1, dVar4 = dVar3, dVar6 = dVar5, NAN(dVar7))) &&
     (dVar2 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar2 = dVar1 * dVar7;
    dVar4 = dVar3 * dVar7;
    dVar6 = dVar5 * dVar7;
  }
  *param_2 = dVar4;
  param_2[1] = dVar2;
  param_2[2] = dVar6;
  dVar3 = *param_1;
  dVar5 = param_1[1];
  dVar7 = param_1[2];
  *param_3 = dVar2 * dVar7 - dVar5 * dVar6;
  param_3[1] = dVar6 * dVar3 - dVar4 * dVar7;
  param_3[2] = dVar4 * dVar5 - dVar3 * dVar2;
  return;
}



// FUNCTION 1467fc4d4 FUN_1467fc4d4 body=217 status=ok
// SIG undefined FUN_1467fc4d4(void)

void FUN_1467fc4d4(double *param_1)

{
  double dVar1;
  
  for (dVar1 = *param_1; 180.0 < dVar1; dVar1 = dVar1 + -360.0) {
  }
  for (; dVar1 < -180.0; dVar1 = dVar1 + 360.0) {
  }
  *param_1 = dVar1;
  for (dVar1 = param_1[1]; 180.0 < dVar1; dVar1 = dVar1 + -360.0) {
  }
  for (; dVar1 < -180.0; dVar1 = dVar1 + 360.0) {
  }
  param_1[1] = dVar1;
  for (dVar1 = param_1[2]; 180.0 < dVar1; dVar1 = dVar1 + -360.0) {
  }
  for (; dVar1 < -180.0; dVar1 = dVar1 + 360.0) {
  }
  param_1[2] = dVar1;
  return;
}



// FUNCTION 1467fc5ae FUN_1467fc5ae body=153 status=ok
// SIG undefined FUN_1467fc5ae(void)

undefined8 FUN_1467fc5ae(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_140c2d9be(puVar3,&DAT_149e25dd6,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_140c2d9be(puVar3,&DAT_149e25ddc,param_1 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_140c2d9be(puVar3,&DAT_149e25de2,param_1 + 2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1467fc648 FUN_1467fc648 body=204 status=ok
// SIG undefined FUN_1467fc648(void)

ulonglong FUN_1467fc648(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *param_1;
  dVar1 = param_1[1];
  dVar3 = dVar4 * dVar4 + dVar1 * dVar1;
  if (((dVar3 != 1.0) || (dVar2 = dVar4, dVar5 = dVar1, NAN(dVar3))) &&
     (dVar2 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar3)) {
    dVar2 = dVar4 * (1.0 / SQRT(dVar3));
    dVar5 = dVar1 * (1.0 / SQRT(dVar3));
  }
  dVar4 = dVar2;
  if (1.0 <= dVar2) {
    dVar4 = 1.0;
  }
  dVar4 = acos((double)(~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar4 |
                       -(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000));
  return -(ulonglong)(dVar5 < 0.0) & (ulonglong)-dVar4 |
         ~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar4;
}



// FUNCTION 1467fc714 FUN_1467fc714 body=587 status=ok
// SIG undefined FUN_1467fc714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1467fc714(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  dVar4 = in_XMM3._0_8_;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14022d702(&local_a8);
  dVar7 = local_98 * local_98 + local_a8 * local_a8;
  dVar11 = dStack_a0 * dStack_a0 + 0.0;
  auVar9._0_8_ = dVar7 + dVar11;
  auVar9._8_8_ = dVar7 + dVar11;
  auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
  auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
  auVar13 = sqrtpd(in_XMM3,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar13);
  auVar13._8_8_ = dStack_a0 * auVar10._8_8_;
  auVar13._0_8_ = local_a8 * auVar10._0_8_;
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000),auVar13,auVar6);
  if ((-(ulonglong)(1e-08 <= auVar9._0_8_) & 1) == 0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = local_98 * auVar10._0_8_;
  }
  dVar11 = dStack_90;
  if (1.0 <= dStack_90) {
    dVar11 = 1.0;
  }
  dVar11 = acos((double)(~-(ulonglong)(dStack_90 < -1.0) & (ulonglong)dVar11 |
                        -(ulonglong)(dStack_90 < -1.0) & 0xbff0000000000000));
  dVar11 = (dVar11 + dVar11) * dVar4 * 0.5;
  dVar4 = sin(dVar11);
  dVar5 = cos(dVar11);
  dVar14 = auVar13._0_8_ * dVar4;
  dVar2 = auVar13._8_8_ * dVar4;
  dVar7 = dVar7 * dVar4;
  dVar11 = *param_2;
  dVar4 = param_2[1];
  dVar1 = param_2[2];
  dVar12 = dVar2 * dVar1 - dVar4 * dVar7;
  dVar12 = dVar12 + dVar12;
  dVar3 = dVar14 * dVar4 - dVar11 * dVar2;
  dVar3 = dVar3 + dVar3;
  dVar8 = dVar7 * dVar11 - dVar1 * dVar14;
  dVar8 = dVar8 + dVar8;
  *param_1 = (dVar2 * dVar3 - dVar8 * dVar7) + dVar5 * dVar12 + dVar11;
  param_1[1] = (dVar7 * dVar12 - dVar3 * dVar14) + dVar5 * dVar8 + dVar4;
  param_1[2] = (dVar14 * dVar8 - dVar12 * dVar2) + dVar5 * dVar3 + dVar1;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fc960 FUN_1467fc960 body=587 status=ok
// SIG undefined FUN_1467fc960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1467fc960(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  dVar4 = in_XMM3._0_8_;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144a9d448(&local_a8);
  dVar7 = local_98 * local_98 + local_a8 * local_a8;
  dVar11 = dStack_a0 * dStack_a0 + 0.0;
  auVar9._0_8_ = dVar7 + dVar11;
  auVar9._8_8_ = dVar7 + dVar11;
  auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
  auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
  auVar13 = sqrtpd(in_XMM3,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar13);
  auVar13._8_8_ = dStack_a0 * auVar10._8_8_;
  auVar13._0_8_ = local_a8 * auVar10._0_8_;
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000),auVar13,auVar6);
  if ((-(ulonglong)(1e-08 <= auVar9._0_8_) & 1) == 0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = local_98 * auVar10._0_8_;
  }
  dVar11 = dStack_90;
  if (1.0 <= dStack_90) {
    dVar11 = 1.0;
  }
  dVar11 = acos((double)(~-(ulonglong)(dStack_90 < -1.0) & (ulonglong)dVar11 |
                        -(ulonglong)(dStack_90 < -1.0) & 0xbff0000000000000));
  dVar11 = (dVar11 + dVar11) * dVar4 * 0.5;
  dVar4 = sin(dVar11);
  dVar5 = cos(dVar11);
  dVar14 = auVar13._0_8_ * dVar4;
  dVar2 = auVar13._8_8_ * dVar4;
  dVar7 = dVar7 * dVar4;
  dVar11 = *param_2;
  dVar4 = param_2[1];
  dVar1 = param_2[2];
  dVar12 = dVar2 * dVar1 - dVar4 * dVar7;
  dVar12 = dVar12 + dVar12;
  dVar3 = dVar14 * dVar4 - dVar11 * dVar2;
  dVar3 = dVar3 + dVar3;
  dVar8 = dVar7 * dVar11 - dVar1 * dVar14;
  dVar8 = dVar8 + dVar8;
  *param_1 = (dVar2 * dVar3 - dVar8 * dVar7) + dVar5 * dVar12 + dVar11;
  param_1[1] = (dVar7 * dVar12 - dVar3 * dVar14) + dVar5 * dVar8 + dVar4;
  param_1[2] = (dVar14 * dVar8 - dVar12 * dVar2) + dVar5 * dVar3 + dVar1;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fcbac FUN_1467fcbac body=89 status=ok
// SIG undefined FUN_1467fcbac(void)

ulonglong FUN_1467fcbac(float *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite((double)*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite((double)param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite((double)param_1[2]);
      if (iVar1 != 0) {
        iVar1 = _finite((double)param_1[3]);
        uVar2 = CONCAT71(uVar3,iVar1 == 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1467fcc06 FUN_1467fcc06 body=246 status=ok
// SIG undefined FUN_1467fcc06(void)

undefined8 FUN_1467fcc06(float *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 uStack_34;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401a700c(&local_40,0x48);
  if ((uint)local_40 == param_2) {
    FUN_1447712aa(param_3,&local_40);
    *param_1 = local_40;
    param_1[1] = fStack_3c;
  }
  else {
    FUN_1401a700c(&local_40,0x3b);
    if ((uint)local_40 != param_2) {
      FUN_1401a700c(&local_40,0x49);
      if ((uint)local_40 != param_2) {
        uVar1 = 0;
        goto LAB_1467fcc6f;
      }
    }
    FUN_14480c34d(param_3,&local_40);
    *param_1 = (float)(double)CONCAT44(fStack_3c,local_40);
    param_1[1] = (float)(double)CONCAT44(uStack_34,local_38);
    local_38 = (float)local_30;
  }
  param_1[2] = local_38;
  uVar1 = 1;
LAB_1467fcc6f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fccfe FUN_1467fccfe body=160 status=ok
// SIG undefined FUN_1467fccfe(void)

double * FUN_1467fccfe(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar1 = param_1[1];
  dVar3 = 0.0;
  if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar3 = atan2(dVar1,dVar2);
    dVar3 = dVar3 * 57.29577951308232;
    dVar2 = *param_1;
    dVar1 = param_1[1];
  }
  param_2[1] = dVar3;
  dVar3 = SQRT(dVar2 * dVar2 + dVar1 * dVar1);
  dVar2 = param_1[2];
  dVar1 = 0.0;
  if (((dVar2 != 0.0) || (NAN(dVar2))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
    dVar1 = atan2(dVar2,dVar3);
    dVar1 = dVar1 * 57.29577951308232;
  }
  *param_2 = dVar1;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 1467fcd9e FUN_1467fcd9e body=293 status=ok
// SIG undefined FUN_1467fcd9e(void)

double * FUN_1467fcd9e(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *param_1;
  dVar2 = param_1[1];
  dVar1 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar2 != 0.0)) || (NAN(dVar2))) {
    dVar1 = atan2(dVar2,dVar3);
    dVar1 = dVar1 * 0.5;
    dVar3 = *param_1;
    dVar2 = param_1[1];
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
  dVar3 = param_1[2];
  dVar2 = 0.0;
  if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar2 = atan2(dVar3,dVar4);
    dVar2 = dVar2 * 0.5;
  }
  dVar3 = sin(dVar2);
  dVar2 = cos(dVar2);
  dVar4 = sin(dVar1);
  dVar1 = cos(dVar1);
  *param_2 = dVar3 * dVar4;
  param_2[1] = -dVar3 * dVar1;
  param_2[2] = dVar4 * dVar2;
  param_2[3] = dVar2 * dVar1;
  return param_2;
}



// FUNCTION 1467fcec4 FUN_1467fcec4 body=80 status=ok
// SIG undefined FUN_1467fcec4(void)

ulonglong FUN_1467fcec4(double *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite(*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite(param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite(param_1[2]);
      if (iVar1 != 0) {
        iVar1 = _finite(param_1[3]);
        uVar2 = CONCAT71(uVar3,iVar1 == 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1467fcf14 FUN_1467fcf14 body=243 status=ok
// SIG undefined FUN_1467fcf14(void)

undefined8 FUN_1467fcf14(double *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 uStack_34;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401a700c(&local_40,0x48);
  if ((uint)local_40 == param_2) {
    FUN_1447712aa(param_3,&local_40);
    *param_1 = (double)local_40;
    param_1[1] = (double)fStack_3c;
    local_30 = (double)local_38;
  }
  else {
    FUN_1401a700c(&local_40,0x3b);
    if ((uint)local_40 != param_2) {
      FUN_1401a700c(&local_40,0x49);
      if ((uint)local_40 != param_2) {
        uVar1 = 0;
        goto LAB_1467fcf83;
      }
    }
    FUN_14480c34d(param_3,&local_40);
    *param_1 = (double)CONCAT44(fStack_3c,local_40);
    param_1[1] = (double)CONCAT44(uStack_34,local_38);
  }
  param_1[2] = local_30;
  uVar1 = 1;
LAB_1467fcf83:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fd008 FUN_1467fd008 body=1246 status=ok
// SIG undefined FUN_1467fd008(void)

longlong * FUN_1467fd008(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 9,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xb,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xb] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xc] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xd,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xd] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xe,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xe] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 0xf;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1467fd4e6 FUN_1467fd4e6 body=365 status=ok
// SIG undefined FUN_1467fd4e6(void)

void FUN_1467fd4e6(double *param_1,double *param_2)

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
  
  dVar1 = param_1[10];
  dVar2 = param_1[5];
  dVar3 = param_1[6];
  dVar4 = param_1[9];
  *param_2 = dVar2 * dVar1 - dVar4 * dVar3;
  dVar5 = param_1[4];
  dVar6 = param_1[8];
  param_2[1] = dVar3 * dVar6 - dVar1 * dVar5;
  param_2[2] = dVar5 * dVar4 - dVar6 * dVar2;
  param_2[3] = 0.0;
  dVar7 = param_1[1];
  dVar8 = param_1[2];
  param_2[4] = dVar4 * dVar8 - dVar7 * dVar1;
  dVar9 = *param_1;
  param_2[5] = dVar1 * dVar9 - dVar8 * dVar6;
  param_2[6] = dVar6 * dVar7 - dVar4 * dVar9;
  param_2[7] = 0.0;
  param_2[8] = dVar7 * dVar3 - dVar2 * dVar8;
  param_2[9] = dVar8 * dVar5 - dVar3 * dVar9;
  param_2[10] = dVar9 * dVar2 - dVar5 * dVar7;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  return;
}



// FUNCTION 1467fd654 FUN_1467fd654 body=179 status=ok
// SIG undefined FUN_1467fd654(void)

undefined8 * FUN_1467fd654(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = (double)param_1[0xc] + *param_3;
  param_2[0xd] = (double)param_1[0xd] + param_3[1];
  param_2[0xe] = (double)param_1[0xe] + param_3[2];
  param_2[0xf] = param_1[0xf];
  return param_2;
}



// FUNCTION 1467fd708 FUN_1467fd708 body=412 status=ok
// SIG undefined FUN_1467fd708(void)

undefined8 * FUN_1467fd708(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = *(undefined4 *)(param_1 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_140002266(&local_38,L"[%g %g %g %g] ",*param_1,param_1[1]);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_48 = *(undefined4 *)(param_1 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_40 = *(undefined4 *)(param_1 + 7);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x3c);
  FUN_140002266(&local_38,L"[%g %g %g %g] ",param_1[4],param_1[5]);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_48 = *(undefined4 *)(param_1 + 10);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_40 = *(undefined4 *)(param_1 + 0xb);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x5c);
  FUN_140002266(&local_38,L"[%g %g %g %g] ",param_1[8],param_1[9]);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_48 = *(undefined4 *)(param_1 + 0xe);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x74);
  uStack_40 = *(undefined4 *)(param_1 + 0xf);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x7c);
  FUN_140002266(&local_38,L"[%g %g %g %g] ",param_1[0xc],param_1[0xd]);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fd8a5 FUN_1467fd8a5 body=1757 status=ok
// SIG undefined FUN_1467fd8a5(void)

longlong * FUN_1467fd8a5(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    lVar4 = 0;
    do {
      puVar3 = (ulonglong *)param_1[1];
      pfVar1 = (float *)*puVar3 + 1;
      if ((float *)puVar3[1] < pfVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_44);
        }
      }
      else {
        local_44 = *(float *)*puVar3;
        *puVar3 = (ulonglong)pfVar1;
      }
      puVar3 = (ulonglong *)param_1[1];
      pfVar1 = (float *)*puVar3 + 1;
      if ((float *)puVar3[1] < pfVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_48);
        }
      }
      else {
        local_48 = *(float *)*puVar3;
        *puVar3 = (ulonglong)pfVar1;
      }
      puVar3 = (ulonglong *)param_1[1];
      pfVar1 = (float *)*puVar3 + 1;
      if ((float *)puVar3[1] < pfVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_4c);
        }
      }
      else {
        local_4c = *(float *)*puVar3;
        *puVar3 = (ulonglong)pfVar1;
      }
      puVar3 = (ulonglong *)param_1[1];
      pfVar1 = (float *)*puVar3 + 1;
      if ((float *)puVar3[1] < pfVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_50);
        }
      }
      else {
        local_50 = *(float *)*puVar3;
        *puVar3 = (ulonglong)pfVar1;
      }
      *(double *)((longlong)param_2 + lVar4) = (double)local_44;
      *(double *)((longlong)param_2 + lVar4 + 8) = (double)local_48;
      *(double *)((longlong)param_2 + lVar4 + 0x10) = (double)local_4c;
      *(double *)((longlong)param_2 + lVar4 + 0x18) = (double)local_50;
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != 0x80);
  }
  else {
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[1] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[2] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[3] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[4] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[5] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[6] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[7] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[8] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 9,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[9] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[10] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xb,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[0xb] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[0xc] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xd,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[0xd] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xe,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[0xe] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    param_2 = param_2 + 0xf;
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467fdf84 FUN_1467fdf84 body=105 status=ok
// SIG undefined FUN_1467fdf84(void)

longlong FUN_1467fdf84(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar6);
      if (plVar2 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        if (((ulonglong)plVar2[3] >> 0x3e & 1) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar3 = plVar2[2];
      }
      lVar5 = lVar5 + lVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return lVar5;
}



// FUNCTION 1467fdfee FUN_1467fdfee body=114 status=ok
// SIG undefined FUN_1467fdfee(void)

undefined8 FUN_1467fdfee(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_1467ac028(local_30,lVar1,*(undefined4 *)(param_1 + 0x10),0);
  FUN_1467fe062(local_30,param_2);
  FUN_1458cf622(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe062 FUN_1467fe062 body=305 status=ok
// SIG undefined FUN_1467fe062(void)

undefined8 * FUN_1467fe062(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)param_1[1];
  puVar7 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 2) << 3;
    do {
      FUN_1467fe194(puVar7,&local_58);
      FUN_1467aa942(puVar7,&local_58);
      plVar5 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 3;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar3 & 0x3fffffff) == 1) {
          (**(code **)(*local_58 + 0x10))(local_58);
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
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    puVar6 = (undefined8 *)param_1[1];
  }
  if (puVar6 == (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  param_2[1] = puVar6;
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
  param_1[2] = 0x100000000;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe194 FUN_1467fe194 body=108 status=ok
// SIG undefined FUN_1467fe194(void)

longlong * FUN_1467fe194(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if ((lVar1 == 0) || ((*(ulonglong *)(lVar1 + 0x18) >> 0x3c & 1) != 0)) {
    *param_1 = 0;
    *param_2 = lVar1;
  }
  else {
    FUN_1467fe202(param_1,local_28);
    FUN_1467fe694(param_2,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe202 FUN_1467fe202 body=103 status=ok
// SIG undefined FUN_1467fe202(void)

longlong * FUN_1467fe202(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar3 = plVar1[2];
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      if ((param_1[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      lVar2 = param_1[1];
      goto LAB_1467fe257;
    }
  }
  lVar2 = 0;
LAB_1467fe257:
  *param_2 = lVar2;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 1467fe26a FUN_1467fe26a body=260 status=ok
// SIG undefined FUN_1467fe26a(void)

longlong FUN_1467fe26a(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_68 = param_4;
  if ((longlong)iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if (plVar2 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        if (((ulonglong)plVar2[3] >> 0x3e & 1) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar3 = plVar2[2];
      }
      uVar7 = uVar7 + lVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (uVar7 <= param_3) {
    param_3 = uVar7;
  }
  uVar6 = uVar7 - param_3;
  if (local_68 < uVar7 - param_3) {
    uVar6 = local_68;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x100000000;
  local_50 = &local_60;
  local_58 = FUN_14276ffc0;
  local_60 = param_2;
  FUN_1467fe370(param_1,param_3,uVar6);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467fe370 FUN_1467fe370 body=259 status=ok
// SIG undefined FUN_1467fe370(void)

void FUN_1467fe370(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if ((longlong)(int)param_1[2] != 0) {
    lVar5 = (longlong)(int)param_1[2] << 3;
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        uVar3 = plVar1[2];
      }
      uVar2 = param_2 - uVar3;
      if (param_2 < uVar3 || uVar2 == 0) {
        FUN_1467fe202(plVar4,&local_58);
        if (local_50 < param_2) {
          param_2 = local_50;
        }
        uVar3 = local_50 - param_2;
        if (param_3 <= local_50 - param_2) {
          uVar3 = param_3;
        }
        if (param_3 == 0 || uVar3 != 0) {
          local_68 = param_2 + local_58;
          local_60 = uVar3;
          (*(code *)*param_4)(param_4[1],&local_68,plVar4);
        }
        param_3 = param_3 - uVar3;
        if (param_3 == 0) break;
        uVar2 = 0;
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
      param_2 = uVar2;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467fe474 FUN_1467fe474 body=183 status=ok
// SIG undefined FUN_1467fe474(void)

undefined8 *
FUN_1467fe474(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_98 [40];
  code *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  code **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &local_70;
  local_68 = FUN_140e03604;
  local_70 = FUN_1467ff97c;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = &local_60;
  local_50 = param_5;
  local_40 = 0;
  uStack_38 = 0;
  local_18 = &local_30;
  local_30 = FUN_142770178;
  local_20 = FUN_1427703fe;
  local_60 = param_4;
  local_58 = param_2;
  FUN_1467fe370(0,param_3,param_4);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe52c FUN_1467fe52c body=146 status=ok
// SIG undefined FUN_1467fe52c(void)

undefined8 *
FUN_1467fe52c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  code **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = &local_60;
  local_50 = param_5;
  uStack_48 = param_6;
  local_40 = 0;
  uStack_38 = 0;
  local_18 = &local_30;
  local_30 = FUN_142770178;
  local_20 = FUN_1427703fe;
  local_60 = param_4;
  local_58 = param_2;
  FUN_1467fe370(param_5,param_3,param_4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe5c0 FUN_1467fe5c0 body=92 status=ok
// SIG undefined FUN_1467fe5c0(void)

void FUN_1467fe5c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  code *local_18;
  undefined4 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_10 = &local_28;
  local_18 = FUN_1427703c2;
  FUN_1467fe370(local_28,param_3,*(undefined8 *)(param_2 + 2));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe61e FUN_1467fe61e body=118 status=ok
// SIG undefined FUN_1467fe61e(void)

void FUN_1467fe61e(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
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
  *param_1 = 0;
  return;
}



// FUNCTION 1467fe694 FUN_1467fe694 body=127 status=ok
// SIG undefined FUN_1467fe694(void)

undefined8 * FUN_1467fe694(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  void *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _Src = (void *)*param_2;
  _Size = param_2[1];
  FUN_140e03604(&local_40,_Size);
  FUN_1467a81dc(&local_40,local_38);
  if (_Size != 0) {
    memcpy(local_38[0],_Src,_Size);
  }
  *param_1 = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe714 FUN_1467fe714 body=126 status=ok
// SIG undefined FUN_1467fe714(void)

undefined8 * FUN_1467fe714(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  void *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e03604(&local_40,param_3);
  FUN_1467a81dc(&local_40,local_38);
  if (param_3 != 0) {
    memcpy(local_38[0],param_2,param_3);
  }
  *param_1 = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe794 FUN_1467fe794 body=131 status=ok
// SIG undefined FUN_1467fe794(void)

undefined8 * FUN_1467fe794(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_149e25c90;
  LOCK();
  puVar5[3] = puVar5[3] | 0x4000000000000000;
  UNLOCK();
  LOCK();
  puVar5[3] = puVar5[3] | 0x2000000000000000;
  UNLOCK();
  *param_1 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = puVar5 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar5[3] = puVar5[3] + 0x40000000;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 1467fe818 FUN_1467fe818 body=132 status=ok
// SIG undefined FUN_1467fe818(void)

undefined8 * FUN_1467fe818(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_149e25c90;
  LOCK();
  puVar3[3] = puVar3[3] | 0x4000000000000000;
  UNLOCK();
  LOCK();
  puVar3[3] = puVar3[3] | 0x2000000000000000;
  UNLOCK();
  *param_1 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = puVar3 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar3[3] = puVar3[3] + 0x40000000;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 1467fe89c FUN_1467fe89c body=40 status=ok
// SIG undefined FUN_1467fe89c(void)

longlong * FUN_1467fe89c(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(param_2 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 1467fe8c4 thunk_FUN_1467fe61e body=5 status=ok
// SIG undefined thunk_FUN_1467fe61e(void)

void thunk_FUN_1467fe61e(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
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
  *param_1 = 0;
  return;
}



// FUNCTION 1467fe8ca FUN_1467fe8ca body=91 status=ok
// SIG undefined FUN_1467fe8ca(void)

void FUN_1467fe8ca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_141033dca();
  local_18 = &local_28;
  local_20 = FUN_142770442;
  local_28 = param_1;
  FUN_14275bb28(uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fe926 FUN_1467fe926 body=420 status=ok
// SIG undefined FUN_1467fe926(void)

void FUN_1467fe926(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  undefined1 local_4a8 [16];
  longlong local_498 [2];
  undefined4 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined1 local_470 [1024];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  local_70 = 0;
  local_68 = 0x8000000000;
  FUN_1467feacc(param_1 + 8);
  iVar3 = (int)param_2[1];
  iVar4 = *(int *)(param_1 + 0x40) + iVar3;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x44) < iVar4) {
    FUN_1467ff9d4(plVar1);
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      local_498[0] = 0;
      local_498[1] = 0;
      local_480 = 0;
      uStack_478 = 0;
      local_488 = *(undefined4 *)(lVar2 + 0x18 + lVar5);
      FUN_140056680(local_4a8,*(undefined8 *)(lVar2 + 0x10 + lVar5));
      if (local_498[0] != 0) {
        FUN_1400020a8();
      }
      local_4b8 = &local_480;
      FUN_1467febb2(param_1 + 8,local_470,*(undefined8 *)(lVar2 + lVar5),
                    *(undefined4 *)(lVar2 + 8 + lVar5));
      iVar4 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
        FUN_1467ffade(plVar1,iVar4);
      }
      FUN_1467ffa44((longlong)iVar4 * 0x28 + *plVar1,local_498);
      FUN_1467bc7a6(local_498);
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar5);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467feacc FUN_1467feacc body=228 status=ok
// SIG undefined FUN_1467feacc(void)

void FUN_1467feacc(longlong *param_1,longlong param_2)

{
  int iVar1;
  HANDLE pvVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  while( true ) {
    iVar1 = *(int *)(param_2 + 0x408);
    local_3c = 0;
    lVar3 = *(longlong *)(param_2 + 0x400);
    if (*(longlong *)(param_2 + 0x400) == 0) {
      lVar3 = param_2;
    }
    pvVar2 = (HANDLE)*param_1;
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = GetCurrentProcess();
    }
    uVar4 = iVar1 << 3;
    local_48 = 3;
    iVar1 = K32EnumProcessModulesEx(pvVar2,lVar3,uVar4,&local_3c);
    if (iVar1 == 0) break;
    if (local_3c <= uVar4) {
      lVar3 = *(longlong *)(param_2 + 0x400);
      if (*(longlong *)(param_2 + 0x400) == 0) {
        lVar3 = param_2;
      }
      FUN_1467ffe5f(lVar3,*(undefined4 *)(param_2 + 0x408));
LAB_1467feb68:
      if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1467fefe2(param_2,local_3c >> 3);
  }
  *(undefined4 *)(param_2 + 0x408) = 0;
  if (*(int *)(param_2 + 0x40c) != 0) {
    FUN_1467ffc44(param_2);
  }
  goto LAB_1467feb68;
}



// FUNCTION 1467febb2 FUN_1467febb2 body=800 status=ok
// SIG undefined FUN_1467febb2(void)

void FUN_1467febb2(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                  longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  wchar_t *_Str;
  undefined1 auStack_2d8 [40];
  HANDLE local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  wchar_t *local_298;
  undefined8 uStack_290;
  wchar_t *local_288;
  int local_280;
  wchar_t *local_278;
  int local_270;
  undefined4 local_26c;
  wchar_t local_268 [260];
  ulonglong local_60;
  size_t sVar5;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2a8 = param_3;
  FUN_1467b6bd6(param_5,param_4);
  FUN_140056680(&local_288,L"Unknown");
  local_2b0 = (HANDLE)*param_1;
  if (local_2b0 == (HANDLE)0x0) {
    local_2b0 = GetCurrentProcess();
  }
  if (0 < (int)param_4) {
    uVar13 = 0;
    local_2a0 = (ulonglong)param_4;
    do {
      pwVar7 = local_288;
      uVar14 = *(ulonglong *)(local_2a8 + uVar13 * 8);
      uVar3 = *(uint *)(param_2 + 0x408);
      lVar15 = *(longlong *)(param_2 + 0x400);
      if (*(longlong *)(param_2 + 0x400) == 0) {
        lVar15 = param_2;
      }
      if ((int)uVar3 < 1) {
LAB_1467feca7:
        local_298 = (wchar_t *)0x0;
        lVar15 = (longlong)local_280;
        uStack_290._0_4_ = local_280;
        if (lVar15 == 0) {
          uVar12 = 0;
          iVar11 = 0;
          pwVar7 = (wchar_t *)0x0;
        }
        else {
          FUN_1446dd670(&local_298,local_280,0);
          memcpy(local_298,pwVar7,lVar15 * 2);
          pwVar7 = local_298;
          iVar11 = (int)uStack_290;
          uVar12 = uStack_290._4_4_;
        }
        local_298 = (wchar_t *)0x0;
        uStack_290 = 0;
        iVar4 = (int)param_5[1];
        uVar3 = iVar4 + 1;
        *(uint *)(param_5 + 1) = uVar3;
        lVar15 = 0;
      }
      else {
        iVar11 = 0;
        uVar9 = (ulonglong)uVar3;
        do {
          uVar10 = (int)(uVar9 >> 1) + iVar11;
          uVar8 = (uint)uVar9;
          if (*(ulonglong *)(lVar15 + (ulonglong)uVar10 * 8) <= uVar14) {
            iVar11 = uVar10 + (uVar8 & 1);
          }
          uVar9 = uVar9 >> 1;
        } while (1 < uVar8);
        if (iVar11 < 1 || (int)uVar3 < iVar11) goto LAB_1467feca7;
        iVar4 = local_280 + -1;
        if (local_280 == 0) {
          iVar4 = 0;
        }
        _Str = local_268;
        iVar2 = K32GetModuleFileNameExW
                          (local_2b0,*(undefined8 *)(lVar15 + (ulonglong)(iVar11 - 1) * 8),_Str,
                           0x104);
        if (iVar2 != 0) {
          sVar5 = wcslen(_Str);
          extraout_EAX = (int)sVar5;
          local_278 = _Str;
          local_270 = extraout_EAX;
          uVar3 = FUN_144a98c79(&local_278,0x5c,0);
          iVar4 = extraout_EAX;
          if (uVar3 != 0xffffffff) {
            iVar4 = ~uVar3 + extraout_EAX;
            if (extraout_EAX <= iVar4) {
              iVar4 = extraout_EAX;
            }
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            _Str = (wchar_t *)
                   ((longlong)local_268 +
                   ((longlong)extraout_EAX * 2 - (ulonglong)(uint)(iVar4 * 2)));
          }
          local_278 = _Str;
          local_270 = iVar4;
          iVar2 = FUN_144a98c79(&local_278,0x2e,0);
          pwVar7 = _Str;
          if (iVar2 != -1) {
            if (iVar2 < iVar4) {
              iVar4 = iVar2;
            }
            if (iVar4 < 1) {
              iVar4 = 0;
            }
          }
        }
        lVar15 = *(longlong *)(param_2 + 0x400);
        if (*(longlong *)(param_2 + 0x400) == 0) {
          lVar15 = param_2;
        }
        lVar15 = *(longlong *)(lVar15 + (ulonglong)(iVar11 - 1) * 8);
        uVar14 = *(longlong *)(local_2a8 + uVar13 * 8) - lVar15;
        FUN_14006620a(&local_278,pwVar7,iVar4);
        iVar4 = (int)param_5[1];
        uVar3 = iVar4 + 1;
        *(uint *)(param_5 + 1) = uVar3;
        pwVar7 = local_278;
        iVar11 = local_270;
        uVar12 = local_26c;
      }
      if (*(uint *)((longlong)param_5 + 0xc) < uVar3) {
        FUN_1467bc1f2(param_5,iVar4);
      }
      lVar1 = *param_5;
      lVar6 = (longlong)iVar4 * 0x20;
      *(wchar_t **)(lVar1 + lVar6) = pwVar7;
      *(int *)(lVar1 + 8 + lVar6) = iVar11;
      *(undefined4 *)(lVar1 + 0xc + lVar6) = uVar12;
      *(longlong *)(lVar1 + 0x10 + lVar6) = lVar15;
      *(ulonglong *)(lVar1 + 0x18 + lVar6) = uVar14;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_2a0);
  }
  if (local_288 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467feed4 FUN_1467feed4 body=94 status=ok
// SIG undefined FUN_1467feed4(void)

void FUN_1467feed4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_20 = param_5;
  local_30 = 1;
  local_28 = param_4;
  local_18 = param_3;
  local_10 = param_2;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fef34 FUN_1467fef34 body=172 status=ok
// SIG undefined FUN_1467fef34(void)

void FUN_1467fef34(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined1 local_440 [1024];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_40 = 0;
  local_38 = 0x8000000000;
  FUN_1467feacc(param_1 + 8,local_440);
  local_448 = param_1 + 0x28;
  FUN_1467febb2(param_1 + 8,local_440,param_2,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467fefe2 FUN_1467fefe2 body=127 status=ok
// SIG undefined FUN_1467fefe2(void)

void FUN_1467fefe2(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x408) = param_2;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467ffd2e(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 0x408) = param_2;
  FUN_1467ffdac(param_1);
  return;
}



// FUNCTION 1467ff062 FUN_1467ff062 body=90 status=ok
// SIG undefined FUN_1467ff062(void)

bool FUN_1467ff062(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
    lVar1 = *(longlong *)(param_1 + 0x38) + 0x18;
    do {
      FUN_1467ff0bc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(lVar1 + -8),lVar1 + -0x18,lVar1,
                    param_2);
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return 1 < *(int *)(param_2 + 8);
}



// FUNCTION 1467ff0bc FUN_1467ff0bc body=871 status=ok
// SIG undefined FUN_1467ff0bc(void)

void FUN_1467ff0bc(int param_1,int param_2,undefined8 *param_3,longlong *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  undefined8 *local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400020e8(param_5,L"<Thread>",8);
  FUN_1400020e8(param_5,L"<CallStack>",0xb);
  if ((longlong)(int)param_4[1] == 0) {
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
LAB_1467ff239:
    local_78 = L"";
  }
  else {
    lVar2 = *param_4;
    lVar5 = (longlong)(int)param_4[1] * 0x20;
    lVar4 = 0;
    iVar8 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 8 + lVar4);
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 != lVar4);
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    lVar4 = 0;
    local_88 = param_1;
    local_84 = param_2;
    local_80 = param_3;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar4) != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      local_98 = *(undefined8 *)(lVar2 + 0x10 + lVar4);
      local_90 = *(undefined8 *)(lVar2 + 0x18 + lVar4);
      FUN_140002266(&local_68,L"%-*s 0x%016llx + %-16llx",iVar8 + 1,puVar7);
      iVar1 = local_60 + -1;
      if (local_60 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(&local_58,&DAT_149e02010,2);
      lVar4 = lVar4 + 0x20;
    } while (lVar5 != lVar4);
    param_3 = local_80;
    param_1 = local_88;
    param_2 = local_84;
    if ((int)uStack_50 == 0) goto LAB_1467ff239;
    local_78 = local_58;
    if (local_58 == (wchar_t *)0x0) {
      local_70 = 0;
      goto LAB_1467ff24b;
    }
  }
  sVar3 = wcslen(local_78);
  local_70 = (int)sVar3;
LAB_1467ff24b:
  FUN_1467b62c0(param_5);
  FUN_1400020e8(param_5,L"</CallStack>",0xc);
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pwVar6 = L"false";
  if (param_2 == param_1) {
    pwVar6 = L"true";
  }
  FUN_140002266(&local_58,L"<IsCrashed>%s</IsCrashed>",pwVar6);
  iVar8 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar8 = 0;
  }
  FUN_1400020e8(param_5,local_58,iVar8);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  FUN_1400020e8(param_5,L"<Registers></Registers>",0x17);
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  FUN_140002266(&local_58,L"<ThreadID>%d</ThreadID>",param_2);
  iVar8 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar8 = 0;
  }
  FUN_1400020e8(param_5,local_58,iVar8);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_58,L"<ThreadName>%s</ThreadName>",puVar7);
  iVar8 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar8 = 0;
  }
  FUN_1400020e8(param_5,local_58,iVar8);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  FUN_1400020e8(param_5,L"</Thread>",9);
  FUN_1400020e8(param_5,&DAT_149e02010,2);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ff424 FUN_1467ff424 body=419 status=ok
// SIG undefined FUN_1467ff424(void)

undefined8
FUN_1467ff424(longlong param_1,uint param_2,void *param_3,undefined8 param_4,undefined4 *param_5)

{
  PRUNTIME_FUNCTION FunctionEntry;
  ulonglong uVar1;
  ulonglong uVar2;
  DWORD64 ControlPc;
  _KNONVOLATILE_CONTEXT_POINTERS local_708;
  _CONTEXT local_608;
  _UNWIND_HISTORY_TABLE local_138;
  PVOID local_60;
  ulonglong local_58;
  ulonglong local_50;
  uint local_44;
  
  memcpy(&local_608,param_3,0x4d0);
  ControlPc = local_608.Rip;
  *param_5 = 0;
  if ((local_608.Rip != 0) && ((DWORD64 *)local_608.Rsp != (DWORD64 *)0x0)) {
    uVar1 = 0;
    memset(&local_138,0,0xd8);
    if (param_2 != 0) {
      uVar2 = (ulonglong)param_2;
      uVar1 = 0;
      local_44 = param_2;
      do {
        *(DWORD64 *)(param_1 + uVar1 * 8) = ControlPc;
        *param_5 = (int)uVar1;
        local_50 = 0;
        FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_50,&local_138);
        if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
          local_608.Rip = *(DWORD64 *)local_608.Rsp;
          local_608.Rsp = local_608.Rsp + 8;
        }
        else {
          memset(&local_708,0,0x100);
          local_60 = (PVOID)0x0;
          local_58 = 0;
          RtlVirtualUnwind(0,local_50,local_608.Rip,FunctionEntry,&local_608,&local_60,&local_58,
                           &local_708);
        }
        uVar1 = uVar1 + 1;
        param_2 = local_44;
      } while ((uVar1 < uVar2) && (ControlPc = local_608.Rip, local_608.Rip != 0));
    }
    if ((uint)uVar1 < param_2) {
      memset((void *)(param_1 + (uVar1 & 0xffffffff) * 8),0,
             (ulonglong)(~(uint)uVar1 + param_2) * 8 + 8);
    }
  }
  return 1;
}



// FUNCTION 1467ff5ca FUN_1467ff5ca body=132 status=ok
// SIG undefined FUN_1467ff5ca(void)

void FUN_1467ff5ca(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467ff650 FUN_1467ff650 body=16 status=ok
// SIG undefined FUN_1467ff650(void)

void FUN_1467ff650(longlong param_1)

{
  LOCK();
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) | 0x4000000000000000;
  UNLOCK();
  return;
}



// FUNCTION 1467ff662 FUN_1467ff662 body=39 status=ok
// SIG undefined FUN_1467ff662(void)

undefined8 * FUN_1467ff662(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e25ce0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ff68c FUN_1467ff68c body=114 status=ok
// SIG undefined FUN_1467ff68c(void)

void FUN_1467ff68c(longlong *param_1,int param_2)

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



// FUNCTION 1467ff6fe FUN_1467ff6fe body=321 status=ok
// SIG undefined FUN_1467ff6fe(void)

void FUN_1467ff6fe(double *param_1,double *param_2)

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
  
  dVar1 = param_1[3];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    dVar5 = param_1[2];
    dVar8 = param_2[2] - dVar5;
    dVar6 = *param_1;
    dVar7 = param_1[1];
    dVar2 = param_2[1] - dVar7;
    dVar3 = *param_2 - dVar6;
    dVar4 = dVar8 * dVar8 + dVar3 * dVar3 + dVar2 * dVar2;
    dVar9 = param_2[3];
    if ((dVar1 - dVar9) * (dVar1 - dVar9) + 9.999999747378752e-05 < dVar4) {
      dVar4 = SQRT(dVar4);
      dVar9 = (dVar9 + dVar4 + dVar1) * 0.5;
      if (9.99999993922529e-09 < dVar4) {
        dVar4 = (dVar9 - dVar1) / dVar4;
        dVar6 = dVar6 + dVar3 * dVar4;
        dVar7 = dVar7 + dVar2 * dVar4;
        dVar5 = dVar5 + dVar8 * dVar4;
      }
      *param_1 = dVar6;
      param_1[1] = dVar7;
      param_1[2] = dVar5;
      param_1[3] = dVar9;
      return;
    }
    if (dVar9 <= dVar1) {
      return;
    }
  }
  dVar1 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = dVar6;
  *param_1 = dVar1;
  param_1[1] = dVar5;
  return;
}



// FUNCTION 1467ff840 FUN_1467ff840 body=132 status=ok
// SIG undefined FUN_1467ff840(void)

void FUN_1467ff840(longlong param_1,int param_2)

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



// FUNCTION 1467ff8c6 FUN_1467ff8c6 body=63 status=ok
// SIG undefined FUN_1467ff8c6(void)

void FUN_1467ff8c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467ff906(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1467ff906 FUN_1467ff906 body=117 status=ok
// SIG undefined FUN_1467ff906(void)

ulonglong FUN_1467ff906(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 1467ff97c FUN_1467ff97c body=25 status=ok
// SIG undefined FUN_1467ff97c(void)

undefined8 FUN_1467ff97c(undefined8 param_1,code *param_2,undefined8 *param_3)

{
  (*param_2)(param_1,*param_3);
  return param_1;
}



// FUNCTION 1467ff996 FUN_1467ff996 body=52 status=ok
// SIG undefined FUN_1467ff996(void)

undefined8 * FUN_1467ff996(undefined8 *param_1,int param_2)

{
  FUN_14152e1c8(param_1 + 4);
  *param_1 = &PTR_LAB_149e25ce0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ff9d4 FUN_1467ff9d4 body=112 status=ok
// SIG undefined FUN_1467ff9d4(void)

void FUN_1467ff9d4(longlong param_1,uint param_2)

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



// FUNCTION 1467ffa44 FUN_1467ffa44 body=154 status=ok
// SIG undefined FUN_1467ffa44(void)

undefined8 * FUN_1467ffa44(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1467ffb72(param_1 + 3,iVar1);
    FUN_1467ffbca(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1467ffade FUN_1467ffade body=147 status=ok
// SIG undefined FUN_1467ffade(void)

void FUN_1467ffade(longlong param_1,int param_2)

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



// FUNCTION 1467ffb72 FUN_1467ffb72 body=88 status=ok
// SIG undefined FUN_1467ffb72(void)

void FUN_1467ffb72(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1467ffbca FUN_1467ffbca body=121 status=ok
// SIG undefined FUN_1467ffbca(void)

void FUN_1467ffbca(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = puVar5[-2];
    _Src = *(void **)(puVar5 + -4);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)(param_1 + 2) = *puVar5;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    param_1 = param_1 + 4;
    puVar5 = puVar5 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1467ffc44 FUN_1467ffc44 body=90 status=ok
// SIG undefined FUN_1467ffc44(void)

void FUN_1467ffc44(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if (*(void **)((longlong)param_1 + 0x400) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x400),
              (longlong)*(int *)((longlong)param_1 + 0x408) << 3);
      FUN_1446efa72((longlong)param_1 + 0x400,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1467ffc9e FUN_1467ffc9e body=144 status=ok
// SIG undefined FUN_1467ffc9e(void)

void FUN_1467ffc9e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 1467ffd2e FUN_1467ffd2e body=125 status=ok
// SIG undefined FUN_1467ffd2e(void)

void FUN_1467ffd2e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_1467ffc9e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467ffdac FUN_1467ffdac body=67 status=ok
// SIG undefined FUN_1467ffdac(void)

void FUN_1467ffdac(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467ffdf0(*(undefined4 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x40c));
  if (iVar1 == *(int *)(param_1 + 0x40c)) {
    return;
  }
  *(int *)(param_1 + 0x40c) = iVar1;
  FUN_1467ffc9e(param_1,*(undefined4 *)(param_1 + 0x408),iVar1);
  return;
}



// FUNCTION 1467ffdf0 FUN_1467ffdf0 body=111 status=ok
// SIG undefined FUN_1467ffdf0(void)

ulonglong FUN_1467ffdf0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1467ffe5f FUN_1467ffe5f body=565 status=ok
// SIG undefined FUN_1467ffe5f(void)

void FUN_1467ffe5f(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_1467fff22:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_1467fffa0;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar7 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_146800073;
      }
LAB_146800088:
      FUN_146800095(puVar2);
LAB_146800073:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1467fffa0:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_146800073;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_146800073;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_146800088;
  goto LAB_1467fff22;
}



// FUNCTION 146800095 FUN_146800095 body=283 status=ok
// SIG undefined FUN_146800095(void)

void FUN_146800095(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001468000b6:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x0001468000b6;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1468001b0 FUN_1468001b0 body=33 status=ok
// SIG undefined FUN_1468001b0(void)

undefined8 FUN_1468001b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145c3c3b7();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 1468001d2 FUN_1468001d2 body=29 status=ok
// SIG undefined FUN_1468001d2(void)

undefined8 FUN_1468001d2(undefined8 param_1)

{
  FUN_140056680(param_1,L"UnrealEngine");
  return param_1;
}



// FUNCTION 1468001f0 FUN_1468001f0 body=118 status=ok
// SIG undefined FUN_1468001f0(void)

undefined8 * FUN_1468001f0(undefined8 *param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c846568 == '\x01') {
    local_14 = DAT_14c846558;
    FUN_14680026a(param_1,&local_14,&DAT_14c846560);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14680026a FUN_14680026a body=125 status=ok
// SIG undefined FUN_14680026a(void)

undefined8 FUN_14680026a(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((ABS((double)*param_3 / (double)param_3[1] + -29.970029970029973) <= 1e-08) ||
     (ABS((double)*param_3 / (double)param_3[1] + -59.940059940059946) <= 1e-08)) {
    uVar1 = FUN_14681e9e6();
  }
  else {
    uVar1 = 0;
  }
  FUN_146805de4(param_1,param_2,param_3,uVar1);
  return param_1;
}



// FUNCTION 1468002e8 FUN_1468002e8 body=35 status=ok
// SIG undefined FUN_1468002e8(void)

void FUN_1468002e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c846560;
  if (DAT_14c846568 != '\x01') {
    uVar1 = 0x10000ea60;
  }
  *param_1 = uVar1;
  return;
}



// FUNCTION 14680030c FUN_14680030c body=65 status=ok
// SIG undefined FUN_14680030c(void)

void FUN_14680030c(undefined4 param_1)

{
  DAT_14c84656c = param_1;
  FUN_1458d3460(DAT_14c872ce0,L"Audio",L"UnfocusedVolumeMultiplier",param_1,&DAT_14c872ce8);
  DAT_14c8465a4 = 1;
  return;
}



// FUNCTION 14680034e FUN_14680034e body=32 status=ok
// SIG undefined FUN_14680034e(void)

undefined8 FUN_14680034e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FArchiveMD5");
  return param_2;
}



// FUNCTION 14680036e FUN_14680036e body=570 status=ok
// SIG undefined FUN_14680036e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14680036e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_1088 [32];
  undefined8 local_1068;
  undefined8 local_1060;
  int local_104c;
  char local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  memset(local_1048,0,0x1000);
  local_104c = 0;
  LOCK();
  bVar10 = DAT_14c866dc0 == 0;
  if (bVar10) {
    DAT_14c866dc0 = 1;
  }
  UNLOCK();
  if (!bVar10) {
    FUN_1400c0ca8(&DAT_14c866dc0);
  }
  lVar4 = (longlong)local_104c;
  if (lVar4 < 0x3fee) {
    local_104c = local_104c + 0x12;
    builtin_wcsncpy((wchar_t *)(&DAT_14c86aa80 + lVar4 * 2),L"Fata",4);
    builtin_wcsncpy((wchar_t *)(lVar4 * 2 + 0x14c86aa88),L"lErr",4);
    lVar1 = lVar4 * 2;
    *(wchar_t *)((longlong)(&DAT_14c86aa70 + lVar1) + 0) = L'L';
    *(wchar_t *)((longlong)(&DAT_14c86aa70 + lVar1) + 2) = L'o';
    ((wchar_t *)(lVar1 + 0x14c86aa74))[0] = L'w';
    ((wchar_t *)(lVar1 + 0x14c86aa74))[1] = L'L';
    ((wchar_t *)(lVar1 + 0x14c86aa78))[0] = L'e';
    ((wchar_t *)(lVar1 + 0x14c86aa78))[1] = L'v';
    ((wchar_t *)(lVar1 + 0x14c86aa7c))[0] = L'e';
    ((wchar_t *)(lVar1 + 0x14c86aa7c))[1] = L'l';
    *(undefined4 *)(&DAT_14c86aa90 + lVar4 * 2) = 0x72006f;
  }
  FUN_1468005c8(&local_104c);
  iVar8 = local_104c;
  lVar4 = (longlong)local_104c;
  puVar5 = (undefined8 *)FUN_144737586();
  local_1060 = param_5;
  local_1068 = 0;
  iVar3 = __stdio_common_vswprintf(*puVar5,&DAT_14c86aa70 + lVar4 * 2,0x4000 - lVar4,param_4);
  iVar7 = -1;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  iVar3 = 0x3fff;
  if (iVar8 < 0x3fff) {
    iVar3 = iVar8;
  }
  if (iVar3 < iVar7 + iVar8) {
    iVar3 = iVar7 + iVar8;
  }
  if (iVar3 < 0x3fff) {
    lVar4 = (longlong)iVar3;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(&DAT_14c86aa70 + lVar4 * 2) = 10;
  }
  lVar4 = (longlong)iVar3;
  *(undefined2 *)(&DAT_14c86aa70 + lVar4 * 2) = 0;
  local_104c = iVar3;
  OutputDebugStringW((LPCWSTR)&DAT_14c86aa70);
  if (local_1048[0] != '\0') {
    sVar6 = strlen(local_1048);
    uVar2 = (uint)sVar6;
    iVar8 = iVar3 + uVar2;
    if ((iVar8 < 0x4000) && (iVar3 = iVar8, local_104c = iVar8, 0 < (int)uVar2)) {
      uVar9 = 0;
      do {
        *(short *)(&DAT_14c86aa70 + uVar9 * 2 + lVar4 * 2) = (short)local_1048[uVar9];
        uVar9 = uVar9 + 1;
      } while ((uVar2 & 0x7fffffff) != uVar9);
    }
    if (0x3ffe < iVar3) goto LAB_146800529;
    lVar4 = (longlong)iVar3;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(&DAT_14c86aa70 + lVar4 * 2) = 10;
    local_104c = iVar3;
  }
  if (iVar3 < 0x3ffc) {
    lVar4 = (longlong)iVar3;
    iVar3 = iVar3 + 4;
    *(undefined8 *)(&DAT_14c86aa70 + lVar4 * 2) = 0xa000d000a000d;
    local_104c = iVar3;
  }
LAB_146800529:
  if (DAT_14c873408 != 0) {
    *(undefined8 *)(DAT_14c873408 + 0x10) = param_3;
  }
  *(undefined2 *)(&DAT_14c86aa70 + (longlong)iVar3 * 2) = 0;
  uVar9 = DAT_14c866dc0;
  LOCK();
  DAT_14c866dc0 = DAT_14c866dc0 - 1;
  UNLOCK();
  if ((char)(((uint)uVar9 & 2) >> 1) != '\0' || uVar9 < 4) {
    if ((local_48 ^ (ulonglong)auStack_1088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1088);
}



// FUNCTION 1468005c8 FUN_1468005c8 body=173 status=ok
// SIG undefined FUN_1468005c8(void)

void FUN_1468005c8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = &local_res18;
  puVar2 = (undefined8 *)FUN_144737586();
  local_48 = 0;
  local_40 = &local_res18;
  iVar1 = __stdio_common_vswprintf
                    (*puVar2,&DAT_14c86aa70 + (longlong)iVar3 * 2,0x4000 - (longlong)iVar3,
                     L" [File:%hs] [Line: %i] \n");
  iVar3 = -1;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar1 = *param_1;
  iVar4 = 0x3fff;
  if (iVar1 < 0x3fff) {
    iVar4 = iVar1;
  }
  if (iVar4 < iVar3 + iVar1) {
    iVar4 = iVar3 + iVar1;
  }
  *param_1 = iVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146800676 FUN_146800676 body=7 status=ok
// SIG undefined FUN_146800676(void)

undefined1 FUN_146800676(void)

{
  return DAT_14c8465f0;
}



// FUNCTION 14680067e FUN_14680067e body=50 status=ok
// SIG undefined FUN_14680067e(void)

undefined8 * FUN_14680067e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145937b82();
  FUN_14680e802(uVar1,param_1);
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2);
  return param_1;
}



// FUNCTION 1468006b0 FUN_1468006b0 body=56 status=ok
// SIG undefined FUN_1468006b0(void)

void FUN_1468006b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001468006dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468006e8 FUN_1468006e8 body=1276 status=ok
// SIG undefined FUN_1468006e8(void)

void FUN_1468006e8(longlong param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  size_t sVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *_Str;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined1 local_90;
  undefined7 uStack_8f;
  uint local_88;
  undefined4 uStack_84;
  longlong local_78;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_3 == '@') && (DAT_14c872bf0 == '\0')) ||
     (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 == (longlong *)0x0)) goto LAB_146800725;
  cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((((byte)(param_3 - 5U) < 0xfd) || (cVar5 != '\0')) ||
     (cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,param_4), cVar5 == '\0')) {
    FUN_140056680(&local_90,param_2);
    FUN_140056680(&local_58,L"AUTOMATIONANALYTICS");
    _Str = local_58;
    if (local_50 == 0) {
      _Str = L"";
    }
    if (_Str == (wchar_t *)0x0) {
      sVar6 = 0;
    }
    else {
      sVar6 = wcslen(_Str);
    }
    cVar5 = FUN_144a791f8(&local_90,_Str,sVar6,1);
    if (cVar5 != '\0') {
      uVar8 = local_88 - 1;
      if (local_88 == 0) {
        uVar8 = 0;
      }
      uVar10 = local_50 - 1;
      if (local_50 == 0) {
        uVar10 = 0;
      }
      uVar11 = ~uVar10 + uVar8;
      if ((int)uVar8 <= (int)(~uVar10 + uVar8)) {
        uVar11 = uVar8;
      }
      if ((int)uVar11 < 1) {
        uVar11 = 0;
      }
      uVar10 = uVar8 - uVar11;
      if ((int)uVar8 <= (int)(uVar8 - uVar11)) {
        uVar10 = uVar8;
      }
      if (0 < (int)uVar10) {
        if (local_88 - uVar10 != 0) {
          memmove((void *)CONCAT71(uStack_8f,local_90),
                  (void *)((longlong)CONCAT71(uStack_8f,local_90) + (ulonglong)uVar10 * 2),
                  (longlong)(int)(local_88 - uVar10) * 2);
        }
        local_88 = local_88 - uVar10;
      }
      FUN_146800d48(plVar3,&local_90);
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (wchar_t *)CONCAT71(uStack_8f,local_90);
  }
  else {
    local_a0[0] = *param_4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c866df0) && (FUN_144b3d300(&DAT_14c866df0), DAT_14c866df0 == -1)) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c866dc8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c866dc8,4000);
      atexit((_func_5014 *)&LAB_14277a7a8);
      _Init_thread_footer(&DAT_14c866df0);
    }
    if (DAT_14c759085 == '\0') goto LAB_146800725;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c866dc8);
    if (DAT_14c866df8 != plVar3) {
      FUN_1447a1747(DAT_14c8466a0,DAT_14c8466a8);
      DAT_14c8466a8 = 0;
      if (DAT_14c8466ac != 0) {
        FUN_1408be2c4(&DAT_14c8466a0,0);
      }
      FUN_146802766();
      DAT_14c866df8 = plVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c866dc8);
    cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (cVar5 != '\0') goto LAB_146800725;
    FUN_1468060ce(&local_90);
    FUN_1400021e4(local_a0,&local_58);
    plVar7 = (longlong *)CONCAT71(uStack_8f,local_90);
    uVar9 = (ulonglong)(int)local_88;
    bVar4 = true;
    if (uVar9 != 0) {
      plVar13 = plVar7;
LAB_146800845:
      if ((int)plVar13[1] != local_50) {
        if ((int)plVar13[1] + local_50 == 1) goto LAB_146800a2d;
        goto LAB_1468008bf;
      }
      if (1 < local_50) {
        lVar15 = 0;
        do {
          uVar1 = *(ushort *)(*plVar13 + lVar15);
          uVar2 = *(ushort *)((longlong)local_58 + lVar15);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) break;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar14 = (uint)uVar1 - (uint)uVar2;
              goto LAB_146800a21;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_146800a1e;
          }
          lVar15 = lVar15 + 2;
        } while( true );
      }
      goto LAB_146800a2d;
    }
LAB_146800a2f:
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8(local_58);
      uVar9 = (ulonglong)local_88;
      plVar7 = (longlong *)CONCAT71(uStack_8f,local_90);
    }
    FUN_1447a1747(plVar7,uVar9);
    if (CONCAT71(uStack_8f,local_90) != 0) {
      FUN_1400020a8();
    }
    if (!bVar4) goto LAB_146800725;
    if (param_3 == '\x02') {
LAB_146800a93:
      cVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (cVar5 != '\0') goto LAB_146800725;
      param_3 = '\x02';
    }
    else if (param_3 == '\x03') {
      cVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if (cVar5 != '\0') goto LAB_146800725;
      cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3);
      if (cVar5 != '\0') goto LAB_146800a93;
      param_3 = '\x03';
    }
    else if (param_3 == '\0') goto LAB_146800725;
    FUN_1400021e4(param_4,&local_90);
    if (local_88 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)CONCAT71(uStack_8f,local_90);
    }
    FUN_140002266(&local_58,L"%s: %s",puVar12,param_2);
    if (CONCAT71(uStack_8f,local_90) != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_a0,&DAT_149e06118);
    FUN_146800be6(&local_90,0,&local_58,local_a0);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (param_3 == '\x03') {
      local_90 = 1;
    }
    else if (param_3 == '\x02') {
      local_90 = 2;
    }
    FUN_146800c94(plVar3,&local_90);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_146800725:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146800a1e:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_146800a21:
  if (iVar14 == 0) {
LAB_146800a2d:
    bVar4 = false;
    goto LAB_146800a2f;
  }
LAB_1468008bf:
  bVar4 = true;
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar7 + uVar9 * 2) goto LAB_146800a2f;
  goto LAB_146800845;
}



// FUNCTION 146800be6 FUN_146800be6 body=173 status=ok
// SIG undefined FUN_146800be6(void)

undefined1 *
FUN_146800be6(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 146800c94 FUN_146800c94 body=162 status=ok
// SIG undefined FUN_146800c94(void)

void FUN_146800c94(longlong param_1,char *param_2)

{
  char cVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 4;
  if (*param_2 == '\x01') {
    local_21 = 3;
  }
  else if (*param_2 == '\x02') {
    local_21 = 2;
  }
  cVar1 = FUN_146800f00(param_1,param_2 + 8,&local_21);
  if (cVar1 != '\0') {
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  FUN_14277273e(param_1 + 0x30,param_2,9,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 146800d48 FUN_146800d48 body=162 status=ok
// SIG undefined FUN_146800d48(void)

void FUN_146800d48(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000146800dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  return;
}



// FUNCTION 146800dea FUN_146800dea body=31 status=ok
// SIG undefined FUN_146800dea(void)

void FUN_146800dea(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 146800e0a FUN_146800e0a body=244 status=ok
// SIG undefined FUN_146800e0a(void)

void FUN_146800e0a(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [2];
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_51 = (undefined1)param_3;
  plVar1 = *(longlong **)(param_1 + 0x120);
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar4 = param_3;
    if (lVar2 != 0) {
      FUN_140056680(local_68,param_2);
      cVar3 = FUN_146800f00(lVar2,local_68,&local_51);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      uVar4 = 6;
      if (cVar3 == '\0') {
        uVar4 = param_3 & 0xff;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
    local_78 = param_5;
    (**(code **)(*plVar1 + 8))(plVar1,param_2,uVar4,param_4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146800f00 FUN_146800f00 body=370 status=ok
// SIG undefined FUN_146800f00(void)

ulonglong FUN_146800f00(longlong param_1,undefined8 param_2,byte *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
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
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  plVar1 = (longlong *)(param_1 + 0x98);
  lVar2 = param_1 + 0xa8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0xc0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar2)) {
    do {
      if ((((3 < *(byte *)(*local_88 + 0x34 + (longlong)iStack_6c * 0x40)) || (*param_3 == 7)) ||
          (*param_3 < 4)) &&
         (cVar3 = FUN_14680280a(*local_88 + (longlong)iStack_6c * 0x40,param_2), cVar3 != '\0')) {
        uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_146800fb3;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar4));
  }
  uVar5 = 0;
LAB_146800fb3:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146801074 FUN_146801074 body=544 status=ok
// SIG undefined FUN_146801074(void)

void FUN_146801074(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_4f8 [40];
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 local_4b9;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  longlong *local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined1 *local_450;
  undefined1 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined1 local_430 [1024];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  plVar4 = *(longlong **)(param_1 + 0x120);
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    local_498 = param_2[4];
    local_4b8 = *param_2;
    uStack_4b0 = param_2[1];
    local_4a8 = *(undefined4 *)(param_2 + 2);
    uStack_4a4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_4a0 = *(undefined4 *)(param_2 + 3);
    uStack_49c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_490 = param_2[5];
    uStack_488 = param_2[6];
    local_480 = (longlong *)param_2[7];
    if (local_480 != (longlong *)0x0) {
      LOCK();
      puVar1 = (ulonglong *)(local_480 + 3);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        local_480[3] = local_480[3] + 0x40000000;
        UNLOCK();
      }
    }
    local_478 = *(undefined4 *)(param_2 + 8);
    uStack_474 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_470 = *(undefined4 *)(param_2 + 9);
    uStack_46c = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_468 = param_2[10];
    if (((byte)uStack_49c & 0xfe) == 2) {
      local_450 = local_430;
      local_438 = '\0';
      local_440 = &local_30;
      local_448 = local_450;
      FUN_1467eb1ca(param_2,&local_450);
      if (lVar5 != 0) {
        local_4b9 = 3;
        FUN_14006620a(&local_460,local_450,
                      (ulonglong)((longlong)local_448 - (longlong)local_450) >> 1);
        local_4d0 = local_460;
        uStack_4cc = uStack_45c;
        uStack_4c8 = uStack_458;
        uStack_4c4 = uStack_454;
        cVar6 = FUN_146800f00(lVar5,&local_4d0,&local_4b9);
        if (CONCAT44(uStack_4cc,local_4d0) != 0) {
          FUN_1400020a8();
        }
        if (cVar6 != '\0') {
          uStack_49c = CONCAT31(uStack_49c._1_3_,6);
        }
      }
      if (local_438 == '\x01') {
        FUN_1400020a8(local_450);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_4b8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
    plVar4 = local_480;
    if (local_480 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_480 + 3;
      lVar5 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*local_480 + 0x10))(local_480);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar1 = (ulonglong *)(plVar4 + 3);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146801296 FUN_146801296 body=182 status=ok
// SIG undefined FUN_146801296(void)

undefined8 * FUN_146801296(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_1457511aa(&DAT_14c846978,uVar3,param_2);
  if ((iVar4 != -1) && ((DAT_14c846978 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0))
  {
    lVar1 = DAT_14c846978 + (longlong)iVar4 * 0x28;
    *param_1 = 0;
    iVar4 = *(int *)(lVar1 + 0x18);
    _Src = *(void **)(lVar1 + 0x10);
    *(int *)(param_1 + 1) = iVar4;
    if ((longlong)iVar4 != 0) {
      FUN_1446dd670(param_1,iVar4,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar4 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14680134c FUN_14680134c body=98 status=ok
// SIG undefined FUN_14680134c(void)

undefined4 FUN_14680134c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_142772610();
  DAT_14c86aa68 = 0;
  uVar2 = FUN_144a82cde();
  FUN_145aa67e2(uVar2,param_1 + 0x108);
  DAT_14c872be8 = *(undefined8 *)(param_1 + 0x270);
  LOCK();
  *(undefined8 *)(param_1 + 0x240) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x270) = 0;
  FUN_1447f69b6(param_1 + 0x18);
  return uVar1;
}



// FUNCTION 1468013ae FUN_1468013ae body=238 status=ok
// SIG undefined FUN_1468013ae(void)

void FUN_1468013ae(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      FUN_1400020a8(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14680149c FUN_14680149c body=238 status=ok
// SIG undefined FUN_14680149c(void)

void FUN_14680149c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      FUN_1400020a8(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14680158a FUN_14680158a body=1189 status=ok
// SIG undefined FUN_14680158a(void)

void FUN_14680158a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar5 = FUN_1467c2848();
  if (lVar5 != 0) {
    FUN_14275ab18(lVar5,0);
  }
  uVar6 = FUN_1402cfa70();
  FUN_1456f62ea(uVar6);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x80))(param_1,&local_58,&local_68);
  FUN_140dc5480();
  (**(code **)(*param_1 + 0x10))(param_1,&local_78);
  uVar7 = uStack_60 & 0xffffffff;
  if (0 < (int)uStack_60) {
    lVar8 = 0;
    lVar11 = 0;
    local_188 = lVar5;
    local_180 = param_2;
    do {
      puVar10 = local_78;
      local_88 = (void *)0x0;
      lVar5 = (longlong)local_70;
      iStack_80 = local_70;
      local_178 = lVar11;
      if (lVar5 == 0) {
        uStack_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_70,0);
        memcpy(local_88,puVar10,lVar5 * 2);
      }
      local_98 = (void *)0x0;
      iStack_90 = (int)param_1[3];
      lVar5 = (longlong)iStack_90;
      _Src = (void *)param_1[2];
      if (lVar5 == 0) {
        uStack_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,iStack_90,0);
        memcpy(local_98,_Src,lVar5 * 2);
      }
      if (1 < *(uint *)(local_68 + 8 + lVar8)) {
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(local_58 + 8 + lVar8) != 0) {
          puVar10 = *(undefined2 **)(local_58 + lVar8);
        }
        puVar9 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        FUN_140002266(&local_130,L"%s.%s",puVar9,puVar10);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_88 = (void *)CONCAT44(uStack_12c,local_130);
        iStack_80 = iStack_128;
        uStack_7c = uStack_124;
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(local_68 + 8 + lVar8) != 0) {
          puVar10 = *(undefined2 **)(local_68 + lVar8);
        }
        puVar9 = &DAT_149dfb77a;
        if ((int)param_1[3] != 0) {
          puVar9 = (undefined2 *)param_1[2];
        }
        FUN_140002266(&local_130,L"%s %s",puVar9,puVar10);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_98 = (void *)CONCAT44(uStack_12c,local_130);
        iStack_90 = iStack_128;
        uStack_8c = uStack_124;
      }
      FUN_146801296(local_140,&local_88);
      (**(code **)(*param_1 + 0x70))(param_1,local_150,local_68 + lVar8);
      (**(code **)(*param_1 + 0x68))(param_1,local_160,local_68 + lVar8);
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1,&local_98);
      (**(code **)(*param_1 + 0x48))(param_1,local_170,&local_98);
      lVar5 = local_68 + lVar8;
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      local_1c8 = (**(code **)(*param_1 + 8))(param_1);
      local_190 = local_140;
      local_198 = local_150;
      local_1c0 = uVar4;
      local_1b8 = lVar5;
      local_1b0 = local_170;
      local_1a8 = uVar3;
      local_1a0 = local_160;
      FUN_146802402(&local_130,&local_88,&local_88,&local_98);
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_180;
      if (local_160[0] != 0) {
        FUN_1400020a8();
      }
      if (local_150[0] != 0) {
        FUN_1400020a8();
      }
      if (local_140[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1468092da(plVar2,iVar1);
      }
      FUN_14680936e((longlong)iVar1 * 0x98 + *plVar2,&local_130);
      FUN_1468026d6(&local_130);
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = local_178;
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
      uVar7 = (ulonglong)(int)uStack_60;
      lVar8 = lVar8 + 0x10;
      lVar5 = local_188;
    } while (lVar11 < (longlong)uVar7);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
    uVar7 = uStack_60 & 0xffffffff;
  }
  FUN_1447a1747(local_68,uVar7);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_1402cfa70();
  FUN_1456f62ec(uVar6);
  if ((lVar5 != 0) && (lVar5 = FUN_1467c2848(), lVar5 != 0)) {
    FUN_14275ad76(lVar5,0);
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146801a30 FUN_146801a30 body=94 status=ok
// SIG undefined FUN_146801a30(void)

void FUN_146801a30(longlong *param_1,undefined8 *param_2)

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
    FUN_1468092da(param_1,iVar2);
  }
  FUN_1468092a3((longlong)iVar2 * 0x98 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 146801a8e FUN_146801a8e body=796 status=ok
// SIG undefined FUN_146801a8e(void)

ulonglong FUN_146801a8e(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  uint local_a4;
  longlong local_a0 [2];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong local_78;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  SRWLock = (PSRWLOCK)(param_1 + 0xe8);
  local_58 = 0;
  uStack_50 = 0;
  AcquireSRWLockShared(SRWLock);
  FUN_1468021a6(param_1 + 0x98,&local_90);
  FUN_1468022ee(&local_58,&local_90);
  FUN_146809ce6(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  lVar2 = local_58;
  lVar3 = (longlong)(int)uStack_50;
  uVar11 = (undefined7)((ulonglong)&local_90 >> 8);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    param_1 = param_1 + 0x30;
    uVar10 = CONCAT71(uVar11,1);
    lVar7 = 0;
    local_b0 = param_1;
    do {
      puVar9 = &DAT_149e26db4;
      if (*(char *)(lVar2 + 0x34 + lVar7) != '\a') {
        puVar9 = (undefined *)FUN_1427674c7();
      }
      iVar1 = *(int *)(lVar2 + 0x2c + lVar7);
      if (iVar1 == 0) {
        AcquireSRWLockExclusive(SRWLock);
        if (*(int *)(lVar2 + 0x30 + lVar7) == 0) {
          uVar4 = FUN_146801fda(param_1);
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(lVar2 + 8 + lVar7) != 0) {
            puVar8 = *(undefined2 **)(lVar2 + lVar7);
          }
          pwVar6 = 
          L"Expected suppressed (\'%s\') level log message or higher matching \'%s\' did not occur."
          ;
          goto LAB_146801c2f;
        }
        local_a4 = (uint)uVar10;
        uVar4 = FUN_146801fda(param_1);
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar7) != 0) {
          puVar8 = *(undefined2 **)(lVar2 + lVar7);
        }
        local_c8 = *(undefined4 *)(lVar2 + 0x30 + lVar7);
        FUN_140002266(local_a0,
                      L"Suppressed expected (\'%s\') level log message or higher matching \'%s\' %d times."
                      ,puVar9,puVar8);
        FUN_146800be6(&local_90,0,local_a0,uVar4);
        param_1 = local_b0;
        FUN_14277273e(local_b0,&local_90,0,1);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_84,local_88) != 0) {
          FUN_1400020a8();
        }
        uVar10 = (ulonglong)local_a4;
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
LAB_146801c92:
        ReleaseSRWLockExclusive(SRWLock);
      }
      else if (iVar1 != *(int *)(lVar2 + 0x30 + lVar7)) {
        AcquireSRWLockExclusive(SRWLock);
        uVar4 = FUN_146801fda(param_1);
        iVar1 = *(int *)(lVar2 + 0x28 + lVar7);
        local_c0 = L"Unknown";
        if (iVar1 == 0) {
          local_c0 = L"Exact";
        }
        if (iVar1 == 1) {
          local_c0 = L"Contains";
        }
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar7) != 0) {
          puVar8 = *(undefined2 **)(lVar2 + lVar7);
        }
        local_b8 = *(undefined4 *)(lVar2 + 0x30 + lVar7);
        local_c8 = *(undefined4 *)(lVar2 + 0x2c + lVar7);
        pwVar6 = 
        L"Expected (\'%s\') level log message or higher matching \'%s\' to occur %d times with %s match type, but it was found %d time(s)."
        ;
LAB_146801c2f:
        FUN_140002266(local_a0,pwVar6,puVar9,puVar8);
        FUN_146800be6(&local_90,2,local_a0,uVar4);
        param_1 = local_b0;
        FUN_14277273e(local_b0,&local_90,0,1);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_84,local_88) != 0) {
          FUN_1400020a8();
        }
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        uVar10 = 0;
        goto LAB_146801c92;
      }
      lVar7 = lVar7 + 0x38;
    } while (lVar3 * 0x38 - lVar7 != 0);
    uVar5 = uStack_50 & 0xffffffff;
  }
  FUN_146809ce6(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar10 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146801dac FUN_146801dac body=67 status=ok
// SIG undefined FUN_146801dac(void)

void FUN_146801dac(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140dc5840(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1468097ea(param_1);
    return;
  }
  FUN_1468096a6(param_1);
  FUN_140dc5840(param_1,0);
  return;
}



// FUNCTION 146801df0 FUN_146801df0 body=178 status=ok
// SIG undefined FUN_146801df0(void)

undefined1 * FUN_146801df0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return param_1;
}



// FUNCTION 146801ea2 FUN_146801ea2 body=171 status=ok
// SIG undefined FUN_146801ea2(void)

longlong FUN_146801ea2(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  
  FUN_146801df0();
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = (int)param_3[1];
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0x40) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x38),iVar1,0);
    memcpy(*(void **)(param_1 + 0x38),_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_140212f8e(param_1 + 0x50);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146801f4e FUN_146801f4e body=62 status=ok
// SIG undefined FUN_146801f4e(void)

void FUN_146801f4e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146801f8c FUN_146801f8c body=78 status=ok
// SIG undefined FUN_146801f8c(void)

longlong FUN_146801f8c(longlong param_1,longlong param_2)

{
  FUN_146801df0();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  FUN_140212f8e(param_1 + 0x50);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146801fda FUN_146801fda body=132 status=ok
// SIG undefined FUN_146801fda(void)

undefined8 * FUN_146801fda(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c866e10) {
    FUN_144b3d300(&DAT_14c866e10);
    if (DAT_14c866e10 == -1) {
      DAT_14c866e00 = 0;
      uRam000000014c866e08 = 0;
      atexit((_func_5014 *)&LAB_14277a7b6);
      _Init_thread_footer(&DAT_14c866e10);
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar1 = &DAT_14c866e00;
  }
  else {
    puVar1 = (undefined8 *)
             ((longlong)(*(int *)(param_1 + 0x60) + -1) * 0x10 + *(longlong *)(param_1 + 0x58));
  }
  return puVar1;
}



// FUNCTION 14680205e FUN_14680205e body=105 status=ok
// SIG undefined FUN_14680205e(void)

undefined1 * FUN_14680205e(undefined1 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1468020c8 FUN_1468020c8 body=185 status=ok
// SIG undefined FUN_1468020c8(void)

void FUN_1468020c8(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 3;
  cVar1 = FUN_146800f00();
  if (cVar1 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
    FUN_14680205e(local_68,param_2);
    FUN_14277273e(param_1 + 0x30,local_68,param_3 + 1,1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146802182 FUN_146802182 body=35 status=ok
// SIG undefined FUN_146802182(void)

undefined4 FUN_146802182(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  if ((char)param_2 == '\0') {
    FUN_1468020c8(param_1,param_3,param_4 + 1);
  }
  return param_2;
}



// FUNCTION 1468021a6 FUN_1468021a6 body=326 status=ok
// SIG undefined FUN_1468021a6(void)

longlong * FUN_1468021a6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_146809e28(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_146809d98(param_2,iVar2);
      }
      FUN_146809d0c((longlong)iVar2 * 0x38 + *param_2,lVar3 * 0x40 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468022ee FUN_1468022ee body=80 status=ok
// SIG undefined FUN_1468022ee(void)

longlong * FUN_1468022ee(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146809ce6(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14680233e FUN_14680233e body=112 status=ok
// SIG undefined FUN_14680233e(void)

undefined1 * FUN_14680233e(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_140bee9ec(param_1 + 8,param_2 + 8);
  FUN_146806376(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1468063d4(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140bee9ec(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 1468023ae FUN_1468023ae body=84 status=ok
// SIG undefined FUN_1468023ae(void)

void FUN_1468023ae(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((char)param_1[4] == '\x01') {
    plVar3 = (longlong *)param_1[3];
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
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146802402 FUN_146802402 body=724 status=ok
// SIG undefined FUN_146802402(void)

undefined8 *
FUN_146802402(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_12 + 1);
  pvVar2 = (void *)*param_12;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_7 + 1);
  pvVar2 = (void *)*param_7;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_8 + 1);
  pvVar2 = (void *)*param_8;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xc) = param_9;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_10 + 1);
  pvVar2 = (void *)*param_10;
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_11 + 1);
  pvVar2 = (void *)*param_11;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x11) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1468026d6 FUN_1468026d6 body=144 status=ok
// SIG undefined FUN_1468026d6(void)

void FUN_1468026d6(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146802766 FUN_146802766 body=164 status=ok
// SIG undefined FUN_146802766(void)

void FUN_146802766(void)

{
  FUN_14052bb08(DAT_14c872ce0,L"/Script/AutomationController.AutomationControllerSettings",
                L"bSuppressLogErrors",&DAT_14c846699,&DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"/Script/AutomationController.AutomationControllerSettings",
                L"bSuppressLogWarnings",&DAT_14c846698,&DAT_14c872ce8);
  FUN_14052bb08(DAT_14c872ce0,L"/Script/AutomationController.AutomationControllerSettings",
                L"bElevateLogWarningsToErrors",&DAT_14c84669a,&DAT_14c872ce8);
  FUN_14105aa76(DAT_14c872ce0,L"/Script/AutomationController.AutomationControllerSettings",
                L"SuppressedLogCategories",&DAT_14c8466a0,&DAT_14c872ce8);
  return;
}



// FUNCTION 14680280a FUN_14680280a body=230 status=ok
// SIG undefined FUN_14680280a(void)

void FUN_14680280a(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_140d5ff90(local_48,param_1 + 2,param_2);
    uVar1 = FUN_140d5fc7a(local_48);
    FUN_141701fe8(local_48);
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_1;
    }
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar2 = FUN_1447ee042(param_2,_Str,sVar3 & 0xffffffff,1);
      if (iVar2 != -1) {
        uVar1 = 1;
        if (*(int *)(param_1 + 5) == 0) {
          iVar2 = *(int *)(param_2 + 8) + -1;
          if (*(int *)(param_2 + 8) == 0) {
            iVar2 = 0;
          }
          iVar4 = *(int *)(param_1 + 1) + -1;
          if (*(int *)(param_1 + 1) == 0) {
            iVar4 = 0;
          }
          uVar1 = (uint)(iVar2 == iVar4);
        }
        goto LAB_146802854;
      }
    }
    uVar1 = 0;
  }
LAB_146802854:
  *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) + (uVar1 & 0xff);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468028f2 FUN_1468028f2 body=93 status=ok
// SIG undefined FUN_1468028f2(void)

undefined8 * FUN_1468028f2(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14077541c(param_1,((uint)((ulonglong)(param_3 + 2) * 0xaaaaaaab >> 0x20) & 0xfffffffe) * 2 + 1
                ,1);
  FUN_14155584c(param_2,param_3,*param_1,param_4);
  return param_1;
}



// FUNCTION 146802950 FUN_146802950 body=93 status=ok
// SIG undefined FUN_146802950(void)

undefined8 * FUN_146802950(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14077541c(param_1,((uint)((ulonglong)(iVar1 + 2) * 0xaaaaaaab >> 0x20) & 0xfffffffe) * 2 + 1,1
               );
  FUN_14155584c(uVar2,iVar1,*param_1,param_3);
  return param_1;
}



// FUNCTION 1468029ae FUN_1468029ae body=81 status=ok
// SIG undefined FUN_1468029ae(void)

void FUN_1468029ae(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_14607a29e();
  FUN_144a5eaa2(param_2,uVar1,1);
  iVar2 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  FUN_1415cf884(puVar3,iVar2,*param_2,param_3);
  return;
}



// FUNCTION 146802a00 FUN_146802a00 body=65 status=ok
// SIG undefined FUN_146802a00(void)

int FUN_146802a00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (ulonglong)param_2;
  param_2 = param_2 + 1;
  do {
    bVar3 = uVar1 == 0;
    uVar1 = uVar1 - 1;
    if (bVar3) {
      param_2 = 0;
      break;
    }
    param_2 = param_2 - 1;
  } while (*(short *)(param_1 + uVar1 * 2) == 0x3d);
  iVar2 = (param_2 >> 2) * 3 + 2;
  if ((param_2 & 3) != 3) {
    iVar2 = (param_2 >> 2) * 3;
  }
  return (uint)((param_2 & 3) == 2) + iVar2;
}



// FUNCTION 146802a42 FUN_146802a42 body=191 status=ok
// SIG undefined FUN_146802a42(void)

void FUN_146802a42(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  if (0 < param_3) {
    do {
      FUN_140002184(local_38,9);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  (**(code **)(*param_1 + 0x30))(param_1,local_58);
  FUN_1407ec8fc(local_48,local_38,local_58);
  FUN_1468161d8(param_2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146802b02 FUN_146802b02 body=115 status=ok
// SIG undefined FUN_146802b02(void)

undefined8 * FUN_146802b02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c866b30) {
    FUN_144b3d300(&DAT_14c866b30);
    if (DAT_14c866b30 == -1) {
      FUN_140056680(&DAT_14c866b20,L" -Multiprocess");
      atexit((_func_5014 *)&LAB_142772b14);
      _Init_thread_footer(&DAT_14c866b30);
    }
  }
  return &DAT_14c866b20;
}



// FUNCTION 146802b76 FUN_146802b76 body=51 status=ok
// SIG undefined FUN_146802b76(void)

undefined * FUN_146802b76(void)

{
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x44,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  return &DAT_14c85eb20;
}



// FUNCTION 146802baa FUN_146802baa body=76 status=ok
// SIG undefined FUN_146802baa(void)

void FUN_146802baa(wchar_t *param_1)

{
  size_t sVar1;
  
  FUN_146802b02();
  if (*param_1 != L' ') {
    FUN_1400020e8(&DAT_14c866b20,&DAT_149e001d8,1);
  }
  sVar1 = wcslen(param_1);
  FUN_1400020e8(&DAT_14c866b20,param_1,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 146802bf6 FUN_146802bf6 body=137 status=ok
// SIG undefined FUN_146802bf6(void)

longlong * FUN_146802bf6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146809e9a(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 146802c80 FUN_146802c80 body=148 status=ok
// SIG undefined FUN_146802c80(void)

ulonglong * FUN_146802c80(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xf;
  if (param_2 == 4) {
    uVar1 = DAT_14c892f54;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
      uVar1 = DAT_14c892f54;
    }
  }
  else if (param_2 == 2) {
    uVar1 = DAT_14c892f48;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
      uVar1 = DAT_14c892f48;
    }
  }
  else {
    uVar1 = 0;
    if ((param_2 == 1) && (uVar1 = DAT_14c892f44, DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
      uVar1 = DAT_14c892f44;
    }
  }
  *param_1 = (ulonglong)uVar1;
  return param_1;
}



// FUNCTION 146802d14 FUN_146802d14 body=51 status=ok
// SIG undefined FUN_146802d14(void)

void FUN_146802d14(undefined8 param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da39a(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000146802d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  return;
}



// FUNCTION 146802d48 FUN_146802d48 body=87 status=ok
// SIG undefined FUN_146802d48(void)

void FUN_146802d48(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_10 = 0;
  }
  FUN_140fa6601(param_1,&local_18,1,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146802da0 FUN_146802da0 body=968 status=ok
// SIG undefined FUN_146802da0(void)

void FUN_146802da0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  void **local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88 [2];
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x7c) <
      *(int *)(*(longlong *)(param_1 + 0x78) + 0x50)) {
    local_78 = (void *)0x0;
    uVar1 = *(uint *)(param_6 + 1);
    _Src = (void *)*param_6;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_70 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_78,uVar1,0);
      memcpy(local_78,_Src,(longlong)(int)uVar1 * 2);
    }
    bVar3 = FUN_140c540b4(&local_78,&DAT_149e06124,1,1);
    bVar4 = FUN_140c540b4(&local_78,&DAT_149e06128,1,1);
    FUN_140b1283a(local_88,&DAT_149e1419a,&local_78);
    if (((int)param_3[1] == 1 & bVar4) == 1) {
      if (*(int *)(*(longlong *)*param_3 + 0x10) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(*(longlong *)*param_3 + 8);
      }
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)L"__ClearArray__" + lVar6);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_146802fd3;
LAB_146802ed3:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_146802ed3;
      }
      if (uVar8 != uVar10) goto LAB_146802f03;
LAB_146802fd3:
      local_b8 = &local_78;
      FUN_142773dbd(&local_98,*(longlong *)(param_1 + 0x78) + 0x48,param_2,param_5);
      if ((longlong)local_90 == 0) {
        local_90 = 0;
      }
      else {
        lVar12 = (longlong)local_90 << 4;
        lVar6 = local_98;
        do {
          local_a8 = 0;
          uStack_a0 = 0;
          FUN_140b7fba4(&local_a8,local_88,lVar6);
          iVar7 = (int)uStack_a0 + -1;
          if ((int)uStack_a0 == 0) {
            iVar7 = 0;
          }
          FUN_1400020e8(param_4,local_a8,iVar7);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 0x10;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
      }
      FUN_1447a1747(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      bVar2 = false;
    }
    else {
LAB_146802f03:
      bVar2 = true;
      if ((bVar3 | 1 < (int)param_3[1]) == 1) {
        local_b8 = &local_78;
        FUN_142773dbd(&local_98,*(longlong *)(param_1 + 0x78) + 0x48,param_2,param_5);
        if ((longlong)local_90 == 0) {
          local_90 = 0;
        }
        else {
          lVar12 = (longlong)local_90 << 4;
          lVar6 = local_98;
          do {
            local_a8 = 0;
            uStack_a0 = 0;
            FUN_140b7fba4(&local_a8,local_88,lVar6);
            iVar7 = (int)uStack_a0 + -1;
            if ((int)uStack_a0 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(param_4,local_a8,iVar7);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            lVar6 = lVar6 + 0x10;
            lVar12 = lVar12 + -0x10;
          } while (lVar12 != 0);
        }
        FUN_1447a1747(local_98,local_90);
        bVar2 = true;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar2) goto LAB_14680310f;
  }
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar12 = *param_3;
    lVar13 = 0;
    do {
      local_78 = (void *)0x0;
      uStack_70 = 0;
      FUN_140b7fba4(&local_78,param_6,*(longlong *)(lVar12 + lVar13) + 8);
      iVar7 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar7 = 0;
      }
      FUN_1400020e8(param_4,local_78,iVar7);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar13);
  }
LAB_14680310f:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14680316a FUN_14680316a body=721 status=ok
// SIG undefined FUN_14680316a(void)

void FUN_14680316a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
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
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_144732142(&local_98,uVar6);
    iVar3 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_144869b4a();
    }
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
      lVar7 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar7 * 0x40);
        uVar6 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar5 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar3 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar5) +
                                       (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar5 >> 4)) * 4);
            iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar3 * 0x10) == lVar2) goto LAB_1468032f3;
        }
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar1 + lVar7 * 0x40);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x40 + *local_e0,0);
LAB_1468032f3:
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



// FUNCTION 14680343e FUN_14680343e body=117 status=ok
// SIG undefined FUN_14680343e(void)

void FUN_14680343e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_848 [32];
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_848;
  FUN_141301ee6(local_828,L"%lld",param_4);
  FUN_1410abc54(param_1,param_2,param_3,local_828);
  if ((local_28 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468034b4 FUN_1468034b4 body=784 status=ok
// SIG undefined FUN_1468034b4(void)

void FUN_1468034b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong local_80;
  undefined8 local_68;
  undefined1 *local_60;
  undefined2 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_3;
  local_b8 = param_2;
  FUN_140056680(&local_98);
  uVar5 = FUN_140d68e64(param_1,&local_98);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_68,local_c0,1);
  iVar3 = FUN_1406e05e8(uVar5,local_68);
  uVar2 = local_c0;
  if (0 < iVar3) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  }
  if (0 < (int)param_4[1]) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_4;
      FUN_1446f470e(&local_a0,uVar2,1);
      local_c8 = 7;
      FUN_140de70ba(&local_98,uVar5,local_a0,lVar1 + lVar8);
      FUN_1446f470e(local_a8,uVar2,1);
      local_60 = local_a8;
      local_58 = &local_98;
      FUN_1457f3958(uVar5,local_4c,&local_60,0);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FUN_1400020a8();
      }
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < (int)param_4[1]);
  }
  lVar7 = *(longlong *)(param_1 + 0xd0);
  if (lVar7 != 0) {
    FUN_140056680(&local_98,local_b8);
    puVar6 = local_98;
    if (local_90 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    iVar3 = local_90 + -1;
    if (local_90 == 0) {
      iVar3 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar3,puVar6);
    uVar5 = FUN_140d68dce(lVar7,uVar4,&local_98);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(&local_b0,local_c0,1);
    iVar3 = FUN_1406e05e8(uVar5,local_b0);
    if (0 < iVar3) {
      FUN_1468037c6(&local_98,L"__Clear__");
      FUN_1446f470e(local_a8,local_c0,1);
      local_60 = local_a8;
      local_58 = &local_98;
      FUN_1457f3958(uVar5,local_4c,&local_60,0);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FUN_1400020a8();
      }
    }
    if (0 < (int)param_4[1]) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        local_c8 = 1;
        FUN_140de70ba(&local_98,0,0,*param_4 + lVar8);
        FUN_1446f470e(local_a8,local_c0,1);
        local_60 = local_a8;
        local_58 = &local_98;
        FUN_1457f3958(uVar5,local_4c,&local_60,0);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_8c,local_90) != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 < (int)param_4[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468037c6 FUN_1468037c6 body=73 status=ok
// SIG undefined FUN_1468037c6(void)

undefined1 * FUN_1468037c6(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 4;
  FUN_140056680(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  uVar1 = FUN_144a1ccda(puVar2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_1406e0f98(param_1);
  return param_1;
}



// FUNCTION 146803810 FUN_146803810 body=370 status=ok
// SIG undefined FUN_146803810(void)

undefined8 FUN_146803810(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined2 *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_68);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  puVar6 = local_68;
  if (local_60 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  uVar8 = 0;
  uVar5 = (ulonglong)(local_60 - 1);
  if (local_60 == 0) {
    uVar5 = uVar8;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_14052bbf0(param_1,uVar1,&local_68);
  if (iVar2 != -1) {
    uVar8 = (longlong)iVar2 * 0xc0 + *param_1;
  }
  lVar7 = uVar8 + 0x10;
  if (uVar8 == 0) {
    lVar7 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar7 != 0) {
    local_78 = 7;
    FUN_140de70ba(&local_68,lVar7,param_3,param_4);
    lVar3 = FUN_144a1cd4a(lVar7,param_3,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_5c,local_60) != 0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      local_78 = 7;
      FUN_140de70ba(&local_68,lVar7,param_3,param_4);
      FUN_146803984(lVar7,param_3,&local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      uVar4 = 1;
      goto LAB_146803910;
    }
  }
  uVar4 = 0;
LAB_146803910:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146803984 FUN_146803984 body=197 status=ok
// SIG undefined FUN_146803984(void)

int FUN_146803984(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar6;
  uint uVar7;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)param_2 << 0x10 | uVar7) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar2 = *param_1;
      iVar4 = *(int *)(lVar2 + 0x38 + (longlong)iVar5 * 0x40);
      if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x40) == param_2) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar2 + 0x30 + (longlong)iVar5 * 0x40) == *(int *)(param_3 + 0x28)) {
            FUN_1406e0696(param_1);
            iVar6 = iVar6 + 1;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return iVar6;
            }
            lVar2 = *param_1;
            iVar4 = *(int *)(lVar2 + 0x38 + (longlong)iVar5 * 0x40);
          } while (*(longlong *)(lVar2 + (longlong)iVar5 * 0x40) != param_2);
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 146803a4a FUN_146803a4a body=316 status=ok
// SIG undefined FUN_146803a4a(void)

void FUN_146803a4a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_48,L"CombinedStaticLayers");
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  plVar3 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1 + 0x1d8,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L"FinalCombinedLayers");
  pcVar1 = (code *)*param_2;
  plVar3 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1 + 0x2b0,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L"InMemoryFile");
  pcVar1 = (code *)*param_2;
  plVar3 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_1 + 0x450,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146803b88 FUN_146803b88 body=572 status=ok
// SIG undefined FUN_146803b88(void)

void FUN_146803b88(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)(param_1 + 0xa0);
  lVar1 = param_1 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = param_1;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 200) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 200);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar7;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar1)) {
    do {
      lVar2 = *local_90;
      lVar4 = (longlong)iStack_74;
      pcVar3 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,lVar2 + lVar4 * 0xe0 + 0x10,lVar2 + lVar4 * 0xe0);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar7 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar8));
  }
  lVar1 = local_98;
  plVar7 = *(longlong **)(local_98 + 0xf8);
  if (plVar7 != (longlong *)0x0) {
    do {
      lVar2 = *plVar7;
      pcVar3 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,lVar2,lVar2 + 0xb8);
      plVar7 = (longlong *)plVar7[1];
    } while (plVar7 != (longlong *)0x0);
  }
  FUN_140056680(&local_90,L"SavedLayer");
  pcVar3 = (code *)*param_2;
  plVar7 = param_2 + 4;
  plVar6 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5,lVar1 + 0x110,&local_90);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_90,L"CommandLineOverrides");
  pcVar3 = (code *)*param_2;
  plVar6 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5,lVar1 + 0x388,&local_90);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146803dc6 FUN_146803dc6 body=279 status=ok
// SIG undefined FUN_146803dc6(void)

undefined8 FUN_146803dc6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  char cVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void **local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_1427735ea(puVar2,0);
  if (cVar1 != '\0') {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    _Src = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar3 * 2);
    }
    local_60 = &local_40;
    local_58 = &local_30;
    FUN_141469cae(&local_50);
    local_68 = param_3;
    FUN_1427744f2(param_1,&local_50,0,0);
    FUN_1447a1747(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146803ede FUN_146803ede body=1658 status=ok
// SIG undefined FUN_146803ede(void)

undefined8
FUN_146803ede(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined2 param_5,char *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  int local_31c;
  longlong *local_318;
  char *local_310;
  longlong *local_308;
  longlong *local_300;
  undefined4 local_2f8;
  uint uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  int local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  undefined1 local_2ac [4];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_208;
  longlong local_1f8 [4];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined2 local_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  puVar1 = param_1 + 0x8a;
  puVar2 = param_1 + 0x56;
  FUN_142775133(local_128,puVar2,puVar1);
  local_2c8 = (longlong *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1cc = 0xffffffff00000080;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_147 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_140 = 0;
  uStack_138 = 0;
  if (*(char *)((longlong)param_1 + 0x42) == '\x02') {
    plVar10 = local_1f8;
    local_2c8 = plVar10;
  }
  else {
    plVar10 = (longlong *)FUN_14001cc68(200,0x10);
    plVar10[4] = 0;
    *(undefined4 *)(plVar10 + 5) = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar10 + 0x34) = 0;
    plVar10[8] = 0;
    *(undefined4 *)(plVar10 + 9) = 0;
    plVar10[0xe] = 0;
    *(undefined4 *)(plVar10 + 0xf) = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x7c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar10 + 0x84) = 0;
    plVar10[0x12] = 0;
    *(undefined4 *)(plVar10 + 0x13) = 0;
    *(undefined2 *)((longlong)plVar10 + 0xb1) = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    *(undefined2 *)((longlong)plVar10 + 0xb4) = param_5;
    local_2c8 = plVar10;
    FUN_144a787a6(plVar10 + 0x17,param_2);
    plVar15 = (longlong *)param_1[0x1f];
    if (plVar15 != (longlong *)0x0) {
      do {
        if (*(ushort *)((longlong)plVar10 + 0xb4) < *(ushort *)(*plVar15 + 0xb4)) {
          local_328 = param_1 + 0x1e;
          puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar11 = plVar10;
          puVar11[1] = 0;
          puVar11[2] = 0;
          FUN_14680acd0(local_328,puVar11,plVar15);
          uVar13 = 0;
          goto LAB_146803ff1;
        }
        plVar15 = (longlong *)plVar15[1];
      } while (plVar15 != (longlong *)0x0);
    }
    FUN_14626ac8a(param_1 + 0x1e,&local_2c8);
  }
  uVar13 = 1;
LAB_146803ff1:
  plVar10[0x15] = param_4;
  local_2d8 = *param_3;
  local_2d0 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_2d0 = 0;
  }
  FUN_141603380(plVar10,&local_2d8,1);
  if (param_6 != (char *)0x0) {
    uVar9 = local_2e8;
    if (*param_6 == '\x01') {
      plVar15 = plVar10 + 2;
      local_2a8 = 0x100000000;
      local_298 = 0xffffffff;
      uStack_290 = 0;
      uStack_2a0 = plVar15;
      if ((int)plVar10[5] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_2a8);
        iVar8 = (int)plVar10[5];
      }
      uStack_2e0 = CONCAT44(uStack_28c,uStack_290);
      local_2e8 = local_298;
      uVar9 = local_2e8;
      local_2f8 = (undefined4)local_2a8;
      uStack_2f4 = local_2a8._4_4_;
      uStack_2f0 = (undefined4)uStack_2a0;
      uStack_2ec = uStack_2a0._4_4_;
      local_2e8._4_4_ = (int)((ulonglong)local_298 >> 0x20);
      local_300 = plVar10;
      if ((local_2e8._4_4_ != iVar8) || (uStack_2a0 != plVar15)) {
        local_310 = param_6 + 8;
        local_318 = (longlong *)(param_6 + 0x68);
        local_328 = (undefined8 *)CONCAT44(local_328._4_4_,(int)uVar13);
        iVar6 = local_2e8._4_4_;
        local_31c = iVar8;
        local_308 = plVar15;
        local_2e8 = uVar9;
        do {
          lVar4 = *local_300;
          lVar14 = (longlong)iVar6 * 0xb8;
          lVar17 = lVar4 + lVar14;
          uVar9 = *param_1;
          uVar5 = (uint)((ulonglong)uVar9 >> 0x10);
          uVar16 = (uint)uVar9 & 0xffff;
          uVar9 = FUN_145aeb14a(local_310,
                                ((uint)uVar9 << 0x10 | uVar16) + (int)((ulonglong)uVar9 >> 0x20) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),param_1);
          FUN_14482b35e(uVar9,&local_2a8,lVar17,0);
          iVar8 = *(int *)(lVar4 + 8 + lVar14);
          puVar12 = &DAT_149dfb77a;
          if (iVar8 != 0) {
            puVar12 = *(undefined2 **)(lVar4 + lVar14);
          }
          iVar6 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar6 = 0;
          }
          uVar7 = FUN_144a49b4a(iVar6,puVar12);
          plVar15 = local_318;
          iVar8 = FUN_14680adbc(local_318,uVar7,lVar17);
          if (iVar8 != -1) {
            lVar4 = *plVar15;
            if (((longlong)iVar8 * 0x70 + lVar4 + 0x10U & 0xffffffffffffffef) != 0) {
              local_288 = 0;
              local_280 = 0;
              local_2a8 = 0;
              uStack_2a0 = (longlong *)0x0;
              local_27c = 0xffffffff00000080;
              local_274 = 0;
              local_268 = 0;
              local_260 = 0;
              local_238 = 0;
              local_230 = 0;
              local_258 = 0;
              uStack_250 = 0;
              local_22c = 0xffffffff00000080;
              local_224 = 0;
              local_218 = 0;
              local_210 = 0;
              local_208 = 1;
              FUN_140b7c96c(&local_2a8,lVar17 + 0x10);
              local_2c0 = param_1;
              local_2b8 = &local_2a8;
              FUN_14680b788(lVar4 + (longlong)iVar8 * 0x70 + 0x18,local_2ac,&local_2c0);
              FUN_140b7cb8c(&local_2a8);
            }
          }
          local_2e8 = CONCAT44(local_2e8._4_4_,(uint)local_2e8 & ~uStack_2f4);
          FUN_1449c0562(&local_2f8);
          uVar13 = (ulonglong)local_328 & 0xffffffff;
          iVar6 = local_2e8._4_4_;
          uVar9 = local_2e8;
        } while (local_300 != plVar10 ||
                 ((longlong *)CONCAT44(uStack_2ec,uStack_2f0) != local_308 ||
                 local_2e8._4_4_ != local_31c));
      }
    }
    local_2e8 = uVar9;
    if (param_6[1] == '\x01') {
      iVar8 = *(int *)(param_6 + 0x60);
      *(uint *)(param_6 + 0x60) = iVar8 + 1U;
      if (*(uint *)(param_6 + 100) < iVar8 + 1U) {
        FUN_1447a1bd6(param_6 + 0x58,iVar8);
      }
      lVar4 = *(longlong *)(param_6 + 0x58);
      lVar14 = (longlong)iVar8 * 0x10;
      puVar11 = (undefined8 *)(lVar4 + lVar14);
      *(undefined8 *)(lVar4 + lVar14) = 0;
      iVar8 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar4 + 8 + lVar14) = iVar8;
      if ((longlong)iVar8 == 0) {
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar11,iVar8,0);
        memcpy((void *)*puVar11,_Src,(longlong)iVar8 * 2);
      }
    }
  }
  plVar10 = local_2c8;
  if ((char)uVar13 == '\0') {
    FUN_140d7b3ae(puVar2,param_1 + 0x3b);
    for (puVar11 = (undefined8 *)param_1[0x1f]; puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)puVar11[1]) {
      FUN_1406dfe24(puVar2,*puVar11);
    }
    bVar3 = *(byte *)(param_1 + 0x94);
    FUN_140d7b3ae(puVar1,puVar2);
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xef | bVar3 & 0x10;
  }
  else {
    FUN_1406dfe24(puVar2,local_2c8);
    FUN_1406dfe24(puVar1,plVar10);
  }
  FUN_1406dfe24(puVar1,local_128);
  FUN_14277389c(puVar2);
  FUN_14277389c(puVar1);
  FUN_14626ac20(local_1f8);
  FUN_14626ac20(local_128);
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14680455a FUN_14680455a body=231 status=ok
// SIG undefined FUN_14680455a(void)

void FUN_14680455a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  void **local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  local_60 = &local_40;
  local_58 = &local_30;
  FUN_141469cae(&local_50);
  FUN_1427769f6(param_1,&local_50,param_3);
  FUN_1447a1747(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146804642 FUN_146804642 body=211 status=ok
// SIG undefined FUN_146804642(void)

void FUN_146804642(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[3] == 1) {
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar1 = param_1[1];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        FUN_1400020a8();
        param_1[1] = lVar1;
      }
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar2 = 0;
  }
  else {
    if (param_1[1] == param_2) {
      lVar1 = *(longlong *)(param_1[1] + 8);
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar1 = *(longlong *)(param_1[2] + 0x10);
      param_1[2] = lVar1;
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x10);
      *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    }
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      FUN_1400020a8(param_2);
    }
    iVar2 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468046ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar2);
  return;
}



// FUNCTION 146804716 FUN_146804716 body=162 status=ok
// SIG undefined FUN_146804716(void)

void FUN_146804716(undefined8 param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_38 = &PTR_LAB_149e2b440;
  local_30 = &LAB_14277b9d4;
  local_58 = &LAB_14680bba0;
  FUN_146803a4a();
  local_88 = 0;
  local_78 = &PTR_LAB_149e2b460;
  local_70 = &LAB_14277b9da;
  local_98 = &LAB_14680bbf4;
  FUN_146803b88(param_1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468047ba FUN_1468047ba body=128 status=ok
// SIG undefined FUN_1468047ba(void)

undefined8 *
FUN_1468047ba(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = &PTR_FUN_149e27978;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = param_4;
  *(undefined1 *)((longlong)param_1 + 0xb) = param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = param_3;
  FUN_14626acf6(param_1 + 3);
  param_1[0x77d] = 0;
  *(undefined4 *)(param_1 + 0x77e) = 0;
  param_1[0x779] = 0;
  param_1[0x77a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bfc) = 0;
  param_1[0x781] = 0;
  *(undefined4 *)(param_1 + 0x782) = 0;
  param_1[0x783] = 0;
  param_1[0x784] = 0;
  param_1[0x785] = 0;
  param_1[0x786] = 0;
  return param_1;
}



// FUNCTION 14680483a FUN_14680483a body=171 status=ok
// SIG undefined FUN_14680483a(void)

void FUN_14680483a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  lVar2 = 0;
  FUN_1446f470e(&local_38,puVar1,0);
  do {
    if (*(longlong *)(param_1 + 0x18 + lVar2) == local_38) {
      lVar2 = lVar2 + param_1 + 0x468;
      if (lVar2 != 0) {
        FUN_140d7b3ae(lVar2,param_3);
        goto LAB_1468048aa;
      }
      break;
    }
    lVar2 = lVar2 + 0x5f8;
  } while (lVar2 != 0x3bb0);
  FUN_140d7ae18(param_1,param_2,param_3);
LAB_1468048aa:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468048e6 FUN_1468048e6 body=128 status=ok
// SIG undefined FUN_1468048e6(void)

undefined8
FUN_1468048e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14052bcbc(param_1,param_4);
  if (lVar2 != 0) {
    FUN_1446f470e(&local_30,param_3,1);
    cVar1 = FUN_14622b9f0(lVar2,param_2,local_30);
    if (cVar1 != '\0') {
      *(byte *)(lVar2 + 0x50) = *(byte *)(lVar2 + 0x50) | 1;
      uVar3 = 1;
      goto LAB_146804913;
    }
  }
  uVar3 = 0;
LAB_146804913:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146804968 FUN_146804968 body=215 status=ok
// SIG undefined FUN_146804968(void)

undefined8 FUN_146804968(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_30,param_3,0);
  param_1 = param_1 + 0x468;
  lVar2 = 0x3bb0;
  do {
    if (*(longlong *)(param_1 + -0x450) == local_30) {
      if (param_1 != 0) {
        FUN_140056680(param_2,param_3);
        goto LAB_146804a1c;
      }
      break;
    }
    param_1 = param_1 + 0x5f8;
    lVar2 = lVar2 + -0x5f8;
  } while (lVar2 != 0);
  uVar1 = FUN_140b7d41a();
  FUN_140056680(&local_40,uVar1);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140633042(param_2,param_3,0,puVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_146804a1c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146804a40 FUN_146804a40 body=784 status=ok
// SIG undefined FUN_146804a40(void)

void FUN_146804a40(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  FUN_140047918(param_1,L"FileName: %s",puVar6);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  FUN_14170778c(param_3,&local_78);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  FUN_140e836da(local_78,uStack_70 & 0xffffffff);
  if ((longlong)(int)uStack_70 == 0) {
    uVar5 = 0;
  }
  else {
    local_e0 = local_78 + (longlong)(int)uStack_70 * 2;
    puVar10 = local_78;
    local_d8 = param_3;
    do {
      plVar2 = local_d8;
      iVar4 = *(int *)(puVar10 + 1);
      puVar6 = &DAT_149dfb77a;
      if (iVar4 != 0) {
        puVar6 = (undefined2 *)*puVar10;
      }
      iVar1 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar1,puVar6);
      iVar4 = FUN_14052bbf0(plVar2,uVar3,puVar10);
      lVar7 = 0;
      if (iVar4 != -1) {
        lVar7 = (longlong)iVar4 * 0xc0 + *plVar2;
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(puVar10 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar10;
      }
      local_d0 = puVar10;
      FUN_140047918(param_1,L"   [%s]",puVar6);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      local_c0 = lVar7 + 0x10;
      FUN_14680316a(lVar7 + 0x10,&local_88);
      FUN_14063460b(local_88,uStack_80 & 0xffffffff);
      if ((longlong)(int)uStack_80 != 0) {
        local_c8 = local_88 + (int)uStack_80;
        puVar10 = local_88;
        do {
          local_90 = *puVar10;
          local_a8 = 0;
          uStack_a0 = 0;
          FUN_1405418ca(local_c0,local_90,&local_a8,1);
          if ((longlong)(int)uStack_a0 == 0) {
            uVar5 = 0;
          }
          else {
            lVar7 = (longlong)(int)uStack_a0 * 0x30;
            lVar8 = local_a8;
            do {
              uVar5 = (ulonglong)(*(int *)(lVar8 + 0x20) - 2U < 0x7fffffff) * 0x10;
              puVar6 = &DAT_149dfb77a;
              if (*(int *)(uVar5 + 0x10 + lVar8) != 0) {
                puVar6 = *(undefined2 **)(lVar8 + (uVar5 | 8));
              }
              FUN_1400021e4(&local_90,&local_b8);
              puVar9 = &DAT_149dfb77a;
              if (local_b0 != 0) {
                puVar9 = local_b8;
              }
              FUN_140047918(param_1,L"   %s=%s",puVar9,puVar6);
              if (local_b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              lVar8 = lVar8 + 0x30;
              lVar7 = lVar7 + -0x30;
            } while (lVar7 != 0);
            uVar5 = uStack_a0 & 0xffffffff;
          }
          FUN_14170774d(local_a8,uVar5);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != local_c8);
      }
      FUN_1468161aa(param_1,&DAT_149e02010);
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = local_d0 + 2;
    } while (puVar10 != local_e0);
    uVar5 = uStack_70 & 0xffffffff;
  }
  FUN_1447a1747(local_78,uVar5);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146804d52 FUN_146804d52 body=348 status=ok
// SIG undefined FUN_146804d52(void)

void FUN_146804d52(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = 0x18;
  do {
    FUN_1400021e4(param_1 + lVar8,&local_58);
    FUN_146804a40(param_2,&local_58,param_1 + lVar8 + 0x450);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = lVar8 + 0x5f8;
  } while (lVar8 != 0x3bc8);
  plVar7 = (longlong *)(param_1 + 0x3bc8);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_146804eb0(plVar7,&local_58);
  FUN_14680be7c(local_58,uStack_50 & 0xffffffff);
  if ((longlong)(int)uStack_50 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = (longlong)(int)uStack_50 << 4;
    puVar6 = local_58;
    do {
      puVar4 = &DAT_149dfb77a;
      iVar2 = 0;
      if (*(int *)(puVar6 + 1) != 0) {
        puVar4 = (undefined2 *)*puVar6;
        iVar2 = *(int *)(puVar6 + 1) + -1;
      }
      uVar1 = FUN_144a49b4a(iVar2,puVar4);
      iVar2 = FUN_1407db052(plVar7,uVar1,puVar6);
      if (iVar2 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar2 * 0x20 + *plVar7;
      }
      FUN_146804a40(param_2,puVar6,*(longlong *)(lVar3 + 0x10) + 0x450);
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    uVar5 = uStack_50 & 0xffffffff;
  }
  FUN_1447a1747(local_58,uVar5);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146804eb0 FUN_146804eb0 body=771 status=ok
// SIG undefined FUN_146804eb0(void)

void FUN_146804eb0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
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
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x20;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x20 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x20 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468051b6 FUN_1468051b6 body=121 status=ok
// SIG undefined FUN_1468051b6(void)

undefined4 FUN_1468051b6(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = in_stack_00000028;
  cVar1 = FUN_1449da20c();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1467ee1ce(in_R9,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146805230 FUN_146805230 body=107 status=ok
// SIG undefined FUN_146805230(void)

undefined8 FUN_146805230(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_140c2d9be(puVar3,&DAT_149e25dd6,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    uVar2 = FUN_140c2d9be(puVar3,&DAT_149e25ddc,param_1 + 1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14680529c FUN_14680529c body=63 status=ok
// SIG undefined FUN_14680529c(void)

void FUN_14680529c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14052bcbc(param_1,param_5);
  if (lVar1 == 0) {
    return;
  }
  FUN_1468034b4(lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1468052db FUN_1468052db body=375 status=ok
// SIG undefined FUN_1468052db(void)

longlong * FUN_1468052db(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x41);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x41) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x41) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146805453(param_1,param_2 + 0x450);
  if ((*(byte *)((longlong)param_1 + 0x29) & 1) == 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2);
    FUN_14021219d(param_1,param_2 + 8);
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x18);
    FUN_14021219d(param_1,param_2 + 0x20);
    FUN_14021219d(param_1,param_2 + 0x30);
    FUN_146805b1f(param_1,param_2 + 0x48);
    FUN_14680ca86(param_1,param_2 + 0xa0);
    FUN_14680c5a2(param_1,param_2 + 0x110);
    FUN_146805453(param_1,param_2 + 0x1d8);
    FUN_146805453(param_1,param_2 + 0x2b0);
    FUN_14680c5a2(param_1,param_2 + 0x388);
    FUN_14680c5a2(param_1,param_2 + 0x528);
    for (puVar2 = *(undefined8 **)(param_2 + 0xf8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      FUN_14680c5a2(param_1,*puVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146805453 FUN_146805453 body=408 status=ok
// SIG undefined FUN_146805453(void)

longlong * FUN_146805453(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_2 + 0x50);
  FUN_14680cffc();
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_3c = bVar2 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    uVar4 = local_3c;
    if (1 < local_3c) {
      FUN_14572541c(param_1);
      uVar4 = local_3c;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_3c = bVar2 >> 1 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    uVar6 = local_3c;
    if (1 < local_3c) {
      FUN_14572541c(param_1);
      uVar6 = local_3c;
    }
  }
  else {
    uVar6 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_3c = bVar2 >> 2 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    uVar5 = local_3c;
    if (1 < local_3c) {
      FUN_14572541c(param_1);
      uVar5 = local_3c;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x54);
  FUN_14021219d(param_1,param_2 + 0x60);
  FUN_14680d39c(param_1,param_2 + 0x80);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(byte *)(param_2 + 0x50) =
         (uVar5 != 0) << 2 | (uVar6 != 0) * '\x02' | uVar4 != 0 | *(byte *)(param_2 + 0x50) & 0xf8;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468055ec FUN_1468055ec body=228 status=ok
// SIG undefined FUN_1468055ec(void)

void FUN_1468055ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1468056d0();
  FUN_14021219d(param_2,&DAT_14c872bc8);
  FUN_14021219d(param_2,&DAT_14c872a78);
  FUN_14021219d(param_2,&DAT_14c872a88);
  FUN_14021219d(param_2,&DAT_14c872a98);
  FUN_14021219d(param_2,&DAT_14c872aa8);
  FUN_14021219d(param_2,&DAT_14c872ab8);
  FUN_14021219d(param_2,&DAT_14c872bb0);
  FUN_14021219d(param_2,&DAT_14c872ac8);
  FUN_14021219d(param_2,&DAT_14c872ad8);
  FUN_14021219d(param_2,&DAT_14c872ae8);
  FUN_14021219d(param_2,&DAT_14c872af8);
  FUN_14021219d(param_2,&DAT_14c872b08);
  FUN_14021219d(param_2,&DAT_14c872b18);
  FUN_14021219d(param_2,&DAT_14c872ce8);
  return;
}



// FUNCTION 1468056d0 FUN_1468056d0 body=1102 status=ok
// SIG undefined FUN_1468056d0(void)

void FUN_1468056d0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 **ppuVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined8 *_Src;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_90;
  undefined1 local_8c [4];
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_98 = CONCAT44(local_98._4_4_,*(int *)(param_1 + 0x3bd0) - *(int *)(param_1 + 0x3bfc));
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_98,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_98);
      }
    }
    else {
      local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    ppuVar2 = (undefined8 **)(param_1 + 0x3bc8);
    uVar3 = param_1 + 0x3bd8;
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_80 = uVar3;
    if (*(int *)(param_1 + 0x3bf0) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar10 = *(int *)(param_1 + 0x3bf0);
    }
    uStack_a0 = CONCAT44(uStack_6c,uStack_70);
    local_a8 = local_78;
    uVar9 = local_a8;
    local_b8 = local_88;
    uStack_b0 = (int)uStack_80;
    uStack_ac = uStack_80._4_4_;
    local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    iVar8 = local_a8._4_4_;
    local_c0 = ppuVar2;
    if ((local_a8._4_4_ != iVar10) || (local_a8 = uVar9, uStack_80 != uVar3)) {
      do {
        local_a8 = uVar9;
        puVar5 = *local_c0;
        FUN_14021219d(param_2,puVar5 + (longlong)iVar8 * 4);
        FUN_1468052db(param_2,puVar5[(longlong)iVar8 * 4 + 2]);
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
        FUN_1449c0562(&local_b8);
        iVar8 = local_a8._4_4_;
        uVar9 = local_a8;
      } while (local_c0 != ppuVar2 ||
               (CONCAT44(uStack_ac,uStack_b0) != uVar3 || local_a8._4_4_ != iVar10));
    }
  }
  else {
    puVar4 = (ulonglong *)param_2[1];
    piVar6 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar6) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_90);
      }
    }
    else {
      local_90 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar6;
    }
    if (0 < local_90) {
      local_c8 = param_1 + 0x3bc8;
      iVar10 = 0;
      do {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        uVar9 = FUN_14001cc68(0x5f8,0x10);
        FUN_1408e73e2(uVar9);
        local_98 = uVar9;
        FUN_14021219d(param_2,&local_88);
        FUN_1468052db(param_2,local_98);
        local_b8 = &local_98;
        local_c0 = &local_88;
        FUN_14680c8ec(local_c8,local_8c,&local_c0);
        iVar8 = *(int *)(param_1 + 0x3c20);
        *(uint *)(param_1 + 0x3c20) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x3c24) < iVar8 + 1U) {
          FUN_1447a1bd6((longlong *)(param_1 + 0x3c18),iVar8);
        }
        _Src = local_88;
        lVar11 = *(longlong *)(param_1 + 0x3c18);
        lVar12 = (longlong)iVar8 * 0x10;
        puVar5 = (undefined8 *)(lVar11 + lVar12);
        *(undefined8 *)(lVar11 + lVar12) = 0;
        lVar13 = (longlong)(int)uStack_80;
        *(int *)(lVar11 + 8 + lVar12) = (int)uStack_80;
        if (lVar13 == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,uStack_80 & 0xffffffff,0);
          memcpy((void *)*puVar5,_Src,lVar13 * 2);
        }
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_90);
    }
  }
  lVar11 = 0x18;
  do {
    FUN_1468052db(param_2,param_1 + lVar11);
    lVar11 = lVar11 + 0x5f8;
  } while (lVar11 != 0x3bc8);
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    local_c0 = (undefined8 **)CONCAT44(local_c0._4_4_,(uint)*(byte *)(param_1 + 8));
    (**(code **)(*param_2 + 0x170))(param_2,&local_c0,4);
    if (1 < (uint)local_c0) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 8) = (uint)local_c0 != 0;
  }
  else {
    *(bool *)(param_1 + 8) = *piVar6 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    local_c0 = (undefined8 **)CONCAT44(local_c0._4_4_,(uint)*(byte *)(param_1 + 9));
    (**(code **)(*param_2 + 0x170))(param_2,&local_c0,4);
    if (1 < (uint)local_c0) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 9) = (uint)local_c0 != 0;
  }
  else {
    *(bool *)(param_1 + 9) = *piVar6 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar7 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xb),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0xc);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146805b1f FUN_146805b1f body=102 status=ok
// SIG undefined FUN_146805b1f(void)

longlong * FUN_146805b1f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_146806cbc();
  puVar2 = (undefined4 *)(param_2 + 0x50);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146805b86 FUN_146805b86 body=114 status=ok
// SIG undefined FUN_146805b86(void)

longlong FUN_146805b86(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = 0;
  FUN_140d6a722(0,DAT_14c872ce0,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x182) = 1;
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146805bfa FUN_146805bfa body=319 status=ok
// SIG undefined FUN_146805bfa(void)

void FUN_146805bfa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = 0x18;
  do {
    FUN_142776dec(param_1 + lVar3,param_2,param_3);
    lVar3 = lVar3 + 0x5f8;
  } while (lVar3 != 0x3bc8);
  plVar1 = (longlong *)(param_1 + 0x3bc8);
  lVar3 = param_1 + 0x3bd8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar3;
  if (*(int *)(param_1 + 0x3bf0) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar2 = *(int *)(param_1 + 0x3bf0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar2) || (uStack_50 != lVar3)) {
    do {
      FUN_142776dec(*(undefined8 *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20),param_2,param_3);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar3 || iStack_64 != iVar2));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146805d5c FUN_146805d5c body=23 status=ok
// SIG undefined FUN_146805d5c(void)

undefined8 FUN_146805d5c(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))();
  return param_2;
}



// FUNCTION 146805d74 FUN_146805d74 body=32 status=ok
// SIG undefined FUN_146805d74(void)

undefined8 FUN_146805d74(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 146805da0 FUN_146805da0 body=32 status=ok
// SIG undefined FUN_146805da0(void)

undefined8 FUN_146805da0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 146805dc0 FUN_146805dc0 body=32 status=ok
// SIG undefined FUN_146805dc0(void)

undefined8 FUN_146805dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 146805de4 FUN_146805de4 body=746 status=ok
// SIG undefined FUN_146805de4(void)

int * FUN_146805de4(int *param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  
  fVar3 = (float)*param_3 / (float)param_3[1];
  uVar6 = (int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1;
  if ((int)uVar6 < 0) {
    iVar9 = -uVar6;
    if (param_4 == '\0') {
      iVar1 = *param_2;
      dVar11 = (double)iVar1;
      dVar16 = dVar11 / (double)(int)(uVar6 * -0xe10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar16;
      if (0.0 <= dVar16) {
        auVar15 = roundpd(auVar15,auVar15,1);
        dVar16 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar15,auVar15,2);
        dVar16 = auVar15._0_8_;
      }
      dVar19 = dVar11 / (double)(int)(uVar6 * -0x3c);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar19;
      if (0.0 <= dVar19) {
        auVar15 = roundpd(auVar18,auVar18,1);
        dVar19 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar18,auVar18,2);
        dVar19 = auVar15._0_8_;
      }
      auVar13._0_8_ = dVar11 / (double)iVar9;
      auVar13._8_8_ = 0;
      if (0.0 <= auVar13._0_8_) {
        auVar15 = roundpd(auVar13,auVar13,1);
        dVar11 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar13,auVar13,2);
        dVar11 = auVar15._0_8_;
      }
      *param_1 = (int)dVar16;
      param_1[1] = (int)dVar19 % 0x3c;
      param_1[2] = (int)dVar11 % 0x3c;
      param_1[3] = iVar1 % iVar9;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    else {
      iVar4 = (int)ROUND(fVar3 * 600.0 + fVar3 * 600.0 + -0.5) >> 1;
      iVar1 = *param_2;
      iVar2 = -iVar1;
      if (-iVar1 < 0) {
        iVar2 = iVar1;
      }
      uVar5 = iVar2 % iVar4;
      bVar10 = uVar6 < 0xffffffe2;
      uVar7 = bVar10 + 2 + (uint)bVar10;
      iVar4 = (iVar2 / iVar4) * 9;
      if (uVar7 <= uVar5) {
        iVar4 = iVar4 + (uVar5 - uVar7) /
                        (uint)((int)ROUND(fVar3 * 60.0 + fVar3 * 60.0 + -0.5) >> 1);
      }
      iVar8 = 1;
      if (iVar1 < 1) {
        iVar8 = -(uint)(iVar1 != 0);
      }
      iVar8 = ((iVar4 << bVar10 + 1) + iVar2) * iVar8;
      dVar11 = (double)iVar8;
      dVar16 = dVar11 / (double)(int)(uVar6 * -0xe10);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar16;
      if (0.0 <= dVar16) {
        auVar15 = roundpd(auVar14,auVar14,1);
        dVar16 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar14,auVar14,2);
        dVar16 = auVar15._0_8_;
      }
      dVar19 = dVar11 / (double)(int)(uVar6 * -0x3c);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar19;
      if (0.0 <= dVar19) {
        auVar15 = roundpd(auVar17,auVar17,1);
        dVar19 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar17,auVar17,2);
        dVar19 = auVar15._0_8_;
      }
      auVar12._0_8_ = dVar11 / (double)iVar9;
      auVar12._8_8_ = 0;
      if (0.0 <= auVar12._0_8_) {
        auVar15 = roundpd(auVar12,auVar12,1);
        dVar11 = auVar15._0_8_;
      }
      else {
        auVar15 = roundpd(auVar12,auVar12,2);
        dVar11 = auVar15._0_8_;
      }
      *param_1 = (int)dVar16;
      param_1[1] = (int)dVar19 % 0x3c;
      param_1[2] = (int)dVar11 % 0x3c;
      param_1[3] = iVar8 % iVar9;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  }
  return param_1;
}



// FUNCTION 1468060ce FUN_1468060ce body=84 status=ok
// SIG undefined FUN_1468060ce(void)

undefined8 * FUN_1468060ce(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = DAT_14c8466a8;
  uVar1 = DAT_14c8466a0;
  *(int *)(param_1 + 1) = DAT_14c8466a8;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar2,0);
    FUN_140b8566a(*param_1,uVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 146806122 FUN_146806122 body=52 status=ok
// SIG undefined FUN_146806122(void)

void FUN_146806122(longlong *param_1)

{
  FUN_146806156();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146806156 FUN_146806156 body=332 status=ok
// SIG undefined FUN_146806156(void)

void FUN_146806156(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x80);
      FUN_140dc54ec(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468062a4 FUN_1468062a4 body=54 status=ok
// SIG undefined FUN_1468062a4(void)

undefined8 * FUN_1468062a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e29ea0;
  LOCK();
  param_1[2] = 0;
  UNLOCK();
  FUN_144a8720c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468062de FUN_1468062de body=82 status=ok
// SIG undefined FUN_1468062de(void)

undefined8 * FUN_1468062de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e29f00;
  LOCK();
  param_1[0x24] = 0;
  UNLOCK();
  LOCK();
  param_1[0x23] = 0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  FUN_145a3576c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14680633a FUN_14680633a body=59 status=ok
// SIG undefined FUN_14680633a(void)

void FUN_14680633a(longlong *param_1)

{
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146806376 FUN_146806376 body=93 status=ok
// SIG undefined FUN_146806376(void)

undefined8 * FUN_146806376(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dc55aa(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146806432(param_1,iVar1);
      FUN_1468064a5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1468063d4 FUN_1468063d4 body=93 status=ok
// SIG undefined FUN_1468063d4(void)

undefined8 * FUN_1468063d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dc5582(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146806580(param_1,iVar1);
      FUN_1468065ef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146806432 FUN_146806432 body=115 status=ok
// SIG undefined FUN_146806432(void)

void FUN_146806432(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1468064a5 FUN_1468064a5 body=52 status=ok
// SIG undefined FUN_1468064a5(void)

void FUN_1468064a5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1468064da(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1468064da FUN_1468064da body=166 status=ok
// SIG undefined FUN_1468064da(void)

undefined8 * FUN_1468064da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146806580 FUN_146806580 body=111 status=ok
// SIG undefined FUN_146806580(void)

void FUN_146806580(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1468065ef FUN_1468065ef body=52 status=ok
// SIG undefined FUN_1468065ef(void)

void FUN_1468065ef(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146806624(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 146806624 FUN_146806624 body=112 status=ok
// SIG undefined FUN_146806624(void)

longlong FUN_146806624(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_146801df0();
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  _Src = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x38),iVar1,0);
    memcpy(*(void **)(param_1 + 0x38),_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return param_1;
}


