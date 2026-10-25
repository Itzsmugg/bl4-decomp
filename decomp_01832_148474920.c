// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148474920 FUN_148474920 body=86 status=ok
// SIG undefined FUN_148474920(void)

undefined8 * FUN_148474920(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14aee53a0;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 14847497c FUN_14847497c body=29 status=ok
// SIG undefined FUN_14847497c(void)

void FUN_14847497c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14847499a FUN_14847499a body=29 status=ok
// SIG undefined FUN_14847499a(void)

undefined8 FUN_14847499a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484749b8 FUN_1484749b8 body=200 status=ok
// SIG undefined FUN_1484749b8(void)

void FUN_1484749b8(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*param_2 < (double)param_1[1]) || (param_2[1] < (double)param_1[2])) ||
      (param_2[2] < (double)param_1[3])) ||
     ((((double)param_1[4] < *param_2 || ((double)param_1[5] < param_2[1])) ||
      ((double)param_1[6] < param_2[2])))) {
    dVar2 = -(*(double *)(*param_1 + 0x18) + 1.0);
  }
  else {
    plVar1 = *(longlong **)(*param_1 + 0x10);
    FUN_146bef8a8(plVar1,0);
    local_28 = param_2[2];
    local_38 = *param_2;
    dStack_30 = param_2[1];
    dVar2 = (double)FUN_146bed438(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar2);
}



// FUNCTION 148474a82 FUN_148474a82 body=107 status=ok
// SIG undefined FUN_148474a82(void)

void FUN_148474a82(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(*param_1 + 0x10);
  FUN_146bef8a8(plVar1,0);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146bed438(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148474b18 FUN_148474b18 body=29 status=ok
// SIG undefined FUN_148474b18(void)

undefined8 FUN_148474b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148474b36 FUN_148474b36 body=132 status=ok
// SIG undefined FUN_148474b36(void)

void FUN_148474b36(longlong param_1,int param_2)

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



// FUNCTION 148474bbc FUN_148474bbc body=148 status=ok
// SIG undefined FUN_148474bbc(void)

ulonglong FUN_148474bbc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 < 1) {
    bVar5 = false;
    uVar4 = 0;
  }
  else {
    bVar5 = iVar1 == *(int *)(param_1 + 0x28);
    uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) == 0) {
        uVar3 = 0;
        goto LAB_148474c43;
      }
      lVar2 = lVar2 + 1;
    } while (iVar1 != lVar2);
  }
  if ((((*(double *)(param_1 + 0x30) <= 0.0) || (*(double *)(param_1 + 0x38) <= 0.0)) ||
      (*(double *)(param_1 + 0x40) <= 0.0)) ||
     ((*(double *)(param_1 + 0x48) <= 0.0 ||
      (iVar1 = _finite(*(double *)(param_1 + 0x40)), iVar1 == 0)))) {
    bVar6 = false;
  }
  else {
    iVar1 = _finite(*(double *)(param_1 + 0x48));
    bVar6 = iVar1 != 0;
  }
  uVar3 = CONCAT71(uVar4,bVar5 & bVar6);
LAB_148474c43:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148474c50 FUN_148474c50 body=209 status=ok
// SIG undefined FUN_148474c50(void)

void FUN_148474c50(longlong param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  *(undefined8 *)(param_1 + 0x370) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x378) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x380) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x388) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x390) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x398) = 0xffefffffffffffff;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    pdVar1 = *(double **)(param_1 + 0x20);
    pdVar2 = pdVar1 + (longlong)*(int *)(param_1 + 0x28) * 6;
    dVar3 = 1.79769313486232e+308;
    dVar4 = -1.79769313486232e+308;
    dVar5 = -1.79769313486232e+308;
    dVar6 = -1.79769313486232e+308;
    dVar7 = 1.79769313486232e+308;
    dVar8 = 1.79769313486232e+308;
    do {
      if (*pdVar1 <= dVar8) {
        dVar8 = *pdVar1;
      }
      if (pdVar1[1] <= dVar7) {
        dVar7 = pdVar1[1];
      }
      if (pdVar1[2] <= dVar3) {
        dVar3 = pdVar1[2];
      }
      if (dVar6 <= pdVar1[3]) {
        dVar6 = pdVar1[3];
      }
      if (dVar5 <= pdVar1[4]) {
        dVar5 = pdVar1[4];
      }
      if (dVar4 <= pdVar1[5]) {
        dVar4 = pdVar1[5];
      }
      *(double *)(param_1 + 0x370) = dVar8;
      *(double *)(param_1 + 0x378) = dVar7;
      *(double *)(param_1 + 0x380) = dVar3;
      *(double *)(param_1 + 0x388) = dVar6;
      *(double *)(param_1 + 0x390) = dVar5;
      *(double *)(param_1 + 0x398) = dVar4;
      pdVar1 = pdVar1 + 6;
    } while (pdVar1 != pdVar2);
  }
  return;
}



// FUNCTION 148474d22 FUN_148474d22 body=2055 status=ok
// SIG undefined FUN_148474d22(void)

void FUN_148474d22(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pcVar8 = *(code **)(param_1 + 0x60);
  plVar19 = (longlong *)(param_1 + 0x80);
  plVar18 = *(longlong **)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    plVar18 = plVar19;
  }
  uVar16 = (**(code **)(*plVar18 + 8))();
  cVar13 = (*pcVar8)(uVar16);
  if (cVar13 != '\0') goto LAB_148474d91;
  FUN_14847552c(param_1);
  pcVar8 = *(code **)(param_1 + 0x60);
  plVar18 = *(longlong **)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    plVar18 = plVar19;
  }
  uVar16 = (**(code **)(*plVar18 + 8))();
  cVar13 = (*pcVar8)(uVar16);
  if (cVar13 != '\0') goto LAB_148474d91;
  FUN_1484755c0(param_1);
  pcVar8 = *(code **)(param_1 + 0x60);
  plVar18 = *(longlong **)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    plVar18 = plVar19;
  }
  uVar16 = (**(code **)(*plVar18 + 8))();
  cVar13 = (*pcVar8)(uVar16);
  if (cVar13 != '\0') goto LAB_148474d91;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = *(undefined8 *)(param_1 + 0x30);
  local_120 = *(undefined1 *)(param_1 + 0x50);
  iVar14 = *(int *)(param_1 + 0x18);
  if (iVar14 < 0) {
LAB_148475522:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 == 0) {
LAB_148474e67:
    uStack_140 = 0;
    local_148 = 0;
    local_158 = 0;
    uStack_150 = 0;
  }
  else {
    FUN_14847702e(&local_138);
    iVar14 = *(int *)(param_1 + 0x18);
    local_148 = 0;
    uStack_140 = 0;
    if (iVar14 < 0) goto LAB_148475522;
    if (iVar14 == 0) goto LAB_148474e67;
    FUN_148477084(&local_148);
    iVar14 = *(int *)(param_1 + 0x18);
    local_158 = 0;
    uStack_150 = 0;
    if (iVar14 < 0) goto LAB_148475522;
    if ((iVar14 != 0) && (FUN_1484770da(&local_158), 0 < *(int *)(param_1 + 0x18))) {
      lVar21 = 0;
      lVar20 = 0;
      lVar26 = 0;
      lVar27 = 0;
      do {
        uVar23 = uStack_140;
        lVar22 = *(longlong *)(param_1 + 0x3b0);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,*(undefined4 *)(lVar22 + 0xb8 + lVar21));
        local_d8 = *(longlong *)(lVar22 + 0xb0 + lVar21);
        fVar1 = *(float *)(lVar22 + 0x10 + lVar21);
        fVar2 = *(float *)(lVar22 + 0x98 + lVar21);
        fVar3 = *(float *)(lVar22 + 0x94 + lVar21);
        fVar4 = *(float *)(lVar22 + 0x90 + lVar21);
        lVar25 = (longlong)(int)uStack_140;
        uVar15 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar15);
        if (uStack_140._4_4_ < uVar15) {
          FUN_148477130(&local_148,uVar23 & 0xffffffff);
        }
        uVar23 = uStack_150;
        lVar25 = lVar25 * 0x40;
        *(longlong *)(local_148 + lVar25) = lVar22 + lVar21;
        *(double *)(local_148 + 8 + lVar25) = (double)fVar4;
        *(double *)(local_148 + 0x10 + lVar25) = (double)fVar3;
        *(double *)(local_148 + 0x18 + lVar25) = (double)fVar2;
        *(double *)(local_148 + 0x20 + lVar25) = (double)fVar1;
        *(longlong *)(local_148 + 0x28 + lVar25) = local_d8;
        *(undefined4 *)(local_148 + 0x30 + lVar25) = (undefined4)uStack_d0;
        *(undefined8 *)(local_148 + 0x38 + lVar25) = 0x47efffffe0000000;
        lVar22 = local_148 + lVar20;
        lVar25 = (longlong)(int)uStack_150;
        uVar15 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar15);
        if (uStack_150._4_4_ < uVar15) {
          FUN_1484771b6(&local_158,uVar23 & 0xffffffff);
        }
        uVar23 = uStack_130;
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(local_158 + lVar25 * 0x10) = lVar22;
        *(undefined8 *)(local_158 + 8 + lVar25 * 0x10) = uVar16;
        lVar22 = local_158 + lVar26;
        lVar25 = (longlong)(int)uStack_130;
        uVar15 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar15);
        if (uStack_130._4_4_ < uVar15) {
          FUN_14847723c(&local_138,uVar23 & 0xffffffff);
        }
        *(longlong *)(local_138 + lVar25 * 8) = lVar22;
        lVar27 = lVar27 + 1;
        lVar26 = lVar26 + 0x10;
        lVar20 = lVar20 + 0x40;
        lVar21 = lVar21 + 0x110;
      } while (lVar27 < *(int *)(param_1 + 0x18));
    }
  }
  FUN_146ffcba0(param_1 + 0x1d0,param_1 + 0x60);
  dVar5 = *(double *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x180) = 0x3fdb000000000000;
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x378);
  *(double *)(param_1 + 0x1a0) = *(double *)(param_1 + 0x1a0) + dVar5;
  *(double *)(param_1 + 0x1a8) = *(double *)(param_1 + 0x1a8) + dVar5;
  *(double *)(param_1 + 0x1b0) = *(double *)(param_1 + 0x1b0) + dVar5;
  *(double *)(param_1 + 0x188) = *(double *)(param_1 + 0x188) - dVar5;
  *(double *)(param_1 + 400) = *(double *)(param_1 + 400) - dVar5;
  *(double *)(param_1 + 0x198) = *(double *)(param_1 + 0x198) - dVar5;
  *(undefined8 *)(param_1 + 0x1c8) = 0x300000001;
  pcVar8 = *(code **)(param_1 + 0x60);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar19 = *(longlong **)(param_1 + 0x70);
  }
  uVar16 = (**(code **)(*plVar19 + 8))(plVar19);
  cVar13 = (*pcVar8)(uVar16);
  if (cVar13 == '\0') {
    local_168 = 0;
    uStack_160 = 0;
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x10);
      plVar19 = plVar18 + *(int *)(param_1 + 0x18);
      do {
        lVar20 = *plVar18;
        iVar14 = *(int *)(lVar20 + 0x20);
        iVar17 = *(int *)(lVar20 + 0x24);
        if (0 < iVar14 * 0x200 + iVar17) {
          uVar23 = 0;
          do {
            uVar9 = uStack_160;
            uVar24 = (ulonglong)((uint)uVar23 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar20 + 0x28) + (uVar23 >> 9) * 8)
                                   + uVar24 * 2) - 1U) < 0xfffe) {
              lVar21 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (uVar23 >> 9) * 8);
              dVar5 = *(double *)(lVar21 + uVar24 * 0x18);
              if (((((*(double *)(param_1 + 0x188) <= dVar5) &&
                    (dVar6 = *(double *)(lVar21 + 8 + uVar24 * 0x18),
                    *(double *)(param_1 + 400) <= dVar6)) &&
                   (dVar7 = *(double *)(lVar21 + 0x10 + uVar24 * 0x18),
                   *(double *)(param_1 + 0x198) <= dVar7)) &&
                  ((dVar5 <= *(double *)(param_1 + 0x1a0) && (dVar6 <= *(double *)(param_1 + 0x1a8))
                   ))) && (dVar7 <= *(double *)(param_1 + 0x1b0))) {
                lVar21 = (longlong)(int)uStack_160;
                uVar15 = (int)uStack_160 + 1;
                uStack_160 = CONCAT44(uStack_160._4_4_,uVar15);
                if (uStack_160._4_4_ < uVar15) {
                  FUN_1403e3958(&local_168,uVar9 & 0xffffffff);
                }
                *(double *)(local_168 + lVar21 * 0x18) = dVar5;
                *(double *)(local_168 + 8 + lVar21 * 0x18) = dVar6;
                *(double *)(local_168 + 0x10 + lVar21 * 0x18) = dVar7;
                iVar14 = *(int *)(lVar20 + 0x20);
                iVar17 = *(int *)(lVar20 + 0x24);
              }
            }
            uVar15 = (uint)uVar23 + 1;
            uVar23 = (ulonglong)uVar15;
          } while ((int)uVar15 < iVar14 * 0x200 + iVar17);
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar19);
    }
    local_118 = *(longlong *)(param_1 + 0x140);
    uStack_d0 = *(undefined8 *)(param_1 + 0x148);
    local_108 = *(longlong **)(param_1 + 0x150);
    uStack_c0 = *(undefined8 *)(param_1 + 0x158);
    local_b8 = *(longlong *)(param_1 + 0x160);
    uStack_b0 = *(undefined8 *)(param_1 + 0x168);
    local_a8 = *(undefined8 *)(param_1 + 0x170);
    uStack_a0 = *(undefined8 *)(param_1 + 0x178);
    uVar11 = local_a8;
    uVar12 = uStack_a0;
    local_c8 = local_108;
    uVar10 = uStack_c0;
    local_d8 = local_118;
    uVar16 = uStack_d0;
    *(ulonglong *)(param_1 + 0x170) = CONCAT44(uStack_e4,local_e8);
    *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_dc,uStack_e0);
    *(undefined ***)(param_1 + 0x160) = &PTR_LAB_14aee5400;
    *(longlong **)(param_1 + 0x168) = &local_138;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_fc,uStack_100);
    *(code **)(param_1 + 0x140) = FUN_1484772c2;
    *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_10c,uStack_110);
    uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_f8 = local_b8;
    uStack_f0 = uStack_b0;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    uStack_110 = (undefined4)uStack_d0;
    uStack_10c = uStack_d0._4_4_;
    uStack_d0 = uVar16;
    uStack_c0 = uVar10;
    local_a8 = uVar11;
    uStack_a0 = uVar12;
    if (local_118 != 0) {
      plVar19 = local_108;
      if (local_108 == (longlong *)0x0) {
        plVar19 = &local_f8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    local_178 = local_168;
    local_170 = (int)uStack_160;
    FUN_14295d4ee(param_1 + 0xa0);
    if ((0 < (int)uStack_160) && (*(int *)(param_1 + 0x100) == 0)) {
      FUN_14295d6bc(param_1 + 0xa0);
    }
    local_118 = *(longlong *)(param_1 + 0x140);
    uStack_d0 = *(undefined8 *)(param_1 + 0x148);
    local_108 = *(longlong **)(param_1 + 0x150);
    uStack_c0 = *(undefined8 *)(param_1 + 0x158);
    local_b8 = *(longlong *)(param_1 + 0x160);
    uStack_b0 = *(undefined8 *)(param_1 + 0x168);
    local_a8 = *(undefined8 *)(param_1 + 0x170);
    uStack_a0 = *(undefined8 *)(param_1 + 0x178);
    uVar11 = local_a8;
    uVar12 = uStack_a0;
    local_c8 = local_108;
    uVar10 = uStack_c0;
    local_d8 = local_118;
    uVar16 = uStack_d0;
    *(ulonglong *)(param_1 + 0x170) = CONCAT44(uStack_e4,local_e8);
    *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_dc,uStack_e0);
    *(longlong *)(param_1 + 0x160) = local_f8;
    *(undefined8 *)(param_1 + 0x168) = uStack_f0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_fc,uStack_100);
    *(longlong *)(param_1 + 0x140) = 0;
    *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_10c,uStack_110);
    uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_f8 = local_b8;
    uStack_f0 = uStack_b0;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    uStack_110 = (undefined4)uStack_d0;
    uStack_10c = uStack_d0._4_4_;
    uStack_d0 = uVar16;
    uStack_c0 = uVar10;
    local_a8 = uVar11;
    uStack_a0 = uVar12;
    if (local_118 != 0) {
      plVar19 = &local_f8;
      if (local_108 != (longlong *)0x0) {
        plVar19 = local_108;
      }
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_148474d91:
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847552c FUN_14847552c body=147 status=ok
// SIG undefined FUN_14847552c(void)

void FUN_14847552c(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148475842(param_1 + 0x3a0,*(undefined4 *)(param_1 + 0x18));
  local_28 = &local_40;
  local_38 = 0;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_148475a88;
  local_50 = 0;
  local_40 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x18),1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484755c0 FUN_1484755c0 body=640 status=ok
// SIG undefined FUN_1484755c0(void)

void FUN_1484755c0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14847552c();
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar13 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
LAB_148475839:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  local_a8 = param_1 + 0x3b0;
  if (*(int *)(param_1 + 0x3bc) < (int)uVar4) {
    FUN_148475b34(local_a8);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < 0) goto LAB_148475839;
  }
  if (*(int *)(param_1 + 0x3cc) < (int)uVar13) {
    FUN_140cb0586(param_1 + 0x3c0);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x18);
  }
  if (0 < (int)uVar13) {
    lVar15 = 0;
    lVar14 = 0;
    local_a0 = param_1 + 0x3c0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x3a0);
      lVar7 = *(longlong *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x3b8);
      *(uint *)(param_1 + 0x3b8) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3bc) < iVar5 + 1U) {
        FUN_148475ba4(local_a8,iVar5);
      }
      lVar8 = *(longlong *)(param_1 + 0x3b0);
      dVar3 = *(double *)(param_1 + 0x40);
      lVar12 = (longlong)iVar5 * 0x110;
      *(undefined8 *)(lVar8 + lVar12) = *(undefined8 *)(lVar7 + lVar14 * 8);
      *(longlong *)(lVar8 + 8 + lVar12) = lVar6 + lVar15;
      *(float *)(lVar8 + 0x10 + lVar12) = (float)dVar3;
      uVar11 = DAT_14c8464e8._4_4_;
      uVar10 = (undefined4)DAT_14c8464e8;
      uVar9 = DAT_14c8464e0._4_4_;
      puVar1 = (undefined4 *)(lVar8 + 0x18 + lVar12);
      *puVar1 = (undefined4)DAT_14c8464e0;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      *(undefined8 *)(lVar8 + 0x28 + lVar12) = DAT_14c8464f0;
      *(undefined4 *)(lVar8 + 0x30 + lVar12) = 0;
      *(undefined2 *)(lVar8 + 0x34 + lVar12) = 0x101;
      *(undefined8 *)(lVar8 + 0x38 + lVar12) = 0x100001000;
      *(undefined2 *)(lVar8 + 0x40 + lVar12) = 0;
      *(undefined8 *)(lVar8 + 0x60 + lVar12) = 0;
      *(undefined ***)(lVar8 + 0x70 + lVar12) = &PTR_LAB_149f36510;
      *(undefined1 **)(lVar8 + 0x78 + lVar12) = &LAB_148476218;
      *(code **)(lVar8 + 0x50 + lVar12) = FUN_146bd3274;
      puVar2 = (undefined8 *)(lVar8 + 0xa0 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0xac + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0xcc + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0xc0 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0xe0 + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0xec + lVar12);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar5 = *(int *)(param_1 + 0x3c8);
      *(uint *)(param_1 + 0x3c8) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3cc) < iVar5 + 1U) {
        FUN_144941252(local_a0,iVar5);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar5 * 8) = 0;
      lVar14 = lVar14 + 1;
      uVar13 = (ulonglong)*(int *)(param_1 + 0x18);
      lVar15 = lVar15 + 0xd0;
    } while (lVar14 < (longlong)uVar13);
  }
  local_88 = *(undefined8 *)(param_1 + 0x38);
  local_78 = &local_98;
  local_90 = 0;
  local_b8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = &LAB_148476f7e;
  local_c0 = 0;
  local_98 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uVar13,1);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148475842 FUN_148475842 body=121 status=ok
// SIG undefined FUN_148475842(void)

void FUN_148475842(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484758e6(param_1,iVar1);
    }
    FUN_1484758bc((longlong)iVar1 * 0xd0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14847597a(param_1,param_2,iVar1 - param_2);
    FUN_1484759dc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484758bc FUN_1484758bc body=41 status=ok
// SIG undefined FUN_1484758bc(void)

void FUN_1484758bc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457e37e0(param_1);
    param_1 = param_1 + 0xd0;
  }
  return;
}



// FUNCTION 1484758e6 FUN_1484758e6 body=146 status=ok
// SIG undefined FUN_1484758e6(void)

void FUN_1484758e6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14847597a FUN_14847597a body=98 status=ok
// SIG undefined FUN_14847597a(void)

void FUN_14847597a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xd0 + *param_1);
  FUN_14847486d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xd0 + (longlong)_Dst),(longlong)iVar2 * 0xd0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1484759dc FUN_1484759dc body=62 status=ok
// SIG undefined FUN_1484759dc(void)

void FUN_1484759dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148475a1a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xd0,0x10);
  }
  return;
}



// FUNCTION 148475a1a FUN_148475a1a body=110 status=ok
// SIG undefined FUN_148475a1a(void)

ulonglong FUN_148475a1a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xd0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148475a53;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xd0,0x10);
      param_2 = param_2 / 0xd0;
    }
  }
LAB_148475a53:
  return param_2 & 0xffffffff;
}



// FUNCTION 148475a90 FUN_148475a90 body=164 status=ok
// SIG undefined FUN_148475a90(void)

void FUN_148475a90(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((char)param_1[1] != '\0') {
    lVar3 = (longlong)param_2 * 0xd0;
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3a0) + 8 + lVar3);
    if (((lVar2 == *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_2 * 8)) &&
        (lVar3 = *(longlong *)(lVar1 + 0x3a0) + lVar3, -1 < *(int *)(lVar3 + 0xcc))) &&
       (*(ulonglong *)(lVar3 + 0x10) ==
        (ulonglong)(uint)(*(int *)(lVar2 + 0x214) + *(int *)(lVar2 + 0x218)))) {
      return;
    }
  }
  lVar2 = *(longlong *)(lVar1 + 0x3a0);
  lVar3 = (longlong)param_2 * 0xd0;
  *(undefined8 *)(lVar2 + 8 + lVar3) =
       *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_2 * 8);
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  FUN_146bee918(lVar2 + lVar3,0);
  lVar1 = *(longlong *)(lVar2 + 8 + lVar3);
  *(ulonglong *)(lVar2 + 0x10 + lVar3) =
       (ulonglong)(uint)(*(int *)(lVar1 + 0x214) + *(int *)(lVar1 + 0x218));
  return;
}



// FUNCTION 148475b34 FUN_148475b34 body=111 status=ok
// SIG undefined FUN_148475b34(void)

void FUN_148475b34(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x110,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,0x10);
  }
  return;
}



// FUNCTION 148475ba4 FUN_148475ba4 body=146 status=ok
// SIG undefined FUN_148475ba4(void)

void FUN_148475ba4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148475c38 FUN_148475c38 body=1502 status=ok
// SIG undefined FUN_148475c38(void)

