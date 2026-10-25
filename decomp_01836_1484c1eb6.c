// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484c1eb6 FUN_1484c1eb6 body=128 status=ok
// SIG undefined FUN_1484c1eb6(void)

undefined8 FUN_1484c1eb6(longlong param_1,longlong param_2,int param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  if ((((param_2 != 0) && (lVar2 = FUN_14142e422(param_2), lVar2 != 0)) &&
      (0 < *(int *)(lVar2 + 0x20))) &&
     (bVar3 = (param_3 == 7) << 3 | 2, *(byte *)(lVar2 + 0xc) == bVar3)) {
    *(byte *)(param_1 + 0x30) = bVar3;
    *(ulonglong *)(param_1 + 8) =
         (ulonglong)*(ushort *)(**(longlong **)(lVar2 + 0x18) + 0x4a) << 0x20 |
         (ulonglong)*(ushort *)(**(longlong **)(lVar2 + 0x18) + 0x48);
    *(int *)(param_1 + 0x10) = param_3;
    *(longlong *)(param_1 + 0x18) = param_2;
    if ((param_4 == '\0') || (cVar1 = FUN_1484c1d7e(param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1484c1f36 FUN_1484c1f36 body=85 status=ok
// SIG undefined FUN_1484c1f36(void)

void FUN_1484c1f36(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((*(longlong *)(param_1 + 0x20) != 0 || (*(longlong *)(param_1 + 0x28) != 0)))) {
    lVar1 = FUN_14142e422();
    FUN_1427d8a52(**(longlong **)(lVar1 + 0x18) + 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x318))();
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1484c1f8c FUN_1484c1f8c body=61 status=ok
// SIG undefined FUN_1484c1f8c(void)

void FUN_1484c1f8c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x20) != 0) || (*(longlong *)(param_1 + 0x28) != 0)) &&
      (*(char *)(param_1 + 0x30) == '\x02')) &&
     (lVar2 = (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 8), 0 < lVar2)) {
    uVar1 = *param_2;
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4) = uVar1;
      lVar3 = lVar3 + 1;
    } while (lVar2 - lVar3 != 0);
  }
  return;
}



// FUNCTION 1484c1fca FUN_1484c1fca body=206 status=ok
// SIG undefined FUN_1484c1fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484c1fca(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c5dc) {
    FUN_144b3d300(&DAT_14cb4c5dc);
    if (DAT_14cb4c5dc == -1) {
      _DAT_14cb4c5d8 = 0xff000000;
      _Init_thread_footer(&DAT_14cb4c5dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c5e4) {
    FUN_144b3d300(&DAT_14cb4c5e4);
    if (DAT_14cb4c5e4 == -1) {
      _DAT_14cb4c5e0 = 0xffffffff;
      _Init_thread_footer(&DAT_14cb4c5e4);
    }
  }
  uVar1 = *(int *)(param_1 + 0x10) - 2;
  if (uVar1 < 5) {
    puVar2 = (&PTR_DAT_14aeff790)[uVar1];
  }
  else {
    puVar2 = &DAT_14cb4c5d8;
  }
  return puVar2;
}



// FUNCTION 1484c2098 FUN_1484c2098 body=845 status=ok
// SIG undefined FUN_1484c2098(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1484c2098(longlong param_1,int *param_2,char param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_128 [36];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_2 == *(int *)(param_1 + 8)) && (param_2[1] == *(int *)(param_1 + 0xc))) {
    lVar3 = (longlong)param_2[1] * (longlong)*param_2;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < lVar3) {
      lVar5 = 0xc;
      lVar6 = 0;
      auVar24 = pmovsxbd(unaff_XMM12,0x1010101);
      auVar25 = pmovsxwd(unaff_XMM15,0x8000800080008000);
      do {
        lVar2 = *(longlong *)(param_2 + 2);
        fVar9 = *(float *)(lVar2 + -0xc + lVar5);
        auVar12 = ZEXT416((uint)fVar9);
        fVar13 = *(float *)(lVar2 + -8 + lVar5);
        auVar10 = ZEXT416((uint)fVar13);
        fVar14 = *(float *)(lVar2 + -4 + lVar5);
        auVar15 = ZEXT416((uint)fVar14);
        fVar17 = *(float *)(lVar2 + lVar5);
        if (*(char *)(param_1 + 0x30) == '\x02') {
          local_104 = fVar9;
          local_100 = fVar13;
          local_fc = fVar14;
          local_f8 = fVar17;
          if (param_3 == '\0') {
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            if (1.0 <= fVar17) {
              fVar17 = 1.0;
            }
            if (fVar14 <= 0.0) {
              auVar15 = ZEXT816(0) << 0x20;
            }
            if (1.0 <= auVar15._0_4_) {
              auVar15._0_4_ = 0x3f800000;
            }
            if (fVar13 <= 0.0) {
              auVar10 = ZEXT416(0) << 0x20;
            }
            if (1.0 <= auVar10._0_4_) {
              auVar10._0_4_ = 0x3f800000;
            }
            if (fVar9 <= 0.0) {
              auVar12 = ZEXT816(0) << 0x20;
            }
            if (1.0 <= auVar12._0_4_) {
              auVar12._0_4_ = 0x3f800000;
            }
            local_f4 = CONCAT13((char)(int)(fVar17 * 255.0 + 0.5),
                                CONCAT12((char)(int)(auVar12._0_4_ * 255.0 + 0.5),
                                         CONCAT11((char)(int)(auVar10._0_4_ * 255.0 + 0.5),
                                                  (char)(int)(auVar15._0_4_ * 255.0 + 0.5))));
          }
          else {
            FUN_1411ab38a(&local_104,&local_f4);
          }
          lVar2 = (longlong)*(int *)(param_1 + 8);
          *(undefined4 *)
           ((int)(lVar6 / lVar2) * lVar2 * 4 + *(longlong *)(param_1 + 0x20) +
           (lVar6 % lVar2 & 0xffffffffU) * 4) = local_f4;
        }
        else {
          auVar10 = insertps(auVar12,auVar10,0x10);
          auVar10 = insertps(auVar10,auVar15,0x20);
          auVar10 = insertps(auVar10,ZEXT416((uint)fVar17),0x30);
          fVar9 = auVar10._0_4_;
          fVar13 = auVar10._4_4_;
          fVar14 = auVar10._8_4_;
          fVar17 = auVar10._12_4_;
          fVar16 = ABS(fVar9);
          fVar18 = ABS(fVar13);
          fVar19 = ABS(fVar14);
          fVar20 = ABS(fVar17);
          auVar21._0_4_ = (uint)fVar16 >> 0xd;
          auVar21._4_4_ = (uint)fVar18 >> 0xd;
          auVar21._8_4_ = (uint)fVar19 >> 0xd;
          auVar21._12_4_ = (uint)fVar20 >> 0xd;
          auVar7._0_4_ = -(uint)((float)((uint)((uint)fVar16 < 0x38800000) * 0x38800000 |
                                        (uint)((uint)fVar16 >= 0x38800000) * (int)fVar16) == fVar16)
          ;
          auVar7._4_4_ = -(uint)((float)((uint)((uint)fVar18 < 0x38800000) * 0x38800000 |
                                        (uint)((uint)fVar18 >= 0x38800000) * (int)fVar18) == fVar18)
          ;
          auVar7._8_4_ = -(uint)((float)((uint)((uint)fVar19 < 0x38800000) * 0x38800000 |
                                        (uint)((uint)fVar19 >= 0x38800000) * (int)fVar19) == fVar19)
          ;
          auVar7._12_4_ =
               -(uint)((float)((uint)((uint)fVar20 < 0x38800000) * 0x38800000 |
                              (uint)((uint)fVar20 >= 0x38800000) * (int)fVar20) == fVar20);
          auVar10 = auVar21 & auVar24;
          auVar23._0_4_ = (int)(fVar16 + 0.5) + -0x3f000000;
          auVar23._4_4_ = (int)(fVar18 + 0.5) + -0x3f000000;
          auVar23._8_4_ = (int)(fVar19 + 0.5) + -0x3f000000;
          auVar23._12_4_ = (int)(fVar20 + 0.5) + -0x3f000000;
          auVar22._0_4_ = auVar10._0_4_ + (int)fVar16 + 0xc8000fffU >> 0xd;
          auVar22._4_4_ = auVar10._4_4_ + (int)fVar18 + 0xc8000fffU >> 0xd;
          auVar22._8_4_ = auVar10._8_4_ + (int)fVar19 + 0xc8000fffU >> 0xd;
          auVar22._12_4_ = auVar10._12_4_ + (int)fVar20 + 0xc8000fffU >> 0xd;
          auVar10 = blendvps(auVar23,auVar22,auVar7);
          auVar8._0_4_ = -(uint)((float)((uint)((uint)fVar16 < 0x47800000) * 0x47800000 |
                                        (uint)((uint)fVar16 >= 0x47800000) * (int)fVar16) == fVar16)
          ;
          auVar8._4_4_ = -(uint)((float)((uint)((uint)fVar18 < 0x47800000) * 0x47800000 |
                                        (uint)((uint)fVar18 >= 0x47800000) * (int)fVar18) == fVar18)
          ;
          auVar8._8_4_ = -(uint)((float)((uint)((uint)fVar19 < 0x47800000) * 0x47800000 |
                                        (uint)((uint)fVar19 >= 0x47800000) * (int)fVar19) == fVar19)
          ;
          auVar8._12_4_ =
               -(uint)((float)((uint)((uint)fVar20 < 0x47800000) * 0x47800000 |
                              (uint)((uint)fVar20 >= 0x47800000) * (int)fVar20) == fVar20);
          auVar1._4_4_ = -(uint)NAN(fVar13);
          auVar1._0_4_ = -(uint)NAN(fVar9);
          auVar1._8_4_ = -(uint)NAN(fVar14);
          auVar1._12_4_ = -(uint)NAN(fVar17);
          auVar11._0_4_ = (int)fVar9 >> 0x10;
          auVar11._4_4_ = (int)fVar13 >> 0x10;
          auVar11._8_4_ = (int)fVar14 >> 0x10;
          auVar11._12_4_ = (int)fVar17 >> 0x10;
          auVar10 = auVar11 & auVar25 |
                    ((auVar21 & _DAT_149d47680 | _DAT_149937580) & auVar1 | _DAT_149e1a1d0) & auVar8
                    | ~auVar8 & auVar10;
          lVar2 = (longlong)*(int *)(param_1 + 8);
          auVar10 = packssdw(auVar10,auVar10);
          *(longlong *)
           ((int)(lVar6 / lVar2) * lVar2 * 8 + *(longlong *)(param_1 + 0x28) +
           (lVar6 % lVar2 & 0xffffffffU) * 8) = auVar10._0_8_;
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar3 - lVar6 != 0);
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1484c23e6 FUN_1484c23e6 body=3 status=ok
// SIG undefined FUN_1484c23e6(void)

undefined8 FUN_1484c23e6(void)

{
  return 0;
}



// FUNCTION 1484c23e9 FUN_1484c23e9 body=393 status=ok
// SIG undefined FUN_1484c23e9(void)

undefined8 FUN_1484c23e9(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1 != 0) && (lVar2 = FUN_14142e422(), lVar2 != 0)) {
    lVar2 = FUN_14142e422(param_1);
    uVar6 = (ulonglong)*(ushort *)(**(longlong **)(lVar2 + 0x18) + 0x48);
    lVar2 = FUN_14142e422(param_1);
    uVar5 = (ulonglong)*(ushort *)(**(longlong **)(lVar2 + 0x18) + 0x4a);
    *param_2 = uVar5 << 0x20 | uVar6;
    param_2[4] = uVar6;
    param_2[5] = uVar5;
    lVar2 = uVar5 * uVar6;
    FUN_1483b251e(param_2 + 1,lVar2,1);
    if (*(char *)(param_1 + 0xf0) == '\x05') {
      FUN_14142e422(param_1);
      lVar3 = FUN_14031511a();
      if (lVar2 != 0) {
        lVar4 = 0;
        do {
          uVar1 = *(uint *)(lVar3 + lVar4);
          if ((*(byte *)(param_1 + 0xfe) & 1) == 0) {
            fVar7 = (float)(uVar1 & 0xff) * 0.003921569;
            fVar8 = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
            fVar9 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
          }
          else {
            fVar9 = (float)(&DAT_14c758c60)[uVar1 >> 0x10 & 0xff];
            fVar8 = (float)(&DAT_14c758c60)[uVar1 >> 8 & 0xff];
            fVar7 = (float)(&DAT_14c758c60)[uVar1 & 0xff];
          }
          uVar5 = param_2[1];
          *(float *)(uVar5 + lVar4 * 4) = fVar9;
          *(float *)(uVar5 + 4 + lVar4 * 4) = fVar8;
          *(float *)(uVar5 + 8 + lVar4 * 4) = fVar7;
          *(float *)(uVar5 + 0xc + lVar4 * 4) = (float)(uVar1 >> 0x18) * 0.003921569;
          lVar4 = lVar4 + 4;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      lVar2 = FUN_14142e422(param_1);
      FUN_1427d8a52(**(longlong **)(lVar2 + 0x18) + 0x20);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1484c2572 FUN_1484c2572 body=42 status=ok
// SIG undefined FUN_1484c2572(void)

undefined8 FUN_1484c2572(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 1484c259c FUN_1484c259c body=117 status=ok
// SIG undefined FUN_1484c259c(void)

longlong * FUN_1484c259c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  *param_1 = param_2;
  param_1[4] = (longlong)(int)param_2;
  param_1[5] = param_2 >> 0x20;
  FUN_1484d410e(param_1 + 1,(param_2 >> 0x20) * (longlong)(int)param_2,1);
  lVar1 = param_1[5];
  lVar2 = param_1[4];
  if (0 < lVar1 * lVar2) {
    lVar3 = 0;
    do {
      *(undefined4 *)(param_1[1] + lVar3 * 4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar1 * lVar2 - lVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1484c2612 FUN_1484c2612 body=205 status=ok
// SIG undefined FUN_1484c2612(void)

void FUN_1484c2612(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_2[1] != 0) && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
    lVar2 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x30) + lVar2) == '\x01') {
        FUN_1484c26e0(param_1);
        iVar1 = (int)param_2[1];
        if (0 < iVar1) {
          lVar2 = 0;
          do {
            if (*(char *)(*(longlong *)(param_1 + 0x30) + lVar2) == '\x01') {
              local_58 = &LAB_143b7e66e;
              local_50 = &local_41;
              FUN_1484c2e7e(param_1 + 0x40,*(undefined8 *)(*param_2 + lVar2 * 8),&local_58);
              iVar1 = (int)param_2[1];
            }
            lVar2 = lVar2 + 1;
          } while (lVar2 < iVar1);
        }
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x38) != lVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484c26e0 FUN_1484c26e0 body=254 status=ok
// SIG undefined FUN_1484c26e0(void)

void FUN_1484c26e0(longlong param_1)

{
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  LPCRITICAL_SECTION local_90;
  longlong local_88 [3];
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88[0] = 0;
  local_88[1] = 0;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_b8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b7e5b4;
  local_c0 = 0;
  local_a0 = param_1;
  local_98 = local_88;
  local_90 = &local_50;
  local_68 = &local_a0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 4),1);
  local_b0 = &LAB_143b7e668;
  local_a8 = &local_a0;
  FUN_1484c27e0(param_1 + 0x40,param_1,local_88);
  DeleteCriticalSection(&local_50);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c27e0 FUN_1484c27e0 body=1692 status=ok
// SIG undefined FUN_1484c27e0(void)

void FUN_1484c27e0(longlong *param_1,int *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_178 [40];
  longlong *local_150;
  ulonglong local_148;
  longlong *local_140;
  int *local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined8 local_118;
  int local_10c;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  longlong *local_f8;
  int local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int *local_c8;
  undefined1 local_bc [4];
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar14 = *(uint *)((longlong)param_1 + 0xc);
  iVar15 = 0;
  local_150 = param_1;
  local_128 = param_4;
  if ((int)uVar14 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14481578e(param_1,0);
    iVar15 = (int)local_150[1];
    uVar14 = *(uint *)((longlong)local_150 + 0xc);
  }
  *(uint *)(local_150 + 1) = iVar15 + 1U;
  if (uVar14 < iVar15 + 1U) {
    FUN_1446f48e2(local_150,iVar15);
  }
  *(undefined4 *)(*local_150 + (longlong)iVar15 * 4) = 0;
  uVar16 = (ulonglong)*(uint *)(param_3 + 1);
  if (0 < (int)*(uint *)(param_3 + 1)) {
    lVar6 = 0;
    do {
      *(undefined4 *)
       ((longlong)*param_2 * (longlong)*(int *)(*param_3 + 4 + lVar6 * 8) * 4 +
        *(longlong *)(param_2 + 2) + (longlong)*(int *)(*param_3 + lVar6 * 8) * 4) = 0;
      lVar6 = lVar6 + 1;
      uVar16 = (ulonglong)(int)param_3[1];
    } while (lVar6 < (longlong)uVar16);
  }
  local_108[0] = 0;
  FUN_146bd2140(local_100);
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_146bd223a(local_100);
  local_b8 = CONCAT44(local_b8._4_4_,0xffffffff);
  FUN_1448156a8(&local_e0,&local_b8,uVar16 & 0xffffffff);
  local_e8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_10c = 0;
  piVar1 = local_138;
  if (0 < (int)param_3[1]) {
    local_140 = param_3;
    do {
      local_118 = *(undefined8 *)(*local_140 + (longlong)local_10c * 8);
      lVar6 = 0;
      iVar15 = 0;
      do {
        uVar14 = (&DAT_149f3c4e0)[lVar6 * 2] + (int)local_118;
        if ((((-1 < (int)uVar14) &&
             (uVar11 = (&DAT_149f3c4e4)[lVar6 * 2] + (int)((ulonglong)local_118 >> 0x20),
             -1 < (int)uVar11)) && ((int)uVar14 < *param_2)) && ((int)uVar11 < param_2[1])) {
          lVar8 = *(longlong *)(param_2 + 2) + (ulonglong)uVar11 * (longlong)*param_2 * 4;
          bVar18 = true;
          if (*(short *)(lVar8 + (ulonglong)uVar14 * 4) == 0) {
            bVar18 = *(short *)(lVar8 + 2 + (ulonglong)uVar14 * 4) != 0;
          }
          iVar15 = iVar15 + (uint)bVar18;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      FUN_146b9cbf0(local_108,local_10c,(float)(8 - iVar15));
      local_d0 = &local_118;
      local_c8 = &local_10c;
      FUN_1484d4296(&local_b8,local_bc,&local_d0);
      local_10c = local_10c + 1;
      piVar4 = param_2;
      piVar1 = local_138;
    } while (local_10c < (int)local_140[1]);
    while (local_138 = piVar4, 0 < local_e8) {
      iVar15 = *(int *)(*local_f8 + 0xc);
      FUN_146bd26ea(local_108,1);
      local_148 = *(ulonglong *)(*local_140 + (longlong)iVar15 * 8);
      iVar15 = (int)local_150[1];
      lVar6 = (longlong)iVar15;
      *(uint *)(local_150 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)local_150 + 0xc) < iVar15 + 1U) {
        FUN_1446f48e2(local_150,iVar15);
      }
      *(undefined4 *)(*local_150 + lVar6 * 4) = 1;
      iVar15 = (int)local_150[1];
      *(uint *)(local_150 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)local_150 + 0xc) < iVar15 + 1U) {
        FUN_1446f48e2(local_150,iVar15);
      }
      *(int *)(*local_150 + (longlong)iVar15 * 4) = (int)local_148;
      iVar15 = (int)local_150[1];
      *(uint *)(local_150 + 1) = iVar15 + 1U;
      local_120 = lVar6;
      if (*(uint *)((longlong)local_150 + 0xc) < iVar15 + 1U) {
        FUN_1446f48e2(local_150,iVar15);
      }
      uVar17 = local_148 >> 0x20;
      *(int *)(*local_150 + (longlong)iVar15 * 4) = (int)(local_148 >> 0x20);
      *(int *)*local_150 = *(int *)*local_150 + 1;
      lVar6 = 0;
      iVar15 = 0;
      iVar13 = 0;
      uVar14 = 0;
      plVar7 = local_150;
      uVar16 = local_148;
      local_130 = uVar17;
      do {
        uVar11 = (&DAT_149f3c4e0)[lVar6 * 2] + (int)uVar16;
        if (((-1 < (int)uVar11) &&
            (uVar12 = (&DAT_149f3c4e4)[lVar6 * 2] + (int)uVar17, -1 < (int)uVar12)) &&
           (((int)uVar11 < *param_2 &&
            (((int)uVar12 < param_2[1] &&
             (uVar2 = *(uint *)((ulonglong)uVar12 * (longlong)*param_2 * 4 +
                                *(longlong *)(param_2 + 2) + (ulonglong)uVar11 * 4),
             0xffff < uVar2 || (short)uVar2 != 0)))))) {
          iVar3 = (int)plVar7[1];
          *(uint *)(plVar7 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(plVar7,iVar3);
            plVar7 = local_150;
            param_2 = local_138;
            uVar16 = local_148;
            uVar17 = local_130;
          }
          *(uint *)(*plVar7 + (longlong)iVar3 * 4) = uVar11;
          iVar3 = (int)plVar7[1];
          *(uint *)(plVar7 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(plVar7,iVar3);
            plVar7 = local_150;
            param_2 = local_138;
            uVar16 = local_148;
            uVar17 = local_130;
          }
          uVar14 = uVar14 + uVar2;
          iVar13 = iVar13 + (uVar2 >> 0x10);
          iVar15 = iVar15 + 1;
          *(uint *)(*plVar7 + (longlong)iVar3 * 4) = uVar12;
          piVar1 = (int *)(*plVar7 + local_120 * 4);
          *piVar1 = *piVar1 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      piVar4 = local_138;
      piVar1 = local_138;
      if (0 < iVar15) {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,uVar14 & 0xffff | iVar13 << 0x10);
        local_118 = CONCAT44(local_118._4_4_,iVar15);
        uVar5 = (*(code *)*local_128)(local_128[1],&local_d0,&local_118);
        *(undefined4 *)
         ((longlong)*param_2 * ((longlong)local_148 >> 0x20) * 4 + *(longlong *)(param_2 + 2) +
         (longlong)(int)local_148 * 4) = uVar5;
        lVar6 = 0;
        uVar16 = local_148;
        do {
          uVar11 = (&DAT_149f3c4e4)[lVar6 * 2] + (int)uVar17;
          uVar14 = (&DAT_149f3c4e0)[lVar6 * 2] + (int)uVar16;
          local_d0 = (undefined8 *)CONCAT44(uVar11,uVar14);
          if ((((-1 < (int)uVar14) && (-1 < (int)uVar11)) && ((int)uVar14 < *param_2)) &&
             ((int)uVar11 < param_2[1])) {
            lVar8 = (ulonglong)uVar11 * (longlong)*param_2 * 4 + *(longlong *)(param_2 + 2);
            if ((*(short *)(lVar8 + (ulonglong)uVar14 * 4) == 0) &&
               (*(short *)(lVar8 + 2 + (ulonglong)uVar14 * 4) == 0)) {
              uVar14 = FUN_1448eb174(&local_d0,8,0);
              uVar16 = local_148;
              if ((int)uStack_b0 != local_84) {
                puVar9 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar9 = local_80;
                }
                iVar15 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & uVar14) * 4);
                if (iVar15 != -1) {
                  do {
                    piVar1 = (int *)(local_b8 + (longlong)iVar15 * 0x14);
                    if ((*piVar1 == (int)local_d0) &&
                       (*(int *)(local_b8 + 4 + (longlong)iVar15 * 0x14) == local_d0._4_4_)) {
                      if (piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) {
                        iVar15 = piVar1[2];
                        if (((iVar15 <= (int)uStack_d8 + 1) &&
                            (uVar14 = *(uint *)(local_e0 + (longlong)iVar15 * 4), 0 < (int)uVar14))
                           && ((int)uVar14 <= local_e8)) {
                          lVar8 = local_f8[uVar14 >> 9];
                          uVar10 = (ulonglong)(uVar14 & 0x1ff);
                          if (0 < *(int *)(lVar8 + 8 + uVar10 * 0xc)) {
                            *(float *)(lVar8 + 4 + uVar10 * 0xc) =
                                 *(float *)(lVar8 + 4 + uVar10 * 0xc) + -1.0;
                            FUN_146bd2818(local_108);
                            uVar16 = local_148;
                          }
                        }
                      }
                      break;
                    }
                    iVar15 = piVar1[3];
                  } while (iVar15 != -1);
                }
              }
            }
          }
          lVar6 = lVar6 + 1;
          piVar4 = local_138;
          piVar1 = local_138;
        } while (lVar6 != 8);
      }
    }
  }
  local_138 = piVar1;
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be9348(&local_b8);
  FUN_146b9cd14(local_108);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484c2e7e FUN_1484c2e7e body=322 status=ok
// SIG undefined FUN_1484c2e7e(void)

void FUN_1484c2e7e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)*param_1;
  if (0 < iVar2) {
    iVar10 = 0;
    iVar11 = 1;
    do {
      lVar6 = *param_1;
      lVar7 = (longlong)iVar11;
      iVar3 = *(int *)(lVar6 + lVar7 * 4);
      iVar11 = iVar11 + 3;
      if (1 < iVar3) {
        iVar4 = *(int *)(lVar6 + 4 + lVar7 * 4);
        iVar5 = *(int *)(lVar6 + 8 + lVar7 * 4);
        local_4c = iVar3 + -1;
        lVar6 = lVar6 + (longlong)iVar11 * 4;
        local_78 = 0.0;
        lVar7 = 0;
        local_74 = 0.0;
        local_70 = 0.0;
        local_6c = 0.0;
        do {
          lVar9 = (longlong)*(int *)(lVar6 + 4 + lVar7 * 8) * (longlong)*param_2 * 0x10 +
                  *(longlong *)(param_2 + 2);
          lVar8 = (longlong)*(int *)(lVar6 + lVar7 * 8) * 0x10;
          local_78 = local_78 + *(float *)(lVar8 + lVar9);
          local_74 = local_74 + *(float *)(lVar8 + 4 + lVar9);
          local_70 = local_70 + *(float *)(lVar8 + 8 + lVar9);
          local_6c = local_6c + *(float *)(lVar8 + 0xc + lVar9);
          iVar11 = iVar11 + 2;
          lVar7 = lVar7 + 1;
        } while (local_4c != (int)lVar7);
        (*(code *)*param_3)(&local_68,param_3[1],&local_78,&local_4c);
        puVar1 = (undefined4 *)
                 ((longlong)iVar4 * 0x10 +
                 (longlong)*param_2 * (longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 2));
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = uStack_60;
        puVar1[3] = uStack_5c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c2fc2 FUN_1484c2fc2 body=506 status=ok
// SIG undefined FUN_1484c2fc2(void)

undefined8 *
FUN_1484c2fc2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  undefined8 uStack_60;
  longlong *local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14aef5140;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  param_1[0xc] = 0;
  FUN_14851fba0(param_2,0x40);
  FUN_145c688c4(param_4,&local_68,0);
  dVar4 = (double)(-(ulonglong)(0.0 <= dStack_40 - (double)local_58) &
                  (ulonglong)(dStack_40 - (double)local_58));
  dVar5 = (double)(-(ulonglong)(0.0 <= local_48 - uStack_60) & (ulonglong)(local_48 - uStack_60));
  uVar3 = -(ulonglong)(dVar5 <= dVar4);
  dVar5 = (double)(~uVar3 & (ulonglong)dVar4 | uVar3 & (ulonglong)dVar5);
  dVar4 = (double)(-(ulonglong)(0.0 <= dStack_50 - local_68) & (ulonglong)(dStack_50 - local_68));
  uVar3 = -(ulonglong)(dVar4 <= dVar5);
  dVar4 = (double)(uVar3 & (ulonglong)dVar4 | ~uVar3 & (ulonglong)dVar5);
  if (dVar4 <= 0.01) {
    dVar4 = 0.01;
  }
  local_a8 = (double)param_1[10];
  uStack_60 = (double)param_1[0xb];
  local_98 = (longlong *)param_1[0xc];
  dStack_50 = (double)param_1[0xd];
  local_48 = (double)param_1[0xe];
  dStack_40 = (double)param_1[0xf];
  local_38 = param_1[0x10];
  uStack_30 = param_1[0x11];
  local_58 = local_98;
  local_68 = local_a8;
  uVar1 = uStack_60;
  param_1[0x10] = dVar4 * 9.999999974752427e-05;
  param_1[0x11] = uStack_70;
  param_1[0xe] = &PTR_LAB_14aefe480;
  param_1[0xf] = param_1;
  param_1[0xc] = 0;
  param_1[0xd] = uStack_90;
  param_1[10] = FUN_143b7e6b8;
  param_1[0xb] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_78 = local_38;
  uStack_70 = uStack_30;
  local_88 = (longlong)local_48;
  uStack_80 = dStack_40;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_90 = dStack_50;
  uStack_60 = (double)uVar1;
  if (local_a8 != 0.0) {
    plVar2 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar2 = &local_88;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c31c2 FUN_1484c31c2 body=187 status=ok
// SIG undefined FUN_1484c31c2(void)

undefined8 FUN_1484c31c2(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_88 [32];
  code **local_68;
  undefined4 *local_60;
  undefined8 *local_58;
  code *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_1 + 0x50;
  local_68 = &local_50;
  local_50 = FUN_1484d43da;
  local_58 = &local_40;
  local_60 = &local_2c;
  FUN_14851fe0e(*(undefined8 *)(param_1 + 0x40),param_3 + 0xb0,param_3 + 200,
                *(undefined4 *)(param_1 + 0x48));
  *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_3 + 0xe8) = local_2c;
  *(undefined8 *)(param_3 + 0xf0) = local_40;
  *(undefined8 *)(param_3 + 0xf8) = local_38;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c328a FUN_1484c328a body=80 status=ok
// SIG undefined FUN_1484c328a(void)

void FUN_1484c328a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c32cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484c32da FUN_1484c32da body=863 status=ok
// SIG undefined FUN_1484c32da(void)

longlong * FUN_1484c32da(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0x40;
  FUN_14851fd28(param_2,&local_108,0x40);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe590;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d4cd4;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d4e62;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c363a FUN_1484c363a body=863 status=ok
// SIG undefined FUN_1484c363a(void)

longlong * FUN_1484c363a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 1;
  FUN_14851fd28(param_2,&local_108,1);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe5d0;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d4eda;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5090;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c399a FUN_1484c399a body=863 status=ok
// SIG undefined FUN_1484c399a(void)

longlong * FUN_1484c399a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0x80;
  FUN_14851fd28(param_2,&local_108,0x80);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe5f0;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d50a4;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5206;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c3cfa FUN_1484c3cfa body=863 status=ok
// SIG undefined FUN_1484c3cfa(void)

longlong * FUN_1484c3cfa(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 2;
  FUN_14851fd28(param_2,&local_108,2);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe610;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d521a;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5324;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c405a FUN_1484c405a body=863 status=ok
// SIG undefined FUN_1484c405a(void)

longlong * FUN_1484c405a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 4;
  FUN_14851fd28(param_2,&local_108,4);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe630;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d5338;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5442;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c43ba FUN_1484c43ba body=863 status=ok
// SIG undefined FUN_1484c43ba(void)

longlong * FUN_1484c43ba(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 8;
  FUN_14851fd28(param_2,&local_108,8);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe650;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d5456;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5560;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c471a FUN_1484c471a body=863 status=ok
// SIG undefined FUN_1484c471a(void)

longlong * FUN_1484c471a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0x10;
  FUN_14851fd28(param_2,&local_108,0x10);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe670;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d5574;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d5690;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c4a7a FUN_1484c4a7a body=863 status=ok
// SIG undefined FUN_1484c4a7a(void)

longlong * FUN_1484c4a7a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0x100;
  FUN_14851fd28(param_2,&local_108,0x100);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe690;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d56a4;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d57ae;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c4dda FUN_1484c4dda body=863 status=ok
// SIG undefined FUN_1484c4dda(void)

longlong * FUN_1484c4dda(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_14001cc68(0xb0);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14aefe550;
  memset(plVar9 + 2,0,0xa0);
  plVar9[2] = (longlong)&PTR_FUN_14aefe570;
  *(undefined4 *)(plVar9 + 3) = 1;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
  plVar9[0x10] = 0;
  *param_1 = (longlong)(plVar9 + 2);
  param_1[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0x200;
  FUN_14851fd28(param_2,&local_108,0x200);
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_108;
  *(undefined4 *)(lVar3 + 0x14) = local_108._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_100._4_4_;
  puVar11 = &local_108;
  for (lVar10 = 0x14; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
  }
  local_b8 = (code *)0x0;
  local_a8 = (longlong *)FUN_14001cc68(0x60,8);
  *local_a8 = (longlong)&PTR_FUN_14aefe6b0;
  puVar11 = &local_108;
  puVar12 = local_a8 + 1;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_a8[0xb] = param_3;
  if (local_a8 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_1484d57c2;
  }
  local_78 = *(longlong *)(lVar3 + 0x20);
  uStack_70 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(longlong **)(lVar3 + 0x30);
  uStack_60 = *(undefined8 *)(lVar3 + 0x38);
  local_58 = *(longlong *)(lVar3 + 0x40);
  uStack_50 = *(undefined8 *)(lVar3 + 0x48);
  local_48 = *(undefined8 *)(lVar3 + 0x50);
  uStack_40 = *(undefined8 *)(lVar3 + 0x58);
  uVar7 = local_48;
  uVar8 = uStack_40;
  lVar10 = local_58;
  uVar6 = uStack_50;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  *(ulonglong *)(lVar3 + 0x50) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar3 + 0x58) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_8c,uStack_90);
  *(longlong **)(lVar3 + 0x30) = local_a8;
  *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar3 + 0x20) = local_b8;
  *(ulonglong *)(lVar3 + 0x28) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (code *)local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_48 = uVar7;
  uStack_40 = uVar8;
  if (local_78 != 0) {
    plVar9 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_98;
    }
    local_58 = lVar10;
    uStack_50 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_108 = *(longlong *)(lVar3 + 0x60);
  uStack_100 = *(undefined8 *)(lVar3 + 0x68);
  local_f8 = *(longlong **)(lVar3 + 0x70);
  uStack_f0 = *(undefined8 *)(lVar3 + 0x78);
  local_e8 = *(longlong *)(lVar3 + 0x80);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x88);
  local_d8 = *(undefined8 *)(lVar3 + 0x90);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = local_48;
  *(undefined8 *)(lVar3 + 0x98) = uStack_40;
  *(undefined ***)(lVar3 + 0x80) = &PTR_LAB_14aefe5b0;
  *(undefined1 **)(lVar3 + 0x88) = &LAB_1484d58de;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = uStack_60;
  *(code **)(lVar3 + 0x60) = FUN_1484d4e76;
  *(undefined8 *)(lVar3 + 0x68) = uStack_70;
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  if (local_108 != 0) {
    plVar9 = local_68;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = &local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c513a FUN_1484c513a body=576 status=ok
// SIG undefined FUN_1484c513a(void)

void FUN_1484c513a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_14838046a();
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      plVar3 = (longlong *)FUN_148380456(param_1,iVar7);
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(int *)*puVar4 == 3) {
        FUN_148380472(param_1,local_58,iVar7);
        lVar8 = *local_58[0];
        *local_58[0] = 0;
        if (lVar8 == 0) break;
        if ((int)plVar3[1] != 0x20) goto switchD_1484c52b9_caseD_3;
        uVar5 = FUN_1484c537c(lVar8,5,0);
        param_2[1] = uVar5;
      }
      else {
        if (*(int *)*puVar4 != 4) break;
        FUN_148380472(param_1,local_58,iVar7);
        lVar8 = *local_58[0];
        *local_58[0] = 0;
        if (lVar8 == 0) break;
        iVar1 = (int)plVar3[1];
        if (iVar1 < 0x80) {
          if (iVar1 != 0x40) {
            switch(iVar1) {
            case 1:
              uVar5 = FUN_1484c537c(lVar8,0,1);
              *param_2 = uVar5;
              break;
            case 2:
              uVar5 = FUN_1484c537c(lVar8,2,0);
              param_2[4] = uVar5;
              break;
            case 3:
            case 5:
            case 6:
            case 7:
switchD_1484c52b9_caseD_3:
              if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar8);
              goto LAB_1484c5308;
            case 4:
              uVar5 = FUN_1484c537c(lVar8,3,0);
              param_2[3] = uVar5;
              break;
            case 8:
              uVar5 = FUN_1484c537c(lVar8,4,0);
              param_2[5] = uVar5;
              break;
            default:
              if (iVar1 != 0x10) goto switchD_1484c52b9_caseD_3;
              lVar6 = FUN_1484c537c(lVar8,7,0);
              param_2[6] = lVar6;
              *(undefined1 *)(lVar6 + 0xf0) = 10;
            }
          }
        }
        else if (iVar1 == 0x80) {
          uVar5 = FUN_1484c537c(lVar8,1,0);
          param_2[2] = uVar5;
        }
        else if (iVar1 == 0x100) {
          uVar5 = FUN_1484c537c(lVar8,1,0);
          param_2[7] = uVar5;
        }
        else {
          if (iVar1 != 0x200) goto switchD_1484c52b9_caseD_3;
          uVar5 = FUN_1484c537c(lVar8,0,0);
          param_2[8] = uVar5;
        }
      }
      if (*(longlong *)(lVar8 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar8);
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
LAB_1484c5308:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484c537c FUN_1484c537c body=208 status=ok
// SIG undefined FUN_1484c537c(void)

undefined8 FUN_1484c537c(ulonglong *param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = &PTR_FUN_14aefd850;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 2;
  uVar1 = *param_1;
  local_88 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FUN_1437337e4(uVar1 & 0xffffffff,uVar1 >> 0x20,
                        CONCAT71((int7)(param_3 >> 8),(param_2 == 7) << 3) | 2,0);
  FUN_1484c1cbc(&local_80,param_2,uVar1,uVar2);
  FUN_1484c2098(&local_80,param_1,param_3 & 0xffffffff);
  FUN_1484c1f36(&local_80,0);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c5472 FUN_1484c5472 body=165 status=ok
// SIG undefined FUN_1484c5472(void)

bool FUN_1484c5472(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  int local_30 [2];
  undefined1 local_28 [4];
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar5 = (**(code **)(*param_1 + 0x2c0))();
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar5);
  iVar4 = (**(code **)(*param_1 + 0x2e0))(param_1);
  if (iVar3 < iVar4) {
    bVar2 = false;
  }
  else {
    (**(code **)(*param_1 + 0x2d8))(param_1,local_28);
    bVar2 = true;
    if (local_24 == '\x01') {
      (**(code **)(*param_1 + 0x2d8))(param_1,local_30);
      bVar2 = iVar3 <= local_30[0];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c551c FUN_1484c551c body=1256 status=ok
// SIG undefined FUN_1484c551c(void)

void FUN_1484c551c(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined8 *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484416be();
  if (0 < (int)param_1[0x15]) {
    lVar8 = 0;
    do {
      FUN_148506321(*(undefined8 *)(param_1[0x14] + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x15]);
  }
  (**(code **)(*param_1 + 0x3a0))(param_1);
  plVar5 = (longlong *)FUN_1484c5a05(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  param_1[0x18] = (longlong)plVar5;
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_b8);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  lVar8 = FUN_1484c5a9a(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x19] = lVar8;
  FUN_14851cc7c(lVar8);
  FUN_144a787a6(param_1[0x19] + 0xa8,&DAT_14cb4d6a0);
  plVar5 = (longlong *)param_1[0x19];
  FUN_140056680(&local_b8,L"OutputTypeFromInputTool");
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_b8);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14aefe790;
  local_68 = FUN_143b7ed54;
  local_40 = param_1;
  FUN_1484c5b30(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  plVar5 = (longlong *)FUN_1484c5c08(param_1);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  param_1[0x1a] = (longlong)plVar5;
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_b8);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1a]);
  cVar2 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FUN_1484c5c9d(param_1);
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    param_1[0x1b] = (longlong)plVar5;
    FUN_140056680(&local_b8,&DAT_149dfb77a);
    (**(code **)(*plVar5 + 0x2a8))(plVar5,param_1,&local_b8);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1b]);
  }
  lVar8 = FUN_1484c5d32(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x1c] = lVar8;
  uVar6 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_148504f74(lVar8,uVar6,param_1 + 0x17);
  uVar7 = 0;
  FUN_148558526(*(undefined8 *)(param_1[0x1c] + 0x58));
  if (0 < (int)param_1[0x15]) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      iVar3 = FUN_148506955(*(undefined8 *)(param_1[0x14] + lVar8 * 8));
      uVar7 = uVar7 + iVar3;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x15]);
  }
  uVar9 = 1;
  if (1 < (int)uVar7) {
    uVar9 = (ulonglong)uVar7;
  }
  uVar4 = (uint)(10000000 / uVar9);
  uVar7 = 0x14;
  if (uVar4 < 0x14) {
    uVar7 = uVar4;
  }
  FUN_148505116(param_1[0x1c],uVar7 + (uVar7 == 0));
  (**(code **)(*param_1 + 0x3b0))(param_1);
  lVar8 = param_1[0x1c];
  local_b8 = (undefined8 *)0x0;
  local_b0._0_4_ = 0;
  FUN_1446efa72(&local_b8,0,2,0x10);
  puVar1 = local_b8;
  local_b0 = CONCAT44(local_b0._4_4_,2);
  *local_b8 = &PTR_LAB_14aefe820;
  uVar6 = FUN_144a3f946();
  puVar1[2] = uVar6;
  *puVar1 = &PTR_FUN_14aefe7b0;
  puVar1[3] = param_1;
  FUN_1484d607c(lVar8 + 0x28,local_c8,&local_b8);
  FUN_1449db362(&local_b8);
  (**(code **)(*param_1 + 1000))(param_1);
  (**(code **)(*param_1 + 0x398))(param_1,1);
  (**(code **)(*param_1 + 0x3b8))(param_1,local_c8);
  FUN_1484c5dc8(param_1,&local_b8,local_c8);
  lVar8 = param_1[0x1a];
  if ((undefined8 **)(lVar8 + 0xb8) == &local_b8) {
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar8 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 **)(lVar8 + 0xb8) = local_b8;
    local_b8 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 0xc0) = (undefined4)local_b0;
    *(undefined4 *)(lVar8 + 0xc4) = local_b0._4_4_;
    local_b0 = 0;
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_88 = &PTR_LAB_14aefe8f0;
  local_a8 = FUN_143b7effe;
  local_80 = param_1;
  FUN_1484c5eb6(param_1[0x1a] + 0x28,param_1[0x1a] + 0xb0);
  FUN_1485051e4(param_1[0x1c]);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c5a05 FUN_1484c5a05 body=148 status=ok
// SIG undefined FUN_1484c5a05(void)

undefined8 FUN_1484c5a05(undefined8 param_1)

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
  uVar1 = FUN_1459eebc8();
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



// FUNCTION 1484c5a9a FUN_1484c5a9a body=148 status=ok
// SIG undefined FUN_1484c5a9a(void)

undefined8 FUN_1484c5a9a(undefined8 param_1)

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
  uVar1 = FUN_14113c87a();
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



// FUNCTION 1484c5b30 FUN_1484c5b30 body=215 status=ok
// SIG undefined FUN_1484c5b30(void)

int FUN_1484c5b30(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xe0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1484d5c30(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c5c08 FUN_1484c5c08 body=148 status=ok
// SIG undefined FUN_1484c5c08(void)

undefined8 FUN_1484c5c08(undefined8 param_1)

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
  uVar1 = FUN_1459ee9f0();
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



// FUNCTION 1484c5c9d FUN_1484c5c9d body=148 status=ok
// SIG undefined FUN_1484c5c9d(void)

undefined8 FUN_1484c5c9d(undefined8 param_1)

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
  uVar1 = FUN_1459eeadc();
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



// FUNCTION 1484c5d32 FUN_1484c5d32 body=148 status=ok
// SIG undefined FUN_1484c5d32(void)

undefined8 FUN_1484c5d32(undefined8 param_1)

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
  uVar1 = FUN_141076552();
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



// FUNCTION 1484c5dc8 FUN_1484c5dc8 body=236 status=ok
// SIG undefined FUN_1484c5dc8(void)

undefined8 * FUN_1484c5dc8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xa8) == 1) {
    uVar2 = FUN_1485062e8(**(undefined8 **)(param_1 + 0xa0));
    FUN_148505e5e(&local_30,uVar2,1);
    puVar4 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      puVar4 = (undefined2 *)*param_3;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar3 = local_30;
    }
    FUN_140002266(param_2,L"%s_%s",puVar3,puVar4);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484c5eb6 FUN_1484c5eb6 body=215 status=ok
// SIG undefined FUN_1484c5eb6(void)

int FUN_1484c5eb6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1484d61b4(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c5f8e FUN_1484c5f8e body=40 status=ok
// SIG undefined FUN_1484c5f8e(void)

int FUN_1484c5f8e(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0xb0);
  if (iVar1 == 0) {
    return -1;
  }
  if (iVar1 == 1) {
    return 0;
  }
  return *(int *)(param_1 + 0xa8) + -1;
}



// FUNCTION 1484c5fc2 FUN_1484c5fc2 body=107 status=ok
// SIG undefined FUN_1484c5fc2(void)

void FUN_1484c5fc2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (0 < (int)param_1[0x20]) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x1f] + uVar3 * 8);
      if (*(char *)(param_1[0x18] + 0xa8) == '\x01') {
        uVar2 = (**(code **)(*param_1 + 0x408))(param_1);
        bVar4 = uVar3 != uVar2;
      }
      else {
        bVar4 = false;
      }
      (**(code **)(*plVar1 + 0x350))(plVar1,bVar4);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)(int)param_1[0x20]);
  }
  return;
}



