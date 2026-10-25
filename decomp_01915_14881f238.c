// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14881f238 FUN_14881f238 body=122 status=ok
// SIG undefined FUN_14881f238(void)

uint FUN_14881f238(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  local_28 = 0x200000000;
  FUN_140a6f4d0(local_60);
  uVar1 = FUN_1400ff15e(param_1,local_60);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881f2b4 FUN_14881f2b4 body=97 status=ok
// SIG undefined FUN_14881f2b4(void)

longlong FUN_14881f2b4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar1 = param_2;
  }
  FUN_1400709d4(param_1,lVar1,*(undefined4 *)(param_2 + 0x38),0);
  FUN_1405faa8e(param_1,param_3);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14881f316 FUN_14881f316 body=77 status=ok
// SIG undefined FUN_14881f316(void)

undefined8 FUN_14881f316(longlong param_1,char param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  undefined7 uVar3;
  byte bVar4;
  bool bVar5;
  
  bVar4 = 1;
  if (param_1 == 0) {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar5 = true;
  }
  else {
    uVar1 = FUN_144a7b040();
    lVar2 = FUN_144718840(param_1,uVar1);
    bVar5 = lVar2 == 0;
    uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
    if (param_2 == '\0' && !bVar5) {
      bVar4 = (*(byte *)(param_1 + 0x62) & 4) >> 2;
      bVar5 = false;
      uVar3 = 0;
    }
  }
  return CONCAT71(uVar3,(bVar5 ^ 1U) & bVar4);
}



// FUNCTION 14881f364 FUN_14881f364 body=95 status=ok
// SIG undefined FUN_14881f364(void)

undefined8 FUN_14881f364(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x580))();
    if (iVar2 == 0) {
      return 1;
    }
    lVar1 = param_1[0x15];
    if (lVar1 != 0) {
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014881f3b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,*(code **)(*plVar4 + 0x30));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14881f3c4 FUN_14881f3c4 body=383 status=ok
// SIG undefined FUN_14881f3c4(void)

ulonglong FUN_14881f3c4(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint *local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140fecfdc(param_3);
  if (lVar3 != 0) {
    uVar4 = FUN_144a7b040();
    plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar3 != 0))
    {
      local_3c = 0xffffffff;
      uVar1 = *(undefined1 *)(param_1 + 0x11);
      cVar2 = *(char *)(param_1 + 0x10);
      uVar4 = FUN_1409d448e(param_1 + 0x18);
      local_48 = &local_3c;
      cVar2 = FUN_141689ae8(lVar3,uVar4,
                            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar2 != '\x01') & 0xffffffff
                            ,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      if (cVar2 != '\0') {
        cVar2 = *(char *)(param_1 + 0x10);
        uVar8 = (undefined7)(param_1 >> 8);
        if (cVar2 == '\x02') {
          param_1 = CONCAT71(uVar8,1);
          goto LAB_14881f4c0;
        }
        if (cVar2 == '\x01') {
          if (*(char *)(param_1 + 0x11) != '\0') {
            lVar6 = (ulonglong)local_3c * 0x88;
            iVar7 = local_3c + 1;
            do {
              lVar6 = lVar6 + -0x88;
              iVar7 = iVar7 + -1;
              param_1 = CONCAT71((int7)(param_1 >> 8),iVar7 < 1);
              if (iVar7 < 1) break;
              cVar2 = FUN_140d03222(lVar6 + *(longlong *)(lVar3 + 0x38));
            } while (cVar2 == '\0');
            goto LAB_14881f4c0;
          }
          bVar10 = (ulonglong)local_3c == 0;
        }
        else {
          if (cVar2 != '\0') goto LAB_14881f4be;
          if (*(char *)(param_1 + 0x11) != '\0') {
            iVar7 = *(int *)(lVar3 + 0x40);
            lVar9 = (longlong)(int)local_3c;
            lVar6 = lVar9 * 0x88;
            do {
              lVar6 = lVar6 + 0x88;
              lVar9 = lVar9 + 1;
              param_1 = CONCAT71((int7)(param_1 >> 8),iVar7 <= lVar9);
              if (iVar7 <= lVar9) break;
              cVar2 = FUN_140d03222(lVar6 + *(longlong *)(lVar3 + 0x38));
            } while (cVar2 == '\0');
            goto LAB_14881f4c0;
          }
          bVar10 = local_3c == *(int *)(lVar3 + 0x40) - 1U;
        }
        param_1 = CONCAT71(uVar8,bVar10);
        goto LAB_14881f4c0;
      }
    }
  }
LAB_14881f4be:
  param_1 = 0;
LAB_14881f4c0:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 14881f544 FUN_14881f544 body=2423 status=ok
// SIG undefined FUN_14881f544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14881f544(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  double *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_318 [40];
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_2c8,*param_4,0);
  auVar22 = _DAT_149934d80;
  dVar9 = local_288._0_8_;
  dVar11 = local_288._8_8_;
  dVar25 = local_278._0_8_;
  auVar15 = *(undefined1 (*) [16])(param_3 + 8);
  dVar2 = auVar15._0_8_;
  dVar10 = auVar15._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_3 + 10);
  dVar3 = auVar1._0_8_;
  auVar15 = minpd(auVar15,local_288);
  auVar20 = minpd(auVar1,local_278);
  auVar16._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
  auVar16._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
  iVar5 = movmskpd(uVar4,auVar16);
  auVar15._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
  uVar6 = movmskpd((int)param_1,auVar15);
  if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar19 = *param_3;
    dVar13 = param_3[1];
    dVar26 = param_3[2];
    dVar17 = param_3[3];
    dVar14 = dVar13 * local_2b8 * -1.0 +
             dVar26 * dStack_2c0 + dVar17 * local_2c8 * 1.0 + dVar19 * dStack_2b0;
    dVar18 = dVar19 * local_2b8 * 1.0 +
             dVar17 * dStack_2c0 + dVar26 * local_2c8 * -1.0 + dVar13 * dStack_2b0;
    auVar22._0_8_ =
         dVar17 * local_2b8 * 1.0 +
         ((local_2c8 * dVar13 * 1.0 + dVar26 * dStack_2b0) - dVar19 * dStack_2c0);
    auVar22._8_8_ =
         dVar26 * local_2b8 * -1.0 +
         ((local_2c8 * dVar19 * -1.0 + dVar17 * dStack_2b0) - dVar13 * dStack_2c0);
    dVar27 = param_3[4] * dVar9;
    dVar28 = param_3[5] * dVar11;
    dVar19 = param_3[6] * dVar25;
    dVar26 = dVar28 * local_2c8 - dStack_2c0 * dVar27;
    dVar17 = dVar19 * dStack_2c0 - local_2b8 * dVar28;
    dVar13 = dVar27 * local_2b8 - local_2c8 * dVar19;
    dVar17 = dVar17 + dVar17;
    dVar13 = dVar13 + dVar13;
    dVar26 = dVar26 + dVar26;
    local_e8 = (dVar26 * dStack_2c0 - local_2b8 * dVar13) + dStack_2b0 * dVar17 + dVar27 + local_2a8
    ;
    dStack_e0 = (dVar17 * local_2b8 - dVar26 * local_2c8) + dStack_2b0 * dVar13 + dVar28 +
                dStack_2a0;
    local_d8 = (dVar13 * local_2c8 - dStack_2c0 * dVar17) + dStack_2b0 * dVar26 + dVar19 +
               (double)CONCAT44(uStack_294,local_298);
  }
  else {
    dVar17 = dStack_2c0 + dStack_2c0;
    dVar19 = local_2b8 + local_2b8;
    dVar26 = local_2c8 * (local_2c8 + local_2c8);
    local_178 = (1.0 - (dVar26 + dStack_2c0 * dVar17)) * dVar25;
    dVar13 = (local_2c8 + local_2c8) * dStack_2b0;
    local_188 = (dVar17 * dStack_2b0 + local_2c8 * dVar19) * dVar25;
    dStack_180 = (dVar19 * dStack_2c0 - dVar13) * dVar25;
    local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar19 + dStack_2c0 * dVar17)) * dVar9;
    dVar26 = (DAT_149934d80._8_8_ - (local_2b8 * dVar19 + dVar26)) * dVar11;
    dStack_1c0 = (dVar17 * local_2c8 + dVar19 * dStack_2b0) * dVar9;
    local_198 = (dVar19 * dStack_2c0 + dVar13) * dVar11;
    local_1b8 = (local_2c8 * dVar19 - dVar17 * dStack_2b0) * dVar9;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar26,0);
    local_1a8._0_8_ = (dVar17 * local_2c8 - dVar19 * dStack_2b0) * dVar11;
    local_1a8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_154 = uStack_294;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    dVar18 = *param_3;
    dVar27 = param_3[1];
    dVar28 = param_3[2];
    dVar21 = dVar27 + dVar27;
    dVar13 = dVar28 + dVar28;
    dVar14 = dVar18 * (dVar18 + dVar18);
    local_1f8 = (1.0 - (dVar14 + dVar27 * dVar21)) * dVar3;
    dVar19 = param_3[3];
    dVar26 = dVar13 * dVar19;
    dVar17 = (dVar18 + dVar18) * param_3[3];
    dVar19 = dVar21 * dVar19;
    local_208 = (dVar19 + *param_3 * dVar13) * dVar3;
    local_228 = (dVar21 * dVar18 - dVar26) * dVar10;
    dStack_200 = (dVar13 * dVar27 - dVar17) * dVar3;
    local_248 = ((double)DAT_149934d80 - (dVar28 * dVar13 + dVar27 * dVar21)) * dVar2;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar28 * dVar13 + dVar14)) * dVar10;
    dStack_240 = (dVar21 * dVar18 + dVar26) * dVar2;
    local_218 = (dVar13 * dVar27 + dVar17) * dVar10;
    local_238 = (*param_3 * dVar13 - dVar19) * dVar2;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar20._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar10);
    auVar20._0_8_ = -(ulonglong)(0.0 <= dVar9 * dVar2);
    auVar15 = blendvpd(_DAT_149936790,auVar22,auVar20);
    uVar7 = -(ulonglong)(0.0 <= dVar25 * dVar3);
    dVar19 = (double)(~uVar7 & 0xbff0000000000000 | uVar7 & 0x3ff0000000000000);
    dVar13 = auVar15._0_8_;
    local_138 = local_138 * dVar13;
    dStack_140 = dStack_140 * dVar13;
    local_148 = local_148 * dVar13;
    dVar13 = auVar15._8_8_;
    local_118 = local_118 * dVar13;
    local_120 = local_120 * dVar13;
    local_128 = dVar13 * local_128;
    local_f8 = local_f8 * dVar19;
    local_100 = local_100 * dVar19;
    local_108 = dVar19 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar19 = local_258 * local_258 + local_268 * local_268;
    dVar13 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar12._0_8_ = dVar19 + dVar13;
    auVar12._8_8_ = dVar19 + dVar13;
    auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar15 = sqrtpd(auVar12,auVar12);
    auVar15 = divpd(auVar22,auVar15);
    auVar23._0_8_ = auVar15._0_8_ * local_258;
    auVar23._8_8_ = auVar15._8_8_ * dStack_250;
    dVar14 = (double)((ulonglong)(local_268 * auVar15._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    dVar18 = (double)((ulonglong)(dStack_260 * auVar15._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_));
    auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar8);
  }
  dVar19 = local_278._8_8_ * auVar1._8_8_;
  dVar9 = dVar9 * dVar2;
  dVar25 = dVar25 * dVar3;
  if (*param_2 == 2) {
    dVar9 = dVar9 * (double)(float)param_2[1];
  }
  else {
    local_2f0 = (double)(float)param_2[1] * dVar9;
    fVar24 = (float)param_2[2] - (float)param_2[1];
    dVar9 = dVar9 * 0.0;
    dVar10 = dVar11 * dVar10 * 0.0;
    dVar26 = (double)fVar24 * dVar25;
    dVar13 = auVar22._8_8_;
    dStack_2d0 = auVar22._0_8_;
    local_2e8._8_4_ = SUB84(dVar19,0);
    local_2e8._0_8_ = dVar25;
    local_2e8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    dVar11 = dVar9 * dStack_2d0 - dVar14 * dVar26;
    dVar2 = dVar10 * dVar14 - dVar18 * dVar9;
    dVar3 = dVar26 * dVar18 - dStack_2d0 * dVar10;
    dVar3 = dVar3 + dVar3;
    dVar11 = dVar11 + dVar11;
    dVar2 = dVar2 + dVar2;
    local_148 = (dVar2 * dVar18 - dVar11 * dStack_2d0) + dVar13 * dVar3 + dVar9 + local_e8;
    dStack_140 = (dStack_2d0 * dVar3 - dVar14 * dVar2) + dVar13 * dVar11 + dVar10 + dStack_e0;
    local_138 = dVar2 * dVar13 + dVar26 + (dVar11 * dVar14 - dVar3 * dVar18) + local_d8;
    dVar25 = (double)-fVar24 * dVar25;
    dVar11 = dVar9 * dStack_2d0 - dVar14 * dVar25;
    dVar2 = dVar10 * dVar14 - dVar18 * dVar9;
    dVar3 = dVar25 * dVar18 - dStack_2d0 * dVar10;
    dVar3 = dVar3 + dVar3;
    dVar11 = dVar11 + dVar11;
    dVar2 = dVar2 + dVar2;
    local_1c8 = (dVar2 * dVar18 - dVar11 * dStack_2d0) + dVar13 * dVar3 + dVar9 + local_e8;
    dStack_1c0 = (dStack_2d0 * dVar3 - dVar14 * dVar2) + dVar13 * dVar11 + dVar10 + dStack_e0;
    local_1b8 = dVar2 * dVar13 + dVar25 + (dVar11 * dVar14 - dVar3 * dVar18) + local_d8;
    local_2d8 = dVar18;
    FUN_144afdf0e(&local_248,param_5);
    local_e8 = local_248;
    dStack_e0 = dStack_240;
    dVar9 = local_2f0;
    local_d8 = local_238;
  }
  if ((local_c0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return (float)((local_d8 - param_5[2]) * (local_d8 - param_5[2]) +
                  (local_e8 - *param_5) * (local_e8 - *param_5) +
                  (dStack_e0 - param_5[1]) * (dStack_e0 - param_5[1])) <=
           ((float)dVar9 + *(float *)(param_5 + 3)) * ((float)dVar9 + *(float *)(param_5 + 3));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881fefe FUN_14881fefe body=97 status=ok
// SIG undefined FUN_14881fefe(void)

undefined8 FUN_14881fefe(longlong param_1,float param_2)

{
  longlong lVar1;
  
  if ((((0.0 < *(float *)(param_1 + 0x448)) && (*(longlong *)(param_1 + 0x250) != 0)) &&
      (lVar1 = FUN_1447210f0(), lVar1 != 0)) &&
     (*(double *)(lVar1 + 0x6d0) <= (double)(param_2 + *(float *)(param_1 + 0x448)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14881ff60 FUN_14881ff60 body=114 status=ok
// SIG undefined FUN_14881ff60(void)

uint FUN_14881ff60(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 600) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x260);
  }
  lVar1 = (**(code **)(*plVar2 + 0x10))();
  fVar3 = -1.0;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x40))) {
    fVar3 = (float)FUN_1405583ce(*(undefined8 *)(lVar1 + 0x38));
  }
  return -(uint)(param_3 <= param_2 / fVar3 && 0.0 < fVar3) & 0xffffff01;
}



// FUNCTION 14881ffd6 FUN_14881ffd6 body=267 status=ok
// SIG undefined FUN_14881ffd6(void)

void FUN_14881ffd6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  iVar1 = *(int *)(param_1 + 0x2f8);
  if ((longlong)iVar1 != 0) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    lVar4 = *(longlong *)(param_1 + 0x2f0);
    local_58 = param_1 + 0x2f0;
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar7);
      local_50 = uVar2;
      if ((((*(int *)(lVar5 + 8) == (int)uVar2) &&
           (*(int *)(lVar5 + 0xc) == (int)((ulonglong)uVar2 >> 0x20))) ||
          ((cVar6 = FUN_144729dda(lVar5 + 8), cVar6 == '\0' &&
           (cVar6 = FUN_144729dda(&local_50), cVar6 == '\0')))) &&
         (*(longlong *)(lVar5 + 0x10) == lVar3)) {
        if (iVar8 != 1) {
          FUN_148823648(local_58,-iVar8);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
        break;
      }
      iVar8 = iVar8 + -1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488202a4 FUN_1488202a4 body=269 status=ok
// SIG undefined FUN_1488202a4(void)

void FUN_1488202a4(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      lVar4 = 0;
      do {
        local_58 = 0;
        FUN_14485c47a(&local_58,param_3);
        local_50 = *(longlong *)(lVar2 + 0x50 + lVar4);
        if ((*(byte *)(lVar2 + 0x40 + lVar4) & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar2 + 0x38 + lVar4);
        }
        FUN_14881ffd6(param_1,&local_58,uVar3);
        lVar4 = lVar4 + 0x60;
      } while ((longlong)iVar1 * 0x60 != lVar4);
    }
    local_58 = param_3;
    if (param_3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_3);
    }
    local_50 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    local_48 = &local_58;
    FUN_14882375c(param_1 + 0x518);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488203b2 FUN_1488203b2 body=269 status=ok
// SIG undefined FUN_1488203b2(void)