void FUN_148475c38(longlong param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar4 = FUN_14847621c();
  if (cVar4 == '\0') goto LAB_148475cba;
  FUN_146ba0128(*(undefined8 *)(param_1 + 8),&local_110);
  uVar20 = SUB84(local_100,0);
  uVar21 = (undefined4)((ulonglong)local_100 >> 0x20);
  uVar24 = SUB84(local_110,0);
  uVar26 = (undefined4)((ulonglong)local_110 >> 0x20);
  uVar27 = SUB84(local_108,0);
  uVar29 = (undefined4)((ulonglong)local_108 >> 0x20);
  dVar18 = *(double *)(param_1 + 0x28);
  dVar19 = *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x18);
  uVar22 = SUB84(dVar1,0);
  uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar3 = dVar18 + dVar18 + (local_e8 - local_100);
  dVar33 = dVar19 + dVar19 + (local_f0 - local_108);
  dVar1 = dVar1 + dVar1 + (local_f8 - local_110);
  uVar15 = -(ulonglong)(dVar33 <= dVar1);
  dVar1 = (double)(~uVar15 & (ulonglong)dVar33 | (ulonglong)dVar1 & uVar15);
  uVar15 = -(ulonglong)(dVar3 <= dVar1);
  fVar16 = *(float *)(param_1 + 0x30);
  dVar1 = (double)fVar16 * 4.0 + (double)(~uVar15 & (ulonglong)dVar3 | uVar15 & (ulonglong)dVar1);
  fVar17 = *(float *)(param_1 + 0x10);
  dVar3 = (double)(*(int *)(param_1 + 0x38) + -4);
  if (dVar3 < dVar1 / (double)fVar17) {
    fVar16 = (float)(dVar1 / dVar3);
    *(float *)(param_1 + 0x10) = fVar16;
    if (fVar16 <= 0.0) goto LAB_148475cba;
    iVar5 = _finite((double)fVar16);
    if (iVar5 == 0) goto LAB_148475cba;
    fVar16 = *(float *)(param_1 + 0x30);
    fVar17 = *(float *)(param_1 + 0x10);
    uVar20 = SUB84(local_100,0);
    uVar21 = (undefined4)((ulonglong)local_100 >> 0x20);
    uVar24 = SUB84(local_110,0);
    uVar26 = (undefined4)((ulonglong)local_110 >> 0x20);
    uVar27 = SUB84(local_108,0);
    uVar29 = (undefined4)((ulonglong)local_108 >> 0x20);
    dVar18 = *(double *)(param_1 + 0x28);
    dVar19 = *(double *)(param_1 + 0x20);
    uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  }
  fVar30 = fVar16 + fVar16 + fVar17 + fVar17;
  fVar16 = fVar17 * 4.0;
  if (fVar17 * 4.0 <= fVar30) {
    fVar16 = fVar30;
  }
  fVar31 = DAT_14c846358 * fVar16;
  fVar32 = DAT_14c846350._4_4_ * fVar16;
  fVar16 = fVar16 * (float)DAT_14c846350;
  fVar30 = ((float)(double)CONCAT44(uVar21,uVar20) - fVar31) - (float)dVar18;
  fVar28 = ((float)(double)CONCAT44(uVar29,uVar27) - fVar32) - (float)dVar19;
  fVar25 = ((float)(double)CONCAT44(uVar26,uVar24) - fVar16) -
           (float)(double)CONCAT44(uVar23,uVar22);
  *(float *)(param_1 + 0x90) = fVar25;
  *(float *)(param_1 + 0x94) = fVar28;
  *(float *)(param_1 + 0x98) = fVar30;
  iVar6 = (int)((((float)local_f8 + fVar16 + (float)(double)CONCAT44(uVar23,uVar22)) - fVar25) /
               fVar17);
  iVar10 = (int)((((float)local_f0 + fVar32 + (float)dVar19) - fVar28) / fVar17);
  iVar12 = (int)((((float)local_e8 + fVar31 + (float)dVar18) - fVar30) / fVar17);
  iVar5 = iVar6 + 1;
  iVar13 = iVar12 + 1;
  iVar14 = iVar10 + 1;
  fVar17 = (float)(iVar6 + iVar10 + iVar12 + 3) * fVar17;
  *(float *)(param_1 + 0x100) = fVar17;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,fVar17);
  FUN_148476346(&local_130,iVar5,iVar14,iVar13);
  if ((longlong *)(param_1 + 0xa0) == &local_130) {
    *(undefined4 *)(param_1 + 0xb8) = local_118;
    *(undefined8 *)(param_1 + 0xb0) = local_120;
    if (local_130 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xa0) = local_130;
    local_130 = 0;
    *(undefined4 *)(param_1 + 0xa8) = local_128;
    *(undefined4 *)(param_1 + 0xac) = local_124;
    *(undefined8 *)(param_1 + 0xb0) = local_120;
    *(undefined4 *)(param_1 + 0xb8) = local_118;
  }
  *(double *)(param_1 + 0x108) =
       (double)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x10)) * 1.4142135 +
               *(float *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_144a127d2(param_1 + 0xc0,iVar14 * iVar13 * iVar5,1);
    *(int *)(param_1 + 0xd0) = iVar5;
    *(int *)(param_1 + 0xd4) = iVar14;
    *(int *)(param_1 + 0xd8) = iVar13;
    if (0 < *(int *)(param_1 + 200)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + lVar7 * 4) = 0xffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 200));
    }
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    lVar7 = param_1 + 0xe0;
    FUN_144a127d2(lVar7,iVar14 * iVar13 * iVar5,1);
    *(int *)(param_1 + 0xf0) = iVar5;
    *(int *)(param_1 + 0xf4) = iVar14;
    *(int *)(param_1 + 0xf8) = iVar13;
    if (0 < *(int *)(param_1 + 0xe8)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0xe8));
    }
    local_138 = *(undefined4 *)(param_1 + 0x98);
    local_140 = *(undefined8 *)(param_1 + 0x90);
    local_150 = CONCAT44(local_150._4_4_,iVar13);
    local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar14);
    local_148 = lVar7;
    FUN_1484763ac(param_1,&local_140,*(undefined4 *)(param_1 + 0x10),iVar5);
    pcVar2 = *(code **)(param_1 + 0x50);
    plVar11 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x70);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar4 = (*pcVar2)(uVar9);
    if (cVar4 == '\0') {
      local_158 = (longlong *)(param_1 + 0xa0);
      local_150 = lVar7;
      FUN_148476520(param_1,iVar5,iVar14,iVar13);
      pcVar2 = *(code **)(param_1 + 0x50);
      plVar11 = (longlong *)(param_1 + 0x70);
      if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        plVar11 = *(longlong **)(param_1 + 0x60);
      }
      uVar9 = (**(code **)(*plVar11 + 8))(plVar11);
      (*pcVar2)(uVar9);
    }
    if (*(char *)(param_1 + 0x41) == '\0') {
      FUN_144a127d2(lVar7,0,1);
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
LAB_148475cba:
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847621c FUN_14847621c body=297 status=ok
// SIG undefined FUN_14847621c(void)

undefined8 FUN_14847621c(longlong param_1)

{
  double dVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  ulonglong uVar4;
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
  FUN_146ba0128(*(undefined8 *)(param_1 + 8),&local_60);
  if (local_60 <= local_48) {
    if (local_58 <= local_40) {
      if (local_50 <= local_38) {
        dVar1 = (double)(-(ulonglong)(0.0 <= local_38 - local_50) & (ulonglong)(local_38 - local_50)
                        );
        dVar5 = (double)(-(ulonglong)(0.0 <= local_40 - local_58) & (ulonglong)(local_40 - local_58)
                        );
        uVar4 = -(ulonglong)(dVar1 <= dVar5);
        dVar1 = (double)(~uVar4 & (ulonglong)dVar1 | uVar4 & (ulonglong)dVar5);
        dVar5 = (double)(-(ulonglong)(0.0 <= local_48 - local_60) & (ulonglong)(local_48 - local_60)
                        );
        uVar4 = -(ulonglong)(dVar1 <= dVar5);
        iVar2 = _finite((double)(uVar4 & (ulonglong)dVar5 | ~uVar4 & (ulonglong)dVar1));
        if ((iVar2 != 0) && (0.0 < *(float *)(param_1 + 0x10))) {
          iVar2 = _finite((double)*(float *)(param_1 + 0x10));
          if (iVar2 != 0) {
            uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),4 < *(int *)(param_1 + 0x38))
            ;
            goto LAB_148476280;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_148476280:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148476346 FUN_148476346 body=102 status=ok
// SIG undefined FUN_148476346(void)

longlong * FUN_148476346(longlong *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a12820(0,param_3 * param_2 * param_4,1);
  *(int *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  *(int *)(param_1 + 3) = param_4;
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*param_1 + lVar1 * 4) = param_5;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1484763ac FUN_1484763ac body=371 status=ok
// SIG undefined FUN_1484763ac(void)

void FUN_1484763ac(longlong *param_1,float *param_2,float param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  float *local_d8;
  float *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  double *local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  undefined1 *local_88;
  undefined1 local_79;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  float local_58;
  undefined4 local_54;
  undefined1 *local_50;
  longlong **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &local_54;
  local_d0 = &local_58;
  local_60 = (double)*param_2;
  local_a8 = &local_60;
  local_68 = (double)param_2[1];
  local_a0 = &local_68;
  local_70 = (double)param_2[2];
  local_98 = &local_70;
  local_78 = 1.0 / (double)param_3;
  local_90 = &local_78;
  local_88 = &local_79;
  local_79 = 0;
  local_48 = &local_e0;
  local_c0 = (undefined1 *)&param_5;
  local_b8 = (undefined1 *)&param_6;
  local_b0 = param_7;
  local_f0 = *(byte *)((longlong)param_1 + 0x34) ^ 1;
  local_e8 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_148476724;
  local_e0 = param_1;
  local_d8 = param_2;
  local_58 = param_3;
  local_54 = param_4;
  FUN_1427ae281(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148476520 FUN_148476520 body=514 status=ok
// SIG undefined FUN_148476520(void)

void FUN_148476520(longlong param_1,int param_2,int param_3,int param_4,longlong *param_5,
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
  if (*(char *)(param_1 + 0x34) == '\0') {
    if (0 < param_4) {
      local_d0 = (longlong *)(param_1 + 0x70);
      iVar7 = 0;
      do {
        local_c8 = *(code **)(param_1 + 0x50);
        plVar3 = *(longlong **)(param_1 + 0x60);
        if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
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
                if (((*(int *)(param_1 + 0x3c) == 1) && (0 < (int)uVar5)) ||
                   ((*(int *)(param_1 + 0x3c) == 0 && ((uVar5 & 0x80000001) == 1)))) {
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
    local_80 = &LAB_148476e8a;
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



// FUNCTION 14847672c FUN_14847672c body=1328 status=ok
// SIG undefined FUN_14847672c(void)

void FUN_14847672c(longlong *param_1,ulonglong param_2)

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
  
  uVar24 = (uint)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar11 = (longlong *)*param_1;
  if ((uVar24 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar24 * 0x40000000) < 0x28f5c29) {
    pcVar15 = (code *)plVar11[10];
    plVar23 = plVar11 + 0xe;
    if ((longlong *)plVar11[0xc] != (longlong *)0x0) {
      plVar23 = (longlong *)plVar11[0xc];
    }
    uVar21 = (**(code **)(*plVar23 + 8))();
    cVar18 = (*pcVar15)(uVar21);
    if (cVar18 != '\0') {
      *(undefined1 *)param_1[0xb] = 1;
    }
  }
  if (((*(char *)param_1[0xb] == '\0') && (-1 < (int)uVar24)) &&
     (lVar20 = *plVar11, (int)uVar24 < *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144)))
  {
    uVar22 = param_2 >> 9 & 0x7fffff;
    uVar29 = (ulonglong)(uVar24 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar20 + 0x148) + uVar22 * 8) + uVar29 * 2)
                - 1U) < 0xfffe) {
      lVar12 = *(longlong *)(lVar20 + 0x10);
      lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + uVar22 * 8);
      uVar24 = *(uint *)(lVar20 + uVar29 * 0xc);
      uVar10 = *(uint *)(lVar20 + 4 + uVar29 * 0xc);
      lVar13 = *(longlong *)(lVar12 + (ulonglong)(uVar24 >> 9) * 8);
      uVar22 = (ulonglong)uVar24 & 0x1ff;
      dVar2 = *(double *)(lVar13 + 8 + uVar22 * 0x18);
      dVar3 = *(double *)(lVar13 + 0x10 + uVar22 * 0x18);
      lVar14 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
      uVar28 = (ulonglong)uVar10 & 0x1ff;
      dVar4 = *(double *)(lVar14 + 8 + uVar28 * 0x18);
      dVar5 = *(double *)(lVar14 + 0x10 + uVar28 * 0x18);
      uVar24 = *(uint *)(lVar20 + 8 + uVar29 * 0xc);
      lVar20 = *(longlong *)(lVar12 + (ulonglong)(uVar24 >> 9) * 8);
      uVar29 = (ulonglong)uVar24 & 0x1ff;
      dVar6 = *(double *)(lVar20 + 8 + uVar29 * 0x18);
      dVar35 = *(double *)(lVar20 + 0x10 + uVar29 * 0x18);
      local_110 = 0;
      if (*(int *)((longlong)plVar11 + 0x3c) == 1) {
        local_110 = (undefined4)
                    CONCAT71(1,0.0 < (dVar5 - dVar3) * (dVar6 - dVar2) -
                                     (dVar4 - dVar2) * (dVar35 - dVar3));
      }
      dVar7 = *(double *)param_1[10];
      dVar34 = *(double *)param_1[8];
      dVar17 = (dVar2 - dVar34) * dVar7;
      dVar2 = *(double *)param_1[9];
      dVar3 = (dVar3 - dVar2) * dVar7;
      dVar4 = (dVar4 - dVar34) * dVar7;
      dVar5 = (dVar5 - dVar2) * dVar7;
      dVar6 = (dVar6 - dVar34) * dVar7;
      iVar26 = *(int *)param_1[4] + -1;
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
      iVar26 = *(int *)param_1[5] + -1;
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
        dVar9 = *(double *)param_1[7];
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
              cVar18 = FUN_148476c5e((double)iVar27,(double)iVar30,dVar17,dVar3);
              if (cVar18 != '\0') {
                dVar33 = local_108 * (dVar8 - dVar9) * dVar7 +
                         local_f8 * (dVar35 - dVar9) * dVar7 + local_100 * (dVar34 - dVar9) * dVar7;
                iVar19 = (int)ROUND(-0.5 - (dVar33 + dVar33)) >> 1;
                if (iVar19 < 1) {
                  if (-iVar19 < *(int *)param_1[3]) {
                    plVar11 = (longlong *)param_1[6];
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
                  plVar11 = (longlong *)param_1[6];
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
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148476c5e FUN_148476c5e body=556 status=ok
// SIG undefined FUN_148476c5e(void)

undefined8
FUN_148476c5e(double param_1,double param_2,double param_3,double param_4,double param_5,
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
LAB_148476da7:
      iVar1 = -1;
    }
    else if (param_8 <= param_6) {
      if (param_8 < param_6) goto LAB_148476da7;
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
      if (param_8 < param_4) goto LAB_148476d25;
      if ((param_8 <= param_4) && (iVar2 = 1, param_7 <= param_3)) {
        iVar2 = -(uint)(param_7 < param_3);
      }
    }
  }
  else {
LAB_148476d25:
    iVar2 = 1;
  }
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = param_4 * param_5 - param_6 * param_3;
  *param_11 = dVar3;
  if (dVar3 <= 0.0) {
    iVar2 = -1;
    if (dVar3 < 0.0) goto LAB_148476d60;
    if (param_6 <= param_4) {
      if ((param_4 <= param_6) && (iVar2 = 1, param_3 <= param_5)) {
        iVar2 = -(uint)(param_3 < param_5);
      }
      goto LAB_148476d60;
    }
  }
  iVar2 = 1;
LAB_148476d60:
  if (iVar2 != iVar1) {
    return 0;
  }
  dVar3 = dVar3 + *param_10 + *param_9;
  *param_9 = *param_9 / dVar3;
  *param_10 = *param_10 / dVar3;
  *param_11 = *param_11 / dVar3;
  return 1;
}



// FUNCTION 148476e92 FUN_148476e92 body=235 status=ok
// SIG undefined FUN_148476e92(void)

void FUN_148476e92(longlong *param_1,int param_2)

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
  pcVar2 = *(code **)(lVar1 + 0x50);
  plVar6 = (longlong *)(lVar1 + 0x70);
  if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x60);
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
        if (((*(int *)(lVar1 + 0x3c) == 1) && (0 < (int)uVar8)) ||
           ((*(int *)(lVar1 + 0x3c) == 0 && ((uVar8 & 0x80000001) == 1)))) {
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



// FUNCTION 148476f86 FUN_148476f86 body=168 status=ok
// SIG undefined FUN_148476f86(void)

void FUN_148476f86(longlong *param_1,int param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (((char)param_1[1] == '\0') ||
     (*(double *)(*(longlong *)(lVar2 + 0x3c0) + (longlong)param_2 * 8) < (double)param_1[2])) {
    dVar1 = *(double *)(lVar2 + 0x38);
    lVar3 = (longlong)param_2 * 0x110;
    *(float *)(*(longlong *)(lVar2 + 0x3b0) + 0x30 + lVar3) = (float)dVar1;
    *(float *)(*(longlong *)(lVar2 + 0x3b0) + 0x10 + lVar3) = (float)*(double *)(lVar2 + 0x40);
    FUN_146ffcba0(*(longlong *)(lVar2 + 0x3b0) + lVar3 + 0x50,lVar2 + 0x60);
    FUN_148475c38(lVar3 + *(longlong *)(lVar2 + 0x3b0));
    *(double *)(*(longlong *)(lVar2 + 0x3c0) + (longlong)param_2 * 8) = (double)(float)dVar1;
  }
  return;
}



// FUNCTION 14847702e FUN_14847702e body=86 status=ok
// SIG undefined FUN_14847702e(void)

void FUN_14847702e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148477084 FUN_148477084 body=86 status=ok
// SIG undefined FUN_148477084(void)

void FUN_148477084(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 6)) {
    uVar2 = uVar1 >> 6 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1484770da FUN_1484770da body=86 status=ok
// SIG undefined FUN_1484770da(void)

void FUN_1484770da(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148477130 FUN_148477130 body=132 status=ok
// SIG undefined FUN_148477130(void)

void FUN_148477130(longlong param_1,int param_2)

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



// FUNCTION 1484771b6 FUN_1484771b6 body=132 status=ok
// SIG undefined FUN_1484771b6(void)

void FUN_1484771b6(longlong param_1,int param_2)

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



// FUNCTION 14847723c FUN_14847723c body=132 status=ok
// SIG undefined FUN_14847723c(void)

void FUN_14847723c(longlong param_1,int param_2)

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



// FUNCTION 1484772c2 FUN_1484772c2 body=76 status=ok
// SIG undefined FUN_1484772c2(void)

void FUN_1484772c2(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_148477358(*param_1,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847733a FUN_14847733a body=29 status=ok
// SIG undefined FUN_14847733a(void)

undefined8 FUN_14847733a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148477358 FUN_148477358 body=1007 status=ok
// SIG undefined FUN_148477358(void)

void FUN_148477358(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  puVar2 = *(undefined8 **)*param_1;
  local_88 = param_2[2];
  local_98 = *param_2;
  uStack_90 = param_2[1];
  dVar5 = (double)FUN_148477788(*puVar2);
  dVar7 = (double)puVar2[1];
  dVar8 = 0.0;
  if (dVar5 <= dVar7) {
    if (-dVar7 <= dVar5) {
      dVar7 = (dVar5 + dVar7) / (dVar7 + dVar7);
      dVar8 = 1.0 - dVar7 * dVar7;
      dVar8 = dVar8 * dVar8 * dVar8;
    }
    else {
      dVar8 = 1.0;
    }
  }
  if ((char)param_1[3] == '\0') {
    uVar9 = 0x3ff00000;
  }
  else {
    uVar9 = 0xbff00000;
  }
  dVar7 = (double)param_1[2];
  if ((dVar7 == 1.0) && (!NAN(dVar7))) {
    if (1 < (int)uVar1) {
      uVar4 = 1;
      do {
        local_a8 = param_2[2];
        local_b8 = *param_2;
        uStack_b0 = param_2[1];
        FUN_148477788(**(undefined8 **)(*param_1 + uVar4 * 8),&local_b8);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(0);
  }
  if ((dVar7 == 2.0) && (!NAN(dVar7))) {
    dVar8 = dVar8 * dVar8;
    if (1 < (int)uVar1) {
      uVar4 = 1;
      do {
        puVar2 = *(undefined8 **)(*param_1 + uVar4 * 8);
        local_c8 = param_2[2];
        local_d8 = *param_2;
        uStack_d0 = param_2[1];
        dVar6 = (double)FUN_148477788(*puVar2,&local_d8);
        dVar7 = (double)puVar2[1];
        dVar5 = 0.0;
        if ((dVar6 <= dVar7) && (dVar5 = 1.0, -dVar7 <= dVar6)) {
          dVar7 = (dVar6 + dVar7) / (dVar7 + dVar7);
          dVar5 = 1.0 - dVar7 * dVar7;
          dVar5 = dVar5 * dVar5 * dVar5;
        }
        dVar8 = dVar8 + dVar5 * dVar5 * (double)((ulonglong)uVar9 << 0x20);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118,~-(ulonglong)(dVar8 <= 0.0) & (ulonglong)dVar8);
  }
  dVar7 = pow(dVar8,dVar7);
  if (1 < (int)uVar1) {
    uVar4 = 1;
    do {
      puVar2 = *(undefined8 **)(*param_1 + uVar4 * 8);
      local_e8 = param_2[2];
      local_f8 = *param_2;
      uStack_f0 = param_2[1];
      dVar6 = (double)FUN_148477788(*puVar2,&local_f8);
      dVar8 = (double)puVar2[1];
      dVar5 = 0.0;
      if ((dVar6 <= dVar8) && (dVar5 = 1.0, -dVar8 <= dVar6)) {
        dVar8 = (dVar6 + dVar8) / (dVar8 + dVar8);
        dVar5 = 1.0 - dVar8 * dVar8;
        dVar5 = dVar5 * dVar5 * dVar5;
      }
      dVar8 = pow(dVar5,(double)param_1[2]);
      dVar7 = dVar7 + dVar8 * (double)((ulonglong)uVar9 << 0x20);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  pow((double)(~-(ulonglong)(dVar7 <= 0.0) & (ulonglong)dVar7),1.0 / (double)param_1[2]);
  return;
}



// FUNCTION 148477788 FUN_148477788 body=769 status=ok
// SIG undefined FUN_148477788(void)

double FUN_148477788(undefined8 *param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar4 = (double)param_1[4];
  dVar5 = (*param_2 - (double)param_1[1]) / dVar4;
  iVar10 = (int)dVar5;
  if ((-1 < iVar10) && (iVar1 = iVar10 + 1, iVar1 < *(int *)(param_1 + 5))) {
    dVar6 = (param_2[1] - (double)param_1[2]) / dVar4;
    iVar8 = (int)dVar6;
    if ((-1 < iVar8) && (iVar2 = iVar8 + 1, iVar2 < *(int *)((longlong)param_1 + 0x2c))) {
      dVar4 = (param_2[2] - (double)param_1[3]) / dVar4;
      iVar9 = (int)dVar4;
      if ((-1 < iVar9) && (iVar3 = iVar9 + 1, iVar3 < *(int *)(param_1 + 6))) {
        dVar5 = dVar5 - (double)iVar10;
        dVar6 = dVar6 - (double)iVar8;
        dVar4 = dVar4 - (double)iVar9;
        dVar7 = 1.0 - dVar5;
        local_dc = iVar10;
        local_d8 = iVar8;
        local_d4 = iVar9;
        fVar11 = (float)FUN_148477a8a(*param_1);
        local_e8 = iVar1;
        local_e4 = iVar8;
        local_e0 = iVar9;
        fVar12 = (float)FUN_148477a8a(*param_1,&local_e8);
        local_dc = iVar10;
        local_d8 = iVar8;
        local_d4 = iVar3;
        fVar13 = (float)FUN_148477a8a(*param_1,&local_dc);
        local_e8 = iVar1;
        local_e4 = iVar8;
        local_e0 = iVar3;
        fVar14 = (float)FUN_148477a8a(*param_1,&local_e8);
        local_dc = iVar10;
        local_d8 = iVar2;
        local_d4 = iVar9;
        fVar15 = (float)FUN_148477a8a(*param_1,&local_dc);
        local_e8 = iVar1;
        local_e4 = iVar2;
        local_e0 = iVar9;
        fVar16 = (float)FUN_148477a8a(*param_1,&local_e8);
        local_dc = iVar10;
        local_d8 = iVar2;
        local_d4 = iVar3;
        fVar17 = (float)FUN_148477a8a(*param_1,&local_dc);
        local_e8 = iVar1;
        local_e4 = iVar2;
        local_e0 = iVar3;
        fVar18 = (float)FUN_148477a8a(*param_1,&local_e8);
        if ((local_d0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return ((double)fVar17 * dVar7 + (double)fVar18 * dVar5) * dVar4 * dVar6 +
               ((double)fVar15 * dVar7 + (double)fVar16 * dVar5) * (1.0 - dVar4) * dVar6 +
               ((double)fVar13 * dVar7 + (double)fVar14 * dVar5) * (1.0 - dVar6) * dVar4 +
               ((double)fVar11 * dVar7 + (double)fVar12 * dVar5) * (1.0 - dVar4) * (1.0 - dVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_108);
}



// FUNCTION 148477a8a FUN_148477a8a body=578 status=ok
// SIG undefined FUN_148477a8a(void)

float FUN_148477a8a(longlong param_1,int *param_2)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [7];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar4 = *(float *)(*(longlong *)(param_1 + 0xa0) +
                    (longlong)
                    ((*(int *)(param_1 + 0xb4) * param_2[2] + param_2[1]) * *(int *)(param_1 + 0xb0)
                    + *param_2) * 4);
  fVar1 = *(float *)(param_1 + 0x100);
  if ((fVar4 != fVar1) || (NAN(fVar4) || NAN(fVar1))) {
    if ((fVar4 != -fVar1) || (NAN(fVar4) || NAN(-fVar1))) goto LAB_148477b08;
  }
  fVar1 = *(float *)(param_1 + 0x10);
  local_100 = (double)((float)param_2[2] * fVar1 + *(float *)(param_1 + 0x98));
  local_108 = (double)((float)param_2[1] * fVar1 + *(float *)(param_1 + 0x94));
  local_110 = (double)((float)*param_2 * fVar1 + *(float *)(param_1 + 0x90));
  plVar2 = *(longlong **)(param_1 + 8);
  local_f8 = 0;
  local_e8 = 0;
  FUN_146bee698(local_b8,*(undefined8 *)(param_1 + 0x108));
  iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_110,&local_118,local_b8);
  if (local_a8 != 0) {
    if (local_98 == (longlong *)0x0) {
      local_98 = local_88;
    }
    (**(code **)(*local_98 + 0x10))();
  }
  if (iVar3 == -1) {
    fVar4 = fVar4 + 0.0001;
  }
  else {
    if (local_118 < 0.0) {
      local_118 = sqrt(local_118);
    }
    else {
      local_118 = SQRT(local_118);
    }
    fVar4 = (float)(-(uint)(0.0 < fVar4) & 0x3f800000 |
                   ~-(uint)(0.0 < fVar4) & -(uint)(fVar4 < 0.0) & 0xbf800000) * (float)local_118;
  }
  *(float *)(*(longlong *)(param_1 + 0xa0) +
            (((longlong)*(int *)(param_1 + 0xb4) * (longlong)param_2[2] + (longlong)param_2[1]) *
             (longlong)*(int *)(param_1 + 0xb0) + (longlong)*param_2) * 4) = fVar4;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(int *)(*(longlong *)(param_1 + 0xc0) +
            (((longlong)*(int *)(param_1 + 0xd4) * (longlong)param_2[2] + (longlong)param_2[1]) *
             (longlong)*(int *)(param_1 + 0xd0) + (longlong)*param_2) * 4) = iVar3;
  }
LAB_148477b08:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148477cce FUN_148477cce body=129 status=ok
// SIG undefined FUN_148477cce(void)

ulonglong FUN_148477cce(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (((*param_1 == 0) || (lVar1 = param_1[1], lVar1 == 0)) || (*(int *)(lVar1 + 0xcc) < 0)) {
    bVar4 = false;
    uVar3 = 0;
  }
  else {
    bVar4 = *(ulonglong *)(lVar1 + 0x10) ==
            (ulonglong)
            (uint)(*(int *)(*(longlong *)(lVar1 + 8) + 0x214) +
                  *(int *)(*(longlong *)(lVar1 + 8) + 0x218));
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  }
  if ((((double)param_1[3] <= 0.0) || ((double)param_1[4] <= 0.0)) || ((double)param_1[5] <= 0.0)) {
    bVar5 = false;
  }
  else {
    iVar2 = _finite((double)param_1[5]);
    bVar5 = iVar2 != 0;
  }
  return CONCAT71(uVar3,bVar4 & bVar5) & 0xffffffff;
}



// FUNCTION 148477d50 FUN_148477d50 body=410 status=ok
// SIG undefined FUN_148477d50(void)

double FUN_148477d50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (*(int *)(param_1 + 0x200) == 0) {
    dVar11 = 0.0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
    uVar6 = 0;
    if ((uVar3 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
      uVar7 = 1;
      uVar8 = 1;
      if (1 < (int)uVar3) {
        uVar7 = uVar3;
      }
      do {
        uVar6 = uVar7;
        if (uVar7 == uVar8) break;
        uVar9 = uVar8 >> 9;
        uVar4 = uVar8 & 0x1ff;
        uVar6 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar9] +
                                           (ulonglong)uVar4 * 2) - 1U));
    }
    dVar11 = 0.0;
    if (uVar6 != uVar3) {
      do {
        uVar5 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) +
                 (ulonglong)((uVar6 & 0x1ff) << 4));
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar5 >> 9 & 0x7fffff) * 8);
        uVar10 = uVar5 & 0x1ff;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar5 >> 0x29) * 8);
        uVar5 = uVar5 >> 0x20 & 0x1ff;
        dVar14 = *(double *)(lVar1 + 0x10 + uVar10 * 0x18) -
                 *(double *)(lVar2 + 0x10 + uVar5 * 0x18);
        dVar13 = *(double *)(lVar1 + 8 + uVar10 * 0x18) - *(double *)(lVar2 + 8 + uVar5 * 0x18);
        dVar12 = *(double *)(lVar1 + uVar10 * 0x18) - *(double *)(lVar2 + uVar5 * 0x18);
        dVar11 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13) + dVar11;
        uVar7 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar3) {
          uVar7 = uVar3;
        }
        do {
          uVar8 = uVar7;
          if (uVar7 - 1 == uVar6) break;
          uVar6 = uVar6 + 1;
          uVar8 = uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x1d8) +
                                               (ulonglong)(uVar6 >> 9) * 8) +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        uVar6 = uVar8;
      } while (uVar6 != uVar3);
    }
    dVar11 = dVar11 / (double)*(int *)(param_1 + 0x200);
  }
  return dVar11;
}



// FUNCTION 148477eea FUN_148477eea body=1077 status=ok
// SIG undefined FUN_148477eea(void)

ulonglong FUN_148477eea(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  int local_108;
  int local_100;
  longlong local_f8;
  double local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = FUN_1484783e6();
  if (cVar4 != '\0') {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x74);
    iVar7 = iVar5 * 2;
    if (iVar9 <= iVar7) {
      iVar7 = 2;
      if (2 < iVar9 / 2) {
        iVar7 = iVar9 / 2;
      }
      iVar5 = iVar7 + -1;
      *(int *)(param_1 + 0x54) = iVar5;
      iVar7 = iVar7 * 2 + -2;
    }
    dVar16 = *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68) + (param_2[5] - param_2[2]);
    dVar18 = *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0x60) + (param_2[4] - param_2[1]);
    dVar3 = *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x58) + (param_2[3] - *param_2);
    uVar11 = -(ulonglong)(dVar18 <= dVar3);
    dVar3 = (double)(~uVar11 & (ulonglong)dVar18 | (ulonglong)dVar3 & uVar11);
    uVar11 = -(ulonglong)(dVar16 <= dVar3);
    dVar3 = (double)(~uVar11 & (ulonglong)dVar16 | uVar11 & (ulonglong)dVar3);
    fVar12 = *(float *)(param_1 + 0x50);
    if (dVar3 / (double)fVar12 <= (double)(iVar9 - iVar7)) {
LAB_148478050:
      fVar14 = (float)iVar5 * fVar12;
      if ((*(int *)(param_1 + 0x78) == 2) && (fVar14 <= (float)*(double *)(param_1 + 0x80))) {
        fVar14 = (float)*(double *)(param_1 + 0x80);
      }
      fVar19 = DAT_14c846358 * fVar14;
      fVar20 = DAT_14c846350._4_4_ * fVar14;
      fVar14 = fVar14 * (float)DAT_14c846350;
      fVar13 = ((float)param_2[2] - fVar19) - (float)*(double *)(param_1 + 0x68);
      fVar15 = ((float)param_2[1] - fVar20) - (float)*(double *)(param_1 + 0x60);
      fVar17 = ((float)*param_2 - fVar14) - (float)*(double *)(param_1 + 0x58);
      *(float *)(param_1 + 0xe0) = fVar17;
      *(float *)(param_1 + 0xe4) = fVar15;
      *(float *)(param_1 + 0xe8) = fVar13;
      puVar1 = (undefined8 *)(param_1 + 0xe0);
      iVar9 = (int)((((float)param_2[3] + fVar14 + (float)*(double *)(param_1 + 0x58)) - fVar17) /
                   fVar12) + 1;
      iVar7 = (int)((((float)param_2[4] + fVar20 + (float)*(double *)(param_1 + 0x60)) - fVar15) /
                   fVar12) + 1;
      iVar10 = (int)((((float)param_2[5] + fVar19 + (float)*(double *)(param_1 + 0x68)) - fVar13) /
                    fVar12) + 1;
      if (*(int *)(param_1 + 0x78) != 2) {
        local_f8 = param_1 + 0xf0;
        if (*(longlong *)(param_1 + 8) == 0) {
          local_c8 = *(undefined4 *)(param_1 + 0xe8);
          local_d0 = *puVar1;
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar5);
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_148478bb8(param_1,&local_d0,local_d0,iVar9);
        }
        else {
          local_b8 = *(undefined4 *)(param_1 + 0xe8);
          local_c0 = *puVar1;
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar5);
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_14847896a(param_1,&local_c0,local_c0,iVar9);
        }
LAB_148478265:
        if (*(char *)(param_1 + 0x88) == '\x01') {
          local_f0 = (double)(param_1 + 0x150);
          local_f8 = param_1 + 0xf0;
          local_d8 = *(undefined4 *)(param_1 + 0xe8);
          local_e0 = *puVar1;
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_148478e0e(param_1,&local_e0,*(undefined4 *)(param_1 + 0x50),iVar9);
        }
        FUN_148479090(param_1);
        pcVar2 = *(code **)(param_1 + 0xa0);
        plVar8 = (longlong *)(param_1 + 0xc0);
        if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0xb0);
        }
        uVar6 = (**(code **)(*plVar8 + 8))(plVar8);
        uVar11 = (*pcVar2)(uVar6);
        uVar11 = uVar11 ^ 1;
        goto LAB_148478187;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        dVar3 = *(double *)(param_1 + 0x80);
        if ((dVar3 != 0.0) || (NAN(dVar3))) {
          local_f8 = param_1 + 0xf0;
          local_a8 = *(undefined4 *)(param_1 + 0xe8);
          local_b0 = *puVar1;
          local_108 = iVar7;
          local_100 = iVar10;
          local_f0 = dVar3;
          FUN_1484784d0(param_1,&local_b0,fVar12,iVar9);
          goto LAB_148478265;
        }
      }
    }
    else {
      fVar12 = (float)(dVar3 / (double)(iVar9 - iVar7));
      *(float *)(param_1 + 0x50) = fVar12;
      if (0.0 < fVar12) {
        iVar5 = _finite((double)fVar12);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x54);
          fVar12 = *(float *)(param_1 + 0x50);
          goto LAB_148478050;
        }
      }
    }
  }
  uVar11 = 0;
LAB_148478187:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148478320 FUN_148478320 body=194 status=ok
// SIG undefined FUN_148478320(void)

void FUN_148478320(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14847979b(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_14847979b(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_14847936f(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xb0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484783d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484783e6 FUN_1484783e6 body=233 status=ok
// SIG undefined FUN_1484783e6(void)

undefined8 FUN_1484783e6(longlong param_1,double *param_2)

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
          iVar1 != 0)) && (0.0 < *(float *)(param_1 + 0x50))) {
        iVar1 = _finite((double)*(float *)(param_1 + 0x50));
        if (iVar1 != 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),4 < *(int *)(param_1 + 0x74));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1484784d0 FUN_1484784d0 body=1177 status=ok
// SIG undefined FUN_1484784d0(void)

void FUN_1484784d0(longlong *param_1,undefined8 *param_2,float param_3,uint param_4,int param_5,
                  int param_6,int *param_7,double param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_1e8 [40];
  uint local_1c0;
  undefined8 *local_1b8;
  longlong *local_1a8;
  ulonglong local_1a0;
  char local_198;
  undefined7 uStack_197;
  longlong *local_188;
  char *local_180;
  longlong **local_178;
  longlong **local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  longlong *local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined8 uStack_137;
  longlong local_128;
  ulonglong uStack_120;
  longlong *local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  uVar9 = (ulonglong)param_4;
  local_70 = DAT_14c707940 ^ (ulonglong)local_1e8;
  param_7[6] = (int)((float)(int)(param_5 + param_4 + param_6) * param_3);
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  local_1a8 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  FUN_148479620(local_1a8,uVar9,param_5,param_6);
  local_108 = 0;
  uStack_100 = 0;
  FUN_146bd3f9c(&local_108,param_7[1] * *param_7 * param_7[2],1);
  uStack_138 = 0;
  uStack_137 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  uStack_13f = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_110 = &local_108;
  FUN_148479a4c(&local_148,param_4,param_5,param_6);
  uStack_c8 = 0;
  uStack_c7 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  uStack_cf = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_148479a4c(&local_d8,uVar9,param_5,param_6);
  uStack_98 = 0;
  uStack_97 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_148479a4c(&local_a8,param_4,param_5,param_6);
  local_180 = &local_198;
  local_198 = '\0';
  local_f0 = &local_188;
  local_168 = (int *)CONCAT44(param_5,param_4);
  local_160._0_4_ = param_6;
  local_160._4_4_ = (undefined4)*param_2;
  uStack_158._0_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_158._4_4_ = *(undefined4 *)(param_2 + 1);
  local_1c0 = *(byte *)(param_1 + 0xe) ^ 1;
  local_1b8 = &local_e8;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = &LAB_148479ebe;
  local_1a0 = uVar9;
  local_188 = param_1;
  local_178 = &local_d8;
  local_170 = &local_110;
  local_150 = param_3;
  FUN_1427ae281(L"ParallelFor Task",*(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24),1)
  ;
  if (local_198 == '\0') {
    FUN_1484790f8(&local_d8,&local_188);
    iVar8 = (int)local_180;
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = 0;
    do {
      if (iVar8 < 1) break;
      pplVar5 = &local_d8 + (ulonglong)uVar7 * 6;
      uVar7 = 1 - uVar7;
      lVar6 = (longlong)&local_d8 + (ulonglong)(uVar7 * 0x30);
      FUN_14847a448(&local_148,pplVar5);
      FUN_14847a4d8(param_7,pplVar5);
      FUN_14847a5c4(local_1a8,pplVar5);
      *(undefined1 *)((longlong)&uStack_c7 + (ulonglong)(uVar7 * 0x30) + 7) = 0;
      FUN_148479a4c(lVar6,local_1a0,param_5,param_6);
      FUN_148479174(pplVar5,&local_198);
      local_1c0 = *(byte *)(param_1 + 0xe) ^ 1;
      local_178 = &local_110;
      local_168 = param_7;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = &LAB_14847a738;
      local_1b8 = &local_e8;
      local_188 = param_1;
      local_180 = (char *)(((double)param_3 + (double)param_3) * 1.4142135623730951 + param_8);
      local_170 = &local_148;
      local_f0 = &local_188;
      local_160 = lVar6;
      uStack_158 = &local_198;
      FUN_1427ae281(L"ParallelFor Task",iVar8,1,&local_f8);
      FUN_1484790f8(lVar6,&local_188);
      iVar8 = (int)local_180;
      if (local_188 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      pcVar1 = (code *)param_1[0x14];
      plVar4 = (longlong *)param_1[0x16];
      if ((longlong *)param_1[0x16] == (longlong *)0x0) {
        plVar4 = param_1 + 0x18;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3);
      if (CONCAT71(uStack_197,local_198) != 0) {
        FUN_1400020a8();
      }
    } while (cVar2 == '\0');
  }
  lVar6 = 0x50;
  do {
    FUN_148479bf6(*(undefined8 *)((longlong)&local_d8 + lVar6),*(undefined4 *)(&uStack_d0 + lVar6));
    if (*(longlong *)((longlong)&local_d8 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x30;
  } while (lVar6 != -0x10);
  FUN_148479bf6(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_146bd42bb(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)local_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847896a FUN_14847896a body=588 status=ok
// SIG undefined FUN_14847896a(void)

void FUN_14847896a(longlong param_1,undefined8 *param_2,float param_3,int param_4,int param_5,
                  uint param_6,longlong param_7,int param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_178 [32];
  int local_158;
  uint local_150;
  undefined8 *local_148;
  int local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong *local_128;
  undefined1 *local_120;
  longlong local_118;
  longlong *local_110;
  float local_108;
  float local_104;
  double local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [56];
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar5 = (float)(int)(param_5 + param_4 + param_6) * param_3;
  *(float *)(param_7 + 0x18) = fVar5;
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  FUN_148479620(param_1 + 0x120,param_4,param_5,param_6);
  local_b0 = *param_2;
  local_a8 = *(undefined4 *)(param_2 + 1);
  local_140 = param_8;
  local_148 = (undefined8 *)CONCAT44(local_148._4_4_,param_6);
  local_150 = param_5;
  local_158 = param_4;
  FUN_14847b680(param_1,local_a0,&local_b0,param_3);
  local_150 = param_6;
  local_158 = param_5;
  FUN_14847b81c(param_1,local_e8,local_a0,param_4);
  FUN_14847b998(local_e8,&local_f8);
  pcVar1 = *(code **)(param_1 + 0xa0);
  plVar4 = (longlong *)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0xb0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    local_100 = (double)param_3 * 1.4142135623730951 * (double)param_8;
    local_150 = *(byte *)(param_1 + 0x70) ^ 1;
    local_88 = &local_138;
    local_118 = param_7;
    local_148 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_90 = &LAB_14847c60a;
    local_138 = param_1;
    local_130 = param_2;
    local_128 = &local_f8;
    local_120 = local_e8;
    local_110 = local_a0;
    local_108 = param_3;
    local_104 = fVar5;
    FUN_1427ae281(L"ParallelFor Task",local_f0,1);
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_14847ba46(local_e8);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148478bb8 FUN_148478bb8 body=597 status=ok
// SIG undefined FUN_148478bb8(void)

void FUN_148478bb8(longlong param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,longlong param_7,undefined4 param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_188 [32];
  int local_168;
  uint local_160;
  undefined8 *local_158;
  undefined4 local_150;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 *local_128;
  longlong local_120;
  undefined4 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  float local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [56];
  undefined8 local_a0;
  float local_98;
  longlong local_90 [2];
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  fVar5 = (float)param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(float *)(param_7 + 0x18) = (float)(int)(param_5 + param_4 + param_6) * fVar5;
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  FUN_148479620(param_1 + 0x120,param_4,param_5,param_6);
  local_a0 = *(undefined8 *)param_2;
  local_98 = param_2[2];
  local_150 = param_8;
  local_158 = (undefined8 *)CONCAT44(local_158._4_4_,param_6);
  local_160 = param_5;
  local_168 = param_4;
  FUN_14847b680(param_1,local_90,&local_a0,param_3);
  local_160 = param_6;
  local_168 = param_5;
  FUN_14847b81c(param_1,local_d8,local_90,param_4);
  FUN_14847b998(local_d8,&local_e8);
  pcVar1 = *(code **)(param_1 + 0xa0);
  plVar4 = (longlong *)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0xb0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    local_f8 = 1.0 / (double)fVar5;
    local_100 = (double)param_2[2];
    local_108 = (double)param_2[1];
    local_110 = (double)*param_2;
    local_160 = *(byte *)(param_1 + 0x70) ^ 1;
    local_78 = &local_140;
    local_120 = param_7;
    local_118 = param_8;
    local_158 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = &LAB_14847cb76;
    local_140 = param_1;
    local_138 = local_90;
    local_130 = &local_e8;
    local_128 = local_d8;
    local_f0 = fVar5;
    FUN_1427ae281(L"ParallelFor Task",local_e0,1);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_14847ba46(local_d8);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148478e0e FUN_148478e0e body=640 status=ok
// SIG undefined FUN_148478e0e(void)

void FUN_148478e0e(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong *param_7,undefined8 param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  longlong local_80;
  undefined4 local_78;
  undefined1 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_c0 = *(undefined4 *)(param_2 + 1);
    local_c8 = *param_2;
    local_d0 = param_8;
    local_d8 = param_7;
    local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_6);
    local_e8 = CONCAT44(local_e8._4_4_,param_5);
    FUN_14847d272(param_1,&local_c8,param_3);
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar4 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      local_e0 = param_7;
      local_e8 = param_8;
      FUN_14847d436(param_1,param_4,param_5,param_6);
    }
  }
  else {
    FUN_14847d1f6(param_7,&local_80);
    local_a8 = param_7;
    local_a0 = *param_2;
    local_98 = (double)CONCAT44(param_3,*(undefined4 *)(param_2 + 1));
    local_60 = 0;
    local_58 = 0;
    local_70 = &LAB_14847d73e;
    local_e0 = (longlong *)(CONCAT44(local_e0._4_4_,(uint)*(byte *)(param_1 + 0x70)) ^ 1);
    local_d8 = &local_60;
    local_b8 = param_1;
    local_b0 = &local_80;
    local_68 = &local_b8;
    FUN_1427ae281(L"ParallelFor Task",local_78,1);
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar4 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      local_98 = (double)param_3 * 0.5 * 8.0;
      local_b0 = param_7;
      local_a8 = (longlong *)*param_2;
      local_a0 = CONCAT44(param_3,*(undefined4 *)(param_2 + 1));
      local_60 = 0;
      local_58 = 0;
      local_70 = &LAB_14847d8aa;
      local_e0 = (longlong *)(CONCAT44(local_e0._4_4_,(uint)*(byte *)(param_1 + 0x70)) ^ 1);
      local_d8 = &local_60;
      local_b8 = param_1;
      local_90 = local_98;
      local_88 = local_98;
      local_68 = &local_b8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)((longlong)param_7 + 4) * (int)*param_7 * (int)param_7[1],1);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148479090 FUN_148479090 body=103 status=ok
// SIG undefined FUN_148479090(void)

void FUN_148479090(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_148479620(param_1 + 0x120,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130),
                  *(undefined4 *)(param_1 + 0x134));
  }
  if (*(char *)(param_1 + 0x91) != '\0') {
    return;
  }
  FUN_148479620(param_1 + 0x150,*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
                *(undefined4 *)(param_1 + 0x164));
  return;
}



// FUNCTION 1484790f8 FUN_1484790f8 body=124 status=ok
// SIG undefined FUN_1484790f8(void)

longlong * FUN_1484790f8(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_1[1] * *param_1 * param_1[2];
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar4);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14847a3c2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return param_2;
}



// FUNCTION 148479174 FUN_148479174 body=124 status=ok
// SIG undefined FUN_148479174(void)

longlong * FUN_148479174(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_1[1] * *param_1 * param_1[2];
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar4);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14847a6b2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return param_2;
}



// FUNCTION 1484791f0 FUN_1484791f0 body=247 status=ok
// SIG undefined FUN_1484791f0(void)

void FUN_1484791f0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  iVar3 = (((int)uVar6 >> 3) + 1) - (uint)((param_2 & 7) == 0);
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  iVar5 = (((int)uVar6 >> 3) + 1) - (uint)((param_3 & 7) == 0);
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  iVar4 = (((int)uVar6 >> 3) + 1) - (uint)((param_4 & 7) == 0);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar6 = iVar5 * iVar3 * iVar4;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = param_1[0xb];
  FUN_14847936f(*(undefined8 *)(param_1 + 8),param_1[10]);
  param_1[10] = 0;
  if ((iVar3 < 0) && (param_1[0xb] != 0)) {
    FUN_14847939a(plVar1,0);
  }
  FUN_1484792e8(plVar1,uVar6,1);
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        *(undefined8 *)(lVar2 + lVar7) = 0;
        FUN_1400020a8();
      }
      *(int *)(lVar2 + 8 + lVar7) = param_1[6];
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
  }
  return;
}



// FUNCTION 1484792e8 FUN_1484792e8 body=134 status=ok
// SIG undefined FUN_1484792e8(void)