// FUNCTION 1484c602e FUN_1484c602e body=551 status=ok
// SIG undefined FUN_1484c602e(void)

void FUN_1484c602e(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  ulonglong uStack_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = (**(code **)(*param_1 + 0x2c8))();
  local_d8 = FUN_148451354(uVar2);
  if (0 < (int)param_1[0x15]) {
    local_e0 = param_1 + 0x1d;
    lVar6 = 0;
    do {
      plVar3 = (longlong *)FUN_1484c6256(param_1);
      if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar3);
      }
      iVar1 = (int)param_1[0x1e];
      *(uint *)(param_1 + 0x1e) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xf4) < iVar1 + 1U) {
        FUN_1484d64d2(local_e0,iVar1);
      }
      lVar7 = *local_e0;
      *(longlong **)(lVar7 + (longlong)iVar1 * 8) = plVar3;
      if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar3);
        plVar3 = *(longlong **)(lVar7 + (longlong)iVar1 * 8);
      }
      local_c8 = (undefined1 *)0x0;
      uStack_c0 = 0;
      plVar4 = (longlong *)FUN_14843cf70(local_d8,param_1,&local_c8);
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar4);
      }
      iVar1 = (int)param_1[0x20];
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x104) < iVar1 + 1U) {
        FUN_1484d6558(param_1 + 0x1f,iVar1);
      }
      lVar7 = param_1[0x1f];
      *(longlong **)(lVar7 + (longlong)iVar1 * 8) = plVar4;
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar4);
        plVar4 = *(longlong **)(lVar7 + (longlong)iVar1 * 8);
      }
      if (local_c8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1485063a5(&local_c8,*(undefined8 *)(param_1[0x14] + lVar6 * 8));
      (**(code **)(*plVar3 + 0x2b8))(plVar3,&local_c8);
      lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar7 = lVar5 + 0x28;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      (**(code **)(*plVar4 + 800))(plVar4,plVar3,lVar7);
      local_c8 = &LAB_1484c63c8;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      FUN_1484c62ec(plVar3 + 5,local_d0,param_1,&local_c8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x15]);
  }
  (**(code **)(*param_1 + 0x3e0))(param_1);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c6256 FUN_1484c6256 body=148 status=ok
// SIG undefined FUN_1484c6256(void)

undefined8 FUN_1484c6256(undefined8 param_1)

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
  uVar1 = FUN_141001474();
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



// FUNCTION 1484c62ec FUN_1484c62ec body=218 status=ok
// SIG undefined FUN_1484c62ec(void)

undefined8
FUN_1484c62ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14aefe910;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c63e2 FUN_1484c63e2 body=152 status=ok
// SIG undefined FUN_1484c63e2(void)

undefined8 FUN_1484c63e2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"BaseCreateFromSelectedTool";
  local_28 = 0x1a;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UBaseCreateFromSelectedTool";
  local_28 = 0x1b;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Generated Mesh");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c647c FUN_1484c647c body=91 status=ok
// SIG undefined FUN_1484c647c(void)

undefined8 * FUN_1484c647c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0x68);
  _Src = *(void **)(lVar2 + 0x60);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1411312f2(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 1484c64d8 FUN_1484c64d8 body=4353 status=ok
// SIG undefined FUN_1484c64d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484c64d8(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined4 unaff_R12D;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_b28 [44];
  uint local_afc;
  double local_af8;
  double dStack_af0;
  double local_ae8;
  double dStack_ae0;
  undefined1 local_ad8 [16];
  undefined1 local_ac8 [16];
  undefined1 local_ab8 [16];
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double dStack_a90;
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  double local_a68;
  double dStack_a60;
  double local_a58;
  double dStack_a50;
  double local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double dStack_9f0;
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  double local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_898 [16];
  double local_888;
  double dStack_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined1 local_858 [16];
  undefined1 local_848 [32];
  undefined1 local_828;
  undefined1 local_827;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  char local_7d0;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_b28;
  if (*param_2 == 0) goto LAB_1484c656e;
  if ((int)param_1[0x15] == 1) {
    FUN_1485063a5(&local_8e8,*(undefined8 *)param_1[0x14]);
    FUN_146c3cd49(*param_2,param_2 + 1,1);
    local_178 = local_8e8;
    uStack_170 = dStack_8e0;
    local_168 = local_8d8;
    uStack_160 = dStack_8d0;
    local_158 = local_8c8;
    dStack_150 = dStack_8c0;
    local_148 = local_8b8;
    dStack_140 = local_8a8;
    uStack_138 = uStack_8a0;
    uStack_130 = (double)local_898._0_8_;
    FUN_146c3cfa5(*param_2,&local_178,1);
    FUN_1485063a5(&local_178,*(undefined8 *)param_1[0x14]);
    uVar46 = (undefined4)local_128;
    uVar47 = local_128._4_4_;
    uVar48 = uStack_120;
    uVar49 = uStack_11c;
    uVar50 = (undefined4)local_178;
    uVar51 = local_178._4_4_;
    uVar52 = (undefined4)uStack_170;
    uVar53 = uStack_170._4_4_;
    uVar54 = (undefined4)local_168;
    uVar55 = local_168._4_4_;
    uVar56 = (undefined4)uStack_160;
    uVar57 = uStack_160._4_4_;
    uVar61 = (undefined4)uStack_138;
    uVar62 = uStack_138._4_4_;
    uVar63 = (undefined4)uStack_130;
    uVar64 = uStack_130._4_4_;
    dVar1 = local_158;
    dVar26 = dStack_150;
    dVar59 = local_148;
    dVar60 = dStack_140;
  }
  else {
    FUN_145c688c4(*param_2,&local_8e8,0);
    dVar26 = (local_8d8 + dStack_8c0) * 0.5;
    dVar59 = (dStack_8e0 + local_8c8) * 0.5;
    dVar58 = (local_8e8 + dStack_8d0) * 0.5;
    dVar1 = (double)param_2[8];
    local_8b8 = -dVar26 * dVar1;
    dStack_8c0 = -dVar59 * dVar1;
    local_8c8 = -dVar58 * dVar1;
    local_8e8 = 0.0;
    dStack_8e0 = 0.0;
    local_8d8 = 0.0;
    dStack_8d0 = 1.0;
    uStack_8b0 = dVar1;
    local_8a8 = dVar1;
    uStack_8a0 = dVar1;
    FUN_146c3cd49(*param_2,&local_8e8,1);
    auVar35 = *(undefined1 (*) [16])(param_2 + 1);
    uVar50 = auVar35._0_4_;
    uVar51 = auVar35._4_4_;
    dVar15 = auVar35._8_8_;
    uVar52 = auVar35._8_4_;
    uVar53 = auVar35._12_4_;
    auVar29 = *(undefined1 (*) [16])(param_2 + 3);
    dVar60 = auVar29._0_8_;
    uVar54 = auVar29._0_4_;
    uVar55 = auVar29._4_4_;
    uVar56 = auVar29._8_4_;
    uVar57 = auVar29._12_4_;
    uVar61 = (undefined4)DAT_14c846510;
    uVar62 = DAT_14c846510._4_4_;
    uVar63 = DAT_14c846510._8_4_;
    uVar64 = DAT_14c846510._12_4_;
    uVar46 = SUB84(DAT_14c846520,0);
    uVar47 = (undefined4)((ulonglong)DAT_14c846520 >> 0x20);
    uVar48 = 0;
    uVar49 = 0;
    dVar41 = dVar58 * dVar1 * DAT_14c846510;
    dVar43 = dVar59 * dVar1 * DAT_14c846510._8_8_;
    dVar26 = dVar26 * dVar1 * DAT_14c846520;
    dVar1 = (double)param_2[4];
    dVar28 = dVar41 * dVar60 - (double)param_2[1] * dVar26;
    dVar58 = dVar43 * auVar35._0_8_ - dVar15 * dVar41;
    dVar34 = dVar26 * dVar15 - dVar60 * dVar43;
    dVar34 = dVar34 + dVar34;
    dVar28 = dVar28 + dVar28;
    dVar58 = dVar58 + dVar58;
    dVar59 = dVar58 * dVar1 + dVar26 + (dVar28 * auVar35._0_8_ - dVar34 * dVar15) +
             (double)param_2[7];
    dVar26 = (dVar60 * dVar34 - (double)param_2[1] * dVar58) + (double)param_2[4] * dVar28 + dVar43
             + (double)param_2[6];
    dVar1 = (dVar58 * dVar15 - dVar28 * dVar60) + dVar1 * dVar34 + dVar41 + (double)param_2[5];
    dVar60 = 0.0;
  }
  iVar12 = *(int *)(param_1[0x1a] + 0xc0);
  iVar14 = iVar12 + -1;
  if (iVar12 == 0) {
    puVar19 = &DAT_149dfb77a;
    iVar14 = 0;
  }
  else {
    puVar19 = *(undefined2 **)(param_1[0x1a] + 0xb8);
  }
  if (0xf9 < iVar14) {
    iVar14 = 0xfa;
  }
  if (iVar14 < 1) {
    iVar14 = 0;
  }
  FUN_14006620a(&local_918,puVar19,iVar14);
  if (dStack_910._0_4_ < 2) {
    (**(code **)(*param_1 + 0x3b8))(param_1,&local_178);
    FUN_1484c5dc8(param_1,&local_8e8,&local_178);
    if (local_918 != 0.0) {
      FUN_1400020a8();
    }
    local_918 = local_8e8;
    dStack_910 = dStack_8e0;
    local_8e8 = 0.0;
    dStack_8e0 = 0.0;
    if (local_178 != 0.0) {
      FUN_1400020a8();
    }
  }
  FUN_14850577a(&local_8e8,1);
  dVar15 = (double)(**(code **)(*param_1 + 0x390))(param_1);
  if ((dVar15 != 0.0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(dVar15);
  }
  local_8b8 = (double)CONCAT44(uVar51,uVar50);
  uStack_8b0 = (double)CONCAT44(uVar53,uVar52);
  local_8a8 = (double)CONCAT44(uVar55,uVar54);
  uStack_8a0 = (double)CONCAT44(uVar57,uVar56);
  local_898._8_4_ = SUB84(dVar26,0);
  local_898._0_8_ = dVar1;
  local_898._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  iVar12 = dStack_910._0_4_ + -1;
  if (dStack_910._0_4_ == 0) {
    iVar12 = 0;
  }
  local_8c8 = dVar15;
  local_888 = dVar59;
  dStack_880 = dVar60;
  local_878 = uVar61;
  uStack_874 = uVar62;
  uStack_870 = uVar63;
  uStack_86c = uVar64;
  local_868 = uVar46;
  uStack_864 = uVar47;
  uStack_860 = uVar48;
  uStack_85c = uVar49;
  FUN_1402980a2(local_858,local_918,iVar12);
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_178);
  FUN_1484c75da(local_848,&local_178);
  if (local_178 != 0.0) {
    FUN_1400020a8();
  }
  FUN_148505bae(&local_8e8,*param_2);
  plVar18 = (longlong *)param_1[0x19];
  iVar12 = (int)plVar18[0x16];
  if (iVar12 == DAT_14cb4d6a8) {
    if ((1 < iVar12) && (iVar12 = FUN_144a80a00(plVar18[0x15],DAT_14cb4d6a0), iVar12 != 0)) {
      plVar18 = (longlong *)param_1[0x19];
      goto LAB_1484c75c4;
    }
LAB_1484c6a6e:
    FUN_1485073fd(*(undefined8 *)param_1[0x14],&local_8e8);
  }
  else {
    if (DAT_14cb4d6a8 + iVar12 == 1) goto LAB_1484c6a6e;
LAB_1484c75c4:
    (**(code **)(*plVar18 + 0x2c0))(plVar18,&local_8e8);
  }
  cVar11 = dStack_8e0._0_1_;
  cVar10 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if ((((cVar10 != '\0') && (*(char *)(param_1[0x1b] + 0xa8) == '\x01')) && (cVar11 != '\x02')) &&
     (0 < (int)param_1[0x15])) {
    uVar22 = 0;
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar64,uVar63)));
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar62,uVar61)));
    local_afc = movmskpd((int)param_1[0x1b],auVar30);
    auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar49,uVar48)));
    auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar47,uVar46)));
    iVar12 = movmskpd(unaff_R12D,auVar36);
    auVar29._4_4_ = uVar62;
    auVar29._0_4_ = uVar61;
    auVar29._8_4_ = uVar63;
    auVar29._12_4_ = uVar64;
    auVar29 = divpd(_DAT_149934d80,auVar29);
    auVar35._4_4_ = uVar47;
    auVar35._0_4_ = uVar46;
    auVar35._8_4_ = uVar48;
    auVar35._12_4_ = uVar49;
    auVar35 = divpd(ZEXT816(0x3ff0000000000000),auVar35);
    local_a38 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar62,uVar61))) &
                        auVar29._0_8_);
    uStack_a30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar64,uVar63)))
                         & auVar29._8_8_);
    local_a48 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar47,uVar46))) &
                        auVar35._0_8_);
    dVar15 = (double)CONCAT44(uVar55,uVar54) * -1.0;
    dVar58 = (double)CONCAT44(uVar57,uVar56) * 1.0;
    local_a58 = -(double)CONCAT44(uVar51,uVar50);
    local_a98 = -(double)CONCAT44(uVar53,uVar52);
    dVar1 = dVar1 * local_a38;
    dVar26 = dVar26 * uStack_a30;
    uStack_a40 = 0;
    dVar59 = dVar59 * local_a48;
    dVar60 = dVar60 * 0.0;
    local_a88._0_8_ = dVar26 * local_a58;
    local_a88._8_8_ = dVar59 * local_a98;
    local_a78._0_8_ = dVar1 * dVar15 - local_a58 * dVar59;
    local_a78._8_8_ = dVar60 * dVar58 - dVar58 * dVar60;
    dStack_a90 = dVar15;
    local_a68 = dVar58;
    dStack_a60 = dVar58;
    dStack_a50 = local_a98;
    do {
      cVar11 = (**(code **)(*param_1 + 0x3d8))(param_1,uVar22 & 0xffffffff);
      if (cVar11 != '\0') {
        uVar16 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar22 * 8));
        cVar11 = FUN_1485075e2(uVar16,0);
        if (cVar11 != '\0') {
          local_828 = 1;
          local_827 = FUN_14850766a(uVar16);
          local_928 = 0;
          uStack_920 = 0;
          local_938 = 0;
          uStack_930 = 0;
          local_948 = 0;
          uStack_940 = 0;
          local_958 = 0;
          uStack_950 = 0;
          local_968 = 0;
          uStack_960 = 0;
          puVar20 = &DAT_14c846480;
          puVar21 = (undefined8 *)local_9c8;
          for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar21 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar21 = puVar21 + 1;
          }
          if (1 < (int)param_1[0x15]) {
            plVar18 = *(longlong **)(param_1[0x1d] + uVar22 * 8);
            (**(code **)(*plVar18 + 0x2b0))(plVar18,&local_a28);
            uVar13 = iVar12 << 2 | local_afc;
            if (uVar13 == 0) {
              local_ae8 = DAT_14c8464a0;
              dStack_ae0 = DAT_14c8464a8;
              local_af8 = DAT_14c8464b0;
              dStack_af0 = DAT_14c8464b8;
              local_ad8 = _DAT_14c8464d0;
              dVar34 = DAT_14c846490;
              dVar28 = DAT_14c846498;
              uVar46 = (undefined4)DAT_14c8464c0;
              uVar47 = DAT_14c8464c0._4_4_;
              uVar48 = (undefined4)DAT_14c8464c8;
              uVar49 = DAT_14c8464c8._4_4_;
              dVar41 = DAT_14c846480;
              dVar43 = DAT_14c846488;
            }
            else {
              dVar34 = (double)local_a88._0_8_ - local_a98 * dVar1;
              dVar28 = (double)local_a88._8_8_ - dStack_a90 * dVar26;
              dVar28 = dVar28 + dVar28;
              dVar41 = (double)local_a78._0_8_ + (double)local_a78._0_8_;
              dVar34 = dVar34 + dVar34;
              local_ae8 = 0.0 - ((dVar34 * dStack_a50 - dVar41 * dStack_a90) +
                                local_a68 * dVar28 + dVar1);
              dStack_ae0 = 0.0 - (dVar34 * (double)CONCAT44(uVar51,uVar50) + dVar15 * dVar28 +
                                 dStack_a60 * dVar41 + dVar26);
              local_af8 = 0.0 - (local_a68 * dVar34 + dVar59 +
                                (dVar41 * local_a58 - dVar28 * local_a98));
              dStack_af0 = 0.0;
              local_ad8._8_8_ = uStack_a40;
              local_ad8._0_8_ = local_a48;
              dVar34 = dVar15;
              dVar28 = dVar58;
              uVar46 = (undefined4)local_a38;
              uVar47 = local_a38._4_4_;
              uVar48 = (undefined4)uStack_a30;
              uVar49 = uStack_a30._4_4_;
              dVar41 = local_a58;
              dVar43 = dStack_a50;
            }
            local_ab8 = local_9e8;
            auVar29 = local_ab8;
            auVar4._4_4_ = uVar47;
            auVar4._0_4_ = uVar46;
            auVar4._8_4_ = uVar48;
            auVar4._12_4_ = uVar49;
            auVar30 = minpd(local_9e8,auVar4);
            local_ac8 = local_9d8;
            auVar35 = local_ac8;
            auVar36 = minpd(local_9d8,local_ad8);
            auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
            auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
            iVar14 = movmskpd(uVar13,auVar31);
            auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
            auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
            uVar13 = movmskpd((int)plVar18,auVar37);
            uVar6 = local_ad8._0_8_;
            uVar7 = local_ad8._8_8_;
            local_ab8._0_8_ = local_9e8._0_8_;
            local_ab8._8_8_ = local_9e8._8_8_;
            local_ac8._0_8_ = local_9d8._0_8_;
            uVar8 = local_ac8._0_8_;
            local_ac8._8_8_ = local_9d8._8_8_;
            uVar9 = local_ac8._8_8_;
            local_ac8 = auVar35;
            local_ab8 = auVar29;
            if ((uVar13 & 0x3fffffff) == 0 && iVar14 == 0) {
              dVar45 = dStack_a20 * dVar34 * -1.0 +
                       local_a18 * dVar43 + dVar41 * dStack_a10 * 1.0 + dVar28 * local_a28;
              dVar3 = local_a28 * dVar34 * 1.0 +
                      dStack_a10 * dVar43 + dVar41 * local_a18 * -1.0 + dVar28 * dStack_a20;
              local_9b8._0_8_ =
                   dStack_a10 * dVar34 * 1.0 +
                   ((dVar41 * dStack_a20 * 1.0 + dVar28 * local_a18) - dVar43 * local_a28);
              local_9b8._8_8_ =
                   local_a18 * dVar34 * -1.0 +
                   ((dVar41 * local_a28 * -1.0 + dVar28 * dStack_a10) - dVar43 * dStack_a20);
              dVar27 = local_a08 * (double)CONCAT44(uVar47,uVar46);
              dVar32 = dStack_a00 * (double)CONCAT44(uVar49,uVar48);
              dVar33 = local_9f8 * (double)local_ad8._0_8_;
              dVar39 = dStack_9f0 * (double)local_ad8._8_8_;
              dVar42 = dVar32 * dVar41 - dVar43 * dVar27;
              dVar2 = dVar33 * dVar43 - dVar34 * dVar32;
              dVar5 = dVar27 * dVar34 - dVar41 * dVar33;
              dVar44 = dVar39 * dVar28 - dVar28 * dVar39;
              dVar2 = dVar2 + dVar2;
              dVar5 = dVar5 + dVar5;
              dVar42 = dVar42 + dVar42;
              dVar44 = dVar44 + dVar44;
              dStack_990 = dStack_af0 +
                           (dVar44 * dVar28 - dVar44 * dVar28) + dVar28 * dVar44 + dVar39;
              dVar44 = (double)local_ab8._0_8_ * (double)CONCAT44(uVar47,uVar46);
              dVar39 = (double)local_ab8._8_8_ * (double)CONCAT44(uVar49,uVar48);
              local_998 = local_af8 + (dVar5 * dVar41 - dVar43 * dVar2) + dVar28 * dVar42 + dVar33;
              local_9a8 = local_ae8 + (dVar42 * dVar43 - dVar34 * dVar5) + dVar28 * dVar2 + dVar27;
              dStack_9a0 = dStack_ae0 + (dVar2 * dVar34 - dVar42 * dVar41) + dVar28 * dVar5 + dVar32
              ;
              local_aa8 = dVar59;
              dStack_aa0 = dVar60;
            }
            else {
              dVar44 = dVar43 + dVar43;
              dVar39 = dVar34 + dVar34;
              dVar42 = dVar41 * (dVar41 + dVar41);
              local_1f8 = (1.0 - (dVar34 * dVar39 + dVar43 * dVar44)) *
                          (double)CONCAT44(uVar47,uVar46);
              dStack_1d0 = (1.0 - (dVar34 * dVar39 + dVar42)) * (double)CONCAT44(uVar49,uVar48);
              dVar45 = (dVar41 + dVar41) * dVar28;
              local_1d8 = (dVar44 * dVar41 - dVar39 * dVar28) * (double)CONCAT44(uVar49,uVar48);
              dVar3 = (dVar39 * dVar43 - dVar45) * (double)local_ad8._0_8_;
              local_1a8 = (1.0 - (dVar42 + dVar43 * dVar44)) * (double)local_ad8._0_8_;
              dVar34 = (double)local_ad8._0_8_ * (double)local_ac8._0_8_;
              dStack_1f0 = (dVar44 * dVar41 + dVar39 * dVar28) * (double)CONCAT44(uVar47,uVar46);
              local_1c8 = (dVar39 * dVar43 + dVar45) * (double)CONCAT44(uVar49,uVar48);
              local_1e8 = (dVar41 * dVar39 - dVar44 * dVar28) * (double)CONCAT44(uVar47,uVar46);
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              local_1b8._8_4_ = SUB84(dVar3,0);
              local_1b8._0_8_ = (dVar41 * dVar39 + dVar44 * dVar28) * (double)local_ad8._0_8_;
              local_1b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uStack_1a0 = 0;
              local_198 = local_ae8;
              dStack_190 = dStack_ae0;
              local_188 = local_af8;
              uStack_180 = 0x3ff0000000000000;
              dVar41 = dStack_a20 + dStack_a20;
              dVar43 = local_a18 + local_a18;
              dVar28 = local_a28 * (local_a28 + local_a28);
              local_228 = (1.0 - (dVar28 + dStack_a20 * dVar41)) * (double)local_ac8._0_8_;
              dVar45 = (local_a28 + local_a28) * dStack_a10;
              local_238 = (dVar41 * dStack_a10 + local_a28 * dVar43) * (double)local_ac8._0_8_;
              dStack_230 = (dVar43 * dStack_a20 - dVar45) * (double)local_ac8._0_8_;
              dVar44 = (double)CONCAT44(uVar47,uVar46) * (double)local_ab8._0_8_;
              dVar39 = (double)CONCAT44(uVar49,uVar48) * (double)local_ab8._8_8_;
              local_278 = (1.0 - (local_a18 * dVar43 + dStack_a20 * dVar41)) *
                          (double)local_ab8._0_8_;
              dVar28 = (1.0 - (local_a18 * dVar43 + dVar28)) * (double)local_ab8._8_8_;
              dStack_270 = (dVar41 * local_a28 + dVar43 * dStack_a10) * (double)local_ab8._0_8_;
              local_248 = (dVar43 * dStack_a20 + dVar45) * (double)local_ab8._8_8_;
              local_268 = (local_a28 * dVar43 - dVar41 * dStack_a10) * (double)local_ab8._0_8_;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar28,0);
              local_258._0_8_ = (dVar41 * local_a28 - dVar43 * dStack_a10) * (double)local_ab8._8_8_
              ;
              local_258._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = local_a08;
              dStack_210 = dStack_a00;
              local_208 = local_9f8;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar35 = _DAT_149934d80;
              auVar24._8_8_ = -(ulonglong)(0.0 <= dVar39);
              auVar24._0_8_ = -(ulonglong)(0.0 <= dVar44);
              auVar29 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
              uVar23 = -(ulonglong)(0.0 <= dVar34);
              dVar34 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
              dVar28 = auVar29._0_8_;
              local_168 = local_168 * dVar28;
              uStack_170 = uStack_170 * dVar28;
              local_178 = local_178 * dVar28;
              dVar28 = auVar29._8_8_;
              local_148 = local_148 * dVar28;
              dStack_150 = dStack_150 * dVar28;
              local_158 = dVar28 * local_158;
              local_128 = local_128 * dVar34;
              uStack_130 = uStack_130 * dVar34;
              uStack_138 = dVar34 * uStack_138;
              FUN_14481fd10(&local_908,&local_178);
              dVar34 = local_8f8 * local_8f8 + local_908 * local_908;
              dVar28 = dStack_8f0 * dStack_8f0 + dStack_900 * dStack_900;
              auVar38._0_8_ = dVar34 + dVar28;
              auVar38._8_8_ = dVar34 + dVar28;
              auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
              auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
              auVar29 = sqrtpd(auVar38,auVar38);
              auVar35 = divpd(auVar35,auVar29);
              auVar40._0_8_ = auVar35._0_8_ * local_8f8;
              auVar40._8_8_ = auVar35._8_8_ * dStack_8f0;
              dVar45 = (double)((ulonglong)(local_908 * auVar35._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
              dVar3 = (double)((ulonglong)(dStack_900 * auVar35._8_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
              local_9b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
              dStack_990 = 0.0;
              local_998 = local_108;
              local_9a8 = local_118;
              dStack_9a0 = dStack_110;
            }
            local_9c8._8_4_ = SUB84(dVar3,0);
            local_9c8._0_8_ = dVar45;
            local_9c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            local_988._8_4_ = SUB84(dVar39,0);
            local_988._0_8_ = dVar44;
            local_988._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            local_978._8_4_ = SUB84((double)uVar9 * (double)uVar7,0);
            local_978._0_8_ = (double)uVar8 * (double)uVar6;
            local_978._12_4_ = (int)((ulonglong)((double)uVar9 * (double)uVar7) >> 0x20);
          }
          cVar11 = FUN_14850789a(uVar16,&local_968);
          if (cVar11 != '\0') {
            if (local_7d0 == '\0') {
              local_7e0 = 0;
              uStack_7d8 = 0;
              local_7f0 = 0;
              uStack_7e8 = 0;
              local_800 = 0;
              uStack_7f8 = 0;
              local_810 = 0;
              uStack_808 = 0;
              local_820 = 0;
              uStack_818 = 0;
              local_7d0 = '\x01';
            }
            FUN_1483901b2(&local_820,&local_968,local_9c8);
          }
          FUN_14838fe66(&local_968);
        }
      }
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)(int)param_1[0x15]);
  }
  uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(&local_178,uVar16,&local_8e8);
  dVar1 = uStack_170;
  if (((char)local_178 == '\0') && (uStack_170 != 0.0)) {
    uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar16,dVar1);
  }
  FUN_1484c7624(&local_8e8);
  if (local_918 != 0.0) {
    FUN_1400020a8();
  }
