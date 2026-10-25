// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14827678a FUN_14827678a body=75 status=ok
// SIG undefined FUN_14827678a(void)

undefined8 FUN_14827678a(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x2e8ba2e8ba2e8ba < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x2e < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x58);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x58,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1482767d6 FUN_1482767d6 body=57 status=ok
// SIG undefined FUN_1482767d6(void)

void FUN_1482767d6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_148274782(lVar2 + 0x30);
    FUN_1482748da(lVar2 + 0x18);
    FUN_1482748da(lVar2);
  }
  return;
}



// FUNCTION 148276810 FUN_148276810 body=16 status=ok
// SIG undefined FUN_148276810(void)

void FUN_148276810(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148276822 FUN_148276822 body=75 status=ok
// SIG undefined FUN_148276822(void)

undefined8 FUN_148276822(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 4);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14827686e FUN_14827686e body=82 status=ok
// SIG undefined FUN_14827686e(void)

void FUN_14827686e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1482768c2 FUN_1482768c2 body=125 status=ok
// SIG undefined FUN_1482768c2(void)

void FUN_1482768c2(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  if (param_2 <= (ulonglong)(param_1[2] - lVar1 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_1[1];
    _Dst = (void *)FUN_148274736(param_2);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_148275ff6(param_1,_Dst,lVar2 - lVar1 >> 4,param_2);
    return;
  }
  FUN_148274724();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// FUNCTION 148276940 FUN_148276940 body=110 status=ok
// SIG undefined FUN_148276940(void)

void FUN_148276940(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 1482769b0 FUN_1482769b0 body=200 status=ok
// SIG undefined FUN_1482769b0(void)

void FUN_1482769b0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 4) + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_148276822(uVar7);
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar2) + 0x10),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148276940(param_1,_Dst,uVar6,uVar7);
  return;
}



// FUNCTION 148276a78 FUN_148276a78 body=200 status=ok
// SIG undefined FUN_148276a78(void)

void FUN_148276a78(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 4) + 1;
  uVar5 = param_1[2] - lVar2 >> 4;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_148274736(uVar7);
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar2) + 0x10),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_148275ff6(param_1,_Dst,uVar6,uVar7);
  return;
}



// FUNCTION 148276b40 FUN_148276b40 body=38 status=ok
// SIG undefined FUN_148276b40(void)

undefined8 FUN_148276b40(undefined8 param_1,int param_2)

{
  FUN_14827362e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148276b66 FUN_148276b66 body=104 status=ok
// SIG undefined FUN_148276b66(void)

void FUN_148276b66(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1482747d6();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = FUN_148274882(param_2);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_2 * 0x18;
    lVar2 = FUN_148276bce(*param_3,*param_4,lVar2);
    param_1[1] = lVar2;
  }
  return;
}



// FUNCTION 148276bce FUN_148276bce body=106 status=ok
// SIG undefined FUN_148276bce(void)

undefined8 * FUN_148276bce(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    plVar1 = param_1 + 1;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      FUN_1482746b2(param_3,*plVar1 - plVar1[-1] >> 4,plVar1 + -1,plVar1);
      param_3 = param_3 + 3;
      plVar2 = plVar1 + 2;
      plVar1 = plVar1 + 3;
    } while (plVar2 != param_2);
  }
  return param_3;
}



// FUNCTION 148276c38 FUN_148276c38 body=92 status=ok
// SIG undefined FUN_148276c38(void)

void FUN_148276c38(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  
  if (-1 < (longlong)param_2) {
    uVar5 = param_2 + 0x1f >> 5;
    lVar3 = *param_1;
    if ((uVar5 < (ulonglong)(param_1[1] - lVar3 >> 2)) &&
       (lVar1 = lVar3 + uVar5 * 4, lVar1 != param_1[1])) {
      param_1[1] = lVar1;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar2 = (uint *)(lVar3 + -4 + uVar5 * 4);
      *puVar2 = *puVar2 & ~(-1 << (sbyte)(param_2 & 0x1f));
    }
    return;
  }
  FUN_148276d42();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 148276c94 FUN_148276c94 body=16 status=ok
// SIG undefined FUN_148276c94(void)

void FUN_148276c94(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148276ca6 FUN_148276ca6 body=70 status=ok
// SIG undefined FUN_148276ca6(void)

undefined8 FUN_148276ca6(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x3ff < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 * 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148276cee FUN_148276cee body=82 status=ok
// SIG undefined FUN_148276cee(void)

void FUN_148276cee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 148276d42 FUN_148276d42 body=16 status=ok
// SIG undefined FUN_148276d42(void)

void FUN_148276d42(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<bool> too long");
}



// FUNCTION 148276d54 FUN_148276d54 body=753 status=ok
// SIG undefined FUN_148276d54(void)

void FUN_148276d54(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  short sVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uStack_a0 = 0;
  iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8);
  if (iVar15 < 0) {
LAB_14827703e:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if (iVar15 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    FUN_14481578e(&local_a8);
    iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8);
    local_b8 = 0;
    uStack_b0 = 0;
    if (iVar15 < 0) goto LAB_14827703e;
    if (iVar15 != 0) {
      FUN_1447a8aa0(&local_b8);
      puVar12 = *(undefined8 **)(param_1 + 8);
      plVar13 = (longlong *)puVar12[1];
      if (0 < (int)plVar13[1]) {
        lVar18 = 8;
        lVar19 = 0;
        do {
          lVar14 = *plVar13;
          lVar16 = (longlong)*(int *)(lVar14 + -8 + lVar18);
          lVar7 = *(longlong *)*puVar12;
          lVar17 = (longlong)*(int *)(lVar14 + -4 + lVar18);
          lVar14 = (longlong)*(int *)(lVar14 + lVar18);
          dVar8 = (*(double *)(lVar7 + 0x10 + lVar16 * 0x18) +
                   *(double *)(lVar7 + 0x10 + lVar17 * 0x18) +
                  *(double *)(lVar7 + 0x10 + lVar14 * 0x18)) * 0.3333333333333333;
          dVar21 = (*(double *)(lVar7 + 8 + lVar16 * 0x18) + *(double *)(lVar7 + 8 + lVar17 * 0x18)
                   + *(double *)(lVar7 + 8 + lVar14 * 0x18)) * 0.3333333333333333;
          dVar20 = (*(double *)(lVar7 + lVar16 * 0x18) + *(double *)(lVar7 + lVar17 * 0x18) +
                   *(double *)(lVar7 + lVar14 * 0x18)) * 0.3333333333333333;
          dVar8 = dVar8 * dVar8 + dVar20 * dVar20 + dVar21 * dVar21;
          local_98 = dVar8;
          sVar10 = _dtest(&local_98);
          if ((sVar10 != 2) &&
             (local_98 = dVar8, sVar10 = _dtest(&local_98), uVar9 = uStack_a0, sVar10 < 1)) {
            lVar14 = (longlong)(int)uStack_a0;
            uVar11 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar11);
            if (uStack_a0._4_4_ < uVar11) {
              FUN_1446f48e2(&local_a8,uVar9 & 0xffffffff);
            }
            uVar9 = uStack_b0;
            *(int *)(local_a8 + lVar14 * 4) = (int)lVar19;
            lVar14 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
            lVar16 = (longlong)*(int *)(lVar14 + -8 + lVar18);
            lVar7 = *(longlong *)**(undefined8 **)(param_1 + 8);
            dVar8 = *(double *)(lVar7 + lVar16 * 0x18);
            dVar20 = *(double *)(lVar7 + 8 + lVar16 * 0x18);
            dVar21 = *(double *)(lVar7 + 0x10 + lVar16 * 0x18);
            lVar16 = (longlong)*(int *)(lVar14 + -4 + lVar18);
            lVar14 = (longlong)*(int *)(lVar14 + lVar18);
            dVar1 = *(double *)(lVar7 + 0x10 + lVar16 * 0x18);
            dVar2 = *(double *)(lVar7 + 0x10 + lVar14 * 0x18);
            dVar3 = *(double *)(lVar7 + 8 + lVar16 * 0x18);
            dVar4 = *(double *)(lVar7 + 8 + lVar14 * 0x18);
            dVar5 = *(double *)(lVar7 + lVar16 * 0x18);
            dVar6 = *(double *)(lVar7 + lVar14 * 0x18);
            lVar14 = (longlong)(int)uStack_b0;
            uVar11 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
            if (uStack_b0._4_4_ < uVar11) {
              FUN_1403e3958(&local_b8,uVar9 & 0xffffffff);
            }
            *(double *)(local_b8 + lVar14 * 0x18) = (dVar8 + dVar5 + dVar6) * 0.3333333333333333;
            *(double *)(local_b8 + 8 + lVar14 * 0x18) =
                 (dVar20 + dVar3 + dVar4) * 0.3333333333333333;
            *(double *)(local_b8 + 0x10 + lVar14 * 0x18) =
                 (dVar21 + dVar1 + dVar2) * 0.3333333333333333;
          }
          lVar19 = lVar19 + 1;
          puVar12 = *(undefined8 **)(param_1 + 8);
          plVar13 = (longlong *)puVar12[1];
          lVar18 = lVar18 + 0xc;
        } while (lVar19 < (int)plVar13[1]);
      }
    }
  }
  FUN_148277048(param_1,&local_a8,&local_b8,uStack_a0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148277048 FUN_148277048 body=773 status=ok
// SIG undefined FUN_148277048(void)

void FUN_148277048(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_14827734e(&local_b0);
  FUN_14827734e(local_118);
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
  local_1a4 = FUN_148277388(param_1,param_2,param_3,0);
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
  FUN_148277b2c(local_118);
  FUN_148277b2c(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827734e FUN_14827734e body=57 status=ok
// SIG undefined FUN_14827734e(void)

longlong FUN_14827734e(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 148277388 FUN_148277388 body=1954 status=ok
// SIG undefined FUN_148277388(void)

uint FUN_148277388(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
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
    local_9c = FUN_148277388(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_148277388(lVar9,param_2,param_3,iVar19 + param_4);
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
        FUN_148277ba4(&local_98,*(undefined8 *)(lVar9 + 8),
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



// FUNCTION 148277b2c FUN_148277b2c body=120 status=ok
// SIG undefined FUN_148277b2c(void)

void FUN_148277b2c(longlong param_1)

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



// FUNCTION 148277ba4 FUN_148277ba4 body=230 status=ok
// SIG undefined FUN_148277ba4(void)

void FUN_148277ba4(double *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = *(longlong *)param_2[1];
  lVar4 = (longlong)param_3;
  lVar6 = (longlong)*(int *)(lVar1 + lVar4 * 0xc);
  lVar2 = *(longlong *)*param_2;
  dVar14 = *(double *)(lVar2 + lVar6 * 0x18);
  dVar15 = *(double *)(lVar2 + 8 + lVar6 * 0x18);
  dVar16 = *(double *)(lVar2 + 0x10 + lVar6 * 0x18);
  bVar5 = false;
  dVar8 = dVar14;
  dVar10 = dVar15;
  dVar12 = dVar16;
  iVar7 = *(int *)(lVar1 + 4 + lVar4 * 0xc);
  do {
    lVar6 = (longlong)iVar7;
    dVar11 = *(double *)(lVar2 + lVar6 * 0x18);
    dVar9 = dVar11;
    if ((dVar8 <= dVar11) && (dVar9 = dVar8, dVar14 < dVar11)) {
      dVar14 = dVar11;
    }
    dVar8 = *(double *)(lVar2 + 8 + lVar6 * 0x18);
    dVar11 = dVar8;
    if ((dVar10 <= dVar8) && (dVar11 = dVar10, dVar15 < dVar8)) {
      dVar15 = dVar8;
    }
    dVar8 = *(double *)(lVar2 + 0x10 + lVar6 * 0x18);
    dVar13 = dVar8;
    if ((dVar12 <= dVar8) && (dVar13 = dVar12, dVar16 < dVar8)) {
      dVar16 = dVar8;
    }
    bVar3 = !bVar5;
    bVar5 = true;
    dVar8 = dVar9;
    dVar10 = dVar11;
    dVar12 = dVar13;
    iVar7 = *(int *)(lVar1 + 8 + lVar4 * 0xc);
  } while (bVar3);
  *param_1 = dVar9;
  param_1[1] = dVar11;
  param_1[2] = dVar13;
  param_1[3] = dVar14;
  param_1[4] = dVar15;
  param_1[5] = dVar16;
  return;
}



// FUNCTION 148277c8a FUN_148277c8a body=175 status=ok
// SIG undefined FUN_148277c8a(void)

longlong *
FUN_148277c8a(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_148277e9a(local_38,&local_38,param_4);
  uVar2 = uVar1 >> 5 | 0x3800000000000000;
  if (-1 < (longlong)uVar1) {
    uVar2 = uVar1 >> 5;
  }
  *param_2 = uVar2 * 4 + *param_1;
  param_2[1] = (ulonglong)((uint)uVar1 & 0x1f);
  local_48 = *param_2;
  local_40 = param_2[1];
  FUN_148277fd1(local_58,&local_48,param_4,param_5);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148277d3a FUN_148277d3a body=351 status=ok
// SIG undefined FUN_148277d3a(void)

longlong * FUN_148277d3a(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  uVar9 = param_1[3];
  if (uVar9 == 0) {
    uVar7 = 0;
    uVar2 = 0;
    lVar6 = lVar1;
    lVar8 = lVar1;
  }
  else {
    uVar7 = (*param_3 - lVar1) * 8 + param_3[1];
    uVar3 = uVar7 >> 5 | 0xf800000000000000;
    if (-1 < (longlong)uVar7) {
      uVar3 = uVar7 >> 5;
    }
    uVar7 = (ulonglong)((uint)uVar7 & 0x1f);
    uVar2 = (*param_4 - lVar1) * 8 + param_4[1];
    uVar4 = uVar2 >> 5;
    if ((longlong)uVar2 < 0) {
      uVar4 = uVar4 | 0xf800000000000000;
    }
    uVar2 = (ulonglong)((uint)uVar2 & 0x1f);
    lVar6 = lVar1 + uVar4 * 4;
    lVar8 = lVar1 + uVar3 * 4;
  }
  if ((lVar8 != lVar6) || (lVar5 = lVar1, (int)uVar7 != (int)uVar2)) {
    uVar3 = uVar9 >> 5 | 0xf800000000000000;
    if (-1 < (longlong)uVar9) {
      uVar3 = uVar9 >> 5;
    }
    local_70 = lVar1 + uVar3 * 4;
    local_68 = (ulonglong)((uint)uVar9 & 0x1f);
    local_80 = lVar6;
    local_78 = uVar2;
    local_60 = lVar8;
    local_58 = uVar7;
    FUN_14827848f(&local_50);
    FUN_148276c38(param_1,(local_50 - *param_1) * 8 + local_48);
    lVar5 = *param_1;
  }
  uVar7 = uVar7 + (lVar8 - lVar1) * 8;
  uVar9 = uVar7 >> 5 | 0xf800000000000000;
  if (-1 < (longlong)uVar7) {
    uVar9 = uVar7 >> 5;
  }
  *param_2 = lVar5 + uVar9 * 4;
  param_2[1] = (ulonglong)((uint)uVar7 & 0x1f);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148277e9a FUN_148277e9a body=310 status=ok
// SIG undefined FUN_148277e9a(void)

ulonglong FUN_148277e9a(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60 [4];
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (*param_2 - *param_1) * 8 + param_2[1];
  if (param_3 != 0) {
    if ((param_1[3] ^ 0x7fffffffffffffffU) < param_3) {
      FUN_148276d42();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_60[0] = 0;
    FUN_148278142(param_1,param_3 + param_1[3] + 0x1f >> 5);
    uVar2 = param_1[3];
    if (uVar2 == 0) {
      param_1[3] = param_3;
    }
    else {
      uVar4 = (uVar2 >> 5) + 0xf800000000000000;
      if (-1 < (longlong)uVar2) {
        uVar4 = uVar2 >> 5;
      }
      local_50 = *param_1;
      local_40 = local_50 + uVar4 * 4;
      local_38 = (ulonglong)((uint)uVar2 & 0x1f);
      param_3 = param_3 + uVar2;
      param_1[3] = param_3;
      uVar2 = (param_3 >> 5) + 0xf800000000000000;
      if (-1 < (longlong)param_3) {
        uVar2 = param_3 >> 5;
      }
      local_30 = local_50 + uVar2 * 4;
      local_28 = (ulonglong)((uint)param_3 & 0x1f);
      uVar2 = uVar3 >> 5 | 0xf800000000000000;
      if (-1 < (longlong)uVar3) {
        uVar2 = uVar3 >> 5;
      }
      local_50 = local_50 + uVar2 * 4;
      local_48 = (ulonglong)((uint)uVar3 & 0x1f);
      FUN_148278096(local_60);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148277fd1 FUN_148277fd1 body=196 status=ok
// SIG undefined FUN_148277fd1(void)

longlong * FUN_148277fd1(longlong *param_1,undefined4 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  if (param_3 != 0) {
    uVar4 = param_1[1] + param_3;
    if ((ulonglong)param_1[1] < (ulonglong)-param_3 && param_3 < 0) {
      lVar5 = (uVar4 >> 5) * 4 + *param_1 + -0x2000000000000000;
    }
    else {
      lVar5 = (uVar4 >> 3 & 0xfffffffffffffffc) + *param_1;
    }
    *param_1 = lVar5;
    param_1[1] = (ulonglong)((uint)uVar4 & 0x1f);
    local_28 = *param_1;
    local_20 = param_1[1];
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_1482783f3(&local_38,&local_28,*param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148278096 FUN_148278096 body=171 status=ok
// SIG undefined FUN_148278096(void)

void FUN_148278096(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar7 = *param_3;
  lVar8 = param_3[1];
  puVar4 = (uint *)*param_4;
  lVar3 = param_4[1];
  if (lVar2 != lVar8 || lVar1 != lVar7) {
    do {
      bVar9 = lVar8 != 0;
      lVar8 = lVar8 + -1;
      if (!bVar9) {
        lVar8 = 0x1f;
      }
      uVar5 = (ulonglong)bVar9;
      bVar9 = lVar3 != 0;
      lVar3 = lVar3 + -1;
      if (!bVar9) {
        lVar3 = 0x1f;
      }
      puVar4 = puVar4 + ((ulonglong)bVar9 - 1);
      uVar6 = 1 << ((byte)lVar3 & 0x1f);
      if ((*(uint *)(lVar7 + -4 + uVar5 * 4) >> ((uint)lVar8 & 0x1f) & 1) == 0) {
        uVar6 = ~uVar6 & *puVar4;
      }
      else {
        uVar6 = uVar6 | *puVar4;
      }
      lVar7 = lVar7 + uVar5 * 4 + -4;
      *puVar4 = uVar6;
    } while (lVar2 != lVar8 || lVar1 != lVar7);
  }
  *param_4 = puVar4;
  param_4[1] = lVar3;
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return;
}



// FUNCTION 148278142 FUN_148278142 body=146 status=ok
// SIG undefined FUN_148278142(void)

void FUN_148278142(longlong *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *_Dst;
  
  lVar4 = *param_1;
  _Dst = (int *)param_1[1];
  uVar3 = (longlong)_Dst - lVar4 >> 2;
  lVar2 = uVar3 - param_2;
  if (uVar3 < param_2 || lVar2 == 0) {
    if (uVar3 < param_2) {
      if ((ulonglong)(param_1[2] - lVar4 >> 2) < param_2) {
        FUN_1482781d4(param_1,param_2);
        return;
      }
      lVar4 = param_2 - uVar3;
      iVar1 = *param_3;
      if (iVar1 == 0) {
        memset(_Dst,0,lVar4 * 4);
        _Dst = _Dst + lVar4;
      }
      else {
        while (lVar4 != 0) {
          *_Dst = iVar1;
          _Dst = _Dst + 1;
          lVar2 = lVar2 + 1;
          lVar4 = lVar2;
        }
      }
      param_1[1] = (longlong)_Dst;
    }
  }
  else {
    param_1[1] = lVar4 + param_2 * 4;
  }
  return;
}



// FUNCTION 1482781d4 FUN_1482781d4 body=436 status=ok
// SIG undefined FUN_1482781d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1482781d4(longlong *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_148276c94();
  }
  lVar7 = param_1[1] - *param_1;
  uVar3 = param_1[2] - *param_1 >> 2;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_148276ca6(param_1);
  auVar2 = _DAT_149931e80;
  lVar5 = param_2 - (lVar7 >> 2);
  iVar1 = *param_3;
  if (iVar1 == 0) {
    memset((void *)((longlong)_Dst + lVar7),0,lVar5 * 4);
  }
  else if (param_2 != lVar7 >> 2) {
    lVar6 = lVar5 + -1;
    auVar8._8_4_ = (int)lVar6;
    auVar8._0_8_ = lVar6;
    auVar8._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
    uVar3 = 0;
    auVar10 = pmovsxbq(in_XMM1,0x302);
    auVar11 = pmovsxbq(in_XMM2,0x100);
    auVar8 = auVar8 ^ _DAT_149931e80;
    do {
      lVar6 = auVar8._0_8_;
      lVar9 = auVar8._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar3 ^ auVar2._0_8_)) & 1)) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7) = iVar1;
      }
      auVar12._8_4_ = (int)uVar3;
      auVar12._0_8_ = uVar3;
      auVar12._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar2._8_8_) <= lVar9) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 4) = iVar1;
      }
      auVar12 = (auVar12 | auVar10) ^ auVar2;
      if (auVar12._0_8_ <= lVar6) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 8) = iVar1;
      }
      if (auVar12._8_8_ <= lVar9) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 0xc) = iVar1;
      }
      uVar3 = uVar3 + 4;
    } while ((lVar5 + 3U & 0xfffffffffffffffc) != uVar3);
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_14827838a(param_1,_Dst,param_2,uVar4);
  return;
}



// FUNCTION 14827838a FUN_14827838a body=104 status=ok
// SIG undefined FUN_14827838a(void)

void FUN_14827838a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// FUNCTION 1482783f3 FUN_1482783f3 body=156 status=ok
// SIG undefined FUN_1482783f3(void)

void FUN_1482783f3(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = (uint *)*param_1;
  puVar1 = (uint *)*param_2;
  cVar4 = (char)param_3;
  bVar2 = (byte)param_1[1];
  if (puVar3 == puVar1) {
    if (param_1[1] == param_2[1]) {
      return;
    }
    uVar5 = ((0xffffffffU >> (-(char)param_2[1] & 0x1fU)) >> (bVar2 & 0x1f)) << (bVar2 & 0x1f);
  }
  else {
    uVar6 = -1 << (bVar2 & 0x1f);
    uVar5 = 0;
    if (cVar4 != '\0') {
      uVar5 = uVar6;
    }
    *puVar3 = uVar5 | ~uVar6 & *puVar3;
    memset(puVar3 + 1,CONCAT31((int3)((uint)param_3 >> 8),-cVar4),
           (longlong)puVar1 - (longlong)(puVar3 + 1));
    if (param_2[1] == 0) {
      return;
    }
    uVar5 = 0xffffffff >> (-(char)param_2[1] & 0x1fU);
    puVar3 = puVar1;
  }
  uVar6 = 0;
  if (cVar4 != '\0') {
    uVar6 = uVar5;
  }
  *puVar3 = uVar6 | ~uVar5 & *puVar3;
  return;
}



// FUNCTION 14827848f FUN_14827848f body=173 status=ok
// SIG undefined FUN_14827848f(void)

void FUN_14827848f(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  
  puVar7 = (uint *)*param_2;
  uVar4 = param_2[1];
  puVar1 = (uint *)*param_3;
  uVar2 = param_3[1];
  puVar5 = (uint *)*param_4;
  uVar3 = param_4[1];
  if (uVar4 != uVar2 || puVar7 != puVar1) {
    do {
      uVar6 = 1 << ((byte)uVar3 & 0x1f);
      if ((*puVar7 >> ((uint)uVar4 & 0x1f) & 1) == 0) {
        uVar6 = ~uVar6 & *puVar5;
      }
      else {
        uVar6 = uVar6 | *puVar5;
      }
      *puVar5 = uVar6;
      bVar8 = 0x1e < uVar3;
      puVar5 = puVar5 + bVar8;
      uVar3 = uVar3 + 1;
      if (bVar8) {
        uVar3 = 0;
      }
      bVar8 = 0x1e < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar8) {
        uVar4 = 0;
      }
      puVar7 = puVar7 + bVar8;
    } while (uVar4 != uVar2 || puVar7 != puVar1);
  }
  *param_4 = (longlong)puVar5;
  param_4[1] = uVar3;
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return;
}



// FUNCTION 14827853c FUN_14827853c body=181 status=ok
// SIG undefined FUN_14827853c(void)

void FUN_14827853c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694aefc();
  }
  lVar2 = *param_1;
  lVar1 = param_1[2];
  if (lVar2 != 0) {
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(lVar1 - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar5 = lVar1 - lVar2 >> 2;
  uVar4 = (uVar5 >> 1) + uVar5;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar4 = 0x3fffffffffffffff;
  }
  lVar2 = FUN_14627a224(param_1,uVar4);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar4 * 4;
  return;
}



// FUNCTION 1482785f2 FUN_1482785f2 body=178 status=ok
// SIG undefined FUN_1482785f2(void)

void FUN_1482785f2(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  size_t _Size;
  void *pvVar1;
  longlong lVar2;
  
  _Dst = (void *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)_Dst >> 2) < param_3) {
    FUN_14827853c(param_1,param_3);
    pvVar1 = (void *)*param_1;
    memmove(pvVar1,param_2,param_3 * 4);
    pvVar1 = (void *)((longlong)pvVar1 + param_3 * 4);
  }
  else {
    _Size = param_1[1] - (longlong)_Dst;
    lVar2 = param_3 - ((longlong)_Size >> 2);
    if (param_3 < (ulonglong)((longlong)_Size >> 2) || lVar2 == 0) {
      pvVar1 = (void *)((longlong)_Dst + param_3 * 4);
      memmove(_Dst,param_2,param_3 << 2);
    }
    else {
      memmove(_Dst,param_2,_Size);
      pvVar1 = (void *)param_1[1];
      memmove(pvVar1,(void *)((longlong)param_2 + _Size),lVar2 * 4);
      pvVar1 = (void *)((longlong)pvVar1 + lVar2 * 4);
    }
  }
  param_1[1] = pvVar1;
  return;
}



// FUNCTION 1482786a4 FUN_1482786a4 body=332 status=ok
// SIG undefined FUN_1482786a4(void)

undefined4 * FUN_1482786a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482787f2(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (uint)uVar2;
  uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar6;
  local_58 = 0;
  cVar3 = FUN_1482788d8(param_1,uVar6,local_40);
  if (cVar3 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)(local_40 + 2) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148278a04(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482787f2 FUN_1482787f2 body=230 status=ok
// SIG undefined FUN_1482787f2(void)

int * FUN_1482787f2(longlong *param_1,int *param_2)

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



// FUNCTION 1482788d8 FUN_1482788d8 body=162 status=ok
// SIG undefined FUN_1482788d8(void)

void FUN_1482788d8(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14827897a(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_14827894a;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_14827894a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 14827897a FUN_14827897a body=138 status=ok
// SIG undefined FUN_14827897a(void)

void FUN_14827897a(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148278a04 FUN_148278a04 body=458 status=ok
// SIG undefined FUN_148278a04(void)

void FUN_148278a04(longlong *param_1)

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
        uVar2 = *(uint *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar6 * 0x14) + (uVar2 >> 2) + 0x9e3779b9
                      ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 148278bd0 FUN_148278bd0 body=115 status=ok
// SIG undefined FUN_148278bd0(void)

void FUN_148278bd0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148278c44 FUN_148278c44 body=262 status=ok
// SIG undefined FUN_148278c44(void)

void FUN_148278c44(longlong *param_1,longlong *param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [47];
  byte local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_2[1];
  if ((longlong)iVar2 != 0) {
    uVar10 = *(uint *)(param_1 + 1);
    iVar9 = iVar2 + uVar10;
    lVar4 = *param_2;
    lVar7 = 0;
    local_59 = param_3;
    do {
      puVar1 = (undefined4 *)(lVar4 + lVar7);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_14489624a(param_1,iVar3);
      }
      bVar6 = local_59;
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar3 * 0x10);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 << 4 != lVar7);
    if (0 < iVar2) {
      uVar5 = (ulonglong)local_59;
      uVar8 = (ulonglong)(iVar9 - 1);
      do {
        uVar11 = (ulonglong)uVar10;
        iVar2 = (int)param_1[(ulonglong)bVar6 * 2 + 3];
        *(uint *)(param_1 + (ulonglong)bVar6 * 2 + 3) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + (ulonglong)bVar6 * 0x10 + 0x1c) < iVar2 + 1U) {
          FUN_146be54b8(param_1 + uVar5 * 2 + 2,iVar2);
        }
        *(ulonglong *)(param_1[uVar5 * 2 + 2] + (longlong)iVar2 * 8) = uVar8 | uVar11 << 0x20;
        uVar10 = uVar10 + 1;
        uVar8 = uVar11;
      } while ((int)uVar10 < iVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148278d4c FUN_148278d4c body=218 status=ok
// SIG undefined FUN_148278d4c(void)

void FUN_148278d4c(longlong *param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 != 0) {
    uVar8 = *(uint *)(param_1 + 1);
    iVar7 = iVar1 + uVar8;
    lVar3 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_140752556(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 - lVar5 != 0);
    if (0 < iVar1) {
      uVar6 = (ulonglong)(iVar7 - 1);
      do {
        uVar9 = (ulonglong)uVar8;
        iVar1 = (int)param_1[(ulonglong)param_3 * 2 + 3];
        *(uint *)(param_1 + (ulonglong)param_3 * 2 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + (ulonglong)param_3 * 0x10 + 0x1c) < iVar1 + 1U) {
          FUN_146be54b8(param_1 + (ulonglong)param_3 * 2 + 2,iVar1);
        }
        *(ulonglong *)(param_1[(ulonglong)param_3 * 2 + 2] + (longlong)iVar1 * 8) =
             uVar6 | uVar9 << 0x20;
        uVar8 = uVar8 + 1;
        uVar6 = uVar9;
      } while ((int)uVar8 < iVar7);
    }
  }
  return;
}



// FUNCTION 148278e26 FUN_148278e26 body=378 status=ok
// SIG undefined FUN_148278e26(void)

undefined8 FUN_148278e26(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  param_4 = param_4 & 0xffffffff;
  uVar5 = param_3 & 0xffffffff;
  uVar7 = param_3;
  do {
    iVar8 = (int)uVar5;
    lVar4 = 0;
    do {
      if (*(int *)((longlong)iVar8 * 0xc + *(longlong *)**(undefined8 **)(param_1 + 0x48) +
                  lVar4 * 4) == param_2) goto LAB_148278e7a;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    lVar4 = 0xffffffff;
LAB_148278e7a:
    iVar6 = iVar8 * 3 + (int)lVar4;
    *(undefined1 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar6) = 1;
    if (**(char **)(param_1 + 0x20) == '\x01') {
      plVar3 = *(longlong **)(param_1 + 0x28);
      uVar1 = **(undefined4 **)(param_1 + 0x30);
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1406b704c(plVar3,(longlong)iVar2);
        uVar7 = param_3 & 0xffffffff;
      }
      *(ulonglong *)(*plVar3 + (longlong)iVar2 * 8) = CONCAT44(uVar1,iVar6);
    }
    lVar4 = (longlong)iVar8 * 0xc;
    iVar6 = *(int *)(lVar4 + *(longlong *)**(undefined8 **)(param_1 + 0x50) +
                    (longlong)
                    ((int)((uint)(*(int *)(**(longlong **)(*(undefined8 **)(param_1 + 0x50))[1] +
                                           lVar4 + (longlong)(int)param_4 * 4) == param_2) +
                           (int)param_4 + 1) % 3) * 4);
    uVar5 = (ulonglong)iVar6;
    if (((longlong)uVar5 < 0) || (*(char *)(**(longlong **)(param_1 + 0x38) + uVar5) != '\x01')) {
      return 0;
    }
    param_4 = 0;
    do {
      if (*(int *)(uVar5 * 0xc + *(longlong *)**(undefined8 **)(param_1 + 0x40) + param_4 * 4) ==
          iVar8) goto LAB_148278f80;
      param_4 = param_4 + 1;
    } while (param_4 != 3);
    param_4 = 0xffffffff;
LAB_148278f80:
    if (iVar6 == (int)uVar7) {
      return CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
    }
  } while( true );
}



// FUNCTION 148278fa0 FUN_148278fa0 body=378 status=ok
// SIG undefined FUN_148278fa0(void)

undefined8 FUN_148278fa0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  param_4 = param_4 & 0xffffffff;
  uVar5 = param_3 & 0xffffffff;
  uVar7 = param_3;
  do {
    iVar8 = (int)uVar5;
    lVar4 = 0;
    do {
      if (*(int *)((longlong)iVar8 * 0xc + *(longlong *)**(undefined8 **)(param_1 + 0x48) +
                  lVar4 * 4) == param_2) goto LAB_148278ff4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    lVar4 = 0xffffffff;
LAB_148278ff4:
    iVar6 = iVar8 * 3 + (int)lVar4;
    *(undefined1 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar6) = 1;
    if (**(char **)(param_1 + 0x20) == '\x01') {
      plVar3 = *(longlong **)(param_1 + 0x28);
      uVar1 = **(undefined4 **)(param_1 + 0x30);
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1406b704c(plVar3,(longlong)iVar2);
        uVar7 = param_3 & 0xffffffff;
      }
      *(ulonglong *)(*plVar3 + (longlong)iVar2 * 8) = CONCAT44(uVar1,iVar6);
    }
    lVar4 = (longlong)iVar8 * 0xc;
    iVar6 = *(int *)(lVar4 + *(longlong *)**(undefined8 **)(param_1 + 0x50) +
                    (longlong)
                    ((int)((uint)(*(int *)(**(longlong **)(*(undefined8 **)(param_1 + 0x50))[1] +
                                           lVar4 + (longlong)(int)param_4 * 4) == param_2) +
                           (int)param_4 + 1) % 3) * 4);
    uVar5 = (ulonglong)iVar6;
    if (((longlong)uVar5 < 0) || (*(char *)(**(longlong **)(param_1 + 0x38) + uVar5) != '\x01')) {
      return 0;
    }
    param_4 = 0;
    do {
      if (*(int *)(uVar5 * 0xc + *(longlong *)**(undefined8 **)(param_1 + 0x40) + param_4 * 4) ==
          iVar8) goto LAB_1482790fa;
      param_4 = param_4 + 1;
    } while (param_4 != 3);
    param_4 = 0xffffffff;
LAB_1482790fa:
    if (iVar6 == (int)uVar7) {
      return CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
    }
  } while( true );
}



// FUNCTION 14827911a FUN_14827911a body=61 status=ok
// SIG undefined FUN_14827911a(void)

void FUN_14827911a(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_2;
  cVar2 = (**(code **)param_1[1])
                    (((undefined8 *)param_1[1])[1],*param_1,
                     (longlong)iVar1 * 0xc + *(longlong *)param_1[2]);
  *(byte *)(*(longlong *)param_1[3] + (longlong)iVar1) = cVar2 - 1U | 1;
  return;
}



// FUNCTION 148279158 FUN_148279158 body=16 status=ok
// SIG undefined FUN_148279158(void)

void FUN_148279158(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14827916a FUN_14827916a body=70 status=ok
// SIG undefined FUN_14827916a(void)

undefined8 FUN_14827916a(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x3ff < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 * 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1482791b2 FUN_1482791b2 body=187 status=ok
// SIG undefined FUN_1482791b2(void)

void FUN_1482791b2(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 >> 0x3d == 0) {
    uVar4 = param_1[1] - *param_1;
    uVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = (uVar2 >> 1) + uVar2;
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    _Dst = (void *)FUN_1482792ea(uVar3);
    memset((void *)(uVar4 + (longlong)_Dst),0,(param_2 - (uVar4 >> 3)) * 8);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_148279280(param_1,_Dst,param_2,uVar3);
    return;
  }
  FUN_14827926e();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14827926e FUN_14827926e body=16 status=ok
// SIG undefined FUN_14827926e(void)

void FUN_14827926e(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148279280 FUN_148279280 body=104 status=ok
// SIG undefined FUN_148279280(void)

void FUN_148279280(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 1482792ea FUN_1482792ea body=76 status=ok
// SIG undefined FUN_1482792ea(void)

undefined8 FUN_1482792ea(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148279338 FUN_148279338 body=189 status=ok
// SIG undefined FUN_148279338(void)

void FUN_148279338(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 >> 0x3e == 0) {
    uVar3 = param_1[1] - *param_1;
    uVar1 = param_1[2] - *param_1 >> 2;
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x3fffffffffffffff - (uVar1 >> 1) < uVar1) {
      uVar2 = 0x3fffffffffffffff;
    }
    _Dst = (void *)FUN_14827916a(param_1);
    memset((void *)(uVar3 + (longlong)_Dst),0,(param_2 - (uVar3 >> 2)) * 4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_1482793f6(param_1,_Dst,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_148279158();
}



// FUNCTION 1482793f6 FUN_1482793f6 body=104 status=ok
// SIG undefined FUN_1482793f6(void)

void FUN_1482793f6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// FUNCTION 148279460 FUN_148279460 body=16 status=ok
// SIG undefined FUN_148279460(void)

void FUN_148279460(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148279472 FUN_148279472 body=118 status=ok
// SIG undefined FUN_148279472(void)

void FUN_148279472(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_148273bda(lVar1);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1482794ea FUN_1482794ea body=149 status=ok
// SIG undefined FUN_1482794ea(void)

void FUN_1482794ea(double *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    dVar4 = *param_1;
    dVar6 = param_1[1];
    dVar5 = param_1[2];
    dVar7 = param_1[3];
    lVar3 = 0;
    do {
      dVar8 = *(double *)(lVar1 + lVar3);
      if (dVar8 < dVar4) {
        *param_1 = dVar8;
        dVar4 = dVar8;
        dVar8 = *(double *)(lVar1 + lVar3);
      }
      if (dVar5 < dVar8) {
        param_1[2] = dVar8;
        dVar5 = dVar8;
      }
      dVar8 = *(double *)(lVar1 + 8 + lVar3);
      if (dVar8 < dVar6) {
        param_1[1] = dVar8;
        dVar6 = dVar8;
        dVar8 = *(double *)(lVar1 + 8 + lVar3);
      }
      if (dVar7 < dVar8) {
        param_1[3] = dVar8;
        dVar7 = dVar8;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 148279580 FUN_148279580 body=373 status=ok
// SIG undefined FUN_148279580(void)

ulonglong FUN_148279580(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  double *pdVar5;
  longlong lVar6;
  size_t _Size;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  
  if (param_3 == '\0') {
LAB_14827959d:
    if (param_4 != '\0') {
      iVar2 = (int)param_2[1];
      if ((longlong)iVar2 < 1) {
        bVar3 = false;
      }
      else {
        lVar6 = *param_2;
        iVar8 = iVar2 + -1;
        pdVar5 = (double *)(lVar6 + 8);
        dVar10 = 0.0;
        lVar9 = 0;
        do {
          dVar10 = dVar10 + (*(double *)(lVar6 + (longlong)iVar8 * 0x10) * *pdVar5 -
                            pdVar5[-1] * *(double *)(lVar6 + 8 + (longlong)iVar8 * 0x10));
          iVar8 = (int)lVar9;
          lVar9 = lVar9 + 1;
          pdVar5 = pdVar5 + 2;
        } while (iVar2 != lVar9);
        bVar3 = dVar10 * 0.5 < 0.0;
      }
      if ((bool)*(char *)(param_1 + 0x10) == bVar3) goto LAB_148279610;
    }
    iVar2 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
      FUN_148279f30((longlong *)(param_1 + 0x18),iVar2);
    }
    lVar9 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar9 + lVar6);
    *(undefined8 *)(lVar9 + lVar6) = 0;
    iVar2 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(lVar9 + 8 + lVar6) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      _Size = 0;
    }
    else {
      FUN_144721d4c(puVar1,iVar2,0);
      _Size = (longlong)iVar2 << 4;
      memcpy((void *)*puVar1,_Src,_Size);
    }
    uVar7 = CONCAT71((int7)(_Size >> 8),1);
  }
  else {
    cVar4 = FUN_1482796f6(param_1,param_2);
    if (cVar4 != '\0') {
      if ((longlong)*(int *)(param_1 + 0x20) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x18);
        lVar6 = (longlong)*(int *)(param_1 + 0x20) << 4;
        do {
          cVar4 = FUN_14827978a(param_2,lVar9);
          if (cVar4 != '\0') goto LAB_148279610;
          lVar9 = lVar9 + 0x10;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
      goto LAB_14827959d;
    }
LAB_148279610:
    uVar7 = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1482796f6 FUN_1482796f6 body=146 status=ok
// SIG undefined FUN_1482796f6(void)

ulonglong FUN_1482796f6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[1];
  if (0 < (longlong)(int)lVar1) {
    lVar4 = 0;
    do {
      local_40 = *param_1;
      local_38 = *(undefined4 *)(param_1 + 1);
      cVar2 = FUN_148279d4f(&local_40,*param_2 + lVar4);
      if (cVar2 == '\0') {
        uVar3 = 0;
        goto LAB_148279766;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar1 * 0x10 != lVar4);
  }
  uVar3 = FUN_148279ab6(param_1,param_2);
  uVar3 = uVar3 ^ 1;
LAB_148279766:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827978a FUN_14827978a body=810 status=ok
// SIG undefined FUN_14827978a(void)

undefined8 FUN_14827978a(longlong *param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 local_100 [40];
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar7 = (ulonglong)(int)param_1[1];
  dVar14 = -1.79769313486232e+308;
  dVar13 = 1.79769313486232e+308;
  dVar17 = 1.79769313486232e+308;
  dVar16 = 1.79769313486232e+308;
  dVar15 = -1.79769313486232e+308;
  dVar12 = -1.79769313486232e+308;
  if (uVar7 != 0) {
    pdVar3 = (double *)*param_1;
    pdVar4 = pdVar3 + uVar7 * 2;
    uVar22 = 0xffffffff;
    uVar24 = 0x7fefffff;
    uVar18 = 0xffffffff;
    uVar20 = 0xffefffff;
    uVar19 = uVar18;
    uVar21 = uVar20;
    uVar23 = uVar22;
    uVar25 = uVar24;
    do {
      dVar15 = *pdVar3;
      dVar12 = pdVar3[1];
      dVar17 = dVar15;
      if ((double)CONCAT44(uVar25,uVar23) <= dVar15) {
        dVar17 = (double)CONCAT44(uVar25,uVar23);
      }
      if (dVar15 <= (double)CONCAT44(uVar21,uVar19)) {
        dVar15 = (double)CONCAT44(uVar21,uVar19);
      }
      dVar16 = dVar12;
      if ((double)CONCAT44(uVar24,uVar22) <= dVar12) {
        dVar16 = (double)CONCAT44(uVar24,uVar22);
      }
      if (dVar12 <= (double)CONCAT44(uVar20,uVar18)) {
        dVar12 = (double)CONCAT44(uVar20,uVar18);
      }
      pdVar3 = pdVar3 + 2;
      uVar18 = SUB84(dVar12,0);
      uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar19 = SUB84(dVar15,0);
      uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar22 = SUB84(dVar16,0);
      uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar23 = SUB84(dVar17,0);
      uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
    } while (pdVar3 != pdVar4);
  }
  lVar8 = (longlong)(int)param_2[1];
  uVar19 = 0xffffffff;
  uVar21 = 0x7fefffff;
  uVar23 = 0xffffffff;
  uVar25 = 0xffefffff;
  if (lVar8 != 0) {
    pdVar4 = (double *)*param_2;
    pdVar3 = pdVar4 + lVar8 * 2;
    uVar28 = 0xffffffff;
    uVar29 = 0x7fefffff;
    uVar26 = 0xffffffff;
    uVar27 = 0xffefffff;
    uVar18 = uVar26;
    uVar20 = uVar27;
    uVar22 = uVar28;
    uVar24 = uVar29;
    do {
      dVar14 = *pdVar4;
      dVar1 = pdVar4[1];
      uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar13 = dVar14;
      if ((double)CONCAT44(uVar29,uVar28) <= dVar14) {
        dVar13 = (double)CONCAT44(uVar29,uVar28);
      }
      if (dVar14 <= (double)CONCAT44(uVar27,uVar26)) {
        dVar14 = (double)CONCAT44(uVar27,uVar26);
      }
      uVar19 = SUB84(dVar1,0);
      uVar21 = uVar25;
      if ((double)CONCAT44(uVar24,uVar22) <= dVar1) {
        uVar19 = uVar22;
        uVar21 = uVar24;
      }
      uVar23 = SUB84(dVar1,0);
      if (dVar1 <= (double)CONCAT44(uVar20,uVar18)) {
        uVar23 = uVar18;
        uVar25 = uVar20;
      }
      pdVar4 = pdVar4 + 2;
      uVar26 = SUB84(dVar14,0);
      uVar27 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar28 = SUB84(dVar13,0);
      uVar29 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar18 = uVar23;
      uVar20 = uVar25;
      uVar22 = uVar19;
      uVar24 = uVar21;
    } while (pdVar4 != pdVar3);
  }
  uVar5 = 0;
  if ((((dVar17 <= dVar14) && (dVar13 <= dVar15)) &&
      (dVar16 < (double)CONCAT44(uVar25,uVar23) || dVar16 == (double)CONCAT44(uVar25,uVar23))) &&
     (uVar5 = 0,
     (double)CONCAT44(uVar21,uVar19) < dVar12 || (double)CONCAT44(uVar21,uVar19) == dVar12)) {
    if (0 < (int)param_2[1]) {
      lVar11 = 0;
      do {
        local_d8 = *param_1;
        local_d0 = (undefined4)param_1[1];
        cVar2 = FUN_148279d4f(&local_d8,*param_2 + lVar11);
        if (cVar2 != '\0') goto LAB_148279ab1;
        lVar11 = lVar11 + 0x10;
      } while (lVar8 * 0x10 != lVar11);
      uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    }
    uVar6 = (uint)uVar7;
    if (0 < (int)uVar6) {
      lVar8 = 0;
      do {
        local_d8 = *param_2;
        local_d0 = (undefined4)param_2[1];
        cVar2 = FUN_148279d4f(&local_d8,*param_1 + lVar8);
        if (cVar2 != '\0') goto LAB_148279ab1;
        lVar8 = lVar8 + 0x10;
      } while ((uVar7 & 0xffffffff) << 4 != lVar8);
      uVar6 = *(uint *)(param_1 + 1);
    }
    if (uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      local_108 = (ulonglong)uVar6;
      uVar7 = 0;
      do {
        uVar9 = uVar7 + 1;
        FUN_148279e70(&local_d8,uVar7 * 0x10 + *param_1,
                      ((longlong)
                       ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
                       (longlong)(int)param_1[1] & 0xffffffffU) * 0x10 + *param_1);
        uVar6 = *(uint *)(param_2 + 1);
        iVar10 = 1;
        lVar8 = 0;
        while ((ulonglong)uVar6 << 4 != lVar8) {
          FUN_148279e70(local_100,*param_2 + lVar8,
                        ((longlong)iVar10 % (longlong)(int)param_2[1] & 0xffffffffU) * 0x10 +
                        *param_2);
          cVar2 = FUN_146c6864c(&local_d8,local_100,0x3cb0000000000000,0);
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 0x10;
          if (cVar2 != '\0') goto LAB_148279ab1;
        }
        uVar5 = 0;
        uVar7 = uVar9;
      } while (uVar9 != local_108);
    }
  }
LAB_148279a4e:
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_148279ab1:
  uVar5 = 1;
  goto LAB_148279a4e;
}



// FUNCTION 148279ab6 FUN_148279ab6 body=664 status=ok
// SIG undefined FUN_148279ab6(void)

undefined8 FUN_148279ab6(longlong *param_1,longlong *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *(uint *)(param_1 + 1);
  dVar14 = -1.79769313486232e+308;
  dVar13 = 1.79769313486232e+308;
  dVar17 = 1.79769313486232e+308;
  dVar16 = 1.79769313486232e+308;
  dVar15 = -1.79769313486232e+308;
  dVar12 = -1.79769313486232e+308;
  if ((longlong)(int)uVar2 != 0) {
    pdVar7 = (double *)*param_1;
    pdVar5 = pdVar7 + (longlong)(int)uVar2 * 2;
    uVar22 = 0xffffffff;
    uVar24 = 0x7fefffff;
    uVar18 = 0xffffffff;
    uVar20 = 0xffefffff;
    uVar19 = uVar18;
    uVar21 = uVar20;
    uVar23 = uVar22;
    uVar25 = uVar24;
    do {
      dVar15 = *pdVar7;
      dVar12 = pdVar7[1];
      dVar17 = dVar15;
      if ((double)CONCAT44(uVar25,uVar23) <= dVar15) {
        dVar17 = (double)CONCAT44(uVar25,uVar23);
      }
      if (dVar15 <= (double)CONCAT44(uVar21,uVar19)) {
        dVar15 = (double)CONCAT44(uVar21,uVar19);
      }
      dVar16 = dVar12;
      if ((double)CONCAT44(uVar24,uVar22) <= dVar12) {
        dVar16 = (double)CONCAT44(uVar24,uVar22);
      }
      if (dVar12 <= (double)CONCAT44(uVar20,uVar18)) {
        dVar12 = (double)CONCAT44(uVar20,uVar18);
      }
      pdVar7 = pdVar7 + 2;
      uVar18 = SUB84(dVar12,0);
      uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar19 = SUB84(dVar15,0);
      uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar22 = SUB84(dVar16,0);
      uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar23 = SUB84(dVar17,0);
      uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
    } while (pdVar7 != pdVar5);
  }
  uVar19 = 0xffffffff;
  uVar21 = 0x7fefffff;
  uVar23 = 0xffffffff;
  uVar25 = 0xffefffff;
  if ((longlong)(int)param_2[1] != 0) {
    pdVar7 = (double *)*param_2;
    pdVar5 = pdVar7 + (longlong)(int)param_2[1] * 2;
    uVar28 = 0xffffffff;
    uVar29 = 0x7fefffff;
    uVar26 = 0xffffffff;
    uVar27 = 0xffefffff;
    uVar18 = uVar26;
    uVar20 = uVar27;
    uVar22 = uVar28;
    uVar24 = uVar29;
    do {
      dVar14 = *pdVar7;
      dVar1 = pdVar7[1];
      uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar13 = dVar14;
      if ((double)CONCAT44(uVar29,uVar28) <= dVar14) {
        dVar13 = (double)CONCAT44(uVar29,uVar28);
      }
      if (dVar14 <= (double)CONCAT44(uVar27,uVar26)) {
        dVar14 = (double)CONCAT44(uVar27,uVar26);
      }
      uVar19 = SUB84(dVar1,0);
      uVar21 = uVar25;
      if ((double)CONCAT44(uVar24,uVar22) <= dVar1) {
        uVar19 = uVar22;
        uVar21 = uVar24;
      }
      uVar23 = SUB84(dVar1,0);
      if (dVar1 <= (double)CONCAT44(uVar20,uVar18)) {
        uVar23 = uVar18;
        uVar25 = uVar20;
      }
      pdVar7 = pdVar7 + 2;
      uVar26 = SUB84(dVar14,0);
      uVar27 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar28 = SUB84(dVar13,0);
      uVar29 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar18 = uVar23;
      uVar20 = uVar25;
      uVar22 = uVar19;
      uVar24 = uVar21;
    } while (pdVar7 != pdVar5);
  }
  uVar6 = 0;
  if (((((ulonglong)uVar2 != 0) && (dVar17 <= dVar14)) && (dVar13 <= dVar15)) &&
     ((uVar6 = 0,
      dVar16 < (double)CONCAT44(uVar25,uVar23) || dVar16 == (double)CONCAT44(uVar25,uVar23) &&
      ((double)CONCAT44(uVar21,uVar19) < dVar12 || (double)CONCAT44(uVar21,uVar19) == dVar12)))) {
    uVar8 = 0;
    do {
      uVar9 = uVar8 + 1;
      FUN_148279e70(local_d8,uVar8 * 0x10 + *param_1,
                    ((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff)
                     % (longlong)(int)param_1[1] & 0xffffffffU) * 0x10 + *param_1);
      uVar3 = *(uint *)(param_2 + 1);
      iVar10 = 1;
      lVar11 = 0;
      while ((ulonglong)uVar3 << 4 != lVar11) {
        FUN_148279e70(local_100,*param_2 + lVar11,
                      ((longlong)iVar10 % (longlong)(int)param_2[1] & 0xffffffffU) * 0x10 + *param_2
                     );
        cVar4 = FUN_146c6864c(local_d8,local_100,0x3cb0000000000000,0);
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 0x10;
        if (cVar4 != '\0') {
          uVar6 = 1;
          goto LAB_148279cec;
        }
      }
      uVar8 = uVar9;
    } while (uVar9 != uVar2);
    uVar6 = 0;
  }
LAB_148279cec:
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148279d4f FUN_148279d4f body=288 status=ok
// SIG undefined FUN_148279d4f(void)

ulonglong FUN_148279d4f(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar6 = 0;
  if (((ulonglong)uVar4 != 0) && (0 < (int)uVar4)) {
    lVar5 = *param_1;
    lVar8 = (ulonglong)uVar4 * 0x10;
    dVar1 = param_2[1];
    lVar7 = 0;
    dVar9 = *(double *)(lVar5 + -0x10 + lVar8);
    dVar10 = *(double *)(lVar5 + -8 + lVar8);
    do {
      dVar2 = *(double *)(lVar5 + lVar7);
      dVar3 = *(double *)(lVar5 + 8 + lVar7);
      if (dVar10 <= dVar1) {
        if ((dVar1 < dVar3) &&
           (0.0 < (dVar2 - dVar9) * (dVar1 - dVar10) - (dVar3 - dVar10) * (*param_2 - dVar9))) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
      }
      else if ((dVar3 <= dVar1) &&
              ((dVar2 - dVar9) * (dVar1 - dVar10) - (dVar3 - dVar10) * (*param_2 - dVar9) < 0.0)) {
        uVar6 = (ulonglong)((int)uVar6 - 1);
      }
      lVar7 = lVar7 + 0x10;
      dVar9 = dVar2;
      dVar10 = dVar3;
    } while (lVar8 != lVar7);
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(int)uVar6 != 0);
  }
  return uVar6;
}



// FUNCTION 148279e70 FUN_148279e70 body=192 status=ok
// SIG undefined FUN_148279e70(void)

void FUN_148279e70(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = DAT_14c8463f8;
  *param_1 = DAT_14c8463f0;
  param_1[1] = dVar1;
  param_1[2] = 1.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  dVar1 = param_2[1];
  dVar2 = param_3[1];
  *param_1 = (*param_2 + *param_3) * 0.5;
  param_1[1] = (dVar1 + dVar2) * 0.5;
  dVar2 = param_3[1] - param_2[1];
  dVar1 = *param_3 - *param_2;
  dVar3 = SQRT(dVar1 * dVar1 + dVar2 * dVar2);
  if (0.0 < dVar3) {
    dVar1 = dVar1 * (1.0 / dVar3);
    dVar2 = dVar2 * (1.0 / dVar3);
  }
  else {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  param_1[2] = dVar1;
  param_1[3] = dVar2;
  param_1[4] = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar3 * 0.5));
  return;
}



// FUNCTION 148279f30 FUN_148279f30 body=132 status=ok
// SIG undefined FUN_148279f30(void)

void FUN_148279f30(longlong param_1,int param_2)

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



// FUNCTION 148279fb6 FUN_148279fb6 body=147 status=ok
// SIG undefined FUN_148279fb6(void)

void FUN_148279fb6(longlong param_1,int param_2)

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



// FUNCTION 14827a04a FUN_14827a04a body=82 status=ok
// SIG undefined FUN_14827a04a(void)

void FUN_14827a04a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14827a09e FUN_14827a09e body=68 status=ok
// SIG undefined FUN_14827a09e(void)

void FUN_14827a09e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_148273bb4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14827a0e4(param_1,param_2);
  return;
}



// FUNCTION 14827a0e4 FUN_14827a0e4 body=113 status=ok
// SIG undefined FUN_14827a0e4(void)

void FUN_14827a0e4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 14827a155 FUN_14827a155 body=52 status=ok
// SIG undefined FUN_14827a155(void)

void FUN_14827a155(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148268772(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 14827a18a FUN_14827a18a body=75 status=ok
// SIG undefined FUN_14827a18a(void)

void FUN_14827a18a(longlong param_1)

{
  FUN_14827a1d6(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  FUN_14827a21e(param_1 + 0x50);
  FUN_1482748da(param_1 + 0x38);
  FUN_14827686e(param_1 + 0x20);
  return;
}



// FUNCTION 14827a1d6 FUN_14827a1d6 body=72 status=ok
// SIG undefined FUN_14827a1d6(void)

void FUN_14827a1d6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  if (lVar2 != lVar1) {
    do {
      FUN_148274782(lVar2 + 0x30);
      FUN_1482748da(lVar2 + 0x18);
      FUN_1482748da(lVar2);
      lVar2 = lVar2 + 0x58;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}



// FUNCTION 14827a21e FUN_14827a21e body=136 status=ok
// SIG undefined FUN_14827a21e(void)

void FUN_14827a21e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_148274782(lVar1 + 0x30);
        FUN_1482748da(lVar1 + 0x18);
        FUN_1482748da(lVar1);
        lVar1 = lVar1 + 0x58;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14827a2a8 FUN_14827a2a8 body=469 status=ok
// SIG undefined FUN_14827a2a8(void)

double * FUN_14827a2a8(longlong param_1,double *param_2)

{
  void *_Src;
  double *pdVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [40];
  double *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  param_2[2] = -1.79769313486232e+308;
  param_2[3] = -1.79769313486232e+308;
  FUN_1482794ea(param_2,param_1);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      local_80 = (double *)0x0;
      local_78 = *(int *)(puVar3 + 1);
      lVar2 = (longlong)local_78;
      _Src = (void *)*puVar3;
      if (lVar2 == 0) {
        local_74 = 0;
LAB_14827a3e9:
        dVar6 = -1.79769313486232e+308;
        dVar8 = -1.79769313486232e+308;
        dVar11 = 1.79769313486232e+308;
        dVar10 = 1.79769313486232e+308;
      }
      else {
        FUN_144721d4c(&local_80,local_78,0);
        memcpy(local_80,_Src,lVar2 << 4);
        if ((longlong)local_78 == 0) goto LAB_14827a3e9;
        pdVar1 = local_80;
        dVar5 = -1.79769313486232e+308;
        dVar7 = -1.79769313486232e+308;
        dVar9 = 1.79769313486232e+308;
        dVar12 = 1.79769313486232e+308;
        do {
          dVar8 = *pdVar1;
          dVar6 = pdVar1[1];
          dVar10 = dVar8;
          if (dVar9 <= dVar8) {
            dVar10 = dVar9;
          }
          if (dVar8 <= dVar7) {
            dVar8 = dVar7;
          }
          dVar11 = dVar6;
          if (dVar12 <= dVar6) {
            dVar11 = dVar12;
          }
          if (dVar6 <= dVar5) {
            dVar6 = dVar5;
          }
          pdVar1 = pdVar1 + 2;
          dVar5 = dVar6;
          dVar7 = dVar8;
          dVar9 = dVar10;
          dVar12 = dVar11;
        } while (pdVar1 != local_80 + (longlong)local_78 * 2);
      }
      dVar5 = *param_2;
      if (dVar10 <= *param_2) {
        dVar5 = dVar10;
      }
      dVar10 = param_2[1];
      if (dVar11 <= param_2[1]) {
        dVar10 = dVar11;
      }
      *param_2 = dVar5;
      param_2[1] = dVar10;
      dVar11 = param_2[2];
      if (param_2[2] <= dVar8) {
        dVar11 = dVar8;
      }
      param_2[2] = dVar11;
      dVar8 = param_2[3];
      if (param_2[3] <= dVar6) {
        dVar8 = dVar6;
      }
      param_2[3] = dVar8;
      if (local_80 != (double *)0x0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14827a47e FUN_14827a47e body=95 status=ok
// SIG undefined FUN_14827a47e(void)

void FUN_14827a47e(longlong *param_1,undefined8 *param_2)

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
    FUN_148279fb6(param_1,iVar2);
  }
  FUN_14827a155((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14827a4de FUN_14827a4de body=476 status=ok
// SIG undefined FUN_14827a4de(void)

void FUN_14827a4de(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  longlong *param_6)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_b8 [32];
  double local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar1 = *param_5;
  local_78 = *param_3 / dVar1;
  dVar3 = (*param_4 / dVar1) * 0.25;
  dVar9 = dVar3 * dVar3;
  local_70 = dVar3 * -2.0 * (dVar9 * -4.0 + local_78) + *param_2 / dVar1;
  local_68 = *param_1 / dVar1 - (*param_2 / dVar1 - (dVar9 * -3.0 + local_78) * dVar3) * dVar3;
  local_78 = dVar9 * -6.0 + local_78;
  local_80 = 0;
  local_88 = (longlong *)FUN_14001cc68(0x30,0x10);
  *local_88 = (longlong)local_88;
  local_88[1] = (longlong)local_88;
  local_88[2] = (longlong)local_88;
  *(undefined2 *)(local_88 + 3) = 0x101;
  FUN_14827a9e0(&local_68,&local_70,&local_78,&local_88);
  lVar2 = *param_6;
  FUN_14827bb66(*(undefined8 *)(lVar2 + 8));
  plVar4 = local_88;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_6[1] = 0;
  plVar7 = (longlong *)*local_88;
  if (plVar7 != local_88) {
    do {
      local_98 = (double)plVar7[4] - dVar3;
      local_90 = (undefined4)plVar7[5];
      FUN_14827bb9c(param_6,local_60,&local_98);
      plVar6 = plVar7;
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x19) == '\0') {
        do {
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar7;
        } while (*(char *)(*plVar7 + 0x19) == '\0');
      }
      else {
        do {
          plVar7 = (longlong *)plVar6[1];
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') break;
          bVar8 = plVar6 == (longlong *)plVar7[2];
          plVar6 = plVar7;
        } while (bVar8);
      }
    } while (plVar7 != plVar4);
  }
  FUN_14827bb66(plVar4[1]);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1400020a8(plVar4);
  return;
}



// FUNCTION 14827a6bc FUN_14827a6bc body=604 status=ok
// SIG undefined FUN_14827a6bc(void)

void FUN_14827a6bc(longlong param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined4 *param_6)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  double local_a8 [4];
  double local_88 [4];
  double local_68 [4];
  double local_48 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = *(double *)(param_1 + 0x18);
  local_a8[1] = (double)*(undefined8 *)(param_1 + 0x20);
  local_a8[2] = (double)*(undefined8 *)(param_1 + 0x28);
  lVar2 = 0;
  do {
    local_a8[lVar2] = local_a8[lVar2] * param_4;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_88[2] = param_3[2];
  local_88[0] = *param_3;
  local_88[1] = param_3[1];
  lVar2 = 0;
  do {
    local_88[lVar2] = local_a8[lVar2] + local_88[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  lVar2 = 0;
  do {
    local_68[lVar2] = local_88[lVar2] + local_68[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  param_5[2] = local_68[2];
  *param_5 = local_68[0];
  param_5[1] = local_68[1];
  dVar1 = param_2[3] * local_88[0];
  lVar2 = 1;
  do {
    dVar1 = dVar1 + param_2[lVar2 + 3] * local_88[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_48[2] = param_2[5];
  local_48[0] = param_2[3];
  local_48[1] = param_2[4];
  lVar2 = 0;
  do {
    local_48[lVar2] = local_48[lVar2] * dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar2 = 0;
  do {
    local_88[lVar2] = local_88[lVar2] - local_48[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  dVar1 = SQRT(local_88[2] * local_88[2] + local_88[1] * local_88[1] + local_88[0] * local_88[0]);
  if (dVar1 <= 0.0) {
    local_88[0] = 0.0;
    local_88[1] = 0.0;
    local_88[2] = 0.0;
  }
  else {
    lVar2 = 0;
    do {
      local_88[lVar2] = local_88[lVar2] * (1.0 / dVar1);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  dVar1 = param_2[6];
  lVar2 = 0;
  do {
    local_88[lVar2] = local_88[lVar2] * dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_18 = param_2[2];
  local_28 = *param_2;
  uStack_20 = param_2[1];
  lVar2 = 0;
  do {
    (&local_28)[lVar2] = local_88[lVar2] + (double)(&local_28)[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  *(double *)(param_6 + 4) = local_18;
  *param_6 = (undefined4)local_28;
  param_6[1] = local_28._4_4_;
  param_6[2] = (undefined4)uStack_20;
  param_6[3] = uStack_20._4_4_;
  if ((local_8 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14827a919 FUN_14827a919 body=199 status=ok
// SIG undefined FUN_14827a919(void)

void FUN_14827a919(undefined8 *param_1,ulonglong *param_2)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  uVar6 = (undefined4)(*param_2 & 0x7fffffffffffffff);
  uVar7 = (undefined4)((*param_2 & 0x7fffffffffffffff) >> 0x20);
  uVar3 = 0;
  uVar4 = 1;
  do {
    dVar8 = ABS((double)param_2[uVar4]);
    if ((double)CONCAT44(uVar7,uVar6) <= dVar8 && dVar8 != (double)CONCAT44(uVar7,uVar6)) {
      uVar3 = uVar4 & 0xffffffff;
    }
    if (dVar8 <= (double)CONCAT44(uVar7,uVar6)) {
      dVar8 = (double)CONCAT44(uVar7,uVar6);
    }
    uVar4 = uVar4 + 1;
    uVar6 = SUB84(dVar8,0);
    uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  } while (uVar4 != 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = (int)uVar3;
  iVar5 = 0;
  if (iVar2 + 1 != 3) {
    iVar5 = iVar2 + 1;
  }
  param_1[iVar2] = param_2[iVar5];
  dVar8 = (double)param_2[iVar2];
  param_1[iVar5] = -dVar8;
  dVar1 = (double)param_1[iVar2];
  dVar8 = 1.0 / SQRT(dVar1 * dVar1 + dVar8 * dVar8);
  param_1[iVar2] = dVar1 * dVar8;
  param_1[iVar5] = dVar8 * (double)param_1[iVar5];
  return;
}



// FUNCTION 14827a9e0 FUN_14827a9e0 body=2011 status=ok
// SIG undefined FUN_14827a9e0(void)

void FUN_14827a9e0(double *param_1,double *param_2,double *param_3,longlong *param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  undefined4 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0 [2];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar10 = *param_1;
  if ((dVar10 != 0.0) || (NAN(dVar10))) {
    dVar1 = *param_2;
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_108);
    }
    dVar13 = dVar1 * dVar1;
    dVar8 = *param_3;
    dVar9 = dVar8 * dVar8;
    dVar12 = (dVar13 * -27.0 + (dVar10 * 36.0 - dVar9) * dVar8 * 4.0) * dVar13 +
             ((dVar10 * -8.0 + dVar9) * dVar9 + dVar10 * dVar10 * 16.0) * dVar10 * 16.0;
    dVar11 = dVar10 * 4.0 - dVar9;
    if (dVar12 <= 0.0) {
      if (0.0 <= dVar12) {
        dVar9 = dVar10 * 12.0 + dVar9;
        if ((0.0 < dVar11) || (0.0 < dVar8)) {
          local_c0 = (dVar9 * -dVar1) / (dVar13 * 9.0 + dVar8 * -2.0 * dVar11);
          local_b8 = CONCAT44(local_b8._4_4_,2);
        }
        else {
          if ((dVar9 != 0.0) || (NAN(dVar9))) {
            dVar1 = (dVar9 * -dVar1) / (dVar13 * 9.0 + dVar8 * -2.0 * dVar11);
            dVar9 = dVar1 + dVar1;
            dVar10 = dVar9 * dVar9 + (dVar1 * 3.0 * dVar1 + dVar8) * -4.0;
            if (dVar10 < 0.0) {
              dVar10 = sqrt(dVar10);
            }
            else {
              dVar10 = SQRT(dVar10);
            }
            local_b8._0_4_ = 2;
            local_c0 = dVar1;
            FUN_14827bb9c(param_4,local_b0,&local_c0);
            local_b8._0_4_ = 1;
            local_c0 = (-dVar9 - dVar10) * 0.5;
            FUN_14827bb9c(param_4,local_b0,&local_c0);
            local_c0 = (dVar10 - dVar9) * 0.5;
          }
          else {
            local_c0 = (dVar1 * -3.0) / (dVar8 * 4.0);
            dVar10 = local_c0 * -3.0;
            local_b8._0_4_ = 3;
            FUN_14827bb9c(param_4,local_b0,&local_c0);
            local_c0 = dVar10;
          }
          local_b8 = CONCAT44(local_b8._4_4_,1);
        }
        goto LAB_14827b11f;
      }
      local_b8 = 0;
      local_c0 = (double)FUN_14001cc68(0x30,0x10);
      *(double *)local_c0 = local_c0;
      *(double *)((longlong)local_c0 + 8) = local_c0;
      *(double *)((longlong)local_c0 + 0x10) = local_c0;
      *(undefined2 *)((longlong)local_c0 + 0x18) = 0x101;
      local_b0[0] = -8.0;
      local_e0 = *param_3 * 4.0;
      local_c8 = *param_1 * 8.0;
      local_d0 = *param_1 * -4.0 * *param_3 + dVar13;
      local_e8 = &local_c0;
      FUN_14827b890(&local_d0,&local_c8,&local_e0,local_b0);
      dVar8 = local_c0;
      local_b0[0] = local_c0;
      FUN_14827bb08(local_b0);
      dVar10 = *(double *)((longlong)local_b0[0] + 0x20);
      dVar9 = (dVar10 + dVar10) - *param_3;
      dVar1 = 0.0;
      if (0.0 <= dVar9) {
        dVar1 = dVar9;
      }
      dVar13 = dVar10 * dVar10 - *param_1;
      dVar12 = 0.0;
      if (0.0 <= dVar13) {
        dVar12 = dVar13;
      }
      dVar9 = (dVar10 - SQRT(dVar12)) * -4.0 + dVar9;
      dVar10 = 0.0;
      if (0.0 <= dVar9) {
        dVar10 = dVar9;
      }
      dVar1 = (double)(-(ulonglong)(0.0 < *param_2) & (ulonglong)-SQRT(dVar1) |
                      ~-(ulonglong)(0.0 < *param_2) & (ulonglong)SQRT(dVar1));
      local_e0 = (dVar1 - SQRT(dVar10)) * 0.5;
      local_d8 = 1;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      local_d8 = 1;
      local_e0 = (dVar1 + SQRT(dVar10)) * 0.5;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      FUN_14827bb66(*(undefined8 *)((longlong)dVar8 + 8));
    }
    else {
      if ((0.0 <= dVar8) || (0.0 <= dVar11)) goto LAB_14827ab2e;
      local_b8 = 0;
      local_c0 = (double)FUN_14001cc68(0x30,0x10);
      *(double *)local_c0 = local_c0;
      *(double *)((longlong)local_c0 + 8) = local_c0;
      *(double *)((longlong)local_c0 + 0x10) = local_c0;
      *(undefined2 *)((longlong)local_c0 + 0x18) = 0x101;
      local_b0[0] = -8.0;
      local_e0 = *param_3 * 4.0;
      local_c8 = *param_1 * 8.0;
      local_d0 = *param_1 * -4.0 * *param_3 + dVar13;
      local_e8 = &local_c0;
      FUN_14827b890(&local_d0,&local_c8,&local_e0,local_b0);
      dVar8 = local_c0;
      local_b0[0] = local_c0;
      FUN_14827bb08(local_b0);
      dVar10 = *(double *)((longlong)local_b0[0] + 0x20);
      dVar1 = (dVar10 + dVar10) - *param_3;
      if (dVar1 < 0.0) {
        dVar9 = sqrt(dVar1);
      }
      else {
        dVar9 = SQRT(dVar1);
      }
      dVar12 = dVar10 * dVar10 - *param_1;
      dVar13 = 0.0;
      if (0.0 <= dVar12) {
        dVar13 = dVar12;
      }
      dVar11 = (double)(~-(ulonglong)(0.0 < *param_2) & (ulonglong)-SQRT(dVar13) |
                       -(ulonglong)(0.0 < *param_2) & (ulonglong)SQRT(dVar13));
      dVar12 = (dVar10 + dVar11) * -4.0 + dVar1;
      dVar13 = 0.0;
      if (0.0 <= dVar12) {
        dVar13 = dVar12;
      }
      dVar1 = (dVar10 - dVar11) * -4.0 + dVar1;
      dVar10 = 0.0;
      if (0.0 <= dVar1) {
        dVar10 = dVar1;
      }
      local_e0 = (dVar9 - SQRT(dVar13)) * 0.5;
      local_d8 = 1;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      local_d8 = 1;
      local_e0 = (SQRT(dVar13) + dVar9) * 0.5;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      local_d8 = 1;
      local_e0 = (-dVar9 - SQRT(dVar10)) * 0.5;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      local_d8 = 1;
      local_e0 = (SQRT(dVar10) - dVar9) * 0.5;
      FUN_14827bb9c(param_4,local_b0,&local_e0);
      FUN_14827bb66(*(undefined8 *)((longlong)dVar8 + 8));
    }
    FUN_1400020a8(dVar8);
  }
  else {
    FUN_14827b20e(param_2,param_3,param_4);
    lVar3 = *param_4;
    lVar4 = *(longlong *)(lVar3 + 8);
    cVar2 = *(char *)(lVar4 + 0x19);
    lVar7 = lVar3;
    while (cVar2 == '\0') {
      bVar5 = *(double *)(lVar4 + 0x20) != 0.0;
      bVar6 = *(double *)(lVar4 + 0x20) <= 0.0;
      if (!bVar6 || !bVar5) {
        lVar7 = lVar4;
      }
      lVar4 = *(longlong *)(lVar4 + (ulonglong)(bVar6 && bVar5) * 0x10);
      cVar2 = *(char *)(lVar4 + 0x19);
    }
    if (((*(char *)(lVar7 + 0x19) == '\0') && (lVar7 != lVar3)) &&
       (*(double *)(lVar7 + 0x20) <= 0.0)) {
      *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
      goto LAB_14827ab2e;
    }
    local_c0 = 0.0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
LAB_14827b11f:
    FUN_14827bb9c(param_4,local_b0,&local_c0);
  }
LAB_14827ab2e:
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827b20e FUN_14827b20e body=985 status=ok
// SIG undefined FUN_14827b20e(void)

void FUN_14827b20e(double *param_1,double *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_a8 [40];
  double local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar10 = *param_1;
  if ((dVar10 != 0.0) || (NAN(dVar10))) {
    dVar9 = *param_2;
    if ((dVar9 != 0.0) || (NAN(dVar9))) {
      dVar7 = dVar9 * 4.0 * dVar9 * dVar9 + dVar10 * 27.0 * dVar10;
      if (0.0 <= dVar7) {
        if (0.0 < dVar7) {
          dVar7 = dVar7 / 108.0;
          if (dVar7 < 0.0) {
            dVar7 = sqrt(dVar7);
          }
          else {
            dVar7 = SQRT(dVar7);
          }
          dVar9 = dVar10 * -0.5 - dVar7;
          dVar7 = dVar10 * -0.5 + dVar7;
          if (0.0 <= dVar9) {
            dVar10 = pow(dVar9,0.3333333333333333);
            uVar11 = SUB84(dVar10,0);
            uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
          }
          else {
            dVar10 = pow(-dVar9,0.3333333333333333);
            uVar12 = (uint)((ulonglong)dVar10 >> 0x20) ^ 0x80000000;
            uVar11 = SUB84(dVar10,0);
          }
          if (0.0 <= dVar7) {
            local_80 = pow(dVar7,0.3333333333333333);
          }
          else {
            local_80 = pow(-dVar7,0.3333333333333333);
            local_80 = -local_80;
          }
          local_80 = (double)CONCAT44(uVar12,uVar11) + local_80;
        }
        else {
          local_80 = (dVar10 * -3.0) / (dVar9 + dVar9);
          dVar10 = local_80 * -2.0;
          local_78 = 2;
          FUN_14827bb9c(param_3,local_70,&local_80);
          local_80 = dVar10;
        }
      }
      else {
        dVar7 = dVar7 / -108.0;
        dVar10 = dVar10 * -0.5;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        dVar8 = atan2(dVar7,dVar10);
        dVar9 = cos(dVar8 / 3.0);
        dVar8 = sin(dVar8 / 3.0);
        dVar10 = pow(dVar10 * dVar10 + dVar7 * dVar7,0.16666666666666666);
        dVar9 = dVar9 * dVar10;
        dVar10 = dVar8 * dVar10 * 1.7320508075688772;
        local_80 = dVar9 + dVar9;
        local_78 = 1;
        FUN_14827bb9c(param_3,local_70,&local_80);
        local_78 = 1;
        local_80 = -dVar9 - dVar10;
        FUN_14827bb9c(param_3,local_70,&local_80);
        local_80 = dVar10 - dVar9;
      }
    }
    else if (dVar10 <= 0.0) {
      local_80 = pow(-dVar10,0.3333333333333333);
    }
    else {
      local_80 = pow(dVar10,0.3333333333333333);
      local_80 = -local_80;
    }
  }
  else {
    FUN_14827ba1c(param_2,param_3);
    lVar2 = *param_3;
    lVar3 = *(longlong *)(lVar2 + 8);
    cVar1 = *(char *)(lVar3 + 0x19);
    lVar6 = lVar2;
    while (cVar1 == '\0') {
      bVar4 = *(double *)(lVar3 + 0x20) != 0.0;
      bVar5 = *(double *)(lVar3 + 0x20) <= 0.0;
      if (!bVar5 || !bVar4) {
        lVar6 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(bVar5 && bVar4) * 0x10);
      cVar1 = *(char *)(lVar3 + 0x19);
    }
    if (((*(char *)(lVar6 + 0x19) == '\0') && (lVar6 != lVar2)) &&
       (*(double *)(lVar6 + 0x20) <= 0.0)) {
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
      goto LAB_14827b397;
    }
    local_80 = 0.0;
  }
  local_78 = 1;
  FUN_14827bb9c(param_3,local_70,&local_80);
LAB_14827b397:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827b890 FUN_14827b890 body=395 status=ok
// SIG undefined FUN_14827b890(void)

void FUN_14827b890(double *param_1,double *param_2,double *param_3,double *param_4,longlong *param_5
                  )

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  double local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *param_4;
  dVar3 = (*param_3 / dVar1) / 3.0;
  local_58 = *param_1 / dVar1 - (dVar3 * -2.0 * dVar3 + *param_2 / dVar1) * dVar3;
  local_60 = *param_2 / dVar1 - (*param_3 / dVar1) * dVar3;
  local_68 = 0;
  local_70 = (longlong *)FUN_14001cc68(0x30,0x10);
  *local_70 = (longlong)local_70;
  local_70[1] = (longlong)local_70;
  local_70[2] = (longlong)local_70;
  *(undefined2 *)(local_70 + 3) = 0x101;
  FUN_14827b20e(&local_58,&local_60,&local_70);
  lVar2 = *param_5;
  FUN_14827bb66(*(undefined8 *)(lVar2 + 8));
  plVar4 = local_70;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_5[1] = 0;
  plVar7 = (longlong *)*local_70;
  if (plVar7 != local_70) {
    do {
      local_80 = (double)plVar7[4] - dVar3;
      local_78 = (undefined4)plVar7[5];
      FUN_14827bb9c(param_5,local_50,&local_80);
      plVar6 = plVar7;
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x19) == '\0') {
        do {
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar7;
        } while (*(char *)(*plVar7 + 0x19) == '\0');
      }
      else {
        do {
          plVar7 = (longlong *)plVar6[1];
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') break;
          bVar8 = plVar6 == (longlong *)plVar7[2];
          plVar6 = plVar7;
        } while (bVar8);
      }
    } while (plVar7 != plVar4);
  }
  FUN_14827bb66(plVar4[1]);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1400020a8(plVar4);
  return;
}



// FUNCTION 14827ba1c FUN_14827ba1c body=234 status=ok
// SIG undefined FUN_14827ba1c(void)

void FUN_14827ba1c(double *param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auStack_78 [40];
  double local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = *param_1;
  if (dVar1 < 0.0) {
    if (-0.0 < dVar1) {
      dVar1 = sqrt(-dVar1);
    }
    else {
      dVar1 = SQRT(-dVar1);
    }
    local_50 = -dVar1;
    local_48 = 1;
    FUN_14827bb9c(param_2,local_40,&local_50);
    local_48 = 1;
    local_50 = dVar1;
  }
  else {
    if ((dVar1 != 0.0) || (NAN(dVar1))) goto LAB_14827ba51;
    local_50 = 0.0;
    local_48 = 2;
  }
  FUN_14827bb9c(param_2,local_40,&local_50);
LAB_14827ba51:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827bb08 FUN_14827bb08 body=93 status=ok
// SIG undefined FUN_14827bb08(void)

void FUN_14827bb08(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    plVar1 = (longlong *)*plVar3;
    if (*(char *)(*plVar3 + 0x19) == '\0') {
      do {
        plVar2 = plVar1;
        plVar1 = (longlong *)plVar2[2];
      } while (*(char *)(plVar2[2] + 0x19) == '\0');
    }
    else {
      plVar2 = (longlong *)plVar3[1];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        do {
          plVar1 = plVar2;
          plVar2 = plVar1;
          if (plVar3 != (longlong *)*plVar1) break;
          *param_1 = (longlong)plVar1;
          plVar2 = (longlong *)plVar1[1];
          plVar3 = plVar1;
        } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
        if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
          return;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)plVar3[2];
  }
  *param_1 = (longlong)plVar2;
  return;
}



// FUNCTION 14827bb66 FUN_14827bb66 body=53 status=ok
// SIG undefined FUN_14827bb66(void)

void FUN_14827bb66(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_14827bb66(param_1[2]);
    plVar2 = (longlong *)*param_1;
    FUN_1400020a8(param_1);
    param_1 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 14827bb9c FUN_14827bb9c body=281 status=ok
// SIG undefined FUN_14827bb9c(void)

undefined8 * FUN_14827bb9c(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar3[1];
  uVar7 = 0;
  plVar6 = plVar3;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    dVar1 = *param_3;
    plVar4 = plVar8;
    do {
      plVar8 = plVar4;
      dVar2 = (double)plVar8[4];
      if (dVar1 <= dVar2) {
        plVar6 = plVar8;
      }
      plVar4 = (longlong *)plVar8[(ulonglong)(dVar2 < dVar1) * 2];
    } while (*(char *)(plVar8[(ulonglong)(dVar2 < dVar1) * 2] + 0x19) == '\0');
    uVar7 = (uint)(dVar1 <= dVar2);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') ||
     (*param_3 <= (double)plVar6[4] && (double)plVar6[4] != *param_3)) {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar6[4] = (longlong)*param_3;
    *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(param_3 + 1);
    *plVar6 = (longlong)plVar3;
    plVar6[1] = (longlong)plVar3;
    plVar6[2] = (longlong)plVar3;
    *(undefined2 *)(plVar6 + 3) = 0;
    local_50 = plVar8;
    local_48 = uVar7;
    FUN_14827bcb8(param_1,&local_50,plVar6);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar5;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14827bcb8 FUN_14827bcb8 body=333 status=ok
// SIG undefined FUN_14827bcb8(void)

longlong * FUN_14827bcb8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[1] = param_1[1] + 1;
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar4;
  if (plVar4 == plVar3) {
    *plVar3 = (longlong)param_3;
    plVar3[1] = (longlong)param_3;
    plVar3[2] = (longlong)param_3;
    plVar3 = param_3;
    goto LAB_14827bd28;
  }
  plVar1 = param_3 + 1;
  if ((int)param_2[1] == 0) {
    plVar4[2] = (longlong)param_3;
    if (*param_2 == plVar3[2]) {
      plVar4 = plVar3 + 2;
      goto LAB_14827bd18;
    }
  }
  else {
    *plVar4 = (longlong)param_3;
    plVar4 = plVar3;
    if (*param_2 == *plVar3) {
LAB_14827bd18:
      *plVar4 = (longlong)param_3;
    }
  }
  plVar4 = (longlong *)*plVar1;
  cVar2 = (char)plVar4[3];
  plVar6 = param_3;
  while (cVar2 == '\0') {
    plVar5 = *(longlong **)plVar4[1];
    if (plVar4 == plVar5) {
      plVar5 = (longlong *)((longlong *)plVar4[1])[2];
      if ((char)plVar5[3] == '\0') goto LAB_14827bd58;
      if (plVar6 == (longlong *)plVar4[2]) {
        FUN_14827be06(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_14827be4c(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    else if ((char)plVar5[3] == '\0') {
LAB_14827bd58:
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(*plVar1 + 8);
    }
    else {
      if (plVar6 == (longlong *)*plVar4) {
        FUN_14827be4c(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_14827be06(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    plVar1 = plVar6 + 1;
    plVar4 = (longlong *)plVar6[1];
    cVar2 = (char)plVar4[3];
  }
  plVar3 = (longlong *)plVar3[1];
LAB_14827bd28:
  *(undefined1 *)(plVar3 + 3) = 1;
  return param_3;
}



// FUNCTION 14827be06 FUN_14827be06 body=70 status=ok
// SIG undefined FUN_14827be06(void)

void FUN_14827be06(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(*param_1 + 8) == param_2) {
    plVar3 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_2) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 14827be4c FUN_14827be4c body=68 status=ok
// SIG undefined FUN_14827be4c(void)

void FUN_14827be4c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(*param_1 + 8) == param_2) {
    plVar4 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_2) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 14827be90 FUN_14827be90 body=103 status=ok
// SIG undefined FUN_14827be90(void)

void FUN_14827be90(double *param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (0.0 < dVar2) {
    lVar1 = 0;
    do {
      param_1[lVar1] = param_1[lVar1] * (1.0 / dVar2);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}



// FUNCTION 14827bef7 FUN_14827bef7 body=716 status=ok
// SIG undefined FUN_14827bef7(void)

void FUN_14827bef7(double *param_1,double *param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
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
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar18 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar18 < 0x801) {
LAB_14827bf32:
    pdVar20 = param_1 + 8;
    pdVar21 = param_1;
    if (param_1 + 8 != param_2 && param_1 != param_2) {
      do {
        pdVar19 = pdVar20;
        dVar1 = pdVar21[8];
        local_68 = pdVar21[0xf];
        local_78 = pdVar21[0xd];
        dStack_70 = pdVar21[0xe];
        local_88 = pdVar21[0xb];
        dStack_80 = pdVar21[0xc];
        local_98 = (double *)pdVar21[9];
        uStack_90 = (double *)pdVar21[10];
        if (*param_1 <= dVar1) {
          dVar2 = pdVar19[-8];
          pdVar20 = pdVar19;
          while (dVar1 < dVar2) {
            pdVar20[6] = pdVar20[-2];
            pdVar20[7] = pdVar20[-1];
            pdVar20[4] = pdVar20[-4];
            pdVar20[5] = pdVar20[-3];
            pdVar20[2] = pdVar20[-6];
            pdVar20[3] = pdVar20[-5];
            *pdVar20 = pdVar20[-8];
            pdVar20[1] = pdVar20[-7];
            dVar2 = pdVar20[-0x10];
            pdVar20 = pdVar20 + -8;
          }
        }
        else {
          memmove((void *)((longlong)pdVar21 + (0x80 - ((longlong)pdVar19 - (longlong)param_1))),
                  param_1,(longlong)pdVar19 - (longlong)param_1);
          pdVar20 = param_1;
        }
        *pdVar20 = dVar1;
        *(undefined4 *)(pdVar20 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)pdVar20 + 0xc) = local_98._4_4_;
        *(undefined4 *)(pdVar20 + 2) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)pdVar20 + 0x14) = uStack_90._4_4_;
        pdVar20[3] = local_88;
        pdVar20[4] = dStack_80;
        pdVar20[5] = local_78;
        pdVar20[6] = dStack_70;
        pdVar20[7] = local_68;
        pdVar20 = pdVar19 + 8;
        pdVar21 = pdVar19;
      } while (pdVar19 + 8 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      pdVar20 = param_2;
      do {
        FUN_14827c1c4(&local_98,param_1,pdVar20);
        pdVar21 = uStack_90;
        param_2 = local_98;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_98 - (longlong)param_1 < (longlong)pdVar20 - (longlong)uStack_90) {
          FUN_14827bef7(param_1,local_98,param_3);
          param_1 = pdVar21;
          param_2 = pdVar20;
        }
        else {
          FUN_14827bef7(uStack_90,pdVar20,param_3);
        }
        uVar18 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar18 < 0x801) goto LAB_14827bf32;
        pdVar20 = param_2;
      } while (param_3 != 0);
    }
    uVar23 = (uVar18 >> 7) + 1;
    pdVar20 = param_1 + (uVar18 >> 7) * 8;
    do {
      local_98 = (double *)pdVar20[-8];
      uStack_90 = (double *)pdVar20[-7];
      local_88 = pdVar20[-6];
      dStack_80 = pdVar20[-5];
      local_78 = pdVar20[-4];
      dStack_70 = pdVar20[-3];
      local_68 = pdVar20[-2];
      dStack_60 = pdVar20[-1];
      FUN_14827c658(param_1,uVar23 - 2,uVar18 >> 6,&local_98);
      uVar23 = uVar23 - 1;
      pdVar20 = pdVar20 + -8;
    } while (1 < uVar23);
    lVar22 = (longlong)param_2 - (longlong)param_1;
    if (0x40 < lVar22) {
      do {
        pdVar20 = param_2 + -8;
        local_98 = (double *)*pdVar20;
        uStack_90 = (double *)param_2[-7];
        local_88 = param_2[-6];
        dStack_80 = param_2[-5];
        local_78 = param_2[-4];
        dStack_70 = param_2[-3];
        local_68 = param_2[-2];
        dStack_60 = param_2[-1];
        uVar3 = *(undefined4 *)((longlong)param_1 + 4);
        uVar4 = *(undefined4 *)(param_1 + 1);
        uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
        uVar6 = *(undefined4 *)(param_1 + 2);
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
        uVar8 = *(undefined4 *)(param_1 + 3);
        uVar9 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar10 = *(undefined4 *)(param_1 + 4);
        uVar11 = *(undefined4 *)((longlong)param_1 + 0x24);
        uVar12 = *(undefined4 *)(param_1 + 5);
        uVar13 = *(undefined4 *)((longlong)param_1 + 0x2c);
        uVar14 = *(undefined4 *)(param_1 + 6);
        uVar15 = *(undefined4 *)((longlong)param_1 + 0x34);
        uVar16 = *(undefined4 *)(param_1 + 7);
        uVar17 = *(undefined4 *)((longlong)param_1 + 0x3c);
        *(undefined4 *)pdVar20 = *(undefined4 *)param_1;
        *(undefined4 *)((longlong)param_2 + -0x3c) = uVar3;
        *(undefined4 *)(param_2 + -7) = uVar4;
        *(undefined4 *)((longlong)param_2 + -0x34) = uVar5;
        *(undefined4 *)(param_2 + -6) = uVar6;
        *(undefined4 *)((longlong)param_2 + -0x2c) = uVar7;
        *(undefined4 *)(param_2 + -5) = uVar8;
        *(undefined4 *)((longlong)param_2 + -0x24) = uVar9;
        *(undefined4 *)(param_2 + -4) = uVar10;
        *(undefined4 *)((longlong)param_2 + -0x1c) = uVar11;
        *(undefined4 *)(param_2 + -3) = uVar12;
        *(undefined4 *)((longlong)param_2 + -0x14) = uVar13;
        *(undefined4 *)(param_2 + -2) = uVar14;
        *(undefined4 *)((longlong)param_2 + -0xc) = uVar15;
        *(undefined4 *)(param_2 + -1) = uVar16;
        *(undefined4 *)((longlong)param_2 + -4) = uVar17;
        lVar22 = lVar22 + -0x40;
        FUN_14827c658(param_1,0,lVar22 >> 6,&local_98);
        param_2 = pdVar20;
      } while (0x40 < lVar22);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827c1c4 FUN_14827c1c4 body=1171 status=ok
// SIG undefined FUN_14827c1c4(void)

undefined8 * FUN_14827c1c4(undefined8 *param_1,double *param_2,double *param_3)

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
  double dVar14;
  double dVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  longlong lVar22;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar22 = (longlong)param_3 - (longlong)param_2 >> 7;
  FUN_14827c7b0(param_2,param_2 + lVar22 * 8,param_3 + -8);
  pdVar18 = param_2 + lVar22 * 8;
  do {
    pdVar20 = pdVar18;
    if (pdVar20 <= param_2) break;
    pdVar18 = pdVar20 + -8;
  } while (pdVar20[-8] == *pdVar20);
  pdVar18 = param_2 + lVar22 * 8;
  do {
    pdVar18 = pdVar18 + 8;
    pdVar19 = pdVar18;
    pdVar21 = pdVar20;
    if (param_3 <= pdVar18) break;
  } while (*pdVar18 == *pdVar20);
LAB_14827c243:
  do {
    if (pdVar19 < param_3) {
      if (*pdVar19 <= *pdVar20) {
        if (*pdVar19 < *pdVar20) goto joined_r0x00014827c2dd;
        if (pdVar19 != pdVar18) {
          dVar1 = *pdVar18;
          dVar2 = pdVar18[1];
          local_68 = pdVar18[2];
          dStack_60 = pdVar18[3];
          local_58 = pdVar18[4];
          dStack_50 = pdVar18[5];
          local_48 = pdVar18[6];
          dStack_40 = pdVar18[7];
          dVar3 = *pdVar19;
          dVar4 = pdVar19[1];
          dVar5 = pdVar19[2];
          dVar6 = pdVar19[3];
          dVar7 = pdVar19[4];
          dVar8 = pdVar19[5];
          dVar9 = pdVar19[7];
          pdVar18[6] = pdVar19[6];
          pdVar18[7] = dVar9;
          pdVar18[4] = dVar7;
          pdVar18[5] = dVar8;
          pdVar18[2] = dVar5;
          pdVar18[3] = dVar6;
          *pdVar18 = dVar3;
          pdVar18[1] = dVar4;
          local_78._0_4_ = SUB84(dVar1,0);
          local_78._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_70._0_4_ = SUB84(dVar2,0);
          uStack_70._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
          pdVar19[6] = local_48;
          pdVar19[7] = dStack_40;
          pdVar19[4] = local_58;
          pdVar19[5] = dStack_50;
          pdVar19[2] = local_68;
          pdVar19[3] = dStack_60;
          *(undefined4 *)pdVar19 = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar19 + 4) = local_78._4_4_;
          *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_70._4_4_;
          local_78 = dVar1;
          uStack_70 = dVar2;
        }
        pdVar18 = pdVar18 + 8;
      }
      pdVar19 = pdVar19 + 8;
      goto LAB_14827c243;
    }
joined_r0x00014827c2dd:
    while (pdVar17 = pdVar21, pdVar16 = pdVar20, pdVar20 = pdVar16, param_2 < pdVar17) {
      pdVar21 = pdVar17 + -8;
      if (*pdVar16 <= pdVar17[-8]) {
        if (*pdVar16 < pdVar17[-8]) break;
        pdVar20 = pdVar16 + -8;
        if (pdVar17 != pdVar16) {
          dVar1 = *pdVar20;
          dVar2 = pdVar16[-7];
          local_68 = pdVar16[-6];
          dStack_60 = pdVar16[-5];
          local_58 = pdVar16[-4];
          dStack_50 = pdVar16[-3];
          local_48 = pdVar16[-2];
          dStack_40 = pdVar16[-1];
          dVar3 = *pdVar21;
          dVar4 = pdVar17[-7];
          dVar5 = pdVar17[-6];
          dVar6 = pdVar17[-5];
          dVar7 = pdVar17[-4];
          dVar8 = pdVar17[-3];
          dVar9 = pdVar17[-1];
          pdVar16[-2] = pdVar17[-2];
          pdVar16[-1] = dVar9;
          pdVar16[-4] = dVar7;
          pdVar16[-3] = dVar8;
          pdVar16[-6] = dVar5;
          pdVar16[-5] = dVar6;
          *pdVar20 = dVar3;
          pdVar16[-7] = dVar4;
          local_78._0_4_ = SUB84(dVar1,0);
          local_78._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_70._0_4_ = SUB84(dVar2,0);
          uStack_70._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
          pdVar17[-2] = local_48;
          pdVar17[-1] = dStack_40;
          pdVar17[-4] = local_58;
          pdVar17[-3] = dStack_50;
          pdVar17[-6] = local_68;
          pdVar17[-5] = dStack_60;
          *(undefined4 *)pdVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar17 + -0x3c) = local_78._4_4_;
          *(undefined4 *)(pdVar17 + -7) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar17 + -0x34) = uStack_70._4_4_;
          local_78 = dVar1;
          uStack_70 = dVar2;
        }
      }
    }
    if ((pdVar19 == param_3) && (pdVar17 == param_2)) {
      *param_1 = pdVar16;
      param_1[1] = pdVar18;
      if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    if (pdVar17 == param_2) {
      if (pdVar18 != pdVar19) {
        dVar1 = *pdVar16;
        dVar2 = pdVar16[1];
        dVar3 = pdVar16[2];
        dVar4 = pdVar16[3];
        dVar5 = pdVar16[4];
        dVar6 = pdVar16[5];
        dVar7 = pdVar16[6];
        dVar8 = pdVar16[7];
        dVar9 = *pdVar18;
        dVar10 = pdVar18[1];
        dVar11 = pdVar18[2];
        dVar12 = pdVar18[3];
        dVar13 = pdVar18[4];
        dVar14 = pdVar18[5];
        dVar15 = pdVar18[7];
        pdVar16[6] = pdVar18[6];
        pdVar16[7] = dVar15;
        pdVar16[4] = dVar13;
        pdVar16[5] = dVar14;
        pdVar16[2] = dVar11;
        pdVar16[3] = dVar12;
        *pdVar16 = dVar9;
        pdVar16[1] = dVar10;
        pdVar18[6] = dVar7;
        pdVar18[7] = dVar8;
        pdVar18[4] = dVar5;
        pdVar18[5] = dVar6;
        pdVar18[2] = dVar3;
        pdVar18[3] = dVar4;
        *pdVar18 = dVar1;
        pdVar18[1] = dVar2;
      }
      pdVar18 = pdVar18 + 8;
      dVar1 = *pdVar16;
      dVar2 = pdVar16[1];
      local_68 = pdVar16[2];
      dStack_60 = pdVar16[3];
      local_58 = pdVar16[4];
      dStack_50 = pdVar16[5];
      local_48 = pdVar16[6];
      dStack_40 = pdVar16[7];
      dVar3 = *pdVar19;
      dVar4 = pdVar19[1];
      dVar5 = pdVar19[2];
      dVar6 = pdVar19[3];
      dVar7 = pdVar19[4];
      dVar8 = pdVar19[5];
      dVar9 = pdVar19[7];
      pdVar16[6] = pdVar19[6];
      pdVar16[7] = dVar9;
      pdVar16[4] = dVar7;
      pdVar16[5] = dVar8;
      pdVar16[2] = dVar5;
      pdVar16[3] = dVar6;
      *pdVar16 = dVar3;
      pdVar16[1] = dVar4;
      local_78._0_4_ = SUB84(dVar1,0);
      local_78._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
      uStack_70._0_4_ = SUB84(dVar2,0);
      uStack_70._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      pdVar19[6] = local_48;
      pdVar19[7] = dStack_40;
      pdVar19[4] = local_58;
      pdVar19[5] = dStack_50;
      pdVar19[2] = local_68;
      pdVar19[3] = dStack_60;
      *(undefined4 *)pdVar19 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar19 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_70._4_4_;
      pdVar20 = pdVar16 + 8;
      pdVar19 = pdVar19 + 8;
      pdVar21 = param_2;
      local_78 = dVar1;
      uStack_70 = dVar2;
    }
    else {
      pdVar21 = pdVar17 + -8;
      if (pdVar19 == param_3) {
        pdVar20 = pdVar16 + -8;
        if (pdVar17 != pdVar16) {
          dVar1 = *pdVar21;
          dVar2 = pdVar17[-7];
          dVar3 = pdVar17[-6];
          dVar4 = pdVar17[-5];
          dVar5 = pdVar17[-4];
          dVar6 = pdVar17[-3];
          dVar7 = pdVar17[-2];
          dVar8 = pdVar17[-1];
          dVar9 = *pdVar20;
          dVar10 = pdVar16[-7];
          dVar11 = pdVar16[-6];
          dVar12 = pdVar16[-5];
          dVar13 = pdVar16[-4];
          dVar14 = pdVar16[-3];
          dVar15 = pdVar16[-1];
          pdVar17[-2] = pdVar16[-2];
          pdVar17[-1] = dVar15;
          pdVar17[-4] = dVar13;
          pdVar17[-3] = dVar14;
          pdVar17[-6] = dVar11;
          pdVar17[-5] = dVar12;
          *pdVar21 = dVar9;
          pdVar17[-7] = dVar10;
          pdVar16[-2] = dVar7;
          pdVar16[-1] = dVar8;
          pdVar16[-4] = dVar5;
          pdVar16[-3] = dVar6;
          pdVar16[-6] = dVar3;
          pdVar16[-5] = dVar4;
          *pdVar20 = dVar1;
          pdVar16[-7] = dVar2;
        }
        dVar1 = *pdVar20;
        dVar2 = pdVar16[-7];
        local_68 = pdVar16[-6];
        dStack_60 = pdVar16[-5];
        local_58 = pdVar16[-4];
        dStack_50 = pdVar16[-3];
        local_48 = pdVar16[-2];
        dStack_40 = pdVar16[-1];
        dVar3 = pdVar18[-8];
        dVar4 = pdVar18[-7];
        dVar5 = pdVar18[-6];
        dVar6 = pdVar18[-5];
        dVar7 = pdVar18[-4];
        dVar8 = pdVar18[-3];
        dVar9 = pdVar18[-1];
        pdVar16[-2] = pdVar18[-2];
        pdVar16[-1] = dVar9;
        pdVar16[-4] = dVar7;
        pdVar16[-3] = dVar8;
        pdVar16[-6] = dVar5;
        pdVar16[-5] = dVar6;
        *pdVar20 = dVar3;
        pdVar16[-7] = dVar4;
        local_78._0_4_ = SUB84(dVar1,0);
        local_78._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
        uStack_70._0_4_ = SUB84(dVar2,0);
        uStack_70._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        pdVar18[-2] = local_48;
        pdVar18[-1] = dStack_40;
        pdVar18[-4] = local_58;
        pdVar18[-3] = dStack_50;
        pdVar18[-6] = local_68;
        pdVar18[-5] = dStack_60;
        *(undefined4 *)(pdVar18 + -8) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar18 + -0x3c) = local_78._4_4_;
        *(undefined4 *)(pdVar18 + -7) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar18 + -0x34) = uStack_70._4_4_;
        pdVar18 = pdVar18 + -8;
        local_78 = dVar1;
        uStack_70 = dVar2;
      }
      else {
        dVar1 = *pdVar19;
        dVar2 = pdVar19[1];
        local_68 = pdVar19[2];
        dStack_60 = pdVar19[3];
        local_58 = pdVar19[4];
        dStack_50 = pdVar19[5];
        local_48 = pdVar19[6];
        dStack_40 = pdVar19[7];
        dVar3 = *pdVar21;
        dVar4 = pdVar17[-7];
        dVar5 = pdVar17[-6];
        dVar6 = pdVar17[-5];
        dVar7 = pdVar17[-4];
        dVar8 = pdVar17[-3];
        dVar9 = pdVar17[-1];
        pdVar19[6] = pdVar17[-2];
        pdVar19[7] = dVar9;
        pdVar19[4] = dVar7;
        pdVar19[5] = dVar8;
        pdVar19[2] = dVar5;
        pdVar19[3] = dVar6;
        *pdVar19 = dVar3;
        pdVar19[1] = dVar4;
        local_78._0_4_ = SUB84(dVar1,0);
        local_78._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
        uStack_70._0_4_ = SUB84(dVar2,0);
        uStack_70._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        pdVar17[-2] = local_48;
        pdVar17[-1] = dStack_40;
        pdVar17[-4] = local_58;
        pdVar17[-3] = dStack_50;
        pdVar17[-6] = local_68;
        pdVar17[-5] = dStack_60;
        *(undefined4 *)pdVar21 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar17 + -0x3c) = local_78._4_4_;
        *(undefined4 *)(pdVar17 + -7) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar17 + -0x34) = uStack_70._4_4_;
        pdVar19 = pdVar19 + 8;
        local_78 = dVar1;
        uStack_70 = dVar2;
      }
    }
  } while( true );
}



// FUNCTION 14827c658 FUN_14827c658 body=344 status=ok
// SIG undefined FUN_14827c658(void)

void FUN_14827c658(longlong param_1,longlong param_2,ulonglong param_3,double *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  
  lVar20 = param_3 - 1;
  lVar22 = lVar20 >> 1;
  lVar18 = param_2;
  while (lVar18 < lVar22) {
    lVar19 = lVar18 * 2 + 2;
    lVar17 = lVar18 * 2 + 1;
    dVar3 = *(double *)(param_1 + lVar17 * 0x40);
    pdVar1 = (double *)(param_1 + lVar19 * 0x40);
    if (dVar3 < *pdVar1 || dVar3 == *pdVar1) {
      lVar17 = lVar19;
    }
    lVar19 = lVar17 * 0x40;
    lVar18 = lVar18 * 0x40;
    uVar4 = *(undefined8 *)(param_1 + lVar19);
    uVar5 = ((undefined8 *)(param_1 + lVar19))[1];
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar19);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar19);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x30 + lVar19);
    uVar10 = puVar2[1];
    puVar21 = (undefined8 *)(param_1 + 0x30 + lVar18);
    *puVar21 = *puVar2;
    puVar21[1] = uVar10;
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar18);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar18);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + lVar18) = uVar4;
    ((undefined8 *)(param_1 + lVar18))[1] = uVar5;
    lVar18 = lVar17;
  }
  if (((param_3 & 1) == 0) && (lVar18 == lVar22)) {
    lVar18 = lVar20 * 0x40;
    lVar22 = lVar22 * 0x40;
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    uVar5 = ((undefined8 *)(param_1 + lVar18))[1];
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar18);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar18);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x30 + lVar18);
    uVar10 = puVar2[1];
    puVar21 = (undefined8 *)(param_1 + 0x30 + lVar22);
    *puVar21 = *puVar2;
    puVar21[1] = uVar10;
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar22);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar22);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + lVar22) = uVar4;
    ((undefined8 *)(param_1 + lVar22))[1] = uVar5;
    lVar18 = lVar20;
  }
  while (param_2 < lVar18) {
    lVar20 = lVar18 + -1 >> 1;
    lVar22 = lVar20 * 0x40;
    pdVar1 = (double *)(param_1 + lVar22);
    if (*param_4 < *pdVar1 || *param_4 == *pdVar1) break;
    puVar21 = (undefined8 *)(lVar22 + param_1);
    lVar18 = lVar18 * 0x40;
    uVar4 = *puVar21;
    uVar5 = puVar21[1];
    uVar6 = puVar21[2];
    uVar7 = puVar21[3];
    uVar8 = puVar21[4];
    uVar9 = puVar21[5];
    uVar10 = puVar21[7];
    puVar2 = (undefined8 *)(param_1 + 0x30 + lVar18);
    *puVar2 = puVar21[6];
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar18);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar18);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + lVar18) = uVar4;
    ((undefined8 *)(param_1 + lVar18))[1] = uVar5;
    lVar18 = lVar20;
  }
  lVar18 = lVar18 * 0x40;
  dVar3 = *param_4;
  dVar11 = param_4[1];
  dVar12 = param_4[2];
  dVar13 = param_4[3];
  dVar14 = param_4[4];
  dVar15 = param_4[5];
  dVar16 = param_4[7];
  pdVar1 = (double *)(param_1 + 0x30 + lVar18);
  *pdVar1 = param_4[6];
  pdVar1[1] = dVar16;
  pdVar1 = (double *)(param_1 + 0x20 + lVar18);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(param_1 + 0x10 + lVar18);
  *pdVar1 = dVar12;
  pdVar1[1] = dVar13;
  *(double *)(param_1 + lVar18) = dVar3;
  ((double *)(param_1 + lVar18))[1] = dVar11;
  return;
}



// FUNCTION 14827c7b0 FUN_14827c7b0 body=1923 status=ok
// SIG undefined FUN_14827c7b0(void)

void FUN_14827c7b0(double *param_1,double *param_2,double *param_3)

{
  double *pdVar1;
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
  double *pdVar17;
  longlong lVar18;
  ulonglong uVar19;
  double *pdVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar18 = (longlong)param_3 - (longlong)param_1 >> 6;
  if (lVar18 < 0x29) {
    dVar2 = *param_2;
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < *param_1) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      dVar2 = param_2[2];
      dVar3 = param_2[3];
      dVar4 = param_2[4];
      dVar5 = param_2[5];
      dVar6 = param_2[6];
      dVar7 = param_2[7];
      dVar8 = *param_1;
      dVar9 = param_1[1];
      dVar10 = param_1[2];
      dVar11 = param_1[3];
      dVar12 = param_1[4];
      dVar13 = param_1[5];
      dVar14 = param_1[7];
      param_2[6] = param_1[6];
      param_2[7] = dVar14;
      param_2[4] = dVar12;
      param_2[5] = dVar13;
      param_2[2] = dVar10;
      param_2[3] = dVar11;
      *param_2 = dVar8;
      param_2[1] = dVar9;
      local_48._0_4_ = SUB84(dVar2,0);
      local_48._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_40._0_4_ = SUB84(dVar3,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_38._0_4_ = SUB84(dVar4,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar5,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_28._0_4_ = SUB84(dVar6,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar7,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_48._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
      *param_1 = local_58;
      param_1[1] = uStack_50;
      uVar21 = SUB84(*param_2,0);
      uVar22 = (undefined4)((ulonglong)*param_2 >> 0x20);
      local_48 = dVar2;
      uStack_40 = dVar3;
      local_38 = dVar4;
      uStack_30 = dVar5;
      local_28 = dVar6;
      uStack_20 = dVar7;
    }
    if (*param_3 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != *param_3)
    {
      local_58 = *param_3;
      uStack_50 = param_3[1];
      dVar2 = param_3[2];
      dVar3 = param_3[3];
      dVar4 = param_3[4];
      dVar5 = param_3[5];
      dVar6 = param_3[6];
      dVar7 = param_3[7];
      dVar8 = *param_2;
      dVar9 = param_2[1];
      dVar10 = param_2[2];
      dVar11 = param_2[3];
      dVar12 = param_2[4];
      dVar13 = param_2[5];
      dVar14 = param_2[7];
      param_3[6] = param_2[6];
      param_3[7] = dVar14;
      param_3[4] = dVar12;
      param_3[5] = dVar13;
      param_3[2] = dVar10;
      param_3[3] = dVar11;
      *param_3 = dVar8;
      param_3[1] = dVar9;
      local_48._0_4_ = SUB84(dVar2,0);
      local_48._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_40._0_4_ = SUB84(dVar3,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_38._0_4_ = SUB84(dVar4,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar5,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_28._0_4_ = SUB84(dVar6,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar7,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      local_48 = dVar2;
      uStack_40 = dVar3;
      local_38 = dVar4;
      uStack_30 = dVar5;
      local_28 = dVar6;
      uStack_20 = dVar7;
      if (*param_2 <= *param_1 && *param_1 != *param_2) {
        dVar2 = *param_2;
        dVar3 = param_2[1];
        dVar4 = param_2[2];
        dVar5 = param_2[3];
        dVar6 = param_2[4];
        dVar7 = param_2[5];
        dVar8 = param_2[6];
        dVar9 = param_2[7];
        dVar10 = *param_1;
        dVar11 = param_1[1];
        dVar12 = param_1[2];
        dVar13 = param_1[3];
        dVar14 = param_1[4];
        dVar15 = param_1[5];
        dVar16 = param_1[7];
        param_2[6] = param_1[6];
        param_2[7] = dVar16;
        param_2[4] = dVar14;
        param_2[5] = dVar15;
        param_2[2] = dVar12;
        param_2[3] = dVar13;
        *param_2 = dVar10;
        param_2[1] = dVar11;
        local_58._0_4_ = SUB84(dVar2,0);
        local_58._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        uStack_50._0_4_ = SUB84(dVar3,0);
        uStack_50._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_48._0_4_ = SUB84(dVar4,0);
        local_48._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_40._0_4_ = SUB84(dVar5,0);
        uStack_40._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_38._0_4_ = SUB84(dVar6,0);
        local_38._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_30._0_4_ = SUB84(dVar7,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_28._0_4_ = SUB84(dVar8,0);
        local_28._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_20._0_4_ = SUB84(dVar9,0);
        uStack_20._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
        *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
        *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 0x24) = local_38._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 0x14) = local_48._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
        *(undefined4 *)param_1 = (undefined4)local_58;
        *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
        local_58 = dVar2;
        uStack_50 = dVar3;
        local_48 = dVar4;
        uStack_40 = dVar5;
        local_38 = dVar6;
        uStack_30 = dVar7;
        local_28 = dVar8;
        uStack_20 = dVar9;
      }
    }
  }
  else {
    uVar19 = lVar18 + 1U >> 3;
    pdVar20 = param_1 + uVar19 * 0x10;
    pdVar1 = param_1 + uVar19 * 8;
    dVar2 = param_1[uVar19 * 8];
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < *param_1) {
      local_58 = *pdVar1;
      uStack_50 = pdVar1[1];
      local_48 = pdVar1[2];
      uStack_40 = pdVar1[3];
      dVar2 = pdVar1[4];
      dVar3 = pdVar1[5];
      dVar4 = pdVar1[6];
      dVar5 = pdVar1[7];
      dVar6 = *param_1;
      dVar7 = param_1[1];
      dVar8 = param_1[2];
      dVar9 = param_1[3];
      dVar10 = param_1[4];
      dVar11 = param_1[5];
      dVar12 = param_1[7];
      pdVar1[6] = param_1[6];
      pdVar1[7] = dVar12;
      pdVar1[4] = dVar10;
      pdVar1[5] = dVar11;
      pdVar1[2] = dVar8;
      pdVar1[3] = dVar9;
      *pdVar1 = dVar6;
      pdVar1[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      *param_1 = local_58;
      param_1[1] = uStack_50;
      uVar21 = SUB84(*pdVar1,0);
      uVar22 = (undefined4)((ulonglong)*pdVar1 >> 0x20);
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
    }
    if (*pdVar20 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != *pdVar20)
    {
      local_58 = *pdVar20;
      uStack_50 = pdVar20[1];
      local_48 = pdVar20[2];
      uStack_40 = pdVar20[3];
      dVar2 = pdVar20[4];
      dVar3 = pdVar20[5];
      dVar4 = pdVar20[6];
      dVar5 = pdVar20[7];
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      dVar8 = pdVar1[2];
      dVar9 = pdVar1[3];
      dVar10 = pdVar1[4];
      dVar11 = pdVar1[5];
      dVar12 = pdVar1[7];
      pdVar20[6] = pdVar1[6];
      pdVar20[7] = dVar12;
      pdVar20[4] = dVar10;
      pdVar20[5] = dVar11;
      pdVar20[2] = dVar8;
      pdVar20[3] = dVar9;
      *pdVar20 = dVar6;
      pdVar20[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(pdVar1 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)pdVar1 + 0x34) = local_28._4_4_;
      *(undefined4 *)(pdVar1 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)pdVar1 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(pdVar1 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)pdVar1 + 0x24) = local_38._4_4_;
      *(undefined4 *)(pdVar1 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)pdVar1 + 0x2c) = uStack_30._4_4_;
      pdVar1[2] = local_48;
      pdVar1[3] = uStack_40;
      *pdVar1 = local_58;
      pdVar1[1] = uStack_50;
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
      if (*pdVar1 <= *param_1 && *param_1 != *pdVar1) {
        local_58 = *pdVar1;
        uStack_50 = pdVar1[1];
        local_48 = pdVar1[2];
        uStack_40 = pdVar1[3];
        dVar2 = pdVar1[4];
        dVar3 = pdVar1[5];
        dVar4 = pdVar1[6];
        dVar5 = pdVar1[7];
        dVar6 = *param_1;
        dVar7 = param_1[1];
        dVar8 = param_1[2];
        dVar9 = param_1[3];
        dVar10 = param_1[4];
        dVar11 = param_1[5];
        dVar12 = param_1[7];
        pdVar1[6] = param_1[6];
        pdVar1[7] = dVar12;
        pdVar1[4] = dVar10;
        pdVar1[5] = dVar11;
        pdVar1[2] = dVar8;
        pdVar1[3] = dVar9;
        *pdVar1 = dVar6;
        pdVar1[1] = dVar7;
        local_38._0_4_ = SUB84(dVar2,0);
        local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        uStack_30._0_4_ = SUB84(dVar3,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_28._0_4_ = SUB84(dVar4,0);
        local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_20._0_4_ = SUB84(dVar5,0);
        uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        *(undefined4 *)(param_1 + 6) = (undefined4)local_28;
        *(undefined4 *)((longlong)param_1 + 0x34) = local_28._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 0x24) = local_38._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
        param_1[2] = local_48;
        param_1[3] = uStack_40;
        *param_1 = local_58;
        param_1[1] = uStack_50;
        local_38 = dVar2;
        uStack_30 = dVar3;
        local_28 = dVar4;
        uStack_20 = dVar5;
      }
    }
    pdVar20 = param_2 + uVar19 * 8;
    pdVar17 = param_2 + uVar19 * -8;
    dVar2 = *param_2;
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < *pdVar17) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      local_48 = param_2[2];
      uStack_40 = param_2[3];
      dVar2 = param_2[4];
      dVar3 = param_2[5];
      dVar4 = param_2[6];
      dVar5 = param_2[7];
      dVar6 = *pdVar17;
      dVar7 = pdVar17[1];
      dVar8 = pdVar17[2];
      dVar9 = pdVar17[3];
      dVar10 = pdVar17[4];
      dVar11 = pdVar17[5];
      dVar12 = pdVar17[7];
      param_2[6] = pdVar17[6];
      param_2[7] = dVar12;
      param_2[4] = dVar10;
      param_2[5] = dVar11;
      param_2[2] = dVar8;
      param_2[3] = dVar9;
      *param_2 = dVar6;
      param_2[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(pdVar17 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)pdVar17 + 0x34) = local_28._4_4_;
      *(undefined4 *)(pdVar17 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)pdVar17 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(pdVar17 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)pdVar17 + 0x24) = local_38._4_4_;
      *(undefined4 *)(pdVar17 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)pdVar17 + 0x2c) = uStack_30._4_4_;
      pdVar17[2] = local_48;
      pdVar17[3] = uStack_40;
      *pdVar17 = local_58;
      pdVar17[1] = uStack_50;
      uVar21 = SUB84(*param_2,0);
      uVar22 = (undefined4)((ulonglong)*param_2 >> 0x20);
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
    }
    if (*pdVar20 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != *pdVar20)
    {
      local_58 = *pdVar20;
      uStack_50 = pdVar20[1];
      local_48 = pdVar20[2];
      uStack_40 = pdVar20[3];
      dVar2 = pdVar20[4];
      dVar3 = pdVar20[5];
      dVar4 = pdVar20[6];
      dVar5 = pdVar20[7];
      dVar6 = *param_2;
      dVar7 = param_2[1];
      dVar8 = param_2[2];
      dVar9 = param_2[3];
      dVar10 = param_2[4];
      dVar11 = param_2[5];
      dVar12 = param_2[7];
      pdVar20[6] = param_2[6];
      pdVar20[7] = dVar12;
      pdVar20[4] = dVar10;
      pdVar20[5] = dVar11;
      pdVar20[2] = dVar8;
      pdVar20[3] = dVar9;
      *pdVar20 = dVar6;
      pdVar20[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
      param_2[2] = local_48;
      param_2[3] = uStack_40;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
      if (*param_2 <= *pdVar17 && *pdVar17 != *param_2) {
        local_58 = *param_2;
        uStack_50 = param_2[1];
        local_48 = param_2[2];
        uStack_40 = param_2[3];
        dVar2 = param_2[4];
        dVar3 = param_2[5];
        dVar4 = param_2[6];
        dVar5 = param_2[7];
        dVar6 = *pdVar17;
        dVar7 = pdVar17[1];
        dVar8 = pdVar17[2];
        dVar9 = pdVar17[3];
        dVar10 = pdVar17[4];
        dVar11 = pdVar17[5];
        dVar12 = pdVar17[7];
        param_2[6] = pdVar17[6];
        param_2[7] = dVar12;
        param_2[4] = dVar10;
        param_2[5] = dVar11;
        param_2[2] = dVar8;
        param_2[3] = dVar9;
        *param_2 = dVar6;
        param_2[1] = dVar7;
        local_38._0_4_ = SUB84(dVar2,0);
        local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        uStack_30._0_4_ = SUB84(dVar3,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_28._0_4_ = SUB84(dVar4,0);
        local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_20._0_4_ = SUB84(dVar5,0);
        uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        *(undefined4 *)(pdVar17 + 6) = (undefined4)local_28;
        *(undefined4 *)((longlong)pdVar17 + 0x34) = local_28._4_4_;
        *(undefined4 *)(pdVar17 + 7) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)pdVar17 + 0x3c) = uStack_20._4_4_;
        *(undefined4 *)(pdVar17 + 4) = (undefined4)local_38;
        *(undefined4 *)((longlong)pdVar17 + 0x24) = local_38._4_4_;
        *(undefined4 *)(pdVar17 + 5) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)pdVar17 + 0x2c) = uStack_30._4_4_;
        pdVar17[2] = local_48;
        pdVar17[3] = uStack_40;
        *pdVar17 = local_58;
        pdVar17[1] = uStack_50;
        local_38 = dVar2;
        uStack_30 = dVar3;
        local_28 = dVar4;
        uStack_20 = dVar5;
      }
    }
    pdVar20 = param_3 + uVar19 * -8;
    pdVar17 = param_3 + uVar19 * -0x10;
    dVar2 = param_3[uVar19 * -8];
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < param_3[uVar19 * -0x10]) {
      local_58 = *pdVar20;
      uStack_50 = pdVar20[1];
      local_48 = pdVar20[2];
      uStack_40 = pdVar20[3];
      dVar2 = pdVar20[4];
      dVar3 = pdVar20[5];
      dVar4 = pdVar20[6];
      dVar5 = pdVar20[7];
      dVar6 = *pdVar17;
      dVar7 = pdVar17[1];
      dVar8 = pdVar17[2];
      dVar9 = pdVar17[3];
      dVar10 = pdVar17[4];
      dVar11 = pdVar17[5];
      dVar12 = pdVar17[7];
      pdVar20[6] = pdVar17[6];
      pdVar20[7] = dVar12;
      pdVar20[4] = dVar10;
      pdVar20[5] = dVar11;
      pdVar20[2] = dVar8;
      pdVar20[3] = dVar9;
      *pdVar20 = dVar6;
      pdVar20[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(pdVar17 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)pdVar17 + 0x34) = local_28._4_4_;
      *(undefined4 *)(pdVar17 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)pdVar17 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(pdVar17 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)pdVar17 + 0x24) = local_38._4_4_;
      *(undefined4 *)(pdVar17 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)pdVar17 + 0x2c) = uStack_30._4_4_;
      pdVar17[2] = local_48;
      pdVar17[3] = uStack_40;
      *pdVar17 = local_58;
      pdVar17[1] = uStack_50;
      uVar21 = SUB84(*pdVar20,0);
      uVar22 = (undefined4)((ulonglong)*pdVar20 >> 0x20);
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
    }
    if (*param_3 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != *param_3)
    {
      local_58 = *param_3;
      uStack_50 = param_3[1];
      local_48 = param_3[2];
      uStack_40 = param_3[3];
      dVar2 = param_3[4];
      dVar3 = param_3[5];
      dVar4 = param_3[6];
      dVar5 = param_3[7];
      dVar6 = *pdVar20;
      dVar7 = pdVar20[1];
      dVar8 = pdVar20[2];
      dVar9 = pdVar20[3];
      dVar10 = pdVar20[4];
      dVar11 = pdVar20[5];
      dVar12 = pdVar20[7];
      param_3[6] = pdVar20[6];
      param_3[7] = dVar12;
      param_3[4] = dVar10;
      param_3[5] = dVar11;
      param_3[2] = dVar8;
      param_3[3] = dVar9;
      *param_3 = dVar6;
      param_3[1] = dVar7;
      local_38._0_4_ = SUB84(dVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_28._0_4_ = SUB84(dVar4,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar5,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(pdVar20 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)pdVar20 + 0x34) = local_28._4_4_;
      *(undefined4 *)(pdVar20 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)pdVar20 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(pdVar20 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)pdVar20 + 0x24) = local_38._4_4_;
      *(undefined4 *)(pdVar20 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)pdVar20 + 0x2c) = uStack_30._4_4_;
      pdVar20[2] = local_48;
      pdVar20[3] = uStack_40;
      *pdVar20 = local_58;
      pdVar20[1] = uStack_50;
      local_38 = dVar2;
      uStack_30 = dVar3;
      local_28 = dVar4;
      uStack_20 = dVar5;
      if (*pdVar20 <= *pdVar17 && *pdVar17 != *pdVar20) {
        local_58 = *pdVar20;
        uStack_50 = pdVar20[1];
        local_48 = pdVar20[2];
        uStack_40 = pdVar20[3];
        dVar2 = pdVar20[4];
        dVar3 = pdVar20[5];
        dVar4 = pdVar20[6];
        dVar5 = pdVar20[7];
        dVar6 = *pdVar17;
        dVar7 = pdVar17[1];
        dVar8 = pdVar17[2];
        dVar9 = pdVar17[3];
        dVar10 = pdVar17[4];
        dVar11 = pdVar17[5];
        dVar12 = pdVar17[7];
        pdVar20[6] = pdVar17[6];
        pdVar20[7] = dVar12;
        pdVar20[4] = dVar10;
        pdVar20[5] = dVar11;
        pdVar20[2] = dVar8;
        pdVar20[3] = dVar9;
        *pdVar20 = dVar6;
        pdVar20[1] = dVar7;
        local_38._0_4_ = SUB84(dVar2,0);
        local_38._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        uStack_30._0_4_ = SUB84(dVar3,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_28._0_4_ = SUB84(dVar4,0);
        local_28._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_20._0_4_ = SUB84(dVar5,0);
        uStack_20._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        *(undefined4 *)(pdVar17 + 6) = (undefined4)local_28;
        *(undefined4 *)((longlong)pdVar17 + 0x34) = local_28._4_4_;
        *(undefined4 *)(pdVar17 + 7) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)pdVar17 + 0x3c) = uStack_20._4_4_;
        *(undefined4 *)(pdVar17 + 4) = (undefined4)local_38;
        *(undefined4 *)((longlong)pdVar17 + 0x24) = local_38._4_4_;
        *(undefined4 *)(pdVar17 + 5) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)pdVar17 + 0x2c) = uStack_30._4_4_;
        pdVar17[2] = local_48;
        pdVar17[3] = uStack_40;
        *pdVar17 = local_58;
        pdVar17[1] = uStack_50;
        local_38 = dVar2;
        uStack_30 = dVar3;
        local_28 = dVar4;
        uStack_20 = dVar5;
      }
    }
    dVar2 = *param_2;
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < *pdVar1) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      dVar2 = param_2[2];
      dVar3 = param_2[3];
      dVar4 = param_2[4];
      dVar5 = param_2[5];
      dVar6 = param_2[6];
      dVar7 = param_2[7];
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      dVar10 = pdVar1[2];
      dVar11 = pdVar1[3];
      dVar12 = pdVar1[4];
      dVar13 = pdVar1[5];
      dVar14 = pdVar1[7];
      param_2[6] = pdVar1[6];
      param_2[7] = dVar14;
      param_2[4] = dVar12;
      param_2[5] = dVar13;
      param_2[2] = dVar10;
      param_2[3] = dVar11;
      *param_2 = dVar8;
      param_2[1] = dVar9;
      local_48._0_4_ = SUB84(dVar2,0);
      local_48._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_40._0_4_ = SUB84(dVar3,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_38._0_4_ = SUB84(dVar4,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar5,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_28._0_4_ = SUB84(dVar6,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar7,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(pdVar1 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)pdVar1 + 0x34) = local_28._4_4_;
      *(undefined4 *)(pdVar1 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)pdVar1 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(pdVar1 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)pdVar1 + 0x24) = local_38._4_4_;
      *(undefined4 *)(pdVar1 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)pdVar1 + 0x2c) = uStack_30._4_4_;
      *(undefined4 *)(pdVar1 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)pdVar1 + 0x14) = local_48._4_4_;
      *(undefined4 *)(pdVar1 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)pdVar1 + 0x1c) = uStack_40._4_4_;
      *pdVar1 = local_58;
      pdVar1[1] = uStack_50;
      uVar21 = SUB84(*param_2,0);
      uVar22 = (undefined4)((ulonglong)*param_2 >> 0x20);
      local_48 = dVar2;
      uStack_40 = dVar3;
      local_38 = dVar4;
      uStack_30 = dVar5;
      local_28 = dVar6;
      uStack_20 = dVar7;
    }
    if (*pdVar20 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != *pdVar20)
    {
      local_58 = *pdVar20;
      uStack_50 = pdVar20[1];
      dVar2 = pdVar20[2];
      dVar3 = pdVar20[3];
      dVar4 = pdVar20[4];
      dVar5 = pdVar20[5];
      dVar6 = pdVar20[6];
      dVar7 = pdVar20[7];
      dVar8 = *param_2;
      dVar9 = param_2[1];
      dVar10 = param_2[2];
      dVar11 = param_2[3];
      dVar12 = param_2[4];
      dVar13 = param_2[5];
      dVar14 = param_2[7];
      pdVar20[6] = param_2[6];
      pdVar20[7] = dVar14;
      pdVar20[4] = dVar12;
      pdVar20[5] = dVar13;
      pdVar20[2] = dVar10;
      pdVar20[3] = dVar11;
      *pdVar20 = dVar8;
      pdVar20[1] = dVar9;
      local_48._0_4_ = SUB84(dVar2,0);
      local_48._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_40._0_4_ = SUB84(dVar3,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_38._0_4_ = SUB84(dVar4,0);
      local_38._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_30._0_4_ = SUB84(dVar5,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_28._0_4_ = SUB84(dVar6,0);
      local_28._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_20._0_4_ = SUB84(dVar7,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      local_48 = dVar2;
      uStack_40 = dVar3;
      local_38 = dVar4;
      uStack_30 = dVar5;
      local_28 = dVar6;
      uStack_20 = dVar7;
      if (*param_2 <= *pdVar1 && *pdVar1 != *param_2) {
        dVar2 = *param_2;
        dVar3 = param_2[1];
        dVar4 = param_2[2];
        dVar5 = param_2[3];
        dVar6 = param_2[4];
        dVar7 = param_2[5];
        dVar8 = param_2[6];
        dVar9 = param_2[7];
        dVar10 = *pdVar1;
        dVar11 = pdVar1[1];
        dVar12 = pdVar1[2];
        dVar13 = pdVar1[3];
        dVar14 = pdVar1[4];
        dVar15 = pdVar1[5];
        dVar16 = pdVar1[7];
        param_2[6] = pdVar1[6];
        param_2[7] = dVar16;
        param_2[4] = dVar14;
        param_2[5] = dVar15;
        param_2[2] = dVar12;
        param_2[3] = dVar13;
        *param_2 = dVar10;
        param_2[1] = dVar11;
        local_58._0_4_ = SUB84(dVar2,0);
        local_58._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        uStack_50._0_4_ = SUB84(dVar3,0);
        uStack_50._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_48._0_4_ = SUB84(dVar4,0);
        local_48._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_40._0_4_ = SUB84(dVar5,0);
        uStack_40._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_38._0_4_ = SUB84(dVar6,0);
        local_38._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_30._0_4_ = SUB84(dVar7,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_28._0_4_ = SUB84(dVar8,0);
        local_28._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_20._0_4_ = SUB84(dVar9,0);
        uStack_20._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
        *(undefined4 *)(pdVar1 + 6) = (undefined4)local_28;
        *(undefined4 *)((longlong)pdVar1 + 0x34) = local_28._4_4_;
        *(undefined4 *)(pdVar1 + 7) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)pdVar1 + 0x3c) = uStack_20._4_4_;
        *(undefined4 *)(pdVar1 + 4) = (undefined4)local_38;
        *(undefined4 *)((longlong)pdVar1 + 0x24) = local_38._4_4_;
        *(undefined4 *)(pdVar1 + 5) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)pdVar1 + 0x2c) = uStack_30._4_4_;
        *(undefined4 *)(pdVar1 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)pdVar1 + 0x14) = local_48._4_4_;
        *(undefined4 *)(pdVar1 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)pdVar1 + 0x1c) = uStack_40._4_4_;
        *(undefined4 *)pdVar1 = (undefined4)local_58;
        *(undefined4 *)((longlong)pdVar1 + 4) = local_58._4_4_;
        *(undefined4 *)(pdVar1 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_50._4_4_;
        local_58 = dVar2;
        uStack_50 = dVar3;
        local_48 = dVar4;
        uStack_40 = dVar5;
        local_38 = dVar6;
        uStack_30 = dVar7;
        local_28 = dVar8;
        uStack_20 = dVar9;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827cf34 FUN_14827cf34 body=147 status=ok
// SIG undefined FUN_14827cf34(void)

void FUN_14827cf34(longlong param_1,int param_2)

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



// FUNCTION 14827cfc8 FUN_14827cfc8 body=62 status=ok
// SIG undefined FUN_14827cfc8(void)

void FUN_14827cfc8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14827d006(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14827d006 FUN_14827d006 body=112 status=ok
// SIG undefined FUN_14827d006(void)

ulonglong FUN_14827d006(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14827d040;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14827d040:
  return param_2 & 0xffffffff;
}



// FUNCTION 14827d076 FUN_14827d076 body=628 status=ok
// SIG undefined FUN_14827d076(void)

void FUN_14827d076(double *param_1,uint param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  undefined1 *local_f8;
  double *local_f0;
  double local_e8 [6];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined1 local_a0 [24];
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 != 0 && 1 < (int)param_2) {
    local_88[0] = 0.0;
    local_88[1] = 0.0;
    local_88[2] = 0.0;
    uVar3 = 0;
    lVar4 = param_3;
    do {
      lVar5 = 0;
      do {
        local_88[lVar5] = *(double *)(lVar4 + lVar5 * 8) + local_88[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar3 != param_2);
    dVar9 = 1.0 / (double)(int)param_2;
    lVar4 = 0;
    do {
      local_88[lVar4] = local_88[lVar4] * dVar9;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_100 = 0.0;
    uVar3 = 0;
    local_108 = 0.0;
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar2 = 0.0;
    do {
      local_e8[2] = *(double *)(param_3 + 0x10 + uVar3 * 0x18);
      pdVar1 = (double *)(param_3 + uVar3 * 0x18);
      local_e8[0] = *pdVar1;
      local_e8[1] = pdVar1[1];
      lVar4 = 0;
      do {
        local_e8[lVar4] = local_e8[lVar4] - local_88[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      dVar2 = dVar2 + local_e8[0] * local_e8[0];
      dVar6 = dVar6 + local_e8[0] * local_e8[1];
      dVar7 = dVar7 + local_e8[0] * local_e8[2];
      dVar8 = dVar8 + local_e8[1] * local_e8[1];
      local_108 = local_108 + local_e8[1] * local_e8[2];
      local_100 = local_100 + local_e8[2] * local_e8[2];
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
    local_108 = local_108 * dVar9;
    local_100 = local_100 * dVar9;
    local_f0 = local_e8;
    local_f8 = local_a0;
    FUN_14827d55a(SUB84(dVar2 * dVar9,0),dVar6 * dVar9,dVar7 * dVar9,dVar8 * dVar9);
    param_1[2] = local_88[2];
    *param_1 = local_88[0];
    param_1[1] = local_88[1];
    *(undefined4 *)(param_1 + 3) = local_b8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_b4;
    *(undefined4 *)(param_1 + 4) = uStack_b0;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_ac;
    param_1[5] = local_a8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_128);
  }
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827d2f0 FUN_14827d2f0 body=416 status=ok
// SIG undefined FUN_14827d2f0(void)

double * FUN_14827d2f0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  double local_88 [4];
  double local_68 [4];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = *param_2;
  local_88[1] = param_2[1];
  local_88[2] = param_2[2];
  lVar2 = 0;
  do {
    local_88[lVar2] = local_88[lVar2] - param_3[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_88[0] = param_3[3] * local_88[0];
  lVar2 = 1;
  do {
    local_88[0] = local_88[0] + param_3[lVar2 + 3] * local_88[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  param_1[2] = local_88[0];
  local_68[2] = param_3[5];
  local_68[0] = param_3[3];
  local_68[1] = param_3[4];
  lVar2 = 0;
  do {
    local_68[lVar2] = local_68[lVar2] * local_88[0];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_48[2] = param_3[2];
  local_48[0] = *param_3;
  local_48[1] = param_3[1];
  lVar2 = 0;
  do {
    local_48[lVar2] = local_68[lVar2] + local_48[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  param_1[5] = local_48[2];
  param_1[3] = local_48[0];
  param_1[4] = local_48[1];
  local_28[0] = *param_2;
  local_28[1] = param_2[1];
  local_28[2] = param_2[2];
  lVar2 = 0;
  do {
    local_28[lVar2] = local_28[lVar2] - param_1[lVar2 + 3];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_88[0] = local_28[0];
  local_88[1] = local_28[1];
  local_88[2] = local_28[2];
  dVar1 = local_28[2] * local_28[2] + local_28[1] * local_28[1] + local_28[0] * local_28[0];
  param_1[1] = dVar1;
  *param_1 = SQRT(dVar1);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14827d491 FUN_14827d491 body=200 status=ok
// SIG undefined FUN_14827d491(void)

void FUN_14827d491(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar7 = 0.0;
  if (ABS(dVar2) < ABS(dVar1)) {
    dVar6 = -dVar3;
  }
  else {
    dVar6 = 0.0;
    dVar7 = dVar3;
  }
  uVar4 = -(ulonglong)(ABS(dVar2) < ABS(dVar1));
  dVar5 = (double)(~uVar4 & (ulonglong)-dVar2 | uVar4 & (ulonglong)dVar1);
  param_1[3] = dVar6;
  param_1[4] = dVar7;
  param_1[5] = dVar5;
  param_1[6] = dVar2 * dVar5 - dVar7 * dVar3;
  param_1[7] = dVar3 * dVar6 - dVar5 * dVar1;
  param_1[8] = dVar1 * dVar7 - dVar6 * dVar2;
  FUN_14827e02a();
  return;
}



// FUNCTION 14827d55a FUN_14827d55a body=2767 status=ok
// SIG undefined FUN_14827d55a(void)

void FUN_14827d55a(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_138 [40];
  double local_110 [12];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar18 = ABS(param_3);
  if (ABS(param_3) <= ABS(param_5)) {
    dVar18 = ABS(param_5);
  }
  local_110[4] = 0.0;
  if (dVar18 <= 0.0) {
    local_110[3] = -1.0;
  }
  else {
    local_110[3] = param_5 / dVar18;
    dVar18 = -param_3 / dVar18;
    local_110[4] = SQRT(local_110[3] * local_110[3] + dVar18 * dVar18);
    local_110[3] = local_110[3] / local_110[4];
    local_110[4] = dVar18 / local_110[4];
    if (0.0 < local_110[3]) {
      local_110[3] = -local_110[3];
      local_110[4] = -local_110[4];
    }
  }
  uVar6 = 0;
  local_110[5] = 0.0;
  local_110[6] = local_110[4];
  local_110[7] = -local_110[3];
  local_110[8] = 0.0;
  local_110[9] = 0.0;
  local_110[10] = 0.0;
  local_110[0xb] = 1.0;
  dVar19 = local_110[3] * param_1 + local_110[4] * param_2;
  dVar18 = local_110[4] * param_4 + param_2 * local_110[3];
  dVar16 = local_110[3] * dVar19 + local_110[4] * dVar18;
  dVar17 = dVar19 * local_110[4] - dVar18 * local_110[3];
  dVar19 = (param_1 * local_110[4] - param_2 * local_110[3]) * local_110[4] -
           (local_110[4] * param_2 - param_4 * local_110[3]) * local_110[3];
  dVar18 = param_3 * local_110[4] - param_5 * local_110[3];
  if (ABS(dVar18) <= ABS(dVar17)) {
LAB_14827d979:
    dVar15 = param_6;
    dVar11 = (dVar16 - dVar19) * 0.5;
    dVar13 = ABS(dVar11);
    dVar12 = ABS(dVar17);
    if (ABS(dVar17) <= dVar13) {
      dVar12 = dVar13;
    }
    dVar14 = -1.0;
    dVar13 = 0.0;
    if (0.0 < dVar12) {
      dVar11 = dVar11 / dVar12;
      dVar12 = dVar17 / dVar12;
      dVar13 = SQRT(dVar11 * dVar11 + dVar12 * dVar12);
      dVar14 = dVar11 / dVar13;
      dVar13 = dVar12 / dVar13;
      if (0.0 < dVar14) {
        dVar14 = -dVar14;
        dVar13 = -dVar13;
      }
    }
    dVar12 = (1.0 - dVar14) * 0.5;
    if (dVar12 < 0.0) {
      dVar12 = sqrt(dVar12);
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    dVar11 = (dVar13 * 0.5) / dVar12;
    lVar3 = 0x10;
    do {
      dVar13 = *(double *)((longlong)local_110 + lVar3 + 8);
      dVar14 = *(double *)((longlong)local_110 + lVar3 + 0x10);
      *(double *)((longlong)local_110 + lVar3 + 8) = dVar11 * dVar13 + dVar12 * dVar14;
      *(undefined8 *)((longlong)local_110 + lVar3 + 0x10) =
           *(undefined8 *)((longlong)local_110 + lVar3 + 0x18);
      *(double *)((longlong)local_110 + lVar3 + 0x18) = dVar14 * dVar11 - dVar13 * dVar12;
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0x58);
    dVar13 = (dVar11 * dVar16 + dVar17 * dVar12) * dVar11 +
             (dVar19 * dVar12 + dVar11 * dVar17) * dVar12;
    param_6 = (dVar11 * dVar19 - dVar17 * dVar12) * dVar11 -
              (dVar11 * dVar17 - dVar16 * dVar12) * dVar12;
    dVar17 = dVar12 * dVar18;
    dVar16 = ABS(dVar15) + ABS(dVar13);
    dVar19 = ABS(dVar17);
    if ((dVar19 + dVar16 != dVar16) || (NAN(dVar19 + dVar16) || NAN(dVar16))) goto LAB_14827db37;
    dVar18 = (dVar13 - dVar15) * 0.5;
    dVar16 = ABS(dVar18);
    if (dVar19 <= dVar16) {
      dVar19 = dVar16;
    }
    if (dVar19 <= 0.0) {
      dVar18 = -1.0;
      dVar19 = 0.0;
    }
    else {
      dVar18 = dVar18 / dVar19;
      dVar19 = dVar17 / dVar19;
      dVar16 = SQRT(dVar18 * dVar18 + dVar19 * dVar19);
      dVar18 = dVar18 / dVar16;
      dVar19 = dVar19 / dVar16;
      if (0.0 < dVar18) {
        dVar18 = -dVar18;
        dVar19 = -dVar19;
      }
    }
    dVar18 = (1.0 - dVar18) * 0.5;
    if (dVar18 < 0.0) {
      dVar18 = sqrt(dVar18);
    }
    else {
      dVar18 = SQRT(dVar18);
    }
    dVar19 = (dVar19 * 0.5) / dVar18;
    lVar3 = 8;
    do {
      dVar16 = *(double *)((longlong)local_110 + lVar3 + 0x10);
      dVar12 = *(double *)((longlong)local_110 + lVar3 + 0x18);
      *(double *)((longlong)local_110 + lVar3 + 0x10) = dVar19 * dVar16 + dVar18 * dVar12;
      *(double *)((longlong)local_110 + lVar3 + 0x18) = dVar16 * dVar18 - dVar12 * dVar19;
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0x50);
    dVar16 = (dVar19 * dVar13 + dVar17 * dVar18) * dVar19 +
             (dVar15 * dVar18 + dVar19 * dVar17) * dVar18;
    dVar15 = (dVar13 * dVar18 - dVar19 * dVar17) * dVar18 -
             (dVar17 * dVar18 - dVar15 * dVar19) * dVar19;
    goto LAB_14827de45;
  }
  uVar6 = 0;
  dVar15 = param_6;
LAB_14827d769:
  dVar12 = dVar16;
  dVar11 = (dVar15 - dVar19) * 0.5;
  dVar13 = ABS(dVar11);
  dVar16 = ABS(dVar18);
  if (ABS(dVar18) <= dVar13) {
    dVar16 = dVar13;
  }
  dVar14 = -1.0;
  dVar13 = 0.0;
  if (0.0 < dVar16) {
    dVar11 = dVar11 / dVar16;
    dVar16 = dVar18 / dVar16;
    dVar13 = SQRT(dVar11 * dVar11 + dVar16 * dVar16);
    dVar14 = dVar11 / dVar13;
    dVar13 = dVar16 / dVar13;
    if (0.0 < dVar14) {
      dVar14 = -dVar14;
      dVar13 = -dVar13;
    }
  }
  dVar11 = (1.0 - dVar14) * 0.5;
  if (dVar11 < 0.0) {
    dVar11 = sqrt(dVar11);
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  dVar13 = (dVar13 * 0.5) / dVar11;
  lVar3 = 0x10;
  do {
    uVar1 = *(undefined8 *)((longlong)local_110 + lVar3 + 8);
    dVar16 = *(double *)((longlong)local_110 + lVar3 + 0x10);
    dVar14 = *(double *)((longlong)local_110 + lVar3 + 0x18);
    *(double *)((longlong)local_110 + lVar3 + 8) = dVar13 * dVar16 - dVar11 * dVar14;
    *(undefined8 *)((longlong)local_110 + lVar3 + 0x10) = uVar1;
    *(double *)((longlong)local_110 + lVar3 + 0x18) = dVar14 * dVar13 + dVar16 * dVar11;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x58);
  param_6 = (dVar13 * dVar15 + dVar18 * dVar11) * dVar13 +
            (dVar19 * dVar11 + dVar13 * dVar18) * dVar11;
  dVar16 = (dVar13 * dVar19 - dVar18 * dVar11) * dVar13 -
           (dVar13 * dVar18 - dVar15 * dVar11) * dVar11;
  dVar18 = dVar11 * dVar17;
  dVar15 = ABS(param_6) + ABS(dVar12);
  dVar19 = ABS(dVar18);
  if ((dVar19 + dVar15 != dVar15) || (NAN(dVar19 + dVar15) || NAN(dVar15))) goto LAB_14827d929;
  dVar15 = (dVar12 - param_6) * 0.5;
  dVar17 = ABS(dVar15);
  if (dVar19 <= dVar17) {
    dVar19 = dVar17;
  }
  if (dVar19 <= 0.0) {
    dVar15 = -1.0;
    dVar19 = 0.0;
  }
  else {
    dVar15 = dVar15 / dVar19;
    dVar19 = dVar18 / dVar19;
    dVar17 = SQRT(dVar15 * dVar15 + dVar19 * dVar19);
    dVar15 = dVar15 / dVar17;
    dVar19 = dVar19 / dVar17;
    if (0.0 < dVar15) {
      dVar15 = -dVar15;
      dVar19 = -dVar19;
    }
  }
  dVar17 = (1.0 - dVar15) * 0.5;
  if (dVar17 < 0.0) {
    dVar17 = sqrt(dVar17);
  }
  else {
    dVar17 = SQRT(dVar17);
  }
  dVar19 = (dVar19 * 0.5) / dVar17;
  lVar3 = 0x10;
  do {
    dVar15 = *(double *)((longlong)local_110 + lVar3 + 0x10);
    dVar11 = *(double *)((longlong)local_110 + lVar3 + 0x18);
    *(double *)((longlong)local_110 + lVar3 + 0x10) = dVar19 * dVar15 + dVar17 * dVar11;
    *(double *)((longlong)local_110 + lVar3 + 0x18) = dVar15 * dVar17 - dVar11 * dVar19;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x58);
  dVar15 = (dVar19 * dVar12 + dVar18 * dVar17) * dVar19 +
           (param_6 * dVar17 + dVar19 * dVar18) * dVar17;
  param_6 = (dVar12 * dVar17 - dVar19 * dVar18) * dVar17 -
            (dVar18 * dVar17 - param_6 * dVar19) * dVar19;
  goto LAB_14827de45;
LAB_14827db37:
  dVar18 = dVar18 * dVar11;
  uVar6 = uVar6 + 1;
  dVar16 = dVar13;
  dVar19 = dVar15;
  if (uVar6 == 0x866) goto code_r0x00014827db5c;
  goto LAB_14827d979;
code_r0x00014827db5c:
  uVar6 = 0;
  goto LAB_14827de45;
LAB_14827d929:
  dVar17 = dVar17 * dVar13;
  uVar6 = uVar6 + 1;
  dVar15 = param_6;
  dVar19 = dVar12;
  if (uVar6 == 0x866) goto code_r0x00014827d953;
  goto LAB_14827d769;
code_r0x00014827d953:
  uVar6 = 0;
  dVar15 = dVar12;
LAB_14827de45:
  local_110[0] = dVar16;
  local_110[1] = dVar15;
  local_110[2] = param_6;
  if (dVar15 <= dVar16) {
    if (param_6 < dVar15) {
      uVar6 = (uint)(byte)((byte)uVar6 ^ 1);
      iVar7 = 1;
      iVar9 = 2;
      iVar4 = 0;
      goto LAB_14827de96;
    }
    iVar4 = 0;
    iVar9 = 1;
    iVar7 = 2;
    iVar2 = iVar7;
    if (param_6 < dVar16) goto LAB_14827de96;
  }
  else {
    if (param_6 < dVar16) {
      iVar9 = 2;
      iVar4 = 1;
      iVar7 = 0;
      goto LAB_14827de96;
    }
    iVar9 = 0;
    iVar7 = 1;
    iVar4 = 2;
    iVar2 = iVar7;
    if (dVar15 <= param_6) goto LAB_14827de96;
  }
  iVar7 = iVar4;
  iVar4 = iVar2;
  uVar6 = (uint)(byte)((byte)uVar6 ^ 1);
LAB_14827de96:
  uVar10 = (ulonglong)(uint)(iVar9 << 3);
  *param_7 = *(undefined8 *)((longlong)local_110 + uVar10);
  uVar8 = (ulonglong)(uint)(iVar7 << 3);
  param_7[1] = *(undefined8 *)((longlong)local_110 + uVar8);
  uVar5 = (ulonglong)(uint)(iVar4 << 3);
  param_7[2] = *(undefined8 *)((longlong)local_110 + uVar5);
  *param_8 = *(undefined8 *)((longlong)local_110 + uVar10 + 0x18);
  param_8[1] = *(undefined8 *)((longlong)local_110 + uVar10 + 0x30);
  param_8[2] = *(undefined8 *)((longlong)local_110 + uVar10 + 0x48);
  param_8[3] = *(undefined8 *)((longlong)local_110 + uVar8 + 0x18);
  param_8[4] = *(undefined8 *)((longlong)local_110 + uVar8 + 0x30);
  param_8[5] = *(undefined8 *)((longlong)local_110 + uVar8 + 0x48);
  param_8[6] = *(undefined8 *)((longlong)local_110 + uVar5 + 0x18);
  param_8[7] = *(undefined8 *)((longlong)local_110 + uVar5 + 0x30);
  param_8[8] = *(undefined8 *)((longlong)local_110 + uVar5 + 0x48);
  if ((uVar6 & 1) == 0) {
    lVar3 = 0;
    do {
      param_8[lVar3 + 6] = param_8[lVar3 + 6] ^ 0x8000000000000000;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14827e02a FUN_14827e02a body=310 status=ok
// SIG undefined FUN_14827e02a(void)

void FUN_14827e02a(longlong param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  double local_68 [4];
  double local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    dVar9 = (double)FUN_14827be90();
    lVar4 = 1;
    bVar5 = false;
    do {
      pdVar1 = (double *)(param_1 + lVar4 * 0x18);
      lVar7 = 0;
      lVar6 = param_1 + 8;
      do {
        pdVar2 = (double *)(param_1 + lVar7 * 0x18);
        dVar10 = *pdVar1 * *pdVar2;
        lVar8 = 0;
        do {
          dVar10 = dVar10 + *(double *)(lVar4 * 0x18 + param_1 + 8 + lVar8 * 8) *
                            *(double *)(lVar6 + lVar8 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 2);
        local_48[2] = pdVar2[2];
        local_48[0] = *pdVar2;
        local_48[1] = pdVar2[1];
        lVar8 = 0;
        do {
          local_48[lVar8] = local_48[lVar8] * dVar10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        local_68[2] = local_48[2];
        local_68[0] = local_48[0];
        local_68[1] = local_48[1];
        lVar8 = 0;
        do {
          pdVar1[lVar8] = pdVar1[lVar8] - local_68[lVar8];
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 != lVar4);
      dVar10 = (double)FUN_14827be90();
      if (dVar9 <= dVar10) {
        dVar10 = dVar9;
      }
      dVar9 = dVar10;
      lVar4 = 2;
      bVar3 = !bVar5;
      bVar5 = true;
    } while (bVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14827e162 FUN_14827e162 body=301 status=ok
// SIG undefined FUN_14827e162(void)

void FUN_14827e162(double *param_1,double *param_2,double *param_3,double param_4)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  double local_88 [4];
  double local_68 [4];
  double local_48 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = *param_3;
  local_88[1] = param_3[1];
  local_88[2] = param_3[2];
  lVar1 = 0;
  do {
    local_88[lVar1] = local_88[lVar1] * param_4;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  lVar1 = 0;
  do {
    local_68[lVar1] = local_68[lVar1] - local_88[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  param_1[2] = local_68[2];
  *param_1 = local_68[0];
  param_1[1] = local_68[1];
  local_48[0] = *param_3;
  local_48[1] = param_3[1];
  local_48[2] = param_3[2];
  lVar1 = 0;
  do {
    local_48[lVar1] = local_48[lVar1] * param_4;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  local_18 = param_2[2];
  local_28 = *param_2;
  uStack_20 = param_2[1];
  lVar1 = 0;
  do {
    (&local_28)[lVar1] = local_48[lVar1] + (double)(&local_28)[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  param_1[5] = local_18;
  *(undefined4 *)(param_1 + 3) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_20._4_4_;
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827e290 FUN_14827e290 body=31 status=ok
// SIG undefined FUN_14827e290(void)

undefined8 FUN_14827e290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14827e2cc FUN_14827e2cc body=93 status=ok
// SIG undefined FUN_14827e2cc(void)

void FUN_14827e2cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae718d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14827e32a FUN_14827e32a body=123 status=ok
// SIG undefined FUN_14827e32a(void)

void FUN_14827e32a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae718d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14827e3a6 FUN_14827e3a6 body=21 status=ok
// SIG undefined FUN_14827e3a6(void)

undefined8 FUN_14827e3a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14827e3ea FUN_14827e3ea body=1739 status=ok
// SIG undefined FUN_14827e3ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14827e3ea(undefined1 (*param_1) [16],uint param_2,longlong param_3,undefined8 *param_4
                       )

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  char cVar6;
  undefined8 *puVar7;
  char *_Dst;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 in_XMM0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_508 [32];
  char **local_4e8;
  undefined8 *local_4d8;
  ulonglong local_4d0;
  longlong local_4c8;
  undefined1 (*local_4c0) [16];
  ulonglong local_4b8;
  longlong local_4b0;
  ulonglong local_4a8;
  longlong local_4a0;
  undefined1 local_498 [16];
  undefined8 local_488;
  char *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  int local_460 [8];
  undefined8 local_440;
  undefined1 local_438 [8];
  undefined1 local_430 [24];
  undefined8 local_418;
  undefined1 local_410 [8];
  undefined1 local_408 [184];
  undefined1 local_350 [80];
  char local_300;
  undefined1 local_2f8 [240];
  undefined1 local_208 [80];
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_180;
  undefined1 local_178 [56];
  undefined8 local_140;
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  longlong local_b8 [9];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if (param_3 == 0 || (int)param_2 < 1) {
    uVar8 = 0;
    local_1b0 = 0;
    local_1b8 = (char *)FUN_14001cc68(0x20,0x10);
    local_1a8 = 0x1a;
    local_1a0 = 0x1f;
    builtin_strncpy(local_1b8,"Input must contain points.",0x1b);
    local_4e8 = &local_1b8;
    FUN_14828b062(&local_440,
                  ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteMinimumVolumeSphere3.h"
                  ,
                  "gte::MinimumVolumeSphere3<double, class gte::BSRational<class gte::UIntegerAP32>>::operator()"
                  ,0x94);
    FUN_14828b4e0(&local_440);
    FUN_1401d9a90(&local_440);
    FUN_1401d9a90(&local_1b8);
    param_4[2] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[3] = 0x7fefffffffffffff;
  }
  else {
    puVar7 = &local_140;
    uVar8 = 0;
    auVar19 = pmovsxbq(in_XMM0,0x100);
    do {
      if ((longlong)(uVar8 ^ DAT_149931e80) < -0x7ffffffffffffffb) {
        puVar7[-8] = 0;
      }
      auVar20._8_4_ = (int)uVar8;
      auVar20._0_8_ = uVar8;
      auVar20._12_4_ = (int)(uVar8 >> 0x20);
      if ((longlong)((auVar20._8_8_ | auVar19._8_8_) ^ DAT_149931e80._8_8_) < -0x7ffffffffffffffb) {
        *puVar7 = 0;
      }
      uVar8 = uVar8 + 2;
      puVar7 = puVar7 + 0x10;
    } while (uVar8 != 6);
    local_440 = param_1;
    FUN_14827f0c6(local_178,&local_440);
    local_440 = param_1;
    FUN_14827f13a(local_138,&local_440);
    local_440 = param_1;
    FUN_14827f1ae(local_f8,&local_440);
    local_440 = param_1;
    FUN_14827f222(local_b8,&local_440);
    local_498 = (undefined1  [16])0x0;
    local_488 = 0;
    FUN_14694ba62(local_498,(ulonglong)param_2);
    uVar8 = 0;
    do {
      *(int *)(local_498._0_8_ + uVar8 * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    local_4d8 = param_4;
    FUN_1482863ce(local_498._0_8_,local_498._8_8_,(longlong)(local_498._8_8_ - local_498._0_8_) >> 2
                  ,param_3);
    local_4c8 = param_3;
    FUN_14827f295(&local_4a0,local_498._0_8_,local_498._8_8_,param_3);
    lVar13 = local_498._8_8_;
    if (local_4a0 != local_498._8_8_) {
      local_498._8_8_ = local_4a0;
      lVar13 = local_4a0;
    }
    uVar8 = (ulonglong)(lVar13 - local_498._0_8_) >> 2;
    FUN_14827f35c(local_498._0_8_,lVar13,param_1[1] + 4);
    iVar11 = (int)uVar8;
    local_4d0 = uVar8;
    local_4c0 = param_1;
    FUN_148286eb8(param_1 + 0x13a,(longlong)iVar11);
    if (0 < iVar11) {
      local_4b8 = (ulonglong)((uint)local_4d0 & 0x7fffffff);
      lVar13 = 0x30;
      uVar8 = 0;
      do {
        lVar12 = 0;
        local_4b0 = lVar13;
        local_4a8 = uVar8;
        do {
          FUN_14828b7a0(local_438);
          FUN_148287250(&local_440);
          FUN_14828b7a0(local_410);
          FUN_148287250(&local_418);
          lVar2 = *(longlong *)param_1[0x13a];
          lVar1 = lVar13 + lVar2;
          *(undefined4 *)(lVar1 + -0x30) = (undefined4)local_440;
          *(undefined4 *)(lVar1 + -0x2c) = local_440._4_4_;
          FUN_14828b9da(lVar1 + -0x28,local_438);
          local_440 = (undefined1 (*) [16])0x0;
          *(undefined4 *)(lVar1 + -8) = (undefined4)local_418;
          *(undefined4 *)(lVar1 + -4) = local_418._4_4_;
          FUN_14828b9da(lVar2 + lVar13,local_410);
          local_418 = 0;
          FUN_148276cee(local_408);
          FUN_148276cee(local_430);
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 0x50;
        } while (lVar12 != 3);
        uVar8 = local_4a8 + 1;
        lVar13 = local_4b0 + 0xf0;
      } while (uVar8 != local_4b8);
    }
    pauVar5 = local_4c0;
    puVar14 = local_2f8;
    FUN_14827f406();
    uVar8 = local_4d0;
    *(undefined8 *)*pauVar5 = 1;
    iVar11 = 0;
    uVar10 = 1;
    iVar15 = (int)local_4d0;
    if ((1 % (longlong)iVar15 & 1U) != 0) {
      do {
        iVar9 = (int)uVar10;
        if (0 < (longlong)*(int *)*pauVar5) {
          lVar13 = 0;
          do {
            if (*(int *)(*pauVar5 + lVar13 * 4 + 4) == iVar9) goto LAB_14827e8e9;
            lVar13 = lVar13 + 1;
          } while (*(int *)*pauVar5 != lVar13);
        }
        cVar6 = FUN_14827f4ea(pauVar5,uVar10,puVar14);
        if (cVar6 == '\0') {
          plVar16 = (longlong *)(&local_180)[(longlong)*(int *)*pauVar5 * 8];
          local_460[0] = iVar9;
          if (plVar16 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar16 + 0x10))(plVar16,&local_440,local_460);
          if (local_300 != '\x01') {
            local_478 = 0;
            _Dst = (char *)FUN_14001cc68(0x50,0x10);
            local_470 = 0x4c;
            local_468 = 0x4f;
            local_480 = _Dst;
            memcpy(_Dst,
                   "ComputeType is not exact and failure occurred. Returning non-minimal sphere.",
                   0x4c);
            _Dst[0x4c] = '\0';
            local_4e8 = &local_480;
            FUN_14828b062(local_460,
                          ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteMinimumVolumeSphere3.h"
                          ,
                          "gte::MinimumVolumeSphere3<double, class gte::BSRational<class gte::UIntegerAP32>>::operator()"
                          ,0x7b);
            FUN_14828b5be(local_460);
            FUN_1401d9a90(local_460);
            FUN_1401d9a90(&local_480);
            FUN_14827f625(uVar8 & 0xffffffff,local_4c8,local_4d8);
            *pauVar5 = (undefined1  [16])0x0;
            *(undefined4 *)pauVar5[1] = 0;
            FUN_14827f798(&local_440);
            uVar8 = 0;
            goto LAB_14827e99a;
          }
          cVar6 = FUN_148281c76(local_208,local_350);
          if (cVar6 != '\0') {
            FUN_14827f5b6(puVar14,&local_440);
            iVar11 = iVar9;
          }
          FUN_14827f798();
        }
LAB_14827e8e9:
        uVar4 = (longlong)(iVar9 + 1) % (longlong)iVar15;
        uVar10 = uVar4 & 0xffffffff;
      } while ((int)uVar4 != iVar11);
    }
    puVar7 = local_4d8;
    lVar13 = 0;
    do {
      uVar17 = FUN_1482878ac(puVar14);
      puVar7[lVar13] = uVar17;
      lVar13 = lVar13 + 1;
      puVar14 = puVar14 + 0x50;
    } while (lVar13 != 3);
    dVar18 = (double)FUN_1482878ac(local_208);
    if (dVar18 < 0.0) {
      dVar18 = sqrt(dVar18);
    }
    else {
      dVar18 = SQRT(dVar18);
    }
    puVar7[3] = dVar18;
    iVar11 = *(int *)*pauVar5;
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    if (0 < (longlong)iVar11) {
      lVar13 = 0;
      do {
        *(undefined4 *)(*pauVar5 + lVar13 * 4 + 4) =
             *(undefined4 *)(local_498._0_8_ + (longlong)*(int *)(*pauVar5 + lVar13 * 4 + 4) * 4);
        lVar13 = lVar13 + 1;
      } while (iVar11 != lVar13);
    }
LAB_14827e99a:
    plVar16 = local_b8;
    FUN_14827f798(local_2f8);
    FUN_14627a26c(local_498);
    lVar13 = -0x140;
    do {
      plVar3 = (longlong *)plVar16[7];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,plVar16 != plVar3);
        plVar16[7] = 0;
      }
      plVar16 = plVar16 + -8;
      lVar13 = lVar13 + 0x40;
    } while (lVar13 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14827eab8 FUN_14827eab8 body=1548 status=ok
// SIG undefined FUN_14827eab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14827eab8(int *param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_2a8 [32];
  int **local_288;
  undefined8 *local_278;
  longlong local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  int *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  int local_228 [8];
  int *local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  char local_1e8;
  int *local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [56];
  longlong local_180;
  undefined1 local_178 [56];
  undefined8 local_140;
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  longlong local_b8 [9];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_3 == 0 || (int)param_2 < 1) {
    uVar5 = 0;
    dStack_200 = 0.0;
    local_208 = (int *)FUN_14001cc68(0x20,0x10);
    local_1f8 = 1.28457067918724e-322;
    dStack_1f0 = 1.53160350210786e-322;
    *(undefined8 *)local_208 = 0x756d207475706e49;
    *(undefined8 *)(local_208 + 2) = 0x61746e6f63207473;
    builtin_strncpy((char *)((longlong)local_208 + 10)," contain",8);
    builtin_strncpy((char *)((longlong)local_208 + 0x12)," points.",8);
    *(char *)((longlong)local_208 + 0x1a) = '\0';
    local_288 = &local_208;
    FUN_14828b062(local_1b8,
                  ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteMinimumVolumeSphere3.h"
                  ,"gte::MinimumVolumeSphere3<double, double>::operator()",0x94);
    FUN_14828b4e0(local_1b8);
    FUN_1401d9a90(local_1b8);
    FUN_1401d9a90(&local_208);
    param_4[2] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[3] = 0x7fefffffffffffff;
  }
  else {
    puVar4 = &local_140;
    uVar5 = 0;
    auVar14 = pmovsxbq(in_XMM0,0x100);
    do {
      if ((longlong)(uVar5 ^ DAT_149931e80) < -0x7ffffffffffffffb) {
        puVar4[-8] = 0;
      }
      auVar15._8_4_ = (int)uVar5;
      auVar15._0_8_ = uVar5;
      auVar15._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ DAT_149931e80._8_8_) < -0x7ffffffffffffffb) {
        *puVar4 = 0;
      }
      uVar5 = uVar5 + 2;
      puVar4 = puVar4 + 0x10;
    } while (uVar5 != 6);
    local_208 = param_1;
    FUN_148287e30(local_178,&local_208);
    local_208 = param_1;
    FUN_148287ea4(local_138,&local_208);
    local_208 = param_1;
    FUN_148287f18(local_f8,&local_208);
    plVar8 = local_b8;
    local_208 = param_1;
    FUN_148287f8c(plVar8,&local_208);
    local_268 = (undefined1  [16])0x0;
    local_258 = 0;
    FUN_14694ba62(local_268,(ulonglong)param_2);
    uVar5 = 0;
    do {
      *(int *)(local_268._0_8_ + uVar5 * 4) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    local_278 = param_4;
    FUN_14828a1c9(local_268._0_8_,local_268._8_8_,(longlong)(local_268._8_8_ - local_268._0_8_) >> 2
                  ,param_3);
    FUN_148287fff(&local_270,local_268._0_8_,local_268._8_8_,param_3);
    lVar6 = local_268._8_8_;
    if (local_270 != local_268._8_8_) {
      local_268._8_8_ = local_270;
      lVar6 = local_270;
    }
    uVar5 = (ulonglong)(lVar6 - local_268._0_8_) >> 2;
    FUN_14827f35c();
    uVar12 = (uint)uVar5;
    FUN_14828a9f8();
    if (0 < (int)uVar12) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar11 = 0;
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x4e8) + lVar6 + lVar11 * 8) =
               *(undefined8 *)
                (param_3 + (longlong)*(int *)(local_268._0_8_ + uVar7 * 4) * 0x18 + lVar11 * 8);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar7 != (uVar12 & 0x7fffffff));
    }
    puVar4 = *(undefined8 **)(param_1 + 0x4e8);
    local_1d8 = (int *)*puVar4;
    dStack_1d0 = (double)puVar4[1];
    local_1c8._8_8_ = 0;
    local_1c8._0_8_ = puVar4[2];
    param_1[0] = 1;
    param_1[1] = 0;
    uVar7 = 0;
    uVar10 = 1;
    dVar13 = 0.0;
    if ((int)(1 % (longlong)(int)uVar12) != 0) {
      do {
        lVar6 = (longlong)*param_1;
        iVar9 = (int)uVar10;
        if (0 < lVar6) {
          lVar11 = 0;
          do {
            if (param_1[lVar11 + 1] == iVar9) goto LAB_14827ef7b;
            lVar11 = lVar11 + 1;
          } while (lVar6 != lVar11);
        }
        lVar11 = *(longlong *)(param_1 + 0x4e8);
        local_1f8 = *(double *)(lVar11 + 0x10 + (longlong)iVar9 * 0x18);
        puVar4 = (undefined8 *)(lVar11 + (longlong)iVar9 * 0x18);
        local_208 = (int *)*puVar4;
        dStack_200 = (double)puVar4[1];
        lVar11 = 0;
        do {
          (&local_208)[lVar11] =
               (int *)((double)(&local_208)[lVar11] - (double)(&local_1d8)[lVar11]);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        uVar3 = local_1c8._8_8_;
        if ((double)local_1c8._8_8_ <
            local_1f8 * local_1f8 + dStack_200 * dStack_200 + (double)local_208 * (double)local_208)
        {
          plVar1 = (longlong *)(&local_180)[lVar6 * 8];
          local_228[0] = iVar9;
          if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar1 + 0x10))(plVar1,&local_208,local_228);
          if (local_1e8 != '\x01') {
            local_240 = 0;
            _Dst = (int *)FUN_14001cc68(0x50,0x10);
            local_238 = 0x4c;
            local_230 = 0x4f;
            local_248 = _Dst;
            memcpy(_Dst,
                   "ComputeType is not exact and failure occurred. Returning non-minimal sphere.",
                   0x4c);
            *(undefined1 *)(_Dst + 0x13) = 0;
            local_288 = &local_248;
            FUN_14828b062(local_228,
                          ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteMinimumVolumeSphere3.h"
                          ,"gte::MinimumVolumeSphere3<double, double>::operator()",0x7b);
            FUN_14828b5be(local_228);
            FUN_1401d9a90(local_228);
            FUN_1401d9a90(&local_248);
            FUN_14827f625(uVar5 & 0xffffffff,param_3,local_278);
            param_1[0] = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            uVar5 = 0;
            goto LAB_14827efce;
          }
          if ((double)uVar3 < dStack_1f0) {
            local_1c8._8_8_ = dStack_1f0;
            local_1c8._0_8_ = local_1f8;
            local_1d8 = local_208;
            dStack_1d0 = dStack_200;
            uVar7 = uVar10;
          }
        }
LAB_14827ef7b:
        uVar2 = (longlong)(iVar9 + 1) % (longlong)(int)uVar12;
        uVar10 = uVar2 & 0xffffffff;
      } while ((int)uVar2 != (int)uVar7);
      dVar13 = (double)local_1c8._8_8_;
    }
    puVar4 = local_278;
    local_278[2] = local_1c8._0_8_;
    *local_278 = local_1d8;
    local_278[1] = dStack_1d0;
    if (dVar13 < 0.0) {
      dVar13 = sqrt(dVar13);
    }
    else {
      dVar13 = SQRT(dVar13);
    }
    puVar4[3] = dVar13;
    iVar9 = *param_1;
    uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    if (0 < (longlong)iVar9) {
      lVar6 = 0;
      do {
        param_1[lVar6 + 1] = *(int *)(local_268._0_8_ + (longlong)param_1[lVar6 + 1] * 4);
        lVar6 = lVar6 + 1;
      } while (iVar9 != lVar6);
    }
LAB_14827efce:
    FUN_14627a26c(local_268);
    lVar6 = -0x140;
    do {
      plVar1 = (longlong *)plVar8[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar8 != plVar1);
        plVar8[7] = 0;
      }
      plVar8 = plVar8 + -8;
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14827f0c6 FUN_14827f0c6 body=114 status=ok
// SIG undefined FUN_14827f0c6(void)

undefined8 FUN_14827f0c6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71ad0;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828173c(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f13a FUN_14827f13a body=114 status=ok
// SIG undefined FUN_14827f13a(void)

undefined8 FUN_14827f13a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71bd0;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828173c(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f1ae FUN_14827f1ae body=114 status=ok
// SIG undefined FUN_14827f1ae(void)

undefined8 FUN_14827f1ae(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71c40;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828173c(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f222 FUN_14827f222 body=114 status=ok
// SIG undefined FUN_14827f222(void)

undefined8 FUN_14827f222(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71c70;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828173c(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f295 FUN_14827f295 body=199 status=ok
// SIG undefined FUN_14827f295(void)

void FUN_14827f295(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_2 + 1 != param_3 && param_2 != param_3) {
    uVar9 = (ulonglong)*param_2;
    puVar5 = param_2 + 1;
    do {
      iVar7 = (int)uVar9;
      uVar9 = (ulonglong)(int)*puVar5;
      lVar6 = 0;
      while( true ) {
        dVar3 = *(double *)(param_4 + (longlong)iVar7 * 0x18 + lVar6);
        pdVar2 = (double *)(param_4 + uVar9 * 0x18 + lVar6);
        if ((dVar3 != *pdVar2) || (NAN(dVar3) || NAN(*pdVar2))) break;
        lVar6 = lVar6 + 8;
        if (lVar6 == 0x18) {
          puVar5 = puVar5 + 1;
          if (puVar5 == param_3) goto LAB_14827f34e;
          uVar8 = *param_2;
          goto LAB_14827f308;
        }
      }
      puVar1 = puVar5 + 1;
      param_2 = puVar5;
      puVar5 = puVar1;
    } while (puVar1 != param_3);
  }
  goto LAB_14827f355;
LAB_14827f308:
  do {
    uVar4 = *puVar5;
    lVar6 = 0;
    do {
      dVar3 = *(double *)(param_4 + (longlong)(int)uVar8 * 0x18 + lVar6);
      pdVar2 = (double *)(param_4 + (longlong)(int)uVar4 * 0x18 + lVar6);
      if ((dVar3 != *pdVar2) || (NAN(dVar3) || NAN(*pdVar2))) {
        param_2[1] = uVar4;
        param_2 = param_2 + 1;
        uVar8 = uVar4;
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x18);
    puVar5 = puVar5 + 1;
  } while (puVar5 != param_3);
LAB_14827f34e:
  param_3 = param_2 + 1;
LAB_14827f355:
  *param_1 = param_3;
  return;
}



// FUNCTION 14827f35c FUN_14827f35c body=168 status=ok
// SIG undefined FUN_14827f35c(void)

void FUN_14827f35c(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0xffffffff;
  local_48 = 0x20;
  puVar4 = param_1 + 1;
  local_50 = param_3;
  if (puVar4 != param_2 && param_1 != param_2) {
    lVar3 = 1;
    do {
      lVar2 = FUN_148286bfe(&local_50,lVar3 + 1);
      if (lVar3 != lVar2) {
        uVar1 = *puVar4;
        *puVar4 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar4 != param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f406 FUN_14827f406 body=227 status=ok
// SIG undefined FUN_14827f406(void)

longlong FUN_14827f406(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14827fba2(param_2);
  FUN_148287832(param_2,*(undefined8 *)(param_1 + 0x13a0));
  FUN_14828b7a0(local_70);
  local_78 = 0;
  FUN_1482800a4(&local_50,1);
  *(undefined4 *)(param_2 + 0xf0) = (undefined4)local_78;
  *(undefined4 *)(param_2 + 0xf4) = local_78._4_4_;
  FUN_14828b9da(param_2 + 0xf8,local_70);
  local_78 = 0;
  *(undefined4 *)(param_2 + 0x118) = (undefined4)local_50;
  *(undefined4 *)(param_2 + 0x11c) = local_50._4_4_;
  FUN_14828b9da(param_2 + 0x120,local_48);
  local_50 = 0;
  FUN_148276cee(local_40);
  FUN_148276cee(local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f4ea FUN_14827f4ea body=203 status=ok
// SIG undefined FUN_14827f4ea(void)

uint FUN_14827f4ea(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_188 [40];
  undefined1 local_160 [16];
  undefined1 local_150 [40];
  undefined1 local_128 [24];
  undefined1 local_110 [176];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14827fddc(local_110,(longlong)param_2 * 0xf0 + *(longlong *)(param_1 + 0x13a0));
  FUN_14827ff72(local_160,local_110,local_110);
  uVar1 = FUN_148281c76(param_3 + 0xf0,local_160);
  FUN_148276cee(local_128);
  FUN_148276cee(local_150);
  lVar3 = -0xf0;
  puVar2 = local_60;
  do {
    FUN_148276cee(puVar2 + 0x28);
    FUN_148276cee(puVar2);
    puVar2 = puVar2 + -0x50;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f5b6 FUN_14827f5b6 body=111 status=ok
// SIG undefined FUN_14827f5b6(void)

longlong FUN_14827f5b6(longlong param_1,longlong param_2)

{
  FUN_148287832();
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  FUN_14828b7ba(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  FUN_14828b7ba(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



// FUNCTION 14827f625 FUN_14827f625 body=369 status=ok
// SIG undefined FUN_14827f625(void)

void FUN_14827f625(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_48 [32];
  double local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_3[2] = param_2[2];
  uVar2 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = uVar2;
  if (1 < (int)param_1) {
    uVar4 = 1;
    puVar3 = param_2;
    do {
      puVar3 = puVar3 + 3;
      lVar5 = 0;
      do {
        param_3[lVar5] = (double)puVar3[lVar5] + (double)param_3[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
  }
  if (param_1 == 0) {
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3[lVar5] = (double)param_3[lVar5] * (1.0 / (double)(int)param_1);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    param_3[3] = 0;
    if (0 < (int)param_1) {
      dVar6 = 0.0;
      uVar4 = 0;
      do {
        local_28[2] = (double)param_2[uVar4 * 3 + 2];
        local_28[0] = (double)param_2[uVar4 * 3];
        local_28[1] = (double)(param_2 + uVar4 * 3)[1];
        lVar5 = 0;
        do {
          local_28[lVar5] = local_28[lVar5] - (double)param_3[lVar5];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        dVar1 = local_28[2] * local_28[2] + local_28[1] * local_28[1] + local_28[0] * local_28[0];
        if (dVar6 < dVar1) {
          param_3[3] = dVar1;
          dVar6 = dVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_1);
      goto LAB_14827f761;
    }
  }
  dVar6 = 0.0;
LAB_14827f761:
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  param_3[3] = dVar6;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14827f798 FUN_14827f798 body=81 status=ok
// SIG undefined FUN_14827f798(void)

void FUN_14827f798(longlong param_1)

{
  longlong lVar1;
  
  FUN_148276cee(param_1 + 0x128);
  FUN_148276cee(param_1 + 0x100);
  param_1 = param_1 + 0xb0;
  lVar1 = -0xf0;
  do {
    FUN_148276cee(param_1 + 0x28);
    FUN_148276cee(param_1);
    param_1 = param_1 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14827f816 FUN_14827f816 body=29 status=ok
// SIG undefined FUN_14827f816(void)

undefined8 FUN_14827f816(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_14827f84c(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 14827f83c FUN_14827f83c body=9 status=ok
// SIG undefined FUN_14827f83c(void)

void FUN_14827f83c(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 14827f84c FUN_14827f84c body=175 status=ok
// SIG undefined FUN_14827f84c(void)

longlong FUN_14827f84c(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_188 [32];
  undefined1 local_168 [240];
  undefined1 auStack_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_188;
  FUN_14827f8fc(param_1,local_168,param_1[1],param_3);
  *param_1 = 2;
  param_1[2] = param_3;
  lVar1 = 0;
  do {
    FUN_1482801d6(param_2 + lVar1,local_168 + lVar1);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0xf0);
  FUN_1482801d6(param_2 + 0xf0,auStack_78);
  *(undefined1 *)(param_2 + 0x140) = 1;
  FUN_14827f798(local_168);
  if ((local_28 ^ (ulonglong)local_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827f8fc FUN_14827f8fc body=677 status=ok
// SIG undefined FUN_14827f8fc(void)

longlong FUN_14827f8fc(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_328 [32];
  undefined1 local_308 [16];
  undefined1 local_2f8 [40];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [24];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [24];
  undefined1 local_268 [8];
  undefined1 local_260 [32];
  undefined1 local_240 [8];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined1 local_210 [8];
  undefined1 local_208 [24];
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [120];
  undefined1 local_168 [64];
  undefined1 local_128 [176];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (longlong)param_3 * 0xf0 + *(longlong *)(param_1 + 0x13a0);
  lVar1 = (longlong)param_4 * 0xf0 + *(longlong *)(param_1 + 0x13a0);
  FUN_14827fba2(param_2);
  FUN_14827fd00(&local_218,lVar2,lVar1);
  FUN_14828b7a0(local_260);
  FUN_148287250(local_268,0x3fe0000000000000);
  FUN_14828b7a0(local_238);
  FUN_148287250(local_240,0x3ff0000000000000);
  FUN_14827fc12(local_128,local_268,&local_218);
  FUN_1482812d4(param_2,local_128);
  lVar4 = -0xf0;
  puVar3 = local_78;
  do {
    FUN_148276cee(puVar3 + 0x28);
    FUN_148276cee(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  lVar4 = -0xf0;
  puVar3 = local_168;
  do {
    FUN_148276cee(puVar3 + 0x28);
    FUN_148276cee(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  FUN_14827fddc(local_128,lVar1,lVar2);
  FUN_14828b7a0(local_2b0);
  FUN_148287250(local_2b8,0x3fd0000000000000);
  FUN_14828b7a0(local_288);
  FUN_148287250(local_290,0x3ff0000000000000);
  FUN_14827ff72(local_308,local_128,local_128);
  FUN_14827feb8(local_2b8,&local_218,local_308);
  *(undefined4 *)(param_2 + 0xf0) = (undefined4)local_218;
  *(undefined4 *)(param_2 + 0xf4) = local_218._4_4_;
  FUN_14828b9da(param_2 + 0xf8,local_210);
  local_218 = 0;
  *(undefined4 *)(param_2 + 0x118) = (undefined4)local_1f0;
  *(undefined4 *)(param_2 + 0x11c) = local_1f0._4_4_;
  FUN_14828b9da(param_2 + 0x120,local_1e8);
  local_1f0 = 0;
  FUN_148276cee(local_1e0);
  FUN_148276cee(local_208);
  FUN_148276cee(local_2d0);
  FUN_148276cee(local_2f8);
  FUN_148276cee(local_280);
  FUN_148276cee(local_2a8);
  lVar1 = -0xf0;
  puVar3 = local_78;
  do {
    FUN_148276cee(puVar3 + 0x28);
    FUN_148276cee(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  if ((local_38 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827fba2 FUN_14827fba2 body=112 status=ok
// SIG undefined FUN_14827fba2(void)

longlong FUN_14827fba2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x28;
  lVar1 = 0xf0;
  do {
    FUN_14828b7a0(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1482800a4(lVar2,1);
    lVar2 = lVar2 + 0x50;
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != 0);
  FUN_1482800a4(param_1 + 0xf0,1);
  FUN_1482800a4(param_1 + 0x118,1);
  FUN_148280022(param_1);
  return param_1;
}



// FUNCTION 14827fc12 FUN_14827fc12 body=237 status=ok
// SIG undefined FUN_14827fc12(void)

longlong FUN_14827fc12(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_188 [32];
  undefined1 local_168 [80];
  undefined1 local_118 [176];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_188;
  lVar2 = 0;
  do {
    FUN_1482801d6(local_118 + lVar2,param_3 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  FUN_1482801d6(local_168,param_2);
  FUN_14828018e(local_118,local_168);
  lVar2 = 0;
  do {
    FUN_1482801d6(param_1 + lVar2,local_118 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = -0xf0;
  puVar1 = local_68;
  do {
    FUN_148276cee(puVar1 + 0x28);
    FUN_148276cee(puVar1);
    puVar1 = puVar1 + -0x50;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0);
  FUN_148276cee(param_2 + 0x38);
  FUN_148276cee(param_2 + 0x10);
  if ((local_28 ^ (ulonglong)local_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827fd00 FUN_14827fd00 body=219 status=ok
// SIG undefined FUN_14827fd00(void)

longlong FUN_14827fd00(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_138 [32];
  undefined1 auStack_118 [176];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_138;
  lVar2 = 0;
  do {
    FUN_1482801d6(auStack_118 + lVar2,param_2 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = 0;
  do {
    FUN_1482802ee(auStack_118 + lVar2,param_3 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = 0;
  do {
    FUN_1482801d6(param_1 + lVar2,auStack_118 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = -0xf0;
  puVar1 = local_68;
  do {
    FUN_148276cee(puVar1 + 0x28);
    FUN_148276cee(puVar1);
    puVar1 = puVar1 + -0x50;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0);
  if ((local_28 ^ (ulonglong)local_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827fddc FUN_14827fddc body=219 status=ok
// SIG undefined FUN_14827fddc(void)

longlong FUN_14827fddc(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_138 [32];
  undefined1 auStack_118 [176];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_138;
  lVar2 = 0;
  do {
    FUN_1482801d6(auStack_118 + lVar2,param_2 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = 0;
  do {
    FUN_148281360(auStack_118 + lVar2,param_3 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = 0;
  do {
    FUN_1482801d6(param_1 + lVar2,auStack_118 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = -0xf0;
  puVar1 = local_68;
  do {
    FUN_148276cee(puVar1 + 0x28);
    FUN_148276cee(puVar1);
    puVar1 = puVar1 + -0x50;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0);
  if ((local_28 ^ (ulonglong)local_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827feb8 FUN_14827feb8 body=185 status=ok
// SIG undefined FUN_14827feb8(void)

undefined8 * FUN_14827feb8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  int local_50 [4];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1482804aa(param_1,local_50);
  if (local_50[0] == 0) {
    FUN_14828b7a0(param_2 + 1);
    *param_2 = 0;
    FUN_1482800a4(param_2 + 5,1);
  }
  else {
    FUN_1482804aa(param_1 + 0x28,local_78,param_3 + 0x28);
    FUN_148280720(param_2,local_50,local_78);
    FUN_148276cee(local_68);
  }
  FUN_148276cee(local_40);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14827ff72 FUN_14827ff72 body=174 status=ok
// SIG undefined FUN_14827ff72(void)

undefined8 FUN_14827ff72(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined1 local_80 [40];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14827feb8(param_2,param_1);
  lVar1 = 0x50;
  do {
    FUN_14827feb8(param_2 + lVar1,local_90,param_3 + lVar1);
    FUN_1482802ee(param_1,local_90);
    FUN_148276cee(local_58);
    FUN_148276cee(local_80);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0xf0);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148280022 FUN_148280022 body=129 status=ok
// SIG undefined FUN_148280022(void)

void FUN_148280022(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14828b7a0(local_60);
  local_68 = 0;
  FUN_1482800a4(local_40,1);
  FUN_14828012a(param_1,param_1 + 0xf0,&local_68);
  FUN_148276cee(local_30);
  FUN_148276cee(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482800a4 FUN_1482800a4 body=133 status=ok
// SIG undefined FUN_1482800a4(void)

undefined4 * FUN_1482800a4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14828b7a0(param_1 + 2);
  iVar2 = -param_2;
  if (-param_2 < 0) {
    iVar2 = param_2;
  }
  *param_1 = 1;
  uVar1 = FUN_14828b751(iVar2);
  param_1[1] = uVar1;
  FUN_14828b7f2(local_48,iVar2);
  FUN_14828b9da(param_1 + 2,local_48);
  FUN_148276cee(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828012a FUN_14828012a body=100 status=ok
// SIG undefined FUN_14828012a(void)

void FUN_14828012a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      FUN_14828b7ba(param_1 + 2,param_3 + 2);
      param_1[10] = param_3[10];
      param_1[0xb] = param_3[0xb];
      FUN_14828b7ba(param_1 + 0xc,param_3 + 0xc);
      param_1 = param_1 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}



// FUNCTION 14828018e FUN_14828018e body=72 status=ok
// SIG undefined FUN_14828018e(void)

longlong FUN_14828018e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_148280246(param_1 + lVar1,param_2);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0xf0);
  FUN_148276cee(param_2 + 0x38);
  FUN_148276cee(param_2 + 0x10);
  return param_1;
}



// FUNCTION 1482801d6 FUN_1482801d6 body=111 status=ok
// SIG undefined FUN_1482801d6(void)

undefined8 * FUN_1482801d6(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  FUN_14828b7a0(param_1 + 1);
  param_1[5] = 0;
  FUN_14828b7a0(param_1 + 6);
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  FUN_14828b7ba(param_1 + 1,param_2 + 2);
  *(undefined4 *)(param_1 + 5) = param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_2[0xb];
  FUN_14828b7ba(param_1 + 6,param_2 + 0xc);
  return param_1;
}



// FUNCTION 148280246 FUN_148280246 body=166 status=ok
// SIG undefined FUN_148280246(void)

undefined4 * FUN_148280246(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14827feb8(param_1,&local_70,param_2);
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  FUN_14828b9da(param_1 + 2,local_68);
  local_70 = 0;
  param_1[10] = (undefined4)local_48;
  param_1[0xb] = local_48._4_4_;
  FUN_14828b9da(param_1 + 0xc,local_40);
  local_48 = 0;
  FUN_148276cee(local_38);
  FUN_148276cee(local_60);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482802ee FUN_1482802ee body=166 status=ok
// SIG undefined FUN_1482802ee(void)

undefined4 * FUN_1482802ee(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148280396(param_1,&local_70,param_2);
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  FUN_14828b9da(param_1 + 2,local_68);
  local_70 = 0;
  param_1[10] = (undefined4)local_48;
  param_1[0xb] = local_48._4_4_;
  FUN_14828b9da(param_1 + 0xc,local_40);
  local_48 = 0;
  FUN_148276cee(local_38);
  FUN_148276cee(local_60);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148280396 FUN_148280396 body=275 status=ok
// SIG undefined FUN_148280396(void)

undefined8 * FUN_148280396(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  int local_b0 [4];
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1482804aa(param_1,local_60,param_3 + 0x28);
  FUN_1482804aa(param_1 + 0x28,local_88,param_3);
  FUN_148280508(local_60,local_b0,local_88);
  if (local_b0[0] == 0) {
    FUN_14828b7a0(param_2 + 1);
    *param_2 = 0;
    FUN_1482800a4(param_2 + 5,1);
  }
  else {
    FUN_1482804aa(param_1 + 0x28,local_d8,param_3 + 0x28);
    FUN_148280720(param_2,local_b0,local_d8);
    FUN_148276cee(local_c8);
  }
  FUN_148276cee(local_a0);
  FUN_148276cee(local_78);
  FUN_148276cee(local_50);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482804aa FUN_1482804aa body=94 status=ok
// SIG undefined FUN_1482804aa(void)

int * FUN_1482804aa(int *param_1,int *param_2,int *param_3)

{
  param_2[0] = 0;
  param_2[1] = 0;
  FUN_14828b7a0(param_2 + 2);
  if (*param_3 * *param_1 != 0) {
    *param_2 = *param_3 * *param_1;
    param_2[1] = param_3[1] + param_1[1];
    FUN_148280870(param_2 + 2,param_1 + 2,param_3 + 2);
  }
  return param_2;
}



// FUNCTION 148280508 FUN_148280508 body=536 status=ok
// SIG undefined FUN_148280508(void)

int * FUN_148280508(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  if (*param_1 == 0) {
    FUN_14828b7a0(param_2 + 2);
    *param_2 = *param_3;
    param_2[1] = param_3[1];
LAB_1482805bc:
    FUN_14828b7ba(param_2 + 2,param_3 + 2);
    return param_2;
  }
  iVar6 = *param_3;
  if (iVar6 == 0) {
    FUN_14828b7a0(param_2 + 2);
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_3 = param_1;
    goto LAB_1482805bc;
  }
  if (*param_1 < 1) {
    if (iVar6 < 0) {
      uVar9 = 0xffffffff;
      goto LAB_148280679;
    }
    if (param_1[1] == param_3[1]) {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
      if (iVar6 == param_3[2]) {
        if (iVar6 < 1) goto LAB_148280652;
        uVar10 = (ulonglong)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) >> 2 &
                 0xffffffff;
        do {
          if ((int)uVar10 < 1) goto LAB_148280652;
          lVar1 = uVar10 * 4;
          lVar2 = uVar10 * 4;
          uVar10 = uVar10 - 1;
          iVar8 = iVar6;
        } while (*(int *)(*(longlong *)(param_1 + 4) + -4 + lVar1) ==
                 *(int *)(*(longlong *)(param_3 + 4) + -4 + lVar2));
      }
    }
    else {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
    }
    iVar8 = iVar8 + param_3[1];
    iVar6 = iVar6 + param_1[1];
    piVar5 = param_1;
    piVar4 = param_3;
    if ((iVar8 < iVar6) ||
       ((piVar7 = param_1, iVar8 <= iVar6 &&
        (cVar3 = FUN_14828104e(param_3 + 2,param_1 + 2), cVar3 != '\0')))) goto LAB_148280702;
  }
  else {
    if (0 < iVar6) {
      uVar9 = 1;
LAB_148280679:
      FUN_148280a90(param_2,param_1,param_3,uVar9);
      return param_2;
    }
    if (param_1[1] == param_3[1]) {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
      if (iVar6 == param_3[2]) {
        if (iVar6 < 1) {
LAB_148280652:
          param_2[0] = 0;
          param_2[1] = 0;
          FUN_14828b7a0(param_2 + 2);
          return param_2;
        }
        uVar10 = (ulonglong)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) >> 2 &
                 0xffffffff;
        do {
          if ((int)uVar10 < 1) goto LAB_148280652;
          lVar1 = uVar10 * 4;
          lVar2 = uVar10 * 4;
          uVar10 = uVar10 - 1;
          iVar8 = iVar6;
        } while (*(int *)(*(longlong *)(param_1 + 4) + -4 + lVar1) ==
                 *(int *)(*(longlong *)(param_3 + 4) + -4 + lVar2));
      }
    }
    else {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
    }
    iVar8 = iVar8 + param_3[1];
    iVar6 = iVar6 + param_1[1];
    piVar4 = param_1;
    piVar7 = param_3;
    if ((iVar6 <= iVar8) &&
       ((piVar5 = param_3, iVar6 < iVar8 ||
        (cVar3 = FUN_14828104e(param_3 + 2,param_1 + 2), cVar3 == '\0')))) {
LAB_148280702:
      uVar9 = 0xffffffff;
      goto LAB_1482806ad;
    }
  }
  uVar9 = 1;
  piVar5 = piVar4;
  piVar4 = piVar7;
LAB_1482806ad:
  FUN_148280b92(param_2,piVar5,piVar4,uVar9);
  return param_2;
}



// FUNCTION 148280720 FUN_148280720 body=334 status=ok
// SIG undefined FUN_148280720(void)

int * FUN_148280720(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  char **local_78;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14828b7a0(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_14828b7ba(param_1 + 2,param_2 + 2);
  FUN_14828b7a0(param_1 + 0xc);
  param_1[10] = *param_3;
  param_1[0xb] = param_3[1];
  FUN_14828b7ba(param_1 + 0xc,param_3 + 2);
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    local_60 = 0;
    local_68 = (char *)FUN_14001cc68(0x20,0x10);
    local_58 = 0x1d;
    local_50 = 0x1f;
    builtin_strncpy(local_68,"Division by zero not allowed.",0x1e);
    local_78 = &local_68;
    FUN_14828b062(local_48,
                  ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteBSRational.h"
                  ,"gte::BSRational<class gte::UIntegerAP32>::BSRational",0x93);
    FUN_14828b402(local_48);
    FUN_1401d9a90(local_48);
    FUN_1401d9a90(&local_68);
    iVar1 = param_1[10];
  }
  if (iVar1 < 0) {
    *param_1 = -*param_1;
    param_1[10] = 1;
  }
  param_1[1] = (param_1[1] - (param_1[0xb] + param_1[0xc])) + 1;
  param_1[0xb] = 1 - param_1[0xc];
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148280870 FUN_148280870 body=543 status=ok
// SIG undefined FUN_148280870(void)

void FUN_148280870(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  int *local_70;
  undefined1 local_68 [8];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *param_3 + *param_2;
  FUN_14828ba32(param_1,(ulonglong)uVar7);
  local_78 = (ulonglong)uVar7;
  FUN_14828b99c(local_68,uVar7);
  uVar2 = (ulonglong)(*(longlong *)(param_2 + 4) - (longlong)*(uint **)(param_2 + 2)) >> 2;
  uVar4 = (ulonglong)(*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2)) >> 2;
  lVar13 = *(longlong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar8 = 0;
  uVar3 = (uint)uVar4;
  uVar7 = 0;
  if (0 < (int)uVar3) {
    uVar6 = **(uint **)(param_2 + 2);
    uVar10 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + (ulonglong)*(uint *)(*(longlong *)(param_3 + 2) + uVar10 * 4) *
                      (ulonglong)uVar6;
      *(int *)(*(longlong *)(param_1 + 8) + uVar10 * 4) = (int)uVar8;
      uVar8 = uVar8 >> 0x20;
      uVar10 = uVar10 + 1;
      uVar7 = uVar3;
    } while ((uVar3 & 0x7fffffff) != uVar10);
  }
  iVar5 = (int)((ulonglong)(lVar13 - lVar1) >> 2);
  if ((int)uVar7 < iVar5) {
    *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 4) = (int)uVar8;
  }
  if (1 < (int)uVar2) {
    uVar10 = 1;
    iVar9 = -1;
    lVar13 = 4;
    uVar8 = uVar4 & 0xffffffff;
    uVar7 = uVar3;
    do {
      uVar7 = uVar7 + 1;
      if ((int)uVar3 < 1) {
        uVar12 = uVar10 & 0xffffffff;
        uVar11 = 0;
      }
      else {
        uVar6 = *(uint *)(*(longlong *)(param_2 + 2) + uVar10 * 4);
        uVar12 = 0;
        uVar11 = 0;
        do {
          uVar11 = uVar11 + (ulonglong)*(uint *)(*(longlong *)(param_3 + 2) + uVar12 * 4) *
                            (ulonglong)uVar6;
          *(int *)(local_60[0] + lVar13 + uVar12 * 4) = (int)uVar11;
          uVar11 = uVar11 >> 0x20;
          uVar12 = uVar12 + 1;
        } while ((uVar4 & 0x7fffffff) != uVar12);
        uVar12 = (ulonglong)(uint)((int)uVar12 - iVar9);
      }
      if ((int)uVar12 < iVar5) {
        *(int *)(local_60[0] + uVar12 * 4) = (int)uVar11;
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
      if ((int)uVar3 < 1) {
        uVar11 = 0;
        uVar6 = (uint)uVar10;
      }
      else {
        uVar11 = 0;
        uVar12 = uVar10;
        do {
          uVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + uVar12 * 4) +
                   *(uint *)(local_60[0] + uVar12 * 4) + uVar11;
          *(int *)(*(longlong *)(param_1 + 8) + uVar12 * 4) = (int)uVar11;
          uVar11 = uVar11 >> 0x20;
          uVar12 = uVar12 + 1;
        } while (uVar7 != uVar12);
      }
      if ((int)uVar6 < iVar5) {
        *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 4) =
             (int)uVar11 + *(int *)(local_60[0] + (ulonglong)uVar6 * 4);
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + -1;
      lVar13 = lVar13 + 4;
    } while (uVar10 != (uVar2 & 0x7fffffff));
  }
  local_70 = param_2;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + -4) >> ((int)local_78 - 1U & 0x1f) & 1) == 0) {
    FUN_14828ba32(param_1,(int)local_78 + -1);
  }
  FUN_148276cee(local_60);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148280a90 FUN_148280a90 body=256 status=ok
// SIG undefined FUN_148280a90(void)

undefined8 * FUN_148280a90(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  puVar1 = param_1 + 1;
  FUN_14828b7a0(puVar1);
  local_68 = 0;
  FUN_14828b7a0(local_60);
  iVar2 = *(int *)(param_2 + 4) - *(int *)(param_3 + 4);
  if (iVar2 == 0 || *(int *)(param_2 + 4) < *(int *)(param_3 + 4)) {
    if (iVar2 < 0) {
      FUN_148280c94(local_60,param_3 + 8,-iVar2);
      FUN_148280d9a(puVar1,param_2 + 8,local_60);
      iVar2 = *(int *)(param_2 + 4);
    }
    else {
      FUN_148280d9a(local_60,param_2 + 8,param_3 + 8);
      iVar2 = FUN_148280eea(puVar1,local_60);
      iVar2 = iVar2 + *(int *)(param_2 + 4);
    }
  }
  else {
    FUN_148280c94(local_60,param_2 + 8);
    FUN_148280d9a(puVar1,local_60,param_3 + 8);
    iVar2 = *(int *)(param_3 + 4);
  }
  *(int *)((longlong)param_1 + 4) = iVar2;
  *(undefined4 *)param_1 = param_4;
  FUN_148276cee(local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148280b92 FUN_148280b92 body=256 status=ok
// SIG undefined FUN_148280b92(void)

undefined8 * FUN_148280b92(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  puVar1 = param_1 + 1;
  FUN_14828b7a0(puVar1);
  local_68 = 0;
  FUN_14828b7a0(local_60);
  iVar2 = *(int *)(param_2 + 4) - *(int *)(param_3 + 4);
  if (iVar2 == 0 || *(int *)(param_2 + 4) < *(int *)(param_3 + 4)) {
    if (iVar2 < 0) {
      FUN_148280c94(local_60,param_3 + 8,-iVar2);
      FUN_148281124(puVar1,param_2 + 8,local_60);
      iVar2 = *(int *)(param_2 + 4);
    }
    else {
      FUN_148281124(local_60,param_2 + 8,param_3 + 8);
      iVar2 = FUN_148280eea(puVar1,local_60);
      iVar2 = iVar2 + *(int *)(param_2 + 4);
    }
  }
  else {
    FUN_148280c94(local_60,param_2 + 8);
    FUN_148281124(puVar1,local_60,param_3 + 8);
    iVar2 = *(int *)(param_3 + 4);
  }
  *(int *)((longlong)param_1 + 4) = iVar2;
  *(undefined4 *)param_1 = param_4;
  FUN_148276cee(local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148280c94 FUN_148280c94 body=262 status=ok
// SIG undefined FUN_148280c94(void)

void FUN_148280c94(longlong param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_14828ba32(param_1,*param_2 + param_3);
  uVar7 = param_3 >> 5;
  if (0x1f < (int)param_3) {
    uVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  bVar1 = (byte)param_3 & 0x1f;
  uVar4 = (uint)((ulonglong)(*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2)) >> 2);
  if ((param_3 & 0x1f) == 0) {
    if (0 < (int)uVar4) {
      uVar3 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 << 2) + uVar3 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while ((uVar4 & 0x7fffffff) != uVar3);
    }
  }
  else {
    bVar2 = 0x20 - bVar1;
    if ((int)uVar4 < 1) {
      uVar6 = 0;
    }
    else {
      uVar3 = 0;
      uVar5 = 0;
      do {
        uVar6 = *(uint *)(*(longlong *)(param_2 + 2) + uVar3 * 4);
        *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 << 2) + uVar3 * 4) =
             uVar5 >> (bVar2 & 0x1f) | uVar6 << bVar1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar6;
      } while ((uVar4 & 0x7fffffff) != uVar3);
      uVar7 = uVar7 + (int)uVar3;
    }
    if ((int)uVar7 <
        (int)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 2)) {
      *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar7 * 4) = uVar6 >> (bVar2 & 0x1f);
    }
  }
  return;
}



// FUNCTION 148280d9a FUN_148280d9a body=335 status=ok
// SIG undefined FUN_148280d9a(void)

void FUN_148280d9a(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *param_3;
  if ((int)*param_3 < (int)*param_2) {
    uVar1 = *param_2;
  }
  FUN_14828ba32(param_1,uVar1 + 1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + -4) = 0;
  uVar6 = (ulonglong)(*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2)) >> 2;
  uVar4 = (ulonglong)(*(longlong *)(param_3 + 4) - *(longlong *)(param_3 + 2)) >> 2;
  uVar5 = (uint)uVar6;
  uVar3 = (uint)uVar4;
  puVar2 = param_2 + 2;
  if ((int)uVar5 < (int)uVar3) {
    uVar4 = uVar6;
    puVar2 = param_3 + 2;
  }
  uVar6 = uVar4 & 0xffffffff;
  if ((int)uVar4 < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar10 = 0;
    do {
      puVar8 = param_3 + 2;
      if ((int)uVar5 < (int)uVar3) {
        puVar8 = param_2 + 2;
      }
      uVar9 = *(uint *)(*(longlong *)puVar2 + uVar7 * 4) + uVar10 +
              (ulonglong)*(uint *)(*(longlong *)puVar8 + uVar7 * 4);
      *(int *)(*(longlong *)(param_1 + 8) + uVar7 * 4) = (int)uVar9;
      uVar10 = uVar9 >> 0x20;
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
    if (uVar9 >> 0x20 != 0) {
      if ((int)uVar3 < (int)uVar5) {
        uVar3 = uVar5;
      }
      if ((int)uVar4 < (int)uVar3) {
        uVar4 = 1;
        do {
          uVar7 = *(uint *)(*(longlong *)puVar2 + uVar6 * 4) + uVar4;
          *(int *)(*(longlong *)(param_1 + 8) + uVar6 * 4) = (int)uVar7;
          uVar4 = uVar7 >> 0x20;
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
        uVar6 = (ulonglong)uVar3;
        if (uVar7 >> 0x20 == 0) goto LAB_148280eb8;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar6 * 4) = 1;
      goto LAB_148280eb8;
    }
  }
  if ((int)uVar3 < (int)uVar5) {
    uVar3 = uVar5;
  }
  if ((int)uVar6 < (int)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)puVar2 + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
LAB_148280eb8:
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + -4) >> (uVar1 & 0x1f) & 1) != 0) {
    return;
  }
  FUN_14828ba32(param_1,uVar1);
  return;
}



// FUNCTION 148280eea FUN_148280eea body=356 status=ok
// SIG undefined FUN_148280eea(void)

int FUN_148280eea(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = (uint)((ulonglong)(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8)) >> 2);
  FUN_14828b69c(*(undefined4 *)(*(longlong *)(param_2 + 8) + (longlong)(int)(uVar2 - 1) * 4));
  iVar3 = -1;
  if (0 < (int)uVar2) {
    iVar8 = 0;
    uVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(param_2 + 8) + uVar5 * 4) != 0) {
        iVar3 = FUN_14828b74a();
        iVar3 = iVar3 - iVar8;
        break;
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + -0x20;
    } while ((uVar2 & 0x7fffffff) != uVar5);
  }
  FUN_14828ba32(param_1);
  iVar8 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 >> 5;
  iVar3 = iVar3 % 0x20;
  uVar4 = (uint)((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 2);
  if (iVar3 < 1) {
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + 8) + (longlong)iVar8 * 4 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while ((uVar4 & 0x7fffffff) != uVar5);
    }
  }
  else {
    uVar6 = *(uint *)(*(longlong *)(param_2 + 8) + (longlong)iVar8 * 4);
    bVar1 = (byte)iVar3;
    if (iVar8 + 1 < (int)uVar2) {
      uVar5 = (ulonglong)((uVar2 - 1) - iVar8);
      uVar7 = 0;
      do {
        uVar2 = uVar6 >> (bVar1 & 0x1f);
        uVar6 = *(uint *)(*(longlong *)(param_2 + 8) + (longlong)iVar8 * 4 + 4 + uVar7 * 4);
        *(uint *)(*(longlong *)(param_1 + 8) + uVar7 * 4) = uVar6 << (0x20 - bVar1 & 0x1f) | uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    else {
      uVar5 = 0;
    }
    if ((int)uVar5 < (int)uVar4) {
      *(uint *)(*(longlong *)(param_1 + 8) + uVar5 * 4) = uVar6 >> (bVar1 & 0x1f);
    }
  }
  return iVar8 * 0x20 + iVar3;
}



// FUNCTION 14828104e FUN_14828104e body=213 status=ok
// SIG undefined FUN_14828104e(void)

bool FUN_14828104e(int *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar4 = *param_2;
  bVar12 = 0 < iVar4;
  if (0 < iVar4 && 0 < *param_1) {
    uVar8 = *param_1 - 1;
    uVar5 = (ulonglong)(uVar8 >> 5);
    uVar10 = (ulonglong)(iVar4 - 1U >> 5);
    bVar2 = (byte)uVar8 & 0x1f;
    bVar3 = (byte)(iVar4 - 1U) & 0x1f;
    uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
    uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 2) + uVar10 * 4);
    do {
      iVar4 = (int)uVar5;
      iVar9 = (int)uVar10;
      if ((iVar4 < 0) || (iVar9 < 0)) {
        return iVar4 < iVar9;
      }
      uVar11 = (uint)(uVar7 << (bVar2 ^ 0x1f));
      uVar8 = (uint)(uVar6 << (bVar3 ^ 0x1f));
      if (iVar4 != 0) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(iVar4 - 1) * 4);
        uVar7 = (ulonglong)uVar1;
        uVar11 = uVar11 | uVar1 >> bVar2 + 1;
      }
      if (0 < iVar9) {
        uVar1 = *(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)(iVar9 - 1U) * 4);
        uVar6 = (ulonglong)uVar1;
        uVar8 = uVar8 | uVar1 >> bVar3 + 1;
      }
      uVar5 = (ulonglong)(iVar4 - 1);
      uVar10 = (ulonglong)(iVar9 - 1U);
      bVar12 = uVar11 < uVar8;
    } while (uVar11 == uVar8);
  }
  return bVar12;
}



// FUNCTION 148281124 FUN_148281124 body=430 status=ok
// SIG undefined FUN_148281124(void)

void FUN_148281124(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  longlong local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *param_2;
  uVar9 = (ulonglong)(*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2)) >> 2;
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar2 = *(longlong *)(param_3 + 8);
  FUN_14828b99c(local_58,iVar7);
  uVar8 = (uint)((ulonglong)(lVar1 - lVar2) >> 2);
  uVar3 = 0;
  if (0 < (int)uVar8) {
    uVar5 = 0;
    do {
      *(uint *)(local_50[0] + uVar5 * 4) = ~*(uint *)(*(longlong *)(param_3 + 8) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      uVar3 = uVar8;
    } while ((uVar8 & 0x7fffffff) != uVar5);
  }
  uVar8 = (uint)uVar9;
  if ((int)uVar3 < (int)uVar8) {
    uVar5 = (ulonglong)uVar3;
    do {
      *(undefined4 *)(local_50[0] + uVar5 * 4) = 0xffffffff;
      uVar5 = uVar5 + 1;
    } while ((uVar9 & 0xffffffff) != uVar5);
  }
  if (0 < (int)uVar8) {
    uVar6 = 1;
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(local_50[0] + uVar5 * 4) + uVar6;
      *(int *)(local_50[0] + uVar5 * 4) = (int)uVar6;
      uVar6 = uVar6 >> 0x20;
      uVar5 = uVar5 + 1;
    } while ((uVar8 & 0x7fffffff) != uVar5);
  }
  FUN_14828ba32(param_1,iVar7 + 1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + -4) = 0;
  if ((int)uVar8 < 1) {
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    uVar9 = (ulonglong)(uVar8 & 0x7fffffff);
    uVar5 = 0;
    uVar6 = 0;
    do {
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 2) + uVar5 * 4) +
              *(uint *)(local_50[0] + uVar5 * 4) + uVar6;
      *(int *)(*(longlong *)(param_1 + 8) + uVar5 * 4) = (int)uVar6;
      uVar6 = uVar6 >> 0x20;
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar5);
  }
  iVar7 = (int)uVar9 * 0x20 + 1;
  do {
    if ((int)uVar9 < 1) {
      FUN_14828b99c(local_78,0);
      FUN_14828b9da(param_1,local_78);
      FUN_148276cee(local_70);
      goto LAB_1482812a6;
    }
    uVar5 = uVar9 - 1;
    iVar7 = iVar7 + -0x20;
    lVar1 = uVar9 * 4;
    uVar9 = uVar5;
  } while (*(int *)(*(longlong *)(param_1 + 8) + -4 + lVar1) == 0);
  iVar4 = FUN_14828b69c(*(undefined4 *)(*(longlong *)(param_1 + 8) + (uVar5 & 0xffffffff) * 4));
  FUN_14828ba32(param_1,iVar7 + iVar4);
LAB_1482812a6:
  FUN_148276cee(local_50);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482812d4 FUN_1482812d4 body=139 status=ok
// SIG undefined FUN_1482812d4(void)

longlong FUN_1482812d4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_2 + lVar3);
    lVar2 = param_1 + 8 + lVar3;
    *(undefined4 *)(lVar2 + -8) = *(undefined4 *)puVar1;
    *(undefined4 *)(lVar2 + -4) = *(undefined4 *)((longlong)puVar1 + 4);
    FUN_14828b9da(lVar2,puVar1 + 1);
    *puVar1 = 0;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(puVar1 + 5);
    *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x2c);
    FUN_14828b9da(param_1 + lVar3 + 0x30,param_2 + lVar3 + 0x30);
    *(undefined8 *)(param_2 + lVar3 + 0x28) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0xf0);
  return param_1;
}



// FUNCTION 148281360 FUN_148281360 body=166 status=ok
// SIG undefined FUN_148281360(void)

undefined4 * FUN_148281360(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148281408(param_1,&local_70,param_2);
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  FUN_14828b9da(param_1 + 2,local_68);
  local_70 = 0;
  param_1[10] = (undefined4)local_48;
  param_1[0xb] = local_48._4_4_;
  FUN_14828b9da(param_1 + 0xc,local_40);
  local_48 = 0;
  FUN_148276cee(local_38);
  FUN_148276cee(local_60);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148281408 FUN_148281408 body=275 status=ok
// SIG undefined FUN_148281408(void)

undefined8 * FUN_148281408(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  int local_b0 [4];
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1482804aa(param_1,local_60,param_3 + 0x28);
  FUN_1482804aa(param_1 + 0x28,local_88,param_3);
  FUN_14828151c(local_60,local_b0,local_88);
  if (local_b0[0] == 0) {
    FUN_14828b7a0(param_2 + 1);
    *param_2 = 0;
    FUN_1482800a4(param_2 + 5,1);
  }
  else {
    FUN_1482804aa(param_1 + 0x28,local_d8,param_3 + 0x28);
    FUN_148280720(param_2,local_b0,local_d8);
    FUN_148276cee(local_c8);
  }
  FUN_148276cee(local_a0);
  FUN_148276cee(local_78);
  FUN_148276cee(local_50);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828151c FUN_14828151c body=543 status=ok
// SIG undefined FUN_14828151c(void)

int * FUN_14828151c(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  if (*param_1 == 0) {
    FUN_14828b7a0(param_2 + 2);
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    FUN_14828b7ba(param_2 + 2,param_3 + 2);
    *param_2 = -*param_2;
    return param_2;
  }
  iVar6 = *param_3;
  if (iVar6 == 0) {
    FUN_14828b7a0(param_2 + 2);
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    FUN_14828b7ba(param_2 + 2,param_1 + 2);
    return param_2;
  }
  if (*param_1 < 1) {
    if (0 < iVar6) {
      uVar9 = 0xffffffff;
      goto LAB_148281694;
    }
    if (param_1[1] == param_3[1]) {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
      if (iVar6 == param_3[2]) {
        if (iVar6 < 1) goto LAB_14828166d;
        uVar10 = (ulonglong)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) >> 2 &
                 0xffffffff;
        do {
          if ((int)uVar10 < 1) goto LAB_14828166d;
          lVar1 = uVar10 * 4;
          lVar2 = uVar10 * 4;
          uVar10 = uVar10 - 1;
          iVar8 = iVar6;
        } while (*(int *)(*(longlong *)(param_1 + 4) + -4 + lVar1) ==
                 *(int *)(*(longlong *)(param_3 + 4) + -4 + lVar2));
      }
    }
    else {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
    }
    iVar8 = iVar8 + param_3[1];
    iVar6 = iVar6 + param_1[1];
    piVar5 = param_1;
    piVar4 = param_3;
    if ((iVar8 < iVar6) ||
       ((piVar7 = param_1, iVar8 <= iVar6 &&
        (cVar3 = FUN_14828104e(param_3 + 2,param_1 + 2), cVar3 != '\0')))) goto LAB_14828171d;
  }
  else {
    if (iVar6 < 0) {
      uVar9 = 1;
LAB_148281694:
      FUN_148280a90(param_2,param_1,param_3,uVar9);
      return param_2;
    }
    if (param_1[1] == param_3[1]) {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
      if (iVar6 == param_3[2]) {
        if (iVar6 < 1) {
LAB_14828166d:
          param_2[0] = 0;
          param_2[1] = 0;
          FUN_14828b7a0(param_2 + 2);
          return param_2;
        }
        uVar10 = (ulonglong)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) >> 2 &
                 0xffffffff;
        do {
          if ((int)uVar10 < 1) goto LAB_14828166d;
          lVar1 = uVar10 * 4;
          lVar2 = uVar10 * 4;
          uVar10 = uVar10 - 1;
          iVar8 = iVar6;
        } while (*(int *)(*(longlong *)(param_1 + 4) + -4 + lVar1) ==
                 *(int *)(*(longlong *)(param_3 + 4) + -4 + lVar2));
      }
    }
    else {
      iVar6 = param_1[2];
      iVar8 = param_3[2];
    }
    iVar8 = iVar8 + param_3[1];
    iVar6 = iVar6 + param_1[1];
    piVar4 = param_1;
    piVar7 = param_3;
    if ((iVar6 <= iVar8) &&
       ((piVar5 = param_3, iVar6 < iVar8 ||
        (cVar3 = FUN_14828104e(param_3 + 2,param_1 + 2), cVar3 == '\0')))) {
LAB_14828171d:
      uVar9 = 0xffffffff;
      goto LAB_1482816c8;
    }
  }
  uVar9 = 1;
  piVar5 = piVar4;
  piVar4 = piVar7;
LAB_1482816c8:
  FUN_148280b92(param_2,piVar5,piVar4,uVar9);
  return param_2;
}



// FUNCTION 14828173c FUN_14828173c body=176 status=ok
// SIG undefined FUN_14828173c(void)

void FUN_14828173c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [7];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == param_1) || (*(longlong *)(param_2 + 0x38) == param_2)) {
    local_28 = (longlong *)0x0;
    FUN_1482817ee(local_60,param_1);
    FUN_1482817ee(param_1,param_2);
    if (local_28 != (longlong *)0x0) {
      if (local_28 == local_60) {
        uVar2 = (**(code **)(*local_28 + 8))(local_28,param_2);
        *(undefined8 *)(param_2 + 0x38) = uVar2;
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 0x20))(local_28,local_28 != local_60);
        }
      }
      else {
        *(longlong **)(param_2 + 0x38) = local_28;
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(longlong *)(param_2 + 0x38) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482817ee FUN_1482817ee body=81 status=ok
// SIG undefined FUN_1482817ee(void)

void FUN_1482817ee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 14828186c FUN_14828186c body=29 status=ok
// SIG undefined FUN_14828186c(void)

undefined8 FUN_14828186c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_1482818a2(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 148281892 FUN_148281892 body=9 status=ok
// SIG undefined FUN_148281892(void)

void FUN_148281892(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 1482818a2 FUN_1482818a2 body=850 status=ok
// SIG undefined FUN_1482818a2(void)

longlong FUN_1482818a2(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 local_5d8 [32];
  undefined4 local_5b8;
  int local_5ac;
  longlong local_5a8;
  undefined4 *local_5a0;
  undefined8 local_598;
  undefined1 local_590 [8];
  undefined1 local_588 [24];
  undefined8 local_570;
  undefined1 local_568 [8];
  undefined1 local_560 [24];
  undefined1 local_548 [240];
  undefined1 auStack_458 [80];
  undefined1 local_408 [320];
  undefined1 local_2c8 [320];
  undefined1 local_188 [240];
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_5d8;
  puVar8 = local_2c8;
  lVar5 = 0;
  local_5a8 = param_2;
  do {
    FUN_14827fba2(local_408 + lVar5);
    lVar5 = lVar5 + 0x140;
  } while (lVar5 != 0x3c0);
  FUN_14828b7a0(local_590);
  FUN_148287250(&local_598,0x7fefffffffffffff);
  FUN_14828b7a0(local_568);
  FUN_148287250(&local_570,0x3ff0000000000000);
  local_5a0 = param_1 + 1;
  local_5ac = -1;
  lVar5 = 0;
  puVar4 = local_408;
  bVar1 = true;
  do {
    bVar7 = bVar1;
    FUN_14827f8fc(param_1,local_548,param_1[(longlong)(int)(&DAT_14ae71e30)[lVar5 * 2] + 1],param_3)
    ;
    FUN_148281bf6(puVar4,local_548);
    FUN_14827f798(local_548);
    cVar2 = FUN_148281c76(puVar4 + 0xf0,&local_598);
    if (cVar2 != '\0') {
      cVar2 = FUN_14827f4ea(param_1,param_1[(longlong)(int)(&DAT_14ae71e34)[lVar5 * 2] + 1],puVar4);
      if (cVar2 != '\0') {
        local_598 = *(undefined8 *)(puVar4 + 0xf0);
        FUN_14828b7ba(local_590,puVar4 + 0xf8);
        local_570 = *(undefined8 *)(puVar4 + 0x118);
        FUN_14828b7ba(local_568,puVar4 + 0x120);
        local_5ac = (int)lVar5;
      }
    }
    lVar5 = 1;
    puVar4 = puVar8;
    bVar1 = false;
  } while (bVar7);
  local_5b8 = param_3;
  FUN_148281d26(param_1,local_548,param_1[1],param_1[2]);
  FUN_148281bf6(local_188,local_548);
  FUN_14827f798(local_548);
  cVar2 = FUN_148281c76(&local_98,&local_598);
  if (cVar2 == '\0') {
    if (local_5ac == -1) {
      FUN_14827fba2(local_548);
      lVar5 = local_5a8;
      lVar6 = 0;
      do {
        FUN_14828380c(lVar5 + lVar6,local_548 + lVar6);
        lVar6 = lVar6 + 0x50;
      } while (lVar6 != 0xf0);
      FUN_14828380c(lVar5 + 0xf0,auStack_458);
      *(undefined1 *)(lVar5 + 0x140) = 0;
      FUN_14827f798(local_548);
      goto LAB_148281b04;
    }
    puVar3 = local_5a0;
    if (local_5ac != 1) {
      puVar3 = param_1 + 2;
      puVar8 = local_408;
    }
  }
  else {
    local_598 = local_98;
    FUN_14828b7ba(local_590,local_90);
    local_570 = local_70;
    FUN_14828b7ba(local_568,local_68);
    *param_1 = 3;
    puVar3 = param_1 + 3;
    puVar8 = local_188;
  }
  lVar5 = local_5a8;
  *puVar3 = param_3;
  lVar6 = 0;
  do {
    FUN_1482801d6(lVar5 + lVar6,puVar8 + lVar6);
    lVar6 = lVar6 + 0x50;
  } while (lVar6 != 0xf0);
  FUN_1482801d6(lVar5 + 0xf0,puVar8 + 0xf0);
  *(undefined1 *)(lVar5 + 0x140) = 1;
LAB_148281b04:
  FUN_148276cee(local_560);
  FUN_148276cee(local_588);
  lVar6 = 0x280;
  do {
    FUN_14827f798(local_408 + lVar6);
    lVar6 = lVar6 + -0x140;
  } while (lVar6 != -0x140);
  if ((local_48 ^ (ulonglong)local_5d8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148281bf6 FUN_148281bf6 body=127 status=ok
// SIG undefined FUN_148281bf6(void)

longlong FUN_148281bf6(longlong param_1,longlong param_2)

{
  FUN_1482812d4();
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  FUN_14828b9da(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  FUN_14828b9da(param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x118) = 0;
  return param_1;
}



// FUNCTION 148281c76 FUN_148281c76 body=174 status=ok
// SIG undefined FUN_148281c76(void)

ulonglong FUN_148281c76(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 < 1) {
    uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*param_1 == 0) {
      uVar2 = CONCAT71(uVar3,0 < *param_2);
      goto LAB_148281ca0;
    }
    uVar2 = CONCAT71(uVar3,1);
    if (-1 < *param_2) goto LAB_148281ca0;
  }
  else if (*param_2 < 1) {
    uVar2 = 0;
    goto LAB_148281ca0;
  }
  FUN_1482804aa(param_1,local_50,param_2 + 10);
  FUN_1482804aa(param_1 + 10,local_78,param_2);
  uVar1 = FUN_14828269c(local_50,local_78);
  uVar2 = (ulonglong)uVar1;
  FUN_148276cee(local_68);
  FUN_148276cee(local_40);
LAB_148281ca0:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148281d26 FUN_148281d26 body=2421 status=ok
// SIG undefined FUN_148281d26(void)

longlong FUN_148281d26(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_bc8 [32];
  longlong local_ba8;
  longlong local_ba0;
  undefined1 local_b98 [80];
  undefined1 local_b48 [80];
  undefined1 local_af8 [80];
  undefined1 local_aa8 [80];
  undefined1 local_a58 [80];
  undefined1 local_a08 [16];
  undefined1 local_9f8 [40];
  undefined1 local_9d0 [24];
  undefined8 *local_9b8;
  undefined1 *local_9b0;
  undefined1 local_9a8 [8];
  undefined1 local_9a0 [8];
  undefined1 local_998 [24];
  undefined1 local_980 [8];
  undefined1 local_978 [8];
  undefined1 local_970 [24];
  undefined1 local_958 [176];
  undefined1 local_8a8 [64];
  undefined1 local_868 [176];
  undefined1 local_7b8 [64];
  undefined1 local_778 [176];
  undefined1 local_6c8 [64];
  undefined8 local_688;
  undefined1 local_680 [8];
  undefined1 local_678 [24];
  undefined8 local_660;
  undefined1 local_658 [8];
  undefined1 local_650 [120];
  undefined1 local_5d8 [64];
  undefined8 local_598;
  undefined1 local_590 [8];
  undefined1 local_588 [24];
  undefined8 local_570;
  undefined1 local_568 [8];
  undefined1 local_560 [24];
  undefined1 local_548 [16];
  undefined1 local_538 [64];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [64];
  undefined1 local_4a8 [40];
  undefined1 local_480 [40];
  undefined1 local_458 [16];
  undefined1 local_448 [64];
  undefined1 local_408 [96];
  undefined1 local_3a8 [64];
  undefined8 local_368;
  undefined1 local_360 [32];
  undefined8 local_340;
  undefined1 local_338 [32];
  undefined8 local_318;
  undefined1 local_310 [32];
  undefined8 local_2f0;
  undefined1 local_2e8 [32];
  undefined8 local_2c8;
  undefined1 local_2c0 [32];
  undefined8 local_2a0;
  undefined1 local_298 [32];
  undefined8 local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [24];
  undefined8 local_250;
  undefined1 local_248 [32];
  undefined8 local_228 [22];
  undefined1 local_178 [64];
  undefined1 local_138 [176];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_bc8;
  lVar8 = *(longlong *)(param_1 + 0x13a0);
  local_ba0 = (longlong)param_3 * 0xf0 + lVar8;
  lVar7 = (longlong)param_4 * 0xf0 + lVar8;
  lVar8 = (longlong)param_5 * 0xf0 + lVar8;
  local_ba8 = param_2;
  FUN_14827fddc(local_138,local_ba0,lVar8);
  FUN_14827fddc(local_228,lVar7,lVar8);
  FUN_148282a84(&local_368);
  FUN_1482829c4(&local_368);
  FUN_14827ff72(&local_598,local_138,local_138);
  local_368 = local_598;
  FUN_14828b9da(local_360,local_590);
  local_598 = 0;
  local_340 = local_570;
  FUN_14828b9da(local_338,local_568);
  local_570 = 0;
  FUN_148276cee(local_560);
  FUN_148276cee(local_588);
  FUN_14827ff72(&local_598,local_138,local_228);
  local_318 = local_598;
  FUN_14828b9da(local_310,local_590);
  local_598 = 0;
  local_2f0 = local_570;
  FUN_14828b9da(local_2e8,local_568);
  local_570 = 0;
  FUN_148276cee(local_560);
  FUN_148276cee(local_588);
  local_2c8 = local_318;
  FUN_14828b7ba(local_2c0,local_310);
  local_2a0 = local_2f0;
  FUN_14828b7ba(local_298,local_2e8);
  FUN_14827ff72(&local_598,local_228,local_228);
  local_278 = local_598;
  FUN_14828b9da(local_270,local_590);
  local_598 = 0;
  local_250 = local_570;
  FUN_14828b9da(local_248,local_568);
  local_570 = 0;
  FUN_148276cee(local_560);
  FUN_148276cee(local_588);
  FUN_14828b7a0(local_9a0);
  FUN_148287250(local_9a8,0x3fe0000000000000);
  FUN_14828b7a0(local_978);
  FUN_148287250(local_980,0x3ff0000000000000);
  FUN_14827feb8(local_9a8,&local_598,&local_368);
  FUN_14827feb8(local_9a8,local_548,&local_278);
  local_9b0 = local_4f8;
  local_9b8 = &local_598;
  FUN_14828270e(local_408);
  lVar3 = -0xa0;
  puVar5 = local_538;
  do {
    FUN_148276cee(puVar5 + 0x28);
    FUN_148276cee(puVar5);
    lVar6 = local_ba8;
    puVar5 = puVar5 + -0x50;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0);
  FUN_14827fba2(local_ba8);
  lVar3 = 0xa0;
  puVar5 = local_480;
  do {
    FUN_14828b7a0(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x28) = 0;
    FUN_1482800a4(puVar5,1);
    puVar5 = puVar5 + 0x50;
    lVar3 = lVar3 + -0x50;
  } while (lVar3 != 0);
  cVar1 = FUN_148282820(&local_368,local_408,local_4a8);
  if (cVar1 == '\0') {
    FUN_148282976(&local_598);
    FUN_1482812d4(lVar6,&local_598);
    lVar8 = -0xf0;
    puVar5 = local_4e8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    FUN_14828b7a0(local_590);
    FUN_148287250(&local_598,0x7fefffffffffffff);
    FUN_14828b7a0(local_568);
    FUN_148287250(&local_570,0x3ff0000000000000);
    *(undefined4 *)(lVar6 + 0xf0) = (undefined4)local_598;
    *(undefined4 *)(lVar6 + 0xf4) = local_598._4_4_;
    FUN_14828b9da(lVar6 + 0xf8,local_590);
    local_598 = 0;
    *(undefined4 *)(lVar6 + 0x118) = (undefined4)local_570;
    *(undefined4 *)(lVar6 + 0x11c) = local_570._4_4_;
    FUN_14828b9da(lVar6 + 0x120,local_568);
    local_570 = 0;
    FUN_148276cee(local_560);
    puVar5 = local_588;
  }
  else {
    FUN_1482800a4(&local_688,1);
    FUN_1482800a4(&local_660,1);
    FUN_148281408(&local_688,&local_598,local_4a8);
    FUN_148281408(&local_598,local_a08,local_458);
    FUN_148276cee(local_560);
    FUN_148276cee(local_588);
    FUN_148276cee(local_650);
    FUN_148276cee(local_678);
    FUN_1482801d6(local_a58,local_a08);
    FUN_14827fc12(&local_688,local_a58,lVar8);
    FUN_1482801d6(local_aa8,local_458);
    FUN_14827fc12(local_868,local_aa8,lVar7);
    lVar6 = local_ba8;
    FUN_1482801d6(local_af8,local_4a8);
    FUN_14827fc12(local_958,local_af8,local_ba0);
    FUN_14827fd00(local_778,local_958,local_868);
    FUN_14827fd00(&local_598,local_778,&local_688);
    FUN_1482812d4(lVar6,&local_598);
    lVar8 = -0xf0;
    puVar5 = local_4e8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    lVar8 = -0xf0;
    puVar5 = local_6c8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    lVar8 = -0xf0;
    puVar5 = local_8a8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    lVar8 = -0xf0;
    puVar5 = local_7b8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    lVar8 = -0xf0;
    puVar5 = local_5d8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    FUN_1482801d6(local_b48,local_458);
    FUN_14827fc12(&local_688,local_b48,local_228);
    FUN_1482801d6(local_b98,local_4a8);
    FUN_14827fc12(local_778,local_b98,local_138);
    FUN_14827fd00(&local_598,local_778,&local_688);
    lVar8 = -0xf0;
    puVar5 = local_6c8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    lVar8 = -0xf0;
    puVar5 = local_5d8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    FUN_14827ff72(&local_688,&local_598,&local_598);
    *(undefined4 *)(lVar6 + 0xf0) = (undefined4)local_688;
    *(undefined4 *)(lVar6 + 0xf4) = local_688._4_4_;
    FUN_14828b9da(lVar6 + 0xf8,local_680);
    local_688 = 0;
    *(undefined4 *)(lVar6 + 0x118) = (undefined4)local_660;
    *(undefined4 *)(lVar6 + 0x11c) = local_660._4_4_;
    FUN_14828b9da(lVar6 + 0x120,local_658);
    local_660 = 0;
    FUN_148276cee(local_650);
    FUN_148276cee(local_678);
    lVar8 = -0xf0;
    puVar5 = local_4e8;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    FUN_148276cee(local_9d0);
    puVar5 = local_9f8;
  }
  FUN_148276cee(puVar5);
  lVar8 = -0xa0;
  puVar5 = local_448;
  do {
    FUN_148276cee(puVar5 + 0x28);
    FUN_148276cee(puVar5);
    puVar5 = puVar5 + -0x50;
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0);
  lVar8 = -0xa0;
  puVar5 = local_3a8;
  do {
    FUN_148276cee(puVar5 + 0x28);
    FUN_148276cee(puVar5);
    puVar5 = puVar5 + -0x50;
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0);
  FUN_148276cee(local_970);
  FUN_148276cee(local_998);
  puVar4 = local_228;
  puVar5 = local_268;
  do {
    lVar8 = -0xa0;
    puVar2 = puVar5;
    do {
      FUN_148276cee(puVar2 + 0x28);
      FUN_148276cee(puVar2);
      puVar2 = puVar2 + -0x50;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0);
    puVar4 = puVar4 + -0x14;
    puVar5 = puVar5 + -0xa0;
  } while (puVar4 != &local_368);
  lVar8 = -0xf0;
  puVar5 = local_178;
  do {
    FUN_148276cee(puVar5 + 0x28);
    FUN_148276cee(puVar5);
    puVar5 = puVar5 + -0x50;
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0);
  lVar8 = -0xf0;
  puVar5 = local_88;
  do {
    FUN_148276cee(puVar5 + 0x28);
    FUN_148276cee(puVar5);
    puVar5 = puVar5 + -0x50;
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0);
  if ((local_48 ^ (ulonglong)auStack_bc8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828269c FUN_14828269c body=114 status=ok
// SIG undefined FUN_14828269c(void)

bool FUN_14828269c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  
  if (*param_1 < 1) {
    if (-1 < *param_1) {
      return 0 < *param_2;
    }
    if (-1 < *param_2) {
      return true;
    }
    if (param_2[2] + param_2[1] < param_1[2] + param_1[1]) {
      return true;
    }
    if (param_2[2] + param_2[1] <= param_1[2] + param_1[1]) {
      uVar1 = FUN_14828104e(param_2 + 2,param_1 + 2);
      return (bool)uVar1;
    }
  }
  else if (0 < *param_2) {
    if (param_1[2] + param_1[1] < param_2[2] + param_2[1]) {
      return true;
    }
    if (param_1[2] + param_1[1] <= param_2[2] + param_2[1]) {
      uVar1 = FUN_14828104e(param_1 + 2,param_2 + 2);
      return (bool)uVar1;
    }
  }
  return false;
}



// FUNCTION 14828270e FUN_14828270e body=273 status=ok
// SIG undefined FUN_14828270e(void)

longlong FUN_14828270e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1 + 0x28;
  lVar3 = 0xa0;
  do {
    FUN_14828b7a0(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1482800a4(lVar2,1);
    lVar2 = lVar2 + 0x50;
    lVar3 = lVar3 + -0x50;
  } while (lVar3 != 0);
  lVar3 = *param_2;
  lVar2 = param_2[1];
  iVar1 = (int)(lVar2 - lVar3 >> 4) * -0x33333333;
  if (iVar1 != 2) {
    if (iVar1 < 2) {
      FUN_148282b56(lVar3,lVar2,param_1);
      FUN_14828b7a0(local_70);
      local_78 = 0;
      FUN_1482800a4(local_50,1);
      FUN_148282af2((longlong)iVar1 * 0x50 + param_1,param_1 + 0xa0,&local_78);
      FUN_148276cee(local_40);
      FUN_148276cee(local_68);
      goto LAB_14828278a;
    }
    lVar2 = lVar3 + 0xa0;
  }
  FUN_148282b56(lVar3,lVar2,param_1);
LAB_14828278a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148282820 FUN_148282820 body=341 status=ok
// SIG undefined FUN_148282820(void)

char FUN_148282820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined1 auStack_248 [39];
  char local_221;
  undefined1 local_220 [96];
  undefined1 local_1c0 [64];
  ulonglong local_180 [32];
  undefined1 local_80 [64];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_148282be0(local_180,param_1,&local_221);
  if (local_221 == '\x01') {
    FUN_148282f4b(local_220,local_180,param_2);
    FUN_1482836fe(param_3,local_220);
    lVar1 = -0xa0;
    puVar2 = local_1c0;
    do {
      FUN_148276cee(puVar2 + 0x28);
      FUN_148276cee(puVar2);
      puVar2 = puVar2 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
  }
  else {
    FUN_148283110(local_220);
    FUN_1482836fe(param_3,local_220);
    lVar1 = -0xa0;
    puVar2 = local_1c0;
    do {
      FUN_148276cee(puVar2 + 0x28);
      FUN_148276cee(puVar2);
      puVar2 = puVar2 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
  }
  puVar4 = &local_40;
  puVar2 = local_80;
  do {
    lVar1 = -0xa0;
    puVar3 = puVar2;
    do {
      FUN_148276cee(puVar3 + 0x28);
      FUN_148276cee(puVar3);
      puVar3 = puVar3 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
    puVar4 = puVar4 + -0x14;
    puVar2 = puVar2 + -0xa0;
  } while (puVar4 != local_180);
  if ((local_40 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_221;
}



// FUNCTION 148282976 FUN_148282976 body=78 status=ok
// SIG undefined FUN_148282976(void)

longlong FUN_148282976(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x28;
  lVar1 = 0xf0;
  do {
    FUN_14828b7a0(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1482800a4(lVar2,1);
    lVar2 = lVar2 + 0x50;
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != 0);
  FUN_148280022(param_1);
  return param_1;
}



// FUNCTION 1482829c4 FUN_1482829c4 body=190 status=ok
// SIG undefined FUN_1482829c4(void)

void FUN_1482829c4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14828b7a0(local_70);
  local_78 = 0;
  FUN_1482800a4(&local_50,1);
  param_1 = param_1 + 0x30;
  lVar1 = 4;
  do {
    *(undefined4 *)(param_1 + -0x30) = (undefined4)local_78;
    *(undefined4 *)(param_1 + -0x2c) = local_78._4_4_;
    FUN_14828b7ba(param_1 + -0x28,local_70);
    *(undefined4 *)(param_1 + -8) = local_50;
    *(undefined4 *)(param_1 + -4) = local_4c;
    FUN_14828b7ba(param_1,local_48);
    param_1 = param_1 + 0x50;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_148276cee(local_40);
  FUN_148276cee(local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148282a84 FUN_148282a84 body=110 status=ok
// SIG undefined FUN_148282a84(void)

longlong FUN_148282a84(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x28;
  lVar4 = 0;
  do {
    lVar3 = 0xa0;
    lVar2 = lVar1;
    do {
      FUN_14828b7a0(lVar2 + -0x20);
      *(undefined8 *)(lVar2 + -0x28) = 0;
      FUN_1482800a4(lVar2,1);
      lVar2 = lVar2 + 0x50;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
    lVar4 = lVar4 + 0xa0;
    lVar1 = lVar1 + 0xa0;
  } while (lVar4 != 0x140);
  return param_1;
}



// FUNCTION 148282af2 FUN_148282af2 body=100 status=ok
// SIG undefined FUN_148282af2(void)

void FUN_148282af2(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      FUN_14828b7ba(param_1 + 2,param_3 + 2);
      param_1[10] = param_3[10];
      param_1[0xb] = param_3[0xb];
      FUN_14828b7ba(param_1 + 0xc,param_3 + 0xc);
      param_1 = param_1 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}



// FUNCTION 148282b56 FUN_148282b56 body=138 status=ok
// SIG undefined FUN_148282b56(void)

void FUN_148282b56(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_1 + lVar3);
      lVar2 = param_3 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      *(undefined4 *)(lVar2 + -4) = puVar1[1];
      FUN_14828b7ba(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x20) = puVar1[10];
      *(undefined4 *)(lVar2 + 0x24) = puVar1[0xb];
      FUN_14828b7ba(param_3 + lVar3 + 0x30,param_1 + lVar3 + 0x30);
      lVar2 = param_1 + lVar3;
      lVar3 = lVar3 + 0x50;
    } while (lVar2 + 0x50 != param_2);
  }
  return;
}



// FUNCTION 148282be0 FUN_148282be0 body=874 status=ok
// SIG undefined FUN_148282be0(void)

longlong FUN_148282be0(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  undefined1 local_448 [32];
  byte *local_428;
  longlong local_420;
  undefined1 local_418 [16];
  undefined1 local_408 [40];
  undefined1 local_3e0 [24];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [40];
  undefined1 local_390 [24];
  undefined1 *local_378;
  ulonglong *local_370;
  undefined1 local_368 [16];
  undefined1 local_358 [40];
  undefined1 local_330 [24];
  undefined1 local_318 [16];
  undefined1 local_308 [40];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [40];
  undefined1 local_290 [24];
  undefined1 local_278 [80];
  undefined1 local_228 [80];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [64];
  ulonglong local_188;
  undefined1 local_180 [8];
  undefined1 local_178 [24];
  undefined1 local_160 [16];
  undefined1 local_150 [200];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_448;
  FUN_148282a84();
  FUN_1482829c4(param_1);
  FUN_14827feb8(param_2,&local_188,param_2 + 0xf0);
  local_420 = param_2 + 0xa0;
  FUN_14827feb8(param_2 + 0x50,local_2c8,param_2 + 0xa0);
  FUN_148281408(&local_188,local_318,local_2c8);
  FUN_148276cee(local_290);
  FUN_148276cee(local_2b8);
  FUN_148276cee(local_150);
  FUN_148276cee(local_178);
  FUN_14828b7a0(local_180);
  local_188 = 0;
  FUN_1482800a4(local_160,1);
  bVar1 = FUN_14828360e(local_318,&local_188);
  FUN_148276cee(local_150);
  FUN_148276cee(local_178);
  if (bVar1 == 0) {
    local_428 = param_3;
    FUN_1482800a4(&local_188,1);
    FUN_1482800a4(local_160,1);
    FUN_14828315e(&local_188,local_368,local_318);
    FUN_148276cee(local_150);
    FUN_148276cee(local_178);
    FUN_14827feb8(param_2 + 0xf0,local_2c8,local_368);
    FUN_1482832ca(param_2 + 0x50,local_3c8);
    FUN_14827feb8(local_3c8,local_278,local_368);
    FUN_1482832ca(local_420,local_418);
    FUN_14827feb8(local_418,local_228,local_368);
    FUN_14827feb8(param_2,local_1d8,local_368);
    local_370 = &local_188;
    local_378 = local_2c8;
    FUN_148283358(&local_188);
    lVar2 = 0;
    do {
      FUN_1482836fe(param_1 + lVar2,local_180 + lVar2 + -8);
      lVar2 = lVar2 + 0xa0;
    } while (lVar2 != 0x140);
    puVar5 = &local_48;
    puVar4 = local_88;
    do {
      lVar2 = -0xa0;
      puVar3 = puVar4;
      do {
        FUN_148276cee(puVar3 + 0x28);
        FUN_148276cee(puVar3);
        puVar3 = puVar3 + -0x50;
        lVar2 = lVar2 + 0x50;
      } while (lVar2 != 0);
      puVar5 = puVar5 + -0x14;
      puVar4 = puVar4 + -0xa0;
    } while (puVar5 != &local_188);
    lVar2 = -0x140;
    puVar4 = local_1c8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != 0);
    FUN_148276cee(local_3e0);
    FUN_148276cee(local_408);
    FUN_148276cee(local_390);
    FUN_148276cee(local_3b8);
    FUN_148276cee(local_330);
    FUN_148276cee(local_358);
    param_3 = local_428;
  }
  else {
    FUN_1482829c4(param_1);
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar1 ^ 1;
  }
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  if ((local_48 ^ (ulonglong)local_448) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148282f4b FUN_148282f4b body=452 status=ok
// SIG undefined FUN_148282f4b(void)

longlong FUN_148282f4b(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1 + 0x28;
  lVar3 = 0xa0;
  do {
    FUN_14828b7a0(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x28) = 0;
    FUN_1482800a4(lVar4,1);
    lVar4 = lVar4 + 0x50;
    lVar3 = lVar3 + -0x50;
  } while (lVar3 != 0);
  local_a8 = param_3 + 0x50;
  uVar2 = CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
  lVar4 = 0;
  do {
    local_a0 = uVar2;
    FUN_14828b7a0(local_90);
    local_98 = 0;
    FUN_1482800a4(&local_70,1);
    lVar3 = lVar4 * 0x50;
    puVar1 = (undefined4 *)(lVar3 + param_1);
    *puVar1 = (undefined4)local_98;
    puVar1[1] = local_98._4_4_;
    FUN_14828b9da(puVar1 + 2,local_90);
    local_98 = 0;
    puVar1[10] = (undefined4)local_70;
    puVar1[0xb] = local_70._4_4_;
    FUN_14828b9da(lVar3 + param_1 + 0x30,local_68);
    local_70 = 0;
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    FUN_14827feb8(param_2 + lVar4 * 0xa0,&local_98,param_3);
    FUN_1482802ee(lVar3 + param_1,&local_98);
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    FUN_14827feb8(lVar4 * 0xa0 + param_2 + 0x50,&local_98,local_a8);
    FUN_1482802ee(lVar3 + param_1,&local_98);
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    lVar4 = 1;
    uVar2 = 0;
  } while ((local_a0 & 1) != 0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148283110 FUN_148283110 body=78 status=ok
// SIG undefined FUN_148283110(void)

longlong FUN_148283110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x28;
  lVar1 = 0xa0;
  do {
    FUN_14828b7a0(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1482800a4(lVar2,1);
    lVar2 = lVar2 + 0x50;
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != 0);
  FUN_14828378a(param_1);
  return param_1;
}



// FUNCTION 14828315e FUN_14828315e body=362 status=ok
// SIG undefined FUN_14828315e(void)

undefined8 * FUN_14828315e(longlong param_1,undefined8 *param_2,int *param_3)

{
  undefined1 auStack_a8 [32];
  char **local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_58 [4];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 == 0) {
    local_78 = 0;
    local_80 = (char *)FUN_14001cc68(0x20,0x10);
    local_70 = 0x1d;
    local_68 = 0x1f;
    builtin_strncpy(local_80,"Division by zero not allowed.",0x1e);
    local_88 = &local_80;
    FUN_14828b062(local_58,
                  ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteBSRational.h"
                  ,"gte::BSRational<class gte::UIntegerAP32>::operator/",0x15d);
    FUN_14828b402(local_58);
    FUN_1401d9a90(local_58);
    FUN_1401d9a90(&local_80);
  }
  FUN_1482804aa(param_1,local_58,param_3 + 10);
  if (local_58[0] == 0) {
    FUN_14828b7a0(param_2 + 1);
    *param_2 = 0;
    FUN_1482800a4(param_2 + 5,1);
  }
  else {
    FUN_1482804aa(param_1 + 0x28,&local_80,param_3);
    if ((int)local_80 < 0) {
      local_58[0] = -local_58[0];
      local_80 = (char *)CONCAT44(local_80._4_4_,1);
    }
    FUN_148280720(param_2,local_58,&local_80);
    FUN_148276cee(&local_70);
  }
  FUN_148276cee(local_48);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482832ca FUN_1482832ca body=140 status=ok
// SIG undefined FUN_1482832ca(void)

undefined8 FUN_1482832ca(int *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14828b7a0(local_48);
  local_50 = *param_1;
  local_4c = param_1[1];
  FUN_14828b7ba(local_48,param_1 + 2);
  local_50 = -local_50;
  FUN_148280720(param_2,&local_50,param_1 + 10);
  FUN_148276cee(local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148283358 FUN_148283358 body=692 status=ok
// SIG undefined FUN_148283358(void)

longlong FUN_148283358(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [44];
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_1;
  FUN_148282a84();
  puVar6 = (undefined4 *)*param_2;
  iVar8 = (int)((ulonglong)(param_2[1] - (longlong)puVar6) >> 4) * -0x33333333;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  lVar2 = 0;
  iVar9 = 0;
  while (lVar4 = lVar2 * 5, iVar9 < iVar8) {
    local_ac = (uint)uVar5;
    lVar10 = lVar2 * 0xa0 + local_a8;
    lVar2 = 0;
    puVar7 = puVar6;
    local_a0 = lVar4;
    bVar11 = true;
    do {
      bVar3 = bVar11;
      puVar6 = puVar7 + 0x14;
      puVar1 = (undefined4 *)(lVar10 + lVar2 * 0x50);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      FUN_14828b7ba(puVar1 + 2,puVar7 + 2);
      puVar1[10] = puVar7[10];
      puVar1[0xb] = puVar7[0xb];
      FUN_14828b7ba(lVar10 + lVar2 * 0x50 + 0x30,puVar7 + 0xc);
      iVar9 = iVar9 + 1;
      if (!bVar3) break;
      lVar2 = 1;
      puVar7 = puVar6;
      bVar11 = false;
    } while (iVar9 < iVar8);
    if (bVar3) {
      lVar2 = 1;
      uVar5 = (ulonglong)local_ac;
      lVar4 = local_a0;
      goto LAB_148283466;
    }
    lVar2 = 1;
    uVar5 = 0;
    if ((local_ac & 1) == 0) goto LAB_1482835da;
  }
  lVar2 = 0;
LAB_148283466:
  lVar4 = lVar4 * 0x20 + local_a8;
  do {
    FUN_14828b7a0(local_90);
    local_98 = 0;
    FUN_1482800a4(&local_70,1);
    puVar6 = (undefined4 *)(lVar4 + lVar2 * 0x50);
    *puVar6 = (undefined4)local_98;
    puVar6[1] = local_98._4_4_;
    FUN_14828b9da(puVar6 + 2,local_90);
    local_98 = 0;
    puVar6[10] = (undefined4)local_70;
    puVar6[0xb] = local_70._4_4_;
    FUN_14828b9da(lVar4 + lVar2 * 0x50 + 0x30,local_68);
    local_70 = 0;
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    bVar11 = lVar2 == 0;
    lVar2 = 1;
  } while (bVar11);
  if ((uVar5 & 1) != 0) {
    lVar2 = local_a8 + 0xa0;
    lVar4 = 0;
    bVar11 = true;
    do {
      bVar3 = bVar11;
      FUN_14828b7a0(local_90);
      local_98 = 0;
      FUN_1482800a4(&local_70,1);
      puVar6 = (undefined4 *)(lVar4 * 0x50 + lVar2);
      *puVar6 = (undefined4)local_98;
      puVar6[1] = local_98._4_4_;
      FUN_14828b9da(puVar6 + 2,local_90);
      local_98 = 0;
      puVar6[10] = (undefined4)local_70;
      puVar6[0xb] = local_70._4_4_;
      FUN_14828b9da(lVar4 * 0x50 + lVar2 + 0x30,local_68);
      local_70 = 0;
      FUN_148276cee(local_60);
      FUN_148276cee(local_88);
      lVar4 = 1;
      bVar11 = false;
    } while (bVar3);
  }
LAB_1482835da:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a8;
}



// FUNCTION 14828360e FUN_14828360e body=238 status=ok
// SIG undefined FUN_14828360e(void)

ulonglong FUN_14828360e(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  longlong local_68 [3];
  int local_50;
  int local_4c;
  int local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == *param_2) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*param_1 != 0) {
      FUN_1482804aa(param_1,&local_50,param_2 + 10);
      FUN_1482804aa(param_1 + 10,&local_78,param_2);
      if (((local_50 == local_78) && (local_4c == local_74)) && (local_48 == local_70)) {
        uVar4 = CONCAT71((int7)((ulonglong)&local_50 >> 8),1);
        if (0 < local_48) {
          uVar3 = (ulonglong)(local_38 - local_40) >> 2 & 0xffffffff;
          do {
            uVar4 = CONCAT71((int7)(uVar4 >> 8),(int)uVar3 < 1);
            if ((int)uVar3 < 1) break;
            lVar1 = uVar3 * 4;
            lVar2 = uVar3 * 4;
            uVar3 = uVar3 - 1;
          } while (*(int *)(local_40 + -4 + lVar1) == *(int *)(local_68[0] + -4 + lVar2));
        }
      }
      else {
        uVar4 = 0;
      }
      FUN_148276cee(local_68);
      FUN_148276cee(&local_40);
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1482836fe FUN_1482836fe body=139 status=ok
// SIG undefined FUN_1482836fe(void)

longlong FUN_1482836fe(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_2 + lVar3);
    lVar2 = param_1 + 8 + lVar3;
    *(undefined4 *)(lVar2 + -8) = *(undefined4 *)puVar1;
    *(undefined4 *)(lVar2 + -4) = *(undefined4 *)((longlong)puVar1 + 4);
    FUN_14828b9da(lVar2,puVar1 + 1);
    *puVar1 = 0;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(puVar1 + 5);
    *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x2c);
    FUN_14828b9da(param_1 + lVar3 + 0x30,param_2 + lVar3 + 0x30);
    *(undefined8 *)(param_2 + lVar3 + 0x28) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0xa0);
  return param_1;
}



// FUNCTION 14828378a FUN_14828378a body=129 status=ok
// SIG undefined FUN_14828378a(void)

void FUN_14828378a(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14828b7a0(local_60);
  local_68 = 0;
  FUN_1482800a4(local_40,1);
  FUN_148282af2(param_1,param_1 + 0xa0,&local_68);
  FUN_148276cee(local_30);
  FUN_148276cee(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828380c FUN_14828380c body=119 status=ok
// SIG undefined FUN_14828380c(void)

undefined8 * FUN_14828380c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  FUN_14828b7a0(param_1 + 1);
  param_1[5] = 0;
  FUN_14828b7a0(param_1 + 6);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  FUN_14828b9da(param_1 + 1,param_2 + 1);
  *param_2 = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_14828b9da(param_1 + 6,param_2 + 6);
  param_2[5] = 0;
  return param_1;
}



// FUNCTION 1482838b0 FUN_1482838b0 body=29 status=ok
// SIG undefined FUN_1482838b0(void)

undefined8 FUN_1482838b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_1482838e6(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 1482838d6 FUN_1482838d6 body=9 status=ok
// SIG undefined FUN_1482838d6(void)

void FUN_1482838d6(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 1482838e6 FUN_1482838e6 body=1332 status=ok
// SIG undefined FUN_1482838e6(void)

longlong FUN_1482838e6(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_b48 [32];
  undefined4 local_b28;
  undefined4 local_b20;
  longlong local_b10;
  ulonglong local_b08;
  undefined4 *local_b00;
  undefined8 local_af8;
  undefined1 local_af0 [8];
  undefined1 local_ae8 [24];
  undefined8 local_ad0;
  undefined1 local_ac8 [8];
  undefined1 local_ac0 [24];
  undefined1 local_aa8 [240];
  undefined1 auStack_9b8 [80];
  undefined1 auStack_968 [240];
  undefined8 local_878;
  undefined1 auStack_870 [32];
  undefined8 local_850;
  undefined1 auStack_848 [672];
  undefined1 auStack_5a8 [240];
  undefined8 local_4b8;
  undefined1 auStack_4b0 [32];
  undefined8 local_490;
  undefined1 auStack_488 [672];
  undefined1 local_1e8 [240];
  undefined8 local_f8;
  undefined1 local_f0 [32];
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int aiStack_a0 [10];
  undefined4 local_78;
  undefined4 uStack_74;
  int aiStack_70 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_b48;
  local_78 = 0;
  aiStack_70[2] = 0;
  aiStack_70[5] = 0;
  uStack_74 = 1;
  aiStack_70[0] = 2;
  aiStack_70[1] = 1;
  aiStack_70[3] = 2;
  aiStack_70[4] = 2;
  aiStack_70[6] = 1;
  local_a8 = 0;
  aiStack_a0[1] = 0;
  aiStack_a0[6] = 0;
  uStack_a4 = 1;
  aiStack_a0[0] = 2;
  aiStack_a0[2] = 2;
  aiStack_a0[3] = 1;
  aiStack_a0[4] = 1;
  aiStack_a0[5] = 2;
  lVar5 = 0;
  local_b10 = param_2;
  do {
    FUN_14827fba2(auStack_968 + lVar5);
    lVar5 = lVar5 + 0x140;
  } while (lVar5 != 0x8c0);
  FUN_14828b7a0(local_af0);
  FUN_148287250(&local_af8,0x7fefffffffffffff);
  FUN_14828b7a0(local_ac8);
  FUN_148287250(&local_ad0,0x3ff0000000000000);
  local_b00 = param_1 + 1;
  local_b08 = 0xffffffff;
  uVar7 = 0;
  piVar6 = aiStack_70;
  lVar5 = 0;
  do {
    FUN_14827f8fc(param_1,local_aa8,param_1[(longlong)piVar6[-2] + 1],param_3);
    puVar4 = auStack_968 + lVar5;
    FUN_148281bf6(puVar4,local_aa8);
    FUN_14827f798(local_aa8);
    cVar2 = FUN_148281c76((longlong)&local_878 + lVar5,&local_af8);
    if (cVar2 != '\0') {
      uVar1 = param_1[(longlong)*piVar6 + 1];
      cVar2 = FUN_14827f4ea(param_1,param_1[(longlong)piVar6[-1] + 1],puVar4);
      if ((cVar2 != '\0') && (cVar2 = FUN_14827f4ea(param_1,uVar1,puVar4), cVar2 != '\0')) {
        local_af8 = *(undefined8 *)((longlong)&local_878 + lVar5);
        FUN_14828b7ba(local_af0,auStack_870 + lVar5);
        local_ad0 = *(undefined8 *)((longlong)&local_850 + lVar5);
        FUN_14828b7ba(local_ac8,auStack_848 + lVar5);
        local_b08 = uVar7;
      }
    }
    lVar5 = lVar5 + 0x140;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    piVar6 = piVar6 + 3;
  } while (lVar5 != 0x3c0);
  uVar7 = 3;
  piVar6 = aiStack_a0;
  lVar5 = 0;
  do {
    local_b28 = param_3;
    FUN_148281d26(param_1,local_aa8,param_1[(longlong)piVar6[-2] + 1],
                  param_1[(longlong)piVar6[-1] + 1]);
    FUN_148281bf6(auStack_5a8 + lVar5,local_aa8);
    FUN_14827f798(local_aa8);
    cVar2 = FUN_148281c76((longlong)&local_4b8 + lVar5,&local_af8);
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_14827f4ea(param_1,param_1[(longlong)*piVar6 + 1],auStack_5a8 + lVar5),
       cVar2 != '\0')) {
      local_af8 = *(undefined8 *)((longlong)&local_4b8 + lVar5);
      FUN_14828b7ba(local_af0,auStack_4b0 + lVar5);
      local_ad0 = *(undefined8 *)((longlong)&local_490 + lVar5);
      FUN_14828b7ba(local_ac8,auStack_488 + lVar5);
      local_b08 = uVar7;
    }
    uVar7 = (ulonglong)((int)uVar7 + 1);
    lVar5 = lVar5 + 0x140;
    piVar6 = piVar6 + 3;
  } while (lVar5 != 0x3c0);
  local_b28 = param_1[3];
  local_b20 = param_3;
  FUN_148283e1c(param_1,local_aa8,param_1[1],param_1[2]);
  FUN_148281bf6(local_1e8,local_aa8);
  FUN_14827f798(local_aa8);
  cVar2 = FUN_148281c76(&local_f8,&local_af8);
  if (cVar2 == '\0') {
    uVar7 = local_b08;
    if ((int)local_b08 + 1U < 8) {
      puVar3 = param_1 + 2;
      switch((int)local_b08) {
      case 0:
        *param_1 = 2;
        uVar7 = 0;
        break;
      case 1:
        *param_1 = 2;
        uVar7 = 1;
      case 5:
        puVar3 = local_b00;
        break;
      case 2:
        *param_1 = 2;
        param_1[1] = param_1[3];
        uVar7 = 2;
        break;
      case 3:
        puVar3 = param_1 + 3;
        break;
      case 6:
        goto switchD_148283d72_caseD_6;
      case -1:
        FUN_14827fba2(local_aa8);
        lVar5 = local_b10;
        lVar8 = 0;
        do {
          FUN_14828380c(lVar5 + lVar8,local_aa8 + lVar8);
          lVar8 = lVar8 + 0x50;
        } while (lVar8 != 0xf0);
        FUN_14828380c(lVar5 + 0xf0,auStack_9b8);
        *(undefined1 *)(lVar5 + 0x140) = 0;
        FUN_14827f798(local_aa8);
        goto LAB_148283ce4;
      }
      goto switchD_148283d72_caseD_4;
    }
  }
  else {
    local_af8 = local_f8;
    FUN_14828b7ba(local_af0,local_f0);
    local_ad0 = local_d0;
    FUN_14828b7ba(local_ac8,local_c8);
switchD_148283d72_caseD_6:
    *param_1 = 4;
    puVar3 = param_1 + 4;
    uVar7 = 6;
switchD_148283d72_caseD_4:
    *puVar3 = param_3;
  }
  lVar5 = local_b10;
  lVar8 = 0;
  do {
    FUN_1482801d6(lVar5 + lVar8,auStack_968 + lVar8 + (longlong)(int)uVar7 * 0x140);
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0xf0);
  FUN_1482801d6(lVar5 + 0xf0,&local_878 + (longlong)(int)uVar7 * 0x28);
  *(undefined1 *)(lVar5 + 0x140) = 1;
LAB_148283ce4:
  FUN_148276cee(local_ac0);
  FUN_148276cee(local_ae8);
  lVar8 = 0x780;
  do {
    FUN_14827f798(auStack_968 + lVar8);
    lVar8 = lVar8 + -0x140;
  } while (lVar8 != -0x140);
  if ((local_48 ^ (ulonglong)local_b48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 148283e1c FUN_148283e1c body=3425 status=ok
// SIG undefined FUN_148283e1c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_148283e1c(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                      int param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1188 [40];
  longlong local_1160;
  longlong local_1158;
  longlong local_1150;
  longlong local_1148;
  longlong local_1140;
  undefined1 local_1138 [80];
  undefined1 local_10e8 [80];
  undefined1 local_1098 [80];
  undefined1 local_1048 [80];
  undefined1 local_ff8 [80];
  undefined1 local_fa8 [80];
  undefined1 local_f58 [80];
  undefined1 local_f08 [16];
  undefined1 local_ef8 [40];
  undefined1 local_ed0 [24];
  undefined1 *local_eb8;
  undefined8 *local_eb0;
  undefined1 local_ea8 [8];
  undefined1 local_ea0 [8];
  undefined1 local_e98 [24];
  undefined1 local_e80 [8];
  undefined1 local_e78 [8];
  undefined1 local_e70 [24];
  undefined1 local_e58 [176];
  undefined1 local_da8 [64];
  undefined1 local_d68 [176];
  undefined1 local_cb8 [64];
  undefined1 local_c78 [176];
  undefined1 local_bc8 [64];
  undefined1 local_b88 [176];
  undefined1 local_ad8 [64];
  undefined1 local_a98 [16];
  undefined1 local_a88 [24];
  undefined1 local_a70 [16];
  undefined1 local_a60 [120];
  undefined1 local_9e8 [64];
  undefined8 local_9a8;
  undefined1 local_9a0 [8];
  undefined1 local_998 [24];
  undefined8 local_980;
  undefined1 local_978 [8];
  undefined1 local_970 [120];
  undefined1 local_8f8 [64];
  undefined8 local_8b8;
  undefined1 local_8b0 [8];
  undefined1 local_8a8 [24];
  undefined8 local_890;
  undefined1 local_888 [8];
  undefined1 local_880 [120];
  undefined1 local_808 [64];
  undefined1 local_7c8 [40];
  undefined1 local_7a0 [40];
  undefined1 local_778 [80];
  undefined1 local_728 [16];
  undefined1 local_718 [64];
  undefined8 local_6d8;
  undefined1 local_6d0 [8];
  undefined1 local_6c8 [24];
  undefined8 local_6b0;
  undefined1 local_6a8 [8];
  undefined1 local_6a0 [120];
  undefined1 local_628 [64];
  undefined8 local_5e8;
  undefined1 local_5e0 [32];
  undefined8 local_5c0;
  undefined1 local_5b8 [32];
  undefined8 local_598;
  undefined1 local_590 [32];
  undefined8 local_570;
  undefined1 local_568 [32];
  undefined8 local_548;
  undefined1 local_540 [32];
  undefined8 local_520;
  undefined1 local_518 [32];
  undefined8 local_4f8;
  undefined1 local_4f0 [32];
  undefined8 local_4d0;
  undefined1 local_4c8 [32];
  undefined8 local_4a8;
  undefined1 local_4a0 [32];
  undefined8 local_480;
  undefined1 local_478 [32];
  undefined8 local_458;
  undefined1 local_450 [32];
  undefined8 local_430;
  undefined1 local_428 [32];
  undefined8 local_408;
  undefined1 local_400 [32];
  undefined8 local_3e0;
  undefined1 local_3d8 [32];
  undefined8 local_3b8;
  undefined1 local_3b0 [32];
  undefined8 local_390;
  undefined1 local_388 [32];
  undefined8 local_368;
  undefined1 local_360 [8];
  undefined1 local_358 [24];
  undefined8 local_340;
  undefined1 local_338 [32];
  undefined8 local_318 [22];
  undefined1 local_268 [64];
  undefined1 local_228 [176];
  undefined1 local_178 [64];
  undefined1 local_138 [176];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1188;
  lVar7 = *(longlong *)(param_1 + 0x13a0);
  local_1140 = (longlong)param_3 * 0xf0 + lVar7;
  lVar6 = (longlong)param_4 * 0xf0 + lVar7;
  lVar2 = (longlong)param_5 * 0xf0 + lVar7;
  lVar7 = (longlong)param_6 * 0xf0 + lVar7;
  local_1160 = param_2;
  FUN_14827fddc(local_138,local_1140,lVar7);
  local_1148 = lVar6;
  FUN_14827fddc(local_228,lVar6,lVar7);
  local_1158 = lVar7;
  local_1150 = lVar2;
  FUN_14827fddc(local_318,lVar2,lVar7);
  FUN_148284ea6(&local_5e8);
  FUN_148284de6(&local_5e8);
  FUN_14827ff72(&local_6d8,local_138,local_138);
  local_5e8 = local_6d8;
  FUN_14828b9da(local_5e0,local_6d0);
  local_6d8 = 0;
  local_5c0 = local_6b0;
  FUN_14828b9da(local_5b8,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  FUN_14827ff72(&local_6d8,local_138,local_228);
  local_598 = local_6d8;
  FUN_14828b9da(local_590,local_6d0);
  local_6d8 = 0;
  local_570 = local_6b0;
  FUN_14828b9da(local_568,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  FUN_14827ff72(&local_6d8,local_138,local_318);
  local_548 = local_6d8;
  FUN_14828b9da(local_540,local_6d0);
  local_6d8 = 0;
  local_520 = local_6b0;
  FUN_14828b9da(local_518,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  local_4f8 = local_598;
  FUN_14828b7ba(local_4f0,local_590);
  local_4d0 = local_570;
  FUN_14828b7ba(local_4c8,local_568);
  FUN_14827ff72(&local_6d8,local_228,local_228);
  local_4a8 = local_6d8;
  FUN_14828b9da(local_4a0,local_6d0);
  local_6d8 = 0;
  local_480 = local_6b0;
  FUN_14828b9da(local_478,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  FUN_14827ff72(&local_6d8,local_228,local_318);
  local_458 = local_6d8;
  FUN_14828b9da(local_450,local_6d0);
  local_6d8 = 0;
  local_430 = local_6b0;
  FUN_14828b9da(local_428,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  local_408 = local_548;
  FUN_14828b7ba(local_400,local_540);
  local_3e0 = local_520;
  FUN_14828b7ba(local_3d8,local_518);
  local_3b8 = local_458;
  FUN_14828b7ba(local_3b0,local_450);
  local_390 = local_430;
  FUN_14828b7ba(local_388,local_428);
  FUN_14827ff72(&local_6d8,local_318,local_318);
  local_368 = local_6d8;
  FUN_14828b9da(local_360,local_6d0);
  local_6d8 = 0;
  local_340 = local_6b0;
  FUN_14828b9da(local_338,local_6a8);
  local_6b0 = 0;
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  FUN_14828b7a0(local_ea0);
  FUN_148287250(local_ea8,0x3fe0000000000000);
  FUN_14828b7a0(local_e78);
  FUN_148287250(local_e80,0x3ff0000000000000);
  FUN_14827feb8(local_ea8,local_7c8,&local_5e8);
  FUN_14827feb8(local_ea8,local_778,&local_4a8);
  FUN_14827feb8(local_ea8,local_728,&local_368);
  local_eb0 = &local_6d8;
  local_eb8 = local_7c8;
  FUN_148284b7e(&local_6d8);
  lVar7 = -0xf0;
  puVar4 = local_718;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    lVar2 = local_1160;
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  FUN_14827fba2(local_1160);
  lVar7 = 0xf0;
  puVar4 = local_7a0;
  do {
    FUN_14828b7a0(puVar4 + -0x20);
    *(undefined8 *)(puVar4 + -0x28) = 0;
    FUN_1482800a4(puVar4,1);
    puVar4 = puVar4 + 0x50;
    lVar7 = lVar7 + -0x50;
  } while (lVar7 != 0);
  cVar1 = FUN_148284c90(&local_5e8,&local_6d8,local_7c8);
  if (cVar1 == '\0') {
    FUN_148282976(&local_8b8);
    FUN_1482812d4(lVar2,&local_8b8);
    lVar7 = -0xf0;
    puVar4 = local_808;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    FUN_14828b7a0(local_8b0);
    FUN_148287250(&local_8b8,0x7fefffffffffffff);
    FUN_14828b7a0(local_888);
    FUN_148287250(&local_890,0x3ff0000000000000);
    *(undefined4 *)(lVar2 + 0xf0) = (undefined4)local_8b8;
    *(undefined4 *)(lVar2 + 0xf4) = local_8b8._4_4_;
    FUN_14828b9da(lVar2 + 0xf8,local_8b0);
    local_8b8 = 0;
    *(undefined4 *)(lVar2 + 0x118) = (undefined4)local_890;
    *(undefined4 *)(lVar2 + 0x11c) = local_890._4_4_;
    FUN_14828b9da(lVar2 + 0x120,local_888);
    local_890 = 0;
    FUN_148276cee(local_880);
    puVar4 = local_8a8;
  }
  else {
    FUN_1482800a4(local_a98,1);
    FUN_1482800a4(local_a70,1);
    FUN_148281408(local_a98,&local_9a8,local_7c8);
    FUN_148281408(&local_9a8,&local_8b8,local_778);
    FUN_148281408(&local_8b8,local_f08,local_728);
    FUN_148276cee(local_880);
    FUN_148276cee(local_8a8);
    FUN_148276cee(local_970);
    FUN_148276cee(local_998);
    FUN_148276cee(local_a60);
    FUN_148276cee(local_a88);
    FUN_1482801d6(local_f58,local_f08);
    FUN_14827fc12(&local_9a8,local_f58,local_1158);
    FUN_1482801d6(local_fa8,local_728);
    FUN_14827fc12(local_b88,local_fa8,local_1150);
    FUN_1482801d6(local_ff8,local_778);
    FUN_14827fc12(local_d68,local_ff8,local_1148);
    FUN_1482801d6(local_1048,local_7c8);
    FUN_14827fc12(local_e58,local_1048,local_1140);
    FUN_14827fd00(local_c78,local_e58,local_d68);
    FUN_14827fd00(local_a98,local_c78,local_b88);
    FUN_14827fd00(&local_8b8,local_a98,&local_9a8);
    FUN_1482812d4(lVar2,&local_8b8);
    lVar7 = -0xf0;
    puVar4 = local_808;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_9e8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_bc8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_da8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_cb8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_ad8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_8f8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    FUN_1482801d6(local_1098,local_728);
    FUN_14827fc12(&local_9a8,local_1098,local_318);
    FUN_1482801d6(local_10e8,local_778);
    FUN_14827fc12(local_b88,local_10e8,local_228);
    FUN_1482801d6(local_1138,local_7c8);
    FUN_14827fc12(local_c78,local_1138,local_138);
    FUN_14827fd00(local_a98,local_c78,local_b88);
    FUN_14827fd00(&local_8b8,local_a98,&local_9a8);
    lVar7 = -0xf0;
    puVar4 = local_9e8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      lVar2 = local_1160;
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_bc8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_ad8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    lVar7 = -0xf0;
    puVar4 = local_8f8;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    FUN_14827ff72(&local_9a8,&local_8b8,&local_8b8);
    *(undefined4 *)(lVar2 + 0xf0) = (undefined4)local_9a8;
    *(undefined4 *)(lVar2 + 0xf4) = local_9a8._4_4_;
    FUN_14828b9da(lVar2 + 0xf8,local_9a0);
    local_9a8 = 0;
    *(undefined4 *)(lVar2 + 0x118) = (undefined4)local_980;
    *(undefined4 *)(lVar2 + 0x11c) = local_980._4_4_;
    FUN_14828b9da(lVar2 + 0x120,local_978);
    local_980 = 0;
    FUN_148276cee(local_970);
    FUN_148276cee(local_998);
    lVar7 = -0xf0;
    puVar4 = local_808;
    do {
      FUN_148276cee(puVar4 + 0x28);
      FUN_148276cee(puVar4);
      puVar4 = puVar4 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    FUN_148276cee(local_ed0);
    puVar4 = local_ef8;
  }
  FUN_148276cee(puVar4);
  lVar7 = -0xf0;
  puVar4 = local_718;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  lVar7 = -0xf0;
  puVar4 = local_628;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  FUN_148276cee(local_e70);
  FUN_148276cee(local_e98);
  puVar3 = local_318;
  puVar4 = local_358;
  do {
    lVar7 = -0xf0;
    puVar5 = puVar4;
    do {
      FUN_148276cee(puVar5 + 0x28);
      FUN_148276cee(puVar5);
      puVar5 = puVar5 + -0x50;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != 0);
    puVar3 = puVar3 + -0x1e;
    puVar4 = puVar4 + -0xf0;
  } while (puVar3 != &local_5e8);
  lVar7 = -0xf0;
  puVar4 = local_268;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  lVar7 = -0xf0;
  puVar4 = local_178;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  lVar7 = -0xf0;
  puVar4 = local_88;
  do {
    FUN_148276cee(puVar4 + 0x28);
    FUN_148276cee(puVar4);
    puVar4 = puVar4 + -0x50;
    lVar7 = lVar7 + 0x50;
  } while (lVar7 != 0);
  if ((local_48 ^ (ulonglong)auStack_1188) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148284b7e FUN_148284b7e body=273 status=ok
// SIG undefined FUN_148284b7e(void)

longlong FUN_148284b7e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1 + 0x28;
  lVar3 = 0xf0;
  do {
    FUN_14828b7a0(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x28) = 0;
    FUN_1482800a4(lVar2,1);
    lVar2 = lVar2 + 0x50;
    lVar3 = lVar3 + -0x50;
  } while (lVar3 != 0);
  lVar3 = *param_2;
  lVar2 = param_2[1];
  iVar1 = (int)(lVar2 - lVar3 >> 4) * -0x33333333;
  if (iVar1 != 3) {
    if (iVar1 < 3) {
      FUN_148282b56(lVar3,lVar2,param_1);
      FUN_14828b7a0(local_70);
      local_78 = 0;
      FUN_1482800a4(local_50,1);
      FUN_14828012a((longlong)iVar1 * 0x50 + param_1,param_1 + 0xf0,&local_78);
      FUN_148276cee(local_40);
      FUN_148276cee(local_68);
      goto LAB_148284bfa;
    }
    lVar2 = lVar3 + 0xf0;
  }
  FUN_148282b56(lVar3,lVar2,param_1);
LAB_148284bfa:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148284c90 FUN_148284c90 body=341 status=ok
// SIG undefined FUN_148284c90(void)

char FUN_148284c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined1 auStack_428 [39];
  char local_401;
  undefined1 local_400 [176];
  undefined1 local_350 [64];
  ulonglong local_310 [82];
  undefined1 local_80 [64];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_148284f14(local_310,param_1,&local_401);
  if (local_401 == '\x01') {
    FUN_148285890(local_400,local_310,param_2);
    FUN_1482812d4(param_3,local_400);
    lVar1 = -0xf0;
    puVar2 = local_350;
    do {
      FUN_148276cee(puVar2 + 0x28);
      FUN_148276cee(puVar2);
      puVar2 = puVar2 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
  }
  else {
    FUN_148282976(local_400);
    FUN_1482812d4(param_3,local_400);
    lVar1 = -0xf0;
    puVar2 = local_350;
    do {
      FUN_148276cee(puVar2 + 0x28);
      FUN_148276cee(puVar2);
      puVar2 = puVar2 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
  }
  puVar4 = &local_40;
  puVar2 = local_80;
  do {
    lVar1 = -0xf0;
    puVar3 = puVar2;
    do {
      FUN_148276cee(puVar3 + 0x28);
      FUN_148276cee(puVar3);
      puVar3 = puVar3 + -0x50;
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != 0);
    puVar4 = puVar4 + -0x1e;
    puVar2 = puVar2 + -0xf0;
  } while (puVar4 != local_310);
  if ((local_40 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_401;
}



// FUNCTION 148284de6 FUN_148284de6 body=190 status=ok
// SIG undefined FUN_148284de6(void)

void FUN_148284de6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14828b7a0(local_70);
  local_78 = 0;
  FUN_1482800a4(&local_50,1);
  param_1 = param_1 + 0x30;
  lVar1 = 9;
  do {
    *(undefined4 *)(param_1 + -0x30) = (undefined4)local_78;
    *(undefined4 *)(param_1 + -0x2c) = local_78._4_4_;
    FUN_14828b7ba(param_1 + -0x28,local_70);
    *(undefined4 *)(param_1 + -8) = local_50;
    *(undefined4 *)(param_1 + -4) = local_4c;
    FUN_14828b7ba(param_1,local_48);
    param_1 = param_1 + 0x50;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_148276cee(local_40);
  FUN_148276cee(local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148284ea6 FUN_148284ea6 body=110 status=ok
// SIG undefined FUN_148284ea6(void)

longlong FUN_148284ea6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x28;
  lVar4 = 0;
  do {
    lVar3 = 0xf0;
    lVar2 = lVar1;
    do {
      FUN_14828b7a0(lVar2 + -0x20);
      *(undefined8 *)(lVar2 + -0x28) = 0;
      FUN_1482800a4(lVar2,1);
      lVar2 = lVar2 + 0x50;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
    lVar4 = lVar4 + 0xf0;
    lVar1 = lVar1 + 0xf0;
  } while (lVar4 != 0x2d0);
  return param_1;
}



// FUNCTION 148284f14 FUN_148284f14 body=2427 status=ok
// SIG undefined FUN_148284f14(void)

longlong FUN_148284f14(longlong param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  undefined1 local_d98 [39];
  byte local_d71;
  longlong local_d70;
  longlong local_d68;
  longlong local_d60;
  byte *local_d58;
  longlong local_d50;
  longlong local_d48;
  longlong local_d40;
  longlong local_d38;
  longlong local_d30;
  undefined1 local_d28 [16];
  undefined1 local_d18 [40];
  undefined1 local_cf0 [24];
  undefined1 local_cd8 [16];
  undefined1 local_cc8 [40];
  undefined1 local_ca0 [24];
  undefined1 local_c88 [16];
  undefined1 local_c78 [40];
  undefined1 local_c50 [24];
  undefined1 local_c38 [16];
  undefined1 local_c28 [40];
  undefined1 local_c00 [24];
  undefined1 local_be8 [16];
  undefined1 local_bd8 [40];
  undefined1 local_bb0 [24];
  undefined1 local_b98 [16];
  undefined1 local_b88 [40];
  undefined1 local_b60 [24];
  undefined1 local_b48 [16];
  undefined1 local_b38 [40];
  undefined1 local_b10 [24];
  undefined1 local_af8 [16];
  undefined1 local_ae8 [40];
  undefined1 local_ac0 [24];
  undefined1 local_aa8 [16];
  undefined1 local_a98 [40];
  undefined1 local_a70 [24];
  undefined1 local_a58 [16];
  undefined1 local_a48 [40];
  undefined1 local_a20 [24];
  undefined1 local_a08 [16];
  undefined1 local_9f8 [40];
  undefined1 local_9d0 [24];
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [40];
  undefined1 local_980 [24];
  undefined1 local_968 [16];
  undefined1 local_958 [40];
  undefined1 local_930 [24];
  undefined1 local_918 [16];
  undefined1 local_908 [40];
  undefined1 local_8e0 [24];
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [40];
  undefined1 local_890 [24];
  undefined1 local_878 [16];
  undefined1 local_868 [40];
  undefined1 local_840 [24];
  undefined1 local_828 [16];
  undefined1 local_818 [40];
  undefined1 local_7f0 [24];
  undefined1 *local_7d8;
  ulonglong *local_7d0;
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [40];
  undefined1 local_790 [24];
  undefined1 local_778 [16];
  undefined1 local_768 [40];
  undefined1 local_740 [24];
  undefined1 local_728 [16];
  undefined1 local_718 [40];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [40];
  undefined1 local_6a0 [24];
  undefined1 local_688 [16];
  undefined1 local_678 [40];
  undefined1 local_650 [24];
  undefined1 local_638 [16];
  undefined1 local_628 [40];
  undefined1 local_600 [24];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [40];
  undefined1 local_5b0 [24];
  undefined1 local_598 [80];
  undefined1 local_548 [80];
  undefined1 local_4f8 [80];
  undefined1 local_4a8 [80];
  undefined1 local_458 [80];
  undefined1 local_408 [80];
  undefined1 local_3b8 [80];
  undefined1 local_368 [16];
  undefined1 local_358 [64];
  ulonglong local_318;
  undefined1 local_310 [8];
  undefined1 local_308 [24];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [600];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_d98;
  local_d58 = param_3;
  FUN_148284ea6();
  local_d68 = param_1;
  FUN_148284de6(param_1);
  lVar5 = param_2 + 0xf0;
  local_d70 = param_2 + 0x140;
  lVar1 = param_2 + 0x1e0;
  lVar7 = param_2 + 0x280;
  FUN_14827feb8(local_d70,&local_318,lVar7);
  lVar2 = param_2 + 400;
  lVar3 = param_2 + 0x230;
  FUN_14827feb8(lVar2,local_5e8,lVar3);
  FUN_148281408(&local_318,local_638,local_5e8);
  FUN_148276cee(local_5b0);
  FUN_148276cee(local_5d8);
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  local_d40 = lVar2;
  FUN_14827feb8(lVar2,&local_318,lVar1);
  local_d48 = lVar7;
  FUN_14827feb8(lVar5,local_5e8,lVar7);
  FUN_148281408(&local_318,local_688,local_5e8);
  FUN_148276cee(local_5b0);
  FUN_148276cee(local_5d8);
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  local_d60 = lVar3;
  local_d30 = lVar5;
  FUN_14827feb8(lVar5,&local_318,lVar3);
  local_d38 = lVar1;
  FUN_14827feb8(local_d70,local_5e8,lVar1);
  FUN_148281408(&local_318,local_6d8,local_5e8);
  FUN_148276cee(local_5b0);
  FUN_148276cee(local_5d8);
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  FUN_14827feb8(param_2,local_5e8,local_638);
  lVar5 = param_2 + 0x50;
  FUN_14827feb8(lVar5,local_778,local_688);
  FUN_148280396(local_5e8,&local_318,local_778);
  lVar1 = param_2 + 0xa0;
  FUN_14827feb8(lVar1,local_7c8,local_6d8);
  FUN_148280396(&local_318,local_728,local_7c8);
  FUN_148276cee(local_790);
  FUN_148276cee(local_7b8);
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  FUN_148276cee(local_740);
  FUN_148276cee(local_768);
  FUN_148276cee(local_5b0);
  FUN_148276cee(local_5d8);
  FUN_14828b7a0(local_310);
  local_318 = 0;
  FUN_1482800a4(local_2f0,1);
  bVar4 = FUN_14828360e(local_728,&local_318);
  FUN_148276cee(local_2e0);
  FUN_148276cee(local_308);
  lVar7 = local_d68;
  if (bVar4 == 0) {
    local_d71 = bVar4;
    FUN_1482800a4(&local_318,1);
    FUN_1482800a4(local_2f0,1);
    FUN_14828315e(&local_318,local_778,local_728);
    FUN_148276cee(local_2e0);
    FUN_148276cee(local_308);
    FUN_14827feb8(local_638,local_5e8,local_778);
    FUN_14827feb8(lVar1,local_828,local_d60);
    lVar7 = local_d48;
    FUN_14827feb8(lVar5,local_878,local_d48);
    local_d50 = lVar5;
    FUN_148281408(local_828,local_7c8,local_878);
    FUN_14827feb8(local_7c8,local_598,local_778);
    lVar2 = local_d40;
    FUN_14827feb8(lVar5,local_918,local_d40);
    FUN_14827feb8(lVar1,local_968,local_d70);
    FUN_148281408(local_918,local_8c8,local_968);
    FUN_14827feb8(local_8c8,local_548,local_778);
    FUN_14827feb8(local_688,local_4f8,local_778);
    FUN_14827feb8(param_2,local_a08,lVar7);
    lVar7 = local_d38;
    FUN_14827feb8(lVar1,local_a58,local_d38);
    FUN_148281408(local_a08,local_9b8,local_a58);
    FUN_14827feb8(local_9b8,local_4a8,local_778);
    lVar3 = local_d30;
    FUN_14827feb8(lVar1,local_af8,local_d30);
    FUN_14827feb8(param_2,local_b48,lVar2);
    FUN_148281408(local_af8,local_aa8,local_b48);
    FUN_14827feb8(local_aa8,local_458,local_778);
    FUN_14827feb8(local_6d8,local_408,local_778);
    lVar5 = local_d50;
    FUN_14827feb8(local_d50,local_be8,lVar7);
    FUN_14827feb8(param_2,local_c38,local_d60);
    FUN_148281408(local_be8,local_b98,local_c38);
    FUN_14827feb8(local_b98,local_3b8,local_778);
    FUN_14827feb8(param_2,local_cd8,local_d70);
    FUN_14827feb8(lVar5,local_d28,lVar3);
    FUN_148281408(local_cd8,local_c88,local_d28);
    FUN_14827feb8(local_c88,local_368,local_778);
    local_7d8 = local_5e8;
    local_7d0 = &local_318;
    FUN_148285a2a(&local_318);
    lVar7 = local_d68;
    lVar5 = 0;
    do {
      FUN_1482812d4(lVar7 + lVar5,local_310 + lVar5 + -8);
      lVar5 = lVar5 + 0xf0;
    } while (lVar5 != 0x2d0);
    puVar8 = &local_48;
    puVar9 = local_88;
    do {
      lVar5 = -0xf0;
      puVar6 = puVar9;
      do {
        FUN_148276cee(puVar6 + 0x28);
        FUN_148276cee(puVar6);
        puVar6 = puVar6 + -0x50;
        lVar5 = lVar5 + 0x50;
      } while (lVar5 != 0);
      puVar8 = puVar8 + -0x1e;
      puVar9 = puVar9 + -0xf0;
    } while (puVar8 != &local_318);
    lVar5 = -0x2d0;
    puVar9 = local_358;
    do {
      FUN_148276cee(puVar9 + 0x28);
      FUN_148276cee(puVar9);
      puVar9 = puVar9 + -0x50;
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0);
    FUN_148276cee(local_c50);
    FUN_148276cee(local_c78);
    FUN_148276cee(local_cf0);
    FUN_148276cee(local_d18);
    FUN_148276cee(local_ca0);
    FUN_148276cee(local_cc8);
    FUN_148276cee(local_b60);
    FUN_148276cee(local_b88);
    FUN_148276cee(local_c00);
    FUN_148276cee(local_c28);
    FUN_148276cee(local_bb0);
    FUN_148276cee(local_bd8);
    FUN_148276cee(local_a70);
    FUN_148276cee(local_a98);
    FUN_148276cee(local_b10);
    FUN_148276cee(local_b38);
    FUN_148276cee(local_ac0);
    FUN_148276cee(local_ae8);
    FUN_148276cee(local_980);
    FUN_148276cee(local_9a8);
    FUN_148276cee(local_a20);
    FUN_148276cee(local_a48);
    FUN_148276cee(local_9d0);
    FUN_148276cee(local_9f8);
    FUN_148276cee(local_890);
    FUN_148276cee(local_8b8);
    FUN_148276cee(local_930);
    FUN_148276cee(local_958);
    FUN_148276cee(local_8e0);
    FUN_148276cee(local_908);
    FUN_148276cee(local_790);
    FUN_148276cee(local_7b8);
    FUN_148276cee(local_840);
    FUN_148276cee(local_868);
    FUN_148276cee(local_7f0);
    FUN_148276cee(local_818);
    FUN_148276cee(local_740);
    FUN_148276cee(local_768);
    bVar4 = local_d71;
  }
  else {
    FUN_148284de6(local_d68);
  }
  if (local_d58 != (byte *)0x0) {
    *local_d58 = bVar4 ^ 1;
  }
  FUN_148276cee(local_6f0);
  FUN_148276cee(local_718);
  FUN_148276cee(local_6a0);
  FUN_148276cee(local_6c8);
  FUN_148276cee(local_650);
  FUN_148276cee(local_678);
  FUN_148276cee(local_600);
  FUN_148276cee(local_628);
  if ((local_48 ^ (ulonglong)local_d98) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148285890 FUN_148285890 body=408 status=ok
// SIG undefined FUN_148285890(void)

longlong FUN_148285890(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1 + 0x28;
  lVar4 = 0xf0;
  local_a8 = param_1;
  local_a0 = param_3;
  do {
    FUN_14828b7a0(lVar3 + -0x20);
    *(undefined8 *)(lVar3 + -0x28) = 0;
    FUN_1482800a4(lVar3,1);
    lVar2 = local_a8;
    lVar3 = lVar3 + 0x50;
    lVar4 = lVar4 + -0x50;
  } while (lVar4 != 0);
  lVar3 = 0;
  do {
    FUN_14828b7a0(local_90);
    local_98 = 0;
    FUN_1482800a4(&local_70,1);
    lVar5 = lVar3 * 0x50;
    puVar1 = (undefined4 *)(lVar5 + lVar2);
    *puVar1 = (undefined4)local_98;
    puVar1[1] = local_98._4_4_;
    FUN_14828b9da(puVar1 + 2,local_90);
    local_98 = 0;
    puVar1[10] = (undefined4)local_70;
    puVar1[0xb] = local_70._4_4_;
    FUN_14828b9da(lVar2 + 0x30 + lVar5,local_68);
    local_70 = 0;
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    lVar4 = 0;
    do {
      FUN_14827feb8(param_2 + lVar4,&local_98,local_a0 + lVar4);
      FUN_1482802ee(lVar5 + lVar2,&local_98);
      FUN_148276cee(local_60);
      FUN_148276cee(local_88);
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != 0xf0);
    lVar3 = lVar3 + 1;
    param_2 = param_2 + 0xf0;
  } while (lVar3 != 3);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148285a2a FUN_148285a2a body=745 status=ok
// SIG undefined FUN_148285a2a(void)

longlong FUN_148285a2a(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148284ea6();
  lVar9 = *param_2;
  iVar6 = (int)((ulonglong)(param_2[1] - lVar9) >> 4) * -0x33333333;
  lVar8 = param_1 + 0x30;
  local_b0 = param_1 + 8;
  lVar7 = param_1 + 0x28;
  uVar5 = 0;
  uVar3 = 0;
  local_b8 = param_1;
  while (local_c0 = lVar7, (int)uVar3 < iVar6) {
    lVar7 = 0;
    uVar2 = 0;
    local_a8 = lVar8;
    local_a0 = uVar5;
    do {
      uVar1 = uVar2;
      puVar10 = (undefined4 *)(lVar7 + lVar9);
      lVar8 = param_1 + 8 + lVar7;
      *(undefined4 *)(lVar8 + -8) = *puVar10;
      *(undefined4 *)(lVar8 + -4) = puVar10[1];
      FUN_14828b7ba(lVar8,puVar10 + 2);
      *(undefined4 *)(lVar8 + 0x20) = puVar10[10];
      *(undefined4 *)(lVar8 + 0x24) = puVar10[0xb];
      FUN_14828b7ba(param_1 + lVar7 + 0x30,lVar7 + lVar9 + 0x30);
      uVar2 = uVar1 + 1;
      lVar7 = lVar7 + 0x50;
      if (1 < uVar1) break;
    } while ((int)uVar3 + (int)uVar1 + 1 < iVar6);
    uVar5 = local_a0;
    lVar8 = local_a8;
    if (uVar1 < 2) goto LAB_148285b5e;
    uVar3 = (uVar3 & 0xffffffff) + uVar2;
    lVar9 = lVar9 + lVar7;
    uVar5 = local_a0 + 1;
    lVar8 = local_a8 + 0xf0;
    local_b0 = local_b0 + 0xf0;
    lVar7 = local_c0 + 0xf0;
    param_1 = param_1 + 0xf0;
    if (uVar5 == 3) goto LAB_148285ce1;
  }
  uVar2 = 0;
LAB_148285b5e:
  lVar7 = uVar2 - 3;
  lVar9 = uVar2 * 0x50;
  lVar8 = lVar8 + lVar9;
  lVar4 = local_b0 + lVar9;
  puVar10 = (undefined4 *)(local_c0 + lVar9);
  do {
    FUN_14828b7a0(local_90);
    local_98 = 0;
    FUN_1482800a4(&local_70,1);
    puVar10[-10] = (undefined4)local_98;
    puVar10[-9] = local_98._4_4_;
    FUN_14828b9da(lVar4,local_90);
    local_98 = 0;
    *puVar10 = (undefined4)local_70;
    puVar10[1] = local_70._4_4_;
    FUN_14828b9da(lVar8,local_68);
    local_70 = 0;
    FUN_148276cee(local_60);
    FUN_148276cee(local_88);
    lVar8 = lVar8 + 0x50;
    lVar4 = lVar4 + 0x50;
    puVar10 = puVar10 + 0x14;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0);
  if (uVar5 < 2) {
    lVar8 = uVar5 + 1;
    local_c0 = local_b8 + 0x30;
    do {
      lVar9 = lVar8 * 0xf0 + local_c0;
      lVar7 = 3;
      do {
        FUN_14828b7a0(local_90);
        local_98 = 0;
        FUN_1482800a4(&local_70,1);
        *(undefined4 *)(lVar9 + -0x30) = (undefined4)local_98;
        *(undefined4 *)(lVar9 + -0x2c) = local_98._4_4_;
        FUN_14828b9da(lVar9 + -0x28,local_90);
        local_98 = 0;
        *(undefined4 *)(lVar9 + -8) = (undefined4)local_70;
        *(undefined4 *)(lVar9 + -4) = local_70._4_4_;
        FUN_14828b9da(lVar9,local_68);
        local_70 = 0;
        FUN_148276cee(local_60);
        FUN_148276cee(local_88);
        lVar9 = lVar9 + 0x50;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      bVar11 = lVar8 != 2;
      lVar8 = 2;
    } while (bVar11);
  }
LAB_148285ce1:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b8;
}



// FUNCTION 148285d40 FUN_148285d40 body=29 status=ok
// SIG undefined FUN_148285d40(void)

undefined8 FUN_148285d40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_148285d76(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 148285d66 FUN_148285d66 body=9 status=ok
// SIG undefined FUN_148285d66(void)

void FUN_148285d66(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148285d76 FUN_148285d76 body=1623 status=ok
// SIG undefined FUN_148285d76(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_148285d76(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_13b8 [32];
  undefined4 local_1398;
  undefined4 local_1390;
  undefined4 *local_1380;
  undefined4 local_1378;
  uint local_1374;
  ulonglong local_1370;
  undefined4 *local_1368;
  longlong local_1360;
  undefined8 local_1358;
  undefined1 local_1350 [8];
  undefined1 local_1348 [24];
  undefined8 local_1330;
  undefined1 local_1328 [8];
  undefined1 local_1320 [24];
  undefined1 local_1308 [240];
  undefined1 auStack_1218 [80];
  undefined8 auStack_11c8 [5];
  undefined8 auStack_11a0 [25];
  undefined8 local_10d8;
  undefined1 auStack_10d0 [32];
  undefined8 local_10b0;
  undefined1 auStack_10a8 [4192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_13b8;
  lVar8 = 0;
  local_1380 = param_1;
  local_1378 = param_3;
  local_1360 = param_2;
  do {
    FUN_14827fba2((longlong)auStack_11c8 + lVar8);
    lVar8 = lVar8 + 0x140;
  } while (lVar8 != 0x1180);
  FUN_14828b7a0(local_1350);
  FUN_148287250(&local_1358,0x7fefffffffffffff);
  FUN_14828b7a0(local_1328);
  FUN_148287250(&local_1330,0x3ff0000000000000);
  local_1368 = local_1380 + 1;
  local_1370 = 0xffffffff;
  uVar9 = 0;
  piVar10 = &DAT_14ae71eac;
  lVar8 = 0;
  do {
    FUN_14827f8fc(local_1380,local_1308,local_1380[(longlong)piVar10[-3] + 1],local_1378);
    lVar11 = (longlong)auStack_11c8 + lVar8;
    FUN_148281bf6(lVar11,local_1308);
    FUN_14827f798(local_1308);
    cVar3 = FUN_148281c76((longlong)&local_10d8 + lVar8,&local_1358);
    if (cVar3 != '\0') {
      uVar4 = local_1380[(longlong)piVar10[-1] + 1];
      uVar1 = local_1380[(longlong)*piVar10 + 1];
      cVar3 = FUN_14827f4ea(local_1380,local_1380[(longlong)piVar10[-2] + 1],lVar11);
      if (((cVar3 != '\0') && (cVar3 = FUN_14827f4ea(local_1380,uVar4,lVar11), cVar3 != '\0')) &&
         (cVar3 = FUN_14827f4ea(local_1380,uVar1,lVar11), cVar3 != '\0')) {
        local_1358 = *(undefined8 *)((longlong)&local_10d8 + lVar8);
        FUN_14828b7ba(local_1350,auStack_10d0 + lVar8);
        local_1330 = *(undefined8 *)((longlong)&local_10b0 + lVar8);
        FUN_14828b7ba(local_1328,auStack_10a8 + lVar8);
        local_1370 = uVar9;
      }
    }
    puVar5 = local_1380;
    lVar8 = lVar8 + 0x140;
    uVar9 = (ulonglong)((int)uVar9 + 1);
    piVar10 = piVar10 + 4;
  } while (lVar8 != 0x500);
  uVar7 = 4;
  lVar8 = 0x620;
  lVar13 = 0x5f0;
  lVar11 = 0x5f8;
  lVar12 = 0x500;
  piVar10 = &DAT_14ae71eec;
  do {
    local_1398 = local_1378;
    local_1374 = uVar7;
    FUN_148281d26(puVar5,local_1308,puVar5[(longlong)piVar10[-3] + 1],
                  puVar5[(longlong)piVar10[-2] + 1]);
    lVar6 = (longlong)auStack_11c8 + lVar12;
    FUN_148281bf6(lVar6,local_1308);
    FUN_14827f798(local_1308);
    cVar3 = FUN_148281c76((longlong)auStack_11c8 + lVar13,&local_1358);
    uVar7 = local_1374;
    if (cVar3 != '\0') {
      uVar4 = puVar5[(longlong)*piVar10 + 1];
      cVar3 = FUN_14827f4ea(puVar5,puVar5[(longlong)piVar10[-1] + 1],lVar6);
      uVar7 = local_1374;
      if ((cVar3 != '\0') &&
         (cVar3 = FUN_14827f4ea(local_1380,uVar4,lVar6), uVar7 = local_1374, cVar3 != '\0')) {
        local_1358 = *(undefined8 *)((longlong)auStack_11c8 + lVar13);
        FUN_14828b7ba(local_1350,(longlong)auStack_11c8 + lVar11);
        local_1330 = *(undefined8 *)((longlong)auStack_11a0 + lVar13);
        FUN_14828b7ba(local_1328,(longlong)auStack_11c8 + lVar8);
        local_1370 = (ulonglong)uVar7;
      }
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x140;
    lVar13 = lVar13 + 0x140;
    lVar11 = lVar11 + 0x140;
    lVar12 = lVar12 + 0x140;
    piVar10 = piVar10 + 4;
  } while (lVar8 != 0xda0);
  uVar9 = 10;
  lVar8 = 0xda0;
  lVar12 = 0xd70;
  lVar13 = 0xd78;
  lVar11 = 0xc80;
  piVar10 = &DAT_14ae71f4c;
  do {
    local_1398 = local_1380[(longlong)piVar10[-1] + 1];
    local_1390 = local_1378;
    FUN_148283e1c(local_1380,local_1308,local_1380[(longlong)piVar10[-3] + 1],
                  local_1380[(longlong)piVar10[-2] + 1]);
    FUN_148281bf6((longlong)auStack_11c8 + lVar11,local_1308);
    FUN_14827f798(local_1308);
    cVar3 = FUN_148281c76((longlong)auStack_11c8 + lVar12,&local_1358);
    if ((cVar3 != '\0') &&
       (cVar3 = FUN_14827f4ea(local_1380,local_1380[(longlong)*piVar10 + 1],
                              (longlong)auStack_11c8 + lVar11), cVar3 != '\0')) {
      local_1358 = *(undefined8 *)((longlong)auStack_11c8 + lVar12);
      FUN_14828b7ba(local_1350,(longlong)auStack_11c8 + lVar13);
      local_1330 = *(undefined8 *)((longlong)auStack_11a0 + lVar12);
      FUN_14828b7ba(local_1328,(longlong)auStack_11c8 + lVar8);
      local_1370 = uVar9;
    }
    lVar6 = local_1360;
    uVar9 = (ulonglong)((int)uVar9 + 1);
    lVar8 = lVar8 + 0x140;
    lVar12 = lVar12 + 0x140;
    lVar13 = lVar13 + 0x140;
    lVar11 = lVar11 + 0x140;
    piVar10 = piVar10 + 4;
  } while (lVar11 != 0x1180);
  iVar2 = (int)local_1370;
  switch(iVar2) {
  case 0:
    *local_1380 = 2;
    break;
  case 1:
    *local_1380 = 2;
  case 0xd:
switchD_1482861ed_caseD_d:
    puVar5 = local_1368;
    goto LAB_1482862c9;
  case 2:
    *local_1380 = 2;
    uVar4 = local_1380[3];
    goto LAB_1482862c2;
  case 3:
    *local_1380 = 2;
    goto LAB_1482862bf;
  case 4:
    *local_1380 = 3;
    goto LAB_1482863c5;
  case 5:
    *local_1380 = 3;
    break;
  case 6:
    *local_1380 = 3;
    local_1380[2] = local_1380[4];
    goto LAB_1482863c5;
  case 7:
    *local_1380 = 3;
    goto switchD_1482861ed_caseD_d;
  case 8:
    *local_1380 = 3;
    local_1380[1] = local_1380[4];
    goto LAB_1482863c5;
  case 9:
    *local_1380 = 3;
LAB_1482862bf:
    uVar4 = local_1380[4];
LAB_1482862c2:
    local_1380[1] = uVar4;
    break;
  case 10:
    puVar5 = local_1380 + 4;
    goto LAB_1482862c9;
  case 0xb:
LAB_1482863c5:
    puVar5 = local_1380 + 3;
    goto LAB_1482862c9;
  case 0xc:
    break;
  case -1:
    FUN_14827fba2(local_1308);
    lVar6 = local_1360;
    lVar8 = 0;
    do {
      FUN_14828380c(lVar6 + lVar8,local_1308 + lVar8);
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != 0xf0);
    FUN_14828380c(lVar6 + 0xf0,auStack_1218);
    *(undefined1 *)(lVar6 + 0x140) = 0;
    FUN_14827f798(local_1308);
    goto LAB_148286321;
  default:
    goto switchD_1482861ed_default;
  }
  puVar5 = local_1380 + 2;
LAB_1482862c9:
  *puVar5 = local_1378;
switchD_1482861ed_default:
  lVar8 = 0;
  do {
    FUN_1482801d6(lVar6 + lVar8,(longlong)auStack_11c8 + lVar8 + (longlong)iVar2 * 0x140);
    lVar8 = lVar8 + 0x50;
  } while (lVar8 != 0xf0);
  FUN_1482801d6(lVar6 + 0xf0,&local_10d8 + (longlong)iVar2 * 0x28);
  *(undefined1 *)(lVar6 + 0x140) = 1;
LAB_148286321:
  FUN_148276cee(local_1320);
  FUN_148276cee(local_1348);
  lVar8 = 0x1040;
  do {
    FUN_14827f798((longlong)auStack_11c8 + lVar8);
    lVar8 = lVar8 + -0x140;
  } while (lVar8 != -0x140);
  if ((local_48 ^ (ulonglong)local_13b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1482863ce FUN_1482863ce body=393 status=ok
// SIG undefined FUN_1482863ce(void)

void FUN_1482863ce(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = (longlong)param_2 - (longlong)param_1;
  if (0x80 < (longlong)uVar4) {
    if (0 < (longlong)param_3) {
      puVar3 = param_2;
      do {
        FUN_14828665b(&local_58,param_1,puVar3,param_4);
        puVar2 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        param_2 = (undefined4 *)CONCAT44(uStack_54,local_58);
        if ((longlong)param_2 - (longlong)param_1 < (longlong)puVar3 - (longlong)local_50) {
          FUN_1482863ce(param_1,param_2,param_3,param_4);
          param_2 = puVar3;
          param_1 = puVar2;
        }
        else {
          FUN_1482863ce(local_50,puVar3,param_3,param_4);
        }
        uVar4 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar4 < 0x81) goto LAB_14828654b;
        puVar3 = param_2;
      } while (param_3 != 0);
    }
    uVar6 = uVar4 >> 3;
    do {
      uVar5 = uVar6 - 1;
      local_58 = param_1[uVar5];
      local_68 = param_4;
      FUN_14828697b(param_1,uVar5,uVar4 >> 2,&local_58);
      bVar1 = 1 < uVar6;
      uVar6 = uVar5;
    } while (bVar1);
    lVar7 = (longlong)param_2 - (longlong)param_1;
    if (4 < lVar7) {
      do {
        param_2 = param_2 + -1;
        local_58 = *param_2;
        *param_2 = *param_1;
        lVar7 = lVar7 + -4;
        local_68 = param_4;
        FUN_14828697b(param_1,0,lVar7 >> 2,&local_58);
      } while (4 < lVar7);
    }
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14828654b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 14828665b FUN_14828665b body=800 status=ok
// SIG undefined FUN_14828665b(void)

undefined8 * FUN_14828665b(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  bool bVar15;
  
  lVar13 = (longlong)param_3 - (longlong)param_2 >> 3;
  puVar8 = param_2 + lVar13;
  FUN_148286a8c(param_2,puVar8);
  puVar7 = puVar8;
  if (0 < lVar13) {
    uVar10 = (ulonglong)*puVar8;
    do {
      puVar11 = puVar7 + -1;
      iVar9 = (int)uVar10;
      uVar10 = (ulonglong)(int)puVar7[-1];
      lVar13 = param_4 + uVar10 * 0x18;
      lVar1 = param_4 + (longlong)iVar9 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_148286717;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_148286717;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar7 = puVar11;
    } while (param_2 < puVar11);
  }
LAB_148286717:
  puVar8 = puVar8 + 1;
  puVar11 = puVar7;
  puVar14 = puVar8;
  if (puVar8 < param_3) {
    lVar13 = param_4 + (longlong)(int)*puVar7 * 0x18;
    do {
      lVar1 = param_4 + (longlong)(int)*puVar8 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        puVar14 = puVar8;
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_148286797;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_148286797;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar8 = puVar8 + 1;
      puVar14 = puVar8;
    } while (puVar8 < param_3);
  }
LAB_148286797:
  do {
    puVar4 = puVar7;
    if (puVar8 < param_3) {
      lVar13 = param_4 + (longlong)(int)*puVar7 * 0x18;
      lVar1 = param_4 + (longlong)(int)*puVar8 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828681a;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto joined_r0x000148286826;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      if (puVar14 != puVar8) {
        uVar6 = *puVar14;
        *puVar14 = *puVar8;
        *puVar8 = uVar6;
      }
      puVar14 = puVar14 + 1;
LAB_14828681a:
      puVar8 = puVar8 + 1;
      goto LAB_148286797;
    }
joined_r0x000148286826:
    puVar5 = puVar11;
    if (param_2 < puVar5) {
      puVar11 = puVar5 + -1;
      lVar13 = param_4 + (longlong)(int)puVar5[-1] * 0x18;
      lVar1 = param_4 + (longlong)(int)*puVar4 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto joined_r0x000148286826;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_1482868c5;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar7 = puVar4 + -1;
      bVar15 = puVar4 != puVar5;
      puVar4 = puVar7;
      if (bVar15) {
        uVar6 = *puVar7;
        *puVar7 = puVar5[-1];
        *puVar11 = uVar6;
      }
      goto joined_r0x000148286826;
    }
LAB_1482868c5:
    if ((puVar8 == param_3) && (puVar5 == param_2)) {
      *param_1 = puVar4;
      param_1[1] = puVar14;
      return param_1;
    }
    if (puVar5 == param_2) {
      uVar6 = *puVar4;
      if (puVar14 != puVar8) {
        *puVar4 = *puVar14;
        *puVar14 = uVar6;
        uVar6 = *puVar4;
      }
      *puVar4 = *puVar8;
      *puVar8 = uVar6;
      puVar7 = puVar4 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar5;
      puVar14 = puVar14 + 1;
    }
    else {
      puVar11 = puVar5 + -1;
      if (puVar8 == param_3) {
        puVar7 = puVar4 + -1;
        uVar6 = puVar4[-1];
        if (puVar5 != puVar4) {
          uVar6 = *puVar11;
          *puVar11 = puVar4[-1];
          *puVar7 = uVar6;
        }
        *puVar7 = puVar14[-1];
        puVar14[-1] = uVar6;
        puVar14 = puVar14 + -1;
      }
      else {
        uVar6 = *puVar8;
        *puVar8 = *puVar11;
        *puVar11 = uVar6;
        puVar8 = puVar8 + 1;
        puVar7 = puVar4;
      }
    }
  } while( true );
}



// FUNCTION 14828697b FUN_14828697b body=273 status=ok
// SIG undefined FUN_14828697b(void)

void FUN_14828697b(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar5) {
    lVar6 = lVar3 * 2 + 2;
    iVar4 = *(int *)(param_1 + 8 + lVar3 * 8);
    lVar7 = 0;
    do {
      dVar1 = *(double *)(param_5 + (longlong)iVar4 * 0x18 + lVar7);
      dVar2 = *(double *)(param_5 + (longlong)*(int *)(param_1 + 4 + lVar3 * 8) * 0x18 + lVar7);
      if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
        if (dVar1 < dVar2) {
          lVar6 = lVar3 * 2 + 1;
        }
        iVar4 = *(int *)(param_1 + lVar6 * 4);
        break;
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    *(int *)(param_1 + lVar3 * 4) = iVar4;
    lVar3 = lVar6;
  }
  if (((param_3 & 1) == 0) && (lVar3 == lVar5)) {
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar6 = lVar3 + -1 >> 1;
    iVar4 = *(int *)(param_1 + lVar6 * 4);
    lVar5 = 0;
    while( true ) {
      dVar1 = *(double *)(param_5 + (longlong)iVar4 * 0x18 + lVar5);
      dVar2 = *(double *)(param_5 + (longlong)*param_4 * 0x18 + lVar5);
      if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
      lVar5 = lVar5 + 8;
      if (lVar5 == 0x18) goto LAB_148286a79;
    }
    if (dVar2 <= dVar1) break;
    *(int *)(param_1 + lVar3 * 4) = iVar4;
    lVar3 = lVar6;
  }
LAB_148286a79:
  *(int *)(param_1 + lVar3 * 4) = *param_4;
  return;
}



// FUNCTION 148286a8c FUN_148286a8c body=168 status=ok
// SIG undefined FUN_148286a8c(void)

void FUN_148286a8c(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = param_3 - param_1 >> 2;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 & 0xfffffffffffffff8;
    uVar3 = uVar3 >> 3;
    lVar2 = param_1 + uVar3 * 4;
    FUN_148286b34(param_1,lVar2,param_1 + uVar1,param_4);
    FUN_148286b34(param_2 + uVar3 * -4,param_2,param_2 + uVar3 * 4,param_4);
    lVar4 = param_3 + uVar3 * -4;
    FUN_148286b34(param_3 - uVar1,lVar4,param_3,param_4);
    param_1 = lVar2;
    param_3 = lVar4;
  }
  FUN_148286b34(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148286b34 FUN_148286b34 body=201 status=ok
// SIG undefined FUN_148286b34(void)

void FUN_148286b34(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *param_2;
  lVar6 = (longlong)iVar4;
  lVar5 = 0;
  while( true ) {
    dVar1 = *(double *)(param_4 + lVar6 * 0x18 + lVar5);
    dVar2 = *(double *)(param_4 + (longlong)*param_1 * 0x18 + lVar5);
    if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
    lVar5 = lVar5 + 8;
    if (lVar5 == 0x18) {
LAB_148286b6e:
      iVar3 = *param_3;
      lVar5 = param_4 + (longlong)iVar3 * 0x18;
      lVar7 = 0;
      while( true ) {
        dVar1 = *(double *)(lVar5 + lVar7);
        dVar2 = *(double *)(param_4 + lVar6 * 0x18 + lVar7);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
        lVar7 = lVar7 + 8;
        if (lVar7 == 0x18) {
          return;
        }
      }
      if (dVar2 <= dVar1) {
        return;
      }
      *param_3 = iVar4;
      *param_2 = iVar3;
      lVar6 = 0;
      while( true ) {
        dVar1 = *(double *)(lVar5 + lVar6);
        dVar2 = *(double *)(param_4 + (longlong)*param_1 * 0x18 + lVar6);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
        lVar6 = lVar6 + 8;
        if (lVar6 == 0x18) {
          return;
        }
      }
      if (dVar2 <= dVar1) {
        return;
      }
      *param_2 = *param_1;
      *param_1 = iVar3;
      return;
    }
  }
  if (dVar1 < dVar2) {
    *param_2 = *param_1;
    *param_1 = iVar4;
    iVar4 = *param_2;
    lVar6 = (longlong)iVar4;
  }
  goto LAB_148286b6e;
}



// FUNCTION 148286bfe FUN_148286bfe body=151 status=ok
// SIG undefined FUN_148286bfe(void)

ulonglong FUN_148286bfe(undefined8 *param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  do {
    if (param_2 == 1) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar5 = param_1[1];
      uVar3 = 0;
      uVar4 = 0;
      do {
        cVar1 = (char)uVar5;
        do {
          uVar2 = FUN_148286c96(*param_1);
        } while ((ulonglong)param_1[2] < (ulonglong)uVar2);
        uVar5 = param_1[1];
        uVar4 = (uVar4 << (cVar1 - 1U & 0x3f)) * 2 | (ulonglong)uVar2;
        uVar3 = (uVar3 << ((char)uVar5 - 1U & 0x3f)) * 2 | param_1[2];
      } while (uVar3 < param_2 - 1);
    }
  } while ((uVar3 / param_2 <= uVar4 / param_2) && (uVar3 % param_2 != param_2 - 1));
  return uVar4 % param_2;
}



// FUNCTION 148286c96 FUN_148286c96 body=249 status=ok
// SIG undefined FUN_148286c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_148286c96(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  auVar8 = _DAT_14ae71830;
  auVar7 = _DAT_1499319e0;
  uVar10 = *param_1;
  if (uVar10 == 0x270) {
    uVar10 = param_1[1];
    auVar11._4_4_ = uVar10;
    auVar11._0_4_ = uVar10;
    auVar11._8_4_ = uVar10;
    auVar11._12_4_ = uVar10;
    lVar9 = -0x270;
    do {
      auVar3 = *(undefined1 (*) [16])(param_1 + lVar9 + 0x272);
      auVar4._16_16_ = auVar3;
      auVar4._0_16_ = auVar11;
      auVar11 = auVar3 & auVar8 | auVar4._12_16_ & auVar7;
      puVar1 = param_1 + lVar9 + 0x3fe;
      uVar10 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = param_1 + lVar9 + 0x4e1;
      *puVar2 = *puVar1 ^ (auVar3._0_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar11._0_4_ >> 1;
      puVar2[1] = uVar10 ^ (auVar3._4_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar11._4_4_ >> 1;
      puVar2[2] = uVar5 ^ (auVar3._8_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar11._8_4_ >> 1;
      puVar2[3] = uVar6 ^ (auVar3._12_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar11._12_4_ >> 1;
      lVar9 = lVar9 + 4;
      auVar11 = auVar3;
    } while (lVar9 != 0);
    uVar10 = 0x270;
  }
  else if (0x4df < uVar10) {
    FUN_148286d90(param_1);
    uVar10 = *param_1;
  }
  *param_1 = uVar10 + 1;
  uVar10 = param_1[(ulonglong)uVar10 + 1] >> 0xb & param_1[0x4e1] ^ param_1[(ulonglong)uVar10 + 1];
  uVar10 = (uVar10 & 0x13a58ad) << 7 ^ uVar10;
  uVar10 = (uVar10 & 0x1df8c) << 0xf ^ uVar10;
  return uVar10 >> 0x12 ^ uVar10;
}



// FUNCTION 148286d90 FUN_148286d90 body=296 status=ok
// SIG undefined FUN_148286d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148286d90(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined1 auVar5 [32];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  uint uVar10;
  undefined1 auVar12 [16];
  uint uVar11;
  
  uVar11 = param_1[0x271];
  lVar9 = 0x3fe;
  do {
    uVar10 = uVar11 & 0x80000000;
    uVar11 = param_1[lVar9 + -0x18c];
    param_1[lVar9 + -0x3fd] =
         -(uVar11 & 1) & 0x9908b0df ^ param_1[lVar9] ^ (uVar11 & 0x7ffffffe | uVar10) >> 1;
    auVar8 = _DAT_14ae71830;
    auVar7 = _DAT_1499319e0;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x4e1);
  uVar4 = param_1[0x354];
  auVar12._4_4_ = uVar4;
  auVar12._0_4_ = uVar4;
  auVar12._8_4_ = uVar4;
  auVar12._12_4_ = uVar4;
  lVar9 = 0;
  do {
    auVar3 = *(undefined1 (*) [16])(param_1 + lVar9 + 0x355);
    auVar5._16_16_ = auVar3;
    auVar5._0_16_ = auVar12;
    auVar12 = auVar3 & auVar8 | auVar5._12_16_ & auVar7;
    puVar1 = param_1 + lVar9 + 1;
    uVar11 = puVar1[1];
    uVar10 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = param_1 + lVar9 + 0xe4;
    *puVar2 = *puVar1 ^ (auVar3._0_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar12._0_4_ >> 1;
    puVar2[1] = uVar11 ^ (auVar3._4_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar12._4_4_ >> 1;
    puVar2[2] = uVar10 ^ (auVar3._8_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar12._8_4_ >> 1;
    puVar2[3] = uVar6 ^ (auVar3._12_4_ << 0x1f) >> 0x1f & 0x9908b0dfU ^ auVar12._12_4_ >> 1;
    lVar9 = lVar9 + 4;
    auVar12 = auVar3;
  } while (lVar9 != 0x18c);
  param_1[0x270] =
       -(param_1[1] & 1) & 0x9908b0df ^ param_1[0x18d] ^
       (param_1[1] & 0x7ffffffe | param_1[0x4e0] & 0x80000000) >> 1;
  *param_1 = 0;
  return;
}



// FUNCTION 148286eb8 FUN_148286eb8 body=225 status=ok
// SIG undefined FUN_148286eb8(void)

void FUN_148286eb8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  lVar4 = lVar1 - lVar5 >> 4;
  lVar2 = param_2 + lVar4 * 0x1111111111111111;
  if (param_2 < (ulonglong)(lVar4 * -0x1111111111111111)) {
    lVar2 = lVar5 + param_2 * 0xf0;
    if (lVar2 != lVar1) {
      lVar4 = param_2 * 0xf0 + lVar5 + 0xb0;
      lVar5 = lVar2;
      do {
        lVar5 = lVar5 + 0xf0;
        lVar6 = -0xf0;
        lVar3 = lVar4;
        do {
          FUN_148276cee(lVar3 + 0x28);
          FUN_148276cee(lVar3);
          lVar3 = lVar3 + -0x50;
          lVar6 = lVar6 + 0x50;
        } while (lVar6 != 0);
        lVar4 = lVar4 + 0xf0;
      } while (lVar5 != lVar1);
    }
    param_1[1] = lVar2;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)((param_1[2] - lVar5 >> 4) * -0x1111111111111111) < param_2) {
      FUN_148286f9a(param_1);
      return;
    }
    lVar5 = FUN_14828709e(lVar1,lVar2);
    param_1[1] = lVar5;
  }
  return;
}



// FUNCTION 148286f9a FUN_148286f9a body=260 status=ok
// SIG undefined FUN_148286f9a(void)

void FUN_148286f9a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 < 0x111111111111112) {
    lVar9 = param_1[1] - *param_1;
    uVar4 = (param_1[2] - *param_1 >> 4) * -0x1111111111111111;
    uVar5 = 0x111111111111111 - (uVar4 >> 1);
    uVar6 = (uVar4 >> 1) + uVar4;
    if (uVar6 <= param_2) {
      uVar6 = param_2;
    }
    if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
      uVar6 = 0x111111111111111;
    }
    lVar3 = FUN_148287200(uVar6);
    FUN_14828709e(lVar9 + lVar3,(lVar9 >> 4) * 0x1111111111111111 + param_2);
    lVar1 = param_1[1];
    lVar7 = lVar3;
    for (lVar9 = *param_1; lVar9 != lVar1; lVar9 = lVar9 + 0xf0) {
      lVar8 = 0;
      do {
        FUN_1482801d6(lVar8 + lVar7,lVar9 + lVar8);
        lVar8 = lVar8 + 0x50;
      } while (lVar8 != 0xf0);
      lVar7 = lVar7 + 0xf0;
    }
    FUN_148287120(param_1,lVar3,param_2,uVar6);
    return;
  }
  FUN_14828710e();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14828709e FUN_14828709e body=111 status=ok
// SIG undefined FUN_14828709e(void)

longlong FUN_14828709e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = param_1 + 0x28;
    do {
      lVar2 = 0xf0;
      lVar1 = lVar3;
      do {
        FUN_14828b7a0(lVar1 + -0x20);
        *(undefined8 *)(lVar1 + -0x28) = 0;
        FUN_1482800a4(lVar1,1);
        lVar1 = lVar1 + 0x50;
        lVar2 = lVar2 + -0x50;
      } while (lVar2 != 0);
      param_1 = param_1 + 0xf0;
      lVar3 = lVar3 + 0xf0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}



// FUNCTION 14828710e FUN_14828710e body=16 status=ok
// SIG undefined FUN_14828710e(void)

void FUN_14828710e(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 148287120 FUN_148287120 body=223 status=ok
// SIG undefined FUN_148287120(void)

void FUN_148287120(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = param_1[1];
    if (lVar4 != lVar5) {
      lVar2 = lVar4 + 0xb0;
      do {
        lVar4 = lVar4 + 0xf0;
        lVar1 = -0xf0;
        lVar3 = lVar2;
        do {
          FUN_148276cee(lVar3 + 0x28);
          FUN_148276cee(lVar3);
          lVar3 = lVar3 + -0x50;
          lVar1 = lVar1 + 0x50;
        } while (lVar1 != 0);
        lVar2 = lVar2 + 0xf0;
      } while (lVar4 != lVar5);
      lVar4 = *param_1;
    }
    lVar5 = lVar4;
    if ((0xfff < (ulonglong)(param_1[2] - lVar4)) &&
       (lVar5 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar5))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar5);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0xf0 + param_2;
  param_1[2] = param_4 * 0xf0 + param_2;
  return;
}



// FUNCTION 148287200 FUN_148287200 body=78 status=ok
// SIG undefined FUN_148287200(void)

undefined8 FUN_148287200(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x111111111111111 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x11 < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0xf0);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0xf0,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148287250 FUN_148287250 body=879 status=ok
// SIG undefined FUN_148287250(void)

void FUN_148287250(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 in_XMM1 [16];
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  ulonglong local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = in_XMM1._0_8_;
  uVar6 = uVar8 & 0xfffffffffffff;
  uVar5 = uVar8 >> 0x34 & 0x7ff;
  uVar7 = in_XMM1._4_4_ >> 0x1f;
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      goto LAB_1482872ac;
    }
    iVar1 = FUN_14828b758(uVar6);
    *param_1 = uVar7 | 1;
    param_1[1] = iVar1 - 0x432;
    FUN_14828b8a8(local_60,uVar6 >> ((byte)iVar1 & 0x3f));
  }
  else {
    iVar1 = (int)uVar5;
    if (iVar1 == 0x7ff) {
      if (uVar6 != 0) {
        bVar9 = (uVar8 >> 0x33 & 1) == 0;
        pcVar4 = "quiet";
        if (bVar9) {
          pcVar4 = "signaling";
        }
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        FUN_140cd1a74(local_c8,pcVar4,bVar9 * '\x04' + '\x05');
        puVar3 = (undefined4 *)FUN_1482875c0(local_c8,0,"Input is a ",0xb);
        local_a8 = *puVar3;
        uStack_a4 = puVar3[1];
        uStack_a0 = puVar3[2];
        uStack_9c = puVar3[3];
        local_98 = *(undefined8 *)(puVar3 + 4);
        uStack_90 = *(undefined8 *)(puVar3 + 6);
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0xf;
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)FUN_144a6594a(&local_a8," NaN with payload [redacted]",0x1c);
        local_88 = *puVar3;
        uStack_84 = puVar3[1];
        uStack_80 = puVar3[2];
        uStack_7c = puVar3[3];
        local_78 = *(undefined8 *)(puVar3 + 4);
        uStack_70 = *(undefined8 *)(puVar3 + 6);
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0xf;
        *(undefined1 *)puVar3 = 0;
        local_d8 = &local_88;
        FUN_14828b062(local_60,
                      ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteBSNumber.h"
                      ,"gte::BSNumber<class gte::UIntegerAP32>::ConvertFrom",0x2b0);
        FUN_14828b4e0(local_60);
        FUN_1401d9a90(local_60);
        FUN_1401d9a90(&local_88);
        FUN_1401d9a90(&local_a8);
        FUN_1401d9a90(local_c8);
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_1482872ac;
      }
      local_c8[1] = 0;
      local_c8[2] = 1;
      local_c8[3] = 0xf;
      local_c8[0] = (ulonglong)(byte)((in_XMM1[7] >> 7) * -2 + 0x2b);
      puVar3 = (undefined4 *)FUN_1482875c0(local_c8,0,"Input is ",9);
      local_a8 = *puVar3;
      uStack_a4 = puVar3[1];
      uStack_a0 = puVar3[2];
      uStack_9c = puVar3[3];
      local_98 = *(undefined8 *)(puVar3 + 4);
      uStack_90 = *(undefined8 *)(puVar3 + 6);
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0xf;
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)FUN_144a6594a(&local_a8,"infinity.",9);
      local_88 = *puVar3;
      uStack_84 = puVar3[1];
      uStack_80 = puVar3[2];
      uStack_7c = puVar3[3];
      local_78 = *(undefined8 *)(puVar3 + 4);
      uStack_70 = *(undefined8 *)(puVar3 + 6);
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0xf;
      *(undefined1 *)puVar3 = 0;
      local_d8 = &local_88;
      FUN_14828b062(local_60,
                    ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private\\ThirdParty/GTEngine/Mathematics/GteBSNumber.h"
                    ,"gte::BSNumber<class gte::UIntegerAP32>::ConvertFrom",0x2a2);
      FUN_14828b5be(local_60);
      FUN_1401d9a90(local_60);
      FUN_1401d9a90(&local_88);
      FUN_1401d9a90(&local_a8);
      FUN_1401d9a90(local_c8);
      *param_1 = uVar7 | 1;
      param_1[1] = 0x400;
LAB_148287409:
      uVar5 = 1;
    }
    else {
      if (uVar6 == 0) {
        *param_1 = uVar7 | 1;
        param_1[1] = iVar1 - 0x3ff;
        goto LAB_148287409;
      }
      iVar2 = FUN_14828b758(uVar6);
      *param_1 = uVar7 | 1;
      param_1[1] = (iVar1 + iVar2) - 0x433;
      uVar5 = uVar6 + 0x10000000000000 >> ((byte)iVar2 & 0x3f);
    }
    FUN_14828b8a8(local_60,uVar5);
  }
  FUN_14828b9da(param_1 + 2,local_60);
  FUN_148276cee(local_58);
LAB_1482872ac:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482875c0 FUN_1482875c0 body=220 status=ok
// SIG undefined FUN_1482875c0(void)

undefined8 * FUN_1482875c0(undefined8 *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *_Src;
  ulonglong _Size;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    if (param_1[3] - uVar1 < param_4) {
      param_1 = (undefined8 *)FUN_14828769e(param_1,param_4,uVar1 - param_2,param_2,param_3,param_4)
      ;
    }
    else {
      param_1[2] = uVar1 + param_4;
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      _Src = (void *)(param_2 + (longlong)puVar2);
      _Size = param_4;
      if ((param_3 <= (void *)(uVar1 + (longlong)puVar2) &&
           _Src < (void *)((longlong)param_3 + param_4)) &&
         (_Size = (longlong)_Src - (longlong)param_3, _Src < param_3 || _Size == 0)) {
        _Size = 0;
      }
      memmove((void *)((longlong)_Src + param_4),_Src,(uVar1 - param_2) + 1);
      memcpy(_Src,param_3,_Size);
      memcpy((void *)((longlong)_Src + _Size),
             (void *)((longlong)((longlong)param_3 + param_4) + _Size),param_4 - _Size);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14709e5c0();
}



// FUNCTION 14828769e FUN_14828769e body=402 status=ok
// SIG undefined FUN_14828769e(void)

undefined8 *
FUN_14828769e(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,void *param_5,
             size_t param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  
  uVar4 = 0x7fffffffffffffff;
  lVar1 = param_1[2];
  if (0x7fffffffffffffffU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  param_2 = param_2 + lVar1;
  uVar2 = param_1[3];
  uVar3 = 0x8000000000000000;
  if ((-1 < (longlong)param_2) &&
     (uVar3 = 0x8000000000000000, uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
    uVar4 = (uVar2 >> 1) + uVar2;
    if (uVar4 < (param_2 | 0xf)) {
      uVar4 = param_2 | 0xf;
    }
    uVar3 = uVar4 + 1;
    if (uVar3 < 0x1000) {
      if (uVar3 == 0) {
        uVar4 = 0xffffffffffffffff;
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar3,0x10);
      }
      goto LAB_148287722;
    }
  }
  _Dst = (void *)FUN_140c1ca1d(uVar3);
LAB_148287722:
  param_1[2] = param_2;
  param_1[3] = uVar4;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,param_4);
    memcpy((void *)((longlong)_Dst + param_4),param_5,param_6);
    memcpy((void *)((longlong)((longlong)_Dst + param_4) + param_6),
           (void *)(param_4 + (longlong)param_1),(lVar1 - param_4) + 1);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,param_4);
    memcpy((void *)((longlong)_Dst + param_4),param_5,param_6);
    memcpy((void *)((longlong)((longlong)_Dst + param_4) + param_6),
           (void *)(param_4 + (longlong)_Src),(lVar1 - param_4) + 1);
    pvVar5 = _Src;
    if ((uVar2 - 0xfff < 0xfffffffffffff000) &&
       (pvVar5 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar5);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 148287832 FUN_148287832 body=121 status=ok
// SIG undefined FUN_148287832(void)

longlong FUN_148287832(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_2 + lVar3);
    lVar2 = param_1 + 8 + lVar3;
    *(undefined4 *)(lVar2 + -8) = *puVar1;
    *(undefined4 *)(lVar2 + -4) = puVar1[1];
    FUN_14828b7ba(lVar2,puVar1 + 2);
    *(undefined4 *)(lVar2 + 0x20) = puVar1[10];
    *(undefined4 *)(lVar2 + 0x24) = puVar1[0xb];
    FUN_14828b7ba(param_1 + lVar3 + 0x30,param_2 + lVar3 + 0x30);
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0xf0);
  return param_1;
}



// FUNCTION 1482878ac FUN_1482878ac body=830 status=ok
// SIG undefined FUN_1482878ac(void)

undefined8 FUN_1482878ac(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_188 [44];
  int local_15c;
  ulonglong local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [24];
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined1 local_118 [24];
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  int local_b0;
  int local_ac;
  int local_a8 [2];
  undefined1 local_a0 [24];
  undefined8 local_88;
  int local_80 [2];
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar6 = 0;
  uVar7 = 0;
  if (*param_1 != 0) {
    FUN_14828b7a0(local_80);
    local_88._0_4_ = *param_1;
    local_88._4_4_ = param_1[1];
    FUN_14828b7ba(local_80,param_1 + 2);
    FUN_14828b7a0(local_a8);
    local_b0 = param_1[10];
    local_ac = param_1[0xb];
    FUN_14828b7ba(local_a8,param_1 + 0xc);
    iVar4 = local_80[0];
    local_15c = local_b0 * (int)local_88;
    local_b0 = 1;
    uVar7 = (local_88._4_4_ + local_80[0]) - (local_ac + local_a8[0]);
    local_88 = CONCAT44(1 - local_80[0],1);
    local_ac = 1 - local_a8[0];
    cVar1 = FUN_14828104e(local_80,local_a8);
    if (cVar1 != '\0') {
      local_88 = CONCAT44(2 - iVar4,(int)local_88);
      uVar7 = uVar7 - 1;
    }
    local_158 = (ulonglong)uVar7;
    FUN_1482800a4(local_d8,1);
    FUN_1482800a4(local_100,2);
    uVar3 = 0x10000000000000;
    iVar4 = -0x35;
    uVar2 = 0;
    do {
      if ((local_80[0] + local_88._4_4_ < local_a8[0] + local_ac) ||
         ((local_80[0] + local_88._4_4_ <= local_a8[0] + local_ac &&
          (cVar1 = FUN_14828104e(local_80,local_a8), cVar1 != '\0')))) {
        FUN_1482804aa(local_100,&local_128,&local_88);
        local_88 = local_128;
        FUN_14828b9da(local_80,local_120);
        local_128 = 0;
        FUN_148276cee(local_118);
      }
      else {
        FUN_14828151c(&local_88,local_150,&local_b0);
        FUN_1482804aa(local_100,&local_128,local_150);
        local_88 = local_128;
        FUN_14828b9da(local_80,local_120);
        local_128 = 0;
        FUN_148276cee(local_118);
        FUN_148276cee(local_140);
        uVar2 = uVar2 | uVar3;
      }
      uVar3 = uVar3 >> 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
    FUN_14828151c(&local_88,&local_128,&local_b0);
    local_88 = local_128;
    FUN_14828b9da(local_80,local_120);
    local_128 = 0;
    FUN_148276cee(local_118);
    if ((0 < (int)local_88) || (((int)local_88 == 0 && ((uVar2 & 1) != 0)))) {
      uVar2 = uVar2 + 1;
    }
    uVar6 = 0;
    uVar7 = 0;
    if (uVar2 != 0) {
      iVar4 = FUN_14828b758(uVar2);
      FUN_148287bec(&local_128,uVar2 >> ((byte)iVar4 & 0x3f));
      local_128 = CONCAT44((int)local_158 + iVar4 + -0x34,(undefined4)local_128);
      uVar5 = FUN_148287c7e(&local_128);
      uVar7 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar6 = (undefined4)uVar5;
      if (local_15c < 0) {
        uVar7 = uVar7 ^ 0x80000000;
      }
      FUN_148276cee(local_118);
    }
    FUN_148276cee(local_f0);
    FUN_148276cee(local_c8);
    FUN_148276cee(local_a0);
    FUN_148276cee(local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar7,uVar6);
}



// FUNCTION 148287bec FUN_148287bec body=145 status=ok
// SIG undefined FUN_148287bec(void)

undefined8 * FUN_148287bec(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14828b7a0(param_1 + 1);
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *(undefined4 *)param_1 = 1;
    uVar1 = FUN_14828b758(param_2);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    FUN_14828b8a8(local_48,param_2);
    FUN_14828b9da(param_1 + 1,local_48);
    FUN_148276cee(local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148287c7e FUN_148287c7e body=224 status=ok
// SIG undefined FUN_148287c7e(void)

ulonglong FUN_148287c7e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_148287ca8:
    uVar3 = 0;
  }
  else {
    uVar2 = param_1[2];
    iVar5 = param_1[1] + uVar2;
    if (-0x432 < iVar5) {
      if (iVar5 < -0x3fd) {
        uVar4 = FUN_148287d5e(param_1,-0x3fe - iVar5);
        uVar6 = uVar4 & 0x10000000000000;
        uVar3 = 0;
        if (uVar6 == 0) {
          uVar3 = uVar4;
        }
      }
      else if (iVar5 < 0x401) {
        uVar3 = FUN_148287db8(param_1 + 2,0x36);
        if (((uint)uVar3 >> 10 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if (uVar2 == 0x36) {
            uVar4 = (ulonglong)((uint)(uVar3 >> 0xb) & 1);
          }
        }
        uVar4 = (uVar3 >> 0xb) + uVar4;
        uVar6 = (ulonglong)(iVar5 + 0x3fe + (uint)(uVar4 >> 0x35)) << 0x34;
        uVar3 = uVar4 >> (sbyte)(uVar4 >> 0x35) & 0x2fffffffffffff;
      }
      else {
        uVar6 = 0x7ff0000000000000;
        uVar3 = 0;
      }
      goto LAB_148287cac;
    }
    if (iVar5 != -0x432) goto LAB_148287ca8;
    uVar3 = (ulonglong)(uVar2 != 1);
  }
  uVar6 = 0;
LAB_148287cac:
  return (ulonglong)(uVar1 >> 0x1f) << 0x3f | uVar3 | uVar6;
}



// FUNCTION 148287d5e FUN_148287d5e body=89 status=ok
// SIG undefined FUN_148287d5e(void)

longlong FUN_148287d5e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_148287db8((int *)(param_1 + 8),0x35);
  if ((uVar1 >> ((ulonglong)(param_2 + 0xbU) & 0x3f) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(int *)(param_1 + 8) == 0x35 - param_2) {
      uVar2 = (ulonglong)(((uint)(uVar1 >> ((byte)(param_2 + 0xbU) & 0x3f)) & 2) >> 1);
    }
  }
  return (uVar1 >> ((char)param_2 + 0xcU & 0x3f)) + uVar2;
}



// FUNCTION 148287db8 FUN_148287db8 body=119 status=ok
// SIG undefined FUN_148287db8(void)

ulonglong FUN_148287db8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + 0x1e;
  if (-1 < (int)(uVar2 - 1)) {
    uVar1 = uVar2 - 1;
  }
  lVar7 = (longlong)((int)uVar1 >> 5);
  lVar3 = *(longlong *)(param_1 + 2);
  iVar6 = (uVar2 - (uVar1 & 0xffffffe0)) + -1;
  bVar5 = (byte)iVar6;
  uVar4 = (ulonglong)*(uint *)(lVar3 + lVar7 * 4) << (~bVar5 & 0x3f);
  if ((0x20 < (int)uVar2) &&
     (uVar4 = uVar4 | (ulonglong)*(uint *)(lVar3 + -4 + lVar7 * 4) << (0x1f - bVar5 & 0x3f),
     0x40 < uVar2 && (uint)(iVar6 - param_2) < 0xffffffdf)) {
    uVar4 = uVar4 | *(uint *)(lVar3 + -8 + lVar7 * 4) >> (bVar5 + 1 & 0x3f);
  }
  return uVar4;
}



// FUNCTION 148287e30 FUN_148287e30 body=114 status=ok
// SIG undefined FUN_148287e30(void)

undefined8 FUN_148287e30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71dd0;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828825e(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148287ea4 FUN_148287ea4 body=114 status=ok
// SIG undefined FUN_148287ea4(void)

undefined8 FUN_148287ea4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71e00;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828825e(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148287f18 FUN_148287f18 body=114 status=ok
// SIG undefined FUN_148287f18(void)

undefined8 FUN_148287f18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71e40;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828825e(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148287f8c FUN_148287f8c body=114 status=ok
// SIG undefined FUN_148287f8c(void)

undefined8 FUN_148287f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_LAB_14ae71e70;
  local_50 = *param_2;
  local_20 = &local_58;
  FUN_14828825e(&local_58,param_1);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148287fff FUN_148287fff body=199 status=ok
// SIG undefined FUN_148287fff(void)

void FUN_148287fff(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_2 + 1 != param_3 && param_2 != param_3) {
    uVar9 = (ulonglong)*param_2;
    puVar5 = param_2 + 1;
    do {
      iVar7 = (int)uVar9;
      uVar9 = (ulonglong)(int)*puVar5;
      lVar6 = 0;
      while( true ) {
        dVar3 = *(double *)(param_4 + (longlong)iVar7 * 0x18 + lVar6);
        pdVar2 = (double *)(param_4 + uVar9 * 0x18 + lVar6);
        if ((dVar3 != *pdVar2) || (NAN(dVar3) || NAN(*pdVar2))) break;
        lVar6 = lVar6 + 8;
        if (lVar6 == 0x18) {
          puVar5 = puVar5 + 1;
          if (puVar5 == param_3) goto LAB_1482880b8;
          uVar8 = *param_2;
          goto LAB_148288072;
        }
      }
      puVar1 = puVar5 + 1;
      param_2 = puVar5;
      puVar5 = puVar1;
    } while (puVar1 != param_3);
  }
  goto LAB_1482880bf;
LAB_148288072:
  do {
    uVar4 = *puVar5;
    lVar6 = 0;
    do {
      dVar3 = *(double *)(param_4 + (longlong)(int)uVar8 * 0x18 + lVar6);
      pdVar2 = (double *)(param_4 + (longlong)(int)uVar4 * 0x18 + lVar6);
      if ((dVar3 != *pdVar2) || (NAN(dVar3) || NAN(*pdVar2))) {
        param_2[1] = uVar4;
        param_2 = param_2 + 1;
        uVar8 = uVar4;
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x18);
    puVar5 = puVar5 + 1;
  } while (puVar5 != param_3);
LAB_1482880b8:
  param_3 = param_2 + 1;
LAB_1482880bf:
  *param_1 = param_3;
  return;
}



// FUNCTION 1482880f2 FUN_1482880f2 body=56 status=ok
// SIG undefined FUN_1482880f2(void)

longlong FUN_1482880f2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_3;
  puVar2 = *(undefined4 **)(param_1 + 8);
  FUN_148288142(puVar2,param_2,puVar2[1],uVar1);
  *puVar2 = 2;
  puVar2[2] = uVar1;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return param_2;
}



// FUNCTION 148288132 FUN_148288132 body=9 status=ok
// SIG undefined FUN_148288132(void)

void FUN_148288132(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148288142 FUN_148288142 body=282 status=ok
// SIG undefined FUN_148288142(void)

double * FUN_148288142(longlong param_1,double *param_2,int param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x13a0) + (longlong)param_3 * 0x18);
  pdVar2 = (double *)(*(longlong *)(param_1 + 0x13a0) + (longlong)param_4 * 0x18);
  local_48[2] = pdVar1[2];
  local_48[0] = *pdVar1;
  local_48[1] = pdVar1[1];
  lVar3 = 0;
  do {
    local_48[lVar3] = pdVar2[lVar3] + local_48[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar3 = 0;
  do {
    local_48[lVar3] = local_48[lVar3] * 0.5;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  param_2[2] = local_48[2];
  *param_2 = local_48[0];
  param_2[1] = local_48[1];
  local_28[2] = pdVar2[2];
  local_28[0] = *pdVar2;
  local_28[1] = pdVar2[1];
  lVar3 = 0;
  do {
    local_28[lVar3] = local_28[lVar3] - pdVar1[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  param_2[3] = (local_28[2] * local_28[2] + local_28[1] * local_28[1] + local_28[0] * local_28[0]) *
               0.25;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828825e FUN_14828825e body=176 status=ok
// SIG undefined FUN_14828825e(void)

void FUN_14828825e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [7];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == param_1) || (*(longlong *)(param_2 + 0x38) == param_2)) {
    local_28 = (longlong *)0x0;
    FUN_148288310(local_60,param_1);
    FUN_148288310(param_1,param_2);
    if (local_28 != (longlong *)0x0) {
      if (local_28 == local_60) {
        uVar2 = (**(code **)(*local_28 + 8))(local_28,param_2);
        *(undefined8 *)(param_2 + 0x38) = uVar2;
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 0x20))(local_28,local_28 != local_60);
        }
      }
      else {
        *(longlong **)(param_2 + 0x38) = local_28;
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(longlong *)(param_2 + 0x38) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148288310 FUN_148288310 body=81 status=ok
// SIG undefined FUN_148288310(void)

void FUN_148288310(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 14828838e FUN_14828838e body=29 status=ok
// SIG undefined FUN_14828838e(void)

undefined8 FUN_14828838e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_1482883c4(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 1482883b4 FUN_1482883b4 body=9 status=ok
// SIG undefined FUN_1482883b4(void)

void FUN_1482883b4(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 1482883c4 FUN_1482883c4 body=430 status=ok
// SIG undefined FUN_1482883c4(void)

void FUN_1482883c4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  double local_e8 [2];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8 [8];
  undefined1 local_88 [24];
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = 0x18;
  do {
    *(undefined8 *)((longlong)local_c8 + lVar4) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_e8 + lVar4 + 8) = 0;
    *(undefined8 *)((longlong)&local_d8 + lVar4) = 0;
    *(undefined8 *)((longlong)&uStack_d0 + lVar4) = 0;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x78);
  local_f0 = param_1 + 4;
  dVar9 = 1.79769313486232e+308;
  local_f8 = 0xffffffff;
  pdVar7 = local_c8;
  lVar4 = 0;
  bVar3 = true;
  local_100 = param_2;
  do {
    bVar8 = bVar3;
    FUN_148288142(param_1,local_e8,
                  *(undefined4 *)(param_1 + 4 + (longlong)(int)(&DAT_14ae71e30)[lVar4 * 2] * 4),
                  param_3);
    *(undefined4 *)(pdVar7 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)pdVar7 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(pdVar7 + 3) = uStack_d0;
    *(undefined4 *)((longlong)pdVar7 + 0x1c) = uStack_cc;
    *pdVar7 = local_e8[0];
    pdVar7[1] = local_e8[1];
    dVar2 = pdVar7[3];
    if (dVar2 < dVar9) {
      lVar5 = (longlong)*(int *)(param_1 + 4 + (longlong)(int)(&DAT_14ae71e34)[lVar4 * 2] * 4);
      local_d8 = *(double *)(*(longlong *)(param_1 + 0x13a0) + 0x10 + lVar5 * 0x18);
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x13a0) + lVar5 * 0x18);
      local_e8[0] = *pdVar1;
      local_e8[1] = pdVar1[1];
      lVar5 = 0;
      do {
        local_e8[lVar5] = local_e8[lVar5] - pdVar7[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      if (local_d8 * local_d8 + local_e8[1] * local_e8[1] + local_e8[0] * local_e8[0] <= dVar2) {
        dVar9 = dVar2;
        local_f8 = lVar4;
      }
    }
    lVar4 = 1;
    pdVar7 = local_c8 + 4;
    bVar3 = false;
  } while (bVar8);
  local_108 = param_3;
  FUN_148288608(param_1,local_88,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  iVar6 = (int)local_f8;
  if (local_70 < dVar9) {
    iVar6 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000148288570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14ae7202c + *(int *)(&DAT_14ae7202c + (ulonglong)(iVar6 + 1) * 4)))();
  return;
}



// FUNCTION 148288608 FUN_148288608 body=972 status=ok
// SIG undefined FUN_148288608(void)

double * FUN_148288608(longlong param_1,double *param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [4];
  double local_e8 [4];
  double local_c8 [4];
  double local_a8 [4];
  double local_88 [4];
  double local_68 [4];
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_1 + 0x13a0);
  pdVar1 = (double *)(lVar5 + (longlong)param_3 * 0x18);
  pdVar2 = (double *)(lVar5 + (longlong)param_5 * 0x18);
  local_108[2] = pdVar1[2];
  local_108[0] = *pdVar1;
  local_108[1] = pdVar1[1];
  lVar6 = 0;
  do {
    local_108[lVar6] = local_108[lVar6] - pdVar2[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  pdVar3 = (double *)(lVar5 + (longlong)param_4 * 0x18);
  local_e8[2] = pdVar3[2];
  local_e8[0] = *pdVar3;
  local_e8[1] = pdVar3[1];
  lVar5 = 0;
  do {
    local_e8[lVar5] = local_e8[lVar5] - pdVar2[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_128 = local_108[2] * local_108[2] +
              local_108[1] * local_108[1] + local_108[0] * local_108[0];
  local_120 = local_108[0] * local_e8[0];
  lVar5 = 1;
  do {
    local_120 = local_120 + local_108[lVar5] * local_e8[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_110 = local_e8[2] * local_e8[2] + local_e8[1] * local_e8[1] + local_e8[0] * local_e8[0];
  local_138 = local_128 * 0.5;
  local_130 = local_110 * 0.5;
  local_118 = local_120;
  cVar4 = FUN_1482889d6(&local_128,&local_138,&local_148);
  if (cVar4 == '\0') {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    dVar7 = 1.79769313486232e+308;
  }
  else {
    local_c8[0] = *pdVar2;
    local_c8[1] = pdVar2[1];
    local_c8[2] = pdVar2[2];
    lVar5 = 0;
    do {
      local_c8[lVar5] = local_c8[lVar5] * ((1.0 - local_148) - local_140);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    local_a8[2] = pdVar3[2];
    local_a8[0] = *pdVar3;
    local_a8[1] = pdVar3[1];
    lVar5 = 0;
    do {
      local_a8[lVar5] = local_a8[lVar5] * local_140;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    local_88[2] = pdVar1[2];
    local_88[0] = *pdVar1;
    local_88[1] = pdVar1[1];
    lVar5 = 0;
    do {
      local_88[lVar5] = local_88[lVar5] * local_148;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    lVar5 = 0;
    do {
      local_88[lVar5] = local_a8[lVar5] + local_88[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    lVar5 = 0;
    do {
      local_88[lVar5] = local_c8[lVar5] + local_88[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    param_2[2] = local_88[2];
    *param_2 = local_88[0];
    param_2[1] = local_88[1];
    local_68[0] = local_e8[0];
    local_68[1] = local_e8[1];
    local_68[2] = local_e8[2];
    lVar5 = 0;
    do {
      local_68[lVar5] = local_68[lVar5] * local_140;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    local_48[2] = local_108[2];
    local_48[0] = local_108[0];
    local_48[1] = local_108[1];
    lVar5 = 0;
    do {
      local_48[lVar5] = local_48[lVar5] * local_148;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    lVar5 = 0;
    do {
      local_48[lVar5] = local_68[lVar5] + local_48[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar7 = local_48[2] * local_48[2] + local_48[1] * local_48[1] + local_48[0] * local_48[0];
  }
  param_2[3] = dVar7;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482889d6 FUN_1482889d6 body=204 status=ok
// SIG undefined FUN_1482889d6(void)

void FUN_1482889d6(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  char local_49;
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148288aa3(local_48,param_1,&local_49);
  if (local_49 == '\x01') {
    pdVar4 = local_48;
    pdVar5 = &local_58;
    bVar2 = true;
    do {
      bVar3 = bVar2;
      dVar1 = 0.0;
      lVar7 = 0;
      bVar2 = true;
      do {
        bVar6 = bVar2;
        dVar1 = dVar1 + pdVar4[lVar7] * *(double *)(param_2 + lVar7 * 8);
        lVar7 = 1;
        bVar2 = false;
      } while (bVar6);
      *pdVar5 = dVar1;
      pdVar4 = local_48 + 2;
      pdVar5 = &local_60;
      bVar2 = false;
    } while (bVar3);
    *param_3 = local_58;
    param_3[1] = local_60;
  }
  else {
    *param_3 = 0.0;
    param_3[1] = 0.0;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148288aa3 FUN_148288aa3 body=251 status=ok
// SIG undefined FUN_148288aa3(void)

undefined8 * FUN_148288aa3(undefined8 *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  undefined1 auStack_88 [40];
  double *local_60;
  ulonglong *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30 [4];
  
  local_30[0] = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  dVar1 = *param_2 * param_2[3] - param_2[2] * param_2[1];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    local_38 = 1.0 / dVar1;
    local_50 = param_2[3] * local_38;
    local_60 = &local_50;
    local_48 = -param_2[1] * local_38;
    local_40 = -param_2[2] * local_38;
    local_38 = *param_2 * local_38;
    local_58 = local_30;
    FUN_148288ba0(param_1);
  }
  if (param_3 != 0) {
    *(bool *)param_3 = dVar1 != 0.0;
  }
  if ((local_30[0] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148288ba0 FUN_148288ba0 body=158 status=ok
// SIG undefined FUN_148288ba0(void)

void FUN_148288ba0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  puVar7 = (undefined8 *)*param_2;
  uVar9 = param_2[1] - (longlong)puVar7;
  lVar4 = 0;
  lVar6 = 0;
  iVar10 = 0;
  bVar3 = true;
  do {
    iVar8 = (int)(uVar9 >> 3);
    if (iVar8 <= iVar10) {
LAB_148288c14:
      do {
        *(undefined8 *)(lVar6 * 0x10 + param_1 + lVar4 * 8) = 0;
        bVar11 = lVar4 == 0;
        lVar4 = 1;
      } while (bVar11);
      if (bVar3) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    lVar5 = 0;
    bVar11 = true;
    do {
      bVar2 = bVar11;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *(undefined8 *)(lVar6 * 0x10 + param_1 + lVar5 * 8) = uVar1;
      iVar10 = iVar10 + 1;
      if (!bVar2) break;
      lVar5 = 1;
      bVar11 = false;
    } while (iVar10 < iVar8);
    if (bVar2) {
      lVar4 = 1;
      goto LAB_148288c14;
    }
    lVar6 = 1;
    bVar11 = !bVar3;
    bVar3 = false;
    if (bVar11) {
      return;
    }
  } while( true );
}



// FUNCTION 148288c6a FUN_148288c6a body=29 status=ok
// SIG undefined FUN_148288c6a(void)

undefined8 FUN_148288c6a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_148288ca0(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 148288c90 FUN_148288c90 body=9 status=ok
// SIG undefined FUN_148288c90(void)

void FUN_148288c90(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148288ca0 FUN_148288ca0 body=1147 status=ok
// SIG undefined FUN_148288ca0(void)

void FUN_148288ca0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  double *pdVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d0;
  undefined4 *local_1c8;
  undefined8 *local_1c0;
  double local_1b8 [2];
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double local_138 [2];
  undefined4 auStack_128 [2];
  undefined8 uStack_120;
  undefined1 local_d8 [24];
  double local_c0;
  int local_b8 [12];
  int local_88 [10];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_208;
  local_88[0] = 0;
  local_88[4] = 0;
  local_88[7] = 0;
  local_88[1] = 1;
  local_88[2] = 2;
  local_88[3] = 1;
  local_88[5] = 2;
  local_88[6] = 2;
  local_88[8] = 1;
  local_b8[0] = 0;
  local_b8[3] = 0;
  local_b8[8] = 0;
  local_b8[1] = 1;
  local_b8[2] = 2;
  local_b8[4] = 2;
  local_b8[5] = 1;
  local_b8[6] = 1;
  local_b8[7] = 2;
  lVar6 = 0x18;
  do {
    *(undefined8 *)((longlong)&local_198 + lVar6) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_1b8 + lVar6 + 8) = 0;
    *(undefined8 *)((longlong)&local_1a8 + lVar6) = 0;
    *(undefined8 *)((longlong)&uStack_1a0 + lVar6) = 0;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0xf8);
  local_1c8 = param_1 + 1;
  uVar14 = 0xffffffff;
  uVar15 = 0x7fefffff;
  local_1d0 = 0xffffffff;
  puVar10 = &local_198;
  uVar13 = 0;
  local_1c0 = param_2;
  do {
    FUN_148288142(param_1,local_1b8,param_1[(longlong)local_88[uVar13 * 3] + 1],param_3);
    *(undefined4 *)(&uStack_188 + uVar13 * 4) = (undefined4)local_1a8;
    *(undefined4 *)((longlong)&uStack_188 + uVar13 * 0x20 + 4) = local_1a8._4_4_;
    *(undefined4 *)(&uStack_180 + uVar13 * 4) = uStack_1a0;
    *(undefined4 *)((longlong)&uStack_180 + uVar13 * 0x20 + 4) = uStack_19c;
    (&local_198)[uVar13 * 4] = local_1b8[0];
    (&uStack_190)[uVar13 * 4] = local_1b8[1];
    dVar2 = (double)(&uStack_180)[uVar13 * 4];
    if (dVar2 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar2) {
      iVar12 = param_1[(longlong)local_88[uVar13 * 3 + 2] + 1];
      lVar6 = *(longlong *)(param_1 + 0x4e8);
      local_1a8 = *(double *)
                   (lVar6 + 0x10 +
                   (longlong)(int)param_1[(longlong)local_88[uVar13 * 3 + 1] + 1] * 0x18);
      pdVar11 = (double *)
                (lVar6 + (longlong)(int)param_1[(longlong)local_88[uVar13 * 3 + 1] + 1] * 0x18);
      local_1b8[0] = *pdVar11;
      local_1b8[1] = pdVar11[1];
      lVar9 = 0;
      do {
        local_1b8[lVar9] = local_1b8[lVar9] - (double)puVar10[lVar9];
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      if (local_1a8 * local_1a8 + local_1b8[1] * local_1b8[1] + local_1b8[0] * local_1b8[0] <= dVar2
         ) {
        local_1a8 = *(double *)(lVar6 + 0x10 + (longlong)iVar12 * 0x18);
        pdVar11 = (double *)(lVar6 + (longlong)iVar12 * 0x18);
        local_1b8[0] = *pdVar11;
        local_1b8[1] = pdVar11[1];
        lVar6 = 0;
        do {
          local_1b8[lVar6] = local_1b8[lVar6] - (double)puVar10[lVar6];
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        if (local_1a8 * local_1a8 + local_1b8[1] * local_1b8[1] + local_1b8[0] * local_1b8[0] <=
            dVar2) {
          uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
          local_1d0 = uVar13 & 0xffffffff;
          uVar14 = SUB84(dVar2,0);
        }
      }
    }
    uVar13 = uVar13 + 1;
    puVar10 = puVar10 + 4;
  } while (uVar13 != 3);
  uVar13 = 3;
  pdVar11 = local_138;
  lVar6 = 0;
  do {
    local_1e8 = param_3;
    FUN_148288608(param_1,local_1b8,param_1[(longlong)local_b8[lVar6 * 3] + 1],
                  param_1[(longlong)local_b8[lVar6 * 3 + 1] + 1]);
    *(undefined4 *)(&uStack_188 + uVar13 * 4) = (undefined4)local_1a8;
    *(undefined4 *)((longlong)&uStack_188 + uVar13 * 0x20 + 4) = local_1a8._4_4_;
    *(undefined4 *)(&uStack_180 + uVar13 * 4) = uStack_1a0;
    *(undefined4 *)((longlong)&uStack_180 + uVar13 * 0x20 + 4) = uStack_19c;
    (&local_198)[uVar13 * 4] = local_1b8[0];
    (&uStack_190)[uVar13 * 4] = local_1b8[1];
    dVar2 = (double)(&uStack_180)[uVar13 * 4];
    if (dVar2 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar2) {
      local_1a8 = *(double *)
                   (*(longlong *)(param_1 + 0x4e8) + 0x10 +
                   (longlong)(int)param_1[(longlong)local_b8[lVar6 * 3 + 2] + 1] * 0x18);
      pdVar1 = (double *)
               (*(longlong *)(param_1 + 0x4e8) +
               (longlong)(int)param_1[(longlong)local_b8[lVar6 * 3 + 2] + 1] * 0x18);
      local_1b8[0] = *pdVar1;
      local_1b8[1] = pdVar1[1];
      lVar9 = 0;
      do {
        local_1b8[lVar9] = local_1b8[lVar9] - pdVar11[lVar9];
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      if (local_1a8 * local_1a8 + local_1b8[1] * local_1b8[1] + local_1b8[0] * local_1b8[0] <= dVar2
         ) {
        uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_1d0 = uVar13 & 0xffffffff;
        uVar14 = SUB84(dVar2,0);
      }
    }
    lVar6 = lVar6 + 1;
    uVar13 = uVar13 + 1;
    pdVar11 = pdVar11 + 4;
  } while (lVar6 != 3);
  local_1e8 = param_1[3];
  local_1e0 = param_3;
  FUN_14828911c(param_1,local_d8,param_1[1],param_1[2]);
  iVar12 = (int)local_1d0;
  if (local_c0 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != local_c0) {
    iVar12 = 6;
  }
  if (iVar12 + 1U < 8) {
    puVar7 = param_1 + 2;
    switch(iVar12) {
    case 0:
      *param_1 = 2;
      break;
    case 1:
      *param_1 = 2;
    case 5:
      puVar7 = local_1c8;
      break;
    case 2:
      *param_1 = 2;
      param_1[1] = param_1[3];
      break;
    case 3:
      puVar7 = param_1 + 3;
      break;
    case 6:
      *param_1 = 4;
      puVar7 = param_1 + 4;
      break;
    case -1:
      *local_1c0 = 0;
      local_1c0[1] = 0;
      local_1c0[2] = 0;
      local_1c0[3] = 0x3ff0000000000000;
      uVar8 = 0;
      goto LAB_1482890e3;
    }
    *puVar7 = param_3;
  }
  lVar6 = (longlong)iVar12;
  uVar14 = *(undefined4 *)(&local_198 + lVar6 * 4);
  uVar15 = *(undefined4 *)((longlong)&local_198 + lVar6 * 0x20 + 4);
  uVar3 = *(undefined4 *)(&uStack_190 + lVar6 * 4);
  uVar4 = *(undefined4 *)((longlong)&uStack_190 + lVar6 * 0x20 + 4);
  uVar5 = (&uStack_180)[lVar6 * 4];
  local_1c0[2] = (&uStack_188)[lVar6 * 4];
  local_1c0[3] = uVar5;
  *(undefined4 *)local_1c0 = uVar14;
  *(undefined4 *)((longlong)local_1c0 + 4) = uVar15;
  *(undefined4 *)(local_1c0 + 1) = uVar3;
  *(undefined4 *)((longlong)local_1c0 + 0xc) = uVar4;
  uVar8 = 1;
LAB_1482890e3:
  *(undefined1 *)(local_1c0 + 4) = uVar8;
  if ((local_60 ^ (ulonglong)local_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14828911c FUN_14828911c body=1531 status=ok
// SIG undefined FUN_14828911c(void)

double * FUN_14828911c(longlong param_1,double *param_2,int param_3,int param_4,int param_5,
                      int param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_218 [32];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8 [4];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178 [4];
  double local_158 [4];
  double local_138 [4];
  double local_118 [4];
  double local_f8 [4];
  double local_d8 [4];
  double local_b8 [4];
  double local_98 [4];
  double local_78 [4];
  double local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar13 = *(longlong *)(param_1 + 0x13a0);
  pdVar1 = (double *)(lVar13 + (longlong)param_3 * 0x18);
  pdVar2 = (double *)(lVar13 + (longlong)param_6 * 0x18);
  local_1c8[2] = pdVar1[2];
  local_1c8[0] = *pdVar1;
  local_1c8[1] = pdVar1[1];
  lVar14 = 0;
  do {
    local_1c8[lVar14] = local_1c8[lVar14] - pdVar2[lVar14];
    dVar9 = local_1c8[2];
    dVar5 = local_1c8[1];
    local_198 = local_1c8[0];
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  pdVar3 = (double *)(lVar13 + (longlong)param_4 * 0x18);
  local_138[2] = local_1c8[2];
  local_138[0] = local_1c8[0];
  local_138[1] = local_1c8[1];
  local_1c8[2] = pdVar3[2];
  local_1c8[0] = *pdVar3;
  local_1c8[1] = pdVar3[1];
  lVar14 = 0;
  do {
    local_1c8[lVar14] = local_1c8[lVar14] - pdVar2[lVar14];
    dVar10 = local_1c8[2];
    dVar7 = local_1c8[1];
    local_1a0 = local_1c8[0];
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  pdVar4 = (double *)(lVar13 + (longlong)param_5 * 0x18);
  local_158[2] = local_1c8[2];
  local_158[0] = local_1c8[0];
  local_158[1] = local_1c8[1];
  local_1c8[2] = pdVar4[2];
  local_1c8[0] = *pdVar4;
  local_1c8[1] = pdVar4[1];
  lVar13 = 0;
  do {
    local_1c8[lVar13] = local_1c8[lVar13] - pdVar2[lVar13];
    dVar11 = local_1c8[2];
    dVar8 = local_1c8[1];
    dVar6 = local_1c8[0];
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  local_178[2] = local_1c8[2];
  local_178[0] = local_1c8[0];
  local_178[1] = local_1c8[1];
  local_1c8[0] = dVar9 * dVar9 + dVar5 * dVar5 + local_198 * local_198;
  local_1c8[3] = local_198 * local_1a0;
  lVar13 = 1;
  do {
    local_1c8[3] = local_1c8[3] + local_138[lVar13] * local_158[lVar13];
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  local_1c8[1] = local_1c8[3];
  local_198 = local_198 * dVar6;
  lVar13 = 1;
  do {
    local_198 = local_198 + local_138[lVar13] * local_178[lVar13];
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  local_1c8[2] = local_198;
  local_1a8 = dVar10 * dVar10 + dVar7 * dVar7 + local_1a0 * local_1a0;
  local_1a0 = local_1a0 * dVar6;
  lVar13 = 1;
  do {
    local_1a0 = local_1a0 + local_158[lVar13] * local_178[lVar13];
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  local_188 = dVar11 * dVar11 + dVar8 * dVar8 + dVar6 * dVar6;
  local_1e0 = local_1c8[0] * 0.5;
  local_1d8 = local_1a8 * 0.5;
  local_1d0 = local_188 * 0.5;
  local_190 = local_1a0;
  cVar12 = FUN_148289718(local_1c8,&local_1e0,&local_1f8);
  if (cVar12 == '\0') {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    dVar5 = 1.79769313486232e+308;
  }
  else {
    local_118[0] = *pdVar2;
    local_118[1] = pdVar2[1];
    local_118[2] = pdVar2[2];
    lVar13 = 0;
    do {
      local_118[lVar13] = local_118[lVar13] * (((1.0 - local_1f8) - local_1f0) - local_1e8);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_f8[2] = pdVar4[2];
    local_f8[0] = *pdVar4;
    local_f8[1] = pdVar4[1];
    lVar13 = 0;
    do {
      local_f8[lVar13] = local_f8[lVar13] * local_1e8;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_d8[2] = pdVar3[2];
    local_d8[0] = *pdVar3;
    local_d8[1] = pdVar3[1];
    lVar13 = 0;
    do {
      local_d8[lVar13] = local_d8[lVar13] * local_1f0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_b8[2] = pdVar1[2];
    local_b8[0] = *pdVar1;
    local_b8[1] = pdVar1[1];
    lVar13 = 0;
    do {
      local_b8[lVar13] = local_b8[lVar13] * local_1f8;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    lVar13 = 0;
    do {
      local_b8[lVar13] = local_d8[lVar13] + local_b8[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    lVar13 = 0;
    do {
      local_b8[lVar13] = local_f8[lVar13] + local_b8[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    lVar13 = 0;
    do {
      local_b8[lVar13] = local_118[lVar13] + local_b8[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    param_2[2] = local_b8[2];
    *param_2 = local_b8[0];
    param_2[1] = local_b8[1];
    local_98[0] = local_178[0];
    local_98[1] = local_178[1];
    local_98[2] = local_178[2];
    lVar13 = 0;
    do {
      local_98[lVar13] = local_98[lVar13] * local_1e8;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_78[2] = local_158[2];
    local_78[0] = local_158[0];
    local_78[1] = local_158[1];
    lVar13 = 0;
    do {
      local_78[lVar13] = local_78[lVar13] * local_1f0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_58[2] = local_138[2];
    local_58[0] = local_138[0];
    local_58[1] = local_138[1];
    lVar13 = 0;
    do {
      local_58[lVar13] = local_58[lVar13] * local_1f8;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    lVar13 = 0;
    do {
      local_58[lVar13] = local_78[lVar13] + local_58[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    lVar13 = 0;
    do {
      local_58[lVar13] = local_98[lVar13] + local_58[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    dVar5 = local_58[2] * local_58[2] + local_58[1] * local_58[1] + local_58[0] * local_58[0];
  }
  param_2[3] = dVar5;
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148289718 FUN_148289718 body=188 status=ok
// SIG undefined FUN_148289718(void)

void FUN_148289718(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [47];
  char local_89;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [72];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar4 = local_70;
  FUN_1482897d5(puVar4,param_1,&local_89);
  if (local_89 == '\x01') {
    lVar2 = 0;
    do {
      dVar1 = 0.0;
      lVar3 = 0;
      do {
        dVar1 = dVar1 + *(double *)(puVar4 + lVar3 * 8) * *(double *)(param_2 + lVar3 * 8);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 3);
      (&local_88)[lVar2] = dVar1;
      lVar2 = lVar2 + 1;
      puVar4 = puVar4 + 0x18;
    } while (lVar2 != 3);
    param_3[2] = local_78;
    *(undefined4 *)param_3 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_3 + 4) = local_88._4_4_;
    *(undefined4 *)(param_3 + 1) = uStack_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_7c;
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482897d5 FUN_1482897d5 body=703 status=ok
// SIG undefined FUN_1482897d5(void)

undefined8 * FUN_1482897d5(undefined8 *param_1,double *param_2,longlong param_3)

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
  undefined1 auStack_128 [32];
  double *local_108;
  ulonglong *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0 [20];
  
  local_b0[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  dVar1 = param_2[4];
  dVar2 = param_2[8];
  dVar3 = param_2[5];
  dVar4 = param_2[7];
  dVar13 = dVar1 * dVar2 - dVar4 * dVar3;
  dVar5 = param_2[6];
  dVar6 = param_2[3];
  dVar12 = dVar3 * dVar5 - dVar2 * dVar6;
  dVar11 = dVar6 * dVar4 - dVar5 * dVar1;
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar9 = param_2[2];
  dVar10 = dVar9 * dVar11 + dVar7 * dVar13 + dVar8 * dVar12;
  if ((dVar10 != 0.0) || (NAN(dVar10))) {
    local_b8 = 1.0 / dVar10;
    local_f8 = dVar13 * local_b8;
    local_108 = &local_f8;
    local_f0 = (dVar9 * dVar4 - dVar2 * dVar8) * local_b8;
    local_e8 = (dVar8 * dVar3 - dVar1 * dVar9) * local_b8;
    local_e0 = dVar12 * local_b8;
    local_d8 = (dVar2 * dVar7 - dVar5 * dVar9) * local_b8;
    local_d0 = (dVar9 * dVar6 - dVar3 * dVar7) * local_b8;
    local_c8 = dVar11 * local_b8;
    local_c0 = (dVar5 * dVar8 - dVar4 * dVar7) * local_b8;
    local_b8 = (dVar7 * dVar1 - dVar6 * dVar8) * local_b8;
    local_100 = local_b0;
    FUN_148289a96(param_1);
  }
  if (param_3 != 0) {
    *(bool *)param_3 = dVar10 != 0.0;
  }
  if ((local_b0[0] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148289a96 FUN_148289a96 body=205 status=ok
// SIG undefined FUN_148289a96(void)

longlong FUN_148289a96(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar3 = *param_2;
  uVar5 = param_2[1] - lVar3;
  uVar2 = 0;
  uVar6 = 0;
  uVar8 = 0;
  lVar7 = param_1;
  do {
    iVar4 = (int)(uVar5 >> 3);
    if (iVar4 <= (int)uVar8) {
LAB_148289b0b:
      memset((void *)((ulonglong)uVar2 + param_1 + (uVar6 & 0xffffffff) * 0x18),0,
             (ulonglong)(0x18 - uVar2));
      if (1 < uVar6) {
        return param_1;
      }
      memset((void *)(param_1 + uVar6 * 0x18 + 0x18),0,(1 - uVar6) * 0x18 + 0x18);
      return param_1;
    }
    lVar9 = 0;
    uVar1 = 0;
    do {
      uVar10 = uVar1;
      *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar3 + uVar10 * 8);
      lVar9 = lVar9 + 8;
      if (1 < uVar10) break;
      uVar1 = uVar10 + 1;
    } while ((int)uVar8 + (int)uVar10 + 1 < iVar4);
    if (uVar10 < 2) {
      uVar2 = (uint)lVar9;
      goto LAB_148289b0b;
    }
    uVar8 = (uVar8 & 0xffffffff) + uVar10 + 1;
    lVar3 = lVar3 + lVar9;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x18;
    if (uVar6 == 3) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 148289b90 FUN_148289b90 body=29 status=ok
// SIG undefined FUN_148289b90(void)

undefined8 FUN_148289b90(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_148289bc6(*(undefined8 *)(param_1 + 8),param_2,*param_3);
  return param_2;
}



// FUNCTION 148289bb6 FUN_148289bb6 body=9 status=ok
// SIG undefined FUN_148289bb6(void)

void FUN_148289bb6(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148289bc6 FUN_148289bc6 body=1538 status=ok
// SIG undefined FUN_148289bc6(void)

void FUN_148289bc6(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  double *pdVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  ulonglong local_260;
  undefined4 *local_258;
  undefined8 *local_250;
  double local_248 [2];
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  double local_1a8 [2];
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  double local_e8 [2];
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar10 = 0x18;
  do {
    *(undefined8 *)((longlong)&local_228 + lVar10) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_248 + lVar10 + 8) = 0;
    *(undefined8 *)((longlong)&local_238 + lVar10) = 0;
    *(undefined8 *)((longlong)&uStack_230 + lVar10) = 0;
    lVar10 = lVar10 + 0x20;
  } while (lVar10 != 0x1d8);
  local_258 = param_1 + 1;
  uVar17 = 0xffffffff;
  uVar18 = 0x7fefffff;
  local_260 = 0xffffffff;
  puVar13 = &local_228;
  uVar15 = 0;
  local_250 = param_2;
  do {
    FUN_148288142(param_1,local_248,param_1[(longlong)(int)(&DAT_14ae71ea0)[uVar15 * 4] + 1],param_3
                 );
    *(undefined4 *)(&uStack_218 + uVar15 * 4) = (undefined4)local_238;
    *(undefined4 *)((longlong)&uStack_218 + uVar15 * 0x20 + 4) = local_238._4_4_;
    *(undefined4 *)(&uStack_210 + uVar15 * 4) = uStack_230;
    *(undefined4 *)((longlong)&uStack_210 + uVar15 * 0x20 + 4) = uStack_22c;
    (&local_228)[uVar15 * 4] = local_248[0];
    (&uStack_220)[uVar15 * 4] = local_248[1];
    dVar2 = (double)(&uStack_210)[uVar15 * 4];
    if (dVar2 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar2) {
      iVar3 = param_1[(longlong)(int)(&DAT_14ae71ea8)[uVar15 * 4] + 1];
      iVar4 = param_1[(longlong)(int)(&DAT_14ae71eac)[uVar15 * 4] + 1];
      lVar10 = *(longlong *)(param_1 + 0x4e8);
      local_238 = *(double *)
                   (lVar10 + 0x10 +
                   (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71ea4)[uVar15 * 4] + 1] * 0x18);
      pdVar16 = (double *)
                (lVar10 + (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71ea4)[uVar15 * 4] + 1] *
                          0x18);
      local_248[0] = *pdVar16;
      local_248[1] = pdVar16[1];
      lVar14 = 0;
      do {
        local_248[lVar14] = local_248[lVar14] - (double)puVar13[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <= dVar2
         ) {
        local_238 = *(double *)(lVar10 + 0x10 + (longlong)iVar3 * 0x18);
        pdVar16 = (double *)(lVar10 + (longlong)iVar3 * 0x18);
        local_248[0] = *pdVar16;
        local_248[1] = pdVar16[1];
        lVar14 = 0;
        do {
          local_248[lVar14] = local_248[lVar14] - (double)puVar13[lVar14];
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <=
            dVar2) {
          local_238 = *(double *)(lVar10 + 0x10 + (longlong)iVar4 * 0x18);
          pdVar16 = (double *)(lVar10 + (longlong)iVar4 * 0x18);
          local_248[0] = *pdVar16;
          local_248[1] = pdVar16[1];
          lVar10 = 0;
          do {
            local_248[lVar10] = local_248[lVar10] - (double)puVar13[lVar10];
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <=
              dVar2) {
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            local_260 = uVar15 & 0xffffffff;
            uVar17 = SUB84(dVar2,0);
          }
        }
      }
    }
    uVar15 = uVar15 + 1;
    puVar13 = puVar13 + 4;
  } while (uVar15 != 4);
  uVar15 = 4;
  pdVar16 = local_1a8;
  lVar10 = 0;
  do {
    local_278 = param_3;
    FUN_148288608(param_1,local_248,param_1[(longlong)(int)(&DAT_14ae71ee0)[lVar10 * 4] + 1],
                  param_1[(longlong)(int)(&DAT_14ae71ee4)[lVar10 * 4] + 1]);
    *(undefined4 *)(&uStack_218 + uVar15 * 4) = (undefined4)local_238;
    *(undefined4 *)((longlong)&uStack_218 + uVar15 * 0x20 + 4) = local_238._4_4_;
    *(undefined4 *)(&uStack_210 + uVar15 * 4) = uStack_230;
    *(undefined4 *)((longlong)&uStack_210 + uVar15 * 0x20 + 4) = uStack_22c;
    (&local_228)[uVar15 * 4] = local_248[0];
    (&uStack_220)[uVar15 * 4] = local_248[1];
    dVar2 = (double)(&uStack_210)[uVar15 * 4];
    if (dVar2 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar2) {
      iVar3 = param_1[(longlong)(int)(&DAT_14ae71eec)[lVar10 * 4] + 1];
      lVar14 = *(longlong *)(param_1 + 0x4e8);
      local_238 = *(double *)
                   (lVar14 + 0x10 +
                   (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71ee8)[lVar10 * 4] + 1] * 0x18);
      pdVar1 = (double *)
               (lVar14 + (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71ee8)[lVar10 * 4] + 1] *
                         0x18);
      local_248[0] = *pdVar1;
      local_248[1] = pdVar1[1];
      lVar12 = 0;
      do {
        local_248[lVar12] = local_248[lVar12] - pdVar16[lVar12];
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <= dVar2
         ) {
        local_238 = *(double *)(lVar14 + 0x10 + (longlong)iVar3 * 0x18);
        pdVar1 = (double *)(lVar14 + (longlong)iVar3 * 0x18);
        local_248[0] = *pdVar1;
        local_248[1] = pdVar1[1];
        lVar14 = 0;
        do {
          local_248[lVar14] = local_248[lVar14] - pdVar16[lVar14];
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <=
            dVar2) {
          uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
          local_260 = uVar15 & 0xffffffff;
          uVar17 = SUB84(dVar2,0);
        }
      }
    }
    lVar10 = lVar10 + 1;
    uVar15 = uVar15 + 1;
    pdVar16 = pdVar16 + 4;
  } while (lVar10 != 6);
  uVar15 = 10;
  pdVar16 = local_e8;
  lVar10 = 0;
  do {
    local_278 = param_1[(longlong)(int)(&DAT_14ae71f48)[lVar10 * 4] + 1];
    local_270 = param_3;
    FUN_14828911c(param_1,local_248,param_1[(longlong)(int)(&DAT_14ae71f40)[lVar10 * 4] + 1],
                  param_1[(longlong)(int)(&DAT_14ae71f44)[lVar10 * 4] + 1]);
    *(undefined4 *)(&uStack_218 + uVar15 * 4) = (undefined4)local_238;
    *(undefined4 *)((longlong)&uStack_218 + uVar15 * 0x20 + 4) = local_238._4_4_;
    *(undefined4 *)(&uStack_210 + uVar15 * 4) = uStack_230;
    *(undefined4 *)((longlong)&uStack_210 + uVar15 * 0x20 + 4) = uStack_22c;
    (&local_228)[uVar15 * 4] = local_248[0];
    (&uStack_220)[uVar15 * 4] = local_248[1];
    dVar2 = (double)(&uStack_210)[uVar15 * 4];
    if (dVar2 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar2) {
      local_238 = *(double *)
                   (*(longlong *)(param_1 + 0x4e8) + 0x10 +
                   (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71f4c)[lVar10 * 4] + 1] * 0x18);
      pdVar1 = (double *)
               (*(longlong *)(param_1 + 0x4e8) +
               (longlong)(int)param_1[(longlong)(int)(&DAT_14ae71f4c)[lVar10 * 4] + 1] * 0x18);
      local_248[0] = *pdVar1;
      local_248[1] = pdVar1[1];
      lVar14 = 0;
      do {
        local_248[lVar14] = local_248[lVar14] - pdVar16[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      if (local_238 * local_238 + local_248[1] * local_248[1] + local_248[0] * local_248[0] <= dVar2
         ) {
        uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_260 = uVar15 & 0xffffffff;
        uVar17 = SUB84(dVar2,0);
      }
    }
    lVar10 = lVar10 + 1;
    uVar15 = uVar15 + 1;
    pdVar16 = pdVar16 + 4;
  } while (lVar10 != 4);
  switch((int)local_260) {
  case 0:
    *param_1 = 2;
    break;
  case 1:
    *param_1 = 2;
  case 0xd:
switchD_14828a0cd_caseD_d:
    param_1 = local_258;
    goto LAB_14828a14e;
  case 2:
    *param_1 = 2;
    uVar17 = param_1[3];
    goto LAB_14828a147;
  case 3:
    *param_1 = 2;
    goto LAB_14828a144;
  case 4:
    *param_1 = 3;
  case 0xb:
switchD_14828a0cd_caseD_b:
    param_1 = param_1 + 3;
    goto LAB_14828a14e;
  case 5:
    *param_1 = 3;
    break;
  case 6:
    *param_1 = 3;
    param_1[2] = param_1[4];
    goto switchD_14828a0cd_caseD_b;
  case 7:
    *param_1 = 3;
    goto switchD_14828a0cd_caseD_d;
  case 8:
    *param_1 = 3;
    param_1[1] = param_1[4];
    goto switchD_14828a0cd_caseD_b;
  case 9:
    *param_1 = 3;
LAB_14828a144:
    uVar17 = param_1[4];
LAB_14828a147:
    param_1[1] = uVar17;
    break;
  case 10:
    param_1 = param_1 + 4;
    goto LAB_14828a14e;
  case 0xc:
    break;
  case -1:
    *local_250 = 0;
    local_250[1] = 0;
    local_250[2] = 0;
    local_250[3] = 0x3ff0000000000000;
    uVar11 = 0;
    goto LAB_14828a176;
  default:
    goto switchD_14828a0cd_default;
  }
  param_1 = param_1 + 2;
LAB_14828a14e:
  *param_1 = param_3;
switchD_14828a0cd_default:
  lVar10 = (longlong)(int)local_260;
  lVar14 = lVar10 * 0x20;
  uVar17 = *(undefined4 *)(&local_228 + lVar10 * 4);
  uVar18 = *(undefined4 *)((longlong)&local_228 + lVar14 + 4);
  uVar5 = *(undefined4 *)(&uStack_220 + lVar10 * 4);
  uVar6 = *(undefined4 *)((longlong)&uStack_220 + lVar14 + 4);
  uVar7 = *(undefined4 *)((longlong)&uStack_218 + lVar14 + 4);
  uVar8 = *(undefined4 *)(&uStack_210 + lVar10 * 4);
  uVar9 = *(undefined4 *)((longlong)&uStack_210 + lVar14 + 4);
  *(undefined4 *)(local_250 + 2) = *(undefined4 *)(&uStack_218 + lVar10 * 4);
  *(undefined4 *)((longlong)local_250 + 0x14) = uVar7;
  *(undefined4 *)(local_250 + 3) = uVar8;
  *(undefined4 *)((longlong)local_250 + 0x1c) = uVar9;
  *(undefined4 *)local_250 = uVar17;
  *(undefined4 *)((longlong)local_250 + 4) = uVar18;
  *(undefined4 *)(local_250 + 1) = uVar5;
  *(undefined4 *)((longlong)local_250 + 0xc) = uVar6;
  uVar11 = 1;
LAB_14828a176:
  *(undefined1 *)(local_250 + 4) = uVar11;
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14828a1c9 FUN_14828a1c9 body=393 status=ok
// SIG undefined FUN_14828a1c9(void)

void FUN_14828a1c9(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = (longlong)param_2 - (longlong)param_1;
  if (0x80 < (longlong)uVar4) {
    if (0 < (longlong)param_3) {
      puVar3 = param_2;
      do {
        FUN_14828a456(&local_58,param_1,puVar3,param_4);
        puVar2 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        param_2 = (undefined4 *)CONCAT44(uStack_54,local_58);
        if ((longlong)param_2 - (longlong)param_1 < (longlong)puVar3 - (longlong)local_50) {
          FUN_14828a1c9(param_1,param_2,param_3,param_4);
          param_2 = puVar3;
          param_1 = puVar2;
        }
        else {
          FUN_14828a1c9(local_50,puVar3,param_3,param_4);
        }
        uVar4 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar4 < 0x81) goto LAB_14828a346;
        puVar3 = param_2;
      } while (param_3 != 0);
    }
    uVar6 = uVar4 >> 3;
    do {
      uVar5 = uVar6 - 1;
      local_58 = param_1[uVar5];
      local_68 = param_4;
      FUN_14828a776(param_1,uVar5,uVar4 >> 2,&local_58);
      bVar1 = 1 < uVar6;
      uVar6 = uVar5;
    } while (bVar1);
    lVar7 = (longlong)param_2 - (longlong)param_1;
    if (4 < lVar7) {
      do {
        param_2 = param_2 + -1;
        local_58 = *param_2;
        *param_2 = *param_1;
        lVar7 = lVar7 + -4;
        local_68 = param_4;
        FUN_14828a776(param_1,0,lVar7 >> 2,&local_58);
      } while (4 < lVar7);
    }
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14828a346:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 14828a456 FUN_14828a456 body=800 status=ok
// SIG undefined FUN_14828a456(void)

undefined8 * FUN_14828a456(undefined8 *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  bool bVar15;
  
  lVar13 = (longlong)param_3 - (longlong)param_2 >> 3;
  puVar8 = param_2 + lVar13;
  FUN_14828a887(param_2,puVar8);
  puVar7 = puVar8;
  if (0 < lVar13) {
    uVar10 = (ulonglong)*puVar8;
    do {
      puVar11 = puVar7 + -1;
      iVar9 = (int)uVar10;
      uVar10 = (ulonglong)(int)puVar7[-1];
      lVar13 = param_4 + uVar10 * 0x18;
      lVar1 = param_4 + (longlong)iVar9 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a512;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a512;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar7 = puVar11;
    } while (param_2 < puVar11);
  }
LAB_14828a512:
  puVar8 = puVar8 + 1;
  puVar11 = puVar7;
  puVar14 = puVar8;
  if (puVar8 < param_3) {
    lVar13 = param_4 + (longlong)(int)*puVar7 * 0x18;
    do {
      lVar1 = param_4 + (longlong)(int)*puVar8 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        puVar14 = puVar8;
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a592;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a592;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar8 = puVar8 + 1;
      puVar14 = puVar8;
    } while (puVar8 < param_3);
  }
LAB_14828a592:
  do {
    puVar4 = puVar7;
    if (puVar8 < param_3) {
      lVar13 = param_4 + (longlong)(int)*puVar7 * 0x18;
      lVar1 = param_4 + (longlong)(int)*puVar8 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a615;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto joined_r0x00014828a621;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      if (puVar14 != puVar8) {
        uVar6 = *puVar14;
        *puVar14 = *puVar8;
        *puVar8 = uVar6;
      }
      puVar14 = puVar14 + 1;
LAB_14828a615:
      puVar8 = puVar8 + 1;
      goto LAB_14828a592;
    }
joined_r0x00014828a621:
    puVar5 = puVar11;
    if (param_2 < puVar5) {
      puVar11 = puVar5 + -1;
      lVar13 = param_4 + (longlong)(int)puVar5[-1] * 0x18;
      lVar1 = param_4 + (longlong)(int)*puVar4 * 0x18;
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar13 + lVar12);
        dVar3 = *(double *)(lVar1 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto joined_r0x00014828a621;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      lVar12 = 0;
      do {
        dVar2 = *(double *)(lVar1 + lVar12);
        dVar3 = *(double *)(lVar13 + lVar12);
        if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
          if (dVar2 < dVar3) goto LAB_14828a6c0;
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x18);
      puVar7 = puVar4 + -1;
      bVar15 = puVar4 != puVar5;
      puVar4 = puVar7;
      if (bVar15) {
        uVar6 = *puVar7;
        *puVar7 = puVar5[-1];
        *puVar11 = uVar6;
      }
      goto joined_r0x00014828a621;
    }
LAB_14828a6c0:
    if ((puVar8 == param_3) && (puVar5 == param_2)) {
      *param_1 = puVar4;
      param_1[1] = puVar14;
      return param_1;
    }
    if (puVar5 == param_2) {
      uVar6 = *puVar4;
      if (puVar14 != puVar8) {
        *puVar4 = *puVar14;
        *puVar14 = uVar6;
        uVar6 = *puVar4;
      }
      *puVar4 = *puVar8;
      *puVar8 = uVar6;
      puVar7 = puVar4 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar5;
      puVar14 = puVar14 + 1;
    }
    else {
      puVar11 = puVar5 + -1;
      if (puVar8 == param_3) {
        puVar7 = puVar4 + -1;
        uVar6 = puVar4[-1];
        if (puVar5 != puVar4) {
          uVar6 = *puVar11;
          *puVar11 = puVar4[-1];
          *puVar7 = uVar6;
        }
        *puVar7 = puVar14[-1];
        puVar14[-1] = uVar6;
        puVar14 = puVar14 + -1;
      }
      else {
        uVar6 = *puVar8;
        *puVar8 = *puVar11;
        *puVar11 = uVar6;
        puVar8 = puVar8 + 1;
        puVar7 = puVar4;
      }
    }
  } while( true );
}



// FUNCTION 14828a776 FUN_14828a776 body=273 status=ok
// SIG undefined FUN_14828a776(void)

void FUN_14828a776(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar5) {
    lVar6 = lVar3 * 2 + 2;
    iVar4 = *(int *)(param_1 + 8 + lVar3 * 8);
    lVar7 = 0;
    do {
      dVar1 = *(double *)(param_5 + (longlong)iVar4 * 0x18 + lVar7);
      dVar2 = *(double *)(param_5 + (longlong)*(int *)(param_1 + 4 + lVar3 * 8) * 0x18 + lVar7);
      if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
        if (dVar1 < dVar2) {
          lVar6 = lVar3 * 2 + 1;
        }
        iVar4 = *(int *)(param_1 + lVar6 * 4);
        break;
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    *(int *)(param_1 + lVar3 * 4) = iVar4;
    lVar3 = lVar6;
  }
  if (((param_3 & 1) == 0) && (lVar3 == lVar5)) {
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar6 = lVar3 + -1 >> 1;
    iVar4 = *(int *)(param_1 + lVar6 * 4);
    lVar5 = 0;
    while( true ) {
      dVar1 = *(double *)(param_5 + (longlong)iVar4 * 0x18 + lVar5);
      dVar2 = *(double *)(param_5 + (longlong)*param_4 * 0x18 + lVar5);
      if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
      lVar5 = lVar5 + 8;
      if (lVar5 == 0x18) goto LAB_14828a874;
    }
    if (dVar2 <= dVar1) break;
    *(int *)(param_1 + lVar3 * 4) = iVar4;
    lVar3 = lVar6;
  }
LAB_14828a874:
  *(int *)(param_1 + lVar3 * 4) = *param_4;
  return;
}



// FUNCTION 14828a887 FUN_14828a887 body=168 status=ok
// SIG undefined FUN_14828a887(void)

void FUN_14828a887(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = param_3 - param_1 >> 2;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 & 0xfffffffffffffff8;
    uVar3 = uVar3 >> 3;
    lVar2 = param_1 + uVar3 * 4;
    FUN_14828a92f(param_1,lVar2,param_1 + uVar1,param_4);
    FUN_14828a92f(param_2 + uVar3 * -4,param_2,param_2 + uVar3 * 4,param_4);
    lVar4 = param_3 + uVar3 * -4;
    FUN_14828a92f(param_3 - uVar1,lVar4,param_3,param_4);
    param_1 = lVar2;
    param_3 = lVar4;
  }
  FUN_14828a92f(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14828a92f FUN_14828a92f body=201 status=ok
// SIG undefined FUN_14828a92f(void)

void FUN_14828a92f(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *param_2;
  lVar6 = (longlong)iVar4;
  lVar5 = 0;
  while( true ) {
    dVar1 = *(double *)(param_4 + lVar6 * 0x18 + lVar5);
    dVar2 = *(double *)(param_4 + (longlong)*param_1 * 0x18 + lVar5);
    if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
    lVar5 = lVar5 + 8;
    if (lVar5 == 0x18) {
LAB_14828a969:
      iVar3 = *param_3;
      lVar5 = param_4 + (longlong)iVar3 * 0x18;
      lVar7 = 0;
      while( true ) {
        dVar1 = *(double *)(lVar5 + lVar7);
        dVar2 = *(double *)(param_4 + lVar6 * 0x18 + lVar7);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
        lVar7 = lVar7 + 8;
        if (lVar7 == 0x18) {
          return;
        }
      }
      if (dVar2 <= dVar1) {
        return;
      }
      *param_3 = iVar4;
      *param_2 = iVar3;
      lVar6 = 0;
      while( true ) {
        dVar1 = *(double *)(lVar5 + lVar6);
        dVar2 = *(double *)(param_4 + (longlong)*param_1 * 0x18 + lVar6);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) break;
        lVar6 = lVar6 + 8;
        if (lVar6 == 0x18) {
          return;
        }
      }
      if (dVar2 <= dVar1) {
        return;
      }
      *param_2 = *param_1;
      *param_1 = iVar3;
      return;
    }
  }
  if (dVar1 < dVar2) {
    *param_2 = *param_1;
    *param_1 = iVar4;
    iVar4 = *param_2;
    lVar6 = (longlong)iVar4;
  }
  goto LAB_14828a969;
}



// FUNCTION 14828a9f8 FUN_14828a9f8 body=94 status=ok
// SIG undefined FUN_14828a9f8(void)

void FUN_14828a9f8(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2;
  uVar6 = (lVar5 >> 3) * -0x5555555555555555;
  if (uVar6 < param_2 || uVar6 - param_2 == 0) {
    if (uVar6 >= param_2) {
      return;
    }
    if ((ulonglong)((param_1[2] - lVar2 >> 3) * -0x5555555555555555) < param_2) {
      if (0xaaaaaaaaaaaaaaa < param_2) {
        FUN_14828aae8();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
      uVar3 = 0xaaaaaaaaaaaaaaa - (uVar4 >> 1);
      uVar6 = (uVar4 >> 1) + uVar4;
      if (uVar6 <= param_2) {
        uVar6 = param_2;
      }
      if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
        uVar6 = 0xaaaaaaaaaaaaaaa;
      }
      _Dst = (void *)FUN_14828ab6c(uVar6);
      memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
      FUN_14828aafa(param_1,_Dst,param_2,uVar6);
      return;
    }
    lVar2 = param_1[1] + (param_2 * 0x18 - lVar5);
  }
  else {
    lVar2 = lVar2 + param_2 * 0x18;
  }
  param_1[1] = lVar2;
  return;
}



// FUNCTION 14828aa56 FUN_14828aa56 body=145 status=ok
// SIG undefined FUN_14828aa56(void)

void FUN_14828aa56(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
    uVar2 = 0xaaaaaaaaaaaaaaa - (uVar3 >> 1);
    uVar4 = (uVar3 >> 1) + uVar3;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    _Dst = (void *)FUN_14828ab6c(uVar4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14828aafa(param_1,_Dst,param_2,uVar4);
    return;
  }
  FUN_14828aae8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14828aae8 FUN_14828aae8 body=16 status=ok
// SIG undefined FUN_14828aae8(void)

void FUN_14828aae8(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14828aafa FUN_14828aafa body=112 status=ok
// SIG undefined FUN_14828aafa(void)

void FUN_14828aafa(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}