void FUN_1484792e8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148479498(param_1,iVar1);
    }
    FUN_1484793fa((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14847951e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_14847957e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14847936f FUN_14847936f body=43 status=ok
// SIG undefined FUN_14847936f(void)

void FUN_14847936f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14847939a FUN_14847939a body=96 status=ok
// SIG undefined FUN_14847939a(void)

void FUN_14847939a(longlong param_1,int param_2)

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



// FUNCTION 1484793fa FUN_1484793fa body=158 status=ok
// SIG undefined FUN_1484793fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484793fa(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 148479498 FUN_148479498 body=132 status=ok
// SIG undefined FUN_148479498(void)

void FUN_148479498(longlong param_1,int param_2)

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



// FUNCTION 14847951e FUN_14847951e body=95 status=ok
// SIG undefined FUN_14847951e(void)

void FUN_14847951e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14847936f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14847957e FUN_14847957e body=63 status=ok
// SIG undefined FUN_14847957e(void)

void FUN_14847957e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484795be(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1484795be FUN_1484795be body=97 status=ok
// SIG undefined FUN_1484795be(void)

ulonglong FUN_1484795be(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148479620 FUN_148479620 body=243 status=ok
// SIG undefined FUN_148479620(void)

void FUN_148479620(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  iVar3 = (((int)uVar6 >> 3) + 1) - (uint)((param_2 & 7) == 0);
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  iVar5 = (((int)uVar6 >> 3) + 1) - (uint)((param_3 & 7) == 0);
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  iVar4 = (((int)uVar6 >> 3) + 1) - (uint)((param_4 & 7) == 0);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar6 = iVar5 * iVar3 * iVar4;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = param_1[0xb];
  FUN_14847979b(*(undefined8 *)(param_1 + 8),param_1[10]);
  param_1[10] = 0;
  if ((iVar3 < 0) && (param_1[0xb] != 0)) {
    FUN_1484797c6(plVar1,0);
  }
  FUN_148479714(plVar1,uVar6,1);
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        *(undefined8 *)(lVar2 + lVar7) = 0;
        FUN_1400020a8();
      }
      *(int *)(lVar2 + 8 + lVar7) = param_1[6];
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
  }
  return;
}



// FUNCTION 148479714 FUN_148479714 body=134 status=ok
// SIG undefined FUN_148479714(void)

void FUN_148479714(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484798c4(param_1,iVar1);
    }
    FUN_148479826((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14847994a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1484799aa(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14847979b FUN_14847979b body=43 status=ok
// SIG undefined FUN_14847979b(void)

void FUN_14847979b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1484797c6 FUN_1484797c6 body=96 status=ok
// SIG undefined FUN_1484797c6(void)

void FUN_1484797c6(longlong param_1,int param_2)

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



// FUNCTION 148479826 FUN_148479826 body=158 status=ok
// SIG undefined FUN_148479826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148479826(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 1484798c4 FUN_1484798c4 body=132 status=ok
// SIG undefined FUN_1484798c4(void)

void FUN_1484798c4(longlong param_1,int param_2)

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



// FUNCTION 14847994a FUN_14847994a body=95 status=ok
// SIG undefined FUN_14847994a(void)

void FUN_14847994a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14847979b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1484799aa FUN_1484799aa body=63 status=ok
// SIG undefined FUN_1484799aa(void)

void FUN_1484799aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484799ea(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1484799ea FUN_1484799ea body=97 status=ok
// SIG undefined FUN_1484799ea(void)

ulonglong FUN_1484799ea(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148479a4c FUN_148479a4c body=224 status=ok
// SIG undefined FUN_148479a4c(void)

void FUN_148479a4c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  iVar2 = (((int)uVar5 >> 3) + 1) - (uint)((param_2 & 7) == 0);
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  iVar4 = (((int)uVar5 >> 3) + 1) - (uint)((param_3 & 7) == 0);
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  iVar3 = (((int)uVar5 >> 3) + 1) - (uint)((param_4 & 7) == 0);
  *param_1 = iVar2;
  param_1[1] = iVar4;
  param_1[2] = iVar3;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  uVar5 = iVar4 * iVar2 * iVar3;
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = param_1[0xb];
  FUN_148479bf6(*(undefined8 *)(param_1 + 8),param_1[10]);
  param_1[10] = 0;
  if ((iVar2 < 0) && (param_1[0xb] != 0)) {
    FUN_148479c38(plVar1,0);
  }
  FUN_148479b2c(plVar1,uVar5,1);
  if (0 < (int)uVar5) {
    lVar6 = 0;
    do {
      FUN_148479bb4(*plVar1 + lVar6,param_1 + 6);
      lVar6 = lVar6 + 0x10;
    } while ((ulonglong)uVar5 << 4 != lVar6);
  }
  return;
}



// FUNCTION 148479b2c FUN_148479b2c body=134 status=ok
// SIG undefined FUN_148479b2c(void)

void FUN_148479b2c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148479d36(param_1,iVar1);
    }
    FUN_148479c98((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148479dbc(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148479e1c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148479bb4 FUN_148479bb4 body=66 status=ok
// SIG undefined FUN_148479bb4(void)

void FUN_148479bb4(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = 0;
    if (*(longlong *)(lVar1 + 0x808) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  *(undefined1 *)(param_1 + 1) = *param_2;
  return;
}



// FUNCTION 148479bf6 FUN_148479bf6 body=65 status=ok
// SIG undefined FUN_148479bf6(void)

void FUN_148479bf6(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x808) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148479c38 FUN_148479c38 body=96 status=ok
// SIG undefined FUN_148479c38(void)

void FUN_148479c38(longlong param_1,int param_2)

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



// FUNCTION 148479c98 FUN_148479c98 body=158 status=ok
// SIG undefined FUN_148479c98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148479c98(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 148479d36 FUN_148479d36 body=132 status=ok
// SIG undefined FUN_148479d36(void)

void FUN_148479d36(longlong param_1,int param_2)

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



// FUNCTION 148479dbc FUN_148479dbc body=95 status=ok
// SIG undefined FUN_148479dbc(void)

void FUN_148479dbc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_148479bf6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148479e1c FUN_148479e1c body=63 status=ok
// SIG undefined FUN_148479e1c(void)

void FUN_148479e1c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148479e5c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148479e5c FUN_148479e5c body=97 status=ok
// SIG undefined FUN_148479e5c(void)

ulonglong FUN_148479e5c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148479ec6 FUN_148479ec6 body=413 status=ok
// SIG undefined FUN_148479ec6(void)

void FUN_148479ec6(longlong *param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  double dVar19;
  
  uVar14 = (uint)param_2;
  if (-1 < (int)uVar14) {
    plVar5 = (longlong *)*param_1;
    lVar6 = *plVar5;
    if ((int)uVar14 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)) {
      uVar15 = param_2 >> 9 & 0x7fffff;
      uVar18 = (ulonglong)(uVar14 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + uVar15 * 8) + uVar18 * 2)
                  - 1U) < 0xfffe) {
        fVar1 = *(float *)((longlong)param_1 + 0x2c);
        fVar2 = *(float *)(param_1 + 6);
        fVar3 = *(float *)((longlong)param_1 + 0x34);
        fVar4 = *(float *)(param_1 + 7);
        if ((uVar14 * 0x26e978d5 >> 3 | uVar14 * -0x60000000) < 0x418938) {
          pcVar7 = (code *)plVar5[0x14];
          plVar13 = plVar5 + 0x18;
          if ((longlong *)plVar5[0x16] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar5[0x16];
          }
          uVar10 = (**(code **)(*plVar13 + 8))();
          uVar8 = (*pcVar7)(uVar10);
          *(undefined1 *)param_1[1] = uVar8;
        }
        if (*(char *)param_1[1] == '\0') {
          dVar19 = 1.0 / (double)fVar4;
          lVar6 = *(longlong *)(*(longlong *)(*plVar5 + 0x10) + uVar15 * 8);
          iVar9 = (int)((*(double *)(lVar6 + 0x10 + uVar18 * 0x18) - (double)fVar3) * dVar19);
          iVar17 = (int)param_1[5] + -1;
          if (iVar9 < iVar17) {
            iVar17 = iVar9;
          }
          iVar9 = 0;
          if (iVar17 < 1) {
            iVar17 = iVar9;
          }
          iVar11 = (int)((*(double *)(lVar6 + 8 + uVar18 * 0x18) - (double)fVar2) * dVar19);
          iVar16 = *(int *)((longlong)param_1 + 0x24) + -1;
          if (iVar11 < iVar16) {
            iVar16 = iVar11;
          }
          if (iVar16 < 1) {
            iVar16 = iVar9;
          }
          iVar11 = (int)param_1[4] + -1;
          iVar12 = (int)((*(double *)(lVar6 + uVar18 * 0x18) - (double)fVar1) * dVar19);
          if (iVar12 < iVar11) {
            iVar11 = iVar12;
          }
          if (iVar11 < 1) {
            iVar11 = iVar9;
          }
          FUN_14847a064(param_1[2],iVar11,iVar16,iVar17,1,param_1[3]);
        }
      }
    }
  }
  return;
}



// FUNCTION 14847a064 FUN_14847a064 body=220 status=ok
// SIG undefined FUN_14847a064(void)

void FUN_14847a064(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5,
                  undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = param_5;
  iVar2 = param_4 + 7;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  iVar1 = param_3 + 7;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  iVar3 = param_2 + 7;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  local_38 = (iVar3 >> 3) + ((iVar1 >> 3) + (iVar2 >> 3) * param_1[1]) * *param_1;
  local_3c = param_2 % 8 + (param_3 % 8) * 8 + (param_4 % 8) * 0x40;
  local_48 = (longlong)local_38 * 0x28 + *(longlong *)*param_6;
  FUN_14847a142(param_1,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847a142 FUN_14847a142 body=144 status=ok
// SIG undefined FUN_14847a142(void)

void FUN_14847a142(undefined8 param_1,undefined4 *param_2,uint *param_3,char *param_4,
                  LPCRITICAL_SECTION param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  EnterCriticalSection(param_5);
  lVar3 = FUN_14847a1d2(param_1,*param_2);
  uVar1 = *param_3;
  lVar4 = lVar3 + 8;
  if (*(longlong *)(lVar3 + 0x808) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x808);
  }
  uVar5 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  uVar2 = *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4);
  uVar6 = uVar2 | 1 << (uVar1 & 0x1f);
  if (*param_4 == '\0') {
    uVar6 = uVar2 & ~(1 << (uVar1 & 0x1f));
  }
  *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4) = uVar6;
  if (param_5 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_5);
    return;
  }
  return;
}



// FUNCTION 14847a1d2 FUN_14847a1d2 body=151 status=ok
// SIG undefined FUN_14847a1d2(void)

int * FUN_14847a1d2(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
  if (piVar2 == (int *)0x0) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    piVar2 = (int *)FUN_14001cc68(0x818,0x10);
    *piVar2 = param_2;
    piVar2[0x202] = 0;
    piVar2[0x203] = 0;
    piVar2[0x204] = 0;
    piVar2[0x205] = 0x4000;
    FUN_14847a26a(piVar2,plVar3 + 1);
    lVar1 = *plVar3;
    *plVar3 = (longlong)piVar2;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x808) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
      piVar2 = (int *)*plVar3;
    }
  }
  return piVar2;
}



// FUNCTION 14847a26a FUN_14847a26a body=198 status=ok
// SIG undefined FUN_14847a26a(void)

void FUN_14847a26a(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  byte bVar5;
  undefined1 auVar6 [16];
  
  cVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x810) = 0x200;
  if (*(int *)(param_1 + 0x814) + 0x1fU < 0x200) {
    if (*(longlong *)(param_1 + 0x808) != 0) {
      FUN_1446efa72(param_1 + 0x808,0,0,4);
    }
    *(undefined4 *)(param_1 + 0x814) = 0x200;
  }
  pauVar4 = *(undefined1 (**) [16])(param_1 + 0x808);
  if (*(undefined1 (**) [16])(param_1 + 0x808) == (undefined1 (*) [16])0x0) {
    pauVar4 = (undefined1 (*) [16])(param_1 + 8);
  }
  auVar6 = pshufb(ZEXT116((byte)-cVar1),(undefined1  [16])0x0);
  pauVar4[3] = auVar6;
  pauVar4[2] = auVar6;
  pauVar4[1] = auVar6;
  *pauVar4 = auVar6;
  iVar2 = *(int *)(param_1 + 0x810);
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (iVar2 % 0x20 != 0) {
    pauVar4 = (undefined1 (*) [16])(param_1 + 8);
    if (*(undefined1 (**) [16])(param_1 + 0x808) != (undefined1 (*) [16])0x0) {
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0x808);
    }
    bVar5 = -(char)(iVar2 % 0x20);
    *(uint *)(*pauVar4 + (longlong)(iVar3 >> 5) * 4) =
         (uint)(*(int *)(*pauVar4 + (longlong)(iVar3 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f)
    ;
  }
  return;
}



// FUNCTION 14847a330 FUN_14847a330 body=145 status=ok
// SIG undefined FUN_14847a330(void)

void FUN_14847a330(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x201) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,param_4);
  return;
}



// FUNCTION 14847a3c2 FUN_14847a3c2 body=132 status=ok
// SIG undefined FUN_14847a3c2(void)

void FUN_14847a3c2(longlong param_1,int param_2)

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



// FUNCTION 14847a448 FUN_14847a448 body=143 status=ok
// SIG undefined FUN_14847a448(void)

ulonglong FUN_14847a448(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])) &&
     (((*param_1 == *param_2 && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])))) {
    uVar1 = param_1[1] * *param_1 * param_1[2];
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 8) + lVar3) != 0) {
          FUN_14847a1d2(param_1,uVar4 & 0xffffffff);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar1 != uVar4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14847a4d8 FUN_14847a4d8 body=143 status=ok
// SIG undefined FUN_14847a4d8(void)

ulonglong FUN_14847a4d8(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])) &&
     (((*param_1 == *param_2 && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])))) {
    uVar1 = param_1[1] * *param_1 * param_1[2];
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 8) + lVar3) != 0) {
          FUN_14847a568(param_1,uVar4 & 0xffffffff);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar1 != uVar4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14847a568 FUN_14847a568 body=91 status=ok
// SIG undefined FUN_14847a568(void)

void FUN_14847a568(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10) == 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    piVar3 = (int *)FUN_14001cc68(0x804,0x10);
    *piVar3 = param_2;
    iVar2 = (int)plVar5[1];
    lVar4 = 1;
    do {
      piVar1 = piVar3 + lVar4;
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x201);
    *plVar5 = (longlong)piVar3;
  }
  return;
}



// FUNCTION 14847a5c4 FUN_14847a5c4 body=143 status=ok
// SIG undefined FUN_14847a5c4(void)

ulonglong FUN_14847a5c4(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])) &&
     (((*param_1 == *param_2 && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])))) {
    uVar1 = param_1[1] * *param_1 * param_1[2];
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 8) + lVar3) != 0) {
          FUN_14847a654(param_1,uVar4 & 0xffffffff);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar1 != uVar4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14847a654 FUN_14847a654 body=93 status=ok
// SIG undefined FUN_14847a654(void)

void FUN_14847a654(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10) == 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    piVar3 = (int *)FUN_14001cc68(0x804,0x10);
    *piVar3 = param_2;
    iVar2 = (int)plVar5[1];
    lVar4 = 1;
    do {
      piVar1 = piVar3 + lVar4;
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
      piVar1[2] = iVar2;
      piVar1[3] = iVar2;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x201);
    *plVar5 = (longlong)piVar3;
  }
  return;
}



// FUNCTION 14847a6b2 FUN_14847a6b2 body=132 status=ok
// SIG undefined FUN_14847a6b2(void)

void FUN_14847a6b2(longlong param_1,int param_2)

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



// FUNCTION 14847a740 FUN_14847a740 body=1819 status=ok
// SIG undefined FUN_14847a740(void)

void FUN_14847a740(longlong *param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  double dVar19;
  undefined1 auStack_a38 [32];
  undefined1 local_a18;
  longlong local_a10;
  longlong *local_a00;
  longlong *local_9f8;
  int local_9ec;
  longlong local_9e8;
  longlong local_9e0;
  longlong local_9d8;
  longlong local_9d0;
  longlong local_9c8;
  ulonglong local_9c0;
  ulonglong local_9b8;
  ulonglong local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  undefined8 local_988;
  undefined1 *local_980;
  undefined8 local_978;
  undefined4 local_970;
  longlong local_968;
  undefined8 uStack_960;
  undefined8 local_958 [2];
  undefined8 local_948;
  undefined8 local_918 [2];
  undefined8 local_908;
  undefined1 local_8d8 [16];
  longlong local_8c8;
  longlong *local_8b8;
  longlong local_8a8 [7];
  undefined1 local_870 [2048];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a38;
  local_9d8 = *param_1;
  piVar11 = *(int **)(*(longlong *)param_1[6] + (longlong)param_2 * 8);
  iVar5 = *piVar11;
  piVar3 = (int *)param_1[4];
  lVar15 = (longlong)iVar5 * 0x10;
  local_9e0 = *(longlong *)(*(longlong *)(piVar3 + 8) + lVar15);
  local_9e8 = *(longlong *)(*(longlong *)(local_9d8 + 0x140) + lVar15);
  lVar15 = *(longlong *)(*(longlong *)(param_1[3] + 0x20) + lVar15);
  iVar17 = *piVar3;
  local_9c0 = (ulonglong)(uint)(iVar5 / (piVar3[1] * iVar17) << 3);
  local_9b8 = (ulonglong)
              (uint)((int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)iVar5 / (longlong)iVar17) >> 0x1f) <<
                            0x20 | (longlong)iVar5 / (longlong)iVar17 & 0xffffffffU) %
                          (longlong)piVar3[1]) << 3);
  local_9b0 = (ulonglong)(uint)(iVar5 % iVar17 << 3);
  piVar11 = piVar11 + 2;
  local_70 = 0;
  uStack_68 = 0;
  local_9f8 = param_1;
  FUN_14847ae5c(local_870,piVar11);
  local_9d0 = lVar15 + 8;
  local_9c8 = lVar15;
  FUN_14847af66(local_9d0,local_870,4,local_8d8);
  FUN_14847b3b4(piVar11,local_870,4,local_8d8);
  local_968 = 0;
  uStack_960 = 0;
  local_988 = 2.12199579096527e-314;
  local_978 = 2.12199579047121e-314;
  local_970 = 0;
  local_980 = local_870;
  if ((int)uStack_68 != 0) {
    FUN_14847b5ce(&local_988);
    if ((int)local_978._4_4_ < *(int *)(local_980 + 0x808)) {
      uVar9 = local_978._4_4_;
      do {
        uVar16 = uVar9 + 7;
        uVar18 = uVar9 + 0x3f;
        if (-1 < (int)uVar9) {
          uVar16 = uVar9;
          uVar18 = uVar9;
        }
        uVar4 = uVar9 + 0x1f;
        if (-1 < (int)uVar9) {
          uVar4 = uVar9;
        }
        lVar15 = *(longlong *)(local_9c8 + 0x808);
        if (*(longlong *)(local_9c8 + 0x808) == 0) {
          lVar15 = local_9d0;
        }
        puVar1 = (uint *)(lVar15 + (longlong)((int)uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
        iVar17 = ((int)uVar16 >> 3) % 8;
        fVar2 = *(float *)(local_9d8 + 0x50);
        local_990 = (double)((float)((int)local_9c0 + ((int)uVar18 >> 6)) * fVar2 +
                            *(float *)(local_9d8 + 0xe8));
        local_998 = (double)((float)(iVar17 + (int)local_9b8) * fVar2 + *(float *)(local_9d8 + 0xe4)
                            );
        local_9a0 = (double)((float)((int)uVar9 % 8 + (int)local_9b0) * fVar2 +
                            *(float *)(local_9d8 + 0xe0));
        plVar7 = *(longlong **)(local_9d8 + 8);
        local_918[0] = 0;
        local_908 = 0;
        FUN_146bee698(local_8d8,local_9f8[1],local_918);
        iVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_9a0,&local_9a8,local_8d8);
        if (local_8c8 != 0) {
          plVar7 = local_8b8;
          if (local_8b8 == (longlong *)0x0) {
            plVar7 = local_8a8;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (iVar5 != -1) {
          if (local_9a8 < 0.0) {
            dVar19 = sqrt(local_9a8);
          }
          else {
            dVar19 = SQRT(local_9a8);
          }
          uVar6 = uStack_960;
          *(float *)(local_9e0 + 4 + (ulonglong)uVar9 * 4) = (float)dVar19;
          *(int *)(local_9e8 + 4 + (ulonglong)uVar9 * 4) = iVar5;
          lVar15 = (longlong)(int)(uint)uStack_960;
          uVar16 = (uint)uStack_960 + 1;
          uStack_960 = CONCAT44(uStack_960._4_4_,uVar16);
          if (uStack_960._4_4_ < uVar16) {
            FUN_146bd546c(&local_968,uVar6 & 0xffffffff);
          }
          *(int *)(local_968 + lVar15 * 0xc) = (int)uVar9 % 8;
          *(int *)(local_968 + 4 + lVar15 * 0xc) = iVar17;
          *(int *)(local_968 + 8 + lVar15 * 0xc) = (int)uVar18 >> 6;
        }
        local_978 = (double)CONCAT44(local_978._4_4_,(uint)local_978 & ~local_988._4_4_);
        FUN_14847b5ce(&local_988);
        uVar9 = local_978._4_4_;
      } while ((int)local_978._4_4_ < *(int *)(local_980 + 0x808));
    }
  }
  while (0 < (int)(uint)uStack_960) {
    uVar6 = (ulonglong)(uint)uStack_960;
    local_9ec = *(int *)(local_968 + -0xc + uVar6 * 0xc);
    iVar5 = *(int *)(local_968 + -8 + uVar6 * 0xc);
    iVar17 = *(int *)(local_968 + -4 + uVar6 * 0xc);
    uStack_960._4_4_ = (uint)(uStack_960 >> 0x20);
    uStack_960 = CONCAT44(uStack_960._4_4_,(uint)uStack_960 - 1);
    lVar15 = 8;
    do {
      uVar9 = *(int *)((longlong)&DAT_149f3c870 + lVar15) + iVar17;
      uVar16 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar15 + 4) + iVar5;
      uVar18 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar15) + local_9ec;
      iVar14 = uVar9 + (int)local_9c0;
      iVar13 = uVar16 + (int)local_9b8;
      iVar8 = uVar18 + (int)local_9b0;
      if ((((int)uVar18 < 0) || ((int)uVar16 < 0)) || (7 < uVar9 || (7 < uVar16 || 7 < uVar18))) {
        if ((((-1 < iVar8) && (-1 < iVar13)) &&
            ((-1 < iVar14 &&
             ((lVar12 = local_9f8[5], iVar8 < *(int *)(lVar12 + 0xc) &&
              (iVar13 < *(int *)(lVar12 + 0x10))))))) && (iVar14 < *(int *)(lVar12 + 0x14))) {
          local_a10 = local_9f8[2];
          local_a18 = 1;
          FUN_14847a064();
        }
      }
      else {
        uVar4 = uVar9 * 0x40 + uVar16 * 8;
        uVar10 = uVar4 | uVar18;
        lVar12 = *(longlong *)(local_9c8 + 0x808);
        if (*(longlong *)(local_9c8 + 0x808) == 0) {
          lVar12 = local_9d0;
        }
        uVar6 = (ulonglong)(uVar4 >> 5);
        uVar4 = *(uint *)(lVar12 + uVar6 * 4);
        if ((uVar4 >> (uVar10 & 0x1f) & 1) == 0) {
          *(uint *)(lVar12 + uVar6 * 4) = uVar4 | 1 << ((byte)uVar10 & 0x1f);
          fVar2 = *(float *)(local_9d8 + 0x50);
          local_978 = (double)((float)iVar14 * fVar2 + *(float *)(local_9d8 + 0xe8));
          local_980 = (undefined1 *)(double)((float)iVar13 * fVar2 + *(float *)(local_9d8 + 0xe4));
          local_988 = (double)((float)iVar8 * fVar2 + *(float *)(local_9d8 + 0xe0));
          local_a00 = *(longlong **)(local_9d8 + 8);
          local_958[0] = 0;
          local_948 = 0;
          FUN_146bee698(local_8d8,local_9f8[1],local_958);
          iVar8 = (**(code **)(*local_a00 + 0x20))(local_a00,&local_988,&local_9a0,local_8d8);
          local_a00 = (longlong *)CONCAT44(local_a00._4_4_,iVar8);
          if (local_8c8 != 0) {
            plVar7 = local_8b8;
            if (local_8b8 == (longlong *)0x0) {
              plVar7 = local_8a8;
            }
            (**(code **)(*plVar7 + 0x10))();
            iVar8 = (int)local_a00;
          }
          if (iVar8 != -1) {
            if (local_9a0 < 0.0) {
              dVar19 = sqrt(local_9a0);
              iVar8 = (int)local_a00;
            }
            else {
              dVar19 = SQRT(local_9a0);
            }
            uVar6 = uStack_960;
            *(float *)(local_9e0 + 4 + (ulonglong)uVar10 * 4) = (float)dVar19;
            *(int *)(local_9e8 + 4 + (ulonglong)uVar10 * 4) = iVar8;
            lVar12 = (longlong)(int)(uint)uStack_960;
            uVar4 = (uint)uStack_960 + 1;
            uStack_960 = CONCAT44(uStack_960._4_4_,uVar4);
            if (uStack_960._4_4_ < uVar4) {
              FUN_146bd546c(&local_968,uVar6 & 0xffffffff);
            }
            *(uint *)(local_968 + lVar12 * 0xc) = uVar18;
            *(uint *)(local_968 + 4 + lVar12 * 0xc) = uVar16;
            *(uint *)(local_968 + 8 + lVar12 * 0xc) = uVar9;
          }
        }
      }
      lVar15 = lVar15 + 0xc;
    } while (lVar15 != 0x140);
  }
  if (local_968 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847ae5c FUN_14847ae5c body=161 status=ok
// SIG undefined FUN_14847ae5c(void)

void FUN_14847ae5c(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  uVar2 = *(int *)((longlong)param_2 + 0x808) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x808) = 0;
  if ((*(int *)((longlong)param_1 + 0x80c) < (int)uVar2) ||
     (0x4000 < *(int *)((longlong)param_1 + 0x80c))) {
    uVar3 = 0x4000;
    if (0x4000 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x80c) = uVar3;
    FUN_14847aefe(param_1,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x808);
  *(int *)((longlong)param_1 + 0x808) = iVar1;
  if (iVar1 != 0) {
    _Src = *(void **)((longlong)param_2 + 0x800);
    if (*(void **)((longlong)param_2 + 0x800) == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x800);
    if (*(void **)((longlong)param_1 + 0x800) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 14847aefe FUN_14847aefe body=104 status=ok
// SIG undefined FUN_14847aefe(void)

void FUN_14847aefe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_14847a330(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x80c) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x808);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x800);
    if (*(longlong *)(param_1 + 0x800) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 14847af66 FUN_14847af66 body=542 status=ok
// SIG undefined FUN_14847af66(void)

void FUN_14847af66(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = *(int *)(param_2 + 0x808);
  if ((param_3 & 2) == 0) {
    iVar14 = iVar7;
    if (((param_3 & 1) != 0) &&
       (iVar14 = *(int *)(param_1 + 0x808), *(int *)(param_1 + 0x808) < iVar7)) {
      iVar14 = iVar7;
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x808);
    if (iVar7 <= *(int *)(param_1 + 0x808)) {
      iVar14 = iVar7;
    }
  }
  iVar7 = iVar14 - iVar7;
  if (iVar7 < 0) {
    *(int *)(param_2 + 0x808) = iVar14;
    iVar7 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar7 = iVar14;
    }
    if (iVar14 % 0x20 == 0) goto LAB_14847afca;
    lVar3 = *(longlong *)(param_2 + 0x800);
    if (*(longlong *)(param_2 + 0x800) == 0) {
      lVar3 = param_2;
    }
    bVar4 = -(char)(iVar14 % 0x20);
    *(uint *)(lVar3 + (longlong)(iVar7 >> 5) * 4) =
         (uint)(*(int *)(lVar3 + (longlong)(iVar7 >> 5) * 4) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  else if (iVar7 != 0) {
    uVar2 = FUN_14847b184(param_2,iVar7);
    FUN_14847b230(param_2,uVar2,iVar7,(param_3 & 0x10) >> 4);
  }
  iVar14 = *(int *)(param_2 + 0x808);
LAB_14847afca:
  if (iVar14 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x800);
    if (*(longlong *)(param_1 + 0x800) == 0) {
      lVar3 = param_1;
    }
    iVar7 = *(int *)(param_1 + 0x808);
    uVar5 = 0xffffffff >> (-(char)(iVar7 % 0x20) & 0x1fU);
    if (iVar7 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    lVar10 = *(longlong *)(param_2 + 0x800);
    if (*(longlong *)(param_2 + 0x800) == 0) {
      lVar10 = param_2;
    }
    uVar1 = 0xffffffff >> (-(char)(iVar14 % 0x20) & 0x1fU);
    if (iVar14 % 0x20 < 1) {
      uVar1 = 0xffffffff;
    }
    if (0 < iVar14) {
      uVar11 = iVar14 + 0x1fU >> 5;
      iVar14 = iVar7 + 0x3e;
      if (-1 < iVar7 + 0x1f) {
        iVar14 = iVar7 + 0x1f;
      }
      uVar6 = 0;
      uVar8 = -(uint)(uVar11 - 1 != 0) | uVar1;
      uVar12 = 0xffffffff;
      if (iVar7 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      do {
        uVar13 = (int)(param_3 << 0x1b) >> 0x1f;
        if (((longlong)uVar6 < (longlong)(iVar14 >> 5)) &&
           (uVar13 = *(uint *)(lVar3 + uVar6 * 4), uVar12 != 0xffffffff)) {
          if ((int)(param_3 << 0x1b) < 0) {
            uVar13 = uVar13 | ~uVar12;
          }
          else {
            uVar13 = uVar13 & uVar12;
          }
        }
        uVar9 = uVar8 & *(uint *)(lVar10 + uVar6 * 4);
        uVar12 = 0xffffffff;
        if (uVar11 - 1 == uVar6) {
          uVar12 = uVar1;
        }
        uVar8 = 0xffffffff;
        if (uVar11 - 2 == uVar6) {
          uVar8 = uVar1;
        }
        *(uint *)(lVar10 + uVar6 * 4) = uVar12 & (uVar9 ^ uVar13);
        bVar15 = (iVar14 >> 5) - 2 == uVar6;
        uVar6 = uVar6 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
      } while (uVar11 != uVar6);
    }
  }
  return;
}



// FUNCTION 14847b184 FUN_14847b184 body=171 status=ok
// SIG undefined FUN_14847b184(void)

int FUN_14847b184(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x808);
  if (0 < param_2) {
    if (iVar1 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    iVar5 = iVar1 + param_2 + -1;
    iVar8 = iVar1 + param_2 + 0x1e;
    if (-1 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar8 >> 5 == iVar3) {
      *(int *)(param_1 + 0x808) = iVar1 + param_2;
    }
    else {
      FUN_14847b328(param_1);
      uVar6 = *(int *)(param_1 + 0x808) + param_2;
      uVar2 = *(int *)(param_1 + 0x808) + param_2 + 0x1f;
      if (-1 < (int)uVar6) {
        uVar2 = uVar6;
      }
      *(uint *)(param_1 + 0x808) = uVar6;
      iVar3 = uVar6 - (uVar2 & 0xffffffe0);
      if (iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar7 = param_1;
        }
        bVar4 = -(char)iVar3;
        *(uint *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
  }
  return iVar1;
}



// FUNCTION 14847b230 FUN_14847b230 body=248 status=ok
// SIG undefined FUN_14847b230(void)

void FUN_14847b230(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  uint *_Dst;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    iVar7 = (int)param_2;
    iVar1 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar1 = iVar7;
    }
    uVar4 = iVar1 >> 5;
    uVar5 = (ulonglong)uVar4;
    iVar1 = param_3 + iVar7 + 0x1f;
    iVar7 = param_3 + iVar7 + 0x3e;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    uVar6 = -1 << ((byte)param_2 & 0x1f);
    uVar3 = 0xffffffff >> (-((char)param_3 + (byte)param_2) & 0x1f);
    iVar1 = (iVar7 >> 5) - uVar4;
    lVar2 = *(longlong *)(param_1 + 0x800);
    if (*(longlong *)(param_1 + 0x800) == 0) {
      lVar2 = param_1;
    }
    _Dst = (uint *)(lVar2 + uVar5 * 4);
    if (param_4 == '\0') {
      if (iVar1 == 1) {
        uVar3 = uVar3 & uVar6;
      }
      else {
        *_Dst = *_Dst & ~uVar6;
        _Dst = _Dst + 1;
        if (iVar1 != 2) {
          memset(_Dst,0,(ulonglong)(iVar1 - 3) * 4 + 4);
          _Dst = (uint *)(lVar2 + (uVar5 + (iVar1 - 3)) * 4 + 8);
        }
      }
      *_Dst = *_Dst & ~uVar3;
    }
    else {
      if (iVar1 == 1) {
        uVar3 = uVar3 & uVar6;
      }
      else {
        *_Dst = *_Dst | uVar6;
        _Dst = _Dst + 1;
        if (iVar1 != 2) {
          uVar8 = (ulonglong)(((iVar7 >> 5) - uVar4) - 3);
          memset(_Dst,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),uVar8 * 4 + 4);
          _Dst = (uint *)(lVar2 + (uVar8 + uVar5) * 4 + 8);
        }
      }
      *_Dst = *_Dst | uVar3;
    }
  }
  return;
}



// FUNCTION 14847b328 FUN_14847b328 body=140 status=ok
// SIG undefined FUN_14847b328(void)

void FUN_14847b328(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x80c) < param_2) {
    iVar4 = 0x4000;
    if (0x401f < param_2 + 0x1fU) {
      uVar5 = param_2 + 0x1fU >> 5;
      if (*(int *)(param_1 + 0x80c) + 0x1fU < 0x4020) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
      }
      uVar2 = FUN_144a3809e(uVar3 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar4 = -0x20;
      if ((int)uVar5 <= iVar1) {
        iVar4 = iVar1 << 5;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar4;
    FUN_14847aefe(param_1,*(undefined4 *)(param_1 + 0x808));
    return;
  }
  return;
}



// FUNCTION 14847b3b4 FUN_14847b3b4 body=538 status=ok
// SIG undefined FUN_14847b3b4(void)

void FUN_14847b3b4(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  iVar8 = *(int *)(param_2 + 0x808);
  if ((param_3 & 2) == 0) {
    iVar14 = iVar8;
    if (((param_3 & 1) != 0) &&
       (iVar14 = *(int *)(param_1 + 0x808), *(int *)(param_1 + 0x808) < iVar8)) {
      iVar14 = iVar8;
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x808);
    if (iVar8 <= *(int *)(param_1 + 0x808)) {
      iVar14 = iVar8;
    }
  }
  iVar8 = iVar14 - iVar8;
  if (iVar8 < 0) {
    *(int *)(param_2 + 0x808) = iVar14;
    iVar8 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar8 = iVar14;
    }
    if (iVar14 % 0x20 == 0) goto LAB_14847b418;
    lVar4 = *(longlong *)(param_2 + 0x800);
    if (*(longlong *)(param_2 + 0x800) == 0) {
      lVar4 = param_2;
    }
    bVar5 = -(char)(iVar14 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar8 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar8 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  else if (iVar8 != 0) {
    uVar3 = FUN_14847b184(param_2,iVar8);
    FUN_14847b230(param_2,uVar3,iVar8,(param_3 & 0x10) >> 4);
  }
  iVar14 = *(int *)(param_2 + 0x808);
LAB_14847b418:
  if (iVar14 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x800);
    if (*(longlong *)(param_1 + 0x800) == 0) {
      lVar4 = param_1;
    }
    iVar8 = *(int *)(param_1 + 0x808);
    uVar6 = 0xffffffff >> (-(char)(iVar8 % 0x20) & 0x1fU);
    if (iVar8 % 0x20 < 1) {
      uVar6 = 0xffffffff;
    }
    lVar10 = *(longlong *)(param_2 + 0x800);
    if (*(longlong *)(param_2 + 0x800) == 0) {
      lVar10 = param_2;
    }
    uVar2 = 0xffffffff >> (-(char)(iVar14 % 0x20) & 0x1fU);
    if (iVar14 % 0x20 < 1) {
      uVar2 = 0xffffffff;
    }
    if (0 < iVar14) {
      uVar11 = iVar14 + 0x1fU >> 5;
      iVar14 = iVar8 + 0x3e;
      if (-1 < iVar8 + 0x1f) {
        iVar14 = iVar8 + 0x1f;
      }
      uVar7 = 0;
      uVar9 = -(uint)(uVar11 - 1 != 0) | uVar2;
      uVar12 = 0xffffffff;
      if (iVar8 - 1U < 0x20) {
        uVar12 = uVar6;
      }
      do {
        uVar13 = (int)(param_3 << 0x1b) >> 0x1f;
        if (((longlong)uVar7 < (longlong)(iVar14 >> 5)) &&
           (uVar13 = *(uint *)(lVar4 + uVar7 * 4), uVar12 != 0xffffffff)) {
          if ((int)(param_3 << 0x1b) < 0) {
            uVar13 = uVar13 | ~uVar12;
          }
          else {
            uVar13 = uVar13 & uVar12;
          }
        }
        uVar12 = 0xffffffff;
        if (uVar11 - 1 == uVar7) {
          uVar12 = uVar2;
        }
        puVar1 = (uint *)(lVar10 + uVar7 * 4);
        *puVar1 = *puVar1 & uVar9 & uVar13 & uVar12;
        uVar9 = 0xffffffff;
        if (uVar11 - 2 == uVar7) {
          uVar9 = uVar2;
        }
        bVar15 = (iVar14 >> 5) - 2 == uVar7;
        uVar7 = uVar7 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar6;
        }
      } while (uVar11 != uVar7);
    }
  }
  return;
}



// FUNCTION 14847b5ce FUN_14847b5ce body=177 status=ok
// SIG undefined FUN_14847b5ce(void)

void FUN_14847b5ce(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x800);
  if (*(longlong *)(lVar9 + 0x800) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x808);
  iVar3 = *param_1;
  lVar9 = (longlong)iVar3;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar4 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar3) {
      iVar7 = iVar3;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar3 + 1 + (int)lVar10;
      iVar4 = iVar4 + 0x20;
      param_1[6] = iVar4;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar4 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar3 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  param_1[5] = iVar3;
  return;
}



// FUNCTION 14847b680 FUN_14847b680 body=410 status=ok
// SIG undefined FUN_14847b680(void)

undefined8 *
FUN_14847b680(longlong *param_1,undefined8 *param_2,float *param_3,float param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong **local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 *local_a0;
  longlong **local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14847ba82(param_2,*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144));
  local_e8 = &local_d8;
  local_d0 = param_8;
  local_cc = param_5;
  local_c8 = param_6;
  local_c4 = param_7;
  local_98 = &local_f0;
  local_f8 = &local_90;
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14847bc66;
  local_100 = 0;
  local_f0 = param_1;
  local_e0 = param_2;
  local_d8 = param_1;
  local_c0 = 1.0 / (double)param_4;
  local_b8 = (double)fVar3;
  local_b0 = (double)fVar2;
  local_a8 = (double)fVar1;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1);
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847b81c FUN_14847b81c body=379 status=ok
// SIG undefined FUN_14847b81c(void)

undefined8
FUN_14847b81c(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_f8 [40];
  uint local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [24];
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_69 = 0;
  local_b8 = CONCAT44(param_5,param_4);
  local_b0 = CONCAT44(local_b0._4_4_,param_6);
  FUN_14847bf64(local_98,&local_b8,*(undefined1 *)(param_1 + 0x70));
  local_d0 = *(byte *)(param_1 + 0x70) ^ 1;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_14847c274;
  local_c8 = &local_58;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = local_98;
  local_a0 = &local_69;
  local_60 = &local_b8;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1,&local_68);
  FUN_14847c086(param_2,local_98,*(undefined1 *)(param_1 + 0x70));
  local_d0 = *(byte *)(param_1 + 0x70) ^ 1;
  local_a0 = &local_69;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_14847c458;
  local_c8 = &local_58;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = (undefined1 *)param_2;
  local_60 = &local_b8;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1,&local_68);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847b998 FUN_14847b998 body=173 status=ok
// SIG undefined FUN_14847b998(void)

longlong * FUN_14847b998(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x30);
  if (lVar3 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = (iVar1 + 1) - (uint)(*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar2) == 0);
      lVar2 = lVar2 + 0x10;
    } while (lVar3 << 4 != lVar2);
    *param_2 = 0;
    param_2[1] = 0;
    if (iVar1 != 0) {
      FUN_14481578e(param_2);
    }
    lVar4 = 8;
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar4) != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)lVar2;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar2);
  }
  return param_2;
}



// FUNCTION 14847ba46 FUN_14847ba46 body=60 status=ok
// SIG undefined FUN_14847ba46(void)

void FUN_14847ba46(longlong param_1)