LAB_1484c656e:
  if ((local_f0 ^ (ulonglong)auStack_b28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c75da FUN_1484c75da body=74 status=ok
// SIG undefined FUN_1484c75da(void)

undefined8 * FUN_1484c75da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140c99534(param_1,iVar1);
    FUN_140da7c4d(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1484c7624 FUN_1484c7624 body=176 status=ok
// SIG undefined FUN_1484c7624(void)

void FUN_1484c7624(longlong param_1)

{
  if (*(char *)(param_1 + 0x660) == '\x01') {
    FUN_141082778(param_1 + 0x440);
    *(undefined1 *)(param_1 + 0x660) = 0;
  }
  if (*(char *)(param_1 + 0x438) == '\x01') {
    FUN_145838e00(param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x438) = 0;
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x118) == '\x01') {
    FUN_14838fe66(param_1 + 200);
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484c76d4 FUN_1484c76d4 body=444 status=ok
// SIG undefined FUN_1484c76d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484c76d4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1485063a5(&local_98,param_3);
  local_b0 = *(undefined4 *)(param_2 + 8);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_a8 = *(undefined4 *)(param_2 + 9);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_a0 = param_2[10];
  local_e8 = param_2[1];
  uStack_e0 = param_2[2];
  local_d8 = param_2[3];
  uStack_d0 = param_2[4];
  local_c8 = param_2[5];
  uStack_c0 = param_2[6];
  local_b8 = param_2[7];
  FUN_146c3cd49(*param_2,&local_e8,1);
  local_e8 = local_98;
  uStack_e0 = uStack_90;
  local_d8 = local_88;
  uStack_d0 = uStack_80;
  local_b8 = local_68;
  local_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = uStack_50;
  uStack_a4 = uStack_4c;
  local_a0 = local_48;
  FUN_146c3cfa5(*param_2,&local_e8,1);
  local_e8 = 0x1000000010101;
  local_108 = 0;
  FUN_148506f34(param_3,*param_2,1,&local_e8);
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_f8);
  local_e8 = CONCAT44(uStack_f4,local_f8);
  if (param_3 == 0) {
    plVar2 = (longlong *)0x0;
    (**(code **)(_DAT_00000000 + 0x28))(0,&local_e8,1);
  }
  else {
    uVar1 = FUN_145b7126e();
    plVar2 = (longlong *)FUN_144718840(param_3,uVar1);
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_e8,1);
    uVar1 = FUN_145b7126e();
    plVar2 = (longlong *)FUN_144718840(param_3,uVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_e8,0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c7892 FUN_1484c7892 body=137 status=ok
// SIG undefined FUN_1484c7892(void)

void FUN_1484c7892(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_30,L"bShowTransformGizmo",1);
    if (lVar1 == local_30) {
      (**(code **)(*param_1 + 0x3e0))(param_1);
      goto LAB_1484c78fb;
    }
    if (param_1[0x1a] == param_2) goto LAB_1484c78fb;
  }
  FUN_1485051e4(param_1[0x1c]);
LAB_1484c78fb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c791c FUN_1484c791c body=2326 status=ok
// SIG undefined FUN_1484c791c(void)

void FUN_1484c791c(longlong *param_1,char param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  wchar_t **ppwVar19;
  ulonglong uVar20;
  bool bVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_468 [40];
  undefined1 local_440 [4];
  undefined1 local_43c [4];
  longlong *local_438 [2];
  undefined8 local_428;
  longlong *local_420;
  longlong *local_418 [2];
  longlong *local_408 [2];
  wchar_t *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  wchar_t *local_3e8;
  wchar_t *pwStack_3e0;
  wchar_t *local_3d8;
  wchar_t *pwStack_3d0;
  wchar_t *local_3c8;
  wchar_t *local_3b8;
  wchar_t *pwStack_3b0;
  wchar_t *local_3a8;
  wchar_t **local_398;
  undefined1 *puStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [96];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 *local_290 [11];
  undefined8 local_238;
  longlong *local_230;
  wchar_t *local_228;
  undefined4 local_220;
  longlong *local_218 [2];
  undefined1 local_208 [128];
  wchar_t **local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 uStack_170;
  longlong local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  (**(code **)(*param_1 + 0x3a8))();
  plVar18 = (longlong *)param_1[0x1a];
  FUN_140056680(&local_178,&DAT_149dfb77a);
  (**(code **)(*plVar18 + 0x2a0))(plVar18,param_1,&local_178);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  cVar13 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if (cVar13 != '\0') {
    plVar18 = (longlong *)param_1[0x1b];
    FUN_140056680(&local_178,&DAT_149dfb77a);
    (**(code **)(*plVar18 + 0x2a0))(plVar18,param_1,&local_178);
    if (local_178 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar18 = (longlong *)param_1[0x19];
  FUN_140056680(&local_178,L"OutputTypeFromInputTool");
  (**(code **)(*plVar18 + 0x2a0))(plVar18,param_1,&local_178);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar18 = (longlong *)param_1[0x18];
  FUN_140056680(&local_178,&DAT_149dfb77a);
  (**(code **)(*plVar18 + 0x2a0))(plVar18,param_1,&local_178);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_143b84538(param_1[0x1c],local_290);
  if (0 < (int)param_1[0x15]) {
    lVar22 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(param_1[0x14] + lVar22 * 8));
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)param_1[0x15]);
  }
  if (param_2 != '\x01') goto LAB_1484c7c9c;
  cVar13 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if (((cVar13 == '\0') || (*(int *)(param_1[0x1a] + 0xb0) == 0)) || ((int)param_1[0x15] < 2)) {
LAB_1484c7b07:
    lVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*param_1 + 0x3c0))(param_1,&local_178);
    (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x10))(lVar22 + 0x28,&local_178);
    if (local_178 != (longlong *)0x0) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  else {
    uVar23 = 0;
    if (*(int *)(param_1[0x1a] + 0xb0) != 1) {
      uVar23 = (ulonglong)((int)param_1[0x15] - 1);
    }
    lVar22 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar23 * 8));
    if (*(char *)(param_1[0x1b] + 0xa8) != '\x01') goto LAB_1484c7b07;
    cVar13 = FUN_1485075e2(lVar22,1);
    if (cVar13 == '\0') goto LAB_1484c7b07;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_14850789a(lVar22);
    FUN_1485063a5(local_348,*(undefined8 *)(param_1[0x14] + uVar23 * 8));
    local_d8 = 0;
    local_d0 = 0x200000000;
    FUN_1484c8234(&local_178,local_348);
    if ((int)param_1[0x15] < 1) {
LAB_1484c820f:
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      FUN_14838fe66(&local_2e8);
      goto LAB_1484c7b07;
    }
    uVar20 = 0;
    bVar21 = false;
    do {
      if (uVar23 != uVar20) {
        cVar13 = (**(code **)(*param_1 + 0x3d8))(param_1,uVar20 & 0xffffffff);
        if (cVar13 != '\0') {
          uVar17 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar20 * 8));
          local_358 = 0;
          uStack_350 = 0;
          local_368 = 0;
          uStack_360 = 0;
          local_378 = 0;
          uStack_370 = 0;
          local_388 = 0;
          uStack_380 = 0;
          local_398 = (wchar_t **)0x0;
          puStack_390 = (undefined1 *)0x0;
          cVar13 = FUN_1485075e2(uVar17,0);
          if (cVar13 != '\0') {
            cVar13 = FUN_14850789a(uVar17,&local_398);
            if (cVar13 != '\0') {
              local_188 = (wchar_t **)0x0;
              local_180 = 0x200000000;
              plVar18 = *(longlong **)(param_1[0x1d] + uVar20 * 8);
              (**(code **)(*plVar18 + 0x2b0))(plVar18,&local_3f8);
              uVar12 = local_180;
              pwVar11 = local_3a8;
              pwVar10 = pwStack_3b0;
              pwVar9 = local_3b8;
              pwVar8 = local_3c8;
              pwVar7 = pwStack_3d0;
              pwVar6 = local_3d8;
              pwVar5 = pwStack_3e0;
              pwVar4 = local_3e8;
              pwVar3 = local_3f8;
              pwVar2 = (wchar_t *)CONCAT44(uStack_3ec,uStack_3f0);
              lVar15 = (longlong)(int)local_180;
              uVar14 = (int)local_180 + 1;
              local_180 = CONCAT44(local_180._4_4_,uVar14);
              if (local_180._4_4_ < uVar14) {
                FUN_1484d6da4(&local_228,uVar12 & 0xffffffff);
              }
              ppwVar19 = local_188;
              if (local_188 == (wchar_t **)0x0) {
                ppwVar19 = &local_228;
              }
              ppwVar19[lVar15 * 10] = pwVar3;
              (ppwVar19 + lVar15 * 10)[1] = pwVar2;
              ppwVar19[lVar15 * 10 + 2] = pwVar4;
              (ppwVar19 + lVar15 * 10 + 2)[1] = pwVar5;
              ppwVar19[lVar15 * 10 + 4] = pwVar6;
              (ppwVar19 + lVar15 * 10 + 4)[1] = pwVar7;
              ppwVar19[lVar15 * 10 + 6] = pwVar8;
              ppwVar19[lVar15 * 10 + 7] = pwVar9;
              (ppwVar19 + lVar15 * 10 + 7)[1] = pwVar10;
              ppwVar19[lVar15 * 10 + 9] = pwVar11;
              FUN_1484c82a2(&local_228,&local_178);
              FUN_14839255e(&local_2e8,&local_398,&local_228);
              if (local_188 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
              bVar21 = true;
            }
          }
          FUN_14838fe66(&local_398);
        }
      }
      uVar20 = uVar20 + 1;
    } while ((longlong)uVar20 < (longlong)(int)param_1[0x15]);
    if (!bVar21) goto LAB_1484c820f;
    if (lVar22 != 0) {
      FUN_144a7a726();
    }
    lVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*param_1 + 0x3c0))(param_1,&local_228);
    (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x10))(lVar15 + 0x28,&local_228);
    if (local_228 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_228 + 0x10))();
    }
    lVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*param_1 + 0x3c0))(param_1,local_418);
    local_228 = L"SplitTransactionCollisionUpdatePart";
    local_220 = 0x23;
    FUN_1446e940c(local_43c,&local_228);
    local_228 = L"UBaseCreateFromSelectedTool";
    local_220 = 0x1b;
    FUN_1446e940c(local_440,&local_228);
    FUN_140208bae(local_438,local_440,local_43c,L"Update Collision ({0})");
    FUN_14023409e(&local_428,local_438,1);
    local_228 = (wchar_t *)CONCAT44(local_228._4_4_,4);
    FUN_14023423e(local_218,local_418);
    puStack_390 = local_208;
    local_398 = &local_228;
    FUN_14010d304(&local_3f8);
    local_238 = local_428;
    local_230 = local_420;
    if (local_420 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_420 + 1) = (int)local_420[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_408,&local_238,&local_3f8);
    FUN_14007f2db(local_3f8,uStack_3f0);
    if (local_3f8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_218[0] != (longlong *)0x0) {
      (**(code **)(*local_218[0] + 0x10))();
    }
    if (local_420 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_420 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_420)(local_420);
        LOCK();
        piVar1 = (int *)((longlong)local_420 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_420 + 0x10))(local_420);
        }
      }
    }
    if (local_418[0] != (longlong *)0x0) {
      (**(code **)(*local_418[0] + 0x10))();
    }
    (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x10))((longlong *)(lVar15 + 0x28),local_408);
    if (local_408[0] != (longlong *)0x0) {
      (**(code **)(*local_408[0] + 0x10))();
    }
    if (local_438[0] != (longlong *)0x0) {
      (**(code **)(*local_438[0] + 0x10))();
    }
    uVar17 = FUN_14850766a(lVar22);
    FUN_148507fa1(lVar22,&local_2e8,uVar17);
    lVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x18))(lVar22 + 0x28);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_14838fe66(&local_2e8);
  }
  if (*(int *)(param_1[0x1a] + 0xb0) == 1) {
    lVar22 = 0;
LAB_1484c7b88:
    lVar15 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar22 * 8));
    (**(code **)(*param_1 + 0x400))(param_1,local_290,*(undefined8 *)(param_1[0x14] + lVar22 * 8));
  }
  else {
    if (*(int *)(param_1[0x1a] + 0xb0) != 0) {
      lVar22 = (longlong)(int)param_1[0x15] + -1;
      goto LAB_1484c7b88;
    }
    (**(code **)(*param_1 + 0x3f8))(param_1,local_290);
    lVar15 = 0;
  }
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  if (0 < (int)param_1[0x15]) {
    lVar22 = 0;
    do {
      lVar16 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar22 * 8));
      uVar23 = uStack_170;
      lVar24 = (longlong)(int)uStack_170;
      uVar14 = (int)uStack_170 + 1;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar14);
      if (uStack_170._4_4_ < uVar14) {
        FUN_1447d05f2(&local_178,uVar23 & 0xffffffff);
      }
      local_178[lVar24] = lVar16;
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)param_1[0x15]);
  }
  lVar22 = param_1[0x1a];
  uVar17 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14851d420(lVar22,&local_178,uVar17,lVar15);
  if (lVar15 != 0) {
    uVar17 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar17,lVar15);
  }
  lVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x18))(lVar22 + 0x28);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1484c7c9c:
  uVar17 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar18 = (longlong *)FUN_148451354(uVar17);
  (**(code **)(*plVar18 + 0x2d8))(plVar18,param_1);
  if (local_290[0] != (undefined8 *)0x0) {
    (**(code **)*local_290[0])(local_290[0],1);
  }
  if ((local_c0 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c8234 FUN_1484c8234 body=109 status=ok
// SIG undefined FUN_1484c8234(void)

void FUN_1484c8234(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  uStack_40 = param_2[3];
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6];
  local_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_18 = *(undefined4 *)(param_2 + 9);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_10 = param_2[10];
  FUN_1484d69ee(local_20,&local_58);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c82a2 FUN_1484c82a2 body=151 status=ok
// SIG undefined FUN_1484c82a2(void)

void FUN_1484c82a2(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_2 + 0xa0);
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    lVar8 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
        FUN_1484d6da4(param_1,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar3 = param_1;
      }
      puVar5 = (undefined8 *)(lVar8 + lVar7);
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x50 + lVar3);
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar7 = lVar7 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar7);
  }
  return;
}



// FUNCTION 1484c833a FUN_1484c833a body=46 status=ok
// SIG undefined FUN_1484c833a(void)

undefined8 FUN_1484c833a(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x378))();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_1484c8368(param_1[0x1c]);
  return uVar2;
}



// FUNCTION 1484c8368 FUN_1484c8368 body=65 status=ok
// SIG undefined FUN_1484c8368(void)

bool FUN_1484c8368(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x91) == '\x01') && (*(longlong *)(param_1 + 0x58) != 0)) &&
     (lVar1 = FUN_14851bd54(), lVar1 != 0)) {
    lVar1 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x58));
    return 0 < *(int *)(lVar1 + 0x170);
  }
  return false;
}