void FUN_1488203b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x250) != 0) && ((longlong)*(int *)(param_1 + 0x520) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x518);
    plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0x520) * 2;
    do {
      if (((*plVar3 != 0) && (lVar4 = plVar3[1], lVar4 != 0)) &&
         ((longlong)*(int *)(lVar4 + 0x30) != 0)) {
        lVar1 = *(longlong *)(lVar4 + 0x28);
        lVar4 = (longlong)*(int *)(lVar4 + 0x30) * 0x60;
        do {
          if (*(longlong *)(lVar1 + 0x58) == *(longlong *)(param_2 + 0x68)) {
            local_50 = 0;
            FUN_14485c47a(&local_50,*plVar3);
            local_48 = *(undefined8 *)(lVar1 + 0x50);
            if (*(int *)(param_2 + 0x80) < 1) {
              if ((*(byte *)(lVar1 + 0x40) & 1) == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(undefined8 *)(lVar1 + 0x38);
              }
              FUN_14881ffd6(param_1,&local_50,uVar2);
            }
            else {
              FUN_14110e7d0(param_1,lVar1);
            }
          }
          lVar1 = lVar1 + 0x60;
          lVar4 = lVar4 + -0x60;
        } while (lVar4 != 0);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488204d6 FUN_1488204d6 body=978 status=ok
// SIG undefined FUN_1488204d6(void)

void FUN_1488204d6(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_c8;
  longlong local_c0;
  int local_b4;
  undefined8 *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = param_2;
  if (0 < *(int *)(param_1 + 0x5c)) {
    plVar7 = (longlong *)(param_1 + 8);
    lVar4 = param_1 + 0x18;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_c8 = param_3;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x30) == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_b4 = *(int *)(param_1 + 0x30);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar9 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar3 = local_78._4_4_;
    local_a8 = lVar4;
    local_a0 = plVar7;
    local_90 = plVar7;
    if ((local_78._4_4_ != local_b4) || (local_78 = uVar9, uStack_60 != lVar4)) {
      do {
        local_78 = uVar9;
        local_c0 = (longlong)iVar3 * 0x80 + *local_90;
        lVar4 = FUN_1402179b4();
        if (((*(byte *)(lVar4 + 0x18) & 4) != 0) && ((longlong)*(int *)(local_c0 + 0x70) != 0)) {
          lVar4 = *(longlong *)(local_c0 + 0x68);
          lVar11 = (longlong)*(int *)(local_c0 + 0x70) * 0x80 + lVar4;
          local_98 = local_b0 + 4;
          do {
            lVar5 = FUN_14479d2ce(lVar4);
            if (lVar5 != 0) {
              if (param_4 == (longlong *)0x0) {
LAB_1488206e5:
                pcVar1 = (code *)*local_b0;
                plVar7 = (longlong *)local_b0[2];
                if ((longlong *)local_b0[2] == (longlong *)0x0) {
                  plVar7 = local_98;
                }
                local_68 = lVar5;
                uVar9 = (**(code **)(*plVar7 + 8))();
                local_d8 = lVar4 + 8;
                cVar2 = (*pcVar1)(uVar9,&local_68,lVar4 + 0x10,lVar4 + 0x20);
                if (cVar2 != '\0') {
                  uVar9 = *(undefined8 *)(local_c0 + 0x18);
                  uVar10 = FUN_1402179b4();
                  FUN_144a79b68(&local_68,uVar10);
                  lVar4 = local_68;
                  iVar3 = (int)local_c8[1];
                  *(uint *)(local_c8 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)local_c8 + 0xc) < iVar3 + 1U) {
                    FUN_140e5fe28(local_c8,iVar3);
                  }
                  lVar11 = *local_c8;
                  lVar5 = (longlong)iVar3 * 0x20;
                  *(longlong *)(lVar11 + lVar5) = lVar4;
                  *(undefined4 *)(lVar11 + 8 + lVar5) = 0x3006;
                  *(undefined8 *)(lVar11 + 0x10 + lVar5) = 0;
                  *(undefined8 *)(lVar11 + 0x18 + lVar5) = uVar9;
                  break;
                }
              }
              else {
                if ((*(byte *)(lVar5 + 0x2d3) & 0x10) == 0) {
                  lVar6 = FUN_144a745da();
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_1488206e5;
                }
                if ((longlong)(int)param_4[1] != 0) {
                  lVar5 = (longlong)(int)param_4[1] * 0x48;
                  lVar6 = *param_4 + 0x20;
                  do {
                    cVar2 = FUN_1488222c8(lVar6,lVar4);
                    if (cVar2 != '\0') {
                      if (*(longlong *)(lVar4 + 8) == 0) {
LAB_1488207cc:
                        uVar9 = *(undefined8 *)(local_c0 + 0x18);
                        uVar10 = FUN_1402179b4();
                        FUN_144a79b68(&local_68,uVar10);
                        lVar5 = local_68;
                        iVar3 = (int)local_c8[1];
                        *(uint *)(local_c8 + 1) = iVar3 + 1U;
                        if (*(uint *)((longlong)local_c8 + 0xc) < iVar3 + 1U) {
                          FUN_140e5fe28(local_c8,iVar3);
                        }
                        lVar6 = *local_c8;
                        lVar8 = (longlong)iVar3 * 0x20;
                        *(longlong *)(lVar6 + lVar8) = lVar5;
                        *(undefined4 *)(lVar6 + 8 + lVar8) = 0x3006;
                        *(undefined8 *)(lVar6 + 0x10 + lVar8) = 0;
                        *(undefined8 *)(lVar6 + 0x18 + lVar8) = uVar9;
                        break;
                      }
                      plVar7 = (longlong *)FUN_14479d2ce(lVar6);
                      if (plVar7 != (longlong *)0x0) {
                        lVar8 = FUN_144a78c84();
                        if ((((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                             (*(longlong *)
                               (*(longlong *)(plVar7[2] + 0x30) +
                               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                            (lVar8 = (**(code **)(*plVar7 + 0xb98))(plVar7), lVar8 != 0)) &&
                           (iVar3 = FUN_144992686(lVar8,*(undefined8 *)(lVar4 + 8)),
                           iVar3 == *(int *)(lVar6 + 8))) goto LAB_1488207cc;
                      }
                    }
                    lVar6 = lVar6 + 0x48;
                    lVar5 = lVar5 + -0x48;
                  } while (lVar5 != 0);
                }
              }
            }
            lVar4 = lVar4 + 0x80;
          } while (lVar4 != lVar11);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar9 = local_78;
      } while (local_90 != local_a0 ||
               (CONCAT44(uStack_7c,uStack_80) != local_a8 || local_78._4_4_ != local_b4));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488208aa FUN_1488208aa body=543 status=ok
// SIG undefined FUN_1488208aa(void)

double * FUN_1488208aa(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = *(longlong **)(param_1 + 0x250);
  cVar5 = *(char *)((longlong)param_3 + 0x1d);
  if (cVar5 == '\x01') {
    if (plVar7 == (longlong *)0x0) {
LAB_148820a84:
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      goto LAB_148820a94;
    }
    (**(code **)(*plVar7 + 0x520))(plVar7,&local_68,0,0);
    dVar2 = (local_58 + local_40) * 0.5;
    *param_2 = (local_68 + local_50) * 0.5;
    param_2[1] = (local_60 + local_48) * 0.5;
  }
  else {
    if (cVar5 == '\x02') {
      if (plVar7 == (longlong *)0x0) goto LAB_148820a84;
      uVar13 = FUN_14069ce7c();
      lVar15 = FUN_144718840(plVar7,uVar13);
      if (lVar15 != 0) {
        uVar13 = FUN_144b2f384(lVar15);
        lVar14 = FUN_14479d2ce(uVar13);
        if (lVar14 != 0) {
          uVar13 = FUN_144b2f384(lVar15);
          FUN_1400e23a4(uVar13,param_2);
          goto LAB_148820a94;
        }
      }
    }
    else {
      if ((cVar5 == '\x03') && (iVar6 = *(int *)(param_3 + 5), 0 < (longlong)iVar6)) {
        *param_2 = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        dVar8 = param_3[4];
        dVar2 = param_3[2];
        dVar3 = *param_3;
        dVar4 = param_3[1];
        fVar16 = 3.4028235e+38;
        lVar15 = 0;
        do {
          dVar18 = *(double *)((longlong)dVar8 + 0x38 + lVar15) - dVar2;
          dVar19 = *(double *)((longlong)dVar8 + 0x28 + lVar15) - dVar3;
          dVar9 = *(double *)((longlong)dVar8 + 0x30 + lVar15) - dVar4;
          fVar17 = (float)(dVar18 * dVar18 + dVar19 * dVar19 + dVar9 * dVar9);
          if (fVar17 < fVar16) {
            pdVar1 = (double *)((longlong)dVar8 + 0x28 + lVar15);
            param_2[2] = pdVar1[2];
            dVar9 = pdVar1[1];
            *param_2 = *pdVar1;
            param_2[1] = dVar9;
            fVar16 = fVar17;
          }
          lVar15 = lVar15 + 0x100;
        } while ((longlong)iVar6 * 0x100 != lVar15);
        goto LAB_1488209c0;
      }
      if (plVar7 == (longlong *)0x0) goto LAB_148820a84;
    }
    lVar15 = plVar7[0x39];
    if (lVar15 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar12 = DAT_14c8464e8._4_4_;
      uVar11 = (undefined4)DAT_14c8464e8;
      uVar10 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar10;
      *(undefined4 *)(param_2 + 1) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
LAB_148820a94:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    dVar2 = *(double *)(lVar15 + 0x268);
    *param_2 = *(double *)(lVar15 + 0x260);
    param_2[1] = dVar2;
    dVar2 = *(double *)(lVar15 + 0x270);
  }
  param_2[2] = dVar2;
LAB_1488209c0:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148820aca FUN_148820aca body=75 status=ok
// SIG undefined FUN_148820aca(void)

void FUN_148820aca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = param_1 + 0x30;
  cVar4 = FUN_1403ae288(lVar1);
  if (cVar4 != '\0') {
    lVar2 = FUN_140280ec4(lVar1);
    if (0 < *(int *)(lVar2 + 0x48)) {
      uVar3 = FUN_140280ec4(lVar1);
      FUN_1488562ec(uVar3);
      return;
    }
  }
  FUN_1405583ce(param_1);
  return;
}



// FUNCTION 148820b16 FUN_148820b16 body=130 status=ok
// SIG undefined FUN_148820b16(void)

undefined4 FUN_148820b16(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + 0x30;
  cVar1 = FUN_1403ae288(param_1);
  uVar4 = 0;
  if (cVar1 != '\0') {
    lVar2 = FUN_140280ec4(param_1);
    if (0 < *(int *)(lVar2 + 0x48)) {
      uVar3 = FUN_140280ec4(param_1);
      FUN_14885634c(uVar3,&local_24,local_28);
      uVar4 = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148820b9a FUN_148820b9a body=289 status=ok
// SIG undefined FUN_148820b9a(void)

void FUN_148820b9a(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_368 [32];
  undefined1 local_348 [792];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((((*(byte *)(param_1 + 0x470) & 8) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) &&
      (*(longlong *)(param_1 + 0x250) != 0)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x250) + 0x1c8) != 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x1c8) != 0)))) {
    cVar2 = FUN_1414a8c54();
    if ((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x268), lVar1 != 0)) {
      FUN_140749074(local_348,param_3 + 0x10);
      FUN_14082cfa8(local_348,lVar1);
      plVar3 = (longlong *)FUN_1405473b6();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x128))(plVar3,local_348);
        uVar4 = FUN_144a7b040();
        plVar5 = (longlong *)FUN_144718840(lVar1,uVar4);
        (**(code **)(*plVar5 + 0x80))(plVar5,param_2,plVar3);
        FUN_14025a2c6(plVar3);
      }
      FUN_1403dfdc4(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148820cbc FUN_148820cbc body=228 status=ok
// SIG undefined FUN_148820cbc(void)

undefined8 FUN_148820cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3f7890;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3f7320;
  local_38[3] = param_3;
  local_38[4] = &LAB_148820da2;
  FUN_14036a282(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148820db8 FUN_148820db8 body=120 status=ok
// SIG undefined FUN_148820db8(void)

void FUN_148820db8(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + *param_1);
  FUN_1486b8afc(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x88),(longlong)(int)(~param_2 + iVar1) * 0x88);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_148823ea8(param_1);
  return;
}



// FUNCTION 148820e70 FUN_148820e70 body=127 status=ok
// SIG undefined FUN_148820e70(void)

undefined4 FUN_148820e70(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar4 * 0x80) == param_2) {
          if (lVar2 == 0) {
            return 0;
          }
          cVar1 = FUN_1403ae288(lVar2 + 0x38);
          if (cVar1 == '\0') {
            puVar3 = (undefined4 *)(lVar2 + 0x24);
          }
          else {
            lVar2 = FUN_140280ec4(lVar2 + 0x38);
            puVar3 = (undefined4 *)(lVar2 + 200);
          }
          return *puVar3;
        }
        iVar4 = *(int *)(lVar2 + 0x78);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 148820ef0 FUN_148820ef0 body=127 status=ok
// SIG undefined FUN_148820ef0(void)

undefined4 FUN_148820ef0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar4 * 0x80) == param_2) {
          if (lVar2 == 0) {
            return 0;
          }
          cVar1 = FUN_1403ae288(lVar2 + 0x38);
          if (cVar1 == '\0') {
            puVar3 = (undefined4 *)(lVar2 + 0x2c);
          }
          else {
            lVar2 = FUN_140280ec4(lVar2 + 0x38);
            puVar3 = (undefined4 *)(lVar2 + 0x30);
          }
          return *puVar3;
        }
        iVar4 = *(int *)(lVar2 + 0x78);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 148820f70 FUN_148820f70 body=554 status=ok
// SIG undefined FUN_148820f70(void)

ulonglong FUN_148820f70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  lVar5 = *(longlong *)(param_1 + 0xc);
  plVar4 = (longlong *)FUN_140d03296(param_3);
  if (lVar5 != 0) {
    if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 == 0))
    goto LAB_14882112e;
    uVar7 = 0;
    if (4 < *(byte *)(param_1 + 8)) goto switchD_148820fd3_caseD_3;
    lVar5 = lVar5 + 0x270;
    switch(*(byte *)(param_1 + 8)) {
    case 0:
      uVar8 = FUN_144a7b41a(param_4,0);
      FUN_14882119a(lVar5,*(undefined8 *)(param_1 + 0xc),uVar8);
      uVar7 = 1;
      goto switchD_148820fd3_caseD_3;
    default:
      uVar8 = FUN_144a7b41a(param_4,0);
      FUN_14881e0c6(lVar5,*(undefined8 *)(param_1 + 0xc),0x3f800000,uVar8);
      break;
    case 2:
      uVar8 = FUN_144a7b41a(param_4,0);
      FUN_14882121a(lVar5,*(undefined8 *)(param_1 + 0xc),uVar8);
      break;
    case 3:
      goto switchD_148820fd3_caseD_3;
    }
    goto LAB_14882112e;
  }
  if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 == 0))
  goto LAB_14882112e;
  uVar7 = 0;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    bVar2 = *(byte *)(param_1 + 9);
    uVar7 = 1;
    if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
      lVar5 = *(longlong *)(lVar5 + 0x38);
      uVar8 = FUN_144a7b41a(param_4,0);
      FUN_1409d451a((ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8 + lVar5,uVar8,0);
    }
    goto switchD_148820fd3_caseD_3;
  case 1:
    if ((int)(uint)*(byte *)(param_1 + 9) < *(int *)(lVar5 + 0x40)) {
      uVar8 = FUN_144a7b41a(param_4,0);
      uVar7 = 0;
      FUN_145be4800((ulonglong)*(byte *)(param_1 + 9) * 0x80 + (ulonglong)*(byte *)(param_1 + 9) * 8
                    + *(longlong *)(lVar5 + 0x38),0x3f800000,uVar8,0);
      goto switchD_148820fd3_caseD_3;
    }
    break;
  case 2:
    bVar2 = *(byte *)(param_1 + 9);
    if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
      lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
      lVar6 = *(longlong *)(lVar5 + 0x38) + lVar1;
      if (*(char *)(*(longlong *)(lVar5 + 0x38) + lVar1) == '\x01') {
        cVar3 = FUN_1403ae288(lVar6 + 0x30);
        if (cVar3 == '\0') break;
        lVar6 = FUN_14008e0ae(lVar6 + 0x30);
        lVar5 = lVar6 + 0x2c;
        uVar8 = FUN_144a7b41a(param_4,0);
        *(undefined4 *)(lVar6 + 0x34) = uVar8;
      }
      else {
        lVar5 = lVar6 + 0x50;
        uVar8 = FUN_144a7b41a(param_4,0);
        *(undefined4 *)(lVar6 + 0x58) = uVar8;
      }
      uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      FUN_14020a6cc(lVar5,1);
      goto switchD_148820fd3_caseD_3;
    }
    break;
  default:
    goto switchD_148820fd3_caseD_3;
  case 4:
    uVar8 = FUN_144a7b41a(param_4,0);
    FUN_140b5543e(lVar5,0x3f800000,uVar8);
  }
LAB_14882112e:
  uVar7 = 0;
switchD_148820fd3_caseD_3:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14882119a FUN_14882119a body=128 status=ok
// SIG undefined FUN_14882119a(void)

void FUN_14882119a(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar1 * 0x80) == param_2) {
          if (lVar2 == 0) {
            return;
          }
          FUN_14095ee72(lVar2,param_3);
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14882121a FUN_14882121a body=207 status=ok
// SIG undefined FUN_14882121a(void)

void FUN_14882121a(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar1 * 0x80) == param_2) {
          if (lVar3 == 0) {
            return;
          }
          cVar2 = FUN_14486ea84(lVar3 + 0x38);
          if (cVar2 == '\0') {
            lVar3 = lVar3 + 0x28;
          }
          else {
            lVar3 = FUN_14008e0ae(lVar3 + 0x38);
            lVar3 = lVar3 + 0x2c;
          }
          *(undefined4 *)(lVar3 + 8) = param_3;
          FUN_14020a6cc(lVar3,1);
          return;
        }
        iVar1 = *(int *)(lVar3 + 0x78);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1488212ea FUN_1488212ea body=220 status=ok
// SIG undefined FUN_1488212ea(void)

ulonglong FUN_1488212ea(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_1 + 8) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xc);
    plVar4 = (longlong *)FUN_140d03296(param_3);
    if (lVar5 == 0) {
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar5 != 0) {
          bVar2 = *(byte *)(param_1 + 9);
          if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
            lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
            lVar7 = *(longlong *)(lVar5 + 0x38) + lVar1;
            if (*(char *)(*(longlong *)(lVar5 + 0x38) + lVar1) != '\x01') {
              uVar9 = FUN_1405583ce(lVar7);
              FUN_1409d451a(lVar7,uVar9,0);
              uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              goto LAB_1488212f8;
            }
            lVar7 = lVar7 + 0x30;
            cVar3 = FUN_1403ae288(lVar7);
            if (cVar3 != '\0') {
              uVar6 = FUN_14008e0ae(lVar7);
              uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              FUN_148856710(uVar6,1);
              goto LAB_1488212f8;
            }
          }
        }
      }
    }
    else if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (lVar5 != 0) {
        FUN_14881e0c6(lVar5 + 0x270,*(undefined8 *)(param_1 + 0xc),0x3f800000,0x3f800000);
      }
    }
  }
  uVar8 = 0;
LAB_1488212f8:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1488213c6 FUN_1488213c6 body=836 status=ok
// SIG undefined FUN_1488213c6(void)

undefined8
FUN_1488213c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
             ,float param_6,undefined8 param_7)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((4 < *(byte *)(param_1 + 8)) || (*(byte *)(param_1 + 8) == 3)) goto switchD_14882145c_caseD_3;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  lVar5 = *(longlong *)(param_1 + 0xc);
  plVar4 = (longlong *)FUN_140d03296(param_4);
  if (lVar5 != 0) {
    if (((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0))
       && (*(byte *)(param_1 + 8) < 5)) {
      lVar5 = lVar5 + 0x270;
      switch(*(byte *)(param_1 + 8)) {
      case 0:
        fVar9 = (float)FUN_148820e70(lVar5,*(undefined8 *)(param_1 + 0xc));
        switch(param_5) {
        case '\0':
          param_6 = (float)(-(uint)(param_6 < 0.0) & (uint)(1.0 / (1.0 - param_6)) |
                           ~-(uint)(param_6 < 0.0) & (uint)(param_6 + 1.0)) * fVar9;
          break;
        case '\x01':
        case '\x02':
          param_6 = param_6 + fVar9;
          break;
        case '\x03':
          param_6 = param_6 * fVar9;
        }
        FUN_14882119a(lVar5,*(undefined8 *)(param_1 + 0xc),param_6);
        break;
      default:
        if (param_5 == '\x04') {
          param_6 = 1.0;
        }
        FUN_14881e0c6(lVar5,*(undefined8 *)(param_1 + 0xc),param_6);
        break;
      case 2:
        FUN_14882170a(lVar5,param_2,*(undefined8 *)(param_1 + 0xc),uVar7 & 0xffffffff,
                      CONCAT44(uVar11,param_6),param_7);
        return param_2;
      case 3:
        goto switchD_14882145c_caseD_3;
      }
      goto LAB_1488215cb;
    }
    goto switchD_14882145c_caseD_3;
  }
  if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 == 0))
  goto switchD_14882145c_caseD_3;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    bVar2 = *(byte *)(param_1 + 9);
    if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
      lVar5 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8 + *(longlong *)(lVar5 + 0x38);
      fVar9 = (float)FUN_14055830e(lVar5);
      switch(param_5) {
      case '\0':
        param_6 = (float)(-(uint)(param_6 < 0.0) & (uint)(1.0 / (1.0 - param_6)) |
                         ~-(uint)(param_6 < 0.0) & (uint)(param_6 + 1.0)) * fVar9;
        break;
      case '\x01':
      case '\x02':
        param_6 = param_6 + fVar9;
        break;
      case '\x03':
        param_6 = param_6 * fVar9;
      }
      FUN_1409d451a(lVar5,param_6,0);
    }
    break;
  case 1:
    bVar2 = *(byte *)(param_1 + 9);
    if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
      if (param_5 == '\x04') {
        fVar9 = 1.0;
        fVar10 = param_6;
      }
      else {
        fVar10 = 1.0;
        fVar9 = param_6;
      }
      FUN_145be4800((ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8 + *(longlong *)(lVar5 + 0x38),
                    fVar9,fVar10,0);
    }
    break;
  case 2:
    bVar2 = *(byte *)(param_1 + 9);
    if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
      lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
      lVar8 = *(longlong *)(lVar5 + 0x38) + lVar1;
      if (*(char *)(*(longlong *)(lVar5 + 0x38) + lVar1) != '\x01') {
        lVar8 = lVar8 + 0x50;
LAB_148821652:
        FUN_1402a4426(lVar8,param_2,uVar7 & 0xffffffff);
        return param_2;
      }
      lVar8 = lVar8 + 0x30;
      cVar3 = FUN_1403ae288(lVar8);
      if (cVar3 != '\0') {
        lVar8 = FUN_14008e0ae(lVar8);
        lVar8 = lVar8 + 0x2c;
        goto LAB_148821652;
      }
    }
  default:
switchD_14882145c_caseD_3:
    uVar6 = 0;
    goto LAB_14882155b;
  case 4:
    if (param_5 == '\x04') {
      fVar9 = 1.0;
      fVar10 = param_6;
    }
    else {
      fVar10 = 1.0;
      fVar9 = param_6;
    }
    FUN_140b5543e(lVar5,fVar9,fVar10);
  }
LAB_1488215cb:
  uVar6 = 1;
LAB_14882155b:
  FUN_14162be86(param_2,uVar6);
  return param_2;
}



// FUNCTION 14882170a FUN_14882170a body=255 status=ok
// SIG undefined FUN_14882170a(void)

undefined8
FUN_14882170a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar5 = (uint)param_3;
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar5 << 0x10 | uVar5 & 0xffff) + ((uVar5 & 0xffff) >> 4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar4 * 0x80) == uVar5) {
          if (lVar3 != 0) {
            cVar2 = FUN_14486ea84(lVar3 + 0x38);
            if (cVar2 == '\0') {
              lVar3 = lVar3 + 0x28;
            }
            else {
              lVar3 = FUN_14008e0ae(lVar3 + 0x38);
              lVar3 = lVar3 + 0x2c;
            }
            FUN_1402a4426(lVar3,param_2,param_4,param_5,param_6);
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x78);
      } while (iVar4 != -1);
    }
  }
  FUN_1414ff806(param_2);
  return param_2;
}



// FUNCTION 14882180a FUN_14882180a body=390 status=ok
// SIG undefined FUN_14882180a(void)

undefined8 *
FUN_14882180a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  cVar3 = FUN_1412cbf0e(param_5);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x60))
              (param_1,param_2,param_3,param_4,param_6,CONCAT44(uVar7,param_7),param_8);
    return param_2;
  }
  cVar3 = FUN_142b2fcbc(param_5);
  if ((cVar3 == '\0') || ((char)param_1[1] != '\x02')) {
    *param_2 = *param_5;
    return param_2;
  }
  lVar5 = *(longlong *)((longlong)param_1 + 0xc);
  plVar4 = (longlong *)FUN_140d03296(param_4);
  if (lVar5 == 0) {
    if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0))
    {
      bVar2 = *(byte *)((longlong)param_1 + 9);
      if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
        lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
        lVar6 = *(longlong *)(lVar5 + 0x38) + lVar1;
        if (*(char *)(*(longlong *)(lVar5 + 0x38) + lVar1) == '\x01') {
          lVar6 = lVar6 + 0x30;
          cVar3 = FUN_1403ae288(lVar6);
          if (cVar3 == '\0') goto LAB_148821891;
          lVar6 = FUN_14008e0ae(lVar6);
          lVar6 = lVar6 + 0x2c;
        }
        else {
          lVar6 = lVar6 + 0x50;
        }
        FUN_140cda184(lVar6,param_2,param_5,
                      CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff,param_7,
                      param_8);
        return param_2;
      }
    }
  }
  else if ((plVar4 != (longlong *)0x0) &&
          (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0)) {
    FUN_148821990(lVar5 + 0x270,param_2,*(undefined8 *)((longlong)param_1 + 0xc),param_5,param_6,
                  CONCAT44(uVar7,param_7),param_8);
    return param_2;
  }
LAB_148821891:
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 148821990 FUN_148821990 body=279 status=ok
// SIG undefined FUN_148821990(void)

undefined8
FUN_148821990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 unaff_RBX;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar5 = (uint)param_3;
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar5 << 0x10 | uVar5 & 0xffff) + ((uVar5 & 0xffff) >> 4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar4 * 0x80) == uVar5) {
          if (lVar3 != 0) {
            cVar2 = FUN_14486ea84(lVar3 + 0x38);
            if (cVar2 == '\0') {
              lVar3 = lVar3 + 0x28;
            }
            else {
              lVar3 = FUN_14008e0ae(lVar3 + 0x38);
              lVar3 = lVar3 + 0x2c;
            }
            FUN_140cda184(lVar3,param_2,param_4,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,param_6,
                          param_7);
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x78);
      } while (iVar4 != -1);
    }
  }
  FUN_1414ff806(param_2);
  return param_2;
}



// FUNCTION 148821aa8 FUN_148821aa8 body=196 status=ok
// SIG undefined FUN_148821aa8(void)