{
  FUN_144716727(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14847ba82 FUN_14847ba82 body=153 status=ok
// SIG undefined FUN_14847ba82(void)

void FUN_14847ba82(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14847bb1c(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x7fffffff7fffffff;
      puVar2[1] = 0x800000007fffffff;
      puVar2[2] = 0x8000000080000000;
      puVar2 = puVar2 + 3;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14847bbb0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14847bb1c FUN_14847bb1c body=147 status=ok
// SIG undefined FUN_14847bb1c(void)

void FUN_14847bb1c(longlong param_1,int param_2)

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



// FUNCTION 14847bbb0 FUN_14847bbb0 body=63 status=ok
// SIG undefined FUN_14847bbb0(void)

void FUN_14847bbb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14847bbf0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 14847bbf0 FUN_14847bbf0 body=117 status=ok
// SIG undefined FUN_14847bbf0(void)

ulonglong FUN_14847bbf0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14847bce0 FUN_14847bce0 body=644 status=ok
// SIG undefined FUN_14847bce0(void)

void FUN_14847bce0(undefined8 *param_1,uint param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar7 = *(longlong *)(*(longlong *)*param_1 + 0x10);
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar14 = (ulonglong)(param_2 & 0x1ff);
  uVar5 = *(uint *)(lVar8 + uVar14 * 0xc);
  uVar6 = *(uint *)(lVar8 + 4 + uVar14 * 0xc);
  lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar17 = (ulonglong)uVar5 & 0x1ff;
  lVar10 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar15 = (ulonglong)uVar6 & 0x1ff;
  uVar5 = *(uint *)(lVar8 + 8 + uVar14 * 0xc);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar14 = (ulonglong)uVar5 & 0x1ff;
  dVar1 = (double)param_1[6];
  dVar2 = (double)param_1[5];
  dVar3 = (double)param_1[4];
  dVar4 = (double)param_1[3];
  dVar18 = (*(double *)(lVar9 + 0x10 + uVar17 * 0x18) - dVar1) * dVar4;
  dVar20 = (*(double *)(lVar9 + 8 + uVar17 * 0x18) - dVar2) * dVar4;
  dVar23 = (*(double *)(lVar9 + uVar17 * 0x18) - dVar3) * dVar4;
  dVar19 = (*(double *)(lVar10 + 0x10 + uVar15 * 0x18) - dVar1) * dVar4;
  dVar22 = (*(double *)(lVar10 + 8 + uVar15 * 0x18) - dVar2) * dVar4;
  dVar11 = (*(double *)(lVar10 + uVar15 * 0x18) - dVar3) * dVar4;
  dVar21 = (*(double *)(lVar7 + 0x10 + uVar14 * 0x18) - dVar1) * dVar4;
  dVar1 = (*(double *)(lVar7 + 8 + uVar14 * 0x18) - dVar2) * dVar4;
  dVar4 = (*(double *)(lVar7 + uVar14 * 0x18) - dVar3) * dVar4;
  iVar12 = *(int *)((longlong)param_1 + 0xc) + -1;
  dVar2 = dVar23;
  if (dVar11 <= dVar23) {
    dVar2 = dVar11;
  }
  if (dVar4 <= dVar2) {
    dVar2 = dVar4;
  }
  iVar16 = (int)dVar2 - *(int *)(param_1 + 1);
  if (iVar12 <= (int)dVar2 - *(int *)(param_1 + 1)) {
    iVar16 = iVar12;
  }
  iVar12 = 0;
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  *param_3 = iVar16;
  dVar2 = dVar20;
  if (dVar22 <= dVar20) {
    dVar2 = dVar22;
  }
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  iVar16 = (int)dVar2 - *(int *)(param_1 + 1);
  if (*(int *)(param_1 + 2) + -1 <= (int)dVar2 - *(int *)(param_1 + 1)) {
    iVar16 = *(int *)(param_1 + 2) + -1;
  }
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  param_3[1] = iVar16;
  dVar2 = dVar18;
  if (dVar19 <= dVar18) {
    dVar2 = dVar19;
  }
  if (dVar21 <= dVar2) {
    dVar2 = dVar21;
  }
  iVar13 = *(int *)((longlong)param_1 + 0x14) + -1;
  iVar16 = (int)dVar2 - *(int *)(param_1 + 1);
  if (iVar13 <= (int)dVar2 - *(int *)(param_1 + 1)) {
    iVar16 = iVar13;
  }
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  param_3[2] = iVar16;
  iVar16 = *(int *)((longlong)param_1 + 0xc) + -1;
  if (dVar23 <= dVar11) {
    dVar23 = dVar11;
  }
  if (dVar23 <= dVar4) {
    dVar23 = dVar4;
  }
  iVar13 = *(int *)(param_1 + 1) + (int)dVar23 + 1;
  if (iVar13 < iVar16) {
    iVar16 = iVar13;
  }
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  *param_4 = iVar16;
  if (dVar20 <= dVar22) {
    dVar20 = dVar22;
  }
  if (dVar20 <= dVar1) {
    dVar20 = dVar1;
  }
  iVar13 = *(int *)(param_1 + 1) + (int)dVar20 + 1;
  iVar16 = *(int *)(param_1 + 2) + -1;
  if (iVar13 < *(int *)(param_1 + 2) + -1) {
    iVar16 = iVar13;
  }
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  param_4[1] = iVar16;
  iVar16 = *(int *)((longlong)param_1 + 0x14) + -1;
  if (dVar18 <= dVar19) {
    dVar18 = dVar19;
  }
  if (dVar18 <= dVar21) {
    dVar18 = dVar21;
  }
  iVar13 = *(int *)(param_1 + 1) + (int)dVar18 + 1;
  if (iVar13 < iVar16) {
    iVar16 = iVar13;
  }
  if (iVar16 < 1) {
    iVar16 = iVar12;
  }
  param_4[2] = iVar16;
  return;
}



// FUNCTION 14847bf64 FUN_14847bf64 body=289 status=ok
// SIG undefined FUN_14847bf64(void)

int * FUN_14847bf64(int *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar5 = (((int)uVar4 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar4 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  iVar6 = (((int)uVar4 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  uVar4 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  iVar7 = (((int)uVar4 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  *param_1 = iVar5;
  param_1[1] = iVar6;
  param_1[2] = iVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  iVar7 = iVar6 * iVar5 * iVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14847c1e0(param_1 + 6,iVar7,CONCAT71((uint7)(uint3)(uVar1 >> 8),1));
  local_48 = *(undefined8 *)(param_1 + 6);
  local_38 = &local_48;
  local_58 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_14847c268;
  local_60 = (uint)(param_3 ^ 1);
  FUN_1427ae281(L"ParallelFor Task",iVar7,1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847c086 FUN_14847c086 body=345 status=ok
// SIG undefined FUN_14847c086(void)

int * FUN_14847c086(int *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined8 *local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  int **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x14);
  uVar4 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar5 = (((int)uVar4 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar4 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  iVar6 = (((int)uVar4 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  uVar4 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  iVar7 = (((int)uVar4 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  *param_1 = iVar5;
  param_1[1] = iVar6;
  param_1[2] = iVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  iVar7 = iVar6 * iVar5 * iVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140bfc200(param_1 + 10,iVar7,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
  FUN_14847c1e0(param_1 + 6,iVar7,1);
  local_60 = *(undefined8 *)(param_2 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 6);
  local_48 = &local_70;
  local_78 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14847c3fc;
  local_80 = (uint)(param_3 ^ 1);
  local_70 = param_1;
  local_58 = param_2;
  FUN_1427ae281(L"ParallelFor Task",iVar7,1);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847c1e0 FUN_14847c1e0 body=134 status=ok
// SIG undefined FUN_14847c1e0(void)

void FUN_14847c1e0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146d8c5e2(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d8c668(param_1);
    return;
  }
  return;
}



// FUNCTION 14847c27c FUN_14847c27c body=383 status=ok
// SIG undefined FUN_14847c27c(void)

void FUN_14847c27c(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  
  lVar17 = *(longlong *)param_1[1];
  lVar9 = (longlong)param_2;
  if (((*(int *)(lVar17 + lVar9 * 0x18) <= *(int *)(lVar17 + 0xc + lVar9 * 0x18)) &&
      (piVar1 = (int *)(lVar17 + lVar9 * 0x18), piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])
     ) {
    if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      lVar17 = *param_1;
      pcVar4 = *(code **)(lVar17 + 0xa0);
      plVar10 = (longlong *)(lVar17 + 0xc0);
      if (*(longlong **)(lVar17 + 0xb0) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar17 + 0xb0);
      }
      uVar7 = (**(code **)(*plVar10 + 8))();
      uVar5 = (*pcVar4)(uVar7);
      *(undefined1 *)param_1[3] = uVar5;
    }
    if (*(char *)param_1[3] == '\0') {
      iVar15 = piVar1[2];
      iVar6 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar6 = iVar15;
      }
      iVar15 = *piVar1;
      iVar11 = piVar1[1];
      iVar8 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar8 = iVar11;
      }
      iVar11 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      iVar15 = piVar1[5];
      iVar13 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar13 = iVar15;
      }
      if (iVar6 >> 3 <= iVar13 >> 3) {
        iVar8 = iVar8 >> 3;
        iVar11 = iVar11 >> 3;
        iVar15 = piVar1[3];
        iVar3 = piVar1[4];
        iVar14 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar14 = iVar15;
        }
        iVar14 = iVar14 >> 3;
        iVar15 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar15 = iVar3;
        }
        piVar1 = (int *)param_1[2];
        iVar15 = iVar15 >> 3;
        iVar3 = iVar15;
        if (iVar15 < iVar8) {
          iVar3 = iVar8;
        }
        iVar12 = iVar14;
        if ((longlong)iVar14 <= (longlong)iVar11) {
          iVar12 = iVar11;
        }
        iVar6 = iVar6 >> 3;
        do {
          iVar16 = iVar8;
          if (iVar8 <= iVar15) {
            do {
              lVar17 = (longlong)iVar11;
              if (iVar11 <= iVar14) {
                do {
                  LOCK();
                  piVar2 = (int *)(*(longlong *)(piVar1 + 6) +
                                  ((longlong)(piVar1[1] * iVar6 + iVar16) * (longlong)*piVar1 +
                                  lVar17) * 4);
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                  lVar17 = lVar17 + 1;
                } while (iVar12 + 1 != (int)lVar17);
              }
              bVar18 = iVar16 != iVar3;
              iVar16 = iVar16 + 1;
            } while (bVar18);
          }
          bVar18 = iVar6 != iVar13 >> 3;
          iVar6 = iVar6 + 1;
        } while (bVar18);
      }
    }
  }
  return;
}



// FUNCTION 14847c404 FUN_14847c404 body=84 status=ok
// SIG undefined FUN_14847c404(void)

void FUN_14847c404(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(*param_1 + 0x28);
  lVar5 = (longlong)param_2;
  lVar4 = lVar5 * 0x10;
  uVar1 = *(uint *)(param_1[2] + lVar5 * 4);
  iVar2 = *(int *)(lVar3 + 8 + lVar4);
  *(uint *)(lVar3 + 8 + lVar4) = iVar2 + uVar1;
  if ((uint)(*(int *)(lVar3 + 0xc + lVar4) - iVar2) < uVar1) {
    FUN_1446f48e2();
  }
  LOCK();
  *(undefined4 *)(param_1[1] + lVar5 * 4) = 0;
  UNLOCK();
  return;
}



// FUNCTION 14847c460 FUN_14847c460 body=425 status=ok
// SIG undefined FUN_14847c460(void)

void FUN_14847c460(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  
  lVar18 = *(longlong *)param_1[1];
  lVar10 = (longlong)param_2;
  if (((*(int *)(lVar18 + lVar10 * 0x18) <= *(int *)(lVar18 + 0xc + lVar10 * 0x18)) &&
      (piVar1 = (int *)(lVar18 + lVar10 * 0x18), piVar1[1] <= piVar1[4])) &&
     (piVar1[2] <= piVar1[5])) {
    if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      lVar18 = *param_1;
      pcVar5 = *(code **)(lVar18 + 0xa0);
      plVar11 = (longlong *)(lVar18 + 0xc0);
      if (*(longlong **)(lVar18 + 0xb0) != (longlong *)0x0) {
        plVar11 = *(longlong **)(lVar18 + 0xb0);
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      uVar6 = (*pcVar5)(uVar8);
      *(undefined1 *)param_1[3] = uVar6;
    }
    if (*(char *)param_1[3] == '\0') {
      iVar15 = piVar1[2];
      iVar7 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      iVar15 = *piVar1;
      iVar12 = piVar1[1];
      iVar9 = iVar12 + 7;
      if (-1 < iVar12) {
        iVar9 = iVar12;
      }
      iVar12 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar12 = iVar15;
      }
      iVar15 = piVar1[5];
      iVar14 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar14 = iVar15;
      }
      if (iVar7 >> 3 <= iVar14 >> 3) {
        iVar9 = iVar9 >> 3;
        iVar12 = iVar12 >> 3;
        iVar15 = piVar1[3];
        iVar4 = piVar1[4];
        iVar16 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar16 = iVar15;
        }
        iVar16 = iVar16 >> 3;
        iVar15 = iVar4 + 7;
        if (-1 < iVar4) {
          iVar15 = iVar4;
        }
        piVar1 = (int *)param_1[2];
        iVar15 = iVar15 >> 3;
        iVar4 = iVar15;
        if (iVar15 < iVar9) {
          iVar4 = iVar9;
        }
        iVar13 = iVar16;
        if ((longlong)iVar16 <= (longlong)iVar12) {
          iVar13 = iVar12;
        }
        iVar7 = iVar7 >> 3;
        do {
          iVar19 = iVar9;
          if (iVar9 <= iVar15) {
            do {
              lVar18 = (longlong)iVar12;
              if (iVar12 <= iVar16) {
                do {
                  lVar10 = *(longlong *)(piVar1 + 10);
                  lVar17 = (longlong)(piVar1[1] * iVar7 + iVar19) * (longlong)*piVar1 + lVar18;
                  LOCK();
                  piVar2 = (int *)(*(longlong *)(piVar1 + 6) + lVar17 * 4);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                  *(int *)(*(longlong *)(lVar10 + lVar17 * 0x10) + (longlong)iVar3 * 4) = param_2;
                  lVar18 = lVar18 + 1;
                } while (iVar13 + 1 != (int)lVar18);
              }
              bVar20 = iVar19 != iVar4;
              iVar19 = iVar19 + 1;
            } while (bVar20);
          }
          bVar20 = iVar7 != iVar14 >> 3;
          iVar7 = iVar7 + 1;
        } while (bVar20);
      }
    }
  }
  return;
}



// FUNCTION 14847c610 FUN_14847c610 body=1191 status=ok
// SIG undefined FUN_14847c610(void)

void FUN_14847c610(longlong *param_1,int *param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStack_9b8 [36];
  uint local_994;
  uint local_990;
  uint local_98c;
  longlong local_988;
  longlong local_980;
  longlong local_978;
  longlong local_970;
  longlong local_968;
  double local_960;
  double local_958;
  double local_950;
  double local_948;
  uint *local_940;
  longlong local_938;
  undefined4 *local_930;
  uint local_924;
  uint local_920;
  uint local_91c;
  undefined8 local_918 [2];
  undefined8 local_908;
  uint local_8d8;
  uint uStack_8d4;
  uint uStack_8d0;
  uint uStack_8cc;
  undefined8 local_8c8;
  longlong *local_8b8;
  longlong local_8a8 [6];
  undefined4 local_878 [2];
  undefined1 local_870 [2048];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  lVar21 = *param_1;
  piVar6 = (int *)param_1[4];
  iVar15 = piVar6[3];
  iVar3 = piVar6[4];
  iVar4 = piVar6[5];
  iVar14 = *(int *)(*(longlong *)param_1[2] + (longlong)*param_2 * 4);
  local_970 = *(longlong *)(param_1[3] + 0x28);
  iVar13 = *piVar6;
  iVar5 = piVar6[1];
  iVar12 = iVar14 % iVar13;
  local_978 = (longlong)iVar14 << 4;
  iVar11 = iVar14 / (iVar5 * iVar13);
  local_98c = iVar11 * 8;
  iVar14 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)iVar14 / (longlong)iVar13) >> 0x1f) << 0x20 |
                 (longlong)iVar14 / (longlong)iVar13 & 0xffffffffU) % (longlong)iVar5);
  local_990 = iVar14 * 8;
  local_994 = iVar12 * 8;
  local_988 = FUN_14847a568(piVar6,(iVar5 * iVar11 + iVar14) * iVar13 + iVar12);
  local_980 = lVar21;
  local_968 = FUN_14847a654(lVar21 + 0x120,
                            (*(int *)(lVar21 + 0x124) * iVar11 + iVar14) * *(int *)(lVar21 + 0x120)
                            + iVar12);
  local_8d8 = local_8d8 & 0xffffff00;
  local_878[0] = 0xffffffff;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000000;
  FUN_14847a26a();
  local_924 = local_994;
  local_920 = local_990;
  local_91c = local_98c;
  iVar13 = iVar11 * 8 + 8;
  if (iVar13 < iVar4) {
    iVar4 = iVar13;
  }
  iVar14 = iVar14 * 8 + 8;
  if (iVar14 < iVar3) {
    iVar3 = iVar14;
  }
  iVar14 = iVar12 * 8 + 8;
  if (iVar14 < iVar15) {
    iVar15 = iVar14;
  }
  lVar21 = (longlong)*(int *)(local_970 + 8 + local_978);
  if (lVar21 != 0) {
    uVar20 = iVar4 - 1;
    uVar19 = iVar3 - 1;
    uVar24 = iVar15 - 1;
    lVar7 = *(longlong *)(local_970 + local_978);
    lVar23 = 0;
    do {
      lVar16 = (longlong)*(int *)(lVar7 + lVar23);
      puVar1 = (uint *)(*(longlong *)param_1[5] + lVar16 * 0x18);
      uVar8 = *(undefined8 *)(*(longlong *)param_1[5] + 0x10 + lVar16 * 0x18);
      local_8d8 = *puVar1;
      if ((int)uVar24 <= (int)*puVar1) {
        local_8d8 = uVar24;
      }
      if ((int)local_8d8 < (int)local_924) {
        local_8d8 = local_924;
      }
      uStack_8d4 = puVar1[1];
      if ((int)uVar19 <= (int)puVar1[1]) {
        uStack_8d4 = uVar19;
      }
      if ((int)uStack_8d4 < (int)local_920) {
        uStack_8d4 = local_920;
      }
      uStack_8d0 = puVar1[2];
      if ((int)uVar20 <= (int)puVar1[2]) {
        uStack_8d0 = uVar20;
      }
      if ((int)uStack_8d0 < (int)local_91c) {
        uStack_8d0 = local_91c;
      }
      uStack_8cc = puVar1[3];
      if ((int)uVar24 <= (int)puVar1[3]) {
        uStack_8cc = uVar24;
      }
      if ((int)uStack_8cc < (int)local_924) {
        uStack_8cc = local_924;
      }
      local_8c8._0_4_ = (uint)uVar8;
      if ((int)uVar19 <= (int)(uint)local_8c8) {
        local_8c8._0_4_ = uVar19;
      }
      if ((int)(uint)local_8c8 < (int)local_920) {
        local_8c8._0_4_ = local_920;
      }
      local_8c8._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar20 <= (int)local_8c8._4_4_) {
        local_8c8._4_4_ = uVar20;
      }
      if ((int)local_8c8._4_4_ < (int)local_91c) {
        local_8c8._4_4_ = local_91c;
      }
      local_940 = &local_924;
      local_938 = local_988;
      local_930 = local_878;
      FUN_14847cab8(local_980,&local_8d8,&uStack_8cc,&local_940);
      lVar23 = lVar23 + 4;
    } while (lVar21 * 4 != lVar23);
  }
  lVar7 = local_980;
  lVar21 = local_988;
  uVar22 = 0;
  do {
    puVar17 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar17 = local_870;
    }
    if ((*(uint *)(puVar17 + (uVar22 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar22 & 0x1f) & 1) != 0) {
      fVar2 = *(float *)(param_1 + 6);
      pfVar9 = (float *)param_1[1];
      local_948 = (double)((float)(int)((uint)(uVar22 >> 6) & 0x3ffffff | local_98c) * fVar2 +
                          pfVar9[2]);
      local_950 = (double)((float)(int)((uint)(uVar22 >> 3) & 7 | local_990) * fVar2 + pfVar9[1]);
      local_958 = (double)((float)(int)((uint)uVar22 & 7 | local_994) * fVar2 + *pfVar9);
      plVar18 = *(longlong **)(lVar7 + 8);
      local_918[0] = 0;
      local_908 = 0;
      FUN_146bee698(&local_8d8,param_1[7],local_918);
      iVar15 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_958,&local_960,&local_8d8);
      if (local_8c8 != 0) {
        plVar18 = local_8b8;
        if (local_8b8 == (longlong *)0x0) {
          plVar18 = local_8a8;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (iVar15 == -1) {
        *(undefined4 *)(lVar21 + 4 + uVar22 * 4) = *(undefined4 *)((longlong)param_1 + 0x34);
      }
      else {
        if (local_960 < 0.0) {
          dVar10 = sqrt(local_960);
        }
        else {
          dVar10 = SQRT(local_960);
        }
        *(float *)(lVar21 + 4 + uVar22 * 4) = (float)dVar10;
        *(int *)(local_968 + 4 + uVar22 * 4) = iVar15;
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x200);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847cab8 FUN_14847cab8 body=190 status=ok
// SIG undefined FUN_14847cab8(void)

void FUN_14847cab8(undefined8 param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar5 = param_2[2];
  iVar8 = param_3[2];
  if (iVar5 <= iVar8) {
    iVar6 = param_3[1];
    iVar10 = iVar5 << 6;
    do {
      iVar11 = param_2[1];
      if (iVar11 <= iVar6) {
        iVar7 = *param_3;
        iVar8 = iVar10 + iVar11 * 8;
        do {
          iVar9 = *param_2;
          if (*param_2 <= iVar7) {
            do {
              piVar2 = (int *)*param_4;
              iVar6 = (iVar8 + iVar9) - (piVar2[2] * 0x40 + piVar2[1] * 8 + *piVar2);
              lVar3 = *(longlong *)(param_4[2] + 0x808);
              lVar12 = param_4[2] + 8;
              if (lVar3 != 0) {
                lVar12 = lVar3;
              }
              iVar7 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar7 = iVar6;
              }
              puVar1 = (uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
              iVar7 = *param_3;
              bVar4 = iVar9 < iVar7;
              iVar9 = iVar9 + 1;
            } while (bVar4);
            iVar6 = param_3[1];
          }
          iVar8 = iVar8 + 8;
          bVar4 = iVar11 < iVar6;
          iVar11 = iVar11 + 1;
        } while (bVar4);
        iVar8 = param_3[2];
      }
      iVar10 = iVar10 + 0x40;
      bVar4 = iVar5 < iVar8;
      iVar5 = iVar5 + 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 14847cb7c FUN_14847cb7c body=1268 status=ok
// SIG undefined FUN_14847cb7c(void)

void FUN_14847cb7c(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  undefined1 auStack_1c8 [40];
  longlong *local_1a0;
  int local_194;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  int *local_178;
  undefined8 local_170;
  longlong *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  undefined8 local_148;
  uint *local_140;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar6 = (longlong *)*param_1;
  piVar7 = (int *)param_1[4];
  local_194 = piVar7[3];
  iVar18 = piVar7[4];
  iVar25 = piVar7[5];
  iVar4 = *(int *)(*(longlong *)param_1[2] + (longlong)*param_2 * 4);
  local_1a0 = *(longlong **)(param_1[3] + 0x28);
  iVar19 = *piVar7;
  iVar16 = piVar7[1];
  iVar26 = iVar4 % iVar19;
  iVar15 = iVar4 / (iVar16 * iVar19);
  iVar23 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)iVar4 / (longlong)iVar19) >> 0x1f) << 0x20 |
                 (longlong)iVar4 / (longlong)iVar19 & 0xffffffffU) % (longlong)iVar16);
  local_188 = FUN_14847a568(piVar7,(iVar16 * iVar15 + iVar23) * iVar19 + iVar26);
  iVar19 = local_194;
  local_180 = plVar6;
  local_190 = FUN_14847a654(plVar6 + 0x24,
                            (*(int *)((longlong)plVar6 + 0x124) * iVar15 + iVar23) *
                            (int)plVar6[0x24] + iVar26);
  local_c4 = iVar15 * 8;
  local_c8 = iVar23 * 8;
  local_cc = iVar26 * 8;
  iVar16 = iVar15 * 8 + 8;
  if (iVar16 < iVar25) {
    iVar25 = iVar16;
  }
  iVar16 = iVar23 * 8 + 8;
  if (iVar16 < iVar18) {
    iVar18 = iVar16;
  }
  iVar16 = iVar26 * 8 + 8;
  if (iVar16 < iVar19) {
    iVar19 = iVar16;
  }
  lVar14 = local_1a0[(longlong)iVar4 * 2 + 1];
  if ((longlong)(int)lVar14 != 0) {
    iVar25 = iVar25 + -1;
    iVar18 = iVar18 + -1;
    iVar19 = iVar19 + -1;
    lVar8 = local_1a0[(longlong)iVar4 * 2];
    local_1a0 = param_1 + 10;
    lVar24 = 0;
    do {
      local_d0 = *(uint *)(lVar8 + lVar24);
      uVar17 = (ulonglong)(int)local_d0;
      lVar9 = *(longlong *)(*local_180 + 0x10);
      lVar10 = *(longlong *)(*(longlong *)(*local_180 + 0x130) + (ulonglong)(local_d0 >> 9) * 8);
      uVar20 = uVar17 & 0x1ff;
      uVar5 = *(uint *)(lVar10 + uVar20 * 0xc);
      lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar5 >> 9) * 8);
      uVar21 = (ulonglong)uVar5 & 0x1ff;
      uVar5 = *(uint *)(lVar10 + 4 + uVar20 * 0xc);
      lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar5 >> 9) * 8);
      uVar22 = (ulonglong)uVar5 & 0x1ff;
      uVar5 = *(uint *)(lVar10 + 8 + uVar20 * 0xc);
      lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar5 >> 9) * 8);
      uVar20 = (ulonglong)uVar5 & 0x1ff;
      dVar1 = (double)param_1[8];
      dVar2 = (double)param_1[6];
      dVar3 = (double)param_1[7];
      local_118 = (double)param_1[9];
      local_d8 = (*(double *)(lVar11 + 0x10 + uVar21 * 0x18) - dVar1) * local_118;
      local_e0 = (*(double *)(lVar11 + 8 + uVar21 * 0x18) - dVar3) * local_118;
      local_e8 = (*(double *)(lVar11 + uVar21 * 0x18) - dVar2) * local_118;
      local_f0 = (*(double *)(lVar12 + 0x10 + uVar22 * 0x18) - dVar1) * local_118;
      local_f8 = (*(double *)(lVar12 + 8 + uVar22 * 0x18) - dVar3) * local_118;
      local_100 = (*(double *)(lVar12 + uVar22 * 0x18) - dVar2) * local_118;
      local_108 = (*(double *)(lVar9 + 0x10 + uVar20 * 0x18) - dVar1) * local_118;
      local_110 = (*(double *)(lVar9 + 8 + uVar20 * 0x18) - dVar3) * local_118;
      local_118 = (*(double *)(lVar9 + uVar20 * 0x18) - dVar2) * local_118;
      uVar13 = *(undefined8 *)(*(longlong *)param_1[1] + 0x10 + uVar17 * 0x18);
      piVar7 = (int *)(*(longlong *)param_1[1] + uVar17 * 0x18);
      local_138 = *piVar7;
      if (iVar19 <= *piVar7) {
        local_138 = iVar19;
      }
      if (local_138 < local_cc) {
        local_138 = local_cc;
      }
      iStack_134 = piVar7[1];
      if (iVar18 <= piVar7[1]) {
        iStack_134 = iVar18;
      }
      if (iStack_134 < local_c8) {
        iStack_134 = local_c8;
      }
      iStack_130 = piVar7[2];
      if (iVar25 <= piVar7[2]) {
        iStack_130 = iVar25;
      }
      if (iStack_130 < local_c4) {
        iStack_130 = local_c4;
      }
      iStack_12c = piVar7[3];
      if (iVar19 <= piVar7[3]) {
        iStack_12c = iVar19;
      }
      if (iStack_12c < local_cc) {
        iStack_12c = local_cc;
      }
      local_128 = (int)uVar13;
      if (iVar18 <= local_128) {
        local_128 = iVar18;
      }
      if (local_128 < local_c8) {
        local_128 = local_c8;
      }
      iStack_124 = (int)((ulonglong)uVar13 >> 0x20);
      if (iVar25 <= iStack_124) {
        iStack_124 = iVar25;
      }
      if (iStack_124 < local_c4) {
        iStack_124 = local_c4;
      }
      local_178 = &local_cc;
      local_170 = local_188;
      local_168 = local_1a0;
      local_160 = &local_e8;
      local_158 = &local_100;
      local_150 = &local_118;
      local_148 = local_190;
      local_140 = &local_d0;
      FUN_14847d072(local_180,&local_138,&iStack_12c,&local_178);
      lVar24 = lVar24 + 4;
    } while ((longlong)(int)lVar14 * 4 != lVar24);
  }
  if ((local_c0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847d072 FUN_14847d072 body=190 status=ok
// SIG undefined FUN_14847d072(void)

void FUN_14847d072(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = param_2[2];
  iVar4 = param_3[2];
  local_2c = iVar3;
  if (iVar3 <= iVar4) {
    iVar2 = param_3[1];
    do {
      iVar5 = param_2[1];
      local_2c = iVar3;
      local_30 = iVar5;
      if (iVar5 <= iVar2) {
        iVar3 = *param_3;
        do {
          local_34 = *param_2;
          local_30 = iVar5;
          if (local_34 <= iVar3) {
            do {
              FUN_14847d132(param_4,&local_34);
              iVar4 = local_34 + 1;
              iVar3 = *param_3;
              bVar1 = local_34 < iVar3;
              local_34 = iVar4;
            } while (bVar1);
            iVar2 = param_3[1];
          }
          iVar5 = local_30 + 1;
        } while (local_30 < iVar2);
        iVar4 = param_3[2];
        local_30 = iVar5;
      }
      iVar3 = local_2c + 1;
      bVar1 = local_2c < iVar4;
      local_2c = iVar3;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847d132 FUN_14847d132 body=195 status=ok
// SIG undefined FUN_14847d132(void)

void FUN_14847d132(undefined8 *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (double)param_2[2];
  piVar2 = (int *)*param_1;
  local_40 = (double)param_2[1];
  uVar3 = (ulonglong)
          (uint)((((param_2[2] - piVar2[2]) * 0x40 + *param_2) - *piVar2) +
                (param_2[1] - piVar2[1]) * 8);
  local_48 = (double)*param_2;
  fVar1 = *(float *)param_1[2];
  dVar4 = (double)FUN_146c65cab(&local_48,param_1[3],param_1[4],param_1[5]);
  if ((float)(dVar4 * (double)fVar1) < *(float *)(param_1[1] + 4 + uVar3 * 4)) {
    *(float *)(param_1[1] + 4 + uVar3 * 4) = (float)(dVar4 * (double)fVar1);
    *(undefined4 *)(param_1[6] + 4 + uVar3 * 4) = *(undefined4 *)param_1[7];
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847d1f6 FUN_14847d1f6 body=124 status=ok
// SIG undefined FUN_14847d1f6(void)

longlong * FUN_14847d1f6(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_1[1] * *param_1 * param_1[2];
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar4);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14847d6b8(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return param_2;
}



// FUNCTION 14847d272 FUN_14847d272 body=451 status=ok
// SIG undefined FUN_14847d272(void)

void FUN_14847d272(longlong *param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 auStack_128 [40];
  uint local_100;
  longlong **local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [24];
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_80;
  longlong **local_78;
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14847da3c(local_a8,param_7,(char)param_1[0xe]);
  local_b8 = &local_a9;
  local_a9 = 0;
  local_100 = *(byte *)(param_1 + 0xe) ^ 1;
  local_e8 = *param_2;
  local_e0 = (undefined4)param_2[1];
  local_d4 = param_5;
  local_d0 = param_6;
  local_c8 = param_8;
  local_f8 = (longlong **)&local_70;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 **)((ulonglong)local_68._4_4_ << 0x20);
  local_80 = &LAB_14847de1a;
  local_f0 = param_1;
  local_dc = param_3;
  local_d8 = param_4;
  local_c0 = local_a8;
  local_78 = &local_f0;
  FUN_1427ae281(L"ParallelFor Task",*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),
                1,&local_80);
  *(undefined4 *)(param_8 + 0x18) = 0;
  FUN_148479620(param_8,param_4,param_5,param_6);
  local_100 = *(byte *)(param_1 + 0xe) ^ 1;
  local_80 = param_8;
  local_f0 = (longlong *)0x0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_70 = &LAB_14847e3fa;
  local_f8 = &local_f0;
  local_78 = (longlong **)local_a8;
  local_68 = &local_80;
  FUN_1427ae281(L"ParallelFor Task",local_88,1,&local_70);
  FUN_14847dcff(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847d436 FUN_14847d436 body=641 status=ok
// SIG undefined FUN_14847d436(void)

void FUN_14847d436(longlong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6
                  )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined8 *local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined1 *local_90;
  undefined1 local_81;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = param_3;
  if (*(byte *)(param_1 + 0x70) == 0) {
    if (0 < (int)param_4) {
      local_c8 = (longlong *)(param_1 + 0xc0);
      local_e0 = 0;
      local_d4 = param_4;
      local_d0 = param_1;
      do {
        pcVar1 = *(code **)(param_1 + 0xa0);
        plVar8 = *(longlong **)(param_1 + 0xb0);
        if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
          plVar8 = local_c8;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar1)(uVar6);
        if (cVar4 != '\0') break;
        param_1 = local_d0;
        if (0 < (int)local_d8) {
          uVar15 = local_e0 >> 3;
          local_c0 = (ulonglong)((local_e0 & 7) << 6);
          local_dc = 0;
          do {
            if (0 < (int)param_2) {
              uVar14 = local_dc >> 3;
              uVar5 = local_dc & 7;
              iVar2 = (int)local_c0;
              uVar11 = 0;
              uVar9 = 0;
              do {
                iVar3 = (int)(uVar11 >> 3);
                uVar12 = (ulonglong)((uint)uVar11 & 7 | iVar2 + uVar5 * 8);
                plVar13 = (longlong *)
                          ((longlong)(int)((param_5[1] * uVar15 + uVar14) * *param_5 + iVar3) * 0x10
                          + *(longlong *)(param_5 + 8));
                lVar7 = *plVar13;
                plVar8 = (longlong *)(lVar7 + 4 + uVar12 * 4);
                if (lVar7 == 0) {
                  plVar8 = plVar13 + 1;
                }
                uVar9 = uVar9 + (int)*plVar8;
                if (((*(int *)(param_1 + 0x8c) == 1) && (0 < (int)uVar9)) ||
                   ((*(int *)(param_1 + 0x8c) == 0 && ((uVar9 & 0x80000001) == 1)))) {
                  lVar7 = FUN_14847a568(param_6,(param_6[1] * uVar15 + uVar14) * *param_6 + iVar3);
                  *(uint *)(lVar7 + 4 + uVar12 * 4) = *(uint *)(lVar7 + 4 + uVar12 * 4) ^ 0x80000000
                  ;
                  param_1 = local_d0;
                }
                uVar10 = (uint)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
              } while (param_2 != uVar10);
            }
            local_dc = local_dc + 1;
          } while (local_dc != local_d8);
        }
        local_e0 = local_e0 + 1;
      } while (local_e0 != local_d4);
    }
  }
  else {
    local_90 = &local_81;
    local_81 = 0;
    local_b0 = *param_6;
    local_ac = param_6[1];
    local_a8 = param_6[2];
    local_f0 = *(byte *)(param_1 + 0x70) ^ 1;
    local_78 = &local_b8;
    local_a0 = param_6;
    local_98 = param_5;
    local_e8 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = &LAB_14847e492;
    local_b8 = param_1;
    FUN_1427ae281(L"ParallelFor Task",local_a8 * local_ac,1);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847d6b8 FUN_14847d6b8 body=132 status=ok
// SIG undefined FUN_14847d6b8(void)

void FUN_14847d6b8(longlong param_1,int param_2)

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



// FUNCTION 14847d746 FUN_14847d746 body=354 status=ok
// SIG undefined FUN_14847d746(void)

void FUN_14847d746(longlong *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  int *local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *param_1;
  local_80 = *(int **)(*(longlong *)param_1[1] + (longlong)param_2 * 8);
  iVar2 = *local_80;
  iVar3 = *(int *)param_1[2];
  iVar4 = ((int *)param_1[2])[1];
  uVar10 = 0;
  do {
    fVar1 = *(float *)((longlong)param_1 + 0x24);
    local_68 = (double)((float)(int)(((uint)(uVar10 >> 6) & 0x3ffffff) +
                                    (iVar2 / (iVar4 * iVar3)) * 8) * fVar1 + *(float *)(param_1 + 4)
                       );
    local_70 = (double)((float)(int)((uint)(uVar10 >> 3) & 7 |
                                    (int)((longlong)
                                          ((ulonglong)
                                           (uint)((int)((longlong)iVar2 / (longlong)iVar3) >> 0x1f)
                                           << 0x20 | (longlong)iVar2 / (longlong)iVar3 & 0xffffffffU
                                          ) % (longlong)iVar4) << 3) * fVar1 +
                       *(float *)((longlong)param_1 + 0x1c));
    local_78 = (double)((float)(int)((uint)uVar10 & 7 | iVar2 % iVar3 << 3) * fVar1 +
                       *(float *)(param_1 + 3));
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar9 = *(longlong **)(lVar5 + 0x20);
    if (*(longlong **)(lVar5 + 0x20) == (longlong *)0x0) {
      plVar9 = (longlong *)(lVar5 + 0x30);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar7 = (*pcVar6)(uVar8,&local_78);
    if (cVar7 != '\0') {
      local_80[uVar10 + 1] = local_80[uVar10 + 1] ^ 0x80000000;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x200);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847d8b2 FUN_14847d8b2 body=393 status=ok
// SIG undefined FUN_14847d8b2(void)

void FUN_14847d8b2(longlong *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar4 = (int *)param_1[1];
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  iVar13 = param_2 % iVar2;
  iVar8 = param_2 / (iVar3 * iVar2);
  iVar12 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_2 / (longlong)iVar2) >> 0x1f) << 0x20 |
                 (longlong)param_2 / (longlong)iVar2 & 0xffffffffU) % (longlong)iVar3);
  if (*(longlong *)
       (*(longlong *)(piVar4 + 8) + (longlong)((iVar3 * iVar8 + iVar12) * iVar2 + iVar13) * 0x10) ==
      0) {
    fVar1 = *(float *)((longlong)param_1 + 0x1c);
    local_40 = (double)((float)(iVar8 * 8) * fVar1 + *(float *)(param_1 + 3)) + (double)param_1[6];
    local_48 = (double)((float)(iVar12 * 8) * fVar1 + *(float *)((longlong)param_1 + 0x14)) +
               (double)param_1[5];
    local_50 = (double)((float)(iVar13 * 8) * fVar1 + *(float *)(param_1 + 2)) + (double)param_1[4];
    lVar5 = *param_1;
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar10 = (longlong *)(lVar5 + 0x30);
    if (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar5 + 0x20);
    }
    uVar9 = (**(code **)(*plVar10 + 8))
                      (local_40,(longlong)param_2 % (longlong)(iVar3 * iVar2) & 0xffffffff);
    cVar7 = (*pcVar6)(uVar9,&local_50);
    if (cVar7 != '\0') {
      piVar4 = (int *)param_1[1];
      lVar5 = *(longlong *)(piVar4 + 8);
      lVar11 = (longlong)((iVar8 * piVar4[1] + iVar12) * *piVar4 + iVar13) * 0x10;
      *(uint *)(lVar5 + 8 + lVar11) = *(uint *)(lVar5 + 8 + lVar11) ^ 0x80000000;
      if (*(longlong *)(lVar5 + lVar11) != 0) {
        *(undefined8 *)(lVar5 + lVar11) = 0;
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847da3c FUN_14847da3c body=298 status=ok
// SIG undefined FUN_14847da3c(void)

int * FUN_14847da3c(int *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined8 *local_68;
  int *local_58;
  int *local_50;
  undefined1 *local_48;
  int **local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar5 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  iVar6 = (((int)uVar5 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar5 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uVar7 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar7 = uVar3;
  }
  *param_1 = iVar6;
  param_1[1] = (((int)uVar5 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  param_1[2] = (((int)uVar7 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar4 = param_2[1] * *param_2 * param_2[2];
  FUN_14847db68(param_1 + 6,iVar4,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
  local_40 = &local_58;
  local_68 = &local_38;
  local_38 = 0;
  local_30 = 0;
  local_48 = &LAB_14847dd90;
  local_70 = (uint)(param_3 ^ 1);
  local_58 = param_1;
  local_50 = param_2;
  FUN_1427ae281(L"ParallelFor Task",iVar4,1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847db68 FUN_14847db68 body=208 status=ok
// SIG undefined FUN_14847db68(void)

void FUN_14847db68(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_14847dc3a(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_14847dcff(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_14847dcc0(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14847dc3a FUN_14847dc3a body=132 status=ok
// SIG undefined FUN_14847dc3a(void)

void FUN_14847dc3a(longlong param_1,int param_2)

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



// FUNCTION 14847dcc0 FUN_14847dcc0 body=63 status=ok
// SIG undefined FUN_14847dcc0(void)

void FUN_14847dcc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14847dd2e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14847dcff FUN_14847dcff body=47 status=ok
// SIG undefined FUN_14847dcff(void)

void FUN_14847dcff(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14847dd2e FUN_14847dd2e body=97 status=ok
// SIG undefined FUN_14847dd2e(void)

ulonglong FUN_14847dd2e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14847dd98 FUN_14847dd98 body=130 status=ok
// SIG undefined FUN_14847dd98(void)

void FUN_14847dd98(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  if (*(longlong *)(*(longlong *)(param_1[1] + 0x20) + lVar5 * 0x10) != 0) {
    lVar1 = *param_1;
    _Dst = (void *)FUN_14001cc68(0x800);
    lVar4 = 0;
    memset(_Dst,0,0x800);
    lVar2 = *(longlong *)(lVar1 + 0x18);
    lVar3 = *(longlong *)(lVar2 + lVar5 * 8);
    *(void **)(lVar2 + lVar5 * 8) = _Dst;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar5 * 8);
    do {
      LOCK();
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      UNLOCK();
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x200);
  }
  return;
}



// FUNCTION 14847de22 FUN_14847de22 body=1495 status=ok
// SIG undefined FUN_14847de22(void)

void FUN_14847de22(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_198 [32];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double *local_158;
  double *local_150;
  double *local_148;
  undefined4 local_134;
  ulonglong local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  ulonglong local_118;
  longlong *local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar27 = (uint)param_2;
  if (-1 < (int)uVar27) {
    plVar9 = (longlong *)*param_1;
    lVar10 = *plVar9;
    if ((int)uVar27 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144)) {
      uVar24 = param_2 >> 9 & 0x7fffff;
      uVar31 = (ulonglong)(uVar27 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x148) + uVar24 * 8) + uVar31 * 2
                             ) - 1U) < 0xfffe) {
        dVar16 = (double)*(float *)(param_1 + 1);
        dVar18 = (double)*(float *)((longlong)param_1 + 0xc);
        dVar17 = (double)*(float *)(param_1 + 2);
        fVar2 = *(float *)((longlong)param_1 + 0x14);
        if ((uVar27 * -0x3d70a3d7 >> 2 | uVar27 * 0x40000000) < 0x28f5c29) {
          pcVar15 = (code *)plVar9[0x14];
          plVar25 = plVar9 + 0x18;
          if ((longlong *)plVar9[0x16] != (longlong *)0x0) {
            plVar25 = (longlong *)plVar9[0x16];
          }
          uVar23 = (**(code **)(*plVar25 + 8))();
          cVar20 = (*pcVar15)(uVar23);
          if (cVar20 != '\0') {
            *(undefined1 *)param_1[7] = 1;
          }
        }
        if (*(char *)param_1[7] == '\0') {
          dVar33 = 1.0 / (double)fVar2;
          lVar10 = *(longlong *)(*plVar9 + 0x10);
          lVar11 = *(longlong *)(*(longlong *)(*plVar9 + 0x130) + uVar24 * 8);
          uVar27 = *(uint *)(lVar11 + uVar31 * 0xc);
          uVar26 = *(uint *)(lVar11 + 4 + uVar31 * 0xc);
          lVar12 = *(longlong *)(lVar10 + (ulonglong)(uVar27 >> 9) * 8);
          uVar24 = (ulonglong)uVar27 & 0x1ff;
          dVar3 = *(double *)(lVar12 + 8 + uVar24 * 0x18);
          dVar4 = *(double *)(lVar12 + 0x10 + uVar24 * 0x18);
          lVar13 = *(longlong *)(lVar10 + (ulonglong)(uVar26 >> 9) * 8);
          uVar30 = (ulonglong)uVar26 & 0x1ff;
          dVar5 = *(double *)(lVar13 + 8 + uVar30 * 0x18);
          dVar6 = *(double *)(lVar13 + 0x10 + uVar30 * 0x18);
          uVar27 = *(uint *)(lVar11 + 8 + uVar31 * 0xc);
          lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar27 >> 9) * 8);
          uVar31 = (ulonglong)uVar27 & 0x1ff;
          dVar35 = *(double *)(lVar10 + 8 + uVar31 * 0x18);
          dVar7 = *(double *)(lVar10 + 0x10 + uVar31 * 0x18);
          local_134 = 0;
          if (*(int *)((longlong)plVar9 + 0x8c) == 1) {
            local_134 = (undefined4)
                        CONCAT71((int7)((ulonglong)plVar9 >> 8),
                                 0.0 < (dVar6 - dVar4) * (dVar35 - dVar3) -
                                       (dVar5 - dVar3) * (dVar7 - dVar4));
          }
          dVar3 = (dVar3 - dVar18) * dVar33;
          dVar4 = (dVar4 - dVar17) * dVar33;
          dVar5 = (dVar5 - dVar18) * dVar33;
          dVar6 = (dVar6 - dVar17) * dVar33;
          dVar18 = (dVar35 - dVar18) * dVar33;
          dVar17 = (dVar7 - dVar17) * dVar33;
          uVar27 = *(int *)((longlong)param_1 + 0x1c) - 1;
          dVar35 = dVar3;
          if (dVar5 <= dVar3) {
            dVar35 = dVar5;
          }
          if (dVar18 <= dVar35) {
            dVar35 = dVar18;
          }
          local_11c = -((int)ROUND(-0.5 - (dVar35 + dVar35)) >> 1);
          if ((int)uVar27 <= (int)local_11c) {
            local_11c = uVar27;
          }
          local_118 = 0;
          if (0 < (int)local_11c) {
            local_118 = (ulonglong)local_11c;
          }
          dVar35 = dVar3;
          if (dVar3 <= dVar5) {
            dVar35 = dVar5;
          }
          if (dVar35 <= dVar18) {
            dVar35 = dVar18;
          }
          uVar26 = (int)ROUND(dVar35 + dVar35 + -0.5) >> 1;
          if ((int)uVar27 <= (int)uVar26) {
            uVar26 = uVar27;
          }
          uVar27 = (int)param_1[4] - 1;
          dVar35 = dVar4;
          if (dVar6 <= dVar4) {
            dVar35 = dVar6;
          }
          if (dVar17 <= dVar35) {
            dVar35 = dVar17;
          }
          uVar28 = -((int)ROUND(-0.5 - (dVar35 + dVar35)) >> 1);
          if ((int)uVar27 <= (int)uVar28) {
            uVar28 = uVar27;
          }
          dVar35 = dVar4;
          if (dVar4 <= dVar6) {
            dVar35 = dVar6;
          }
          if (dVar35 <= dVar17) {
            dVar35 = dVar17;
          }
          local_120 = (int)ROUND(dVar35 + dVar35 + -0.5) >> 1;
          if ((int)uVar27 <= (int)local_120) {
            local_120 = uVar27;
          }
          uVar27 = 0;
          if (0 < (int)local_120) {
            uVar27 = local_120;
          }
          if ((int)uVar28 <= (int)uVar27) {
            dVar35 = *(double *)(lVar12 + uVar24 * 0x18);
            dVar7 = *(double *)(lVar13 + uVar30 * 0x18);
            dVar8 = *(double *)(lVar10 + uVar31 * 0x18);
            local_130 = 0;
            local_124 = 0;
            if (0 < (int)uVar26) {
              local_124 = uVar26;
            }
            piVar14 = (int *)param_1[6];
            if (0 < (int)uVar28) {
              local_130 = (ulonglong)uVar28;
            }
            local_128 = (int)local_118 * 8;
            local_110 = param_1;
            do {
              if ((int)local_11c <= (int)local_124) {
                uVar28 = (uint)local_130;
                iVar19 = (int)(local_130 >> 3);
                uVar29 = (uVar28 & 7) << 6;
                uVar31 = local_118;
                uVar27 = local_128;
                do {
                  iVar32 = (int)uVar31;
                  local_148 = &local_108;
                  local_178 = dVar5;
                  local_170 = dVar6;
                  local_168 = dVar18;
                  local_160 = dVar17;
                  local_158 = &local_f8;
                  local_150 = &local_100;
                  cVar20 = FUN_146c661aa((double)iVar32,(double)(int)uVar28,dVar3,dVar4);
                  if (cVar20 != '\0') {
                    dVar34 = local_108 * (dVar8 - dVar16) * dVar33 +
                             local_f8 * (dVar35 - dVar16) * dVar33 +
                             local_100 * (dVar7 - dVar16) * dVar33;
                    iVar21 = (int)ROUND(-0.5 - (dVar34 + dVar34)) >> 1;
                    if (iVar21 < 1) {
                      uVar22 = -iVar21;
                      if ((int)uVar22 < (int)local_110[3]) {
                        uVar24 = (ulonglong)((uVar27 & 0x38 | uVar29) + (int)uVar22 % 8);
                        lVar10 = *(longlong *)
                                  (*(longlong *)(piVar14 + 6) +
                                  (longlong)
                                  (int)((piVar14[1] * iVar19 + ((uint)(uVar31 >> 3) & 0x1fffffff)) *
                                        *piVar14 + (uVar22 >> 3)) * 8);
                        if ((char)local_134 == '\0') {
                          LOCK();
                          piVar1 = (int *)(lVar10 + uVar24 * 4);
                          *piVar1 = *piVar1 + 1;
                          UNLOCK();
                        }
                        else {
                          LOCK();
                          piVar1 = (int *)(lVar10 + uVar24 * 4);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                        }
                      }
                    }
                    else {
                      uVar24 = (ulonglong)(uVar27 & 0x38 | uVar29);
                      lVar10 = *(longlong *)
                                (*(longlong *)(piVar14 + 6) +
                                (longlong)
                                (int)(piVar14[1] * iVar19 + ((uint)(uVar31 >> 3) & 0x1fffffff)) *
                                (longlong)*piVar14 * 8);
                      if ((char)local_134 == '\0') {
                        LOCK();
                        piVar1 = (int *)(lVar10 + uVar24 * 4);
                        *piVar1 = *piVar1 + 1;
                        UNLOCK();
                      }
                      else {
                        LOCK();
                        piVar1 = (int *)(lVar10 + uVar24 * 4);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                      }
                    }
                  }
                  uVar27 = uVar27 + 8;
                  uVar31 = (ulonglong)(iVar32 + 1);
                } while (iVar32 < (int)uVar26);
              }
              iVar19 = (int)local_130;
              local_130 = (ulonglong)(iVar19 + 1);
            } while (iVar19 < (int)local_120);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847e402 FUN_14847e402 body=144 status=ok
// SIG undefined FUN_14847e402(void)

void FUN_14847e402(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = (longlong)param_2;
  if (*(longlong *)(lVar1 + lVar5 * 8) != 0) {
    lVar3 = FUN_14847a654();
    lVar2 = *(longlong *)(lVar1 + lVar5 * 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + 4 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x200);
    if (*(longlong *)(lVar1 + lVar5 * 8) != 0) {
      *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 14847e49a FUN_14847e49a body=885 status=ok
// SIG undefined FUN_14847e49a(void)

void FUN_14847e49a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_1b8 [44];
  int local_18c;
  int local_188;
  int local_184;
  uint local_180 [64];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = *param_1;
  uVar6 = param_2 * -0x33333333 + 0x19999998;
  if ((uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x19999999) {
    pcVar4 = *(code **)(lVar2 + 0xa0);
    plVar9 = (longlong *)(lVar2 + 0xc0);
    if (*(longlong **)(lVar2 + 0xb0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar2 + 0xb0);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar4)(uVar7);
    if (cVar5 != '\0') {
      *(undefined1 *)param_1[5] = 1;
    }
  }
  if (*(char *)param_1[5] == '\0') {
    memset(local_180,0,0x100);
    local_184 = param_2 / *(int *)((longlong)param_1 + 0xc);
    local_188 = param_2 % *(int *)((longlong)param_1 + 0xc);
    local_18c = 0;
    if (0 < (int)param_1[1]) {
      auVar20 = pmovsxbd(unaff_XMM7,0x1010101);
      do {
        piVar3 = (int *)param_1[3];
        if (*(longlong *)
             (*(longlong *)(piVar3 + 8) +
             (longlong)((local_184 * piVar3[1] + local_188) * *piVar3 + local_18c) * 0x10) == 0) {
          lVar10 = 0;
          auVar17 = (undefined1  [16])0x0;
          do {
            if (*(int *)(lVar2 + 0x8c) == 1) {
              auVar18._0_4_ = -(uint)(0 < (int)local_180[lVar10]);
              auVar18._4_4_ = -(uint)(0 < (int)local_180[lVar10 + 1]);
              auVar18._8_4_ = -(uint)(0 < (int)local_180[lVar10 + 2]);
              auVar18._12_4_ = -(uint)(0 < (int)local_180[lVar10 + 3]);
            }
            else {
              auVar18 = (undefined1  [16])0x0;
            }
            if (*(int *)(lVar2 + 0x8c) == 0) {
              auVar19._0_4_ = -(uint)((local_180[lVar10] & 0x80000001) == auVar20._0_4_);
              auVar19._4_4_ = -(uint)((local_180[lVar10 + 1] & 0x80000001) == auVar20._4_4_);
              auVar19._8_4_ = -(uint)((local_180[lVar10 + 2] & 0x80000001) == auVar20._8_4_);
              auVar19._12_4_ = -(uint)((local_180[lVar10 + 3] & 0x80000001) == auVar20._12_4_);
            }
            else {
              auVar19 = (undefined1  [16])0x0;
            }
            auVar18 = (auVar18 | auVar19) & auVar20;
            auVar16._0_4_ = auVar17._0_4_ + auVar18._0_4_;
            auVar16._4_4_ = auVar17._4_4_ + auVar18._4_4_;
            auVar16._8_4_ = auVar17._8_4_ + auVar18._8_4_;
            auVar16._12_4_ = auVar17._12_4_ + auVar18._12_4_;
            lVar10 = lVar10 + 4;
            auVar17 = auVar16;
          } while (lVar10 != 0x40);
          auVar17 = phaddd(auVar16,auVar16);
          auVar17 = phaddd(auVar17,auVar17);
          if (auVar17._0_4_ != 0) {
            if (auVar17._0_4_ == 0x40) {
              FUN_14847e810(piVar3,&local_18c);
            }
            else {
              lVar10 = FUN_14847a568();
              lVar10 = lVar10 + 4;
              lVar8 = 0;
              do {
                lVar12 = 0;
                lVar11 = lVar10;
                do {
                  uVar6 = local_180[lVar12 + lVar8 * 8];
                  lVar15 = 0;
                  do {
                    if ((*(int *)(lVar2 + 0x8c) == 1 && 0 < (int)uVar6) ||
                       (*(int *)(lVar2 + 0x8c) == 0 && (uVar6 & 0x80000001) == 1)) {
                      *(uint *)(lVar11 + lVar15 * 4) = *(uint *)(lVar11 + lVar15 * 4) | 0x80000000;
                    }
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 8);
                  lVar12 = lVar12 + 1;
                  lVar11 = lVar11 + 0x20;
                } while (lVar12 != 8);
                lVar8 = lVar8 + 1;
                lVar10 = lVar10 + 0x100;
              } while (lVar8 != 8);
            }
          }
        }
        else {
          lVar10 = FUN_14847a568();
          piVar3 = (int *)param_1[4];
          lVar8 = *(longlong *)
                   (*(longlong *)(piVar3 + 8) +
                   (((longlong)local_184 * (longlong)piVar3[1] + (longlong)local_188) *
                    (longlong)*piVar3 + (longlong)local_18c) * 0x10) + 4;
          lVar10 = lVar10 + 4;
          lVar11 = 0;
          do {
            lVar13 = 0;
            lVar12 = lVar8;
            lVar15 = lVar10;
            do {
              lVar1 = lVar13 + lVar11 * 8;
              uVar6 = local_180[lVar1];
              lVar14 = 0;
              do {
                uVar6 = uVar6 + *(int *)(lVar12 + lVar14 * 4);
                if (((*(int *)(lVar2 + 0x8c) == 1) && (0 < (int)uVar6)) ||
                   ((*(int *)(lVar2 + 0x8c) == 0 && ((uVar6 & 0x80000001) == 1)))) {
                  *(uint *)(lVar15 + lVar14 * 4) = *(uint *)(lVar15 + lVar14 * 4) | 0x80000000;
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 != 8);
              local_180[lVar1] = uVar6;
              lVar13 = lVar13 + 1;
              lVar15 = lVar15 + 0x20;
              lVar12 = lVar12 + 0x20;
            } while (lVar13 != 8);
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0x100;
            lVar8 = lVar8 + 0x100;
          } while (lVar11 != 8);
        }
        local_18c = local_18c + 1;
      } while (local_18c < (int)param_1[1]);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847e810 FUN_14847e810 body=92 status=ok
// SIG undefined FUN_14847e810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14847e810(int *param_1,int *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = (((longlong)param_2[2] * (longlong)param_1[1] + (longlong)param_2[1]) * (longlong)*param_1
          + (longlong)*param_2) * 0x10;
  *(uint *)(lVar1 + 8 + lVar2) = *(uint *)(lVar1 + 8 + lVar2) | DAT_1499319e0;
  if (param_4 != '\0') {
    if (*(longlong *)(lVar1 + lVar2) != 0) {
      *(longlong *)(lVar1 + lVar2) = 0;
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 14847e86c FUN_14847e86c body=21 status=ok
// SIG undefined FUN_14847e86c(void)

ulonglong FUN_14847e86c(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14847e91a();
  return uVar1 ^ 0x8000000000000000;
}



// FUNCTION 14847e882 FUN_14847e882 body=86 status=ok
// SIG undefined FUN_14847e882(void)

undefined8 * FUN_14847e882(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14aee5480;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 14847e8de FUN_14847e8de body=29 status=ok
// SIG undefined FUN_14847e8de(void)

void FUN_14847e8de(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14847e8fc FUN_14847e8fc body=29 status=ok
// SIG undefined FUN_14847e8fc(void)

undefined8 FUN_14847e8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14847e91a FUN_14847e91a body=662 status=ok
// SIG undefined FUN_14847e91a(void)

double FUN_14847e91a(longlong param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  double *local_f8;
  double *local_f0;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar3 = *(double *)(param_1 + 0x20);
  dVar5 = (*param_2 - *(double *)(param_1 + 8)) / dVar3;
  iVar10 = (int)dVar5;
  if ((-1 < iVar10) && (iVar10 + 1 < *(int *)(param_1 + 0x28))) {
    dVar6 = (param_2[1] - *(double *)(param_1 + 0x10)) / dVar3;
    iVar12 = (int)dVar6;
    if ((-1 < iVar12) && (iVar1 = iVar12 + 1, iVar1 < *(int *)(param_1 + 0x2c))) {
      dVar3 = (param_2[2] - *(double *)(param_1 + 0x18)) / dVar3;
      iVar11 = (int)dVar3;
      if ((-1 < iVar11) && (iVar2 = iVar11 + 1, iVar2 < *(int *)(param_1 + 0x30))) {
        dVar5 = dVar5 - (double)iVar10;
        dVar6 = dVar6 - (double)iVar12;
        dVar3 = dVar3 - (double)iVar11;
        dVar4 = 1.0 - dVar5;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_14847ebb2(param_1,iVar10,iVar12,iVar11);
        dVar15 = local_e0 * dVar5;
        dVar8 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_14847ebb2(param_1,iVar10,iVar12,iVar2);
        dVar13 = local_e0 * dVar5;
        dVar9 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_14847ebb2(param_1,iVar10,iVar1,iVar11);
        dVar14 = local_e0 * dVar5;
        dVar7 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_14847ebb2(param_1,iVar10,iVar1,iVar2);
        dVar3 = (dVar4 * local_d8 + dVar5 * local_e0) * dVar3 * dVar6 +
                (dVar7 + dVar14) * (1.0 - dVar3) * dVar6 +
                (dVar9 + dVar13) * (1.0 - dVar6) * dVar3 +
                (dVar8 + dVar15) * (1.0 - dVar3) * (1.0 - dVar6);
        goto LAB_14847e9f1;
      }
    }
  }
  dVar3 = *(double *)(param_1 + 0x38);
LAB_14847e9f1:
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847ebb2 FUN_14847ebb2 body=290 status=ok
// SIG undefined FUN_14847ebb2(void)

void FUN_14847ebb2(longlong *param_1,int param_2,int param_3,int param_4,double *param_5,
                  double *param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  lVar3 = *param_1;
  iVar4 = param_4 + 7;
  if (-1 < param_4) {
    iVar4 = param_4;
  }
  iVar6 = param_3 + 7;
  if (-1 < param_3) {
    iVar6 = param_3;
  }
  iVar8 = param_2 + 7;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  iVar2 = (param_4 % 8) * 0x40 + (param_3 % 8) * 8;
  plVar7 = (longlong *)
           (*(longlong *)(lVar3 + 0x110) +
           (longlong)
           ((iVar8 >> 3) +
           (*(int *)(lVar3 + 0xf4) * (iVar4 >> 3) + (iVar6 >> 3)) * *(int *)(lVar3 + 0xf0)) * 0x10);
  lVar3 = *plVar7;
  pfVar5 = (float *)(lVar3 + 4 + (ulonglong)(uint)(param_2 % 8 + iVar2) * 4);
  if (lVar3 == 0) {
    pfVar5 = (float *)(plVar7 + 1);
  }
  *param_5 = (double)*pfVar5;
  lVar3 = *param_1;
  uVar1 = param_2 + 8;
  if (-1 < (int)(param_2 + 1U)) {
    uVar1 = param_2 + 1U;
  }
  plVar7 = (longlong *)
           (*(longlong *)(lVar3 + 0x110) +
           (longlong)
           (((int)uVar1 >> 3) +
           ((iVar4 >> 3) * *(int *)(lVar3 + 0xf4) + (iVar6 >> 3)) * *(int *)(lVar3 + 0xf0)) * 0x10);
  lVar3 = *plVar7;
  pfVar5 = (float *)(lVar3 + 4 + (ulonglong)((param_2 - (uVar1 & 0xfffffff8)) + 1 + iVar2) * 4);
  if (lVar3 == 0) {
    pfVar5 = (float *)(plVar7 + 1);
  }
  *param_6 = (double)*pfVar5;
  return;
}



// FUNCTION 14847ecd4 FUN_14847ecd4 body=194 status=ok
// SIG undefined FUN_14847ecd4(void)

undefined8 * FUN_14847ecd4(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = &PTR_FUN_14ae72420;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_14829364a;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 != '\0') {
    FUN_148276d54(param_1,0);
    param_1[2] = 1;
  }
  return param_1;
}



// FUNCTION 14847ed96 FUN_14847ed96 body=1077 status=ok
// SIG undefined FUN_14847ed96(void)

ulonglong FUN_14847ed96(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  int local_108;
  int local_100;
  longlong local_f8;
  double local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = FUN_14847f292();
  if (cVar4 != '\0') {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x74);
    iVar7 = iVar5 * 2;
    if (iVar9 <= iVar7) {
      iVar7 = 2;
      if (2 < iVar9 / 2) {
        iVar7 = iVar9 / 2;
      }
      iVar5 = iVar7 + -1;
      *(int *)(param_1 + 0x54) = iVar5;
      iVar7 = iVar7 * 2 + -2;
    }
    dVar16 = *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x68) + (param_2[5] - param_2[2]);
    dVar18 = *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0x60) + (param_2[4] - param_2[1]);
    dVar3 = *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x58) + (param_2[3] - *param_2);
    uVar11 = -(ulonglong)(dVar18 <= dVar3);
    dVar3 = (double)(~uVar11 & (ulonglong)dVar18 | (ulonglong)dVar3 & uVar11);
    uVar11 = -(ulonglong)(dVar16 <= dVar3);
    dVar3 = (double)(~uVar11 & (ulonglong)dVar16 | uVar11 & (ulonglong)dVar3);
    fVar12 = *(float *)(param_1 + 0x50);
    if (dVar3 / (double)fVar12 <= (double)(iVar9 - iVar7)) {
LAB_14847eefc:
      fVar14 = (float)iVar5 * fVar12;
      if ((*(int *)(param_1 + 0x78) == 2) && (fVar14 <= (float)*(double *)(param_1 + 0x80))) {
        fVar14 = (float)*(double *)(param_1 + 0x80);
      }
      fVar19 = DAT_14c846358 * fVar14;
      fVar20 = DAT_14c846350._4_4_ * fVar14;
      fVar14 = fVar14 * (float)DAT_14c846350;
      fVar13 = ((float)param_2[2] - fVar19) - (float)*(double *)(param_1 + 0x68);
      fVar15 = ((float)param_2[1] - fVar20) - (float)*(double *)(param_1 + 0x60);
      fVar17 = ((float)*param_2 - fVar14) - (float)*(double *)(param_1 + 0x58);
      *(float *)(param_1 + 0xe0) = fVar17;
      *(float *)(param_1 + 0xe4) = fVar15;
      *(float *)(param_1 + 0xe8) = fVar13;
      puVar1 = (undefined8 *)(param_1 + 0xe0);
      iVar9 = (int)((((float)param_2[3] + fVar14 + (float)*(double *)(param_1 + 0x58)) - fVar17) /
                   fVar12) + 1;
      iVar7 = (int)((((float)param_2[4] + fVar20 + (float)*(double *)(param_1 + 0x60)) - fVar15) /
                   fVar12) + 1;
      iVar10 = (int)((((float)param_2[5] + fVar19 + (float)*(double *)(param_1 + 0x68)) - fVar13) /
                    fVar12) + 1;
      if (*(int *)(param_1 + 0x78) != 2) {
        local_f8 = param_1 + 0xf0;
        if (*(longlong *)(param_1 + 8) == 0) {
          local_c8 = *(undefined4 *)(param_1 + 0xe8);
          local_d0 = *puVar1;
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar5);
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_14847fa60(param_1,&local_d0,local_d0,iVar9);
        }
        else {
          local_b8 = *(undefined4 *)(param_1 + 0xe8);
          local_c0 = *puVar1;
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar5);
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_14847f812(param_1,&local_c0,local_c0,iVar9);
        }
LAB_14847f111:
        if (*(char *)(param_1 + 0x88) == '\x01') {
          local_f0 = (double)(param_1 + 0x150);
          local_f8 = param_1 + 0xf0;
          local_d8 = *(undefined4 *)(param_1 + 0xe8);
          local_e0 = *puVar1;
          local_108 = iVar7;
          local_100 = iVar10;
          FUN_14847fcb6(param_1,&local_e0,*(undefined4 *)(param_1 + 0x50),iVar9);
        }
        FUN_14847ff38(param_1);
        pcVar2 = *(code **)(param_1 + 0xa0);
        plVar8 = (longlong *)(param_1 + 0xc0);
        if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0xb0);
        }
        uVar6 = (**(code **)(*plVar8 + 8))(plVar8);
        uVar11 = (*pcVar2)(uVar6);
        uVar11 = uVar11 ^ 1;
        goto LAB_14847f033;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        dVar3 = *(double *)(param_1 + 0x80);
        if ((dVar3 != 0.0) || (NAN(dVar3))) {
          local_f8 = param_1 + 0xf0;
          local_a8 = *(undefined4 *)(param_1 + 0xe8);
          local_b0 = *puVar1;
          local_108 = iVar7;
          local_100 = iVar10;
          local_f0 = dVar3;
          FUN_14847f37c(param_1,&local_b0,fVar12,iVar9);
          goto LAB_14847f111;
        }
      }
    }
    else {
      fVar12 = (float)(dVar3 / (double)(iVar9 - iVar7));
      *(float *)(param_1 + 0x50) = fVar12;
      if (0.0 < fVar12) {
        iVar5 = _finite((double)fVar12);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x54);
          fVar12 = *(float *)(param_1 + 0x50);
          goto LAB_14847eefc;
        }
      }
    }
  }
  uVar11 = 0;
LAB_14847f033:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847f1cc FUN_14847f1cc body=194 status=ok
// SIG undefined FUN_14847f1cc(void)

void FUN_14847f1cc(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14847979b(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_14847979b(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_14847936f(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xb0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00014847f283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14847f292 FUN_14847f292 body=233 status=ok
// SIG undefined FUN_14847f292(void)

undefined8 FUN_14847f292(longlong param_1,double *param_2)

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
          iVar1 != 0)) && (0.0 < *(float *)(param_1 + 0x50))) {
        iVar1 = _finite((double)*(float *)(param_1 + 0x50));
        if (iVar1 != 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),4 < *(int *)(param_1 + 0x74));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14847f37c FUN_14847f37c body=1172 status=ok
// SIG undefined FUN_14847f37c(void)

void FUN_14847f37c(undefined8 *param_1,undefined8 *param_2,float param_3,uint param_4,int param_5,
                  int param_6,int *param_7,double param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_1e8 [40];
  uint local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1a8;
  ulonglong local_1a0;
  char local_198;
  undefined7 uStack_197;
  undefined8 *local_188;
  char *local_180;
  longlong **local_178;
  longlong **local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  longlong *local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined8 uStack_137;
  longlong local_128;
  ulonglong uStack_120;
  longlong *local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 *local_f8;
  undefined8 **local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  uVar9 = (ulonglong)param_4;
  local_70 = DAT_14c707940 ^ (ulonglong)local_1e8;
  param_7[6] = (int)((float)(int)(param_5 + param_4 + param_6) * param_3);
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  local_1a8 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  FUN_148479620(local_1a8,uVar9,param_5,param_6);
  local_108 = 0;
  uStack_100 = 0;
  FUN_146bd3f9c(&local_108,param_7[1] * *param_7 * param_7[2],1);
  uStack_138 = 0;
  uStack_137 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  uStack_13f = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_110 = &local_108;
  FUN_148479a4c(&local_148,param_4,param_5,param_6);
  uStack_c8 = 0;
  uStack_c7 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  uStack_cf = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_148479a4c(&local_d8,uVar9,param_5,param_6);
  uStack_98 = 0;
  uStack_97 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_148479a4c(&local_a8,param_4,param_5,param_6);
  local_180 = &local_198;
  local_198 = '\0';
  local_1c0 = *(byte *)(param_1 + 0xe) ^ 1;
  local_f0 = &local_188;
  local_168 = (int *)CONCAT44(param_5,param_4);
  local_160._0_4_ = param_6;
  local_160._4_4_ = (undefined4)*param_2;
  uStack_158._0_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_158._4_4_ = *(undefined4 *)(param_2 + 1);
  local_1b8 = &local_e8;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = &LAB_14847ffa0;
  local_1a0 = uVar9;
  local_188 = param_1;
  local_178 = &local_d8;
  local_170 = &local_110;
  local_150 = param_3;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(*(longlong *)*param_1 + 8),1);
  if (local_198 == '\0') {
    FUN_1484790f8(&local_d8,&local_188);
    iVar8 = (int)local_180;
    if (local_188 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = 0;
    do {
      if (iVar8 < 1) break;
      pplVar5 = &local_d8 + (ulonglong)uVar7 * 6;
      uVar7 = 1 - uVar7;
      lVar6 = (longlong)&local_d8 + (ulonglong)(uVar7 * 0x30);
      FUN_14847a448(&local_148,pplVar5);
      FUN_14847a4d8(param_7,pplVar5);
      FUN_14847a5c4(local_1a8,pplVar5);
      *(undefined1 *)((longlong)&uStack_c7 + (ulonglong)(uVar7 * 0x30) + 7) = 0;
      FUN_148479a4c(lVar6,local_1a0,param_5,param_6);
      FUN_148479174(pplVar5,&local_198);
      local_1c0 = *(byte *)(param_1 + 0xe) ^ 1;
      local_178 = &local_110;
      local_168 = param_7;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = &LAB_148480280;
      local_1b8 = &local_e8;
      local_188 = param_1;
      local_180 = (char *)(((double)param_3 + (double)param_3) * 1.4142135623730951 + param_8);
      local_170 = &local_148;
      local_f0 = &local_188;
      local_160 = lVar6;
      uStack_158 = &local_198;
      FUN_1427ae281(L"ParallelFor Task",iVar8,1,&local_f8);
      FUN_1484790f8(lVar6,&local_188);
      iVar8 = (int)local_180;
      if (local_188 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      pcVar1 = (code *)param_1[0x14];
      plVar4 = (longlong *)param_1[0x16];
      if ((longlong *)param_1[0x16] == (longlong *)0x0) {
        plVar4 = param_1 + 0x18;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3);
      if (CONCAT71(uStack_197,local_198) != 0) {
        FUN_1400020a8();
      }
    } while (cVar2 == '\0');
  }
  lVar6 = 0x50;
  do {
    FUN_148479bf6(*(undefined8 *)((longlong)&local_d8 + lVar6),*(undefined4 *)(&uStack_d0 + lVar6));
    if (*(longlong *)((longlong)&local_d8 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x30;
  } while (lVar6 != -0x10);
  FUN_148479bf6(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_146bd42bb(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)local_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14847f812 FUN_14847f812 body=588 status=ok
// SIG undefined FUN_14847f812(void)

void FUN_14847f812(longlong param_1,undefined8 *param_2,float param_3,int param_4,int param_5,
                  uint param_6,longlong param_7,int param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_178 [32];
  int local_158;
  uint local_150;
  undefined8 *local_148;
  int local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong *local_128;
  undefined1 *local_120;
  longlong local_118;
  longlong *local_110;
  float local_108;
  float local_104;
  double local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [56];
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar5 = (float)(int)(param_5 + param_4 + param_6) * param_3;
  *(float *)(param_7 + 0x18) = fVar5;
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  FUN_148479620(param_1 + 0x120,param_4,param_5,param_6);
  local_b0 = *param_2;
  local_a8 = *(undefined4 *)(param_2 + 1);
  local_140 = param_8;
  local_148 = (undefined8 *)CONCAT44(local_148._4_4_,param_6);
  local_150 = param_5;
  local_158 = param_4;
  FUN_1484809a4(param_1,local_a0,&local_b0,param_3);
  local_150 = param_6;
  local_158 = param_5;
  FUN_148480b30(param_1,local_e8,local_a0,param_4);
  FUN_148480cac(local_e8,&local_f8);
  pcVar1 = *(code **)(param_1 + 0xa0);
  plVar4 = (longlong *)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0xb0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    local_100 = (double)param_3 * 1.4142135623730951 * (double)param_8;
    local_150 = *(byte *)(param_1 + 0x70) ^ 1;
    local_88 = &local_138;
    local_118 = param_7;
    local_148 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_90 = &LAB_148481820;
    local_138 = param_1;
    local_130 = param_2;
    local_128 = &local_f8;
    local_120 = local_e8;
    local_110 = local_a0;
    local_108 = param_3;
    local_104 = fVar5;
    FUN_1427ae281(L"ParallelFor Task",local_f0,1);
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_148480d5a(local_e8);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847fa60 FUN_14847fa60 body=597 status=ok
// SIG undefined FUN_14847fa60(void)

void FUN_14847fa60(longlong param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,longlong param_7,undefined4 param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_188 [32];
  int local_168;
  uint local_160;
  undefined8 *local_158;
  undefined4 local_150;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 *local_128;
  longlong local_120;
  undefined4 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  float local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [56];
  undefined8 local_a0;
  float local_98;
  longlong local_90 [2];
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  fVar5 = (float)param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(float *)(param_7 + 0x18) = (float)(int)(param_5 + param_4 + param_6) * fVar5;
  FUN_1484791f0(param_7,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  FUN_148479620(param_1 + 0x120,param_4,param_5,param_6);
  local_a0 = *(undefined8 *)param_2;
  local_98 = param_2[2];
  local_150 = param_8;
  local_158 = (undefined8 *)CONCAT44(local_158._4_4_,param_6);
  local_160 = param_5;
  local_168 = param_4;
  FUN_1484809a4(param_1,local_90,&local_a0,param_3);
  local_160 = param_6;
  local_168 = param_5;
  FUN_148480b30(param_1,local_d8,local_90,param_4);
  FUN_148480cac(local_d8,&local_e8);
  pcVar1 = *(code **)(param_1 + 0xa0);
  plVar4 = (longlong *)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0xb0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    local_f8 = 1.0 / (double)fVar5;
    local_100 = (double)param_2[2];
    local_108 = (double)param_2[1];
    local_110 = (double)*param_2;
    local_160 = *(byte *)(param_1 + 0x70) ^ 1;
    local_78 = &local_140;
    local_120 = param_7;
    local_118 = param_8;
    local_158 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = &LAB_148481d8c;
    local_140 = param_1;
    local_138 = local_90;
    local_130 = &local_e8;
    local_128 = local_d8;
    local_f0 = fVar5;
    FUN_1427ae281(L"ParallelFor Task",local_e0,1);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_148480d5a(local_d8);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847fcb6 FUN_14847fcb6 body=640 status=ok
// SIG undefined FUN_14847fcb6(void)

void FUN_14847fcb6(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong *param_7,undefined8 param_8)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  longlong local_80;
  undefined4 local_78;
  undefined1 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_c0 = *(undefined4 *)(param_2 + 1);
    local_c8 = *param_2;
    local_d0 = param_8;
    local_d8 = param_7;
    local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_6);
    local_e8 = CONCAT44(local_e8._4_4_,param_5);
    FUN_1484823ba(param_1,&local_c8,param_3);
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar4 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      local_e0 = param_7;
      local_e8 = param_8;
      FUN_148482576(param_1,param_4,param_5,param_6);
    }
  }
  else {
    FUN_14847d1f6(param_7,&local_80);
    local_a8 = param_7;
    local_a0 = *param_2;
    local_98 = (double)CONCAT44(param_3,*(undefined4 *)(param_2 + 1));
    local_60 = 0;
    local_58 = 0;
    local_70 = &LAB_1484827f8;
    local_e0 = (longlong *)(CONCAT44(local_e0._4_4_,(uint)*(byte *)(param_1 + 0x70)) ^ 1);
    local_d8 = &local_60;
    local_b8 = param_1;
    local_b0 = &local_80;
    local_68 = &local_b8;
    FUN_1427ae281(L"ParallelFor Task",local_78,1);
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar4 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      local_98 = (double)param_3 * 0.5 * 8.0;
      local_b0 = param_7;
      local_a8 = (longlong *)*param_2;
      local_a0 = CONCAT44(param_3,*(undefined4 *)(param_2 + 1));
      local_60 = 0;
      local_58 = 0;
      local_70 = &LAB_148482964;
      local_e0 = (longlong *)(CONCAT44(local_e0._4_4_,(uint)*(byte *)(param_1 + 0x70)) ^ 1);
      local_d8 = &local_60;
      local_b8 = param_1;
      local_90 = local_98;
      local_88 = local_98;
      local_68 = &local_b8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)((longlong)param_7 + 4) * (int)*param_7 * (int)param_7[1],1);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14847ff38 FUN_14847ff38 body=103 status=ok
// SIG undefined FUN_14847ff38(void)

void FUN_14847ff38(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_148479620(param_1 + 0x120,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130),
                  *(undefined4 *)(param_1 + 0x134));
  }
  if (*(char *)(param_1 + 0x91) != '\0') {
    return;
  }
  FUN_148479620(param_1 + 0x150,*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
                *(undefined4 *)(param_1 + 0x164));
  return;
}



// FUNCTION 14847ffa8 FUN_14847ffa8 body=362 status=ok
// SIG undefined FUN_14847ffa8(void)

void FUN_14847ffa8(longlong *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  
  if ((-1 < (int)param_2) &&
     (puVar5 = (undefined8 *)*param_1, (int)param_2 < *(int *)(*(longlong *)*puVar5 + 8))) {
    fVar1 = *(float *)((longlong)param_1 + 0x2c);
    fVar2 = *(float *)(param_1 + 6);
    fVar3 = *(float *)((longlong)param_1 + 0x34);
    fVar4 = *(float *)(param_1 + 7);
    if ((param_2 * 0x26e978d5 >> 3 | param_2 * -0x60000000) < 0x418938) {
      pcVar6 = (code *)puVar5[0x14];
      plVar13 = puVar5 + 0x18;
      if ((longlong *)puVar5[0x16] != (longlong *)0x0) {
        plVar13 = (longlong *)puVar5[0x16];
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      uVar8 = (*pcVar6)(uVar10);
      *(undefined1 *)param_1[1] = uVar8;
    }
    if (*(char *)param_1[1] == '\0') {
      dVar17 = 1.0 / (double)fVar4;
      lVar7 = **(longlong **)*puVar5;
      uVar14 = (ulonglong)param_2;
      iVar9 = (int)((*(double *)(lVar7 + 0x10 + uVar14 * 0x18) - (double)fVar3) * dVar17);
      iVar16 = (int)param_1[5] + -1;
      if (iVar9 < iVar16) {
        iVar16 = iVar9;
      }
      iVar9 = 0;
      if (iVar16 < 1) {
        iVar16 = iVar9;
      }
      iVar11 = (int)((*(double *)(lVar7 + 8 + uVar14 * 0x18) - (double)fVar2) * dVar17);
      iVar15 = *(int *)((longlong)param_1 + 0x24) + -1;
      if (iVar11 < iVar15) {
        iVar15 = iVar11;
      }
      if (iVar15 < 1) {
        iVar15 = iVar9;
      }
      iVar11 = (int)param_1[4] + -1;
      iVar12 = (int)((*(double *)(lVar7 + uVar14 * 0x18) - (double)fVar1) * dVar17);
      if (iVar12 < iVar11) {
        iVar11 = iVar12;
      }
      if (iVar11 < 1) {
        iVar11 = iVar9;
      }
      FUN_148480112(param_1[2],iVar11,iVar15,iVar16,1,param_1[3]);
    }
  }
  return;
}



// FUNCTION 148480112 FUN_148480112 body=220 status=ok
// SIG undefined FUN_148480112(void)

void FUN_148480112(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5,
                  undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = param_5;
  iVar2 = param_4 + 7;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  iVar1 = param_3 + 7;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  iVar3 = param_2 + 7;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  local_38 = (iVar3 >> 3) + ((iVar1 >> 3) + (iVar2 >> 3) * param_1[1]) * *param_1;
  local_3c = param_2 % 8 + (param_3 % 8) * 8 + (param_4 % 8) * 0x40;
  local_48 = (longlong)local_38 * 0x28 + *(longlong *)*param_6;
  FUN_1484801f0(param_1,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484801f0 FUN_1484801f0 body=144 status=ok
// SIG undefined FUN_1484801f0(void)

void FUN_1484801f0(undefined8 param_1,undefined4 *param_2,uint *param_3,char *param_4,
                  LPCRITICAL_SECTION param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  EnterCriticalSection(param_5);
  lVar3 = FUN_14847a1d2(param_1,*param_2);
  uVar1 = *param_3;
  lVar4 = lVar3 + 8;
  if (*(longlong *)(lVar3 + 0x808) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x808);
  }
  uVar5 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  uVar2 = *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4);
  uVar6 = uVar2 | 1 << (uVar1 & 0x1f);
  if (*param_4 == '\0') {
    uVar6 = uVar2 & ~(1 << (uVar1 & 0x1f));
  }
  *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4) = uVar6;
  if (param_5 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_5);
    return;
  }
  return;
}



// FUNCTION 148480288 FUN_148480288 body=1819 status=ok
// SIG undefined FUN_148480288(void)

void FUN_148480288(longlong *param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  double dVar19;
  undefined1 auStack_a38 [32];
  undefined1 local_a18;
  longlong local_a10;
  longlong *local_a00;
  longlong *local_9f8;
  int local_9ec;
  longlong local_9e8;
  longlong local_9e0;
  longlong local_9d8;
  longlong local_9d0;
  longlong local_9c8;
  ulonglong local_9c0;
  ulonglong local_9b8;
  ulonglong local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  undefined8 local_988;
  undefined1 *local_980;
  undefined8 local_978;
  undefined4 local_970;
  longlong local_968;
  undefined8 uStack_960;
  undefined8 local_958 [2];
  undefined8 local_948;
  undefined8 local_918 [2];
  undefined8 local_908;
  undefined1 local_8d8 [16];
  longlong local_8c8;
  longlong *local_8b8;
  longlong local_8a8 [7];
  undefined1 local_870 [2048];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a38;
  local_9d8 = *param_1;
  piVar11 = *(int **)(*(longlong *)param_1[6] + (longlong)param_2 * 8);
  iVar5 = *piVar11;
  piVar3 = (int *)param_1[4];
  lVar15 = (longlong)iVar5 * 0x10;
  local_9e0 = *(longlong *)(*(longlong *)(piVar3 + 8) + lVar15);
  local_9e8 = *(longlong *)(*(longlong *)(local_9d8 + 0x140) + lVar15);
  lVar15 = *(longlong *)(*(longlong *)(param_1[3] + 0x20) + lVar15);
  iVar17 = *piVar3;
  local_9c0 = (ulonglong)(uint)(iVar5 / (piVar3[1] * iVar17) << 3);
  local_9b8 = (ulonglong)
              (uint)((int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)iVar5 / (longlong)iVar17) >> 0x1f) <<
                            0x20 | (longlong)iVar5 / (longlong)iVar17 & 0xffffffffU) %
                          (longlong)piVar3[1]) << 3);
  local_9b0 = (ulonglong)(uint)(iVar5 % iVar17 << 3);
  piVar11 = piVar11 + 2;
  local_70 = 0;
  uStack_68 = 0;
  local_9f8 = param_1;
  FUN_14847ae5c(local_870,piVar11);
  local_9d0 = lVar15 + 8;
  local_9c8 = lVar15;
  FUN_14847af66(local_9d0,local_870,4,local_8d8);
  FUN_14847b3b4(piVar11,local_870,4,local_8d8);
  local_968 = 0;
  uStack_960 = 0;
  local_988 = 2.12199579096527e-314;
  local_978 = 2.12199579047121e-314;
  local_970 = 0;
  local_980 = local_870;
  if ((int)uStack_68 != 0) {
    FUN_14847b5ce(&local_988);
    if ((int)local_978._4_4_ < *(int *)(local_980 + 0x808)) {
      uVar9 = local_978._4_4_;
      do {
        uVar16 = uVar9 + 7;
        uVar18 = uVar9 + 0x3f;
        if (-1 < (int)uVar9) {
          uVar16 = uVar9;
          uVar18 = uVar9;
        }
        uVar4 = uVar9 + 0x1f;
        if (-1 < (int)uVar9) {
          uVar4 = uVar9;
        }
        lVar15 = *(longlong *)(local_9c8 + 0x808);
        if (*(longlong *)(local_9c8 + 0x808) == 0) {
          lVar15 = local_9d0;
        }
        puVar1 = (uint *)(lVar15 + (longlong)((int)uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
        iVar17 = ((int)uVar16 >> 3) % 8;
        fVar2 = *(float *)(local_9d8 + 0x50);
        local_990 = (double)((float)((int)local_9c0 + ((int)uVar18 >> 6)) * fVar2 +
                            *(float *)(local_9d8 + 0xe8));
        local_998 = (double)((float)(iVar17 + (int)local_9b8) * fVar2 + *(float *)(local_9d8 + 0xe4)
                            );
        local_9a0 = (double)((float)((int)uVar9 % 8 + (int)local_9b0) * fVar2 +
                            *(float *)(local_9d8 + 0xe0));
        plVar7 = *(longlong **)(local_9d8 + 8);
        local_918[0] = 0;
        local_908 = 0;
        FUN_146bee698(local_8d8,local_9f8[1],local_918);
        iVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_9a0,&local_9a8,local_8d8);
        if (local_8c8 != 0) {
          plVar7 = local_8b8;
          if (local_8b8 == (longlong *)0x0) {
            plVar7 = local_8a8;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (iVar5 != -1) {
          if (local_9a8 < 0.0) {
            dVar19 = sqrt(local_9a8);
          }
          else {
            dVar19 = SQRT(local_9a8);
          }
          uVar6 = uStack_960;
          *(float *)(local_9e0 + 4 + (ulonglong)uVar9 * 4) = (float)dVar19;
          *(int *)(local_9e8 + 4 + (ulonglong)uVar9 * 4) = iVar5;
          lVar15 = (longlong)(int)(uint)uStack_960;
          uVar16 = (uint)uStack_960 + 1;
          uStack_960 = CONCAT44(uStack_960._4_4_,uVar16);
          if (uStack_960._4_4_ < uVar16) {
            FUN_146bd546c(&local_968,uVar6 & 0xffffffff);
          }
          *(int *)(local_968 + lVar15 * 0xc) = (int)uVar9 % 8;
          *(int *)(local_968 + 4 + lVar15 * 0xc) = iVar17;
          *(int *)(local_968 + 8 + lVar15 * 0xc) = (int)uVar18 >> 6;
        }
        local_978 = (double)CONCAT44(local_978._4_4_,(uint)local_978 & ~local_988._4_4_);
        FUN_14847b5ce(&local_988);
        uVar9 = local_978._4_4_;
      } while ((int)local_978._4_4_ < *(int *)(local_980 + 0x808));
    }
  }
  while (0 < (int)(uint)uStack_960) {
    uVar6 = (ulonglong)(uint)uStack_960;
    local_9ec = *(int *)(local_968 + -0xc + uVar6 * 0xc);
    iVar5 = *(int *)(local_968 + -8 + uVar6 * 0xc);
    iVar17 = *(int *)(local_968 + -4 + uVar6 * 0xc);
    uStack_960._4_4_ = (uint)(uStack_960 >> 0x20);
    uStack_960 = CONCAT44(uStack_960._4_4_,(uint)uStack_960 - 1);
    lVar15 = 8;
    do {
      uVar9 = *(int *)((longlong)&DAT_149f3c870 + lVar15) + iVar17;
      uVar16 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar15 + 4) + iVar5;
      uVar18 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar15) + local_9ec;
      iVar14 = uVar9 + (int)local_9c0;
      iVar13 = uVar16 + (int)local_9b8;
      iVar8 = uVar18 + (int)local_9b0;
      if ((((int)uVar18 < 0) || ((int)uVar16 < 0)) || (7 < uVar9 || (7 < uVar16 || 7 < uVar18))) {
        if ((((-1 < iVar8) && (-1 < iVar13)) &&
            ((-1 < iVar14 &&
             ((lVar12 = local_9f8[5], iVar8 < *(int *)(lVar12 + 0xc) &&
              (iVar13 < *(int *)(lVar12 + 0x10))))))) && (iVar14 < *(int *)(lVar12 + 0x14))) {
          local_a10 = local_9f8[2];
          local_a18 = 1;
          FUN_148480112();
        }
      }
      else {
        uVar4 = uVar9 * 0x40 + uVar16 * 8;
        uVar10 = uVar4 | uVar18;
        lVar12 = *(longlong *)(local_9c8 + 0x808);
        if (*(longlong *)(local_9c8 + 0x808) == 0) {
          lVar12 = local_9d0;
        }
        uVar6 = (ulonglong)(uVar4 >> 5);
        uVar4 = *(uint *)(lVar12 + uVar6 * 4);
        if ((uVar4 >> (uVar10 & 0x1f) & 1) == 0) {
          *(uint *)(lVar12 + uVar6 * 4) = uVar4 | 1 << ((byte)uVar10 & 0x1f);
          fVar2 = *(float *)(local_9d8 + 0x50);
          local_978 = (double)((float)iVar14 * fVar2 + *(float *)(local_9d8 + 0xe8));
          local_980 = (undefined1 *)(double)((float)iVar13 * fVar2 + *(float *)(local_9d8 + 0xe4));
          local_988 = (double)((float)iVar8 * fVar2 + *(float *)(local_9d8 + 0xe0));
          local_a00 = *(longlong **)(local_9d8 + 8);
          local_958[0] = 0;
          local_948 = 0;
          FUN_146bee698(local_8d8,local_9f8[1],local_958);
          iVar8 = (**(code **)(*local_a00 + 0x20))(local_a00,&local_988,&local_9a0,local_8d8);
          local_a00 = (longlong *)CONCAT44(local_a00._4_4_,iVar8);
          if (local_8c8 != 0) {
            plVar7 = local_8b8;
            if (local_8b8 == (longlong *)0x0) {
              plVar7 = local_8a8;
            }
            (**(code **)(*plVar7 + 0x10))();
            iVar8 = (int)local_a00;
          }
          if (iVar8 != -1) {
            if (local_9a0 < 0.0) {
              dVar19 = sqrt(local_9a0);
              iVar8 = (int)local_a00;
            }
            else {
              dVar19 = SQRT(local_9a0);
            }
            uVar6 = uStack_960;
            *(float *)(local_9e0 + 4 + (ulonglong)uVar10 * 4) = (float)dVar19;
            *(int *)(local_9e8 + 4 + (ulonglong)uVar10 * 4) = iVar8;
            lVar12 = (longlong)(int)(uint)uStack_960;
            uVar4 = (uint)uStack_960 + 1;
            uStack_960 = CONCAT44(uStack_960._4_4_,uVar4);
            if (uStack_960._4_4_ < uVar4) {
              FUN_146bd546c(&local_968,uVar6 & 0xffffffff);
            }
            *(uint *)(local_968 + lVar12 * 0xc) = uVar18;
            *(uint *)(local_968 + 4 + lVar12 * 0xc) = uVar16;
            *(uint *)(local_968 + 8 + lVar12 * 0xc) = uVar9;
          }
        }
      }
      lVar15 = lVar15 + 0xc;
    } while (lVar15 != 0x140);
  }
  if (local_968 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484809a4 FUN_1484809a4 body=394 status=ok
// SIG undefined FUN_1484809a4(void)

undefined8 *
FUN_1484809a4(longlong *param_1,undefined8 *param_2,float *param_3,float param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong **local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 *local_a0;
  longlong **local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_148480d96(param_2,*(undefined4 *)(*(longlong *)(*param_1 + 8) + 8));
  local_e8 = &local_d8;
  local_d0 = param_8;
  local_cc = param_5;
  local_c8 = param_6;
  local_c4 = param_7;
  local_98 = &local_f0;
  local_f8 = &local_90;
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_148480f7a;
  local_100 = 0;
  local_f0 = param_1;
  local_e0 = param_2;
  local_d8 = param_1;
  local_c0 = 1.0 / (double)param_4;
  local_b8 = (double)fVar3;
  local_b0 = (double)fVar2;
  local_a8 = (double)fVar1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(*(longlong *)(*param_1 + 8) + 8),1);
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148480b30 FUN_148480b30 body=379 status=ok
// SIG undefined FUN_148480b30(void)

undefined8
FUN_148480b30(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_f8 [40];
  uint local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [24];
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_69 = 0;
  local_b8 = CONCAT44(param_5,param_4);
  local_b0 = CONCAT44(local_b0._4_4_,param_6);
  FUN_148481202(local_98,&local_b8,*(undefined1 *)(param_1 + 0x70));
  local_d0 = *(byte *)(param_1 + 0x70) ^ 1;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_14848148a;
  local_c8 = &local_58;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = local_98;
  local_a0 = &local_69;
  local_60 = &local_b8;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1,&local_68);
  FUN_148481324(param_2,local_98,*(undefined1 *)(param_1 + 0x70));
  local_d0 = *(byte *)(param_1 + 0x70) ^ 1;
  local_a0 = &local_69;
  local_58 = 0;
  local_50 = 0;
  local_68 = &LAB_14848166e;
  local_c8 = &local_58;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = (undefined1 *)param_2;
  local_60 = &local_b8;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1,&local_68);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148480cac FUN_148480cac body=173 status=ok
// SIG undefined FUN_148480cac(void)

longlong * FUN_148480cac(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x30);
  if (lVar3 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = (iVar1 + 1) - (uint)(*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar2) == 0);
      lVar2 = lVar2 + 0x10;
    } while (lVar3 << 4 != lVar2);
    *param_2 = 0;
    param_2[1] = 0;
    if (iVar1 != 0) {
      FUN_14481578e(param_2);
    }
    lVar4 = 8;
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar4) != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)lVar2;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar2);
  }
  return param_2;
}



// FUNCTION 148480d5a FUN_148480d5a body=60 status=ok
// SIG undefined FUN_148480d5a(void)

void FUN_148480d5a(longlong param_1)

{
  FUN_144716727(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148480d96 FUN_148480d96 body=153 status=ok
// SIG undefined FUN_148480d96(void)

void FUN_148480d96(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_148480e30(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x7fffffff7fffffff;
      puVar2[1] = 0x800000007fffffff;
      puVar2[2] = 0x8000000080000000;
      puVar2 = puVar2 + 3;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148480ec4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148480e30 FUN_148480e30 body=147 status=ok
// SIG undefined FUN_148480e30(void)

void FUN_148480e30(longlong param_1,int param_2)

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



// FUNCTION 148480ec4 FUN_148480ec4 body=63 status=ok
// SIG undefined FUN_148480ec4(void)

void FUN_148480ec4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148480f04(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 148480f04 FUN_148480f04 body=117 status=ok
// SIG undefined FUN_148480f04(void)

ulonglong FUN_148480f04(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 148480fbc FUN_148480fbc body=582 status=ok
// SIG undefined FUN_148480fbc(void)

void FUN_148480fbc(undefined8 *param_1,int param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  lVar7 = *(longlong *)(*(undefined8 **)*param_1)[1];
  lVar10 = (longlong)param_2;
  lVar11 = (longlong)*(int *)(lVar7 + lVar10 * 0xc);
  lVar3 = *(longlong *)**(undefined8 **)*param_1;
  lVar12 = (longlong)*(int *)(lVar7 + 4 + lVar10 * 0xc);
  lVar7 = (longlong)*(int *)(lVar7 + 8 + lVar10 * 0xc);
  dVar15 = (double)param_1[6];
  dVar18 = (double)param_1[5];
  dVar1 = (double)param_1[4];
  dVar2 = (double)param_1[3];
  dVar13 = (*(double *)(lVar3 + 0x10 + lVar11 * 0x18) - dVar15) * dVar2;
  dVar16 = (*(double *)(lVar3 + 8 + lVar11 * 0x18) - dVar18) * dVar2;
  dVar4 = (*(double *)(lVar3 + lVar11 * 0x18) - dVar1) * dVar2;
  dVar14 = (*(double *)(lVar3 + 0x10 + lVar12 * 0x18) - dVar15) * dVar2;
  dVar17 = (*(double *)(lVar3 + 8 + lVar12 * 0x18) - dVar18) * dVar2;
  dVar5 = (*(double *)(lVar3 + lVar12 * 0x18) - dVar1) * dVar2;
  dVar15 = (*(double *)(lVar3 + 0x10 + lVar7 * 0x18) - dVar15) * dVar2;
  dVar18 = (*(double *)(lVar3 + 8 + lVar7 * 0x18) - dVar18) * dVar2;
  dVar2 = (*(double *)(lVar3 + lVar7 * 0x18) - dVar1) * dVar2;
  iVar6 = *(int *)((longlong)param_1 + 0xc) + -1;
  uVar19 = SUB84(dVar4,0);
  uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if (dVar5 <= dVar4) {
    uVar19 = SUB84(dVar5,0);
    uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  if (dVar2 <= (double)CONCAT44(uVar20,uVar19)) {
    uVar19 = SUB84(dVar2,0);
    uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  iVar8 = (int)(double)CONCAT44(uVar20,uVar19) - *(int *)(param_1 + 1);
  if (iVar6 <= iVar8) {
    iVar8 = iVar6;
  }
  iVar6 = 0;
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  *param_3 = iVar8;
  dVar1 = dVar16;
  if (dVar17 <= dVar16) {
    dVar1 = dVar17;
  }
  if (dVar18 <= dVar1) {
    dVar1 = dVar18;
  }
  iVar8 = (int)dVar1 - *(int *)(param_1 + 1);
  if (*(int *)(param_1 + 2) + -1 <= (int)dVar1 - *(int *)(param_1 + 1)) {
    iVar8 = *(int *)(param_1 + 2) + -1;
  }
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  param_3[1] = iVar8;
  dVar1 = dVar13;
  if (dVar14 <= dVar13) {
    dVar1 = dVar14;
  }
  if (dVar15 <= dVar1) {
    dVar1 = dVar15;
  }
  iVar9 = *(int *)((longlong)param_1 + 0x14) + -1;
  iVar8 = (int)dVar1 - *(int *)(param_1 + 1);
  if (iVar9 <= (int)dVar1 - *(int *)(param_1 + 1)) {
    iVar8 = iVar9;
  }
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  param_3[2] = iVar8;
  iVar8 = *(int *)((longlong)param_1 + 0xc) + -1;
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  iVar9 = *(int *)(param_1 + 1) + (int)dVar4 + 1;
  if (iVar9 < iVar8) {
    iVar8 = iVar9;
  }
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  *param_4 = iVar8;
  if (dVar16 <= dVar17) {
    dVar16 = dVar17;
  }
  if (dVar16 <= dVar18) {
    dVar16 = dVar18;
  }
  iVar9 = *(int *)(param_1 + 1) + (int)dVar16 + 1;
  iVar8 = *(int *)(param_1 + 2) + -1;
  if (iVar9 < *(int *)(param_1 + 2) + -1) {
    iVar8 = iVar9;
  }
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  param_4[1] = iVar8;
  iVar8 = *(int *)((longlong)param_1 + 0x14) + -1;
  if (dVar13 <= dVar14) {
    dVar13 = dVar14;
  }
  if (dVar13 <= dVar15) {
    dVar13 = dVar15;
  }
  iVar9 = *(int *)(param_1 + 1) + (int)dVar13 + 1;
  if (iVar9 < iVar8) {
    iVar8 = iVar9;
  }
  if (iVar8 < 1) {
    iVar8 = iVar6;
  }
  param_4[2] = iVar8;
  return;
}



// FUNCTION 148481202 FUN_148481202 body=289 status=ok
// SIG undefined FUN_148481202(void)

int * FUN_148481202(int *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar5 = (((int)uVar4 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar4 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  iVar6 = (((int)uVar4 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  uVar4 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  iVar7 = (((int)uVar4 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  *param_1 = iVar5;
  param_1[1] = iVar6;
  param_1[2] = iVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  iVar7 = iVar6 * iVar5 * iVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14847c1e0(param_1 + 6,iVar7,CONCAT71((uint7)(uint3)(uVar1 >> 8),1));
  local_48 = *(undefined8 *)(param_1 + 6);
  local_38 = &local_48;
  local_58 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_14848147e;
  local_60 = (uint)(param_3 ^ 1);
  FUN_1427ae281(L"ParallelFor Task",iVar7,1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148481324 FUN_148481324 body=345 status=ok
// SIG undefined FUN_148481324(void)

int * FUN_148481324(int *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined8 *local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  int **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x14);
  uVar4 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar5 = (((int)uVar4 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar4 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  iVar6 = (((int)uVar4 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  uVar4 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar4 = uVar3;
  }
  iVar7 = (((int)uVar4 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  *param_1 = iVar5;
  param_1[1] = iVar6;
  param_1[2] = iVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  iVar7 = iVar6 * iVar5 * iVar7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140bfc200(param_1 + 10,iVar7,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
  FUN_14847c1e0(param_1 + 6,iVar7,1);
  local_60 = *(undefined8 *)(param_2 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 6);
  local_48 = &local_70;
  local_78 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_148481612;
  local_80 = (uint)(param_3 ^ 1);
  local_70 = param_1;
  local_58 = param_2;
  FUN_1427ae281(L"ParallelFor Task",iVar7,1);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148481492 FUN_148481492 body=383 status=ok
// SIG undefined FUN_148481492(void)

void FUN_148481492(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  
  lVar17 = *(longlong *)param_1[1];
  lVar9 = (longlong)param_2;
  if (((*(int *)(lVar17 + lVar9 * 0x18) <= *(int *)(lVar17 + 0xc + lVar9 * 0x18)) &&
      (piVar1 = (int *)(lVar17 + lVar9 * 0x18), piVar1[1] <= piVar1[4])) && (piVar1[2] <= piVar1[5])
     ) {
    if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      lVar17 = *param_1;
      pcVar4 = *(code **)(lVar17 + 0xa0);
      plVar10 = (longlong *)(lVar17 + 0xc0);
      if (*(longlong **)(lVar17 + 0xb0) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar17 + 0xb0);
      }
      uVar7 = (**(code **)(*plVar10 + 8))();
      uVar5 = (*pcVar4)(uVar7);
      *(undefined1 *)param_1[3] = uVar5;
    }
    if (*(char *)param_1[3] == '\0') {
      iVar15 = piVar1[2];
      iVar6 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar6 = iVar15;
      }
      iVar15 = *piVar1;
      iVar11 = piVar1[1];
      iVar8 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar8 = iVar11;
      }
      iVar11 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      iVar15 = piVar1[5];
      iVar13 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar13 = iVar15;
      }
      if (iVar6 >> 3 <= iVar13 >> 3) {
        iVar8 = iVar8 >> 3;
        iVar11 = iVar11 >> 3;
        iVar15 = piVar1[3];
        iVar3 = piVar1[4];
        iVar14 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar14 = iVar15;
        }
        iVar14 = iVar14 >> 3;
        iVar15 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar15 = iVar3;
        }
        piVar1 = (int *)param_1[2];
        iVar15 = iVar15 >> 3;
        iVar3 = iVar15;
        if (iVar15 < iVar8) {
          iVar3 = iVar8;
        }
        iVar12 = iVar14;
        if ((longlong)iVar14 <= (longlong)iVar11) {
          iVar12 = iVar11;
        }
        iVar6 = iVar6 >> 3;
        do {
          iVar16 = iVar8;
          if (iVar8 <= iVar15) {
            do {
              lVar17 = (longlong)iVar11;
              if (iVar11 <= iVar14) {
                do {
                  LOCK();
                  piVar2 = (int *)(*(longlong *)(piVar1 + 6) +
                                  ((longlong)(piVar1[1] * iVar6 + iVar16) * (longlong)*piVar1 +
                                  lVar17) * 4);
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                  lVar17 = lVar17 + 1;
                } while (iVar12 + 1 != (int)lVar17);
              }
              bVar18 = iVar16 != iVar3;
              iVar16 = iVar16 + 1;
            } while (bVar18);
          }
          bVar18 = iVar6 != iVar13 >> 3;
          iVar6 = iVar6 + 1;
        } while (bVar18);
      }
    }
  }
  return;
}



// FUNCTION 14848161a FUN_14848161a body=84 status=ok
// SIG undefined FUN_14848161a(void)

void FUN_14848161a(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(*param_1 + 0x28);
  lVar5 = (longlong)param_2;
  lVar4 = lVar5 * 0x10;
  uVar1 = *(uint *)(param_1[2] + lVar5 * 4);
  iVar2 = *(int *)(lVar3 + 8 + lVar4);
  *(uint *)(lVar3 + 8 + lVar4) = iVar2 + uVar1;
  if ((uint)(*(int *)(lVar3 + 0xc + lVar4) - iVar2) < uVar1) {
    FUN_1446f48e2();
  }
  LOCK();
  *(undefined4 *)(param_1[1] + lVar5 * 4) = 0;
  UNLOCK();
  return;
}



// FUNCTION 148481676 FUN_148481676 body=425 status=ok
// SIG undefined FUN_148481676(void)

void FUN_148481676(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  
  lVar18 = *(longlong *)param_1[1];
  lVar10 = (longlong)param_2;
  if (((*(int *)(lVar18 + lVar10 * 0x18) <= *(int *)(lVar18 + 0xc + lVar10 * 0x18)) &&
      (piVar1 = (int *)(lVar18 + lVar10 * 0x18), piVar1[1] <= piVar1[4])) &&
     (piVar1[2] <= piVar1[5])) {
    if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      lVar18 = *param_1;
      pcVar5 = *(code **)(lVar18 + 0xa0);
      plVar11 = (longlong *)(lVar18 + 0xc0);
      if (*(longlong **)(lVar18 + 0xb0) != (longlong *)0x0) {
        plVar11 = *(longlong **)(lVar18 + 0xb0);
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      uVar6 = (*pcVar5)(uVar8);
      *(undefined1 *)param_1[3] = uVar6;
    }
    if (*(char *)param_1[3] == '\0') {
      iVar15 = piVar1[2];
      iVar7 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      iVar15 = *piVar1;
      iVar12 = piVar1[1];
      iVar9 = iVar12 + 7;
      if (-1 < iVar12) {
        iVar9 = iVar12;
      }
      iVar12 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar12 = iVar15;
      }
      iVar15 = piVar1[5];
      iVar14 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar14 = iVar15;
      }
      if (iVar7 >> 3 <= iVar14 >> 3) {
        iVar9 = iVar9 >> 3;
        iVar12 = iVar12 >> 3;
        iVar15 = piVar1[3];
        iVar4 = piVar1[4];
        iVar16 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar16 = iVar15;
        }
        iVar16 = iVar16 >> 3;
        iVar15 = iVar4 + 7;
        if (-1 < iVar4) {
          iVar15 = iVar4;
        }
        piVar1 = (int *)param_1[2];
        iVar15 = iVar15 >> 3;
        iVar4 = iVar15;
        if (iVar15 < iVar9) {
          iVar4 = iVar9;
        }
        iVar13 = iVar16;
        if ((longlong)iVar16 <= (longlong)iVar12) {
          iVar13 = iVar12;
        }
        iVar7 = iVar7 >> 3;
        do {
          iVar19 = iVar9;
          if (iVar9 <= iVar15) {
            do {
              lVar18 = (longlong)iVar12;
              if (iVar12 <= iVar16) {
                do {
                  lVar10 = *(longlong *)(piVar1 + 10);
                  lVar17 = (longlong)(piVar1[1] * iVar7 + iVar19) * (longlong)*piVar1 + lVar18;
                  LOCK();
                  piVar2 = (int *)(*(longlong *)(piVar1 + 6) + lVar17 * 4);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                  *(int *)(*(longlong *)(lVar10 + lVar17 * 0x10) + (longlong)iVar3 * 4) = param_2;
                  lVar18 = lVar18 + 1;
                } while (iVar13 + 1 != (int)lVar18);
              }
              bVar20 = iVar19 != iVar4;
              iVar19 = iVar19 + 1;
            } while (bVar20);
          }
          bVar20 = iVar7 != iVar14 >> 3;
          iVar7 = iVar7 + 1;
        } while (bVar20);
      }
    }
  }
  return;
}



// FUNCTION 148481826 FUN_148481826 body=1191 status=ok
// SIG undefined FUN_148481826(void)

void FUN_148481826(longlong *param_1,int *param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStack_9b8 [36];
  uint local_994;
  uint local_990;
  uint local_98c;
  longlong local_988;
  longlong local_980;
  longlong local_978;
  longlong local_970;
  longlong local_968;
  double local_960;
  double local_958;
  double local_950;
  double local_948;
  uint *local_940;
  longlong local_938;
  undefined4 *local_930;
  uint local_924;
  uint local_920;
  uint local_91c;
  undefined8 local_918 [2];
  undefined8 local_908;
  uint local_8d8;
  uint uStack_8d4;
  uint uStack_8d0;
  uint uStack_8cc;
  undefined8 local_8c8;
  longlong *local_8b8;
  longlong local_8a8 [6];
  undefined4 local_878 [2];
  undefined1 local_870 [2048];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  lVar21 = *param_1;
  piVar6 = (int *)param_1[4];
  iVar15 = piVar6[3];
  iVar3 = piVar6[4];
  iVar4 = piVar6[5];
  iVar14 = *(int *)(*(longlong *)param_1[2] + (longlong)*param_2 * 4);
  local_970 = *(longlong *)(param_1[3] + 0x28);
  iVar13 = *piVar6;
  iVar5 = piVar6[1];
  iVar12 = iVar14 % iVar13;
  local_978 = (longlong)iVar14 << 4;
  iVar11 = iVar14 / (iVar5 * iVar13);
  local_98c = iVar11 * 8;
  iVar14 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)iVar14 / (longlong)iVar13) >> 0x1f) << 0x20 |
                 (longlong)iVar14 / (longlong)iVar13 & 0xffffffffU) % (longlong)iVar5);
  local_990 = iVar14 * 8;
  local_994 = iVar12 * 8;
  local_988 = FUN_14847a568(piVar6,(iVar5 * iVar11 + iVar14) * iVar13 + iVar12);
  local_980 = lVar21;
  local_968 = FUN_14847a654(lVar21 + 0x120,
                            (*(int *)(lVar21 + 0x124) * iVar11 + iVar14) * *(int *)(lVar21 + 0x120)
                            + iVar12);
  local_8d8 = local_8d8 & 0xffffff00;
  local_878[0] = 0xffffffff;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000000;
  FUN_14847a26a();
  local_924 = local_994;
  local_920 = local_990;
  local_91c = local_98c;
  iVar13 = iVar11 * 8 + 8;
  if (iVar13 < iVar4) {
    iVar4 = iVar13;
  }
  iVar14 = iVar14 * 8 + 8;
  if (iVar14 < iVar3) {
    iVar3 = iVar14;
  }
  iVar14 = iVar12 * 8 + 8;
  if (iVar14 < iVar15) {
    iVar15 = iVar14;
  }
  lVar21 = (longlong)*(int *)(local_970 + 8 + local_978);
  if (lVar21 != 0) {
    uVar20 = iVar4 - 1;
    uVar19 = iVar3 - 1;
    uVar24 = iVar15 - 1;
    lVar7 = *(longlong *)(local_970 + local_978);
    lVar23 = 0;
    do {
      lVar16 = (longlong)*(int *)(lVar7 + lVar23);
      puVar1 = (uint *)(*(longlong *)param_1[5] + lVar16 * 0x18);
      uVar8 = *(undefined8 *)(*(longlong *)param_1[5] + 0x10 + lVar16 * 0x18);
      local_8d8 = *puVar1;
      if ((int)uVar24 <= (int)*puVar1) {
        local_8d8 = uVar24;
      }
      if ((int)local_8d8 < (int)local_924) {
        local_8d8 = local_924;
      }
      uStack_8d4 = puVar1[1];
      if ((int)uVar19 <= (int)puVar1[1]) {
        uStack_8d4 = uVar19;
      }
      if ((int)uStack_8d4 < (int)local_920) {
        uStack_8d4 = local_920;
      }
      uStack_8d0 = puVar1[2];
      if ((int)uVar20 <= (int)puVar1[2]) {
        uStack_8d0 = uVar20;
      }
      if ((int)uStack_8d0 < (int)local_91c) {
        uStack_8d0 = local_91c;
      }
      uStack_8cc = puVar1[3];
      if ((int)uVar24 <= (int)puVar1[3]) {
        uStack_8cc = uVar24;
      }
      if ((int)uStack_8cc < (int)local_924) {
        uStack_8cc = local_924;
      }
      local_8c8._0_4_ = (uint)uVar8;
      if ((int)uVar19 <= (int)(uint)local_8c8) {
        local_8c8._0_4_ = uVar19;
      }
      if ((int)(uint)local_8c8 < (int)local_920) {
        local_8c8._0_4_ = local_920;
      }
      local_8c8._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar20 <= (int)local_8c8._4_4_) {
        local_8c8._4_4_ = uVar20;
      }
      if ((int)local_8c8._4_4_ < (int)local_91c) {
        local_8c8._4_4_ = local_91c;
      }
      local_940 = &local_924;
      local_938 = local_988;
      local_930 = local_878;
      FUN_148481cce(local_980,&local_8d8,&uStack_8cc,&local_940);
      lVar23 = lVar23 + 4;
    } while (lVar21 * 4 != lVar23);
  }
  lVar7 = local_980;
  lVar21 = local_988;
  uVar22 = 0;
  do {
    puVar17 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar17 = local_870;
    }
    if ((*(uint *)(puVar17 + (uVar22 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar22 & 0x1f) & 1) != 0) {
      fVar2 = *(float *)(param_1 + 6);
      pfVar9 = (float *)param_1[1];
      local_948 = (double)((float)(int)((uint)(uVar22 >> 6) & 0x3ffffff | local_98c) * fVar2 +
                          pfVar9[2]);
      local_950 = (double)((float)(int)((uint)(uVar22 >> 3) & 7 | local_990) * fVar2 + pfVar9[1]);
      local_958 = (double)((float)(int)((uint)uVar22 & 7 | local_994) * fVar2 + *pfVar9);
      plVar18 = *(longlong **)(lVar7 + 8);
      local_918[0] = 0;
      local_908 = 0;
      FUN_146bee698(&local_8d8,param_1[7],local_918);
      iVar15 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_958,&local_960,&local_8d8);
      if (local_8c8 != 0) {
        plVar18 = local_8b8;
        if (local_8b8 == (longlong *)0x0) {
          plVar18 = local_8a8;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (iVar15 == -1) {
        *(undefined4 *)(lVar21 + 4 + uVar22 * 4) = *(undefined4 *)((longlong)param_1 + 0x34);
      }
      else {
        if (local_960 < 0.0) {
          dVar10 = sqrt(local_960);
        }
        else {
          dVar10 = SQRT(local_960);
        }
        *(float *)(lVar21 + 4 + uVar22 * 4) = (float)dVar10;
        *(int *)(local_968 + 4 + uVar22 * 4) = iVar15;
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x200);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148481cce FUN_148481cce body=190 status=ok
// SIG undefined FUN_148481cce(void)

void FUN_148481cce(undefined8 param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar5 = param_2[2];
  iVar8 = param_3[2];
  if (iVar5 <= iVar8) {
    iVar6 = param_3[1];
    iVar10 = iVar5 << 6;
    do {
      iVar11 = param_2[1];
      if (iVar11 <= iVar6) {
        iVar7 = *param_3;
        iVar8 = iVar10 + iVar11 * 8;
        do {
          iVar9 = *param_2;
          if (*param_2 <= iVar7) {
            do {
              piVar2 = (int *)*param_4;
              iVar6 = (iVar8 + iVar9) - (piVar2[2] * 0x40 + piVar2[1] * 8 + *piVar2);
              lVar3 = *(longlong *)(param_4[2] + 0x808);
              lVar12 = param_4[2] + 8;
              if (lVar3 != 0) {
                lVar12 = lVar3;
              }
              iVar7 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar7 = iVar6;
              }
              puVar1 = (uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
              iVar7 = *param_3;
              bVar4 = iVar9 < iVar7;
              iVar9 = iVar9 + 1;
            } while (bVar4);
            iVar6 = param_3[1];
          }
          iVar8 = iVar8 + 8;
          bVar4 = iVar11 < iVar6;
          iVar11 = iVar11 + 1;
        } while (bVar4);
        iVar8 = param_3[2];
      }
      iVar10 = iVar10 + 0x40;
      bVar4 = iVar5 < iVar8;
      iVar5 = iVar5 + 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 148481d92 FUN_148481d92 body=1186 status=ok
// SIG undefined FUN_148481d92(void)

void FUN_148481d92(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_18c;
  undefined8 local_188;
  longlong *local_180;
  int *local_178;
  undefined8 local_170;
  longlong *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  undefined8 local_148;
  int *local_140;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar5 = (longlong *)*param_1;
  piVar6 = (int *)param_1[4];
  local_18c = piVar6[3];
  iVar13 = piVar6[4];
  iVar20 = piVar6[5];
  iVar4 = *(int *)(*(longlong *)param_1[2] + (longlong)*param_2 * 4);
  local_198 = *(longlong *)(param_1[3] + 0x28);
  iVar14 = *piVar6;
  iVar10 = piVar6[1];
  iVar21 = iVar4 % iVar14;
  iVar9 = iVar4 / (iVar10 * iVar14);
  iVar18 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)iVar4 / (longlong)iVar14) >> 0x1f) << 0x20 |
                 (longlong)iVar4 / (longlong)iVar14 & 0xffffffffU) % (longlong)iVar10);
  local_188 = FUN_14847a568(piVar6,(iVar10 * iVar9 + iVar18) * iVar14 + iVar21);
  iVar14 = local_18c;
  local_180 = plVar5;
  uVar11 = FUN_14847a654(plVar5 + 0x24,
                         (*(int *)((longlong)plVar5 + 0x124) * iVar9 + iVar18) * (int)plVar5[0x24] +
                         iVar21);
  local_c4 = iVar9 * 8;
  local_c8 = iVar18 * 8;
  local_cc = iVar21 * 8;
  iVar10 = iVar9 * 8 + 8;
  if (iVar10 < iVar20) {
    iVar20 = iVar10;
  }
  iVar10 = iVar18 * 8 + 8;
  if (iVar10 < iVar13) {
    iVar13 = iVar10;
  }
  iVar10 = iVar21 * 8 + 8;
  if (iVar10 < iVar14) {
    iVar14 = iVar10;
  }
  lVar22 = (longlong)*(int *)(local_198 + 8 + (longlong)iVar4 * 0x10);
  if (lVar22 != 0) {
    iVar20 = iVar20 + -1;
    iVar13 = iVar13 + -1;
    iVar14 = iVar14 + -1;
    local_198 = *(longlong *)(local_198 + (longlong)iVar4 * 0x10);
    lVar19 = 0;
    do {
      local_d0 = *(int *)(local_198 + lVar19);
      lVar12 = (longlong)local_d0;
      lVar17 = *(longlong *)((undefined8 *)*local_180)[1];
      lVar15 = (longlong)*(int *)(lVar17 + lVar12 * 0xc);
      lVar7 = **(longlong **)*local_180;
      lVar16 = (longlong)*(int *)(lVar17 + 4 + lVar12 * 0xc);
      lVar17 = (longlong)*(int *)(lVar17 + 8 + lVar12 * 0xc);
      dVar1 = (double)param_1[8];
      dVar2 = (double)param_1[6];
      dVar3 = (double)param_1[7];
      local_118 = (double)param_1[9];
      local_d8 = (*(double *)(lVar7 + 0x10 + lVar15 * 0x18) - dVar1) * local_118;
      local_e0 = (*(double *)(lVar7 + 8 + lVar15 * 0x18) - dVar3) * local_118;
      local_e8 = (*(double *)(lVar7 + lVar15 * 0x18) - dVar2) * local_118;
      local_f0 = (*(double *)(lVar7 + 0x10 + lVar16 * 0x18) - dVar1) * local_118;
      local_f8 = (*(double *)(lVar7 + 8 + lVar16 * 0x18) - dVar3) * local_118;
      local_100 = (*(double *)(lVar7 + lVar16 * 0x18) - dVar2) * local_118;
      local_108 = (*(double *)(lVar7 + 0x10 + lVar17 * 0x18) - dVar1) * local_118;
      local_110 = (*(double *)(lVar7 + 8 + lVar17 * 0x18) - dVar3) * local_118;
      local_118 = (*(double *)(lVar7 + lVar17 * 0x18) - dVar2) * local_118;
      uVar8 = *(undefined8 *)(*(longlong *)param_1[1] + 0x10 + lVar12 * 0x18);
      piVar6 = (int *)(*(longlong *)param_1[1] + lVar12 * 0x18);
      local_138 = *piVar6;
      if (iVar14 <= *piVar6) {
        local_138 = iVar14;
      }
      if (local_138 < local_cc) {
        local_138 = local_cc;
      }
      iStack_134 = piVar6[1];
      if (iVar13 <= piVar6[1]) {
        iStack_134 = iVar13;
      }
      if (iStack_134 < local_c8) {
        iStack_134 = local_c8;
      }
      iStack_130 = piVar6[2];
      if (iVar20 <= piVar6[2]) {
        iStack_130 = iVar20;
      }
      if (iStack_130 < local_c4) {
        iStack_130 = local_c4;
      }
      iStack_12c = piVar6[3];
      if (iVar14 <= piVar6[3]) {
        iStack_12c = iVar14;
      }
      if (iStack_12c < local_cc) {
        iStack_12c = local_cc;
      }
      local_128 = (int)uVar8;
      if (iVar13 <= local_128) {
        local_128 = iVar13;
      }
      if (local_128 < local_c8) {
        local_128 = local_c8;
      }
      iStack_124 = (int)((ulonglong)uVar8 >> 0x20);
      if (iVar20 <= iStack_124) {
        iStack_124 = iVar20;
      }
      if (iStack_124 < local_c4) {
        iStack_124 = local_c4;
      }
      local_178 = &local_cc;
      local_170 = local_188;
      local_160 = &local_e8;
      local_158 = &local_100;
      local_150 = &local_118;
      local_140 = &local_d0;
      local_168 = param_1 + 10;
      local_148 = uVar11;
      FUN_148482236(local_180,&local_138,&iStack_12c,&local_178);
      lVar19 = lVar19 + 4;
    } while (lVar22 * 4 != lVar19);
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148482236 FUN_148482236 body=190 status=ok
// SIG undefined FUN_148482236(void)

void FUN_148482236(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = param_2[2];
  iVar4 = param_3[2];
  local_2c = iVar3;
  if (iVar3 <= iVar4) {
    iVar2 = param_3[1];
    do {
      iVar5 = param_2[1];
      local_2c = iVar3;
      local_30 = iVar5;
      if (iVar5 <= iVar2) {
        iVar3 = *param_3;
        do {
          local_34 = *param_2;
          local_30 = iVar5;
          if (local_34 <= iVar3) {
            do {
              FUN_1484822f6(param_4,&local_34);
              iVar4 = local_34 + 1;
              iVar3 = *param_3;
              bVar1 = local_34 < iVar3;
              local_34 = iVar4;
            } while (bVar1);
            iVar2 = param_3[1];
          }
          iVar5 = local_30 + 1;
        } while (local_30 < iVar2);
        iVar4 = param_3[2];
        local_30 = iVar5;
      }
      iVar3 = local_2c + 1;
      bVar1 = local_2c < iVar4;
      local_2c = iVar3;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484822f6 FUN_1484822f6 body=195 status=ok
// SIG undefined FUN_1484822f6(void)

void FUN_1484822f6(undefined8 *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (double)param_2[2];
  piVar2 = (int *)*param_1;
  local_40 = (double)param_2[1];
  uVar3 = (ulonglong)
          (uint)((((param_2[2] - piVar2[2]) * 0x40 + *param_2) - *piVar2) +
                (param_2[1] - piVar2[1]) * 8);
  local_48 = (double)*param_2;
  fVar1 = *(float *)param_1[2];
  dVar4 = (double)FUN_146c65cab(&local_48,param_1[3],param_1[4],param_1[5]);
  if ((float)(dVar4 * (double)fVar1) < *(float *)(param_1[1] + 4 + uVar3 * 4)) {
    *(float *)(param_1[1] + 4 + uVar3 * 4) = (float)(dVar4 * (double)fVar1);
    *(undefined4 *)(param_1[6] + 4 + uVar3 * 4) = *(undefined4 *)param_1[7];
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484823ba FUN_1484823ba body=443 status=ok
// SIG undefined FUN_1484823ba(void)

void FUN_1484823ba(longlong *param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 auStack_128 [40];
  uint local_100;
  longlong **local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [24];
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_80;
  longlong **local_78;
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_148482af6(local_a8,param_7,(char)param_1[0xe]);
  local_b8 = &local_a9;
  local_a9 = 0;
  local_100 = *(byte *)(param_1 + 0xe) ^ 1;
  local_e8 = *param_2;
  local_e0 = (undefined4)param_2[1];
  local_d4 = param_5;
  local_d0 = param_6;
  local_c8 = param_8;
  local_f8 = (longlong **)&local_70;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 **)((ulonglong)local_68._4_4_ << 0x20);
  local_80 = &LAB_148482cac;
  local_f0 = param_1;
  local_dc = param_3;
  local_d8 = param_4;
  local_c0 = local_a8;
  local_78 = &local_f0;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(*(longlong *)(*param_1 + 8) + 8),1,&local_80);
  *(undefined4 *)(param_8 + 0x18) = 0;
  FUN_148479620(param_8,param_4,param_5,param_6);
  local_100 = *(byte *)(param_1 + 0xe) ^ 1;
  local_80 = param_8;
  local_f0 = (longlong *)0x0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_70 = &LAB_148483256;
  local_f8 = &local_f0;
  local_78 = (longlong **)local_a8;
  local_68 = &local_80;
  FUN_1427ae281(L"ParallelFor Task",local_88,1,&local_70);
  FUN_14847dcff(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148482576 FUN_148482576 body=641 status=ok
// SIG undefined FUN_148482576(void)

void FUN_148482576(longlong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6
                  )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_118 [40];
  uint local_f0;
  undefined8 *local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined1 *local_90;
  undefined1 local_81;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = param_3;
  if (*(byte *)(param_1 + 0x70) == 0) {
    if (0 < (int)param_4) {
      local_c8 = (longlong *)(param_1 + 0xc0);
      local_e0 = 0;
      local_d4 = param_4;
      local_d0 = param_1;
      do {
        pcVar1 = *(code **)(param_1 + 0xa0);
        plVar8 = *(longlong **)(param_1 + 0xb0);
        if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
          plVar8 = local_c8;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar1)(uVar6);
        if (cVar4 != '\0') break;
        param_1 = local_d0;
        if (0 < (int)local_d8) {
          uVar15 = local_e0 >> 3;
          local_c0 = (ulonglong)((local_e0 & 7) << 6);
          local_dc = 0;
          do {
            if (0 < (int)param_2) {
              uVar14 = local_dc >> 3;
              uVar5 = local_dc & 7;
              iVar2 = (int)local_c0;
              uVar11 = 0;
              uVar9 = 0;
              do {
                iVar3 = (int)(uVar11 >> 3);
                uVar12 = (ulonglong)((uint)uVar11 & 7 | iVar2 + uVar5 * 8);
                plVar13 = (longlong *)
                          ((longlong)(int)((param_5[1] * uVar15 + uVar14) * *param_5 + iVar3) * 0x10
                          + *(longlong *)(param_5 + 8));
                lVar7 = *plVar13;
                plVar8 = (longlong *)(lVar7 + 4 + uVar12 * 4);
                if (lVar7 == 0) {
                  plVar8 = plVar13 + 1;
                }
                uVar9 = uVar9 + (int)*plVar8;
                if (((*(int *)(param_1 + 0x8c) == 1) && (0 < (int)uVar9)) ||
                   ((*(int *)(param_1 + 0x8c) == 0 && ((uVar9 & 0x80000001) == 1)))) {
                  lVar7 = FUN_14847a568(param_6,(param_6[1] * uVar15 + uVar14) * *param_6 + iVar3);
                  *(uint *)(lVar7 + 4 + uVar12 * 4) = *(uint *)(lVar7 + 4 + uVar12 * 4) ^ 0x80000000
                  ;
                  param_1 = local_d0;
                }
                uVar10 = (uint)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
              } while (param_2 != uVar10);
            }
            local_dc = local_dc + 1;
          } while (local_dc != local_d8);
        }
        local_e0 = local_e0 + 1;
      } while (local_e0 != local_d4);
    }
  }
  else {
    local_90 = &local_81;
    local_81 = 0;
    local_b0 = *param_6;
    local_ac = param_6[1];
    local_a8 = param_6[2];
    local_f0 = *(byte *)(param_1 + 0x70) ^ 1;
    local_78 = &local_b8;
    local_a0 = param_6;
    local_98 = param_5;
    local_e8 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = &LAB_1484832ee;
    local_b8 = param_1;
    FUN_1427ae281(L"ParallelFor Task",local_a8 * local_ac,1);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148482800 FUN_148482800 body=354 status=ok
// SIG undefined FUN_148482800(void)

void FUN_148482800(longlong *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  int *local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *param_1;
  local_80 = *(int **)(*(longlong *)param_1[1] + (longlong)param_2 * 8);
  iVar2 = *local_80;
  iVar3 = *(int *)param_1[2];
  iVar4 = ((int *)param_1[2])[1];
  uVar10 = 0;
  do {
    fVar1 = *(float *)((longlong)param_1 + 0x24);
    local_68 = (double)((float)(int)(((uint)(uVar10 >> 6) & 0x3ffffff) +
                                    (iVar2 / (iVar4 * iVar3)) * 8) * fVar1 + *(float *)(param_1 + 4)
                       );
    local_70 = (double)((float)(int)((uint)(uVar10 >> 3) & 7 |
                                    (int)((longlong)
                                          ((ulonglong)
                                           (uint)((int)((longlong)iVar2 / (longlong)iVar3) >> 0x1f)
                                           << 0x20 | (longlong)iVar2 / (longlong)iVar3 & 0xffffffffU
                                          ) % (longlong)iVar4) << 3) * fVar1 +
                       *(float *)((longlong)param_1 + 0x1c));
    local_78 = (double)((float)(int)((uint)uVar10 & 7 | iVar2 % iVar3 << 3) * fVar1 +
                       *(float *)(param_1 + 3));
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar9 = *(longlong **)(lVar5 + 0x20);
    if (*(longlong **)(lVar5 + 0x20) == (longlong *)0x0) {
      plVar9 = (longlong *)(lVar5 + 0x30);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar7 = (*pcVar6)(uVar8,&local_78);
    if (cVar7 != '\0') {
      local_80[uVar10 + 1] = local_80[uVar10 + 1] ^ 0x80000000;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x200);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848296c FUN_14848296c body=393 status=ok
// SIG undefined FUN_14848296c(void)

void FUN_14848296c(longlong *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar4 = (int *)param_1[1];
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  iVar13 = param_2 % iVar2;
  iVar8 = param_2 / (iVar3 * iVar2);
  iVar12 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_2 / (longlong)iVar2) >> 0x1f) << 0x20 |
                 (longlong)param_2 / (longlong)iVar2 & 0xffffffffU) % (longlong)iVar3);
  if (*(longlong *)
       (*(longlong *)(piVar4 + 8) + (longlong)((iVar3 * iVar8 + iVar12) * iVar2 + iVar13) * 0x10) ==
      0) {
    fVar1 = *(float *)((longlong)param_1 + 0x1c);
    local_40 = (double)((float)(iVar8 * 8) * fVar1 + *(float *)(param_1 + 3)) + (double)param_1[6];
    local_48 = (double)((float)(iVar12 * 8) * fVar1 + *(float *)((longlong)param_1 + 0x14)) +
               (double)param_1[5];
    local_50 = (double)((float)(iVar13 * 8) * fVar1 + *(float *)(param_1 + 2)) + (double)param_1[4];
    lVar5 = *param_1;
    pcVar6 = *(code **)(lVar5 + 0x10);
    plVar10 = (longlong *)(lVar5 + 0x30);
    if (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar5 + 0x20);
    }
    uVar9 = (**(code **)(*plVar10 + 8))
                      (local_40,(longlong)param_2 % (longlong)(iVar3 * iVar2) & 0xffffffff);
    cVar7 = (*pcVar6)(uVar9,&local_50);
    if (cVar7 != '\0') {
      piVar4 = (int *)param_1[1];
      lVar5 = *(longlong *)(piVar4 + 8);
      lVar11 = (longlong)((iVar8 * piVar4[1] + iVar12) * *piVar4 + iVar13) * 0x10;
      *(uint *)(lVar5 + 8 + lVar11) = *(uint *)(lVar5 + 8 + lVar11) ^ 0x80000000;
      if (*(longlong *)(lVar5 + lVar11) != 0) {
        *(undefined8 *)(lVar5 + lVar11) = 0;
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148482af6 FUN_148482af6 body=298 status=ok
// SIG undefined FUN_148482af6(void)

int * FUN_148482af6(int *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined8 *local_68;
  int *local_58;
  int *local_50;
  undefined1 *local_48;
  int **local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar5 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar5 = uVar1;
  }
  iVar6 = (((int)uVar5 >> 3) + 1) - (uint)((uVar1 & 7) == 0);
  uVar5 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uVar7 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar7 = uVar3;
  }
  *param_1 = iVar6;
  param_1[1] = (((int)uVar5 >> 3) + 1) - (uint)((uVar2 & 7) == 0);
  param_1[2] = (((int)uVar7 >> 3) + 1) - (uint)((uVar3 & 7) == 0);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar4 = param_2[1] * *param_2 * param_2[2];
  FUN_14847db68(param_1 + 6,iVar4,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
  local_40 = &local_58;
  local_68 = &local_38;
  local_38 = 0;
  local_30 = 0;
  local_48 = &LAB_148482c22;
  local_70 = (uint)(param_3 ^ 1);
  local_58 = param_1;
  local_50 = param_2;
  FUN_1427ae281(L"ParallelFor Task",iVar4,1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148482c2a FUN_148482c2a body=130 status=ok
// SIG undefined FUN_148482c2a(void)

void FUN_148482c2a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  if (*(longlong *)(*(longlong *)(param_1[1] + 0x20) + lVar5 * 0x10) != 0) {
    lVar1 = *param_1;
    _Dst = (void *)FUN_14001cc68(0x800);
    lVar4 = 0;
    memset(_Dst,0,0x800);
    lVar2 = *(longlong *)(lVar1 + 0x18);
    lVar3 = *(longlong *)(lVar2 + lVar5 * 8);
    *(void **)(lVar2 + lVar5 * 8) = _Dst;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar5 * 8);
    do {
      LOCK();
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      UNLOCK();
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x200);
  }
  return;
}



// FUNCTION 148482cb4 FUN_148482cb4 body=1441 status=ok
// SIG undefined FUN_148482cb4(void)

void FUN_148482cb4(longlong *param_1,uint param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  undefined8 in_R10;
  uint uVar29;
  uint uVar30;
  int iVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_198 [32];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double *local_158;
  double *local_150;
  double *local_148;
  undefined4 local_134;
  longlong *local_130;
  ulonglong local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  ulonglong local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_130 = param_1;
  if ((-1 < (int)param_2) &&
     (plVar9 = (longlong *)*param_1, (int)param_2 < *(int *)(*(longlong *)(*plVar9 + 8) + 8))) {
    dVar13 = (double)*(float *)(param_1 + 1);
    dVar15 = (double)*(float *)((longlong)param_1 + 0xc);
    dVar14 = (double)*(float *)(param_1 + 2);
    fVar2 = *(float *)((longlong)param_1 + 0x14);
    if ((param_2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
      pcVar12 = (code *)plVar9[0x14];
      plVar23 = plVar9 + 0x18;
      if ((longlong *)plVar9[0x16] != (longlong *)0x0) {
        plVar23 = (longlong *)plVar9[0x16];
      }
      uVar22 = (**(code **)(*plVar23 + 8))();
      cVar17 = (*pcVar12)(uVar22);
      if (cVar17 != '\0') {
        *(undefined1 *)param_1[7] = 1;
      }
    }
    if (*(char *)param_1[7] == '\0') {
      dVar32 = 1.0 / (double)fVar2;
      lVar28 = *(longlong *)((undefined8 *)*plVar9)[1];
      uVar20 = (ulonglong)param_2;
      lVar24 = (longlong)*(int *)(lVar28 + uVar20 * 0xc);
      lVar10 = **(longlong **)*plVar9;
      dVar3 = *(double *)(lVar10 + 8 + lVar24 * 0x18);
      dVar4 = *(double *)(lVar10 + 0x10 + lVar24 * 0x18);
      lVar25 = (longlong)*(int *)(lVar28 + 4 + uVar20 * 0xc);
      dVar5 = *(double *)(lVar10 + 8 + lVar25 * 0x18);
      dVar6 = *(double *)(lVar10 + 0x10 + lVar25 * 0x18);
      lVar28 = (longlong)*(int *)(lVar28 + 8 + uVar20 * 0xc);
      dVar34 = *(double *)(lVar10 + 8 + lVar28 * 0x18);
      dVar7 = *(double *)(lVar10 + 0x10 + lVar28 * 0x18);
      local_134 = 0;
      if (*(int *)((longlong)plVar9 + 0x8c) == 1) {
        local_134 = (undefined4)
                    CONCAT71((int7)((ulonglong)in_R10 >> 8),
                             0.0 < (dVar6 - dVar4) * (dVar34 - dVar3) -
                                   (dVar5 - dVar3) * (dVar7 - dVar4));
      }
      dVar3 = (dVar3 - dVar15) * dVar32;
      dVar4 = (dVar4 - dVar14) * dVar32;
      dVar5 = (dVar5 - dVar15) * dVar32;
      dVar6 = (dVar6 - dVar14) * dVar32;
      dVar15 = (dVar34 - dVar15) * dVar32;
      dVar14 = (dVar7 - dVar14) * dVar32;
      uVar29 = *(int *)((longlong)local_130 + 0x1c) - 1;
      dVar34 = dVar3;
      if (dVar5 <= dVar3) {
        dVar34 = dVar5;
      }
      if (dVar15 <= dVar34) {
        dVar34 = dVar15;
      }
      local_114 = -((int)ROUND(-0.5 - (dVar34 + dVar34)) >> 1);
      if ((int)uVar29 <= (int)local_114) {
        local_114 = uVar29;
      }
      local_110 = 0;
      if (0 < (int)local_114) {
        local_110 = (ulonglong)local_114;
      }
      dVar34 = dVar3;
      if (dVar3 <= dVar5) {
        dVar34 = dVar5;
      }
      if (dVar34 <= dVar15) {
        dVar34 = dVar15;
      }
      uVar26 = (int)ROUND(dVar34 + dVar34 + -0.5) >> 1;
      if ((int)uVar29 <= (int)uVar26) {
        uVar26 = uVar29;
      }
      uVar29 = (int)local_130[4] - 1;
      dVar34 = dVar4;
      if (dVar6 <= dVar4) {
        dVar34 = dVar6;
      }
      if (dVar14 <= dVar34) {
        dVar34 = dVar14;
      }
      uVar30 = -((int)ROUND(-0.5 - (dVar34 + dVar34)) >> 1);
      if ((int)uVar29 <= (int)uVar30) {
        uVar30 = uVar29;
      }
      dVar34 = dVar4;
      if (dVar4 <= dVar6) {
        dVar34 = dVar6;
      }
      if (dVar34 <= dVar14) {
        dVar34 = dVar14;
      }
      local_118 = (int)ROUND(dVar34 + dVar34 + -0.5) >> 1;
      if ((int)uVar29 <= (int)local_118) {
        local_118 = uVar29;
      }
      uVar29 = 0;
      if (0 < (int)local_118) {
        uVar29 = local_118;
      }
      if ((int)uVar30 <= (int)uVar29) {
        dVar34 = *(double *)(lVar10 + lVar24 * 0x18);
        dVar7 = *(double *)(lVar10 + lVar25 * 0x18);
        dVar8 = *(double *)(lVar10 + lVar28 * 0x18);
        local_128 = 0;
        local_11c = 0;
        if (0 < (int)uVar26) {
          local_11c = uVar26;
        }
        piVar11 = (int *)local_130[6];
        if (0 < (int)uVar30) {
          local_128 = (ulonglong)uVar30;
        }
        local_120 = (int)local_110 * 8;
        do {
          if ((int)local_114 <= (int)local_11c) {
            uVar30 = (uint)local_128;
            iVar16 = (int)(local_128 >> 3);
            uVar27 = (uVar30 & 7) << 6;
            uVar20 = local_110;
            uVar29 = local_120;
            do {
              iVar31 = (int)uVar20;
              local_148 = &local_108;
              local_178 = dVar5;
              local_170 = dVar6;
              local_168 = dVar15;
              local_160 = dVar14;
              local_158 = &local_f8;
              local_150 = &local_100;
              cVar17 = FUN_146c661aa((double)iVar31,(double)(int)uVar30,dVar3,dVar4);
              if (cVar17 != '\0') {
                dVar33 = local_108 * (dVar8 - dVar13) * dVar32 +
                         local_f8 * (dVar34 - dVar13) * dVar32 +
                         local_100 * (dVar7 - dVar13) * dVar32;
                iVar18 = (int)ROUND(-0.5 - (dVar33 + dVar33)) >> 1;
                if (iVar18 < 1) {
                  uVar19 = -iVar18;
                  if ((int)uVar19 < (int)local_130[3]) {
                    uVar21 = (ulonglong)((uVar29 & 0x38 | uVar27) + (int)uVar19 % 8);
                    lVar28 = *(longlong *)
                              (*(longlong *)(piVar11 + 6) +
                              (longlong)
                              (int)((piVar11[1] * iVar16 + ((uint)(uVar20 >> 3) & 0x1fffffff)) *
                                    *piVar11 + (uVar19 >> 3)) * 8);
                    if ((char)local_134 == '\0') {
                      LOCK();
                      piVar1 = (int *)(lVar28 + uVar21 * 4);
                      *piVar1 = *piVar1 + 1;
                      UNLOCK();
                    }
                    else {
                      LOCK();
                      piVar1 = (int *)(lVar28 + uVar21 * 4);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                    }
                  }
                }
                else {
                  uVar21 = (ulonglong)(uVar29 & 0x38 | uVar27);
                  lVar28 = *(longlong *)
                            (*(longlong *)(piVar11 + 6) +
                            (longlong)
                            (int)(piVar11[1] * iVar16 + ((uint)(uVar20 >> 3) & 0x1fffffff)) *
                            (longlong)*piVar11 * 8);
                  if ((char)local_134 == '\0') {
                    LOCK();
                    piVar1 = (int *)(lVar28 + uVar21 * 4);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  else {
                    LOCK();
                    piVar1 = (int *)(lVar28 + uVar21 * 4);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                  }
                }
              }
              uVar29 = uVar29 + 8;
              uVar20 = (ulonglong)(iVar31 + 1);
            } while (iVar31 < (int)uVar26);
          }
          iVar16 = (int)local_128;
          local_128 = (ulonglong)(iVar16 + 1);
        } while (iVar16 < (int)local_118);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848325e FUN_14848325e body=144 status=ok
// SIG undefined FUN_14848325e(void)

void FUN_14848325e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = (longlong)param_2;
  if (*(longlong *)(lVar1 + lVar5 * 8) != 0) {
    lVar3 = FUN_14847a654();
    lVar2 = *(longlong *)(lVar1 + lVar5 * 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + 4 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x200);
    if (*(longlong *)(lVar1 + lVar5 * 8) != 0) {
      *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 1484832f6 FUN_1484832f6 body=885 status=ok
// SIG undefined FUN_1484832f6(void)

void FUN_1484832f6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_1b8 [44];
  int local_18c;
  int local_188;
  int local_184;
  uint local_180 [64];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = *param_1;
  uVar6 = param_2 * -0x33333333 + 0x19999998;
  if ((uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x19999999) {
    pcVar4 = *(code **)(lVar2 + 0xa0);
    plVar9 = (longlong *)(lVar2 + 0xc0);
    if (*(longlong **)(lVar2 + 0xb0) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar2 + 0xb0);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar4)(uVar7);
    if (cVar5 != '\0') {
      *(undefined1 *)param_1[5] = 1;
    }
  }
  if (*(char *)param_1[5] == '\0') {
    memset(local_180,0,0x100);
    local_184 = param_2 / *(int *)((longlong)param_1 + 0xc);
    local_188 = param_2 % *(int *)((longlong)param_1 + 0xc);
    local_18c = 0;
    if (0 < (int)param_1[1]) {
      auVar20 = pmovsxbd(unaff_XMM7,0x1010101);
      do {
        piVar3 = (int *)param_1[3];
        if (*(longlong *)
             (*(longlong *)(piVar3 + 8) +
             (longlong)((local_184 * piVar3[1] + local_188) * *piVar3 + local_18c) * 0x10) == 0) {
          lVar10 = 0;
          auVar17 = (undefined1  [16])0x0;
          do {
            if (*(int *)(lVar2 + 0x8c) == 1) {
              auVar18._0_4_ = -(uint)(0 < (int)local_180[lVar10]);
              auVar18._4_4_ = -(uint)(0 < (int)local_180[lVar10 + 1]);
              auVar18._8_4_ = -(uint)(0 < (int)local_180[lVar10 + 2]);
              auVar18._12_4_ = -(uint)(0 < (int)local_180[lVar10 + 3]);
            }
            else {
              auVar18 = (undefined1  [16])0x0;
            }
            if (*(int *)(lVar2 + 0x8c) == 0) {
              auVar19._0_4_ = -(uint)((local_180[lVar10] & 0x80000001) == auVar20._0_4_);
              auVar19._4_4_ = -(uint)((local_180[lVar10 + 1] & 0x80000001) == auVar20._4_4_);
              auVar19._8_4_ = -(uint)((local_180[lVar10 + 2] & 0x80000001) == auVar20._8_4_);
              auVar19._12_4_ = -(uint)((local_180[lVar10 + 3] & 0x80000001) == auVar20._12_4_);
            }
            else {
              auVar19 = (undefined1  [16])0x0;
            }
            auVar18 = (auVar18 | auVar19) & auVar20;
            auVar16._0_4_ = auVar17._0_4_ + auVar18._0_4_;
            auVar16._4_4_ = auVar17._4_4_ + auVar18._4_4_;
            auVar16._8_4_ = auVar17._8_4_ + auVar18._8_4_;
            auVar16._12_4_ = auVar17._12_4_ + auVar18._12_4_;
            lVar10 = lVar10 + 4;
            auVar17 = auVar16;
          } while (lVar10 != 0x40);
          auVar17 = phaddd(auVar16,auVar16);
          auVar17 = phaddd(auVar17,auVar17);
          if (auVar17._0_4_ != 0) {
            if (auVar17._0_4_ == 0x40) {
              FUN_14848366c(piVar3,&local_18c);
            }
            else {
              lVar10 = FUN_14847a568();
              lVar10 = lVar10 + 4;
              lVar8 = 0;
              do {
                lVar12 = 0;
                lVar11 = lVar10;
                do {
                  uVar6 = local_180[lVar12 + lVar8 * 8];
                  lVar15 = 0;
                  do {
                    if ((*(int *)(lVar2 + 0x8c) == 1 && 0 < (int)uVar6) ||
                       (*(int *)(lVar2 + 0x8c) == 0 && (uVar6 & 0x80000001) == 1)) {
                      *(uint *)(lVar11 + lVar15 * 4) = *(uint *)(lVar11 + lVar15 * 4) | 0x80000000;
                    }
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 8);
                  lVar12 = lVar12 + 1;
                  lVar11 = lVar11 + 0x20;
                } while (lVar12 != 8);
                lVar8 = lVar8 + 1;
                lVar10 = lVar10 + 0x100;
              } while (lVar8 != 8);
            }
          }
        }
        else {
          lVar10 = FUN_14847a568();
          piVar3 = (int *)param_1[4];
          lVar8 = *(longlong *)
                   (*(longlong *)(piVar3 + 8) +
                   (((longlong)local_184 * (longlong)piVar3[1] + (longlong)local_188) *
                    (longlong)*piVar3 + (longlong)local_18c) * 0x10) + 4;
          lVar10 = lVar10 + 4;
          lVar11 = 0;
          do {
            lVar13 = 0;
            lVar12 = lVar8;
            lVar15 = lVar10;
            do {
              lVar1 = lVar13 + lVar11 * 8;
              uVar6 = local_180[lVar1];
              lVar14 = 0;
              do {
                uVar6 = uVar6 + *(int *)(lVar12 + lVar14 * 4);
                if (((*(int *)(lVar2 + 0x8c) == 1) && (0 < (int)uVar6)) ||
                   ((*(int *)(lVar2 + 0x8c) == 0 && ((uVar6 & 0x80000001) == 1)))) {
                  *(uint *)(lVar15 + lVar14 * 4) = *(uint *)(lVar15 + lVar14 * 4) | 0x80000000;
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 != 8);
              local_180[lVar1] = uVar6;
              lVar13 = lVar13 + 1;
              lVar15 = lVar15 + 0x20;
              lVar12 = lVar12 + 0x20;
            } while (lVar13 != 8);
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0x100;
            lVar8 = lVar8 + 0x100;
          } while (lVar11 != 8);
        }
        local_18c = local_18c + 1;
      } while (local_18c < (int)param_1[1]);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848366c FUN_14848366c body=92 status=ok
// SIG undefined FUN_14848366c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14848366c(int *param_1,int *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = (((longlong)param_2[2] * (longlong)param_1[1] + (longlong)param_2[1]) * (longlong)*param_1
          + (longlong)*param_2) * 0x10;
  *(uint *)(lVar1 + 8 + lVar2) = *(uint *)(lVar1 + 8 + lVar2) | DAT_1499319e0;
  if (param_4 != '\0') {
    if (*(longlong *)(lVar1 + lVar2) != 0) {
      *(longlong *)(lVar1 + lVar2) = 0;
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 1484836c8 FUN_1484836c8 body=21 status=ok
// SIG undefined FUN_1484836c8(void)

ulonglong FUN_1484836c8(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_148483776();
  return uVar1 ^ 0x8000000000000000;
}



// FUNCTION 1484836de FUN_1484836de body=86 status=ok
// SIG undefined FUN_1484836de(void)

undefined8 * FUN_1484836de(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14aee54a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 14848373a FUN_14848373a body=29 status=ok
// SIG undefined FUN_14848373a(void)

void FUN_14848373a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148483758 FUN_148483758 body=29 status=ok
// SIG undefined FUN_148483758(void)

undefined8 FUN_148483758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148483776 FUN_148483776 body=662 status=ok
// SIG undefined FUN_148483776(void)

double FUN_148483776(longlong param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  double *local_f8;
  double *local_f0;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar3 = *(double *)(param_1 + 0x20);
  dVar5 = (*param_2 - *(double *)(param_1 + 8)) / dVar3;
  iVar10 = (int)dVar5;
  if ((-1 < iVar10) && (iVar10 + 1 < *(int *)(param_1 + 0x28))) {
    dVar6 = (param_2[1] - *(double *)(param_1 + 0x10)) / dVar3;
    iVar12 = (int)dVar6;
    if ((-1 < iVar12) && (iVar1 = iVar12 + 1, iVar1 < *(int *)(param_1 + 0x2c))) {
      dVar3 = (param_2[2] - *(double *)(param_1 + 0x18)) / dVar3;
      iVar11 = (int)dVar3;
      if ((-1 < iVar11) && (iVar2 = iVar11 + 1, iVar2 < *(int *)(param_1 + 0x30))) {
        dVar5 = dVar5 - (double)iVar10;
        dVar6 = dVar6 - (double)iVar12;
        dVar3 = dVar3 - (double)iVar11;
        dVar4 = 1.0 - dVar5;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_148483a0e(param_1,iVar10,iVar12,iVar11);
        dVar15 = local_e0 * dVar5;
        dVar8 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_148483a0e(param_1,iVar10,iVar12,iVar2);
        dVar13 = local_e0 * dVar5;
        dVar9 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_148483a0e(param_1,iVar10,iVar1,iVar11);
        dVar14 = local_e0 * dVar5;
        dVar7 = local_d8 * dVar4;
        local_f8 = &local_d8;
        local_f0 = &local_e0;
        FUN_148483a0e(param_1,iVar10,iVar1,iVar2);
        dVar3 = (dVar4 * local_d8 + dVar5 * local_e0) * dVar3 * dVar6 +
                (dVar7 + dVar14) * (1.0 - dVar3) * dVar6 +
                (dVar9 + dVar13) * (1.0 - dVar6) * dVar3 +
                (dVar8 + dVar15) * (1.0 - dVar3) * (1.0 - dVar6);
        goto LAB_14848384d;
      }
    }
  }
  dVar3 = *(double *)(param_1 + 0x38);
LAB_14848384d:
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148483a0e FUN_148483a0e body=290 status=ok
// SIG undefined FUN_148483a0e(void)

void FUN_148483a0e(longlong *param_1,int param_2,int param_3,int param_4,double *param_5,
                  double *param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  lVar3 = *param_1;
  iVar4 = param_4 + 7;
  if (-1 < param_4) {
    iVar4 = param_4;
  }
  iVar6 = param_3 + 7;
  if (-1 < param_3) {
    iVar6 = param_3;
  }
  iVar8 = param_2 + 7;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  iVar2 = (param_4 % 8) * 0x40 + (param_3 % 8) * 8;
  plVar7 = (longlong *)
           (*(longlong *)(lVar3 + 0x110) +
           (longlong)
           ((iVar8 >> 3) +
           (*(int *)(lVar3 + 0xf4) * (iVar4 >> 3) + (iVar6 >> 3)) * *(int *)(lVar3 + 0xf0)) * 0x10);
  lVar3 = *plVar7;
  pfVar5 = (float *)(lVar3 + 4 + (ulonglong)(uint)(param_2 % 8 + iVar2) * 4);
  if (lVar3 == 0) {
    pfVar5 = (float *)(plVar7 + 1);
  }
  *param_5 = (double)*pfVar5;
  lVar3 = *param_1;
  uVar1 = param_2 + 8;
  if (-1 < (int)(param_2 + 1U)) {
    uVar1 = param_2 + 1U;
  }
  plVar7 = (longlong *)
           (*(longlong *)(lVar3 + 0x110) +
           (longlong)
           (((int)uVar1 >> 3) +
           ((iVar4 >> 3) * *(int *)(lVar3 + 0xf4) + (iVar6 >> 3)) * *(int *)(lVar3 + 0xf0)) * 0x10);
  lVar3 = *plVar7;
  pfVar5 = (float *)(lVar3 + 4 + (ulonglong)((param_2 - (uVar1 & 0xfffffff8)) + 1 + iVar2) * 4);
  if (lVar3 == 0) {
    pfVar5 = (float *)(plVar7 + 1);
  }
  *param_6 = (double)*pfVar5;
  return;
}



// FUNCTION 148483b30 FUN_148483b30 body=147 status=ok
// SIG undefined FUN_148483b30(void)

void FUN_148483b30(longlong param_1,int param_2)

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



// FUNCTION 148483bc4 FUN_148483bc4 body=9 status=ok
// SIG undefined FUN_148483bc4(void)

void FUN_148483bc4(longlong param_1)

{
  FUN_145aba0b4(param_1 + 0x10);
  return;
}



// FUNCTION 148483bce FUN_148483bce body=29 status=ok
// SIG undefined FUN_148483bce(void)

undefined8 FUN_148483bce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148483bec FUN_148483bec body=46 status=ok
// SIG undefined FUN_148483bec(void)

void FUN_148483bec(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x10);
  return;
}



// FUNCTION 148483c1a FUN_148483c1a body=29 status=ok
// SIG undefined FUN_148483c1a(void)

undefined8 FUN_148483c1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148483c38 FUN_148483c38 body=25 status=ok
// SIG undefined FUN_148483c38(void)

undefined8 FUN_148483c38(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 148483c7c FUN_148483c7c body=29 status=ok
// SIG undefined FUN_148483c7c(void)

undefined8 FUN_148483c7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148483c9a FUN_148483c9a body=31 status=ok
// SIG undefined FUN_148483c9a(void)

undefined8 FUN_148483c9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148483cd6 FUN_148483cd6 body=93 status=ok
// SIG undefined FUN_148483cd6(void)

void FUN_148483cd6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aee5620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148483d34 FUN_148483d34 body=123 status=ok
// SIG undefined FUN_148483d34(void)

void FUN_148483d34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aee5620;
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



// FUNCTION 148483db0 FUN_148483db0 body=21 status=ok
// SIG undefined FUN_148483db0(void)

undefined8 FUN_148483db0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148483dd7 FUN_148483dd7 body=56 status=ok
// SIG undefined FUN_148483dd7(void)

void FUN_148483dd7(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_146be9400(param_1);
      if (*(longlong *)(param_1 + -0x18) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148483e10 FUN_148483e10 body=48 status=ok
// SIG undefined FUN_148483e10(void)

void FUN_148483e10(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148483e40 FUN_148483e40 body=69 status=ok
// SIG undefined FUN_148483e40(void)

void FUN_148483e40(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 148483e86 FUN_148483e86 body=132 status=ok
// SIG undefined FUN_148483e86(void)

void FUN_148483e86(longlong param_1,int param_2)

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



// FUNCTION 148483f0c FUN_148483f0c body=171 status=ok
// SIG undefined FUN_148483f0c(void)

longlong * FUN_148483f0c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  FUN_148473f18(param_1 + 3,param_2 + 1);
  param_1[5] = *param_3;
  iVar3 = (int)param_1[4];
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[3] + lVar4 * 8);
      uVar1 = *(uint *)(puVar2 + 1);
      if ((longlong)(int)uVar1 != 0) {
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + uVar1;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar1) {
          FUN_1446f48e2(param_1,iVar3);
        }
        memcpy((void *)((longlong)iVar3 * 4 + *param_1),(void *)*puVar2,(longlong)(int)uVar1 << 2);
        iVar3 = (int)param_1[4];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return param_1;
}



// FUNCTION 148483fb8 FUN_148483fb8 body=147 status=ok
// SIG undefined FUN_148483fb8(void)

void FUN_148483fb8(longlong param_1,int param_2)

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



// FUNCTION 14848404c FUN_14848404c body=23 status=ok
// SIG undefined FUN_14848404c(void)

void FUN_14848404c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7f7fffff7f7fffff;
    param_1[1] = &DAT_ff7fffffff7fffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148484064 FUN_148484064 body=132 status=ok
// SIG undefined FUN_148484064(void)

void FUN_148484064(longlong param_1,int param_2)

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



// FUNCTION 1484840ea FUN_1484840ea body=62 status=ok
// SIG undefined FUN_1484840ea(void)

void FUN_1484840ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148484128(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 148484128 FUN_148484128 body=93 status=ok
// SIG undefined FUN_148484128(void)

ulonglong FUN_148484128(uint param_1,uint param_2)

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



// FUNCTION 148484186 FUN_148484186 body=279 status=ok
// SIG undefined FUN_148484186(void)

undefined8 * FUN_148484186(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee57b0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 1;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  param_1[0x17] = 0x3f80000000000200;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0x3fd0000000000000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0x3ff8000000000000;
  param_1[0x1d] = 0x416312cfe0000000;
  param_1[0x1e] = 0x4046800000000000;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xffffffff00000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000;
  param_1[0x26] = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 14848429e FUN_14848429e body=38 status=ok
// SIG undefined FUN_14848429e(void)

undefined8 FUN_14848429e(undefined8 param_1,int param_2)

{
  FUN_1484842c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484842c4 FUN_1484842c4 body=181 status=ok
// SIG undefined FUN_1484842c4(void)

void FUN_1484842c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14aee57b0;
  FUN_146c81a14(param_1 + 0x2a);
  FUN_145a22d80(param_1 + 0x20);
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014848436e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14848437d FUN_14848437d body=56 status=ok
// SIG undefined FUN_14848437d(void)

void FUN_14848437d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_146be9400(param_1);
      if (*(longlong *)(param_1 + -0x18) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1484843b6 FUN_1484843b6 body=48 status=ok
// SIG undefined FUN_1484843b6(void)

void FUN_1484843b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1484843e6 FUN_1484843e6 body=171 status=ok
// SIG undefined FUN_1484843e6(void)

longlong * FUN_1484843e6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  FUN_148473f18(param_1 + 3,param_2 + 1);
  param_1[5] = *param_3;
  iVar3 = (int)param_1[4];
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[3] + lVar4 * 8);
      uVar1 = *(uint *)(puVar2 + 1);
      if ((longlong)(int)uVar1 != 0) {
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + uVar1;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar1) {
          FUN_1446f48e2(param_1,iVar3);
        }
        memcpy((void *)((longlong)iVar3 * 4 + *param_1),(void *)*puVar2,(longlong)(int)uVar1 << 2);
        iVar3 = (int)param_1[4];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return param_1;
}



// FUNCTION 148484492 FUN_148484492 body=147 status=ok
// SIG undefined FUN_148484492(void)

void FUN_148484492(longlong param_1,int param_2)

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



// FUNCTION 148484526 FUN_148484526 body=198 status=ok
// SIG undefined FUN_148484526(void)

undefined8 * FUN_148484526(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee5820;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x6400000400;
  *(undefined4 *)(param_1 + 0x15) = 0x400;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff00000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xffffffff00000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000;
  param_1[0x26] = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = DAT_14c84635c;
  return param_1;
}



// FUNCTION 1484845ec FUN_1484845ec body=38 status=ok
// SIG undefined FUN_1484845ec(void)

undefined8 FUN_1484845ec(undefined8 param_1,int param_2)

{
  FUN_148484612();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148484612 FUN_148484612 body=140 status=ok
// SIG undefined FUN_148484612(void)

void FUN_148484612(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14aee5820;
  FUN_145c21604(param_1 + 0x20);
  FUN_145a22d80(param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148484693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14848469e FUN_14848469e body=101 status=ok
// SIG undefined FUN_14848469e(void)

undefined8 * FUN_14848469e(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140cae46a(param_1,param_2);
  return param_1;
}



// FUNCTION 148484708 FUN_148484708 body=209 status=ok
// SIG undefined FUN_148484708(void)

undefined8 * FUN_148484708(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14aee5840;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 1;
  param_1[0x14] = 0x100000000000080;
  param_1[0x15] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff00000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff00000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x8000000000;
  param_1[0x27] = 0xffffffff;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = DAT_14c84635c;
  return param_1;
}



// FUNCTION 1484847da FUN_1484847da body=38 status=ok
// SIG undefined FUN_1484847da(void)

undefined8 FUN_1484847da(undefined8 param_1,int param_2)

{
  FUN_148484800();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148484800 FUN_148484800 body=140 status=ok
// SIG undefined FUN_148484800(void)

void FUN_148484800(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14aee5840;
  FUN_145c21604(param_1 + 0x21);
  FUN_145a22d80(param_1 + 0x17);
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148484881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14848488c FUN_14848488c body=465 status=ok
// SIG undefined FUN_14848488c(void)

undefined8
FUN_14848488c(double *param_1,double *param_2,double *param_3,undefined4 param_4,double *param_5)

{
  double dVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146bfcd44(param_1,&local_98,param_4);
  dVar4 = param_3[2] * local_88 + *param_3 * local_98 + local_90 * param_3[1];
  uVar3 = -(ulonglong)(-dVar4 <= dVar4);
  dVar5 = 1.79769313486232e+308;
  if (1e-08 <= (double)(~uVar3 & (ulonglong)-dVar4 | uVar3 & (ulonglong)dVar4)) {
    dVar4 = -((local_88 * param_2[2] + local_98 * *param_2 + local_90 * param_2[1]) -
             (param_1[2] * local_88 + *param_1 * local_98 + param_1[1] * local_90)) / dVar4;
    if (0.0 <= dVar4) {
      dVar1 = param_2[2] + param_3[2] * dVar4;
      dVar6 = param_2[1] + param_3[1] * dVar4;
      dVar5 = *param_2 + *param_3 * dVar4;
      uVar2 = 1;
      goto LAB_148484a08;
    }
  }
  uVar2 = 0;
  dVar6 = 1.79769313486232e+308;
  dVar1 = 1.79769313486232e+308;
LAB_148484a08:
  *param_5 = dVar5;
  param_5[1] = dVar6;
  param_5[2] = dVar1;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148484a5e FUN_148484a5e body=108 status=ok
// SIG undefined FUN_148484a5e(void)

void FUN_148484a5e(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,0x10);
  }
  return;
}



// FUNCTION 148484aca FUN_148484aca body=143 status=ok
// SIG undefined FUN_148484aca(void)

void FUN_148484aca(longlong param_1,int param_2)

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



// FUNCTION 148484b5a FUN_148484b5a body=41 status=ok
// SIG undefined FUN_148484b5a(void)

void FUN_148484b5a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148484be6();
  return;
}



// FUNCTION 148484b84 FUN_148484b84 body=97 status=ok
// SIG undefined FUN_148484b84(void)

void FUN_148484b84(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_148484be6(param_1,1);
    iVar2 = (int)param_1[1];
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_148484c46(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return;
}



// FUNCTION 148484be6 FUN_148484be6 body=95 status=ok
// SIG undefined FUN_148484be6(void)

void FUN_148484be6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 148484c46 FUN_148484c46 body=132 status=ok
// SIG undefined FUN_148484c46(void)

void FUN_148484c46(longlong param_1,int param_2)

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



// FUNCTION 148484ccc FUN_148484ccc body=767 status=ok
// SIG undefined FUN_148484ccc(void)

ulonglong FUN_148484ccc(double *param_1,double *param_2)

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
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  
  dVar13 = param_1[1];
  if ((longlong)*(int *)(param_1 + 4) == 0) {
    dVar13 = SQRT((param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
                  (param_2[1] - dVar13) * (param_2[1] - dVar13) +
                  (*param_2 - *param_1) * (*param_2 - *param_1));
    uVar12 = CONCAT44((int)((ulonglong)dVar13 >> 0x20),(float)dVar13);
  }
  else {
    dVar7 = param_1[3];
    dVar1 = *param_1;
    dVar2 = param_1[2];
    dVar3 = param_2[2];
    dVar4 = *param_2;
    dVar5 = param_2[1];
    uVar12 = 0x7f7fffff;
    lVar11 = 0;
    do {
      dVar6 = *(double *)((longlong)dVar7 + 0x10 + lVar11);
      dVar8 = dVar6 - dVar2;
      dVar14 = *(double *)((longlong)dVar7 + 8 + lVar11);
      dVar10 = dVar14 - dVar13;
      dVar15 = *(double *)((longlong)dVar7 + lVar11) - dVar1;
      fVar16 = (float)(dVar8 * (dVar3 - dVar2) +
                      dVar15 * (dVar4 - dVar1) + (dVar5 - dVar13) * dVar10);
      dVar9 = (dVar2 - dVar3) * (dVar2 - dVar3) +
              (dVar13 - dVar5) * (dVar13 - dVar5) + (dVar1 - dVar4) * (dVar1 - dVar4);
      if (0.0 < fVar16) {
        fVar17 = (float)(dVar8 * dVar8 + dVar15 * dVar15 + dVar10 * dVar10);
        if (fVar17 <= fVar16) {
          dVar15 = *(double *)((longlong)dVar7 + lVar11) - dVar4;
          dVar14 = dVar14 - dVar5;
          dVar6 = dVar6 - dVar3;
          dVar9 = dVar6 * dVar6 + dVar14 * dVar14 + dVar15 * dVar15;
        }
        else {
          dVar14 = (double)(fVar16 / fVar17);
          dVar6 = (dVar15 * dVar14 + dVar1) - dVar4;
          dVar15 = (dVar10 * dVar14 + dVar13) - dVar5;
          dVar14 = (dVar8 * dVar14 + dVar2) - dVar3;
          dVar9 = dVar14 * dVar14 + dVar15 * dVar15 + dVar6 * dVar6;
        }
      }
      if ((float)SQRT(dVar9) <= (float)uVar12) {
        uVar12 = (ulonglong)(uint)(float)SQRT(dVar9);
      }
      lVar11 = lVar11 + 0x18;
    } while ((longlong)*(int *)(param_1 + 4) * 0x18 != lVar11);
  }
  return uVar12;
}



// FUNCTION 148484fcc FUN_148484fcc body=528 status=ok
// SIG undefined FUN_148484fcc(void)

void FUN_148484fcc(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146ba0128(**(undefined8 **)(param_1 + 8),&local_90);
  if (local_90 <= local_78) {
    if (local_88 <= local_70) {
      if (local_80 <= local_68) {
        fVar5 = (float)*(double *)(param_1 + 0x10);
        fVar9 = (float)*(int *)(param_1 + 0x18) * fVar5;
        fVar6 = DAT_14c846358 * fVar9;
        fVar8 = DAT_14c846350._4_4_ * fVar9;
        fVar9 = fVar9 * (float)DAT_14c846350;
        fVar4 = (float)local_80 - fVar6;
        fVar7 = (float)local_88 - fVar8;
        fVar10 = (float)local_90 - fVar9;
        *(float *)(param_1 + 0x70) = fVar10;
        *(float *)(param_1 + 0x74) = fVar7;
        *(float *)(param_1 + 0x78) = fVar4;
        iVar3 = (int)((((float)local_78 + fVar9) - fVar10) / fVar5);
        if ((-2 < iVar3) && (iVar1 = (int)(((fVar8 + (float)local_70) - fVar7) / fVar5), -2 < iVar1)
           ) {
          iVar2 = (int)(((fVar6 + (float)local_68) - fVar4) / fVar5);
          if (-2 < iVar2) {
            local_c8 = iVar1 + 1;
            local_c0 = iVar2 + 1;
            local_b8 = param_1 + 0x80;
            if (*(int *)(param_1 + 0x1c) == 0) {
              local_98 = *(undefined4 *)(param_1 + 0x78);
              local_a0 = *(undefined8 *)(param_1 + 0x70);
              FUN_148485294(param_1);
            }
            else {
              local_a8 = *(undefined4 *)(param_1 + 0x78);
              local_b0 = *(undefined8 *)(param_1 + 0x70);
              FUN_1484853b4(param_1,&local_b0,local_b8,iVar3 + 1);
            }
          }
        }
        if (*(char *)(param_1 + 0x24) == '\0') {
          FUN_148485bc0(param_1 + 0xa0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484851de FUN_1484851de body=95 status=ok
// SIG undefined FUN_1484851de(void)

longlong * FUN_1484851de(longlong *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1484862be(0,param_3 * param_2 * param_4);
  *(int *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  *(int *)(param_1 + 3) = param_4;
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*param_1 + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  return param_1;
}



// FUNCTION 14848523e FUN_14848523e body=81 status=ok
// SIG undefined FUN_14848523e(void)

void FUN_14848523e(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1483ba754(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x000148485284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148485294 FUN_148485294 body=286 status=ok
// SIG undefined FUN_148485294(void)

void FUN_148485294(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined1 *local_80;
  undefined1 local_71;
  undefined1 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a12820(param_7,param_5 * param_4 * param_6,1);
  *(int *)(param_7 + 0x10) = param_4;
  *(int *)(param_7 + 0x14) = param_5;
  *(int *)(param_7 + 0x18) = param_6;
  FUN_146bef8a8(*(undefined8 *)(param_1 + 8),0);
  local_80 = &local_71;
  local_71 = 0;
  local_68 = &local_a0;
  local_98 = *param_2;
  local_90 = *(undefined4 *)(param_2 + 1);
  local_88 = param_7;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_148485c2c;
  local_b0 = 0;
  local_a0 = param_1;
  local_8c = param_3;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_7 + 0x14) * *(int *)(param_7 + 0x10) * *(int *)(param_7 + 0x18),1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484853b4 FUN_1484853b4 body=2058 status=ok
// SIG undefined FUN_1484853b4(void)

void FUN_1484853b4(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,longlong *param_7)

{
  float fVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_258 [40];
  undefined4 local_230;
  longlong *local_228;
  int local_218;
  int local_214;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 local_189;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [48];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 *local_100;
  longlong **local_f8;
  undefined1 local_f0 [40];
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_218 = param_6 * param_5;
  local_208 = param_2;
  FUN_144a12820(param_7,local_218 * param_4,1);
  *(int *)(param_7 + 2) = param_4;
  *(int *)((longlong)param_7 + 0x14) = param_5;
  *(int *)(param_7 + 3) = param_6;
  if (0 < (int)param_7[1]) {
    lVar9 = 0;
    do {
      *(undefined4 *)(*param_7 + lVar9 * 4) = 0x7f7fffff;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_7[1]);
  }
  FUN_146bef8a8(param_1[1],0);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_146ffcba0(param_1 + 0x20,param_1 + 6);
  FUN_146ba0128(*(undefined8 *)param_1[1],local_150);
  FUN_1483ba382(param_1 + 0x14,local_150);
  pcVar3 = (code *)param_1[6];
  plVar13 = param_1 + 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  cVar5 = (*pcVar3)(uVar10);
  if (cVar5 == '\0') {
    local_200 = param_1 + 0x2a;
    local_f0._8_8_ = &local_1f8;
    local_1f0 = *local_208;
    iStack_1e8 = (int)local_208[1];
    local_1e0 = (longlong *)CONCAT44(param_5,param_4);
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,param_6);
    local_1d0 = param_7;
    local_c8 = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    local_f0._0_8_ = &LAB_148485d96;
    local_230 = 0;
    local_228 = &local_c8;
    local_1f8 = param_1;
    uStack_1e4 = param_3;
    local_1c8 = local_200;
    FUN_1401f8d10(L"ParallelFor Task",local_218,1);
    pcVar3 = (code *)param_1[6];
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = plVar13;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar5 = (*pcVar3)(uVar10);
    if (cVar5 == '\0') {
      local_160 = 0;
      local_168 = 0;
      local_15c = (int)param_7[2] + -1;
      local_158 = *(int *)((longlong)param_7 + 0x14) + -1;
      local_154 = (int)param_7[3] + -1;
      local_178 = 0;
      uStack_170 = 0;
      local_210 = plVar13;
      FUN_1403ed7b2(&local_178,
                    *(int *)((longlong)param_7 + 0x14) * (int)param_7[2] * (int)param_7[3],
                    CONCAT71((uint7)(uint3)((uint)local_154 >> 8),1));
      local_188 = 0;
      uStack_180 = 0;
      if (0 < (int)uStack_170) {
        lVar9 = 0;
        iVar6 = (int)uStack_170;
        do {
          uVar4 = uStack_180;
          fVar1 = *(float *)(*param_7 + lVar9 * 4);
          if ((fVar1 != 3.4028235e+38) || (NAN(fVar1))) {
            lVar12 = (longlong)(int)uStack_180;
            uVar7 = (int)uStack_180 + 1;
            uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
            if (uStack_180._4_4_ < uVar7) {
              FUN_1446f48e2(&local_188,uVar4 & 0xffffffff);
            }
            *(int *)(local_188 + lVar12 * 4) = (int)lVar9;
            *(undefined1 *)(local_178 + lVar9) = 1;
            iVar6 = (int)uStack_170;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
      plVar13 = local_210;
      pcVar3 = (code *)param_1[6];
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = local_210;
      }
      (**(code **)(*plVar11 + 8))();
      cVar5 = (*pcVar3)();
      if (cVar5 == '\0') {
        local_a8 = 0;
        local_a0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_9c = 0xffffffff00000080;
        local_94 = 0;
        local_88 = 0;
        local_80 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)local_f0);
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_f0,4000);
        pcVar3 = (code *)param_1[6];
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar13;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        cVar5 = (*pcVar3)(uVar10);
        if (cVar5 == '\0') {
          local_214 = param_4;
          do {
            iVar6 = local_214;
            local_189 = 0;
            iStack_1e8 = (int)local_208[1];
            local_1f0 = *local_208;
            local_1e0 = (longlong *)CONCAT44(param_5,local_214);
            uStack_1d8 = CONCAT44(uStack_1d8._4_4_,param_6);
            local_1d0 = param_7;
            local_1c8 = local_200;
            local_1c0 = &local_168;
            local_1b8 = &local_178;
            local_1b0 = &local_188;
            local_1a0 = local_f0;
            local_198 = &local_189;
            local_120 = 0;
            uStack_118 = (undefined1 *)((ulonglong)uStack_118 & 0xffffffff00000000);
            local_100 = &LAB_148485f56;
            local_f8 = &local_1f8;
            local_228 = &local_120;
            local_230 = 0;
            local_1f8 = param_1;
            uStack_1e4 = param_3;
            local_1a8 = &local_c8;
            FUN_1401f8d10(L"ParallelFor Task",uStack_180 & 0xffffffff,1,&local_100);
            if ((int)uStack_c0 == local_94) {
              pcVar3 = (code *)param_1[6];
              if ((longlong *)param_1[8] != (longlong *)0x0) {
                plVar13 = (longlong *)param_1[8];
              }
              uVar10 = (**(code **)(*plVar13 + 8))(plVar13);
              cVar5 = (*pcVar3)(uVar10);
              if (cVar5 == '\0') {
                local_1f0 = CONCAT44(param_5,iVar6);
                iStack_1e8 = param_6;
                local_1e0 = param_7;
                local_120 = 0;
                uStack_118 = (undefined1 *)((ulonglong)uStack_118 & 0xffffffff00000000);
                local_100 = &LAB_148486236;
                local_f8 = &local_1f8;
                local_228 = &local_120;
                local_230 = 0;
                local_1f8 = param_1;
                FUN_1401f8d10(L"ParallelFor Task",local_218,1);
              }
              break;
            }
            local_120 = 0x100000000;
            local_110._0_4_ = 0xffffffff;
            local_110._4_4_ = 0;
            uStack_108 = 0;
            uStack_118 = local_b8;
            if (local_a0 == 0) {
              iVar6 = 0;
            }
            else {
              FUN_1449c0562(&local_120);
              iVar6 = local_a0;
            }
            uStack_1d8 = CONCAT44(uStack_104,uStack_108);
            local_1e0._0_4_ = (uint)local_110;
            local_1e0._4_4_ = local_110._4_4_;
            local_1f0._0_4_ = (undefined4)local_120;
            local_1f0._4_4_ = local_120._4_4_;
            iStack_1e8 = (int)uStack_118;
            uStack_1e4 = uStack_118._4_4_;
            local_1f8 = &local_c8;
            if ((local_110._4_4_ != iVar6) || (uStack_118 != local_b8)) {
              do {
                *(undefined1 *)(local_178 + *(int *)(*local_1f8 + (longlong)local_1e0._4_4_ * 0xc))
                     = 1;
                local_1e0._0_4_ = (uint)local_1e0 & ~local_1f0._4_4_;
                FUN_1449c0562(&local_1f0);
              } while (local_1f8 != &local_c8 ||
                       ((undefined1 *)CONCAT44(uStack_1e4,iStack_1e8) != local_b8 ||
                       local_1e0._4_4_ != iVar6));
            }
            bVar14 = (longlong)uStack_180 < 0;
            uStack_180 = uStack_180 & 0xffffffff00000000;
            if (bVar14) {
              FUN_14481578e(&local_188,0);
            }
            local_120 = 0x100000000;
            local_110 = (longlong *)&DAT_ffffffff;
            uStack_108 = 0;
            if (local_a0 == 0) {
              iVar6 = 0;
              uStack_118 = local_b8;
            }
            else {
              uStack_118 = local_b8;
              FUN_1449c0562(&local_120);
              iVar6 = local_a0;
            }
            uStack_1d8 = CONCAT44(uStack_104,uStack_108);
            local_1e0 = local_110;
            plVar13 = local_1e0;
            local_1f0 = local_120;
            iStack_1e8 = (int)uStack_118;
            uStack_1e4 = uStack_118._4_4_;
            local_1e0._4_4_ = (int)((ulonglong)local_110 >> 0x20);
            iVar8 = local_1e0._4_4_;
            local_1f8 = &local_c8;
            if ((local_1e0._4_4_ != iVar6) || (local_1e0 = plVar13, uStack_118 != local_b8)) {
              do {
                local_1e0 = plVar13;
                uVar4 = uStack_180;
                uVar2 = *(undefined4 *)(*local_1f8 + (longlong)iVar8 * 0xc);
                lVar9 = (longlong)(int)uStack_180;
                uVar7 = (int)uStack_180 + 1;
                uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
                if (uStack_180._4_4_ < uVar7) {
                  FUN_1446f48e2(&local_188,uVar4 & 0xffffffff);
                }
                *(undefined4 *)(local_188 + lVar9 * 4) = uVar2;
                local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~local_1f0._4_4_)
                ;
                FUN_1449c0562(&local_1f0);
                iVar8 = local_1e0._4_4_;
                plVar13 = local_1e0;
              } while (local_1f8 != &local_c8 ||
                       ((undefined1 *)CONCAT44(uStack_1e4,iStack_1e8) != local_b8 ||
                       local_1e0._4_4_ != iVar6));
            }
            FUN_1402226aa(&local_c8);
            plVar13 = local_210;
            pcVar3 = (code *)param_1[6];
            plVar11 = (longlong *)param_1[8];
            if ((longlong *)param_1[8] == (longlong *)0x0) {
              plVar11 = local_210;
            }
            uVar10 = (**(code **)(*plVar11 + 8))();
            cVar5 = (*pcVar3)(uVar10);
          } while (cVar5 == '\0');
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)local_f0);
        local_80 = 0;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_c8);
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148485bc0 FUN_148485bc0 body=108 status=ok
// SIG undefined FUN_148485bc0(void)

void FUN_148485bc0(longlong param_1)

{
  FUN_144a12820(param_1 + 0xb0,0,1);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  FUN_144a127d2(param_1 + 0xd0,0,1);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_144a127d2(param_1 + 0xf0,0,1);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 148485c34 FUN_148485c34 body=353 status=ok
// SIG undefined FUN_148485c34(void)

void FUN_148485c34(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *param_1;
  if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
    pcVar7 = *(code **)(lVar6 + 0x30);
    plVar10 = (longlong *)(lVar6 + 0x50);
    if (*(longlong **)(lVar6 + 0x40) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar6 + 0x40);
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    uVar8 = (*pcVar7)(uVar9);
    *(undefined1 *)param_1[4] = uVar8;
  }
  if (*(char *)param_1[4] == '\0') {
    iVar4 = *(int *)(param_1[3] + 0x10);
    iVar5 = *(int *)(param_1[3] + 0x14);
    dVar11 = (double)*(float *)((longlong)param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 2);
    fVar2 = *(float *)((longlong)param_1 + 0xc);
    fVar3 = *(float *)(param_1 + 1);
    plVar10 = *(longlong **)(lVar6 + 8);
    FUN_146bef8a8(plVar10,0);
    local_78 = (double)(param_2 % iVar4) * dVar11 + (double)fVar3;
    local_70 = (double)(int)((longlong)
                             ((ulonglong)(uint)((int)((longlong)param_2 / (longlong)iVar4) >> 0x1f)
                              << 0x20 | (longlong)param_2 / (longlong)iVar4 & 0xffffffffU) %
                            (longlong)iVar5) * dVar11 + (double)fVar2;
    local_68 = (double)(param_2 / (iVar5 * iVar4)) * dVar11 + (double)fVar1;
    dVar11 = (double)FUN_146bed438(plVar10,*(undefined4 *)(*plVar10 + 0xcc));
    *(float *)(*(longlong *)param_1[3] + (longlong)param_2 * 4) = (float)dVar11;
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148485d9e FUN_148485d9e body=438 status=ok
// SIG undefined FUN_148485d9e(void)

void FUN_148485d9e(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *param_1;
  pcVar7 = *(code **)(lVar6 + 0x30);
  plVar11 = (longlong *)(lVar6 + 0x50);
  if (*(longlong **)(lVar6 + 0x40) != (longlong *)0x0) {
    plVar11 = *(longlong **)(lVar6 + 0x40);
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  cVar8 = (*pcVar7)(uVar9);
  if ((cVar8 == '\0') && (iVar10 = (int)param_1[3], 0 < iVar10)) {
    iVar5 = *(int *)((longlong)param_1 + 0x1c);
    lVar13 = (longlong)((iVar5 * (param_2 / iVar5) + param_2 % iVar5) * iVar10) * 4;
    lVar12 = 0;
    do {
      if ((double)*(float *)(*(longlong *)param_1[6] + lVar13 + lVar12 * 4) <
          *(double *)(lVar6 + 0x10)) {
        fVar1 = *(float *)((longlong)param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 2);
        fVar3 = *(float *)((longlong)param_1 + 0xc);
        fVar4 = *(float *)(param_1 + 1);
        plVar11 = *(longlong **)(lVar6 + 8);
        FUN_146bef8a8(plVar11,0);
        local_a8 = (double)((float)(int)lVar12 * fVar1 + fVar4);
        local_a0 = (double)((float)(param_2 % iVar5) * fVar1 + fVar3);
        local_98 = (double)((float)(param_2 / iVar5) * fVar1 + fVar2);
        dVar14 = (double)FUN_146bed438(plVar11,*(undefined4 *)(*plVar11 + 0xcc),&local_a8);
        *(float *)(*(longlong *)param_1[5] + lVar13 + lVar12 * 4) = (float)dVar14;
        iVar10 = (int)param_1[3];
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar10);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148485f5e FUN_148485f5e body=726 status=ok
// SIG undefined FUN_148485f5e(void)

void FUN_148485f5e(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  int *piVar9;
  double dVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_e8 [32];
  LPCRITICAL_SECTION local_c8;
  int local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *param_1;
  if ((param_2 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
    pcVar8 = *(code **)(lVar7 + 0x30);
    plVar16 = (longlong *)(lVar7 + 0x50);
    if (*(longlong **)(lVar7 + 0x40) != (longlong *)0x0) {
      plVar16 = *(longlong **)(lVar7 + 0x40);
    }
    uVar14 = (**(code **)(*plVar16 + 8))();
    uVar11 = (*pcVar8)(uVar14);
    *(undefined1 *)param_1[0xc] = uVar11;
  }
  if (*(char *)param_1[0xc] == '\0') {
    plVar16 = (longlong *)param_1[5];
    iVar5 = *(int *)(*(longlong *)param_1[9] + (longlong)param_2 * 4);
    iVar6 = (int)plVar16[2];
    iVar13 = *(int *)((longlong)plVar16 + 0x14);
    iVar12 = iVar5 / (iVar13 * iVar6);
    iVar18 = (int)((longlong)
                   ((ulonglong)(uint)((int)((longlong)iVar5 / (longlong)iVar6) >> 0x1f) << 0x20 |
                   (longlong)iVar5 / (longlong)iVar6 & 0xffffffffU) % (longlong)iVar13);
    fVar1 = *(float *)(*plVar16 + (longlong)((iVar12 * iVar13 + iVar18) * iVar6 + iVar5 % iVar6) * 4
                      );
    lVar20 = 8;
    do {
      iVar13 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar20) + iVar5 % iVar6;
      piVar9 = (int *)param_1[7];
      if (((((*piVar9 <= iVar13) &&
            (iVar15 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar20 + 4) + iVar18,
            piVar9[1] <= iVar15)) &&
           (iVar17 = *(int *)((longlong)&DAT_149f3c870 + lVar20) + iVar12, piVar9[2] <= iVar17)) &&
          ((iVar13 <= piVar9[3] && (iVar15 <= piVar9[4])))) && (iVar17 <= piVar9[5])) {
        plVar16 = (longlong *)param_1[5];
        local_bc = (*(int *)((longlong)plVar16 + 0x14) * iVar17 + iVar15) * (int)plVar16[2] + iVar13
        ;
        lVar19 = (longlong)local_bc;
        fVar21 = *(float *)(*plVar16 + lVar19 * 4);
        if ((fVar21 == 3.4028235e+38) && (!NAN(fVar21))) {
          fVar21 = *(float *)((longlong)param_1 + 0x14);
          fVar2 = *(float *)(param_1 + 2);
          fVar3 = *(float *)((longlong)param_1 + 0xc);
          fVar4 = *(float *)(param_1 + 1);
          plVar16 = *(longlong **)(lVar7 + 8);
          FUN_146bef8a8(plVar16,0);
          local_b8 = (double)((float)iVar13 * fVar21 + fVar4);
          local_b0 = (double)((float)iVar15 * fVar21 + fVar3);
          local_a8 = (double)((float)iVar17 * fVar21 + fVar2);
          dVar10 = (double)FUN_146bed438(plVar16,*(undefined4 *)(*plVar16 + 0xcc),&local_b8);
          fVar21 = (float)dVar10;
          *(float *)(*(longlong *)param_1[5] + (longlong)local_bc * 4) = fVar21;
          lVar19 = (longlong)local_bc;
        }
        if ((*(char *)(*(longlong *)param_1[8] + lVar19) == '\0') &&
           (((fVar2 = *(float *)(lVar7 + 0x20), fVar1 <= fVar2 && (fVar2 < fVar21)) ||
            ((fVar2 < fVar1 && (fVar21 <= fVar2)))))) {
          local_c8 = (LPCRITICAL_SECTION)param_1[0xb];
          EnterCriticalSection(local_c8);
          FUN_1447cbafe(param_1[10],&local_b8,&local_bc,0);
          if (local_c8 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(local_c8);
          }
        }
      }
      lVar20 = lVar20 + 0xc;
    } while (lVar20 != 0x140);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484862be FUN_1484862be body=71 status=ok
// SIG undefined FUN_1484862be(void)

void FUN_1484862be(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148486306();
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
      FUN_14848638c();
      return;
    }
  }
  return;
}



// FUNCTION 148486306 FUN_148486306 body=132 status=ok
// SIG undefined FUN_148486306(void)

void FUN_148486306(longlong param_1,int param_2)

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



// FUNCTION 14848638c FUN_14848638c body=62 status=ok
// SIG undefined FUN_14848638c(void)

void FUN_14848638c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484863ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1484863ca FUN_1484863ca body=93 status=ok
// SIG undefined FUN_1484863ca(void)

ulonglong FUN_1484863ca(uint param_1,uint param_2)

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