// FUNCTION 1484c83b2 FUN_1484c83b2 body=349 status=ok
// SIG undefined FUN_1484c83b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484c83b2(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c6e0) {
    FUN_144b3d300(&DAT_14cb4c6e0);
    if (DAT_14cb4c6e0 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74c04();
      uVar3 = FUN_145b74cee();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c6d0 = (undefined *)0x0;
      _DAT_14cb4c6dc = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c6d8 = local_48;
      FUN_1484d23fc(&DAT_14cb4c6a8,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c6a8;
        if (DAT_14cb4c6d0 != (undefined *)0x0) {
          _Dst = DAT_14cb4c6d0;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78ca0);
      _Init_thread_footer(&DAT_14cb4c6e0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c6a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c8510 FUN_1484c8510 body=54 status=ok
// SIG undefined FUN_1484c8510(void)

bool FUN_1484c8510(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 == 1;
}



// FUNCTION 1484c8558 FUN_1484c8558 body=2978 status=ok
// SIG undefined FUN_1484c8558(void)

void FUN_1484c8558(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  code *pcVar17;
  char cVar18;
  undefined1 uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined ***pppuVar26;
  longlong *plVar27;
  code **ppcVar28;
  longlong *plVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_418 [32];
  undefined1 local_3f8;
  undefined8 local_3f0;
  void *local_3e0;
  int local_3d8;
  undefined4 local_3d4;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  longlong *local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined7 uStack_397;
  double local_390;
  double local_388;
  double local_380;
  undefined1 local_378 [8];
  double local_370;
  longlong local_368;
  longlong *local_358;
  longlong local_348 [4];
  longlong local_328;
  longlong *local_318;
  longlong local_308 [4];
  code *local_2e8;
  double dStack_2e0;
  undefined ***local_2d8;
  undefined **local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1484416be();
  lVar25 = param_1[0x14];
  if (lVar25 == 0) {
    plVar24 = (longlong *)0x0;
  }
  else {
    uVar23 = FUN_145a7b1c0();
    plVar24 = (longlong *)FUN_144718840(lVar25,uVar23);
  }
  (**(code **)(*plVar24 + 0x20))(plVar24,0);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  iVar3 = (int)param_1[0xe];
  *(uint *)(param_1 + 0xe) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar3 + 1U) {
    FUN_140845902(param_1 + 0xd,iVar3);
  }
  *(longlong **)(param_1[0xd] + (longlong)iVar3 * 8) = param_1;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  uStack_3a0 = (longlong *)((ulonglong)uStack_3a0._4_4_ << 0x20);
  local_3a8 = (longlong *)0x3e800000000;
  FUN_148506727(&local_2e8,param_1[0x14]);
  plVar29 = param_1 + 0x29;
  FUN_146c00942(plVar29,&local_2e8);
  FUN_141082778(&local_2e8);
  cVar18 = (**(code **)(*param_1 + 0x430))(param_1);
  if (cVar18 == '\0') {
    param_1[0x7f] = (longlong)DAT_14c8464f0;
    uVar15 = DAT_14c8464e8._4_4_;
    uVar14 = (undefined4)DAT_14c8464e8;
    uVar13 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x7d) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar13;
    *(undefined4 *)(param_1 + 0x7e) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x3f4) = uVar15;
    param_1[0x80] = 0x3ff0000000000000;
    (**(code **)(*plVar24 + 0x28))(plVar24,&local_2e8);
    ppcVar28 = &local_2e8;
    plVar24 = param_1 + 0x82;
    for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
      *plVar24 = (longlong)*ppcVar28;
      ppcVar28 = ppcVar28 + 1;
      plVar24 = plVar24 + 1;
    }
    uVar19 = 0;
  }
  else {
    FUN_1482e1672(local_378,plVar29);
    local_370 = local_370 / 6.0;
    if (local_370 < 0.0) {
      local_370 = sqrt(local_370);
    }
    else {
      local_370 = SQRT(local_370);
    }
    dVar32 = 0.01;
    if (0.01 <= local_370) {
      dVar32 = local_370;
    }
    FUN_145c688c4(plVar29,&local_3a8,0);
    dVar6 = ((double)CONCAT71(uStack_397,local_398) + local_380) * 0.5;
    dStack_2e0 = ((double)uStack_3a0 + local_388) * 0.5;
    dVar31 = ((double)local_3a8 + local_390) * 0.5;
    param_1[0x7d] = (longlong)dVar31;
    param_1[0x7e] = (longlong)dStack_2e0;
    param_1[0x7f] = (longlong)dVar6;
    local_2d8 = (undefined ***)-dVar6;
    local_2e8 = (code *)-dVar31;
    dStack_2e0 = -dStack_2e0;
    FUN_146c3c4e4(plVar29,&local_2e8);
    param_1[0x80] = (longlong)dVar32;
    local_2d8 = DAT_14c8464f0;
    local_2e8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dStack_2e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar32 = 1.0 / dVar32;
    local_3b8 = DAT_14c846520 * dVar32;
    uStack_3c0 = DAT_14c846518 * dVar32;
    local_3c8 = (longlong *)(dVar32 * DAT_14c846510);
    local_3f8 = 0;
    FUN_146c3c569(plVar29,&local_3c8,&local_2e8,0);
    (**(code **)(*plVar24 + 0x28))(plVar24,&local_2e8);
    ppcVar28 = &local_2e8;
    plVar24 = param_1 + 0x82;
    for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
      *plVar24 = (longlong)*ppcVar28;
      ppcVar28 = ppcVar28 + 1;
      plVar24 = plVar24 + 1;
    }
    dVar6 = (double)param_1[0x7d] * (double)param_1[0x8a];
    dVar31 = (double)param_1[0x7e] * (double)param_1[0x8b];
    dVar33 = (double)param_1[0x7f] * (double)param_1[0x8c];
    dVar10 = (double)param_1[0x84];
    dVar32 = (double)param_1[0x85];
    dVar11 = (double)param_1[0x82];
    dVar12 = (double)param_1[0x83];
    dVar7 = dVar31 * dVar11 - dVar6 * dVar12;
    dVar8 = dVar33 * dVar12 - dVar31 * dVar10;
    dVar9 = dVar6 * dVar10 - dVar11 * dVar33;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    param_1[0x86] =
         (longlong)
         ((dVar7 * dVar12 - dVar9 * dVar10) + dVar32 * dVar8 + dVar6 + (double)param_1[0x86]);
    param_1[0x87] =
         (longlong)
         ((dVar10 * dVar8 - dVar7 * dVar11) + dVar32 * dVar9 + dVar31 + (double)param_1[0x87]);
    param_1[0x88] =
         (longlong)
         (dVar32 * dVar7 + dVar33 + (dVar9 * dVar11 - dVar8 * dVar12) + (double)param_1[0x88]);
    param_1[0x89] = (longlong)((double)param_1[0x89] + 0.0);
    dVar32 = (double)(float)(double)param_1[0x80];
    auVar5._8_4_ = SUB84(dVar32 * (double)param_1[0x8b],0);
    auVar5._0_8_ = (double)param_1[0x8a] * dVar32;
    auVar5._12_4_ = (int)((ulonglong)(dVar32 * (double)param_1[0x8b]) >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x8a) = auVar5;
    param_1[0x8c] = (longlong)((double)param_1[0x8c] * dVar32);
    param_1[0x8d] = 0;
    uVar19 = 1;
  }
  *(undefined1 *)(param_1 + 0x7c) = uVar19;
  local_3c8 = (longlong *)0x0;
  uStack_3c0 = 0.0;
  cVar18 = (**(code **)(*param_1 + 0x418))(param_1);
  if (cVar18 != '\0') {
    local_328 = 0;
    local_318 = (longlong *)0x0;
    local_2d8 = (undefined ***)0x0;
    local_2c8 = &PTR_LAB_14aefe980;
    local_2e8 = FUN_143b7f1cc;
    plStack_2c0 = param_1;
    FUN_14170b918(&local_3a8);
    plVar4 = uStack_3a0;
    plVar24 = local_3a8;
    local_398 = 1;
    if (uStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_3a0 + 1) = (int)uStack_3a0[1] + 1;
      UNLOCK();
    }
    cVar18 = FUN_144a53f06();
    pcVar17 = local_2e8;
    plVar27 = DAT_14c8442c0;
    if (cVar18 == '\0') {
      pppuVar26 = local_2d8;
      if (local_2d8 == (undefined ***)0x0) {
        pppuVar26 = &local_2c8;
      }
      uVar23 = (*(code *)(*pppuVar26)[1])();
      (*pcVar17)(uVar23);
      *(undefined4 *)(local_3a8 + 0x10) = 0;
      FUN_140b576f0();
    }
    else {
      puVar22 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar22[1] = 0;
      *puVar22 = TAsyncQueuedWork<void>::vftable;
      puVar22[2] = local_2e8;
      puVar22[4] = local_2d8;
      local_2d8 = (undefined ***)0x0;
      puVar22[8] = local_2b8;
      puVar22[9] = uStack_2b0;
      puVar22[6] = local_2c8;
      puVar22[7] = plStack_2c0;
      if (local_2e8 != (code *)0x0) {
        local_2e8 = (code *)0x0;
      }
      puVar22[10] = local_3a8;
      puVar22[0xb] = uStack_3a0;
      local_3a8 = (longlong *)0x0;
      uStack_3a0 = (longlong *)0x0;
      *(undefined1 *)(puVar22 + 0xc) = 0;
      (**(code **)(*plVar27 + 0x18))(plVar27,puVar22,3);
    }
    plVar27 = uStack_3a0;
    if (uStack_3a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_3a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_3a0)(uStack_3a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    if (local_2e8 != (code *)0x0) {
      pppuVar26 = &local_2c8;
      if (local_2d8 != (undefined ***)0x0) {
        pppuVar26 = local_2d8;
      }
      (*(code *)(*pppuVar26)[2])(pppuVar26);
    }
    if (local_328 != 0) {
      plVar27 = local_318;
      if (local_318 == (longlong *)0x0) {
        plVar27 = local_308;
      }
      (**(code **)(*plVar27 + 0x10))();
    }
    uVar16 = (ulonglong)uStack_3c0;
    lVar25 = (longlong)(int)uStack_3c0;
    uVar20 = (int)uStack_3c0 + 1;
    uStack_3c0 = (double)CONCAT44(uStack_3c0._4_4_,uVar20);
    if (uStack_3c0._4_4_ < uVar20) {
      FUN_146b79992(&local_3c8,uVar16 & 0xffffffff);
    }
    local_3c8[lVar25 * 2] = (longlong)plVar24;
    local_3c8[lVar25 * 2 + 1] = (longlong)plVar4;
  }
  cVar18 = (**(code **)(*param_1 + 0x420))(param_1);
  if (cVar18 != '\0') {
    local_368 = 0;
    local_358 = (longlong *)0x0;
    local_2d8 = (undefined ***)0x0;
    local_2c8 = &PTR_LAB_14aefe9c0;
    local_2e8 = FUN_143b7f316;
    plStack_2c0 = param_1;
    FUN_14170b918(&local_3a8);
    plVar4 = uStack_3a0;
    plVar24 = local_3a8;
    local_398 = 1;
    if (uStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_3a0 + 1) = (int)uStack_3a0[1] + 1;
      UNLOCK();
    }
    cVar18 = FUN_144a53f06();
    pcVar17 = local_2e8;
    plVar27 = DAT_14c8442c0;
    if (cVar18 == '\0') {
      pppuVar26 = local_2d8;
      if (local_2d8 == (undefined ***)0x0) {
        pppuVar26 = &local_2c8;
      }
      uVar23 = (*(code *)(*pppuVar26)[1])();
      (*pcVar17)(uVar23);
      *(undefined4 *)(local_3a8 + 0x10) = 0;
      FUN_140b576f0();
    }
    else {
      puVar22 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar22[1] = 0;
      *puVar22 = TAsyncQueuedWork<void>::vftable;
      puVar22[2] = local_2e8;
      puVar22[4] = local_2d8;
      local_2d8 = (undefined ***)0x0;
      puVar22[8] = local_2b8;
      puVar22[9] = uStack_2b0;
      puVar22[6] = local_2c8;
      puVar22[7] = plStack_2c0;
      if (local_2e8 != (code *)0x0) {
        local_2e8 = (code *)0x0;
      }
      puVar22[10] = local_3a8;
      puVar22[0xb] = uStack_3a0;
      local_3a8 = (longlong *)0x0;
      uStack_3a0 = (longlong *)0x0;
      *(undefined1 *)(puVar22 + 0xc) = 0;
      (**(code **)(*plVar27 + 0x18))(plVar27,puVar22,3);
    }
    plVar27 = uStack_3a0;
    if (uStack_3a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_3a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_3a0)(uStack_3a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    if (local_2e8 != (code *)0x0) {
      pppuVar26 = &local_2c8;
      if (local_2d8 != (undefined ***)0x0) {
        pppuVar26 = local_2d8;
      }
      (*(code *)(*pppuVar26)[2])(pppuVar26);
    }
    if (local_368 != 0) {
      plVar27 = local_358;
      if (local_358 == (longlong *)0x0) {
        plVar27 = local_348;
      }
      (**(code **)(*plVar27 + 0x10))();
    }
    uVar16 = (ulonglong)uStack_3c0;
    lVar25 = (longlong)(int)uStack_3c0;
    uVar20 = (int)uStack_3c0 + 1;
    uStack_3c0 = (double)CONCAT44(uStack_3c0._4_4_,uVar20);
    if (uStack_3c0._4_4_ < uVar20) {
      FUN_146b79992(&local_3c8,uVar16 & 0xffffffff);
    }
    local_3c8[lVar25 * 2] = (longlong)plVar24;
    local_3c8[lVar25 * 2 + 1] = (longlong)plVar4;
  }
  FUN_1446ddc76(&local_3d0,"Preview",1);
  local_3f0 = 0;
  local_3f8 = 0;
  lVar25 = FUN_1484c90fb(param_1,local_3d0,0,0);
  if ((lVar25 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar25);
  }
  param_1[0x27] = lVar25;
  uVar23 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar25,uVar23,param_1 + 0x24);
  FUN_14851b65c(*(undefined8 *)(param_1[0x27] + 0x58));
  uVar20 = 1;
  if (1 < (int)*(uint *)(param_1 + 0x57)) {
    uVar20 = *(uint *)(param_1 + 0x57);
  }
  plVar24 = (longlong *)0x0;
  uVar21 = (uint)(10000000 / (ulonglong)uVar20);
  uVar20 = 0x14;
  if (uVar21 < 0x14) {
    uVar20 = uVar21;
  }
  FUN_148505116(param_1[0x27],uVar20 + (uVar20 == 0));
  FUN_148558526(*(undefined8 *)(param_1[0x27] + 0x58),param_1[0x14]);
  local_2e8 = (code *)0x0;
  dStack_2e0 = 0.0;
  lVar25 = param_1[0x14];
  if (lVar25 != 0) {
    uVar23 = FUN_145b7126e();
    plVar24 = (longlong *)FUN_144718840(lVar25,uVar23);
  }
  (**(code **)(*plVar24 + 0x20))(plVar24,&local_2e8,0);
  lVar25 = param_1[0x27];
  uVar23 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar23 = FUN_1485578f6(uVar23);
  pcVar17 = local_2e8;
  local_3e0 = (void *)0x0;
  lVar30 = (longlong)dStack_2e0._0_4_;
  local_3d8 = dStack_2e0._0_4_;
  if (lVar30 == 0) {
    local_3d4 = 0;
  }
  else {
    FUN_1411312f2(&local_3e0,(ulonglong)dStack_2e0 & 0xffffffff,0);
    memcpy(local_3e0,pcVar17,lVar30 << 3);
  }
  FUN_1485053d2(lVar25,&local_3e0,uVar23,0);
  *(undefined4 *)(param_1[0x27] + 0xa8) = 0x3f400000;
  FUN_14851b91a(*(undefined8 *)(param_1[0x27] + 0x58),param_1 + 0x82);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x27] + 0x58),plVar29,1,0xf);
  FUN_1485054ca(param_1[0x27],1);
  (**(code **)(*param_1 + 0x3e0))(param_1);
  (**(code **)(*param_1 + 0x3f0))(param_1);
  if ((longlong)(int)uStack_3c0 != 0) {
    plVar29 = local_3c8 + (longlong)(int)uStack_3c0 * 2;
    plVar24 = local_3c8;
    do {
      lVar25 = *plVar24;
      if (*plVar24 != 0) {
        while( true ) {
          do {
            lVar30 = lVar25;
            lVar25 = 0;
          } while (lVar30 == 0);
          plVar4 = *(longlong **)(lVar30 + 0x70);
          cVar18 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
          if (cVar18 != '\0') break;
          lVar25 = *plVar24;
        }
      }
      plVar24 = plVar24 + 2;
    } while (plVar24 != plVar29);
  }
  (**(code **)(*param_1 + 0x408))(param_1);
  plVar24 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*param_1 + 0x3d0))(param_1,&local_3a8);
  (**(code **)(*plVar24 + 0x340))(plVar24,&local_3a8,2);
  if (local_3a8 != (longlong *)0x0) {
    (**(code **)(*local_3a8 + 0x10))();
  }
  if (local_2e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b79bb5(local_3c8,(ulonglong)uStack_3c0 & 0xffffffff);
  if (local_3c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c90fb FUN_1484c90fb body=217 status=ok
// SIG undefined FUN_1484c90fb(void)

undefined8
FUN_1484c90fb(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_141076552();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c91d6 FUN_1484c91d6 body=50 status=ok
// SIG undefined FUN_1484c91d6(void)

longlong * FUN_1484c91d6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 1484c9208 FUN_1484c9208 body=152 status=ok
// SIG undefined FUN_1484c9208(void)

undefined8 FUN_1484c9208(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"BaseMeshProcessingToolTransactionName";
  local_28 = 0x25;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UBaseMeshProcessingTool";
  local_28 = 0x17;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Update Mesh");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c92a2 FUN_1484c92a2 body=277 status=ok
// SIG undefined FUN_1484c92a2(void)

void FUN_1484c92a2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x130) * 0x90;
    lVar3 = *(longlong *)(param_1 + 0x128) + 0x84;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_14479d2ce(lVar3);
        FUN_140056680(local_48,&DAT_149dfb77a);
        (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_48);
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 0x90;
      lVar4 = lVar4 + -0x90;
    } while (lVar4 != 0);
  }
  cVar1 = FUN_144729dda(param_1 + 0x388);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x388);
    FUN_140056680(local_48,&DAT_149dfb77a);
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c93ce FUN_1484c93ce body=33 status=ok
// SIG undefined FUN_1484c93ce(void)

void FUN_1484c93ce(longlong param_1)

{
  FUN_1485051e4(*(undefined8 *)(param_1 + 0x138));
  *(undefined1 *)(param_1 + 0x140) = 0;
  return;
}



// FUNCTION 1484c9412 FUN_1484c9412 body=55 status=ok
// SIG undefined FUN_1484c9412(void)

undefined8 FUN_1484c9412(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x388))();
  if ((cVar1 != '\0') && ((char)param_1[0x28] == '\x01')) {
    uVar2 = FUN_1484c8368(param_1[0x27]);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1484c944a FUN_1484c944a body=826 status=ok
// SIG undefined FUN_1484c944a(void)

void FUN_1484c944a(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
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
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_168 [40];
  undefined1 local_140 [8];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(*param_1 + 0x308))();
  FUN_140056680(&local_138,&DAT_149dfb77a);
  (**(code **)(*param_2 + 0x2a8))(param_2,param_1,&local_138);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x328))(param_1,param_2,0);
  local_138 = 0;
  local_128 = 0;
  local_f8 = (undefined8 *)0x0;
  local_e8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  FUN_14485c47a(&uStack_b4,param_2);
  lVar3 = *param_3;
  lVar20 = param_3[1];
  lVar4 = param_3[2];
  lVar5 = param_3[3];
  lVar6 = param_3[4];
  lVar7 = param_3[5];
  lVar8 = param_3[6];
  lVar9 = param_3[7];
  param_3[6] = local_108;
  param_3[7] = lStack_100;
  param_3[4] = local_118;
  param_3[5] = lStack_110;
  param_3[2] = local_128;
  param_3[3] = lStack_120;
  *param_3 = local_138;
  param_3[1] = lStack_130;
  local_98 = local_e8;
  local_a8 = local_f8;
  uStack_a0 = (undefined4)uStack_f0;
  uStack_9c = uStack_f0._4_4_;
  lVar10 = *param_4;
  lVar11 = param_4[1];
  lVar12 = param_4[2];
  lVar13 = param_4[3];
  lVar14 = param_4[4];
  lVar15 = param_4[5];
  lVar16 = param_4[6];
  lVar17 = param_4[7];
  *(undefined4 *)(param_4 + 6) = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_4 + 0x34) = local_c8._4_4_;
  *(undefined4 *)(param_4 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_4 + 0x3c) = uStack_c0._4_4_;
  *(undefined4 *)(param_4 + 4) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_4 + 0x24) = local_d8._4_4_;
  *(undefined4 *)(param_4 + 5) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_d0._4_4_;
  *(undefined4 *)(param_4 + 2) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_4 + 0x14) = local_e8._4_4_;
  *(undefined4 *)(param_4 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_e0._4_4_;
  *(undefined4 *)param_4 = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_4 + 4) = local_f8._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_f0._4_4_;
  local_b8 = CONCAT31(local_b8._1_3_,param_5);
  iVar2 = (int)param_1[0x26];
  *(uint *)(param_1 + 0x26) = iVar2 + 1U;
  local_138 = lVar3;
  lStack_130 = lVar20;
  local_128 = lVar4;
  lStack_120 = lVar5;
  local_118 = lVar6;
  lStack_110 = lVar7;
  local_108 = lVar8;
  lStack_100 = lVar9;
  local_f8 = (undefined8 *)lVar10;
  uStack_f0 = lVar11;
  local_e8 = lVar12;
  uStack_e0 = lVar13;
  local_d8 = lVar14;
  uStack_d0 = lVar15;
  local_c8 = lVar16;
  uStack_c0 = lVar17;
  if (*(uint *)((longlong)param_1 + 0x134) < iVar2 + 1U) {
    FUN_1484d6f64(param_1 + 0x25,iVar2);
  }
  lVar3 = param_1[0x25];
  lVar20 = (longlong)iVar2 * 0x90;
  *(longlong *)(lVar3 + lVar20) = local_138;
  *(longlong *)(lVar3 + 0x10 + lVar20) = local_128;
  plVar21 = (longlong *)(lVar3 + 0x20 + lVar20);
  *plVar21 = local_118;
  plVar21[1] = lStack_110;
  plVar21 = (longlong *)(lVar3 + 0x30 + lVar20);
  *plVar21 = local_108;
  plVar21[1] = lStack_100;
  *(undefined8 **)(lVar3 + 0x40 + lVar20) = local_f8;
  *(longlong *)(lVar3 + 0x50 + lVar20) = local_e8;
  puVar1 = (undefined4 *)(lVar3 + 0x60 + lVar20);
  *puVar1 = (undefined4)local_d8;
  puVar1[1] = local_d8._4_4_;
  puVar1[2] = (undefined4)uStack_d0;
  puVar1[3] = uStack_d0._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x70 + lVar20);
  *puVar1 = (undefined4)local_c8;
  puVar1[1] = local_c8._4_4_;
  puVar1[2] = (undefined4)uStack_c0;
  puVar1[3] = uStack_c0._4_4_;
  *(ulonglong *)(lVar3 + 0x80 + lVar20) = CONCAT44(uStack_b4,local_b8);
  *(undefined4 *)(lVar3 + 0x88 + lVar20) = uStack_b0;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar18 = local_a8;
  _uStack_a0 = CONCAT44(uStack_9c,3);
  *local_a8 = &PTR_LAB_14aedba20;
  uVar19 = FUN_144a3f946();
  puVar18[2] = uVar19;
  *puVar18 = &PTR_FUN_14aefea00;
  *(int *)(puVar18 + 3) = iVar2;
  puVar18[4] = param_1;
  FUN_14844f9a0(param_2 + 0x12,local_140,&local_a8);
  FUN_1449db362(&local_a8);
  if (*param_3 != 0) {
    plVar21 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar21 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if (*param_4 != 0) {
    plVar21 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar21 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9786 FUN_1484c9786 body=97 status=ok
// SIG undefined FUN_1484c9786(void)

void FUN_1484c9786(longlong *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = param_1[0x25] + (longlong)param_2 * 0x90;
  pcVar2 = *(code **)(lVar1 + 0x40);
  plVar4 = *(longlong **)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
    plVar4 = (longlong *)(lVar1 + 0x60);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001484c97d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x408))(param_1);
    return;
  }
  return;
}



// FUNCTION 1484c97e8 FUN_1484c97e8 body=246 status=ok
// SIG undefined FUN_1484c97e8(void)