undefined8 FUN_148821aa8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 8) == '\x02') {
    lVar5 = *(longlong *)(param_1 + 0xc);
    plVar4 = (longlong *)FUN_140d03296(param_3);
    if (lVar5 == 0) {
      if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0)
         ) {
        bVar2 = *(byte *)(param_1 + 9);
        if ((int)(uint)bVar2 < *(int *)(lVar5 + 0x40)) {
          lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
          lVar7 = *(longlong *)(lVar5 + 0x38) + lVar1;
          if (*(char *)(*(longlong *)(lVar5 + 0x38) + lVar1) == '\x01') {
            lVar7 = lVar7 + 0x30;
            cVar3 = FUN_1403ae288(lVar7);
            if (cVar3 == '\0') {
              return 0;
            }
            lVar7 = FUN_14008e0ae(lVar7);
            lVar7 = lVar7 + 0x2c;
          }
          else {
            lVar7 = lVar7 + 0x50;
          }
          uVar6 = thunk_FUN_1409d14a4(lVar7,param_4);
          return uVar6;
        }
      }
    }
    else if ((plVar4 != (longlong *)0x0) &&
            (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0)) {
      uVar6 = FUN_148821b6c(lVar5 + 0x270,*(undefined8 *)(param_1 + 0xc),param_4);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 148821b6c FUN_148821b6c body=197 status=ok
// SIG undefined FUN_148821b6c(void)

undefined8 FUN_148821b6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  byte bVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar10 = (uint)param_2;
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar10 << 0x10 | uVar10 & 0xffff) + ((uVar10 & 0xffff) >> 4) +
                             (uVar3 << 0x13 | uVar3 & 0xffff)) * 4);
    if (iVar2 != -1) {
      plVar1 = (longlong *)(param_1 + 8);
      do {
        param_1 = (longlong)iVar2 * 0x80;
        lVar6 = *plVar1 + param_1;
        if (*(uint *)(*plVar1 + 0x18 + param_1) == uVar10) {
          if (lVar6 != 0) {
            cVar5 = FUN_14486ea84(lVar6 + 0x38);
            if (cVar5 == '\0') {
              lVar6 = lVar6 + 0x28;
            }
            else {
              lVar6 = FUN_14008e0ae(lVar6 + 0x38);
              lVar6 = lVar6 + 0x2c;
            }
            uVar7 = thunk_FUN_1409d14a4(lVar6,param_3);
            bVar9 = (byte)uVar7;
            uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
            bVar4 = 1;
            goto LAB_148821b7d;
          }
          break;
        }
        iVar2 = *(int *)(lVar6 + 0x78);
      } while (iVar2 != -1);
    }
  }
  bVar9 = (byte)param_1;
  bVar4 = 0;
  uVar8 = 0;
LAB_148821b7d:
  return CONCAT71(uVar8,bVar4 & bVar9);
}



// FUNCTION 148821c32 FUN_148821c32 body=236 status=ok
// SIG undefined FUN_148821c32(void)

undefined8 FUN_148821c32(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  else {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88);
    FUN_1448729ea(param_1 + 0x80,local_58,local_88);
    uVar3 = FUN_144a7ecd0(local_58);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_58;
      if (0x18 < local_40) {
        pppuVar2 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148821d20 FUN_148821d20 body=54 status=ok
// SIG undefined FUN_148821d20(void)

bool FUN_148821d20(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  
  if ((param_3 == '\0') || (lVar1 = 0x20, (*(byte *)(param_1 + 0x1a) & 1) == 0)) {
    lVar1 = 0x18;
  }
  (**(code **)(*param_1 + lVar1))();
  return extraout_XMM0_Da <= 0.0001;
}



// FUNCTION 148821d56 FUN_148821d56 body=680 status=ok
// SIG undefined FUN_148821d56(void)

void FUN_148821d56(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double adStack_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)(param_1 + 0x38);
  iVar9 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x50) +
          *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x90) +
          *(int *)(param_1 + 0xa0);
  if ((*(int *)(param_1 + 0x40) == 0) || (iVar9 != 1)) {
    if ((*(int *)(param_1 + 0x60) == 0) || (iVar9 != 1)) {
      FUN_14016b8ba(plVar12,&local_78);
      lVar13 = 4;
      iVar9 = 0;
      iVar16 = 0;
      do {
        dVar2 = (double)(&local_78)[lVar13];
        iVar14 = (int)lVar13 + -3;
        iVar11 = iVar14;
        if (dVar2 < adStack_60[iVar16] || dVar2 == adStack_60[iVar16]) {
          iVar11 = iVar16;
        }
        if (adStack_60[iVar9] <= dVar2) {
          iVar14 = iVar9;
        }
        lVar13 = lVar13 + 1;
        iVar9 = iVar14;
        iVar16 = iVar11;
      } while (lVar13 != 6);
      dVar2 = adStack_60[iVar11];
      if (iVar11 == iVar14) {
        *param_2 = 2;
        param_2[1] = (float)dVar2;
      }
      else {
        dVar3 = adStack_60[iVar14];
        *param_2 = 3;
        param_2[1] = (float)dVar3;
        param_2[2] = (float)dVar2;
        if (iVar11 != 2) {
          puVar15 = &DAT_14c846290;
          if (iVar11 == 0) {
            puVar15 = &DAT_14c8462d8;
          }
          FUN_144a9d448(&local_98,&DAT_14c8462c0,puVar15);
          *param_3 = local_98;
          param_3[1] = uStack_90;
          param_3[2] = local_88;
          param_3[3] = uStack_80;
        }
      }
      *(undefined4 *)(param_3 + 4) = (undefined4)local_78;
      *(undefined4 *)((longlong)param_3 + 0x24) = local_78._4_4_;
      *(undefined4 *)(param_3 + 5) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_70._4_4_;
      param_3[6] = local_68;
      param_3[7] = 0;
      goto LAB_148821e23;
    }
    lVar13 = *(longlong *)(param_1 + 0x58);
    FUN_144a7484c(lVar13 + 0x48,&local_78);
    uVar10 = *(undefined4 *)(lVar13 + 0x30);
    uVar4 = *(undefined4 *)(lVar13 + 0x34);
    uVar5 = *(undefined4 *)(lVar13 + 0x38);
    uVar6 = *(undefined4 *)(lVar13 + 0x3c);
    uVar1 = *(undefined8 *)(lVar13 + 0x40);
    *param_3 = local_78;
    param_3[1] = uStack_70;
    param_3[2] = local_68;
    param_3[3] = adStack_60[0];
    *(undefined4 *)(param_3 + 4) = uVar10;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar4;
    *(undefined4 *)(param_3 + 5) = uVar5;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar6;
    param_3[6] = uVar1;
    param_3[7] = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)((longlong)param_3 + 0x44) = 0x3ff00000;
    *(undefined4 *)(param_3 + 9) = 0;
    *(undefined4 *)((longlong)param_3 + 0x4c) = 0x3ff00000;
    param_3[10] = 0x3ff0000000000000;
    param_3[0xb] = 0;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0x3ff0000000000000;
    local_68 = 0x3ff0000000000000;
    fVar17 = (float)FUN_147c4b146(*(undefined8 *)(param_1 + 0x58),&local_78);
    local_78 = param_3[8];
    uStack_70 = param_3[9];
    local_68 = param_3[10];
    fVar18 = (float)FUN_147c4b224(*(undefined8 *)(param_1 + 0x58),&local_78);
    uVar10 = 2;
    if (fVar17 < fVar18) {
      param_2[2] = fVar18;
      uVar10 = 3;
    }
    *param_2 = uVar10;
    param_2[1] = fVar17;
  }
  else {
    lVar13 = *plVar12;
    uVar7 = *(undefined8 *)(lVar13 + 0x30);
    uVar8 = *(undefined8 *)(lVar13 + 0x38);
    uVar1 = *(undefined8 *)(lVar13 + 0x40);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined4 *)((longlong)param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 3) = 0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = 0x3ff00000;
    param_3[4] = uVar7;
    param_3[5] = uVar8;
    param_3[6] = uVar1;
    param_3[7] = 0;
    param_3[8] = 0x3ff0000000000000;
    param_3[9] = 0x3ff0000000000000;
    param_3[10] = 0x3ff0000000000000;
    param_3[0xb] = 0;
    uVar10 = *(undefined4 *)(*plVar12 + 0x48);
    *param_2 = 2;
    param_2[1] = uVar10;
  }
  uVar1 = DAT_14c846520;
  uVar5 = DAT_14c846518._4_4_;
  uVar4 = (undefined4)DAT_14c846518;
  uVar10 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_3 + 8) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar10;
  *(undefined4 *)(param_3 + 9) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar5;
  param_3[10] = uVar1;
  param_3[0xb] = 0;
LAB_148821e23:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148821fff FUN_148821fff body=89 status=ok
// SIG undefined FUN_148821fff(void)

void FUN_148821fff(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x7a0))(param_2);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = FUN_148822058(param_1);
  FUN_14485c47a(lVar2,param_2);
  FUN_148821d56(lVar1,lVar2 + 0x10,lVar2 + 0x20);
  return;
}



// FUNCTION 148822058 FUN_148822058 body=59 status=ok
// SIG undefined FUN_148822058(void)

longlong FUN_148822058(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148823f9c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_148823f5c(lVar2);
  return lVar2;
}



// FUNCTION 148822093 FUN_148822093 body=143 status=ok
// SIG undefined FUN_148822093(void)

void FUN_148822093(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < (int)param_1[1]) {
    iVar4 = -1;
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar2 = FUN_14479d2ce(*param_1 + lVar5);
      iVar3 = (int)param_1[1];
      if (lVar2 == param_2) {
        iVar1 = iVar4 + iVar3;
        if (iVar1 != 0) {
          if (0 < iVar1) {
            iVar1 = 1;
          }
          memmove((void *)(*param_1 + lVar5),(void *)((longlong)(iVar3 - iVar1) * 0x80 + *param_1),
                  (longlong)iVar1 << 7);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x80;
      iVar4 = iVar4 + -1;
    } while (lVar6 < iVar3);
  }
  return;
}



// FUNCTION 148822122 FUN_148822122 body=118 status=ok
// SIG undefined FUN_148822122(void)

void FUN_148822122(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_3 + 0x48))) &&
     (uVar2 = (ulonglong)param_4, *(longlong *)(*(longlong *)(param_3 + 0x40) + uVar2 * 8) != 0)) {
    lVar1 = FUN_148822058();
    FUN_14485c47a(lVar1,param_2);
    *(undefined8 *)(lVar1 + 8) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x40) + uVar2 * 8) + 0x28);
    FUN_148821d56(*(undefined8 *)(*(longlong *)(param_3 + 0x40) + uVar2 * 8),lVar1 + 0x10,
                  lVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 148822198 FUN_148822198 body=156 status=ok
// SIG undefined FUN_148822198(void)

void FUN_148822198(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar1 = FUN_14479d2ce(*param_1 + lVar4);
      if ((lVar1 == param_2) && (lVar1 = *param_1, *(longlong *)(lVar1 + 8 + lVar4) == *param_3)) {
        iVar2 = (int)param_1[1];
        if (iVar2 + -1 != (int)lVar6) {
          iVar3 = (iVar2 + -1) - (int)lVar6;
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          memmove((void *)(lVar4 + lVar1),(void *)((longlong)(iVar2 - iVar5) * 0x80 + lVar1),
                  (longlong)iVar5 << 7);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        return;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x80;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 148822234 FUN_148822234 body=147 status=ok
// SIG undefined FUN_148822234(void)

void FUN_148822234(undefined8 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_140960b90();
  fVar2 = 0.0;
  if (0.0 < fVar1) {
    fVar2 = (float)FUN_14108d0d4(param_1);
    fVar1 = (float)FUN_140960b90(param_1);
    fVar2 = fVar2 / fVar1;
  }
  fVar1 = fVar2 + param_2;
  if (param_3 <= fVar2 + param_2) {
    fVar1 = param_3;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = (float)FUN_140960b90(param_1);
  FUN_14095ee72(param_1,fVar1 * fVar2);
  return;
}



// FUNCTION 1488222c8 FUN_1488222c8 body=53 status=ok
// SIG undefined FUN_1488222c8(void)

ulonglong FUN_1488222c8(int *param_1,int *param_2)

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



// FUNCTION 1488222fe FUN_1488222fe body=257 status=ok
// SIG undefined FUN_1488222fe(void)

void FUN_1488222fe(longlong param_1)

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
      FUN_148822234((longlong)iStack_54 * 0x80 + *local_70,0x3f800000,0x3f800000);
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



// FUNCTION 148822400 FUN_148822400 body=38 status=ok
// SIG undefined FUN_148822400(void)

undefined8 FUN_148822400(undefined8 param_1,int param_2)

{
  FUN_1403dfcb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148822450 FUN_148822450 body=38 status=ok
// SIG undefined FUN_148822450(void)

undefined8 FUN_148822450(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148822476 FUN_148822476 body=38 status=ok
// SIG undefined FUN_148822476(void)

undefined8 FUN_148822476(undefined8 param_1,int param_2)

{
  FUN_140d9830c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488224aa FUN_1488224aa body=93 status=ok
// SIG undefined FUN_1488224aa(void)

undefined8 * FUN_1488224aa(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 148822508 FUN_148822508 body=147 status=ok
// SIG undefined FUN_148822508(void)

void FUN_148822508(longlong param_1,int param_2)

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



// FUNCTION 14882259c FUN_14882259c body=407 status=ok
// SIG undefined FUN_14882259c(void)

void FUN_14882259c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
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
  *(undefined1 *)(param_1 + 3) = 1;
  plVar3 = (longlong *)FUN_140d6a126(DAT_14c872ce0,param_1[1],0,*param_1);
  uVar2 = local_68;
  if (plVar3 != (longlong *)0x0) {
    local_50 = plVar3 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)plVar3[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_68 = local_48;
    uVar2 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar3;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar4 = local_68._4_4_;
      local_68 = uVar2;
      do {
        lVar1 = *local_80;
        lVar5 = (longlong)iVar4 * 0x40;
        if (*(longlong *)(lVar1 + lVar5) == param_1[2]) {
          uVar7 = (ulonglong)(*(int *)(lVar1 + 0x28 + lVar5) - 2U < 0x7fffffff) * 0x10;
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(uVar7 + 0x18 + lVar1 + lVar5) != 0) {
            puVar6 = *(undefined2 **)(lVar1 + lVar5 + 8 + (uVar7 | 8));
          }
          FUN_1446f470e(&local_58,puVar6,1);
          FUN_144869592(param_1 + 4,local_84,&local_58,0);
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882274c FUN_14882274c body=93 status=ok
// SIG undefined FUN_14882274c(void)

void FUN_14882274c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488227aa FUN_1488227aa body=93 status=ok
// SIG undefined FUN_1488227aa(void)

void FUN_1488227aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148822808 FUN_148822808 body=126 status=ok
// SIG undefined FUN_148822808(void)

void FUN_148822808(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f6fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148822877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148822894 FUN_148822894 body=21 status=ok
// SIG undefined FUN_148822894(void)

undefined8 FUN_148822894(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1488228aa FUN_1488228aa body=48 status=ok
// SIG undefined FUN_1488228aa(void)

void FUN_1488228aa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1488228da FUN_1488228da body=48 status=ok
// SIG undefined FUN_1488228da(void)

void FUN_1488228da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14882290a FUN_14882290a body=48 status=ok
// SIG undefined FUN_14882290a(void)

void FUN_14882290a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148822952 FUN_148822952 body=180 status=ok
// SIG undefined FUN_148822952(void)

void FUN_148822952(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar5) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar2 + 8 + uVar5);
      }
      if ((*(longlong *)(lVar2 + uVar5) == *param_2) && (lVar6 == lVar3)) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar4 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14095e81a(param_1,iVar1);
    lVar2 = *param_1;
  }
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + lVar4 * 0x10 + 8) = param_2[1];
  return;
}



// FUNCTION 148822a06 FUN_148822a06 body=71 status=ok
// SIG undefined FUN_148822a06(void)

void FUN_148822a06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x160);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    lVar1 = param_1;
  }
  FUN_143d0a5e3(lVar1,*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    return;
  }
  FUN_148822a4e(param_1);
  return;
}



// FUNCTION 148822a4e FUN_148822a4e body=90 status=ok
// SIG undefined FUN_148822a4e(void)

void FUN_148822a4e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x16c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
    if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x160),
              (longlong)*(int *)((longlong)param_1 + 0x168) * 0x58);
      FUN_1446efa72((longlong)param_1 + 0x160,0,0,0x58);
      return;
    }
  }
  return;
}



// FUNCTION 148822aa8 FUN_148822aa8 body=141 status=ok
// SIG undefined FUN_148822aa8(void)

void FUN_148822aa8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x160);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x160,0,param_3,0x58);
    memmove(*(void **)((longlong)param_1 + 0x160),param_1,(longlong)param_2 * 0x58);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x160,param_2,param_3,0x58);
  return;
}



// FUNCTION 148822b36 FUN_148822b36 body=119 status=ok
// SIG undefined FUN_148822b36(void)

void FUN_148822b36(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_148822bae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148822bae FUN_148822bae body=141 status=ok
// SIG undefined FUN_148822bae(void)

void FUN_148822bae(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 148822c3c FUN_148822c3c body=119 status=ok
// SIG undefined FUN_148822c3c(void)

void FUN_148822c3c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_148822cb4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148822cb4 FUN_148822cb4 body=141 status=ok
// SIG undefined FUN_148822cb4(void)

void FUN_148822cb4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 148822d42 FUN_148822d42 body=136 status=ok
// SIG undefined FUN_148822d42(void)

void FUN_148822d42(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x50,0);
      iVar4 = (int)(uVar3 / 0x50);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_148822dcc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148822dcc FUN_148822dcc body=149 status=ok
// SIG undefined FUN_148822dcc(void)

void FUN_148822dcc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x50);
  return;
}



// FUNCTION 148822e62 FUN_148822e62 body=132 status=ok
// SIG undefined FUN_148822e62(void)

void FUN_148822e62(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x168);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x16c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x58,0);
      iVar4 = (int)(uVar3 / 0x58);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x16c) = iVar5;
    FUN_148822aa8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148822ee8 FUN_148822ee8 body=119 status=ok
// SIG undefined FUN_148822ee8(void)

void FUN_148822ee8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_148822f60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148822f60 FUN_148822f60 body=141 status=ok
// SIG undefined FUN_148822f60(void)

void FUN_148822f60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 148822fee FUN_148822fee body=119 status=ok
// SIG undefined FUN_148822fee(void)

void FUN_148822fee(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_148823066(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148823066 FUN_148823066 body=141 status=ok
// SIG undefined FUN_148823066(void)

void FUN_148823066(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 1488230f4 FUN_1488230f4 body=31 status=ok
// SIG undefined FUN_1488230f4(void)

undefined8 FUN_1488230f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148823128 FUN_148823128 body=85 status=ok
// SIG undefined FUN_148823128(void)

void FUN_148823128(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7770;
  return;
}



// FUNCTION 14882317e FUN_14882317e body=118 status=ok
// SIG undefined FUN_14882317e(void)

void FUN_14882317e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7770;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488231e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488231f4 FUN_1488231f4 body=105 status=ok
// SIG undefined FUN_1488231f4(void)

undefined8 FUN_1488231f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146070250(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882325e FUN_14882325e body=38 status=ok
// SIG undefined FUN_14882325e(void)

undefined8 FUN_14882325e(undefined8 param_1,int param_2)

{
  FUN_145a16cec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148823284 FUN_148823284 body=45 status=ok
// SIG undefined FUN_148823284(void)

longlong FUN_148823284(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145a16cec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488232b2 FUN_1488232b2 body=54 status=ok
// SIG undefined FUN_1488232b2(void)

longlong FUN_1488232b2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488232e8 FUN_1488232e8 body=83 status=ok
// SIG undefined FUN_1488232e8(void)

undefined8 * FUN_1488232e8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882333e FUN_14882333e body=142 status=ok
// SIG undefined FUN_14882333e(void)

void FUN_14882333e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_3 + 0x28))(param_3);
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      plVar1 = *(longlong **)(param_1 + 8);
      lVar2 = (longlong)*(int *)(param_1 + 0x10) << 5;
      do {
        local_30 = 0;
        (**(code **)(*plVar1 + 8))(plVar1,&local_30,param_3);
        plVar1 = plVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488233ce FUN_1488233ce body=98 status=ok
// SIG undefined FUN_1488233ce(void)

void FUN_1488233ce(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148823430 FUN_148823430 body=52 status=ok
// SIG undefined FUN_148823430(void)

void FUN_148823430(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1470b0a5a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148823464 FUN_148823464 body=267 status=ok
// SIG undefined FUN_148823464(void)

void FUN_148823464(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  FUN_1457d8d86();
  uVar4 = FUN_140c4fdb6();
  *(undefined8 *)(param_1 + 8) = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 0xb) = 0;
  FUN_1486df512(puVar5 + 2,param_2 + 2);
  puVar5[0xc] = param_2[0xc];
  *(undefined4 *)(puVar5 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3f75c0;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar6;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 148823570 FUN_148823570 body=13 status=ok
// SIG undefined FUN_148823570(void)

void FUN_148823570(longlong param_1)

{
  FUN_14882359c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14882357e FUN_14882357e body=29 status=ok
// SIG undefined FUN_14882357e(void)

undefined8 FUN_14882357e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882359c FUN_14882359c body=63 status=ok
// SIG undefined FUN_14882359c(void)

void FUN_14882359c(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_1400fd330(param_2 + 0x10);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 1488235dc FUN_1488235dc body=107 status=ok
// SIG undefined FUN_1488235dc(void)

/* WARNING: Removing unreachable block (ram,0x00014882360e) */
/* WARNING: Removing unreachable block (ram,0x0001488235ea) */
/* WARNING: Removing unreachable block (ram,0x000148823600) */
/* WARNING: Removing unreachable block (ram,0x000148823619) */
/* WARNING: Removing unreachable block (ram,0x000148823602) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488235dc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb77c60;
  LOCK();
  UNLOCK();
  DAT_14cb77c60 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb77c68 = _DAT_14cb77c68 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb77c68 = _DAT_14cb77c68 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148823648 FUN_148823648 body=118 status=ok
// SIG undefined FUN_148823648(void)

void FUN_148823648(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1488236be FUN_1488236be body=62 status=ok
// SIG undefined FUN_1488236be(void)

void FUN_1488236be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488236fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1488236fc FUN_1488236fc body=93 status=ok
// SIG undefined FUN_1488236fc(void)

ulonglong FUN_1488236fc(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14882375c FUN_14882375c body=276 status=ok
// SIG undefined FUN_14882375c(void)

void FUN_14882375c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_148823870(lVar2,*param_2);
    iVar7 = 0;
    iVar8 = 0;
    do {
      lVar6 = (longlong)iVar8;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar6 * 0x10;
      lVar13 = lVar2 + 0x10 + lVar12;
      iVar9 = iVar8;
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar3;
        if (lVar11 <= lVar6) break;
        bVar5 = FUN_148823870(lVar13,*param_2);
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 0x10;
        iVar10 = iVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar7 != iVar8) {
          memmove((void *)((longlong)iVar7 * 0x10 + lVar2),(void *)(lVar12 + lVar2),
                  (longlong)(iVar10 - iVar8) << 4);
        }
        iVar7 = iVar7 + (iVar10 - iVar8);
      }
      iVar8 = iVar10;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar11);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 148823870 FUN_148823870 body=96 status=ok
// SIG undefined FUN_148823870(void)

undefined8 FUN_148823870(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  
  lVar1 = *param_2;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    uVar3 = extraout_var;
  }
  if (*param_1 == lVar1) {
    lVar1 = param_2[1];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var_00;
    }
    uVar2 = CONCAT71(uVar3,param_1[1] == lVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1488238d0 FUN_1488238d0 body=68 status=ok
// SIG undefined FUN_1488238d0(void)

void FUN_1488238d0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148823914();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148823914 FUN_148823914 body=322 status=ok
// SIG undefined FUN_148823914(void)

void FUN_148823914(longlong *param_1)

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



// FUNCTION 148823a58 FUN_148823a58 body=114 status=ok
// SIG undefined FUN_148823a58(void)

void FUN_148823a58(longlong *param_1,int param_2)

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



// FUNCTION 148823aca FUN_148823aca body=146 status=ok
// SIG undefined FUN_148823aca(void)

void FUN_148823aca(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148823b5e FUN_148823b5e body=29 status=ok
// SIG undefined FUN_148823b5e(void)

undefined8 FUN_148823b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148823b98 FUN_148823b98 body=93 status=ok
// SIG undefined FUN_148823b98(void)

void FUN_148823b98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148823bf6 FUN_148823bf6 body=93 status=ok
// SIG undefined FUN_148823bf6(void)

void FUN_148823bf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148823c54 FUN_148823c54 body=126 status=ok
// SIG undefined FUN_148823c54(void)

void FUN_148823c54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148823cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148823ce0 FUN_148823ce0 body=21 status=ok
// SIG undefined FUN_148823ce0(void)

undefined8 FUN_148823ce0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148823cf8 FUN_148823cf8 body=116 status=ok
// SIG undefined FUN_148823cf8(void)

void FUN_148823cf8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_1486b8cdc(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148823d6e FUN_148823d6e body=58 status=ok
// SIG undefined FUN_148823d6e(void)

void FUN_148823d6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148823da8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_1486b8cdc(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,8);
  return;
}



// FUNCTION 148823da8 FUN_148823da8 body=108 status=ok
// SIG undefined FUN_148823da8(void)

ulonglong FUN_148823da8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
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



// FUNCTION 148823e16 FUN_148823e16 body=101 status=ok
// SIG undefined FUN_148823e16(void)

void FUN_148823e16(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_1486b8cdc(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 148823e7e FUN_148823e7e body=41 status=ok
// SIG undefined FUN_148823e7e(void)

void FUN_148823e7e(undefined4 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(undefined4 *)(param_2 + lVar2 * 4);
    *param_1 = 0;
    param_1[1] = uVar1;
    param_1[2] = uVar1;
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 3;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 148823ea8 FUN_148823ea8 body=62 status=ok
// SIG undefined FUN_148823ea8(void)

void FUN_148823ea8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148823ee6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 148823ee6 FUN_148823ee6 body=118 status=ok
// SIG undefined FUN_148823ee6(void)

ulonglong FUN_148823ee6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148823f23;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_148823f23:
  return param_2 & 0xffffffff;
}



// FUNCTION 148823f5c FUN_148823f5c body=63 status=ok
// SIG undefined FUN_148823f5c(void)

void FUN_148823f5c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 148823f9c FUN_148823f9c body=132 status=ok
// SIG undefined FUN_148823f9c(void)

void FUN_148823f9c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148824022 FUN_148824022 body=132 status=ok
// SIG undefined FUN_148824022(void)

void FUN_148824022(longlong param_1,int param_2)

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



// FUNCTION 1488240a8 FUN_1488240a8 body=95 status=ok
// SIG undefined FUN_1488240a8(void)

void FUN_1488240a8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 148824108 FUN_148824108 body=136 status=ok
// SIG undefined FUN_148824108(void)

void FUN_148824108(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148824190 FUN_148824190 body=110 status=ok
// SIG undefined FUN_148824190(void)

void FUN_148824190(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_148824200(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148824200 FUN_148824200 body=132 status=ok
// SIG undefined FUN_148824200(void)

void FUN_148824200(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1488242ab FUN_1488242ab body=192 status=ok
// SIG undefined FUN_1488242ab(void)

bool FUN_1488242ab(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_20 = param_3;
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    lVar4 = FUN_148829e3c();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_28 = plVar3;
    lVar4 = FUN_148829e3c();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882436c FUN_14882436c body=149 status=ok
// SIG undefined FUN_14882436c(void)

void FUN_14882436c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_28 = puVar2;
  local_20 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_148829f84();
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_148829f84();
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148824412 FUN_148824412 body=149 status=ok
// SIG undefined FUN_148824412(void)

void FUN_148824412(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_28 = puVar2;
  local_20 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_14882a156();
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_14882a156();
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488244b8 FUN_1488244b8 body=149 status=ok
// SIG undefined FUN_1488244b8(void)

void FUN_1488244b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_28 = puVar2;
  local_20 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_14882a328();
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_14882a328();
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882455e FUN_14882455e body=149 status=ok
// SIG undefined FUN_14882455e(void)

void FUN_14882455e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_28 = puVar2;
  local_20 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_14882a4fa();
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_14882a4fa();
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488246f4 FUN_1488246f4 body=41 status=ok
// SIG undefined FUN_1488246f4(void)

undefined8 FUN_1488246f4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148824712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14882471e FUN_14882471e body=53 status=ok
// SIG undefined FUN_14882471e(void)

undefined8 * FUN_14882471e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 148824754 FUN_148824754 body=1552 status=ok
// SIG undefined FUN_148824754(void)

undefined8 FUN_148824754(longlong param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  undefined8 uVar14;
  double *pdVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined6 uStack_ce;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar12 = *(longlong *)(param_1 + 0x2d0);
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x198) == '\0') {
      lVar2 = *(longlong *)(param_1 + -0x1c8);
      if (lVar2 == 0) {
        puVar17 = &DAT_14c8464e0;
        uVar18 = SUB84(DAT_14c8464f0,0);
        uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar18 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
        puVar17 = (undefined8 *)(lVar2 + 0x260);
      }
      uVar14 = puVar17[1];
      fVar1 = *(float *)(lVar12 + 0x2f0);
      *(undefined8 *)(param_2 + 0x28) = *puVar17;
      *(undefined8 *)(param_2 + 0x30) = uVar14;
      *(double *)(param_2 + 0x38) = (double)fVar1 + (double)CONCAT44(uVar19,uVar18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x38);
      lVar12 = *(longlong *)(param_1 + -0x1c8);
      if (lVar12 == 0) {
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        dVar13 = 0.0;
        dVar22 = 1.0;
      }
      else {
        uVar18 = *(undefined4 *)(lVar12 + 0x240);
        uVar19 = *(undefined4 *)(lVar12 + 0x244);
        uVar20 = *(undefined4 *)(lVar12 + 0x248);
        uVar21 = *(undefined4 *)(lVar12 + 0x24c);
        dVar13 = *(double *)(lVar12 + 0x250);
        dVar22 = *(double *)(lVar12 + 600);
      }
      dVar4 = (double)CONCAT44(uVar21,uVar20);
      dVar24 = (double)CONCAT44(uVar19,uVar18) * 0.0 + dVar4 * -0.0;
      dVar7 = (double)CONCAT44(uVar21,uVar20) - dVar13 * 0.0;
      dVar23 = dVar13 * 0.0 - (double)CONCAT44(uVar19,uVar18);
      dVar24 = dVar24 + dVar24;
      dVar23 = dVar23 + dVar23;
      dVar7 = dVar7 + dVar7;
      *(double *)(param_2 + 0x58) = (dVar4 * dVar24 - dVar23 * dVar13) + dVar22 * dVar7 + 0.0;
      *(double *)(param_2 + 0x60) =
           (dVar13 * dVar7 - dVar24 * (double)CONCAT44(uVar19,uVar18)) + dVar22 * dVar23 + 0.0;
      *(double *)(param_2 + 0x68) =
           ((double)CONCAT44(uVar19,uVar18) * dVar23 - dVar7 * dVar4) + dVar22 * dVar24 + 1.0;
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 100);
      dVar13 = *(double *)(param_2 + 0x68);
      *(double *)(param_2 + 0x50) = dVar13;
      lVar12 = *(longlong *)(param_1 + -0x1c8);
      if (lVar12 == 0) {
        local_128 = DAT_14c846508;
        uVar18 = (undefined4)DAT_14c8464f8;
        uVar19 = DAT_14c8464f8._4_4_;
        uVar20 = (undefined4)DAT_14c846500;
        uVar21 = DAT_14c846500._4_4_;
      }
      else {
        dVar22 = *(double *)(lVar12 + 0x240);
        dVar4 = *(double *)(lVar12 + 0x248);
        dVar7 = *(double *)(lVar12 + 0x250);
        dVar23 = *(double *)(lVar12 + 600);
        pdVar15 = *(double **)(lVar12 + 0x228);
        local_f8 = dVar22;
        uStack_f0 = dVar4;
        local_e8 = dVar7;
        dStack_e0 = dVar23;
        if (pdVar15 == (double *)0x0) {
          puVar17 = (undefined8 *)&DAT_00000040;
          pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar15 = DAT_14c8463d0;
          pdVar15[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar15[2] = DAT_14c8463e0;
          pdVar15[3] = dVar13;
          dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar15[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar15[6] = DAT_14c846508;
          *(double **)(lVar12 + 0x228) = pdVar15;
        }
        auVar6._8_4_ = (int)-(ulonglong)(dVar4 != pdVar15[1]);
        auVar6._0_8_ = -(ulonglong)(dVar22 != *pdVar15);
        auVar6._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar15[1]) >> 0x20);
        iVar11 = movmskpd(SUB84(dVar13,0),auVar6);
        auVar9._8_4_ = (int)-(ulonglong)(dVar23 != pdVar15[3]);
        auVar9._0_8_ = -(ulonglong)(dVar7 != pdVar15[2]);
        auVar9._12_4_ = (int)(-(ulonglong)(dVar23 != pdVar15[3]) >> 0x20);
        uVar16 = movmskpd((int)puVar17,auVar9);
        if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
          pdVar15[2] = local_e8;
          pdVar15[3] = dStack_e0;
          *(undefined4 *)pdVar15 = (undefined4)local_f8;
          *(undefined4 *)((longlong)pdVar15 + 4) = local_f8._4_4_;
          *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_f0;
          *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_f0._4_4_;
          FUN_1448052ee(&local_f8,&local_138);
          pdVar15[6] = local_128;
          pdVar15[4] = local_138;
          pdVar15[5] = uStack_130;
        }
        local_128 = pdVar15[6];
        uVar18 = *(undefined4 *)(pdVar15 + 4);
        uVar19 = *(undefined4 *)((longlong)pdVar15 + 0x24);
        uVar20 = *(undefined4 *)(pdVar15 + 5);
        uVar21 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
      }
      local_138 = (double)CONCAT44(uVar19,uVar18);
      uStack_130 = (double)CONCAT44(uVar21,uVar20);
      *(double *)(param_3 + 4) = local_128;
      *param_3 = uVar18;
      param_3[1] = uVar19;
      param_3[2] = uVar20;
      param_3[3] = uVar21;
LAB_148824be2:
      uVar14 = 1;
      goto LAB_148824c0c;
    }
    lVar12 = FUN_1447210f0(param_1 + -0x390);
    if (lVar12 != 0) {
      lVar2 = *(longlong *)(param_1 + -0x1c8);
      if (lVar2 == 0) {
        local_148 = DAT_14c8464f0;
        local_158 = DAT_14c8464e0;
        uStack_150 = DAT_14c8464e8;
      }
      else {
        local_158 = *(undefined8 *)(lVar2 + 0x260);
        uStack_150 = *(undefined8 *)(lVar2 + 0x268);
        local_148 = *(double *)(lVar2 + 0x270);
      }
      local_178 = local_158;
      uStack_170 = uStack_150;
      lVar3 = *(longlong *)(param_1 + 0x2d0);
      dVar13 = local_148 - (double)(*(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x290));
      local_168 = dVar13;
      if ((lVar2 != 0) && (*(char *)(lVar3 + 0x2e8) == '\x01')) {
        FUN_14487e4ca(lVar2,&local_f8);
        local_168 = dVar13 - (double)CONCAT62(uStack_ce,local_d0);
      }
      local_190 = &local_f8;
      local_d4 = 0;
      local_d0 = 0x101;
      local_a8 = 0;
      local_a0 = 0x800000000;
      local_88 = 0;
      local_80 = 0x400000000;
      uVar10 = (ulonglong)dStack_e0 >> 8;
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      local_d8 = 0;
      dStack_e0 = (double)CONCAT71((uint7)uVar10 & 0xffffff,1);
      local_e8 = 7.292902078643618e-304;
      local_198 = &local_180;
      local_17c = 0;
      local_180 = 3;
      dVar13 = (double)FUN_140526294(lVar12,param_2,&local_158,&local_178);
      uVar18 = (undefined4)lVar12;
      if (SUB81(dVar13,0) != '\0') {
        lVar12 = *(longlong *)(param_1 + -0x1c8);
        if (lVar12 == 0) {
          local_108 = DAT_14c846508;
          local_118 = (undefined4)DAT_14c8464f8;
          uStack_114 = DAT_14c8464f8._4_4_;
          uStack_110 = (undefined4)DAT_14c846500;
          uStack_10c = DAT_14c846500._4_4_;
        }
        else {
          dVar22 = *(double *)(lVar12 + 0x240);
          dVar4 = *(double *)(lVar12 + 0x248);
          dVar7 = *(double *)(lVar12 + 0x250);
          dVar23 = *(double *)(lVar12 + 600);
          pdVar15 = *(double **)(lVar12 + 0x228);
          local_138 = dVar22;
          uStack_130 = dVar4;
          local_128 = dVar7;
          dStack_120 = dVar23;
          if (pdVar15 == (double *)0x0) {
            uVar18 = 0x40;
            pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
            dVar13 = DAT_14c8463d8;
            *pdVar15 = DAT_14c8463d0;
            pdVar15[1] = dVar13;
            dVar13 = DAT_14c8463e8;
            pdVar15[2] = DAT_14c8463e0;
            pdVar15[3] = dVar13;
            dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar15[5] = dVar13;
            dVar13 = DAT_14c846508;
            pdVar15[6] = DAT_14c846508;
            *(double **)(lVar12 + 0x228) = pdVar15;
          }
          auVar5._8_4_ = (int)-(ulonglong)(dVar4 != pdVar15[1]);
          auVar5._0_8_ = -(ulonglong)(dVar22 != *pdVar15);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar15[1]) >> 0x20);
          iVar11 = movmskpd(SUB84(dVar13,0),auVar5);
          auVar8._8_4_ = (int)-(ulonglong)(dVar23 != pdVar15[3]);
          auVar8._0_8_ = -(ulonglong)(dVar7 != pdVar15[2]);
          auVar8._12_4_ = (int)(-(ulonglong)(dVar23 != pdVar15[3]) >> 0x20);
          uVar16 = movmskpd(uVar18,auVar8);
          if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
            pdVar15[2] = local_128;
            pdVar15[3] = dStack_120;
            *(undefined4 *)pdVar15 = (undefined4)local_138;
            *(undefined4 *)((longlong)pdVar15 + 4) = local_138._4_4_;
            *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_130;
            *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_130._4_4_;
            FUN_1448052ee(&local_138,&local_118);
            pdVar15[6] = local_108;
            pdVar15[4] = (double)CONCAT44(uStack_114,local_118);
            pdVar15[5] = (double)CONCAT44(uStack_10c,uStack_110);
          }
          local_108 = pdVar15[6];
          local_118 = *(undefined4 *)(pdVar15 + 4);
          uStack_114 = *(undefined4 *)((longlong)pdVar15 + 0x24);
          uStack_110 = *(undefined4 *)(pdVar15 + 5);
          uStack_10c = *(undefined4 *)((longlong)pdVar15 + 0x2c);
        }
        *(double *)(param_3 + 4) = local_108;
        *param_3 = local_118;
        param_3[1] = uStack_114;
        param_3[2] = uStack_110;
        param_3[3] = uStack_10c;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_148824be2;
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar14 = 0;
LAB_148824c0c:
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148824d66 FUN_148824d66 body=84 status=ok
// SIG undefined FUN_148824d66(void)

void FUN_148824d66(longlong param_1)

{
  FUN_1405f1eac();
  thunk_FUN_1405f85e0(param_1 + 0x3f0);
  FUN_1401b3e2a(param_1 + 0x570);
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_148824dba(param_1);
  }
  FUN_1409b534c(param_1 + 0x828,param_1 + 0x3b8);
  return;
}



// FUNCTION 148824dba FUN_148824dba body=143 status=ok
// SIG undefined FUN_148824dba(void)

void FUN_148824dba(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x4f8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
    local_18 = *(undefined4 *)(lVar1 + 0x108);
    local_20 = *(undefined8 *)(lVar1 + 0x100);
    FUN_1409b5530(param_1 + 0x1188,param_1 + 0x3f0,&local_20,*(undefined1 *)(lVar1 + 0x10c));
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xd);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148824e4a FUN_148824e4a body=119 status=ok
// SIG undefined FUN_148824e4a(void)

void FUN_148824e4a(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_140cfa53a(param_1 + 0x828);
  FUN_1406335ea(param_1 + 0x570,param_2);
  FUN_140872868(param_1 + 0x5f0);
  FUN_148824ec2(param_1);
  uVar1 = FUN_1447210f0(param_1);
  cVar2 = FUN_1415d8652(param_2,uVar1);
  if (cVar2 == '\0') {
    FUN_14078a7c0(param_1 + 0x500);
    thunk_FUN_140633cb6(param_1 + 0x3f0);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148824ec2 FUN_148824ec2 body=278 status=ok
// SIG undefined FUN_148824ec2(void)

void FUN_148824ec2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1 + 0x12a8;
  cVar1 = FUN_144729dda(lVar3);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_1446f470e(&local_40,L"DangerZoneDestroyOnProjectileEvent",1);
    FUN_1409ca370(lVar2 + 0xd28,param_1,local_40);
    FUN_144a7b126(lVar2 + 0xd28,&local_31,1);
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_1446f470e(&local_48,L"DangerZoneDestroyOnProjectileEvent",1);
    FUN_1410ccfa4(lVar2 + 0x20e,param_1,local_48);
    lVar3 = FUN_14479d2ce(lVar3);
    FUN_1446f470e(&local_50,L"DangerZoneDestroyOnProjectileEvent",1);
    FUN_1409ca370(lVar3 + 0xd18,param_1,local_50);
    FUN_144a7b126(lVar3 + 0xd18,&local_31,1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148824fda FUN_148824fda body=47 status=ok
// SIG undefined FUN_148824fda(void)

void FUN_148824fda(longlong param_1)

{
  FUN_1407fb560();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x5f0);
    return;
  }
  return;
}



// FUNCTION 148825010 FUN_148825010 body=33 status=ok
// SIG undefined FUN_148825010(void)

void FUN_148825010(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x3f0);
  return;
}



// FUNCTION 148825032 FUN_148825032 body=204 status=ok
// SIG undefined FUN_148825032(void)

void FUN_148825032(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1446f470e(&local_58,L"GbxActorData",1);
  uVar1 = FUN_1410c9586();
  FUN_1410c9586();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_48);
  local_38 = 0;
  local_48 = 0;
  local_40 = 1;
  local_58 = L"FactsConduit";
  local_50 = 0x10000000d;
  FUN_140c2c993(&local_58,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825100 FUN_148825100 body=53 status=ok
// SIG undefined FUN_148825100(void)

void FUN_148825100(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = switchD_143c3d4dc::caseD_57();
  if (lVar1 != 0) {
    return;
  }
  FUN_144862176(param_1 + 0x570,param_2);
  return;
}



// FUNCTION 148825136 FUN_148825136 body=917 status=ok
// SIG undefined FUN_148825136(void)

void FUN_148825136(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  code *local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0xe0))();
    FUN_140358e3e(param_1 + 0x480,uVar6);
  }
  lVar3 = param_1 + -0x390;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    lVar8 = FUN_1464d6244();
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      *(longlong **)(param_1 + 0x168) = param_2;
      FUN_14078a36a(param_1 + 0x170,param_1 + 8);
      if (*(longlong **)(param_1 + 0x168) == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0xe0))();
        FUN_14035fd50(param_1 + 0x480,uVar6,1);
        lVar7 = *(longlong *)(param_1 + 0x168);
      }
      cVar5 = *(char *)(lVar7 + 0x138);
      *(char *)(param_1 + 0xfb0) = cVar5;
      if (*(char *)(param_1 + -0x218) == '\x03') {
        if (cVar5 != '\0') {
          lVar7 = FUN_14492b4b4(*(undefined8 *)(param_1 + -0x228));
          if (lVar7 != 0) {
            local_40 = FUN_1488255cc;
            local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
            FUN_1488254cc(lVar7,&local_30,lVar3);
            *(undefined8 *)(param_1 + 0xfa8) = local_30;
            local_58 = *(undefined8 *)(lVar7 + 0x20);
            local_50 = *(undefined2 *)(lVar7 + 0x28);
            local_48 = *(undefined8 *)(lVar7 + 0x30);
            FUN_140365ba6(param_1 + 0xf48,&local_58,1);
          }
        }
        cVar5 = FUN_144b2f46c(param_1 + 0xf68);
        if (cVar5 == '\0') {
          local_70 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x78))();
          local_68 = 0xffff;
          local_60 = 0;
          FUN_140365ba6(param_1 + 0xf48,&local_70,1);
        }
      }
      FUN_148824dba(lVar3);
      goto LAB_1488251cd;
    }
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
LAB_1488251cd:
  if (*(longlong *)(param_1 + 0xef0) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x168);
    if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0xe8) == 0)) ||
       (0xfffffffd < *(int *)(lVar7 + 0xf0) - 1U)) {
      uVar6 = FUN_1447210f0();
      puVar9 = &local_a0;
      local_a0 = 0;
      local_98 = 0xaaad1010;
      local_90 = 0;
    }
    else {
      uVar6 = FUN_1447210f0(lVar3);
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0xe8);
      puVar9 = &local_88;
      local_80 = *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0xf0);
      local_78 = 0;
    }
    local_a8 = 1;
    FUN_14078bff4(&local_40,puVar9,param_1 + 0x40,uVar6);
    plVar1 = local_38;
    if ((code **)(param_1 + 0xef0) != &local_40) {
      *(code **)(param_1 + 0xef0) = local_40;
      local_40 = (code *)0x0;
      plVar4 = *(longlong **)(param_1 + 0xef8);
      if (local_38 != plVar4) {
        local_38 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xef8) = plVar1;
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
      }
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  FUN_14078a0a0(param_1 + 0x18,0);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    FUN_140355e94(param_1 + 0x1e0);
  }
  else {
    FUN_14882562a(*(longlong *)(param_1 + 0x168),&local_40);
    FUN_14078b280(param_1 + 0x1e0,lVar3,&local_40);
    if (local_40 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488254cc FUN_1488254cc body=254 status=ok
// SIG undefined FUN_1488254cc(void)

undefined8
FUN_1488254cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac8da20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b3f88f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140367cc6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488255cc FUN_1488255cc body=93 status=ok
// SIG undefined FUN_1488255cc(void)

void FUN_1488255cc(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined2 *)(param_2 + 1);
  local_10 = param_2[2];
  FUN_140365ba6(param_1 + 0x12d8,&local_20,CONCAT71((uint7)(byte)((ushort)local_18 >> 8),1));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882562a FUN_14882562a body=472 status=ok
// SIG undefined FUN_14882562a(void)

longlong * FUN_14882562a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 8);
    do {
      plVar1 = plVar7 + -1;
      lVar5 = FUN_14479d2ce(plVar1);
      if (lVar5 == 0) {
        if (*plVar7 != 0) {
          lVar5 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar5);
            if (lVar5 == 0) goto LAB_14882579c;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_14882567b;
        }
      }
      else {
LAB_14882567b:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
            (lVar6 = FUN_140789e1e(), lVar6 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar9 = lVar5;
          }
          if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar9 == 0) goto LAB_14882579c;
          }
          else {
            FUN_1456cec3c(lVar9);
          }
          lVar6 = FUN_140789e1e();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140789f3e(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar5;
            if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_14882579c:
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 148825802 FUN_148825802 body=159 status=ok
// SIG undefined FUN_148825802(void)

void FUN_148825802(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + -0x260) == '\x03') && (*(char *)(param_1 + 0xdbd) == '\x02')) {
    FUN_1403fa066(param_2 + 0x20,local_48,0);
    FUN_1447325ac(local_48,local_50,1);
    FUN_140bfca4e(param_1 + 0xdb0,&DAT_14cb246b0,local_50,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488258a2 FUN_1488258a2 body=193 status=ok
// SIG undefined FUN_1488258a2(void)

void FUN_1488258a2(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48;
  ulonglong local_40;
  float fVar2;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + -0x220) == '\x03') {
    fVar1 = *(float *)(param_2 + 0x84);
    fVar2 = *(float *)(param_2 + 0x84);
    local_48 = *(undefined8 *)(param_2 + 0x68);
    FUN_1401533ba(local_54,&local_48,1);
    FUN_140bfca4e(param_1 + 0xdf0,local_54,param_2 + 0x78,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar2 <= 0.0 && fVar1 != 0.0) &
                  0xffffffff);
  }
  FUN_1449bd2b2(param_1 + 600,param_2,param_3);
  FUN_1409d1ca6(param_1 + 0x1d8,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825980 FUN_148825980 body=41 status=ok
// SIG undefined FUN_148825980(void)

undefined8 FUN_148825980(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014882599e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1488259aa FUN_1488259aa body=53 status=ok
// SIG undefined FUN_1488259aa(void)

undefined8 * FUN_1488259aa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 148825a06 FUN_148825a06 body=47 status=ok
// SIG undefined FUN_148825a06(void)

void FUN_148825a06(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846480;
  if (*(longlong *)(param_1 + -0x208) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + -0x208) + 0x240);
  }
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 148825a3e FUN_148825a3e body=74 status=ok
// SIG undefined FUN_148825a3e(void)

undefined8 FUN_148825a3e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x3b8);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825a8a FUN_148825a8a body=118 status=ok
// SIG undefined FUN_148825a8a(void)

ulonglong FUN_148825a8a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825b02 FUN_148825b02 body=344 status=ok
// SIG undefined FUN_148825b02(void)

undefined8 *
FUN_148825b02(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4,
             longlong param_5,undefined8 *param_6,undefined1 param_7,undefined2 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[5] = &PTR_FUN_14b00bdf8;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0x404;
  param_1[6] = &DAT_14a176f00;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xe3) = 1;
  *param_1 = param_2;
  param_1[3] = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined1 *)(param_1 + 4) = *param_4;
  *(undefined2 *)((longlong)param_1 + 0x9c) = *(undefined2 *)(param_5 + 0x74);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_5 + 0x70);
  FUN_14093c00e(param_1 + 0x14,param_5 + 0x78);
  param_1[0x16] = *(undefined8 *)(param_5 + 0x88);
  uVar1 = *(undefined4 *)(param_5 + 0x94);
  uVar2 = *(undefined4 *)(param_5 + 0x98);
  uVar3 = *(undefined4 *)(param_5 + 0x9c);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_5 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  FUN_144a787a6(param_1 + 0x19,param_5 + 0xa0);
  param_1[0x1b] = *param_6;
  *(undefined1 *)(param_1 + 0x1c) = param_7;
  *(undefined1 *)((longlong)param_1 + 0xe3) = *(undefined1 *)(param_8 + 1);
  *(undefined2 *)((longlong)param_1 + 0xe1) = *param_8;
  return param_1;
}



// FUNCTION 148825c5a FUN_148825c5a body=85 status=ok
// SIG undefined FUN_148825c5a(void)

void FUN_148825c5a(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(float *)(param_1 + 0x256) <= 0.0) {
    uVar1 = FUN_1447210f0();
    FUN_1412f3774(uVar1,param_1,0,1);
    return;
  }
  FUN_148824ec2();
                    /* WARNING: Could not recover jumptable at 0x000148825cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))(param_1,(int)param_1[0x256]);
  return;
}



// FUNCTION 148825cb0 FUN_148825cb0 body=12 status=ok
// SIG undefined FUN_148825cb0(void)

void FUN_148825cb0(longlong param_1)

{
  FUN_14868522e(param_1 + 0x12b8);
  return;
}



// FUNCTION 148825cc2 FUN_148825cc2 body=48 status=ok
// SIG undefined FUN_148825cc2(void)

void FUN_148825cc2(longlong param_1,undefined8 param_2)

{
  FUN_1403f9d66(param_1 + 0x120);
  FUN_1403f9f8e(param_1 + 0xef8,param_2);
  return;
}



// FUNCTION 148825cf2 FUN_148825cf2 body=68 status=ok
// SIG undefined FUN_148825cf2(void)

void FUN_148825cf2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14063fe71(param_1 + 0x120);
  FUN_14063fdb1(param_1 + 0xef8,param_2,param_3);
  return;
}



// FUNCTION 148825d36 FUN_148825d36 body=166 status=ok
// SIG undefined FUN_148825d36(void)

double * FUN_148825d36(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce();
  param_2[2] = *(double *)(lVar2 + 0x1d8);
  dVar1 = *(double *)(lVar2 + 0x1d0);
  *param_2 = *(double *)(lVar2 + 0x1c8);
  param_2[1] = dVar1;
  if (*(char *)(param_1 + 0xe1) == '\x01') {
    *param_2 = (double)(param_3 + 1.0) * *(double *)(param_1 + 8);
  }
  if (*(char *)(param_1 + 0xe2) == '\x01') {
    param_2[1] = (double)(param_3 + 1.0) * *(double *)(param_1 + 0x10);
  }
  if (*(char *)(param_1 + 0xe3) == '\x01') {
    param_2[2] = (double)(param_3 + 1.0) * *(double *)(param_1 + 0x18);
  }
  return param_2;
}



// FUNCTION 148825de8 FUN_148825de8 body=311 status=ok
// SIG undefined FUN_148825de8(void)

void FUN_148825de8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(DAT_14cb10918 + 0x1f0) != 0) {
    plVar1 = (longlong *)FUN_148825f20();
    if (plVar1 != (longlong *)0x0) {
      local_68 = *param_7;
      uStack_64 = param_7[1];
      uStack_60 = param_7[2];
      uStack_5c = param_7[3];
      local_58 = *(longlong *)(param_7 + 4);
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_118 = local_c8;
      puVar3 = local_118;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *param_4;
        param_4 = param_4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_e0 = *param_2;
      local_d8 = *(undefined4 *)(param_2 + 1);
      local_d0 = 0;
      local_f8 = *param_1;
      local_f0 = *(undefined4 *)(param_1 + 1);
      local_e8 = 0;
      local_100 = &local_68;
      local_108 = param_6;
      local_110 = param_5;
      (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_f8,&local_e0,param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825f20 FUN_148825f20 body=103 status=ok
// SIG undefined FUN_148825f20(void)

void FUN_148825f20(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a804be();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14882ae84(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148825f88 FUN_148825f88 body=282 status=ok
// SIG undefined FUN_148825f88(void)

void FUN_148825f88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(DAT_14cb10918 + 0x1f0) != 0) {
    plVar1 = (longlong *)FUN_148825f20();
    if (plVar1 != (longlong *)0x0) {
      local_58 = *param_7;
      uStack_54 = param_7[1];
      uStack_50 = param_7[2];
      uStack_4c = param_7[3];
      local_48 = *(longlong *)(param_7 + 4);
      if ((local_48 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_70 = *param_2;
      local_68 = *(undefined4 *)(param_2 + 1);
      local_60 = 0;
      local_88 = *param_1;
      local_80 = *(undefined4 *)(param_1 + 1);
      local_78 = 0;
      local_90 = &local_58;
      local_98 = param_6;
      local_a0 = param_5;
      local_a8 = param_4;
      (**(code **)(*plVar1 + 0x2c0))(plVar1,&local_88,&local_70,param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488260a4 FUN_1488260a4 body=140 status=ok
// SIG undefined FUN_1488260a4(void)

void FUN_1488260a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148825032();
  FUN_1446f470e(&local_38,L"RandomSeed",1);
  uVar1 = FUN_1458d592e();
  FUN_1458d592e();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148826132 FUN_148826132 body=202 status=ok
// SIG undefined FUN_148826132(void)

void FUN_148826132(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_148825136();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))();
    lVar3 = FUN_1464d6052();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = param_2;
      }
      goto LAB_14882616d;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14882616d:
  *(longlong **)(param_1 + 0xfd0) = plVar4;
  if (((*(byte *)(param_1 + -0x32b) & 0x18) == 0x10) && (*(char *)(param_1 + -0x218) == '\x03')) {
    (**(code **)(*(longlong *)(param_1 + 0xfc8) + 0x68))(param_1 + 0xfc8,0);
  }
  if ((*(longlong *)(param_1 + 0x1020) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1020) + 0x228) == '\x01')) {
    if (*(char *)(param_1 + -0x218) == '\x03') {
      iVar1 = rand();
      *(int *)(param_1 + 0x1204) = iVar1;
    }
    FUN_143d11ab2(param_1 + -0x390);
    return;
  }
  return;
}



// FUNCTION 1488261fc FUN_1488261fc body=70 status=ok
// SIG undefined FUN_1488261fc(void)

void FUN_1488261fc(longlong param_1)

{
  FUN_148824d66();
  if ((*(longlong *)(param_1 + 0x1360) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x000148826238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x1358) + 0x68))(param_1 + 0x1358,0);
    return;
  }
  return;
}



// FUNCTION 148826256 FUN_148826256 body=169 status=ok
// SIG undefined FUN_148826256(void)

void FUN_148826256(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((int)param_2 != 0) goto LAB_148826264;
  lVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  lVar1 = param_1[-0x23e];
  if (lVar1 == 0) {
LAB_1488262cd:
    param_2 = 0;
    if (((lVar4 == 0) || (*(char *)(lVar4 + 10) != '\x01')) || (param_1[-0x23e] == 0))
    goto LAB_148826264;
    uVar5 = FUN_140cc62c2();
    uVar3 = FUN_140e40646(uVar5,param_1[-0x23e]);
  }
  else {
    uVar5 = FUN_14018b740();
    plVar6 = (longlong *)FUN_144718840(lVar1,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_1488262cd;
    cVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    param_2 = 0;
    if (((lVar4 == 0) || (cVar2 == '\0')) || (*(char *)(lVar4 + 10) != '\x01')) goto LAB_148826264;
    uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,0);
  }
  param_2 = (ulonglong)uVar3;
LAB_148826264:
                    /* WARNING: Could not recover jumptable at 0x000148826275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 148826300 FUN_148826300 body=695 status=ok
// SIG undefined FUN_148826300(void)

void FUN_148826300(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [13];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 **local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x1360) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x1360) + 0x140);
  }
  lVar3 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    puVar8 = &DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    }
    puVar9 = local_108;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    if ((longlong)*(int *)(param_1 + 0x15a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1598);
      local_150 = (longlong)*(int *)(param_1 + 0x15a0) * 0x20 + lVar3;
      do {
        local_118 = DAT_14c846508;
        local_128 = DAT_14c8464f8;
        uStack_120 = DAT_14c846500;
        local_148 = (undefined4)DAT_14c8464e0;
        uStack_144 = DAT_14c8464e0._4_4_;
        uStack_140 = (undefined4)DAT_14c8464e8;
        uStack_13c = DAT_14c8464e8._4_4_;
        local_138 = DAT_14c8464f0;
        local_158 = 1;
        local_168 = 1;
        local_178 = &local_128;
        local_160 = 0;
        local_170 = 0;
        plVar4 = (longlong *)FUN_140a44468(lVar2,*(undefined8 *)(param_1 + 0x1c8),0,&local_148);
        if (plVar4 != (longlong *)0x0) {
          local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffffffffff00);
          FUN_140613f88(plVar4,local_108,0,0);
          (**(code **)(*plVar4 + 0xa00))
                    (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x16c),
                     *(undefined4 *)(lVar3 + 0x18));
          (**(code **)(*plVar4 + 0xac8))
                    (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x174));
          lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1360) + 0x188);
          if (lVar5 != 0) {
            lVar5 = lVar5 * 0x58;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1360) + 0x180) + 8;
            do {
              local_a0[0] = 0;
              local_78 = 0;
              FUN_1456bb102(local_a0,param_1);
              FUN_1448729ea(lVar7,local_70);
              uVar10 = FUN_144a7ecd0(local_70);
              (**(code **)(*plVar4 + 0xa08))(plVar4,*(undefined8 *)(lVar7 + -8),uVar10);
              pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar1 != (code *)0x0) {
                pppuVar6 = local_70;
                if (0x18 < local_58) {
                  pppuVar6 = (undefined8 ***)local_70[0];
                }
                (*pcVar1)(pppuVar6);
              }
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
              FUN_144a5ac3a(local_a0);
              lVar7 = lVar7 + 0x58;
              lVar5 = lVar5 + -0x58;
            } while (lVar5 != 0);
          }
        }
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != local_150);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488265e4 FUN_1488265e4 body=8 status=ok
// SIG undefined FUN_1488265e4(void)

longlong FUN_1488265e4(longlong param_1)

{
  return param_1 + 0x1598;
}



// FUNCTION 1488265ec FUN_1488265ec body=138 status=ok
// SIG undefined FUN_1488265ec(void)

longlong * FUN_1488265ec(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447a97f4(local_40,param_1);
  plVar1 = (longlong *)FUN_1400d6974(local_40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464d6244();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148826645;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148826645:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 148826678 FUN_148826678 body=241 status=ok
// SIG undefined FUN_148826678(void)

void FUN_148826678(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14147df5e();
  FUN_14882676a(local_78,param_1 + 0x90);
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar3 = (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    do {
      FUN_140d2594c(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882676a FUN_14882676a body=521 status=ok
// SIG undefined FUN_14882676a(void)

undefined8 * FUN_14882676a(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_148826974(param_2);
  puVar1 = param_1 + 1;
  ppvVar2 = (void **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_58,lVar7);
    *(undefined4 *)puVar1 = local_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
    if (puVar1 == (undefined8 *)&local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if (cVar6 != '\0') {
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_14882686f;
      }
    }
    FUN_14485c47a(param_1,lVar7);
  }
LAB_14882686f:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if (param_1[1] == 0) {
    local_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)(param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 0x10);
    uStack_6c = *(undefined4 *)(param_2 + 0x14);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 0x20);
    lVar7 = (longlong)local_60;
    pvVar4 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar4,lVar7 * 2);
    }
    iVar5 = local_60;
    pvVar4 = local_68;
    *param_1 = 0;
    *(undefined4 *)puVar1 = local_78;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    if (ppvVar2 != &local_68) {
      lVar7 = (longlong)local_60;
      *(int *)(param_1 + 4) = local_60;
      if (local_60 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar2,pvVar4,lVar7 * 2);
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148826974 FUN_148826974 body=197 status=ok
// SIG undefined FUN_148826974(void)

longlong FUN_148826974(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_145996826();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148826a3a FUN_148826a3a body=122 status=ok
// SIG undefined FUN_148826a3a(void)

undefined8 * FUN_148826a3a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148826ade FUN_148826ade body=775 status=ok
// SIG undefined FUN_148826ade(void)

void FUN_148826ade(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  longlong local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_4,1);
  if (lVar5 != 0) {
    local_118 = *param_2;
    FUN_1446dcdd4(&local_b8);
    lVar6 = FUN_1488265ec(&local_b8);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (lVar6 == 0) {
      local_128 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined1 *)(lVar6 + 0xe0);
      local_128 = *(undefined4 *)(lVar6 + 0xe4);
    }
    local_120 = lVar5;
    FUN_148826de6(param_1,param_5,param_6,uVar10);
    local_d0 = *param_2;
    FUN_1411374b4(&local_b8,param_4,&local_d0,param_5);
    uVar7 = FUN_140faf1c8(&local_b8,param_4);
    local_dc = 0x4461000000020000;
    local_d4 = 0;
    uVar8 = FUN_147e22a00(uVar7);
    uVar7 = *param_3;
    uVar3 = *(undefined4 *)(param_3 + 1);
    local_118 = *param_6;
    uStack_110 = *(undefined4 *)(param_6 + 1);
    uStack_10c = *(undefined4 *)((longlong)param_6 + 0xc);
    local_108 = *(undefined4 *)(param_6 + 2);
    uStack_104 = *(undefined4 *)((longlong)param_6 + 0x14);
    uStack_100 = *(undefined4 *)(param_6 + 3);
    uStack_fc = *(undefined4 *)((longlong)param_6 + 0x1c);
    local_f0 = (undefined8 *)0x0;
    local_e8 = 0;
    FUN_1446efa72(&local_f0,0,7,0x10);
    puVar4 = local_f0;
    local_e8 = 7;
    *local_f0 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_f0[2] = lVar9;
    *local_f0 = &PTR_FUN_14b3f8960;
    local_f0[3] = 0;
    FUN_14485c47a(local_f0 + 3,param_1);
    puVar4[4] = param_1;
    puVar4[5] = uVar7;
    *(undefined4 *)(puVar4 + 6) = uVar3;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = (undefined4)local_118;
    *(undefined4 *)((longlong)puVar4 + 0x44) = local_118._4_4_;
    *(undefined4 *)(puVar4 + 9) = uStack_110;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_10c;
    *(undefined4 *)(puVar4 + 10) = local_108;
    *(undefined4 *)((longlong)puVar4 + 0x54) = uStack_104;
    *(undefined4 *)(puVar4 + 0xb) = uStack_100;
    *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_fc;
    puVar4[0xc] = param_7;
    uVar7 = FUN_14180114c(uVar8,&local_f0);
    FUN_140faf12e(uVar7,local_c8);
    FUN_1449db362(&local_f0);
    FUN_14119d0c2(&local_b8);
    uVar7 = FUN_14119d0a4(lVar5);
    uVar8 = FUN_14001cc68(0x38,0x10);
    local_b8 = *param_8;
    local_b4 = *(undefined8 *)(param_8 + 2);
    local_ac = 0;
    FUN_14485c47a(&local_ac,*(undefined8 *)(param_8 + 4));
    FUN_147e22a18(uVar8,local_c8,&local_b8,0);
    FUN_140b1330e(uVar7,*(undefined8 *)(param_8 + 4),param_8[1],uVar8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148826de6 FUN_148826de6 body=1399 status=ok
// SIG undefined FUN_148826de6(void)

void FUN_148826de6(longlong *param_1,longlong param_2,longlong param_3,char param_4,float param_5,
                  undefined8 param_6)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  longlong local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined2 local_23f;
  undefined1 local_23d;
  undefined4 local_23c;
  undefined1 local_238;
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_22c;
  undefined2 local_228;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined2 uStack_1bf;
  undefined1 uStack_1bd;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined2 local_1a8;
  longlong local_180;
  undefined8 local_178;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_12c;
  undefined4 local_100;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (*(char *)(param_3 + 0xc) != '\x01') goto LAB_14882719b;
  uVar10 = rand();
  fVar12 = (float)(uVar10 & 0x7fff) / 32767.0;
  dVar4 = (double)(fVar12 + fVar12 + -1.0);
  uVar10 = rand();
  fVar12 = (float)(uVar10 & 0x7fff) / 32767.0;
  dVar5 = (double)(fVar12 + fVar12 + -1.0);
  dVar14 = dVar4 * dVar4 + dVar5 * dVar5;
  dVar13 = 0.0;
  if (9.99999993922529e-09 < dVar14) {
    dVar13 = 1.0 / SQRT(dVar14);
    dVar4 = dVar4 * dVar13;
    dVar5 = dVar5 * dVar13;
    dVar13 = dVar13 * 0.0;
  }
  dVar14 = *(double *)(param_2 + 0x30);
  fVar12 = *(float *)(param_3 + 0x10);
  fVar1 = *(float *)(param_3 + 0x14);
  dVar2 = *(double *)(param_2 + 0x20);
  dVar15 = *(double *)(param_2 + 0x28);
  uVar10 = rand();
  dVar16 = (double)(((float)(uVar10 & 0x7fff) / 32767.0) * (fVar1 - fVar12) + fVar12);
  dVar14 = dVar13 * dVar16 + dVar14;
  dStack_260 = dVar5 * dVar16 + dVar15;
  local_268 = dVar16 * dVar4 + dVar2;
  local_258 = dVar14;
  memset(&local_1d0,0,0x100);
  local_100 = 0xffffffff;
  local_1d0 = CONCAT44(0x3f800000,(undefined4)local_1d0);
  local_12c = 0xffffffff;
  local_22c = 0;
  local_228 = 0x101;
  local_200 = 0;
  local_1f8 = 0x800000000;
  local_1e0 = 0;
  local_1d8 = 0x400000000;
  local_240 = 0;
  local_234 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_23f = 1;
  local_23d = 0;
  local_230 = 0;
  local_23c = 0x1000000;
  local_238 = 1;
  dVar2 = local_268;
  dVar15 = dStack_260;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
    local_288 = *(double *)(param_2 + 0x20);
    dStack_280 = *(double *)(param_2 + 0x28);
    local_278 = *(double *)(param_2 + 0x30);
    local_2a8 = (undefined8 *)&DAT_14cad0f10;
    local_2b0 = &local_250;
    local_2b8 = 0;
    cVar9 = FUN_1400b50cc(uVar11,&local_1d0,&local_288,&local_268);
    dVar2 = local_268;
    dVar15 = dStack_260;
    if (cVar9 == '\0') goto LAB_148827168;
    dVar14 = (double)*(float *)(param_3 + 0x1c);
    dVar13 = dVar13 * dVar14;
    dVar5 = dVar5 * dVar14;
    dVar4 = dVar4 * dVar14;
    dVar14 = (double)CONCAT44(uStack_1ac,local_1b0) - *(double *)(param_2 + 0x30);
    dVar15 = (double)CONCAT44(uStack_1b4,local_1b8) - *(double *)(param_2 + 0x28);
    dVar2 = (double)CONCAT44(uStack_1bc,CONCAT13(uStack_1bd,CONCAT21(uStack_1bf,local_1c0)));
    dVar16 = dVar2 - *(double *)(param_2 + 0x20);
    if (SQRT(dVar13 * dVar13 + dVar4 * dVar4 + dVar5 * dVar5) <=
        SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15)) {
      dVar14 = (double)CONCAT44(uStack_1ac,local_1b0) - dVar13;
      dVar2 = dVar2 - dVar4;
      dVar15 = (double)CONCAT44(uStack_1b4,local_1b8) - dVar5;
      goto LAB_148827168;
    }
  }
  else {
LAB_148827168:
    auVar3._8_4_ = SUB84(dVar15,0);
    auVar3._0_8_ = dVar2;
    auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
    *(double *)(param_2 + 0x30) = dVar14;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
LAB_14882719b:
  if (param_4 != '\0') {
    local_288 = *(double *)(param_2 + 0x20);
    dStack_280 = *(double *)(param_2 + 0x28);
    local_258 = *(double *)(param_2 + 0x30);
    local_278 = local_258 - (double)param_5;
    local_298 = 0;
    uStack_290 = 0;
    uStack_1ac = 0;
    local_1a8 = 0x101;
    local_180 = 0;
    local_178 = 0x800000000;
    local_160 = 0;
    local_158 = 0x400000000;
    local_1c0 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1bf = 1;
    uStack_1bd = 0;
    local_1b0 = local_1b0 & 0xffffff00;
    uStack_1bc = 0x1000000;
    local_1b8 = CONCAT31(local_1b8._1_3_,1);
    uStack_1b4 = 1;
    local_268 = local_288;
    dStack_260 = dStack_280;
    FUN_1449b671c(&local_250);
    FUN_1449b6736(&local_250,0);
    FUN_144a7e2ee(&local_250,0,1);
    local_2b8 = 0;
    local_2b0 = &local_1d0;
    local_2a8 = &local_250;
    FUN_1401e24ee(param_6,&local_298,&local_268,&local_288);
    if (0 < (int)uStack_290) {
      uVar6 = *(undefined4 *)(local_298 + 0x14);
      uVar7 = *(undefined4 *)(local_298 + 0x18);
      uVar8 = *(undefined4 *)(local_298 + 0x1c);
      uVar11 = *(undefined8 *)(local_298 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_298 + 0x10);
      *(undefined4 *)(param_2 + 0x24) = uVar6;
      *(undefined4 *)(param_2 + 0x28) = uVar7;
      *(undefined4 *)(param_2 + 0x2c) = uVar8;
      *(undefined8 *)(param_2 + 0x30) = uVar11;
      *(undefined8 *)(param_2 + 0x38) = 0;
    }
    if (local_160 != 0) {
      FUN_1400020a8();
    }
    if (local_180 != 0) {
      FUN_1400020a8();
    }
    if (local_298 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882735e FUN_14882735e body=981 status=ok
// SIG undefined FUN_14882735e(void)

void FUN_14882735e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  double dVar13;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_150;
  undefined4 local_148;
  undefined8 local_13c;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_118 [4];
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_4,1);
  if ((param_5 != (longlong *)0x0 && lVar5 != 0) && ((*(uint *)(param_5 + 1) >> 0x1e & 1) == 0)) {
    puVar10 = &DAT_14c846480;
    if (param_5[0x39] != 0) {
      puVar10 = (undefined8 *)(param_5[0x39] + 0x240);
    }
    puVar11 = local_118;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    if (*(char *)((longlong)param_6 + 4) == '\x01') {
      (**(code **)(*param_5 + 0x328))(param_5,&local_b8);
      local_a8 = 0;
      uStack_a4 = 0;
      dVar4 = (double)*(float *)(param_6 + 1);
      local_e8 = dVar4 * 0.0 + local_e8;
      dVar13 = (double)CONCAT44(uStack_ac,local_b0) * dVar4 + (double)local_f8._8_8_;
      local_f8._8_4_ = SUB84(dVar13,0);
      local_f8._0_8_ = dVar4 * (double)CONCAT44(uStack_b4,local_b8) + (double)local_f8._0_8_;
      local_f8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      uStack_e0 = 0;
    }
    local_178 = *param_2;
    FUN_1446dcdd4(&local_b8);
    lVar8 = FUN_1488265ec(&local_b8);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (lVar8 == 0) {
      local_188 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined1 *)(lVar8 + 0xe0);
      local_188 = *(undefined4 *)(lVar8 + 0xe4);
    }
    local_180 = lVar5;
    FUN_148826de6(param_1,local_118,param_6,uVar12);
    local_130 = *param_2;
    FUN_1411374b4(&local_b8,param_4,&local_130,local_118);
    uVar6 = FUN_140faf1c8(&local_b8,param_4);
    local_13c = 0x4461000000020000;
    local_134 = 0;
    uVar7 = FUN_147e22a00(uVar6);
    uVar6 = *param_3;
    uVar3 = *(undefined4 *)(param_3 + 1);
    local_178 = *param_6;
    uStack_170 = *(undefined4 *)(param_6 + 1);
    uStack_16c = *(undefined4 *)((longlong)param_6 + 0xc);
    local_168 = param_6[2];
    uStack_160 = param_6[3];
    local_150 = (undefined8 *)0x0;
    local_148 = 0;
    FUN_1446efa72(&local_150,0,7,0x10);
    puVar10 = local_150;
    local_148 = 7;
    *local_150 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_150[2] = lVar9;
    *local_150 = &PTR_FUN_14b3f89d0;
    local_150[3] = 0;
    FUN_14485c47a(local_150 + 3,param_1);
    puVar10[4] = param_1;
    puVar10[5] = uVar6;
    *(undefined4 *)(puVar10 + 6) = uVar3;
    puVar10[7] = 0;
    *(undefined4 *)(puVar10 + 8) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar10 + 0x44) = local_178._4_4_;
    *(undefined4 *)(puVar10 + 9) = uStack_170;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_16c;
    puVar10[10] = local_168;
    puVar10[0xb] = uStack_160;
    puVar10[0xc] = param_7;
    uVar6 = FUN_14180114c(uVar7,&local_150);
    FUN_140faf12e(uVar6,local_128);
    FUN_1449db362(&local_150);
    FUN_14119d0c2(&local_b8);
    uVar6 = FUN_14119d0a4(lVar5);
    uVar7 = FUN_14001cc68(0x38,0x10);
    local_b8 = *param_8;
    uStack_b4 = (undefined4)*(undefined8 *)(param_8 + 2);
    local_b0 = (undefined4)((ulonglong)*(undefined8 *)(param_8 + 2) >> 0x20);
    uStack_ac = 0;
    local_a8 = 0;
    FUN_14485c47a(&uStack_ac,*(undefined8 *)(param_8 + 4));
    FUN_147e22a18(uVar7,local_128,&local_b8,0);
    FUN_140b1330e(uVar6,*(undefined8 *)(param_8 + 4),param_8[1],uVar7);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148827734 FUN_148827734 body=66 status=ok
// SIG undefined FUN_148827734(void)

void FUN_148827734(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(undefined1 *)(param_1 + 6) = param_7;
  param_1[7] = param_8;
  *param_1 = param_9;
  return;
}



// FUNCTION 148827776 FUN_148827776 body=208 status=ok
// SIG undefined FUN_148827776(void)

undefined8 FUN_148827776(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_a8 = 0;
  uStack_b0 = (ulonglong)param_4;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = param_3;
  uVar1 = FUN_1402710dd(&local_c8);
  if (lStack_88 != 0) {
    plVar2 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar2 = local_68;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148827848 FUN_148827848 body=125 status=ok
// SIG undefined FUN_148827848(void)

undefined8 FUN_148827848(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,L"DiscoveryLocation");
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488278c6 FUN_1488278c6 body=483 status=ok
// SIG undefined FUN_1488278c6(void)

void FUN_1488278c6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar1 = FUN_14050c9fe();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x128) = uVar1;
  }
  lVar2 = FUN_14050c9fe();
  uVar1 = FUN_14050c9fe();
  FUN_1402d1bfa(&local_30,uVar1,param_2);
  if (*(longlong *)(param_1 + 0x120) != local_30) {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(longlong *)(param_1 + 0x120) = local_30;
  lVar3 = FUN_14050c9fe();
  if (lVar2 == 0) {
LAB_14882796d:
    lVar3 = lVar2;
  }
  else if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) goto LAB_14882796d;
  if (*(longlong *)(param_1 + 0x128) != lVar3) {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  uVar1 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar1);
  *(longlong *)(param_1 + 0x128) = lVar2;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
  }
  if (*(longlong *)(param_1 + 0x538) == 0) {
    uVar1 = FUN_14050c9fe();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x538) = uVar1;
  }
  lVar2 = FUN_14050c9fe();
  uVar1 = FUN_14050c9fe();
  FUN_1402d1bfa(&local_30,uVar1,param_2);
  if (*(longlong *)(param_1 + 0x530) != local_30) {
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  *(longlong *)(param_1 + 0x530) = local_30;
  lVar3 = FUN_14050c9fe();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_148827a3d;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_148827a3d;
  }
  lVar3 = lVar2;
LAB_148827a3d:
  if (*(longlong *)(param_1 + 0x538) != lVar3) {
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  uVar1 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar1);
  *(longlong *)(param_1 + 0x538) = lVar2;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x530) != 0)) {
    *(undefined8 *)(param_1 + 0x540) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148827aaa FUN_148827aaa body=140 status=ok
// SIG undefined FUN_148827aaa(void)

void FUN_148827aaa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aab56();
  FUN_1446f470e(&local_38,L"ReplicatedLocationType",1);
  uVar1 = FUN_1410c02f4();
  FUN_1410c02f4();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148827b3c FUN_148827b3c body=346 status=ok
// SIG undefined FUN_148827b3c(void)

void FUN_148827b3c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = FUN_1447210f0();
  if (lVar4 == 0) {
    return;
  }
  bVar2 = *(byte *)(lVar4 + 0x152);
  if (bVar2 != 1) {
    if (6 < bVar2) {
      return;
    }
    if ((0x68U >> (bVar2 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar5 = FUN_14079362c();
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  uVar5 = FUN_14079362c();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (plVar7 == (longlong *)0x0 || plVar6 == plVar7) {
    return;
  }
  plVar6 = (longlong *)(**(code **)(*plVar7 + 0x28))(plVar7);
  lVar4 = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) goto LAB_148827c25;
  if (*(char *)(lVar4 + 0x168) == '\x01') {
    cVar3 = FUN_144729dda(lVar4 + 0x1c8);
    if (cVar3 == '\0') goto LAB_148827bf9;
    lVar4 = FUN_14479d2ce(lVar4 + 0x1c8);
  }
  else {
LAB_148827bf9:
    lVar4 = *(longlong *)(lVar4 + 0x1c0);
  }
  if (lVar4 != 0) {
    lVar8 = FUN_145a10b84();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         == lVar8 + 0x30)) && (*(longlong *)(param_1 + 0x390) != 0)) {
      FUN_143d132d0(lVar4,*(longlong *)(param_1 + 0x390) + 0x160);
    }
  }
LAB_148827c25:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148827c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148827c96 FUN_148827c96 body=202 status=ok
// SIG undefined FUN_148827c96(void)

char FUN_148827c96(char *param_1,double *param_2,double *param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = '\x01';
  if ((*param_1 == '\0') &&
     (((fVar1 = *(float *)(param_1 + 4), fVar1 <= 0.0 ||
       (fVar1 * fVar1 <
        (float)((*param_3 - *param_2) * (*param_3 - *param_2) +
               (param_3[1] - param_2[1]) * (param_3[1] - param_2[1])))) ||
      ((param_1[0xc] == '\x01' &&
       ((double)(*(float *)(param_1 + 8) * 0.5) < ABS(param_3[2] - param_2[2]))))))) {
    if ((longlong)*(int *)(param_1 + 0x18) == 0) {
      cVar2 = '\0';
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x90;
      do {
        lVar3 = lVar3 + -0x90;
        cVar2 = FUN_14027c444(lVar4,param_3);
        if (cVar2 != '\0') {
          return cVar2;
        }
        lVar4 = lVar4 + 0x90;
        cVar2 = '\0';
      } while (lVar3 != 0);
    }
  }
  return cVar2;
}



// FUNCTION 148827d60 FUN_148827d60 body=59 status=ok
// SIG undefined FUN_148827d60(void)

longlong FUN_148827d60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14882b2a4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14882b286(lVar2);
  return lVar2;
}



// FUNCTION 148827dc4 FUN_148827dc4 body=87 status=ok
// SIG undefined FUN_148827dc4(void)

void FUN_148827dc4(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x169) = param_2;
  iVar1 = *(int *)(param_1 + 0x150);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x148);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))(plVar3,*(undefined1 *)(param_1 + 0x169));
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148827e1c FUN_148827e1c body=139 status=ok
// SIG undefined FUN_148827e1c(void)

bool FUN_148827e1c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x158) == 0) {
    bVar3 = false;
    goto LAB_148827e86;
  }
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_148827e6a:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_144729dda(param_1 + 0x130);
    if (cVar1 == '\0') goto LAB_148827e6a;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
  }
  FUN_141495e41(&local_20,uVar2);
  bVar3 = local_20 == *(longlong *)(param_1 + 0x158);
LAB_148827e86:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148827eb2 FUN_148827eb2 body=114 status=ok
// SIG undefined FUN_148827eb2(void)

void FUN_148827eb2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x148);
    plVar1 = plVar5 + *(int *)(param_1 + 0x150);
    do {
      lVar3 = *plVar5;
      if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x40), (longlong)iVar2 != 0)) {
        lVar3 = *(longlong *)(lVar3 + 0x38);
        lVar6 = 0;
        do {
          plVar4 = *(longlong **)(lVar3 + lVar6);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2c8))();
          }
          lVar6 = lVar6 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar6);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 148827f24 FUN_148827f24 body=85 status=ok
// SIG undefined FUN_148827f24(void)

void FUN_148827f24(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1402799c0();
  if (cVar1 != '\0') {
    iVar2 = FUN_1406ba864(param_1,param_2,0);
    if (iVar2 < param_3) {
      FUN_143d13efe(param_1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148827fbc FUN_148827fbc body=257 status=ok
// SIG undefined FUN_148827fbc(void)

void FUN_148827fbc(longlong param_1,char param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == '\0') {
    lVar2 = param_3[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_3;
      lVar5 = 0;
      do {
        FUN_14073f620(local_68,*(undefined8 *)(lVar1 + lVar5));
        uVar3 = FUN_14027a0c2(local_68);
        iVar4 = FUN_140279a58(param_1 + 0x270,uVar3,local_68);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (iVar4 != -1) {
          FUN_14073f620(local_68,*(undefined8 *)(lVar1 + lVar5));
          FUN_14882b45a(param_1 + 0x270,local_68);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar5);
    }
  }
  else if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
    FUN_143d18ca6(param_1 + 0x270);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488280d4 FUN_1488280d4 body=59 status=ok
// SIG undefined FUN_1488280d4(void)

longlong FUN_1488280d4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14882b78e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14882b787(lVar2);
  return lVar2;
}



// FUNCTION 148828138 FUN_148828138 body=239 status=ok
// SIG undefined FUN_148828138(void)

void FUN_148828138(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1447210f0(param_1);
  }
  plVar3 = (longlong *)FUN_140caa136(uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_1488281b4;
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  if (((param_3[2] == 0) && (lVar5 != 0)) && (*param_3 != 0)) {
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148828223:
      lVar5 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar1 == '\0') goto LAB_148828223;
      uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar5 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar5;
  }
  FUN_143d1d5c2(uVar2,param_1,&local_30);
LAB_1488281b4:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148828228 FUN_148828228 body=69 status=ok
// SIG undefined FUN_148828228(void)

void FUN_148828228(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1447210f0(param_1);
  }
  plVar2 = (longlong *)FUN_140caa136(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_143d1d796(uVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14882826e FUN_14882826e body=3207 status=ok
// SIG undefined FUN_14882826e(void)

undefined4 * FUN_14882826e(undefined4 *param_1,double *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  double *pdVar20;
  double *pdVar21;
  ulonglong uVar22;
  longlong lVar23;
  double *pdVar24;
  double *pdVar25;
  int iVar26;
  double *pdVar27;
  uint uVar28;
  int iVar29;
  double *pdVar30;
  double *pdVar31;
  int iVar32;
  double *pdVar33;
  int iVar34;
  longlong *plVar35;
  longlong *plVar36;
  double *pdVar37;
  bool bVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong *local_460;
  undefined8 *local_458;
  undefined8 uStack_450;
  longlong *local_440;
  int local_438;
  undefined1 local_42c [4];
  longlong local_428 [4];
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  uVar17 = (**(code **)(*param_4 + 0x180))(param_4);
  lVar18 = FUN_1488dd350(uVar17);
  if (lVar18 == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    goto LAB_1488282f3;
  }
  FUN_1488dd3ec(lVar18,&local_440,param_2,param_3);
  local_408 = 0;
  local_400 = 0;
  local_428[0] = 0;
  local_428[1] = 0;
  local_3fc = 0xffffffff00000080;
  local_3f4 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_458 = (undefined8 *)0x0;
  uStack_450 = 0;
  if ((longlong)local_438 == 0) {
LAB_1488283be:
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    plVar35 = local_440 + (longlong)local_438 * 2;
    plVar36 = local_440;
    do {
      plVar7 = (longlong *)plVar36[1];
      if (plVar7 != (longlong *)0x0) {
        iVar26 = (int)plVar7[1];
        do {
          if (iVar26 == 0) goto LAB_1488284fd;
          LOCK();
          iVar34 = (int)plVar7[1];
          bVar38 = iVar26 == iVar34;
          if (bVar38) {
            *(int *)(plVar7 + 1) = iVar26 + 1;
            iVar34 = iVar26;
          }
          iVar26 = iVar34;
          UNLOCK();
        } while (!bVar38);
        lVar18 = *plVar36;
        if (lVar18 != 0) {
          if (DAT_14cb740f8 != 0) {
            if ((longlong)*(int *)(lVar18 + 0x100) != 0) {
              lVar23 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar18 + 0xf8) + lVar23) == DAT_14cb740f8)
                goto LAB_1488284de;
                lVar23 = lVar23 + 8;
              } while ((longlong)*(int *)(lVar18 + 0x100) * 8 != lVar23);
            }
            if ((longlong)*(int *)(lVar18 + 0x110) != 0) {
              lVar23 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar18 + 0x108) + lVar23) == DAT_14cb740f8)
                goto LAB_1488284de;
                lVar23 = lVar23 + 8;
              } while ((longlong)*(int *)(lVar18 + 0x110) * 8 != lVar23);
            }
          }
          FUN_1488daafa(lVar18,&local_3d8,param_2,param_3);
          if (iStack_3c0 != -1) {
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            uStack_d0 = &local_468;
            local_468 = lVar18;
            local_460 = plVar7;
            local_d8 = &local_3d8;
            FUN_14882b844(local_428,local_42c,&local_d8,0);
            if (local_460 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)local_460 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_460 + 0x10))();
              }
            }
            lVar18 = (longlong)(int)uStack_450;
            uVar28 = (int)uStack_450 + 1;
            uStack_450 = CONCAT44(uStack_450._4_4_,uVar28);
            if (uStack_450._4_4_ < uVar28) {
              FUN_14882be1a(&local_458);
            }
            local_458[lVar18 * 4 + 2] = CONCAT44(uStack_3c4,local_3c8);
            (local_458 + lVar18 * 4 + 2)[1] = CONCAT44(uStack_3bc,iStack_3c0);
            puVar19 = local_458 + lVar18 * 4;
            *(undefined4 *)puVar19 = (undefined4)local_3d8;
            *(undefined4 *)((longlong)puVar19 + 4) = local_3d8._4_4_;
            *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_3d0;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_3d0._4_4_;
          }
        }
LAB_1488284de:
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
LAB_1488284fd:
      puVar19 = local_458;
      plVar36 = plVar36 + 2;
    } while (plVar36 != plVar35);
    iVar26 = (int)uStack_450;
    uVar22 = uStack_450 & 0xffffffff;
    if (uVar22 == 0) goto LAB_1488283be;
    if (1 < (int)uStack_450) {
      dVar4 = *param_2;
      dVar5 = param_2[1];
      dVar6 = param_2[2];
      memset(&local_3c8,0,0x2f0);
      local_3d8 = puVar19;
      uStack_3d0 = puVar19 + uVar22 * 4 + -4;
      fVar39 = logf((float)iVar26);
      local_3c8 = (int)(longlong)(fVar39 + fVar39);
      puVar19 = &local_3d8;
      do {
        pdVar21 = (double *)*puVar19;
        pdVar24 = (double *)puVar19[1];
        iVar26 = *(int *)(puVar19 + 2);
        iVar34 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar21) >> 5);
        uVar28 = iVar34 + 1;
        pdVar27 = pdVar24;
        pdVar31 = pdVar21;
        if (iVar26 != 0) {
LAB_14882864a:
          if (8 < (int)uVar28) {
            uVar22 = (ulonglong)(uVar28 >> 1);
            dVar45 = pdVar21[uVar22 * 4];
            dVar44 = (pdVar21 + uVar22 * 4)[1];
            dVar9 = pdVar21[uVar22 * 4 + 2];
            dVar10 = (pdVar21 + uVar22 * 4 + 2)[1];
            dVar11 = *pdVar21;
            dVar12 = pdVar21[1];
            dVar13 = pdVar21[3];
            pdVar21[uVar22 * 4 + 2] = pdVar21[2];
            (pdVar21 + uVar22 * 4 + 2)[1] = dVar13;
            pdVar21[uVar22 * 4] = dVar11;
            (pdVar21 + uVar22 * 4)[1] = dVar12;
            pdVar21[2] = dVar9;
            pdVar21[3] = dVar10;
            *pdVar21 = dVar45;
            pdVar21[1] = dVar44;
            pdVar30 = pdVar24 + 4;
            pdVar20 = pdVar21;
            do {
              pdVar14 = pdVar20 + 4;
              pdVar25 = pdVar20 + 4;
              do {
                pdVar20 = pdVar25;
                pdVar37 = pdVar14;
                if (pdVar24 < pdVar20) break;
                pdVar14 = pdVar37 + 4;
                pdVar25 = pdVar20 + 4;
              } while ((pdVar20[2] - dVar6) * (pdVar20[2] - dVar6) +
                       (*pdVar20 - dVar4) * (*pdVar20 - dVar4) +
                       (pdVar20[1] - dVar5) * (pdVar20[1] - dVar5) <=
                       (pdVar21[2] - dVar6) * (pdVar21[2] - dVar6) +
                       (*pdVar21 - dVar4) * (*pdVar21 - dVar4) +
                       (pdVar21[1] - dVar5) * (pdVar21[1] - dVar5));
              pdVar14 = pdVar30 + -8;
              do {
                pdVar25 = pdVar30;
                pdVar33 = pdVar14;
                pdVar30 = pdVar25 + -4;
                if (pdVar30 <= pdVar21) break;
                pdVar14 = pdVar33 + -4;
              } while ((pdVar21[2] - dVar6) * (pdVar21[2] - dVar6) +
                       (*pdVar21 - dVar4) * (*pdVar21 - dVar4) +
                       (pdVar21[1] - dVar5) * (pdVar21[1] - dVar5) <=
                       (pdVar25[-2] - dVar6) * (pdVar25[-2] - dVar6) +
                       (*pdVar30 - dVar4) * (*pdVar30 - dVar4) +
                       (pdVar25[-3] - dVar5) * (pdVar25[-3] - dVar5));
              if (pdVar30 < pdVar20) goto LAB_148828801;
              dVar45 = *pdVar20;
              dVar44 = pdVar20[1];
              dVar9 = pdVar20[2];
              dVar10 = pdVar20[3];
              dVar11 = *pdVar30;
              dVar12 = pdVar25[-3];
              dVar13 = pdVar25[-1];
              pdVar20[2] = pdVar25[-2];
              pdVar20[3] = dVar13;
              *pdVar20 = dVar11;
              pdVar20[1] = dVar12;
              pdVar25[-2] = dVar9;
              pdVar25[-1] = dVar10;
              *pdVar30 = dVar45;
              pdVar25[-3] = dVar44;
            } while( true );
          }
          if (pdVar21 < pdVar24) {
            do {
              pdVar27 = pdVar21;
              if (pdVar21 + 4 <= pdVar24) {
                uVar16 = SUB84(*pdVar21,0);
                uVar40 = (undefined4)((ulonglong)*pdVar21 >> 0x20);
                uVar41 = 0;
                uVar42 = 0;
                pdVar31 = pdVar21 + 4;
                do {
                  dVar44 = (double)CONCAT44(uVar40,uVar16) - dVar4;
                  dVar45 = *pdVar31 - dVar4;
                  dVar44 = (pdVar27[2] - dVar6) * (pdVar27[2] - dVar6) +
                           dVar44 * dVar44 + (pdVar27[1] - dVar5) * (pdVar27[1] - dVar5);
                  dVar45 = (pdVar31[2] - dVar6) * (pdVar31[2] - dVar6) +
                           dVar45 * dVar45 + (pdVar31[1] - dVar5) * (pdVar31[1] - dVar5);
                  uVar22 = -(ulonglong)(dVar44 < dVar45);
                  auVar43._0_8_ = ~uVar22 & CONCAT44(uVar40,uVar16);
                  auVar43._12_4_ = uVar42;
                  auVar43._8_4_ = uVar41;
                  if (dVar44 < dVar45) {
                    pdVar27 = pdVar31;
                  }
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulonglong)*pdVar31 & uVar22;
                  auVar43 = auVar43 | auVar8;
                  pdVar31 = pdVar31 + 4;
                  uVar16 = auVar43._0_4_;
                  uVar40 = auVar43._4_4_;
                  uVar41 = auVar43._8_4_;
                  uVar42 = auVar43._12_4_;
                } while (pdVar31 <= pdVar24);
              }
              local_d8 = (undefined8 *)*pdVar27;
              uStack_d0 = (longlong *)pdVar27[1];
              local_c8 = pdVar27[2];
              dStack_c0 = pdVar27[3];
              dVar45 = *pdVar24;
              dVar44 = pdVar24[1];
              dVar9 = pdVar24[3];
              pdVar27[2] = pdVar24[2];
              pdVar27[3] = dVar9;
              *pdVar27 = dVar45;
              pdVar27[1] = dVar44;
              pdVar24[2] = local_c8;
              pdVar24[3] = dStack_c0;
              *pdVar24 = (double)local_d8;
              pdVar24[1] = (double)uStack_d0;
              pdVar24 = pdVar24 + -4;
            } while (pdVar21 < pdVar24);
          }
          goto LAB_148828de2;
        }
LAB_1488288cd:
        if (uVar28 != 0) {
          iVar26 = (iVar34 - (iVar34 + -1 >> 0x1f)) + -1 >> 1;
          iVar34 = iVar26;
joined_r0x0001488288f0:
          do {
            iVar29 = iVar26 * 2 + 1;
            if (iVar29 < (int)uVar28) {
              iVar32 = iVar26 * 2 + 2;
              if (iVar32 < (int)uVar28) {
                lVar18 = (longlong)iVar32;
                lVar23 = (longlong)iVar29;
                if ((pdVar21[lVar23 * 4 + 2] - dVar6) * (pdVar21[lVar23 * 4 + 2] - dVar6) +
                    (pdVar21[lVar23 * 4] - dVar4) * (pdVar21[lVar23 * 4] - dVar4) +
                    (pdVar21[lVar23 * 4 + 1] - dVar5) * (pdVar21[lVar23 * 4 + 1] - dVar5) <=
                    (pdVar21[lVar18 * 4 + 2] - dVar6) * (pdVar21[lVar18 * 4 + 2] - dVar6) +
                    (pdVar21[lVar18 * 4] - dVar4) * (pdVar21[lVar18 * 4] - dVar4) +
                    (pdVar21[lVar18 * 4 + 1] - dVar5) * (pdVar21[lVar18 * 4 + 1] - dVar5)) {
                  iVar29 = iVar32;
                }
              }
              lVar23 = (longlong)iVar26;
              lVar18 = (longlong)iVar29;
              if ((pdVar21[lVar23 * 4 + 2] - dVar6) * (pdVar21[lVar23 * 4 + 2] - dVar6) +
                  (pdVar21[lVar23 * 4] - dVar4) * (pdVar21[lVar23 * 4] - dVar4) +
                  (pdVar21[lVar23 * 4 + 1] - dVar5) * (pdVar21[lVar23 * 4 + 1] - dVar5) <
                  (pdVar21[lVar18 * 4 + 2] - dVar6) * (pdVar21[lVar18 * 4 + 2] - dVar6) +
                  (pdVar21[lVar18 * 4] - dVar4) * (pdVar21[lVar18 * 4] - dVar4) +
                  (pdVar21[lVar18 * 4 + 1] - dVar5) * (pdVar21[lVar18 * 4 + 1] - dVar5)) {
                pdVar27 = pdVar21 + lVar23 * 4;
                pdVar24 = pdVar21 + lVar18 * 4;
                local_d8 = (undefined8 *)*pdVar27;
                uStack_d0 = (longlong *)pdVar27[1];
                local_c8 = pdVar27[2];
                dStack_c0 = pdVar27[3];
                dVar45 = *pdVar24;
                dVar44 = pdVar24[1];
                dVar9 = pdVar24[3];
                pdVar27[2] = pdVar24[2];
                pdVar27[3] = dVar9;
                *pdVar27 = dVar45;
                pdVar27[1] = dVar44;
                pdVar24[2] = local_c8;
                pdVar24[3] = dStack_c0;
                *pdVar24 = (double)local_d8;
                pdVar24[1] = (double)uStack_d0;
                iVar26 = iVar29;
                goto joined_r0x0001488288f0;
              }
            }
            bVar38 = iVar34 != 0;
            iVar26 = iVar34 + -1;
            iVar34 = iVar26;
          } while (bVar38);
          if (1 < (int)uVar28) {
            uVar22 = (ulonglong)uVar28 - 1;
            local_d8 = (undefined8 *)*pdVar21;
            uStack_d0 = (longlong *)pdVar21[1];
            local_c8 = pdVar21[2];
            dStack_c0 = pdVar21[3];
            dVar45 = pdVar21[uVar22 * 4];
            dVar44 = (pdVar21 + uVar22 * 4)[1];
            dVar9 = (pdVar21 + uVar22 * 4 + 2)[1];
            pdVar21[2] = pdVar21[uVar22 * 4 + 2];
            pdVar21[3] = dVar9;
            *pdVar21 = dVar45;
            pdVar21[1] = dVar44;
            pdVar21[uVar22 * 4 + 2] = local_c8;
            (pdVar21 + uVar22 * 4 + 2)[1] = dStack_c0;
            pdVar21[uVar22 * 4] = (double)local_d8;
            (pdVar21 + uVar22 * 4)[1] = (double)uStack_d0;
            if (uVar28 != 2) {
              do {
                iVar26 = 0;
                iVar29 = 1;
                iVar34 = 0;
                do {
                  lVar18 = (longlong)(iVar26 + 2);
                  iVar32 = iVar29;
                  if ((lVar18 < (longlong)uVar22) &&
                     (lVar23 = (longlong)iVar29,
                     (pdVar21[lVar23 * 4 + 2] - dVar6) * (pdVar21[lVar23 * 4 + 2] - dVar6) +
                     (pdVar21[lVar23 * 4] - dVar4) * (pdVar21[lVar23 * 4] - dVar4) +
                     (pdVar21[lVar23 * 4 + 1] - dVar5) * (pdVar21[lVar23 * 4 + 1] - dVar5) <=
                     (pdVar21[lVar18 * 4 + 2] - dVar6) * (pdVar21[lVar18 * 4 + 2] - dVar6) +
                     (pdVar21[lVar18 * 4] - dVar4) * (pdVar21[lVar18 * 4] - dVar4) +
                     (pdVar21[lVar18 * 4 + 1] - dVar5) * (pdVar21[lVar18 * 4 + 1] - dVar5))) {
                    iVar32 = iVar26 + 2;
                  }
                  lVar23 = (longlong)iVar34;
                  lVar18 = (longlong)iVar32;
                  if ((pdVar21[lVar18 * 4 + 2] - dVar6) * (pdVar21[lVar18 * 4 + 2] - dVar6) +
                      (pdVar21[lVar18 * 4] - dVar4) * (pdVar21[lVar18 * 4] - dVar4) +
                      (pdVar21[lVar18 * 4 + 1] - dVar5) * (pdVar21[lVar18 * 4 + 1] - dVar5) <=
                      (pdVar21[lVar23 * 4 + 2] - dVar6) * (pdVar21[lVar23 * 4 + 2] - dVar6) +
                      (pdVar21[lVar23 * 4] - dVar4) * (pdVar21[lVar23 * 4] - dVar4) +
                      (pdVar21[lVar23 * 4 + 1] - dVar5) * (pdVar21[lVar23 * 4 + 1] - dVar5)) break;
                  pdVar27 = pdVar21 + lVar23 * 4;
                  pdVar24 = pdVar21 + lVar18 * 4;
                  dVar45 = *pdVar27;
                  dVar44 = pdVar27[1];
                  dVar9 = pdVar27[2];
                  dVar10 = pdVar27[3];
                  dVar11 = *pdVar24;
                  dVar12 = pdVar24[1];
                  dVar13 = pdVar24[3];
                  pdVar27[2] = pdVar24[2];
                  pdVar27[3] = dVar13;
                  *pdVar27 = dVar11;
                  pdVar27[1] = dVar12;
                  pdVar24[2] = dVar9;
                  pdVar24[3] = dVar10;
                  *pdVar24 = dVar45;
                  pdVar24[1] = dVar44;
                  iVar26 = iVar32 * 2;
                  iVar29 = iVar32 * 2 + 1;
                  iVar34 = iVar32;
                } while ((longlong)iVar29 < (longlong)uVar22);
                uVar3 = uVar22 - 1;
                local_d8 = (undefined8 *)*pdVar21;
                uStack_d0 = (longlong *)pdVar21[1];
                local_c8 = pdVar21[2];
                dStack_c0 = pdVar21[3];
                dVar45 = pdVar21[uVar3 * 4];
                dVar44 = (pdVar21 + uVar3 * 4)[1];
                dVar9 = (pdVar21 + uVar3 * 4 + 2)[1];
                pdVar21[2] = pdVar21[uVar3 * 4 + 2];
                pdVar21[3] = dVar9;
                *pdVar21 = dVar45;
                pdVar21[1] = dVar44;
                pdVar21[uVar3 * 4 + 2] = local_c8;
                (pdVar21 + uVar3 * 4 + 2)[1] = dStack_c0;
                pdVar21[uVar3 * 4] = (double)local_d8;
                (pdVar21 + uVar3 * 4)[1] = (double)uStack_d0;
                bVar38 = 2 < uVar22;
                uVar22 = uVar3;
              } while (bVar38);
            }
          }
        }
LAB_148828de2:
        puVar19 = puVar19 + -3;
      } while (&local_3d8 <= puVar19);
    }
    puVar19 = local_458;
    local_c8 = (double)DAT_14c8464f0;
    local_d8 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_d0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    uVar16 = FUN_1448eb174(local_458,0x18,0);
    iVar26 = FUN_14882bb36(local_428,uVar16,puVar19);
    lVar18 = 0;
    if (iVar26 != -1) {
      lVar18 = (longlong)iVar26 * 0x30 + local_428[0];
    }
    plVar36 = *(longlong **)(lVar18 + 0x20);
    if (plVar36 == (longlong *)0x0) goto LAB_1488283be;
    iVar26 = (int)plVar36[1];
    do {
      if (iVar26 == 0) goto LAB_1488283be;
      LOCK();
      iVar34 = (int)plVar36[1];
      bVar38 = iVar26 == iVar34;
      if (bVar38) {
        *(int *)(plVar36 + 1) = iVar26 + 1;
        iVar34 = iVar26;
      }
      iVar26 = iVar34;
      UNLOCK();
    } while (!bVar38);
    if (*(longlong *)(lVar18 + 0x18) == 0) {
LAB_148828eac:
      uVar15 = 0;
    }
    else {
      FUN_1488daafa(*(longlong *)(lVar18 + 0x18),&local_3d8,param_2,param_3);
      local_c8 = (double)CONCAT44(uStack_3c4,local_3c8);
      local_d8 = local_3d8;
      uStack_d0 = uStack_3d0;
      if (iStack_3c0 == -1) goto LAB_148828eac;
      *(double *)(param_1 + 4) = local_c8;
      *param_1 = (int)local_3d8;
      param_1[1] = local_3d8._4_4_;
      param_1[2] = (int)uStack_3d0;
      param_1[3] = uStack_3d0._4_4_;
      uVar15 = 1;
    }
    *(undefined1 *)(param_1 + 6) = uVar15;
    LOCK();
    plVar35 = plVar36 + 1;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)*plVar35 == 0) {
      (**(code **)*plVar36)(plVar36);
      LOCK();
      piVar2 = (int *)((longlong)plVar36 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
      }
    }
  }
  if (local_458 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_3e0 = 0;
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  FUN_148829aae(local_428);
  FUN_140b33c95(local_440,local_438);
  if (local_440 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1488282f3:
  if ((local_b0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_148828801:
  local_d8 = (undefined8 *)*pdVar21;
  uStack_d0 = (longlong *)pdVar21[1];
  local_c8 = pdVar21[2];
  dStack_c0 = pdVar21[3];
  dVar45 = *pdVar30;
  dVar44 = pdVar25[-3];
  dVar9 = pdVar25[-1];
  pdVar21[2] = pdVar25[-2];
  pdVar21[3] = dVar9;
  *pdVar21 = dVar45;
  pdVar21[1] = dVar44;
  pdVar25[-2] = local_c8;
  pdVar25[-1] = dStack_c0;
  *pdVar30 = (double)local_d8;
  pdVar25[-3] = (double)uStack_d0;
  iVar26 = iVar26 + -1;
  pdVar25 = pdVar25 + -8;
  if ((longlong)pdVar33 - (longlong)pdVar31 < (longlong)pdVar27 - (longlong)pdVar37) {
    if (pdVar20 < pdVar24) {
      *puVar19 = pdVar20;
      puVar19[1] = pdVar24;
      *(int *)(puVar19 + 2) = iVar26;
      puVar19 = puVar19 + 3;
    }
    pdVar37 = pdVar21;
    if (pdVar30 <= pdVar21 + 4) goto LAB_148828de2;
  }
  else {
    if (pdVar21 + 4 < pdVar30) {
      *puVar19 = pdVar21;
      puVar19[1] = pdVar25;
      *(int *)(puVar19 + 2) = iVar26;
      puVar19 = puVar19 + 3;
    }
    pdVar21 = pdVar20;
    pdVar25 = pdVar24;
    pdVar33 = pdVar24;
    if (pdVar24 <= pdVar20) goto LAB_148828de2;
  }
  iVar34 = (int)((ulonglong)((longlong)pdVar33 - (longlong)pdVar37) >> 5);
  uVar28 = iVar34 + 1;
  pdVar24 = pdVar25;
  pdVar27 = pdVar33;
  pdVar31 = pdVar37;
  if (iVar26 == 0) goto LAB_1488288cd;
  goto LAB_14882864a;
}



// FUNCTION 148828ef6 FUN_148828ef6 body=1276 status=ok
// SIG undefined FUN_148828ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_148828ef6(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  void *_Src;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  longlong **local_290;
  void **local_288;
  int local_27c;
  void *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  undefined8 local_208;
  char local_200;
  double local_1f8;
  undefined4 local_174;
  byte local_16b;
  undefined4 local_148;
  longlong *local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  longlong local_c8;
  longlong local_a8;
  undefined1 local_90 [16];
  double local_80;
  char local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((param_3 == (longlong *)0x0) ||
     (lVar10 = (**(code **)(*param_3 + 0x180))(param_3), lVar10 == 0)) {
LAB_148829398:
    uVar17 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  }
  else {
    FUN_14882c6b9(&local_218,lVar10,param_1);
    piVar6 = DAT_14cb78258;
    if (local_200 != '\x01') {
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar12 + 0xc60) == 0x40000002) {
        iVar15 = *DAT_14cb78258;
LAB_148828fb2:
        uVar11 = 0;
        lVar14 = DAT_14cb78270;
      }
      else {
        bVar7 = FUN_144a61b4f();
        lVar14 = DAT_14cb78270;
        iVar15 = piVar6[bVar7 ^ 1];
        if (*(int *)(lVar12 + 0xc60) == 0x40000002) goto LAB_148828fb2;
        bVar7 = FUN_144a61b4f();
        uVar11 = (ulonglong)(bVar7 ^ 1);
      }
      iVar2 = *(int *)(lVar14 + uVar11 * 4);
      FUN_14882826e(local_90,param_1,(float)iVar15,param_3);
      if (local_78 == '\x01') goto LAB_1488293b1;
      lVar12 = FUN_14585a026(lVar10);
      if (lVar12 != 0) {
        local_298 = 0x14;
        local_27c = iVar2;
        FUN_144908ca4(lVar12,&local_218,param_1,(float)iVar15);
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        lVar14 = (longlong)local_210;
        if (lVar14 == 0) {
LAB_14882914a:
          uVar9 = 1;
          iVar15 = local_27c;
          do {
            local_298 = 1;
            FUN_144908ca4(lVar12,&local_278,param_1,(float)iVar15);
            _Src = local_278;
            iVar2 = (int)uStack_270;
            lVar14 = (longlong)(int)uStack_270;
            local_210 = (int)uStack_270;
            if ((int)uStack_270 == 0 && local_20c == 0) {
              local_20c = 0;
            }
            else {
              FUN_148829c56(&local_218,uStack_270 & 0xffffffff);
              if (iVar2 != 0) {
                memcpy((void *)CONCAT44(uStack_214,local_218),_Src,lVar14 << 3);
              }
            }
            if (local_278 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (2 < uVar9) break;
            uVar9 = uVar9 + 1;
            iVar15 = iVar15 + local_27c;
          } while (local_210 == 0);
LAB_1488290fc:
          if ((local_210 < 1) || (lVar14 = *(longlong *)CONCAT44(uStack_214,local_218), lVar14 == 0)
             ) {
            if (local_118 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_214,local_218) != 0) {
              FUN_1400020a8();
            }
            goto LAB_148829225;
          }
        }
        else {
          lVar5 = CONCAT44(uStack_214,local_218);
          lVar16 = 0;
          do {
            uVar11 = uStack_110;
            lVar13 = *(longlong *)(lVar5 + lVar16);
            if ((lVar13 != 0) && (*(char *)(lVar13 + 0x23) == '\x02')) {
              lVar13 = (longlong)(int)uStack_110;
              uVar9 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar9);
              if (uStack_110._4_4_ < uVar9) {
                FUN_141873fdc(&local_118,uVar11 & 0xffffffff);
              }
              local_118[lVar13] = *(longlong *)(lVar5 + lVar16);
            }
            lVar16 = lVar16 + 8;
          } while (lVar14 * 8 != lVar16);
          if (((int)uStack_110 < 1) || (lVar14 = *local_118, lVar14 == 0)) {
            if (local_210 == 0) goto LAB_14882914a;
            goto LAB_1488290fc;
          }
        }
        dVar1 = *(double *)(lVar14 + 0x18);
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_80 = dVar1;
        if (CONCAT44(uStack_214,local_218) != 0) {
          FUN_1400020a8();
        }
        goto LAB_1488293b1;
      }
LAB_148829225:
      local_238 = *param_1;
      uStack_234 = param_1[1];
      uStack_230 = param_1[2];
      uStack_22c = param_1[3];
      lVar12 = FUN_14073fae1();
      dVar3 = (double)*(float *)(lVar12 + 0xd8) + *(double *)(param_2 + 0x10);
      local_228 = dVar3;
      lVar12 = FUN_14073fae1();
      dVar1 = (double)*(float *)(lVar12 + 0xdc);
      dVar3 = dVar3 - DAT_14c8462d0 * dVar1;
      local_250 = (double)CONCAT44(uStack_234,local_238) - dVar1 * DAT_14c8462c0;
      local_248 = (double)CONCAT44(uStack_22c,uStack_230) - DAT_14c8462c8 * dVar1;
      local_240 = dVar3;
      FUN_144ae1dc6(&local_118);
      local_108 = 0;
      local_268 = _DAT_14cad0f20;
      uStack_260 = uRam000000014cad0f28;
      local_278 = _DAT_14cad0f10;
      uStack_270 = _DAT_14cad0f18;
      memset(&local_218,0,0x100);
      local_148 = 0xffffffff;
      uStack_214 = 0x3f800000;
      local_174 = 0xffffffff;
      local_298 = 0;
      local_290 = &local_118;
      local_288 = &local_278;
      cVar8 = FUN_1400b50cc(lVar10,&local_218,&local_238,&local_250);
      bVar4 = true;
      if ((cVar8 != '\0') && ((local_16b & 3) == 1)) {
        lVar10 = FUN_14073fae1();
        dVar3 = (double)*(float *)(lVar10 + 0xd0) + local_1f8;
        bVar4 = false;
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      local_80 = dVar3;
      if (!bVar4) goto LAB_1488293b1;
      goto LAB_148829398;
    }
    uVar17 = (undefined4)local_208;
    uVar18 = (undefined4)((ulonglong)local_208 >> 0x20);
  }
  lVar10 = FUN_14073fae1();
  local_80 = (double)*(float *)(lVar10 + 0xd0) + (double)CONCAT44(uVar18,uVar17);
LAB_1488293b1:
  if ((local_70 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_80;
}



// FUNCTION 14882941c FUN_14882941c body=22 status=ok
// SIG undefined FUN_14882941c(void)

undefined8 FUN_14882941c(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78290;
  if (DAT_14cb78290 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78290 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78290 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78290[0x3a] <= *(int *)((longlong)DAT_14cb78290 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78290 + 0x300))(DAT_14cb78290);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14882945a FUN_14882945a body=44 status=ok
// SIG undefined FUN_14882945a(void)

void FUN_14882945a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_148694be2(param_1 + 0x100,param_3);
  FUN_1460071d0(param_1,param_2);
  return;
}



// FUNCTION 1488294fe FUN_1488294fe body=162 status=ok
// SIG undefined FUN_1488294fe(void)

undefined8 * FUN_1488294fe(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*param_3 != 0) || ((int)param_3[1] != -1)) {
    uVar2 = FUN_140437988();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140437988();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
        cVar1 = FUN_144a7a548(uVar2,param_3);
        if (cVar1 != '\0') {
          FUN_140c823b2(uVar2,param_1,param_3);
          return param_1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c9a632c;
  *param_1 = DAT_14c9a6324;
  return param_1;
}



// FUNCTION 1488295c8 FUN_1488295c8 body=99 status=ok
// SIG undefined FUN_1488295c8(void)

bool FUN_1488295c8(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[5] == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x180))();
    FUN_141495e41(&local_20,uVar1);
    bVar2 = local_20 == param_1[5];
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882962c FUN_14882962c body=775 status=ok
// SIG undefined FUN_14882962c(void)

undefined8 * FUN_14882962c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_128 [16];
  longlong *local_118;
  ulonglong *local_110;
  undefined2 *local_108;
  int local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [16];
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8 [2];
  longlong local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_58;
  int local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = 0;
  param_2[1] = 0;
  local_b8[0] = *(undefined8 *)(param_1[2] + 0x18);
  FUN_1400021e4(local_b8,local_e8);
  FUN_14146ec20(local_b8,local_e8);
  local_d8 = local_b8;
  local_d0 = &local_98;
  FUN_1407adb6e(&local_c8);
  FUN_140230a2e(&local_58,L"Class: {0}",&local_c8);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar2 != 0) {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(lVar2 + 8);
    }
    FUN_141710b0e(puVar3,&local_108,1);
    puVar4 = local_108;
    if (local_100 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140230a18(local_b8,puVar4);
    local_f8 = local_b8;
    local_f0 = &local_98;
    FUN_1407adb6e(&local_c8);
    FUN_140230a2e(&local_58,L", Type: {0}",&local_c8);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_c8,local_c0);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,local_b8);
  local_138 = local_88;
  FUN_140002266(local_128,L"X=%3.3f Y=%3.3f Z=%3.3f",local_98,local_90);
  FUN_14146ec20(&local_58,local_128);
  local_110 = &local_38;
  local_118 = &local_58;
  FUN_1407adb6e(&local_108);
  FUN_140230a2e(&local_c8,L", World Location: {0}",&local_108);
  iVar1 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_c8,iVar1);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_108,local_100);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148829966 FUN_148829966 body=38 status=ok
// SIG undefined FUN_148829966(void)

undefined8 FUN_148829966(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148829992 FUN_148829992 body=38 status=ok
// SIG undefined FUN_148829992(void)

undefined8 FUN_148829992(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488299c6 FUN_1488299c6 body=38 status=ok
// SIG undefined FUN_1488299c6(void)

undefined8 FUN_1488299c6(undefined8 param_1,int param_2)

{
  FUN_141496bb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488299f4 FUN_1488299f4 body=147 status=ok
// SIG undefined FUN_1488299f4(void)

void FUN_1488299f4(longlong param_1,int param_2)

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



// FUNCTION 148829a88 FUN_148829a88 body=38 status=ok
// SIG undefined FUN_148829a88(void)

undefined8 FUN_148829a88(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148829aae FUN_148829aae body=54 status=ok
// SIG undefined FUN_148829aae(void)

void FUN_148829aae(longlong *param_1)

{
  FUN_148829ae4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148829ae4 FUN_148829ae4 body=367 status=ok
// SIG undefined FUN_148829ae4(void)

void FUN_148829ae4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
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
      plVar3 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
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



// FUNCTION 148829c56 FUN_148829c56 body=98 status=ok
// SIG undefined FUN_148829c56(void)

void FUN_148829c56(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148829cd2 FUN_148829cd2 body=29 status=ok
// SIG undefined FUN_148829cd2(void)

bool FUN_148829cd2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148829cf0 FUN_148829cf0 body=26 status=ok
// SIG undefined FUN_148829cf0(void)

bool FUN_148829cf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148829d0a FUN_148829d0a body=24 status=ok
// SIG undefined FUN_148829d0a(void)

bool FUN_148829d0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148829d2e FUN_148829d2e body=93 status=ok
// SIG undefined FUN_148829d2e(void)

void FUN_148829d2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f87e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148829d8c FUN_148829d8c body=126 status=ok
// SIG undefined FUN_148829d8c(void)

void FUN_148829d8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f87e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148829dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148829e0a FUN_148829e0a body=48 status=ok
// SIG undefined FUN_148829e0a(void)

void FUN_148829e0a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148829e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148829e3c FUN_148829e3c body=112 status=ok
// SIG undefined FUN_148829e3c(void)

longlong * FUN_148829e3c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar6 = (longlong *)*param_1;
    lVar5 = (longlong)*(int *)(param_1 + 1) << 5;
    do {
      if (*plVar6 == *param_2) {
        cVar4 = FUN_1409d2f40(plVar6 + 2,param_2[2]);
        if (cVar4 != '\0') goto LAB_148829e7b;
      }
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_148829e7b:
  plVar3 = (longlong *)param_2[1];
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
  return plVar6;
}



// FUNCTION 148829eac FUN_148829eac body=81 status=ok
// SIG undefined FUN_148829eac(void)

undefined8 *
FUN_148829eac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,param_3);
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3,param_4);
  return param_1;
}



// FUNCTION 148829efe FUN_148829efe body=132 status=ok
// SIG undefined FUN_148829efe(void)

void FUN_148829efe(longlong param_1,int param_2)

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



// FUNCTION 148829f84 FUN_148829f84 body=466 status=ok
// SIG undefined FUN_148829f84(void)

void FUN_148829f84(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar6 = 0;
    if (*plVar2 == *param_2) {
      bVar6 = FUN_1409d2f40(plVar2 + 2,param_2[2]);
    }
    uVar12 = 0;
LAB_148829ffa:
    do {
      iVar4 = (int)uVar12;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        lVar13 = (longlong)iVar4;
        plVar14 = plVar2 + lVar13 * 4 + 6;
        bVar3 = true;
        lVar11 = 0;
        do {
          if (plVar14[-2] == *param_2) {
            bVar7 = FUN_1409d2f40(plVar14,param_2[2]);
            if (((bVar7 ^ bVar6) & 1) != 0) {
              uVar5 = (int)(lVar13 + 1) + (int)lVar11;
              break;
            }
          }
          else if ((bVar6 & 1) != 0) {
            FUN_140d9b04b(plVar2 + lVar13 * 4,(int)lVar11 + 1);
            if (!bVar3) goto LAB_14882a138;
            uVar12 = lVar13 + 1 + lVar11;
            bVar6 = 0;
            goto LAB_148829ffa;
          }
          bVar3 = lVar13 + lVar11 + 2 < lVar8;
          lVar11 = lVar11 + 1;
          plVar14 = plVar14 + 4;
          uVar5 = uVar1;
        } while ((lVar13 - lVar8) + 1 + lVar11 != 0);
      }
      else {
        bVar3 = false;
        uVar5 = iVar4 + 1U;
      }
      uVar12 = (ulonglong)uVar5;
      iVar10 = uVar5 - iVar4;
      if ((bVar6 & 1) == 0) {
        if (iVar9 != iVar4) {
          memmove(plVar2 + (longlong)iVar9 * 4,plVar2 + (longlong)iVar4 * 4,(longlong)iVar10 << 5);
        }
        iVar9 = iVar9 + iVar10;
        bVar6 = 1;
        if (!bVar3) break;
        goto LAB_148829ffa;
      }
      FUN_140d9b04b(plVar2 + (longlong)iVar4 * 4,iVar10);
      bVar6 = 0;
    } while (bVar3);
LAB_14882a138:
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14882a156 FUN_14882a156 body=466 status=ok
// SIG undefined FUN_14882a156(void)

void FUN_14882a156(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar6 = 0;
    if (*plVar2 == *param_2) {
      bVar6 = FUN_1409d2f40(plVar2 + 2,param_2[2]);
    }
    uVar12 = 0;
LAB_14882a1cc:
    do {
      iVar4 = (int)uVar12;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        lVar13 = (longlong)iVar4;
        plVar14 = plVar2 + lVar13 * 4 + 6;
        bVar3 = true;
        lVar11 = 0;
        do {
          if (plVar14[-2] == *param_2) {
            bVar7 = FUN_1409d2f40(plVar14,param_2[2]);
            if (((bVar7 ^ bVar6) & 1) != 0) {
              uVar5 = (int)(lVar13 + 1) + (int)lVar11;
              break;
            }
          }
          else if ((bVar6 & 1) != 0) {
            FUN_140d9affe(plVar2 + lVar13 * 4,(int)lVar11 + 1);
            if (!bVar3) goto LAB_14882a30a;
            uVar12 = lVar13 + 1 + lVar11;
            bVar6 = 0;
            goto LAB_14882a1cc;
          }
          bVar3 = lVar13 + lVar11 + 2 < lVar8;
          lVar11 = lVar11 + 1;
          plVar14 = plVar14 + 4;
          uVar5 = uVar1;
        } while ((lVar13 - lVar8) + 1 + lVar11 != 0);
      }
      else {
        bVar3 = false;
        uVar5 = iVar4 + 1U;
      }
      uVar12 = (ulonglong)uVar5;
      iVar10 = uVar5 - iVar4;
      if ((bVar6 & 1) == 0) {
        if (iVar9 != iVar4) {
          memmove(plVar2 + (longlong)iVar9 * 4,plVar2 + (longlong)iVar4 * 4,(longlong)iVar10 << 5);
        }
        iVar9 = iVar9 + iVar10;
        bVar6 = 1;
        if (!bVar3) break;
        goto LAB_14882a1cc;
      }
      FUN_140d9affe(plVar2 + (longlong)iVar4 * 4,iVar10);
      bVar6 = 0;
    } while (bVar3);
LAB_14882a30a:
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14882a328 FUN_14882a328 body=466 status=ok
// SIG undefined FUN_14882a328(void)

void FUN_14882a328(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar6 = 0;
    if (*plVar2 == *param_2) {
      bVar6 = FUN_1409d2f40(plVar2 + 2,param_2[2]);
    }
    uVar12 = 0;
LAB_14882a39e:
    do {
      iVar4 = (int)uVar12;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        lVar13 = (longlong)iVar4;
        plVar14 = plVar2 + lVar13 * 4 + 6;
        bVar3 = true;
        lVar11 = 0;
        do {
          if (plVar14[-2] == *param_2) {
            bVar7 = FUN_1409d2f40(plVar14,param_2[2]);
            if (((bVar7 ^ bVar6) & 1) != 0) {
              uVar5 = (int)(lVar13 + 1) + (int)lVar11;
              break;
            }
          }
          else if ((bVar6 & 1) != 0) {
            FUN_140d9afb1(plVar2 + lVar13 * 4,(int)lVar11 + 1);
            if (!bVar3) goto LAB_14882a4dc;
            uVar12 = lVar13 + 1 + lVar11;
            bVar6 = 0;
            goto LAB_14882a39e;
          }
          bVar3 = lVar13 + lVar11 + 2 < lVar8;
          lVar11 = lVar11 + 1;
          plVar14 = plVar14 + 4;
          uVar5 = uVar1;
        } while ((lVar13 - lVar8) + 1 + lVar11 != 0);
      }
      else {
        bVar3 = false;
        uVar5 = iVar4 + 1U;
      }
      uVar12 = (ulonglong)uVar5;
      iVar10 = uVar5 - iVar4;
      if ((bVar6 & 1) == 0) {
        if (iVar9 != iVar4) {
          memmove(plVar2 + (longlong)iVar9 * 4,plVar2 + (longlong)iVar4 * 4,(longlong)iVar10 << 5);
        }
        iVar9 = iVar9 + iVar10;
        bVar6 = 1;
        if (!bVar3) break;
        goto LAB_14882a39e;
      }
      FUN_140d9afb1(plVar2 + (longlong)iVar4 * 4,iVar10);
      bVar6 = 0;
    } while (bVar3);
LAB_14882a4dc:
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14882a4fa FUN_14882a4fa body=466 status=ok
// SIG undefined FUN_14882a4fa(void)

void FUN_14882a4fa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar6 = 0;
    if (*plVar2 == *param_2) {
      bVar6 = FUN_1409d2f40(plVar2 + 2,param_2[2]);
    }
    uVar12 = 0;
LAB_14882a570:
    do {
      iVar4 = (int)uVar12;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        lVar13 = (longlong)iVar4;
        plVar14 = plVar2 + lVar13 * 4 + 6;
        bVar3 = true;
        lVar11 = 0;
        do {
          if (plVar14[-2] == *param_2) {
            bVar7 = FUN_1409d2f40(plVar14,param_2[2]);
            if (((bVar7 ^ bVar6) & 1) != 0) {
              uVar5 = (int)(lVar13 + 1) + (int)lVar11;
              break;
            }
          }
          else if ((bVar6 & 1) != 0) {
            FUN_140d9b098(plVar2 + lVar13 * 4,(int)lVar11 + 1);
            if (!bVar3) goto LAB_14882a6ae;
            uVar12 = lVar13 + 1 + lVar11;
            bVar6 = 0;
            goto LAB_14882a570;
          }
          bVar3 = lVar13 + lVar11 + 2 < lVar8;
          lVar11 = lVar11 + 1;
          plVar14 = plVar14 + 4;
          uVar5 = uVar1;
        } while ((lVar13 - lVar8) + 1 + lVar11 != 0);
      }
      else {
        bVar3 = false;
        uVar5 = iVar4 + 1U;
      }
      uVar12 = (ulonglong)uVar5;
      iVar10 = uVar5 - iVar4;
      if ((bVar6 & 1) == 0) {
        if (iVar9 != iVar4) {
          memmove(plVar2 + (longlong)iVar9 * 4,plVar2 + (longlong)iVar4 * 4,(longlong)iVar10 << 5);
        }
        iVar9 = iVar9 + iVar10;
        bVar6 = 1;
        if (!bVar3) break;
        goto LAB_14882a570;
      }
      FUN_140d9b098(plVar2 + (longlong)iVar4 * 4,iVar10);
      bVar6 = 0;
    } while (bVar3);
LAB_14882a6ae:
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14882a6cc FUN_14882a6cc body=290 status=ok
// SIG undefined FUN_14882a6cc(void)

void FUN_14882a6cc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_14882a7ee(param_2,lVar2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x20;
      lVar13 = lVar2 + 0x20 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_14882a7ee(param_2,lVar13);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x20;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x20 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 << 5);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_140d9b098(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14882a7ee FUN_14882a7ee body=123 status=ok
// SIG undefined FUN_14882a7ee(void)

undefined8 FUN_14882a7ee(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(*param_2 + 8);
  }
  FUN_1447325ac(puVar2,&local_28,1);
  if (local_28 == *param_1) {
    uVar1 = FUN_1409d2f40(param_2 + 2,param_1[3]);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882a86a FUN_14882a86a body=114 status=ok
// SIG undefined FUN_14882a86a(void)

void FUN_14882a86a(longlong *param_1,int param_2)

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



// FUNCTION 14882a8dc FUN_14882a8dc body=181 status=ok
// SIG undefined FUN_14882a8dc(void)

longlong FUN_14882a8dc(longlong *param_1,uint param_2,int *param_3)

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
          if (lVar3 != 0) goto LAB_14882a974;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14882a992(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_14882a974:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 14882a992 FUN_14882a992 body=284 status=ok
// SIG undefined FUN_14882a992(void)

undefined4 * FUN_14882a992(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478c4866(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  local_58 = 0;
  cVar1 = FUN_1478c494c(param_1,param_3,local_40,local_48);
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
      FUN_1478c4a6a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882aab0 FUN_14882aab0 body=107 status=ok
// SIG undefined FUN_14882aab0(void)

/* WARNING: Removing unreachable block (ram,0x00014882aae2) */
/* WARNING: Removing unreachable block (ram,0x00014882aabe) */
/* WARNING: Removing unreachable block (ram,0x00014882aad4) */
/* WARNING: Removing unreachable block (ram,0x00014882aaed) */
/* WARNING: Removing unreachable block (ram,0x00014882aad6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14882aab0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb77e48;
  LOCK();
  UNLOCK();
  DAT_14cb77e48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb77e50 = _DAT_14cb77e50 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14882ab1c FUN_14882ab1c body=29 status=ok
// SIG undefined FUN_14882ab1c(void)

undefined8 FUN_14882ab1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882ab54 FUN_14882ab54 body=29 status=ok
// SIG undefined FUN_14882ab54(void)

bool FUN_14882ab54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14882ab72 FUN_14882ab72 body=26 status=ok
// SIG undefined FUN_14882ab72(void)

bool FUN_14882ab72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14882ab8c FUN_14882ab8c body=24 status=ok
// SIG undefined FUN_14882ab8c(void)

bool FUN_14882ab8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14882aba4 FUN_14882aba4 body=101 status=ok
// SIG undefined FUN_14882aba4(void)

void FUN_14882aba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f88f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14882ac0a FUN_14882ac0a body=101 status=ok
// SIG undefined FUN_14882ac0a(void)

void FUN_14882ac0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f88f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14882ac70 FUN_14882ac70 body=134 status=ok
// SIG undefined FUN_14882ac70(void)

void FUN_14882ac70(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f88f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882ace7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14882acf6 FUN_14882acf6 body=44 status=ok
// SIG undefined FUN_14882acf6(void)

void FUN_14882acf6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014882ad1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14882ad22 FUN_14882ad22 body=156 status=ok
// SIG undefined FUN_14882ad22(void)

bool FUN_14882ad22(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882adc0 FUN_14882adc0 body=48 status=ok
// SIG undefined FUN_14882adc0(void)

void FUN_14882adc0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe8,8);
  }
  return;
}



// FUNCTION 14882adf0 FUN_14882adf0 body=146 status=ok
// SIG undefined FUN_14882adf0(void)

void FUN_14882adf0(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14882ae84 FUN_14882ae84 body=76 status=ok
// SIG undefined FUN_14882ae84(void)

void FUN_14882ae84(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a804be();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14882aec1;
    }
  }
  lVar2 = 0;
LAB_14882aec1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14882aed0 FUN_14882aed0 body=48 status=ok
// SIG undefined FUN_14882aed0(void)

void FUN_14882aed0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14882af00 FUN_14882af00 body=132 status=ok
// SIG undefined FUN_14882af00(void)

void FUN_14882af00(longlong param_1,int param_2)

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



// FUNCTION 14882af86 FUN_14882af86 body=125 status=ok
// SIG undefined FUN_14882af86(void)

void FUN_14882af86(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_148668722(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14882b004 FUN_14882b004 body=31 status=ok
// SIG undefined FUN_14882b004(void)

undefined8 FUN_14882b004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882b03e FUN_14882b03e body=93 status=ok
// SIG undefined FUN_14882b03e(void)

void FUN_14882b03e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14882b09c FUN_14882b09c body=93 status=ok
// SIG undefined FUN_14882b09c(void)

void FUN_14882b09c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14882b0fa FUN_14882b0fa body=126 status=ok
// SIG undefined FUN_14882b0fa(void)

void FUN_14882b0fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882b169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14882b178 FUN_14882b178 body=35 status=ok
// SIG undefined FUN_14882b178(void)

void FUN_14882b178(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014882b197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14882b19c FUN_14882b19c body=89 status=ok
// SIG undefined FUN_14882b19c(void)

void FUN_14882b19c(longlong param_1,int param_2)

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



// FUNCTION 14882b1f6 FUN_14882b1f6 body=96 status=ok
// SIG undefined FUN_14882b1f6(void)

longlong * FUN_14882b1f6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14882b19c(param_1,iVar1);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14882b256 FUN_14882b256 body=48 status=ok
// SIG undefined FUN_14882b256(void)

void FUN_14882b256(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14882b286 FUN_14882b286 body=30 status=ok
// SIG undefined FUN_14882b286(void)

void FUN_14882b286(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  return;
}



// FUNCTION 14882b2a4 FUN_14882b2a4 body=132 status=ok
// SIG undefined FUN_14882b2a4(void)

void FUN_14882b2a4(longlong param_1,int param_2)

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



// FUNCTION 14882b32e FUN_14882b32e body=138 status=ok
// SIG undefined FUN_14882b32e(void)

void FUN_14882b32e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14882b3b8 FUN_14882b3b8 body=162 status=ok
// SIG undefined FUN_14882b3b8(void)

void FUN_14882b3b8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14882b445;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14882b445:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14882b45a FUN_14882b45a body=172 status=ok
// SIG undefined FUN_14882b45a(void)

void FUN_14882b45a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_14027a0c2(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x40 + *param_1;
      cVar1 = FUN_14027ac7a(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x38);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x40 + *param_1;
          cVar1 = FUN_14027ac7a(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x38);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_14882b506(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 14882b506 FUN_14882b506 body=90 status=ok
// SIG undefined FUN_14882b506(void)

void FUN_14882b506(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_14882b560();
  return;
}



// FUNCTION 14882b560 FUN_14882b560 body=58 status=ok
// SIG undefined FUN_14882b560(void)

void FUN_14882b560(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14882b32e(param_1,param_2,1);
  return;
}



// FUNCTION 14882b59a FUN_14882b59a body=48 status=ok
// SIG undefined FUN_14882b59a(void)

void FUN_14882b59a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14882b5ca FUN_14882b5ca body=162 status=ok
// SIG undefined FUN_14882b5ca(void)

void FUN_14882b5ca(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14882b657;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14882b657:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14882b66c FUN_14882b66c body=164 status=ok
// SIG undefined FUN_14882b66c(void)

void FUN_14882b66c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14882b6ec;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14882b6ec:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14882b710 FUN_14882b710 body=118 status=ok
// SIG undefined FUN_14882b710(void)

ulonglong FUN_14882b710(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882b787 FUN_14882b787 body=7 status=ok
// SIG undefined FUN_14882b787(void)

void FUN_14882b787(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14882b78e FUN_14882b78e body=132 status=ok
// SIG undefined FUN_14882b78e(void)

void FUN_14882b78e(longlong param_1,int param_2)

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



// FUNCTION 14882b814 FUN_14882b814 body=48 status=ok
// SIG undefined FUN_14882b814(void)

void FUN_14882b814(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}