void FUN_1484c97e8(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[0x26] != 0) {
    lVar7 = (longlong)(int)param_1[0x26] * 0x90;
    lVar6 = param_1[0x25] + 0x84;
    do {
      cVar2 = FUN_144729dda(lVar6);
      if (cVar2 != '\0') {
        pcVar1 = *(code **)(lVar6 + -0x84);
        plVar5 = (longlong *)(lVar6 + -100);
        if (*(longlong **)(lVar6 + -0x74) != (longlong *)0x0) {
          plVar5 = *(longlong **)(lVar6 + -0x74);
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        uVar3 = (*pcVar1)(uVar4);
        uVar4 = FUN_14479d2ce(lVar6);
        (**(code **)(*param_1 + 0x328))(param_1,uVar4,uVar3);
      }
      lVar6 = lVar6 + 0x90;
      lVar7 = lVar7 + -0x90;
    } while (lVar7 != 0);
  }
  cVar2 = FUN_144729dda(param_1 + 0x71);
  if (cVar2 != '\0') {
    pcVar1 = (code *)param_1[0x72];
    plVar5 = param_1 + 0x76;
    if ((longlong *)param_1[0x74] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x74];
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar1)(uVar4);
    uVar4 = FUN_14479d2ce(param_1 + 0x71);
                    /* WARNING: Could not recover jumptable at 0x0001484c98d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))(param_1,uVar4,uVar3,*(code **)(*param_1 + 0x328));
    return;
  }
  return;
}



// FUNCTION 1484c98de FUN_1484c98de body=8 status=ok
// SIG undefined FUN_1484c98de(void)

longlong FUN_1484c98de(longlong param_1)

{
  return param_1 + 0x368;
}



// FUNCTION 1484c98e6 FUN_1484c98e6 body=8 status=ok
// SIG undefined FUN_1484c98e6(void)

longlong FUN_1484c98e6(longlong param_1)

{
  return param_1 + 0x378;
}



// FUNCTION 1484c98ee FUN_1484c98ee body=312 status=ok
// SIG undefined FUN_1484c98ee(void)

void FUN_1484c98ee(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x308))();
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*param_2 + 0x2a8))(param_2,param_1,&local_b8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_14485c47a(param_1 + 0x71,param_2);
  local_b0 = 0;
  local_b8 = 0x3e800000000;
  uVar1 = FUN_14850658d(param_1[0x14]);
  FUN_14851df1c(param_2,uVar1);
  local_58 = 0;
  local_48 = &PTR_LAB_14aefead0;
  local_68 = &LAB_143b7f618;
  local_40 = param_1;
  FUN_1484c9a28(param_2 + 5,param_2 + 0x15);
  local_98 = 0;
  local_88 = &PTR_LAB_14aefeaf0;
  local_a8 = &LAB_143b7f66a;
  local_80 = param_1;
  FUN_1484c9b00(param_2 + 5,param_2 + 0x18);
  FUN_1484c9bd8(param_1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9a28 FUN_1484c9a28 body=215 status=ok
// SIG undefined FUN_1484c9a28(void)

int FUN_1484c9a28(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1484d6ff8(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9b00 FUN_1484c9b00 body=215 status=ok
// SIG undefined FUN_1484c9b00(void)

int FUN_1484c9b00(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1484d7364(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9bd8 FUN_1484c9bd8 body=474 status=ok
// SIG undefined FUN_1484c9bd8(void)

void FUN_1484c9bd8(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14aefeb10;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x71);
  uVar3 = *(undefined8 *)(lVar7 + 0xa8);
  local_58 = 0;
  local_60 = 0x3e800000000;
  uVar8 = FUN_14850658d(param_1[0x14]);
  cVar5 = FUN_14855bd44(uVar8,uVar3,plVar6 + 2,0x3f800000);
  lVar7 = FUN_14479d2ce();
  if (cVar5 == '\0') {
    FUN_14851dfec(lVar7,0xffffffff);
  }
  else if ((*(char *)(lVar7 + 0xc0) == '\x01') && (lVar7 = plVar6[4], 0 < (longlong)(int)lVar7)) {
    lVar9 = 0;
    do {
      fVar10 = 1.0 - *(float *)(plVar6[3] + lVar9 * 4);
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      *(uint *)(plVar6[3] + lVar9 * 4) = ~-(uint)(fVar10 < 0.0) & (uint)fVar11;
      lVar9 = lVar9 + 1;
    } while ((int)lVar7 != lVar9);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x7b];
  param_1[0x7a] = (longlong)(plVar6 + 2);
  param_1[0x7b] = (longlong)plVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x408))(param_1);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484c9db4 FUN_1484c9db4 body=56 status=ok
// SIG undefined FUN_1484c9db4(void)

undefined8 FUN_1484c9db4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x388);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x388);
    uVar2 = FUN_14851df80(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1484c9dec FUN_1484c9dec body=8 status=ok
// SIG undefined FUN_1484c9dec(void)

longlong FUN_1484c9dec(longlong param_1)

{
  return param_1 + 0x3d0;
}



// FUNCTION 1484c9df8 FUN_1484c9df8 body=162 status=ok
// SIG undefined FUN_1484c9df8(void)

void FUN_1484c9df8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1484c9e9d();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x21] = (longlong)plVar1;
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9e9d FUN_1484c9e9d body=148 status=ok
// SIG undefined FUN_1484c9e9d(void)

undefined8 FUN_1484c9e9d(undefined8 param_1)

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
  uVar1 = FUN_1459ee904();
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



// FUNCTION 1484c9f32 FUN_1484c9f32 body=113 status=ok
// SIG undefined FUN_1484c9f32(void)

void FUN_1484c9f32(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x108);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c9fa6 FUN_1484c9fa6 body=96 status=ok
// SIG undefined FUN_1484c9fa6(void)

undefined8 FUN_1484c9fa6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x118)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      cVar2 = FUN_146c047ec(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + lVar4));
      if ((cVar2 == '\0') &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + lVar4), 0 < *(int *)(lVar1 + 0x170)
         )) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x118));
  }
  return 0;
}



// FUNCTION 1484ca006 FUN_1484ca006 body=112 status=ok
// SIG undefined FUN_1484ca006(void)

longlong * FUN_1484ca006(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = FUN_140a1dfd8();
  uVar2 = FUN_1412ecd05(uVar2,0,L"MATERIAL",0,0,0,1,0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return param_2;
}



// FUNCTION 1484ca076 FUN_1484ca076 body=558 status=ok
// SIG undefined FUN_1484ca076(void)

void FUN_1484ca076(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined1 local_268 [544];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  plVar1 = param_1 + 0x22;
  FUN_1484ca2a6(plVar1,(int)param_1[0x15],1);
  if (0 < (int)param_1[0x15]) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149fab260;
      local_288 = 0;
      FUN_1411b354a(plVar5 + 2,0,0,0);
      if (plVar5 == (longlong *)0x0) {
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + lVar10) = 0x10;
        plVar9 = *(longlong **)(lVar4 + 8 + lVar10);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(lVar4 + 8 + lVar10) = 0;
LAB_1484ca142:
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          if (plVar5 != (longlong *)0x0) goto LAB_1484ca16a;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        lVar4 = *plVar1;
        *(longlong **)(lVar4 + lVar10) = plVar5 + 2;
        plVar9 = *(longlong **)(lVar4 + 8 + lVar10);
        if (plVar5 == plVar9) {
          LOCK();
          plVar9 = plVar5 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        else {
          *(longlong **)(lVar4 + 8 + lVar10) = plVar5;
          if (plVar9 != (longlong *)0x0) goto LAB_1484ca142;
        }
LAB_1484ca16a:
        LOCK();
        plVar9 = plVar5 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_270 = 0;
      local_278 = 0x3e800000000;
      FUN_148506727(local_268,*(undefined8 *)(param_1[0x14] + lVar8 * 8));
      FUN_146c00942(*(undefined8 *)(param_1[0x22] + lVar10),local_268);
      FUN_141082778(local_268);
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 < (int)param_1[0x15]);
  }
  lVar8 = param_1[0x1c];
  uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar6 = FUN_1485578f6(uVar6);
  uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar7 = FUN_148557b44(uVar7);
  FUN_1485052fe(lVar8,uVar7,uVar6);
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ca2a6 FUN_1484ca2a6 body=143 status=ok
// SIG undefined FUN_1484ca2a6(void)

void FUN_1484ca2a6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484d76ae(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1484d7734(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1484d7794(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484ca33a FUN_1484ca33a body=349 status=ok
// SIG undefined FUN_1484ca33a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484ca33a(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c750) {
    FUN_144b3d300(&DAT_14cb4c750);
    if (DAT_14cb4c750 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74cee();
      uVar3 = FUN_145b74c04();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c740 = (undefined *)0x0;
      _DAT_14cb4c74c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c748 = local_48;
      FUN_1484d23fc(&DAT_14cb4c718,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c718;
        if (DAT_14cb4c740 != (undefined *)0x0) {
          _Dst = DAT_14cb4c740;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78e92);
      _Init_thread_footer(&DAT_14cb4c750);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ca4aa FUN_1484ca4aa body=349 status=ok
// SIG undefined FUN_1484ca4aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484ca4aa(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c7c0) {
    FUN_144b3d300(&DAT_14cb4c7c0);
    if (DAT_14cb4c7c0 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74c04();
      uVar3 = FUN_145b74cee();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c7b0 = (undefined *)0x0;
      _DAT_14cb4c7bc = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c7b8 = local_48;
      FUN_1484d23fc(&DAT_14cb4c788,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c788;
        if (DAT_14cb4c7b0 != (undefined *)0x0) {
          _Dst = DAT_14cb4c7b0;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78ea3);
      _Init_thread_footer(&DAT_14cb4c7c0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ca608 FUN_1484ca608 body=53 status=ok
// SIG undefined FUN_1484ca608(void)

bool FUN_1484ca608(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return 0 < iVar2;
}



// FUNCTION 1484ca63e FUN_1484ca63e body=54 status=ok
// SIG undefined FUN_1484ca63e(void)

undefined8 FUN_1484ca63e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1484ca674 FUN_1484ca674 body=215 status=ok
// SIG undefined FUN_1484ca674(void)

void FUN_1484ca674(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_3[2];
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_40,param_3,uVar3);
  lVar2 = local_40;
  local_50 = 0;
  local_48 = local_38;
  if (local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1484d7836(&local_50,local_38,0);
    FUN_1484d7898(local_50,lVar2,local_38);
  }
  FUN_1484ca74c(param_2,&local_50);
  (**(code **)(*param_2 + 0x388))(param_2,*param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ca74c FUN_1484ca74c body=105 status=ok
// SIG undefined FUN_1484ca74c(void)

void FUN_1484ca74c(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 0xa0) != param_2) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xa0) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0xa8) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484ca7b6 FUN_1484ca7b6 body=34 status=ok
// SIG undefined FUN_1484ca7b6(void)

void FUN_1484ca7b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x380))();
  param_1[0x16] = 0;
  return;
}



// FUNCTION 1484ca7f2 FUN_1484ca7f2 body=330 status=ok
// SIG undefined FUN_1484ca7f2(void)

undefined8 FUN_1484ca7f2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_144a127d2(param_2,*(undefined4 *)(param_1 + 0xa8),1);
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(*param_2 + lVar7 * 4) = 0xffffffff;
      lVar7 = lVar7 + 1;
      uVar1 = (ulonglong)*(int *)(param_1 + 0xa8);
    } while (lVar7 < (longlong)uVar1);
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar7 = 1;
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (*(int *)(*param_2 + lVar10 * 4) < 0) {
          *(int *)(*param_2 + lVar10 * 4) = (int)lVar10;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar10 * 8);
          if (lVar9 == 0) {
            uVar1 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          else {
            uVar2 = FUN_1459edb30();
            plVar3 = (longlong *)FUN_144718840(lVar9,uVar2);
            uVar1 = (ulonglong)*(uint *)(param_1 + 0xa8);
            lVar9 = lVar7;
            if (lVar10 + 1 < (longlong)(int)*(uint *)(param_1 + 0xa8) && plVar3 != (longlong *)0x0)
            {
              do {
                lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar9 * 8);
                if (lVar5 != 0) {
                  uVar2 = FUN_1459edb30();
                  plVar4 = (longlong *)FUN_144718840(lVar5,uVar2);
                  if (plVar4 != (longlong *)0x0) {
                    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
                    lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
                    if (lVar5 == lVar6) {
                      *(int *)(*param_2 + lVar9 * 4) = (int)lVar10;
                      uVar8 = 1;
                    }
                  }
                }
                lVar9 = lVar9 + 1;
                uVar1 = (ulonglong)*(uint *)(param_1 + 0xa8);
              } while ((int)lVar9 < (int)*(uint *)(param_1 + 0xa8));
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar10 < (int)uVar1);
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 1484ca944 FUN_1484ca944 body=349 status=ok
// SIG undefined FUN_1484ca944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484ca944(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c830) {
    FUN_144b3d300(&DAT_14cb4c830);
    if (DAT_14cb4c830 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71358();
      uVar3 = FUN_145b71442();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c820 = (undefined *)0x0;
      _DAT_14cb4c82c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c828 = local_48;
      FUN_1484d23fc(&DAT_14cb4c7f8,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c7f8;
        if (DAT_14cb4c820 != (undefined *)0x0) {
          _Dst = DAT_14cb4c820;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78eb4);
      _Init_thread_footer(&DAT_14cb4c830);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c7f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484caaa2 FUN_1484caaa2 body=90 status=ok
// SIG undefined FUN_1484caaa2(void)

bool FUN_1484caaa2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x2d8))();
  if ((cVar2 != '\0') && (cVar2 = FUN_148550408(param_2), cVar2 == '\0')) {
    return false;
  }
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar4);
  return 0 < iVar3;
}



// FUNCTION 1484caafc FUN_1484caafc body=54 status=ok
// SIG undefined FUN_1484caafc(void)

undefined8 FUN_1484caafc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1484cab32 FUN_1484cab32 body=356 status=ok
// SIG undefined FUN_1484cab32(void)

void FUN_1484cab32(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  longlong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_3[2];
  uVar4 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_48,param_3,uVar4);
  uVar2 = local_40;
  uVar5 = (ulonglong)local_40;
  (**(code **)(*param_2 + 0x3c0))(param_2,uVar5);
  lVar7 = local_48;
  local_58 = 0;
  local_50 = local_40;
  if (local_40 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1484d7836(&local_58,local_40,0);
    FUN_1484d7898(local_58,lVar7,local_40);
  }
  FUN_1484ca74c(param_2,&local_58);
  (**(code **)(*param_2 + 0x388))(param_2,*param_3);
  local_68 = 0;
  uStack_60 = 0;
  FUN_1484cac98(&local_68,uVar2);
  if (0 < (int)uVar2) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      cVar3 = FUN_1485504c8(param_3,*(undefined8 *)(local_48 + uVar6 * 8),local_68 + lVar7);
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x398))(param_2,local_68 + lVar7,uVar6 & 0xffffffff);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x58;
    } while (uVar5 != uVar6);
  }
  FUN_1458dc1c8(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cac98 FUN_1484cac98 body=118 status=ok
// SIG undefined FUN_1484cac98(void)

void FUN_1484cac98(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484d792c(param_1,iVar1);
    }
    FUN_1484d78e6((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1484d79bc(param_1,param_2,iVar1 - param_2);
    FUN_1484d7a16(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484cad2c FUN_1484cad2c body=47 status=ok
// SIG undefined FUN_1484cad2c(void)

void FUN_1484cad2c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x380))();
  param_1[0x16] = 0;
  FUN_148445e6c(param_1,param_2);
  return;
}



// FUNCTION 1484cad5c FUN_1484cad5c body=135 status=ok
// SIG undefined FUN_1484cad5c(void)

void FUN_1484cad5c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1484e0e5e();
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(local_30,&DAT_149dfb77a);
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cadfc FUN_1484cadfc body=73 status=ok
// SIG undefined FUN_1484cadfc(void)

void FUN_1484cadfc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  FUN_1484cac98(param_1 + 0xb8);
  FUN_1448c4dd6((longlong *)(param_1 + 200),param_2,1);
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 200) + uVar1) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}



// FUNCTION 1484cae46 FUN_1484cae46 body=64 status=ok
// SIG undefined FUN_1484cae46(void)

void FUN_1484cae46(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((longlong)param_3 * 0x58 + *(longlong *)(param_1 + 0xb8));
  *puVar1 = *param_2;
  FUN_147371fc4(puVar1 + 1,param_2 + 1);
  *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_3) = 1;
  return;
}



// FUNCTION 1484cae86 FUN_1484cae86 body=64 status=ok
// SIG undefined FUN_1484cae86(void)

void FUN_1484cae86(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((longlong)param_3 * 0x58 + *(longlong *)(param_1 + 0xb8));
  *puVar1 = *param_2;
  FUN_1484d24e8(puVar1 + 1,param_2 + 1);
  *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_3) = 1;
  return;
}



// FUNCTION 1484caf18 FUN_1484caf18 body=349 status=ok
// SIG undefined FUN_1484caf18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484caf18(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c8a0) {
    FUN_144b3d300(&DAT_14cb4c8a0);
    if (DAT_14cb4c8a0 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74c04();
      uVar3 = FUN_145b74cee();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c890 = (undefined *)0x0;
      _DAT_14cb4c89c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c898 = local_48;
      FUN_1484d23fc(&DAT_14cb4c868,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c868;
        if (DAT_14cb4c890 != (undefined *)0x0) {
          _Dst = DAT_14cb4c890;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78ec5);
      _Init_thread_footer(&DAT_14cb4c8a0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c868;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cb076 FUN_1484cb076 body=54 status=ok
// SIG undefined FUN_1484cb076(void)

bool FUN_1484cb076(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 == 1;
}



// FUNCTION 1484cb0ac FUN_1484cb0ac body=54 status=ok
// SIG undefined FUN_1484cb0ac(void)

undefined8 FUN_1484cb0ac(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1484cb0e2 FUN_1484cb0e2 body=87 status=ok
// SIG undefined FUN_1484cb0e2(void)

void FUN_1484cb0e2(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_3[2];
  uVar2 = (**(code **)(*param_1 + 0x2c0))();
  uVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_3,uVar2);
  (**(code **)(*param_2 + 0x378))(param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001484cb136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x398))(param_2,*param_3);
  return;
}



// FUNCTION 1484cb13a FUN_1484cb13a body=34 status=ok
// SIG undefined FUN_1484cb13a(void)

void FUN_1484cb13a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x390))();
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1484cb17e FUN_1484cb17e body=349 status=ok
// SIG undefined FUN_1484cb17e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1484cb17e(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c910) {
    FUN_144b3d300(&DAT_14cb4c910);
    if (DAT_14cb4c910 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74c04();
      uVar3 = FUN_145b74cee();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cb4c900 = (undefined *)0x0;
      _DAT_14cb4c90c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cb4c908 = local_48;
      FUN_1484d23fc(&DAT_14cb4c8d8,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cb4c8d8;
        if (DAT_14cb4c900 != (undefined *)0x0) {
          _Dst = DAT_14cb4c900;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b78ed6);
      _Init_thread_footer(&DAT_14cb4c910);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cb4c8d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cb2dc FUN_1484cb2dc body=91 status=ok
// SIG undefined FUN_1484cb2dc(void)

bool FUN_1484cb2dc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x2d8))();
  if ((cVar2 != '\0') && (cVar2 = FUN_148550408(param_2), cVar2 == '\0')) {
    return false;
  }
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar4);
  return iVar3 == 1;
}



// FUNCTION 1484cb338 FUN_1484cb338 body=54 status=ok
// SIG undefined FUN_1484cb338(void)

undefined8 FUN_1484cb338(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1484cb36e FUN_1484cb36e body=257 status=ok
// SIG undefined FUN_1484cb36e(void)

void FUN_1484cb36e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)param_3[2];
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_3,uVar3);
  (**(code **)(*param_2 + 0x378))(param_2,uVar3);
  (**(code **)(*param_2 + 0x398))(param_2,*param_3);
  local_78 = &DAT_100000004;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  cVar2 = FUN_1485504c8(param_3,uVar3);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x3a8))(param_2,&local_78);
  }
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cb470 FUN_1484cb470 body=28 status=ok
// SIG undefined FUN_1484cb470(void)

void FUN_1484cb470(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14852c593(*(longlong *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x110));
    return;
  }
  return;
}



// FUNCTION 1484cb48c FUN_1484cb48c body=47 status=ok
// SIG undefined FUN_1484cb48c(void)

void FUN_1484cb48c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x390))();
  param_1[0x15] = 0;
  FUN_148445e6c(param_1,param_2);
  return;
}



// FUNCTION 1484cb4bc FUN_1484cb4bc body=135 status=ok
// SIG undefined FUN_1484cb4bc(void)

void FUN_1484cb4bc(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1484e0e5e();
  }
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(local_30,&DAT_149dfb77a);
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cb55c FUN_1484cb55c body=47 status=ok
// SIG undefined FUN_1484cb55c(void)

void FUN_1484cb55c(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = *param_2;
  FUN_147371fc4(param_1 + 0xb8,param_2 + 1);
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}



// FUNCTION 1484cb58c FUN_1484cb58c body=47 status=ok
// SIG undefined FUN_1484cb58c(void)

void FUN_1484cb58c(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = *param_2;
  FUN_1484d24e8(param_1 + 0xb8,param_2 + 1);
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}



// FUNCTION 1484cb5d0 FUN_1484cb5d0 body=103 status=ok
// SIG undefined FUN_1484cb5d0(void)

void FUN_1484cb5d0(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)(param_3 ^ 1) * 0x10;
  uVar3 = *(undefined8 *)(param_2 + 8 + lVar5);
  lVar5 = *(longlong *)(param_2 + 0x10 + lVar5);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x18);
  return;
}



// FUNCTION 1484cb638 FUN_1484cb638 body=222 status=ok
// SIG undefined FUN_1484cb638(void)

undefined8 * FUN_1484cb638(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_14001cc68(0x70,0x10);
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_48 = *(undefined8 *)(param_1 + 0x30);
  local_40 = *(longlong *)(param_1 + 0x38);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1484acf8c(uVar5,&local_48,&local_38);
  *param_2 = uVar5;
  uVar5 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cb718 FUN_1484cb718 body=415 status=ok
// SIG undefined FUN_1484cb718(void)

void FUN_1484cb718(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (iVar6 < 0) {
    if ((0 < (int)uVar1 & *(byte *)(param_2 + 0x1a8)) == 1) {
      uVar5 = 0;
      do {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4);
        if ((-1 < (int)uVar2) &&
           ((int)uVar2 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                                  (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (*(char *)(param_2 + 0x1a8) == '\x01')) {
            iVar6 = *(int *)(*(longlong *)(param_1 + ((ulonglong)(param_3 ^ 1) << 4 | 0x20)) +
                            uVar5 * 4);
            *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4) = iVar6;
            iVar6 = iVar6 + 1;
            if (iVar6 <= *(int *)(param_2 + 0x1b0)) {
              iVar6 = *(int *)(param_2 + 0x1b0);
            }
            *(int *)(param_2 + 0x1b0) = iVar6;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  else if (((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
           (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), iVar6 <= iVar3)) &&
          (lVar4 = FUN_146c1a3fe(*(undefined8 *)(param_2 + 0x208),*(undefined4 *)(param_1 + 8)),
          0 < (int)uVar1 && lVar4 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4);
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
           (ulonglong)(uVar2 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + ((ulonglong)(param_3 ^ 1) << 4 | 0x20)) + uVar5 * 4);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}



// FUNCTION 1484cb8b8 FUN_1484cb8b8 body=201 status=ok
// SIG undefined FUN_1484cb8b8(void)

undefined8 * FUN_1484cb8b8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = &LAB_1484d7abc;
  puVar4[1] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(puVar4 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
  *(undefined4 *)(puVar4 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
  puVar4[4] = *(undefined8 *)(param_2 + 4);
  *param_1 = puVar4 + 2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14aefeb28;
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  param_1[1] = puVar5;
  if (*(int *)(puVar4 + 4) != -1) {
    *(int *)(puVar5 + 1) = *(int *)(puVar4 + 4);
  }
  return param_1;
}



// FUNCTION 1484cb982 FUN_1484cb982 body=462 status=ok
// SIG undefined FUN_1484cb982(void)

void FUN_1484cb982(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint local_44;
  uint *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = ((undefined8 *)*param_1)[1];
  local_44 = param_2;
  if (lVar2 == 0) {
    uVar3 = FUN_146bc96d4(*(undefined8 *)*param_1,param_2);
  }
  else {
    uVar3 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)(param_2 & 0x1ff) * 4);
  }
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar4 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[10];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = param_1[2];
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            lVar2 = ((undefined8 *)*param_1)[1];
            if (lVar2 == 0) {
              uVar3 = FUN_146bc96d4(*(undefined8 *)*param_1,param_2);
            }
            else {
              uVar3 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(param_2 >> 9) * 8) +
                       (ulonglong)(param_2 & 0x1ff) * 4);
            }
            *(undefined4 *)(*(longlong *)(param_1[1] + 0x30) + (longlong)*(int *)(lVar1 + 4) * 4) =
                 uVar3;
            goto LAB_1484cba83;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  local_48 = *(undefined4 *)(param_1[1] + 0x18);
  local_38 = &local_48;
  local_40 = &local_44;
  FUN_140263e2a(param_1 + 2,local_2c,&local_40,0);
  lVar2 = param_1[1];
  iVar5 = *(int *)(lVar2 + 0x18);
  *(uint *)(lVar2 + 0x18) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar5 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x10),iVar5);
  }
  *(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar5 * 4) = local_44;
  lVar2 = param_1[1];
  iVar5 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar5 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x20),iVar5);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 4) = uVar3;
  lVar2 = param_1[1];
  iVar5 = *(int *)(lVar2 + 0x38);
  *(uint *)(lVar2 + 0x38) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0x3c) < iVar5 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x30),iVar5);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 4) = uVar3;
LAB_1484cba83:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484cbb52 FUN_1484cbb52 body=377 status=ok
// SIG undefined FUN_1484cbb52(void)

void FUN_1484cbb52(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x10;
        if (*(uint *)(lVar3 + (longlong)iVar2 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) + (longlong)*(int *)(lVar1 + 4) * 4)
                 = param_4;
            goto LAB_1484cbc34;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_50 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a((longlong *)(param_1 + 0x10),local_34,&local_48,0);
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = local_4c;
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x20),iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar2 * 4) = param_3;
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0x38);
  *(uint *)(lVar3 + 0x38) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x3c) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x30),iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 4) = param_4;
LAB_1484cbc34:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484cbccc FUN_1484cbccc body=67 status=ok
// SIG undefined FUN_1484cbccc(void)

undefined8 * FUN_1484cbccc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1484acd3a();
  *param_1 = &PTR_LAB_14aefa830;
  param_1[10] = 0;
  if (param_1 + 10 != param_2) {
    param_1[10] = *param_2;
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 1484cbd5e FUN_1484cbd5e body=32 status=ok
// SIG undefined FUN_1484cbd5e(void)

undefined8 FUN_1484cbd5e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Mesh Selection Change");
  return param_2;
}



// FUNCTION 1484cbd7e FUN_1484cbd7e body=78 status=ok
// SIG undefined FUN_1484cbd7e(void)

undefined8 * FUN_1484cbd7e(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_LAB_14aefeb40;
  *param_1 = puVar1;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined1 *)(puVar1 + 4) = param_3;
  return param_1;
}



// FUNCTION 1484cbdcc FUN_1484cbdcc body=55 status=ok
// SIG undefined FUN_1484cbdcc(void)

void FUN_1484cbdcc(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x18);
  *(uint *)(lVar2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x10),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 1484cbe04 FUN_1484cbe04 body=102 status=ok
// SIG undefined FUN_1484cbe04(void)

void FUN_1484cbe04(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x18);
    *(uint *)(lVar3 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(lVar3 + 0x1c) - iVar2) < uVar1) {
      FUN_1446f48e2((longlong *)(lVar3 + 0x10),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(lVar3 + 0x10)),(void *)*param_2,
           (longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 1484cbe6a FUN_1484cbe6a body=300 status=ok
// SIG undefined FUN_1484cbe6a(void)

void FUN_1484cbe6a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
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
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (uStack_60 != plVar1)) {
    do {
      uVar2 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0xc);
      lVar4 = *param_1;
      iVar3 = *(int *)(lVar4 + 0x18);
      *(uint *)(lVar4 + 0x18) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0x1c) < iVar3 + 1U) {
        FUN_1446f48e2((longlong *)(lVar4 + 0x10),iVar3);
      }
      *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar3 * 4) = uVar2;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cbf98 FUN_1484cbf98 body=156 status=ok
// SIG undefined FUN_1484cbf98(void)

void FUN_1484cbf98(undefined8 param_1,longlong param_2)

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
  FUN_1484cc036(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cc036 FUN_1484cc036 body=625 status=ok
// SIG undefined FUN_1484cc036(void)

void FUN_1484cc036(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if (param_1[0xe2] != 0) {
      if (param_1[0xe3] != 0) {
        FUN_14480f766(param_1[0xe2] + 0x58);
      }
      if (param_1[0xe4] != 0) {
        FUN_14480f766(param_1[0xe2] + 0x40);
      }
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(param_2);
    }
    param_1[0xe2] = param_2;
    local_48 = FUN_1484cc2ac;
    local_40 = 0;
    FUN_146028604(param_2 + 0x58,&local_38,param_1,&local_48);
    param_1[0xe3] = local_38;
    local_48 = FUN_1484cc346;
    local_40 = 0;
    FUN_146028604(param_1[0xe2] + 0x40,&local_38,param_1,&local_48);
    param_1[0xe4] = local_38;
    _Dst = (void *)FUN_14001cc68(0x208);
    memset(_Dst,0,0x208);
    FUN_1458481c0(_Dst);
    *(undefined8 *)((longlong)_Dst + 0x1d8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1e0) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1e8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1f0) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1f8) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x200) = 0xffefffffffffffff;
    lVar1 = param_1[0xe5];
    param_1[0xe5] = (longlong)_Dst;
    if (lVar1 != 0) {
      FUN_145820e5c(lVar1);
      FUN_1400020a8(lVar1);
      _Dst = (void *)param_1[0xe5];
    }
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    FUN_1460286e0(_Dst,uVar2);
    puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    lVar1 = param_1[0xe6];
    param_1[0xe6] = (longlong)puVar3;
    if (lVar1 != 0) {
      FUN_145c7bc0a(lVar1);
      FUN_1400020a8(lVar1);
    }
    if (*(int *)((longlong)param_1 + 0x7bc) < 0) {
      *(undefined4 *)(param_1 + 0xf7) = 0;
      FUN_1484d7e58(param_1 + 0xf6);
    }
    else {
      *(undefined4 *)(param_1 + 0xf7) = 0;
    }
    (**(code **)(*param_1 + 0xaa0))(param_1);
    FUN_1447f69b6(param_1 + 0xd7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cc2ac FUN_1484cc2ac body=152 status=ok
// SIG undefined FUN_1484cc2ac(void)

void FUN_1484cc2ac(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_3 == '\x01') && (*(longlong *)(param_3 + 8) != 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_146c2ceac(*(undefined8 *)(*(longlong *)(param_3 + 8) + 8),local_28,param_3[2]);
    FUN_1484ce06a(param_1[0xe5],local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0xaa0))(param_1);
  FUN_1447f69b6(param_1 + 0xd7);
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cc346 FUN_1484cc346 body=213 status=ok
// SIG undefined FUN_1484cc346(void)

void FUN_1484cc346(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  if (*param_3 == '\x01') {
    if (*(longlong *)(param_3 + 8) != 0) {
      FUN_146c2ceac(*(undefined8 *)(*(longlong *)(param_3 + 8) + 8),&local_28,param_3[2] ^ 1);
      if (0 < (int)uStack_20) {
        lVar1 = *(longlong *)(param_1 + 0x728);
        *(undefined8 *)(lVar1 + 0x1d8) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar1 + 0x1e0) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar1 + 0x1e8) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar1 + 0x1f0) = 0xffefffffffffffff;
        *(undefined8 *)(lVar1 + 0x1f8) = 0xffefffffffffffff;
        *(undefined8 *)(lVar1 + 0x200) = 0xffefffffffffffff;
        FUN_1484cdf0a(*(undefined8 *)(param_1 + 0x728),&local_28);
      }
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cc41c FUN_1484cc41c body=652 status=ok
// SIG undefined FUN_1484cc41c(void)

void FUN_1484cc41c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  double *_Dst;
  undefined8 *puVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [48];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1484b1fb6(param_1[0xe2]);
  uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
  FUN_145c688c4(uVar2,&local_60,1);
  _Dst = (double *)FUN_14001cc68(0x208);
  memset(_Dst,0,0x208);
  FUN_1458481c0(_Dst);
  _Dst[0x3b] = 1.79769313486232e+308;
  _Dst[0x3c] = 1.79769313486232e+308;
  _Dst[0x3d] = 1.79769313486232e+308;
  _Dst[0x3e] = -1.79769313486232e+308;
  _Dst[0x3f] = -1.79769313486232e+308;
  _Dst[0x40] = -1.79769313486232e+308;
  lVar1 = param_1[0xe5];
  param_1[0xe5] = (longlong)_Dst;
  if (lVar1 != 0) {
    FUN_145820e5c(lVar1);
    FUN_1400020a8(lVar1);
    _Dst = (double *)param_1[0xe5];
  }
  dVar5 = (double)(-(ulonglong)(0.0 <= local_38 - local_50) & (ulonglong)(local_38 - local_50));
  dVar6 = (double)(-(ulonglong)(0.0 <= local_40 - local_58) & (ulonglong)(local_40 - local_58));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar5 = (double)(~uVar4 & (ulonglong)dVar5 | uVar4 & (ulonglong)dVar6);
  dVar6 = (double)(-(ulonglong)(0.0 <= local_48 - local_60) & (ulonglong)(local_48 - local_60));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  *_Dst = (double)(uVar4 & (ulonglong)dVar6 | ~uVar4 & (ulonglong)dVar5) * 0.25;
  lVar1 = param_1[0xe5];
  uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
  FUN_1460286e0(lVar1,uVar2);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_146c89590(param_1[0xe5]);
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  lVar1 = param_1[0xe6];
  param_1[0xe6] = (longlong)puVar3;
  if (lVar1 != 0) {
    FUN_145c7bc0a(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(int *)((longlong)param_1 + 0x7bc) < 0) {
    *(undefined4 *)(param_1 + 0xf7) = 0;
    FUN_1484d7e58(param_1 + 0xf6);
  }
  else {
    *(undefined4 *)(param_1 + 0xf7) = 0;
  }
  (**(code **)(*param_1 + 0xaa0))(param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cc6aa FUN_1484cc6aa body=906 status=ok
// SIG undefined FUN_1484cc6aa(void)

void FUN_1484cc6aa(longlong *param_1,double *param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double *_Dst;
  undefined8 *puVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a8 [40];
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == '\0') {
    local_80 = *param_2;
    dStack_78 = param_2[1];
    local_70 = param_2[2];
    dStack_68 = param_2[3];
    local_60 = param_2[4];
    dStack_58 = param_2[5];
    local_50 = param_2[6];
    local_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_40 = *(undefined4 *)(param_2 + 9);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_38 = param_2[10];
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    FUN_146c3cd49(uVar2,&local_80,1);
  }
  else {
    local_80 = *param_2;
    dStack_78 = param_2[1];
    local_70 = param_2[2];
    dStack_68 = param_2[3];
    local_60 = param_2[4];
    dStack_58 = param_2[5];
    local_50 = param_2[6];
    local_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_40 = *(undefined4 *)(param_2 + 9);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_38 = param_2[10];
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    FUN_146c3cfa5(uVar2,&local_80,1);
  }
  if (param_1[0xb5] == 0) {
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    FUN_145c688c4(uVar2,&local_80,1);
    _Dst = (double *)FUN_14001cc68(0x208);
    memset(_Dst,0,0x208);
    FUN_1458481c0(_Dst);
    _Dst[0x3b] = 1.79769313486232e+308;
    _Dst[0x3c] = 1.79769313486232e+308;
    _Dst[0x3d] = 1.79769313486232e+308;
    _Dst[0x3e] = -1.79769313486232e+308;
    _Dst[0x3f] = -1.79769313486232e+308;
    _Dst[0x40] = -1.79769313486232e+308;
    lVar1 = param_1[0xe5];
    param_1[0xe5] = (longlong)_Dst;
    if (lVar1 != 0) {
      FUN_145820e5c(lVar1);
      FUN_1400020a8(lVar1);
      _Dst = (double *)param_1[0xe5];
    }
    dVar5 = (double)(-(ulonglong)(0.0 <= dStack_58 - local_70) & (ulonglong)(dStack_58 - local_70));
    dVar6 = (double)(-(ulonglong)(0.0 <= local_60 - dStack_78) & (ulonglong)(local_60 - dStack_78));
    uVar4 = -(ulonglong)(dVar5 <= dVar6);
    dVar6 = (double)(~uVar4 & (ulonglong)dVar5 | uVar4 & (ulonglong)dVar6);
    dVar5 = (double)(-(ulonglong)(0.0 <= dStack_68 - local_80) & (ulonglong)(dStack_68 - local_80));
    uVar4 = -(ulonglong)(dVar6 <= dVar5);
    *_Dst = (double)(uVar4 & (ulonglong)dVar5 | ~uVar4 & (ulonglong)dVar6) * 0.25;
    lVar1 = param_1[0xe5];
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    FUN_1460286e0(lVar1,uVar2);
    puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    lVar1 = param_1[0xe6];
    param_1[0xe6] = (longlong)puVar3;
    if (lVar1 != 0) {
      FUN_145c7bc0a(lVar1);
      FUN_1400020a8(lVar1);
    }
    if (*(int *)((longlong)param_1 + 0x7bc) < 0) {
      *(undefined4 *)(param_1 + 0xf7) = 0;
      FUN_1484d7e58(param_1 + 0xf6);
    }
    else {
      *(undefined4 *)(param_1 + 0xf7) = 0;
    }
  }
  else {
    dVar8 = DAT_14c846520 * 3.4028234663852886e+38;
    dVar9 = DAT_14c846518 * 3.4028234663852886e+38;
    dVar7 = DAT_14c846510 * 3.4028234663852886e+38;
    dVar6 = DAT_14c846520 * -3.4028234663852886e+38;
    dVar5 = DAT_14c846518 * -3.4028234663852886e+38;
    lVar1 = param_1[0xe5];
    *(double *)(lVar1 + 0x1d8) = DAT_14c846510 * -3.4028234663852886e+38;
    *(double *)(lVar1 + 0x1e0) = dVar5;
    *(double *)(lVar1 + 0x1e8) = dVar6;
    *(double *)(lVar1 + 0x1f0) = dVar7;
    *(double *)(lVar1 + 0x1f8) = dVar9;
    *(double *)(lVar1 + 0x200) = dVar8;
    (**(code **)(*param_1 + 0xaa0))(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cca36 FUN_1484cca36 body=349 status=ok
// SIG undefined FUN_1484cca36(void)

void FUN_1484cca36(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = *(int *)(param_1 + 0x50) * 0x200 + *(int *)(param_1 + 0x54);
  if (uVar6 != 0) {
    local_60 = param_2 + 2;
    local_58 = param_2 + 9;
    uVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar8 >> 9) * 8);
      lVar3 = (ulonglong)(uVar8 & 0x1ff) * 0x34;
      if (*(uint *)(param_2 + 0xc) == (uint)*(byte *)(lVar2 + 4 + lVar3)) {
        puVar7 = (uint *)(lVar2 + lVar3);
        uVar1 = *puVar7;
        if ((int)param_2[3] != *(int *)((longlong)param_2 + 0x44)) {
          plVar4 = (longlong *)param_2[10];
          if ((longlong *)param_2[10] == (longlong *)0x0) {
            plVar4 = local_58;
          }
          iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_2[0xb] - 1U & uVar1) * 4);
          if (iVar5 != -1) {
            do {
              if (*(uint *)(*local_60 + (longlong)iVar5 * 0xc) == uVar1) goto LAB_1484ccafe;
              iVar5 = *(int *)(*local_60 + (longlong)iVar5 * 0xc + 4);
            } while (iVar5 != -1);
          }
        }
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_1484d26fa(param_2,iVar5);
        }
        *(uint *)(*param_2 + (longlong)iVar5 * 4) = uVar1;
        FUN_144980568(local_60,local_4c,puVar7,0);
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_1484d26fa(param_3,iVar5);
        }
        *(uint *)(*param_3 + (longlong)iVar5 * 4) = uVar1;
      }
LAB_1484ccafe:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ccb94 FUN_1484ccb94 body=218 status=ok
// SIG undefined FUN_1484ccb94(void)

int FUN_1484ccb94(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  int *local_48;
  int *local_40;
  int **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (int *)FUN_14001cc68(0x18,0x10);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  lVar2 = param_1[0xc];
  *(int *)(param_1 + 0xc) = (int)lVar2 + 1;
  *local_40 = (int)lVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  local_48 = local_40;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456bd870(param_1,iVar1);
  }
  *(int **)(*param_1 + (longlong)iVar1 * 8) = local_40;
  local_38 = &local_48;
  FUN_1484d2780(param_1 + 2,local_2c);
  piVar3 = local_48;
  iVar1 = (int)param_1[0xe];
  *(uint *)(param_1 + 0xe) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0xd,iVar1);
  }
  *(int *)(param_1[0xd] + (longlong)iVar1 * 4) = *piVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *local_48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ccc70 FUN_1484ccc70 body=91 status=ok
// SIG undefined FUN_1484ccc70(void)

longlong FUN_1484ccc70(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar1 * 0x18);
        if (*puVar2 == param_2) goto LAB_1484ccc7a;
        uVar1 = puVar2[4];
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar2 = (uint *)0x0;
LAB_1484ccc7a:
  puVar4 = puVar2 + 2;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  return *(longlong *)puVar4 + 8;
}



// FUNCTION 1484ccccc FUN_1484ccccc body=435 status=ok
// SIG undefined FUN_1484ccccc(void)

void FUN_1484ccccc(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (longlong *)0x0;
  uVar1 = *param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar1 >> 9) * 8);
  uStack_60 = 1;
  FUN_146c92ae4(&local_68,0);
  *local_68 = (ulonglong)(uVar1 & 0x1ff) * 0x34 + lVar3;
  if (0 < (int)(uint)uStack_60) {
    lVar3 = param_1 + 0x68;
    do {
      piVar4 = (int *)local_68[(ulonglong)(uint)uStack_60 - 1];
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 - 1);
      iVar2 = *piVar4;
      FUN_146be983e(&local_90,lVar3,iVar2,0);
      if (local_90 != lVar3) goto LAB_1484ccd99;
      if (local_88 != iVar2) goto LAB_1484ccd99;
      if ((int)local_78 != -1) goto LAB_1484ccd99;
      iVar6 = local_78._4_4_;
      while (iVar6 != -1) {
LAB_1484ccd99:
        do {
          local_4c = local_70;
          (*(code *)*param_3)(param_3[1],&local_4c);
          if (local_80 == 0) {
            local_84 = 0xffffffff;
            local_78 = 0xffffffffffffffff;
            local_78._4_4_ = -1;
            local_78._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_90);
          }
        } while (((local_90 != lVar3) || (local_88 != iVar2)) ||
                (iVar6 = local_78._4_4_, (int)local_78 != -1));
      }
      lVar9 = 0;
      do {
        uVar7 = uStack_60;
        uVar1 = piVar4[lVar9 + 5];
        if (uVar1 != 0xffffffff) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar1 >> 9) * 8);
          lVar10 = (longlong)(int)(uint)uStack_60;
          uVar8 = (uint)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
          if (uStack_60._4_4_ < uVar8) {
            FUN_146c92ae4(&local_68,uVar7 & 0xffffffff);
          }
          local_68[lVar10] = (ulonglong)(uVar1 & 0x1ff) * 0x34 + lVar5;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
    } while (0 < (int)(uint)uStack_60);
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484cce80 FUN_1484cce80 body=521 status=ok
// SIG undefined FUN_1484cce80(void)

void FUN_1484cce80(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  uint local_98;
  undefined4 local_94;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = param_1;
  FUN_1484d2c1c(param_1 + 0x168);
  if (0 < (int)(uint)uStack_60) {
    lVar9 = param_2 + 0x48;
    lVar1 = param_1 + 0x68;
    uVar4 = (uint)uStack_60;
    local_a8 = lVar9;
    do {
      puVar2 = *(uint **)(local_68 + -8 + (ulonglong)uVar4 * 8);
      uVar4 = uVar4 - 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
      uVar5 = *puVar2;
      if (*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x44)) {
        lVar6 = *(longlong *)(param_2 + 0x50);
        if (*(longlong *)(param_2 + 0x50) == 0) {
          lVar6 = lVar9;
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_2 + 0x58) - 1U & uVar5) * 4);
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar7 * 0xc) == uVar5)
            goto LAB_1484cd045;
            iVar7 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar7 * 0xc + 4);
          } while (iVar7 != -1);
        }
      }
      FUN_146be983e(&local_a0,lVar1,uVar5,0);
      if (local_a0 != lVar1) goto LAB_1484ccf88;
      if (local_98 != uVar5) goto LAB_1484ccf88;
      if ((int)local_88 != -1) goto LAB_1484ccf88;
      iVar7 = local_88._4_4_;
      while (iVar7 != -1) {
LAB_1484ccf88:
        do {
          local_4c = local_80;
          (*(code *)*param_3)(param_3[1],&local_4c);
          if (local_90 == 0) {
            local_94 = 0xffffffff;
            local_88 = 0xffffffffffffffff;
            local_88._4_4_ = -1;
            local_88._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_a0);
          }
        } while (((local_a0 != lVar1) || (local_98 != uVar5)) ||
                (iVar7 = local_88._4_4_, (int)local_88 != -1));
      }
      lVar9 = 0;
      do {
        uVar3 = uStack_60;
        uVar4 = puVar2[lVar9 + 5];
        if (uVar4 != 0xffffffff) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar4 >> 9) * 8);
          lVar8 = (longlong)(int)(uint)uStack_60;
          uVar5 = (uint)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_146c92ae4(&local_68,uVar3 & 0xffffffff);
          }
          *(ulonglong *)(local_68 + lVar8 * 8) = (ulonglong)(uVar4 & 0x1ff) * 0x34 + lVar6;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      lVar9 = local_a8;
      uVar4 = (uint)uStack_60;
LAB_1484cd045:
    } while (0 < (int)uVar4);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484cd08a FUN_1484cd08a body=275 status=ok
// SIG undefined FUN_1484cd08a(void)

void FUN_1484cd08a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xd8);
  lVar2 = param_1 + 0xe8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x100);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(*local_78 + (longlong)iStack_5c * 0xc));
      (*(code *)*param_2)(param_2[1]);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cd19e FUN_1484cd19e body=1390 status=ok
// SIG undefined FUN_1484cd19e(void)

undefined8 * FUN_1484cd19e(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 *local_160;
  code *local_158;
  longlong *local_150;
  code *local_148;
  longlong *local_140;
  code *local_138;
  longlong *local_130;
  longlong local_128;
  longlong lStack_120;
  longlong *local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  ulonglong uVar13;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar6 = (**(code **)(*param_1 + 0xa88))();
  if (*(int *)(lVar6 + 0x170) < 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)FUN_14001cc68(0x4a0,0x10);
    FUN_1484af6ae(puVar7,param_1);
    *puVar7 = &PTR_FUN_14aefda50;
    (**(code **)(*param_1 + 0xa10))(param_1,puVar7 + 0x87,*(undefined4 *)(puVar7[0x42] + 8));
    puVar7[0x8d] = 0;
    *(undefined4 *)(puVar7 + 0x8e) = 0;
    puVar7[0x89] = 0;
    puVar7[0x8a] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x474) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar7 + 0x47c) = 0;
    puVar7[0x91] = 0;
    *(undefined4 *)(puVar7 + 0x92) = 0;
    puVar7[0x93] = param_1;
    if (param_1[0xda] != 0) {
      *(undefined1 *)((longlong)puVar7 + 0x2a5) = 1;
      local_128 = puVar7[0x56];
      lStack_120 = puVar7[0x57];
      local_118 = (longlong *)puVar7[0x58];
      lStack_110 = puVar7[0x59];
      local_108 = puVar7[0x5a];
      uStack_100 = puVar7[0x5b];
      uVar2 = puVar7[0x5c];
      uVar3 = puVar7[0x5d];
      puVar7[0x5c] = CONCAT44(uStack_74,local_78);
      puVar7[0x5d] = CONCAT44(uStack_6c,uStack_70);
      puVar7[0x5a] = &PTR_LAB_14aefec00;
      puVar7[0x5b] = param_1;
      puVar7[0x58] = 0;
      puVar7[0x59] = lStack_90;
      puVar7[0x56] = FUN_143b7f88e;
      puVar7[0x57] = lStack_a0;
      local_f8._0_4_ = (undefined4)uVar2;
      local_f8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_f0._0_4_ = (undefined4)uVar3;
      uStack_f0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_78 = (undefined4)local_f8;
      uStack_74 = local_f8._4_4_;
      uStack_70 = (undefined4)uStack_f0;
      uStack_6c = uStack_f0._4_4_;
      local_88 = local_108;
      uStack_80 = uStack_100;
      local_f8 = uVar2;
      uStack_f0 = uVar3;
      local_a8 = local_128;
      lStack_a0 = lStack_120;
      local_98 = local_118;
      lStack_90 = lStack_110;
      if (local_128 != 0) {
        plVar10 = local_118;
        if (local_118 == (longlong *)0x0) {
          plVar10 = &local_88;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    puVar8 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80;
    *(undefined4 *)(puVar8 + 8) = 0xffffffff;
    lVar6 = param_1[0xe6];
    param_1[0xe6] = (longlong)puVar8;
    if (lVar6 != 0) {
      FUN_145c7bc0a(lVar6);
      FUN_1400020a8(lVar6);
    }
    local_168 = param_1 + 0xf6;
    *(undefined4 *)(param_1 + 0xf7) = 0;
    if (*(int *)((longlong)param_1 + 0x7bc) < 0) {
      FUN_1484d7e58(local_168);
    }
    lVar6 = param_1[0xe5];
    lVar9 = (**(code **)(*param_1 + 0xa88))(param_1);
    if (*(int *)(lVar9 + 0x170) < 50000) {
      FUN_1484d3828(lVar6,&local_128,1);
      FUN_1484d3928(param_1[0xe6],&local_128);
      FUN_145c7bc0a(&local_128);
    }
    else {
      lStack_90 = 0;
      local_88 = 0;
      lStack_a0 = 0;
      local_98 = (longlong *)0x0;
      FUN_146c89590(lVar6,&local_a8);
      iVar12 = 1;
      if (1 < (int)local_a8) {
        iVar12 = (int)local_a8;
      }
      uVar13 = (ulonglong)(iVar12 - 1);
      uVar11 = 0;
      do {
        if (uVar13 == uVar11) goto LAB_1484cd6b9;
        if (199 < *(int *)(lStack_a0 + uVar11 * 4)) {
          uVar13 = uVar11 & 0xffffffff;
          goto LAB_1484cd6b9;
        }
        uVar1 = uVar11 + 1;
        lVar9 = uVar11 * 4;
        uVar11 = uVar1;
      } while (*(int *)(lStack_a0 + 4 + lVar9) < 300);
      uVar13 = (ulonglong)((int)uVar1 - 1);
LAB_1484cd6b9:
      FUN_1484d3828(lVar6,&local_128,uVar13);
      FUN_1484d3928(param_1[0xe6],&local_128);
      FUN_145c7bc0a(&local_128);
      if (lStack_90 != 0) {
        FUN_1400020a8();
      }
      if (lStack_a0 != 0) {
        FUN_1400020a8();
      }
    }
    local_f8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = (longlong *)0x0;
    lStack_110 = 0;
    local_128 = 0;
    lStack_120 = 0;
    uStack_f0 = 0x8000000000;
    local_e8 = 0xffffffff;
    local_c8 = 1;
    plVar10 = param_1 + 0xe7;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_1484cd70e(plVar10,&local_128);
    FUN_145c7bb50(&local_128);
    uVar4 = FUN_1484ccb94(plVar10);
    *(undefined4 *)(param_1 + 0xf8) = uVar4;
    plVar14 = (longlong *)param_1[0xe6];
    lVar6 = plVar14[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar9 = *plVar14;
      lVar15 = 0;
      local_160 = puVar7;
      do {
        uVar4 = *(undefined4 *)(lVar9 + lVar15);
        local_a8 = CONCAT44(local_a8._4_4_,uVar4);
        uVar5 = FUN_1484ccb94(plVar10);
        local_128 = FUN_1484ccc70(plVar10,uVar5);
        local_130 = &local_128;
        local_138 = FUN_143b7f8f6;
        FUN_1484ccccc(param_1[0xe5],&local_a8,&local_138);
        iVar12 = (int)param_1[0xf7];
        *(uint *)(param_1 + 0xf7) = iVar12 + 1U;
        if (*(uint *)((longlong)param_1 + 0x7bc) < iVar12 + 1U) {
          FUN_1484d7f58(local_168,iVar12);
        }
        *(ulonglong *)(*local_168 + (longlong)iVar12 * 8) = CONCAT44(uVar5,uVar4);
        lVar15 = lVar15 + 4;
      } while ((longlong)(int)lVar6 * 4 != lVar15);
      uVar4 = (undefined4)param_1[0xf8];
      plVar14 = (longlong *)param_1[0xe6];
      puVar7 = local_160;
    }
    lVar6 = FUN_1484ccc70(plVar10,uVar4);
    local_148 = FUN_143b7f92a;
    local_140 = &local_128;
    local_128 = lVar6;
    FUN_1484cce80(param_1[0xe5],plVar14);
    local_158 = FUN_143b7f95e;
    local_150 = &local_128;
    local_128 = lVar6;
    FUN_1484cd08a(param_1[0xe5]);
    FUN_143b79b92(puVar7,plVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cd70e FUN_1484cd70e body=95 status=ok
// SIG undefined FUN_1484cd70e(void)

longlong FUN_1484cd70e(longlong param_1,longlong param_2)

{
  FUN_1484d397e();
  FUN_1484d39e2(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  return param_1;
}



// FUNCTION 1484cd76e FUN_1484cd76e body=115 status=ok
// SIG undefined FUN_1484cd76e(void)

void FUN_1484cd76e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x5a8);
  if (lVar1 != 0) {
    FUN_1484aff2c(lVar1);
    (**(code **)(**(longlong **)(lVar1 + 0x498) + 0xa10))
              (*(longlong **)(lVar1 + 0x498),&local_28,
               *(undefined4 *)(*(longlong *)(lVar1 + 0x210) + 8));
    *(undefined4 *)(lVar1 + 0x438) = local_28;
    *(undefined4 *)(lVar1 + 0x43c) = uStack_24;
    *(undefined4 *)(lVar1 + 0x440) = uStack_20;
    *(undefined4 *)(lVar1 + 0x444) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cd7e2 FUN_1484cd7e2 body=103 status=ok
// SIG undefined FUN_1484cd7e2(void)

void FUN_1484cd7e2(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1484aff2c();
  (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa10))
            (*(longlong **)(param_1 + 0x498),&local_28,
             *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8));
  *(undefined4 *)(param_1 + 0x438) = local_28;
  *(undefined4 *)(param_1 + 0x43c) = uStack_24;
  *(undefined4 *)(param_1 + 0x440) = uStack_20;
  *(undefined4 *)(param_1 + 0x444) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cd84a FUN_1484cd84a body=174 status=ok
// SIG undefined FUN_1484cd84a(void)

uint * FUN_1484cd84a(longlong *param_1,uint *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0xda] == 0) {
    *param_2 = -(param_3 & 1) | 0xffff0000;
  }
  else {
    local_40 = (**(code **)(*param_1 + 0xa88))();
    pcVar1 = (code *)param_1[0xda];
    plVar3 = param_1 + 0xde;
    if ((longlong *)param_1[0xdc] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xdc];
    }
    local_34 = param_3;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(param_2,uVar2,&local_40,&local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cd8fa FUN_1484cd8fa body=1122 status=ok
// SIG undefined FUN_1484cd8fa(void)

double * FUN_1484cd8fa(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  bool bVar11;
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
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  uint local_1bc;
  int *local_1b8;
  uint local_1b0;
  uint local_1ac;
  longlong local_1a8 [2];
  longlong *local_198;
  longlong local_188 [4];
  undefined *local_168;
  uint local_160;
  int local_15c;
  code *local_158;
  undefined **local_148;
  longlong local_140;
  undefined *local_138 [4];
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  int *local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_140 = (**(code **)(*param_1 + 0xa80))();
  local_158 = (code *)0x0;
  local_148 = &PTR_DAT_149f363e0;
  local_168 = &DAT_146be727e;
  FUN_146be708e(local_140 + 0x20,local_118);
  FUN_146be6fec(local_118,&local_168);
  local_1b0 = *local_d8 * 0x200 + local_d8[1];
  local_198 = (longlong *)0x0;
  local_1a8[0] = 0;
  local_1b8 = local_d8;
  local_1ac = local_1b0;
  FUN_146be715a(local_1a8,local_118);
  if (local_160 == local_1b0) {
    dVar2 = 0.0;
    dVar18 = 0.0;
    dVar14 = 0.0;
    dVar13 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  else {
    bVar11 = true;
    dVar13 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    dVar2 = 0.0;
    dVar18 = 0.0;
    dVar14 = 0.0;
    do {
      pcVar7 = local_158;
      ppuVar10 = local_148;
      if (local_148 == (undefined **)0x0) {
        ppuVar10 = local_138;
      }
      local_1bc = local_160;
      uVar8 = (**(code **)(*ppuVar10 + 8))();
      (*pcVar7)(&local_1d8,uVar8,&local_1bc);
      dVar15 = local_1d8 * param_3[8];
      dVar16 = dStack_1d0 * param_3[9];
      dVar12 = local_1c8 * param_3[10];
      dVar5 = *param_3;
      dVar6 = param_3[1];
      dVar17 = param_3[2];
      dVar1 = param_3[3];
      dVar19 = dVar16 * dVar5 - dVar15 * dVar6;
      dVar20 = dVar12 * dVar6 - dVar16 * dVar17;
      dVar21 = dVar15 * dVar17 - dVar5 * dVar12;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar19 = dVar19 + dVar19;
      dVar15 = (dVar19 * dVar6 - dVar21 * dVar17) + dVar1 * dVar20 + dVar15 + param_3[4];
      dVar17 = (dVar17 * dVar20 - dVar5 * dVar19) + param_3[3] * dVar21 + dVar16 + param_3[5];
      dVar19 = dVar19 * dVar1 + dVar12 + (dVar21 * dVar5 - dVar20 * dVar6) + param_3[6];
      dVar1 = dVar19;
      dVar21 = dVar17;
      dVar5 = dVar15;
      dVar6 = dVar19;
      if (!bVar11) {
        if (dVar15 <= dVar13) {
          dVar13 = dVar15;
        }
        if (dVar18 <= dVar15) {
          dVar18 = dVar15;
        }
        if (dVar17 <= dVar4) {
          dVar4 = dVar17;
        }
        if (dVar19 <= dVar3) {
          dVar3 = dVar19;
        }
        if (dVar14 <= dVar17) {
          dVar14 = dVar17;
        }
        dVar17 = dVar4;
        dVar15 = dVar13;
        dVar1 = dVar3;
        dVar21 = dVar14;
        dVar5 = dVar18;
        dVar6 = dVar2;
        if (dVar2 <= dVar19) {
          dVar6 = dVar19;
        }
      }
      do {
        dVar2 = dVar6;
        dVar18 = dVar5;
        dVar14 = dVar21;
        dVar3 = dVar1;
        dVar13 = dVar15;
        dVar4 = dVar17;
        local_160 = local_160 + 1;
        if (local_15c <= (int)local_160) break;
        dVar17 = dVar4;
        dVar15 = dVar13;
        dVar1 = dVar3;
        dVar21 = dVar14;
        dVar5 = dVar18;
        dVar6 = dVar2;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_168 + 8) +
                                             (ulonglong)(local_160 >> 9) * 8) +
                                           (ulonglong)(local_160 & 0x1ff) * 2) - 1U));
      bVar11 = false;
    } while (local_1b0 != local_160);
  }
  if (local_1a8[0] != 0) {
    plVar9 = local_198;
    if (local_198 == (longlong *)0x0) {
      plVar9 = local_188;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_158 != (code *)0x0) {
    ppuVar10 = local_148;
    if (local_148 == (undefined **)0x0) {
      ppuVar10 = local_138;
    }
    (**(code **)(*ppuVar10 + 0x10))();
  }
  if (local_118[0] != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  dVar2 = (dVar2 - dVar3) * 0.5;
  dVar14 = (dVar14 - dVar4) * 0.5;
  dVar18 = (dVar18 - dVar13) * 0.5;
  *param_2 = dVar13 + dVar18;
  param_2[1] = dVar4 + dVar14;
  param_2[2] = dVar3 + dVar2;
  param_2[3] = dVar18;
  param_2[4] = dVar14;
  param_2[5] = dVar2;
  param_2[6] = SQRT(dVar2 * dVar2 + dVar18 * dVar18 + dVar14 * dVar14);
  if ((local_c0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484cdd60 FUN_1484cdd60 body=43 status=ok
// SIG undefined FUN_1484cdd60(void)

void FUN_1484cdd60(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x30) + 0x10))
            (*(longlong *)(param_1 + 0xb0) + 0x30);
  FUN_1447f69b6(param_1 + 0x58);
  return;
}



// FUNCTION 1484cdd8c FUN_1484cdd8c body=382 status=ok
// SIG undefined FUN_1484cdd8c(void)

void FUN_1484cdd8c(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x38) + 0x10))
            (*(longlong *)(param_1 + 0xa8) + 0x38);
  _Dst = (void *)FUN_14001cc68(0x208);
  memset(_Dst,0,0x208);
  FUN_1458481c0(_Dst);
  *(undefined8 *)((longlong)_Dst + 0x1d8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1e0) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1e8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1f0) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1f8) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x200) = 0xffefffffffffffff;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  *(void **)(param_1 + 0xc0) = _Dst;
  if (lVar1 != 0) {
    FUN_145820e5c(lVar1);
    FUN_1400020a8(lVar1);
    _Dst = *(void **)(param_1 + 0xc0);
  }
  uVar2 = (**(code **)(*(longlong *)(param_1 + -0x668) + 0xa88))(param_1 + -0x668);
  FUN_1460286e0(_Dst,uVar2);
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 200);
  *(undefined8 **)(param_1 + 200) = puVar3;
  if (lVar1 != 0) {
    FUN_145c7bc0a(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(int *)(param_1 + 0x154) < 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    FUN_1484d7e58(param_1 + 0x148);
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  FUN_1448215fa(param_1 + -0x668);
  FUN_1447f69b6(param_1 + 0x50);
  return;
}



// FUNCTION 1484cdf0a FUN_1484cdf0a body=351 status=ok
// SIG undefined FUN_1484cdf0a(void)

void FUN_1484cdf0a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar6);
      cVar5 = FUN_146c86e00(param_1,uVar1);
      if ((((cVar5 != '\0') && (-1 < (int)uVar1)) &&
          (lVar3 = *(longlong *)(param_1 + 0x1d0),
          (int)uVar1 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146c14aac(lVar3,&local_68,uVar1);
        dVar7 = *(double *)(param_1 + 0x1d8);
        if (local_68 <= *(double *)(param_1 + 0x1d8)) {
          dVar7 = local_68;
        }
        *(double *)(param_1 + 0x1d8) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1e0);
        if (local_60 <= *(double *)(param_1 + 0x1e0)) {
          dVar7 = local_60;
        }
        *(double *)(param_1 + 0x1e0) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1e8);
        if (local_58 <= *(double *)(param_1 + 0x1e8)) {
          dVar7 = local_58;
        }
        *(double *)(param_1 + 0x1e8) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x1f0) <= local_50) {
          dVar7 = local_50;
        }
        *(double *)(param_1 + 0x1f0) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1f8);
        if (*(double *)(param_1 + 0x1f8) <= local_48) {
          dVar7 = local_48;
        }
        *(double *)(param_1 + 0x1f8) = dVar7;
        dVar7 = *(double *)(param_1 + 0x200);
        if (*(double *)(param_1 + 0x200) <= local_40) {
          dVar7 = local_40;
        }
        *(double *)(param_1 + 0x200) = dVar7;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ce06a FUN_1484ce06a body=346 status=ok
// SIG undefined FUN_1484ce06a(void)

void FUN_1484ce06a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + lVar4 * 4);
      if (((-1 < (int)uVar1) &&
          (lVar2 = *(longlong *)(param_1 + 0x1d0),
          (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146c14aac(lVar2,&local_60);
        dVar5 = *(double *)(param_1 + 0x1d8);
        if (local_60 <= *(double *)(param_1 + 0x1d8)) {
          dVar5 = local_60;
        }
        *(double *)(param_1 + 0x1d8) = dVar5;
        dVar5 = *(double *)(param_1 + 0x1e0);
        if (local_58 <= *(double *)(param_1 + 0x1e0)) {
          dVar5 = local_58;
        }
        *(double *)(param_1 + 0x1e0) = dVar5;
        dVar5 = *(double *)(param_1 + 0x1e8);
        if (local_50 <= *(double *)(param_1 + 0x1e8)) {
          dVar5 = local_50;
        }
        *(double *)(param_1 + 0x1e8) = dVar5;
        dVar5 = *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x1f0) <= local_48) {
          dVar5 = local_48;
        }
        *(double *)(param_1 + 0x1f0) = dVar5;
        dVar5 = *(double *)(param_1 + 0x1f8);
        if (*(double *)(param_1 + 0x1f8) <= local_40) {
          dVar5 = local_40;
        }
        *(double *)(param_1 + 0x1f8) = dVar5;
        dVar5 = *(double *)(param_1 + 0x200);
        if (*(double *)(param_1 + 0x200) <= local_38) {
          dVar5 = local_38;
        }
        *(double *)(param_1 + 0x200) = dVar5;
        FUN_146c86256(param_1,*(undefined4 *)(*param_2 + lVar4 * 4),&local_60);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ce1c5 FUN_1484ce1c5 body=229 status=ok
// SIG undefined FUN_1484ce1c5(void)

undefined8 FUN_1484ce1c5(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
LAB_1484ce29e:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_144a745da();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
LAB_1484ce1fa:
      lVar1 = FUN_141235872();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
        lVar2 = lVar1 + 0x30;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_1484ce2a6;
      }
      lVar1 = FUN_144a7a726();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
        lVar2 = lVar1 + 0x30;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_1484ce2a6;
      }
      lVar1 = FUN_1411674f6();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
        lVar2 = lVar1 + 0x30;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_1484ce2a6;
      }
      lVar1 = FUN_1405babea();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
        lVar2 = lVar1 + 0x30;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_1484ce2a6;
      }
      lVar1 = FUN_140f5398e();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (lVar2 = lVar1 + 0x30,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar2)) goto LAB_1484ce29e;
    }
    else {
      lVar2 = lVar1 + 0x30;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar2) goto LAB_1484ce1fa;
    }
LAB_1484ce2a6:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1484ce2aa FUN_1484ce2aa body=130 status=ok
// SIG undefined FUN_1484ce2aa(void)

void FUN_1484ce2aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_4;
  local_1c = *(undefined2 *)(param_4 + 1);
  local_40 = param_7;
  local_48 = param_6;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_3;
  FUN_143b7a3de(param_1,0,&local_20,param_5);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ce32d FUN_1484ce32d body=4335 status=ok
// SIG undefined FUN_1484ce32d(void)

ulonglong FUN_1484ce32d(longlong *param_1,byte *param_2,byte param_3,wchar_t *param_4,
                       longlong *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined7 uVar16;
  ulonglong uVar15;
  wchar_t *pwVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_a18 [32];
  code **local_9f8;
  undefined8 *local_9f0;
  byte local_9e8;
  wchar_t *local_9e0;
  undefined8 *local_9d8;
  undefined1 local_9d0;
  undefined1 local_9c8;
  byte local_9bd;
  int local_9bc;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined8 local_998;
  int local_990;
  undefined8 local_988;
  undefined4 local_980;
  code *local_978;
  wchar_t **local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined8 local_938;
  undefined4 local_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 *local_8b0;
  byte local_8a4;
  byte local_8a3;
  undefined4 local_8a2;
  byte local_89e;
  byte local_89d;
  undefined4 local_89c;
  undefined8 local_898 [2];
  undefined8 local_888;
  undefined8 local_858 [2];
  undefined8 local_848;
  code *local_818;
  undefined8 local_808;
  undefined **local_7f8;
  undefined8 *local_7f0;
  code *local_7d8 [2];
  undefined8 local_7c8;
  undefined **local_7b8;
  undefined8 *local_7b0;
  wchar_t *local_798;
  longlong lStack_790;
  longlong local_788;
  longlong lStack_780;
  longlong local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  longlong lStack_760;
  longlong local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_728;
  undefined4 local_720;
  undefined8 local_71c;
  undefined4 local_714;
  undefined8 local_708;
  undefined4 local_700;
  undefined2 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c4;
  undefined4 local_6bc;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_680;
  undefined4 local_678;
  undefined8 local_674;
  undefined4 local_66c;
  undefined8 local_660;
  undefined4 local_658;
  undefined2 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_61c;
  undefined4 local_614;
  undefined8 local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_5cc;
  undefined4 local_5c4;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_574;
  undefined4 local_56c;
  undefined8 local_560;
  undefined4 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_524;
  undefined4 local_51c;
  undefined8 local_510;
  undefined4 local_508;
  undefined2 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d0 [68];
  undefined1 local_2b0;
  undefined4 local_2af;
  undefined1 local_2ab;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  FUN_14582f278(param_4);
  if (param_1 == (longlong *)0x0) {
    local_798 = L"CopyMeshFromComponent_NullComponent";
    lStack_790._0_4_ = 0x23;
    FUN_1446e940c(&local_2b0,&local_798);
    local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
    lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
    FUN_1446e940c(local_4d0,&local_798);
    pwVar17 = L"Scene Component is null";
LAB_1484ce68b:
    FUN_140208bae(&local_798,local_4d0,&local_2b0,pwVar17);
    FUN_140008f88(param_6,&local_798);
    if (local_798 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_798 + 0x10))();
    }
  }
  else {
    plVar13 = param_1 + 0x48;
    plVar10 = param_5;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *plVar10 = *plVar13;
      plVar13 = plVar13 + 1;
      plVar10 = plVar10 + 1;
    }
    if (param_7 != (longlong *)0x0) {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) != 0) {
        FUN_1448831cc(param_7,0);
      }
      lVar14 = FUN_144a3a302();
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30)) {
        uVar7 = (**(code **)(*param_1 + 0x7b0))(param_1);
        FUN_141841038(param_7,uVar7,1);
        if (0 < (int)uVar7) {
          plVar10 = (longlong *)(ulonglong)uVar7;
          plVar13 = (longlong *)0x0;
          do {
            uVar12 = (**(code **)(*param_1 + 0x610))(param_1,(ulonglong)plVar13 & 0xffffffff);
            *(undefined8 *)(*param_7 + (longlong)plVar13 * 8) = uVar12;
            plVar13 = (longlong *)((longlong)plVar13 + 1);
          } while (plVar10 != plVar13);
        }
      }
    }
    lVar14 = FUN_144a745da();
    if ((*(int *)(lVar14 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
        lVar14 + 0x30)) {
      lVar14 = (**(code **)(*param_1 + 0xa90))();
      iVar19 = 0;
      iVar8 = 0;
      if (lVar14 != 0) {
        iVar8 = *(int *)(lVar14 + 8);
      }
      if (*param_2 != 0) {
        iVar19 = *(int *)(param_2 + 4);
      }
      if (param_2[8] == 1) {
        iVar5 = iVar8 + -1;
        if (iVar19 < iVar8 + -1) {
          iVar5 = iVar19;
        }
        iVar19 = 0;
        if (0 < iVar5) {
          iVar19 = iVar5;
        }
      }
      if ((iVar19 < 0) || (iVar8 <= iVar19)) {
        local_798 = L"CopyMeshFromComponent_MissingSkinnedMeshComponentLOD";
        lStack_790._0_4_ = 0x34;
        FUN_1446e940c(&local_2b0,&local_798);
        local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
        lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
        FUN_1446e940c(local_4d0,&local_798);
        pwVar17 = L"SkinnedMeshComponent requested LOD does not exist";
      }
      else {
        plVar10 = (longlong *)FUN_144a7954a(param_1);
        if (plVar10 != (longlong *)0x0) {
          local_9bd = param_2[10];
          bVar3 = param_2[8];
          local_9bc = *(int *)(param_2 + 4);
          bVar4 = *param_2;
          lVar14 = FUN_144a85a6c();
          if ((*(int *)(plVar10[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) {
            if (bVar3 != 0) goto LAB_1484cef34;
          }
          else {
            if (bVar3 == 0) {
              if (bVar4 == 3) goto LAB_1484cef56;
              local_798 = L"CopyMeshFromSkinnedAsset_EditorOnly";
              lStack_790._0_4_ = 0x23;
              FUN_1446e940c(&local_2b0,&local_798);
              local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
              lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
              FUN_1446e940c(local_4d0,&local_798);
              pwVar17 = L"Source Models are not available at Runtime";
              goto LAB_1484ce68b;
            }
            if (bVar4 < 2) {
              local_9bc = 0;
            }
LAB_1484cef34:
            iVar19 = (**(code **)(*plVar10 + 0x3c0))(plVar10);
            iVar8 = iVar19 + -1;
            if (local_9bc < iVar19 + -1) {
              iVar8 = local_9bc;
            }
            local_9bc = 0;
            if (0 < iVar8) {
              local_9bc = iVar8;
            }
          }
LAB_1484cef56:
          cVar6 = FUN_1484cf7de(param_1,param_4,local_9bc,local_9bd);
          if (cVar6 != '\0') {
            FUN_146c03ab2(param_4);
            if (param_8 == (longlong *)0x0) goto LAB_1484cea80;
            plVar13 = (longlong *)(**(code **)(*plVar10 + 0x3b8))(plVar10);
            uVar15 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
            FUN_141841038(param_8,(int)plVar13[1],1);
            if (0 < (int)plVar13[1]) {
              lVar14 = 0;
              lVar11 = 0;
              do {
                *(undefined8 *)(*param_8 + lVar11 * 8) = *(undefined8 *)(*plVar13 + lVar14);
                lVar11 = lVar11 + 1;
                lVar14 = lVar14 + 0x28;
              } while (lVar11 < (int)plVar13[1]);
            }
            goto LAB_1484cea83;
          }
          goto LAB_1484ce6ba;
        }
        local_798 = L"CopyMeshFromComponent_MissingSkinnedAsset";
        lStack_790._0_4_ = 0x29;
        FUN_1446e940c(&local_2b0,&local_798);
        local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
        lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
        FUN_1446e940c(local_4d0,&local_798);
        pwVar17 = L"SkinnedMeshComponent has a null SkinnedAsset";
      }
      goto LAB_1484ce68b;
    }
    lVar14 = FUN_141235872();
    uVar16 = (undefined7)((ulonglong)plVar10 >> 8);
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) {
      lVar14 = FUN_144a7a726();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
          lVar14 + 0x30)) {
        lVar14 = FUN_1411674f6();
        if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
            != lVar14 + 0x30)) {
          lVar14 = FUN_1405babea();
          if ((*(int *)(lVar14 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30)) {
            local_2b0 = 0;
            local_2af = 0x1010101;
            local_2ab = 1;
            FUN_14582eef4(param_4,0);
            FUN_1484cf72a(param_1,param_4,&local_2b0);
            FUN_14582ed12(param_4);
            if (param_2[9] == 1) {
              if (*(int *)(*(longlong *)(param_4 + 0x104) + 0x38) < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = **(undefined8 **)(*(longlong *)(param_4 + 0x104) + 0x30);
              }
              FUN_146c39d50(param_4,uVar12);
              FUN_146c3906a(param_4,0,1,1);
            }
            uVar15 = CONCAT71(uVar16,0 < *(int *)(param_4 + 0xb8));
            if (*(int *)(param_4 + 0xb8) < 1) {
              local_798 = L"CopyMeshFromComponent_InvalidBrushConversion";
              lStack_790._0_4_ = 0x2c;
              FUN_1446e940c(local_4d0,&local_798);
              local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
              lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
              FUN_1446e940c(&local_918,&local_798);
              FUN_140208bae(&local_798,&local_918,local_4d0,
                            L"BrushComponent conversion produced 0 triangles");
              FUN_140008f88(param_6,&local_798);
              if (local_798 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_798 + 0x10))();
              }
            }
            goto LAB_1484cea83;
          }
          lVar14 = FUN_140f5398e();
          if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) goto LAB_1484ce6ba;
          plVar10 = (longlong *)param_1[0xcc];
          if (plVar10 == (longlong *)0x0) {
            local_798 = L"CopyMeshFromComponent_MissingRestCollection";
            lStack_790._0_4_ = 0x2b;
            FUN_1446e940c(&local_2b0,&local_798);
            local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
            lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
            FUN_1446e940c(local_4d0,&local_798);
            pwVar17 = L"GeometryCollectionComponent has null Rest Collection object";
          }
          else {
            lVar14 = plVar10[0x43];
            plVar13 = (longlong *)plVar10[0x44];
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar13 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            if (lVar14 != 0) {
              local_798 = (wchar_t *)0x0;
              lStack_790 = 0;
              local_788 = 0;
              lStack_780 = 0x3ff0000000000000;
              local_778 = 0;
              uStack_770 = 0;
              uStack_76c = 0;
              uStack_768 = 0;
              uStack_764 = 0;
              lStack_760 = 0;
              local_758 = 0x3ff0000000000000;
              uStack_750 = 0x3ff0000000000000;
              local_748 = 0x3ff0000000000000;
              uStack_740 = 0;
              puVar9 = (undefined8 *)FUN_1474a5e18(param_1);
              local_9e8 = *(int *)(puVar9 + 1) == 0;
              if ((bool)local_9e8) {
                local_9d8 = local_898;
                local_898[0] = 0;
                local_888 = 0;
                local_9a8 = *(undefined8 *)(lVar14 + 0x3b0);
                local_9e0 = (wchar_t *)&local_9a8;
                local_9a0 = *(undefined4 *)(lVar14 + 0x3b8);
                local_9b8 = *(undefined8 *)(lVar14 + 0xc0);
                local_9f0 = &local_9b8;
                local_9b0 = *(undefined4 *)(lVar14 + 200);
              }
              else {
                local_9d8 = local_858;
                local_858[0] = 0;
                local_848 = 0;
                local_988 = *(undefined8 *)(lVar14 + 0x3b0);
                local_9e0 = (wchar_t *)&local_988;
                local_980 = *(undefined4 *)(lVar14 + 0x3b8);
                local_998 = *puVar9;
                local_9f0 = &local_998;
                local_990 = *(int *)(puVar9 + 1);
              }
              local_9f8 = (code **)CONCAT71(local_9f8._1_7_,1);
              local_9c8 = 1;
              local_9d0 = 0;
              FUN_1484991ee(param_4,&local_798,0,lVar14);
              if (param_8 != (longlong *)0x0) {
                plVar10 = plVar10 + 0x12;
                FUN_14113129a(param_8,plVar10);
              }
              goto LAB_1484cea80;
            }
            local_798 = L"CopyMeshFromComponent_MissingCollectionData";
            lStack_790._0_4_ = 0x2b;
            FUN_1446e940c(&local_2b0,&local_798);
            local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
            lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
            FUN_1446e940c(local_4d0,&local_798);
            pwVar17 = L"GeometryCollectionComponent has null Geometry Collection data";
          }
        }
        else {
          lVar14 = (**(code **)(*param_1 + 0xa98))(param_1);
          if (lVar14 != 0) {
            local_970 = &local_798;
            local_978 = FUN_143b7fa62;
            local_798 = param_4;
            FUN_1484b2040(lVar14);
            goto LAB_1484cea80;
          }
          local_798 = L"CopyMeshFromComponent_MissingDynamicMesh";
          lStack_790._0_4_ = 0x28;
          FUN_1446e940c(&local_2b0,&local_798);
          local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
          lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
          FUN_1446e940c(local_4d0,&local_798);
          pwVar17 = L"DynamicMeshComponent has a null DynamicMesh";
        }
        goto LAB_1484ce68b;
      }
      lVar14 = param_1[0xcc];
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar14);
      }
      else if (lVar14 == 0) {
        local_798 = L"CopyMeshFromComponent_MissingStaticMesh";
        lStack_790._0_4_ = 0x27;
        FUN_1446e940c(&local_2b0,&local_798);
        local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
        lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
        FUN_1446e940c(local_4d0,&local_798);
        pwVar17 = L"StaticMeshComponent has a null StaticMesh";
        goto LAB_1484ce68b;
      }
      local_8a3 = param_2[10];
      local_8a4 = 1;
      if (param_2[9] == 0) {
        local_8a4 = local_8a3;
      }
      local_9e8 = param_2[0xb];
      local_8a2 = 0x101;
      local_9d8 = param_6;
      local_9f0 = (undefined8 *)CONCAT71(local_9f0._1_7_,param_2[8]);
      local_9f8 = (code **)CONCAT44(local_9f8._4_4_,*(undefined4 *)(param_2 + 4));
      local_9e0 = param_4;
      uVar7 = FUN_143b7a3de(lVar14,param_1,&local_8a4,*param_2);
      uVar15 = (ulonglong)uVar7;
      lVar11 = FUN_144a80466();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        FUN_146bffece(&local_2b0,param_4);
        FUN_14582f278(param_4);
        local_9f8 = (code **)((ulonglong)local_9f8 & 0xffffffffffffff00);
        FUN_1411b354a(local_4d0,0,0,0);
        FUN_146c03744(local_4d0,&local_2b0,1,0);
        local_778 = 0;
        uStack_770 = 0;
        local_798 = (wchar_t *)0x0;
        lStack_790 = 0;
        uStack_76c = 0x80;
        uStack_768 = 0xffffffff;
        uStack_764 = 0;
        local_758 = 0;
        uStack_750 = (ulonglong)uStack_750._4_4_ << 0x20;
        local_728 = 0;
        local_720 = 0;
        local_748 = 0;
        uStack_740 = 0;
        local_71c = 0xffffffff00000080;
        local_714 = 0;
        local_708 = 0;
        local_700 = 0;
        local_6f8 = 0x101;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6f0 = 0;
        uStack_6e8 = 0;
        local_6c4 = 0xffffffff00000080;
        local_6bc = 0;
        local_6b0 = 0;
        local_6a8 = 0;
        local_680 = 0;
        local_678 = 0;
        local_6a0 = 0;
        uStack_698 = 0;
        local_674 = 0xffffffff00000080;
        local_66c = 0;
        local_660 = 0;
        local_658 = 0;
        local_650 = 0x101;
        local_628 = 0;
        local_620 = 0;
        local_648 = 0;
        uStack_640 = 0;
        local_61c = 0xffffffff00000080;
        local_614 = 0;
        local_608 = 0;
        local_600 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5f8 = 0;
        uStack_5f0 = 0;
        local_5cc = 0xffffffff00000080;
        local_5c4 = 0;
        local_5b8 = 0;
        local_5b0 = 0;
        local_5a7 = 1;
        local_5a8 = 1;
        local_580 = 0;
        local_578 = 0;
        local_5a0 = 0;
        uStack_598 = 0;
        local_574 = 0xffffffff00000080;
        local_56c = 0;
        local_560 = 0;
        local_558 = 0;
        local_530 = 0;
        local_528 = 0;
        local_550 = 0;
        uStack_548 = 0;
        local_524 = 0xffffffff00000080;
        local_51c = 0;
        local_510 = 0;
        local_508 = 0;
        local_500 = 0x101;
        local_4f8 = 0;
        uStack_4f0 = 0;
        local_4e8 = 0;
        uStack_4e0 = 0;
        local_8b0 = local_4d0;
        iVar8 = FUN_147af9036(param_1);
        if (0 < iVar8) {
          iVar19 = 0;
          do {
            cVar6 = FUN_147af903e(param_1,iVar19);
            if (cVar6 != '\0') {
              local_918 = 0;
              uStack_910 = 0;
              local_908 = 0;
              uStack_904 = 0;
              uStack_900 = 0;
              uStack_8fc = 0x3ff00000;
              local_8e8 = 0;
              uStack_8e0 = 0;
              local_8f8 = 0;
              uStack_8f0 = 0;
              local_8d8 = 0x3ff0000000000000;
              uStack_8d0 = 0x3ff0000000000000;
              local_8c8 = 0x3ff0000000000000;
              uStack_8c0 = 0;
              FUN_1410499a6(param_1,iVar19,&local_918,0);
              local_958 = CONCAT44(uStack_904,local_908);
              uStack_950 = CONCAT44(uStack_8fc,uStack_900);
              local_968 = local_918;
              uStack_960 = uStack_910;
              local_948 = (undefined4)local_8f8;
              uStack_944 = local_8f8._4_4_;
              uStack_940 = (undefined4)uStack_8f0;
              uStack_93c = uStack_8f0._4_4_;
              local_938 = local_8e8;
              local_930 = (undefined4)local_8d8;
              uStack_92c = local_8d8._4_4_;
              uStack_928 = (undefined4)uStack_8d0;
              uStack_924 = uStack_8d0._4_4_;
              local_920 = local_8c8;
              FUN_146bccf46(&local_798);
              local_7c8 = 0;
              local_7b8 = &PTR_LAB_14aefec40;
              local_7f0 = &local_968;
              local_7d8[0] = FUN_143b7f9fa;
              local_808 = 0;
              local_7f8 = &PTR_LAB_14aefec20;
              local_818 = FUN_143b7f992;
              local_9f8 = local_7d8;
              local_9f0 = (undefined8 *)((ulonglong)local_9f0 & 0xffffffffffffff00);
              local_7b0 = local_7f0;
              FUN_146bcbbdc(&local_8b0,&local_2b0,&local_798);
            }
            iVar19 = iVar19 + 1;
          } while (iVar8 != iVar19);
        }
        FUN_146c00942(param_4,local_4d0);
        FUN_146bfdcfe(&local_798);
        FUN_141082778(local_4d0);
        FUN_141082778(&local_2b0);
      }
      if (param_8 != (longlong *)0x0) {
        iVar8 = *(int *)(lVar14 + 0x160);
        FUN_141841038(param_8,iVar8,1);
        if (0 < (longlong)iVar8) {
          uVar18 = 0;
          do {
            uVar12 = FUN_144b2ab82(lVar14,uVar18 & 0xffffffff);
            *(undefined8 *)(*param_8 + uVar18 * 8) = uVar12;
            uVar18 = uVar18 + 1;
          } while ((longlong)iVar8 != uVar18);
        }
      }
LAB_1484cea83:
      if ((param_3 & (byte)uVar15) == 1) {
        local_798 = (wchar_t *)*param_5;
        lStack_790 = param_5[1];
        local_788 = param_5[2];
        lStack_780 = param_5[3];
        local_778 = param_5[4];
        uStack_770 = (undefined4)param_5[5];
        uStack_76c = (undefined4)((ulonglong)param_5[5] >> 0x20);
        uStack_768 = (undefined4)param_5[6];
        uStack_764 = (undefined4)((ulonglong)param_5[6] >> 0x20);
        lStack_760 = param_5[8];
        local_758 = param_5[9];
        uStack_750 = param_5[10];
        uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        FUN_146c3cd49(param_4,&local_798,1);
      }
      goto LAB_1484ce6bc;
    }
    lVar14 = param_1[0xcc];
    if ((lVar14 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar14);
    }
    else if (lVar14 == 0) {
      local_798 = L"CopyMeshFromSplineMeshComponent_MissingStaticMesh";
      lStack_790._0_4_ = 0x31;
      FUN_1446e940c(&local_2b0,&local_798);
      local_798 = L"ModelingComponents_SceneComponentToDynamicMesh";
      lStack_790 = CONCAT44(lStack_790._4_4_,0x2e);
      FUN_1446e940c(local_4d0,&local_798);
      pwVar17 = L"SplineMeshComponent has a null StaticMesh";
      goto LAB_1484ce68b;
    }
    local_89d = param_2[10];
    local_89e = 1;
    if (param_2[9] == 0) {
      local_89e = local_89d;
    }
    local_9e8 = param_2[0xb];
    local_89c = 0x101;
    local_9d8 = param_6;
    local_9f0 = (undefined8 *)CONCAT71(local_9f0._1_7_,param_2[8]);
    local_9f8 = (code **)CONCAT44(local_9f8._4_4_,*(undefined4 *)(param_2 + 4));
    local_9e0 = param_4;
    cVar6 = FUN_143b7a3de(lVar14,param_1,&local_89e,*param_2);
    if (cVar6 != '\0') {
      FUN_1484cf41d(param_1,param_4,param_2[10]);
      if (param_8 != (longlong *)0x0) {
        iVar8 = *(int *)(lVar14 + 0x160);
        uVar15 = CONCAT71(uVar16,1);
        FUN_141841038(param_8,iVar8,1);
        if (0 < (longlong)iVar8) {
          uVar18 = 0;
          do {
            uVar12 = FUN_144b2ab82(lVar14,uVar18 & 0xffffffff);
            *(undefined8 *)(*param_8 + uVar18 * 8) = uVar12;
            uVar18 = uVar18 + 1;
          } while ((longlong)iVar8 != uVar18);
        }
        goto LAB_1484cea83;
      }
LAB_1484cea80:
      uVar15 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
      goto LAB_1484cea83;
    }
  }
LAB_1484ce6ba:
  uVar15 = 0;
LAB_1484ce6bc:
  if ((local_90 ^ (ulonglong)auStack_a18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 1484cf41d FUN_1484cf41d body=780 status=ok
// SIG undefined FUN_1484cf41d(void)

void FUN_1484cf41d(code *param_1,code *param_2,char param_3)

{
  code cVar1;
  longlong lVar2;
  longlong lVar3;
  code **ppcVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  code **local_98;
  code **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  uint local_68;
  code *local_60;
  code *local_58;
  code **local_50;
  longlong local_48;
  code *local_40;
  code ***local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = param_1[0x844];
  local_68 = (uint)(byte)cVar1;
  if ((ulonglong)(byte)cVar1 < 3) {
    puVar7 = (undefined8 *)(&DAT_14aeff7b8 + (uint)(byte)cVar1 * 8);
    puVar8 = (undefined8 *)(&DAT_14aeff7d0 + (ulonglong)(byte)cVar1 * 8);
    puVar10 = (undefined8 *)(&DAT_14aeff7e8 + (uint)(byte)cVar1 * 8);
  }
  else {
    local_68 = 0xffffffff;
    puVar10 = &DAT_14c8464e0;
    puVar8 = &DAT_14c8464e8;
    puVar7 = &DAT_14c8464f0;
  }
  local_88 = *puVar10;
  local_80 = *puVar8;
  local_78 = *puVar7;
  local_90 = &local_70;
  local_70 = param_1;
  if (param_3 == '\0') goto LAB_1484cf65a;
  lVar2 = *(longlong *)(param_2 + 0x208);
  if (lVar2 == 0) {
    if (param_2[0x70] != (code)0x1) goto LAB_1484cf65a;
    iVar6 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    ppcVar4 = &local_40;
    local_98 = &local_60;
    local_60 = (code *)0x0;
    local_58 = (code *)((ulonglong)local_58 & 0xffffffff00000000);
    pcVar11 = FUN_143b80dcc;
    ppcVar9 = &local_30;
    local_40 = param_2;
    local_38 = (code ***)&local_70;
  }
  else {
    iVar6 = *(int *)(lVar2 + 0x38);
    if (iVar6 < 2) {
LAB_1484cf5de:
      if (iVar6 < 1) goto LAB_1484cf65a;
      plVar5 = *(longlong **)(lVar2 + 0x30);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 8);
      if (lVar3 != 0) {
        local_60 = (code *)&local_48;
        local_38 = (code ***)&local_60;
        local_98 = &local_30;
        local_30 = (code *)0x0;
        local_28 = (code **)((ulonglong)local_28 & 0xffffffff00000000);
        local_40 = FUN_143b7dd0c;
        local_a0 = 0;
        local_58 = param_2;
        local_50 = &local_70;
        local_48 = lVar3;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc));
        iVar6 = *(int *)(lVar2 + 0x38);
      }
      if (iVar6 < 3) goto LAB_1484cf5de;
      plVar5 = *(longlong **)(lVar2 + 0x30);
      lVar3 = plVar5[2];
      if (lVar3 != 0) {
        local_60 = (code *)&local_48;
        local_38 = (code ***)&local_60;
        local_98 = &local_30;
        local_30 = (code *)0x0;
        local_28 = (code **)((ulonglong)local_28 & 0xffffffff00000000);
        local_40 = FUN_143b7dd0c;
        local_a0 = 0;
        local_58 = param_2;
        local_50 = &local_70;
        local_48 = lVar3;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc));
        iVar6 = *(int *)(lVar2 + 0x38);
        goto LAB_1484cf5de;
      }
    }
    lVar2 = *plVar5;
    if (lVar2 == 0) goto LAB_1484cf65a;
    local_60 = (code *)&local_48;
    iVar6 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
    ppcVar4 = &local_60;
    local_98 = &local_30;
    local_30 = (code *)0x0;
    local_28 = (code **)((ulonglong)local_28._4_4_ << 0x20);
    pcVar11 = FUN_143b7dd0c;
    ppcVar9 = &local_40;
    local_58 = param_2;
    local_50 = &local_70;
    local_48 = lVar2;
  }
  *ppcVar9 = pcVar11;
  ppcVar9[1] = (code *)ppcVar4;
  local_a0 = 0;
  FUN_1401f8d10(L"ParallelFor Task",iVar6);
LAB_1484cf65a:
  local_28 = &local_40;
  local_38 = &local_90;
  local_98 = &local_60;
  local_60 = (code *)0x0;
  local_58 = (code *)((ulonglong)local_58 & 0xffffffff00000000);
  local_30 = FUN_143b8100c;
  local_a0 = 0;
  local_40 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),1);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cf72a FUN_1484cf72a body=179 status=ok
// SIG undefined FUN_1484cf72a(void)

void FUN_1484cf72a(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FUN_1484cfb4f();
    if (*param_3 == '\x01') {
      local_70 = *(undefined4 *)(param_1 + 0x240);
      uStack_6c = *(undefined4 *)(param_1 + 0x244);
      uStack_68 = *(undefined4 *)(param_1 + 0x248);
      uStack_64 = *(undefined4 *)(param_1 + 0x24c);
      local_60 = *(undefined4 *)(param_1 + 0x250);
      uStack_5c = *(undefined4 *)(param_1 + 0x254);
      uStack_58 = *(undefined4 *)(param_1 + 600);
      uStack_54 = *(undefined4 *)(param_1 + 0x25c);
      local_50 = *(undefined4 *)(param_1 + 0x260);
      uStack_4c = *(undefined4 *)(param_1 + 0x264);
      uStack_48 = *(undefined4 *)(param_1 + 0x268);
      uStack_44 = *(undefined4 *)(param_1 + 0x26c);
      local_38 = *(undefined4 *)(param_1 + 0x280);
      uStack_34 = *(undefined4 *)(param_1 + 0x284);
      uStack_30 = *(undefined4 *)(param_1 + 0x288);
      uStack_2c = *(undefined4 *)(param_1 + 0x28c);
      local_40 = *(undefined8 *)(param_1 + 0x270);
      local_28 = *(undefined8 *)(param_1 + 0x290);
      FUN_146c3cd49(param_2,&local_70,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cf7de FUN_1484cf7de body=344 status=ok
// SIG undefined FUN_1484cf7de(void)

undefined8 FUN_1484cf7de(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_148 [32];
  longlong local_128 [6];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [144];
  undefined1 *local_58;
  undefined1 **local_50;
  code *local_48;
  undefined1 **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14582f278(param_2);
  lVar2 = (**(code **)(*param_1 + 0xa90))(param_1);
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar2 + 8);
  }
  if (param_1[0x115] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (cVar1 != '\0') {
      uVar3 = 0;
      if ((param_3 < 0) || (iVar4 <= param_3)) goto LAB_1484cf85a;
      lVar2 = FUN_144a7954a(param_1);
      if (lVar2 != 0) {
        FUN_143b7a8b4(local_e8,param_1,param_3,param_4);
        local_40 = &local_f0;
        local_128[4] = 0;
        local_128[5] = 0;
        local_128[2] = 0;
        local_128[3] = 0;
        local_128[0] = 0;
        local_128[1] = 0;
        local_48 = FUN_143b80dac;
        local_f8 = local_e8;
        local_f0 = local_e8;
        FUN_1484d7fde(local_128,param_2,local_e8);
        local_58 = &LAB_143b80dc2;
        local_50 = &local_f8;
        FUN_1484d8504(local_128,param_2,local_e8);
        if (local_128[2] != 0) {
          FUN_1400020a8();
        }
        if (local_128[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1484cf938(local_e8);
        uVar3 = 1;
        goto LAB_1484cf85a;
      }
    }
  }
  uVar3 = 0;
LAB_1484cf85a:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cf938 FUN_1484cf938 body=106 status=ok
// SIG undefined FUN_1484cf938(void)

void FUN_1484cf938(longlong *param_1)

{
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484cf9a2 FUN_1484cf9a2 body=239 status=ok
// SIG undefined FUN_1484cf9a2(void)

undefined8 * FUN_1484cf9a2(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  void *local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 1;
  local_56 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_54 = 2;
  FUN_148278c44(&local_88,param_2,0);
  cVar1 = FUN_148266a60(&local_88);
  _Src = local_50;
  if (cVar1 != '\0') {
    lVar2 = (longlong)(int)uStack_48;
    if (0 < lVar2) {
      *param_1 = 0;
      *(int *)(param_1 + 1) = (int)uStack_48;
      FUN_148278bd0(param_1,uStack_48 & 0xffffffff,0);
      memcpy((void *)*param_1,_Src,lVar2 * 0xc);
      goto LAB_1484cfa5b;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146bd1316(param_2,param_1,1);
LAB_1484cfa5b:
  FUN_148267160(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cfa92 FUN_1484cfa92 body=188 status=ok
// SIG undefined FUN_1484cfa92(void)

void FUN_1484cfa92(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1484cfb4f();
    if (*param_3 == '\x01') {
      puVar1 = &DAT_14c846480;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
      }
      local_70 = *(undefined4 *)puVar1;
      uStack_6c = *(undefined4 *)((longlong)puVar1 + 4);
      uStack_68 = *(undefined4 *)(puVar1 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_60 = *(undefined4 *)(puVar1 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x14);
      uStack_58 = *(undefined4 *)(puVar1 + 3);
      uStack_54 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      local_50 = *(undefined4 *)(puVar1 + 4);
      uStack_4c = *(undefined4 *)((longlong)puVar1 + 0x24);
      uStack_48 = *(undefined4 *)(puVar1 + 5);
      uStack_44 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      local_38 = *(undefined4 *)(puVar1 + 8);
      uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x44);
      uStack_30 = *(undefined4 *)(puVar1 + 9);
      uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x4c);
      local_40 = puVar1[6];
      local_28 = puVar1[10];
      FUN_146c3cd49(param_2,&local_70,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484cfb4f FUN_1484cfb4f body=1519 status=ok
// SIG undefined FUN_1484cfb4f(void)

void FUN_1484cfb4f(longlong param_1,int *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  float *pfVar15;
  double dVar16;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  longlong local_310;
  undefined8 local_308 [8];
  undefined **local_2c8;
  int *local_2c0;
  double local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_280;
  undefined8 local_270;
  double dStack_268;
  double local_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248 [2];
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  int *local_108;
  double dStack_100;
  double local_f8;
  undefined3 uStack_f0;
  undefined5 uStack_ed;
  undefined3 uStack_e8;
  undefined5 uStack_e5;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14582f278(param_2);
  if ((*(char *)(param_3 + 1) != '\0') || (*(char *)(param_3 + 5) == '\x01')) {
    FUN_14582eef4(param_2,0);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    pfVar15 = *(float **)(param_1 + 0x28);
    pfVar11 = pfVar15 + (longlong)*(int *)(param_1 + 0x30) * 0x10;
    do {
      local_2b8 = (double)pfVar15[2];
      local_2c0 = (int *)(double)pfVar15[1];
      local_2c8 = (undefined **)(double)*pfVar15;
      dVar16 = (double)pfVar15[3];
      local_f8 = local_2b8 * dVar16;
      dStack_100 = (double)local_2c0 * dVar16;
      local_108 = (int *)((double)local_2c8 * dVar16);
      uStack_f0 = 0;
      uStack_ed = 0;
      uStack_e8 = 0;
      uStack_e5 = 0;
      local_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      uStack_d4 = 0x3ff00000;
      local_228 = DAT_14c8463c8;
      local_238 = (int *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_230._0_4_ = (undefined4)DAT_14c8463c0;
      uStack_230._4_4_ = DAT_14c8463c0._4_4_;
      FUN_146bfb7f2(&uStack_f0,&local_238,&local_2c8);
      bVar3 = *(byte *)((longlong)pfVar15 + 0x36);
      if (bVar3 != 0) {
        local_248[0] = 0;
        local_248[1] = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_310 = param_3;
        FUN_144a1a59e(local_248,bVar3,1);
        uVar14 = 0;
        do {
          lVar8 = (longlong)
                  *(int *)(*(longlong *)(param_1 + 0x38) +
                          ((longlong)(int)pfVar15[4] + uVar14) * 0x18);
          lVar12 = *(longlong *)(param_1 + 0x58);
          local_260 = (double)*(float *)(lVar12 + 8 + lVar8 * 0xc);
          dStack_268 = (double)*(float *)(lVar12 + 4 + lVar8 * 0xc);
          local_270 = (int *)(double)*(float *)(lVar12 + lVar8 * 0xc);
          local_218 = DAT_14c846338;
          local_220 = DAT_14c846330;
          local_20c = DAT_14c846338;
          local_214 = DAT_14c846330;
          local_208 = DAT_14c84635c;
          local_200 = 0;
          local_1fe = 0;
          local_238 = local_270;
          local_228 = local_260;
          uStack_230 = dStack_268;
          uVar6 = FUN_146c02208(param_2,&local_238);
          *(undefined4 *)(local_248[0] + uVar14 * 4) = uVar6;
          FUN_146bca7ae(&local_108,&local_238,&local_270,2);
          uVar4 = uStack_250;
          lVar12 = (longlong)(int)uStack_250;
          uVar7 = (int)uStack_250 + 1;
          uStack_250 = CONCAT44(uStack_250._4_4_,uVar7);
          if (uStack_250._4_4_ < uVar7) {
            FUN_14489624a(&local_258,uVar4 & 0xffffffff);
          }
          puVar1 = (undefined4 *)(local_258 + lVar12 * 0x10);
          *puVar1 = (undefined4)local_238;
          puVar1[1] = local_238._4_4_;
          *(double *)(puVar1 + 2) = uStack_230;
          uVar14 = uVar14 + 1;
        } while (bVar3 != uVar14);
        FUN_1484cf9a2(&local_238,&local_258);
        iVar10 = -1;
        if (*(char *)(local_310 + 1) != '\0') {
          iVar10 = param_2[0x6c];
          param_2[0x6c] = iVar10 + 1;
        }
        if ((longlong)(int)uStack_230 != 0) {
          piVar2 = local_238 + (longlong)(int)uStack_230 * 3;
          piVar13 = local_238;
          do {
            local_270 = (int *)CONCAT44(*(undefined4 *)(local_248[0] + (longlong)piVar13[1] * 4),
                                        *(undefined4 *)(local_248[0] + (longlong)*piVar13 * 4));
            dStack_268 = (double)CONCAT44(dStack_268._4_4_,
                                          *(undefined4 *)(local_248[0] + (longlong)piVar13[2] * 4));
            FUN_146c01152(param_2,&local_270,iVar10);
            piVar13 = piVar13 + 3;
          } while (piVar13 != piVar2);
        }
        param_3 = local_310;
        if (local_238 != (int *)0x0) {
          FUN_1400020a8(local_238);
        }
        if (local_258 != 0) {
          FUN_1400020a8();
        }
        if (local_248[0] != 0) {
          FUN_1400020a8();
        }
      }
      pfVar15 = pfVar15 + 0x10;
    } while (pfVar15 != pfVar11);
  }
  if (*(char *)(param_3 + 2) != '\0') {
    local_318 = 0;
    FUN_14831e774(param_2,&local_270,local_248,&local_258);
    local_2c8 = &PTR_FUN_149f36300;
    local_2b0 = 0;
    local_280 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    local_294 = 0;
    uStack_28c = 0;
    local_2b8 = 9.999999974752427e-07;
    if (9.999999974752427e-07 <= (double)local_270 * 0.1) {
      local_2b8 = (double)local_270 * 0.1;
    }
    local_2c0 = param_2;
    FUN_146c3d996();
    cVar5 = FUN_146c047ec(param_2);
    dVar16 = uStack_230;
    if ((cVar5 == '\0') && (*(char *)(param_3 + 3) == '\x01')) {
      dStack_100 = 0.0;
      uStack_e8 = 0;
      uStack_e5 = 0;
      local_e0 = local_e0 & 0xff000000;
      local_f8 = 0.0;
      uStack_f0 = 0;
      uStack_ed = 0;
      uStack_dc = 2;
      local_d8 = 1;
      local_c8 = 0;
      local_b8 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_108 = param_2;
      FUN_146c68b4c(&local_108);
      if ((longlong)local_f8._0_4_ != 0) {
        lVar12 = (longlong)local_f8._0_4_ << 6;
        dVar16 = dStack_100;
        do {
          FUN_146c7f310(local_308,dVar16);
          FUN_1483150ae(&local_238,param_2,local_308);
          FUN_148315182(&local_238,0xffffffff);
          FUN_148315ddc(&local_238);
          dVar16 = (double)((longlong)dVar16 + 0x40);
          lVar12 = lVar12 + -0x40;
        } while (lVar12 != 0);
      }
      FUN_1482f1656(&local_108);
      dVar16 = uStack_230;
    }
    uStack_230._4_4_ = (undefined4)((ulonglong)dVar16 >> 0x20);
    if (*(char *)(param_3 + 4) == '\x01') {
      uStack_230._0_4_ = 5;
      local_228 = 0.99;
      local_220 = CONCAT71(local_220._1_7_,1);
      local_238 = param_2;
      FUN_148323348();
      dVar16 = (double)CONCAT44(uStack_230._4_4_,(int)uStack_230);
    }
    uStack_230 = dVar16;
    FUN_146c09afc(param_2,0);
  }
  if (*(char *)(param_3 + 5) == '\x01') {
    FUN_14582ed12(param_2);
    if (*(int *)(*(longlong *)(param_2 + 0x82) + 0x38) < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(*(longlong *)(param_2 + 0x82) + 0x30);
    }
    FUN_146c39d50(param_2,uVar9);
    FUN_146c3906a(param_2,0,1,1);
    if (*(char *)(param_3 + 1) == '\0') {
      FUN_146c03ab2(param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d0140 FUN_1484d0140 body=558 status=ok
// SIG undefined FUN_1484d0140(void)

void FUN_1484d0140(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar3 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar4 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_5c);
  }
  puVar2 = local_5c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_64;
  local_78 = local_60;
  uVar1 = FUN_1484d0370(param_1,plVar3,plVar4,puVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0370 FUN_1484d0370 body=346 status=ok
// SIG undefined FUN_1484d0370(void)

ulonglong FUN_1484d0370(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                       undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_80 [8];
  undefined4 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == *(uint *)(param_3 + 1)) {
    if (0 < (int)uVar3) {
      local_c0 = param_1 + 0x698;
      lVar5 = 0;
      do {
        local_a8 = *(undefined8 *)(*param_2 + 0x10 + lVar5);
        puVar1 = (undefined8 *)(*param_2 + lVar5);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        uStack_90 = *(undefined8 *)(*param_3 + 0x10 + lVar5);
        puVar2 = (undefined4 *)(*param_3 + lVar5);
        uStack_a0 = *puVar2;
        uStack_9c = puVar2[1];
        uStack_98 = puVar2[2];
        uStack_94 = puVar2[3];
        uVar4 = *param_4;
        FUN_1448215fa(param_1);
        FUN_1484dc6dc(local_c0,local_80);
        local_78[8] = uStack_98;
        local_78[9] = uStack_94;
        local_78[10] = (undefined4)uStack_90;
        local_78[0xb] = uStack_90._4_4_;
        local_78[4] = (undefined4)local_a8;
        local_78[5] = local_a8._4_4_;
        local_78[6] = uStack_a0;
        local_78[7] = uStack_9c;
        *local_78 = (undefined4)local_b8;
        local_78[1] = local_b8._4_4_;
        local_78[2] = (undefined4)uStack_b0;
        local_78[3] = uStack_b0._4_4_;
        local_78[0xc] = uVar4;
        local_78[0xd] = param_5;
        local_78[0xe] = param_6;
        *(undefined1 *)(param_1 + 0x690) = 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar6 * 0x18 != lVar5);
    }
  }
  else {
    uVar6 = 0;
    FUN_1415b7ec4(L"InStart and InEnd arrays are not the same size.",2,0);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1484d04e2 FUN_1484d04e2 body=96 status=ok
// SIG undefined FUN_1484d04e2(void)

void FUN_1484d04e2(longlong param_1)

{
  if (*(int *)(param_1 + 0x6a4) < 0) {
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    FUN_140b7ce44(param_1 + 0x698,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x6a0) = 0;
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x690) = 1;
  return;
}



// FUNCTION 1484d0542 FUN_1484d0542 body=197 status=ok
// SIG undefined FUN_1484d0542(void)

void FUN_1484d0542(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_20);
  }
  param_1[0xca] = lVar1;
  (**(code **)(*param_1 + 0x638))(param_1,0,lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0608 FUN_1484d0608 body=68 status=ok
// SIG undefined FUN_1484d0608(void)

void FUN_1484d0608(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  param_1[0xca] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001484d0649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1,0,param_2);
  return;
}



// FUNCTION 1484d0658 FUN_1484d0658 body=12 status=ok
// SIG undefined FUN_1484d0658(void)

void FUN_1484d0658(longlong param_1)

{
  FUN_1484d0664(param_1 + 0x698);
  return;
}



// FUNCTION 1484d0664 FUN_1484d0664 body=428 status=ok
// SIG undefined FUN_1484d0664(void)

void FUN_1484d0664(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140b7ce44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1406cd6a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x40 + lVar2 + -0x3c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1484d0812 FUN_1484d0812 body=126 status=ok
// SIG undefined FUN_1484d0812(void)

undefined4 FUN_1484d0812(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448215fa();
  FUN_1484dc6dc(param_1 + 0x698,local_30);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  local_28[0xc] = param_2[0xc];
  local_28[0xd] = uVar13;
  local_28[0xe] = uVar14;
  local_28[0xf] = uVar15;
  local_28[8] = uVar9;
  local_28[9] = uVar10;
  local_28[10] = uVar11;
  local_28[0xb] = uVar12;
  local_28[4] = uVar5;
  local_28[5] = uVar6;
  local_28[6] = uVar7;
  local_28[7] = uVar8;
  *local_28 = uVar1;
  local_28[1] = uVar2;
  local_28[2] = uVar3;
  local_28[3] = uVar4;
  *(undefined1 *)(param_1 + 0x690) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0892 FUN_1484d0892 body=130 status=ok
// SIG undefined FUN_1484d0892(void)

void FUN_1484d0892(longlong param_1,undefined4 param_2,undefined4 *param_3)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484dc7c2(param_1 + 0x698,local_30,param_2);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[8];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  uVar13 = param_3[0xd];
  uVar14 = param_3[0xe];
  uVar15 = param_3[0xf];
  local_28[0xc] = param_3[0xc];
  local_28[0xd] = uVar13;
  local_28[0xe] = uVar14;
  local_28[0xf] = uVar15;
  local_28[8] = uVar9;
  local_28[9] = uVar10;
  local_28[10] = uVar11;
  local_28[0xb] = uVar12;
  local_28[4] = uVar5;
  local_28[5] = uVar6;
  local_28[6] = uVar7;
  local_28[7] = uVar8;
  *local_28 = uVar1;
  local_28[1] = uVar2;
  local_28[2] = uVar3;
  local_28[3] = uVar4;
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x690) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0916 FUN_1484d0916 body=27 status=ok
// SIG undefined FUN_1484d0916(void)

void FUN_1484d0916(longlong param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x698) + 0x30 + (longlong)param_2 * 0x40) = *param_3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1484d0932 FUN_1484d0932 body=289 status=ok
// SIG undefined FUN_1484d0932(void)

void FUN_1484d0932(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      *(undefined4 *)(*local_88 + 0x34 + (longlong)iStack_6c * 0x40) = param_2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0a54 FUN_1484d0a54 body=289 status=ok
// SIG undefined FUN_1484d0a54(void)

void FUN_1484d0a54(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      *(undefined4 *)(*local_88 + 0x38 + (longlong)iStack_6c * 0x40) = param_2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0b76 FUN_1484d0b76 body=277 status=ok
// SIG undefined FUN_1484d0b76(void)

void FUN_1484d0b76(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x6c0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      *(undefined4 *)(*local_80 + 0x30 + (longlong)iStack_64 * 0x40) = *param_2;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  FUN_1448215fa(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d0c8c FUN_1484d0c8c body=41 status=ok
// SIG undefined FUN_1484d0c8c(void)

void FUN_1484d0c8c(longlong param_1)

{
  FUN_1484dc910(param_1 + 0x698);
  FUN_1448215fa(param_1);
  *(undefined1 *)(param_1 + 0x690) = 1;
  return;
}



// FUNCTION 1484d0cb6 FUN_1484d0cb6 body=52 status=ok
// SIG undefined FUN_1484d0cb6(void)

undefined4 FUN_1484d0cb6(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x6c0) <= (int)param_2)) {
    uVar2 = 0;
  }
  else {
    lVar3 = param_1 + 0x6a8;
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6b8);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
  }
  return uVar2;
}



// FUNCTION 1484d0cea FUN_1484d0cea body=66 status=ok
// SIG undefined FUN_1484d0cea(void)

undefined8 FUN_1484d0cea(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x6cc) < *(int *)(param_1 + 0x6a0)) {
    uVar1 = FUN_14001cc68(0x610,0x10);
    FUN_143b7ae18(uVar1,param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1484d0d32 FUN_1484d0d32 body=784 status=ok
// SIG undefined FUN_1484d0d32(void)

undefined8 FUN_1484d0d32(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x690) != '\x01') goto LAB_1484d0fca;
  plVar1 = (longlong *)(param_1 + 0x698);
  lVar2 = param_1 + 0x6a8;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  uStack_a8 = 0;
  lStack_b8 = lVar2;
  if (*(int *)(param_1 + 0x6c0) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    iVar10 = *(int *)(param_1 + 0x6c0);
  }
  uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
  local_e0 = local_c0;
  lStack_d8 = lStack_b8;
  local_d0 = local_b0;
  uVar7 = local_d0;
  local_d0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  local_e8 = plVar1;
  if (local_d0._4_4_ == iVar10) {
    uVar25 = 0;
    uVar26 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar16 = 0;
    uVar17 = 0;
    if (lStack_b8 != lVar2) goto LAB_1484d0e3c;
  }
  else {
LAB_1484d0e3c:
    bVar9 = true;
    uVar16 = 0;
    uVar17 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar12 = 0;
    uVar13 = 0;
    dVar11 = 0.0;
    iVar8 = local_d0._4_4_;
    local_d0 = uVar7;
    do {
      lVar3 = *local_e8 + (longlong)iVar8 * 0x40;
      dVar4 = *(double *)(*local_e8 + (longlong)iVar8 * 0x40);
      uVar25 = SUB84(dVar4,0);
      uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (bVar9) {
        uVar12 = (undefined4)*(undefined8 *)(lVar3 + 8);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20);
        uVar14 = (undefined4)*(undefined8 *)(lVar3 + 0x10);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
        uVar16 = uVar14;
        uVar17 = uVar15;
        uVar19 = uVar25;
        uVar20 = uVar26;
        uVar22 = uVar12;
        uVar23 = uVar13;
      }
      else {
        if (dVar4 <= (double)CONCAT44(uVar20,uVar19)) {
          uVar19 = uVar25;
          uVar20 = uVar26;
        }
        dVar6 = *(double *)(lVar3 + 8);
        dVar5 = *(double *)(lVar3 + 0x10);
        uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (dVar6 <= (double)CONCAT44(uVar23,uVar22)) {
          uVar22 = SUB84(dVar6,0);
          uVar23 = uVar25;
        }
        uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
        if (dVar5 <= (double)CONCAT44(uVar17,uVar16)) {
          uVar16 = SUB84(dVar5,0);
          uVar17 = uVar26;
        }
        if (dVar11 <= dVar4) {
          dVar11 = dVar4;
        }
        if ((double)CONCAT44(uVar13,uVar12) <= dVar6) {
          uVar12 = SUB84(dVar6,0);
          uVar13 = uVar25;
        }
        if ((double)CONCAT44(uVar15,uVar14) <= dVar5) {
          uVar14 = SUB84(dVar5,0);
          uVar15 = uVar26;
        }
        uVar25 = SUB84(dVar11,0);
        uVar26 = (undefined4)((ulonglong)dVar11 >> 0x20);
      }
      dVar11 = *(double *)(lVar3 + 0x18);
      dVar4 = *(double *)(lVar3 + 0x20);
      uVar21 = (undefined4)((ulonglong)dVar11 >> 0x20);
      if (dVar11 <= (double)CONCAT44(uVar20,uVar19)) {
        uVar19 = SUB84(dVar11,0);
        uVar20 = uVar21;
      }
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (dVar4 <= (double)CONCAT44(uVar23,uVar22)) {
        uVar22 = SUB84(dVar4,0);
        uVar23 = uVar24;
      }
      dVar6 = *(double *)(lVar3 + 0x28);
      uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
      if (dVar6 <= (double)CONCAT44(uVar17,uVar16)) {
        uVar16 = SUB84(dVar6,0);
        uVar17 = uVar18;
      }
      if ((double)CONCAT44(uVar26,uVar25) <= dVar11) {
        uVar25 = SUB84(dVar11,0);
        uVar26 = uVar21;
      }
      if ((double)CONCAT44(uVar13,uVar12) <= dVar4) {
        uVar12 = SUB84(dVar4,0);
        uVar13 = uVar24;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= dVar6) {
        uVar14 = SUB84(dVar6,0);
        uVar15 = uVar18;
      }
      local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
      FUN_1449c0562(&local_e0);
      bVar9 = false;
      dVar11 = (double)CONCAT44(uVar26,uVar25);
      iVar8 = local_d0._4_4_;
      uVar7 = local_d0;
    } while (local_e8 != plVar1 || (lStack_d8 != lVar2 || local_d0._4_4_ != iVar10));
  }
  local_d0 = uVar7;
  dVar4 = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar17,uVar16)) * 0.5;
  dVar11 = ((double)CONCAT44(uVar13,uVar12) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
  dVar6 = ((double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar20,uVar19)) * 0.5;
  *(double *)(param_1 + 0x658) = (double)CONCAT44(uVar20,uVar19) + dVar6;
  *(double *)(param_1 + 0x660) = (double)CONCAT44(uVar23,uVar22) + dVar11;
  *(double *)(param_1 + 0x668) = (double)CONCAT44(uVar17,uVar16) + dVar4;
  *(double *)(param_1 + 0x670) = dVar6;
  *(double *)(param_1 + 0x678) = dVar11;
  *(double *)(param_1 + 0x680) = dVar4;
  *(double *)(param_1 + 0x688) = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar11 * dVar11);
  *(undefined1 *)(param_1 + 0x690) = 0;
LAB_1484d0fca:
  FUN_144a80a4c(param_1 + 0x658,param_2,param_3);
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d1044 FUN_1484d1044 body=380 status=ok
// SIG undefined FUN_1484d1044(void)

void FUN_1484d1044(longlong param_1,int param_2,undefined8 *param_3,int param_4,char param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  ulonglong uStack_60;
  int local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_1;
  if (0 < param_4) {
    FUN_1484d0664(param_1 + 0x698,
                  (param_4 * param_2 + *(int *)(param_1 + 0x6a0)) - *(int *)(param_1 + 0x6cc));
    FUN_1484dc982(&local_68,param_4);
  }
  if (0 < param_2) {
    lVar1 = local_70 + 0x698;
    iVar16 = 0;
    do {
      bVar17 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar17) {
        FUN_1484dc982(&local_68,0);
      }
      local_58[0] = iVar16;
      (*(code *)*param_3)(param_3[1],local_58,&local_68);
      lVar13 = local_68;
      lVar15 = (longlong)(int)uStack_60;
      if (lVar15 != 0) {
        lVar14 = 0;
        do {
          FUN_1484dc6dc(lVar1);
          puVar2 = (undefined4 *)(lVar13 + lVar14);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined8 *)(lVar13 + 0x10 + lVar14);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar14);
          uVar10 = *puVar3;
          uVar11 = puVar3[1];
          puVar3 = (undefined8 *)(lVar13 + 0x30 + lVar14);
          uVar12 = puVar3[1];
          *(undefined8 *)(local_50 + 0xc) = *puVar3;
          *(undefined8 *)(local_50 + 0xe) = uVar12;
          *(undefined8 *)(local_50 + 8) = uVar10;
          *(undefined8 *)(local_50 + 10) = uVar11;
          *(undefined8 *)(local_50 + 4) = uVar8;
          *(undefined8 *)(local_50 + 6) = uVar9;
          *local_50 = uVar4;
          local_50[1] = uVar5;
          local_50[2] = uVar6;
          local_50[3] = uVar7;
          *(undefined1 *)(local_70 + 0x690) = 1;
          lVar14 = lVar14 + 0x40;
        } while (lVar15 * 0x40 != lVar14);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != param_2);
  }
  if (param_5 == '\0') {
    FUN_1448215fa(local_70);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d11c2 FUN_1484d11c2 body=45 status=ok
// SIG undefined FUN_1484d11c2(void)

longlong FUN_1484d11c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d11f0 FUN_1484d11f0 body=45 status=ok
// SIG undefined FUN_1484d11f0(void)

longlong FUN_1484d11f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1264 FUN_1484d1264 body=42 status=ok
// SIG undefined FUN_1484d1264(void)

undefined8 FUN_1484d1264(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents/Public/Selection\\MeshTopologySelectionMechanic.h"
                ,0xfd,L"Pure virtual not implemented (%s)",
                L"UMeshTopologySelectionMechanic::UpdateHighlight");
  return 0;
}



// FUNCTION 1484d128e FUN_1484d128e body=42 status=ok
// SIG undefined FUN_1484d128e(void)

undefined8 FUN_1484d128e(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents/Public/Selection\\MeshTopologySelectionMechanic.h"
                ,0x10d,L"Pure virtual not implemented (%s)",
                L"UMeshTopologySelectionMechanic::UpdateSelection");
  return 0;
}



// FUNCTION 1484d12b8 FUN_1484d12b8 body=45 status=ok
// SIG undefined FUN_1484d12b8(void)

longlong FUN_1484d12b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d12e6 FUN_1484d12e6 body=45 status=ok
// SIG undefined FUN_1484d12e6(void)

longlong FUN_1484d12e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1314 FUN_1484d1314 body=116 status=ok
// SIG undefined FUN_1484d1314(void)

undefined8 FUN_1484d1314(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1459ee818();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(param_2 + 0x40);
      if (((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c))) &&
         (cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1), cVar1 == '\0')) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001484d1385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1484d1388 FUN_1484d1388 body=123 status=ok
// SIG undefined FUN_1484d1388(void)

void FUN_1484d1388(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1459ee818();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(param_2 + 0x40);
      if (((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c))) &&
         (cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1), cVar1 == '\0')) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001484d1400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1484d1412 FUN_1484d1412 body=71 status=ok
// SIG undefined FUN_1484d1412(void)

undefined8 * FUN_1484d1412(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aef5140;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d145a FUN_1484d145a body=67 status=ok
// SIG undefined FUN_1484d145a(void)

void FUN_1484d145a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_1 + 8);
  (*(code *)*param_2)(param_2[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d14d8 FUN_1484d14d8 body=228 status=ok
// SIG undefined FUN_1484d14d8(void)

longlong FUN_1484d14d8(longlong param_1,undefined4 *param_2,undefined8 param_3,uint *param_4,
                      undefined4 *param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [96];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                    (*(longlong **)(param_1 + 0x10),param_2,param_3,param_6);
  *param_4 = uVar1;
  lVar2 = *(longlong *)(param_1 + 8);
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    local_b8 = *(undefined8 *)(param_2 + 4);
    FUN_146bd7ec2(local_b0,lVar2);
    *(undefined8 *)(param_5 + 4) = local_40;
    *param_5 = local_50;
    param_5[1] = uStack_4c;
    param_5[2] = uStack_48;
    param_5[3] = uStack_44;
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d15be FUN_1484d15be body=46 status=ok
// SIG undefined FUN_1484d15be(void)

undefined8 FUN_1484d15be(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  return uVar2;
}



// FUNCTION 1484d15fa FUN_1484d15fa body=29 status=ok
// SIG undefined FUN_1484d15fa(void)

undefined8 FUN_1484d15fa(longlong param_1,undefined8 param_2)

{
  FUN_145c688c4(*(undefined8 *)(param_1 + 8),param_2,0);
  return param_2;
}



// FUNCTION 1484d168c FUN_1484d168c body=28 status=ok
// SIG undefined FUN_1484d168c(void)

undefined8
FUN_1484d168c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_146c13dec(param_3,param_2,param_4);
  return param_2;
}



// FUNCTION 1484d16a8 FUN_1484d16a8 body=117 status=ok
// SIG undefined FUN_1484d16a8(void)

undefined8
FUN_1484d16a8(undefined8 param_1,longlong param_2,int param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    if ((int)param_4 < 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x28) <= (int)param_4) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)param_4 * 8);
    if ((lVar1 != 0) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(lVar1 + 0x78) + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
                     (ulonglong)(param_3 * 3 & 0x1ff) * 4))) {
      FUN_146c35244(lVar1,param_3,param_5,param_6,param_7);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1484d17dc FUN_1484d17dc body=46 status=ok
// SIG undefined FUN_1484d17dc(void)

undefined8
FUN_1484d17dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  FUN_146c148ec(param_3,param_2,param_4,*param_5,*(undefined4 *)(param_5 + 1),
                *(undefined4 *)(param_5 + 2));
  return param_2;
}



// FUNCTION 1484d180a FUN_1484d180a body=166 status=ok
// SIG undefined FUN_1484d180a(void)

undefined8
FUN_1484d180a(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,float *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) ||
      (lVar1 = **(longlong **)(*(longlong *)(param_2 + 0x208) + 0x30), lVar1 == 0)) ||
     (*(int *)(*(longlong *)
                (*(longlong *)(lVar1 + 0x78) + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
              (ulonglong)(param_3 * 3 & 0x1ff) * 4) < 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1483b2fbe(lVar1,param_3,param_4,&local_30);
    *param_5 = (float)local_30;
    param_5[1] = (float)local_28;
    param_5[2] = (float)local_20;
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d18b2 FUN_1484d18b2 body=165 status=ok
// SIG undefined FUN_1484d18b2(void)

undefined8
FUN_1484d18b2(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,uint param_5,
             float *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  if ((-1 < (int)param_5) && ((int)param_5 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (ulonglong)param_5 * 8);
    if ((lVar1 == 0) ||
       (*(int *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x78) + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
                (ulonglong)(param_3 * 3 & 0x1ff) * 4) < 0)) {
      uVar2 = 0;
    }
    else {
      FUN_1483b6602(lVar1,param_3,param_4,&local_28);
      *param_6 = (float)local_28;
      param_6[1] = (float)local_20;
      uVar2 = 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d1958 FUN_1484d1958 body=201 status=ok
// SIG undefined FUN_1484d1958(void)

undefined8
FUN_1484d1958(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,float *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
  if ((lVar1 == 0) ||
     (*(int *)(*(longlong *)
                (*(longlong *)(lVar1 + 0x78) + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
              (ulonglong)(param_3 * 3 & 0x1ff) * 4) < 0)) {
    uVar2 = 0;
  }
  else {
    local_38 = 0.0;
    dStack_30 = 0.0;
    local_28 = 0.0;
    local_20 = 1.0;
    FUN_1484dc9e2(lVar1,param_3,param_4,&local_38);
    *param_5 = (float)local_38;
    param_5[1] = (float)dStack_30;
    param_5[2] = (float)local_28;
    param_5[3] = (float)local_20;
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d1a22 FUN_1484d1a22 body=60 status=ok
// SIG undefined FUN_1484d1a22(void)

bool FUN_1484d1a22(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_146c3bf9c(lVar1,param_3,param_4,param_5,param_6);
  }
  return lVar1 != 0;
}



// FUNCTION 1484d1a88 FUN_1484d1a88 body=32 status=ok
// SIG undefined FUN_1484d1a88(void)

undefined8 FUN_1484d1a88(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Generated");
  return param_2;
}



// FUNCTION 1484d1ab0 FUN_1484d1ab0 body=45 status=ok
// SIG undefined FUN_1484d1ab0(void)

longlong FUN_1484d1ab0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458506c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1ade FUN_1484d1ade body=48 status=ok
// SIG undefined FUN_1484d1ade(void)

longlong FUN_1484d1ade(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1458506c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1b0e FUN_1484d1b0e body=48 status=ok
// SIG undefined FUN_1484d1b0e(void)

longlong FUN_1484d1b0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_1458506c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1b6a FUN_1484d1b6a body=45 status=ok
// SIG undefined FUN_1484d1b6a(void)

longlong FUN_1484d1b6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1b98 FUN_1484d1b98 body=48 status=ok
// SIG undefined FUN_1484d1b98(void)

longlong FUN_1484d1b98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1bc8 FUN_1484d1bc8 body=48 status=ok
// SIG undefined FUN_1484d1bc8(void)

longlong FUN_1484d1bc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145865c60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1c04 FUN_1484d1c04 body=45 status=ok
// SIG undefined FUN_1484d1c04(void)

longlong FUN_1484d1c04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1c32 FUN_1484d1c32 body=48 status=ok
// SIG undefined FUN_1484d1c32(void)

longlong FUN_1484d1c32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1c62 FUN_1484d1c62 body=48 status=ok
// SIG undefined FUN_1484d1c62(void)

longlong FUN_1484d1c62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1c92 FUN_1484d1c92 body=42 status=ok
// SIG undefined FUN_1484d1c92(void)

undefined8 FUN_1484d1c92(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools/MultiSelectionMeshEditingTool.h"
                ,0x1d,L"Pure virtual not implemented (%s)",
                L"UMultiSelectionMeshEditingToolBuilder::CreateNewTool");
  return 0;
}



// FUNCTION 1484d1cbc FUN_1484d1cbc body=45 status=ok
// SIG undefined FUN_1484d1cbc(void)

longlong FUN_1484d1cbc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1411412a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1cea FUN_1484d1cea body=48 status=ok
// SIG undefined FUN_1484d1cea(void)

longlong FUN_1484d1cea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1411412a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1d1a FUN_1484d1d1a body=42 status=ok
// SIG undefined FUN_1484d1d1a(void)

undefined8 FUN_1484d1d1a(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools/MultiTargetWithSelectionTool.h"
                ,0x25,L"Pure virtual not implemented (%s)",
                L"UMultiTargetWithSelectionToolBuilder::CreateNewTool");
  return 0;
}



// FUNCTION 1484d1d48 FUN_1484d1d48 body=45 status=ok
// SIG undefined FUN_1484d1d48(void)

longlong FUN_1484d1d48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458dc158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1d76 FUN_1484d1d76 body=48 status=ok
// SIG undefined FUN_1484d1d76(void)

longlong FUN_1484d1d76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1458dc158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1da6 FUN_1484d1da6 body=42 status=ok
// SIG undefined FUN_1484d1da6(void)

undefined8 FUN_1484d1da6(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools/SingleSelectionMeshEditingTool.h"
                ,0x1d,L"Pure virtual not implemented (%s)",
                L"USingleSelectionMeshEditingToolBuilder::CreateNewTool");
  return 0;
}



// FUNCTION 1484d1dd0 FUN_1484d1dd0 body=45 status=ok
// SIG undefined FUN_1484d1dd0(void)

longlong FUN_1484d1dd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_1411412f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1dfe FUN_1484d1dfe body=48 status=ok
// SIG undefined FUN_1484d1dfe(void)

longlong FUN_1484d1dfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  thunk_FUN_1411412f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1e2e FUN_1484d1e2e body=42 status=ok
// SIG undefined FUN_1484d1e2e(void)

undefined8 FUN_1484d1e2e(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\SingleTargetWithSelectionTool.h"
                ,0x1c,L"Pure virtual not implemented (%s)",
                L"USingleTargetWithSelectionToolBuilder::CreateNewTool");
  return 0;
}



// FUNCTION 1484d1e5c FUN_1484d1e5c body=45 status=ok
// SIG undefined FUN_1484d1e5c(void)

longlong FUN_1484d1e5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145865dac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1e8a FUN_1484d1e8a body=48 status=ok
// SIG undefined FUN_1484d1e8a(void)

longlong FUN_1484d1e8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145865dac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1eba FUN_1484d1eba body=124 status=ok
// SIG undefined FUN_1484d1eba(void)

void FUN_1484d1eba(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484d1f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484d1f36 FUN_1484d1f36 body=45 status=ok
// SIG undefined FUN_1484d1f36(void)

longlong FUN_1484d1f36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3cfa6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1f6a FUN_1484d1f6a body=70 status=ok
// SIG undefined FUN_1484d1f6a(void)

undefined8 * FUN_1484d1f6a(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14aefa830;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1484acdb2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d1fc0 FUN_1484d1fc0 body=80 status=ok
// SIG undefined FUN_1484d1fc0(void)

void FUN_1484d1fc0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_1484b2040(*(undefined8 *)(param_1 + 0x710),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d2022 FUN_1484d2022 body=45 status=ok
// SIG undefined FUN_1484d2022(void)

longlong FUN_1484d2022(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2050 FUN_1484d2050 body=48 status=ok
// SIG undefined FUN_1484d2050(void)

longlong FUN_1484d2050(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2080 FUN_1484d2080 body=48 status=ok
// SIG undefined FUN_1484d2080(void)

longlong FUN_1484d2080(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d20b0 FUN_1484d20b0 body=48 status=ok
// SIG undefined FUN_1484d20b0(void)

longlong FUN_1484d20b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d20e0 FUN_1484d20e0 body=48 status=ok
// SIG undefined FUN_1484d20e0(void)

longlong FUN_1484d20e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x658;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2110 FUN_1484d2110 body=48 status=ok
// SIG undefined FUN_1484d2110(void)

longlong FUN_1484d2110(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x660;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2140 FUN_1484d2140 body=48 status=ok
// SIG undefined FUN_1484d2140(void)

longlong FUN_1484d2140(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x668;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2218 FUN_1484d2218 body=59 status=ok
// SIG undefined FUN_1484d2218(void)

undefined8 FUN_1484d2218(longlong *param_1)

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



// FUNCTION 1484d2326 FUN_1484d2326 body=59 status=ok
// SIG undefined FUN_1484d2326(void)

undefined8 FUN_1484d2326(longlong *param_1)

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



// FUNCTION 1484d23d4 FUN_1484d23d4 body=39 status=ok
// SIG undefined FUN_1484d23d4(void)

undefined8 * FUN_1484d23d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aefd850;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d23fc FUN_1484d23fc body=101 status=ok
// SIG undefined FUN_1484d23fc(void)

void FUN_1484d23fc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 5;
    if (5 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1484d2462(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x34) = param_3;
  return;
}



// FUNCTION 1484d2462 FUN_1484d2462 body=133 status=ok
// SIG undefined FUN_1484d2462(void)

void FUN_1484d2462(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 1484d24e8 FUN_1484d24e8 body=93 status=ok
// SIG undefined FUN_1484d24e8(void)

longlong FUN_1484d24e8(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1484d2546(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1484d2546 FUN_1484d2546 body=146 status=ok
// SIG undefined FUN_1484d2546(void)

longlong * FUN_1484d2546(longlong *param_1,longlong *param_2)

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



// FUNCTION 1484d25d8 FUN_1484d25d8 body=289 status=ok
// SIG undefined FUN_1484d25d8(void)

void FUN_1484d25d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((-1 < (int)param_2) &&
      (lVar1 = *(longlong *)(param_1 + 0x1d0),
      (int)param_2 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    FUN_146c14aac(lVar1,&local_50,param_2);
    dVar2 = *(double *)(param_1 + 0x1d8);
    if (local_50 <= *(double *)(param_1 + 0x1d8)) {
      dVar2 = local_50;
    }
    *(double *)(param_1 + 0x1d8) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1e0);
    if (local_48 <= *(double *)(param_1 + 0x1e0)) {
      dVar2 = local_48;
    }
    *(double *)(param_1 + 0x1e0) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1e8);
    if (local_40 <= *(double *)(param_1 + 0x1e8)) {
      dVar2 = local_40;
    }
    *(double *)(param_1 + 0x1e8) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1f0);
    if (*(double *)(param_1 + 0x1f0) <= local_38) {
      dVar2 = local_38;
    }
    *(double *)(param_1 + 0x1f0) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1f8);
    if (*(double *)(param_1 + 0x1f8) <= local_30) {
      dVar2 = local_30;
    }
    *(double *)(param_1 + 0x1f8) = dVar2;
    dVar2 = *(double *)(param_1 + 0x200);
    if (*(double *)(param_1 + 0x200) <= local_28) {
      dVar2 = local_28;
    }
    *(double *)(param_1 + 0x200) = dVar2;
    FUN_146c86256(param_1,param_2,&local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d26fa FUN_1484d26fa body=132 status=ok
// SIG undefined FUN_1484d26fa(void)

void FUN_1484d26fa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484d2780 FUN_1484d2780 body=287 status=ok
// SIG undefined FUN_1484d2780(void)

undefined4 * FUN_1484d2780(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_1484d28a0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1484d2986(param_1,uVar5,local_40,&local_4c);
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1484d2a78(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d28a0 FUN_1484d28a0 body=230 status=ok
// SIG undefined FUN_1484d28a0(void)

int * FUN_1484d28a0(longlong *param_1,int *param_2)

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



// FUNCTION 1484d2986 FUN_1484d2986 body=128 status=ok
// SIG undefined FUN_1484d2986(void)

undefined8 FUN_1484d2986(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1484d2a06(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1484d2a06 FUN_1484d2a06 body=114 status=ok
// SIG undefined FUN_1484d2a06(void)

void FUN_1484d2a06(longlong *param_1,int param_2)

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



// FUNCTION 1484d2a78 FUN_1484d2a78 body=419 status=ok
// SIG undefined FUN_1484d2a78(void)

void FUN_1484d2a78(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1484d2c1c FUN_1484d2c1c body=256 status=ok
// SIG undefined FUN_1484d2c1c(void)

void FUN_1484d2c1c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_1484d2d1e(param_2,*(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d2d1e FUN_1484d2d1e body=88 status=ok
// SIG undefined FUN_1484d2d1e(void)

void FUN_1484d2d1e(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  plVar3 = (longlong *)param_1[1];
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x58) + (ulonglong)(uVar1 >> 9) * 8);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_146c92ae4(plVar3,iVar2);
  }
  *(ulonglong *)(*plVar3 + (longlong)iVar2 * 8) = lVar4 + (ulonglong)(uVar1 & 0x1ff) * 0x34;
  return;
}



// FUNCTION 1484d2d76 FUN_1484d2d76 body=87 status=ok
// SIG undefined FUN_1484d2d76(void)

void FUN_1484d2d76(longlong *param_1,int param_2)

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
  FUN_1484d2dce();
  return;
}



// FUNCTION 1484d2dce FUN_1484d2dce body=114 status=ok
// SIG undefined FUN_1484d2dce(void)

void FUN_1484d2dce(longlong *param_1,int param_2)

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



// FUNCTION 1484d2e50 FUN_1484d2e50 body=12 status=ok
// SIG undefined FUN_1484d2e50(void)

void FUN_1484d2e50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484d2e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484d2e5c FUN_1484d2e5c body=57 status=ok
// SIG undefined FUN_1484d2e5c(void)

undefined8 * FUN_1484d2e5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aefd930;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d2e96 FUN_1484d2e96 body=92 status=ok
// SIG undefined FUN_1484d2e96(void)

void FUN_1484d2e96(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143b7d23a(param_1 + 0x15);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484d2ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1484d2f0c FUN_1484d2f0c body=91 status=ok
// SIG undefined FUN_1484d2f0c(void)

longlong FUN_1484d2f0c(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar1 * 0x18);
        if (*puVar2 == param_2) goto LAB_1484d2f16;
        uVar1 = puVar2[4];
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar2 = (uint *)0x0;
LAB_1484d2f16:
  puVar4 = puVar2 + 2;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  return *(longlong *)puVar4 + 8;
}


