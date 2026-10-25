// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143609ecc FUN_143609ecc body=586 status=ok
// SIG undefined FUN_143609ecc(void)

bool FUN_143609ecc(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6,undefined4 param_7,longlong param_8,
                  longlong param_9,longlong param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  code **local_128;
  code **local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  code *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1447c0da8(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x868);
  if (lVar2 == 0) {
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x50,8);
    *local_78 = (longlong)&PTR_FUN_14aa1e150;
    local_78[1] = param_6;
    local_78[2] = (longlong)param_3;
    local_78[3] = (longlong)param_4;
    local_78[4] = param_5;
    *(undefined4 *)(local_78 + 5) = param_7;
    local_78[6] = param_8;
    local_78[7] = param_9;
    local_78[8] = param_10;
    local_78[9] = param_2;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = FUN_143624c48;
    }
    local_120 = &local_88;
    FUN_147c5203c(param_1,param_7,param_8);
    if (local_88 != (code *)0x0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    local_c8 = (longlong *)param_4[2];
    local_d8 = (code *)*param_4;
    uStack_d0 = param_4[1];
    local_e8 = *(undefined8 *)(param_3 + 4);
    local_f8 = *param_3;
    uStack_f4 = param_3[1];
    uStack_f0 = param_3[2];
    uStack_ec = param_3[3];
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
      lVar2 = *(longlong *)(param_1 + 0x868);
    }
    local_100 = &local_90;
    local_128 = &local_88;
    local_88 = local_d8;
    uStack_80 = uStack_d0;
    local_78 = local_c8;
    local_a8 = local_f8;
    uStack_a4 = uStack_f4;
    uStack_a0 = uStack_f0;
    uStack_9c = uStack_ec;
    local_98 = local_e8;
    local_b8 = param_6;
    local_b0 = param_5;
    local_108 = param_10;
    local_110 = param_9;
    local_118 = param_8;
    local_120 = (code **)CONCAT44(local_120._4_4_,param_7);
    local_90 = lVar2;
    FUN_1479b35ad(lVar1,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return *(int *)(param_2 + 8) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360a118 FUN_14360a118 body=544 status=ok
// SIG undefined FUN_14360a118(void)

undefined1
FUN_14360a118(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,undefined4 param_5
             ,longlong param_6,longlong param_7,longlong param_8)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  code **local_118;
  code **local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined1 local_a9;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined4 *)(param_2 + 8) = 0x7f7fffff;
  lVar3 = *(longlong *)(param_1 + 0x868);
  if (lVar3 == 0) {
    local_a8 = local_a8 & 0xffffff00;
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x48,8);
    *local_78 = (longlong)&PTR_FUN_14aa1e170;
    local_78[1] = (longlong)param_3;
    local_78[2] = (longlong)param_4;
    *(undefined4 *)(local_78 + 3) = param_5;
    local_78[4] = param_6;
    local_78[5] = param_7;
    local_78[6] = param_8;
    local_78[7] = (longlong)&local_a8;
    local_78[8] = param_2;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = FUN_143624e96;
    }
    local_110 = &local_88;
    FUN_147c5203c(param_1,param_5,param_6);
    if (local_88 != (code *)0x0) {
      plVar4 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar4 = local_68;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    uVar1 = (undefined1)local_a8;
  }
  else {
    local_b8 = (longlong *)param_4[2];
    local_c8 = (code *)*param_4;
    uStack_c0 = param_4[1];
    local_d8 = *(undefined8 *)(param_3 + 4);
    local_e8 = *param_3;
    uStack_e4 = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
      lVar3 = *(longlong *)(param_1 + 0x868);
    }
    local_f0 = &local_90;
    local_118 = &local_88;
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    local_98 = local_d8;
    local_f8 = param_8;
    local_100 = param_7;
    local_108 = param_6;
    local_110 = (code **)CONCAT44(local_110._4_4_,param_5);
    local_90 = lVar3;
    FUN_1479b309d(lVar2,param_2,&local_a9);
    uVar1 = FUN_144a41512(param_2 + 0xb8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360a33a FUN_14360a33a body=607 status=ok
// SIG undefined FUN_14360a33a(void)

undefined1
FUN_14360a33a(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,longlong param_5,
             longlong param_6,undefined4 param_7,longlong param_8,longlong param_9,longlong param_10
             )

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  code **local_128;
  code **local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  code *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_b8;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_2 + 8) = 0x7f7fffff;
  lVar3 = *(longlong *)(param_1 + 0x868);
  if (lVar3 == 0) {
    local_a8 = local_a8 & 0xffffff00;
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x58,8);
    *local_78 = (longlong)&PTR_FUN_14aa1e190;
    local_78[1] = param_6;
    local_78[2] = (longlong)param_3;
    local_78[3] = (longlong)param_4;
    local_78[4] = param_5;
    *(undefined4 *)(local_78 + 5) = param_7;
    local_78[6] = param_8;
    local_78[7] = param_9;
    local_78[8] = param_10;
    local_78[9] = (longlong)&local_a8;
    local_78[10] = param_2;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = FUN_14362502e;
    }
    local_120 = &local_88;
    FUN_147c5203c(param_1,param_7,param_8);
    if (local_88 != (code *)0x0) {
      plVar4 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar4 = local_68;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    uVar1 = (undefined1)local_a8;
  }
  else {
    local_c8 = (longlong *)param_4[2];
    local_d8 = (code *)*param_4;
    uStack_d0 = param_4[1];
    local_e8 = *(undefined8 *)(param_3 + 4);
    local_f8 = *param_3;
    uStack_f4 = param_3[1];
    uStack_f0 = param_3[2];
    uStack_ec = param_3[3];
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
      lVar3 = *(longlong *)(param_1 + 0x868);
    }
    local_100 = &local_90;
    local_128 = &local_88;
    local_88 = local_d8;
    uStack_80 = uStack_d0;
    local_78 = local_c8;
    local_a8 = local_f8;
    uStack_a4 = uStack_f4;
    uStack_a0 = uStack_f0;
    uStack_9c = uStack_ec;
    local_98 = local_e8;
    local_b8 = param_6;
    local_b0 = param_5;
    local_108 = param_10;
    local_110 = param_9;
    local_118 = param_8;
    local_120 = (code **)CONCAT44(local_120._4_4_,param_7);
    local_90 = lVar3;
    FUN_1479b33fd(lVar2,param_2);
    uVar1 = FUN_144a41512(param_2 + 0xb8);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360a59a FUN_14360a59a body=1568 status=ok
// SIG undefined FUN_14360a59a(void)

undefined1
FUN_14360a59a(longlong param_1,double *param_2,double *param_3,longlong *param_4,undefined4 param_5,
             longlong param_6,longlong param_7,longlong param_8,longlong param_9)

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
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  code **local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  undefined1 local_180 [16];
  double local_170;
  double dStack_168;
  ulonglong local_160;
  code *local_158;
  double dStack_150;
  longlong *local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar13 = *(ulonglong *)(param_1 + 0x868);
  if (uVar13 == 0) {
    local_160 = local_160 & 0xffffffffffffff00;
    (**(code **)(*param_4 + 0x80))(param_4,&local_158);
    dVar1 = (double)CONCAT44(uStack_12c,uStack_130) - (double)local_148;
    dVar16 = (double)CONCAT44(uStack_134,local_138) - dStack_150;
    dVar20 = dStack_140 - (double)local_158;
    local_170 = (dVar1 + dVar1) * 0.5;
    local_180._8_8_ = (dVar16 + dVar16) * 0.5;
    local_180._0_8_ = (dVar20 + dVar20) * 0.5;
    dVar16 = (double)local_180._8_8_ - dVar16;
    dVar20 = (double)local_180._0_8_ - dVar20;
    local_198._8_8_ = dVar16;
    local_198._0_8_ = dVar20;
    local_1a8._8_4_ = SUB84(local_170,0);
    local_1a8._0_8_ = local_170;
    local_1a8._12_4_ = (int)((ulonglong)local_170 >> 0x20);
    dVar1 = local_170 - dVar1;
    dVar2 = SQRT(local_170 * local_170 +
                 (double)local_180._0_8_ * (double)local_180._0_8_ +
                 (double)local_180._8_8_ * (double)local_180._8_8_);
    dVar7 = *param_3;
    dVar8 = param_3[1];
    dVar5 = param_3[2];
    dVar11 = *param_2;
    dVar3 = dVar8 + dVar8;
    dVar4 = dVar5 + dVar5;
    dVar19 = dVar7 * (dVar7 + dVar7);
    dVar21 = 1.0 - (dVar5 * dVar4 + dVar8 * dVar3);
    dVar22 = 1.0 - (dVar5 * dVar4 + dVar19);
    dVar17 = (1.0 - (dVar19 + dVar8 * dVar3)) * 1.0;
    dVar19 = param_3[3];
    dVar5 = dVar4 * dVar19;
    dVar6 = (dVar7 + dVar7) * param_3[3];
    dVar19 = dVar3 * dVar19;
    dVar18 = dVar3 * dVar7 + dVar5;
    dVar9 = dVar4 * dVar8 + dVar6;
    dVar10 = dVar19 + *param_3 * dVar4;
    dVar5 = dVar3 * dVar7 - dVar5;
    dVar6 = dVar4 * dVar8 - dVar6;
    dVar19 = *param_3 * dVar4 - dVar19;
    dVar4 = dVar1 * dVar6 + dVar16 * dVar22 + dVar20 * dVar18 + param_2[1];
    dVar7 = ABS(dVar10 * local_170) +
            ABS((double)local_180._8_8_ * dVar5) + ABS(dVar21 * (double)local_180._0_8_);
    dVar8 = ABS(dVar6 * (double)local_1a8._8_8_) +
            ABS((double)local_180._8_8_ * dVar22) + ABS(dVar18 * (double)local_180._0_8_);
    dVar23 = ABS(dVar17 * local_170) +
             ABS(dVar9 * (double)local_180._8_8_) + ABS(dVar19 * (double)local_180._0_8_);
    dVar3 = dVar10 * dVar10 + dVar5 * dVar5 + dVar21 * dVar21;
    dVar6 = dVar6 * dVar6 + dVar22 * dVar22 + dVar18 * dVar18;
    dVar18 = dVar17 * dVar17 + dVar9 * dVar9 + dVar19 * dVar19;
    if (dVar3 <= dVar6) {
      dVar3 = dVar6;
    }
    if (dVar3 <= dVar18) {
      dVar3 = dVar18;
    }
    dVar6 = param_2[2];
    if (dVar3 < 0.0) {
      dStack_168 = dVar2;
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    dStack_168 = dVar2 * dVar3;
    dVar2 = SQRT(dVar8 * dVar8 + dVar23 * dVar23 + dVar7 * dVar7);
    if (dVar2 <= dStack_168) {
      dStack_168 = dVar2;
    }
    local_198._8_4_ = SUB84(dVar4,0);
    local_198._0_8_ = dVar1 * dVar10 + dVar16 * dVar5 + dVar20 * dVar21 + dVar11;
    local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_180._8_4_ = SUB84(dVar8,0);
    local_180._0_8_ = dVar7;
    local_180._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_158 = (code *)0x0;
    local_188 = dVar1 * dVar17 + dVar16 * dVar9 + dVar20 * dVar19 + dVar6;
    local_170 = dVar23;
    local_148 = (longlong *)FUN_14001cc68(0x58,8);
    *local_148 = (longlong)&PTR_FUN_14aa1e1b0;
    local_148[1] = (longlong)local_198;
    local_148[2] = (longlong)param_4;
    local_148[3] = (longlong)param_2;
    local_148[4] = (longlong)param_3;
    *(undefined4 *)(local_148 + 5) = param_5;
    local_148[6] = param_6;
    local_148[7] = param_7;
    local_148[8] = param_8;
    local_148[9] = (longlong)&local_160;
    local_148[10] = param_9;
    if (local_148 + 1 != (longlong *)0x0) {
      local_158 = FUN_1436251d2;
    }
    local_1d0 = &local_158;
    FUN_147c5203c(param_1,param_5);
    if (local_158 != (code *)0x0) {
      plVar14 = local_148;
      if (local_148 == (longlong *)0x0) {
        plVar14 = (longlong *)&local_138;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    uVar15 = (undefined1)local_160;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0xb0);
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(param_1);
      uVar13 = *(ulonglong *)(param_1 + 0x868);
    }
    local_198._8_8_ = param_3;
    local_198._0_8_ = param_4;
    local_1b0 = &local_160;
    local_158 = (code *)*param_3;
    dStack_150 = param_3[1];
    local_148 = (longlong *)param_3[2];
    dStack_140 = param_3[3];
    local_138 = *(undefined4 *)param_2;
    uStack_134 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_130 = SUB84(param_2[1],0);
    uStack_12c = (undefined4)((ulonglong)param_2[1] >> 0x20);
    local_128 = param_2[2];
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    local_1b8 = param_8;
    local_1c0 = param_7;
    local_1c8 = param_6;
    local_1d0 = (code **)CONCAT44(local_1d0._4_4_,param_5);
    local_1d8 = param_9;
    local_160 = uVar13;
    FUN_1479b375d(lVar12,param_4);
    uVar15 = *(int *)(param_9 + 8) != 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360abbc FUN_14360abbc body=1590 status=ok
// SIG undefined FUN_14360abbc(void)

ulonglong FUN_14360abbc(code *param_1,double param_2,double *param_3,double *param_4,double param_5,
                       double param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  double *pdVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
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
  double dVar30;
  undefined1 auStack_1e8 [40];
  code **local_1c0;
  code *local_1b0;
  int local_1a8;
  code *local_1a0;
  code **local_198;
  code *local_190;
  int local_188;
  code *local_180;
  int local_178;
  undefined4 local_174;
  undefined1 local_169;
  code *local_168;
  undefined8 uStack_160;
  double *local_158;
  double *local_150;
  double local_148;
  double local_140;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 == 0.0) {
    uVar15 = 0;
  }
  else {
    local_169 = 0;
    if (*(longlong *)(param_1 + 0x868) == 0) {
      dVar1 = *param_4;
      dVar2 = param_4[1];
      dVar23 = param_4[2];
      dVar8 = *param_3;
      dVar24 = dVar2 + dVar2;
      dVar25 = dVar23 + dVar23;
      dVar20 = dVar1 * (dVar1 + dVar1);
      dVar21 = 1.0 - (dVar23 * dVar25 + dVar2 * dVar24);
      dVar22 = 1.0 - (dVar23 * dVar25 + dVar20);
      dVar18 = (1.0 - (dVar20 + dVar2 * dVar24)) * 1.0;
      dVar23 = param_4[3];
      dVar26 = dVar25 * dVar23;
      dVar28 = (dVar1 + dVar1) * param_4[3];
      dVar23 = dVar24 * dVar23;
      dVar6 = dVar24 * dVar1 + dVar26;
      dVar7 = dVar25 * dVar2 + dVar28;
      dVar4 = dVar23 + *param_4 * dVar25;
      dVar26 = dVar24 * dVar1 - dVar26;
      dVar28 = dVar25 * dVar2 - dVar28;
      dVar23 = *param_4 * dVar25 - dVar23;
      dVar1 = *(double *)((longlong)param_2 + 0x160);
      dVar2 = *(double *)((longlong)param_2 + 0x170);
      dVar20 = *(double *)((longlong)param_2 + 0x168);
      dVar5 = dVar2 * dVar28 + *(double *)((longlong)param_2 + 0x168) * dVar22 + dVar1 * dVar6 +
              param_3[1];
      dVar24 = *(double *)((longlong)param_2 + 0x178);
      dVar25 = *(double *)((longlong)param_2 + 0x180);
      dVar19 = *(double *)((longlong)param_2 + 0x188);
      dVar29 = ABS(dVar4 * dVar19) + ABS(dVar26 * dVar25) + ABS(dVar21 * dVar24);
      dVar30 = ABS(dVar28 * *(double *)((longlong)param_2 + 0x188)) +
               ABS(dVar22 * *(double *)((longlong)param_2 + 0x180)) +
               ABS(dVar6 * *(double *)((longlong)param_2 + 0x178));
      dVar27 = ABS(dVar18 * dVar19) + ABS(dVar7 * dVar25) + ABS(dVar23 * dVar24);
      dVar24 = dVar4 * dVar4 + dVar26 * dVar26 + dVar21 * dVar21;
      dVar25 = dVar28 * dVar28 + dVar22 * dVar22 + dVar6 * dVar6;
      dVar19 = dVar18 * dVar18 + dVar7 * dVar7 + dVar23 * dVar23;
      if (dVar24 <= dVar25) {
        dVar24 = dVar25;
      }
      if (dVar24 <= dVar19) {
        dVar24 = dVar19;
      }
      dVar25 = param_3[2];
      if (dVar24 < 0.0) {
        dVar24 = sqrt(dVar24);
      }
      else {
        dVar24 = SQRT(dVar24);
      }
      local_f8 = dVar24 * *(double *)((longlong)param_2 + 400);
      dVar24 = SQRT(dVar30 * dVar30 + dVar27 * dVar27 + dVar29 * dVar29);
      if (dVar24 <= local_f8) {
        local_f8 = dVar24;
      }
      local_128._8_4_ = SUB84(dVar5,0);
      local_128._0_8_ = dVar2 * dVar4 + dVar20 * dVar26 + dVar1 * dVar21 + dVar8;
      local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_168 = (code *)0x0;
      local_118 = dVar2 * dVar18 + dVar20 * dVar7 + dVar1 * dVar23 + dVar25;
      local_110 = dVar29;
      dStack_108 = dVar30;
      local_100 = dVar27;
      local_158 = (double *)FUN_14001cc68(0x40,8);
      *local_158 = (double)&PTR_FUN_14aa1e1d0;
      local_158[1] = (double)local_128;
      local_158[2] = param_2;
      local_158[3] = (double)param_3;
      local_158[4] = (double)param_4;
      local_158[5] = param_5;
      local_158[6] = (double)&local_169;
      local_158[7] = param_6;
      if (local_158 + 1 != (double *)0x0) {
        local_168 = FUN_143625514;
      }
      local_1c0 = &local_168;
      FUN_147c5203c(param_1,DAT_14cad0ec4,param_5);
      if (local_168 != (code *)0x0) {
        pdVar13 = local_158;
        if (local_158 == (double *)0x0) {
          pdVar13 = &local_148;
        }
        (**(code **)((longlong)*pdVar13 + 0x10))();
      }
      uVar15 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_169);
    }
    else {
      (**(code **)(*(longlong *)((longlong)param_2 + 0x2b8) + 0x20))
                ((longlong)param_2 + 0x2b8,&local_180);
      local_190 = local_180;
      local_188 = local_178;
      FUN_144a56970(local_128);
      pcVar9 = local_180;
      local_168 = (code *)0x0;
      uStack_160 = (undefined1 *)0x0;
      if ((longlong)local_178 != 0) {
        lVar16 = 0;
        do {
          uVar15 = (ulonglong)uStack_160;
          plVar10 = *(longlong **)(pcVar9 + lVar16);
          if ((plVar10 == (longlong *)0x0) || (lVar17 = *plVar10, lVar17 == 0)) goto LAB_14360afe9;
          iVar3 = *(int *)(lVar17 + 0x1c);
          if (iVar3 == 0xb) {
            plVar12 = (longlong *)(lVar17 + 0x40);
LAB_14360af98:
            lVar17 = *plVar12;
            if ((lVar17 != 0) &&
               ((*(byte *)(lVar17 + 0x90) < 2 || (*(char *)(lVar17 + 0x1b9) == '\0')))) {
              lVar17 = (longlong)(int)uStack_160;
              uVar11 = (int)uStack_160 + 1;
              uStack_160 = (undefined1 *)CONCAT44(uStack_160._4_4_,uVar11);
              if (uStack_160._4_4_ < uVar11) {
                FUN_14075a758(&local_168,uVar15 & 0xffffffff);
                plVar10 = *(longlong **)(pcVar9 + lVar16);
              }
              *(longlong **)(local_168 + lVar17 * 8) = plVar10;
            }
          }
          else if (iVar3 == 2) {
            iVar3 = (int)plVar10[1];
            if (((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar17 + 0x418))) &&
               (lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x410) + (longlong)iVar3 * 4),
               lVar14 != -1)) {
              plVar12 = (longlong *)(lVar14 * 8 + *(longlong *)(lVar17 + 0x440));
              goto LAB_14360af98;
            }
          }
          else if (iVar3 == 0xc) {
            plVar12 = (longlong *)(lVar17 + 0x128);
            goto LAB_14360af98;
          }
LAB_14360afe9:
          lVar16 = lVar16 + 8;
        } while ((longlong)local_178 * 8 != lVar16);
      }
      if (local_180 != (code *)0x0) {
        FUN_1400020a8(local_180);
      }
      local_198 = &local_168;
      local_180 = local_168;
      local_178 = (int)uStack_160;
      local_174 = uStack_160._4_4_;
      local_148 = param_6;
      local_140 = param_5;
      local_1a0 = FUN_1436253a0;
      local_1b0 = local_168;
      local_1a8 = (int)uStack_160;
      local_168 = param_1;
      uStack_160 = &local_169;
      local_158 = param_3;
      local_150 = param_4;
      FUN_146e202d6(&local_110);
      uVar15 = CONCAT71((int7)((ulonglong)&local_169 >> 8),local_169);
      FUN_1448635f4(local_128);
      if (local_180 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 14360b1f3 FUN_14360b1f3 body=69 status=ok
// SIG undefined FUN_14360b1f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b1f3(void)

{
  _DAT_14caf6a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6a98,1);
  return;
}



// FUNCTION 14360b238 FUN_14360b238 body=926 status=ok
// SIG undefined FUN_14360b238(void)

void FUN_14360b238(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x194) == '\0') {
    if (((((*(int *)(param_1 + 0x114) == 0) || (uVar1 = *(uint *)(param_1 + 0x110), (int)uVar1 < 0))
         || (DAT_14c9647dc <= (int)uVar1)) ||
        ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
         (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x114))))) ||
       ((((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
         ((*(int *)(param_1 + 0x11c) == 0 || (uVar1 = *(uint *)(param_1 + 0x118), (int)uVar1 < 0))))
        || ((DAT_14c9647dc <= (int)uVar1 ||
            ((((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
               (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x11c))) ||
              ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) ||
             (iVar5 = *(int *)(param_1 + 0x128), iVar5 == 0)))))))) {
      if (((*(char *)(param_1 + 400) == '\x01') && (*(char *)(param_1 + 0x191) == '\x01')) &&
         (((*(char *)(param_1 + 0x192) == '\x01' && (*(char *)(param_1 + 0x193) == '\x01')) &&
          ((lVar7 = *(longlong *)(param_1 + 0xb0), lVar7 != 0 ||
           (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)))))) {
        if (*(longlong *)(lVar7 + 0x1f0) == 0) {
          puVar3 = (undefined8 *)(lVar7 + 0x458);
        }
        else {
          puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar3;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        puVar3 = local_98;
        local_90 = 3;
        *local_98 = &PTR_LAB_14a1c8830;
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
        *local_98 = &PTR_FUN_14aa1e230;
        local_98[3] = 0;
        iVar5 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_98 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar5 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar5 = *(int *)(lVar7 + 0x10);
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(lVar7 + 0x10) = iVar6;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar5 = iVar6;
            }
          }
        }
        *(int *)((longlong)puVar3 + 0x1c) = iVar5;
        puVar3[4] = &LAB_147c52f92;
        *(undefined4 *)(puVar3 + 5) = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_98);
        local_48 = 1;
        FUN_14016fdb0(uVar2,local_a0,&local_88);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        if (local_90 != 0) {
          if (local_98 == (undefined8 *)0x0) goto LAB_14360b533;
          (**(code **)*local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
        }
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      if (((*(char *)(param_1 + 400) == '\0') && (*(char *)(param_1 + 0x191) == '\0')) &&
         (*(char *)(param_1 + 0x192) != '\x01')) {
        if (*(char *)(param_1 + 0x193) != '\x01') goto LAB_14360b533;
      }
      else {
        FUN_147c52fa0(param_1);
        *(undefined2 *)(param_1 + 400) = 0;
        *(undefined1 *)(param_1 + 0x192) = 0;
        iVar5 = *(int *)(param_1 + 0x128);
      }
      if (iVar5 == *(int *)(param_1 + 0x188)) {
        if (*(longlong *)(param_1 + 0x198) == 0) {
          FUN_147c534ba(param_1);
        }
        *(undefined1 *)(param_1 + 0x193) = 0;
      }
    }
  }
LAB_14360b533:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14360b5d7 FUN_14360b5d7 body=55 status=ok
// SIG undefined FUN_14360b5d7(void)

void FUN_14360b5d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6aa8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6aa8 = FUN_14171c317(FUN_1463f36b6,uVar1,L"EAngularDriveMode");
  }
  return;
}



// FUNCTION 14360b60e FUN_14360b60e body=55 status=ok
// SIG undefined FUN_14360b60e(void)

void FUN_14360b60e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6b08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6b08 = FUN_14171c317(FUN_1463f38ac,uVar1,L"EConstraintTransformComponentFlags");
  }
  return;
}



// FUNCTION 14360b645 FUN_14360b645 body=69 status=ok
// SIG undefined FUN_14360b645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b645(void)

{
  _DAT_14caf6b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6b80,1);
  return;
}



// FUNCTION 14360b68a FUN_14360b68a body=69 status=ok
// SIG undefined FUN_14360b68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b68a(void)

{
  _DAT_14caf6b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6b98,1);
  return;
}



// FUNCTION 14360b6cf FUN_14360b6cf body=69 status=ok
// SIG undefined FUN_14360b6cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b6cf(void)

{
  _DAT_14caf6ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6bb0,1);
  return;
}



// FUNCTION 14360b714 FUN_14360b714 body=69 status=ok
// SIG undefined FUN_14360b714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b714(void)

{
  _DAT_14caf6bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6bc8,1);
  return;
}



// FUNCTION 14360b759 FUN_14360b759 body=69 status=ok
// SIG undefined FUN_14360b759(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b759(void)

{
  _DAT_14caf6bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6be0,1);
  return;
}



// FUNCTION 14360b79e FUN_14360b79e body=69 status=ok
// SIG undefined FUN_14360b79e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360b79e(void)

{
  _DAT_14caf6be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360b7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6bf0,1);
  return;
}



// FUNCTION 14360b7e4 FUN_14360b7e4 body=48 status=ok
// SIG undefined FUN_14360b7e4(void)

longlong FUN_14360b7e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb210(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14360b83e FUN_14360b83e body=37 status=ok
// SIG undefined FUN_14360b83e(void)

void FUN_14360b83e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14360b872 FUN_14360b872 body=77 status=ok
// SIG undefined FUN_14360b872(void)

undefined8 * FUN_14360b872(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147c5c016(param_1,iVar1,0);
    FUN_147c5c078(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14360b95a FUN_14360b95a body=416 status=ok
// SIG undefined FUN_14360b95a(void)

undefined8 * FUN_14360b95a(undefined8 *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_14aa1cbe0;
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
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x25] = 0x400;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = &DAT_14c7585e0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x100000000c;
  param_1[0x2a] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a1) = 0x101;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  iVar2 = DAT_14c75efb8;
  dVar3 = (double)DAT_14c75efb8;
  param_1[0x19] = dVar3;
  dVar1 = 1.0;
  if (0 < iVar2) {
    dVar1 = 1.0 / dVar3;
  }
  param_1[0x1a] = dVar1;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efc4;
  FUN_147c5dd32(param_1 + 0x23);
  return param_1;
}



// FUNCTION 14360bafa FUN_14360bafa body=38 status=ok
// SIG undefined FUN_14360bafa(void)

undefined8 FUN_14360bafa(undefined8 param_1,int param_2)

{
  FUN_143611140();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14360bb20 FUN_14360bb20 body=149 status=ok
// SIG undefined FUN_14360bb20(void)

void FUN_14360bb20(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
      QueryPerformanceCounter(&local_20);
      *(double *)(param_1 + 0x160) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_1436112dc(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360bbd2 FUN_14360bbd2 body=841 status=ok
// SIG undefined FUN_14360bbd2(void)

void FUN_14360bbd2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_14360ce7e(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    *(undefined1 *)(param_1 + 0x1a1) = *(undefined1 *)(param_2 + 0x1a1);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_14008b684(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_147c5e412(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x3c) < iVar2) {
      FUN_147c5e2d4(param_1 + 0x30);
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
    iVar2 = *(int *)(param_2 + 0x110);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x114) < iVar2) {
      FUN_147c5e2d4(param_1 + 0x108);
    }
    FUN_147c5e3ba(param_1 + 0x118,*(undefined4 *)(param_2 + 0x120));
    iVar2 = *(int *)(param_2 + 0x1b0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1b4) < iVar2) {
      FUN_14481578e(param_1 + 0x1a8);
    }
    iVar2 = *(int *)(param_2 + 0x1c0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c4) < iVar2) {
      FUN_14481578e(param_1 + 0x1b8);
    }
    iVar2 = *(int *)(param_2 + 0x1d0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1d4) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1c8);
    }
    iVar2 = *(int *)(param_2 + 0x1e0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1e4) < iVar2) {
      FUN_14481578e(param_1 + 0x1d8);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_143611140(lVar3);
        FUN_1400020a8(lVar3);
        return;
      }
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1f8,0x10);
      FUN_14360b95a(lVar3);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      *(longlong *)(param_1 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_143611140(lVar1);
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



// FUNCTION 14360bf1c FUN_14360bf1c body=1948 status=ok
// SIG undefined FUN_14360bf1c(void)

void FUN_14360bf1c(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_c8 [36];
  uint local_a4;
  longlong local_a0;
  longlong local_98;
  uint local_8c;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a4 = param_3;
  local_98 = param_1;
  local_8c = param_3;
  if (param_3 != 0xffffffff) {
    if (DAT_14c75efd0 == '\x01') {
      iVar5 = *(int *)(param_1 + 0x16c);
      *(int *)(param_1 + 0x16c) = iVar5 + 1;
      if (iVar5 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_88);
        if ((1e-08 < ABS(*(double *)(param_1 + 0x160))) &&
           ((double)DAT_14c75efd8 <
            ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x160))
           ) goto LAB_14360bff5;
      }
      else {
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
    }
    else if (param_3 == 0) {
LAB_14360bff5:
      *(undefined8 *)(param_1 + 0x160) = 0;
      goto LAB_14360c676;
    }
  }
  if (ABS(*(double *)(param_1 + 0x160)) <= 1e-08) {
    QueryPerformanceCounter(&local_88);
    *(double *)(param_1 + 0x160) = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  lVar17 = (longlong)*(int *)(param_1 + 0x18);
  uVar19 = 0;
  if (*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18)) {
    lVar20 = lVar17 * 0x70;
    uVar19 = 0;
    do {
      if (local_a4 != 0xffffffff) {
        if (DAT_14c75efd0 == '\x01') {
          iVar5 = *(int *)(param_1 + 0x16c);
          *(int *)(param_1 + 0x16c) = iVar5 + 1;
          if (iVar5 < DAT_14c75efdc) {
            QueryPerformanceCounter(&local_88);
            if ((1e-08 < ABS(*(double *)(param_1 + 0x160))) &&
               ((double)DAT_14c75efd8 <
                ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                *(double *)(param_1 + 0x160))) break;
          }
          else {
            *(undefined4 *)(param_1 + 0x16c) = 0;
          }
        }
        else if (local_a4 <= uVar19) break;
      }
      lVar18 = *(longlong *)(param_2 + 0x10);
      iVar5 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1c) < iVar5 + 1U) {
        FUN_14008b9bc((longlong *)(param_1 + 0x10),iVar5);
      }
      lVar12 = lVar17 * 0x70 + lVar18;
      lVar14 = (longlong)iVar5 * 0x70 + *(longlong *)(param_1 + 0x10);
      lVar18 = lVar18 + lVar20;
      lVar15 = 0x18;
      do {
        *(undefined8 *)(lVar14 + -8 + lVar15) = *(undefined8 *)(lVar18 + -8 + lVar15);
        puVar3 = (undefined8 *)(lVar18 + -0x18 + lVar15);
        uVar6 = puVar3[1];
        puVar4 = (undefined8 *)(lVar14 + -0x18 + lVar15);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar1 = (undefined4 *)(lVar18 + lVar15);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)(lVar14 + lVar15);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        *(undefined8 *)(lVar14 + 0x10 + lVar15) = *(undefined8 *)(lVar18 + 0x10 + lVar15);
        lVar15 = lVar15 + 0x30;
      } while (lVar15 != 0x78);
      uVar6 = *(undefined8 *)(lVar12 + 0x60);
      *(undefined8 *)(lVar14 + 0x65) = *(undefined8 *)(lVar12 + 0x65);
      *(undefined8 *)(lVar14 + 0x60) = uVar6;
      uVar19 = uVar19 + 0x70;
      lVar17 = lVar17 + 1;
      lVar20 = lVar20 + 0x70;
    } while (lVar17 < *(int *)(param_2 + 0x18));
  }
  uVar16 = local_a4;
  if ((0 < (int)local_a4) &&
     (uVar16 = local_a4 - uVar19, local_8c = uVar16, (int)local_a4 < (int)uVar19)) {
    local_8c = 0;
    uVar16 = 0;
  }
  if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
    lVar17 = (longlong)*(int *)(param_1 + 0x28);
    lVar20 = 0;
    if (*(int *)(param_1 + 0x28) < *(int *)(param_2 + 0x28)) {
      local_a0 = lVar17 * 0x48;
      lVar20 = 0;
      do {
        if (uVar16 != 0xffffffff) {
          if (DAT_14c75efd0 == '\x01') {
            iVar5 = *(int *)(param_1 + 0x16c);
            *(int *)(param_1 + 0x16c) = iVar5 + 1;
            if (iVar5 < DAT_14c75efdc) {
              QueryPerformanceCounter(&local_88);
              if ((1e-08 < ABS(*(double *)(param_1 + 0x160))) &&
                 ((double)DAT_14c75efd8 <
                  ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                  *(double *)(param_1 + 0x160))) break;
            }
            else {
              *(undefined4 *)(param_1 + 0x16c) = 0;
            }
          }
          else if (uVar16 <= (uint)lVar20) break;
        }
        lVar18 = *(longlong *)(param_2 + 0x20);
        iVar5 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar5 + 1U) {
          FUN_147c5e0ec((longlong *)(param_1 + 0x20),iVar5);
        }
        FUN_147c5e4f2((longlong)iVar5 * 0x48 + *(longlong *)(param_1 + 0x20),
                      lVar18 + local_a0 + lVar20);
        lVar20 = lVar20 + 0x48;
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_2 + 0x28));
    }
    if ((0 < (int)uVar16) && (local_8c = uVar16 - (int)lVar20, (int)uVar16 < (int)lVar20)) {
      local_8c = 0;
    }
    if ((((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
         (cVar10 = FUN_14361257e(param_2 + 0x30,param_1 + 0x30,&local_8c,&local_98), cVar10 != '\0')
         ) && (cVar10 = FUN_143612758(param_2 + 0xa0,param_1 + 0xa0,&local_8c,&local_98),
              cVar10 != '\0')) &&
       ((cVar10 = FUN_143612758(param_2 + 0xb0,param_1 + 0xb0,&local_8c,&local_98), cVar10 != '\0'
        && (cVar10 = FUN_14361257e(param_2 + 0x108,param_1 + 0x108,&local_8c,&local_98),
           uVar19 = local_8c, cVar10 != '\0')))) {
      lVar17 = (longlong)*(int *)(param_1 + 0x120);
      uVar16 = 0;
      if (*(int *)(param_1 + 0x120) < *(int *)(param_2 + 0x120)) {
        lVar20 = lVar17 * 0x24;
        uVar16 = 0;
        do {
          if (uVar19 != 0xffffffff) {
            if (DAT_14c75efd0 == '\x01') {
              iVar5 = *(int *)(param_1 + 0x16c);
              *(int *)(param_1 + 0x16c) = iVar5 + 1;
              if (iVar5 < DAT_14c75efdc) {
                QueryPerformanceCounter(&local_88);
                if ((1e-08 < ABS(*(double *)(param_1 + 0x160))) &&
                   ((double)DAT_14c75efd8 <
                    ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                    *(double *)(param_1 + 0x160))) break;
              }
              else {
                *(undefined4 *)(param_1 + 0x16c) = 0;
              }
            }
            else if (uVar19 <= uVar16) break;
          }
          FUN_147c5de8e(param_1 + 0x118,*(longlong *)(param_2 + 0x118) + lVar20,
                        *(longlong *)(param_2 + 0x118) + lVar20 + 0x10);
          uVar16 = uVar16 + 0x14;
          lVar17 = lVar17 + 1;
          lVar20 = lVar20 + 0x24;
        } while (lVar17 < *(int *)(param_2 + 0x120));
      }
      if ((0 < (int)uVar19) && (local_8c = uVar19 - uVar16, (int)uVar19 < (int)uVar16)) {
        local_8c = 0;
      }
      if ((((*(int *)(param_1 + 0x120) == *(int *)(param_2 + 0x120)) &&
           (cVar10 = FUN_143612758(param_2 + 0x1a8,param_1 + 0x1a8,&local_8c,&local_98),
           cVar10 != '\0')) &&
          (cVar10 = FUN_143612758(param_2 + 0x1b8,param_1 + 0x1b8,&local_8c,&local_98),
          cVar10 != '\0')) &&
         (cVar10 = FUN_143612758(param_2 + 0x1d8,param_1 + 0x1d8,&local_8c,&local_98),
         uVar19 = local_8c, cVar10 != '\0')) {
        uVar16 = *(uint *)(param_1 + 0x1d0);
        uVar11 = *(uint *)(param_2 + 0x1d0);
        uVar13 = (ulonglong)uVar11;
        if ((int)uVar16 < (int)uVar11) {
          lVar17 = (longlong)(int)uVar16;
          uVar16 = 0;
          do {
            uVar11 = (uint)uVar13;
            if (uVar19 != 0xffffffff) {
              if (DAT_14c75efd0 == '\x01') {
                iVar5 = *(int *)(param_1 + 0x16c);
                *(int *)(param_1 + 0x16c) = iVar5 + 1;
                if (iVar5 < DAT_14c75efdc) {
                  QueryPerformanceCounter(&local_88);
                  if ((1e-08 < ABS(*(double *)(param_1 + 0x160))) &&
                     ((double)DAT_14c75efd8 <
                      ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                      *(double *)(param_1 + 0x160))) {
                    uVar11 = *(uint *)(param_2 + 0x1d0);
                    break;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x16c) = 0;
                }
              }
              else if (uVar19 <= uVar16) break;
            }
            lVar20 = *(longlong *)(param_2 + 0x1c8);
            iVar5 = *(int *)(param_1 + 0x1d0);
            *(uint *)(param_1 + 0x1d0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1d4) < iVar5 + 1U) {
              FUN_1400232c6((longlong *)(param_1 + 0x1c8),iVar5);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar5 * 8) =
                 *(undefined8 *)(lVar20 + lVar17 * 8);
            uVar16 = uVar16 + 8;
            lVar17 = lVar17 + 1;
            uVar11 = *(uint *)(param_2 + 0x1d0);
            uVar13 = (ulonglong)(int)uVar11;
          } while (lVar17 < (longlong)uVar13);
          uVar16 = *(uint *)(param_1 + 0x1d0);
        }
        if ((uVar16 == uVar11) &&
           ((*(longlong *)(param_1 + 0xc0) == 0 ||
            (FUN_14360bf1c(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),local_a4),
            *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc) == '\x01')))) {
          *(undefined1 *)(param_1 + 0xc) = 1;
        }
      }
    }
  }
LAB_14360c676:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14360c6ba FUN_14360c6ba body=812 status=ok
// SIG undefined FUN_14360c6ba(void)

void FUN_14360c6ba(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  
  if (((*(char *)(param_1 + 0x1a2) == '\x01') && (*(char *)(param_1 + 0x40) == '\x01')) &&
     (*(int *)(param_1 + 0x44) != -1)) {
    plVar1 = (longlong *)(param_1 + 0x1b8);
    iVar12 = *(int *)(param_1 + 0x28);
    iVar5 = iVar12 + 1;
    iVar4 = *(int *)(param_1 + 0x1c0);
    if (iVar12 < iVar4) {
      if (iVar12 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar5 < iVar4) {
        *(int *)(param_1 + 0x1c0) = iVar5;
      }
    }
    else {
      *(int *)(param_1 + 0x1c0) = iVar5;
      if ((uint)(*(int *)(param_1 + 0x1c4) - iVar4) < (uint)(iVar5 - iVar4)) {
        FUN_1446f48e2(plVar1);
      }
      memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x1b8)),0,
             (longlong)(iVar5 - iVar4) << 2);
      iVar12 = *(int *)(param_1 + 0x28);
    }
    plVar2 = (longlong *)(param_1 + 0x1d8);
    iVar5 = *(int *)(param_1 + 0x1e0);
    if (iVar5 < iVar12) {
      *(int *)(param_1 + 0x1e0) = iVar12;
      if ((uint)(*(int *)(param_1 + 0x1e4) - iVar5) < (uint)(iVar12 - iVar5)) {
        FUN_1446f48e2(plVar2);
      }
      memset((void *)((longlong)iVar5 * 4 + *plVar2),0,(longlong)(iVar12 - iVar5) << 2);
    }
    else {
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar12);
      }
      if (iVar12 < iVar5) {
        *(int *)(param_1 + 0x1e0) = iVar12;
      }
    }
    plVar3 = (longlong *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x1d4) < 0) {
      FUN_146dedcd2(plVar3,0);
    }
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar5) {
      puVar11 = (undefined1 *)0x0;
      lVar9 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x1d0);
        *(uint *)(param_1 + 0x1d0) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x1d4) < iVar12 + 1U) {
          FUN_1400232c6(plVar3,iVar12);
        }
        *(undefined1 **)(*plVar3 + (longlong)iVar12 * 8) = puVar11;
        *(undefined4 *)(*plVar2 + lVar9 * 4) = 1;
        lVar9 = lVar9 + 1;
        puVar11 = &DAT_100000001 + (longlong)puVar11;
      } while (iVar5 != lVar9);
    }
    FUN_1436128e0();
    **(undefined4 **)(param_1 + 0x1b8) = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar5) {
      lVar9 = 0;
      do {
        *(int *)(*plVar1 + 4 + lVar9 * 4) =
             *(int *)(*plVar2 + lVar9 * 4) + *(int *)(*plVar1 + lVar9 * 4);
        *(undefined4 *)(*plVar2 + lVar9 * 4) = *(undefined4 *)(*plVar1 + lVar9 * 4);
        lVar9 = lVar9 + 1;
      } while (iVar5 != lVar9);
    }
    plVar1 = (longlong *)(param_1 + 0x1a8);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x1c0) + -1) * 4
                    );
    iVar12 = *(int *)(param_1 + 0x1b0);
    if (iVar12 < iVar5) {
      *(int *)(param_1 + 0x1b0) = iVar5;
      if ((uint)(*(int *)(param_1 + 0x1b4) - iVar12) < (uint)(iVar5 - iVar12)) {
        FUN_1446f48e2(plVar1);
      }
      memset((void *)((longlong)iVar12 * 4 + *plVar1),0,(longlong)(iVar5 - iVar12) << 2);
    }
    else {
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar5 < iVar12) {
        *(int *)(param_1 + 0x1b0) = iVar5;
      }
    }
    iVar5 = *(int *)(param_1 + 0x1d0);
    if ((longlong)iVar5 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      lVar8 = 0;
      do {
        iVar12 = *(int *)(lVar9 + lVar8);
        iVar4 = *(int *)(lVar9 + 4 + lVar8);
        iVar6 = *(int *)(*plVar2 + (longlong)iVar12 * 4);
        *(int *)(*plVar2 + (longlong)iVar12 * 4) = iVar6 + 1;
        if (iVar12 == iVar4) {
          *(int *)(*plVar1 + (longlong)iVar6 * 4) = iVar12;
        }
        else {
          *(int *)(*plVar1 + (longlong)iVar6 * 4) = iVar4;
          uVar7 = *(undefined4 *)(lVar9 + lVar8);
          lVar10 = (longlong)*(int *)(lVar9 + 4 + lVar8);
          iVar12 = *(int *)(*plVar2 + lVar10 * 4);
          *(int *)(*plVar2 + lVar10 * 4) = iVar12 + 1;
          *(undefined4 *)(*plVar1 + (longlong)iVar12 * 4) = uVar7;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar5 * 8 != lVar8);
    }
  }
  return;
}



// FUNCTION 14360c9e8 FUN_14360c9e8 body=116 status=ok
// SIG undefined FUN_14360c9e8(void)

undefined8 * FUN_14360c9e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = local_28;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_2e = 0;
  local_68 = param_2;
  FUN_143612ab8(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360ca5e FUN_14360ca5e body=466 status=ok
// SIG undefined FUN_14360ca5e(void)

void FUN_14360ca5e(undefined8 param_1,undefined8 param_2,double *param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double *local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_5;
  dVar1 = param_3[2];
  dVar3 = ABS(*param_3);
  dVar2 = ABS(param_3[1]);
  local_80 = 0.0;
  if (9.99999993922529e-09 <= dVar3) {
    local_80 = 1.0 / *param_3;
  }
  local_58 = dVar3 < 9.99999993922529e-09;
  local_78 = 0.0;
  if (9.99999993922529e-09 <= dVar2) {
    local_78 = 1.0 / param_3[1];
  }
  local_57 = dVar2 < 9.99999993922529e-09;
  local_70 = 0.0;
  if (9.99999993922529e-09 <= ABS(dVar1)) {
    local_70 = 1.0 / dVar1;
  }
  local_f0 = &local_80;
  local_e8 = &local_58;
  local_56 = ABS(dVar1) < 9.99999993922529e-09;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    local_60 = 1.0 / param_4;
  }
  local_108 = &local_b8;
  local_b8 = 0x7fefffffffffffff;
  local_b0 = 0x7fefffffffffffff;
  local_a8 = 0x7fefffffffffffff;
  local_a0 = 0xffefffffffffffff;
  local_98 = 0xffefffffffffffff;
  local_90 = 0xffefffffffffffff;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_100 = &local_e0;
  local_f8 = param_3;
  local_88 = param_3;
  local_68 = param_4;
  FUN_1436137ca(0,dVar1,&local_88);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360cc32 FUN_14360cc32 body=474 status=ok
// SIG undefined FUN_14360cc32(void)

void FUN_14360cc32(undefined8 param_1,undefined8 param_2,double *param_3,double param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double *local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = param_6;
  local_d8 = *param_5;
  uStack_d0 = param_5[1];
  local_c8 = param_5[2];
  dVar1 = param_3[2];
  dVar2 = ABS(*param_3);
  dVar3 = ABS(param_3[1]);
  uVar4 = 0;
  local_80 = 0.0;
  if (9.99999993922529e-09 <= dVar2) {
    local_80 = 1.0 / *param_3;
  }
  local_58 = dVar2 < 9.99999993922529e-09;
  local_78 = 0.0;
  if (9.99999993922529e-09 <= dVar3) {
    local_78 = 1.0 / param_3[1];
  }
  local_57 = dVar3 < 9.99999993922529e-09;
  local_70 = 0.0;
  if (9.99999993922529e-09 <= ABS(dVar1)) {
    local_70 = 1.0 / dVar1;
  }
  local_f0 = &local_80;
  local_e8 = &local_58;
  local_56 = ABS(dVar1) < 9.99999993922529e-09;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    local_60 = 1.0 / param_4;
    uVar4 = SUB84(local_60,0);
  }
  local_108 = &local_b8;
  local_b8 = 0x7fefffffffffffff;
  local_b0 = 0x7fefffffffffffff;
  local_a8 = 0x7fefffffffffffff;
  local_a0 = 0xffefffffffffffff;
  local_98 = 0xffefffffffffffff;
  local_90 = 0xffefffffffffffff;
  local_100 = &local_c0;
  local_f8 = param_3;
  local_88 = param_3;
  local_68 = param_4;
  FUN_14361512c(uVar4,dVar1,&local_88,&local_d8);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360ce0e FUN_14360ce0e body=111 status=ok
// SIG undefined FUN_14360ce0e(void)

void FUN_14360ce0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = local_20;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_26 = 0;
  local_60 = param_3;
  FUN_14361750c(0,param_2,&local_60);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360ce7e FUN_14360ce7e body=717 status=ok
// SIG undefined FUN_14360ce7e(void)

void FUN_14360ce7e(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14008b684(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_147c5dd02(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_147c5e412(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_147c5e2d4(param_1 + 0x30,0);
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
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (*(int *)(param_1 + 0x114) < 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_147c5e2d4(param_1 + 0x108,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    FUN_147c5e9e0(param_1 + 0x118);
    if (*(int *)(param_1 + 0x1b4) < 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      FUN_14481578e(param_1 + 0x1a8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    if (*(int *)(param_1 + 0x1c4) < 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      FUN_14481578e(param_1 + 0x1b8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    if (*(int *)(param_1 + 0x1d4) < 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      FUN_146dedcd2(param_1 + 0x1c8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
    }
    if (*(int *)(param_1 + 0x1e4) < 0) {
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      FUN_14481578e(param_1 + 0x1d8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1e0) = 0;
    }
    *(undefined8 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    if (*(int *)(param_1 + 0x17c) < 0) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      FUN_14481578e(param_1 + 0x170,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    if (*(int *)(param_1 + 0x18c) < 0) {
      *(undefined4 *)(param_1 + 0x188) = 0;
      FUN_14481578e(param_1 + 0x180,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x19c);
    FUN_1436112a9(*(undefined8 *)(param_1 + 400));
    *(undefined4 *)(param_1 + 0x198) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x19c) != 0)) {
      FUN_143618060(param_1 + 400);
    }
    *(undefined1 *)(param_1 + 0x1a1) = 1;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 0xc0);
  } while (param_1 != 0);
  return;
}



// FUNCTION 14360d14c FUN_14360d14c body=3051 status=ok
// SIG undefined FUN_14360d14c(void)

bool FUN_14360d14c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  lVar5 = param_1 + 0x118;
  puVar4 = (uint *)FUN_147c5ea26(lVar5);
  if (puVar4 == (uint *)0x0) goto LAB_14360d195;
  uVar16 = *puVar4;
  if (uVar16 == 0xffffffff) {
    uVar16 = puVar4[1];
    lVar22 = (longlong)(int)uVar16;
    if (lVar22 == -1) {
      if ((longlong)(int)puVar4[2] != -1) {
        if (*(char *)(param_1 + 0x40) == '\x01') {
          uVar16 = puVar4[4];
          lVar11 = param_1;
          goto LAB_14360d5b5;
        }
        local_88 = *param_2;
        uStack_80 = param_2[1];
        FUN_1436182a4((longlong)(int)puVar4[2] * 0x48 + *(longlong *)(param_1 + 0x20));
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0xc0);
      if (lVar11 == 0) {
        if ((((*(double *)(param_1 + 200) <= 0.0) || (*(int *)(param_1 + 0xd8) < 1)) ||
            (*(int *)(param_1 + 0xdc) < 1)) || (*(int *)(param_1 + 0xe0) < 1)) {
          iVar18 = *(int *)(param_1 + 0x38);
          if ((int)(uVar16 + 1) < iVar18) {
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + -0x40 + (longlong)iVar18 * 0x40)
            ;
            local_78 = *puVar2;
            uStack_70 = puVar2[1];
            lVar22 = FUN_147c5ea96(lVar5);
            *(uint *)(lVar22 + 4) = uVar16;
            uVar16 = puVar4[1];
            iVar18 = *(int *)(param_1 + 0x38);
          }
          plVar10 = (longlong *)(param_1 + 0x30);
          iVar9 = ~uVar16 + iVar18;
          if (iVar9 != 0) {
            iVar13 = 1;
            if (iVar9 < 1) {
              iVar13 = iVar9;
            }
            memmove((void *)((longlong)(int)uVar16 * 0x40 + *(longlong *)(param_1 + 0x30)),
                    (void *)((longlong)(iVar18 - iVar13) * 0x40 + *(longlong *)(param_1 + 0x30)),
                    (longlong)iVar13 << 6);
            iVar18 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar18 + -1;
        }
        else {
          uVar8 = puVar4[3];
          local_e0 = lVar5;
          local_b0 = param_2;
          if ((longlong)(int)uVar8 == -1) {
            dVar24 = *(double *)(param_1 + 0xd0);
            lVar5 = *(longlong *)(param_1 + 0x30);
            lVar11 = lVar22 * 0x40;
            dVar29 = *(double *)(lVar5 + 0x10 + lVar11) * dVar24;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
            auVar30 = roundpd(auVar30,auVar30,1);
            dVar29 = *(double *)(lVar5 + 0x28 + lVar11) * dVar24;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
            auVar31 = roundpd(auVar31,auVar31,1);
            local_f0 = (longlong *)(longlong)auVar31._0_8_;
            if ((longlong)auVar30._0_8_ <= (longlong)local_f0) {
              dVar29 = *(double *)(lVar5 + lVar11 + 0x18) * dVar24;
              auVar27._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
              auVar27._8_8_ = 0;
              auVar31 = roundpd(auVar27,auVar27,1);
              local_f8 = (longlong)auVar31._0_8_;
              dVar24 = dVar24 * *(double *)(lVar5 + lVar11 + 0x30);
              auVar25._8_8_ = 0;
              auVar25._0_8_ = ABS(dVar24) * 2.220446049250313e-16 + dVar24;
              auVar31 = roundpd(auVar25,auVar25,1);
              plVar10 = (longlong *)(longlong)auVar30._0_8_;
              do {
                if (local_f8 <= (longlong)auVar31._0_8_) {
                  uVar8 = ((uint)plVar10 & 0xff00) << 8 | (uint)plVar10 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  lVar5 = local_f8;
LAB_14360d44c:
                  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                    uVar3 = ((uint)lVar5 & 0xff00) << 8 | (uint)lVar5 & 0xff;
                    uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
                    uVar3 = (uVar3 * 4 | uVar3) & 0x33333333;
                    uVar3 = (uVar3 * 2 | uVar3 * 4) & 0xaaaaaaaa | (uVar8 * 2 | uVar8) & 0x55555555;
                    lVar11 = *(longlong *)(param_1 + 0x90);
                    if (*(longlong *)(param_1 + 0x90) == 0) {
                      lVar11 = param_1 + 0x88;
                    }
                    uVar17 = *(uint *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar3) *
                                                4);
                    if (uVar17 != 0xffffffff) {
                      do {
                        puVar7 = (uint *)(*(longlong *)(param_1 + 0x50) +
                                         (longlong)(int)uVar17 * 0x14);
                        if (*puVar7 == uVar3) {
                          if ((puVar7 + 1 != (uint *)0x0 && puVar7 != (uint *)0x0) &&
                             (uVar3 = puVar7[2], 0 < (int)uVar3)) {
                            uVar17 = puVar7[1];
                            uVar14 = (uVar17 + uVar3) - 1;
                            local_c8 = (ulonglong)uVar14;
                            uVar20 = (int)(uVar17 + uVar14) / 2;
                            uVar19 = *(uint *)(*(longlong *)(param_1 + 0xa0) +
                                              (longlong)(int)uVar20 * 4);
                            uVar15 = local_c8;
                            if (uVar19 != uVar16) goto LAB_14360d57b;
                            goto LAB_14360d52c;
                          }
                          break;
                        }
                        uVar17 = puVar7[3];
                      } while (uVar17 != 0xffffffff);
                    }
                  }
                  goto LAB_14360d566;
                }
LAB_14360d3fb:
                bVar23 = plVar10 != local_f0;
                plVar10 = (longlong *)((longlong)plVar10 + 1);
              } while (bVar23);
            }
          }
          else {
            iVar18 = *(int *)(param_1 + 0xb8);
            if ((int)(uVar8 + 1) < iVar18) {
              puVar2 = (undefined8 *)
                       (*(longlong *)(param_1 + 0x30) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (longlong)iVar18 * 4)
                       * 0x40);
              local_78 = *puVar2;
              uStack_70 = puVar2[1];
              lVar5 = FUN_147c5ea96(lVar5);
              *(uint *)(lVar5 + 0xc) = uVar8;
              iVar18 = *(int *)(param_1 + 0xb8);
            }
            iVar9 = ~uVar8 + iVar18;
            if (iVar9 != 0) {
              iVar13 = 1;
              if (iVar9 < 1) {
                iVar13 = iVar9;
              }
              memmove((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar8 * 4),
                      (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(iVar18 - iVar13) * 4),
                      (longlong)iVar13 << 2);
              iVar18 = *(int *)(param_1 + 0xb8);
            }
            *(int *)(param_1 + 0xb8) = iVar18 + -1;
            FUN_14479f406(param_1 + 0xb0);
          }
          plVar10 = (longlong *)(param_1 + 0x30);
          iVar18 = *(int *)(param_1 + 0x38);
          lVar5 = local_e0;
          if ((int)(uVar16 + 1) < iVar18) {
            local_f8 = (longlong)iVar18 + -1;
            lVar5 = *plVar10;
            lVar21 = local_f8 * 0x40;
            local_78 = *(undefined8 *)(lVar5 + lVar21);
            uStack_70 = ((undefined8 *)(lVar5 + lVar21))[1];
            local_b8 = plVar10;
            lVar11 = FUN_147c5ea96(local_e0);
            if ((longlong)*(int *)(lVar11 + 0xc) == -1) {
              dVar24 = *(double *)(param_1 + 0xd0);
              dVar29 = *(double *)(lVar5 + 0x10 + lVar21) * dVar24;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
              auVar30 = roundpd(auVar32,auVar32,1);
              local_d0 = (longlong)auVar30._0_8_;
              dVar29 = *(double *)(lVar5 + 0x28 + lVar21) * dVar24;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
              auVar30 = roundpd(auVar33,auVar33,1);
              local_a8 = (longlong)auVar30._0_8_;
              if (local_d0 <= local_a8) {
                dVar29 = *(double *)(lVar5 + lVar21 + 0x18) * dVar24;
                auVar28._0_8_ = ABS(dVar29) * 2.220446049250313e-16 + dVar29;
                auVar28._8_8_ = 0;
                auVar30 = roundpd(auVar28,auVar28,1);
                local_c0 = (longlong)auVar30._0_8_;
                dVar24 = dVar24 * *(double *)(lVar5 + lVar21 + 0x30);
                auVar26._8_8_ = 0;
                auVar26._0_8_ = ABS(dVar24) * 2.220446049250313e-16 + dVar24;
                auVar30 = roundpd(auVar26,auVar26,1);
                lVar11 = (longlong)auVar30._0_8_;
                plVar10 = (longlong *)(param_1 + 0x50);
                lVar5 = param_1 + 0x88;
                plVar1 = (longlong *)(param_1 + 0xa0);
                local_90 = (uint *)(param_1 + 0xe4);
                local_f0 = plVar10;
                local_e8 = lVar5;
                local_d8 = lVar11;
                do {
                  if (local_c0 <= lVar11) {
                    uVar8 = ((uint)local_d0 & 0xff00) << 8 | (uint)local_d0 & 0xff;
                    uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                    uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                    local_c8 = CONCAT44(local_c8._4_4_,uVar8 * 2 | uVar8) & 0xffffffff55555555;
                    lVar21 = local_c0;
LAB_14360d8c6:
                    uVar8 = ((uint)lVar21 & 0xff00) << 8 | (uint)lVar21 & 0xff;
                    uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                    uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                    local_5c = (uVar8 * 2 | uVar8 * 4) & 0xaaaaaaaa | (uint)local_c8;
                    iVar18 = *(int *)(param_1 + 0x58);
                    iVar9 = *(int *)(param_1 + 0x84);
                    if (iVar18 != iVar9) {
                      lVar6 = *(longlong *)(param_1 + 0x90);
                      if (*(longlong *)(param_1 + 0x90) == 0) {
                        lVar6 = lVar5;
                      }
                      uVar8 = *(uint *)(lVar6 + (ulonglong)
                                                (*(int *)(param_1 + 0x98) - 1U & local_5c) * 4);
                      if (uVar8 != 0xffffffff) {
                        do {
                          puVar7 = (uint *)(*plVar10 + (longlong)(int)uVar8 * 0x14);
                          if (*puVar7 == local_5c) {
                            if (puVar7 + 1 != (uint *)0x0 && puVar7 != (uint *)0x0) {
                              uVar8 = puVar7[2];
                              uVar15 = (ulonglong)uVar8;
                              if (0 < (int)uVar8) {
                                uVar3 = puVar7[1];
                                uVar19 = (uVar8 + uVar3) - 1;
                                local_98 = (ulonglong)uVar19;
                                uVar20 = (int)(uVar19 + uVar3) / 2;
                                iVar13 = *(int *)(*plVar1 + (longlong)(int)uVar20 * 4);
                                uVar17 = uVar19;
                                lVar5 = local_e8;
                                plVar10 = local_f0;
                                lVar11 = local_d8;
                                local_a0 = uVar15;
                                if (iVar13 != (int)local_f8) goto LAB_14360da21;
                                goto LAB_14360d9c3;
                              }
                            }
                            break;
                          }
                          uVar8 = puVar7[3];
                        } while (uVar8 != 0xffffffff);
                      }
                      goto LAB_14360da8e;
                    }
                    goto LAB_14360db98;
                  }
LAB_14360dc99:
                  lVar21 = local_d0 + 1;
                  bVar23 = local_d0 != local_a8;
                  local_d0 = lVar21;
                } while (bVar23);
              }
            }
            else {
              *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(lVar11 + 0xc) * 4) =
                   uVar16;
            }
            lVar5 = local_e0;
            lVar11 = FUN_147c5ea96(local_e0,&local_78);
            *(uint *)(lVar11 + 4) = uVar16;
            iVar18 = *(int *)(param_1 + 0x38);
            plVar10 = local_b8;
          }
          param_2 = local_b0;
          iVar9 = ~uVar16 + iVar18;
          if (iVar9 != 0) {
            iVar13 = 1;
            if (iVar9 < 1) {
              iVar13 = iVar9;
            }
            memmove((void *)(lVar22 * 0x40 + *(longlong *)(param_1 + 0x30)),
                    (void *)((longlong)(iVar18 - iVar13) * 0x40 + *(longlong *)(param_1 + 0x30)),
                    (longlong)iVar13 << 6);
            iVar18 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar18 + -1;
        }
        goto LAB_14360d29f;
      }
LAB_14360d5b5:
      FUN_143618090(lVar11,uVar16,param_2);
    }
  }
  else {
    iVar18 = *(int *)(param_1 + 0x110);
    if ((int)(uVar16 + 1) < iVar18) {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x108) + -0x40 + (longlong)iVar18 * 0x40);
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      puVar7 = (uint *)FUN_147c5ea96(lVar5);
      *puVar7 = uVar16;
      uVar16 = *puVar4;
      iVar18 = *(int *)(param_1 + 0x110);
    }
    plVar10 = (longlong *)(param_1 + 0x108);
    iVar9 = ~uVar16 + iVar18;
    if (iVar9 != 0) {
      iVar13 = 1;
      if (iVar9 < 1) {
        iVar13 = iVar9;
      }
      memmove((void *)((longlong)(int)uVar16 * 0x40 + *(longlong *)(param_1 + 0x108)),
              (void *)((longlong)(iVar18 - iVar13) * 0x40 + *(longlong *)(param_1 + 0x108)),
              (longlong)iVar13 << 6);
      iVar18 = *(int *)(param_1 + 0x110);
    }
    *(int *)(param_1 + 0x110) = iVar18 + -1;
LAB_14360d29f:
    FUN_147c5ed38(plVar10);
  }
  FUN_147c5eb02(lVar5,param_2);
  *(undefined1 *)(param_1 + 0x1a1) = 1;
LAB_14360d195:
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 != (uint *)0x0;
  while( true ) {
    if ((int)uVar19 < (int)uVar16) {
      uVar17 = uVar20 + 1;
      iVar18 = uVar20 + (uint)uVar15 + 1;
    }
    else {
      if (uVar20 == uVar17) goto LAB_14360d566;
      uVar15 = (ulonglong)(uVar20 - 1);
      iVar18 = uVar20 + uVar17 + -1;
    }
    uVar20 = iVar18 / 2;
    uVar19 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)(int)uVar20 * 4);
    if (uVar19 == uVar16) break;
LAB_14360d57b:
    if (uVar17 == (uint)uVar15) goto LAB_14360d566;
  }
LAB_14360d52c:
  if (uVar20 != 0xffffffff) {
    if ((int)uVar20 < (int)uVar14) {
      lVar11 = (longlong)(int)uVar20;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar11 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while ((int)uVar14 != lVar11);
      uVar3 = puVar7[2];
    }
    puVar7[2] = uVar3 - 1;
  }
LAB_14360d566:
  bVar23 = lVar5 == (longlong)auVar31._0_8_;
  lVar5 = lVar5 + 1;
  if (bVar23) goto LAB_14360d3fb;
  goto LAB_14360d44c;
  while( true ) {
    if (iVar13 < (int)local_f8) {
      uVar3 = uVar20 + 1;
      iVar13 = uVar17 + uVar20 + 1;
    }
    else {
      if (uVar20 == uVar3) goto LAB_14360da8e;
      uVar17 = uVar20 - 1;
      iVar13 = uVar20 + uVar3 + -1;
    }
    uVar20 = iVar13 / 2;
    iVar13 = *(int *)(*plVar1 + (longlong)(int)uVar20 * 4);
    if (iVar13 == (int)local_f8) break;
LAB_14360da21:
    if (uVar3 == uVar17) goto LAB_14360da8e;
  }
LAB_14360d9c3:
  if (uVar20 != 0xffffffff) {
    if ((int)uVar20 < (int)uVar19) {
      lVar6 = (longlong)(int)uVar20;
      do {
        *(undefined4 *)(*plVar1 + lVar6 * 4) = *(undefined4 *)(*plVar1 + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar19 != lVar6);
      uVar8 = puVar7[2];
    }
    puVar7[2] = uVar8 - 1;
    iVar18 = *(int *)(param_1 + 0x58);
    iVar9 = *(int *)(param_1 + 0x84);
  }
LAB_14360da8e:
  if (iVar18 != iVar9) {
    lVar6 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar6 = lVar5;
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & local_5c) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar7 = (uint *)(*plVar10 + (longlong)(int)uVar8 * 0x14);
        if (*puVar7 == local_5c) {
          if ((puVar7 != (uint *)0x0) && (puVar7 + 1 != (uint *)0x0)) {
            uVar8 = puVar7[2];
            if (*(int *)(param_1 + 0xe0) <= (int)uVar8) goto LAB_14360dc89;
            puVar12 = puVar7 + 2;
            uVar3 = puVar7[1];
            if ((int)uVar8 < 1) {
              puVar7 = (uint *)((longlong)(int)uVar3 * 4 + *plVar1);
              goto LAB_14360dc84;
            }
            iVar18 = uVar3 + uVar8;
            lVar6 = *plVar1;
            uVar19 = (int)(uVar3 + iVar18 + -1) / 2;
            uVar17 = *(uint *)(lVar6 + (longlong)(int)uVar19 * 4);
            if (uVar17 == uVar16) goto LAB_14360dc89;
            uVar8 = (uVar8 + uVar3) - 1;
            goto LAB_14360db48;
          }
          break;
        }
        uVar8 = puVar7[3];
      } while (uVar8 != 0xffffffff);
    }
  }
LAB_14360db98:
  local_58 = &local_5c;
  FUN_146dee3ec(plVar10,&local_4c,&local_58,0);
  lVar6 = (longlong)local_4c;
  lVar5 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar5 + 4 + lVar6 * 0x14) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = 1;
  iVar18 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar18 + *(uint *)(param_1 + 0xe0);
  if ((uint)(*(int *)(param_1 + 0xac) - iVar18) < *(uint *)(param_1 + 0xe0)) {
    FUN_1446f48e2(plVar1);
  }
  puVar7 = (uint *)((longlong)*(int *)(lVar5 + lVar6 * 0x14 + 4) * 4 + *plVar1);
  puVar12 = local_90;
  lVar5 = local_e8;
  plVar10 = local_f0;
LAB_14360dc84:
  *puVar7 = uVar16;
  *puVar12 = *puVar12 + 1;
LAB_14360dc89:
  bVar23 = lVar21 == lVar11;
  lVar21 = lVar21 + 1;
  if (bVar23) goto LAB_14360dc99;
  goto LAB_14360d8c6;
  while( true ) {
    if ((int)uVar17 < (int)uVar16) {
      uVar3 = uVar19 + 1;
      iVar9 = uVar8 + uVar19 + 1;
    }
    else {
      if (uVar19 == uVar3) goto LAB_14360dc50;
      uVar8 = uVar19 - 1;
      iVar9 = uVar19 + uVar3 + -1;
    }
    uVar19 = iVar9 / 2;
    uVar17 = *(uint *)(lVar6 + (longlong)(int)uVar19 * 4);
    if (uVar17 == uVar16) break;
LAB_14360db48:
    if (uVar3 == uVar8) {
      uVar3 = uVar3 + ((int)uVar17 < (int)uVar16);
LAB_14360dc50:
      if (uVar3 != 0xffffffff) {
        if ((int)uVar3 < iVar18) {
          lVar6 = (longlong)iVar18;
          do {
            *(undefined4 *)(*plVar1 + lVar6 * 4) = *(undefined4 *)(*plVar1 + -4 + lVar6 * 4);
            lVar6 = lVar6 + -1;
          } while ((int)uVar3 < lVar6);
          lVar6 = *plVar1;
        }
        puVar7 = (uint *)(lVar6 + (longlong)(int)uVar3 * 4);
        goto LAB_14360dc84;
      }
      break;
    }
  }
  goto LAB_14360dc89;
}



// FUNCTION 14360dd38 FUN_14360dd38 body=12507 status=ok
// SIG undefined FUN_14360dd38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14360dd38(longlong param_1,longlong *param_2,double *param_3,char param_4)

{
  undefined4 *puVar1;
  LARGE_INTEGER *pLVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  LARGE_INTEGER LVar6;
  LARGE_INTEGER LVar7;
  LARGE_INTEGER LVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  double *pdVar34;
  double *pdVar35;
  double *pdVar36;
  undefined8 unaff_R12;
  undefined7 uVar38;
  int7 iVar39;
  double *pdVar37;
  int iVar40;
  uint uVar41;
  double *pdVar42;
  double *pdVar43;
  double *pdVar44;
  uint uVar45;
  double *pdVar46;
  double *pdVar47;
  bool bVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
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
  undefined1 auVar80 [16];
  double dVar81;
  LARGE_INTEGER LVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined1 auStack_408 [39];
  undefined1 local_3e1;
  undefined8 *local_3e0;
  undefined8 local_3d8;
  double *local_3d0;
  longlong *local_3c8;
  double *local_3c0;
  uint *local_3b8;
  double *local_3b0;
  undefined8 local_3a8;
  ulonglong local_3a0;
  double *local_398;
  longlong local_390;
  double *local_388;
  double *local_380;
  uint *local_378;
  longlong local_370;
  longlong local_368;
  longlong lStack_360;
  undefined8 *local_358;
  ulonglong uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 local_328;
  undefined8 uStack_320;
  LARGE_INTEGER local_318 [2];
  double local_308;
  double local_300 [3];
  undefined8 local_2e8;
  undefined1 auStack_2e0 [8];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  char local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  ulonglong uStack_240;
  undefined8 local_238;
  ulonglong uStack_230;
  longlong local_228;
  double local_220;
  double local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined2 local_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  if (param_4 == '\0') {
LAB_14360ddf3:
    bVar48 = false;
  }
  else {
    dVar49 = param_3[3];
    uVar90 = SUB84(dVar49,0);
    uVar92 = (undefined4)((ulonglong)dVar49 >> 0x20);
    if ((dVar49 < *param_3) || (iVar9 = _finite(*param_3), iVar9 == 0)) goto LAB_14360ddf3;
    uVar21 = 0;
    bVar48 = false;
    do {
      iVar9 = _finite((double)CONCAT44(uVar92,uVar90));
      if ((iVar9 == 0) || (bVar48 = 1 < uVar21, uVar21 == 2)) break;
      dVar49 = param_3[uVar21 + 4];
      uVar90 = SUB84(dVar49,0);
      uVar92 = (undefined4)((ulonglong)dVar49 >> 0x20);
      if (dVar49 < param_3[uVar21 + 1]) break;
      iVar9 = _finite(param_3[uVar21 + 1]);
      uVar21 = uVar21 + 1;
    } while (iVar9 != 0);
  }
  lVar31 = param_1 + 0x118;
  puVar11 = (uint *)FUN_147c5ea26(lVar31);
  bVar5 = puVar11 != (uint *)0x0;
  uVar38 = (undefined7)((ulonglong)unaff_R12 >> 8);
  pdVar37 = (double *)CONCAT71(uVar38,bVar5);
  if (puVar11 == (uint *)0x0) {
    uVar25 = *(uint *)((longlong)param_2 + 0xc);
    uVar17 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
    uVar18 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    uVar18 = uVar18 >> 0x10 ^ uVar18;
    uVar17 = *(uint *)(*(longlong *)(param_1 + 0x138) +
                      (ulonglong)(*(uint *)(param_1 + 300) & uVar18) * 4);
    if (uVar17 != 0xffffffff) {
      lVar12 = *(longlong *)(param_1 + 0x118);
      do {
        uVar21 = (ulonglong)(int)uVar17;
        if (*(uint *)(lVar12 + 0xc + uVar21 * 0x24) == uVar25) goto LAB_14360e027;
        uVar17 = *(uint *)(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar17 * 4);
      } while (uVar17 != 0xffffffff);
    }
    iVar9 = *(int *)(param_1 + 0x120);
    lVar12 = (longlong)iVar9;
    *(uint *)(param_1 + 0x120) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x124) < iVar9 + 1U) {
      FUN_147c5e058(lVar31,iVar9);
    }
    lVar20 = *(longlong *)(param_1 + 0x118);
    lVar22 = param_2[1];
    plVar13 = (longlong *)(lVar20 + lVar12 * 0x24);
    *plVar13 = *param_2;
    plVar13[1] = lVar22;
    puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar12 * 0x24);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    *(undefined4 *)(lVar20 + 0x20 + lVar12 * 0x24) = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x120);
    uVar21 = (longlong)iVar9 - 1;
    if (*(uint *)(param_1 + 0x130) <= (uint)uVar21) {
      uVar28 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar12 & 0x1f);
      uVar25 = 0x20;
      if (0x20 < uVar17) {
        uVar25 = uVar17;
      }
      FUN_1404b04e2(param_1 + 0x128,uVar25);
    }
    uVar28 = (ulonglong)(uVar18 & *(uint *)(param_1 + 300));
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + (uVar21 & 0xffffffff) * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x138) + uVar28 * 4);
    *(uint *)(*(longlong *)(param_1 + 0x138) + uVar28 * 4) = (uint)uVar21;
    lVar12 = *(longlong *)(param_1 + 0x118);
LAB_14360e027:
    puVar11 = (uint *)(lVar12 + uVar21 * 0x24 + 0x10);
  }
  else {
    lVar12 = (longlong)(int)puVar11[2];
    if (lVar12 != -1) {
      if (bVar48) {
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          lVar20 = lVar12 * 0x48 + *(longlong *)(param_1 + 0x20);
          lVar22 = 0;
          do {
            dVar49 = param_3[lVar22];
            if ((dVar49 < *(double *)(lVar20 + lVar22 * 8)) ||
               (pdVar43 = (double *)(lVar20 + 0x18 + lVar22 * 8),
               *pdVar43 <= dVar49 && dVar49 != *pdVar43)) goto LAB_14360e160;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 3);
          lVar22 = 3;
          do {
            dVar49 = param_3[lVar22];
            if ((dVar49 < *(double *)(lVar20 + -0x18 + lVar22 * 8)) ||
               (pdVar43 = (double *)(lVar20 + lVar22 * 8), *pdVar43 <= dVar49 && dVar49 != *pdVar43)
               ) goto LAB_14360e160;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 6);
          if (0 < (longlong)*(int *)(lVar20 + 0x38)) {
            lVar31 = *(longlong *)(lVar20 + 0x30);
            lVar12 = 0;
            do {
              if (((*(int *)(lVar31 + lVar12) == (int)*param_2) &&
                  (*(int *)(lVar31 + 4 + lVar12) == *(int *)((longlong)param_2 + 4))) &&
                 (*(int *)(lVar31 + 8 + lVar12) == (int)param_2[1])) {
                *(double *)(lVar31 + 0x20 + lVar12) = param_3[2];
                dVar49 = param_3[1];
                pdVar37 = (double *)(lVar31 + 0x10 + lVar12);
                *pdVar37 = *param_3;
                pdVar37[1] = dVar49;
                dVar49 = param_3[4];
                pdVar37 = (double *)(lVar31 + 0x28 + lVar12);
                *pdVar37 = param_3[3];
                pdVar37[1] = dVar49;
                *(double *)(lVar31 + 0x38 + lVar12) = param_3[5];
                break;
              }
              lVar12 = lVar12 + 0x40;
            } while ((longlong)*(int *)(lVar20 + 0x38) * 0x40 != lVar12);
          }
          *(undefined1 *)(lVar20 + 0x40) = 1;
        }
        else {
          lVar22 = (longlong)(int)puVar11[4] * 0x70 + *(longlong *)(param_1 + 0x10);
          lVar20 = 0;
          do {
            dVar49 = param_3[lVar20];
            if ((dVar49 < *(double *)(lVar22 + lVar20 * 8)) ||
               (pdVar43 = (double *)(lVar22 + 0x18 + lVar20 * 8),
               *pdVar43 <= dVar49 && dVar49 != *pdVar43)) goto LAB_14360e041;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 3);
          lVar20 = 3;
          do {
            dVar49 = param_3[lVar20];
            if ((dVar49 < *(double *)(lVar22 + -0x18 + lVar20 * 8)) ||
               (pdVar43 = (double *)(lVar22 + lVar20 * 8), *pdVar43 <= dVar49 && dVar49 != *pdVar43)
               ) goto LAB_14360e041;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 6);
          lVar31 = *(longlong *)(param_1 + 0x20) + lVar12 * 0x48;
          if (0 < (longlong)*(int *)(lVar31 + 0x38)) {
            lVar12 = *(longlong *)(lVar31 + 0x30);
            lVar20 = 0;
            do {
              if (((*(int *)(lVar12 + lVar20) == (int)*param_2) &&
                  (*(int *)(lVar12 + 4 + lVar20) == *(int *)((longlong)param_2 + 4))) &&
                 (*(int *)(lVar12 + 8 + lVar20) == (int)param_2[1])) {
                *(double *)(lVar12 + 0x20 + lVar20) = param_3[2];
                dVar49 = param_3[1];
                pdVar37 = (double *)(lVar12 + 0x10 + lVar20);
                *pdVar37 = *param_3;
                pdVar37[1] = dVar49;
                dVar49 = param_3[4];
                pdVar37 = (double *)(lVar12 + 0x28 + lVar20);
                *pdVar37 = param_3[3];
                pdVar37[1] = dVar49;
                *(double *)(lVar12 + 0x38 + lVar20) = param_3[5];
                break;
              }
              lVar20 = lVar20 + 0x40;
            } while ((longlong)*(int *)(lVar31 + 0x38) * 0x40 != lVar20);
          }
          *(undefined1 *)(lVar31 + 0x40) = 1;
          FUN_147c5e180(*(longlong *)(param_1 + 0x20) + (longlong)(int)puVar11[2] * 0x48,
                        *(longlong *)(param_1 + 0x20) + (longlong)(int)puVar11[2] * 0x48 + 0x30);
        }
        pdVar37 = (double *)CONCAT71(uVar38,1);
        goto LAB_14360ff6e;
      }
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
LAB_14360e160:
        local_368 = *param_2;
        lStack_360 = param_2[1];
        FUN_1436182a4(lVar12 * 0x48 + *(longlong *)(param_1 + 0x20));
        puVar11[2] = 0xffffffff;
      }
      else {
LAB_14360e041:
        FUN_143618090(param_1,puVar11[4]);
        puVar11[2] = 0xffffffff;
        puVar11[4] = 0xffffffff;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1a1) = 1;
  if (bVar48) {
    dVar49 = param_3[5];
    uVar91 = SUB84(dVar49,0);
    uVar93 = (undefined4)((ulonglong)dVar49 >> 0x20);
    dVar84 = param_3[2];
    uVar94 = SUB84(dVar84,0);
    uVar95 = (undefined4)((ulonglong)dVar84 >> 0x20);
    dVar49 = dVar49 - dVar84;
    dVar84 = param_3[4];
    dVar3 = *param_3;
    dVar83 = param_3[1];
    dVar56 = dVar84 - dVar83;
    dVar4 = param_3[3];
    dVar81 = dVar4 - dVar3;
    if ((dVar81 <= dVar56 || dVar81 <= dVar49) && (dVar81 = dVar56, dVar56 <= dVar49)) {
      dVar81 = dVar49;
    }
    uVar90 = SUB84(dVar84,0);
    uVar92 = (int)((ulonglong)dVar84 >> 0x20);
    uVar96 = SUB84(dVar4,0);
    uVar97 = (int)((ulonglong)dVar4 >> 0x20);
    uVar98 = SUB84(dVar83,0);
    uVar99 = (int)((ulonglong)dVar83 >> 0x20);
    uVar100 = SUB84(dVar3,0);
    uVar101 = (int)((ulonglong)dVar3 >> 0x20);
    if (dVar81 < *(double *)(param_1 + 0x150) || dVar81 == *(double *)(param_1 + 0x150)) {
      pdVar43 = param_3 + 3;
      uVar25 = puVar11[1];
      lVar12 = (longlong)(int)uVar25;
      iVar39 = (int7)(int3)(uVar25 >> 8);
      if (lVar12 == -1) {
        if (*(char *)(param_1 + 0x40) == '\x01') {
          local_3e1 = bVar5;
          local_390 = lVar31;
          FUN_1436188ca(param_1,&local_2e8,param_2,param_3);
          puVar11[4] = (uint)local_2e8;
          puVar11[2] = local_2e8._4_4_;
          goto LAB_14360ff39;
        }
        pdVar37 = (double *)CONCAT71(iVar39,bVar5);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          local_2e8 = (undefined **)*param_2;
          auStack_2e0 = (undefined1  [8])param_2[1];
          local_2c8 = param_3[2];
          local_2d8 = *param_3;
          dStack_2d0 = param_3[1];
          dStack_2c0 = *pdVar43;
          local_2b8 = param_3[4];
          dStack_2b0 = param_3[5];
          uVar25 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar25 + 1;
          local_3e1 = bVar5;
          local_3b8 = puVar11;
          local_390 = lVar31;
          if (*(uint *)(param_1 + 0x3c) < uVar25 + 1) {
            FUN_147c5e334(param_1 + 0x30,uVar25);
          }
          lVar31 = *(longlong *)(param_1 + 0x30);
          lVar12 = (longlong)(int)uVar25 * 0x40;
          *(longlong *)(lVar31 + lVar12) = (longlong)local_2e8;
          ((longlong *)(lVar31 + lVar12))[1] = (longlong)auStack_2e0;
          pdVar43 = (double *)(lVar31 + 0x10 + lVar12);
          *pdVar43 = local_2d8;
          pdVar43[1] = dStack_2d0;
          *(double *)(lVar31 + 0x20 + lVar12) = local_2c8;
          *(double *)(lVar31 + 0x38 + lVar12) = dStack_2b0;
          pdVar43 = (double *)(lVar31 + 0x28 + lVar12);
          *pdVar43 = dStack_2c0;
          pdVar43[1] = local_2b8;
          local_3b8[1] = uVar25;
          puVar11 = local_3b8;
          if (((*(longlong *)(param_1 + 0xc0) == 0) && (0.0 < *(double *)(param_1 + 200))) &&
             ((0 < *(int *)(param_1 + 0xd8) &&
              ((uVar21 = (ulonglong)*(int *)(param_1 + 0xdc), 0 < (longlong)uVar21 &&
               (0 < *(int *)(param_1 + 0xe0))))))) {
            dVar49 = *(double *)(param_1 + 0xd0);
            uVar28 = DAT_149931180;
            auVar59._8_8_ = 0;
            auVar59._0_8_ =
                 (double)((ulonglong)(*param_3 * dVar49) & uVar28) * 2.220446049250313e-16 +
                 *param_3 * dVar49;
            auVar59 = roundpd(auVar59,auVar59,1);
            pdVar43 = (double *)(longlong)auVar59._0_8_;
            auVar67._8_8_ = 0;
            auVar67._0_8_ =
                 (double)((ulonglong)(param_3[3] * dVar49) & uVar28) * 2.220446049250313e-16 +
                 param_3[3] * dVar49;
            auVar59 = roundpd(auVar67,auVar67,1);
            local_3c0 = (double *)(longlong)auVar59._0_8_;
            if ((longlong)pdVar43 <= (longlong)local_3c0) {
              auVar71._8_8_ = 0;
              auVar71._0_8_ =
                   (double)((ulonglong)(param_3[1] * dVar49) & uVar28) * 2.220446049250313e-16 +
                   param_3[1] * dVar49;
              auVar59 = roundpd(auVar71,auVar71,1);
              uVar29 = (ulonglong)auVar59._0_8_;
              auVar69._8_8_ = 0;
              auVar69._0_8_ =
                   (double)(uVar28 & (ulonglong)(dVar49 * param_3[4])) * 2.220446049250313e-16 +
                   dVar49 * param_3[4];
              auVar59 = roundpd(auVar69,auVar69,1);
              uVar28 = (ulonglong)auVar59._0_8_;
              if (((((longlong)uVar29 <= (longlong)uVar28) &&
                   (uVar23 = (longlong)local_3c0 + (1 - (longlong)pdVar43), uVar23 <= uVar21)) &&
                  (uVar30 = (uVar28 - uVar29) + 1, uVar30 <= uVar21)) &&
                 (uVar30 = uVar30 * uVar23, uVar30 < uVar21 || uVar30 - uVar21 == 0)) {
                plVar13 = (longlong *)(param_1 + 0x50);
                puVar15 = (undefined8 *)(param_1 + 0x88);
                pdVar44 = pdVar43;
                do {
                  uVar17 = ((uint)pdVar44 & 0xff00) << 8 | (uint)pdVar44 & 0xff;
                  uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                  uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                  uVar21 = uVar29;
                  do {
                    local_3e0 = puVar15;
                    local_3d8 = plVar13;
                    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                      uVar18 = ((uint)uVar21 & 0xff00) << 8 | (uint)uVar21 & 0xff;
                      uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
                      uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
                      uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa |
                               (uVar17 * 2 | uVar17) & 0x55555555;
                      puVar14 = *(undefined8 **)(param_1 + 0x90);
                      if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
                        puVar14 = puVar15;
                      }
                      uVar41 = *(uint *)((longlong)puVar14 +
                                        (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) * 4);
                      if (uVar41 != 0xffffffff) {
                        do {
                          puVar11 = (uint *)(*plVar13 + (longlong)(int)uVar41 * 0x14);
                          if (*puVar11 == uVar18) {
                            if ((((ulonglong)(puVar11 + 1) & 0xfffffffffffffffb) != 0) &&
                               (*(int *)(param_1 + 0xe0) <= (int)puVar11[2])) goto LAB_143610a6e;
                            break;
                          }
                          uVar41 = puVar11[3];
                        } while (uVar41 != 0xffffffff);
                      }
                    }
                    bVar48 = uVar21 != uVar28;
                    uVar21 = uVar21 + 1;
                  } while (bVar48);
                  bVar48 = pdVar44 != local_3c0;
                  pdVar44 = (double *)((longlong)pdVar44 + 1);
                } while (bVar48);
                plVar26 = (longlong *)(param_1 + 0xa0);
                local_3d0 = (double *)(param_1 + 0xe4);
                local_3a0 = uVar29;
LAB_14360f141:
                uVar17 = ((uint)pdVar43 & 0xff00) << 8 | (uint)pdVar43 & 0xff;
                uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                uVar21 = local_3a0;
                local_3b0 = pdVar43;
LAB_14360f186:
                uVar18 = ((uint)uVar21 & 0xff00) << 8 | (uint)uVar21 & 0xff;
                uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
                uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
                uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa | (uVar17 * 2 | uVar17) & 0x55555555
                ;
                local_348 = (undefined *)CONCAT44(local_348._4_4_,uVar18);
                if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                  puVar14 = *(undefined8 **)(param_1 + 0x90);
                  if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
                    puVar14 = puVar15;
                  }
                  uVar41 = *(uint *)((longlong)puVar14 +
                                    (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) * 4);
                  if (uVar41 != 0xffffffff) {
                    do {
                      puVar11 = (uint *)(*plVar13 + (longlong)(int)uVar41 * 0x14);
                      if (*puVar11 == uVar18) {
                        if ((puVar11 != (uint *)0x0) && (puVar11 + 1 != (uint *)0x0)) {
                          uVar18 = puVar11[2];
                          if (*(int *)(param_1 + 0xe0) <= (int)uVar18) goto LAB_14360f3cb;
                          pdVar37 = (double *)(puVar11 + 2);
                          uVar41 = puVar11[1];
                          if ((int)uVar18 < 1) {
                            puVar11 = (uint *)((longlong)(int)uVar41 * 4 + *plVar26);
                            goto LAB_14360f3c7;
                          }
                          iVar9 = uVar41 + uVar18;
                          lVar31 = *plVar26;
                          uVar24 = (int)(uVar41 + iVar9 + -1) / 2;
                          uVar32 = *(uint *)(lVar31 + (longlong)(int)uVar24 * 4);
                          if (uVar32 == uVar25) goto LAB_14360f3cb;
                          uVar18 = (uVar18 + uVar41) - 1;
                          goto LAB_14360f290;
                        }
                        break;
                      }
                      uVar41 = puVar11[3];
                    } while (uVar41 != 0xffffffff);
                  }
                }
                local_2e8 = (undefined **)&local_348;
                FUN_146dee3ec(plVar13,local_318,&local_2e8,0);
                lVar12 = (longlong)(int)local_318[0]._0_4_;
                lVar31 = *(longlong *)(param_1 + 0x50);
                *(undefined4 *)(lVar31 + 4 + lVar12 * 0x14) = *(undefined4 *)(param_1 + 0xa8);
                *(undefined4 *)(lVar31 + 8 + lVar12 * 0x14) = 1;
                iVar9 = *(int *)(param_1 + 0xa8);
                *(uint *)(param_1 + 0xa8) = iVar9 + *(uint *)(param_1 + 0xe0);
                if ((uint)(*(int *)(param_1 + 0xac) - iVar9) < *(uint *)(param_1 + 0xe0)) {
                  FUN_1446f48e2(plVar26);
                }
                puVar11 = (uint *)((longlong)*(int *)(lVar31 + lVar12 * 0x14 + 4) * 4 + *plVar26);
                pdVar37 = local_3d0;
                plVar13 = local_3d8;
                puVar15 = local_3e0;
LAB_14360f3c7:
                *puVar11 = uVar25;
                *(int *)pdVar37 = *(int *)pdVar37 + 1;
                goto LAB_14360f3cb;
              }
            }
            *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
LAB_143610a6e:
            uVar17 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 0xb8) = uVar17 + 1;
            if (*(uint *)(param_1 + 0xbc) < uVar17 + 1) {
              FUN_1446f48e2((longlong *)(param_1 + 0xb0),uVar17);
            }
            *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar17 * 4) = uVar25;
            goto LAB_143610a9f;
          }
        }
        else {
          local_3e1 = bVar5;
          local_390 = lVar31;
          FUN_1436188ca(*(longlong *)(param_1 + 0xc0),&local_2e8,param_2,param_3);
          puVar11[1] = (uint)local_2e8;
        }
      }
      else {
        lVar20 = *(longlong *)(param_1 + 0xc0);
        if (lVar20 == 0) {
          local_3e1 = bVar5;
          local_390 = lVar31;
          if ((((0.0 < *(double *)(param_1 + 200)) && (0 < *(int *)(param_1 + 0xd8))) &&
              (0 < *(int *)(param_1 + 0xdc))) && (0 < *(int *)(param_1 + 0xe0))) {
            uVar17 = puVar11[3];
            if (uVar17 == 0xffffffff) {
              local_3e0 = *(undefined8 **)(param_1 + 0x30);
              dVar49 = *(double *)(param_1 + 0xd0);
              auVar58._8_8_ = 0;
              auVar58._0_8_ =
                   ABS((double)local_3e0[lVar12 * 8 + 2] * dVar49) * 2.220446049250313e-16 +
                   (double)local_3e0[lVar12 * 8 + 2] * dVar49;
              auVar59 = roundpd(auVar58,auVar58,1);
              local_3d0 = (double *)(longlong)auVar59._0_8_;
              auVar60._8_8_ = 0;
              auVar60._0_8_ =
                   ABS((double)local_3e0[lVar12 * 8 + 3] * dVar49) * 2.220446049250313e-16 +
                   (double)local_3e0[lVar12 * 8 + 3] * dVar49;
              auVar59 = roundpd(auVar60,auVar60,1);
              pdVar34 = (double *)(longlong)auVar59._0_8_;
              auVar61._8_8_ = 0;
              auVar61._0_8_ =
                   ABS((double)local_3e0[lVar12 * 8 + 5] * dVar49) * 2.220446049250313e-16 +
                   (double)local_3e0[lVar12 * 8 + 5] * dVar49;
              auVar59 = roundpd(auVar61,auVar61,1);
              pdVar37 = (double *)(longlong)auVar59._0_8_;
              auVar62._8_8_ = 0;
              auVar62._0_8_ =
                   ABS((double)local_3e0[lVar12 * 8 + 6] * dVar49) * 2.220446049250313e-16 +
                   (double)local_3e0[lVar12 * 8 + 6] * dVar49;
              auVar59 = roundpd(auVar62,auVar62,1);
              pdVar42 = (double *)(longlong)auVar59._0_8_;
              auVar63._0_8_ = ABS(dVar3 * dVar49) * 2.220446049250313e-16 + dVar3 * dVar49;
              auVar63._8_8_ = 0;
              auVar59 = roundpd(auVar63,auVar63,1);
              pdVar46 = (double *)(longlong)auVar59._0_8_;
              auVar64._0_8_ = ABS(dVar83 * dVar49) * 2.220446049250313e-16 + dVar83 * dVar49;
              auVar64._8_8_ = 0;
              auVar59 = roundpd(auVar64,auVar64,1);
              plVar27 = (longlong *)(longlong)auVar59._0_8_;
              auVar65._0_8_ = ABS(dVar4 * dVar49) * 2.220446049250313e-16 + dVar4 * dVar49;
              auVar65._8_8_ = 0;
              auVar59 = roundpd(auVar65,auVar65,1);
              pdVar35 = (double *)(longlong)auVar59._0_8_;
              auVar51._0_8_ = ABS(dVar84 * dVar49) * 2.220446049250313e-16 + dVar84 * dVar49;
              auVar51._8_8_ = 0;
              auVar59 = roundpd(auVar51,auVar51,1);
              plVar26 = (longlong *)(longlong)auVar59._0_8_;
              plVar13 = plVar27;
              pdVar44 = pdVar34;
              pdVar36 = pdVar35;
              pdVar47 = pdVar46;
              if ((((longlong)pdVar35 < (longlong)pdVar37 ||
                   ((longlong)pdVar34 < (longlong)plVar27 || (longlong)local_3d0 < (longlong)pdVar46
                   )) || (longlong)plVar26 < (longlong)pdVar42) &&
                 ((longlong)local_3d0 <= (longlong)pdVar37)) {
                local_3a8 = (double *)(local_3e0 + lVar12 * 8 + 2);
                do {
                  if ((longlong)pdVar34 <= (longlong)pdVar42) {
                    uVar17 = ((uint)local_3d0 & 0xff00) << 8 | (uint)local_3d0 & 0xff;
                    uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                    uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                    pdVar44 = pdVar34;
LAB_14360e70f:
                    if ((((longlong)plVar26 < (longlong)pdVar44) ||
                        ((longlong)pdVar44 < (longlong)plVar27 ||
                         ((longlong)pdVar35 < (longlong)local_3d0 ||
                         (longlong)local_3d0 < (longlong)pdVar46))) &&
                       (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
                      uVar18 = ((uint)pdVar44 & 0xff00) << 8 | (uint)pdVar44 & 0xff;
                      uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
                      uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
                      uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa |
                               (uVar17 * 2 | uVar17) & 0x55555555;
                      puVar15 = *(undefined8 **)(param_1 + 0x90);
                      if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
                        puVar15 = (undefined8 *)(param_1 + 0x88);
                      }
                      uVar41 = *(uint *)((longlong)puVar15 +
                                        (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) * 4);
                      if (uVar41 != 0xffffffff) {
                        do {
                          puVar16 = (uint *)(*(longlong *)(param_1 + 0x50) +
                                            (longlong)(int)uVar41 * 0x14);
                          if (*puVar16 == uVar18) {
                            if (puVar16 + 1 != (uint *)0x0 && puVar16 != (uint *)0x0) {
                              uVar18 = puVar16[2];
                              local_3d8 = (longlong *)(ulonglong)uVar18;
                              if (0 < (int)uVar18) {
                                uVar41 = puVar16[1];
                                uVar19 = (uVar18 + uVar41) - 1;
                                local_3a0 = (ulonglong)uVar19;
                                uVar45 = (int)(uVar19 + uVar41) / 2;
                                uVar32 = *(uint *)(*(longlong *)(param_1 + 0xa0) +
                                                  (longlong)(int)uVar45 * 4);
                                uVar24 = uVar19;
                                if (uVar32 != uVar25) goto LAB_14360e86b;
                                goto LAB_14360e829;
                              }
                            }
                            break;
                          }
                          uVar41 = puVar16[3];
                        } while (uVar41 != 0xffffffff);
                      }
                    }
                    goto LAB_14360e8b9;
                  }
LAB_14360e8c9:
                  bVar48 = local_3d0 != pdVar37;
                  local_3d0 = (double *)((longlong)local_3d0 + 1);
                } while (bVar48);
                dVar49 = *(double *)(param_1 + 0xd0);
                auVar66._8_8_ = 0;
                auVar66._0_8_ = ABS(*param_3 * dVar49) * 2.220446049250313e-16 + *param_3 * dVar49;
                auVar67 = roundpd(auVar66,auVar66,1);
                auVar68._8_8_ = 0;
                auVar68._0_8_ =
                     ABS(param_3[1] * dVar49) * 2.220446049250313e-16 + param_3[1] * dVar49;
                auVar69 = roundpd(auVar68,auVar68,1);
                auVar70._8_8_ = 0;
                auVar70._0_8_ =
                     ABS(param_3[3] * dVar49) * 2.220446049250313e-16 + param_3[3] * dVar49;
                auVar71 = roundpd(auVar70,auVar70,1);
                auVar72._8_8_ = 0;
                auVar72._0_8_ =
                     ABS(param_3[4] * dVar49) * 2.220446049250313e-16 + param_3[4] * dVar49;
                auVar59 = roundpd(auVar72,auVar72,1);
                plVar26 = (longlong *)(longlong)auVar59._0_8_;
                auVar73._8_8_ = 0;
                auVar73._0_8_ =
                     ABS(*local_3a8 * dVar49) * 2.220446049250313e-16 + *local_3a8 * dVar49;
                auVar59 = roundpd(auVar73,auVar73,1);
                local_3d0 = (double *)(longlong)auVar59._0_8_;
                auVar74._8_8_ = 0;
                auVar74._0_8_ =
                     ABS((double)local_3e0[lVar12 * 8 + 3] * dVar49) * 2.220446049250313e-16 +
                     (double)local_3e0[lVar12 * 8 + 3] * dVar49;
                auVar51 = roundpd(auVar74,auVar74,1);
                auVar75._8_8_ = 0;
                auVar75._0_8_ =
                     ABS((double)local_3e0[lVar12 * 8 + 5] * dVar49) * 2.220446049250313e-16 +
                     (double)local_3e0[lVar12 * 8 + 5] * dVar49;
                auVar59 = roundpd(auVar75,auVar75,1);
                pdVar37 = (double *)(longlong)auVar59._0_8_;
                auVar52._8_8_ = 0;
                auVar52._0_8_ =
                     ABS(dVar49 * (double)local_3e0[lVar12 * 8 + 6]) * 2.220446049250313e-16 +
                     dVar49 * (double)local_3e0[lVar12 * 8 + 6];
                auVar59 = roundpd(auVar52,auVar52,1);
                pdVar42 = (double *)(longlong)auVar59._0_8_;
                plVar13 = (longlong *)(longlong)auVar69._0_8_;
                pdVar44 = (double *)(longlong)auVar51._0_8_;
                pdVar36 = (double *)(longlong)auVar71._0_8_;
                pdVar47 = (double *)(longlong)auVar67._0_8_;
                local_3e0 = (undefined8 *)(param_1 + 0x88);
                local_3c8 = plVar27;
                local_3c0 = pdVar34;
                local_398 = pdVar35;
                local_388 = pdVar46;
              }
              local_3b8 = puVar11;
              local_3b0 = pdVar37;
              local_380 = pdVar43;
              if (((longlong)pdVar47 <= (longlong)pdVar36) &&
                 (((longlong)pdVar42 < (longlong)plVar26 || (longlong)pdVar37 < (longlong)pdVar36)
                  || ((longlong)plVar13 < (longlong)pdVar44 ||
                     (longlong)pdVar47 < (longlong)local_3d0))) {
                local_3d8 = (longlong *)(param_1 + 0x50);
                local_3e0 = (undefined8 *)(param_1 + 0x88);
                local_3c8 = (longlong *)(param_1 + 0xa0);
                local_378 = (uint *)(param_1 + 0xe4);
                local_3c0 = pdVar44;
                local_398 = pdVar36;
                do {
                  if ((longlong)plVar13 <= (longlong)plVar26) {
                    local_3a0 = CONCAT71(local_3a0._1_7_,
                                         (longlong)pdVar37 < (longlong)pdVar47 ||
                                         (longlong)pdVar47 < (longlong)local_3d0);
                    uVar17 = ((uint)pdVar47 & 0xff00) << 8 | (uint)pdVar47 & 0xff;
                    uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                    uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                    local_3a8 = (double *)
                                (CONCAT44(local_3a8._4_4_,uVar17 * 2 | uVar17) & 0xffffffff55555555)
                    ;
                    plVar27 = plVar13;
                    local_388 = pdVar47;
LAB_14360fb8c:
                    if (((longlong)pdVar42 < (longlong)plVar27) ||
                       ((longlong)plVar27 < (longlong)pdVar44 || (char)local_3a0 != '\0')) {
                      uVar17 = ((uint)plVar27 & 0xff00) << 8 | (uint)plVar27 & 0xff;
                      uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                      uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                      uVar17 = (uVar17 * 2 | uVar17 * 4) & 0xaaaaaaaa | (uint)local_3a8;
                      local_348 = (undefined *)CONCAT44(local_348._4_4_,uVar17);
                      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                        puVar15 = *(undefined8 **)(param_1 + 0x90);
                        if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
                          puVar15 = local_3e0;
                        }
                        uVar18 = *(uint *)((longlong)puVar15 +
                                          (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar17) * 4);
                        if (uVar18 != 0xffffffff) {
                          do {
                            puVar11 = (uint *)(*local_3d8 + (longlong)(int)uVar18 * 0x14);
                            if (*puVar11 == uVar17) {
                              if ((puVar11 != (uint *)0x0) && (puVar11 + 1 != (uint *)0x0)) {
                                uVar17 = puVar11[2];
                                if (*(int *)(param_1 + 0xe0) <= (int)uVar17) {
                                  dVar49 = *(double *)(param_1 + 0xd0);
                                  auVar78._8_8_ = 0;
                                  auVar78._0_8_ =
                                       ABS(*param_3 * dVar49) * 2.220446049250313e-16 +
                                       *param_3 * dVar49;
                                  auVar59 = roundpd(auVar78,auVar78,1);
                                  auVar79._8_8_ = 0;
                                  auVar79._0_8_ =
                                       ABS(param_3[3] * dVar49) * 2.220446049250313e-16 +
                                       param_3[3] * dVar49;
                                  auVar67 = roundpd(auVar79,auVar79,1);
                                  local_3c0 = (double *)(longlong)auVar67._0_8_;
                                  if ((longlong)local_3c0 < (longlong)auVar59._0_8_)
                                  goto LAB_14360fec6;
                                  auVar80._8_8_ = 0;
                                  auVar80._0_8_ =
                                       ABS(param_3[1] * dVar49) * 2.220446049250313e-16 +
                                       param_3[1] * dVar49;
                                  auVar67 = roundpd(auVar80,auVar80,1);
                                  local_3d0 = (double *)(longlong)auVar67._0_8_;
                                  auVar55._8_8_ = 0;
                                  auVar55._0_8_ =
                                       ABS(dVar49 * param_3[4]) * 2.220446049250313e-16 +
                                       dVar49 * param_3[4];
                                  auVar67 = roundpd(auVar55,auVar55,1);
                                  pdVar37 = (double *)(longlong)auVar59._0_8_;
                                  goto LAB_143610b04;
                                }
                                puVar16 = puVar11 + 2;
                                uVar18 = puVar11[1];
                                if ((int)uVar17 < 1) {
                                  puVar11 = (uint *)((longlong)(int)uVar18 * 4 + *local_3c8);
                                  goto LAB_14360fe0d;
                                }
                                iVar9 = uVar18 + uVar17;
                                lVar31 = *local_3c8;
                                uVar32 = (int)(uVar18 + iVar9 + -1) / 2;
                                uVar41 = *(uint *)(lVar31 + (longlong)(int)uVar32 * 4);
                                pdVar37 = local_3b0;
                                pdVar44 = local_3c0;
                                pdVar36 = local_398;
                                if (uVar41 == uVar25) goto LAB_14360fe21;
                                uVar17 = (uVar17 + uVar18) - 1;
                                goto LAB_14360fcac;
                              }
                              break;
                            }
                            uVar18 = puVar11[3];
                          } while (uVar18 != 0xffffffff);
                        }
                      }
                      local_2e8 = (undefined **)&local_348;
                      FUN_146dee3ec(local_3d8,local_318,&local_2e8,0);
                      lVar20 = (longlong)(int)local_318[0]._0_4_;
                      lVar31 = *(longlong *)(param_1 + 0x50);
                      *(undefined4 *)(lVar31 + 4 + lVar20 * 0x14) = *(undefined4 *)(param_1 + 0xa8);
                      *(undefined4 *)(lVar31 + 8 + lVar20 * 0x14) = 1;
                      iVar9 = *(int *)(param_1 + 0xa8);
                      *(uint *)(param_1 + 0xa8) = iVar9 + *(uint *)(param_1 + 0xe0);
                      if ((uint)(*(int *)(param_1 + 0xac) - iVar9) < *(uint *)(param_1 + 0xe0)) {
                        local_370 = lVar31;
                        FUN_1446f48e2(local_3c8);
                        lVar31 = local_370;
                      }
                      puVar11 = (uint *)((longlong)*(int *)(lVar31 + lVar20 * 0x14 + 4) * 4 +
                                        *local_3c8);
                      puVar16 = local_378;
                      pdVar47 = local_388;
LAB_14360fe0d:
                      *puVar11 = uVar25;
                      *puVar16 = *puVar16 + 1;
                      pdVar37 = local_3b0;
                      pdVar44 = local_3c0;
                      pdVar36 = local_398;
                    }
                    goto LAB_14360fe21;
                  }
LAB_14360fe31:
                  bVar48 = pdVar47 != pdVar36;
                  pdVar47 = (double *)((longlong)pdVar47 + 1);
                } while (bVar48);
              }
              uVar17 = 0xffffffff;
              pdVar43 = local_380;
              puVar11 = local_3b8;
            }
            goto LAB_14360ff06;
          }
          goto LAB_14360ff0a;
        }
        lVar22 = *(longlong *)(lVar20 + 0x10) + lVar12 * 0x70;
        lVar33 = 0;
        do {
          dVar49 = param_3[lVar33];
          if ((dVar49 < *(double *)(lVar22 + lVar33 * 8)) ||
             (pdVar37 = (double *)(lVar22 + 0x18 + lVar33 * 8),
             *pdVar37 <= dVar49 && dVar49 != *pdVar37)) goto LAB_14360e41a;
          lVar33 = lVar33 + 1;
        } while (lVar33 != 3);
        lVar33 = 3;
        do {
          dVar49 = param_3[lVar33];
          if ((dVar49 < *(double *)(lVar22 + -0x18 + lVar33 * 8)) ||
             (pdVar37 = (double *)(lVar22 + lVar33 * 8), *pdVar37 <= dVar49 && dVar49 != *pdVar37))
          goto LAB_14360e41a;
          lVar33 = lVar33 + 1;
        } while (lVar33 != 6);
        lVar22 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x10) + 0x60 + lVar12 * 0x70);
        lVar12 = *(longlong *)(lVar20 + 0x20) + lVar22 * 0x48;
        pdVar37 = (double *)CONCAT71(iVar39,bVar5);
        if (0 < (longlong)*(int *)(lVar12 + 0x38)) {
          lVar20 = *(longlong *)(lVar12 + 0x30);
          lVar33 = 0;
          do {
            if (((*(int *)(lVar20 + lVar33) == (int)*param_2) &&
                (*(int *)(lVar20 + 4 + lVar33) == *(int *)((longlong)param_2 + 4))) &&
               (*(int *)(lVar20 + 8 + lVar33) == (int)param_2[1])) {
              *(double *)(lVar20 + 0x20 + lVar33) = param_3[2];
              dVar49 = param_3[1];
              pdVar44 = (double *)(lVar20 + 0x10 + lVar33);
              *pdVar44 = *param_3;
              pdVar44[1] = dVar49;
              dVar49 = param_3[4];
              pdVar44 = (double *)(lVar20 + 0x28 + lVar33);
              *pdVar44 = *pdVar43;
              pdVar44[1] = dVar49;
              *(double *)(lVar20 + 0x38 + lVar33) = param_3[5];
              break;
            }
            lVar33 = lVar33 + 0x40;
          } while ((longlong)*(int *)(lVar12 + 0x38) * 0x40 != lVar33);
        }
        *(undefined1 *)(lVar12 + 0x40) = 1;
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20);
        local_3e1 = bVar5;
        local_390 = lVar31;
        FUN_147c5e180(lVar12 + lVar22 * 0x48,lVar12 + lVar22 * 0x48 + 0x30);
      }
      goto LAB_14360ff3e;
    }
  }
  else {
    uVar91 = 0xffffffff;
    uVar93 = 0x7fefffff;
    uVar94 = 0xffffffff;
    uVar95 = 0xffefffff;
    uVar90 = uVar91;
    uVar92 = uVar93;
    uVar96 = uVar91;
    uVar97 = uVar93;
    uVar98 = uVar94;
    uVar99 = uVar95;
    uVar100 = uVar94;
    uVar101 = uVar95;
  }
  plVar13 = (longlong *)(param_1 + 0x108);
  if ((longlong)(int)*puVar11 == -1) {
    local_2e8 = (undefined **)*param_2;
    auStack_2e0 = (undefined1  [8])param_2[1];
    uVar25 = *(uint *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x110) = uVar25 + 1;
    if (*(uint *)(param_1 + 0x114) < uVar25 + 1) {
      FUN_147c5e334(plVar13,uVar25);
    }
    lVar12 = *plVar13;
    lVar20 = (longlong)(int)uVar25 * 0x40;
    *(longlong *)(lVar12 + lVar20) = (longlong)local_2e8;
    ((longlong *)(lVar12 + lVar20))[1] = (longlong)auStack_2e0;
    *(ulonglong *)(lVar12 + 0x10 + lVar20) = CONCAT44(uVar101,uVar100);
    *(ulonglong *)(lVar12 + 0x18 + lVar20) = CONCAT44(uVar99,uVar98);
    *(ulonglong *)(lVar12 + 0x20 + lVar20) = CONCAT44(uVar95,uVar94);
    *(ulonglong *)(lVar12 + 0x28 + lVar20) = CONCAT44(uVar97,uVar96);
    *(ulonglong *)(lVar12 + 0x30 + lVar20) = CONCAT44(uVar92,uVar90);
    *(ulonglong *)(lVar12 + 0x38 + lVar20) = CONCAT44(uVar93,uVar91);
    *puVar11 = uVar25;
  }
  else {
    lVar12 = *plVar13;
    lVar20 = (longlong)(int)*puVar11 * 0x40;
    *(ulonglong *)(lVar12 + 0x10 + lVar20) = CONCAT44(uVar101,uVar100);
    *(ulonglong *)(lVar12 + 0x18 + lVar20) = CONCAT44(uVar99,uVar98);
    *(ulonglong *)(lVar12 + 0x20 + lVar20) = CONCAT44(uVar95,uVar94);
    *(ulonglong *)(lVar12 + 0x28 + lVar20) = CONCAT44(uVar97,uVar96);
    *(ulonglong *)(lVar12 + 0x30 + lVar20) = CONCAT44(uVar92,uVar90);
    *(ulonglong *)(lVar12 + 0x38 + lVar20) = CONCAT44(uVar93,uVar91);
  }
  uVar25 = puVar11[1];
  lVar12 = (longlong)(int)uVar25;
  if (lVar12 != -1) {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      if (((*(double *)(param_1 + 200) <= 0.0) || (*(int *)(param_1 + 0xd8) < 1)) ||
         ((*(int *)(param_1 + 0xdc) < 1 || (*(int *)(param_1 + 0xe0) < 1)))) {
        iVar9 = *(int *)(param_1 + 0x38);
        if ((int)(uVar25 + 1) < iVar9) {
          plVar13 = (longlong *)(*(longlong *)(param_1 + 0x30) + -0x40 + (longlong)iVar9 * 0x40);
          local_2e8 = (undefined **)*plVar13;
          auStack_2e0 = (undefined1  [8])plVar13[1];
          lVar31 = FUN_147c5ea96(lVar31);
          *(uint *)(lVar31 + 4) = uVar25;
          uVar25 = puVar11[1];
          iVar9 = *(int *)(param_1 + 0x38);
        }
        puVar16 = (uint *)(param_1 + 0x30);
        iVar10 = ~uVar25 + iVar9;
        if (iVar10 != 0) {
          iVar40 = 1;
          if (iVar10 < 1) {
            iVar40 = iVar10;
          }
          memmove((void *)((longlong)(int)uVar25 * 0x40 + *(longlong *)(param_1 + 0x30)),
                  (void *)((longlong)(iVar9 - iVar40) * 0x40 + *(longlong *)(param_1 + 0x30)),
                  (longlong)iVar40 << 6);
          iVar9 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar9 + -1;
      }
      else {
        uVar17 = puVar11[3];
        if ((longlong)(int)uVar17 == -1) {
          dVar49 = *(double *)(param_1 + 0xd0);
          lVar20 = *(longlong *)(param_1 + 0x30);
          lVar22 = lVar12 * 0x40;
          dVar84 = *(double *)(lVar20 + 0x10 + lVar22) * dVar49;
          uVar21 = DAT_149931180;
          auVar86._8_8_ = 0;
          auVar86._0_8_ = (double)((ulonglong)dVar84 & uVar21) * 2.220446049250313e-16 + dVar84;
          auVar59 = roundpd(auVar86,auVar86,1);
          dVar84 = *(double *)(lVar20 + 0x28 + lVar22) * dVar49;
          auVar87._8_8_ = 0;
          auVar87._0_8_ = (double)((ulonglong)dVar84 & uVar21) * 2.220446049250313e-16 + dVar84;
          auVar67 = roundpd(auVar87,auVar87,1);
          local_3d8 = (longlong *)(longlong)auVar67._0_8_;
          local_3e1 = bVar5;
          local_3b8 = puVar11;
          local_390 = lVar31;
          if ((longlong)auVar59._0_8_ <= (longlong)local_3d8) {
            dVar84 = *(double *)(lVar20 + lVar22 + 0x18) * dVar49;
            auVar76._0_8_ = (double)(uVar21 & (ulonglong)dVar84) * 2.220446049250313e-16 + dVar84;
            auVar76._8_8_ = 0;
            auVar67 = roundpd(auVar76,auVar76,1);
            local_3e0 = (undefined8 *)(longlong)auVar67._0_8_;
            dVar49 = dVar49 * *(double *)(lVar20 + lVar22 + 0x30);
            auVar53._8_8_ = 0;
            auVar53._0_8_ = ABS(dVar49) * 2.220446049250313e-16 + dVar49;
            auVar67 = roundpd(auVar53,auVar53,1);
            plVar13 = (longlong *)(longlong)auVar59._0_8_;
            do {
              if ((longlong)local_3e0 <= (longlong)auVar67._0_8_) {
                uVar17 = ((uint)plVar13 & 0xff00) << 8 | (uint)plVar13 & 0xff;
                uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                puVar15 = local_3e0;
LAB_14360ec11:
                if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                  uVar18 = ((uint)puVar15 & 0xff00) << 8 | (uint)puVar15 & 0xff;
                  uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
                  uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
                  uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa |
                           (uVar17 * 2 | uVar17) & 0x55555555;
                  lVar20 = *(longlong *)(param_1 + 0x90);
                  if (*(longlong *)(param_1 + 0x90) == 0) {
                    lVar20 = param_1 + 0x88;
                  }
                  uVar41 = *(uint *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) *
                                              4);
                  if (uVar41 != 0xffffffff) {
                    do {
                      puVar16 = (uint *)(*(longlong *)(param_1 + 0x50) +
                                        (longlong)(int)uVar41 * 0x14);
                      if (*puVar16 == uVar18) {
                        if ((puVar16 + 1 != (uint *)0x0 && puVar16 != (uint *)0x0) &&
                           (uVar18 = puVar16[2], 0 < (int)uVar18)) {
                          uVar41 = puVar16[1];
                          uVar19 = (uVar18 + uVar41) - 1;
                          uVar32 = (int)(uVar19 + uVar41) / 2;
                          pdVar37 = (double *)(ulonglong)uVar32;
                          uVar32 = *(uint *)(*(longlong *)(param_1 + 0xa0) +
                                            (longlong)(int)uVar32 * 4);
                          uVar24 = uVar19;
                          if (uVar32 != uVar25) goto LAB_14360ed36;
                          goto LAB_14360eceb;
                        }
                        break;
                      }
                      uVar41 = puVar16[3];
                    } while (uVar41 != 0xffffffff);
                  }
                }
                goto LAB_14360ed1e;
              }
LAB_14360ebbf:
              bVar48 = plVar13 != local_3d8;
              plVar13 = (longlong *)((longlong)plVar13 + 1);
            } while (bVar48);
          }
        }
        else {
          iVar9 = *(int *)(param_1 + 0xb8);
          local_3e1 = bVar5;
          local_3b8 = puVar11;
          local_390 = lVar31;
          if ((int)(uVar17 + 1) < iVar9) {
            plVar13 = (longlong *)
                      (*(longlong *)(param_1 + 0x30) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (longlong)iVar9 * 4) *
                      0x40);
            local_2e8 = (undefined **)*plVar13;
            auStack_2e0 = (undefined1  [8])plVar13[1];
            lVar31 = FUN_147c5ea96(lVar31);
            *(uint *)(lVar31 + 0xc) = uVar17;
            iVar9 = *(int *)(param_1 + 0xb8);
          }
          iVar10 = ~uVar17 + iVar9;
          if (iVar10 != 0) {
            iVar40 = 1;
            if (iVar10 < 1) {
              iVar40 = iVar10;
            }
            memmove((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar17 * 4),
                    (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(iVar9 - iVar40) * 4),
                    (longlong)iVar40 << 2);
            iVar9 = *(int *)(param_1 + 0xb8);
          }
          *(int *)(param_1 + 0xb8) = iVar9 + -1;
          FUN_14479f406(param_1 + 0xb0);
        }
        puVar16 = (uint *)(param_1 + 0x30);
        iVar9 = *(int *)(param_1 + 0x38);
        if ((int)(uVar25 + 1) < iVar9) {
          local_3e0 = (undefined8 *)((longlong)iVar9 + -1);
          lVar31 = *(longlong *)puVar16;
          lVar22 = (longlong)local_3e0 * 0x40;
          local_2e8 = *(undefined ***)(lVar31 + lVar22);
          auStack_2e0 = (undefined1  [8])((longlong *)(lVar31 + lVar22))[1];
          local_378 = puVar16;
          lVar20 = FUN_147c5ea96(local_390);
          if ((longlong)*(int *)(lVar20 + 0xc) == -1) {
            dVar49 = *(double *)(param_1 + 0xd0);
            dVar84 = *(double *)(lVar31 + 0x10 + lVar22) * dVar49;
            uVar21 = DAT_149931180;
            auVar88._8_8_ = 0;
            auVar88._0_8_ = (double)((ulonglong)dVar84 & uVar21) * 2.220446049250313e-16 + dVar84;
            auVar59 = roundpd(auVar88,auVar88,1);
            local_3b0 = (double *)(longlong)auVar59._0_8_;
            dVar84 = *(double *)(lVar31 + 0x28 + lVar22) * dVar49;
            auVar89._8_8_ = 0;
            auVar89._0_8_ = (double)((ulonglong)dVar84 & uVar21) * 2.220446049250313e-16 + dVar84;
            auVar59 = roundpd(auVar89,auVar89,1);
            local_388 = (double *)(longlong)auVar59._0_8_;
            if ((longlong)local_3b0 <= (longlong)local_388) {
              dVar84 = *(double *)(lVar31 + lVar22 + 0x18) * dVar49;
              auVar77._0_8_ = (double)(uVar21 & (ulonglong)dVar84) * 2.220446049250313e-16 + dVar84;
              auVar77._8_8_ = 0;
              auVar59 = roundpd(auVar77,auVar77,1);
              local_398 = (double *)(longlong)auVar59._0_8_;
              dVar49 = dVar49 * *(double *)(lVar31 + lVar22 + 0x30);
              auVar54._8_8_ = 0;
              auVar54._0_8_ = ABS(dVar49) * 2.220446049250313e-16 + dVar49;
              auVar59 = roundpd(auVar54,auVar54,1);
              pdVar44 = (double *)(longlong)auVar59._0_8_;
              pdVar43 = (double *)(param_1 + 0x50);
              plVar13 = (longlong *)(param_1 + 0xa0);
              local_3c0 = (double *)(param_1 + 0xe4);
              local_3d0 = pdVar43;
              local_3a8 = pdVar44;
              do {
                if ((longlong)local_398 <= (longlong)pdVar44) {
                  uVar17 = ((uint)local_3b0 & 0xff00) << 8 | (uint)local_3b0 & 0xff;
                  uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                  uVar18 = (uVar17 * 4 | uVar17) & 0x33333333;
                  uVar18 = uVar18 * 2 | uVar18;
                  uVar17 = uVar18 & 0x55555555;
                  local_3d8 = (longlong *)(CONCAT44(local_3d8._4_4_,uVar18) & 0xffffffff55555555);
                  pdVar36 = local_398;
LAB_14360f6a1:
                  uVar18 = ((uint)pdVar36 & 0xff00) << 8 | (uint)pdVar36 & 0xff;
                  uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
                  uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
                  uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa | uVar17;
                  iVar9 = *(int *)(param_1 + 0x58);
                  iVar10 = *(int *)(param_1 + 0x84);
                  if (iVar9 != iVar10) {
                    lVar31 = *(longlong *)(param_1 + 0x90);
                    if (*(longlong *)(param_1 + 0x90) == 0) {
                      lVar31 = param_1 + 0x88;
                    }
                    uVar41 = *(uint *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18)
                                                * 4);
                    if (uVar41 != 0xffffffff) {
                      do {
                        puVar11 = (uint *)((longlong)*pdVar43 + (longlong)(int)uVar41 * 0x14);
                        if (*puVar11 == uVar18) {
                          if (puVar11 + 1 != (uint *)0x0 && puVar11 != (uint *)0x0) {
                            uVar41 = puVar11[2];
                            plVar26 = (longlong *)(ulonglong)uVar41;
                            if (0 < (int)uVar41) {
                              uVar32 = puVar11[1];
                              uVar19 = (uVar41 + uVar32) - 1;
                              local_3a0 = (ulonglong)uVar19;
                              uVar45 = (int)(uVar19 + uVar32) / 2;
                              iVar40 = *(int *)(*plVar13 + (longlong)(int)uVar45 * 4);
                              uVar24 = uVar19;
                              pdVar43 = local_3d0;
                              pdVar44 = local_3a8;
                              uVar17 = (uint)local_3d8;
                              local_3c8 = plVar26;
                              if (iVar40 != (int)local_3e0) goto LAB_14360f7ff;
                              goto LAB_14360f7a1;
                            }
                          }
                          break;
                        }
                        uVar41 = puVar11[3];
                      } while (uVar41 != 0xffffffff);
                    }
                    goto LAB_14360f871;
                  }
                  goto LAB_14360f97b;
                }
LAB_14360fa7c:
                pdVar36 = (double *)((longlong)local_3b0 + 1);
                bVar48 = local_3b0 != local_388;
                local_3b0 = pdVar36;
              } while (bVar48);
            }
          }
          else {
            *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(lVar20 + 0xc) * 4) = uVar25
            ;
          }
          lVar31 = FUN_147c5ea96(local_390,&local_2e8);
          *(uint *)(lVar31 + 4) = uVar25;
          iVar9 = *(int *)(param_1 + 0x38);
          puVar16 = local_378;
        }
        puVar11 = local_3b8;
        iVar10 = ~uVar25 + iVar9;
        pdVar37 = (double *)CONCAT71((int7)((ulonglong)pdVar37 >> 8),local_3e1);
        if (iVar10 != 0) {
          iVar40 = 1;
          if (iVar10 < 1) {
            iVar40 = iVar10;
          }
          memmove((void *)(lVar12 * 0x40 + *(longlong *)(param_1 + 0x30)),
                  (void *)((longlong)(iVar9 - iVar40) * 0x40 + *(longlong *)(param_1 + 0x30)),
                  (longlong)iVar40 << 6);
          iVar9 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar9 + -1;
      }
      FUN_147c5ed38(puVar16);
    }
    else {
      FUN_143618090(*(longlong *)(param_1 + 0xc0),uVar25);
    }
    puVar11[1] = 0xffffffff;
    puVar11 = puVar11 + 3;
    goto LAB_14360e40e;
  }
  goto LAB_14360ff4f;
  while( true ) {
    if ((int)uVar32 < (int)uVar25) {
      uVar41 = uVar24 + 1;
      iVar10 = uVar18 + uVar24 + 1;
    }
    else {
      if (uVar24 == uVar41) goto LAB_14360f393;
      uVar18 = uVar24 - 1;
      iVar10 = uVar24 + uVar41 + -1;
    }
    uVar24 = iVar10 / 2;
    uVar32 = *(uint *)(lVar31 + (longlong)(int)uVar24 * 4);
    if (uVar32 == uVar25) break;
LAB_14360f290:
    if (uVar41 == uVar18) {
      uVar41 = uVar41 + ((int)uVar32 < (int)uVar25);
LAB_14360f393:
      if (uVar41 != 0xffffffff) {
        if ((int)uVar41 < iVar9) {
          lVar31 = (longlong)iVar9;
          do {
            *(undefined4 *)(*plVar26 + lVar31 * 4) = *(undefined4 *)(*plVar26 + -4 + lVar31 * 4);
            lVar31 = lVar31 + -1;
          } while ((int)uVar41 < lVar31);
          lVar31 = *plVar26;
        }
        puVar11 = (uint *)(lVar31 + (longlong)(int)uVar41 * 4);
        goto LAB_14360f3c7;
      }
      break;
    }
  }
LAB_14360f3cb:
  bVar48 = uVar21 == uVar28;
  uVar21 = uVar21 + 1;
  if (bVar48) goto code_r0x00014360f3db;
  goto LAB_14360f186;
code_r0x00014360f3db:
  pdVar43 = (double *)((longlong)local_3b0 + 1);
  if (local_3b0 == local_3c0) goto code_r0x00014360f3ef;
  goto LAB_14360f141;
code_r0x00014360f3ef:
  uVar17 = 0xffffffff;
  pdVar37 = (double *)CONCAT71((int7)((ulonglong)puVar15 >> 8),local_3e1);
LAB_143610a9f:
  local_3b8[3] = uVar17;
  puVar11 = local_3b8;
  goto LAB_14360ff3e;
  while( true ) {
    if ((int)uVar32 < (int)uVar25) {
      uVar41 = uVar45 + 1;
      iVar9 = uVar24 + uVar45 + 1;
    }
    else {
      if (uVar45 == uVar41) goto LAB_14360e8b9;
      uVar24 = uVar45 - 1;
      iVar9 = uVar45 + uVar41 + -1;
    }
    uVar45 = iVar9 / 2;
    uVar32 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)(int)uVar45 * 4);
    if (uVar32 == uVar25) break;
LAB_14360e86b:
    if (uVar41 == uVar24) goto LAB_14360e8b9;
  }
LAB_14360e829:
  if (uVar45 != 0xffffffff) {
    if ((int)uVar45 < (int)uVar19) {
      lVar20 = (longlong)(int)uVar45;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar20 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      } while ((int)uVar19 != lVar20);
      uVar18 = puVar16[2];
    }
    puVar16[2] = uVar18 - 1;
  }
LAB_14360e8b9:
  bVar48 = pdVar44 == pdVar42;
  pdVar44 = (double *)((longlong)pdVar44 + 1);
  if (bVar48) goto LAB_14360e8c9;
  goto LAB_14360e70f;
  while( true ) {
    if ((int)uVar32 < (int)uVar25) {
      uVar41 = uVar45 + 1;
      iVar9 = uVar24 + uVar45 + 1;
    }
    else {
      if (uVar45 == uVar41) goto LAB_143610c86;
      uVar24 = uVar45 - 1;
      iVar9 = uVar45 + uVar41 + -1;
    }
    uVar45 = iVar9 / 2;
    uVar32 = *(uint *)(*local_3c8 + (longlong)(int)uVar45 * 4);
    if (uVar32 == uVar25) break;
LAB_143610c9d:
    if (uVar41 == uVar24) goto LAB_143610c86;
  }
LAB_143610c50:
  if (uVar45 != 0xffffffff) {
    if ((int)uVar45 < (int)uVar19) {
      lVar31 = (longlong)(int)uVar45;
      do {
        *(undefined4 *)(*local_3c8 + lVar31 * 4) = *(undefined4 *)(*local_3c8 + 4 + lVar31 * 4);
        lVar31 = lVar31 + 1;
      } while ((int)uVar19 != lVar31);
      uVar18 = puVar11[2];
    }
    puVar11[2] = uVar18 - 1;
  }
LAB_143610c86:
  bVar48 = pdVar43 == (double *)(longlong)auVar67._0_8_;
  pdVar43 = (double *)((longlong)pdVar43 + 1);
  if (bVar48) goto LAB_143610b0b;
  goto LAB_143610b5d;
  while( true ) {
    if ((int)uVar41 < (int)uVar25) {
      uVar18 = uVar32 + 1;
      iVar10 = uVar17 + uVar32 + 1;
    }
    else {
      if (uVar32 == uVar18) goto LAB_14360fdd4;
      uVar17 = uVar32 - 1;
      iVar10 = uVar32 + uVar18 + -1;
    }
    uVar32 = iVar10 / 2;
    uVar41 = *(uint *)(lVar31 + (longlong)(int)uVar32 * 4);
    if (uVar41 == uVar25) break;
LAB_14360fcac:
    if (uVar18 == uVar17) {
      uVar18 = uVar18 + ((int)uVar41 < (int)uVar25);
LAB_14360fdd4:
      if (uVar18 != 0xffffffff) {
        if ((int)uVar18 < iVar9) {
          lVar31 = (longlong)iVar9;
          do {
            *(undefined4 *)(*local_3c8 + lVar31 * 4) = *(undefined4 *)(*local_3c8 + -4 + lVar31 * 4)
            ;
            lVar31 = lVar31 + -1;
          } while ((int)uVar18 < lVar31);
          lVar31 = *local_3c8;
        }
        puVar11 = (uint *)(lVar31 + (longlong)(int)uVar18 * 4);
        goto LAB_14360fe0d;
      }
      break;
    }
  }
LAB_14360fe21:
  bVar48 = plVar27 == plVar26;
  plVar27 = (longlong *)((longlong)plVar27 + 1);
  if (bVar48) goto LAB_14360fe31;
  goto LAB_14360fb8c;
LAB_14360e41a:
  local_3e1 = bVar5;
  local_390 = lVar31;
  FUN_143618090(lVar20,uVar25,param_2);
  FUN_1436188ca(*(undefined8 *)(param_1 + 0xc0),&local_2e8,param_2,param_3);
  puVar11[1] = (uint)local_2e8;
  goto LAB_14360ff39;
  while( true ) {
    uVar45 = (uint)pdVar37;
    if ((int)uVar32 < (int)uVar25) {
      uVar41 = uVar45 + 1;
      iVar9 = uVar24 + uVar45 + 1;
    }
    else {
      if (uVar45 == uVar41) goto LAB_14360ed1e;
      uVar24 = uVar45 - 1;
      iVar9 = uVar45 + uVar41 + -1;
    }
    pdVar37 = (double *)(ulonglong)(uint)(iVar9 / 2);
    uVar32 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar9 / 2) * 4);
    if (uVar32 == uVar25) break;
LAB_14360ed36:
    if (uVar41 == uVar24) goto LAB_14360ed1e;
  }
LAB_14360eceb:
  iVar9 = (int)pdVar37;
  if (iVar9 != -1) {
    if (iVar9 < (int)uVar19) {
      lVar20 = (longlong)iVar9;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar20 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar20 * 4);
        lVar20 = lVar20 + 1;
      } while ((int)uVar19 != lVar20);
      uVar18 = puVar16[2];
    }
    puVar16[2] = uVar18 - 1;
  }
LAB_14360ed1e:
  bVar48 = puVar15 == (undefined8 *)(longlong)auVar67._0_8_;
  puVar15 = (undefined8 *)((longlong)puVar15 + 1);
  if (bVar48) goto LAB_14360ebbf;
  goto LAB_14360ec11;
  while( true ) {
    if (iVar40 < (int)local_3e0) {
      uVar32 = uVar45 + 1;
      iVar40 = uVar24 + uVar45 + 1;
    }
    else {
      if (uVar45 == uVar32) goto LAB_14360f871;
      uVar24 = uVar45 - 1;
      iVar40 = uVar45 + uVar32 + -1;
    }
    uVar45 = iVar40 / 2;
    iVar40 = *(int *)(*plVar13 + (longlong)(int)uVar45 * 4);
    if (iVar40 == (int)local_3e0) break;
LAB_14360f7ff:
    if (uVar32 == uVar24) goto LAB_14360f871;
  }
LAB_14360f7a1:
  if (uVar45 != 0xffffffff) {
    if ((int)uVar45 < (int)uVar19) {
      lVar31 = (longlong)(int)uVar45;
      do {
        *(undefined4 *)(*plVar13 + lVar31 * 4) = *(undefined4 *)(*plVar13 + 4 + lVar31 * 4);
        lVar31 = lVar31 + 1;
      } while ((int)uVar19 != lVar31);
      uVar41 = puVar11[2];
    }
    puVar11[2] = uVar41 - 1;
    iVar9 = *(int *)(param_1 + 0x58);
    iVar10 = *(int *)(param_1 + 0x84);
  }
LAB_14360f871:
  local_328 = CONCAT44(local_328._4_4_,uVar18);
  if (iVar9 != iVar10) {
    lVar31 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar31 = param_1 + 0x88;
    }
    uVar41 = *(uint *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) * 4);
    if (uVar41 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)*pdVar43 + (longlong)(int)uVar41 * 0x14);
        if (*puVar11 == uVar18) {
          if ((puVar11 != (uint *)0x0) && (puVar11 + 1 != (uint *)0x0)) {
            uVar18 = puVar11[2];
            if (*(int *)(param_1 + 0xe0) <= (int)uVar18) goto LAB_14360fa6b;
            pdVar37 = (double *)(puVar11 + 2);
            uVar41 = puVar11[1];
            if ((int)uVar18 < 1) {
              puVar11 = (uint *)((longlong)(int)uVar41 * 4 + *plVar13);
              goto LAB_14360fa66;
            }
            iVar9 = uVar41 + uVar18;
            lVar31 = *plVar13;
            uVar24 = (int)(uVar41 + iVar9 + -1) / 2;
            uVar32 = *(uint *)(lVar31 + (longlong)(int)uVar24 * 4);
            if (uVar32 == uVar25) goto LAB_14360fa6b;
            uVar18 = (uVar18 + uVar41) - 1;
            goto LAB_14360f92b;
          }
          break;
        }
        uVar41 = puVar11[3];
      } while (uVar41 != 0xffffffff);
    }
  }
LAB_14360f97b:
  local_328 = CONCAT44(local_328._4_4_,uVar18);
  local_318[0].QuadPart = (LONGLONG)&local_328;
  FUN_146dee3ec(pdVar43,&local_348,local_318,0);
  lVar20 = (longlong)(int)local_348;
  lVar31 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar31 + 4 + lVar20 * 0x14) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(lVar31 + 8 + lVar20 * 0x14) = 1;
  iVar9 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar9 + *(uint *)(param_1 + 0xe0);
  if ((uint)(*(int *)(param_1 + 0xac) - iVar9) < *(uint *)(param_1 + 0xe0)) {
    FUN_1446f48e2(plVar13);
  }
  puVar11 = (uint *)((longlong)*(int *)(lVar31 + lVar20 * 0x14 + 4) * 4 + *plVar13);
  pdVar37 = local_3c0;
  pdVar43 = local_3d0;
  uVar17 = (uint)local_3d8;
LAB_14360fa66:
  *puVar11 = uVar25;
  *(int *)pdVar37 = *(int *)pdVar37 + 1;
LAB_14360fa6b:
  pdVar37 = (double *)((longlong)pdVar36 + 1);
  bVar48 = pdVar36 == pdVar44;
  pdVar36 = pdVar37;
  if (bVar48) goto LAB_14360fa7c;
  goto LAB_14360f6a1;
  while( true ) {
    if ((int)uVar32 < (int)uVar25) {
      uVar41 = uVar24 + 1;
      iVar10 = uVar18 + uVar24 + 1;
    }
    else {
      if (uVar24 == uVar41) goto LAB_14360fa32;
      uVar18 = uVar24 - 1;
      iVar10 = uVar24 + uVar41 + -1;
    }
    uVar24 = iVar10 / 2;
    uVar32 = *(uint *)(lVar31 + (longlong)(int)uVar24 * 4);
    if (uVar32 == uVar25) break;
LAB_14360f92b:
    if (uVar41 == uVar18) {
      uVar41 = uVar41 + ((int)uVar32 < (int)uVar25);
LAB_14360fa32:
      if (uVar41 != 0xffffffff) {
        if ((int)uVar41 < iVar9) {
          lVar31 = (longlong)iVar9;
          do {
            *(undefined4 *)(*plVar13 + lVar31 * 4) = *(undefined4 *)(*plVar13 + -4 + lVar31 * 4);
            lVar31 = lVar31 + -1;
          } while ((int)uVar41 < lVar31);
          lVar31 = *plVar13;
        }
        puVar11 = (uint *)(lVar31 + (longlong)(int)uVar41 * 4);
        goto LAB_14360fa66;
      }
      break;
    }
  }
  goto LAB_14360fa6b;
LAB_143610b04:
  do {
    if ((longlong)local_3d0 <= (longlong)auVar67._0_8_) {
      uVar17 = ((uint)pdVar37 & 0xff00) << 8 | (uint)pdVar37 & 0xff;
      uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
      uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
      pdVar43 = local_3d0;
LAB_143610b5d:
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
        uVar18 = ((uint)pdVar43 & 0xff00) << 8 | (uint)pdVar43 & 0xff;
        uVar18 = (uVar18 << 4 | uVar18) & 0xf0f0f0f;
        uVar18 = (uVar18 * 4 | uVar18) & 0x33333333;
        uVar18 = (uVar18 * 2 | uVar18 * 4) & 0xaaaaaaaa | (uVar17 * 2 | uVar17) & 0x55555555;
        puVar15 = *(undefined8 **)(param_1 + 0x90);
        if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
          puVar15 = local_3e0;
        }
        uVar41 = *(uint *)((longlong)puVar15 +
                          (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar18) * 4);
        if (uVar41 != 0xffffffff) {
          do {
            puVar11 = (uint *)(*local_3d8 + (longlong)(int)uVar41 * 0x14);
            if (*puVar11 == uVar18) {
              if ((puVar11 + 1 != (uint *)0x0 && puVar11 != (uint *)0x0) &&
                 (uVar18 = puVar11[2], 0 < (int)uVar18)) {
                uVar41 = puVar11[1];
                uVar19 = (uVar18 + uVar41) - 1;
                uVar45 = (int)(uVar19 + uVar41) / 2;
                uVar32 = *(uint *)(*local_3c8 + (longlong)(int)uVar45 * 4);
                uVar24 = uVar19;
                if (uVar32 != uVar25) goto LAB_143610c9d;
                goto LAB_143610c50;
              }
              break;
            }
            uVar41 = puVar11[3];
          } while (uVar41 != 0xffffffff);
        }
      }
      goto LAB_143610c86;
    }
LAB_143610b0b:
    bVar48 = pdVar37 != local_3c0;
    pdVar37 = (double *)((longlong)pdVar37 + 1);
  } while (bVar48);
LAB_14360fec6:
  uVar17 = *(uint *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar17 + 1;
  if (*(uint *)(param_1 + 0xbc) < uVar17 + 1) {
    FUN_1446f48e2((longlong *)(param_1 + 0xb0),uVar17);
  }
  *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar17 * 4) = uVar25;
  pdVar43 = local_380;
  puVar11 = local_3b8;
LAB_14360ff06:
  puVar11[3] = uVar17;
LAB_14360ff0a:
  lVar31 = *(longlong *)(param_1 + 0x30);
  lVar12 = lVar12 * 0x40;
  *(double *)(lVar31 + 0x20 + lVar12) = param_3[2];
  dVar49 = param_3[1];
  pdVar37 = (double *)(lVar31 + 0x10 + lVar12);
  *pdVar37 = *param_3;
  pdVar37[1] = dVar49;
  dVar49 = pdVar43[1];
  pdVar37 = (double *)(lVar31 + 0x28 + lVar12);
  *pdVar37 = *pdVar43;
  pdVar37[1] = dVar49;
  *(double *)(lVar31 + 0x38 + lVar12) = pdVar43[2];
LAB_14360ff39:
  pdVar37 = (double *)CONCAT71((int7)((ulonglong)lVar12 >> 8),local_3e1);
LAB_14360ff3e:
  uVar25 = *puVar11;
  if (uVar25 != 0xffffffff) {
    iVar9 = *(int *)(param_1 + 0x110);
    if ((int)(uVar25 + 1) < iVar9) {
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x108) + -0x40 + (longlong)iVar9 * 0x40);
      local_2e8 = (undefined **)*plVar13;
      auStack_2e0 = (undefined1  [8])plVar13[1];
      puVar16 = (uint *)FUN_147c5ea96(local_390);
      *puVar16 = uVar25;
      uVar25 = *puVar11;
      iVar9 = *(int *)(param_1 + 0x110);
    }
    iVar10 = ~uVar25 + iVar9;
    if (iVar10 != 0) {
      iVar40 = 1;
      if (iVar10 < 1) {
        iVar40 = iVar10;
      }
      memmove((void *)((longlong)(int)uVar25 * 0x40 + *(longlong *)(param_1 + 0x108)),
              (void *)((longlong)(iVar9 - iVar40) * 0x40 + *(longlong *)(param_1 + 0x108)),
              (longlong)iVar40 << 6);
      iVar9 = *(int *)(param_1 + 0x110);
    }
    *(int *)(param_1 + 0x110) = iVar9 + -1;
    FUN_147c5ed38(param_1 + 0x108);
LAB_14360e40e:
    *puVar11 = 0xffffffff;
  }
LAB_14360ff4f:
  if (((*(longlong *)(param_1 + 0xc0) == 0) && (*(char *)(param_1 + 0x40) == '\0')) &&
     (DAT_14c75efe4 < *(int *)(param_1 + 0x38))) {
    local_358 = (undefined8 *)0x0;
    uStack_350 = 0;
    iVar9 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x110);
    if (0 < (longlong)*(int *)(param_1 + 0x28)) {
      lVar31 = 0;
      do {
        iVar9 = iVar9 + *(int *)(*(longlong *)(param_1 + 0x20) + 0x38 + lVar31);
        lVar31 = lVar31 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x28) * 0x48 != lVar31);
    }
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_147c5e2d4(&local_358);
    }
    FUN_147c5ef00(&local_358,param_1 + 0x30);
    FUN_147c5ef00(&local_358,param_1 + 0x108);
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar31 = 0x30;
      lVar12 = 0;
      do {
        FUN_147c5ef00(&local_358,*(longlong *)(param_1 + 0x20) + lVar31);
        lVar12 = lVar12 + 1;
        lVar31 = lVar31 + 0x48;
      } while (lVar12 < *(int *)(param_1 + 0x28));
    }
    lVar31 = (longlong)&local_1d4 + 4;
    auStack_2e0 = (undefined1  [8])CONCAT26(auStack_2e0._6_2_,0x10100000000);
    local_2e8 = &PTR_FUN_14aa1cbe0;
    local_2d8 = 0.0;
    dStack_2d0 = 0.0;
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    local_2b8 = 0.0;
    dStack_2b0 = 0.0;
    local_2a8 = '\0';
    local_2a4 = 0xffffffffffffffff;
    local_29c = 0xffffffff;
    local_278 = 0;
    local_270 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_26c = 0xffffffff00000080;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_1c4 = 0;
    local_1d4 = 0;
    uStack_1cc = 0;
    local_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    local_1f4 = 0;
    uStack_1ec = 0;
    local_204 = 0;
    uStack_1fc = 0;
    local_1c0 = 0x400;
    local_1b8 = 0;
    local_1b0 = &DAT_14c7585e0;
    local_1a8 = 0;
    local_1a0 = 0x100000000c;
    local_198 = 100000.0;
    local_190 = 0;
    local_188 = 0.0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_147 = 0x101;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    FUN_147c5dd32(lVar31);
    uVar28 = uStack_350;
    auStack_2e0[4] = 0;
    iVar9 = (int)uStack_350;
    plVar13 = (longlong *)(uStack_350 & 0xffffffff);
    uVar21 = (longlong)(int)uStack_350 / (longlong)(int)local_1a0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21 & 0xffffffff,
                    (longlong)(int)uStack_350 % (longlong)(int)local_1a0 & 0xffffffff);
    }
    if ((int)uStack_170._4_4_ < (int)uVar21) {
      FUN_14481578e(&local_178,uVar21 & 0xffffffff);
    }
    iVar10 = FUN_14361231a(&local_2e8);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(plVar13);
    }
    local_3d0 = (double *)CONCAT44(local_3d0._4_4_,iVar10);
    lVar12 = local_158 + (longlong)iVar10 * 0xf8;
    lVar20 = local_158 + (longlong)iVar10 * 0xf8 + 0x38;
    if (*(int *)(lVar12 + 0x44) < iVar9) {
      FUN_147c5e2d4(lVar20,uVar28 & 0xffffffff);
    }
    uStack_1d8 = 0;
    local_3d8 = plVar13;
    if ((int)(uint)local_1d4 < 0) {
      FUN_147c5e2d4(&uStack_1e0,0);
    }
    dVar49 = dStack_2c0;
    FUN_147c5dd02(local_2c8,(ulonglong)dStack_2c0 & 0xffffffff);
    uVar21 = (ulonglong)dStack_2c0 >> 0x20;
    dStack_2c0 = (double)((ulonglong)dStack_2c0 & 0xffffffff00000000);
    if (((longlong)dVar49 < 0) && ((int)uVar21 != 0)) {
      FUN_147c5e412(&local_2c8,0);
    }
    bVar48 = (longlong)dStack_2d0 < 0;
    dStack_2d0 = (double)((ulonglong)dStack_2d0 & 0xffffffff00000000);
    if (bVar48) {
      FUN_14008b684(&local_2d8,0);
    }
    local_2a4 = 0xffffffffffffffff;
    local_29c = 0xffffffff;
    bVar48 = (longlong)dStack_2b0 < 0;
    dStack_2b0 = (double)((ulonglong)dStack_2b0 & 0xffffffff00000000);
    if (bVar48) {
      FUN_147c5e2d4(&local_2b8,0);
    }
    FUN_1402a3552(&local_298);
    bVar48 = (longlong)uStack_240 < 0;
    uStack_240 = uStack_240 & 0xffffffff00000000;
    if (bVar48) {
      FUN_14481578e(&local_248,0);
    }
    bVar48 = (longlong)uStack_230 < 0;
    uStack_230 = uStack_230 & 0xffffffff00000000;
    if (bVar48) {
      FUN_14481578e(&local_238,0);
    }
    if (local_228 != 0) {
      FUN_14360ce7e();
    }
    local_1e4 = 0;
    local_1f4 = 0;
    uStack_1ec = 0;
    local_204 = 0;
    uStack_1fc = 0;
    FUN_147c5e9e0(lVar31);
    local_18c = 0;
    QueryPerformanceCounter(local_318);
    local_188 = (double)local_318[0].QuadPart * DAT_14c83f420 + 16777216.0;
    local_220 = (double)DAT_14c75efb8;
    local_218 = 1.0;
    if (0 < DAT_14c75efb8) {
      local_218 = 1.0 / local_220;
    }
    local_210 = DAT_14c75efbc;
    local_20c = DAT_14c75efc0;
    local_208 = DAT_14c75efc4;
    if (local_2a8 == '\x01') {
      if ((longlong)(int)uStack_350 != 0) {
        puVar14 = local_358 + (longlong)(int)uStack_350 * 8;
        puVar15 = local_358;
        do {
          local_348 = (undefined *)*puVar15;
          uStack_340 = puVar15[1];
          local_308 = (double)puVar15[4];
          local_318[0] = *(LARGE_INTEGER *)(puVar15 + 2);
          local_318[1] = *(LARGE_INTEGER *)(puVar15 + 3);
          local_300[2] = (double)puVar15[7];
          local_300[0] = (double)puVar15[5];
          local_300[1] = (double)puVar15[6];
          FUN_14360dd38(&local_2e8,&local_348,local_318,1);
          puVar15 = puVar15 + 8;
        } while (puVar15 != puVar14);
      }
      auStack_2e0[4] = 1;
      pdVar37 = (double *)((ulonglong)pdVar37 & 0xffffffff);
    }
    else {
      local_3e1 = SUB81(pdVar37,0);
      *(undefined8 *)(lVar12 + 8) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar12 + 0x10) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar12 + 0x18) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar12 + 0x20) = 0xffefffffffffffff;
      *(undefined8 *)(lVar12 + 0x28) = 0xffefffffffffffff;
      *(undefined8 *)(lVar12 + 0x30) = 0xffefffffffffffff;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x60) = 0;
      *(undefined8 *)(lVar12 + 0x68) = 0;
      *(undefined8 *)(lVar12 + 0x70) = 0;
      local_390 = lVar20;
      if ((longlong)(int)uStack_350 != 0) {
        local_3e0 = local_358 + (longlong)(int)uStack_350 * 8;
        puVar15 = local_358;
        do {
          local_328 = *puVar15;
          uStack_320 = puVar15[1];
          local_308 = (double)puVar15[4];
          local_318[0] = *(LARGE_INTEGER *)(puVar15 + 2);
          local_318[1] = *(LARGE_INTEGER *)(puVar15 + 3);
          local_300[2] = (double)puVar15[7];
          local_300[0] = (double)puVar15[5];
          local_300[1] = (double)puVar15[6];
          lVar20 = 0;
          do {
            dVar49 = local_300[lVar20];
            if (((dVar49 < (double)local_318[lVar20]) ||
                (iVar9 = _finite((double)local_318[lVar20]), iVar9 == 0)) ||
               (iVar9 = _finite(dVar49), dVar83 = local_300[2], dVar3 = local_300[1],
               dVar84 = local_300[0], dVar49 = local_308, LVar8 = local_318[1], LVar7 = local_318[0]
               , iVar9 == 0)) {
              local_318[0].QuadPart = -0x10000000000001;
              local_318[1].QuadPart = -0x10000000000001;
              local_308 = -1.79769313486232e+308;
              local_300[0] = 1.79769313486232e+308;
              local_300[1] = 1.79769313486232e+308;
              local_300[2] = 1.79769313486232e+308;
              goto LAB_1436108fb;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 != 3);
          dVar4 = local_300[2] - local_308;
          dVar81 = local_300[1] - (double)local_318[1];
          dVar56 = local_300[0] - (double)local_318[0];
          dVar57 = dVar56;
          if ((dVar56 <= dVar4 || dVar56 <= dVar81) && (dVar57 = dVar81, dVar81 <= dVar4)) {
            dVar57 = dVar4;
          }
          if (local_198 < dVar57) {
LAB_1436108fb:
            local_348 = (undefined *)CONCAT44(0xffffffff,uStack_1d8);
            uStack_340 = 0xffffffffffffffff;
            uStack_338 = 0xffffffff;
            FUN_147c5de8e(lVar31,&local_328,&local_348);
            uVar25 = uStack_1d8;
            lVar20 = (longlong)(int)uStack_1d8;
            uStack_1d8 = uStack_1d8 + 1;
            if ((uint)local_1d4 < uStack_1d8) {
              FUN_147c5e334(&uStack_1e0,uVar25);
            }
            lVar22 = CONCAT44(uStack_1dc,uStack_1e0);
            pdVar37 = (double *)(lVar20 * 0x40);
            *(undefined8 *)(lVar22 + (longlong)pdVar37) = local_328;
            ((undefined8 *)(lVar22 + (longlong)pdVar37))[1] = uStack_320;
            pLVar2 = (LARGE_INTEGER *)(lVar22 + 0x10 + (longlong)pdVar37);
            *pLVar2 = local_318[0];
            pLVar2[1] = local_318[1];
            *(double *)(lVar22 + 0x20 + (longlong)pdVar37) = local_308;
            pdVar43 = (double *)(lVar22 + 0x28 + (longlong)pdVar37);
            *pdVar43 = local_300[0];
            pdVar43[1] = local_300[1];
            *(double *)(lVar22 + 0x38 + (longlong)pdVar37) = local_300[2];
          }
          else {
            iVar9 = *(int *)(lVar12 + 0x40);
            uVar25 = iVar9 + 1;
            *(uint *)(lVar12 + 0x40) = uVar25;
            if (*(uint *)(lVar12 + 0x44) < uVar25) {
              FUN_147c5e334(local_390,iVar9);
            }
            lVar20 = *(longlong *)(lVar12 + 0x38);
            pdVar37 = (double *)((longlong)iVar9 * 0x40);
            *(undefined8 *)(lVar20 + (longlong)pdVar37) = local_328;
            ((undefined8 *)(lVar20 + (longlong)pdVar37))[1] = uStack_320;
            *(double *)(lVar20 + 0x20 + (longlong)pdVar37) = local_308;
            pLVar2 = (LARGE_INTEGER *)(lVar20 + 0x10 + (longlong)pdVar37);
            *pLVar2 = local_318[0];
            pLVar2[1] = local_318[1];
            pdVar43 = (double *)(lVar20 + 0x28 + (longlong)pdVar37);
            *pdVar43 = local_300[0];
            pdVar43[1] = local_300[1];
            *(double *)(lVar20 + 0x38 + (longlong)pdVar37) = local_300[2];
            dVar50 = (double)(int)uVar25;
            dVar57 = *(double *)(lVar12 + 0x18);
            if (dVar49 <= *(double *)(lVar12 + 0x18)) {
              dVar57 = dVar49;
            }
            LVar6 = *(LARGE_INTEGER *)(lVar12 + 0x10);
            if ((double)LVar8 <= (double)*(LARGE_INTEGER *)(lVar12 + 0x10)) {
              LVar6 = LVar8;
            }
            LVar82 = *(LARGE_INTEGER *)(lVar12 + 8);
            if ((double)LVar7 <= (double)*(LARGE_INTEGER *)(lVar12 + 8)) {
              LVar82 = LVar7;
            }
            *(LARGE_INTEGER *)(lVar12 + 8) = LVar82;
            *(LARGE_INTEGER *)(lVar12 + 0x10) = LVar6;
            *(double *)(lVar12 + 0x18) = dVar57;
            dVar57 = *(double *)(lVar12 + 0x30);
            if (*(double *)(lVar12 + 0x30) <= dVar83) {
              dVar57 = dVar83;
            }
            dVar83 = *(double *)(lVar12 + 0x28);
            if (*(double *)(lVar12 + 0x28) <= dVar3) {
              dVar83 = dVar3;
            }
            dVar3 = *(double *)(lVar12 + 0x20);
            if (*(double *)(lVar12 + 0x20) <= dVar84) {
              dVar3 = dVar84;
            }
            *(double *)(lVar12 + 0x20) = dVar3;
            *(double *)(lVar12 + 0x28) = dVar83;
            *(double *)(lVar12 + 0x30) = dVar57;
            dVar49 = dVar4 * 0.5 + dVar49;
            dVar3 = dVar81 * 0.5 + (double)LVar8;
            dVar83 = dVar56 * 0.5 + (double)LVar7;
            dVar85 = dVar49 - *(double *)(lVar12 + 0x58);
            dVar57 = dVar3 - *(double *)(lVar12 + 0x50);
            dVar84 = dVar83 - *(double *)(lVar12 + 0x48);
            dVar56 = dVar84 / dVar50 + *(double *)(lVar12 + 0x48);
            *(double *)(lVar12 + 0x48) = dVar56;
            dVar81 = dVar57 / dVar50 + *(double *)(lVar12 + 0x50);
            *(double *)(lVar12 + 0x50) = dVar81;
            dVar4 = dVar85 / dVar50 + *(double *)(lVar12 + 0x58);
            *(double *)(lVar12 + 0x58) = dVar4;
            *(double *)(lVar12 + 0x60) = (dVar83 - dVar56) * dVar84 + *(double *)(lVar12 + 0x60);
            *(double *)(lVar12 + 0x68) = (dVar3 - dVar81) * dVar57 + *(double *)(lVar12 + 0x68);
            *(double *)(lVar12 + 0x70) = (dVar49 - dVar4) * dVar85 + *(double *)(lVar12 + 0x70);
          }
          puVar15 = puVar15 + 8;
        } while (puVar15 != local_3e0);
      }
      uVar21 = uStack_170;
      local_18c = SUB84(local_3d8,0);
      *(undefined8 *)(lVar12 + 0x78) = 0;
      lVar31 = (longlong)(int)uStack_170;
      uVar25 = (int)uStack_170 + 1;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar25);
      pdVar37 = (double *)CONCAT71((int7)((ulonglong)pdVar37 >> 8),local_3e1);
      if (uStack_170._4_4_ < uVar25) {
        FUN_1446f48e2(&local_178,uVar21 & 0xffffffff);
      }
      *(undefined4 *)(local_178 + lVar31 * 4) = local_3d0._0_4_;
      FUN_1436112dc();
    }
    FUN_143619454(param_1,&local_2e8);
    *(undefined1 *)(param_1 + 0x1a1) = 1;
    FUN_143611140(&local_2e8);
    if (local_358 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14360ff6e:
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pdVar37 & 0xffffffff;
}



// FUNCTION 143610e16 FUN_143610e16 body=56 status=ok
// SIG undefined FUN_143610e16(void)

undefined8 * FUN_143610e16(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1f8,0x10);
  FUN_143619728(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 143610e54 FUN_143610e54 body=747 status=ok
// SIG undefined FUN_143610e54(void)

void FUN_143610e54(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d03e72(param_2);
  }
  FUN_146e08b02(param_2,param_1 + 0x10);
  FUN_147c5f4dc(param_2,param_1 + 0x20);
  FUN_147c5f3c2(param_2,param_1 + 0x30);
  FUN_147c5f3c2(param_2,param_1 + 0x108);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58 = local_58 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar3 = (uint)(float)local_58;
      if (1 < (uint)(float)local_58) {
        FUN_14572541c(param_2);
        uVar3 = (uint)(float)local_58;
      }
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_143610f51;
  }
  FUN_147c5f862(param_1 + 0x118,param_2);
LAB_143610f51:
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x148),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14c) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pdVar2 = (double *)(param_1 + 0x150);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_58 = CONCAT44(local_58._4_4_,(float)*pdVar2);
    puVar4 = (ulonglong *)param_2[1];
    puVar5 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar5;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_58;
    }
  }
  else {
    pdVar6 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x1a1) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x1a2) = 1;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143611140 FUN_143611140 body=361 status=ok
// SIG undefined FUN_143611140(void)

void FUN_143611140(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_1436112a9(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_147c5dca4(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_143611140(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_147c5dd02(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1436112a9 FUN_1436112a9 body=50 status=ok
// SIG undefined FUN_1436112a9(void)

void FUN_1436112a9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1436112dc FUN_1436112dc body=3077 status=ok
// SIG undefined FUN_1436112dc(void)

void FUN_1436112dc(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  double *pdVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  int iVar34;
  longlong *plVar35;
  longlong *plVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  longlong local_1c0;
  longlong *local_1b8;
  uint local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  uint local_18c;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  double local_148 [4];
  undefined4 local_128 [2];
  longlong local_120;
  longlong *local_118;
  int local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar36 = (longlong *)(param_1 + 0x170);
  plVar35 = (longlong *)(param_1 + 400);
  plVar26 = (longlong *)(param_1 + 0x10);
  local_150 = param_1 + 0x118;
  local_158 = param_1 + 0x20;
  local_160 = param_1 + 0xf4;
  local_1a8 = plVar26;
  do {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
    iVar17 = *(int *)(param_1 + 0x178) + -1;
    iVar18 = *(int *)(*plVar36 + (longlong)iVar17 * 4);
    lVar33 = (longlong)iVar18 * 0xf8;
    if (*(int *)(*plVar35 + lVar33) == 2) {
      *(int *)(param_1 + 0x178) = iVar17;
LAB_1436116a9:
      FUN_143611ee4(param_1,iVar18);
      iVar18 = 2;
    }
    else {
      uVar32 = *(uint *)(*plVar35 + lVar33 + 0x7c);
      local_198 = (ulonglong)uVar32;
      iVar17 = *(int *)(param_1 + 0x18);
      local_1c4 = iVar18;
      local_1c0 = lVar33;
      if (iVar17 <= (int)uVar32) {
        *(uint *)(param_1 + 0x18) = uVar32 + 1;
        uVar32 = (uVar32 + 1) - iVar17;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar17) < uVar32) {
          FUN_14008b9bc(plVar26,iVar17);
        }
        FUN_14479f3a2((longlong)iVar17 * 0x70 + *plVar26,uVar32);
      }
      lVar33 = local_1c0;
      cVar16 = FUN_1436120a0(param_1,1);
      iVar18 = local_1c4;
      if (cVar16 == '\0') break;
      local_128[0] = (undefined4)local_198;
      local_120 = local_150;
      local_110 = local_1c4;
      local_108 = local_158;
      local_f8 = local_160;
      lVar22 = *(longlong *)(param_1 + 400);
      local_118 = plVar35;
      local_100 = plVar26;
      if (*(int *)(lVar22 + 0x40 + lVar33) <= *(int *)(param_1 + 0x148)) {
LAB_143611690:
        FUN_143612194(local_128);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
        goto LAB_1436116a9;
      }
      if (*(int *)(param_1 + 0x14c) <= ((int *)(lVar22 + lVar33))[0x1e]) goto LAB_143611690;
      iVar18 = *(int *)(lVar22 + lVar33);
      iVar17 = local_1c4;
      if (iVar18 == 0) {
        local_1b8 = plVar36;
        iVar18 = FUN_14361231a(param_1);
        iVar19 = FUN_14361231a();
        *(int *)(*(longlong *)(param_1 + 400) + 0xb8 + lVar33) = iVar18;
        *(int *)(*(longlong *)(param_1 + 400) + 0xf0 + lVar33) = iVar19;
        lVar33 = *(longlong *)(param_1 + 400) + lVar33;
        lVar22 = 0;
        do {
          *(undefined8 *)(lVar33 + 0x88 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar33 + 0x90 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar33 + 0x98 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar33 + 0xa0 + lVar22) = 0xffefffffffffffff;
          *(undefined8 *)(lVar33 + 0xa8 + lVar22) = 0xffefffffffffffff;
          *(undefined8 *)(lVar33 + 0xb0 + lVar22) = 0xffefffffffffffff;
          lVar22 = lVar22 + 0x38;
        } while (lVar22 != 0x70);
        *(undefined4 *)(*plVar35 + 0x80 + local_1c0) = 0;
        *(undefined4 *)(*plVar35 + local_1c0) = 1;
        lVar22 = *plVar35;
        iVar17 = *(int *)(lVar22 + 0x40 + local_1c0);
        iVar34 = iVar17 / 2;
        if (iVar17 < -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar34);
        }
        lVar29 = (longlong)iVar18 * 0xf8;
        if (*(int *)(lVar22 + lVar29 + 0x44) < iVar34) {
          FUN_147c5e2d4(lVar22 + lVar29 + 0x38,iVar34);
          lVar22 = *plVar35;
        }
        lVar33 = local_1c0;
        iVar17 = local_1c4;
        lVar24 = (longlong)iVar19 * 0xf8;
        if (*(int *)(lVar22 + 0x44 + lVar24) < iVar34) {
          FUN_147c5e2d4(lVar22 + lVar24 + 0x38,iVar34);
          lVar22 = *plVar35;
        }
        plVar36 = local_1b8;
        *(undefined8 *)(lVar22 + 0x58 + lVar29) = 0;
        puVar1 = (undefined8 *)(lVar22 + 0x48 + lVar29);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar22 = *(longlong *)(param_1 + 400);
        *(undefined8 *)(lVar22 + 0x70 + lVar29) = 0;
        puVar1 = (undefined8 *)(lVar22 + 0x60 + lVar29);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar22 = *(longlong *)(param_1 + 400);
        *(undefined8 *)(lVar22 + 0x58 + lVar24) = 0;
        puVar1 = (undefined8 *)(lVar22 + 0x48 + lVar24);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar22 = *(longlong *)(param_1 + 400);
        *(undefined8 *)(lVar22 + 0x70 + lVar24) = 0;
        puVar1 = (undefined8 *)(lVar22 + 0x60 + lVar24);
        *puVar1 = 0;
        puVar1[1] = 0;
        cVar16 = FUN_1436120a0(param_1,1);
        iVar18 = 1;
        plVar26 = local_1a8;
        if (cVar16 != '\0') {
          lVar22 = *plVar35;
          iVar18 = *(int *)(lVar22 + lVar33);
          goto LAB_143611658;
        }
      }
      else {
LAB_143611658:
        if (iVar18 == 1) {
          lVar29 = lVar22 + lVar33;
          if ((DAT_14c75efd0 == '\x01') || (*(int *)(param_1 + 0x158) < 1)) {
            uVar32 = *(uint *)(lVar22 + 0x40 + lVar33);
          }
          else {
            uVar32 = (*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x15c)) +
                     *(int *)(lVar29 + 0x80);
            if ((int)*(uint *)(lVar29 + 0x40) <= (int)uVar32) {
              uVar32 = *(uint *)(lVar29 + 0x40);
            }
          }
          uVar23 = (ulonglong)uVar32;
          if (DAT_14c75efc8 == 1) {
            dVar8 = *(double *)(lVar22 + 0x60 + lVar33);
            dVar9 = *(double *)(lVar22 + 0x68 + lVar33);
            dVar39 = *(double *)(lVar22 + 0x70 + lVar33);
            if (dVar8 <= dVar9) {
              uVar31 = (ulonglong)((dVar9 <= dVar39) + 1);
            }
            else {
              uVar31 = (ulonglong)((uint)(dVar8 <= dVar39) * 2);
            }
          }
          else {
            dVar8 = *(double *)(lVar22 + 0x30 + lVar33) - *(double *)(lVar22 + 0x18 + lVar33);
            dVar39 = *(double *)(lVar22 + 0x28 + lVar33) - *(double *)(lVar22 + 0x10 + lVar33);
            dVar9 = *(double *)(lVar22 + 0x20 + lVar33) - *(double *)(lVar22 + 8 + lVar33);
            uVar21 = (dVar39 <= dVar8) + 1;
            if (dVar39 < dVar9 && dVar8 < dVar9) {
              uVar21 = 0;
            }
            uVar31 = (ulonglong)uVar21;
          }
          if (DAT_14c75efcc == 1) {
            local_148[2] = *(double *)(lVar22 + 0x58 + lVar33);
            pdVar2 = (double *)(lVar22 + 0x48 + lVar33);
            local_148[0] = *pdVar2;
            local_148[1] = pdVar2[1];
          }
          else {
            dVar8 = *(double *)(lVar22 + 0x18 + lVar33);
            dVar9 = *(double *)(lVar22 + 8 + lVar33);
            dVar39 = *(double *)(lVar22 + 0x10 + lVar33);
            local_148[0] = (*(double *)(lVar22 + 0x20 + lVar33) - dVar9) * 0.5 + dVar9;
            local_148[1] = (*(double *)(lVar22 + 0x28 + lVar33) - dVar39) * 0.5 + dVar39;
            local_148[2] = (*(double *)(lVar22 + 0x30 + lVar33) - dVar8) * 0.5 + dVar8;
          }
          uVar21 = *(uint *)(lVar29 + 0x80);
          if ((int)uVar21 < (int)uVar32) {
            local_18c = (uint)uVar31;
            dVar8 = local_148[uVar31];
            lVar22 = lVar29 + 0x88;
            local_170 = (ulonglong)-uVar32;
            uVar25 = (longlong)(int)uVar21 << 6 | 0x38;
            uVar20 = uVar21;
            local_1b8 = plVar36;
            local_1ac = uVar32;
            local_1a0 = plVar35;
            local_188 = (longlong)(int)uVar21;
            local_168 = lVar29;
            do {
              local_180 = (ulonglong)(uVar20 + 1);
              lVar33 = *(longlong *)(local_168 + 0x38);
              dVar9 = *(double *)(lVar33 + -0x18 + uVar25);
              dVar39 = *(double *)(lVar33 + -0x28 + uVar25);
              dVar10 = *(double *)(lVar33 + -0x20 + uVar25);
              dVar9 = (*(double *)(lVar33 + uVar25) - dVar9) * 0.5 + dVar9;
              dVar10 = (*(double *)(lVar33 + -8 + uVar25) - dVar10) * 0.5 + dVar10;
              dVar39 = (*(double *)(lVar33 + -0x10 + uVar25) - dVar39) * 0.5 + dVar39;
              dVar41 = dVar9;
              if (((int)uVar31 != 2) && (dVar41 = dVar39, (int)uVar31 == 1)) {
                dVar41 = dVar10;
              }
              lVar24 = (ulonglong)(dVar8 < dVar41) * 0x38;
              lVar29 = *local_1a0;
              lVar30 = (longlong)*(int *)(lVar22 + 0x30 + lVar24) * 0xf8;
              iVar18 = *(int *)(lVar29 + 0x40 + lVar30);
              uVar32 = iVar18 + 1;
              *(uint *)(lVar29 + 0x40 + lVar30) = uVar32;
              if (*(uint *)(lVar29 + 0x44 + lVar30) < uVar32) {
                local_178 = lVar22;
                FUN_147c5e334(lVar29 + lVar30 + 0x38,iVar18);
                lVar22 = local_178;
              }
              pdVar2 = (double *)(uVar25 + lVar33);
              pdVar28 = (double *)(lVar24 + lVar22);
              lVar29 = lVar29 + lVar30;
              lVar33 = *(longlong *)(lVar29 + 0x38);
              lVar24 = (longlong)iVar18 * 0x40;
              dVar41 = pdVar2[-6];
              *(double *)(lVar33 + lVar24) = pdVar2[-7];
              ((double *)(lVar33 + lVar24))[1] = dVar41;
              *(double *)(lVar33 + 0x20 + lVar24) = pdVar2[-3];
              dVar41 = pdVar2[-4];
              pdVar3 = (double *)(lVar33 + 0x10 + lVar24);
              *pdVar3 = pdVar2[-5];
              pdVar3[1] = dVar41;
              *(double *)(lVar33 + 0x38 + lVar24) = *pdVar2;
              dVar41 = pdVar2[-1];
              dVar11 = (double)(int)uVar32;
              pdVar3 = (double *)(lVar33 + 0x28 + lVar24);
              *pdVar3 = pdVar2[-2];
              pdVar3[1] = dVar41;
              dVar41 = pdVar28[2];
              uVar37 = SUB84(dVar41,0);
              uVar38 = (undefined4)((ulonglong)dVar41 >> 0x20);
              dVar40 = pdVar2[-3];
              if (dVar40 <= dVar41) {
                uVar37 = SUB84(dVar40,0);
                uVar38 = (undefined4)((ulonglong)dVar40 >> 0x20);
              }
              dVar41 = pdVar28[1];
              if (pdVar2[-4] <= pdVar28[1]) {
                dVar41 = pdVar2[-4];
              }
              dVar40 = *pdVar28;
              if (pdVar2[-5] <= *pdVar28) {
                dVar40 = pdVar2[-5];
              }
              *pdVar28 = dVar40;
              pdVar28[1] = dVar41;
              pdVar28[2] = (double)CONCAT44(uVar38,uVar37);
              dVar41 = pdVar28[5];
              uVar37 = SUB84(dVar41,0);
              uVar38 = (undefined4)((ulonglong)dVar41 >> 0x20);
              dVar40 = *pdVar2;
              if (dVar41 <= dVar40) {
                uVar37 = SUB84(dVar40,0);
                uVar38 = (undefined4)((ulonglong)dVar40 >> 0x20);
              }
              dVar41 = pdVar28[4];
              if (pdVar28[4] <= pdVar2[-1]) {
                dVar41 = pdVar2[-1];
              }
              dVar40 = pdVar28[3];
              if (pdVar28[3] <= pdVar2[-2]) {
                dVar40 = pdVar2[-2];
              }
              pdVar28[3] = dVar40;
              pdVar28[4] = dVar41;
              pdVar28[5] = (double)CONCAT44(uVar38,uVar37);
              dVar42 = dVar9 - *(double *)(lVar29 + 0x58);
              dVar41 = dVar10 - *(double *)(lVar29 + 0x50);
              dVar40 = dVar39 - *(double *)(lVar29 + 0x48);
              dVar13 = dVar40 / dVar11 + *(double *)(lVar29 + 0x48);
              *(double *)(lVar29 + 0x48) = dVar13;
              dVar12 = dVar41 / dVar11 + *(double *)(lVar29 + 0x50);
              *(double *)(lVar29 + 0x50) = dVar12;
              dVar11 = dVar42 / dVar11 + *(double *)(lVar29 + 0x58);
              *(double *)(lVar29 + 0x58) = dVar11;
              *(double *)(lVar29 + 0x60) = (dVar39 - dVar13) * dVar40 + *(double *)(lVar29 + 0x60);
              *(double *)(lVar29 + 0x68) = (dVar10 - dVar12) * dVar41 + *(double *)(lVar29 + 0x68);
              *(double *)(lVar29 + 0x70) = (dVar9 - dVar11) * dVar42 + *(double *)(lVar29 + 0x70);
              cVar16 = FUN_1436120a0(param_1,0);
              uVar20 = (uint)local_180;
              uVar21 = (uint)local_188;
              iVar17 = local_1c4;
              lVar33 = local_1c0;
              plVar36 = local_1b8;
              plVar26 = local_1a8;
              plVar35 = local_1a0;
              if (cVar16 == '\0') {
                if (uVar20 == local_1ac) {
                  uVar20 = local_1ac;
                }
                uVar23 = (ulonglong)uVar20;
                break;
              }
              uVar25 = uVar25 + 0x40;
              uVar23 = (ulonglong)local_1ac;
              uVar31 = (ulonglong)local_18c;
            } while ((int)local_170 + uVar20 != 0);
          }
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + ((int)uVar23 - uVar21);
          *(int *)(*(longlong *)(param_1 + 400) + 0x80 + lVar33) = (int)uVar23;
          cVar16 = FUN_1436120a0(param_1,CONCAT71((int7)(uVar23 >> 8),1));
          iVar18 = 1;
          if (cVar16 == '\0') goto LAB_1436116b3;
          lVar22 = *plVar35;
        }
        iVar18 = *(int *)(lVar22 + 0xb8 + lVar33);
        lVar29 = (longlong)iVar18 * 0xf8;
        if (*(int *)(lVar22 + 0x40 + lVar29) == 0) {
LAB_143611dcc:
          FUN_143612194(local_128);
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
          FUN_143611ee4(param_1,iVar17);
        }
        else {
          iVar19 = *(int *)(lVar22 + 0xf0 + lVar33);
          lVar24 = (longlong)iVar19 * 0xf8;
          if (*(int *)(lVar22 + 0x40 + lVar24) == 0) goto LAB_143611dcc;
          lVar27 = (longlong)(int)local_198 * 0x70;
          pbVar4 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar27);
          *pbVar4 = *pbVar4 & 0xfe;
          lVar22 = *(longlong *)(param_1 + 0x10);
          lVar30 = *(longlong *)(param_1 + 400);
          *(undefined8 *)(lVar22 + 0x10 + lVar27) = *(undefined8 *)(lVar30 + 0x98 + lVar33);
          puVar1 = (undefined8 *)(lVar30 + 0x88 + lVar33);
          uVar15 = puVar1[1];
          *(undefined8 *)(lVar22 + lVar27) = *puVar1;
          ((undefined8 *)(lVar22 + lVar27))[1] = uVar15;
          *(undefined8 *)(lVar22 + 0x28 + lVar27) = *(undefined8 *)(lVar30 + 0xb0 + lVar33);
          puVar7 = (undefined8 *)(lVar30 + 0xa0 + lVar33);
          uVar15 = puVar7[1];
          puVar1 = (undefined8 *)(lVar22 + 0x18 + lVar27);
          *puVar1 = *puVar7;
          puVar1[1] = uVar15;
          lVar22 = *(longlong *)(param_1 + 0x10);
          lVar30 = *(longlong *)(param_1 + 400);
          *(undefined8 *)(lVar30 + 0x18 + lVar29) = *(undefined8 *)(lVar22 + 0x10 + lVar27);
          uVar15 = ((undefined8 *)(lVar22 + lVar27))[1];
          puVar1 = (undefined8 *)(lVar30 + 8 + lVar29);
          *puVar1 = *(undefined8 *)(lVar22 + lVar27);
          puVar1[1] = uVar15;
          *(undefined8 *)(lVar30 + 0x30 + lVar29) = *(undefined8 *)(lVar22 + 0x28 + lVar27);
          puVar1 = (undefined8 *)(lVar22 + 0x18 + lVar27);
          uVar15 = puVar1[1];
          puVar7 = (undefined8 *)(lVar30 + 0x20 + lVar29);
          *puVar7 = *puVar1;
          puVar7[1] = uVar15;
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar27) =
               *(undefined4 *)(param_1 + 0x18);
          lVar22 = *(longlong *)(param_1 + 0x10);
          lVar30 = *(longlong *)(param_1 + 400);
          *(undefined8 *)(lVar22 + 0x40 + lVar27) = *(undefined8 *)(lVar30 + 0xd0 + lVar33);
          puVar7 = (undefined8 *)(lVar30 + 0xc0 + lVar33);
          uVar15 = puVar7[1];
          puVar1 = (undefined8 *)(lVar22 + 0x30 + lVar27);
          *puVar1 = *puVar7;
          puVar1[1] = uVar15;
          *(undefined8 *)(lVar22 + 0x58 + lVar27) = *(undefined8 *)(lVar30 + 0xe8 + lVar33);
          puVar7 = (undefined8 *)(lVar30 + 0xd8 + lVar33);
          uVar15 = puVar7[1];
          puVar1 = (undefined8 *)(lVar22 + 0x48 + lVar27);
          *puVar1 = *puVar7;
          puVar1[1] = uVar15;
          lVar22 = *(longlong *)(param_1 + 0x10);
          lVar30 = *(longlong *)(param_1 + 400);
          *(undefined8 *)(lVar30 + 0x18 + lVar24) = *(undefined8 *)(lVar22 + 0x40 + lVar27);
          puVar1 = (undefined8 *)(lVar22 + 0x30 + lVar27);
          uVar15 = puVar1[1];
          puVar7 = (undefined8 *)(lVar30 + 8 + lVar24);
          *puVar7 = *puVar1;
          puVar7[1] = uVar15;
          *(undefined8 *)(lVar30 + 0x30 + lVar24) = *(undefined8 *)(lVar22 + 0x58 + lVar27);
          puVar5 = (undefined4 *)(lVar22 + 0x48 + lVar27);
          uVar37 = puVar5[1];
          uVar38 = puVar5[2];
          uVar14 = puVar5[3];
          puVar6 = (undefined4 *)(lVar30 + 0x20 + lVar24);
          *puVar6 = *puVar5;
          puVar6[1] = uVar37;
          puVar6[2] = uVar38;
          puVar6[3] = uVar14;
          *(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar27) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(*(longlong *)(param_1 + 400) + 0x78 + lVar29) =
               *(int *)(*(longlong *)(param_1 + 400) + 0x78 + lVar33) + 1;
          *(int *)(*(longlong *)(param_1 + 400) + 0x78 + lVar24) =
               *(int *)(*(longlong *)(param_1 + 400) + 0x78 + lVar33) + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 400) + 0x7c + lVar29) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar27);
          *(undefined4 *)(*(longlong *)(param_1 + 400) + 0x7c + lVar24) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar27);
          iVar17 = *(int *)(param_1 + 0x178);
          *(uint *)(param_1 + 0x178) = iVar17 + 1U;
          if (*(uint *)(param_1 + 0x17c) < iVar17 + 1U) {
            FUN_1446f48e2(plVar36,iVar17);
          }
          *(int *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar17 * 4) = iVar19;
          iVar17 = *(int *)(param_1 + 0x178);
          *(uint *)(param_1 + 0x178) = iVar17 + 1U;
          if (*(uint *)(param_1 + 0x17c) < iVar17 + 1U) {
            FUN_1446f48e2(plVar36,iVar17);
          }
          plVar26 = local_1a8;
          lVar22 = local_1c0;
          *(int *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar17 * 4) = iVar18;
          lVar33 = *(longlong *)(param_1 + 0x10);
          iVar17 = *(int *)(lVar33 + 100 + lVar27) + 1;
          iVar18 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar17;
          uVar32 = iVar17 - iVar18;
          if ((uint)(*(int *)(param_1 + 0x1c) - iVar18) < uVar32) {
            FUN_14008b9bc(local_1a8,iVar18);
            lVar33 = *plVar26;
          }
          FUN_14479f3a2((longlong)iVar18 * 0x70 + lVar33,uVar32);
          *(undefined4 *)(*plVar35 + lVar22) = 2;
        }
        iVar18 = 0;
      }
    }
LAB_1436116b3:
  } while (iVar18 != 1);
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143611ee4 FUN_143611ee4 body=442 status=ok
// SIG undefined FUN_143611ee4(void)

void FUN_143611ee4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 auStack_148 [5];
  undefined4 local_120 [2];
  undefined8 local_118 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120[0] = 0;
  local_118[0] = 0x7fefffffffffffff;
  local_118[1] = 0x7fefffffffffffff;
  local_108 = 0x7fefffffffffffff;
  local_100 = 0xffefffffffffffff;
  uStack_f8 = 0xffefffffffffffff;
  local_f0 = 0xffefffffffffffff;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar10 = 0xb0;
  do {
    *(undefined8 *)((longlong)auStack_148 + lVar10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x18) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)local_120 + lVar10) = 0xffefffffffffffff;
    lVar10 = lVar10 + 0x38;
  } while (lVar10 != 0x120);
  lVar8 = *(longlong *)(param_1 + 400);
  lVar9 = (longlong)param_2 * 0xf8;
  lVar10 = lVar8 + lVar9;
  *(undefined4 *)(lVar8 + lVar9) = 0;
  puVar1 = (undefined8 *)(lVar8 + 8 + lVar9);
  *puVar1 = 0x7fefffffffffffff;
  puVar1[1] = 0x7fefffffffffffff;
  *(undefined8 *)(lVar8 + 0x18 + lVar9) = 0x7fefffffffffffff;
  puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar9);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffefffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffefffff;
  *(undefined8 *)(lVar8 + 0x30 + lVar9) = 0xffefffffffffffff;
  if (*(longlong *)(lVar8 + 0x38 + lVar9) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar10 + 0x38) = local_e8;
  *(undefined4 *)(lVar10 + 0x40) = (undefined4)uStack_e0;
  *(undefined4 *)(lVar10 + 0x44) = uStack_e0._4_4_;
  *(undefined8 *)(lVar10 + 0x48) = local_d8;
  *(undefined8 *)(lVar10 + 0x50) = uStack_d0;
  *(undefined4 *)(lVar10 + 0x58) = local_c8;
  *(undefined4 *)(lVar10 + 0x5c) = uStack_c4;
  *(undefined4 *)(lVar10 + 0x60) = uStack_c0;
  *(undefined4 *)(lVar10 + 100) = uStack_bc;
  *(undefined4 *)(lVar10 + 0x68) = local_b8;
  *(undefined4 *)(lVar10 + 0x6c) = uStack_b4;
  *(undefined4 *)(lVar10 + 0x70) = uStack_b0;
  *(undefined4 *)(lVar10 + 0x74) = uStack_ac;
  *(undefined4 *)(lVar10 + 0x74) = uStack_ac;
  *(undefined4 *)(lVar10 + 0x78) = uStack_a8;
  *(undefined4 *)(lVar10 + 0x7c) = uStack_a4;
  *(undefined4 *)(lVar10 + 0x80) = uStack_a0;
  lVar8 = 0x88;
  do {
    *(undefined8 *)(lVar10 + 0x10 + lVar8) = *(undefined8 *)((longlong)local_118 + lVar8 + 8);
    uVar7 = *(undefined8 *)((longlong)local_118 + lVar8);
    *(undefined8 *)(lVar10 + lVar8) = *(undefined8 *)((longlong)local_120 + lVar8);
    ((undefined8 *)(lVar10 + lVar8))[1] = uVar7;
    uVar4 = *(undefined4 *)((longlong)&local_108 + lVar8 + 4);
    uVar5 = *(undefined4 *)((longlong)&local_100 + lVar8);
    uVar6 = *(undefined4 *)((longlong)&local_100 + lVar8 + 4);
    puVar2 = (undefined4 *)(lVar10 + 0x18 + lVar8);
    *puVar2 = *(undefined4 *)((longlong)&local_108 + lVar8);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    *(undefined8 *)(lVar10 + 0x28 + lVar8) = *(undefined8 *)((longlong)&uStack_f8 + lVar8);
    *(undefined4 *)(lVar10 + 0x30 + lVar8) = *(undefined4 *)((longlong)&local_f0 + lVar8);
    lVar8 = lVar8 + 0x38;
  } while (lVar8 != 0xf8);
  iVar3 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x180),iVar3);
  }
  *(int *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar3 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436120a0 FUN_1436120a0 body=242 status=ok
// SIG undefined FUN_1436120a0(void)

ulonglong FUN_1436120a0(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined7 uVar6;
  int iVar7;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  iVar2 = DAT_14c75efd4;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c75efd0 == '\x01') {
    if (param_2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x168);
      uVar5 = CONCAT71((int7)(local_10 >> 8),1);
      iVar7 = 0;
      if (iVar1 < DAT_14c75efd4) {
        iVar7 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x168) = iVar7;
      if (iVar1 < iVar2) goto LAB_143612176;
    }
    BVar4 = QueryPerformanceCounter(&local_18);
    uVar6 = (undefined7)(CONCAT44(extraout_var,BVar4) >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if (0.0 < DAT_14c75efd8) {
      uVar5 = CONCAT71(uVar6,((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                             *(double *)(param_1 + 0x160) <= (double)DAT_14c75efd8 ||
                             (ABS(*(double *)(param_1 + 0x160)) <= 1e-08 ||
                             *(int *)(param_1 + 0x158) < 1));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x158);
    uVar3 = (uint3)((uint)iVar2 >> 8);
    if (iVar2 < 1) {
      uVar5 = CONCAT71((uint7)uVar3,1);
    }
    else {
      uVar5 = (ulonglong)CONCAT31(uVar3,*(int *)(param_1 + 0x15c) < iVar2);
    }
  }
LAB_143612176:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143612194 FUN_143612194 body=388 status=ok
// SIG undefined FUN_143612194(void)

/* WARNING: Removing unreachable block (ram,0x0001436122e2) */

void FUN_143612194(int *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (longlong)*(int *)(**(longlong **)(param_1 + 4) + 0x40 + (longlong)param_1[6] * 0xf8);
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(**(longlong **)(param_1 + 4) + 0x38 + (longlong)param_1[6] * 0xf8);
    lVar7 = lVar7 << 6;
    do {
      uStack_70 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
      local_78 = 0xffffffffffffffff;
      uStack_6c = 0xffffffff;
      uStack_68 = 0xffffffff;
      FUN_147c5de8e(*(undefined8 *)(param_1 + 2),lVar6,&local_78);
      lVar6 = lVar6 + 0x40;
      lVar7 = lVar7 + -0x40;
    } while (lVar7 != 0);
  }
  pbVar2 = (byte *)(**(longlong **)(param_1 + 10) + 0x6c + (longlong)*param_1 * 0x70);
  *pbVar2 = *pbVar2 | 1;
  plVar5 = *(longlong **)(param_1 + 8);
  FUN_147c5dfc8(&local_78,**(longlong **)(param_1 + 4) + (longlong)param_1[6] * 0xf8 + 0x38);
  iVar4 = (int)plVar5[1];
  lVar7 = (longlong)iVar4;
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_147c5e0ec(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  *(ulonglong *)(lVar6 + 0x10 + lVar7 * 0x48) = CONCAT44(uStack_64,uStack_68);
  puVar1 = (undefined8 *)(lVar6 + lVar7 * 0x48);
  *puVar1 = local_78;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar6 + 0x28 + lVar7 * 0x48) = local_50;
  puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar7 * 0x48);
  *puVar3 = local_60;
  puVar3[1] = uStack_5c;
  puVar3[2] = uStack_58;
  puVar3[3] = uStack_54;
  *(undefined8 *)(lVar6 + 0x30 + lVar7 * 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x30 + lVar7 * 0x48) = local_48;
  *(undefined4 *)(lVar6 + 0x38 + lVar7 * 0x48) = (undefined4)local_40;
  *(undefined4 *)(lVar6 + 0x3c + lVar7 * 0x48) = local_40._4_4_;
  *(undefined1 *)(lVar6 + 0x40 + lVar7 * 0x48) = local_38;
  *(int *)(**(longlong **)(param_1 + 10) + 0x60 + (longlong)*param_1 * 0x70) = iVar4;
  local_40 = 0;
  local_48 = 0;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361231a FUN_14361231a body=126 status=ok
// SIG undefined FUN_14361231a(void)

int FUN_14361231a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar2 + 1;
    if (*(int *)(param_1 + 0x19c) == iVar2) {
      FUN_143612410((longlong *)(param_1 + 400),iVar2);
    }
    FUN_143612398((longlong)iVar2 * 0xf8 + *(longlong *)(param_1 + 400));
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x180) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x188) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x180);
  }
  return iVar2;
}



// FUNCTION 143612398 FUN_143612398 body=119 status=ok
// SIG undefined FUN_143612398(void)

void FUN_143612398(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 6) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 10) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x88) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x90) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x98) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xa0) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xa8) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xb0) = 0xffefffffffffffff;
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x70);
  return;
}



// FUNCTION 143612410 FUN_143612410 body=366 status=ok
// SIG undefined FUN_143612410(void)

void FUN_143612410(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xf8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1436124a5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1436124a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xf8)) {
    uVar7 = uVar5 / 0xf8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xf8,8);
  return;
}



// FUNCTION 14361257e FUN_14361257e body=472 status=ok
// SIG undefined FUN_14361257e(void)

undefined4 FUN_14361257e(longlong *param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar13 = (longlong)(int)param_2[1];
  lVar15 = 0;
  local_90 = param_4;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar17 = lVar13 * 0x40;
    lVar15 = 0;
    do {
      if (*param_3 != 0xffffffff) {
        if (DAT_14c75efd0 == '\x01') {
          lVar16 = *local_90;
          iVar5 = *(int *)(lVar16 + 0x16c);
          *(int *)(lVar16 + 0x16c) = iVar5 + 1;
          if (iVar5 < DAT_14c75efdc) {
            QueryPerformanceCounter(&local_88);
            if ((1e-08 < ABS(*(double *)(lVar16 + 0x160))) &&
               ((double)DAT_14c75efd8 <
                ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                *(double *)(lVar16 + 0x160))) break;
          }
          else {
            *(undefined4 *)(lVar16 + 0x16c) = 0;
          }
        }
        else if (*param_3 <= (uint)lVar15) break;
      }
      lVar16 = *param_1;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_147c5e334(param_2,iVar5);
      }
      lVar16 = lVar16 + lVar17;
      lVar7 = *param_2;
      lVar14 = (longlong)iVar5 * 0x40;
      uVar11 = ((undefined8 *)(lVar15 + lVar16))[1];
      *(undefined8 *)(lVar7 + lVar14) = *(undefined8 *)(lVar15 + lVar16);
      ((undefined8 *)(lVar7 + lVar14))[1] = uVar11;
      *(undefined8 *)(lVar7 + 0x20 + lVar14) = *(undefined8 *)(lVar15 + 0x20 + lVar16);
      puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar7 + 0x38 + lVar14) = *(undefined8 *)(lVar15 + 0x38 + lVar16);
      puVar3 = (undefined4 *)(lVar15 + 0x28 + lVar16);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar4 = (undefined4 *)(lVar7 + 0x28 + lVar14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      lVar15 = lVar15 + 0x40;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[1]);
  }
  uVar6 = *param_3;
  if (0 < (int)uVar6) {
    uVar12 = uVar6 - (int)lVar15;
    if ((int)uVar6 < (int)lVar15) {
      uVar12 = 0;
    }
    *param_3 = uVar12;
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 143612758 FUN_143612758 body=390 status=ok
// SIG undefined FUN_143612758(void)

undefined4 FUN_143612758(longlong *param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = (longlong)(int)param_2[1];
  uVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    uVar5 = 0;
    do {
      if (*param_3 != 0xffffffff) {
        if (DAT_14c75efd0 == '\x01') {
          lVar3 = *param_4;
          iVar1 = *(int *)(lVar3 + 0x16c);
          *(int *)(lVar3 + 0x16c) = iVar1 + 1;
          if (iVar1 < DAT_14c75efdc) {
            QueryPerformanceCounter(&local_88);
            if ((1e-08 < ABS(*(double *)(lVar3 + 0x160))) &&
               ((double)DAT_14c75efd8 <
                ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                *(double *)(lVar3 + 0x160))) break;
          }
          else {
            *(undefined4 *)(lVar3 + 0x16c) = 0;
          }
        }
        else if (*param_3 <= uVar5) break;
      }
      lVar3 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
      uVar5 = uVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  uVar2 = *param_3;
  if (0 < (int)uVar2) {
    uVar4 = uVar2 - uVar5;
    if ((int)uVar2 < (int)uVar5) {
      uVar4 = 0;
    }
    *param_3 = uVar4;
  }
  if ((local_80 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 1436128e0 FUN_1436128e0 body=109 status=ok
// SIG undefined FUN_1436128e0(void)

void FUN_1436128e0(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x6c) & 1) == 0) {
    FUN_1436128e0(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_1436128e0(param_1,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10));
    FUN_14361294e(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2 + 0x30);
  }
  return;
}



// FUNCTION 14361294e FUN_14361294e body=362 status=ok
// SIG undefined FUN_14361294e(void)

void FUN_14361294e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  do {
    lVar8 = 0;
    do {
      dVar4 = *(double *)(param_3 + lVar8 * 8);
      pdVar3 = (double *)(param_5 + 0x18 + lVar8 * 8);
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        return;
      }
      dVar4 = *(double *)(param_5 + lVar8 * 8);
      pdVar3 = (double *)(param_3 + 0x18 + lVar8 * 8);
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        return;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    if ((*(byte *)(param_2 + 0x6c) & 1) == 0) {
      FUN_14361294e(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 +
                            *(longlong *)(param_1 + 0x10),param_2,param_4,param_5);
      param_3 = param_2 + 0x30;
      param_2 = (longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
    }
    else {
      if ((*(byte *)(param_4 + 0x6c) & 1) != 0) {
        iVar5 = *(int *)(param_2 + 0x60);
        iVar6 = *(int *)(param_4 + 0x60);
        lVar8 = *(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x48;
        lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x48;
        lVar9 = -3;
        while( true ) {
          dVar4 = *(double *)(lVar8 + 0x18 + lVar9 * 8);
          pdVar3 = (double *)(lVar1 + 0x30 + lVar9 * 8);
          if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
            return;
          }
          dVar4 = *(double *)(lVar1 + 0x18 + lVar9 * 8);
          pdVar3 = (double *)(lVar8 + 0x30 + lVar9 * 8);
          if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) break;
          lVar9 = lVar9 + 1;
          if (lVar9 == 0) {
            iVar7 = *(int *)(param_1 + 0x1d0);
            *(uint *)(param_1 + 0x1d0) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x1d4) < iVar7 + 1U) {
              FUN_1400232c6(param_1 + 0x1c8,iVar7);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar7 * 8) =
                 CONCAT44(iVar6,iVar5);
            piVar2 = (int *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar5 * 4);
            *piVar2 = *piVar2 + 1;
            piVar2 = (int *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar6 * 4);
            *piVar2 = *piVar2 + 1;
            return;
          }
        }
        return;
      }
      FUN_14361294e(param_1,param_2,param_3,
                    (longlong)*(int *)(param_4 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),
                    param_4);
      param_5 = param_4 + 0x30;
      param_4 = (longlong)*(int *)(param_4 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
    }
  } while( true );
}



// FUNCTION 143612ab8 FUN_143612ab8 body=2916 status=ok
// SIG undefined FUN_143612ab8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143612ab8(longlong param_1,double *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  double *pdVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  bool bVar37;
  longlong lVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_1118 [32];
  longlong *local_10f8;
  longlong local_10f0;
  uint local_10e4;
  ulonglong local_10e0;
  ulonglong local_10d8;
  longlong local_10d0;
  double local_10c8 [6];
  undefined1 local_1098 [16];
  double local_1088 [510];
  double *local_98;
  uint local_90;
  uint local_8c;
  ulonglong local_80;
  double dVar4;
  double dVar7;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1118;
  local_10f8 = param_3;
  local_10f0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    pdVar22 = *(double **)(param_1 + 0x108);
    pdVar30 = pdVar22 + (longlong)*(int *)(param_1 + 0x110) * 8;
    do {
      local_1088[2] = pdVar22[4];
      local_1088[0] = pdVar22[2];
      local_1088[1] = pdVar22[3];
      local_1088[5] = pdVar22[7];
      local_1088[3] = pdVar22[5];
      local_1088[4] = pdVar22[6];
      lVar20 = 0;
      do {
        if ((local_1088[lVar20 + 3] <= param_2[lVar20] && param_2[lVar20] != local_1088[lVar20 + 3])
           || (param_2[lVar20 + 3] <= local_1088[lVar20] &&
               local_1088[lVar20] != param_2[lVar20 + 3])) goto LAB_143612bc4;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      local_10c8[0] = *pdVar22;
      local_10c8[1] = pdVar22[1];
      plVar10 = (longlong *)*param_3;
      iVar19 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar19 + 1U) {
        FUN_147c5e574(plVar10,iVar19);
        param_3 = local_10f8;
      }
      auVar44._8_8_ = local_10c8[1];
      auVar44._0_8_ = local_10c8[0];
      *(undefined1 (*) [16])(*plVar10 + (longlong)iVar19 * 0x10) = auVar44;
LAB_143612bc4:
      pdVar22 = pdVar22 + 8;
    } while (pdVar22 != pdVar30);
  }
  lVar20 = local_10f0;
  if (*(longlong *)(local_10f0 + 0xc0) == 0) {
    if (0 < (longlong)*(int *)(local_10f0 + 0x38)) {
      if ((((0.0 < *(double *)(local_10f0 + 200)) &&
           (uVar32 = (ulonglong)*(int *)(local_10f0 + 0xd8), 0 < (longlong)uVar32)) &&
          (0 < *(int *)(local_10f0 + 0xdc))) &&
         ((0 < *(int *)(local_10f0 + 0xe0) &&
          (*(int *)(local_10f0 + 0x84) < *(int *)(local_10f0 + 0x58))))) {
        dVar4 = *(double *)(local_10f0 + 0xd0);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = ABS(*param_2 * dVar4) * 2.220446049250313e-16 + *param_2 * dVar4;
        auVar44 = roundpd(auVar43,auVar43,1);
        uVar31 = (ulonglong)auVar44._0_8_;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = ABS(param_2[3] * dVar4) * 2.220446049250313e-16 + param_2[3] * dVar4;
        auVar44 = roundpd(auVar45,auVar45,1);
        uVar33 = (ulonglong)auVar44._0_8_;
        if ((longlong)uVar31 <= (longlong)uVar33) {
          auVar46._8_8_ = 0;
          auVar46._0_8_ = ABS(param_2[1] * dVar4) * 2.220446049250313e-16 + param_2[1] * dVar4;
          auVar44 = roundpd(auVar46,auVar46,1);
          uVar34 = (ulonglong)auVar44._0_8_;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = ABS(dVar4 * param_2[4]) * 2.220446049250313e-16 + dVar4 * param_2[4];
          auVar44 = roundpd(auVar41,auVar41,1);
          uVar35 = (ulonglong)auVar44._0_8_;
          if ((((longlong)uVar34 <= (longlong)uVar35) &&
              (uVar27 = (uVar33 - uVar31) + 1, uVar27 <= uVar32)) &&
             ((uVar29 = (uVar35 - uVar34) + 1, uVar29 <= uVar32 &&
              (uVar29 = uVar29 * uVar27, uVar29 < uVar32 || uVar29 - uVar32 == 0)))) {
            lVar20 = local_10f0 + 0x88;
            local_1098 = ZEXT816(0);
            local_10e0 = uVar33;
            local_10d8 = uVar34;
            do {
              uVar24 = ((uint)uVar31 & 0xff00) << 8 | (uint)uVar31 & 0xff;
              uVar24 = (uVar24 << 4 | uVar24) & 0xf0f0f0f;
              uVar24 = (uVar24 * 4 | uVar24) & 0x33333333;
              uVar32 = uVar34;
              do {
                if (*(int *)(local_10f0 + 0x58) != *(int *)(local_10f0 + 0x84)) {
                  uVar25 = ((uint)uVar32 & 0xff00) << 8 | (uint)uVar32 & 0xff;
                  uVar25 = (uVar25 << 4 | uVar25) & 0xf0f0f0f;
                  uVar25 = (uVar25 * 4 | uVar25) & 0x33333333;
                  uVar25 = (uVar25 * 2 | uVar25 * 4) & 0xaaaaaaaa |
                           (uVar24 * 2 | uVar24) & 0x55555555;
                  lVar36 = *(longlong *)(local_10f0 + 0x90);
                  if (*(longlong *)(local_10f0 + 0x90) == 0) {
                    lVar36 = lVar20;
                  }
                  uVar28 = *(uint *)(lVar36 + (ulonglong)(*(int *)(local_10f0 + 0x98) - 1U & uVar25)
                                              * 4);
                  if (uVar28 != 0xffffffff) {
                    do {
                      puVar1 = (uint *)(*(longlong *)(local_10f0 + 0x50) +
                                       (longlong)(int)uVar28 * 0x14);
                      if (*puVar1 == uVar25) {
                        if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) != 0) {
                          uVar8 = local_1098._8_4_;
                          lVar36 = (longlong)(int)local_1098._8_4_;
                          uVar25 = local_1098._8_4_ + 1;
                          local_1098._8_4_ = uVar25;
                          if ((uint)local_1098._12_4_ < uVar25) {
                            FUN_146dedd8c(local_1098,uVar8);
                            param_3 = local_10f8;
                            uVar33 = local_10e0;
                            uVar34 = local_10d8;
                          }
                          *(uint *)(local_1098._0_8_ + lVar36 * 8) = puVar1[1];
                          *(uint *)(local_1098._0_8_ + 4 + lVar36 * 8) = puVar1[2];
                        }
                        break;
                      }
                      uVar28 = puVar1[3];
                    } while (uVar28 != 0xffffffff);
                  }
                }
                lVar36 = local_10f0;
                bVar37 = uVar32 != uVar35;
                uVar32 = uVar32 + 1;
              } while (bVar37);
              bVar37 = uVar31 != uVar33;
              uVar31 = uVar31 + 1;
            } while (bVar37);
            bVar37 = false;
            iVar19 = 0;
            do {
              if (bVar37) {
LAB_1436133f5:
                bVar37 = true;
                if (iVar19 < *(int *)(lVar36 + 0xb8)) {
                  iVar23 = *(int *)(*(longlong *)(lVar36 + 0xb0) + (longlong)iVar19 * 4);
                  iVar19 = iVar19 + 1;
                  bVar37 = true;
                  bVar11 = false;
                  goto LAB_143613480;
                }
                bVar11 = true;
              }
              else {
                if ((longlong)(int)local_1098._8_4_ == 0) goto LAB_1436133f5;
                iVar23 = 0x7fffffff;
                bVar37 = true;
                lVar20 = 0;
                do {
                  if (0 < *(int *)(local_1098._0_8_ + 4 + lVar20)) {
                    iVar9 = *(int *)(*(longlong *)(lVar36 + 0xa0) +
                                    (longlong)*(int *)(local_1098._0_8_ + lVar20) * 4);
                    bVar11 = iVar23 <= iVar9;
                    if (iVar9 < iVar23) {
                      iVar23 = iVar9;
                    }
                    bVar37 = (bool)(bVar37 & bVar11);
                  }
                  lVar20 = lVar20 + 8;
                } while ((longlong)(int)local_1098._8_4_ * 8 != lVar20);
                param_3 = local_10f8;
                if (bVar37) goto LAB_1436133f5;
                if ((longlong)(int)local_1098._8_4_ != 0) {
                  lVar20 = 0;
                  do {
                    iVar9 = *(int *)(local_1098._0_8_ + 4 + lVar20);
                    if ((0 < iVar9) &&
                       (*(int *)(*(longlong *)(lVar36 + 0xa0) +
                                (longlong)*(int *)(local_1098._0_8_ + lVar20) * 4) == iVar23)) {
                      *(int *)(local_1098._0_8_ + lVar20) = *(int *)(local_1098._0_8_ + lVar20) + 1;
                      *(int *)(local_1098._0_8_ + 4 + lVar20) = iVar9 + -1;
                    }
                    lVar20 = lVar20 + 8;
                  } while ((longlong)(int)local_1098._8_4_ * 8 != lVar20);
                }
                bVar11 = *(int *)(lVar36 + 0xb8) <= iVar19;
                bVar37 = false;
LAB_143613480:
                lVar20 = *(longlong *)(lVar36 + 0x30);
                lVar21 = (longlong)iVar23 * 0x40;
                local_1088[2] = *(double *)(lVar20 + 0x20 + lVar21);
                pdVar22 = (double *)(lVar20 + 0x10 + lVar21);
                local_1088[0] = *pdVar22;
                local_1088[1] = pdVar22[1];
                local_1088[5] = *(double *)(lVar20 + 0x38 + lVar21);
                pdVar22 = (double *)(lVar20 + 0x28 + lVar21);
                local_1088[3] = *pdVar22;
                local_1088[4] = pdVar22[1];
                lVar26 = 0;
                do {
                  if ((local_1088[lVar26 + 3] <= param_2[lVar26] &&
                       param_2[lVar26] != local_1088[lVar26 + 3]) ||
                     (param_2[lVar26 + 3] <= local_1088[lVar26] &&
                      local_1088[lVar26] != param_2[lVar26 + 3])) goto LAB_143613516;
                  lVar26 = lVar26 + 1;
                } while (lVar26 != 3);
                local_10c8[0] = *(double *)(lVar20 + lVar21);
                local_10c8[1] = ((double *)(lVar20 + lVar21))[1];
                plVar10 = (longlong *)*param_3;
                iVar23 = (int)plVar10[1];
                *(uint *)(plVar10 + 1) = iVar23 + 1U;
                if (*(uint *)((longlong)plVar10 + 0xc) < iVar23 + 1U) {
                  FUN_147c5e574(plVar10,iVar23);
                  param_3 = local_10f8;
                }
                auVar17._8_8_ = local_10c8[1];
                auVar17._0_8_ = local_10c8[0];
                *(undefined1 (*) [16])(*plVar10 + (longlong)iVar23 * 0x10) = auVar17;
              }
LAB_143613516:
            } while ((!bVar37) || (!bVar11));
            lVar20 = local_10f0;
            if (local_1098._0_8_ != 0) {
              FUN_1400020a8();
              param_3 = local_10f8;
              lVar20 = local_10f0;
            }
            goto LAB_143612c07;
          }
        }
      }
      pdVar22 = *(double **)(local_10f0 + 0x30);
      pdVar30 = pdVar22 + (longlong)*(int *)(local_10f0 + 0x38) * 8;
      do {
        local_1088[2] = pdVar22[4];
        local_1088[0] = pdVar22[2];
        local_1088[1] = pdVar22[3];
        local_1088[5] = pdVar22[7];
        local_1088[3] = pdVar22[5];
        local_1088[4] = pdVar22[6];
        lVar36 = 0;
        do {
          if ((local_1088[lVar36 + 3] <= param_2[lVar36] &&
               param_2[lVar36] != local_1088[lVar36 + 3]) ||
             (param_2[lVar36 + 3] <= local_1088[lVar36] && local_1088[lVar36] != param_2[lVar36 + 3]
             )) goto LAB_1436135d8;
          lVar36 = lVar36 + 1;
        } while (lVar36 != 3);
        local_10c8[0] = *pdVar22;
        local_10c8[1] = pdVar22[1];
        plVar10 = (longlong *)*param_3;
        iVar19 = (int)plVar10[1];
        *(uint *)(plVar10 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar10 + 0xc) < iVar19 + 1U) {
          FUN_147c5e574(plVar10,iVar19);
          param_3 = local_10f8;
        }
        auVar18._8_8_ = local_10c8[1];
        auVar18._0_8_ = local_10c8[0];
        *(undefined1 (*) [16])(*plVar10 + (longlong)iVar19 * 0x10) = auVar18;
LAB_1436135d8:
        pdVar22 = pdVar22 + 8;
      } while (pdVar22 != pdVar30);
    }
  }
  else {
    FUN_143612ab8(*(longlong *)(local_10f0 + 0xc0),param_2);
    param_3 = local_10f8;
  }
LAB_143612c07:
  local_98 = (double *)0x0;
  local_8c = 0xff;
  if (*(char *)(lVar20 + 0x40) == '\x01') {
    iVar19 = *(int *)(lVar20 + 0x44);
    if (iVar19 == -1) goto LAB_143613071;
  }
  else {
    iVar19 = 0;
    if (*(int *)(lVar20 + 0x18) == 0) goto LAB_143613071;
  }
  local_1088[0] = (double)CONCAT44(local_1088[0]._4_4_,iVar19);
  local_1088[1] = 0.0;
  local_90 = 1;
  do {
    pdVar22 = local_98;
    if (local_98 == (double *)0x0) {
      pdVar22 = local_1088;
    }
    lVar21 = (longlong)(int)local_90;
    local_90 = local_90 - 1;
    lVar36 = *(longlong *)(lVar20 + 0x10) + (longlong)*(int *)(pdVar22 + lVar21 * 2 + -2) * 0x70;
    if ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0x6c +
                  (longlong)*(int *)(pdVar22 + lVar21 * 2 + -2) * 0x70) & 1) == 0) {
      lVar26 = 0;
      lVar21 = 0;
      do {
        uVar24 = local_90;
        local_10c8[2] = (double)*(undefined8 *)(lVar36 + 0x10 + lVar21);
        local_10c8[0] = *(double *)(lVar36 + lVar21);
        local_10c8[1] = ((double *)(lVar36 + lVar21))[1];
        local_10c8[5] = (double)*(undefined8 *)(lVar36 + 0x28 + lVar21);
        puVar2 = (undefined8 *)(lVar36 + 0x18 + lVar21);
        local_10c8[3] = (double)*puVar2;
        local_10c8[4] = (double)puVar2[1];
        lVar38 = 0;
        do {
          if ((local_10c8[lVar38 + 3] <= param_2[lVar38] &&
               param_2[lVar38] != local_10c8[lVar38 + 3]) ||
             (param_2[lVar38 + 3] <= local_10c8[lVar38] && local_10c8[lVar38] != param_2[lVar38 + 3]
             )) goto LAB_14361303f;
          lVar38 = lVar38 + 1;
        } while (lVar38 != 3);
        uVar8 = *(undefined4 *)(lVar36 + 0x60 + lVar26 * 4);
        lVar38 = (longlong)(int)local_90;
        local_90 = local_90 + 1;
        if (local_8c < local_90) {
          FUN_14361361e(local_1088,uVar24);
          param_3 = local_10f8;
        }
        pdVar22 = local_98;
        if (local_98 == (double *)0x0) {
          pdVar22 = local_1088;
        }
        *(undefined4 *)(pdVar22 + lVar38 * 2) = uVar8;
        pdVar22[lVar38 * 2 + 1] = 0.0;
LAB_14361303f:
        lVar26 = lVar26 + 1;
        lVar21 = lVar21 + 0x30;
      } while (lVar21 != 0x60);
    }
    else {
      lVar36 = *(longlong *)(lVar20 + 0x20) + (longlong)*(int *)(lVar36 + 0x60) * 0x48;
      uVar24 = *(uint *)(lVar36 + 0x38);
      local_10e0 = (ulonglong)uVar24;
      local_10e4 = uVar24 + 3;
      if (-1 < (int)uVar24) {
        local_10e4 = uVar24;
      }
      local_10e4 = (int)local_10e4 >> 2;
      if (3 < (int)uVar24) {
        local_10d8 = (ulonglong)local_10e4;
        lVar20 = 0;
        uVar32 = 0;
        local_10d0 = lVar36;
        do {
          lVar21 = *(longlong *)(lVar36 + 0x30);
          lVar26 = uVar32 * 0x100;
          dVar3 = param_2[3];
          dVar4 = param_2[3];
          auVar39._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0x68 + lVar26) < *param_2);
          auVar39._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0x28 + lVar26) < *param_2);
          lVar38 = -(ulonglong)(dVar4 < *(double *)(lVar21 + 0x50 + lVar26));
          auVar50._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar21 + 0xd0 + lVar26));
          auVar50._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar21 + 0x90 + lVar26));
          dVar5 = param_2[1];
          dVar4 = param_2[1];
          auVar47._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0x70 + lVar26) < dVar4);
          auVar47._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0x30 + lVar26) < dVar5);
          auVar52._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0xf0 + lVar26) < dVar4);
          auVar52._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0xb0 + lVar26) < dVar5);
          dVar5 = param_2[4];
          dVar4 = param_2[4];
          auVar12._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0xe8 + lVar26) < *param_2);
          auVar12._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0xa8 + lVar26) < *param_2);
          auVar40._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar21 + 0xd8 + lVar26));
          auVar40._0_8_ = -(ulonglong)(dVar5 < *(double *)(lVar21 + 0x98 + lVar26));
          dVar6 = param_2[2];
          dVar7 = param_2[2];
          auVar42._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0x78 + lVar26) < dVar7);
          auVar42._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0x38 + lVar26) < dVar6);
          auVar14._8_4_ = (int)lVar38;
          auVar14._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar21 + 0x10 + lVar26));
          auVar14._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
          auVar48._8_8_ = -(ulonglong)(*(double *)(lVar21 + 0xf8 + lVar26) < dVar7);
          auVar48._0_8_ = -(ulonglong)(*(double *)(lVar21 + 0xb8 + lVar26) < dVar6);
          dVar7 = param_2[5];
          dVar3 = param_2[5];
          auVar51._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar21 + 0x60 + lVar26));
          auVar51._0_8_ = -(ulonglong)(dVar7 < *(double *)(lVar21 + 0x20 + lVar26));
          auVar13._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar21 + 0x58 + lVar26));
          auVar13._0_8_ = -(ulonglong)(dVar5 < *(double *)(lVar21 + 0x18 + lVar26));
          auVar49._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar21 + 0xe0 + lVar26));
          auVar49._0_8_ = -(ulonglong)(dVar7 < *(double *)(lVar21 + 0xa0 + lVar26));
          iVar19 = movmskpd((int)lVar21,auVar51 | auVar13 | auVar42 | auVar14 | auVar47 | auVar39);
          iVar23 = movmskpd((int)lVar26,auVar49 | auVar40 | auVar48 | auVar50 | auVar52 | auVar12);
          lVar26 = 0;
          lVar21 = lVar20;
          do {
            if (((uint)(iVar19 + iVar23 * 4) >> ((uint)lVar26 & 0x1f) & 1) == 0) {
              pdVar22 = (double *)(*(longlong *)(lVar36 + 0x30) + lVar21);
              local_10c8[0] = *pdVar22;
              local_10c8[1] = pdVar22[1];
              plVar10 = (longlong *)*param_3;
              iVar9 = (int)plVar10[1];
              *(uint *)(plVar10 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar10 + 0xc) < iVar9 + 1U) {
                FUN_147c5e574(plVar10,iVar9);
                lVar36 = local_10d0;
                param_3 = local_10f8;
              }
              auVar15._8_8_ = local_10c8[1];
              auVar15._0_8_ = local_10c8[0];
              *(undefined1 (*) [16])(*plVar10 + (longlong)iVar9 * 0x10) = auVar15;
            }
            lVar26 = lVar26 + 1;
            lVar21 = lVar21 + 0x40;
          } while (lVar26 != 4);
          uVar32 = uVar32 + 1;
          lVar20 = lVar20 + 0x100;
        } while (uVar32 != local_10d8);
      }
      lVar20 = local_10f0;
      if ((int)(local_10e4 * 4) < (int)local_10e0) {
        lVar21 = (longlong)(int)(local_10e4 * 4);
        uVar32 = lVar21 << 6 | 0x28;
        do {
          pdVar22 = (double *)(lVar21 * 0x40 + *(longlong *)(lVar36 + 0x30));
          lVar26 = *(longlong *)(lVar36 + 0x30) + uVar32;
          lVar38 = -3;
          do {
            dVar4 = *(double *)(lVar26 + lVar38 * 8);
            if ((param_2[lVar38 + 6] <= dVar4 && dVar4 != param_2[lVar38 + 6]) ||
               (pdVar30 = (double *)(lVar26 + 0x18 + lVar38 * 8),
               *pdVar30 <= param_2[lVar38 + 3] && param_2[lVar38 + 3] != *pdVar30))
            goto LAB_143612f66;
            lVar38 = lVar38 + 1;
          } while (lVar38 != 0);
          local_10c8[0] = *pdVar22;
          local_10c8[1] = pdVar22[1];
          plVar10 = (longlong *)*param_3;
          iVar19 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar19 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar19 + 1U) {
            FUN_147c5e574(plVar10,iVar19);
            param_3 = local_10f8;
          }
          auVar16._8_8_ = local_10c8[1];
          auVar16._0_8_ = local_10c8[0];
          *(undefined1 (*) [16])(*plVar10 + (longlong)iVar19 * 0x10) = auVar16;
LAB_143612f66:
          lVar21 = lVar21 + 1;
          uVar32 = uVar32 + 0x40;
        } while ((int)local_10e0 != (int)lVar21);
      }
    }
  } while (local_90 != 0);
  if (local_98 != (double *)0x0) {
    FUN_1400020a8();
  }
LAB_143613071:
  if ((local_80 ^ (ulonglong)auStack_1118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361361e FUN_14361361e body=427 status=ok
// SIG undefined FUN_14361361e(void)

void FUN_14361361e(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xff8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x100) {
    *(undefined4 *)((longlong)param_1 + 0xffc) = 0xff;
LAB_14361364a:
    if (*(void **)((longlong)param_1 + 0xff0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xff0),(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (0xff < *(uint *)((longlong)param_1 + 0xffc)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xffc) = 0x7fffffff;
      uVar4 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xffc) = uVar3;
      if (uVar3 < 0x100) goto LAB_14361364a;
    }
    if (*(longlong *)((longlong)param_1 + 0xff0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xff0,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,uVar4,0x10);
  return;
}



// FUNCTION 1436137ca FUN_1436137ca body=5487 status=ok
// SIG undefined FUN_1436137ca(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1436137ca(longlong param_1,double *param_2,undefined8 *param_3,longlong param_4,
                       undefined8 param_5,double *param_6,undefined1 (*param_7) [16],double *param_8
                       ,longlong param_9)

{
  double *pdVar1;
  uint *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  char cVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  longlong lVar34;
  longlong *plVar35;
  double **ppdVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 *puVar39;
  ulonglong uVar40;
  bool bVar41;
  longlong lVar42;
  undefined8 *puVar43;
  uint uVar44;
  int iVar45;
  longlong lVar46;
  longlong lVar47;
  uint uVar48;
  bool bVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  ulonglong uVar74;
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
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined8 uVar95;
  double dVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined4 uVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined4 uVar123;
  double dVar124;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined4 uVar132;
  undefined4 uVar133;
  double *pdVar134;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auStack_1248 [32];
  undefined8 local_1228;
  double *local_1220;
  undefined1 (*local_1218) [16];
  double *local_1210;
  longlong local_1208;
  longlong local_1200;
  undefined1 local_11f8 [16];
  undefined1 local_11e8 [16];
  undefined1 local_11d8 [16];
  longlong local_11c8;
  longlong local_11c0;
  longlong local_11b8;
  longlong local_11b0;
  undefined1 local_11a8 [16];
  double local_1198;
  undefined8 uStack_1190;
  undefined8 local_1180 [9];
  double local_1138 [4];
  uint *local_1118;
  undefined8 uStack_1110;
  double local_1108;
  double *local_10f8 [4];
  undefined8 local_10d8;
  longlong local_10d0;
  undefined1 (*local_10c8) [16];
  double *local_10c0;
  undefined8 *local_10b8;
  double **local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1248;
  local_1138[3] = 0.0;
  local_1200 = param_1;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar43 = *(undefined8 **)(param_1 + 0x108);
    puVar39 = puVar43 + (longlong)*(int *)(param_1 + 0x110) * 8;
    do {
      local_10f8[0] = (double *)*puVar43;
      local_10f8[1] = (double *)puVar43[1];
      cVar30 = (**(code **)(*(longlong *)*param_6 + 0x30))((longlong *)*param_6,local_10f8);
      if (cVar30 == '\0') {
        lVar32 = (**(code **)(*(longlong *)*param_6 + 0x20))();
        if (lVar32 == 0) {
          (**(code **)(*(longlong *)*param_6 + 0x28))();
        }
        local_1138[0] = *param_8;
        local_1138[1] = param_8[1];
        local_1138[2] = param_8[2];
        local_10f8[0] = (double *)((double)puVar43[2] - *param_2);
        local_10f8[1] = (double *)((double)puVar43[3] - param_2[1]);
        local_10f8[2] = (double *)((double)puVar43[4] - param_2[2]);
        local_1118 = (uint *)((double)puVar43[5] - *param_2);
        uStack_1110 = (double)puVar43[6] - param_2[1];
        local_1108 = (double)puVar43[7] - param_2[2];
        auVar64 = ZEXT816(0);
        lVar32 = 0;
        dVar73 = 1.79769313486232e+308;
        do {
          if (*(char *)(param_9 + lVar32) == '\x01') {
            if (0.0 < (double)local_10f8[lVar32]) goto LAB_1436138d7;
            dVar124 = 0.0;
            dVar96 = 1.79769313486232e+308;
            if ((double)(&local_1118)[lVar32] <= 0.0 && (double)(&local_1118)[lVar32] != 0.0)
            goto LAB_1436138d7;
          }
          else {
            dVar124 = (double)local_10f8[lVar32] * local_1138[lVar32];
            dVar96 = local_1138[lVar32] * (double)(&local_1118)[lVar32];
          }
          dVar63 = dVar96;
          if (dVar124 <= dVar96) {
            dVar63 = dVar124;
          }
          if (auVar64._0_8_ <= dVar63) {
            auVar64._0_8_ = dVar63;
          }
          if (dVar124 <= dVar96) {
            dVar124 = dVar96;
          }
          if (dVar124 <= dVar73) {
            dVar73 = dVar124;
          }
          dVar124 = auVar64._0_8_;
          if (dVar73 < dVar124) goto LAB_1436138d7;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 3);
        if ((dVar124 <= (double)param_3[4]) && (0.0 <= dVar73)) {
          local_10f8[0] = (double *)*puVar43;
          local_10f8[1] = (double *)puVar43[1];
          local_1138[3] = dVar124;
          cVar30 = (**(code **)(*(longlong *)*param_6 + 0x10))
                             ((longlong *)*param_6,local_10f8,param_3);
          if (cVar30 == '\0') goto LAB_143613ac4;
        }
      }
LAB_1436138d7:
      puVar43 = puVar43 + 8;
    } while (puVar43 != puVar39);
  }
  lVar32 = local_1200;
  if (*(longlong *)(local_1200 + 0xc0) == 0) {
    local_10f8[0] = param_6;
    local_10f8[1] = param_2;
    local_10f8[2] = (double *)param_3;
    local_10f8[3] = local_1138 + 3;
    local_10d8 = param_5;
    local_10d0 = param_4;
    local_10c8 = param_7;
    local_10c0 = param_8;
    local_10b8 = &param_9;
    if (0 < (int)*(uint *)(local_1200 + 0x38)) {
      dVar73 = *(double *)(local_1200 + 200);
      if ((((0.0 < dVar73) && (0 < (longlong)*(int *)(local_1200 + 0xd8))) &&
          (0 < *(int *)(local_1200 + 0xdc))) && (0 < *(int *)(local_1200 + 0xe0))) {
        if (*(int *)(local_1200 + 0x84) < *(int *)(local_1200 + 0x58)) {
          dVar124 = *(double *)(local_1200 + 0xd0);
          if (((dVar124 != 0.0) || (NAN(dVar124))) &&
             (dVar96 = (double)param_3[4], dVar96 <= 1.8446744073709552e+19)) {
            dVar63 = *param_2;
            uVar122 = 0;
            uVar123 = 0;
            dVar53 = param_2[1];
            uVar120 = 0;
            uVar121 = 0;
            uVar40 = DAT_149931180;
            dVar97 = (double)((ulonglong)param_2[2] & uVar40);
            dVar86 = (double)((ulonglong)dVar63 & uVar40);
            if ((double)((ulonglong)dVar63 & uVar40) <= (double)((ulonglong)dVar53 & uVar40)) {
              dVar86 = (double)((ulonglong)dVar53 & uVar40);
            }
            if (dVar86 <= dVar97) {
              dVar86 = dVar97;
            }
            if (dVar86 < 9.223372036854776e+18 / dVar124) {
              pdVar1 = (double *)*param_3;
              dVar50 = pdVar1[1] * dVar96 + dVar53;
              dVar51 = *pdVar1 * dVar96 + dVar63;
              dVar97 = (double)((ulonglong)(param_2[2] + pdVar1[2] * dVar96) & uVar40);
              dVar52 = (double)((ulonglong)dVar50 & uVar40);
              dVar86 = (double)((ulonglong)dVar51 & uVar40);
              uVar132 = SUB84(dVar86,0);
              uVar133 = (undefined4)((ulonglong)dVar86 >> 0x20);
              if (dVar86 <= dVar52) {
                uVar132 = SUB84(dVar52,0);
                uVar133 = (undefined4)((ulonglong)dVar52 >> 0x20);
              }
              if ((double)CONCAT44(uVar133,uVar132) <= dVar97) {
                uVar132 = SUB84(dVar97,0);
                uVar133 = (undefined4)((ulonglong)dVar97 >> 0x20);
              }
              if ((double)CONCAT44(uVar133,uVar132) < 9.223372036854776e+18 / dVar124) {
                auVar112._8_8_ = 0;
                auVar112._0_8_ =
                     (double)((ulonglong)(dVar124 * dVar63) & uVar40) * 2.220446049250313e-16 +
                     dVar124 * dVar63;
                auVar64 = roundpd(auVar112,auVar112,1);
                lVar38 = (longlong)auVar64._0_8_;
                auVar89._8_8_ = 0;
                auVar89._0_8_ =
                     (double)((ulonglong)(dVar124 * dVar53) & uVar40) * 2.220446049250313e-16 +
                     dVar124 * dVar53;
                auVar64 = roundpd(auVar89,auVar89,1);
                lVar42 = (longlong)auVar64._0_8_;
                dVar51 = dVar51 * dVar124;
                auVar77._8_8_ = 0;
                auVar77._0_8_ =
                     (double)((ulonglong)dVar51 & uVar40) * 2.220446049250313e-16 + dVar51;
                auVar77 = roundpd(auVar77,auVar77,1);
                dVar50 = dVar50 * dVar124;
                auVar75._8_8_ = 0;
                auVar75._0_8_ =
                     (double)((ulonglong)dVar50 & uVar40) * 2.220446049250313e-16 + dVar50;
                auVar64 = roundpd(auVar75,auVar75,1);
                lVar46 = lVar38 - (longlong)auVar77._0_8_;
                lVar34 = -lVar46;
                if (lVar34 < 0) {
                  lVar34 = lVar46;
                }
                lVar47 = lVar42 - (longlong)auVar64._0_8_;
                lVar46 = -lVar47;
                if (lVar46 < 0) {
                  lVar46 = lVar47;
                }
                if ((ulonglong)(lVar46 + lVar34) <= (ulonglong)(longlong)*(int *)(local_1200 + 0xd8)
                   ) {
                  dVar53 = dVar53 - (double)lVar42 * dVar73;
                  dVar63 = dVar63 - (double)lVar38 * dVar73;
                  local_1118 = (uint *)0x0;
                  uStack_1110 = 0.0;
                  dVar97 = dVar96 * pdVar1[1] + dVar53;
                  dVar86 = *pdVar1 * dVar96 + dVar63;
                  dVar51 = dVar86 - dVar63;
                  dVar50 = dVar97 - dVar53;
                  dVar96 = (double)((ulonglong)dVar51 & uVar40);
                  dVar52 = (double)((ulonglong)dVar50 & uVar40);
                  if ((9.99999993922529e-09 < dVar96) || (9.99999993922529e-09 < dVar52)) {
                    dVar86 = ((double)lVar38 * dVar73 + dVar86) * dVar124;
                    auVar83._0_8_ =
                         (double)((ulonglong)dVar86 & uVar40) * 2.220446049250313e-16 + dVar86;
                    auVar83._8_8_ = 0;
                    auVar75 = roundpd(auVar83,auVar83,1);
                    dVar124 = ((double)lVar42 * dVar73 + dVar97) * dVar124;
                    auVar136._8_8_ = 0;
                    auVar136._0_8_ =
                         (double)(uVar40 & (ulonglong)dVar124) * 2.220446049250313e-16 + dVar124;
                    auVar64 = roundpd(auVar136,auVar136,1);
                    uVar48 = -(uint)(dVar51 < 0.0) | 1;
                    uVar31 = -(uint)(dVar50 < 0.0) | 1;
                    if (dVar52 <= dVar96) {
                      dVar124 = (double)(int)uVar48;
                      dVar86 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar52) &
                                        (ulonglong)((dVar51 * dVar124) / dVar50) |
                                       ~-(ulonglong)(9.99999993922529e-09 < dVar52) &
                                       0x3ff0000000000000);
                    }
                    else {
                      dVar86 = (double)(int)uVar31;
                      dVar124 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar96) &
                                         (ulonglong)((dVar50 * dVar86) / dVar51) |
                                        ~-(ulonglong)(9.99999993922529e-09 < dVar96) &
                                        0x3ff0000000000000);
                    }
                    uVar95 = 0;
                    auVar84._8_8_ = 0;
                    auVar84._0_8_ = dVar124;
                    local_11e8._0_8_ = local_1200 + 0x88;
                    local_11b0 = -(lVar38 + -1 + (ulonglong)(dVar51 < 0.0));
                    local_11b8 = -(lVar42 + -1 + (ulonglong)(dVar50 < 0.0));
                    lVar34 = (longlong)(int)uVar31;
                    unaff_XMM15._0_8_ = 1.0 / dVar124;
                    unaff_XMM15._8_8_ = 0;
                    dVar124 = 1.0 / dVar86;
                    local_11d8._0_8_ = (longlong)(int)uVar48;
                    local_11f8._0_8_ = (longlong)auVar75._0_8_ * (longlong)(int)uVar48;
                    lVar32 = (longlong)auVar64._0_8_ * lVar34;
                    do {
                      if (*(int *)(local_1200 + 0x58) != *(int *)(local_1200 + 0x84)) {
                        uVar31 = ((uint)lVar38 & 0xff00) << 8 | (uint)lVar38 & 0xff;
                        uVar31 = (uVar31 << 4 | uVar31) & 0xf0f0f0f;
                        uVar48 = (uVar31 * 4 | uVar31) & 0x33333333;
                        uVar31 = ((uint)lVar42 & 0xff00) << 8 | (uint)lVar42 & 0xff;
                        uVar31 = (uVar31 << 4 | uVar31) & 0xf0f0f0f;
                        uVar31 = (uVar31 * 4 | uVar31) & 0x33333333;
                        uVar31 = (uVar31 * 2 | uVar31 * 4) & 0xaaaaaaaa |
                                 (uVar48 * 2 | uVar48) & 0x55555555;
                        lVar46 = *(longlong *)(local_1200 + 0x90);
                        if (*(longlong *)(local_1200 + 0x90) == 0) {
                          lVar46 = local_11e8._0_8_;
                        }
                        uVar48 = *(uint *)(lVar46 + (ulonglong)
                                                    (*(int *)(local_1200 + 0x98) - 1U & uVar31) * 4)
                        ;
                        if (uVar48 != 0xffffffff) {
                          do {
                            puVar2 = (uint *)(*(longlong *)(local_1200 + 0x50) +
                                             (longlong)(int)uVar48 * 0x14);
                            if (*puVar2 == uVar31) {
                              if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffffb) != 0) {
                                lVar46 = (longlong)(int)uStack_1110;
                                uVar31 = (int)uStack_1110 + 1;
                                uStack_1110 = (double)CONCAT44(uStack_1110._4_4_,uVar31);
                                if (uStack_1110._4_4_ < uVar31) {
                                  local_11c8 = lVar46;
                                  local_11c0 = lVar32;
                                  local_11a8 = auVar84;
                                  local_1198 = dVar86;
                                  uStack_1190 = uVar95;
                                  FUN_146dedd8c(&local_1118,lVar46);
                                  lVar46 = local_11c8;
                                  lVar32 = local_11c0;
                                  auVar84 = local_11a8;
                                  dVar86 = local_1198;
                                  uVar95 = uStack_1190;
                                }
                                local_1118[lVar46 * 2] = puVar2[1];
                                local_1118[lVar46 * 2 + 1] = puVar2[2];
                              }
                              break;
                            }
                            uVar48 = puVar2[3];
                          } while (uVar48 != 0xffffffff);
                        }
                      }
                      dVar97 = 1.79769313486232e+308;
                      if (9.99999993922529e-09 < dVar96) {
                        dVar97 = ((double)(local_11b0 + lVar38) * dVar73 - dVar63) * auVar84._0_8_;
                      }
                      dVar50 = 1.79769313486232e+308;
                      if (9.99999993922529e-09 < dVar52) {
                        dVar50 = ((double)(local_11b8 + lVar42) * dVar73 - dVar53) * dVar86;
                      }
                      lVar46 = 0;
                      if (dVar50 < dVar97) {
                        lVar46 = lVar34;
                      }
                      lVar47 = local_11d8._0_8_;
                      if (dVar50 < dVar97) {
                        lVar47 = 0;
                      }
                      lVar38 = lVar38 + lVar47;
                      if (lVar38 * local_11d8._0_8_ - local_11f8._0_8_ != 0 &&
                          (longlong)local_11f8._0_8_ <= lVar38 * local_11d8._0_8_) break;
                      lVar42 = lVar42 + lVar46;
                      dVar97 = (double)(~-(ulonglong)(dVar50 < dVar97) & (ulonglong)dVar97 |
                                       (ulonglong)dVar50 & -(ulonglong)(dVar50 < dVar97));
                      auVar61._0_8_ =
                           (ulonglong)(dVar97 * unaff_XMM15._0_8_ + dVar63) &
                           -(ulonglong)(9.99999993922529e-09 < dVar96);
                      auVar61._8_8_ = 0;
                      auVar72._0_8_ =
                           ~-(ulonglong)(9.99999993922529e-09 < dVar96) & (ulonglong)dVar63;
                      auVar72._12_4_ = uVar123;
                      auVar72._8_4_ = uVar122;
                      auVar72 = auVar72 | auVar61;
                      auVar85._0_8_ =
                           (ulonglong)(dVar97 * dVar124 + dVar53) &
                           -(ulonglong)(9.99999993922529e-09 < dVar52);
                      auVar85._8_8_ = 0;
                      auVar62._0_8_ =
                           ~-(ulonglong)(9.99999993922529e-09 < dVar52) & (ulonglong)dVar53;
                      auVar62._12_4_ = uVar121;
                      auVar62._8_4_ = uVar120;
                      auVar62 = auVar62 | auVar85;
                      dVar53 = auVar62._0_8_;
                      uVar120 = auVar62._8_4_;
                      uVar121 = auVar62._12_4_;
                      dVar63 = auVar72._0_8_;
                      uVar122 = auVar72._8_4_;
                      uVar123 = auVar72._12_4_;
                    } while (lVar42 * lVar34 - lVar32 == 0 || lVar42 * lVar34 < lVar32);
                  }
                  else if (*(int *)(local_1200 + 0x58) != *(int *)(local_1200 + 0x84)) {
                    uVar31 = ((uint)lVar38 & 0xff00) << 8 | (uint)lVar38 & 0xff;
                    uVar31 = (uVar31 << 4 | uVar31) & 0xf0f0f0f;
                    uVar48 = (uVar31 * 4 | uVar31) & 0x33333333;
                    uVar31 = ((uint)lVar42 & 0xff00) << 8 | (uint)lVar42 & 0xff;
                    uVar31 = (uVar31 << 4 | uVar31) & 0xf0f0f0f;
                    uVar31 = (uVar31 * 4 | uVar31) & 0x33333333;
                    uVar31 = (uVar31 * 2 | uVar31 * 4) & 0xaaaaaaaa |
                             (uVar48 * 2 | uVar48) & 0x55555555;
                    lVar32 = local_1200 + 0x88;
                    if (*(longlong *)(local_1200 + 0x90) != 0) {
                      lVar32 = *(longlong *)(local_1200 + 0x90);
                    }
                    uVar48 = *(uint *)(lVar32 + (ulonglong)
                                                (*(int *)(local_1200 + 0x98) - 1U & uVar31) * 4);
                    if (uVar48 != 0xffffffff) {
                      do {
                        puVar2 = (uint *)(*(longlong *)(local_1200 + 0x50) +
                                         (longlong)(int)uVar48 * 0x14);
                        if (*puVar2 == uVar31) {
                          if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffffb) != 0) {
                            uStack_1110 = 4.94065645841247e-324;
                            FUN_146dedd8c(&local_1118,0);
                            *local_1118 = puVar2[1];
                            local_1118[1] = puVar2[2];
                          }
                          break;
                        }
                        uVar48 = puVar2[3];
                      } while (uVar48 != 0xffffffff);
                    }
                  }
                  ppdVar36 = local_10f8;
                  puVar43 = local_1180;
                  for (lVar32 = 9; lVar32 != 0; lVar32 = lVar32 + -1) {
                    *puVar43 = *ppdVar36;
                    ppdVar36 = ppdVar36 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  bVar41 = false;
                  uVar40 = 0;
                  do {
                    iVar33 = (int)uVar40;
                    if (bVar41) {
LAB_143614c2f:
                      bVar41 = true;
                      if (iVar33 < *(int *)(local_1200 + 0xb8)) {
                        iVar45 = *(int *)(*(longlong *)(local_1200 + 0xb0) + (longlong)iVar33 * 4);
                        uVar40 = (ulonglong)(iVar33 + 1);
                        bVar41 = true;
                        bVar7 = false;
                        goto LAB_143614cb9;
                      }
                      bVar7 = true;
                    }
                    else {
                      if ((longlong)(int)uStack_1110 == 0) goto LAB_143614c2f;
                      iVar45 = 0x7fffffff;
                      bVar41 = true;
                      lVar32 = 0;
                      do {
                        if (0 < *(int *)((longlong)local_1118 + lVar32 + 4)) {
                          iVar6 = *(int *)(*(longlong *)(local_1200 + 0xa0) +
                                          (longlong)*(int *)((longlong)local_1118 + lVar32) * 4);
                          bVar7 = iVar45 <= iVar6;
                          if (iVar6 < iVar45) {
                            iVar45 = iVar6;
                          }
                          bVar41 = (bool)(bVar41 & bVar7);
                        }
                        lVar32 = lVar32 + 8;
                      } while ((longlong)(int)uStack_1110 * 8 != lVar32);
                      if (bVar41) goto LAB_143614c2f;
                      if ((longlong)(int)uStack_1110 != 0) {
                        lVar32 = 0;
                        do {
                          iVar6 = *(int *)((longlong)local_1118 + lVar32 + 4);
                          if ((0 < iVar6) &&
                             (*(int *)(*(longlong *)(local_1200 + 0xa0) +
                                      (longlong)*(int *)((longlong)local_1118 + lVar32) * 4) ==
                              iVar45)) {
                            *(int *)((longlong)local_1118 + lVar32) =
                                 *(int *)((longlong)local_1118 + lVar32) + 1;
                            *(int *)((longlong)local_1118 + lVar32 + 4) = iVar6 + -1;
                          }
                          lVar32 = lVar32 + 8;
                        } while ((longlong)(int)uStack_1110 * 8 != lVar32);
                      }
                      bVar7 = *(int *)(local_1200 + 0xb8) <= iVar33;
                      bVar41 = false;
LAB_143614cb9:
                      cVar30 = FUN_143614d3a(local_1180,
                                             (longlong)iVar45 * 0x40 +
                                             *(longlong *)(local_1200 + 0x30));
                      if (cVar30 == '\0') {
                        param_4 = 0;
                        goto LAB_143614ce9;
                      }
                    }
                  } while ((!bVar41) || (!bVar7));
                  param_4 = CONCAT71((int7)(uVar40 >> 8),1);
LAB_143614ce9:
                  lVar32 = local_1200;
                  if (local_1118 != (uint *)0x0) {
                    FUN_1400020a8();
                  }
                  cVar30 = (char)param_4;
                  goto joined_r0x000143614d03;
                }
              }
            }
          }
        }
      }
      param_4 = *(longlong *)(local_1200 + 0x30);
      lVar34 = (ulonglong)*(uint *)(local_1200 + 0x38) << 6;
      do {
        cVar30 = FUN_143614d3a(local_10f8,param_4);
        if (cVar30 == '\0') goto LAB_143613ac4;
        param_4 = param_4 + 0x40;
        lVar34 = lVar34 + -0x40;
      } while (lVar34 != 0);
    }
  }
  else {
    local_1208 = param_9;
    local_1210 = param_8;
    local_1218 = param_7;
    local_1220 = param_6;
    local_1228 = param_5;
    cVar30 = FUN_1436137ca(*(longlong *)(local_1200 + 0xc0),param_2,param_3,param_4);
joined_r0x000143614d03:
    if (cVar30 == '\0') {
LAB_143613ac4:
      uVar40 = 0;
      goto LAB_1436145ae;
    }
  }
  local_108 = (double **)0x0;
  local_100 = 0xff00000000;
  if (*(char *)(lVar32 + 0x40) == '\x01') {
    iVar33 = *(int *)(lVar32 + 0x44);
    if (iVar33 == -1) goto LAB_143613dd0;
LAB_143613da9:
    local_100 = 0xff00000001;
    local_10f8[0] = (double *)CONCAT44(local_10f8[0]._4_4_,iVar33);
    local_10f8[1] = (double *)0x0;
    uVar31 = 1;
    bVar41 = false;
  }
  else {
    iVar33 = 0;
    if (*(int *)(lVar32 + 0x18) != 0) goto LAB_143613da9;
LAB_143613dd0:
    uVar31 = 0;
    bVar41 = true;
  }
  uVar40 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (!bVar41) {
    dVar86 = *param_2;
    dVar97 = param_2[1];
    dVar73 = param_2[2];
    auVar64 = *param_7;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = *(double *)param_7[1];
    auVar75 = divpd(_DAT_149934d80,auVar64);
    bVar41 = ABS(auVar64._0_8_) < 1e-08;
    dVar50 = (double)-(ulonglong)bVar41;
    bVar7 = ABS(auVar64._8_8_) < 1e-08;
    dVar52 = (double)-(ulonglong)bVar7;
    dVar51 = (double)-(ulonglong)(ABS(*(double *)param_7[1]) < 1e-08);
    auVar64 = divpd(_DAT_149934d80,auVar54);
    auVar87._8_4_ = 0xffffffff;
    auVar87._0_8_ = 0xffffffffffffffff;
    auVar87._12_4_ = 0xffffffff;
    local_11d8._0_8_ = CONCAT44((float)dVar52,(float)dVar50) ^ 0xffffffffffffffff;
    local_11f8._8_8_ = auVar87._8_8_;
    local_11d8._8_8_ = local_11f8._8_8_;
    uVar74 = ~CONCAT44((float)dVar52,(float)dVar50) &
             CONCAT44((float)auVar75._8_8_,(float)auVar75._0_8_);
    dVar124 = (double)(float)uVar74;
    dVar96 = (double)(float)(uVar74 >> 0x20);
    local_11f8._0_8_ = CONCAT44(0xffc00000,(float)dVar51) ^ 0xffffffffffffffff;
    uVar74 = ~CONCAT44(0xffc00000,(float)dVar51) &
             CONCAT44((float)auVar64._8_8_,(float)auVar64._0_8_);
    dVar63 = (double)(float)uVar74;
    dVar53 = (double)(float)(uVar74 >> 0x20);
    uVar95 = param_3[4];
    uVar3 = param_3[4];
    uVar120 = (undefined4)uVar3;
    uVar121 = (undefined4)((ulonglong)uVar3 >> 0x20);
    do {
      ppdVar36 = local_108;
      if (local_108 == (double **)0x0) {
        ppdVar36 = local_10f8;
      }
      uVar48 = uVar31 - 1;
      local_100 = CONCAT44(local_100._4_4_,uVar48);
      auVar64 = unaff_XMM15;
      if ((double)ppdVar36[(longlong)(int)uVar31 * 2 + -1] < (double)param_3[4] ||
          (double)ppdVar36[(longlong)(int)uVar31 * 2 + -1] == (double)param_3[4]) {
        lVar34 = *(longlong *)(lVar32 + 0x10);
        lVar38 = (longlong)*(int *)(ppdVar36 + (longlong)(int)uVar31 * 2 + -2) * 0x70;
        pdVar1 = (double *)(lVar34 + lVar38);
        if ((*(byte *)(lVar34 + 0x6c + lVar38) & 1) == 0) {
          auVar102._8_8_ = 0;
          auVar102._0_8_ = -(ulonglong)(dVar73 < pdVar1[2] || pdVar1[5] < dVar73);
          auVar114._0_8_ = -(ulonglong)((pdVar1[3] < dVar86 || dVar86 < *pdVar1) && bVar41);
          auVar114._8_8_ = -(ulonglong)((pdVar1[4] < dVar97 || dVar97 < pdVar1[1]) && bVar7);
          uVar37 = movmskpd((int)lVar38,auVar114);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = dVar51;
          auVar11._12_4_ = 0xffffffff;
          iVar33 = movmskpd((int)lVar34,auVar102 & auVar11);
          uVar44 = iVar33 << 2 | uVar37;
          if (uVar44 == 0) {
            uVar74 = CONCAT44((float)((pdVar1[1] - dVar97) * dVar96),
                              (float)((*pdVar1 - dVar86) * dVar124)) & local_11d8._0_8_;
            auVar79._0_8_ = (double)(float)uVar74;
            auVar79._8_8_ = (double)(float)(uVar74 >> 0x20);
            uVar74 = CONCAT44((float)(dVar53 * 0.0),(float)((pdVar1[2] - dVar73) * dVar63)) &
                     local_11f8._0_8_;
            auVar91._0_8_ = (double)(float)uVar74;
            auVar91._8_8_ = (double)(float)(uVar74 >> 0x20);
            auVar66._0_8_ = (pdVar1[3] - dVar86) * dVar124;
            auVar66._8_8_ = (pdVar1[4] - dVar97) * dVar96;
            auVar57._8_8_ = dVar52;
            auVar57._0_8_ = dVar50;
            auVar24._8_4_ = uVar120;
            auVar24._0_8_ = uVar95;
            auVar24._12_4_ = uVar121;
            auVar64 = blendvpd(auVar66,auVar24,auVar57);
            auVar103._0_8_ = (pdVar1[5] - dVar73) * dVar63;
            auVar103._8_8_ = dVar53 * 0.0;
            auVar58._8_8_ = 0xffffffffffffffff;
            auVar58._0_8_ = dVar51;
            auVar25._8_4_ = uVar120;
            auVar25._0_8_ = uVar95;
            auVar25._12_4_ = uVar121;
            auVar77 = blendvpd(auVar103,auVar25,auVar58);
            auVar138._8_8_ = auVar79._8_8_;
            auVar138._0_8_ = auVar79._0_8_;
            auVar89 = minpd(auVar138,auVar64);
            auVar127._8_8_ = auVar91._8_8_;
            auVar127._0_8_ = auVar91._0_8_;
            auVar112 = minpd(auVar127,auVar77);
            auVar75 = maxpd(auVar79,auVar64);
            auVar77 = maxpd(auVar91,auVar77);
            auVar128._0_8_ = auVar112._0_8_;
            auVar67._8_8_ = auVar112._8_8_;
            auVar67._0_8_ = auVar89._0_8_;
            auVar104._8_8_ = auVar128._0_8_;
            auVar104._0_8_ = auVar89._8_8_;
            auVar128._8_8_ = auVar89._0_8_;
            auVar136 = maxpd(auVar89,auVar104);
            auVar64 = maxpd(auVar112,auVar67);
            auVar15._8_4_ = auVar112._8_4_;
            auVar15._0_8_ = auVar89._8_8_;
            auVar15._12_4_ = auVar112._12_4_;
            auVar64 = maxpd(auVar64,auVar15);
            auVar112 = maxpd(auVar136,auVar128);
            auVar92._0_8_ = auVar77._0_8_;
            auVar68._8_8_ = auVar77._8_8_;
            auVar68._0_8_ = auVar75._0_8_;
            auVar105._8_8_ = auVar92._0_8_;
            auVar105._0_8_ = auVar75._8_8_;
            auVar129._8_8_ = auVar77._8_8_;
            auVar129._0_8_ = auVar75._8_8_;
            auVar92._8_8_ = auVar75._0_8_;
            auVar75 = minpd(auVar75,auVar105);
            auVar77 = minpd(auVar77,auVar68);
            auVar77 = minpd(auVar77,auVar129);
            auVar75 = minpd(auVar75,auVar92);
            auVar64 = maxpd(auVar64,ZEXT816(0));
            auVar26._8_4_ = uVar120;
            auVar26._0_8_ = uVar95;
            auVar26._12_4_ = uVar121;
            auVar77 = minpd(auVar77,auVar26);
            auVar115._8_8_ = -(ulonglong)(auVar77._8_8_ < auVar64._8_8_);
            auVar115._0_8_ = -(ulonglong)(auVar77._0_8_ < auVar64._0_8_);
            unaff_XMM15 = maxpd(auVar112,ZEXT816(0));
            auVar27._8_4_ = uVar120;
            auVar27._0_8_ = uVar95;
            auVar27._12_4_ = uVar121;
            auVar64 = minpd(auVar75,auVar27);
            auVar80._8_8_ = -(ulonglong)(auVar64._8_8_ < unaff_XMM15._8_8_);
            auVar80._0_8_ = -(ulonglong)(auVar64._0_8_ < unaff_XMM15._0_8_);
            uVar44 = movmskpd(uVar37,auVar80);
            iVar33 = movmskpd(0,auVar115);
            uVar44 = iVar33 << 2 | uVar44;
            bVar49 = uVar44 == 0;
          }
          else {
            bVar49 = false;
          }
          uVar122 = unaff_XMM15._0_4_;
          uVar123 = unaff_XMM15._4_4_;
          dVar4 = SUB168(*(undefined1 (*) [16])(pdVar1 + 9),0);
          dVar5 = SUB168(*(undefined1 (*) [16])(pdVar1 + 9),8);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = -(ulonglong)(dVar73 < pdVar1[8] || pdVar1[0xb] < dVar73);
          auVar116._0_8_ = -(ulonglong)((dVar4 < dVar86 || dVar86 < pdVar1[6]) && bVar41);
          auVar116._8_8_ = -(ulonglong)((dVar5 < dVar97 || dVar97 < pdVar1[7]) && bVar7);
          iVar33 = movmskpd(uVar44,auVar116);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = dVar51;
          auVar12._12_4_ = 0xffffffff;
          uVar37 = movmskpd(uVar31 * 0x10,auVar106 & auVar12);
          if ((uVar37 & 0x3fffffff) == 0 && iVar33 == 0) {
            auVar69._0_8_ = (dVar4 - dVar86) * dVar124;
            auVar69._8_8_ = (dVar5 - dVar97) * dVar96;
            uVar74 = CONCAT44((float)((pdVar1[7] - dVar97) * dVar96),
                              (float)((pdVar1[6] - dVar86) * dVar124)) & local_11d8._0_8_;
            auVar81._0_8_ = (double)(float)uVar74;
            auVar81._8_8_ = (double)(float)(uVar74 >> 0x20);
            auVar107._0_8_ = (pdVar1[0xb] - dVar73) * dVar63;
            auVar107._8_8_ = dVar53 * 0.0;
            uVar74 = CONCAT44((float)(dVar53 * 0.0),(float)((pdVar1[8] - dVar73) * dVar63)) &
                     local_11f8._0_8_;
            auVar93._0_8_ = (double)(float)uVar74;
            auVar93._8_8_ = (double)(float)(uVar74 >> 0x20);
            auVar59._8_8_ = dVar52;
            auVar59._0_8_ = dVar50;
            auVar20._8_4_ = uVar120;
            auVar20._0_8_ = uVar95;
            auVar20._12_4_ = uVar121;
            auVar64 = blendvpd(auVar69,auVar20,auVar59);
            auVar60._8_8_ = 0xffffffffffffffff;
            auVar60._0_8_ = dVar51;
            auVar21._8_4_ = uVar120;
            auVar21._0_8_ = uVar95;
            auVar21._12_4_ = uVar121;
            auVar77 = blendvpd(auVar107,auVar21,auVar60);
            auVar139._8_8_ = auVar81._8_8_;
            auVar139._0_8_ = auVar81._0_8_;
            auVar89 = minpd(auVar139,auVar64);
            auVar117._8_8_ = auVar93._8_8_;
            auVar117._0_8_ = auVar93._0_8_;
            auVar112 = minpd(auVar117,auVar77);
            auVar75 = maxpd(auVar81,auVar64);
            auVar77 = maxpd(auVar93,auVar77);
            auVar118._0_8_ = auVar112._0_8_;
            auVar70._8_8_ = auVar112._8_8_;
            auVar70._0_8_ = auVar89._0_8_;
            auVar108._8_8_ = auVar118._0_8_;
            auVar108._0_8_ = auVar89._8_8_;
            auVar130._8_8_ = auVar112._8_8_;
            auVar130._0_8_ = auVar89._8_8_;
            auVar118._8_8_ = auVar89._0_8_;
            auVar89 = maxpd(auVar89,auVar108);
            auVar64 = maxpd(auVar112,auVar70);
            auVar64 = maxpd(auVar64,auVar130);
            auVar112 = maxpd(auVar89,auVar118);
            auVar94._0_8_ = auVar77._0_8_;
            auVar71._8_8_ = auVar77._8_8_;
            auVar71._0_8_ = auVar75._0_8_;
            auVar109._8_8_ = auVar94._0_8_;
            auVar109._0_8_ = auVar75._8_8_;
            auVar131._8_8_ = auVar77._8_8_;
            auVar131._0_8_ = auVar75._8_8_;
            auVar94._8_8_ = auVar75._0_8_;
            auVar75 = minpd(auVar75,auVar109);
            auVar77 = minpd(auVar77,auVar71);
            auVar77 = minpd(auVar77,auVar131);
            auVar75 = minpd(auVar75,auVar94);
            auVar64 = maxpd(auVar64,ZEXT816(0));
            auVar22._8_4_ = uVar120;
            auVar22._0_8_ = uVar95;
            auVar22._12_4_ = uVar121;
            auVar77 = minpd(auVar77,auVar22);
            auVar119._8_8_ = -(ulonglong)(auVar77._8_8_ < auVar64._8_8_);
            auVar119._0_8_ = -(ulonglong)(auVar77._0_8_ < auVar64._0_8_);
            auVar64 = maxpd(auVar112,ZEXT816(0));
            auVar23._8_4_ = uVar120;
            auVar23._0_8_ = uVar95;
            auVar23._12_4_ = uVar121;
            auVar75 = minpd(auVar75,auVar23);
            pdVar134 = auVar64._0_8_;
            auVar82._8_8_ = -(ulonglong)(auVar75._8_8_ < auVar64._8_8_);
            auVar82._0_8_ = -(ulonglong)(auVar75._0_8_ < (double)pdVar134);
            iVar45 = movmskpd(0,auVar82);
            iVar33 = movmskpd(iVar33,auVar119);
            local_11e8 = unaff_XMM15;
            if (bVar49 && (iVar33 << 2 == 0 && iVar45 == 0)) {
              local_100._0_4_ = uVar31;
              if ((double)unaff_XMM15._0_8_ < (double)pdVar134) {
                uVar132 = *(undefined4 *)((longlong)pdVar1 + 100);
                if (local_100._4_4_ < uVar31) {
                  FUN_143614f80(local_10f8,uVar48);
                }
                ppdVar36 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar36 = local_10f8;
                }
                *(undefined4 *)(ppdVar36 + (longlong)(int)uVar48 * 2) = uVar132;
                ppdVar36[(longlong)(int)uVar48 * 2 + 1] = pdVar134;
                uVar48 = (uint)local_100;
                uVar40 = (ulonglong)*(uint *)(pdVar1 + 0xc);
                local_100._0_4_ = (uint)local_100 + 1;
                if (local_100._4_4_ < (uint)local_100) goto LAB_1436144c1;
                goto LAB_143614569;
              }
              uVar122 = *(undefined4 *)(pdVar1 + 0xc);
              if (local_100._4_4_ < uVar31) {
                FUN_143614f80(local_10f8,uVar48);
              }
              ppdVar36 = local_108;
              if (local_108 == (double **)0x0) {
                ppdVar36 = local_10f8;
              }
              *(undefined4 *)(ppdVar36 + (longlong)(int)uVar48 * 2) = uVar122;
              ppdVar36[(longlong)(int)uVar48 * 2 + 1] = unaff_XMM15._0_8_;
              uVar48 = (uint)local_100;
              uVar40 = (ulonglong)*(uint *)((longlong)pdVar1 + 100);
              local_100._0_4_ = (uint)local_100 + 1;
              if (local_100._4_4_ < (uint)local_100) {
LAB_143614551:
                FUN_143614f80(local_10f8,uVar48);
              }
            }
            else {
              if (bVar49) goto LAB_1436144aa;
              if (iVar33 << 2 != 0 || iVar45 != 0) goto LAB_143614581;
              uVar40 = (ulonglong)*(uint *)((longlong)pdVar1 + 100);
              local_100 = CONCAT44(local_100._4_4_,uVar31);
              if (local_100._4_4_ < uVar31) goto LAB_143614551;
            }
            uVar122 = auVar64._0_4_;
            uVar123 = auVar64._4_4_;
          }
          else {
            auVar64 = unaff_XMM15;
            if (!bVar49) goto LAB_143614581;
LAB_1436144aa:
            uVar40 = (ulonglong)*(uint *)(pdVar1 + 0xc);
            local_100 = CONCAT44(local_100._4_4_,uVar31);
            if (local_100._4_4_ < uVar31) {
LAB_1436144c1:
              FUN_143614f80(local_10f8,uVar48);
            }
          }
LAB_143614569:
          ppdVar36 = local_108;
          if (local_108 == (double **)0x0) {
            ppdVar36 = local_10f8;
          }
          *(int *)(ppdVar36 + (longlong)(int)uVar48 * 2) = (int)uVar40;
          ppdVar36[(longlong)(int)uVar48 * 2 + 1] = (double *)CONCAT44(uVar123,uVar122);
        }
        else {
          lVar34 = (longlong)*(int *)(pdVar1 + 0xc);
          uVar74 = *(ulonglong *)(lVar32 + 0x20);
          plVar35 = (longlong *)(lVar34 * 9);
          lVar38 = (longlong)*(int *)(uVar74 + 0x38 + lVar34 * 0x48);
          if (lVar38 != 0) {
            lVar34 = *(longlong *)(uVar74 + 0x30 + lVar34 * 0x48);
            uVar40 = 0;
            local_11e8 = unaff_XMM15;
            do {
              dVar4 = *(double *)(lVar34 + 0x20 + uVar40);
              pdVar1 = (double *)(lVar34 + 0x10 + uVar40);
              dVar28 = *pdVar1;
              dVar29 = pdVar1[1];
              dVar5 = *(double *)(lVar34 + 0x38 + uVar40);
              auVar64 = *(undefined1 (*) [16])(lVar34 + 0x28 + uVar40);
              dVar8 = auVar64._0_8_;
              dVar9 = auVar64._8_8_;
              auVar98._8_8_ = 0;
              auVar98._0_8_ = -(ulonglong)(dVar73 < dVar4 || dVar5 < dVar73);
              auVar110._0_8_ = -(ulonglong)((dVar8 < dVar86 || dVar86 < dVar28) && bVar41);
              auVar110._8_8_ = -(ulonglong)((dVar9 < dVar97 || dVar97 < dVar29) && bVar7);
              uVar31 = movmskpd((int)uVar74,auVar110);
              uVar74 = (ulonglong)uVar31;
              auVar10._8_4_ = 0xffffffff;
              auVar10._0_8_ = dVar51;
              auVar10._12_4_ = 0xffffffff;
              iVar33 = movmskpd((int)plVar35,auVar98 & auVar10);
              uVar48 = iVar33 << 2 | uVar31;
              plVar35 = (longlong *)(ulonglong)uVar48;
              if (uVar48 == 0) {
                auVar65._0_8_ = (dVar8 - dVar86) * dVar124;
                auVar65._8_8_ = (dVar9 - dVar97) * dVar96;
                uVar74 = CONCAT44((float)((dVar29 - dVar97) * dVar96),
                                  (float)((dVar28 - dVar86) * dVar124)) & local_11d8._0_8_;
                auVar76._0_8_ = (double)(float)uVar74;
                auVar76._8_8_ = (double)(float)(uVar74 >> 0x20);
                auVar99._0_8_ = (dVar5 - dVar73) * dVar63;
                auVar99._8_8_ = dVar53 * 0.0;
                uVar74 = CONCAT44((float)(dVar53 * 0.0),(float)((dVar4 - dVar73) * dVar63)) &
                         local_11f8._0_8_;
                auVar88._0_8_ = (double)(float)uVar74;
                auVar88._8_8_ = (double)(float)(uVar74 >> 0x20);
                auVar55._8_8_ = dVar52;
                auVar55._0_8_ = dVar50;
                auVar16._8_4_ = uVar120;
                auVar16._0_8_ = uVar95;
                auVar16._12_4_ = uVar121;
                auVar64 = blendvpd(auVar65,auVar16,auVar55);
                auVar56._8_8_ = 0xffffffffffffffff;
                auVar56._0_8_ = dVar51;
                auVar17._8_4_ = uVar120;
                auVar17._0_8_ = uVar95;
                auVar17._12_4_ = uVar121;
                auVar75 = blendvpd(auVar99,auVar17,auVar56);
                auVar111._8_8_ = auVar76._8_8_;
                auVar111._0_8_ = auVar76._0_8_;
                auVar112 = minpd(auVar111,auVar64);
                auVar135._8_8_ = auVar88._8_8_;
                auVar135._0_8_ = auVar88._0_8_;
                auVar136 = minpd(auVar135,auVar75);
                auVar77 = maxpd(auVar76,auVar64);
                auVar89 = maxpd(auVar88,auVar75);
                auVar137._0_8_ = auVar136._0_8_;
                auVar100._8_8_ = auVar136._8_8_;
                auVar100._0_8_ = auVar112._0_8_;
                auVar125._8_8_ = auVar136._8_8_;
                auVar125._0_8_ = auVar112._8_8_;
                auVar137._8_8_ = auVar112._0_8_;
                auVar13._8_4_ = auVar136._0_4_;
                auVar13._0_8_ = auVar112._8_8_;
                auVar13._12_4_ = auVar136._4_4_;
                auVar75 = maxpd(auVar112,auVar13);
                auVar64 = maxpd(auVar136,auVar100);
                auVar64 = maxpd(auVar64,auVar125);
                auVar75 = maxpd(auVar75,auVar137);
                auVar90._0_8_ = auVar89._0_8_;
                auVar101._8_8_ = auVar89._8_8_;
                auVar101._0_8_ = auVar77._0_8_;
                auVar113._8_8_ = auVar90._0_8_;
                auVar113._0_8_ = auVar77._8_8_;
                auVar90._8_8_ = auVar77._0_8_;
                auVar112 = minpd(auVar77,auVar113);
                auVar136 = minpd(auVar89,auVar101);
                auVar14._8_4_ = auVar89._8_4_;
                auVar14._0_8_ = auVar77._8_8_;
                auVar14._12_4_ = auVar89._12_4_;
                auVar89 = minpd(auVar136,auVar14);
                auVar77 = minpd(auVar112,auVar90);
                auVar75 = maxpd(auVar75,ZEXT816(0));
                auVar18._8_4_ = uVar120;
                auVar18._0_8_ = uVar95;
                auVar18._12_4_ = uVar121;
                auVar77 = minpd(auVar77,auVar18);
                auVar78._8_8_ = -(ulonglong)(auVar77._8_8_ < auVar75._8_8_);
                auVar78._0_8_ = -(ulonglong)(auVar77._0_8_ < auVar75._0_8_);
                auVar64 = maxpd(auVar64,ZEXT816(0));
                auVar19._8_4_ = uVar120;
                auVar19._0_8_ = uVar95;
                auVar19._12_4_ = uVar121;
                auVar75 = minpd(auVar89,auVar19);
                auVar126._8_8_ = -(ulonglong)(auVar75._8_8_ < auVar64._8_8_);
                auVar126._0_8_ = -(ulonglong)(auVar75._0_8_ < auVar64._0_8_);
                uVar31 = movmskpd(uVar31,auVar78);
                uVar74 = (ulonglong)uVar31;
                iVar33 = movmskpd(0,auVar126);
                uVar31 = iVar33 << 2 | uVar31;
                plVar35 = (longlong *)(ulonglong)uVar31;
                if (uVar31 == 0) {
                  puVar43 = (undefined8 *)(uVar40 + lVar34);
                  local_1118 = (uint *)*puVar43;
                  uStack_1110 = (double)puVar43[1];
                  plVar35 = (longlong *)*param_6;
                  uVar74 = (**(code **)(*plVar35 + 0x30))(plVar35,&local_1118);
                  if ((char)uVar74 == '\0') {
                    lVar32 = (**(code **)(*(longlong *)*param_6 + 0x20))();
                    if (lVar32 == 0) {
                      (**(code **)(*(longlong *)*param_6 + 0x28))();
                    }
                    local_1118 = (uint *)*puVar43;
                    uStack_1110 = (double)puVar43[1];
                    plVar35 = (longlong *)*param_6;
                    uVar74 = (**(code **)(*plVar35 + 0x10))(plVar35,&local_1118,param_3);
                    if ((char)uVar74 == '\0') {
                      uVar40 = 0;
                      goto LAB_14361459c;
                    }
                  }
                }
              }
              uVar40 = uVar40 + 0x40;
              lVar32 = local_1200;
              auVar64 = local_11e8;
            } while (lVar38 * 0x40 != uVar40);
          }
        }
LAB_143614581:
        uVar48 = (uint)local_100;
      }
      uVar31 = uVar48;
      unaff_XMM15 = auVar64;
    } while (uVar31 != 0);
    uVar40 = CONCAT71((int7)(uVar40 >> 8),1);
  }
LAB_14361459c:
  if (local_108 != (double **)0x0) {
    FUN_1400020a8();
  }
LAB_1436145ae:
  if ((local_f0 ^ (ulonglong)auStack_1248) == DAT_14c707940) {
    return uVar40 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143614d3a FUN_143614d3a body=581 status=ok
// SIG undefined FUN_143614d3a(void)

ulonglong FUN_143614d3a(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  double *pdVar5;
  char cVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_f8 [32];
  double local_d8 [6];
  double local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar9 = param_2[2];
  dVar10 = param_2[3];
  dVar1 = param_2[4];
  dVar11 = param_2[5];
  dVar2 = param_2[6];
  dVar3 = param_2[7];
  puVar4 = (undefined8 *)*param_1;
  local_a8[0] = *param_2;
  local_a8[1] = param_2[1];
  cVar6 = (**(code **)(*(longlong *)*puVar4 + 0x30))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar6 == '\0') {
    lVar7 = (**(code **)(*(longlong *)*puVar4 + 0x20))();
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)*puVar4 + 0x28))();
    }
    pdVar5 = (double *)param_1[7];
    local_d8[2] = pdVar5[2];
    local_d8[0] = *pdVar5;
    local_d8[1] = pdVar5[1];
    pdVar5 = (double *)param_1[1];
    local_a8[0] = dVar9 - *pdVar5;
    local_a8[1] = dVar10 - pdVar5[1];
    local_a8[2] = dVar1 - pdVar5[2];
    local_d8[3] = dVar11 - *pdVar5;
    local_d8[4] = dVar2 - pdVar5[1];
    local_d8[5] = dVar3 - pdVar5[2];
    lVar7 = 0;
    dVar10 = 1.79769313486232e+308;
    dVar9 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar7) == '\x01') {
        if (0.0 < local_d8[lVar7 + 6]) goto LAB_143614dce;
        dVar11 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_d8[lVar7 + 3] <= 0.0 && local_d8[lVar7 + 3] != 0.0) goto LAB_143614dce;
      }
      else {
        dVar11 = local_d8[lVar7 + 6] * local_d8[lVar7];
        dVar1 = local_d8[lVar7] * local_d8[lVar7 + 3];
      }
      dVar2 = dVar1;
      if (dVar11 <= dVar1) {
        dVar2 = dVar11;
      }
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      if (dVar11 <= dVar1) {
        dVar11 = dVar1;
      }
      if (dVar11 <= dVar10) {
        dVar10 = dVar11;
      }
      if (dVar10 < dVar9) goto LAB_143614dce;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    if ((dVar9 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar10)) {
      *(double *)param_1[3] = dVar9;
      local_a8[0] = *param_2;
      local_a8[1] = param_2[1];
      cVar6 = (**(code **)(**(longlong **)*param_1 + 0x10))
                        (*(longlong **)*param_1,local_d8 + 6,param_1[2]);
      if (cVar6 == '\0') {
        uVar8 = 0;
      }
    }
  }
LAB_143614dce:
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143614f80 FUN_143614f80 body=427 status=ok
// SIG undefined FUN_143614f80(void)

void FUN_143614f80(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xff8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x100) {
    *(undefined4 *)((longlong)param_1 + 0xffc) = 0xff;
LAB_143614fac:
    if (*(void **)((longlong)param_1 + 0xff0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xff0),(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (0xff < *(uint *)((longlong)param_1 + 0xffc)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xffc) = 0x7fffffff;
      uVar4 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xffc) = uVar3;
      if (uVar3 < 0x100) goto LAB_143614fac;
    }
    if (*(longlong *)((longlong)param_1 + 0xff0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xff0,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,uVar4,0x10);
  return;
}



// FUNCTION 14361512c FUN_14361512c body=7725 status=ok
// SIG undefined FUN_14361512c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14361512c(double *param_1,double *param_2,undefined8 *param_3,double *param_4,
                       undefined8 param_5,double *param_6,undefined8 param_7,double *param_8,
                       longlong param_9)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  double **ppdVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double **unaff_RSI;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  bool bVar20;
  double dVar21;
  double *pdVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  double *pdVar55;
  double *pdVar56;
  double *pdVar57;
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  double dVar62;
  undefined1 auStack_1388 [32];
  undefined8 local_1368;
  double *local_1360;
  undefined8 local_1358;
  double *local_1350;
  longlong local_1348;
  double *local_1338;
  longlong local_1330;
  ulonglong local_1328;
  longlong local_1320;
  ulonglong local_1318;
  longlong local_1310;
  ulonglong local_1308;
  longlong local_1300;
  longlong local_12f8;
  ulonglong local_12f0;
  double *local_12e8;
  longlong local_12e0;
  longlong local_12d8;
  undefined8 *local_12d0;
  undefined1 local_12c8 [16];
  undefined1 local_12b8 [16];
  longlong local_12a0;
  undefined1 local_1298 [16];
  ulonglong local_1280;
  double local_1278;
  undefined8 uStack_1270;
  double local_1268;
  undefined8 uStack_1260;
  ulonglong local_1258;
  undefined8 uStack_1250;
  undefined1 local_1248 [16];
  double local_1238;
  undefined8 uStack_1230;
  double local_1228 [4];
  double local_1208 [12];
  double *local_11a8;
  double *pdStack_11a0;
  double local_1198 [5];
  double dStack_1170;
  double local_1168;
  double local_1158 [4];
  double local_1138;
  double dStack_1130;
  double local_1128;
  double *local_1118 [2];
  double local_1108;
  double *local_10f8 [4];
  undefined8 local_10d8;
  double *local_10d0;
  undefined8 local_10c8;
  double *local_10c0;
  undefined8 *local_10b8;
  double **local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  pdVar56 = (double *)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1388;
  local_1198[3] = 0.0;
  local_1338 = param_1;
  if ((longlong)*(int *)(param_1 + 0x22) != 0) {
    puVar19 = (undefined8 *)param_1[0x21];
    puVar14 = puVar19 + (longlong)*(int *)(param_1 + 0x22) * 8;
    unaff_RSI = local_10f8;
    do {
      local_10f8[0] = (double *)*puVar19;
      local_10f8[1] = (double *)puVar19[1];
      cVar5 = (**(code **)(*(longlong *)*param_6 + 0x30))((longlong *)*param_6,unaff_RSI);
      if (cVar5 == '\0') {
        lVar17 = (**(code **)(*(longlong *)*param_6 + 0x20))();
        if (lVar17 == 0) {
          (**(code **)(*(longlong *)*param_6 + 0x28))();
        }
        local_1198[0] = *param_8;
        local_1198[1] = param_8[1];
        local_1198[2] = param_8[2];
        pdVar56 = (double *)(((double)puVar19[2] - *param_4) - *param_2);
        local_10f8[0] = pdVar56;
        local_10f8[1] = (double *)(((double)puVar19[3] - param_4[1]) - param_2[1]);
        local_10f8[2] = (double *)(((double)puVar19[4] - param_4[2]) - param_2[2]);
        local_1118[0] = (double *)(((double)puVar19[5] + *param_4) - *param_2);
        local_1118[1] = (double *)(((double)puVar19[6] + param_4[1]) - param_2[1]);
        local_1108 = ((double)puVar19[7] + param_4[2]) - param_2[2];
        dVar27 = 0.0;
        lVar17 = 0;
        uVar29 = 0xffffffff;
        uVar30 = 0x7fefffff;
        do {
          if (*(char *)(param_9 + lVar17) == '\x01') {
            if (0.0 < (double)local_10f8[lVar17]) goto LAB_143615232;
            dVar31 = 0.0;
            dVar41 = 1.79769313486232e+308;
            if ((double)local_1118[lVar17] <= 0.0 && (double)local_1118[lVar17] != 0.0)
            goto LAB_143615232;
          }
          else {
            dVar31 = (double)local_10f8[lVar17] * local_1198[lVar17];
            dVar41 = local_1198[lVar17] * (double)local_1118[lVar17];
          }
          dVar32 = dVar41;
          if (dVar31 <= dVar41) {
            dVar32 = dVar31;
          }
          if (dVar27 <= dVar32) {
            dVar27 = dVar32;
          }
          if (dVar31 <= dVar41) {
            dVar31 = dVar41;
          }
          if (dVar31 <= (double)CONCAT44(uVar30,uVar29)) {
            uVar29 = SUB84(dVar31,0);
            uVar30 = (undefined4)((ulonglong)dVar31 >> 0x20);
          }
          if ((double)CONCAT44(uVar30,uVar29) <= dVar27 && dVar27 != (double)CONCAT44(uVar30,uVar29)
             ) goto LAB_143615232;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 3);
        if ((dVar27 <= (double)param_3[4]) &&
           (0.0 < (double)CONCAT44(uVar30,uVar29) || (double)CONCAT44(uVar30,uVar29) == 0.0)) {
          local_10f8[0] = (double *)*puVar19;
          local_10f8[1] = (double *)puVar19[1];
          local_1198[3] = dVar27;
          cVar5 = (**(code **)(*(longlong *)*param_6 + 0x18))
                            ((longlong *)*param_6,unaff_RSI,param_3);
          if (cVar5 == '\0') goto LAB_14361545a;
        }
      }
LAB_143615232:
      puVar19 = puVar19 + 8;
    } while (puVar19 != puVar14);
  }
  if (local_1338[0x18] == 0.0) {
    local_10f8[0] = param_6;
    local_10f8[1] = param_2;
    local_10f8[2] = (double *)param_3;
    local_10f8[3] = local_1198 + 3;
    local_10d8 = param_5;
    local_10d0 = param_4;
    local_10c8 = param_7;
    local_10c0 = param_8;
    local_10b8 = &param_9;
    if (0 < (int)*(uint *)(local_1338 + 7)) {
      dVar27 = local_1338[0x19];
      if (((((0.0 < dVar27) && (0 < (longlong)*(int *)(local_1338 + 0x1b))) &&
           (0 < *(int *)((longlong)local_1338 + 0xdc))) &&
          ((0 < *(int *)(local_1338 + 0x1c) &&
           (*(int *)((longlong)local_1338 + 0x84) < *(int *)(local_1338 + 0xb))))) &&
         (dVar31 = (double)param_3[4], dVar31 <= 1.8446744073709552e+19)) {
        dVar41 = local_1338[0x1a];
        dVar32 = *param_4;
        uVar60 = SUB84(dVar32,0);
        uVar53 = (undefined4)((ulonglong)dVar32 >> 0x20);
        dVar42 = param_4[1];
        uVar59 = SUB84(dVar42,0);
        uVar54 = (undefined4)((ulonglong)dVar42 >> 0x20);
        dVar23 = (dVar32 + dVar32) * dVar41;
        uVar10 = (ulonglong)dVar23;
        dVar21 = (dVar42 + dVar42) * dVar41;
        uVar15 = (ulonglong)dVar21;
        uVar29 = uVar60;
        uVar30 = uVar53;
        if (dVar32 <= dVar42) {
          uVar29 = uVar59;
          uVar30 = uVar54;
        }
        dVar33 = ((double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar30,uVar29)) * dVar41;
        uVar16 = (ulonglong)dVar33;
        uVar11 = (ulonglong)(dVar31 * dVar41);
        if ((((longlong)(dVar31 * dVar41 - 9.223372036854776e+18) & (longlong)uVar11 >> 0x3f |
             uVar11) + 2) *
            (((longlong)(dVar33 - 9.223372036854776e+18) & (longlong)uVar16 >> 0x3f | uVar16) + 2) +
            (((longlong)(dVar21 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f | uVar15) + 2) *
            (((longlong)(dVar23 - 9.223372036854776e+18) & (longlong)uVar10 >> 0x3f | uVar10) + 2)
            <= (ulonglong)(longlong)*(int *)(local_1338 + 0x1b)) {
          pdStack_11a0 = &local_1138;
          local_1138 = 0.0;
          dStack_1130 = 0.0;
          local_11a8 = local_1338;
          pdVar56 = (double *)(*(double *)*param_3 * dVar31);
          uVar10 = DAT_149931180;
          dVar21 = (double)((ulonglong)pdVar56 & uVar10);
          dVar31 = dVar31 * ((double *)*param_3)[1];
          dVar23 = (double)((ulonglong)dVar31 & uVar10);
          if ((9.99999993922529e-09 < dVar21) || (9.99999993922529e-09 < dVar23)) {
            uStack_1270 = 0;
            uStack_1230 = 0;
            local_12d0 = param_3;
            local_1278 = dVar23;
            local_1238 = dVar21;
            if (dVar23 <= dVar21) {
              bVar20 = dVar21 <= 9.99999993922529e-09;
              dVar33 = dVar41 * param_2[1];
              auVar35._8_8_ = 0;
              auVar35._0_8_ = (double)((ulonglong)dVar33 & uVar10) * 2.220446049250313e-16 + dVar33;
              auVar35 = roundpd(auVar35,auVar35,1);
              local_1118[0] = local_1338;
              local_1118[1] = pdStack_11a0;
              dVar33 = (double)(longlong)auVar35._0_8_ * dVar27;
              dVar47 = param_2[1] - dVar33;
              bVar3 = 0.0 <= dVar31;
              uVar15 = (ulonglong)(bVar3 || bVar20) - 1 | 1;
              if (!bVar3 && !bVar20) {
                uVar54 = (undefined4)((ulonglong)-dVar42 >> 0x20);
              }
              dVar62 = -dVar42;
              if (!bVar3 && !bVar20) {
                dVar62 = dVar42;
              }
              dVar62 = dVar62 + dVar47;
              dVar42 = dVar42 * (double)(int)uVar15;
              dVar61 = dVar42 + dVar42 + dVar62;
              dVar42 = (dVar33 + dVar61) * dVar41;
              auVar37._8_8_ = 0;
              auVar37._0_8_ = (double)((ulonglong)dVar42 & uVar10) * 2.220446049250313e-16 + dVar42;
              auVar37 = roundpd(auVar37,auVar37,1);
              local_1330 = (longlong)auVar37._0_8_;
              dVar42 = ((double)CONCAT44(uVar54,uVar59) + dVar31 + dVar47 + dVar33) * dVar41;
              auVar51._0_8_ = (double)((ulonglong)dVar42 & uVar10) * 2.220446049250313e-16 + dVar42;
              auVar51._8_8_ = 0;
              auVar37 = roundpd(auVar51,auVar51,1);
              lVar17 = (longlong)auVar37._0_8_;
              local_1320 = local_1330;
              if (local_1330 < lVar17) {
                local_1320 = lVar17;
              }
              dVar42 = dVar41 * *param_2;
              auVar52._8_8_ = 0;
              auVar52._0_8_ = (double)((ulonglong)dVar42 & uVar10) * 2.220446049250313e-16 + dVar42;
              auVar37 = roundpd(auVar52,auVar52,1);
              local_12b8._0_8_ = (undefined8)auVar37._0_8_;
              dVar42 = (double)(longlong)local_12b8._0_8_ * dVar27;
              local_1298._0_8_ = *param_2 - dVar42;
              if (9.99999993922529e-09 < dVar21) {
                local_1320 = lVar17;
              }
              bVar4 = 0.0 <= (double)pdVar56;
              dVar21 = (double)pdVar56 + (double)local_1298._0_8_;
              local_12e8 = (double *)(ulonglong)(bVar4 || bVar20);
              local_1308 = (longlong)local_12e8 - 1U | 1;
              dVar47 = (double)(int)local_1308;
              local_1268 = ((double)pdVar56 * dVar47) / dVar31;
              uVar11 = -(ulonglong)(dVar23 <= 9.99999993922529e-09);
              uStack_1260 = 0;
              local_12c8._8_8_ = 0;
              local_12c8._0_8_ = ~uVar11 & (ulonglong)local_1268;
              local_1248._8_8_ = 0;
              local_1248._0_8_ = uVar11;
              if (!bVar4 && !bVar20) {
                uVar53 = (undefined4)((ulonglong)-dVar32 >> 0x20);
              }
              local_12c8 = local_12c8 | ZEXT416((uint)(uVar11 >> 0x20) & 0x3ff00000) << 0x20;
              dVar31 = -dVar32;
              if (!bVar4 && !bVar20) {
                dVar31 = dVar32;
              }
              pdVar56 = (double *)(dVar31 + (double)local_1298._0_8_);
              local_1298._0_8_ = (double)CONCAT44(uVar53,uVar60) + (double)local_1298._0_8_;
              local_1298._8_8_ = 0;
              dVar31 = dVar41 * (double)local_1298._0_8_;
              auVar45._8_8_ = 0;
              auVar45._0_8_ = (double)((ulonglong)dVar31 & uVar10) * 2.220446049250313e-16 + dVar31;
              auVar37 = roundpd(auVar45,auVar45,1);
              local_1258 = (ulonglong)auVar37._0_8_;
              dVar31 = (dVar42 + (double)pdVar56) * dVar41;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = (double)((ulonglong)dVar31 & uVar10) * 2.220446049250313e-16 + dVar31;
              auVar37 = roundpd(auVar46,auVar46,1);
              uVar11 = (ulonglong)auVar37._0_8_;
              dVar31 = (dVar33 + dVar62) * dVar41;
              auVar40._8_8_ = 0;
              auVar40._0_8_ = (double)((ulonglong)dVar31 & uVar10) * 2.220446049250313e-16 + dVar31;
              auVar37 = roundpd(auVar40,auVar40,1);
              local_1310 = (longlong)auVar37._0_8_;
              dVar41 = (dVar21 + (double)CONCAT44(uVar53,uVar60) + dVar42) * dVar41;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = (double)(uVar10 & (ulonglong)dVar41) * 2.220446049250313e-16 + dVar41;
              auVar37 = roundpd(auVar26,auVar26,1);
              local_12f0 = (ulonglong)auVar37._0_8_;
              local_12d8 = local_1320 * uVar15;
              local_12f8 = (longlong)local_12e8 - local_12b8._0_8_;
              local_1300 = (ulonglong)(bVar3 || bVar20) - (longlong)auVar35._0_8_;
              dVar31 = 1.0 / dVar47;
              dVar41 = 1.0 / (double)local_12c8._0_8_;
              local_12a0 = local_1308 * local_1258;
              local_12e0 = local_1308 * local_12f0;
              uVar10 = uVar11;
              pdVar57 = pdVar56;
              do {
                dVar32 = local_1278;
                lVar17 = local_1330 * uVar15;
                if ((9.99999993922529e-09 < local_1278) && (lVar17 < local_12d8)) {
                  dVar42 = ((double)(local_1300 + local_1330) * dVar27 - dVar61) *
                           (double)local_12c8._0_8_;
                  if (dVar42 < ((double)(longlong)(local_12f8 + uVar11) * dVar27 - (double)pdVar56)
                               * dVar47) {
                    pdVar56 = (double *)((double)pdVar56 + dVar42 * dVar31);
                    dVar61 = dVar61 + dVar42 * dVar41;
                    local_1330 = local_1330 + uVar15;
                    lVar17 = local_1330 * uVar15;
                  }
                }
                lVar12 = local_1310 * uVar15;
                local_1328 = uVar10;
                local_1318 = uVar11;
                if (lVar12 - lVar17 == 0 || lVar12 < lVar17) {
                  lVar13 = local_1310;
                  do {
                    lVar12 = lVar12 + uVar15 * uVar15;
                    FUN_1436171d2(local_1118,(double)(longlong)uVar11 * dVar27,
                                  SUB84((double)lVar13 * dVar27,0));
                    lVar13 = lVar13 + uVar15;
                  } while (lVar12 <= lVar17);
                }
                if ((dVar32 <= 9.99999993922529e-09) || (local_1330 == local_1320)) {
                  dVar42 = dVar27 * dVar47;
                }
                else {
                  dVar23 = ((double)(longlong)(local_12f8 + local_1318) * dVar27 - (double)pdVar56)
                           * dVar47;
                  dVar42 = dVar23 * dVar31;
                  dVar61 = dVar61 + dVar23 * dVar41;
                }
                pdVar56 = (double *)((double)pdVar56 + dVar42);
                uVar10 = local_12f0;
                if (local_1328 != local_12f0) {
                  uVar10 = local_1328 - local_12b8._0_8_;
                  if ((longlong)(uVar10 * local_1308) < local_12a0) {
                    pdVar57 = (double *)((double)pdVar57 + dVar27 * dVar47);
                  }
                  else {
                    pdVar22 = (double *)local_1298._0_8_;
                    if (uVar10 != local_1258) {
                      pdVar22 = pdVar57;
                    }
                    dVar42 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < local_1238) {
                      dVar42 = ((double)(longlong)(uVar10 + (longlong)local_12e8) * dVar27 -
                               (double)pdVar22) * dVar47;
                    }
                    dVar23 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < dVar32) {
                      dVar23 = ((double)(local_1300 + local_1310) * dVar27 - dVar62) * local_1268;
                    }
                    uVar10 = 0;
                    if (dVar23 < dVar42) {
                      uVar10 = uVar15;
                    }
                    local_1310 = local_1310 + uVar10;
                    pdVar57 = (double *)
                              (-(ulonglong)(local_1238 <= 9.99999993922529e-09) & (ulonglong)pdVar22
                              | ~-(ulonglong)(local_1238 <= 9.99999993922529e-09) &
                                (ulonglong)(dVar42 * dVar31 + (double)pdVar22));
                    dVar62 = (double)((ulonglong)dVar62 & local_1248._0_8_ |
                                     ~local_1248._0_8_ & (ulonglong)(dVar42 * dVar41 + dVar62));
                  }
                  uVar10 = local_1328 + local_1308;
                }
                uVar11 = local_1318 + local_1308;
              } while ((local_1330 != local_1320) ||
                      (param_3 = local_12d0,
                      uVar11 * local_1308 - local_12e0 == 0 ||
                      (longlong)(uVar11 * local_1308) < local_12e0));
            }
            else {
              bVar20 = dVar23 <= 9.99999993922529e-09;
              dVar33 = dVar41 * *param_2;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = (double)((ulonglong)dVar33 & uVar10) * 2.220446049250313e-16 + dVar33;
              auVar35 = roundpd(auVar38,auVar38,1);
              dVar33 = (double)(longlong)auVar35._0_8_ * dVar27;
              dVar47 = *param_2 - dVar33;
              bVar3 = 0.0 <= (double)pdVar56;
              uVar15 = (ulonglong)(bVar3 || bVar20) - 1 | 1;
              if (!bVar3 && !bVar20) {
                uVar53 = (undefined4)((ulonglong)-dVar32 >> 0x20);
              }
              dVar62 = -dVar32;
              if (!bVar3 && !bVar20) {
                dVar62 = dVar32;
              }
              dVar62 = dVar62 + dVar47;
              dVar32 = dVar32 * (double)(int)uVar15;
              dVar61 = dVar32 + dVar32 + dVar62;
              dVar32 = (dVar33 + dVar61) * dVar41;
              auVar48._8_8_ = 0;
              auVar48._0_8_ = (double)((ulonglong)dVar32 & uVar10) * 2.220446049250313e-16 + dVar32;
              auVar37 = roundpd(auVar48,auVar48,1);
              local_1328 = (ulonglong)auVar37._0_8_;
              dVar32 = ((double)CONCAT44(uVar53,uVar60) + (double)pdVar56 + dVar47 + dVar33) *
                       dVar41;
              auVar49._0_8_ = (double)((ulonglong)dVar32 & uVar10) * 2.220446049250313e-16 + dVar32;
              auVar49._8_8_ = 0;
              auVar37 = roundpd(auVar49,auVar49,1);
              uVar11 = (ulonglong)auVar37._0_8_;
              local_1308 = local_1328;
              if ((longlong)local_1328 < (longlong)uVar11) {
                local_1308 = uVar11;
              }
              dVar32 = dVar41 * param_2[1];
              auVar50._8_8_ = 0;
              auVar50._0_8_ = (double)((ulonglong)dVar32 & uVar10) * 2.220446049250313e-16 + dVar32;
              auVar37 = roundpd(auVar50,auVar50,1);
              local_12e0 = (longlong)auVar37._0_8_;
              dVar32 = (double)local_12e0 * dVar27;
              dVar47 = param_2[1] - dVar32;
              if (9.99999993922529e-09 < dVar23) {
                local_1308 = uVar11;
              }
              bVar4 = 0.0 <= dVar31;
              local_1280 = (ulonglong)(bVar4 || bVar20);
              local_12f0 = local_1280 - 1 | 1;
              dVar23 = (double)(int)local_12f0;
              local_1298._0_8_ = (dVar31 * dVar23) / (double)pdVar56;
              local_1258 = -(ulonglong)(dVar21 <= 9.99999993922529e-09);
              local_1298._8_8_ = 0;
              local_12b8._8_8_ = 0;
              local_12b8._0_8_ = ~local_1258 & local_1298._0_8_;
              uStack_1250 = 0;
              if (!bVar4 && !bVar20) {
                uVar54 = (undefined4)((ulonglong)-dVar42 >> 0x20);
              }
              local_12b8 = local_12b8 | ZEXT416((uint)(local_1258 >> 0x20) & 0x3ff00000) << 0x20;
              dVar21 = -dVar42;
              if (!bVar4 && !bVar20) {
                dVar21 = dVar42;
              }
              pdVar56 = (double *)(dVar21 + dVar47);
              local_12e8 = (double *)((double)CONCAT44(uVar54,uVar59) + dVar47);
              auVar43._8_8_ = 0;
              auVar43._0_8_ =
                   (double)((ulonglong)(dVar41 * (double)local_12e8) & uVar10) *
                   2.220446049250313e-16 + dVar41 * (double)local_12e8;
              auVar37 = roundpd(auVar43,auVar43,1);
              local_1268 = (double)(longlong)auVar37._0_8_;
              dVar42 = (dVar32 + (double)pdVar56) * dVar41;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = (double)((ulonglong)dVar42 & uVar10) * 2.220446049250313e-16 + dVar42;
              auVar37 = roundpd(auVar44,auVar44,1);
              lVar12 = (longlong)auVar37._0_8_;
              dVar42 = (dVar33 + dVar62) * dVar41;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = (double)((ulonglong)dVar42 & uVar10) * 2.220446049250313e-16 + dVar42;
              auVar37 = roundpd(auVar39,auVar39,1);
              local_1320 = (longlong)auVar37._0_8_;
              dVar41 = (dVar31 + dVar47 + (double)CONCAT44(uVar54,uVar59) + dVar32) * dVar41;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = (double)(uVar10 & (ulonglong)dVar41) * 2.220446049250313e-16 + dVar41;
              auVar37 = roundpd(auVar25,auVar25,1);
              local_12f8 = (longlong)auVar37._0_8_;
              local_1300 = local_1308 * uVar15;
              local_12d8 = local_1280 - local_12e0;
              local_12c8._0_8_ = (ulonglong)(bVar3 || bVar20) - (longlong)auVar35._0_8_;
              dVar31 = 1.0 / dVar23;
              dVar41 = 1.0 / (double)local_12b8._0_8_;
              local_1248._0_8_ = local_12f0 * (longlong)local_1268;
              local_12a0 = local_12f0 * local_12f8;
              lVar17 = lVar12;
              pdVar57 = pdVar56;
              do {
                dVar32 = local_1238;
                uVar10 = local_1328 * uVar15;
                if ((9.99999993922529e-09 < local_1238) && ((longlong)uVar10 < local_1300)) {
                  dVar42 = ((double)(longlong)(local_12c8._0_8_ + local_1328) * dVar27 - dVar61) *
                           (double)local_12b8._0_8_;
                  if (dVar42 < ((double)(local_12d8 + lVar12) * dVar27 - (double)pdVar56) * dVar23)
                  {
                    pdVar56 = (double *)((double)pdVar56 + dVar42 * dVar31);
                    dVar61 = dVar61 + dVar42 * dVar41;
                    local_1328 = local_1328 + uVar15;
                    uVar10 = local_1328 * uVar15;
                  }
                }
                lVar13 = local_1320 * uVar15;
                local_1330 = lVar12;
                local_1310 = lVar17;
                if (lVar13 - uVar10 == 0 || lVar13 < (longlong)uVar10) {
                  lVar17 = local_1320;
                  local_1318 = uVar10;
                  do {
                    lVar13 = lVar13 + uVar15 * uVar15;
                    FUN_1436171d2(&local_11a8,(double)lVar17 * dVar27,
                                  SUB84((double)lVar12 * dVar27,0));
                    lVar17 = lVar17 + uVar15;
                  } while (lVar13 <= (longlong)local_1318);
                }
                if ((dVar32 <= 9.99999993922529e-09) || (local_1328 == local_1308)) {
                  dVar42 = dVar27 * dVar23;
                }
                else {
                  dVar21 = ((double)(local_12d8 + local_1330) * dVar27 - (double)pdVar56) * dVar23;
                  dVar42 = dVar21 * dVar31;
                  dVar61 = dVar61 + dVar21 * dVar41;
                }
                pdVar56 = (double *)((double)pdVar56 + dVar42);
                lVar17 = local_12f8;
                if (local_1310 != local_12f8) {
                  dVar42 = (double)(local_1310 - local_12e0);
                  if ((longlong)((longlong)dVar42 * local_12f0) < (longlong)local_1248._0_8_) {
                    pdVar57 = (double *)((double)pdVar57 + dVar27 * dVar23);
                  }
                  else {
                    pdVar22 = local_12e8;
                    if (dVar42 != local_1268) {
                      pdVar22 = pdVar57;
                    }
                    dVar21 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < local_1278) {
                      dVar21 = ((double)(longlong)((longlong)dVar42 + local_1280) * dVar27 -
                               (double)pdVar22) * dVar23;
                    }
                    dVar42 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < dVar32) {
                      dVar42 = ((double)(local_12c8._0_8_ + local_1320) * dVar27 - dVar62) *
                               (double)local_1298._0_8_;
                    }
                    uVar10 = 0;
                    if (dVar42 < dVar21) {
                      uVar10 = uVar15;
                    }
                    local_1320 = local_1320 + uVar10;
                    pdVar57 = (double *)
                              (-(ulonglong)(local_1278 <= 9.99999993922529e-09) & (ulonglong)pdVar22
                              | ~-(ulonglong)(local_1278 <= 9.99999993922529e-09) &
                                (ulonglong)(dVar21 * dVar31 + (double)pdVar22));
                    dVar62 = (double)((ulonglong)dVar62 & local_1258 |
                                     ~local_1258 & (ulonglong)(dVar21 * dVar41 + dVar62));
                  }
                  lVar17 = local_1310 + local_12f0;
                }
                lVar12 = local_1330 + local_12f0;
              } while ((local_1328 != local_1308) ||
                      (param_3 = local_12d0,
                      lVar12 * local_12f0 - local_12a0 == 0 ||
                      (longlong)(lVar12 * local_12f0) < local_12a0));
            }
          }
          else {
            dVar31 = (*param_2 - dVar32) * dVar41;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = (double)((ulonglong)dVar31 & uVar10) * 2.220446049250313e-16 + dVar31;
            auVar35 = roundpd(auVar34,auVar34,1);
            dVar31 = (dVar32 + *param_2) * dVar41;
            auVar36._0_8_ = (double)((ulonglong)dVar31 & uVar10) * 2.220446049250313e-16 + dVar31;
            auVar36._8_8_ = 0;
            auVar37 = roundpd(auVar36,auVar36,1);
            local_1330 = (longlong)auVar37._0_8_;
            if ((longlong)auVar35._0_8_ <= local_1330) {
              dVar31 = (param_2[1] - dVar42) * dVar41;
              auVar28._0_8_ = (double)(uVar10 & (ulonglong)dVar31) * 2.220446049250313e-16 + dVar31;
              auVar28._8_8_ = 0;
              auVar37 = roundpd(auVar28,auVar28,1);
              local_1318 = (ulonglong)auVar37._0_8_;
              dVar41 = (dVar42 + param_2[1]) * dVar41;
              auVar24._0_8_ = ABS(dVar41) * 2.220446049250313e-16 + dVar41;
              auVar24._8_8_ = 0;
              auVar37 = roundpd(auVar24,auVar24,1);
              local_1328 = (ulonglong)auVar37._0_8_;
              uVar10 = local_1328 + 1;
              lVar17 = (longlong)auVar35._0_8_;
              do {
                if ((longlong)local_1318 <= (longlong)local_1328) {
                  uVar15 = local_1318;
                  do {
                    FUN_1436171d2(&local_11a8,(double)lVar17 * dVar27,
                                  SUB84((double)(longlong)uVar15 * dVar27,0));
                    uVar15 = uVar15 + 1;
                  } while (uVar10 != uVar15);
                }
                bVar20 = lVar17 != local_1330;
                lVar17 = lVar17 + 1;
              } while (bVar20);
            }
          }
          ppdVar8 = local_10f8;
          pdVar57 = local_1208 + 3;
          for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
            *pdVar57 = (double)*ppdVar8;
            ppdVar8 = ppdVar8 + 1;
            pdVar57 = pdVar57 + 1;
          }
          bVar20 = false;
          uVar10 = 0;
          pdVar57 = local_1338;
          do {
            iVar6 = (int)uVar10;
            if (bVar20) {
LAB_143616e75:
              bVar20 = true;
              if (iVar6 < *(int *)(pdVar57 + 0x17)) {
                iVar7 = *(int *)((longlong)pdVar57[0x16] + (longlong)iVar6 * 4);
                uVar10 = (ulonglong)(iVar6 + 1);
                bVar20 = true;
                bVar3 = false;
                goto LAB_143616f05;
              }
              bVar3 = true;
            }
            else {
              if ((longlong)dStack_1130._0_4_ == 0) goto LAB_143616e75;
              iVar7 = 0x7fffffff;
              bVar20 = true;
              lVar17 = 0;
              do {
                if (0 < *(int *)((longlong)local_1138 + 4 + lVar17)) {
                  iVar2 = *(int *)((longlong)local_1338[0x14] +
                                  (longlong)*(int *)((longlong)local_1138 + lVar17) * 4);
                  bVar3 = iVar7 <= iVar2;
                  if (iVar2 < iVar7) {
                    iVar7 = iVar2;
                  }
                  bVar20 = (bool)(bVar20 & bVar3);
                  pdVar57 = local_1338;
                }
                lVar17 = lVar17 + 8;
              } while ((longlong)dStack_1130._0_4_ * 8 != lVar17);
              if (bVar20) goto LAB_143616e75;
              if ((longlong)dStack_1130._0_4_ != 0) {
                lVar17 = 0;
                do {
                  iVar2 = *(int *)((longlong)local_1138 + 4 + lVar17);
                  if ((0 < iVar2) &&
                     (pdVar57 = local_1338,
                     *(int *)((longlong)local_1338[0x14] +
                             (longlong)*(int *)((longlong)local_1138 + lVar17) * 4) == iVar7)) {
                    *(int *)((longlong)local_1138 + lVar17) =
                         *(int *)((longlong)local_1138 + lVar17) + 1;
                    *(int *)((longlong)local_1138 + 4 + lVar17) = iVar2 + -1;
                  }
                  lVar17 = lVar17 + 8;
                } while ((longlong)dStack_1130._0_4_ * 8 != lVar17);
              }
              bVar3 = *(int *)(pdVar57 + 0x17) <= iVar6;
              bVar20 = false;
LAB_143616f05:
              cVar5 = FUN_143616f5a(local_1208 + 3,(longlong)iVar7 * 0x40 + (longlong)pdVar57[6]);
              pdVar57 = local_1338;
              if (cVar5 == '\0') {
                unaff_RSI = (double **)0x0;
                goto LAB_143616f3a;
              }
            }
          } while ((!bVar20) || (!bVar3));
          unaff_RSI = (double **)CONCAT71((int7)(uVar10 >> 8),1);
LAB_143616f3a:
          if (local_1138 != 0.0) {
            FUN_1400020a8();
          }
          cVar5 = (char)unaff_RSI;
          goto joined_r0x000143616f4f;
        }
      }
      unaff_RSI = (double **)local_1338[6];
      lVar17 = (ulonglong)*(uint *)(local_1338 + 7) << 6;
      do {
        cVar5 = FUN_143616f5a(local_10f8,unaff_RSI);
        if (cVar5 == '\0') goto LAB_14361545a;
        unaff_RSI = unaff_RSI + 8;
        lVar17 = lVar17 + -0x40;
      } while (lVar17 != 0);
    }
  }
  else {
    local_1348 = param_9;
    local_1350 = param_8;
    local_1358 = param_7;
    local_1360 = param_6;
    local_1368 = param_5;
    cVar5 = FUN_14361512c(local_1338[0x18],param_2,param_3,param_4);
joined_r0x000143616f4f:
    if (cVar5 == '\0') {
LAB_14361545a:
      uVar10 = 0;
      goto LAB_143615e21;
    }
  }
  local_108 = (double **)0x0;
  local_100 = 0xff00000000;
  if (*(char *)(local_1338 + 8) == '\x01') {
    iVar6 = *(int *)((longlong)local_1338 + 0x44);
    if (iVar6 != -1) {
LAB_143615691:
      local_100 = 0xff00000001;
      local_10f8[0] = (double *)CONCAT44(local_10f8[0]._4_4_,iVar6);
      local_10f8[1] = (double *)0x0;
      uVar9 = 1;
      pdVar57 = local_1338;
      do {
        lVar17 = param_9;
        ppdVar8 = local_108;
        if (local_108 == (double **)0x0) {
          ppdVar8 = local_10f8;
        }
        uVar18 = uVar9 - 1;
        local_100 = CONCAT44(local_100._4_4_,uVar18);
        dVar27 = (double)param_3[4];
        if ((double)ppdVar8[(longlong)(int)uVar9 * 2 + -1] <= dVar27) {
          pdVar22 = (double *)
                    ((longlong)pdVar57[2] +
                    (longlong)*(int *)(ppdVar8 + (longlong)(int)uVar9 * 2 + -2) * 0x70);
          if ((*(byte *)((longlong)pdVar57[2] + 0x6c +
                        (longlong)*(int *)(ppdVar8 + (longlong)(int)uVar9 * 2 + -2) * 0x70) & 1) ==
              0) {
            local_1208[0] = *param_8;
            local_1208[1] = param_8[1];
            local_1208[2] = param_8[2];
            dVar31 = param_4[2];
            dVar41 = *param_4;
            dVar32 = param_4[1];
            dVar42 = param_2[2];
            dVar23 = *param_2;
            dVar21 = param_2[1];
            local_1118[0] = (double *)((*pdVar22 - dVar41) - dVar23);
            local_1118[1] = (double *)((pdVar22[1] - dVar32) - dVar21);
            local_1108 = (pdVar22[2] - dVar31) - dVar42;
            local_1138 = (pdVar22[3] + dVar41) - dVar23;
            dStack_1130 = (pdVar22[4] + dVar32) - dVar21;
            local_1128 = (pdVar22[5] + dVar31) - dVar42;
            uVar29 = 0;
            uVar30 = 0;
            lVar17 = 0;
            dVar33 = 1.79769313486232e+308;
            do {
              if (*(char *)(param_9 + lVar17) == '\x01') {
                bVar20 = true;
                if ((0.0 < (double)local_1118[lVar17]) ||
                   (dVar47 = 0.0, dVar62 = 1.79769313486232e+308,
                   (&local_1138)[lVar17] <= 0.0 && (&local_1138)[lVar17] != 0.0))
                goto LAB_143615ac4;
              }
              else {
                dVar47 = (double)local_1118[lVar17] * local_1208[lVar17];
                dVar62 = local_1208[lVar17] * (&local_1138)[lVar17];
              }
              dVar61 = dVar62;
              if (dVar47 <= dVar62) {
                dVar61 = dVar47;
              }
              if ((double)CONCAT44(uVar30,uVar29) <= dVar61) {
                uVar29 = SUB84(dVar61,0);
                uVar30 = (undefined4)((ulonglong)dVar61 >> 0x20);
              }
              if (dVar47 <= dVar62) {
                dVar47 = dVar62;
              }
              if (dVar47 <= dVar33) {
                dVar33 = dVar47;
              }
              bVar20 = true;
              if (dVar33 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar33) goto LAB_143615ac4;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 3);
            if (((double)CONCAT44(uVar30,uVar29) < dVar27 ||
                 (double)CONCAT44(uVar30,uVar29) == dVar27) && (0.0 <= dVar33)) {
              bVar20 = false;
              pdVar56 = (double *)CONCAT44(uVar30,uVar29);
            }
LAB_143615ac4:
            local_1228[2] = param_8[2];
            local_1228[0] = *param_8;
            local_1228[1] = param_8[1];
            local_1118[0] = (double *)((pdVar22[6] - dVar41) - dVar23);
            local_1118[1] = (double *)((pdVar22[7] - dVar32) - dVar21);
            local_1108 = (pdVar22[8] - dVar31) - dVar42;
            local_1138 = (dVar41 + pdVar22[9]) - dVar23;
            dStack_1130 = (dVar32 + pdVar22[10]) - dVar21;
            local_1128 = (dVar31 + pdVar22[0xb]) - dVar42;
            auVar58 = ZEXT816(0);
            lVar17 = 0;
            dVar31 = 1.79769313486232e+308;
            do {
              if (*(char *)(param_9 + lVar17) == '\x01') {
                if (0.0 < (double)local_1118[lVar17]) goto LAB_143615c53;
                dVar41 = 0.0;
                dVar32 = 1.79769313486232e+308;
                if ((&local_1138)[lVar17] <= 0.0 && (&local_1138)[lVar17] != 0.0)
                goto LAB_143615c53;
              }
              else {
                dVar41 = (double)local_1118[lVar17] * local_1228[lVar17];
                dVar32 = local_1228[lVar17] * (&local_1138)[lVar17];
              }
              dVar42 = dVar32;
              if (dVar41 <= dVar32) {
                dVar42 = dVar41;
              }
              if (auVar58._0_8_ <= dVar42) {
                auVar58._0_8_ = dVar42;
              }
              if (dVar41 <= dVar32) {
                dVar41 = dVar32;
              }
              if (dVar41 <= dVar31) {
                dVar31 = dVar41;
              }
              pdVar55 = auVar58._0_8_;
              if (dVar31 < (double)pdVar55) goto LAB_143615c53;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 3);
            if ((dVar27 < (double)pdVar55) || (dVar31 < 0.0)) {
LAB_143615c53:
              if (!bVar20) {
                uVar1 = *(uint *)(pdVar22 + 0xc);
                unaff_RSI = (double **)(ulonglong)uVar1;
                local_100 = CONCAT44(local_100._4_4_,uVar9);
                if (local_100._4_4_ < uVar9) {
                  FUN_143617360(local_10f8,uVar18);
                  pdVar57 = local_1338;
                }
                ppdVar8 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar8 = local_10f8;
                }
                *(uint *)(ppdVar8 + (longlong)(int)uVar18 * 2) = uVar1;
                ppdVar8[(longlong)(int)uVar18 * 2 + 1] = pdVar56;
              }
            }
            else if (bVar20) {
              uVar1 = *(uint *)((longlong)pdVar22 + 100);
              unaff_RSI = (double **)(ulonglong)uVar1;
              local_100 = CONCAT44(local_100._4_4_,uVar9);
              if (local_100._4_4_ < uVar9) {
                FUN_143617360(local_10f8,uVar18);
                pdVar57 = local_1338;
              }
              ppdVar8 = local_108;
              if (local_108 == (double **)0x0) {
                ppdVar8 = local_10f8;
              }
              *(uint *)(ppdVar8 + (longlong)(int)uVar18 * 2) = uVar1;
              ppdVar8[(longlong)(int)uVar18 * 2 + 1] = pdVar55;
            }
            else {
              local_100._0_4_ = uVar9;
              if ((double)pdVar55 <= (double)pdVar56) {
                uVar29 = *(undefined4 *)(pdVar22 + 0xc);
                if (local_100._4_4_ < uVar9) {
                  FUN_143617360(local_10f8,uVar18);
                }
                ppdVar8 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar8 = local_10f8;
                }
                *(undefined4 *)(ppdVar8 + (longlong)(int)uVar18 * 2) = uVar29;
                ppdVar8[(longlong)(int)uVar18 * 2 + 1] = pdVar56;
                uVar18 = (uint)local_100;
                uVar9 = *(uint *)((longlong)pdVar22 + 100);
                lVar17 = (longlong)(int)(uint)local_100;
                local_100._0_4_ = (uint)local_100 + 1;
                if (local_100._4_4_ < (uint)local_100) {
                  FUN_143617360(local_10f8,uVar18);
                }
                ppdVar8 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar8 = local_10f8;
                }
                *(uint *)(ppdVar8 + lVar17 * 2) = uVar9;
                ppdVar8[lVar17 * 2 + 1] = pdVar55;
              }
              else {
                uVar29 = *(undefined4 *)((longlong)pdVar22 + 100);
                if (local_100._4_4_ < uVar9) {
                  FUN_143617360(local_10f8,uVar18);
                }
                ppdVar8 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar8 = local_10f8;
                }
                *(undefined4 *)(ppdVar8 + (longlong)(int)uVar18 * 2) = uVar29;
                ppdVar8[(longlong)(int)uVar18 * 2 + 1] = pdVar55;
                uVar18 = (uint)local_100;
                uVar9 = *(uint *)(pdVar22 + 0xc);
                lVar17 = (longlong)(int)(uint)local_100;
                local_100._0_4_ = (uint)local_100 + 1;
                if (local_100._4_4_ < (uint)local_100) {
                  FUN_143617360(local_10f8,uVar18);
                }
                ppdVar8 = local_108;
                if (local_108 == (double **)0x0) {
                  ppdVar8 = local_10f8;
                }
                *(uint *)(ppdVar8 + lVar17 * 2) = uVar9;
                ppdVar8[lVar17 * 2 + 1] = pdVar56;
              }
              unaff_RSI = (double **)(ulonglong)uVar9;
              pdVar57 = local_1338;
            }
          }
          else {
            pdVar55 = pdVar57 + 4;
            local_1168 = param_8[2];
            local_1198[4] = *param_8;
            dStack_1170 = param_8[1];
            lVar12 = (longlong)
                     *(int *)((longlong)*pdVar55 + 0x38 + (longlong)*(int *)(pdVar22 + 0xc) * 0x48);
            pdVar57 = local_1338;
            if (lVar12 != 0) {
              unaff_RSI = *(double ***)
                           ((longlong)*pdVar55 + 0x30 + (longlong)*(int *)(pdVar22 + 0xc) * 0x48);
              ppdVar8 = unaff_RSI + lVar12 * 8;
              do {
                local_1118[0] = *unaff_RSI;
                local_1118[1] = unaff_RSI[1];
                cVar5 = (**(code **)(*(longlong *)*param_6 + 0x30))((longlong *)*param_6,local_1118)
                ;
                if (cVar5 == '\0') {
                  lVar12 = (**(code **)(*(longlong *)*param_6 + 0x20))();
                  if (lVar12 == 0) {
                    (**(code **)(*(longlong *)*param_6 + 0x28))();
                  }
                  local_1158[2] = local_1168;
                  local_1158[0] = local_1198[4];
                  local_1158[1] = dStack_1170;
                  local_1118[0] = (double *)(((double)unaff_RSI[2] - *param_4) - *param_2);
                  local_1118[1] = (double *)(((double)unaff_RSI[3] - param_4[1]) - param_2[1]);
                  local_1108 = ((double)unaff_RSI[4] - param_4[2]) - param_2[2];
                  local_1138 = ((double)unaff_RSI[5] + *param_4) - *param_2;
                  dStack_1130 = ((double)unaff_RSI[6] + param_4[1]) - param_2[1];
                  local_1128 = ((double)unaff_RSI[7] + param_4[2]) - param_2[2];
                  uVar29 = 0;
                  uVar30 = 0;
                  lVar12 = 0;
                  dVar27 = 1.79769313486232e+308;
                  do {
                    if (*(char *)(lVar17 + lVar12) == '\x01') {
                      if (0.0 < (double)local_1118[lVar12]) goto LAB_143615790;
                      dVar31 = 0.0;
                      dVar41 = 1.79769313486232e+308;
                      if ((&local_1138)[lVar12] <= 0.0 && (&local_1138)[lVar12] != 0.0)
                      goto LAB_143615790;
                    }
                    else {
                      dVar31 = (double)local_1118[lVar12] * local_1158[lVar12];
                      dVar41 = local_1158[lVar12] * (&local_1138)[lVar12];
                    }
                    dVar32 = dVar41;
                    if (dVar31 <= dVar41) {
                      dVar32 = dVar31;
                    }
                    if ((double)CONCAT44(uVar30,uVar29) <= dVar32) {
                      uVar29 = SUB84(dVar32,0);
                      uVar30 = (undefined4)((ulonglong)dVar32 >> 0x20);
                    }
                    if (dVar31 <= dVar41) {
                      dVar31 = dVar41;
                    }
                    if (dVar31 <= dVar27) {
                      dVar27 = dVar31;
                    }
                    if (dVar27 <= (double)CONCAT44(uVar30,uVar29) &&
                        (double)CONCAT44(uVar30,uVar29) != dVar27) goto LAB_143615790;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 != 3);
                  if (((double)CONCAT44(uVar30,uVar29) < (double)param_3[4] ||
                       (double)CONCAT44(uVar30,uVar29) == (double)param_3[4]) && (0.0 <= dVar27)) {
                    local_1118[0] = *unaff_RSI;
                    local_1118[1] = unaff_RSI[1];
                    cVar5 = (**(code **)(*(longlong *)*param_6 + 0x18))
                                      ((longlong *)*param_6,local_1118,param_3);
                    if (cVar5 == '\0') {
                      uVar10 = 0;
                      goto LAB_143615e0f;
                    }
                  }
                }
LAB_143615790:
                unaff_RSI = unaff_RSI + 8;
                pdVar57 = local_1338;
              } while (unaff_RSI != ppdVar8);
            }
          }
          uVar18 = (uint)local_100;
        }
        uVar9 = uVar18;
      } while (uVar9 != 0);
    }
  }
  else {
    iVar6 = 0;
    if (*(int *)(local_1338 + 3) != 0) goto LAB_143615691;
  }
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_143615e0f:
  if (local_108 != (double **)0x0) {
    FUN_1400020a8();
  }
LAB_143615e21:
  if ((local_f0 ^ (ulonglong)auStack_1388) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143616f5a FUN_143616f5a body=630 status=ok
// SIG undefined FUN_143616f5a(void)

ulonglong FUN_143616f5a(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  char cVar7;
  longlong lVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  double local_d8 [6];
  double local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar10 = param_2[2];
  dVar11 = param_2[3];
  dVar1 = param_2[4];
  dVar12 = param_2[5];
  dVar2 = param_2[6];
  dVar3 = param_2[7];
  puVar4 = (undefined8 *)*param_1;
  local_a8[0] = *param_2;
  local_a8[1] = param_2[1];
  cVar7 = (**(code **)(*(longlong *)*puVar4 + 0x30))();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar7 == '\0') {
    lVar8 = (**(code **)(*(longlong *)*puVar4 + 0x20))();
    if (lVar8 == 0) {
      (**(code **)(*(longlong *)*puVar4 + 0x28))();
    }
    pdVar5 = (double *)param_1[7];
    local_d8[2] = pdVar5[2];
    local_d8[0] = *pdVar5;
    local_d8[1] = pdVar5[1];
    pdVar5 = (double *)param_1[5];
    pdVar6 = (double *)param_1[1];
    local_a8[0] = (dVar10 - *pdVar5) - *pdVar6;
    local_a8[1] = (dVar11 - pdVar5[1]) - pdVar6[1];
    local_a8[2] = (dVar1 - pdVar5[2]) - pdVar6[2];
    local_d8[3] = (dVar12 + *pdVar5) - *pdVar6;
    local_d8[4] = (dVar2 + pdVar5[1]) - pdVar6[1];
    local_d8[5] = (dVar3 + pdVar5[2]) - pdVar6[2];
    lVar8 = 0;
    dVar11 = 1.79769313486232e+308;
    dVar10 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar8) == '\x01') {
        if (0.0 < local_d8[lVar8 + 6]) goto LAB_143616fee;
        dVar12 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_d8[lVar8 + 3] <= 0.0 && local_d8[lVar8 + 3] != 0.0) goto LAB_143616fee;
      }
      else {
        dVar12 = local_d8[lVar8 + 6] * local_d8[lVar8];
        dVar1 = local_d8[lVar8] * local_d8[lVar8 + 3];
      }
      dVar2 = dVar1;
      if (dVar12 <= dVar1) {
        dVar2 = dVar12;
      }
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      if (dVar12 <= dVar11) {
        dVar11 = dVar12;
      }
      if (dVar11 < dVar10) goto LAB_143616fee;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    if ((dVar10 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar11)) {
      *(double *)param_1[3] = dVar10;
      local_a8[0] = *param_2;
      local_a8[1] = param_2[1];
      cVar7 = (**(code **)(**(longlong **)*param_1 + 0x18))
                        (*(longlong **)*param_1,local_d8 + 6,param_1[2]);
      if (cVar7 == '\0') {
        uVar9 = 0;
      }
    }
  }
LAB_143616fee:
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1436171d2 FUN_1436171d2 body=398 status=ok
// SIG undefined FUN_1436171d2(void)

void FUN_1436171d2(longlong *param_1,double param_2,double param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    param_2 = param_2 * *(double *)(lVar3 + 0xd0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ABS(param_2) * 2.220446049250313e-16 + param_2;
    auVar9 = roundpd(auVar9,auVar9,1);
    param_3 = param_3 * *(double *)(lVar3 + 0xd0);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = ABS(param_3) * 2.220446049250313e-16 + param_3;
    auVar8 = roundpd(auVar8,auVar8,1);
    uVar7 = (uint)(longlong)auVar9._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar5 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uint)(longlong)auVar8._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa | (uVar5 * 2 | uVar5) & 0x55555555;
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & uVar7) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar5 * 0x14);
        if (*puVar1 == uVar7) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          plVar4 = (longlong *)param_1[1];
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146dedd8c(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(uint *)(lVar3 + (longlong)iVar2 * 8) = puVar1[1];
          *(uint *)(lVar3 + 4 + (longlong)iVar2 * 8) = puVar1[2];
          return;
        }
        uVar5 = puVar1[3];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 143617360 FUN_143617360 body=427 status=ok
// SIG undefined FUN_143617360(void)

void FUN_143617360(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xff8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x100) {
    *(undefined4 *)((longlong)param_1 + 0xffc) = 0xff;
LAB_14361738c:
    if (*(void **)((longlong)param_1 + 0xff0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xff0),(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (0xff < *(uint *)((longlong)param_1 + 0xffc)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xffc) = 0x7fffffff;
      uVar4 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xffc) = uVar3;
      if (uVar3 < 0x100) goto LAB_14361738c;
    }
    if (*(longlong *)((longlong)param_1 + 0xff0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xff0,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,uVar4,0x10);
  return;
}



// FUNCTION 14361750c FUN_14361750c body=2470 status=ok
// SIG undefined FUN_14361750c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14361750c(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  double *unaff_RBP;
  undefined7 uVar22;
  longlong lVar23;
  double *pdVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_10c8 [32];
  longlong local_10a8;
  undefined8 *local_10a0;
  longlong local_1098;
  longlong local_1090;
  double local_1088 [6];
  longlong local_1058;
  undefined8 uStack_1050;
  double local_1048 [510];
  double *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10c8;
  local_10a8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    pdVar15 = *(double **)(param_1 + 0x108);
    pdVar24 = pdVar15 + (longlong)*(int *)(param_1 + 0x110) * 8;
    unaff_RBP = local_1048 + 3;
    do {
      local_1048[0] = *pdVar15;
      local_1048[1] = pdVar15[1];
      cVar8 = (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,local_1048);
      if (cVar8 == '\0') {
        lVar11 = (**(code **)(*(longlong *)*param_3 + 0x20))();
        if (lVar11 == 0) {
          (**(code **)(*(longlong *)*param_3 + 0x28))();
        }
        local_1048[2] = pdVar15[4];
        local_1048[0] = pdVar15[2];
        local_1048[1] = pdVar15[3];
        local_1048[5] = pdVar15[7];
        local_1048[3] = pdVar15[5];
        local_1048[4] = pdVar15[6];
        lVar11 = 0;
        do {
          if ((local_1048[lVar11 + 3] <= param_2[lVar11] &&
               param_2[lVar11] != local_1048[lVar11 + 3]) ||
             (param_2[lVar11 + 3] <= local_1048[lVar11] && local_1048[lVar11] != param_2[lVar11 + 3]
             )) goto LAB_143617626;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        local_1088[0] = *pdVar15;
        local_1088[1] = pdVar15[1];
        cVar8 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_1088);
        if (cVar8 == '\0') goto LAB_14361765c;
      }
LAB_143617626:
      pdVar15 = pdVar15 + 8;
    } while (pdVar15 != pdVar24);
  }
  local_10a0 = param_3;
  if (*(longlong *)(local_10a8 + 0xc0) == 0) {
    if (0 < (longlong)*(int *)(local_10a8 + 0x38)) {
      if ((((0.0 < *(double *)(local_10a8 + 200)) &&
           (uVar12 = (ulonglong)*(int *)(local_10a8 + 0xd8), 0 < (longlong)uVar12)) &&
          (0 < *(int *)(local_10a8 + 0xdc))) &&
         ((0 < *(int *)(local_10a8 + 0xe0) &&
          (*(int *)(local_10a8 + 0x84) < *(int *)(local_10a8 + 0x58))))) {
        dVar4 = *(double *)(local_10a8 + 0xd0);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = ABS(*param_2 * dVar4) * 2.220446049250313e-16 + *param_2 * dVar4;
        auVar30 = roundpd(auVar30,auVar30,1);
        lVar11 = (longlong)auVar30._0_8_;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = ABS(param_2[3] * dVar4) * 2.220446049250313e-16 + param_2[3] * dVar4;
        auVar30 = roundpd(auVar31,auVar31,1);
        lVar13 = (longlong)auVar30._0_8_;
        if (lVar11 <= lVar13) {
          auVar32._8_8_ = 0;
          auVar32._0_8_ = ABS(param_2[1] * dVar4) * 2.220446049250313e-16 + param_2[1] * dVar4;
          auVar30 = roundpd(auVar32,auVar32,1);
          lVar14 = (longlong)auVar30._0_8_;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = ABS(dVar4 * param_2[4]) * 2.220446049250313e-16 + dVar4 * param_2[4];
          auVar30 = roundpd(auVar29,auVar29,1);
          lVar26 = (longlong)auVar30._0_8_;
          if (((lVar14 <= lVar26) && (uVar18 = (lVar13 - lVar11) + 1, uVar18 <= uVar12)) &&
             ((uVar20 = (lVar26 - lVar14) + 1, uVar20 <= uVar12 &&
              (uVar20 = uVar20 * uVar18, uVar20 < uVar12 || uVar20 - uVar12 == 0)))) {
            lVar1 = local_10a8 + 0x88;
            local_1058 = 0;
            uStack_1050 = 0;
            lVar23 = local_10a8;
            local_1098 = lVar14;
            local_1090 = lVar13;
            do {
              uVar10 = ((uint)lVar11 & 0xff00) << 8 | (uint)lVar11 & 0xff;
              uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
              uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
              lVar25 = lVar14;
              do {
                uVar12 = uStack_1050;
                if (*(int *)(lVar23 + 0x58) != *(int *)(lVar23 + 0x84)) {
                  uVar17 = ((uint)lVar25 & 0xff00) << 8 | (uint)lVar25 & 0xff;
                  uVar17 = (uVar17 << 4 | uVar17) & 0xf0f0f0f;
                  uVar17 = (uVar17 * 4 | uVar17) & 0x33333333;
                  uVar17 = (uVar17 * 2 | uVar17 * 4) & 0xaaaaaaaa |
                           (uVar10 * 2 | uVar10) & 0x55555555;
                  lVar27 = *(longlong *)(lVar23 + 0x90);
                  if (*(longlong *)(lVar23 + 0x90) == 0) {
                    lVar27 = lVar1;
                  }
                  uVar19 = *(uint *)(lVar27 + (ulonglong)(*(int *)(lVar23 + 0x98) - 1U & uVar17) * 4
                                    );
                  if (uVar19 != 0xffffffff) {
                    do {
                      puVar2 = (uint *)(*(longlong *)(lVar23 + 0x50) + (longlong)(int)uVar19 * 0x14)
                      ;
                      if (*puVar2 == uVar17) {
                        if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffffb) != 0) {
                          lVar27 = (longlong)(int)uStack_1050;
                          uVar17 = (int)uStack_1050 + 1;
                          uStack_1050 = CONCAT44(uStack_1050._4_4_,uVar17);
                          if (uStack_1050._4_4_ < uVar17) {
                            FUN_146dedd8c(&local_1058,uVar12 & 0xffffffff);
                            lVar23 = local_10a8;
                            lVar13 = local_1090;
                            lVar14 = local_1098;
                          }
                          *(uint *)(local_1058 + lVar27 * 8) = puVar2[1];
                          *(uint *)(local_1058 + 4 + lVar27 * 8) = puVar2[2];
                        }
                        break;
                      }
                      uVar19 = puVar2[3];
                    } while (uVar19 != 0xffffffff);
                  }
                }
                bVar28 = lVar25 != lVar26;
                lVar25 = lVar25 + 1;
              } while (bVar28);
              bVar28 = lVar11 != lVar13;
              lVar11 = lVar11 + 1;
            } while (bVar28);
            bVar28 = false;
            unaff_RBP = (double *)0x0;
            do {
              iVar21 = (int)unaff_RBP;
              if (bVar28) {
LAB_14361798a:
                bVar28 = true;
                if (iVar21 < *(int *)(lVar23 + 0xb8)) {
                  iVar9 = *(int *)(*(longlong *)(lVar23 + 0xb0) + (longlong)iVar21 * 4);
                  unaff_RBP = (double *)(ulonglong)(iVar21 + 1);
                  bVar28 = true;
                  bVar7 = false;
                  goto LAB_143617a16;
                }
                bVar7 = true;
              }
              else {
                if ((longlong)(int)uStack_1050 == 0) goto LAB_14361798a;
                iVar9 = 0x7fffffff;
                bVar28 = true;
                lVar11 = 0;
                do {
                  if (0 < *(int *)(local_1058 + 4 + lVar11)) {
                    iVar5 = *(int *)(*(longlong *)(local_10a8 + 0xa0) +
                                    (longlong)*(int *)(local_1058 + lVar11) * 4);
                    bVar7 = iVar9 <= iVar5;
                    if (iVar5 < iVar9) {
                      iVar9 = iVar5;
                    }
                    bVar28 = (bool)(bVar28 & bVar7);
                  }
                  lVar11 = lVar11 + 8;
                } while ((longlong)(int)uStack_1050 * 8 != lVar11);
                lVar23 = local_10a8;
                if (bVar28) goto LAB_14361798a;
                if ((longlong)(int)uStack_1050 != 0) {
                  lVar11 = 0;
                  do {
                    iVar5 = *(int *)(local_1058 + 4 + lVar11);
                    if ((0 < iVar5) &&
                       (*(int *)(*(longlong *)(local_10a8 + 0xa0) +
                                (longlong)*(int *)(local_1058 + lVar11) * 4) == iVar9)) {
                      *(int *)(local_1058 + lVar11) = *(int *)(local_1058 + lVar11) + 1;
                      *(int *)(local_1058 + 4 + lVar11) = iVar5 + -1;
                    }
                    lVar11 = lVar11 + 8;
                  } while ((longlong)(int)uStack_1050 * 8 != lVar11);
                }
                bVar7 = *(int *)(local_10a8 + 0xb8) <= iVar21;
                bVar28 = false;
LAB_143617a16:
                lVar11 = *(longlong *)(lVar23 + 0x30);
                lVar13 = (longlong)iVar9 * 0x40;
                local_1048[2] = *(double *)(lVar11 + 0x20 + lVar13);
                pdVar15 = (double *)(lVar11 + 0x10 + lVar13);
                local_1048[0] = *pdVar15;
                local_1048[1] = pdVar15[1];
                local_1048[5] = *(double *)(lVar11 + 0x38 + lVar13);
                pdVar15 = (double *)(lVar11 + 0x28 + lVar13);
                local_1048[3] = *pdVar15;
                local_1048[4] = pdVar15[1];
                local_1088[0] = *(double *)(lVar11 + lVar13);
                local_1088[1] = ((double *)(lVar11 + lVar13))[1];
                cVar8 = (**(code **)(*(longlong *)*local_10a0 + 0x30))
                                  ((longlong *)*local_10a0,local_1088);
                lVar23 = local_10a8;
                if (cVar8 == '\0') {
                  lVar14 = (**(code **)(*(longlong *)*local_10a0 + 0x20))();
                  if (lVar14 == 0) {
                    (**(code **)(*(longlong *)*local_10a0 + 0x28))();
                  }
                  lVar14 = 0;
                  do {
                    lVar23 = local_10a8;
                    if ((local_1048[lVar14 + 3] <= param_2[lVar14] &&
                         param_2[lVar14] != local_1048[lVar14 + 3]) ||
                       (param_2[lVar14 + 3] <= local_1048[lVar14] &&
                        local_1048[lVar14] != param_2[lVar14 + 3])) goto LAB_143617ae8;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 != 3);
                  local_1088[0] = *(double *)(lVar11 + lVar13);
                  local_1088[1] = ((double *)(lVar11 + lVar13))[1];
                  cVar8 = (**(code **)(*(longlong *)*local_10a0 + 8))
                                    ((longlong *)*local_10a0,local_1088);
                  lVar23 = local_10a8;
                  if (cVar8 == '\0') {
                    bVar28 = false;
                    goto LAB_143617afd;
                  }
                }
              }
LAB_143617ae8:
            } while ((!bVar28) || (!bVar7));
            bVar28 = true;
LAB_143617afd:
            if (local_1058 != 0) {
              FUN_1400020a8();
            }
            if (!bVar28) goto LAB_14361765c;
            goto LAB_143617bed;
          }
        }
      }
      pdVar15 = *(double **)(local_10a8 + 0x30);
      pdVar24 = pdVar15 + (longlong)*(int *)(local_10a8 + 0x38) * 8;
      do {
        local_1048[2] = pdVar15[4];
        local_1048[0] = pdVar15[2];
        local_1048[1] = pdVar15[3];
        local_1048[5] = pdVar15[7];
        local_1048[3] = pdVar15[5];
        local_1048[4] = pdVar15[6];
        local_1088[0] = *pdVar15;
        local_1088[1] = pdVar15[1];
        cVar8 = (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,local_1088);
        if (cVar8 == '\0') {
          lVar11 = (**(code **)(*(longlong *)*param_3 + 0x20))();
          if (lVar11 == 0) {
            (**(code **)(*(longlong *)*param_3 + 0x28))();
          }
          lVar11 = 0;
          do {
            if ((local_1048[lVar11 + 3] <= param_2[lVar11] &&
                 param_2[lVar11] != local_1048[lVar11 + 3]) ||
               (param_2[lVar11 + 3] <= local_1048[lVar11] &&
                local_1048[lVar11] != param_2[lVar11 + 3])) goto LAB_143617be0;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          local_1088[0] = *pdVar15;
          local_1088[1] = pdVar15[1];
          cVar8 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_1088);
          if (cVar8 == '\0') goto LAB_14361765c;
        }
LAB_143617be0:
        pdVar15 = pdVar15 + 8;
      } while (pdVar15 != pdVar24);
    }
  }
  else {
    cVar8 = FUN_14361750c(*(longlong *)(local_10a8 + 0xc0),param_2,param_3);
    if (cVar8 == '\0') {
LAB_14361765c:
      uVar12 = 0;
      goto LAB_143617dc7;
    }
  }
LAB_143617bed:
  uVar22 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (((*(char *)(local_10a8 + 0x40) == '\x01') && (*(int *)(local_10a8 + 0x1b0) != 0)) &&
     (lVar11 = (**(code **)(*(longlong *)*local_10a0 + 0x38))(), lVar11 != 0)) {
    uVar16 = (**(code **)(*(longlong *)*local_10a0 + 0x38))();
    lVar13 = FUN_147c5e5fa(local_10a8 + 0x118,uVar16);
    lVar11 = local_10a8;
    if (lVar13 != 0) {
      lVar14 = (longlong)*(int *)(lVar13 + 8);
      if ((lVar14 != -1) && (*(int *)(lVar13 + 8) < *(int *)(local_10a8 + 0x1c0) + -1)) {
        iVar21 = *(int *)(*(longlong *)(local_10a8 + 0x1b8) + lVar14 * 4);
        lVar13 = (longlong)iVar21;
        uVar12 = CONCAT71(uVar22,1);
        if (iVar21 < *(int *)(*(longlong *)(local_10a8 + 0x1b8) + 4 + lVar14 * 4)) {
          do {
            uVar10 = FUN_147c5e66a((longlong)*(int *)(*(longlong *)(lVar11 + 0x1a8) + lVar13 * 4) *
                                   0x48 + *(longlong *)(lVar11 + 0x20),param_2,local_10a0);
            uVar12 = (ulonglong)uVar10;
            if ((char)uVar10 == '\0') break;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(*(longlong *)(lVar11 + 0x1b8) + 4 + lVar14 * 4));
        }
        goto LAB_143617dc7;
      }
    }
  }
  local_58 = (double *)0x0;
  local_4c = 0xff;
  if (*(char *)(local_10a8 + 0x40) == '\x01') {
    iVar21 = *(int *)(local_10a8 + 0x44);
    if (iVar21 != -1) {
LAB_143617c57:
      local_1048[0] = (double)CONCAT44(local_1048[0]._4_4_,iVar21);
      local_1048[1] = 0.0;
      local_50 = 1;
      do {
        pdVar15 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar15 = local_1048;
        }
        lVar13 = (longlong)(int)local_50;
        local_50 = local_50 - 1;
        lVar11 = *(longlong *)(local_10a8 + 0x10) +
                 (longlong)*(int *)(pdVar15 + lVar13 * 2 + -2) * 0x70;
        if ((*(byte *)(*(longlong *)(local_10a8 + 0x10) + 0x6c +
                      (longlong)*(int *)(pdVar15 + lVar13 * 2 + -2) * 0x70) & 1) == 0) {
          unaff_RBP = (double *)0x0;
          lVar13 = 0;
          do {
            uVar10 = local_50;
            local_1088[2] = (double)*(undefined8 *)(lVar11 + 0x10 + lVar13);
            local_1088[0] = *(double *)(lVar11 + lVar13);
            local_1088[1] = ((double *)(lVar11 + lVar13))[1];
            local_1088[5] = (double)*(undefined8 *)(lVar11 + 0x28 + lVar13);
            puVar3 = (undefined8 *)(lVar11 + 0x18 + lVar13);
            local_1088[3] = (double)*puVar3;
            local_1088[4] = (double)puVar3[1];
            lVar14 = 0;
            do {
              if ((local_1088[lVar14 + 3] <= param_2[lVar14] &&
                   param_2[lVar14] != local_1088[lVar14 + 3]) ||
                 (param_2[lVar14 + 3] <= local_1088[lVar14] &&
                  local_1088[lVar14] != param_2[lVar14 + 3])) goto LAB_143617d66;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
            uVar6 = *(undefined4 *)(lVar11 + 0x60 + (longlong)unaff_RBP * 4);
            lVar14 = (longlong)(int)local_50;
            local_50 = local_50 + 1;
            if (local_4c < local_50) {
              FUN_143617eb4(local_1048,uVar10);
            }
            pdVar15 = local_58;
            if (local_58 == (double *)0x0) {
              pdVar15 = local_1048;
            }
            *(undefined4 *)(pdVar15 + lVar14 * 2) = uVar6;
            pdVar15[lVar14 * 2 + 1] = 0.0;
LAB_143617d66:
            unaff_RBP = (double *)((longlong)unaff_RBP + 1);
            lVar13 = lVar13 + 0x30;
          } while (lVar13 != 0x60);
        }
        else {
          cVar8 = FUN_147c5e66a((longlong)*(int *)(lVar11 + 0x60) * 0x48 +
                                *(longlong *)(local_10a8 + 0x20),param_2,local_10a0);
          if (cVar8 == '\0') {
            uVar12 = 0;
            goto LAB_143617db5;
          }
        }
      } while (local_50 != 0);
      uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
LAB_143617db5:
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143617dc7;
    }
  }
  else {
    iVar21 = 0;
    if (*(int *)(local_10a8 + 0x18) != 0) goto LAB_143617c57;
  }
  uVar12 = CONCAT71(uVar22,1);
LAB_143617dc7:
  if ((local_48 ^ (ulonglong)auStack_10c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 143617eb4 FUN_143617eb4 body=427 status=ok
// SIG undefined FUN_143617eb4(void)

void FUN_143617eb4(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xff8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x100) {
    *(undefined4 *)((longlong)param_1 + 0xffc) = 0xff;
LAB_143617ee0:
    if (*(void **)((longlong)param_1 + 0xff0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xff0),(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (0xff < *(uint *)((longlong)param_1 + 0xffc)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xffc) = 0x7fffffff;
      uVar4 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xffc) = uVar3;
      if (uVar3 < 0x100) goto LAB_143617ee0;
    }
    if (*(longlong *)((longlong)param_1 + 0xff0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xff0,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,uVar4,0x10);
  return;
}



// FUNCTION 143618060 FUN_143618060 body=48 status=ok
// SIG undefined FUN_143618060(void)

void FUN_143618060(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf8,8);
  }
  return;
}



// FUNCTION 143618090 FUN_143618090 body=506 status=ok
// SIG undefined FUN_143618090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143618090(longlong param_1,int param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = (longlong)param_2 * 0x70;
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar9);
  if (1 < *(uint *)(*(longlong *)(param_1 + 0x20) + lVar11 * 0x48 + 0x38)) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    FUN_1436182a4();
    lVar11 = lVar11 * 0x48;
    FUN_147c5e180(*(longlong *)(param_1 + 0x20) + lVar11,
                  *(longlong *)(param_1 + 0x20) + lVar11 + 0x30);
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = *(longlong *)(param_1 + 0x20);
    dVar1 = *(double *)(lVar10 + 8 + lVar11);
    dVar2 = *(double *)(lVar10 + 0x10 + lVar11);
    dVar13 = (double)_DAT_14c75efe0;
    dVar3 = *(double *)(lVar10 + 0x18 + lVar11);
    dVar4 = *(double *)(lVar10 + 0x20 + lVar11);
    dVar5 = *(double *)(lVar10 + 0x28 + lVar11);
    *(double *)(lVar12 + lVar9) = *(double *)(lVar10 + lVar11) - dVar13;
    *(double *)(lVar12 + 8 + lVar9) = dVar1 - dVar13;
    *(double *)(lVar12 + 0x10 + lVar9) = dVar2 - dVar13;
    *(double *)(lVar12 + 0x18 + lVar9) = dVar3 + dVar13;
    *(double *)(lVar12 + 0x20 + lVar9) = dVar4 + dVar13;
    *(double *)(lVar12 + 0x28 + lVar9) = dVar13 + dVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_1436182a4();
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar11 + 0x68 + lVar9);
  if ((longlong)iVar6 == -1) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  else {
    lVar12 = (longlong)iVar6 * 0x70;
    iVar7 = *(int *)(lVar11 + 0x68 + lVar12);
    iVar8 = *(int *)(lVar11 + lVar12 + 0x60 +
                    (ulonglong)(*(int *)(lVar11 + 0x60 + lVar12) == param_2) * 4);
    if ((longlong)iVar7 == -1) {
      *(int *)(param_1 + 0x44) = iVar8;
    }
    else {
      lVar10 = (longlong)iVar7 * 0x70;
      *(int *)(lVar11 + lVar10 + 0x60 + (ulonglong)(*(int *)(lVar11 + 0x60 + lVar10) != iVar6) * 4)
           = iVar8;
      lVar11 = *(longlong *)(param_1 + 0x10);
    }
    *(int *)(lVar11 + 0x68 + (longlong)iVar8 * 0x70) = iVar7;
    FUN_14361833c(param_1,iVar8,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar12) = *(undefined4 *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar6;
    lVar11 = *(longlong *)(param_1 + 0x10);
  }
  lVar11 = *(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar11 + 0x60 + lVar9) * 0x48;
  if (*(int *)(lVar11 + 0x3c) < 0) {
    *(undefined4 *)(lVar11 + 0x38) = 0;
    FUN_147c5e2d4(lVar11 + 0x30,0);
  }
  else {
    *(undefined4 *)(lVar11 + 0x38) = 0;
  }
  *(undefined1 *)(lVar11 + 0x40) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar9) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = param_2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436182a4 FUN_1436182a4 body=152 status=ok
// SIG undefined FUN_1436182a4(void)

void FUN_1436182a4(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *_Dst;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar3) {
    piVar1 = *(int **)(param_1 + 0x30);
    uVar5 = 0;
    _Dst = piVar1;
    do {
      if (((*_Dst == *param_2) && (_Dst[1] == param_2[1])) && (_Dst[2] == param_2[2])) {
        if (uVar3 - 1 != (int)uVar5) {
          iVar2 = (uVar3 - 1) - (int)uVar5;
          iVar4 = 1;
          if (iVar2 < 1) {
            iVar4 = iVar2;
          }
          memmove(_Dst,piVar1 + (ulonglong)(uVar3 - iVar4) * 0x10,(longlong)iVar4 << 6);
          uVar3 = *(uint *)(param_1 + 0x38);
        }
        *(uint *)(param_1 + 0x38) = uVar3 - 1;
        FUN_147c5ed38((undefined8 *)(param_1 + 0x30));
        break;
      }
      uVar5 = uVar5 + 1;
      _Dst = _Dst + 0x10;
    } while (uVar3 != uVar5);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 14361833c FUN_14361833c body=1420 status=ok
// SIG undefined FUN_14361833c(void)

void FUN_14361833c(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_128 [39];
  char local_101;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar26 = *(longlong *)(param_1 + 0x10);
  iVar24 = *(int *)(lVar26 + 0x68 + (longlong)param_2 * 0x70);
  if (iVar24 != param_2 && iVar24 != -1) {
    do {
      iVar19 = iVar24;
      lVar29 = (longlong)iVar19 * 0x70;
      lVar1 = lVar26 + lVar29;
      lVar20 = (longlong)param_2 * 0x70;
      uVar16 = (uint)(*(int *)(lVar26 + 0x60 + lVar29) != param_2);
      uVar22 = (ulonglong)(uVar16 * 0x30);
      *(undefined8 *)(uVar22 + 0x10 + lVar1) = *(undefined8 *)(lVar26 + 0x10 + lVar20);
      uVar17 = ((undefined8 *)(lVar26 + lVar20))[1];
      *(undefined8 *)(uVar22 + lVar1) = *(undefined8 *)(lVar26 + lVar20);
      ((undefined8 *)(uVar22 + lVar1))[1] = uVar17;
      *(undefined8 *)(uVar22 + 0x28 + lVar1) = *(undefined8 *)(lVar26 + 0x28 + lVar20);
      puVar2 = (undefined4 *)(lVar26 + 0x18 + lVar20);
      uVar32 = puVar2[1];
      uVar33 = puVar2[2];
      uVar39 = puVar2[3];
      puVar3 = (undefined4 *)(uVar22 + 0x18 + lVar1);
      *puVar3 = *puVar2;
      puVar3[1] = uVar32;
      puVar3[2] = uVar33;
      puVar3[3] = uVar39;
      lVar26 = *(longlong *)(param_1 + 0x10);
      if ((*(byte *)(lVar26 + 0x6c + lVar20) & 1) == 0) {
        lVar20 = lVar20 + lVar26;
        lVar26 = lVar26 + lVar29;
        uVar22 = (ulonglong)(uVar16 * 0x30);
        dVar36 = *(double *)(uVar22 + 0x10 + lVar26);
        uVar32 = SUB84(dVar36,0);
        uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
        dVar34 = *(double *)(lVar20 + 0x40);
        if (dVar34 <= dVar36) {
          uVar32 = SUB84(dVar34,0);
          uVar33 = (undefined4)((ulonglong)dVar34 >> 0x20);
        }
        dVar36 = *(double *)(uVar22 + 8 + lVar26);
        if (*(double *)(lVar20 + 0x38) <= dVar36) {
          dVar36 = *(double *)(lVar20 + 0x38);
        }
        dVar34 = *(double *)(uVar22 + lVar26);
        if (*(double *)(lVar20 + 0x30) <= *(double *)(uVar22 + lVar26)) {
          dVar34 = *(double *)(lVar20 + 0x30);
        }
        *(double *)(uVar22 + lVar26) = dVar34;
        *(double *)(uVar22 + 8 + lVar26) = dVar36;
        *(ulonglong *)(uVar22 + 0x10 + lVar26) = CONCAT44(uVar33,uVar32);
        dVar36 = *(double *)(uVar22 + 0x28 + lVar26);
        uVar32 = SUB84(dVar36,0);
        uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
        dVar34 = *(double *)(lVar20 + 0x58);
        if (dVar36 <= dVar34) {
          uVar32 = SUB84(dVar34,0);
          uVar33 = (undefined4)((ulonglong)dVar34 >> 0x20);
        }
        dVar36 = *(double *)(uVar22 + 0x20 + lVar26);
        if (dVar36 <= *(double *)(lVar20 + 0x50)) {
          dVar36 = *(double *)(lVar20 + 0x50);
        }
        dVar34 = *(double *)(uVar22 + 0x18 + lVar26);
        if (dVar34 <= *(double *)(lVar20 + 0x48)) {
          dVar34 = *(double *)(lVar20 + 0x48);
        }
        *(double *)(uVar22 + 0x18 + lVar26) = dVar34;
        *(double *)(uVar22 + 0x20 + lVar26) = dVar36;
        *(ulonglong *)(uVar22 + 0x28 + lVar26) = CONCAT44(uVar33,uVar32);
        lVar26 = *(longlong *)(param_1 + 0x10);
      }
      if (param_3 != '\0') {
        lVar1 = lVar26 + lVar29;
        dVar36 = 0.0;
        iVar24 = -1;
        uVar22 = 0;
        iVar27 = -1;
        bVar11 = true;
        do {
          bVar30 = bVar11;
          lVar20 = (longlong)*(int *)(lVar1 + 0x60 + (uVar22 ^ 1) * 4) * 0x70;
          if ((*(byte *)(lVar26 + 0x6c + lVar20) & 1) == 0) {
            lVar23 = lVar26 + lVar20;
            lVar21 = uVar22 * 0x30;
            dVar34 = *(double *)(lVar1 + lVar21);
            dVar35 = *(double *)(lVar1 + 8 + lVar21);
            dVar6 = *(double *)(lVar1 + 0x10 + lVar21);
            dVar7 = *(double *)(lVar1 + 0x18 + lVar21);
            dVar8 = *(double *)(lVar1 + 0x20 + lVar21);
            lVar28 = (uVar22 ^ 1) * 0x30;
            dVar13 = *(double *)(lVar1 + 0x28 + lVar28) - *(double *)(lVar1 + 0x10 + lVar28);
            dVar9 = *(double *)(lVar1 + 0x28 + lVar21);
            dVar12 = *(double *)(lVar1 + 0x20 + lVar28) - *(double *)(lVar1 + 8 + lVar28);
            dVar14 = *(double *)(lVar1 + 0x18 + lVar28) - *(double *)(lVar1 + lVar28);
            dVar12 = dVar12 * dVar13 + dVar14 * dVar12 + dVar13 * dVar14;
            lVar21 = 0;
            dVar13 = dVar36;
            do {
              iVar10 = *(int *)(lVar20 + lVar26 + 0x60 + lVar21);
              uVar25 = (ulonglong)
                       ((uint)(*(int *)(lVar26 + 0x60 +
                                       (longlong)*(int *)(lVar26 + 0x68 + (longlong)iVar10 * 0x70) *
                                       0x70) == iVar10) * 0x30);
              uVar32 = SUB84(dVar6,0);
              uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
              dVar36 = *(double *)(lVar23 + 0x10 + uVar25);
              if (dVar36 <= dVar6) {
                uVar32 = SUB84(dVar36,0);
                uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              uVar39 = SUB84(dVar35,0);
              uVar40 = (undefined4)((ulonglong)dVar35 >> 0x20);
              dVar36 = *(double *)(lVar23 + 8 + uVar25);
              if (dVar36 <= dVar35) {
                uVar39 = SUB84(dVar36,0);
                uVar40 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              uVar41 = SUB84(dVar34,0);
              uVar42 = (undefined4)((ulonglong)dVar34 >> 0x20);
              dVar36 = *(double *)(lVar23 + uVar25);
              if (dVar36 <= dVar34) {
                uVar41 = SUB84(dVar36,0);
                uVar42 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              uVar43 = SUB84(dVar9,0);
              uVar44 = (undefined4)((ulonglong)dVar9 >> 0x20);
              dVar36 = *(double *)(lVar23 + 0x28 + uVar25);
              if (dVar9 <= dVar36) {
                uVar43 = SUB84(dVar36,0);
                uVar44 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              uVar37 = SUB84(dVar8,0);
              uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
              dVar36 = *(double *)(lVar23 + 0x20 + uVar25);
              if (dVar8 <= dVar36) {
                uVar37 = SUB84(dVar36,0);
                uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              dVar14 = (double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar33,uVar32);
              uVar32 = SUB84(dVar7,0);
              uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
              dVar36 = *(double *)(lVar23 + 0x18 + uVar25);
              if (dVar7 <= dVar36) {
                uVar32 = SUB84(dVar36,0);
                uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
              }
              dVar36 = (double)CONCAT44(uVar38,uVar37) - (double)CONCAT44(uVar40,uVar39);
              dVar15 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar42,uVar41);
              dVar36 = dVar36 * dVar14 + dVar15 * dVar36 + dVar14 * dVar15;
              dVar36 = (dVar36 + dVar36) - (dVar12 + dVar12);
              iVar18 = *(int *)(lVar1 + 0x60 + uVar22 * 4);
              if (dVar13 <= dVar36) {
                dVar36 = dVar13;
                iVar10 = iVar24;
                iVar18 = iVar27;
              }
              iVar27 = iVar18;
              iVar24 = iVar10;
              lVar21 = lVar21 + 4;
              dVar13 = dVar36;
            } while (lVar21 != 8);
          }
          uVar22 = 1;
          bVar11 = false;
        } while (bVar30);
        local_100 = lVar29;
        if ((iVar24 != -1) && (iVar24 != iVar19)) {
          iVar10 = *(int *)(lVar26 + 0x68 + (longlong)iVar24 * 0x70);
          if (iVar27 != iVar10) {
            lVar23 = (longlong)iVar10 * 0x70;
            bVar30 = *(int *)(lVar26 + 0x60 + lVar23) != iVar24;
            bVar31 = *(int *)(lVar26 + 0x60 +
                             (longlong)*(int *)(lVar26 + 0x68 + (longlong)iVar27 * 0x70) * 0x70) ==
                     iVar27;
            bVar11 = !bVar31;
            *(int *)(lVar1 + 0x60 + (ulonglong)bVar11 * 4) = iVar24;
            *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar24 * 0x70) = iVar19;
            *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar27 * 0x70) = iVar10;
            *(int *)(*(longlong *)(param_1 + 0x10) + lVar23 + 0x60 + (ulonglong)bVar30 * 4) = iVar27
            ;
            lVar26 = *(longlong *)(param_1 + 0x10) + lVar29;
            uVar22 = (ulonglong)((uint)bVar11 * 0x30);
            local_e8 = *(undefined8 *)(uVar22 + 0x10 + lVar26);
            local_f8 = *(undefined8 *)(uVar22 + lVar26);
            uStack_f0 = ((undefined8 *)(uVar22 + lVar26))[1];
            local_d0 = *(undefined8 *)(uVar22 + 0x28 + lVar26);
            puVar4 = (undefined8 *)(uVar22 + 0x18 + lVar26);
            local_e0 = *puVar4;
            uStack_d8 = puVar4[1];
            lVar20 = *(longlong *)(param_1 + 0x10) + lVar23;
            lVar1 = (ulonglong)bVar30 * 0x30;
            *(undefined8 *)(uVar22 + 0x10 + lVar26) = *(undefined8 *)(lVar20 + 0x10 + lVar1);
            uVar17 = ((undefined8 *)(lVar20 + lVar1))[1];
            *(undefined8 *)(uVar22 + lVar26) = *(undefined8 *)(lVar20 + lVar1);
            ((undefined8 *)(uVar22 + lVar26))[1] = uVar17;
            puVar4 = (undefined8 *)(lVar20 + 0x18 + lVar1);
            uVar17 = puVar4[1];
            puVar5 = (undefined8 *)(uVar22 + 0x18 + lVar26);
            *puVar5 = *puVar4;
            puVar5[1] = uVar17;
            *(undefined8 *)(uVar22 + 0x28 + lVar26) = *(undefined8 *)(lVar20 + 0x28 + lVar1);
            lVar26 = *(longlong *)(param_1 + 0x10) + lVar23;
            *(undefined8 *)(lVar26 + 0x10 + lVar1) = local_e8;
            *(undefined8 *)(lVar26 + lVar1) = local_f8;
            ((undefined8 *)(lVar26 + lVar1))[1] = uStack_f0;
            puVar4 = (undefined8 *)(lVar26 + 0x18 + lVar1);
            *puVar4 = local_e0;
            puVar4[1] = uStack_d8;
            *(undefined8 *)(lVar26 + 0x28 + lVar1) = local_d0;
            lVar1 = *(longlong *)(param_1 + 0x10);
            lVar26 = lVar1 + lVar29;
            lVar20 = (ulonglong)bVar31 * 0x30;
            *(undefined8 *)(lVar26 + 0x10 + lVar20) = *(undefined8 *)(lVar1 + 0x10 + lVar23);
            uVar17 = ((undefined8 *)(lVar1 + lVar23))[1];
            *(undefined8 *)(lVar26 + lVar20) = *(undefined8 *)(lVar1 + lVar23);
            ((undefined8 *)(lVar26 + lVar20))[1] = uVar17;
            puVar4 = (undefined8 *)(lVar1 + 0x18 + lVar23);
            uVar17 = puVar4[1];
            puVar5 = (undefined8 *)(lVar26 + 0x18 + lVar20);
            *puVar5 = *puVar4;
            puVar5[1] = uVar17;
            *(undefined8 *)(lVar26 + 0x28 + lVar20) = *(undefined8 *)(lVar1 + 0x28 + lVar23);
            lVar1 = *(longlong *)(param_1 + 0x10);
            lVar26 = lVar1 + lVar29;
            dVar36 = *(double *)(lVar26 + 0x10 + lVar20);
            uVar32 = SUB84(dVar36,0);
            uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
            dVar34 = *(double *)(lVar1 + 0x40 + lVar23);
            if (dVar34 <= dVar36) {
              uVar32 = SUB84(dVar34,0);
              uVar33 = (undefined4)((ulonglong)dVar34 >> 0x20);
            }
            dVar36 = *(double *)(lVar26 + 8 + lVar20);
            dVar34 = *(double *)(lVar1 + 0x38 + lVar23);
            if (dVar34 <= dVar36) {
              dVar36 = dVar34;
            }
            dVar34 = *(double *)(lVar1 + 0x30 + lVar23);
            dVar35 = *(double *)(lVar26 + lVar20);
            if (dVar34 <= *(double *)(lVar26 + lVar20)) {
              dVar35 = dVar34;
            }
            *(double *)(lVar26 + lVar20) = dVar35;
            *(double *)(lVar26 + 8 + lVar20) = dVar36;
            *(ulonglong *)(lVar26 + 0x10 + lVar20) = CONCAT44(uVar33,uVar32);
            dVar36 = *(double *)(lVar26 + 0x28 + lVar20);
            uVar32 = SUB84(dVar36,0);
            uVar33 = (undefined4)((ulonglong)dVar36 >> 0x20);
            dVar34 = *(double *)(lVar1 + 0x58 + lVar23);
            if (dVar36 <= dVar34) {
              uVar32 = SUB84(dVar34,0);
              uVar33 = (undefined4)((ulonglong)dVar34 >> 0x20);
            }
            dVar36 = *(double *)(lVar26 + 0x20 + lVar20);
            dVar34 = *(double *)(lVar1 + 0x50 + lVar23);
            if (dVar36 <= dVar34) {
              dVar36 = dVar34;
            }
            dVar34 = *(double *)(lVar26 + 0x18 + lVar20);
            dVar35 = *(double *)(lVar1 + 0x48 + lVar23);
            if (dVar34 <= dVar35) {
              dVar34 = dVar35;
            }
            *(double *)(lVar26 + 0x18 + lVar20) = dVar34;
            *(double *)(lVar26 + 0x20 + lVar20) = dVar36;
            *(ulonglong *)(lVar26 + 0x28 + lVar20) = CONCAT44(uVar33,uVar32);
            lVar26 = *(longlong *)(param_1 + 0x10);
          }
        }
      }
      iVar24 = *(int *)(lVar26 + 0x68 + lVar29);
      local_101 = param_3;
    } while ((iVar24 != -1) && (param_2 = iVar19, iVar19 != iVar24));
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436188ca FUN_1436188ca body=2244 status=ok
// SIG undefined FUN_1436188ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1436188ca(longlong param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  double dVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_1a8 [44];
  int local_17c;
  longlong *local_178;
  undefined8 *local_170;
  int *local_168;
  double local_160;
  double local_158;
  double *local_150;
  int *local_148;
  double *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_17c = *(int *)(param_1 + 0x44);
  if (local_17c == -1) {
    FUN_143619190(param_1,param_2,param_3,param_4);
    *(int *)(param_1 + 0x44) = *param_2;
LAB_143618e32:
    if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  piVar22 = (int *)(param_1 + 0x44);
  dVar10 = (double)_DAT_14c75efe0;
  dVar21 = *param_4 - dVar10;
  dVar33 = param_4[1] - dVar10;
  dVar37 = param_4[2] - dVar10;
  dVar11 = param_4[3] + dVar10;
  dVar36 = param_4[4] + dVar10;
  dVar10 = dVar10 + param_4[5];
  local_178 = (longlong *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) < 0) {
    FUN_14098bf12(local_178,0);
    local_17c = *piVar22;
  }
  iVar23 = local_17c;
  lVar25 = *(longlong *)(param_1 + 0x10);
  lVar20 = (longlong)local_17c;
  lVar16 = lVar20 * 0x70;
  dVar38 = *(double *)(lVar25 + 0x10 + lVar16);
  dVar34 = dVar37;
  if (dVar38 <= dVar37) {
    dVar34 = dVar38;
  }
  dVar38 = *(double *)(lVar25 + 8 + lVar16);
  dVar32 = dVar33;
  if (dVar38 <= dVar33) {
    dVar32 = dVar38;
  }
  dVar38 = dVar21;
  if (*(double *)(lVar25 + lVar16) <= dVar21) {
    dVar38 = *(double *)(lVar25 + lVar16);
  }
  lVar17 = lVar25 + lVar16;
  dVar5 = *(double *)(lVar25 + 0x28 + lVar16);
  dVar6 = dVar10;
  if (dVar10 <= dVar5) {
    dVar6 = dVar5;
  }
  dVar5 = *(double *)(lVar25 + 0x20 + lVar16);
  dVar7 = dVar36;
  if (dVar36 <= dVar5) {
    dVar7 = dVar5;
  }
  uVar29 = SUB84(dVar11,0);
  uVar31 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar5 = *(double *)(lVar25 + 0x18 + lVar16);
  if (dVar11 <= dVar5) {
    uVar29 = SUB84(dVar5,0);
    uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  if ((*(byte *)(lVar25 + 0x6c + lVar16) & 1) == 0) {
    if (*(double *)(lVar17 + 0x40) <= dVar34) {
      dVar34 = *(double *)(lVar17 + 0x40);
    }
    if (*(double *)(lVar17 + 0x38) <= dVar32) {
      dVar32 = *(double *)(lVar17 + 0x38);
    }
    if (*(double *)(lVar17 + 0x30) <= dVar38) {
      dVar38 = *(double *)(lVar17 + 0x30);
    }
    if (dVar6 <= *(double *)(lVar17 + 0x58)) {
      dVar6 = *(double *)(lVar17 + 0x58);
    }
    if (dVar7 <= *(double *)(lVar17 + 0x50)) {
      dVar7 = *(double *)(lVar17 + 0x50);
    }
    dVar5 = *(double *)(lVar17 + 0x48);
    if ((double)CONCAT44(uVar31,uVar29) <= dVar5) {
      uVar29 = SUB84(dVar5,0);
      uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
  }
  iVar18 = *(int *)(param_1 + 0x1f0);
  lVar25 = (longlong)iVar18;
  *(uint *)(param_1 + 0x1f0) = iVar18 + 1U;
  local_170 = param_3;
  local_168 = param_2;
  if (*(uint *)(param_1 + 500) < iVar18 + 1U) {
    local_160 = dVar21;
    local_158 = dVar11;
    FUN_14098c05e(local_178,iVar18);
    dVar21 = local_160;
    dVar11 = local_158;
  }
  lVar16 = *(longlong *)(param_1 + 0x1e8);
  *(longlong *)(lVar16 + lVar25 * 0x18) = lVar17;
  *(undefined4 *)(lVar16 + 8 + lVar25 * 0x18) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(lVar16 + 0x10 + lVar25 * 0x18) = 0;
  uVar24 = *(uint *)(param_1 + 0x1f0);
  local_148 = piVar22;
  if (uVar24 != 0) {
    dVar38 = (double)CONCAT44(uVar31,uVar29) - dVar38;
    dVar5 = (dVar36 - dVar33) * (dVar10 - dVar37) +
            (dVar11 - dVar21) * (dVar36 - dVar33) + (dVar11 - dVar21) * (dVar10 - dVar37);
    dVar38 = (dVar7 - dVar32) * (dVar6 - dVar34) +
             dVar38 * (dVar7 - dVar32) + (dVar6 - dVar34) * dVar38;
    local_140 = param_4 + 3;
    lVar25 = 0x10;
    uVar26 = 0;
    bVar19 = false;
    plVar15 = local_178;
    dVar38 = dVar38 + dVar38;
    local_160 = dVar36;
    local_158 = dVar37;
    local_150 = param_4;
    do {
      lVar16 = *plVar15;
      pdVar9 = *(double **)(lVar16 + -0x10 + lVar25);
      dVar37 = *pdVar9;
      dVar36 = pdVar9[1];
      dVar34 = pdVar9[2];
      dVar32 = pdVar9[3];
      dVar6 = pdVar9[4];
      uVar29 = SUB84(dVar6,0);
      uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar7 = pdVar9[5];
      uVar39 = SUB84(dVar7,0);
      uVar40 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if ((*(byte *)((longlong)pdVar9 + 0x6c) & 1) == 0) {
        if (pdVar9[8] <= dVar34) {
          dVar34 = pdVar9[8];
        }
        if (pdVar9[7] <= dVar36) {
          dVar36 = pdVar9[7];
        }
        if (pdVar9[6] <= dVar37) {
          dVar37 = pdVar9[6];
        }
        dVar35 = pdVar9[0xb];
        if (dVar7 <= dVar35) {
          uVar39 = SUB84(dVar35,0);
          uVar40 = (undefined4)((ulonglong)dVar35 >> 0x20);
        }
        dVar7 = pdVar9[10];
        if (dVar6 <= dVar7) {
          uVar29 = SUB84(dVar7,0);
          uVar31 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        if (dVar32 <= pdVar9[9]) {
          dVar32 = pdVar9[9];
        }
        bVar27 = false;
      }
      else {
        bVar27 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38 +
                          (longlong)*(int *)(pdVar9 + 0xc) * 0x48) < DAT_14c75efe8;
      }
      uVar28 = SUB84(dVar34,0);
      uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
      if (local_158 <= dVar34) {
        uVar28 = SUB84(local_158,0);
        uVar30 = (undefined4)((ulonglong)local_158 >> 0x20);
      }
      dVar6 = dVar36;
      if (dVar33 <= dVar36) {
        dVar6 = dVar33;
      }
      dVar7 = dVar37;
      if (dVar21 <= dVar37) {
        dVar7 = dVar21;
      }
      dVar35 = (double)CONCAT44(uVar40,uVar39);
      if ((double)CONCAT44(uVar40,uVar39) <= dVar10) {
        dVar35 = dVar10;
      }
      dVar35 = dVar35 - (double)CONCAT44(uVar30,uVar28);
      uVar28 = uVar29;
      uVar30 = uVar31;
      if ((double)CONCAT44(uVar31,uVar29) <= local_160) {
        uVar28 = SUB84(local_160,0);
        uVar30 = (undefined4)((ulonglong)local_160 >> 0x20);
      }
      dVar6 = (double)CONCAT44(uVar30,uVar28) - dVar6;
      dVar12 = dVar32;
      if (dVar32 <= dVar11) {
        dVar12 = dVar11;
      }
      dVar6 = dVar6 * dVar35 + (dVar12 - dVar7) * dVar6 + dVar35 * (dVar12 - dVar7);
      dVar6 = dVar6 + dVar6;
      dVar7 = *(double *)(lVar16 + lVar25) + dVar6;
      dVar35 = dVar7;
      if (dVar38 <= dVar7) {
        dVar35 = dVar38;
      }
      if (dVar7 < dVar38) {
        iVar23 = *(int *)(lVar16 + -8 + lVar25);
        bVar19 = bVar27;
      }
      if (((*(byte *)((longlong)pdVar9 + 0x6c) & 1) == 0) &&
         (dVar34 = (double)CONCAT44(uVar40,uVar39) - dVar34,
         dVar36 = (double)CONCAT44(uVar31,uVar29) - dVar36,
         dVar37 = dVar36 * dVar34 + (dVar32 - dVar37) * dVar36 + dVar34 * (dVar32 - dVar37),
         dVar37 = *(double *)(lVar16 + lVar25) + (dVar6 - (dVar37 + dVar37)),
         dVar5 + dVar5 + dVar37 < dVar35)) {
        if ((int)uVar24 < -2) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar24 + 2);
        }
        uVar14 = *(uint *)(param_1 + 500);
        if ((int)uVar14 < (int)(uVar24 + 2)) {
          FUN_14098bf12();
          uVar24 = *(uint *)(param_1 + 0x1f0);
          uVar14 = *(uint *)(param_1 + 500);
          plVar15 = local_178;
        }
        iVar18 = *(int *)(pdVar9 + 0xc);
        lVar16 = *(longlong *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x1f0) = uVar24 + 1;
        if (uVar14 < uVar24 + 1) {
          FUN_14098c05e(plVar15,uVar24);
          plVar15 = local_178;
        }
        lVar20 = *(longlong *)(param_1 + 0x1e8);
        lVar17 = (longlong)(int)uVar24;
        *(longlong *)(lVar20 + lVar17 * 0x18) = (longlong)iVar18 * 0x70 + lVar16;
        *(undefined4 *)(lVar20 + 8 + lVar17 * 0x18) = *(undefined4 *)(pdVar9 + 0xc);
        *(double *)(lVar20 + 0x10 + lVar17 * 0x18) = dVar37;
        iVar18 = *(int *)((longlong)pdVar9 + 100);
        lVar16 = *(longlong *)(param_1 + 0x10);
        iVar8 = *(int *)(param_1 + 0x1f0);
        lVar20 = (longlong)iVar8;
        *(uint *)(param_1 + 0x1f0) = iVar8 + 1U;
        if (*(uint *)(param_1 + 500) < iVar8 + 1U) {
          FUN_14098c05e(plVar15,iVar8);
          plVar15 = local_178;
        }
        lVar17 = *(longlong *)(param_1 + 0x1e8);
        *(longlong *)(lVar17 + lVar20 * 0x18) = (longlong)iVar18 * 0x70 + lVar16;
        *(undefined4 *)(lVar17 + 8 + lVar20 * 0x18) = *(undefined4 *)((longlong)pdVar9 + 100);
        *(double *)(lVar17 + 0x10 + lVar20 * 0x18) = dVar37;
        uVar24 = *(uint *)(param_1 + 0x1f0);
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 0x18;
      dVar38 = dVar35;
    } while (uVar26 != uVar24);
    if (bVar19) {
      lVar17 = (longlong)iVar23 * 0x70;
      iVar18 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar17);
      lVar20 = (longlong)iVar18 * 0x48;
      local_138 = *local_170;
      uStack_130 = local_170[1];
      local_128 = *local_150;
      dStack_120 = local_150[1];
      local_118 = local_150[2];
      local_110 = *(undefined4 *)local_140;
      uStack_10c = *(undefined4 *)((longlong)local_140 + 4);
      uStack_108 = *(undefined4 *)(local_140 + 1);
      uStack_104 = *(undefined4 *)((longlong)local_140 + 0xc);
      local_100 = local_140[2];
      FUN_147c5ee82(*(longlong *)(param_1 + 0x20) + lVar20);
      FUN_147c5e180(*(longlong *)(param_1 + 0x20) + lVar20,
                    *(longlong *)(param_1 + 0x20) + lVar20 + 0x30);
      lVar25 = *(longlong *)(param_1 + 0x10);
      lVar16 = *(longlong *)(param_1 + 0x20);
      dVar21 = *(double *)(lVar16 + 8 + lVar20);
      dVar36 = (double)_DAT_14c75efe0;
      dVar33 = *(double *)(lVar16 + 0x10 + lVar20);
      dVar37 = *(double *)(lVar16 + 0x18 + lVar20);
      dVar10 = *(double *)(lVar16 + 0x20 + lVar20);
      dVar11 = *(double *)(lVar16 + 0x28 + lVar20);
      *(double *)(lVar25 + lVar17) = *(double *)(lVar16 + lVar20) - dVar36;
      *(double *)(lVar25 + 8 + lVar17) = dVar21 - dVar36;
      *(double *)(lVar25 + 0x10 + lVar17) = dVar33 - dVar36;
      *(double *)(lVar25 + 0x18 + lVar17) = dVar37 + dVar36;
      *(double *)(lVar25 + 0x20 + lVar17) = dVar10 + dVar36;
      *(double *)(lVar25 + 0x28 + lVar17) = dVar36 + dVar11;
      FUN_14361833c(param_1,iVar23,1);
      *local_168 = iVar23;
      local_168[1] = iVar18;
      param_2 = local_168;
      goto LAB_143618e32;
    }
    lVar20 = (longlong)iVar23;
    param_4 = local_150;
    local_17c = iVar23;
  }
  piVar22 = local_168;
  plVar15 = (longlong *)(param_1 + 0x10);
  FUN_143619190(param_1,local_168,local_170,param_4);
  lVar25 = *(longlong *)(param_1 + 0x10);
  lVar20 = lVar20 * 0x70;
  iVar23 = *(int *)(lVar25 + 0x68 + lVar20);
  iVar18 = *(int *)(param_1 + 0x48);
  lVar16 = (longlong)iVar18;
  if (lVar16 == -1) {
    iVar18 = *(int *)(param_1 + 0x18);
    lVar16 = (longlong)iVar18;
    *(int *)(param_1 + 0x18) = iVar18 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar18) {
      FUN_14008b9bc(plVar15,iVar18);
      lVar25 = *plVar15;
    }
    pbVar1 = (byte *)(lVar25 + 0x6c + lVar16 * 0x70);
    *pbVar1 = *pbVar1 & 0xfe;
    lVar25 = *plVar15;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar25 + 100 + lVar16 * 0x70);
  }
  lVar16 = lVar16 * 0x70;
  pdVar9 = (double *)(lVar25 + lVar16);
  *(int *)(lVar25 + 0x68 + lVar16) = iVar23;
  *(int *)(lVar25 + 0x60 + lVar16) = local_17c;
  iVar8 = *piVar22;
  *(int *)(lVar25 + 100 + lVar16) = iVar8;
  lVar17 = *plVar15;
  *(undefined8 *)(lVar25 + 0x10 + lVar16) = *(undefined8 *)(lVar17 + 0x10 + lVar20);
  uVar13 = ((undefined8 *)(lVar17 + lVar20))[1];
  *(undefined8 *)(lVar25 + lVar16) = *(undefined8 *)(lVar17 + lVar20);
  ((undefined8 *)(lVar25 + lVar16))[1] = uVar13;
  *(undefined8 *)(lVar25 + 0x28 + lVar16) = *(undefined8 *)(lVar17 + 0x28 + lVar20);
  puVar2 = (undefined8 *)(lVar17 + 0x18 + lVar20);
  uVar13 = puVar2[1];
  puVar3 = (undefined8 *)(lVar25 + 0x18 + lVar16);
  *puVar3 = *puVar2;
  puVar3[1] = uVar13;
  lVar25 = *plVar15;
  if ((*(byte *)(lVar25 + 0x6c + lVar20) & 1) == 0) {
    lVar25 = lVar25 + lVar20;
    dVar21 = pdVar9[2];
    uVar29 = SUB84(dVar21,0);
    uVar31 = (undefined4)((ulonglong)dVar21 >> 0x20);
    dVar33 = *(double *)(lVar25 + 0x40);
    if (dVar33 <= dVar21) {
      uVar29 = SUB84(dVar33,0);
      uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    dVar21 = pdVar9[1];
    if (*(double *)(lVar25 + 0x38) <= pdVar9[1]) {
      dVar21 = *(double *)(lVar25 + 0x38);
    }
    dVar33 = *pdVar9;
    if (*(double *)(lVar25 + 0x30) <= *pdVar9) {
      dVar33 = *(double *)(lVar25 + 0x30);
    }
    *pdVar9 = dVar33;
    pdVar9[1] = dVar21;
    pdVar9[2] = (double)CONCAT44(uVar31,uVar29);
    dVar21 = pdVar9[5];
    uVar29 = SUB84(dVar21,0);
    uVar31 = (undefined4)((ulonglong)dVar21 >> 0x20);
    dVar33 = *(double *)(lVar25 + 0x58);
    if (dVar21 <= dVar33) {
      uVar29 = SUB84(dVar33,0);
      uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    dVar21 = pdVar9[4];
    if (pdVar9[4] <= *(double *)(lVar25 + 0x50)) {
      dVar21 = *(double *)(lVar25 + 0x50);
    }
    dVar33 = pdVar9[3];
    if (pdVar9[3] <= *(double *)(lVar25 + 0x48)) {
      dVar33 = *(double *)(lVar25 + 0x48);
    }
    pdVar9[3] = dVar33;
    pdVar9[4] = dVar21;
    pdVar9[5] = (double)CONCAT44(uVar31,uVar29);
    lVar25 = *plVar15;
  }
  lVar16 = (longlong)iVar8 * 0x70;
  dVar21 = *(double *)(lVar25 + 0x10 + lVar16);
  pdVar9[8] = dVar21;
  dVar33 = ((double *)(lVar25 + lVar16))[1];
  pdVar9[6] = *(double *)(lVar25 + lVar16);
  pdVar9[7] = dVar33;
  puVar4 = (undefined4 *)(lVar25 + 0x18 + lVar16);
  uVar29 = puVar4[1];
  uVar31 = puVar4[2];
  uVar39 = puVar4[3];
  *(undefined4 *)(pdVar9 + 9) = *puVar4;
  *(undefined4 *)((longlong)pdVar9 + 0x4c) = uVar29;
  *(undefined4 *)(pdVar9 + 10) = uVar31;
  *(undefined4 *)((longlong)pdVar9 + 0x54) = uVar39;
  pdVar9[0xb] = *(double *)(lVar25 + 0x28 + lVar16);
  piVar22 = local_148;
  if (iVar23 != -1) {
    lVar25 = *plVar15;
    dVar21 = (double)((longlong)*(int *)(lVar25 + 0x68 + lVar20) * 0x70);
    piVar22 = (int *)((longlong)iVar23 * 0x70 + lVar25 +
                      (ulonglong)(*(int *)(lVar25 + 0x60 + (longlong)dVar21) != local_17c) * 4 +
                     0x60);
  }
  *piVar22 = iVar18;
  *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar20) = iVar18;
  *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar16) = iVar18;
  FUN_14361833c(param_1,iVar18,CONCAT71((int7)((ulonglong)dVar21 >> 8),1));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 143619190 FUN_143619190 body=707 status=ok
// SIG undefined FUN_143619190(void)

/* WARNING: Removing unreachable block (ram,0x000143619334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_143619190(longlong param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  double dStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar11 = *(int *)(param_1 + 0x4c);
  lVar13 = (longlong)iVar11;
  if (lVar13 == -1) {
    iVar12 = *(int *)(param_1 + 0x28);
    iVar11 = *(int *)(param_1 + 0x18);
    lVar13 = (longlong)iVar11;
    *(int *)(param_1 + 0x18) = iVar11 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar11) {
      FUN_14008b9bc(param_1 + 0x10,iVar11);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar13 * 0x70) = iVar12;
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar13 * 0x70);
    *pbVar2 = *pbVar2 | 1;
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_78 = *param_4;
    dStack_70 = param_4[1];
    local_68 = param_4[2];
    local_60 = param_4[3];
    uStack_58 = param_4[4];
    local_50 = param_4[5];
    local_98 = (undefined8 *)0x0;
    uStack_90 = 1;
    FUN_147c5e334(&local_98,0);
    *local_98 = local_88;
    local_98[1] = uStack_80;
    local_98[2] = local_78;
    local_98[3] = dStack_70;
    local_98[4] = local_68;
    local_98[7] = local_50;
    *(undefined4 *)(local_98 + 5) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_98 + 0x2c) = local_60._4_4_;
    *(undefined4 *)(local_98 + 6) = (undefined4)uStack_58;
    *(undefined4 *)((longlong)local_98 + 0x34) = uStack_58._4_4_;
    FUN_147c5dfc8(&local_e8,&local_98);
    iVar9 = *(int *)(param_1 + 0x28);
    lVar14 = (longlong)iVar9;
    *(uint *)(param_1 + 0x28) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar9 + 1U) {
      FUN_147c5e0ec((longlong *)(param_1 + 0x20),iVar9);
    }
    lVar10 = *(longlong *)(param_1 + 0x20);
    *(double *)(lVar10 + 0x10 + lVar14 * 0x48) = local_d8;
    puVar1 = (undefined8 *)(lVar10 + lVar14 * 0x48);
    *puVar1 = local_e8;
    puVar1[1] = uStack_e0;
    *(ulonglong *)(lVar10 + 0x28 + lVar14 * 0x48) = CONCAT44(uStack_bc,local_c0);
    puVar3 = (undefined4 *)(lVar10 + 0x18 + lVar14 * 0x48);
    *puVar3 = (undefined4)uStack_d0;
    puVar3[1] = uStack_d0._4_4_;
    puVar3[2] = (undefined4)uStack_c8;
    puVar3[3] = uStack_c8._4_4_;
    *(undefined8 *)(lVar10 + 0x30 + lVar14 * 0x48) = 0;
    *(double *)(lVar10 + 0x30 + lVar14 * 0x48) = dStack_b8;
    *(undefined4 *)(lVar10 + 0x38 + lVar14 * 0x48) = (undefined4)local_b0;
    *(undefined4 *)(lVar10 + 0x3c + lVar14 * 0x48) = local_b0._4_4_;
    *(undefined1 *)(lVar10 + 0x40 + lVar14 * 0x48) = local_a8;
    local_b0 = 0.0;
    dStack_b8 = 0.0;
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar13 * 0x70);
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar13 * 0x70);
    local_e8 = *param_3;
    uStack_e0 = param_3[1];
    uStack_c8 = param_4[2];
    local_d8 = *param_4;
    uStack_d0 = param_4[1];
    local_c0 = *(undefined4 *)(param_4 + 3);
    uStack_bc = *(undefined4 *)((longlong)param_4 + 0x1c);
    dStack_b8 = param_4[4];
    local_b0 = param_4[5];
    FUN_147c5ee82((longlong)iVar12 * 0x48 + *(longlong *)(param_1 + 0x20));
  }
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar15 = (double)_DAT_14c75efe0;
  dVar6 = param_4[3];
  dVar7 = param_4[4];
  dVar8 = param_4[5];
  lVar14 = *(longlong *)(param_1 + 0x10);
  lVar13 = lVar13 * 0x70;
  *(double *)(lVar14 + lVar13) = *param_4 - dVar15;
  *(double *)(lVar14 + 8 + lVar13) = dVar4 - dVar15;
  *(double *)(lVar14 + 0x10 + lVar13) = dVar5 - dVar15;
  *(double *)(lVar14 + 0x18 + lVar13) = dVar6 + dVar15;
  *(double *)(lVar14 + 0x20 + lVar13) = dVar7 + dVar15;
  *(double *)(lVar14 + 0x28 + lVar13) = dVar15 + dVar8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar13) = 0xffffffff;
  *param_2 = iVar11;
  param_2[1] = iVar12;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143619454 FUN_143619454 body=723 status=ok
// SIG undefined FUN_143619454(void)

longlong FUN_143619454(longlong param_1,longlong param_2)

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
    *(undefined4 *)(lVar4 + 0x178) = 0;
    if (*(int *)(lVar4 + 0x17c) != 0) {
      FUN_14481578e(lVar4 + 0x170,0);
    }
    FUN_1436112a9(*(undefined8 *)(lVar4 + 400),*(undefined4 *)(lVar4 + 0x198));
    *(undefined4 *)(lVar4 + 0x198) = 0;
    if (*(int *)(lVar4 + 0x19c) != 0) {
      FUN_143618060(lVar4 + 400);
    }
    *(undefined4 *)(lVar4 + 0x188) = 0;
    if (*(int *)(lVar4 + 0x18c) != 0) {
      FUN_14481578e(lVar4 + 0x180,0);
    }
    if (lVar4 == param_2) break;
    FUN_140484938(lVar4 + 0x10,param_2 + 0x10);
    FUN_147c5efae(lVar4 + 0x20,param_2 + 0x20);
    FUN_147c5ef5e(lVar4 + 0x30,param_2 + 0x30);
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    FUN_140484a40(lVar4 + 0x50,param_2 + 0x50);
    FUN_14054c6c4(lVar4 + 0xa0,param_2 + 0xa0);
    FUN_14054c6c4(lVar4 + 0xb0,param_2 + 0xb0);
    uVar2 = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar4 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar4 + 0xec) = uVar2;
    *(undefined4 *)(lVar4 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar4 + 0xfc) = uVar2;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    FUN_147c5ef5e(lVar4 + 0x108,param_2 + 0x108);
    FUN_147c5f0b6(lVar4 + 0x118,param_2 + 0x118);
    FUN_147c5f110(lVar4 + 0x128);
    *(undefined4 *)(lVar4 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    *(undefined4 *)(lVar4 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined8 *)(lVar4 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *(undefined4 *)(lVar4 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(lVar4 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined8 *)(lVar4 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    *(undefined1 *)(lVar4 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
    *(undefined1 *)(lVar4 + 0x1a1) = *(undefined1 *)(param_2 + 0x1a1);
    *(undefined1 *)(lVar4 + 0x1a2) = *(undefined1 *)(param_2 + 0x1a2);
    lVar3 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_143611140(lVar3);
        FUN_1400020a8(lVar3);
      }
      return param_1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1f8);
      FUN_14360b95a(lVar3);
      lVar1 = *(longlong *)(lVar4 + 0xc0);
      *(longlong *)(lVar4 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_143611140(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
    }
    lVar4 = lVar3;
    param_2 = *(longlong *)(param_2 + 0xc0);
  }
  return param_1;
}



// FUNCTION 143619728 FUN_143619728 body=1255 status=ok
// SIG undefined FUN_143619728(void)

undefined8 * FUN_143619728(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_14aa1cbe0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140484ca8(param_1 + 2,iVar1,0);
    FUN_1449bab58(param_1[2],uVar7,iVar1);
  }
  FUN_147c5f25e(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_147c5e230(param_1 + 6,iVar1,0);
    FUN_147c5e292(param_1[6],uVar7,iVar1);
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
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_147c5e230(param_1 + 0x21,iVar1,0);
    FUN_147c5e292(param_1[0x21],uVar7,iVar1);
  }
  FUN_147c5f2ac(param_1 + 0x23,param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  param_1[0x2c] = *(undefined8 *)(param_2 + 0x160);
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x1a0);
  *(undefined1 *)((longlong)param_1 + 0x1a1) = *(undefined1 *)(param_2 + 0x1a1);
  *(undefined1 *)((longlong)param_1 + 0x1a2) = *(undefined1 *)(param_2 + 0x1a2);
  param_1[0x35] = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  pvVar2 = *(void **)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x36) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x35,iVar1,0);
    memcpy((void *)param_1[0x35],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x37] = 0;
  iVar1 = *(int *)(param_2 + 0x1c0);
  pvVar2 = *(void **)(param_2 + 0x1b8);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x37,iVar1,0);
    memcpy((void *)param_1[0x37],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x39] = 0;
  iVar1 = *(int *)(param_2 + 0x1d0);
  pvVar2 = *(void **)(param_2 + 0x1c8);
  *(int *)(param_1 + 0x3a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x39,iVar1,0);
    memcpy((void *)param_1[0x39],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x3b] = 0;
  iVar1 = *(int *)(param_2 + 0x1e0);
  pvVar2 = *(void **)(param_2 + 0x1d8);
  *(int *)(param_1 + 0x3c) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x3b,iVar1,0);
    memcpy((void *)param_1[0x3b],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_14098bf12(param_1 + 0x3d,0x20);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1f8,0x10);
    FUN_143619728(uVar7,lVar3);
    lVar3 = param_1[0x18];
    param_1[0x18] = uVar7;
    if (lVar3 != 0) {
      FUN_143611140(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 143619c64 FUN_143619c64 body=54 status=ok
// SIG undefined FUN_143619c64(void)

undefined8 FUN_143619c64(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  return 0;
}



// FUNCTION 143619ca8 FUN_143619ca8 body=1106 status=ok
// SIG undefined FUN_143619ca8(void)

void FUN_143619ca8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FNullSubUVCutoutVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x20;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_143619e3d:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143619e3d;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x20);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x11100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_14361a06c;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14361a06c:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361a0fc FUN_14361a0fc body=25 status=ok
// SIG undefined FUN_14361a0fc(void)

void FUN_14361a0fc(void)

{
  FUN_145de35fa();
  FUN_14170c56a(&DAT_14caf6148);
  return;
}



// FUNCTION 14361a116 FUN_14361a116 body=25 status=ok
// SIG undefined FUN_14361a116(void)

void FUN_14361a116(void)

{
  FUN_145de34a2();
  FUN_14170c56a(&DAT_14caf61b8);
  return;
}



// FUNCTION 14361a130 FUN_14361a130 body=25 status=ok
// SIG undefined FUN_14361a130(void)

void FUN_14361a130(void)

{
  FUN_146118e30();
  FUN_14170c56a(&DAT_14caf6228);
  return;
}



// FUNCTION 14361a14a FUN_14361a14a body=293 status=ok
// SIG undefined FUN_14361a14a(void)

undefined4 * FUN_14361a14a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c619fa(param_1,local_40);
  lVar5 = *(longlong *)*param_4;
  *local_38 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar1 = FUN_14361a270(param_1,param_3,local_38);
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
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147c614e6(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14361a270 FUN_14361a270 body=196 status=ok
// SIG undefined FUN_14361a270(void)

undefined8 FUN_14361a270(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_147c61ae0(param_1,param_2,&local_38);
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar5 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar4;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar5;
      puVar1[3] = uVar3;
      FUN_147c61bb0(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_14361a296;
    }
  }
  uVar7 = 0;
LAB_14361a296:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14361a336 FUN_14361a336 body=29 status=ok
// SIG undefined FUN_14361a336(void)

undefined8 FUN_14361a336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14361a4d2 FUN_14361a4d2 body=93 status=ok
// SIG undefined FUN_14361a4d2(void)

void FUN_14361a4d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa1da80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14361a530 FUN_14361a530 body=93 status=ok
// SIG undefined FUN_14361a530(void)

void FUN_14361a530(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa1da80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14361a58e FUN_14361a58e body=126 status=ok
// SIG undefined FUN_14361a58e(void)

void FUN_14361a58e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa1da80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014361a5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14361a616 FUN_14361a616 body=266 status=ok
// SIG undefined FUN_14361a616(void)

undefined8 FUN_14361a616(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14361a71a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14361a71a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14361a71a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14361a6c1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14620678e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14361a6c1;
    }
  }
  uVar6 = 0;
LAB_14361a6c1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14361a722 FUN_14361a722 body=880 status=ok
// SIG undefined FUN_14361a722(void)

void FUN_14361a722(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  lVar9 = *(longlong *)(lVar3 + 0x138);
  if (lVar9 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x40);
    uVar14 = (ulonglong)*(uint *)(lVar9 + 0x88);
    if ((int)*(uint *)(lVar9 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar14);
    }
    if (uVar14 != 0) {
      local_b0 = param_1;
      FUN_144724de8(&local_78,uVar14);
      uVar12 = 0;
      do {
        uVar5 = uStack_70;
        lVar7 = *(longlong *)(lVar9 + 0x80);
        if (*(longlong *)(lVar9 + 0x80) == 0) {
          lVar7 = lVar9 + 0x78;
        }
        lVar7 = *(longlong *)(lVar7 + uVar12 * 8);
        lVar4 = *(longlong *)(lVar3 + 0x138);
        lVar16 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_1417333de(&local_78,uVar5 & 0xffffffff);
        }
        local_78[lVar16 * 2] = lVar7;
        local_78[lVar16 * 2 + 1] = lVar4;
        uVar12 = uVar12 + 1;
      } while (uVar14 != uVar12);
      if ((longlong)(int)uStack_70 != 0) {
        plVar13 = local_78 + (longlong)(int)uStack_70 * 2;
        plVar15 = local_78;
        do {
          lVar3 = *(longlong *)(*plVar15 + 0x10);
          bVar2 = *(byte *)(lVar3 + 0x1c);
          bVar11 = bVar2 & 0x1f;
          lVar9 = lVar3;
          if (bVar11 == 4 && lVar3 != 0) {
            do {
              lVar9 = *(longlong *)(lVar9 + 0x20);
              bVar11 = *(byte *)(lVar9 + 0x1c) & 0x1f;
            } while (lVar9 != 0 && bVar11 == 4);
          }
          if (bVar11 == 0xb) {
            local_98 = 1.0;
            dStack_90 = 1.0;
            local_88 = 1.0;
            local_a0 = (undefined8 *)0x0;
            if ((bVar2 & 0x40) == 0) {
              lVar9 = lVar3;
              if ((char)bVar2 < '\0') {
                lVar9 = *(longlong *)(lVar3 + 0x88);
                local_88 = *(double *)(lVar3 + 0x30);
                local_98 = *(double *)(lVar3 + 0x20);
                dStack_90 = *(double *)(lVar3 + 0x28);
              }
            }
            else {
              lVar9 = *(longlong *)(lVar3 + 0x28);
            }
            FUN_146e3f3c2(lVar9,&local_68);
            puVar10 = local_a0;
            local_a0 = local_68;
            local_68 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar10 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)puVar10 + 0xc) == 0)) {
                (**(code **)*puVar10)(puVar10,1);
              }
              if (local_68 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(local_68 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)local_68 + 0xc) == 0)) {
                  (**(code **)*local_68)(local_68,1);
                }
              }
            }
            puVar10 = local_a0;
            if (*(char *)((longlong)local_a0 + 0x1c) != '\v') {
              puVar10 = (undefined8 *)0x0;
            }
            if (puVar10 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
              UNLOCK();
            }
            FUN_146e3fdd8(puVar10,local_b0[1]);
            if ((((local_98 != 1.0) || (dStack_90 != 1.0)) || (local_88 != 1.0)) || (NAN(local_88)))
            {
              puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
              local_68 = puVar10;
              FUN_147c622a4(puVar8,&local_68,&local_98,0);
              if (puVar8 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                UNLOCK();
              }
              local_a8 = puVar8;
              FUN_146ef2f4a(plVar15,&local_a8);
              if (local_a8 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(local_a8 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)local_a8 + 0xc) == 0)) {
                  puVar8 = (undefined8 *)*local_a8;
                  puVar10 = local_a8;
                  goto LAB_14361a9a4;
                }
              }
            }
            else {
              FUN_146ef2f4a(plVar15,&local_a0);
              if (puVar10 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar10 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)puVar10 + 0xc) == 0)) {
                  puVar8 = (undefined8 *)*puVar10;
LAB_14361a9a4:
                  (*(code *)*puVar8)(puVar10,1);
                }
              }
            }
            if (local_a0 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_a0 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)local_a0 + 0xc) == 0)) {
                (**(code **)*local_a0)(local_a0,1);
              }
            }
          }
          plVar15 = plVar15 + 2;
        } while (plVar15 != plVar13);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14361aa94 FUN_14361aa94 body=663 status=ok
// SIG undefined FUN_14361aa94(void)

void FUN_14361aa94(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 **local_70;
  ulonglong *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  local_a0 = *(undefined8 *)param_1[3];
  local_98 = *(undefined4 *)((undefined8 *)param_1[3] + 1);
  local_50 = *(undefined8 *)param_1[1];
  lVar8 = *(longlong *)(lVar1 + 0x108);
  if (*(longlong *)(lVar1 + 0x108) == 0) {
    lVar8 = lVar1;
  }
  local_68 = (ulonglong *)0x0;
  uStack_60 = 0;
  if (*(longlong *)(lVar8 + 0x138) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x138) + 0x40);
    uVar9 = (ulonglong)*(uint *)(lVar14 + 0x88);
    if ((int)*(uint *)(lVar14 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    if (uVar9 != 0) {
      lVar7 = lVar14 + 0x78;
      local_b0 = param_1[2];
      FUN_144724de8(&local_68,uVar9);
      uVar13 = 0;
      do {
        uVar5 = uStack_60;
        lVar15 = *(longlong *)(lVar14 + 0x80);
        if (*(longlong *)(lVar14 + 0x80) == 0) {
          lVar15 = lVar7;
        }
        uVar2 = *(ulonglong *)(lVar15 + uVar13 * 8);
        uVar3 = *(ulonglong *)(lVar8 + 0x138);
        lVar15 = (longlong)(int)uStack_60;
        uVar6 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
        if (uStack_60._4_4_ < uVar6) {
          local_a8 = lVar7;
          FUN_1417333de(&local_68,uVar5 & 0xffffffff);
          lVar7 = local_a8;
        }
        local_68[lVar15 * 2] = uVar2;
        local_68[lVar15 * 2 + 1] = uVar3;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
      if ((longlong)(int)uStack_60 != 0) {
        puVar16 = local_68 + (longlong)(int)uStack_60 * 2;
        puVar10 = local_68;
        lVar14 = local_b0;
        do {
          lVar7 = *(longlong *)(lVar1 + 0x108);
          if (*(longlong *)(lVar1 + 0x108) == 0) {
            lVar7 = lVar1;
          }
          plVar4 = *(longlong **)(lVar7 + 0x170);
          if ((plVar4 != (longlong *)0x0) &&
             (lVar14 = local_b0, (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
            uVar9 = *puVar10;
            uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            plVar12 = plVar4 + 7;
            if ((longlong *)plVar4[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar4[8];
            }
            iVar11 = *(int *)((longlong)plVar12 +
                             (ulonglong)((int)plVar4[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
            if (iVar11 != -1) {
              do {
                lVar15 = *plVar4 + (longlong)iVar11 * 0x90;
                if (*(ulonglong *)(*plVar4 + (longlong)iVar11 * 0x90) == uVar9) {
                  if ((longlong *)(lVar15 + 0x10) != (longlong *)0x0 && lVar15 != 0) {
                    lVar7 = *(longlong *)(lVar15 + 0x10);
                  }
                  break;
                }
                iVar11 = *(int *)(lVar15 + 0x80);
              } while (iVar11 != -1);
            }
          }
          if (lVar7 == lVar1) {
            local_90 = &local_50;
            local_80 = &local_a0;
            local_78 = FUN_143623654;
            local_88 = lVar14;
            local_70 = &local_90;
            FUN_1417e76b4(lVar8,puVar10,&local_78);
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar16);
      }
      if (local_68 != (ulonglong *)0x0) {
        FUN_1400020a8(local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361ad2e FUN_14361ad2e body=576 status=ok
// SIG undefined FUN_14361ad2e(void)

void FUN_14361ad2e(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  undefined1 auStack_a8 [40];
  ulonglong *local_80;
  longlong local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  local_58 = (ulonglong *)0x0;
  uStack_50 = 0;
  if (*param_2 != 0) {
    lVar7 = *(longlong *)(*param_2 + 0x40);
    uVar13 = (ulonglong)*(uint *)(lVar7 + 0x88);
    if ((int)*(uint *)(lVar7 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar13);
    }
    if (uVar13 == 0) goto LAB_14361af32;
    lVar9 = lVar7 + 0x78;
    local_80 = param_2;
    FUN_144724de8(&local_58,uVar13);
    uVar14 = 0;
    puVar8 = local_80;
    do {
      uVar5 = uStack_50;
      lVar12 = *(longlong *)(lVar7 + 0x80);
      if (*(longlong *)(lVar7 + 0x80) == 0) {
        lVar12 = lVar9;
      }
      uVar2 = *(ulonglong *)(lVar12 + uVar14 * 8);
      uVar3 = *puVar8;
      lVar12 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        local_78 = lVar9;
        FUN_1417333de(&local_58,uVar5 & 0xffffffff);
        puVar8 = local_80;
        lVar9 = local_78;
      }
      local_58[lVar12 * 2] = uVar2;
      local_58[lVar12 * 2 + 1] = uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
  }
  if ((longlong)(int)uStack_50 != 0) {
    puVar15 = local_58 + (longlong)(int)uStack_50 * 2;
    puVar8 = local_58;
    do {
      lVar7 = *(longlong *)(lVar1 + 0x108);
      if (*(longlong *)(lVar1 + 0x108) == 0) {
        lVar7 = lVar1;
      }
      plVar4 = *(longlong **)(lVar7 + 0x170);
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
        uVar13 = *puVar8;
        uVar6 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar11 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar4[8];
        }
        iVar10 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar4[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar10 != -1) {
          do {
            lVar9 = *plVar4 + (longlong)iVar10 * 0x90;
            if (*(ulonglong *)(*plVar4 + (longlong)iVar10 * 0x90) == uVar13) {
              if ((longlong *)(lVar9 + 0x10) != (longlong *)0x0 && lVar9 != 0) {
                lVar7 = *(longlong *)(lVar9 + 0x10);
              }
              break;
            }
            iVar10 = *(int *)(lVar9 + 0x80);
          } while (iVar10 != -1);
        }
      }
      if (lVar7 == lVar1) {
        local_70 = param_1[1];
        local_68 = &LAB_14361af70;
        local_60 = &local_70;
        FUN_1417e76b4(lVar1,puVar8,&local_68);
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar15);
  }
LAB_14361af32:
  if (local_58 != (ulonglong *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361af80 FUN_14361af80 body=2999 status=ok
// SIG undefined FUN_14361af80(void)

void FUN_14361af80(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  bool bVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined4 local_144;
  undefined8 local_140;
  longlong *local_138;
  code *local_130;
  int *local_128;
  undefined8 local_120;
  code **local_118;
  byte *local_110;
  code *local_108;
  code **local_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int local_c0;
  byte local_b9;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  puVar2 = (uint *)*param_1;
  local_78 = 0;
  uStack_70 = 0;
  local_140 = param_2;
  if (*(longlong *)(puVar2 + 0x4e) == 0) {
    iVar20 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(puVar2 + 0x4e) + 0x40);
    uVar8 = (ulonglong)*(uint *)(lVar9 + 0x88);
    if ((int)*(uint *)(lVar9 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    uStack_70 = 0;
    if (uVar8 != 0) {
      FUN_144724de8(&local_78,uVar8);
      uVar21 = 0;
      do {
        uVar5 = uStack_70;
        lVar24 = *(longlong *)(lVar9 + 0x80);
        if (*(longlong *)(lVar9 + 0x80) == 0) {
          lVar24 = lVar9 + 0x78;
        }
        uVar11 = *(undefined8 *)(lVar24 + uVar21 * 8);
        uVar3 = *(undefined8 *)(puVar2 + 0x4e);
        lVar24 = (longlong)(int)uStack_70;
        uVar7 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
        if (uStack_70._4_4_ < uVar7) {
          FUN_1417333de(&local_78,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar24 * 0x10) = uVar11;
        *(undefined8 *)(local_78 + 8 + lVar24 * 0x10) = uVar3;
        uVar21 = uVar21 + 1;
      } while (uVar8 != uVar21);
    }
    iVar20 = (int)uStack_70;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (code *)0x0;
  uStack_b0 = 0;
  local_7c = iVar20;
  FUN_144a2a070(puVar2,&local_b8,0xffffffff);
  uVar11 = local_140;
  if ((*DAT_14caf66d8 == 0) || ((*(byte *)((longlong)puVar2 + 0x3d) & 4) == 0)) {
    uVar7 = puVar2[0x51];
    uVar8 = (ulonglong)uVar7;
    if (((uVar7 == 0) ||
        (((uVar1 = puVar2[0x50], (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar10 == (longlong *)0x0)))) ||
       (((*(uint *)(plVar10 + 2) != uVar7 ||
         (uVar7 = *(uint *)(plVar10 + 1), uVar8 = (ulonglong)uVar7, (uVar7 & 0x10200000) != 0)) ||
        (lVar9 = *plVar10, lVar9 == 0)))) {
LAB_14361b150:
      pbVar12 = (byte *)((longlong)puVar2 + 0x17);
LAB_14361b154:
      local_144 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
      goto LAB_14361b16d;
    }
    lVar24 = *(longlong *)(lVar9 + 0xa8);
    if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_160 = &local_f8;
        local_f8 = FUN_144a7958c;
        local_150 = FUN_14081d0ea;
        local_158 = &LAB_146395584;
        local_168 = &LAB_147a0ba80;
        local_170 = &LAB_14575ccce;
        local_178 = L"Engine";
        local_180 = 0x40000000000;
        local_188 = 0x10000004;
        local_190 = 0x10;
        local_198 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      uVar8 = DAT_14cad2858;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (uVar8 = DAT_14cad2858 + 0x30,
         *(ulonglong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != uVar8)) goto LAB_14361b150;
      pbVar12 = (byte *)(lVar9 + 0x427);
      goto LAB_14361b154;
    }
    local_144 = (undefined4)CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
    bVar13 = 0;
  }
  else {
    pbVar12 = (byte *)((longlong)puVar2 + 0x17);
    local_144 = 0;
LAB_14361b16d:
    bVar13 = *pbVar12;
  }
  if (puVar2[1] != 0) {
    uVar7 = *puVar2;
    lVar9 = 0;
    if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_14361b1c4;
    plVar10 = (longlong *)
              ((ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       ((*(uint *)(plVar10 + 2) == puVar2[1] && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
      lVar9 = *plVar10;
      goto LAB_14361b1c4;
    }
  }
  lVar9 = 0;
LAB_14361b1c4:
  lVar24 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar10 = (longlong *)FUN_145a62958();
    lVar24 = plVar10[0x22];
    if (lVar24 == 0) {
      (**(code **)(*plVar10 + 1000))(plVar10);
      lVar24 = plVar10[0x22];
    }
  }
  cVar6 = *(char *)(lVar24 + 0x75);
  if (*(char *)(lVar9 + 0x31) != '\0') {
    cVar6 = *(char *)(lVar9 + 0x31);
  }
  local_88 = 0;
  if (bVar13 != 0) {
    bVar17 = bVar13 == 5 || (bVar13 & 0xfd) == 1;
    bVar13 = bVar13 & 0xfe;
    bVar25 = DAT_14c761714 != 0;
    local_88 = (uint)bVar17 << 0x10;
    bVar26 = bVar13 == 2;
    if (!bVar25) {
      bVar26 = bVar25;
    }
    if (bVar13 == 4) {
      bVar26 = bVar25;
    }
    if (bVar26) {
      uVar4 = CONCAT11(bVar13 == 4,bVar17);
      local_88 = (uint)uVar4 << 0x10;
      local_88 = CONCAT31(local_88._1_3_,1);
      if (cVar6 == '\x03') {
        local_88 = CONCAT22(uVar4,0x101);
      }
    }
  }
  local_b9 = 0;
  local_c0 = 0;
  if (0 < iVar20) {
    iVar14 = 0;
    puVar15 = puVar2;
    do {
      iVar23 = local_c0;
      puVar22 = (ulonglong *)((longlong)local_c0 * 0x10 + local_78);
      puVar16 = *(uint **)(puVar2 + 0x42);
      if (*(uint **)(puVar2 + 0x42) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      plVar10 = *(longlong **)(puVar16 + 0x5c);
      if ((plVar10 != (longlong *)0x0) &&
         (uVar11 = local_140, (int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34))) {
        uVar8 = *puVar22;
        uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        plVar19 = plVar10 + 7;
        if ((longlong *)plVar10[8] != (longlong *)0x0) {
          plVar19 = (longlong *)plVar10[8];
        }
        iVar18 = *(int *)((longlong)plVar19 +
                         (ulonglong)((int)plVar10[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar18 != -1) {
          do {
            lVar9 = *plVar10 + (longlong)iVar18 * 0x90;
            if (*(ulonglong *)(*plVar10 + (longlong)iVar18 * 0x90) == uVar8) {
              if ((undefined8 *)(lVar9 + 0x10) != (undefined8 *)0x0 && lVar9 != 0) {
                puVar16 = *(uint **)(lVar9 + 0x10);
              }
              break;
            }
            iVar18 = *(int *)(lVar9 + 0x80);
          } while (iVar18 != -1);
        }
      }
      if (puVar16 != puVar15) {
        iVar14 = local_c0;
      }
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = (code *)0x0;
      uStack_f0 = 0;
      local_c8 = 0;
      if (puVar16 == puVar2) {
        local_c8 = local_88;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        local_e8 = local_a8;
        uStack_e0 = uStack_a0;
        local_f8 = local_b8;
        uStack_f0 = uStack_b0;
      }
      else {
        FUN_144a2a070(puVar16,&local_f8,0xffffffff);
      }
      uVar7 = puVar16[1];
      if (uVar7 == 0) {
        bVar26 = false;
LAB_14361b55f:
        if ((((char)local_144 == '\0') || (puVar16[0x51] == 0)) ||
           ((uVar7 = puVar16[0x50], (int)uVar7 < 0 ||
            ((((DAT_14c9647dc <= (int)uVar7 ||
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar10 == (longlong *)0x0)) || (*(uint *)(plVar10 + 2) != puVar16[0x51])) ||
             (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar9 = *plVar10, lVar9 == 0)))))))) {
LAB_14361b600:
          pbVar12 = (byte *)((longlong)puVar16 + 0x17);
LAB_14361b604:
          uVar7 = (uint)*pbVar12;
          local_c8 = 0;
          if (*pbVar12 != 0) goto LAB_14361b617;
        }
        else {
          if ((*(longlong *)(lVar9 + 0xa8) == 0) ||
             ((*(byte *)(*(longlong *)(lVar9 + 0xa8) + 0x65) & 1) != 0)) {
            if (DAT_14cad2858 == 0) {
              local_130 = FUN_144a7958c;
              local_150 = FUN_14081d0ea;
              local_158 = &LAB_146395584;
              local_160 = &local_130;
              local_168 = &LAB_147a0ba80;
              local_170 = &LAB_14575ccce;
              local_178 = L"Engine";
              local_180 = 0x40000000000;
              local_188 = 0x10000004;
              local_190 = 0x10;
              local_198 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_14361b600;
            pbVar12 = (byte *)(lVar9 + 0x427);
            goto LAB_14361b604;
          }
          local_c8 = 0;
        }
      }
      else {
        uVar1 = *puVar16;
        bVar26 = false;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             ((*(uint *)(plVar10 + 2) != uVar7 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) {
            bVar26 = false;
          }
          else {
            if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar10;
            }
            else {
              lVar9 = 0;
            }
            lVar24 = DAT_14c997cc0;
            if (DAT_14c997cc0 == 0) {
              plVar10 = (longlong *)FUN_145a62958();
              lVar24 = plVar10[0x22];
              if (lVar24 == 0) {
                local_138 = plVar10;
                (**(code **)(*plVar10 + 1000))();
                lVar24 = local_138[0x22];
              }
            }
            cVar6 = *(char *)(lVar24 + 0x75);
            if (*(char *)(lVar9 + 0x31) != '\0') {
              cVar6 = *(char *)(lVar9 + 0x31);
            }
            bVar26 = cVar6 == '\x03';
            uVar7 = puVar16[1];
            if (uVar7 == 0) goto LAB_14361b55f;
          }
        }
        uVar1 = *puVar16;
        if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
            (plVar10 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar10 == (longlong *)0x0)) ||
           ((*(uint *)(plVar10 + 2) != uVar7 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
        goto LAB_14361b55f;
        if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
          lVar9 = *plVar10;
        }
        else {
          lVar9 = 0;
        }
        iVar23 = iVar23 - iVar14;
        if (*(int *)(lVar9 + 0x60) + *(int *)(lVar9 + 0x40) + *(int *)(lVar9 + 0x50) +
            *(int *)(lVar9 + 0x70) + *(int *)(lVar9 + 0x80) + *(int *)(lVar9 + 0x90) +
            *(int *)(lVar9 + 0xa0) <= iVar23) goto LAB_14361b55f;
        FUN_144a2a070(puVar16,&local_f8,iVar23);
        iVar23 = FUN_140757f18(puVar16,iVar23);
        if (((((char)local_144 != '\0') && (puVar16[0x51] != 0)) &&
            (uVar7 = puVar16[0x50], -1 < (int)uVar7)) &&
           ((((int)uVar7 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)) &&
            ((*(uint *)(plVar10 + 2) == puVar16[0x51] &&
             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar9 = *plVar10, lVar9 != 0)))))))) {
          if ((*(longlong *)(lVar9 + 0xa8) == 0) ||
             ((*(byte *)(*(longlong *)(lVar9 + 0xa8) + 0x65) & 1) != 0)) {
            if (DAT_14cad2858 == 0) {
              local_130 = FUN_144a7958c;
              local_150 = FUN_14081d0ea;
              local_158 = &LAB_146395584;
              local_160 = &local_130;
              local_168 = &LAB_147a0ba80;
              local_170 = &LAB_14575ccce;
              local_178 = L"Engine";
              local_180 = 0x40000000000;
              local_188 = 0x10000004;
              local_190 = 0x10;
              local_198 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_14361b50c;
            pbVar12 = (byte *)(lVar9 + 0x427);
            goto LAB_14361b510;
          }
LAB_14361b67c:
          local_c8 = 0;
          uVar11 = local_140;
          goto LAB_14361b68c;
        }
LAB_14361b50c:
        pbVar12 = (byte *)((longlong)puVar16 + 0x17);
LAB_14361b510:
        if ((iVar23 == 0) || (*pbVar12 == 0)) goto LAB_14361b67c;
        uVar7 = *(uint *)(&DAT_14aa1e2c0 +
                         (ulonglong)(iVar23 - 1) * 4 + (ulonglong)(*pbVar12 - 1) * 0x14);
        local_c8 = 0;
        uVar11 = local_140;
        if (uVar7 == 0) goto LAB_14361b68c;
LAB_14361b617:
        bVar25 = uVar7 == 5 || (uVar7 & 0xfffffffd) == 1;
        uVar7 = uVar7 & 0xfffffffe;
        bVar27 = DAT_14c761714 != 0;
        local_c8 = (uint)bVar25 << 0x10;
        bVar17 = uVar7 == 2;
        if (!bVar27) {
          bVar17 = bVar27;
        }
        if (uVar7 == 4) {
          bVar17 = bVar27;
        }
        if (bVar17) {
          uVar4 = CONCAT11(uVar7 == 4,bVar25);
          local_c8 = (uint)uVar4 << 0x10;
          local_c8 = CONCAT31(local_c8._1_3_,1);
          if (bVar26) {
            local_c8 = CONCAT22(uVar4,0x101);
          }
        }
      }
LAB_14361b68c:
      local_130 = (code *)&local_c0;
      local_128 = &local_7c;
      local_118 = &local_f8;
      local_110 = &local_b9;
      local_100 = &local_130;
      local_108 = FUN_14361bb38;
      local_120 = uVar11;
      FUN_1417e76b4(puVar2,puVar22,&local_108);
      local_c0 = local_c0 + 1;
      puVar15 = puVar16;
    } while (local_c0 < iVar20);
    if ((local_b9 & 1) != 0) {
      FUN_14034b25c(puVar2);
    }
  }
  if (((*(longlong *)(puVar2 + 0x4e) != 0) &&
      (lVar9 = *(longlong *)(*(longlong *)(puVar2 + 0x4e) + 8), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x260), lVar9 != 0)) {
    FUN_144840e24(lVar9,uVar11);
  }
  FUN_141731928(uVar11);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361bb38 FUN_14361bb38 body=314 status=ok
// SIG undefined FUN_14361bb38(void)

void FUN_14361bb38(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  byte bVar7;
  bool bVar8;
  
  lVar4 = *param_2;
  bVar1 = *(byte *)(lVar4 + 0x71 + (ulonglong)((*(byte *)(lVar4 + 8) & 3) == 0) * 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  bVar7 = *(byte *)(lVar4 + 0x1c) & 0x1f;
  if (bVar7 == 4 && lVar4 != 0) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x20);
      bVar7 = *(byte *)(lVar4 + 0x1c) & 0x1f;
    } while (lVar4 != 0 && bVar7 == 4);
  }
  lVar4 = param_1[3];
  if (*(char *)(lVar4 + 0x32) == '\x01') {
    bVar8 = true;
    lVar5 = 0;
    if (*(longlong *)param_1[2] != 0) {
      lVar5 = *(longlong *)(*(longlong *)param_1[2] + 0x40);
      bVar8 = false;
      if (((lVar5 != 0) && (*(byte *)(lVar5 + 0x90) != 0)) &&
         (bVar8 = true, 1 < *(byte *)(lVar5 + 0x90))) {
        bVar8 = *(char *)(lVar5 + 0x1ac) != '\x03';
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(int *)*param_1 < *(int *)param_1[1] | bVar8);
  }
  else {
    uVar6 = 0;
  }
  bVar2 = *(byte *)(lVar4 + 0x30 + (ulonglong)(bVar7 == 0xb));
  uVar3 = *(undefined1 *)(lVar4 + 0x33);
  FUN_141731ec0(param_2,uVar6);
  FUN_142a2e1e8(param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff);
  FUN_142a2e248(param_2,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar3) & 0xffffffff);
  if (bVar2 != (bVar1 & 1)) {
    *(undefined1 *)param_1[4] = 1;
  }
  FUN_141731f24(param_2,lVar4);
  FUN_142a2e414(param_2,(ulonglong)(bVar7 == 0xb) * 0x10 + lVar4 + 0x10);
  return;
}



// FUNCTION 14361bc72 FUN_14361bc72 body=4372 status=ok
// SIG undefined FUN_14361bc72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14361bc72(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong *plVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong unaff_R15;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  uint *local_150;
  int *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [4];
  undefined4 local_108;
  undefined4 local_c8;
  undefined1 local_c4;
  byte local_c3;
  undefined8 local_c0;
  longlong local_b8 [3];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar9 = *(uint *)(*param_1 + 0x10);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar25 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar25 != 2)) {
    if (iVar25 != 1) goto LAB_14361bcf1;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14361bcf1;
  }
  (**(code **)(*(longlong *)param_1[2] + 0x2a0))();
LAB_14361bcf1:
  if (((DAT_14caf6718 == '\x01') && (lVar26 = param_1[2], *(int *)(lVar26 + 0x100) == 0)) &&
     (*(int *)(lVar26 + 0x60) + *(int *)(lVar26 + 0x40) + *(int *)(lVar26 + 0x50) +
      *(int *)(lVar26 + 0x70) + *(int *)(lVar26 + 0x80) + *(int *)(lVar26 + 0x90) +
      *(int *)(lVar26 + 0xa0) == 0)) {
    uVar28 = 0;
  }
  else {
    if (0 < (int)uVar9) {
      local_148 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      iVar25 = -uVar9;
      lVar26 = (ulonglong)uVar9 * 0x60;
      uVar15 = (ulonglong)uVar9 + 1;
      do {
        lVar14 = *(longlong *)(*param_1 + 8);
        if (lVar14 == 0) {
          lVar14 = *param_1;
        }
        puVar4 = *(uint **)(lVar14 + -0x10 + uVar15 * 8);
        lVar14 = *(longlong *)(param_1[1] + 0x60);
        if (lVar14 == 0) {
          lVar14 = param_1[1];
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caf6ee8) && (FUN_144b3d300(), DAT_14caf6ee8 == -1)) {
          FUN_140056680(&DAT_14caf6ed8,L"<NoName>");
          atexit((_func_5014 *)&LAB_14361cd87);
          _Init_thread_footer();
        }
        puVar24 = puVar4 + 0x50;
        if (param_1[3] == 0) {
          *puVar24 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[3] + 0xc);
          *puVar24 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[0x51] = uVar9;
        *(longlong *)(puVar4 + 0x52) = param_1[4];
        if (param_1[5] == 0) {
          puVar4[0x54] = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[5] + 0xc);
          puVar4[0x54] = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[0x55] = uVar9;
        if (param_1[2] == 0) {
          *puVar4 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[2] + 0xc);
          *puVar4 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[1] = uVar9;
        puVar18 = (uint *)(lVar14 + -0x20 + lVar26);
        uVar9 = puVar18[1];
        uVar19 = puVar18[2];
        uVar5 = puVar18[3];
        uVar2 = *(undefined8 *)(lVar14 + -0x10 + lVar26);
        puVar4[0x14] = *puVar18;
        puVar4[0x15] = uVar9;
        puVar4[0x16] = uVar19;
        puVar4[0x17] = uVar5;
        *(undefined8 *)(puVar4 + 0x18) = uVar2;
        bVar8 = (byte)puVar4[2];
        if (((bVar8 & 4) == 0) || ((param_1[8] != 0 && ((*(byte *)(param_1[8] + 0x418) & 4) == 0))))
        {
          bVar13 = 0;
        }
        else {
          bVar13 = 4;
        }
        *(byte *)(puVar4 + 2) = bVar8 & 0xfb | bVar13;
        if (((bVar8 & 0x10) != 0) && (*(char *)((longlong)param_1 + 0x39) == '\0')) {
          if (((puVar4[0x51] == 0) ||
              (((uVar9 = *puVar24, (int)uVar9 < 0 || (DAT_14c9647dc <= (int)uVar9)) ||
               (plVar17 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar17 == (longlong *)0x0)))) ||
             (((*(uint *)(plVar17 + 2) != puVar4[0x51] ||
               ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar27 = *plVar17, lVar27 == 0))))
          {
LAB_14361bf99:
            pcVar21 = (char *)((longlong)puVar4 + 0x17);
LAB_14361bf9d:
            if (*pcVar21 == '\x01') goto LAB_14361c04a;
          }
          else if ((*(longlong *)(lVar27 + 0xa8) == 0) ||
                  ((*(byte *)(*(longlong *)(lVar27 + 0xa8) + 0x65) & 1) != 0)) {
            if (DAT_14cad2858 == 0) {
              local_138 = FUN_144a7958c;
              local_160 = FUN_14081d0ea;
              local_168 = (code *)&LAB_146395584;
              local_170 = (code **)&local_138;
              local_178 = &LAB_147a0ba80;
              local_180 = &LAB_14575ccce;
              local_188 = L"Engine";
              local_190 = (undefined8 *)0x40000000000;
              local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
              local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
              local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_14361bf99;
            pcVar21 = (char *)(lVar27 + 0x427);
            goto LAB_14361bf9d;
          }
          if ((param_1[3] != 0) && (lVar27 = *(longlong *)(param_1[3] + 0x120), lVar27 != 0)) {
            if (DAT_14cac6e60 == 0) {
              local_138 = FUN_144a7958c;
              local_160 = FUN_14081d0ea;
              local_168 = FUN_142b47bc4;
              local_170 = (code **)&local_138;
              local_178 = &LAB_1478989f1;
              local_180 = &LAB_146391124;
              local_188 = L"Engine";
              local_190 = (undefined8 *)0x10000000000;
              local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000005);
              local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
              local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x620);
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
                ((lVar12 = *(longlong *)(param_1[3] + 0xb0), lVar12 != 0 ||
                 (lVar12 = FUN_1448abda6(), lVar12 != 0)))) &&
               ((bVar8 = *(byte *)(lVar12 + 0x152), bVar8 == 1 ||
                ((bVar8 < 7 && ((0x68U >> (bVar8 & 0x1f) & 1) != 0)))))) {
              local_1a8 = (undefined4 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
              uVar28 = 0;
              cVar7 = FUN_143657a00(param_1[3],lVar27,*(undefined8 *)(param_1[3] + 0x128),0);
              if (cVar7 != '\0') goto LAB_14361cd16;
            }
          }
        }
LAB_14361c04a:
        unaff_R15 = uVar15 - 1;
        if (*(longlong *)(puVar4 + 0x4e) == 0) {
          if ((*(char *)((longlong)param_1 + 0x39) == '\0') && (*(char *)(param_1[9] + 1) == '\x01')
             ) {
            *(byte *)(puVar4 + 2) = (byte)puVar4[2] & 0xfe | *(byte *)((longlong)param_1 + 0x3a);
            fVar1 = *(float *)((longlong)param_1 + 0x3c);
            if ((fVar1 != -1.0) || (NAN(fVar1))) {
              puVar4[0x4d] = (uint)fVar1;
            }
          }
          puVar4[0x58] = 1;
          *(uint **)(puVar4 + 0x5a) = puVar4;
          if (((((puVar4[0x51] == 0) || (uVar9 = *puVar24, (int)uVar9 < 0)) ||
               (DAT_14c9647dc <= (int)uVar9)) ||
              ((plVar17 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar4[0x51])))) ||
             (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (lVar27 = *plVar17, lVar27 == 0)))) {
LAB_14361c1b9:
            pcVar21 = (char *)((longlong)puVar4 + 0x17);
LAB_14361c1bd:
            bVar29 = *pcVar21 == '\x01';
          }
          else {
            if ((*(longlong *)(lVar27 + 0xa8) == 0) ||
               ((*(byte *)(*(longlong *)(lVar27 + 0xa8) + 0x65) & 1) != 0)) {
              if (DAT_14cad2858 == 0) {
                local_138 = FUN_144a7958c;
                local_160 = FUN_14081d0ea;
                local_168 = (code *)&LAB_146395584;
                local_170 = (code **)&local_138;
                local_178 = &LAB_147a0ba80;
                local_180 = &LAB_14575ccce;
                local_188 = L"Engine";
                local_190 = (undefined8 *)0x40000000000;
                local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
                local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
                local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
              goto LAB_14361c1b9;
              pcVar21 = (char *)(lVar27 + 0x427);
              goto LAB_14361c1bd;
            }
            bVar29 = false;
          }
          local_c4 = 0;
          local_c8 = 0;
          local_c0 = 0;
          puVar20 = (undefined8 *)(lVar14 + lVar26 + -0x60);
          puVar22 = local_128;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *puVar22 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar22 = puVar22 + 1;
          }
          bVar8 = (byte)puVar4[2];
          local_150 = puVar24;
          if (((bVar8 & 1) == 0) || (puVar4[1] == 0)) {
LAB_14361c203:
            bVar16 = false;
          }
          else {
            uVar9 = *puVar4;
            bVar16 = false;
            if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
              plVar17 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((plVar17 == (longlong *)0x0) || (*(uint *)(plVar17 + 2) != puVar4[1])) ||
                 ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_14361c203;
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar17;
              }
              else {
                lVar14 = 0;
              }
              lVar27 = DAT_14c997cc0;
              if (DAT_14c997cc0 == 0) {
                plVar17 = (longlong *)FUN_145a62958();
                lVar27 = plVar17[0x22];
                if (lVar27 == 0) {
                  (**(code **)(*plVar17 + 1000))(plVar17);
                  lVar27 = plVar17[0x22];
                }
              }
              cVar7 = *(char *)(lVar27 + 0x75);
              if (*(char *)(lVar14 + 0x31) != '\0') {
                cVar7 = *(char *)(lVar14 + 0x31);
              }
              bVar16 = cVar7 != '\x03';
              bVar8 = (byte)puVar4[2];
            }
          }
          puVar24 = puVar4 + 0x4e;
          local_c3 = bVar8 >> 5 & 1;
          local_c8 = CONCAT13(bVar8 >> 3,CONCAT12(bVar8 >> 2,(undefined2)local_c8)) & 0x101ffff;
          local_c8._0_2_ = CONCAT11(bVar29,(undefined1)local_c8);
          local_138 = (code *)param_1[6];
          local_c4 = bVar16;
          if (*(char *)((longlong)param_1 + 0x39) == '\x01') {
            local_c8 = CONCAT31(local_c8._1_3_,1);
            FUN_1407125d4(&local_138,puVar24);
          }
          else {
            puVar18 = puVar24;
            FUN_1407125d4(&local_138,puVar24);
            uVar15 = CONCAT71((int7)((ulonglong)puVar18 >> 8),
                              *(undefined1 *)((longlong)puVar4 + 0x3b)) & 0xffffffffffffff01;
            FUN_1401fe056(*(undefined8 *)(puVar4 + 0x4e),uVar15);
            uVar15 = CONCAT71((int7)(uVar15 >> 8),*(undefined1 *)((longlong)puVar4 + 0x3b)) &
                     0xffffffffffffff08;
            FUN_14020126e(*(undefined8 *)(puVar4 + 0x4e),
                          CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 3));
            bVar29 = true;
            if ((((((puVar4[2] & 1) != 0) && (puVar4[1] != 0)) &&
                 ((uVar9 = *puVar4, -1 < (int)uVar9 &&
                  (((int)uVar9 < DAT_14c9647dc &&
                   (plVar17 = (longlong *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                   plVar17 != (longlong *)0x0)))))) && (*(uint *)(plVar17 + 2) == puVar4[1])) &&
               ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar17;
              }
              else {
                lVar14 = 0;
              }
              lVar27 = DAT_14c997cc0;
              if (DAT_14c997cc0 == 0) {
                plVar17 = (longlong *)FUN_145a62958(plVar17,1);
                lVar27 = plVar17[0x22];
                if (lVar27 == 0) {
                  (**(code **)(*plVar17 + 1000))(plVar17);
                  lVar27 = plVar17[0x22];
                }
              }
              cVar7 = *(char *)(lVar27 + 0x75);
              if (*(char *)(lVar14 + 0x31) != '\0') {
                cVar7 = *(char *)(lVar14 + 0x31);
              }
              bVar29 = cVar7 == '\x03';
            }
            FUN_140cd4d2c(puVar24,bVar29);
            FUN_1403452ce(puVar24,0x7f7fffff);
            FUN_1401cddec(*(undefined8 *)(puVar4 + 0x4e),*(byte *)((longlong)puVar4 + 0x3b) >> 7);
            FUN_142a2e190(puVar24,*(byte *)((longlong)puVar4 + 0x3d) >> 7);
            FUN_14017b994(*(undefined8 *)(puVar4 + 0x4e),*(undefined1 *)((longlong)puVar4 + 0x12));
            FUN_14017baa4(*(undefined8 *)(puVar4 + 0x4e),*(undefined1 *)((longlong)puVar4 + 0x13));
            FUN_14017bbb4(*(undefined8 *)(puVar4 + 0x4e),(char)puVar4[5]);
            if (*(longlong *)(puVar4 + 0x4e) == 0) {
              bVar29 = *(byte *)(_DAT_00000040 + 0x90) < 2;
              lVar14 = _DAT_00000040;
            }
            else {
              lVar14 = *(longlong *)(*(longlong *)(puVar4 + 0x4e) + 0x40);
              if (((lVar14 == 0) || (*(byte *)(lVar14 + 0x90) < 2)) ||
                 (*(char *)(lVar14 + 0x1ac) == '\x03')) goto LAB_14361c35c;
              bVar29 = false;
            }
            if ((!bVar29) && (lVar14 != 0)) {
              FUN_1401be71c(lVar14,(char)puVar4[0x39]);
            }
          }
LAB_14361c35c:
          local_140 = FUN_14034b308(puVar4);
          local_b8[0] = 0;
          local_b8[1] = 0;
          local_138 = (code *)0x0;
          uStack_130 = 0;
          local_1a8 = *(undefined4 **)(puVar4 + 0x52);
          FUN_143605db2(puVar4,*(undefined8 *)(puVar4 + 0x50),&local_138,local_b8);
          local_a0 = (undefined4)local_138;
          uStack_9c = local_138._4_4_;
          uStack_98 = (undefined4)uStack_130;
          uStack_94 = uStack_130._4_4_;
          local_128[2] = 0;
          local_128[3] = 0;
          local_128[0] = 0;
          local_128[1] = 0;
          local_138 = (code *)0x0;
          uStack_130 = 0;
          local_108 = 0;
          FUN_144a2a070(puVar4,&local_138,0xffffffff);
          lVar14 = param_1[2];
          lVar27 = DAT_14c997cc0;
          if (DAT_14c997cc0 == 0) {
            plVar17 = (longlong *)FUN_145a62958();
            lVar27 = plVar17[0x22];
            if (lVar27 == 0) {
              (**(code **)(*plVar17 + 1000))(plVar17);
              lVar27 = plVar17[0x22];
            }
          }
          cVar7 = *(char *)(lVar27 + 0x75);
          if (*(char *)(lVar14 + 0x31) != '\0') {
            cVar7 = *(char *)(lVar14 + 0x31);
          }
          if (((puVar4[0x51] == 0) || (uVar9 = *local_150, (int)uVar9 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar9 ||
              ((((plVar17 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar4[0x51])) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar14 = *plVar17, lVar14 == 0))))
             )) {
LAB_14361c4a8:
            pbVar23 = (byte *)((longlong)puVar4 + 0x17);
LAB_14361c4ac:
            bVar8 = *pbVar23;
            local_108 = 0;
            if (bVar8 != 0) {
              bVar16 = bVar8 == 5 || (bVar8 & 0xfd) == 1;
              bVar8 = bVar8 & 0xfe;
              bVar30 = DAT_14c761714 != 0;
              local_108 = (uint)bVar16 << 0x10;
              bVar29 = bVar8 == 2;
              if (!bVar30) {
                bVar29 = bVar30;
              }
              if (bVar8 == 4) {
                bVar29 = bVar30;
              }
              if (bVar29) {
                uVar6 = CONCAT11(bVar8 == 4,bVar16);
                local_108 = (uint)uVar6 << 0x10;
                local_108 = CONCAT31(local_108._1_3_,1);
                if (cVar7 == '\x03') {
                  local_108 = CONCAT22(uVar6,0x101);
                }
              }
            }
          }
          else {
            if ((*(longlong *)(lVar14 + 0xa8) == 0) ||
               ((*(byte *)(*(longlong *)(lVar14 + 0xa8) + 0x65) & 1) != 0)) {
              if (DAT_14cad2858 == 0) {
                local_90 = FUN_144a7958c;
                local_160 = FUN_14081d0ea;
                local_168 = (code *)&LAB_146395584;
                local_170 = &local_90;
                local_178 = &LAB_147a0ba80;
                local_180 = &LAB_14575ccce;
                local_188 = L"Engine";
                local_190 = (undefined8 *)0x40000000000;
                local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
                local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
                local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
              goto LAB_14361c4a8;
              pbVar23 = (byte *)(lVar14 + 0x427);
              goto LAB_14361c4ac;
            }
            local_108 = 0;
          }
          local_190 = &DAT_14c846480;
          local_198 = &local_138;
          local_1a0 = local_b8;
          local_1a8 = &local_a0;
          local_188 = (wchar_t *)0x0;
          FUN_14360721e(param_1[2],puVar4,puVar4 + 0x14);
          lVar14 = DAT_14caf66f0;
          iVar3 = *local_148;
          if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
            uVar15 = 0;
          }
          else if (iVar3 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            uVar15 = (ulonglong)(DVar10 != DVar11);
          }
          else {
            uVar15 = 1;
          }
          local_88 = 1;
          if (*(int *)(lVar14 + uVar15 * 4) == 0) {
            local_88 = *(byte *)((longlong)puVar4 + 0x3b) >> 4 & 1;
          }
          local_90 = *(code **)(*(longlong *)puVar24 + 0x40);
          FUN_1400b4776(local_90,2,&local_90);
          iVar3 = *(int *)(*(longlong *)(*(longlong *)puVar24 + 0x40) + 0x88);
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_9c,local_a0) != 0) {
            FUN_1400020a8();
          }
          if (iVar3 == 0) {
            FUN_142a2e46a(puVar24,param_1[6],0);
            puVar4[0] = 0;
            puVar4[1] = 0;
            puVar4[0x28] = 0;
            puVar4[0x29] = 0;
            local_150[4] = 0;
            local_150[5] = 0;
            local_150[0] = 0;
            local_150[1] = 0;
            local_150[2] = 0;
            local_150[3] = 0;
          }
          else {
            *(uint **)(*(longlong *)(*(longlong *)puVar24 + 0x40) + 0x70) = puVar4 + 0x58;
          }
        }
        else {
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar24[4] = 0;
          puVar24[5] = 0;
          puVar24[0] = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          lVar14 = *param_1;
          uVar9 = *(uint *)(lVar14 + 0x10);
          if (unaff_R15 != uVar9) {
            lVar27 = *(longlong *)(lVar14 + 8);
            if (*(longlong *)(lVar14 + 8) == 0) {
              lVar27 = lVar14;
            }
            memmove((void *)(lVar27 + -0x10 + uVar15 * 8),(void *)(lVar27 + uVar15 * 8 + -8),
                    (longlong)(int)(uVar9 + iVar25) << 3);
            uVar9 = *(uint *)(lVar14 + 0x10);
          }
          *(uint *)(lVar14 + 0x10) = uVar9 - 1;
          lVar14 = param_1[1];
          uVar9 = *(uint *)(lVar14 + 0x70);
          if (unaff_R15 != uVar9) {
            lVar27 = *(longlong *)(lVar14 + 0x60);
            if (*(longlong *)(lVar14 + 0x60) == 0) {
              lVar27 = lVar14;
            }
            memmove((void *)(lVar27 + lVar26 + -0x60),(void *)(lVar27 + lVar26),
                    (longlong)(int)(uVar9 + iVar25) * 0x60);
            uVar9 = *(uint *)(lVar14 + 0x70);
          }
          *(uint *)(lVar14 + 0x70) = uVar9 - 1;
        }
        iVar25 = iVar25 + 1;
        lVar26 = lVar26 + -0x60;
        uVar15 = unaff_R15;
      } while (1 < unaff_R15);
    }
    uVar28 = CONCAT71((int7)(unaff_R15 >> 8),1);
  }
LAB_14361cd16:
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar28 & 0xffffffff;
}



// FUNCTION 14361cd98 FUN_14361cd98 body=4594 status=ok
// SIG undefined FUN_14361cd98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14361cd98(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  ushort uVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint *puVar19;
  bool bVar20;
  longlong *plVar21;
  code **ppcVar22;
  longlong lVar23;
  char cVar24;
  uint uVar25;
  double *pdVar26;
  double *pdVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 *puVar30;
  int iVar31;
  byte *pbVar32;
  uint *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  bool bVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_458 [32];
  code **local_438;
  longlong *local_430;
  undefined8 *local_428;
  undefined8 local_420;
  wchar_t *pwStack_418;
  undefined1 *local_410;
  undefined1 *local_408;
  code **local_400;
  undefined1 *local_3f8;
  code *local_3f0;
  undefined8 *local_3e0;
  undefined1 local_3d8 [16];
  uint *local_3c8;
  undefined8 *local_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  longlong local_308;
  undefined8 uStack_300;
  code *local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  int local_294;
  undefined1 local_290 [8];
  undefined1 *local_288;
  int local_280;
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
  uint *local_1f8;
  code **ppcStack_1f0;
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
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  uint **ppuStack_170;
  double local_168 [4];
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  puVar2 = (uint *)param_1[1];
  *(uint **)(*(longlong *)*param_1 + 0x108) = puVar2;
  uVar10 = FUN_14034b308(*(undefined8 *)*param_1);
  local_308 = 0;
  uStack_300 = 0;
  lVar23 = *(longlong *)*param_1;
  local_178 = (code *)0x0;
  ppuStack_170 = (uint **)0x0;
  local_438 = *(code ***)(lVar23 + 0x148);
  FUN_143605db2(lVar23,*(undefined8 *)(lVar23 + 0x140),&local_178,&local_308);
  local_2f8 = local_178;
  dStack_2f0 = (double)ppuStack_170;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  FUN_144a2a070(puVar2,&local_348,0xffffffff);
  if (puVar2[1] == 0) {
LAB_14361de86:
    lVar23 = 0;
  }
  else {
    uVar25 = *puVar2;
    lVar23 = 0;
    if ((-1 < (int)uVar25) && ((int)uVar25 < DAT_14c9647dc)) {
      plVar21 = (longlong *)
                ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8));
      if ((plVar21 == (longlong *)0x0) ||
         ((*(uint *)(plVar21 + 2) != puVar2[1] || ((*(uint *)(plVar21 + 1) & 0x10200000) != 0))))
      goto LAB_14361de86;
      lVar23 = *plVar21;
    }
  }
  lVar34 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar21 = (longlong *)FUN_145a62958();
    lVar34 = plVar21[0x22];
    if (lVar34 == 0) {
      (**(code **)(*plVar21 + 1000))(plVar21);
      lVar34 = plVar21[0x22];
    }
  }
  cVar24 = *(char *)(lVar34 + 0x75);
  if (*(char *)(lVar23 + 0x31) != '\0') {
    cVar24 = *(char *)(lVar23 + 0x31);
  }
  if (((((puVar2[0x51] == 0) || (uVar25 = puVar2[0x50], (int)uVar25 < 0)) ||
       (DAT_14c9647dc <= (int)uVar25)) ||
      ((plVar21 = (longlong *)
                  ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
       plVar21 == (longlong *)0x0 || (*(uint *)(plVar21 + 2) != puVar2[0x51])))) ||
     (((*(uint *)(plVar21 + 1) & 0x10200000) != 0 || (lVar23 = *plVar21, lVar23 == 0)))) {
LAB_14361cfce:
    pbVar32 = (byte *)((longlong)puVar2 + 0x17);
LAB_14361cfd2:
    bVar9 = *pbVar32;
    local_318 = 0;
    if (bVar9 != 0) {
      bVar20 = bVar9 == 5 || (bVar9 & 0xfd) == 1;
      bVar9 = bVar9 & 0xfe;
      bVar36 = DAT_14c761714 != 0;
      local_318 = (uint)bVar20 << 0x10;
      bVar7 = bVar9 == 2;
      if (!bVar36) {
        bVar7 = bVar36;
      }
      if (bVar9 == 4) {
        bVar7 = bVar36;
      }
      if (bVar7) {
        uVar8 = CONCAT11(bVar9 == 4,bVar20);
        local_318 = (uint)uVar8 << 0x10;
        local_318 = CONCAT31(local_318._1_3_,1);
        if (cVar24 == '\x03') {
          local_318 = CONCAT22(uVar8,0x101);
        }
      }
    }
  }
  else {
    if ((*(longlong *)(lVar23 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(lVar23 + 0xa8) + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_178 = FUN_144a7958c;
        local_3f0 = FUN_14081d0ea;
        local_3f8 = &LAB_146395584;
        local_400 = &local_178;
        local_408 = &LAB_147a0ba80;
        local_410 = &LAB_14575ccce;
        pwStack_418 = L"Engine";
        local_420 = 0x40000000000;
        local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x10000004);
        local_430 = (longlong *)CONCAT44(local_430._4_4_,0x10);
        local_438 = (code **)CONCAT44(local_438._4_4_,0x1180);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_14361cfce;
      pbVar32 = (byte *)(lVar23 + 0x427);
      goto LAB_14361cfd2;
    }
    local_318 = 0;
  }
  uVar25 = (*(uint **)*param_1)[1];
  if (uVar25 == 0) {
LAB_14361de8d:
    uVar16 = 0;
  }
  else {
    uVar29 = **(uint **)*param_1;
    uVar16 = 0;
    if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar17 + 2) != uVar25 || ((*(uint *)(puVar17 + 1) & 0x10200000) != 0))))
      goto LAB_14361de8d;
      uVar16 = *puVar17;
    }
  }
  local_420 = param_1[2];
  pwStack_418 = (wchar_t *)param_1[3];
  local_438 = &local_2f8;
  local_430 = &local_308;
  local_428 = &local_348;
  FUN_14360721e(uVar16,puVar2,puVar2 + 0x14,uVar10);
  if (*(int *)(param_1[3] + 8) == 0) goto LAB_14361d19a;
  if (*(longlong *)(puVar2 + 0x5c) == 0) {
    puVar17 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[8] = 0;
    puVar17[9] = 0;
    *(undefined4 *)((longlong)puVar17 + 0x2c) = 0x80;
    *(undefined4 *)(puVar17 + 6) = 0xffffffff;
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14aa1dda0;
    plVar11[2] = (longlong)puVar17;
    *(undefined8 **)(puVar2 + 0x5c) = puVar17;
    plVar21 = *(longlong **)(puVar2 + 0x5e);
    if (plVar11 == plVar21) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar11 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar13 = *piVar1;
          UNLOCK();
          plVar21 = plVar11;
          goto joined_r0x00014361d361;
        }
      }
    }
    else {
      *(longlong **)(puVar2 + 0x5e) = plVar11;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar21 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar13 = *piVar1;
          UNLOCK();
joined_r0x00014361d361:
          if (iVar13 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
    }
  }
  plVar21 = (longlong *)param_1[3];
  if (0 < (int)plVar21[1]) {
    lVar34 = 0;
    lVar23 = 0;
    do {
      uVar10 = *(undefined8 *)(puVar2 + 0x5c);
      local_178 = *(code **)*param_1;
      pdVar26 = (double *)param_1[2];
      pdVar27 = local_168;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *pdVar27 = *pdVar26;
        pdVar26 = pdVar26 + 1;
        pdVar27 = pdVar27 + 1;
      }
      local_1f8 = (uint *)(*plVar21 + lVar34);
      ppcStack_1f0 = &local_178;
      FUN_147c62efe(uVar10,&local_278,&local_1f8);
      lVar23 = lVar23 + 1;
      plVar21 = (longlong *)param_1[3];
      lVar34 = lVar34 + 0x10;
    } while (lVar23 < (int)plVar21[1]);
  }
  if (*(longlong *)(*(longlong *)*param_1 + 0x170) != 0) {
    uVar28 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_29c = 0xffffffff00000080;
    local_294 = 0;
    local_288 = (undefined1 *)0x0;
    local_280 = 0;
    plVar21 = *(longlong **)(*(longlong *)*param_1 + 0x170);
    puVar33 = (uint *)(plVar21 + 2);
    iVar13 = (int)plVar21[5];
    uVar35 = 1;
    iVar31 = 0;
    iVar12 = 0;
    local_3e0 = param_1;
    if (iVar13 != 0) {
      puVar19 = (uint *)plVar21[4];
      if ((uint *)plVar21[4] == (uint *)0x0) {
        puVar19 = puVar33;
      }
      uVar25 = *puVar19;
      if (uVar25 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        uVar28 = 0;
        uVar35 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar35 = uVar28;
        }
        iVar31 = 0;
        do {
          if (uVar35 == uVar28) goto LAB_14361de4a;
          iVar31 = iVar31 + 0x20;
          uVar25 = puVar19[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar28 = 0;
      }
      uVar35 = (ulonglong)(-uVar25 & uVar25);
      uVar37 = uVar35 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar12 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
    }
    if (iVar12 < iVar13) {
      uVar25 = 0xffffffff;
      local_3c8 = puVar33;
      do {
        lVar23 = *plVar21;
        lVar34 = (longlong)iVar12 * 0x90;
        if ((int)uStack_2c0 != local_294) {
          uVar37 = *(ulonglong *)(lVar23 + 0x10 + lVar34);
          uVar29 = ((uint)(uVar37 >> 0x14) & 0xffff ^ (uint)(uVar37 >> 4)) * -0x7a143595;
          uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
          puVar30 = local_288;
          if (local_288 == (undefined1 *)0x0) {
            puVar30 = local_290;
          }
          for (iVar12 = *(int *)(puVar30 +
                                (ulonglong)(local_280 - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
              iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_2c8 + 8)) {
            if (*(ulonglong *)(local_2c8 + (longlong)iVar12 * 0x10) == uVar37) goto LAB_14361ddb4;
          }
        }
        lVar18 = lVar23 + lVar34;
        local_3c0 = (undefined8 *)(lVar23 + lVar34 + 0x10);
        ppcVar22 = &local_178;
        FUN_147c63444(&local_2c8);
        pdVar26 = (double *)local_3e0[4];
        local_378 = ZEXT816(0);
        local_388 = 0.0;
        dStack_380 = 0.0;
        local_358 = ZEXT816(0x3ff0000000000000);
        auVar41 = *(undefined1 (*) [16])(pdVar26 + 8);
        dVar45 = auVar41._0_8_;
        dVar40 = auVar41._8_8_;
        auVar52 = *(undefined1 (*) [16])(pdVar26 + 10);
        dVar55 = auVar52._0_8_;
        dVar51 = auVar52._8_8_;
        local_3d8 = *(undefined1 (*) [16])(lVar18 + 0x60);
        dVar39 = local_3d8._0_8_;
        auVar38 = *(undefined1 (*) [16])(lVar18 + 0x70);
        auVar41 = minpd(local_3d8,auVar41);
        auVar46 = minpd(auVar38,auVar52);
        auVar52._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
        auVar52._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
        iVar13 = movmskpd((int)&local_388,auVar52);
        auVar41._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
        uVar29 = movmskpd((int)ppcVar22,auVar41);
        if ((uVar29 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar53 = *(double *)(lVar18 + 0x20);
          dVar56 = *(double *)(lVar18 + 0x28);
          dVar57 = *(double *)(lVar18 + 0x30);
          dVar58 = *(double *)(lVar18 + 0x38);
          dVar3 = *pdVar26;
          dVar4 = pdVar26[1];
          dVar5 = pdVar26[2];
          dVar6 = pdVar26[3];
          dVar42 = pdVar26[3];
          dVar43 = pdVar26[3];
          dVar54 = pdVar26[1];
          dVar44 = pdVar26[1];
          dVar48 = pdVar26[2];
          dVar50 = pdVar26[2];
          local_3a8._0_8_ =
               dVar56 * dVar48 * -1.0 + dVar57 * dVar54 + dVar58 * *pdVar26 * 1.0 + dVar53 * dVar42;
          local_3a8._8_8_ =
               dVar53 * dVar50 * 1.0 + dVar58 * dVar44 + dVar57 * *pdVar26 * -1.0 + dVar56 * dVar43;
          local_398._0_8_ =
               dVar58 * dVar48 * 1.0 +
               ((*pdVar26 * dVar56 * 1.0 + dVar57 * dVar42) - dVar53 * dVar54);
          local_398._8_8_ =
               dVar57 * dVar50 * -1.0 +
               ((*pdVar26 * dVar53 * -1.0 + dVar58 * dVar43) - dVar56 * dVar44);
          dVar57 = *(double *)(lVar18 + 0x40) * dVar45;
          dVar58 = *(double *)(lVar18 + 0x48) * dVar40;
          dVar44 = *(double *)(lVar18 + 0x50) * dVar55;
          dVar54 = *(double *)(lVar18 + 0x58) * dVar51;
          dVar53 = dVar58 * dVar3 - dVar4 * dVar57;
          dVar56 = dVar44 * dVar4 - dVar5 * dVar58;
          dVar48 = dVar57 * dVar5 - dVar3 * dVar44;
          dVar50 = dVar54 * dVar6 - dVar6 * dVar54;
          dVar56 = dVar56 + dVar56;
          dVar48 = dVar48 + dVar48;
          dVar53 = dVar53 + dVar53;
          dVar50 = dVar50 + dVar50;
          local_388 = (dVar53 * dVar4 - dVar5 * dVar48) + dVar42 * dVar56 + dVar57 + pdVar26[4];
          dStack_380 = (dVar56 * dVar5 - dVar53 * dVar3) + dVar43 * dVar48 + dVar58 + pdVar26[5];
          local_378._8_8_ =
               (dVar50 * dVar6 - dVar50 * dVar6) + dVar43 * dVar50 + dVar54 + pdVar26[7];
          local_378._0_8_ =
               (dVar48 * dVar3 - dVar4 * dVar56) + dVar42 * dVar53 + dVar44 + pdVar26[6];
          dVar39 = dVar39 * dVar45;
          dVar40 = local_3d8._8_8_ * dVar40;
          dVar45 = auVar38._0_8_ * dVar55;
          dVar55 = auVar38._8_8_ * dVar51;
        }
        else {
          local_3d8._8_8_ = local_3d8._8_8_ * dVar40;
          local_3d8._0_8_ = dVar39 * dVar45;
          dVar51 = auVar38._8_8_ * dVar51;
          local_3b8._8_4_ = SUB84(dVar51,0);
          local_3b8._0_8_ = auVar38._0_8_ * dVar55;
          local_3b8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          dVar51 = *pdVar26;
          dVar43 = pdVar26[1];
          dVar39 = pdVar26[2];
          dVar42 = dVar43 + dVar43;
          dVar44 = dVar39 + dVar39;
          dVar54 = dVar51 * (dVar51 + dVar51);
          local_1f8 = (uint *)((1.0 - (dVar39 * dVar44 + dVar43 * dVar42)) * dVar45);
          dStack_1d0 = (1.0 - (dVar39 * dVar44 + dVar54)) * dVar40;
          local_1a8 = (1.0 - (dVar54 + dVar43 * dVar42)) * dVar55;
          dVar39 = pdVar26[3];
          dVar54 = dVar44 * dVar39;
          dVar48 = (dVar51 + dVar51) * pdVar26[3];
          dVar39 = dVar42 * dVar39;
          ppcStack_1f0 = (code **)((dVar42 * dVar51 + dVar54) * dVar45);
          local_1c8 = (dVar44 * dVar43 + dVar48) * dVar40;
          local_1b8 = (dVar39 + *pdVar26 * dVar44) * dVar55;
          local_1d8 = (dVar42 * dVar51 - dVar54) * dVar40;
          dStack_1b0 = (dVar44 * dVar43 - dVar48) * dVar55;
          local_1e8 = (*pdVar26 * dVar44 - dVar39) * dVar45;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar26[4];
          dStack_190 = pdVar26[5];
          local_188 = pdVar26[6];
          uStack_180 = 0x3ff0000000000000;
          dVar55 = *(double *)(lVar18 + 0x20);
          dVar39 = *(double *)(lVar18 + 0x28);
          dVar45 = *(double *)(lVar18 + 0x30);
          local_268 = *(double *)(lVar18 + 0x60);
          local_258 = *(double *)(lVar18 + 0x68);
          dStack_230 = *(double *)(lVar18 + 0x70);
          dVar42 = dVar39 + dVar39;
          dVar40 = dVar45 + dVar45;
          dVar51 = dVar55 * (dVar55 + dVar55);
          local_278 = (1.0 - (dVar45 * dVar40 + dVar39 * dVar42)) * local_268;
          dStack_250 = (1.0 - (dVar45 * dVar40 + dVar51)) * local_258;
          local_228 = (1.0 - (dVar51 + dVar39 * dVar42)) * dStack_230;
          dVar44 = *(double *)(lVar18 + 0x20) * dVar40;
          dVar45 = *(double *)(lVar18 + 0x38);
          dVar51 = dVar40 * dVar45;
          dVar43 = (dVar55 + dVar55) * *(double *)(lVar18 + 0x38);
          dVar45 = dVar42 * dVar45;
          dStack_270 = (dVar42 * dVar55 + dVar51) * local_268;
          local_248 = (dVar40 * dVar39 + dVar43) * local_258;
          local_238 = (dVar45 + dVar44) * dStack_230;
          local_268 = (dVar44 - dVar45) * local_268;
          local_258 = (dVar42 * dVar55 - dVar51) * local_258;
          dStack_230 = (dVar40 * dVar39 - dVar43) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = *(undefined8 *)(lVar18 + 0x40);
          uStack_210 = *(undefined8 *)(lVar18 + 0x48);
          local_208 = *(undefined8 *)(lVar18 + 0x50);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          auVar41 = _DAT_149934d80;
          dVar55 = local_168[0] * local_168[0] +
                   (double)local_178 * (double)local_178 +
                   (double)ppuStack_170 * (double)ppuStack_170;
          dVar39 = local_148 * local_148 + local_168[2] * local_168[2] + local_168[3] * local_168[3]
          ;
          dVar45 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
          uVar37 = -(ulonglong)(0.0 <= dVar55 + -9.99999993922529e-09);
          dVar55 = (double)(~uVar37 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar55)) & uVar37)
          ;
          uVar37 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
          dVar51 = (double)(~uVar37 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar37)
          ;
          dVar39 = (double)local_3d8._0_8_;
          dVar40 = (double)local_3d8._8_8_;
          uVar37 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
          dVar45 = (double)(~uVar37 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar37)
          ;
          auVar38._8_8_ = -(ulonglong)(0.0 <= (double)local_3d8._8_8_);
          auVar38._0_8_ = -(ulonglong)(0.0 <= (double)local_3d8._0_8_);
          auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar38);
          dVar43 = (double)(~-(ulonglong)(0.0 <= (double)local_3b8._0_8_) & 0xbff0000000000000 |
                           (ulonglong)
                           ((uint)(-(ulonglong)(0.0 <= (double)local_3b8._0_8_) >> 0x20) &
                           0x3ff00000) << 0x20);
          dVar42 = auVar52._0_8_;
          local_178 = (code *)((double)local_178 * dVar55 * dVar42);
          ppuStack_170 = (uint **)((double)ppuStack_170 * dVar55 * dVar42);
          local_168[0] = dVar55 * local_168[0] * dVar42;
          dVar55 = auVar52._8_8_;
          local_148 = dVar51 * local_148 * dVar55;
          local_168[3] = local_168[3] * dVar51 * dVar55;
          local_168[2] = dVar55 * local_168[2] * dVar51;
          local_128 = dVar45 * local_128 * dVar43;
          local_130 = local_130 * dVar45 * dVar43;
          local_138 = dVar43 * local_138 * dVar45;
          FUN_14481fd10(&local_2e8,&local_178);
          dVar45 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
          dVar55 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
          auVar47._0_8_ = dVar45 + dVar55;
          auVar47._8_8_ = dVar45 + dVar55;
          auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
          auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
          auVar52 = sqrtpd(auVar47,auVar47);
          auVar41 = divpd(auVar41,auVar52);
          auVar49._0_8_ = auVar41._0_8_ * local_2d8;
          auVar49._8_8_ = auVar41._8_8_ * dStack_2d0;
          local_398 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar46);
          local_3a8._8_8_ =
               (ulonglong)(dStack_2e0 * auVar41._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
          local_3a8._0_8_ =
               (ulonglong)(local_2e8 * auVar41._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
          local_378._8_8_ = 0;
          local_378._0_8_ = local_108;
          local_388 = local_118;
          dStack_380 = dStack_110;
          dVar45 = (double)local_3b8._0_8_;
          dVar55 = (double)local_3b8._8_8_;
        }
        local_368._8_4_ = SUB84(dVar40,0);
        local_368._0_8_ = dVar39;
        local_368._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        local_358._8_4_ = SUB84(dVar55,0);
        local_358._0_8_ = dVar45;
        local_358._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        FUN_147c478a8(puVar2,*local_3c0,local_3a8);
        iVar13 = (int)plVar21[5];
        puVar33 = local_3c8;
LAB_14361ddb4:
        uVar25 = uVar25 & ~(uint)uVar35;
        puVar19 = (uint *)plVar21[4];
        if ((uint *)plVar21[4] == (uint *)0x0) {
          puVar19 = puVar33;
        }
        iVar12 = (int)uVar28;
        lVar23 = (longlong)iVar12;
        uVar29 = puVar19[lVar23] & uVar25;
        if (uVar29 == 0) {
          iVar14 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar14 = iVar13 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar14 <= iVar12) break;
          lVar34 = 0;
          while( true ) {
            iVar31 = iVar31 + 0x20;
            uVar29 = puVar19[lVar34 + lVar23 + 1];
            if (uVar29 != 0) break;
            lVar34 = lVar34 + 1;
            if (iVar15 - lVar23 == lVar34) goto LAB_14361de4a;
          }
          uVar28 = (ulonglong)(iVar12 + (int)lVar34 + 1);
          uVar25 = 0xffffffff;
        }
        uVar35 = (ulonglong)(-uVar29 & uVar29);
        uVar37 = uVar35 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar12 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar13);
    }
LAB_14361de4a:
    FUN_147c63930(plVar21);
    local_280 = 0;
    if (local_288 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_147c63aba(&local_2c8);
    param_1 = local_3e0;
  }
LAB_14361d19a:
  FUN_1400bcfd8(puVar2);
  FUN_14034b25c(puVar2);
  ppuStack_170 = &local_1f8;
  local_178 = FUN_1436220d4;
  local_1f8 = puVar2;
  FUN_144966906(puVar2 + 0x4e);
  FUN_140156df6(*(undefined8 *)*param_1,0,1);
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361df8c FUN_14361df8c body=687 status=ok
// SIG undefined FUN_14361df8c(void)

void FUN_14361df8c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  puVar15 = (undefined8 *)(lVar1 + 0x138);
  local_78 = 0;
  uStack_70 = 0;
  if (*(longlong *)(lVar1 + 0x138) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(lVar1 + 0x138) + 0x40);
    uVar16 = (ulonglong)*(uint *)(lVar13 + 0x88);
    if ((int)*(uint *)(lVar13 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar16);
    }
    if (uVar16 != 0) {
      lVar8 = lVar13 + 0x78;
      local_90 = param_2;
      FUN_144724de8(&local_78,uVar16);
      uVar9 = 0;
      local_88 = puVar15;
      do {
        uVar6 = uStack_70;
        lVar14 = *(longlong *)(lVar13 + 0x80);
        if (*(longlong *)(lVar13 + 0x80) == 0) {
          lVar14 = lVar8;
        }
        uVar2 = *(undefined8 *)(lVar14 + uVar9 * 8);
        uVar3 = *local_88;
        lVar14 = (longlong)(int)uStack_70;
        uVar7 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
        if (uStack_70._4_4_ < uVar7) {
          local_80 = lVar8;
          FUN_1417333de(&local_78,uVar6 & 0xffffffff);
          lVar8 = local_80;
        }
        *(undefined8 *)(local_78 + lVar14 * 0x10) = uVar2;
        *(undefined8 *)(local_78 + 8 + lVar14 * 0x10) = uVar3;
        uVar9 = uVar9 + 1;
      } while (uVar16 != uVar9);
      plVar10 = local_90;
      lVar13 = (longlong)(int)uStack_70;
      puVar15 = local_88;
      if (0 < (longlong)(int)uStack_70) {
        do {
          puVar17 = (ulonglong *)((lVar13 + -1) * 0x10 + local_78);
          lVar8 = *(longlong *)(lVar1 + 0x108);
          if (*(longlong *)(lVar1 + 0x108) == 0) {
            lVar8 = lVar1;
          }
          plVar4 = *(longlong **)(lVar8 + 0x170);
          if ((plVar4 != (longlong *)0x0) &&
             (plVar10 = local_90, puVar15 = local_88,
             (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
            uVar16 = *puVar17;
            uVar7 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            plVar12 = plVar4 + 7;
            if ((longlong *)plVar4[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar4[8];
            }
            iVar11 = *(int *)((longlong)plVar12 +
                             (ulonglong)((int)plVar4[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            if (iVar11 != -1) {
              do {
                lVar14 = *plVar4 + (longlong)iVar11 * 0x90;
                if (*(ulonglong *)(*plVar4 + (longlong)iVar11 * 0x90) == uVar16) {
                  if ((longlong *)(lVar14 + 0x10) != (longlong *)0x0 && lVar14 != 0) {
                    lVar8 = *(longlong *)(lVar14 + 0x10);
                  }
                  break;
                }
                iVar11 = *(int *)(lVar14 + 0x80);
              } while (iVar11 != -1);
            }
          }
          if (*(longlong *)param_1[1] == lVar8) {
            FUN_147c63b48(*(undefined8 *)(lVar1 + 0x170),puVar17);
            if (*puVar17 != 0) {
              FUN_146dd9854(*(undefined8 *)(*plVar10 + 0x40),*puVar17,1);
            }
            *(undefined1 *)param_1[2] = 1;
          }
          bVar5 = 1 < lVar13;
          lVar13 = lVar13 + -1;
        } while (bVar5);
      }
    }
  }
  if (*(char *)param_1[2] != '\0') {
    FUN_1400bcfd8(lVar1);
    FUN_14034b25c(lVar1);
    local_50 = &local_60;
    local_58 = FUN_1436220d4;
    local_60 = lVar1;
    FUN_144966906(puVar15);
  }
  *(undefined8 *)(*(longlong *)param_1[1] + 0x108) = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14361e23e FUN_14361e23e body=8167 status=ok
// SIG undefined FUN_14361e23e(void)

/* WARNING: Removing unreachable block (ram,0x00014361fb3c) */
/* WARNING: Removing unreachable block (ram,0x00014361fb46) */
/* WARNING: Removing unreachable block (ram,0x00014361fb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14361e23e(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong *plVar8;
  int *piVar9;
  double *pdVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  undefined4 extraout_EAX;
  undefined4 uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 **ppuVar21;
  byte bVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  byte bVar27;
  ulonglong uVar28;
  longlong lVar29;
  double *pdVar30;
  longlong lVar31;
  ulonglong *puVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar52;
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar56 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  undefined8 uVar67;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  double dVar72;
  double dVar73;
  undefined8 uVar74;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  ulonglong *local_3a0;
  undefined1 local_398 [16];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  double local_370;
  double local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  double local_348;
  undefined8 uStack_340;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 *local_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  ulonglong *local_2a8;
  undefined8 uStack_2a0;
  undefined8 *local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
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
  undefined8 *local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar31 = *param_1;
  local_3a0 = (ulonglong *)(lVar31 + 0x138);
  local_2a8 = (ulonglong *)0x0;
  uStack_2a0 = 0;
  uVar68 = 0;
  if (*(longlong *)(lVar31 + 0x138) != 0) {
    lVar23 = *(longlong *)(*(longlong *)(lVar31 + 0x138) + 0x40);
    uVar28 = (ulonglong)*(uint *)(lVar23 + 0x88);
    if ((int)*(uint *)(lVar23 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar28);
    }
    uVar68 = 0;
    if (uVar28 != 0) {
      local_3a8 = lVar31;
      FUN_144724de8(&local_2a8);
      uVar26 = 0;
      do {
        lVar31 = *(longlong *)(lVar23 + 0x80);
        if (*(longlong *)(lVar23 + 0x80) == 0) {
          lVar31 = lVar23 + 0x78;
        }
        uVar5 = *(ulonglong *)(lVar31 + uVar26 * 8);
        uVar6 = *local_3a0;
        lVar31 = (longlong)(int)uStack_2a0;
        uVar15 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar15);
        if (uStack_2a0._4_4_ < uVar15) {
          FUN_1417333de(&local_2a8);
        }
        local_2a8[lVar31 * 2] = uVar5;
        local_2a8[lVar31 * 2 + 1] = uVar6;
        uVar26 = uVar26 + 1;
      } while (uVar28 != uVar26);
      lVar31 = local_3a8;
      if ((longlong)(int)uStack_2a0 < 1) {
        uVar68 = 0;
      }
      else {
        lVar23 = 0;
        uVar68 = 0;
        do {
          lVar29 = *(longlong *)(local_2a8[lVar23 * 2] + 0x10);
          bVar27 = *(byte *)(lVar29 + 0x1c) & 0x1f;
          if (bVar27 == 4 && lVar29 != 0) {
            do {
              lVar29 = *(longlong *)(lVar29 + 0x20);
              bVar27 = *(byte *)(lVar29 + 0x1c) & 0x1f;
            } while (lVar29 != 0 && bVar27 == 4);
          }
          if (bVar27 == 3) {
            uVar68 = 1;
          }
          else if (bVar27 == 0) {
            uVar68 = 2;
            break;
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 != (int)uStack_2a0);
      }
    }
  }
  *(undefined4 *)param_1[1] = uVar68;
  pdVar30 = (double *)param_1[2];
  dVar43 = ABS(*pdVar30);
  dVar72 = ABS(pdVar30[1]);
  dVar34 = 9.999999747378752e-05;
  if (1e-08 < dVar72) {
    dVar34 = dVar72;
  }
  iVar17 = *(int *)param_1[1];
  dVar46 = ABS(pdVar30[2]);
  dVar35 = (double)(~-(ulonglong)(dVar46 <= 1e-08) & (ulonglong)pdVar30[2] |
                   -(ulonglong)(dVar46 <= 1e-08) & 0x3f1a36e2e0000000);
  dVar60 = 9.999999747378752e-05;
  if (1e-08 < dVar43) {
    dVar60 = dVar43;
  }
  dVar43 = (double)(~-(ulonglong)(dVar43 <= 1e-08) & (ulonglong)*pdVar30 |
                   -(ulonglong)(dVar43 <= 1e-08) & 0x3f1a36e2e0000000);
  dVar72 = (double)(~-(ulonglong)(dVar72 <= 1e-08) & (ulonglong)pdVar30[1] |
                   -(ulonglong)(dVar72 <= 1e-08) & 0x3f1a36e2e0000000);
  if (iVar17 == 1) {
    if (dVar60 <= dVar34) {
      dVar60 = dVar34;
    }
    fVar33 = (float)dVar60;
    if (dVar43 <= dVar72) {
      dVar43 = dVar72;
    }
    if (dVar43 < 0.0) {
      fVar33 = -fVar33;
    }
    dVar43 = (double)fVar33;
    dVar65 = dVar43;
    dVar73 = dVar43;
    dVar72 = dVar43;
  }
  else {
    dVar65 = dVar43;
    dVar73 = dVar72;
    if ((iVar17 != 0) &&
       (dVar65 = (double)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da),
       dVar73 = (double)CONCAT44(unaff_XMM12_Dd,unaff_XMM12_Dc), iVar17 == 2)) {
      dVar46 = (double)(~-(ulonglong)(dVar46 <= 1e-08) & (ulonglong)dVar46 |
                       -(ulonglong)(dVar46 <= 1e-08) & 0x3f1a36e2e0000000);
      if (dVar34 <= dVar60) {
        dVar60 = dVar34;
      }
      if (dVar46 <= dVar60) {
        dVar60 = dVar46;
      }
      fVar33 = (float)dVar60;
      if (dVar43 <= dVar72) {
        dVar43 = dVar72;
      }
      if (dVar43 <= dVar35) {
        dVar43 = dVar35;
      }
      if (dVar43 < 0.0) {
        fVar33 = -fVar33;
      }
      dVar43 = (double)fVar33;
      dVar65 = dVar43;
      dVar73 = dVar43;
      dVar35 = dVar43;
      dVar72 = dVar43;
    }
  }
  uVar67 = 0;
  pauVar7 = (undefined1 (*) [16])param_1[3];
  auVar54._8_4_ = SUB84(dVar73,0);
  auVar54._0_8_ = dVar65;
  auVar54._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
  *pauVar7 = auVar54;
  *(double *)pauVar7[1] = dVar35;
  local_2b8 = 0;
  uStack_2b0 = 0;
  if ((int)uStack_2a0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_2a0 & 0xffffffff);
  }
  iVar17 = 0;
  if ((uStack_2a0 & 0xffffffff) != 0) {
    FUN_140836c88(&local_2b8);
    iVar17 = 0;
    if ((longlong)(int)uStack_2a0 != 0) {
      uVar68 = SUB84(ABS(dVar35),0);
      uVar69 = (undefined4)((ulonglong)ABS(dVar35) >> 0x20);
      uVar70 = 0;
      uVar71 = 0;
      dVar72 = ABS(dVar72);
      uVar74 = 0;
      dVar43 = ABS(dVar43);
      puVar32 = local_2a8 + (longlong)(int)uStack_2a0 * 2;
      local_3a8 = CONCAT71(local_3a8._1_7_,dVar35 == 1.0 & -(dVar73 == 1.0 && dVar65 == 1.0));
      local_370 = dVar43;
      if (dVar43 <= dVar72) {
        local_370 = dVar72;
      }
      dStack_2d0 = 0.0;
      puVar25 = local_2a8;
      local_318 = dVar73;
      dStack_310 = dVar73;
      local_2d8 = dVar35;
      do {
        uVar62 = (undefined4)((ulonglong)dVar73 >> 0x20);
        uVar16 = SUB84(dVar73,0);
        uVar28 = *puVar25;
        lVar23 = *(longlong *)(lVar31 + 0x108);
        if (*(longlong *)(lVar31 + 0x108) == 0) {
          lVar23 = lVar31;
        }
        plVar8 = *(longlong **)(lVar23 + 0x170);
        if (plVar8 == (longlong *)0x0) {
          lVar29 = 0;
        }
        else {
          if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
            uVar15 = ((uint)(uVar28 >> 0x14) & 0xffff ^ (uint)(uVar28 >> 4)) * -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            plVar24 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar24 = (longlong *)plVar8[8];
            }
            iVar17 = *(int *)((longlong)plVar24 +
                             (ulonglong)((int)plVar8[9] - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
            if (iVar17 != -1) {
              do {
                lVar23 = *plVar8 + (longlong)iVar17 * 0x90;
                if (*(ulonglong *)(*plVar8 + (longlong)iVar17 * 0x90) == uVar28) goto LAB_143620024;
                iVar17 = *(int *)(lVar23 + 0x80);
              } while (iVar17 != -1);
            }
          }
          lVar23 = 0;
LAB_143620024:
          lVar29 = lVar23 + 0x10;
          if (lVar23 == 0) {
            lVar29 = 0;
          }
        }
        lVar23 = *(longlong *)(uVar28 + 0x10);
        bVar27 = *(byte *)(lVar23 + 0x1c);
        pdVar30 = (double *)(lVar29 + 0x10);
        if (lVar29 == 0) {
          pdVar30 = (double *)&DAT_14c846480;
        }
        bVar22 = bVar27;
        if (bVar27 == 4) {
          bVar22 = *(byte *)(*(longlong *)(lVar23 + 0x20) + 0x1c);
        }
        bVar12 = bVar22 ^ 0x40;
        if (bVar22 < 0x40) {
          bVar12 = bVar22;
        }
        bVar13 = bVar22 & 0x7f;
        if (-1 < (char)bVar22) {
          bVar13 = bVar12;
        }
        if ((((uVar28 == 0) ||
             (piVar9 = *(int **)(uVar28 + 0x68 + (ulonglong)((*(byte *)(uVar28 + 8) & 3) == 0) * 8),
             piVar9 == (int *)0x0)) || (*piVar9 != 6)) ||
           (lVar29 = *(longlong *)(piVar9 + 2), lVar29 == 0)) {
          if (bVar13 < 0xd) {
            if ((0x110bU >> (bVar13 & 0x1f) & 1) != 0) goto switchD_14361e6ce_caseD_c;
            if (bVar13 == 0xb) goto switchD_14361e6ce_caseD_b;
          }
switchD_14361e6ce_caseD_2:
        }
        else {
          switch(bVar13) {
          case 0:
            if (bVar22 < 0x40) {
              dVar58 = (double)*(float *)(lVar29 + 0x48) * dVar43;
              dVar53 = *(double *)(lVar29 + 0x30) * pdVar30[8];
              dVar57 = *(double *)(lVar29 + 0x38) * pdVar30[9];
              dVar48 = *(double *)(lVar29 + 0x40) * pdVar30[10];
              dVar59 = *pdVar30;
              dVar44 = pdVar30[1];
              dVar49 = pdVar30[2];
              dVar60 = pdVar30[3];
              dVar34 = pdVar30[3];
              dVar61 = dVar57 * dVar59 - dVar53 * dVar44;
              dVar52 = dVar48 * dVar44 - dVar57 * dVar49;
              dVar64 = dVar53 * dVar49 - dVar59 * dVar48;
              dVar52 = dVar52 + dVar52;
              dVar64 = dVar64 + dVar64;
              dVar61 = dVar61 + dVar61;
              dVar46 = pdVar30[4];
              dVar66 = pdVar30[5];
              if (dVar58 <= 9.999999747378752e-05) {
                dVar58 = 9.999999747378752e-05;
              }
              dVar1 = pdVar30[6];
              pdVar30 = (double *)param_1[2];
              dVar2 = pdVar30[2];
              dVar3 = pdVar30[1];
              dVar4 = *pdVar30;
              puVar19 = (undefined8 *)FUN_14001cc68(0x38,0x10);
              puVar19[1] = 0;
              *(undefined2 *)(puVar19 + 3) = 0x101;
              *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
              *(undefined2 *)((longlong)puVar19 + 0x1c) = 0;
              *puVar19 = &PTR_FUN_149f48e60;
              puVar19[4] = ((dVar61 * dVar44 - dVar64 * dVar49) + dVar60 * dVar52 + dVar53 + dVar46)
                           * dVar4;
              puVar19[5] = ((dVar49 * dVar52 - dVar59 * dVar61) + dVar34 * dVar64 + dVar57 + dVar66)
                           * dVar3;
              puVar19[6] = (dVar61 * dVar60 + dVar48 + (dVar64 * dVar59 - dVar52 * dVar44) + dVar1)
                           * dVar2;
              puVar19[2] = dVar58;
LAB_14361f548:
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              uVar28 = (ulonglong)(int)uStack_2b0;
              uVar15 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
              if (uStack_2b0._4_4_ < uVar15) {
LAB_14361f56e:
                FUN_140619960(&local_2b8,uVar28 & 0xffffffff);
              }
LAB_14361f57e:
              *(undefined8 **)(local_2b8 + uVar28 * 8) = puVar19;
LAB_14361f58a:
              *(undefined1 *)param_1[4] = 1;
            }
            break;
          case 1:
            if (bVar22 < 0x40) {
              local_358._8_4_ = uVar16;
              local_358._0_8_ = dVar65;
              local_358._12_4_ = uVar62;
              local_368 = (double)(*(float *)(lVar29 + 0x60) * 0.5) * dVar43;
              uStack_360 = 0;
              local_2f8 = (double)(*(float *)(lVar29 + 100) * 0.5) * dVar72;
              uStack_2f0 = 0;
              local_2e8 = (double)(*(float *)(lVar29 + 0x68) * 0.5) *
                          (double)CONCAT44(uVar69,uVar68);
              uStack_2e0 = 0;
              auVar54 = *(undefined1 (*) [16])(lVar29 + 0x48);
              auVar36 = divpd(auVar54,_DAT_1499387d0);
              auVar40._8_8_ = 0;
              auVar40._0_8_ = *(double *)(lVar29 + 0x58);
              auVar41 = divpd(auVar40,_DAT_1499387d0);
              auVar36 = roundpd(auVar36,auVar36,3);
              auVar41 = roundpd(auVar41,auVar41,3);
              dVar46 = (auVar54._0_8_ - auVar36._0_8_ * (double)DAT_1499387d0) *
                       0.008726646259971648;
              dVar65 = (auVar54._8_8_ - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar73 = (*(double *)(lVar29 + 0x58) - auVar41._0_8_ * (double)DAT_1499387d0) *
                       0.008726646259971648;
              dVar66 = (0.0 - auVar41._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              local_388 = uVar68;
              uStack_384 = uVar69;
              uStack_380 = uVar70;
              uStack_37c = uVar71;
              local_348 = dVar35;
              uStack_340 = uVar67;
              dVar34 = sin(dVar46);
              uVar68 = (undefined4)lVar23;
              dVar35 = sin(dVar65);
              dVar60 = sin(dVar73);
              sin(dVar66);
              dVar46 = cos(dVar46);
              dVar65 = cos(dVar65);
              dVar73 = cos(dVar73);
              cos(dVar66);
              dVar59 = -(dVar65 * dVar34 * dVar60) + dVar35 * dVar46 * dVar73;
              dVar44 = dVar35 * dVar34 * dVar60 + dVar65 * dVar46 * dVar73;
              dVar66 = dVar34 * dVar35 * dVar73 - dVar46 * dVar65 * dVar60;
              dVar35 = -(dVar34 * dVar65 * dVar73) - dVar46 * dVar35 * dVar60;
              local_398 = *(undefined1 (*) [16])(pdVar30 + 8);
              auVar54 = *(undefined1 (*) [16])(pdVar30 + 10);
              dVar34 = auVar54._0_8_;
              dVar60 = auVar54._8_8_;
              auVar36 = minpd(_DAT_149934d80,local_398);
              auVar54 = minpd(ZEXT816(0x3ff0000000000000),auVar54);
              auVar50._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar50._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar17 = movmskpd(extraout_EAX,auVar50);
              auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
              auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
              uVar15 = movmskpd(uVar68,auVar55);
              if ((uVar15 & 0x3fffffff) == 0 && iVar17 == 0) {
                dVar57 = *pdVar30;
                dVar61 = pdVar30[1];
                dVar52 = pdVar30[2];
                dVar64 = pdVar30[3];
                dVar46 = pdVar30[3];
                dVar65 = pdVar30[3];
                dVar49 = pdVar30[1];
                dVar73 = pdVar30[1];
                dVar48 = pdVar30[2];
                dVar53 = pdVar30[2];
                local_178._0_8_ =
                     dVar35 * dVar48 * -1.0 +
                     dVar59 * dVar49 + dVar44 * *pdVar30 * 1.0 + dVar66 * dVar46;
                local_178._8_8_ =
                     dVar66 * dVar53 * 1.0 +
                     dVar44 * dVar73 + dVar59 * *pdVar30 * -1.0 + dVar35 * dVar65;
                local_168._0_8_ =
                     dVar44 * dVar48 * 1.0 +
                     ((*pdVar30 * dVar35 * 1.0 + dVar59 * dVar46) - dVar66 * dVar49);
                local_168._8_8_ =
                     dVar59 * dVar53 * -1.0 +
                     ((*pdVar30 * dVar66 * -1.0 + dVar44 * dVar65) - dVar35 * dVar73);
                dVar44 = *(double *)(lVar29 + 0x30) * (double)local_398._0_8_;
                dVar49 = *(double *)(lVar29 + 0x38) * (double)local_398._8_8_;
                dVar66 = *(double *)(lVar29 + 0x40) * dVar34;
                dVar59 = dVar60 * 0.0;
                dVar48 = dVar49 * dVar57 - dVar44 * dVar61;
                dVar53 = dVar66 * dVar61 - dVar49 * dVar52;
                dVar35 = dVar44 * dVar52 - dVar66 * dVar57;
                dVar73 = dVar59 * dVar64 - dVar59 * dVar64;
                dVar53 = dVar53 + dVar53;
                dVar35 = dVar35 + dVar35;
                dVar48 = dVar48 + dVar48;
                dVar73 = dVar73 + dVar73;
                local_158 = (dVar48 * dVar61 - dVar52 * dVar35) + dVar46 * dVar53 + dVar44 +
                            pdVar30[4];
                dStack_150 = (dVar53 * dVar52 - dVar48 * dVar57) + dVar65 * dVar35 + dVar49 +
                             pdVar30[5];
                local_148 = (dVar35 * dVar57 - dVar61 * dVar53) + dVar46 * dVar48 + dVar66 +
                            pdVar30[6];
                dStack_140 = (dVar73 * dVar64 - dVar73 * dVar64) + dVar65 * dVar73 + dVar59 +
                             pdVar30[7];
                dVar34 = dVar34 * 1.0;
                dVar60 = dVar60 * 0.0;
                uVar16 = 0;
              }
              else {
                dVar48 = *pdVar30;
                dVar53 = pdVar30[1];
                dVar46 = pdVar30[2];
                dVar57 = dVar53 + dVar53;
                dVar65 = dVar46 + dVar46;
                dVar61 = dVar48 * (dVar48 + dVar48);
                local_1f8 = (undefined8 *)
                            (((double)DAT_149934d80 - (dVar46 * dVar65 + dVar53 * dVar57)) *
                            (double)local_398._0_8_);
                dStack_1d0 = (DAT_149934d80._8_8_ - (dVar46 * dVar65 + dVar61)) *
                             (double)local_398._8_8_;
                dVar46 = pdVar30[3];
                dVar73 = dVar65 * dVar46;
                dVar49 = (dVar48 + dVar48) * pdVar30[3];
                dVar46 = dVar57 * dVar46;
                local_1d8 = (dVar57 * dVar48 - dVar73) * (double)local_398._8_8_;
                dStack_1b0 = (dVar65 * dVar53 - dVar49) * dVar34;
                local_1b8 = (dVar46 + *pdVar30 * dVar65) * dVar34;
                dStack_1f0 = (dVar57 * dVar48 + dVar73) * (double)local_398._0_8_;
                local_1c8 = (dVar65 * dVar53 + dVar49) * (double)local_398._8_8_;
                local_1a8 = (1.0 - (dVar61 + dVar53 * dVar57)) * dVar34;
                local_1e8 = (*pdVar30 * dVar65 - dVar46) * (double)local_398._0_8_;
                dStack_1e0 = 0.0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = pdVar30[4];
                dStack_190 = pdVar30[5];
                local_188 = pdVar30[6];
                uStack_180 = 0x3ff0000000000000;
                dVar65 = dVar35 + dVar35;
                dVar49 = dVar59 + dVar59;
                dVar73 = dVar66 * (dVar66 + dVar66);
                dVar46 = 1.0 - (dVar59 * dVar49 + dVar73);
                local_228 = 1.0 - (dVar73 + dVar35 * dVar65);
                dStack_230 = (dVar66 + dVar66) * dVar44;
                local_248 = dVar49 * dVar35 + dStack_230;
                dStack_230 = dVar49 * dVar35 - dStack_230;
                local_238 = dVar65 * dVar44 + dVar66 * dVar49;
                local_268 = dVar66 * dVar49 - dVar65 * dVar44;
                local_278._8_8_ = dVar65 * dVar66 + dVar49 * dVar44;
                local_278._0_8_ = 1.0 - (dVar59 * dVar49 + dVar35 * dVar65);
                dStack_260 = 0.0;
                local_258._8_4_ = SUB84(dVar46,0);
                local_258._0_8_ = dVar65 * dVar66 - dVar49 * dVar44;
                local_258._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                uStack_240 = 0;
                uStack_220 = 0;
                uStack_200 = 0x3ff0000000000000;
                local_308 = dVar34 * 1.0;
                dStack_300 = dVar60 * 0.0;
                local_218 = *(double *)(lVar29 + 0x30);
                dStack_210 = *(double *)(lVar29 + 0x38);
                local_208 = *(double *)(lVar29 + 0x40);
                FUN_1447fea8d(local_178,local_278);
                dVar60 = dStack_300;
                dVar34 = local_308;
                local_320 = (double)local_168._0_8_;
                dVar46 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                         (double)local_178._0_8_ * (double)local_178._0_8_ +
                         (double)local_178._8_8_ * (double)local_178._8_8_;
                local_328 = local_148;
                dVar65 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
                local_330 = (double)local_128._0_8_;
                dVar35 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                         local_138 * local_138 + dStack_130 * dStack_130;
                uVar28 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
                dVar46 = (double)(~uVar28 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar46)) & uVar28);
                uVar28 = -(ulonglong)(0.0 <= dVar65 + -9.99999993922529e-09);
                dVar65 = (double)(~uVar28 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar65)) & uVar28);
                uVar28 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
                dVar35 = (double)(~uVar28 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar35)) & uVar28);
                auVar37._8_8_ = -(ulonglong)(0.0 <= (double)local_398._8_8_);
                auVar37._0_8_ = -(ulonglong)(0.0 <= (double)local_398._0_8_);
                auVar54 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar37);
                dVar73 = (double)(~-(ulonglong)(0.0 <= local_308) & 0xbff0000000000000 |
                                 -(ulonglong)(0.0 <= local_308) & 0x3ff0000000000000);
                dVar66 = auVar54._0_8_;
                local_178._8_8_ = (double)local_178._8_8_ * dVar46 * dVar66;
                local_178._0_8_ = (double)local_178._0_8_ * dVar46 * dVar66;
                local_168._0_8_ = dVar46 * (double)local_168._0_8_ * dVar66;
                dVar46 = auVar54._8_8_;
                local_148 = dVar65 * local_148 * dVar46;
                dStack_150 = dStack_150 * dVar65 * dVar46;
                local_158 = dVar46 * local_158 * dVar65;
                dStack_130 = dStack_130 * dVar35 * dVar73;
                local_138 = dVar73 * local_138 * dVar35;
                local_128._0_8_ = dVar35 * (double)local_128._0_8_ * dVar73;
                ppuVar21 = &local_298;
                iVar17 = FUN_14481fd10(ppuVar21,local_178);
                uVar16 = SUB84(ppuVar21,0);
                dVar35 = local_288 * local_288 + (double)local_298 * (double)local_298;
                dVar46 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar45._0_8_ = dVar35 + dVar46;
                auVar45._8_8_ = dVar35 + dVar46;
                auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
                auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
                auVar54 = sqrtpd(auVar45,auVar45);
                auVar54 = divpd(_DAT_149934d80,auVar54);
                auVar47._0_8_ = auVar54._0_8_ * local_288;
                auVar47._8_8_ = auVar54._8_8_ * dStack_280;
                local_178._0_8_ =
                     (ulonglong)((double)local_298 * auVar54._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
                local_178._8_8_ =
                     (ulonglong)(dStack_290 * auVar54._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
                local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar38);
                dStack_140 = 0.0;
                local_148 = local_108;
                local_158 = local_118;
                dStack_150 = dStack_110;
              }
              uVar67 = uStack_340;
              dVar35 = local_348;
              uVar71 = uStack_37c;
              uVar70 = uStack_380;
              uVar69 = uStack_384;
              uVar68 = local_388;
              local_148 = local_148 * local_2d8;
              dStack_140 = dStack_140 * dStack_2d0;
              dVar46 = local_368;
              if (local_368 <= 9.999999747378752e-05) {
                dVar46 = 9.999999747378752e-05;
              }
              dVar66 = local_2f8;
              if (local_2f8 <= 9.999999747378752e-05) {
                dVar66 = 9.999999747378752e-05;
              }
              uVar62 = SUB84(local_2e8,0);
              uVar63 = (undefined4)((ulonglong)local_2e8 >> 0x20);
              if (local_2e8 <= 9.999999747378752e-05) {
                uVar62 = 0xe0000000;
                uVar63 = 0x3f1a36e2;
              }
              local_138 = (double)local_398._0_8_;
              dStack_130 = (double)local_398._8_8_;
              local_128._8_4_ = SUB84(dVar60,0);
              local_128._0_8_ = dVar34;
              local_128._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              dVar65 = (double)local_358._0_8_;
              dVar73 = (double)local_358._8_8_;
              local_158 = local_158 * (double)local_358._0_8_;
              dStack_150 = dStack_150 * (double)local_358._8_8_;
              if (bVar27 != 4) {
                auVar51._8_8_ = -(ulonglong)(local_178._8_8_ == DAT_14c8463d8);
                auVar51._0_8_ = -(ulonglong)(local_178._0_8_ == DAT_14c8463d0);
                auVar56._8_8_ = -(ulonglong)(local_168._8_8_ == DAT_14c8463e8);
                auVar56._0_8_ = -(ulonglong)(local_168._0_8_ == DAT_14c8463e0);
                iVar17 = movmskpd(iVar17,auVar51);
                iVar20 = movmskpd(uVar16,auVar56);
                if (iVar17 + iVar20 * 4 != 0xf) {
                  dVar59 = local_148 - (double)CONCAT44(uVar63,uVar62);
                  dVar34 = dStack_150 - dVar66;
                  dVar44 = local_158 - dVar46;
                  dVar60 = (double)CONCAT44(uVar63,uVar62) + local_148;
                  dVar66 = dStack_150 + dVar66;
                  dVar46 = dVar46 + local_158;
                  puVar19 = (undefined8 *)FUN_14001cc68(0x50,0x10);
                  uVar28 = uStack_2b0;
                  puVar19[1] = 0;
                  puVar19[2] = 0;
                  *(undefined2 *)(puVar19 + 3) = 0x101;
                  *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
                  *(undefined2 *)((longlong)puVar19 + 0x1c) = 0x101;
                  *puVar19 = &PTR_FUN_149f489d0;
                  puVar19[4] = dVar44;
                  puVar19[5] = dVar34;
                  puVar19[6] = dVar59;
                  puVar19[7] = dVar46;
                  puVar19[8] = dVar66;
                  puVar19[9] = dVar60;
                  if (puVar19 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                    UNLOCK();
                  }
                  lVar23 = (longlong)(int)uStack_2b0;
                  uVar15 = (int)uStack_2b0 + 1;
                  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
                  if (uStack_2b0._4_4_ < uVar15) {
                    FUN_140619960(&local_2b8,uVar28 & 0xffffffff);
                  }
                  *(undefined8 **)(local_2b8 + lVar23 * 8) = puVar19;
                  uVar68 = local_388;
                  uVar69 = uStack_384;
                  uVar70 = uStack_380;
                  uVar71 = uStack_37c;
                  goto LAB_14361f58a;
                }
              }
              local_1f8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
              local_1f8[1] = 0;
              local_1f8[2] = 0;
              *(undefined2 *)(local_1f8 + 3) = 0x101;
              *(undefined1 *)((longlong)local_1f8 + 0x1a) = 1;
              *(undefined2 *)((longlong)local_1f8 + 0x1c) = 0x101;
              *local_1f8 = &PTR_FUN_149f489d0;
              local_1f8[4] = -dVar46;
              local_1f8[5] = -dVar66;
              local_1f8[6] = CONCAT44(uVar63,uVar62) ^ 0x8000000000000000;
              local_1f8[7] = dVar46;
              local_1f8[8] = dVar66;
              local_1f8[9] = CONCAT44(uVar63,uVar62);
              if (local_1f8 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(local_1f8 + 1) = *(int *)(local_1f8 + 1) + 1;
                UNLOCK();
              }
              lVar23 = FUN_14001cc68(0xc0,0x10);
              FUN_14010f5c4(lVar23,&local_1f8);
              uVar28 = uStack_2b0;
              if (lVar23 != 0) {
                LOCK();
                *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                UNLOCK();
              }
              lVar29 = (longlong)(int)uStack_2b0;
              uVar15 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
              if (uStack_2b0._4_4_ < uVar15) {
                FUN_140619960(&local_2b8,uVar28 & 0xffffffff);
              }
              *(longlong *)(local_2b8 + lVar29 * 8) = lVar23;
              if (local_1f8 != (undefined8 *)0x0) {
                LOCK();
                piVar9 = (int *)(local_1f8 + 1);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if ((*piVar9 == 0) && (*(int *)((longlong)local_1f8 + 0xc) == 0)) {
                  (**(code **)*local_1f8)(local_1f8,1);
                }
              }
              goto LAB_14361f58a;
            }
            break;
          default:
            goto switchD_14361e6ce_caseD_2;
          case 3:
            if (bVar22 < 0x40) {
              local_398._8_8_ = uVar74;
              local_398._0_8_ = dVar72;
              fVar33 = *(float *)(lVar29 + 0x60);
              local_358._8_4_ = uVar16;
              local_358._0_8_ = dVar65;
              local_358._12_4_ = uVar62;
              if (*(int *)(lVar29 + 0x14) == 4) {
                dVar72 = (double)((fVar33 + *(float *)(lVar29 + 100)) * 0.5);
                dVar34 = local_370 * dVar72;
                if (dVar34 <= 0.1) {
                  dVar34 = 0.1;
                }
                dVar48 = *(double *)(lVar29 + 0x30) * pdVar30[8];
                dVar53 = *(double *)(lVar29 + 0x38) * pdVar30[9];
                dVar44 = *(double *)(lVar29 + 0x40) * pdVar30[10];
                dVar73 = *pdVar30;
                dVar59 = pdVar30[1];
                dVar49 = pdVar30[2];
                dVar60 = pdVar30[3];
                dVar46 = dVar53 * dVar73 - dVar48 * dVar59;
                dVar65 = dVar44 * dVar59 - dVar53 * dVar49;
                dVar66 = dVar48 * dVar49 - dVar73 * dVar44;
                dVar65 = dVar65 + dVar65;
                dVar66 = dVar66 + dVar66;
                dVar46 = dVar46 + dVar46;
                pdVar10 = (double *)param_1[2];
                dVar44 = (dVar46 * dVar60 + dVar44 + (dVar66 * dVar73 - dVar65 * dVar59) +
                         pdVar30[6]) * pdVar10[2];
                dVar73 = ((dVar49 * dVar65 - dVar73 * dVar46) + pdVar30[3] * dVar66 + dVar53 +
                         pdVar30[5]) * pdVar10[1];
                dVar60 = ((dVar46 * dVar59 - dVar66 * dVar49) + dVar60 * dVar65 + dVar48 +
                         pdVar30[4]) * *pdVar10;
                dVar72 = (double)(*(float *)(lVar29 + 0x68) * 0.5) + dVar72;
              }
              else {
                dVar34 = (double)fVar33 * local_370;
                if (dVar34 <= 0.1) {
                  dVar34 = 0.1;
                }
                dVar49 = *(double *)(lVar29 + 0x30) * pdVar30[8];
                dVar48 = *(double *)(lVar29 + 0x38) * pdVar30[9];
                dVar44 = *(double *)(lVar29 + 0x40) * pdVar30[10];
                dVar73 = *pdVar30;
                dVar66 = pdVar30[1];
                dVar59 = pdVar30[2];
                dVar72 = pdVar30[3];
                dVar60 = dVar48 * dVar73 - dVar49 * dVar66;
                dVar46 = dVar44 * dVar66 - dVar48 * dVar59;
                dVar65 = dVar49 * dVar59 - dVar73 * dVar44;
                dVar46 = dVar46 + dVar46;
                dVar65 = dVar65 + dVar65;
                dVar60 = dVar60 + dVar60;
                pdVar10 = (double *)param_1[2];
                dVar44 = (dVar60 * dVar72 + dVar44 + (dVar65 * dVar73 - dVar46 * dVar66) +
                         pdVar30[6]) * pdVar10[2];
                dVar73 = ((dVar59 * dVar46 - dVar73 * dVar60) + pdVar30[3] * dVar65 + dVar48 +
                         pdVar30[5]) * pdVar10[1];
                dVar60 = ((dVar60 * dVar66 - dVar65 * dVar59) + dVar72 * dVar46 + dVar49 +
                         pdVar30[4]) * *pdVar10;
                dVar72 = (double)(*(float *)(lVar29 + 100) * 0.5 + fVar33);
              }
              local_1f8 = (undefined8 *)0x0;
              dStack_1f0 = 0.0;
              local_1e8 = 1.0;
              local_388 = uVar68;
              uStack_384 = uVar69;
              uStack_380 = uVar70;
              uStack_37c = uVar71;
              local_348 = dVar35;
              uStack_340 = uVar67;
              FUN_1401c9a0e(lVar29 + 0x48,local_178);
              dVar72 = dVar72 * (double)CONCAT44(uStack_384,local_388);
              if (dVar72 <= dVar34) {
                dVar34 = dVar72;
              }
              local_368 = dVar34;
              if (dVar34 <= 9.999999747378752e-05) {
                local_368 = 9.999999747378752e-05;
              }
              dVar34 = 9.999999747378752e-05;
              if (9.999999747378752e-05 <= dVar72 - local_368) {
                dVar34 = dVar72 - local_368;
              }
              dVar46 = (double)local_178._0_8_ * dVar34;
              dVar65 = (double)local_178._8_8_ * dVar34;
              dVar34 = dVar34 * (double)local_168._0_8_;
              dVar35 = dVar44 - dVar34;
              dVar66 = dVar73 - dVar65;
              dVar72 = dVar60 - dVar46;
              puVar19 = (undefined8 *)FUN_14001cc68(0x58,0x10);
              puVar19[1] = 0;
              *(undefined2 *)(puVar19 + 3) = 0x101;
              *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
              *(undefined2 *)((longlong)puVar19 + 0x1c) = 0x303;
              *puVar19 = &PTR_FUN_149f487f0;
              puVar19[4] = dVar72;
              puVar19[5] = dVar66;
              puVar19[6] = dVar35;
              dVar35 = (dVar34 + dVar44) - dVar35;
              dVar66 = (dVar65 + dVar73) - dVar66;
              dVar72 = (dVar46 + dVar60) - dVar72;
              dVar73 = dVar35 * dVar35 + dVar72 * dVar72 + dVar66 * dVar66;
              dVar60 = 0.0;
              dVar65 = 1.0;
              dVar34 = 0.0;
              dVar46 = 0.0;
              if (9.999999747378752e-05 <= dVar73) {
                dVar46 = SQRT(dVar73);
                dVar34 = dVar35 / dVar46;
                dVar60 = dVar66 / dVar46;
                dVar65 = dVar72 / dVar46;
              }
              puVar19[7] = dVar65;
              puVar19[8] = dVar60;
              puVar19[9] = dVar34;
              puVar19[10] = dVar46;
              puVar19[2] = local_368;
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              uVar28 = (ulonglong)(int)uStack_2b0;
              uVar15 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
              uVar68 = local_388;
              uVar69 = uStack_384;
              uVar70 = uStack_380;
              uVar71 = uStack_37c;
              dVar65 = (double)local_358._0_8_;
              dVar73 = (double)local_358._8_8_;
              dVar35 = local_348;
              uVar67 = uStack_340;
              dVar72 = (double)local_398._0_8_;
              uVar74 = local_398._8_8_;
              if (uStack_2b0._4_4_ < uVar15) goto LAB_14361f56e;
              goto LAB_14361f57e;
            }
            break;
          case 8:
            if (0x3f < bVar22) {
              local_298 = (undefined8 *)0x0;
              if ((char)local_3a8 == '\0') {
                puVar19 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                local_178._8_4_ = uVar16;
                local_178._0_8_ = dVar65;
                local_178._12_4_ = uVar62;
                local_168._0_8_ = dVar35;
                local_1f8 = *(undefined8 **)(lVar29 + 0xf0);
                if (local_1f8 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_1f8 + 1) = *(int *)(local_1f8 + 1) + 1;
                  UNLOCK();
                }
                uVar16 = FUN_1405445a8(puVar19,&local_1f8);
              }
              else {
                puVar19 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                uVar16 = FUN_1429b40a4(puVar19,(double *)(lVar29 + 0xf0));
              }
              puVar18 = local_298;
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              if (local_298 != (undefined8 *)0x0) {
                LOCK();
                piVar9 = (int *)(local_298 + 1);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if ((*piVar9 == 0) && (*(int *)((longlong)local_298 + 0xc) == 0)) {
                  puVar11 = (undefined8 *)*local_298;
                  local_298 = puVar19;
                  uVar16 = (*(code *)*puVar11)(puVar18,1);
                  puVar19 = local_298;
                }
              }
              local_298 = puVar19;
              auVar39._8_8_ = -(ulonglong)(DAT_14c8463d8 != pdVar30[1]);
              auVar39._0_8_ = -(ulonglong)(DAT_14c8463d0 != *pdVar30);
              iVar17 = movmskpd(uVar16,auVar39);
              auVar42._8_8_ = -(ulonglong)(DAT_14c8463e8 != pdVar30[3]);
              auVar42._0_8_ = -(ulonglong)(DAT_14c8463e0 != pdVar30[2]);
              uVar15 = movmskpd((int)puVar18,auVar42);
              dVar60 = pdVar30[4];
              dVar46 = pdVar30[5];
              dVar34 = pdVar30[6];
              if (((((uVar15 & 0x3fffffff) != 0 || iVar17 != 0) || (dVar60 != DAT_14c8464e0)) ||
                  (NAN(dVar60) || NAN(DAT_14c8464e0))) ||
                 (((dVar46 != DAT_14c8464e8 || (NAN(dVar46) || NAN(DAT_14c8464e8))) ||
                  ((dVar34 != DAT_14c8464f0 ||
                   (puVar19 = local_298, NAN(dVar34) || NAN(DAT_14c8464f0))))))) {
                local_1f8 = (undefined8 *)*pdVar30;
                dStack_1f0 = pdVar30[1];
                local_1e8 = pdVar30[2];
                dStack_1e0 = pdVar30[3];
                local_278 = *(undefined1 (*) [16])(pdVar30 + 8);
                local_268 = pdVar30[10];
                dStack_260 = pdVar30[0xb];
                dVar46 = dVar46 * local_318;
                puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
                local_168._8_8_ = dStack_1e0;
                local_168._0_8_ = local_1e8;
                local_178._8_8_ = dStack_1f0;
                local_178._0_8_ = local_1f8;
                dStack_140 = 0.0;
                local_128._8_8_ = dStack_260;
                local_128._0_8_ = local_268;
                local_138 = (double)local_278._0_8_;
                dStack_130 = (double)local_278._8_8_;
                local_158 = dVar60 * dVar65;
                dStack_150 = dVar46;
                local_148 = dVar34 * dVar35;
                FUN_14010f5c4(puVar19,&local_298);
                puVar18 = local_298;
                if (puVar19 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                  UNLOCK();
                }
                if (local_298 != (undefined8 *)0x0) {
                  LOCK();
                  piVar9 = (int *)(local_298 + 1);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if ((*piVar9 == 0) && (*(int *)((longlong)local_298 + 0xc) == 0)) {
                    puVar11 = (undefined8 *)*local_298;
                    local_298 = puVar19;
                    (*(code *)*puVar11)(puVar18,1);
                    puVar19 = local_298;
                  }
                }
              }
              local_298 = puVar19;
              uVar28 = uStack_2b0;
              lVar23 = (longlong)(int)uStack_2b0;
              uVar15 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
              if (uStack_2b0._4_4_ < uVar15) {
                FUN_140619960(&local_2b8,uVar28 & 0xffffffff);
              }
              *(undefined8 **)(local_2b8 + lVar23 * 8) = local_298;
              local_298 = (undefined8 *)0x0;
              *(undefined1 *)param_1[4] = 1;
            }
            break;
          case 0xb:
switchD_14361e6ce_caseD_b:
            if (0x3f < bVar22) {
              if (bVar27 == 4) {
                lVar23 = *(longlong *)(lVar23 + 0x20);
              }
              if ((char)bVar22 < '\0') {
                puVar19 = *(undefined8 **)(lVar23 + 0x88);
                if (puVar19 == (undefined8 *)0x0) {
                  puVar19 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                  local_178._8_4_ = uVar16;
                  local_178._0_8_ = dVar65;
                  local_178._12_4_ = uVar62;
                  local_168._0_8_ = dVar35;
                  local_1f8 = (undefined8 *)0x0;
                  FUN_140fa714a(puVar19,&local_1f8,local_178,0);
                  goto LAB_14361f548;
                }
              }
              else {
                puVar19 = *(undefined8 **)(lVar23 + 0x28);
                if (puVar19 == (undefined8 *)0x0) goto LAB_14361f58a;
              }
              LOCK();
              *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
              UNLOCK();
              LOCK();
              *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
              UNLOCK();
              LOCK();
              piVar9 = (int *)(puVar19 + 1);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if ((*piVar9 == 0) && (*(int *)((longlong)puVar19 + 0xc) == 0)) {
                (**(code **)*puVar19)(puVar19,1);
              }
              local_178._8_4_ = uVar16;
              local_178._0_8_ = dVar65;
              local_178._12_4_ = uVar62;
              local_168._0_8_ = dVar35;
              local_2c0 = puVar19;
              if ((char)local_3a8 == '\0') {
                puVar18 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                local_2c0 = (undefined8 *)0x0;
                local_1f8 = puVar19;
                uVar16 = FUN_140fa714a(puVar18,&local_1f8,local_178,0);
              }
              else {
                puVar18 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                uVar16 = FUN_1429b41c6(puVar18,&local_2c0,0);
              }
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              puVar19 = local_2c0;
              local_298 = puVar18;
              if (local_2c0 != (undefined8 *)0x0) {
                LOCK();
                piVar9 = (int *)(local_2c0 + 1);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if ((*piVar9 == 0) && (*(int *)((longlong)local_2c0 + 0xc) == 0)) {
                  uVar16 = (**(code **)*local_2c0)(local_2c0,1);
                }
              }
              auVar36._8_8_ = -(ulonglong)(DAT_14c8463d8 != pdVar30[1]);
              auVar36._0_8_ = -(ulonglong)(DAT_14c8463d0 != *pdVar30);
              iVar17 = movmskpd(uVar16,auVar36);
              auVar41._8_8_ = -(ulonglong)(DAT_14c8463e8 != pdVar30[3]);
              auVar41._0_8_ = -(ulonglong)(DAT_14c8463e0 != pdVar30[2]);
              uVar15 = movmskpd((int)puVar19,auVar41);
              dVar60 = pdVar30[4];
              dVar46 = pdVar30[5];
              dVar34 = pdVar30[6];
              if (((((uVar15 & 0x3fffffff) != 0 || iVar17 != 0) || (dVar60 != DAT_14c8464e0)) ||
                  (NAN(dVar60) || NAN(DAT_14c8464e0))) ||
                 (((dVar46 != DAT_14c8464e8 || (NAN(dVar46) || NAN(DAT_14c8464e8))) ||
                  ((dVar34 != DAT_14c8464f0 ||
                   (puVar19 = local_298, NAN(dVar34) || NAN(DAT_14c8464f0))))))) {
                local_1f8 = (undefined8 *)*pdVar30;
                dStack_1f0 = pdVar30[1];
                local_1e8 = pdVar30[2];
                dStack_1e0 = pdVar30[3];
                local_278 = *(undefined1 (*) [16])(pdVar30 + 8);
                local_268 = pdVar30[10];
                dStack_260 = pdVar30[0xb];
                dVar46 = dVar46 * local_318;
                puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
                local_168._8_8_ = dStack_1e0;
                local_168._0_8_ = local_1e8;
                local_178._8_8_ = dStack_1f0;
                local_178._0_8_ = local_1f8;
                dStack_140 = 0.0;
                local_128._8_8_ = dStack_260;
                local_128._0_8_ = local_268;
                local_138 = (double)local_278._0_8_;
                dStack_130 = (double)local_278._8_8_;
                local_158 = dVar60 * dVar65;
                dStack_150 = dVar46;
                local_148 = dVar34 * dVar35;
                FUN_14010f5c4(puVar19,&local_298);
                puVar18 = local_298;
                if (puVar19 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                  UNLOCK();
                }
                if (local_298 != (undefined8 *)0x0) {
                  LOCK();
                  piVar9 = (int *)(local_298 + 1);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if ((*piVar9 == 0) && (*(int *)((longlong)local_298 + 0xc) == 0)) {
                    puVar11 = (undefined8 *)*local_298;
                    local_298 = puVar19;
                    (*(code *)*puVar11)(puVar18,1);
                    puVar19 = local_298;
                  }
                }
              }
              local_298 = puVar19;
              uVar28 = uStack_2b0;
              lVar23 = (longlong)(int)uStack_2b0;
              uVar15 = (int)uStack_2b0 + 1;
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar15);
              if (uStack_2b0._4_4_ < uVar15) {
                FUN_140619960(&local_2b8,uVar28 & 0xffffffff);
              }
              *(undefined8 **)(local_2b8 + lVar23 * 8) = local_298;
              goto LAB_14361f58a;
            }
            break;
          case 0xc:
            break;
          }
        }
switchD_14361e6ce_caseD_c:
        puVar25 = puVar25 + 2;
      } while (puVar25 != puVar32);
      iVar17 = (int)uStack_2a0;
    }
  }
  if ((int)uStack_2b0 == iVar17) {
    uVar28 = *local_3a0;
    puVar19 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14014f414(puVar19,&local_2b8);
    if (puVar19 == (undefined8 *)0x0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_178._8_8_;
      local_178 = auVar14 << 0x40;
      FUN_1406188f0(*(undefined8 *)(uVar28 + 0x40));
    }
    else {
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      uVar67 = *(undefined8 *)(uVar28 + 0x40);
      local_178._0_8_ = puVar19;
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      FUN_1406188f0(uVar67);
      LOCK();
      piVar9 = (int *)(puVar19 + 1);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if ((*piVar9 == 0) && (*(int *)((longlong)puVar19 + 0xc) == 0)) {
        (**(code **)*puVar19)(puVar19,1);
      }
    }
    FUN_141731928(local_3a0);
  }
  else {
    *(undefined1 *)param_1[4] = 0;
  }
  FUN_144756766(local_2b8,uStack_2b0 & 0xffffffff);
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  if (local_2a8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143620226 FUN_143620226 body=152 status=ok
// SIG undefined FUN_143620226(void)

void FUN_143620226(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[2];
  *(undefined1 *)*param_1 = 1;
  uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)param_1[1]) ^ 1;
  FUN_140cd4d2c(param_2,uVar3);
  uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(lVar1 + 0x3b)) & 0xffffffffffffff01;
  FUN_1401fe056(*param_2,uVar3);
  uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(lVar1 + 0x3b)) & 0xffffffffffffff08;
  FUN_14020126e(*param_2,CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3));
  FUN_14017b994(*param_2,*(undefined1 *)(lVar1 + 0x12));
  FUN_14017baa4(*param_2,*(undefined1 *)(lVar1 + 0x13));
  FUN_14017bbb4(*param_2,*(undefined1 *)(lVar1 + 0x14));
  bVar2 = *(byte *)(lVar1 + 8);
  if ((bVar2 & 1) != 0) {
    if ((*(byte *)(lVar1 + 9) & 1) != 0) {
      FUN_14034b25c(lVar1);
      bVar2 = *(byte *)(lVar1 + 8);
    }
    if ((bVar2 & 0x20) != 0) {
      FUN_141731928(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1436202be FUN_1436202be body=111 status=ok
// SIG undefined FUN_1436202be(void)

void FUN_1436202be(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_2 + 0x40);
  if (((lVar1 != 0) && (*(byte *)(lVar1 + 0x90) != 0)) &&
     ((*(byte *)(lVar1 + 0x90) < 2 || (*(char *)(lVar1 + 0x1ac) == '\x02')))) {
    if (*(char *)*param_1 == '\0') {
      FUN_144840a40(param_1[2] + 0x138,param_1[3]);
      return;
    }
    FUN_144840a40(param_2,param_1[3]);
  }
  FUN_14043163e(param_2,param_1[3],1);
  return;
}



// FUNCTION 143620404 FUN_143620404 body=87 status=ok
// SIG undefined FUN_143620404(void)

void FUN_143620404(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402a8b50(&local_30,param_2,param_1[1]);
  puVar1 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar1 + 4) = local_20;
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14362045c FUN_14362045c body=94 status=ok
// SIG undefined FUN_14362045c(void)

void FUN_14362045c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_142a2dd70(local_88);
  puVar2 = local_88;
  puVar3 = (undefined8 *)*param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436204bc FUN_1436204bc body=94 status=ok
// SIG undefined FUN_1436204bc(void)

void FUN_1436204bc(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146ef14ee(local_88);
  puVar2 = local_88;
  puVar3 = (undefined8 *)*param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436205a2 FUN_1436205a2 body=99 status=ok
// SIG undefined FUN_1436205a2(void)

void FUN_1436205a2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4ccda(&local_50);
  puVar1 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar1 + 0xc) = local_20;
  puVar1[8] = local_30;
  puVar1[9] = uStack_2c;
  puVar1[10] = uStack_28;
  puVar1[0xb] = uStack_24;
  puVar1[4] = local_40;
  puVar1[5] = uStack_3c;
  puVar1[6] = uStack_38;
  puVar1[7] = uStack_34;
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143620606 FUN_143620606 body=5869 status=ok
// SIG undefined FUN_143620606(void)

void FUN_143620606(ulonglong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  void *_Src;
  ulonglong *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  byte bVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong *puVar30;
  bool bVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_498 [32];
  longlong *local_478;
  ulonglong local_470;
  int local_464;
  uint *local_460;
  ulonglong local_458;
  ulonglong *local_450;
  undefined8 local_448 [8];
  undefined1 local_408 [16];
  double local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  void *local_3d8;
  ulonglong uStack_3d0;
  undefined8 local_3c8 [5];
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  longlong local_348;
  ulonglong uStack_340;
  uint local_338 [4];
  uint *local_328;
  uint local_320;
  uint local_31c;
  undefined4 uStack_318;
  int local_314;
  undefined1 local_310 [8];
  undefined1 *local_308;
  uint local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_280;
  undefined8 local_258;
  undefined4 *local_f8;
  uint local_f0;
  uint local_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_458 = *param_1;
  local_f8 = (undefined4 *)0x0;
  local_ec = 0x20;
  if (*param_2 == 0) goto LAB_143621c29;
  lVar16 = *(longlong *)(*param_2 + 0x40);
  uVar5 = *(uint *)(lVar16 + 0x88);
  uVar12 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  local_f0 = 0;
  local_478 = param_2;
  if (uVar5 < 0x21) {
    if (uVar12 == 0) goto LAB_143621c29;
  }
  else {
    FUN_140e4bc70(&local_2f8,uVar5);
  }
  uVar25 = 0;
  plVar23 = local_478;
  do {
    uVar5 = local_f0;
    lVar11 = *(longlong *)(lVar16 + 0x80);
    if (*(longlong *)(lVar16 + 0x80) == 0) {
      lVar11 = lVar16 + 0x78;
    }
    uVar1 = *(undefined8 *)(lVar11 + uVar25 * 8);
    lVar11 = *plVar23;
    lVar29 = (longlong)(int)local_f0;
    local_f0 = local_f0 + 1;
    if (local_ec < local_f0) {
      FUN_146ef97fe(&local_2f8,uVar5);
      plVar23 = local_478;
    }
    puVar6 = local_f8;
    if (local_f8 == (undefined4 *)0x0) {
      puVar6 = &local_2f8;
    }
    *(undefined8 *)(puVar6 + lVar29 * 4) = uVar1;
    *(longlong *)(puVar6 + lVar29 * 4 + 2) = lVar11;
    uVar25 = uVar25 + 1;
  } while (uVar12 != uVar25);
  puVar6 = &local_2f8;
  if (local_f8 != (undefined4 *)0x0) {
    puVar6 = local_f8;
  }
  if ((longlong)(int)local_f0 == 0) {
    iVar19 = 0;
  }
  else {
    lVar16 = 0;
    iVar19 = 0;
    do {
      iVar19 = iVar19 + (*(byte *)(*(longlong *)((longlong)puVar6 + lVar16) + 0x71 +
                                  (ulonglong)
                                  ((*(byte *)(*(longlong *)((longlong)puVar6 + lVar16) + 8) & 3) ==
                                  0) * 8) & 1);
      lVar16 = lVar16 + 0x10;
    } while ((longlong)(int)local_f0 * 0x10 != lVar16);
  }
  if (local_f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar19 < 1) goto LAB_143621c29;
  lVar16 = *local_478;
  uVar5 = *(uint *)(*(longlong *)(lVar16 + 0x40) + 0x88);
  local_358 = ZEXT416(uVar5) << 0x40;
  if (uVar5 != 0) {
    FUN_1417333de(local_358,0);
    lVar16 = *local_478;
  }
  if (lVar16 != 0) {
    lVar16 = *(longlong *)(lVar16 + 0x40);
    uVar5 = *(uint *)(lVar16 + 0x88);
    uVar12 = (ulonglong)uVar5;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
    local_358._8_4_ = 0;
    if ((int)local_358._12_4_ < (int)uVar5) {
      FUN_144724de8(local_358,uVar5);
    }
    if (uVar12 != 0) {
      uVar25 = 0;
      plVar23 = local_478;
      do {
        lVar11 = *(longlong *)(lVar16 + 0x80);
        if (*(longlong *)(lVar16 + 0x80) == 0) {
          lVar11 = lVar16 + 0x78;
        }
        uVar1 = *(undefined8 *)(lVar11 + uVar25 * 8);
        lVar11 = *plVar23;
        uVar33 = local_358._8_4_;
        lVar29 = (longlong)(int)local_358._8_4_;
        uVar5 = local_358._8_4_ + 1;
        local_358._8_4_ = uVar5;
        if ((uint)local_358._12_4_ < uVar5) {
          FUN_1417333de(local_358,uVar33);
          plVar23 = local_478;
        }
        *(undefined8 *)(local_358._0_8_ + lVar29 * 0x10) = uVar1;
        *(longlong *)(local_358._0_8_ + 8 + lVar29 * 0x10) = lVar11;
        uVar25 = uVar25 + 1;
      } while (uVar12 != uVar25);
    }
  }
  if (0 < (longlong)(int)local_358._8_4_) {
    uVar12 = (longlong)(int)local_358._8_4_;
    do {
      lVar11 = (uVar12 - 1) * 0x10;
      lVar16 = *(longlong *)(local_358._0_8_ + lVar11);
      if (((lVar16 == 0) ||
          (piVar2 = *(int **)(lVar16 + 0x68 + (ulonglong)((*(byte *)(lVar16 + 8) & 3) == 0) * 8),
          piVar2 == (int *)0x0)) || (*piVar2 != 6)) {
        lVar16 = *(longlong *)(lVar16 + 0x10);
        bVar13 = *(byte *)(lVar16 + 0x1c) & 0x1f;
        if (bVar13 == 4 && lVar16 != 0) {
          do {
            lVar16 = *(longlong *)(lVar16 + 0x20);
            bVar13 = *(byte *)(lVar16 + 0x1c) & 0x1f;
          } while (lVar16 != 0 && bVar13 == 4);
        }
        switch(bVar13) {
        case 0:
        case 3:
          break;
        case 1:
          bVar13 = 2;
          break;
        default:
          bVar13 = 7;
          break;
        case 8:
          bVar13 = 4;
          break;
        case 0xb:
          goto switchD_14362098a_caseD_b;
        case 0xc:
          bVar13 = 6;
        }
switchD_14362098a_caseD_0:
        bVar31 = false;
      }
      else {
        lVar16 = *(longlong *)(lVar16 + 0x10);
        bVar22 = *(byte *)(lVar16 + 0x1c) & 0x1f;
        if (bVar22 == 4 && lVar16 != 0) {
          do {
            lVar16 = *(longlong *)(lVar16 + 0x20);
            bVar22 = *(byte *)(lVar16 + 0x1c) & 0x1f;
          } while (lVar16 != 0 && bVar22 == 4);
        }
        bVar13 = 7;
        if (bVar22 < 0xd) {
          bVar13 = (&DAT_14aa1ec08)[bVar22];
        }
        if (*(longlong *)(piVar2 + 2) == 0) goto switchD_14362098a_caseD_0;
        bVar31 = (*(byte *)(*(longlong *)(piVar2 + 2) + 0x18) & 1) == 0;
      }
      if ((bVar13 == 5) || (bVar31)) {
switchD_14362098a_caseD_b:
        if (uVar12 != (uint)local_358._8_4_) {
          iVar19 = local_358._8_4_ - (int)uVar12;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar11 + local_358._0_8_),
                  (void *)((longlong)(local_358._8_4_ - iVar19) * 0x10 + local_358._0_8_),
                  (longlong)iVar19 << 4);
        }
        local_358._8_4_ = local_358._8_4_ - 1;
        FUN_1417e7624(local_358);
      }
      bVar31 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar31);
  }
  lVar16 = *(longlong *)(local_458 + 0x170);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0x34) < *(int *)(lVar16 + 8))) {
    local_328 = (uint *)0x0;
    local_320 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_31c = 0x80;
    uStack_318 = 0xffffffff;
    local_314 = 0;
    local_308 = (undefined1 *)0x0;
    local_300 = 0;
    if (local_358._8_4_ != 0) {
      local_450 = (ulonglong *)(local_358._0_8_ + (longlong)(int)local_358._8_4_ * 2 * 8);
      local_460 = local_338;
      uVar5 = ((uint)(local_458 >> 0x14) & 0xffff ^ (uint)(local_458 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      local_470 = CONCAT44(local_470._4_4_,uVar5 >> 0x10 ^ uVar5);
      uVar12 = local_458;
      puVar26 = (ulonglong *)local_358._0_8_;
LAB_143620b38:
      plVar23 = *(longlong **)(uVar12 + 0x170);
      if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
        uVar25 = *puVar26;
        uVar5 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        plVar17 = plVar23 + 7;
        if ((longlong *)plVar23[8] != (longlong *)0x0) {
          plVar17 = (longlong *)plVar23[8];
        }
        iVar19 = *(int *)((longlong)plVar17 +
                         (ulonglong)((int)plVar23[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar19 != -1) {
          do {
            lVar16 = *plVar23 + (longlong)iVar19 * 0x90;
            if (*(ulonglong *)(*plVar23 + (longlong)iVar19 * 0x90) == uVar25) {
              puVar30 = (ulonglong *)(lVar16 + 0x10);
              if (puVar30 != (ulonglong *)0x0 && lVar16 != 0) {
                if ((int)uStack_340 == local_314) goto LAB_14362111b;
                uVar25 = *puVar30;
                uVar5 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
                uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
                puVar7 = local_308;
                if (local_308 == (undefined1 *)0x0) {
                  puVar7 = local_310;
                }
                iVar19 = *(int *)(puVar7 + (ulonglong)(local_300 - 1 & (uVar5 >> 0x10 ^ uVar5)) * 4)
                ;
                goto joined_r0x000143620de6;
              }
              break;
            }
            iVar19 = *(int *)(lVar16 + 0x80);
          } while (iVar19 != -1);
        }
      }
      if ((int)uStack_340 != local_314) {
        puVar7 = local_308;
        if (local_308 == (undefined1 *)0x0) {
          puVar7 = local_310;
        }
        iVar19 = *(int *)(puVar7 + (ulonglong)(local_300 - 1 & (uint)local_470) * 4);
        while (iVar19 != -1) {
          lVar11 = local_348 + (longlong)iVar19 * 0x90;
          if (*(ulonglong *)(local_348 + (longlong)iVar19 * 0x90) == uVar12) {
            if (lVar11 != 0) goto LAB_143620c46;
            break;
          }
          iVar19 = *(int *)(lVar11 + 0x80);
        }
      }
      FUN_143621cf6(&local_348,&local_2f8);
      puVar30 = (ulonglong *)CONCAT44(uStack_2ec,uStack_2f0);
      *puVar30 = uVar12;
      puVar30[2] = 0;
      puVar30[3] = 0;
      puVar30[4] = 0;
      puVar30[5] = 0;
      *(undefined4 *)(puVar30 + 6) = 0;
      *(undefined4 *)((longlong)puVar30 + 0x34) = 0;
      *(undefined4 *)(puVar30 + 7) = 0;
      *(undefined4 *)((longlong)puVar30 + 0x3c) = 0x3ff00000;
      puVar30[8] = 0;
      puVar30[9] = 0;
      puVar30[10] = 0;
      puVar30[0xb] = 0;
      puVar30[0xc] = 0x3ff0000000000000;
      puVar30[0xd] = 0x3ff0000000000000;
      puVar30[0xe] = 0x3ff0000000000000;
      puVar30[0xf] = 0;
      *(undefined4 *)(puVar30 + 0x10) = 0xffffffff;
      local_3e8 = CONCAT44(local_3e8._4_4_,local_2f8);
      cVar4 = FUN_143621fbc(&local_348,local_470 & 0xffffffff,puVar30,&local_3e8);
      iVar19 = (int)local_3e8;
      if (cVar4 == '\0') {
        uVar5 = (int)uStack_340 - local_314;
        uVar28 = 1;
        if (3 < uVar5) {
          uVar12 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar28 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar5 < 1) || ((int)uVar28 <= (int)local_300)) {
          uVar5 = local_300 - 1 & (uint)local_470;
          *(uint *)((longlong)puVar30 + 0x84) = uVar5;
          puVar7 = local_308;
          if (local_308 == (undefined1 *)0x0) {
            puVar7 = local_310;
          }
          *(undefined4 *)(puVar30 + 0x10) = *(undefined4 *)(puVar7 + (longlong)(int)uVar5 * 4);
          *(int *)(puVar7 + (longlong)(int)uVar5 * 4) = (int)local_3e8;
        }
        else {
          local_300 = uVar28;
          if (local_308 == (undefined1 *)0x0) {
            puVar7 = (undefined1 *)0x0;
          }
          else {
            FUN_1446efa72(&local_308,0,0,4);
            puVar7 = local_308;
            if (local_300 == 0) goto LAB_14362108a;
          }
          uVar5 = local_300;
          if ((1 < local_300) || (puVar7 != (undefined1 *)0x0)) {
            uVar28 = 0;
            if (1 < local_300) {
              uVar28 = local_300;
            }
            FUN_1446efa72(&local_308,0,uVar28,4);
          }
          if (0 < (int)uVar5) {
            uVar28 = 0;
            do {
              puVar7 = local_308;
              if (local_308 == (undefined1 *)0x0) {
                puVar7 = local_310;
              }
              *(undefined4 *)(puVar7 + (ulonglong)(local_300 + 0x7fffffff & uVar28) * 4) =
                   0xffffffff;
              uVar28 = uVar28 + 1;
            } while (uVar5 != uVar28);
          }
          if (local_320 == 0) {
            uVar25 = 1;
            uVar12 = 0;
            iVar9 = 0;
            uVar5 = 0;
          }
          else {
            puVar8 = local_328;
            if (local_328 == (uint *)0x0) {
              puVar8 = local_338;
            }
            uVar5 = *puVar8;
            if (uVar5 == 0) {
              iVar9 = local_320 + 0x1e;
              if (-1 < (int)(local_320 - 1)) {
                iVar9 = local_320 - 1;
              }
              uVar12 = 0;
              uVar25 = (ulonglong)(uint)(iVar9 >> 5);
              if (iVar9 >> 5 < 1) {
                uVar25 = uVar12;
              }
              iVar9 = 0;
              do {
                if (uVar25 == uVar12) goto LAB_14362108a;
                iVar9 = iVar9 + 0x20;
                uVar5 = puVar8[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar5 == 0);
            }
            else {
              uVar12 = 0;
              iVar9 = 0;
            }
            uVar25 = (ulonglong)(-uVar5 & uVar5);
            uVar27 = uVar25 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar5 = (iVar9 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)local_320 <= (int)uVar5) {
              uVar5 = local_320;
            }
          }
          if ((int)uVar5 < (int)local_320) {
            uVar28 = 0xffffffff;
            do {
              lVar16 = (longlong)(int)uVar5 * 0x90;
              uVar18 = ((uint)(*(ulonglong *)(local_348 + lVar16) >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)(local_348 + lVar16) >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              uVar27 = (longlong)(int)(uVar18 >> 0x10 ^ uVar18) & (longlong)(int)local_300 - 1U;
              iVar10 = (int)uVar27;
              *(int *)(local_348 + 0x84 + lVar16) = iVar10;
              puVar7 = local_308;
              if (local_308 == (undefined1 *)0x0) {
                puVar7 = local_310;
              }
              *(undefined4 *)(local_348 + 0x80 + lVar16) =
                   *(undefined4 *)(puVar7 + ((longlong)(int)local_300 - 1U & uVar27) * 4);
              puVar7 = local_308;
              if (local_308 == (undefined1 *)0x0) {
                puVar7 = local_310;
              }
              *(uint *)(puVar7 + ((longlong)iVar10 & (longlong)(int)local_300 - 1U) * 4) = uVar5;
              uVar28 = ~(uint)uVar25 & uVar28;
              puVar8 = local_328;
              if (local_328 == (uint *)0x0) {
                puVar8 = local_338;
              }
              iVar10 = (int)uVar12;
              lVar16 = (longlong)iVar10;
              uVar5 = puVar8[lVar16] & uVar28;
              if (uVar5 == 0) {
                iVar14 = local_320 + 0x1e;
                if (-1 < (int)(local_320 - 1)) {
                  iVar14 = local_320 - 1;
                }
                iVar14 = iVar14 >> 5;
                iVar15 = iVar14;
                if (iVar14 < iVar10) {
                  iVar15 = iVar10;
                }
                if (iVar14 <= iVar10) break;
                lVar11 = 0;
                while( true ) {
                  iVar9 = iVar9 + 0x20;
                  uVar5 = puVar8[lVar16 + lVar11 + 1];
                  if (uVar5 != 0) break;
                  lVar11 = lVar11 + 1;
                  if (iVar15 - lVar16 == lVar11) goto LAB_14362108a;
                }
                uVar12 = (ulonglong)(iVar10 + (int)lVar11 + 1);
                uVar28 = 0xffffffff;
              }
              uVar25 = (ulonglong)(-uVar5 & uVar5);
              uVar27 = uVar25 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar5 = (iVar9 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            } while ((int)uVar5 < (int)local_320);
          }
        }
      }
LAB_14362108a:
      plVar23 = (longlong *)(local_348 + (longlong)iVar19 * 0x90 + 0x10);
      lVar16 = 0xc;
      puVar24 = &DAT_14c846480;
      puVar20 = (undefined8 *)(local_348 + (longlong)iVar19 * 0x90 + 0x20);
      goto LAB_1436210b9;
    }
    local_460 = local_338;
    local_368 = 0;
    uStack_360 = 0;
    goto LAB_14362195d;
  }
  if ((int)local_358._8_4_ < 1) {
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0x3ff00000;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
  }
  else {
    local_3e8 = DAT_14c8463d0;
    uStack_3e0 = DAT_14c8463d8;
    local_3d8 = DAT_14c8463e0;
    uStack_3d0 = DAT_14c8463e8;
    local_3c8[0] = 0;
    local_3c8[1] = 0;
    local_3c8[2] = 0;
    local_3c8[3] = 0;
    local_3c8[4] = *(undefined8 *)(local_458 + 0x50);
    uStack_3a0 = *(undefined8 *)(local_458 + 0x58);
    local_398 = *(undefined8 *)(local_458 + 0x60);
    uStack_390 = 0;
    FUN_14076bfc3(&local_2f8,local_458,local_358);
    uVar53 = (undefined4)local_2a8;
    uVar54 = (undefined4)((ulonglong)local_2a8 >> 0x20);
    uVar51 = (undefined4)local_280;
    uVar52 = (undefined4)((ulonglong)local_280 >> 0x20);
    uVar49 = (undefined4)local_258;
    uVar50 = (undefined4)((ulonglong)local_258 >> 0x20);
    uVar33 = (undefined4)local_2c8;
    uVar34 = local_2c8._4_4_;
    uVar35 = (undefined4)uStack_2c0;
    uVar36 = uStack_2c0._4_4_;
    uVar37 = local_2d8;
    uVar38 = uStack_2d4;
    uVar39 = (undefined4)local_2b8;
    uVar40 = local_2b8._4_4_;
    uVar41 = (undefined4)uStack_2b0;
    uVar42 = uStack_2b0._4_4_;
    uVar43 = uStack_2e0;
    uVar44 = uStack_2dc;
    uVar45 = local_2e8;
    uVar46 = uStack_2e4;
    uVar47 = local_2f8;
    uVar48 = uStack_2f4;
  }
  goto LAB_143621b7c;
joined_r0x000143620de6:
  if (iVar19 == -1) goto LAB_14362111b;
  lVar11 = local_348 + (longlong)iVar19 * 0x90;
  if (*(ulonglong *)(local_348 + (longlong)iVar19 * 0x90) == uVar25) {
    if (lVar11 != 0) goto LAB_143620c46;
    goto LAB_14362111b;
  }
  iVar19 = *(int *)(lVar11 + 0x80);
  goto joined_r0x000143620de6;
LAB_14362111b:
  FUN_143621cf6(&local_348,&local_2f8);
  puVar3 = (ulonglong *)CONCAT44(uStack_2ec,uStack_2f0);
  uVar12 = *puVar30;
  *puVar3 = uVar12;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x3ff00000;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3ff0000000000000;
  puVar3[0xd] = 0x3ff0000000000000;
  puVar3[0xe] = 0x3ff0000000000000;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
  local_3e8 = CONCAT44(local_3e8._4_4_,local_2f8);
  uVar5 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_143621fbc(&local_348,uVar5,puVar3,&local_3e8);
  local_464 = (int)local_3e8;
  if (cVar4 == '\0') {
    uVar28 = (int)uStack_340 - local_314;
    uVar18 = 1;
    if (3 < uVar28) {
      uVar12 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar28 < 1) || ((int)uVar18 <= (int)local_300)) {
      uVar5 = local_300 - 1 & uVar5;
      *(uint *)((longlong)puVar3 + 0x84) = uVar5;
      puVar7 = local_308;
      if (local_308 == (undefined1 *)0x0) {
        puVar7 = local_310;
      }
      *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar7 + (longlong)(int)uVar5 * 4);
      *(int *)(puVar7 + (longlong)(int)uVar5 * 4) = (int)local_3e8;
    }
    else {
      local_300 = uVar18;
      if (local_308 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        FUN_1446efa72(&local_308,0,0,4);
        puVar7 = local_308;
        if (local_300 == 0) goto LAB_1436214e4;
      }
      uVar5 = local_300;
      if ((1 < local_300) || (puVar7 != (undefined1 *)0x0)) {
        uVar28 = 0;
        if (1 < local_300) {
          uVar28 = local_300;
        }
        FUN_1446efa72(&local_308,0,uVar28,4);
      }
      if (0 < (int)uVar5) {
        uVar28 = 0;
        do {
          puVar7 = local_308;
          if (local_308 == (undefined1 *)0x0) {
            puVar7 = local_310;
          }
          *(undefined4 *)(puVar7 + (ulonglong)(local_300 + 0x7fffffff & uVar28) * 4) = 0xffffffff;
          uVar28 = uVar28 + 1;
        } while (uVar5 != uVar28);
      }
      if (local_320 == 0) {
        uVar25 = 1;
        uVar12 = 0;
        iVar19 = 0;
        uVar5 = 0;
      }
      else {
        puVar8 = local_328;
        if (local_328 == (uint *)0x0) {
          puVar8 = local_338;
        }
        uVar5 = *puVar8;
        if (uVar5 == 0) {
          iVar19 = local_320 + 0x1e;
          if (-1 < (int)(local_320 - 1)) {
            iVar19 = local_320 - 1;
          }
          uVar12 = 0;
          uVar25 = (ulonglong)(uint)(iVar19 >> 5);
          if (iVar19 >> 5 < 1) {
            uVar25 = uVar12;
          }
          iVar19 = 0;
          do {
            if (uVar25 == uVar12) goto LAB_1436214e4;
            iVar19 = iVar19 + 0x20;
            uVar5 = puVar8[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar12 = 0;
          iVar19 = 0;
        }
        uVar25 = (ulonglong)(-uVar5 & uVar5);
        uVar27 = uVar25 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar5 = (iVar19 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)local_320 <= (int)uVar5) {
          uVar5 = local_320;
        }
      }
      if ((int)uVar5 < (int)local_320) {
        uVar28 = 0xffffffff;
        do {
          lVar11 = (longlong)(int)uVar5 * 0x90;
          uVar18 = ((uint)(*(ulonglong *)(local_348 + lVar11) >> 0x14) & 0xffff ^
                   (uint)(*(ulonglong *)(local_348 + lVar11) >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          uVar27 = (longlong)(int)(uVar18 >> 0x10 ^ uVar18) & (longlong)(int)local_300 - 1U;
          iVar9 = (int)uVar27;
          *(int *)(local_348 + 0x84 + lVar11) = iVar9;
          puVar7 = local_308;
          if (local_308 == (undefined1 *)0x0) {
            puVar7 = local_310;
          }
          *(undefined4 *)(local_348 + 0x80 + lVar11) =
               *(undefined4 *)(puVar7 + ((longlong)(int)local_300 - 1U & uVar27) * 4);
          puVar7 = local_308;
          if (local_308 == (undefined1 *)0x0) {
            puVar7 = local_310;
          }
          *(uint *)(puVar7 + ((longlong)iVar9 & (longlong)(int)local_300 - 1U) * 4) = uVar5;
          uVar28 = ~(uint)uVar25 & uVar28;
          puVar8 = local_328;
          if (local_328 == (uint *)0x0) {
            puVar8 = local_338;
          }
          iVar9 = (int)uVar12;
          lVar11 = (longlong)iVar9;
          uVar5 = puVar8[lVar11] & uVar28;
          if (uVar5 == 0) {
            iVar10 = local_320 + 0x1e;
            if (-1 < (int)(local_320 - 1)) {
              iVar10 = local_320 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar14 = iVar10;
            if (iVar10 < iVar9) {
              iVar14 = iVar9;
            }
            if (iVar10 <= iVar9) break;
            lVar29 = 0;
            while( true ) {
              iVar19 = iVar19 + 0x20;
              uVar5 = puVar8[lVar11 + lVar29 + 1];
              if (uVar5 != 0) break;
              lVar29 = lVar29 + 1;
              if (iVar14 - lVar11 == lVar29) goto LAB_1436214e4;
            }
            uVar12 = (ulonglong)(iVar9 + (int)lVar29 + 1);
            uVar28 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar5 & uVar5);
          uVar27 = uVar25 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar5 = (iVar19 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        } while ((int)uVar5 < (int)local_320);
      }
    }
  }
LAB_1436214e4:
  plVar23 = (longlong *)(local_348 + (longlong)local_464 * 0x90 + 0x10);
  puVar24 = (undefined8 *)(lVar16 + 0x20);
  puVar20 = (undefined8 *)(local_348 + (longlong)local_464 * 0x90 + 0x20);
  lVar16 = 0xc;
LAB_1436210b9:
  for (; uVar12 = local_458, lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar20 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar20 = puVar20 + 1;
  }
LAB_1436210c1:
  iVar19 = (int)plVar23[1];
  *(uint *)(plVar23 + 1) = iVar19 + 1U;
  if (*(uint *)((longlong)plVar23 + 0xc) < iVar19 + 1U) {
    FUN_1417333de(plVar23,iVar19);
  }
  uVar25 = puVar26[1];
  puVar30 = (ulonglong *)(*plVar23 + (longlong)iVar19 * 0x10);
  *puVar30 = *puVar26;
  puVar30[1] = uVar25;
  puVar26 = puVar26 + 2;
  if (puVar26 == local_450) goto LAB_1436215f7;
  goto LAB_143620b38;
LAB_143620c46:
  plVar23 = (longlong *)(lVar11 + 0x10);
  goto LAB_1436210c1;
LAB_1436215f7:
  local_470 = (ulonglong)local_320;
  local_368 = 0;
  uStack_360 = 0;
  if (local_320 == 0) {
LAB_14362195d:
    uVar42 = 0x3ff00000;
    uVar41 = 0;
    uVar40 = 0;
    uVar39 = 0;
    uVar38 = 0;
    uVar37 = 0;
    uVar36 = 0;
    uVar35 = 0;
    uVar34 = 0;
    uVar33 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
  }
  else {
    puVar8 = local_328;
    if (local_328 == (uint *)0x0) {
      puVar8 = local_338;
    }
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      iVar19 = local_320 + 0x1e;
      if (-1 < (int)(local_320 - 1)) {
        iVar19 = local_320 - 1;
      }
      uVar12 = 0;
      uVar25 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar25 = uVar12;
      }
      iVar19 = 0;
      do {
        if (uVar25 == uVar12) goto LAB_14362195d;
        iVar19 = iVar19 + 0x20;
        uVar5 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar5 == 0);
    }
    else {
      iVar19 = 0;
      uVar12 = 0;
    }
    uVar27 = (ulonglong)(-uVar5 & uVar5);
    uVar25 = uVar27 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar5 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)local_320 <= (int)uVar5) goto LAB_14362195d;
    uVar28 = 0xffffffff;
    do {
      lVar16 = local_348;
      lVar11 = (longlong)(int)uVar5 * 0x90;
      local_3e8 = *(undefined8 *)(local_348 + lVar11);
      local_3d8 = (void *)0x0;
      uVar5 = *(uint *)(local_348 + 0x18 + lVar11);
      _Src = *(void **)(local_348 + 0x10 + lVar11);
      uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        uStack_3d0 = (ulonglong)uVar5;
      }
      else {
        FUN_147c63d76(&local_3d8,uVar5);
        memcpy(local_3d8,_Src,(longlong)(int)uVar5 << 4);
      }
      uVar1 = local_3e8;
      puVar24 = (undefined8 *)(lVar16 + lVar11 + 0x20);
      puVar20 = puVar24;
      puVar21 = local_3c8;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar21 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar21 = puVar21 + 1;
      }
      puVar20 = local_448;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar20 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar20 = puVar20 + 1;
      }
      local_3f8 = local_3f8 * *(double *)(local_458 + 0x60);
      dVar32 = (double)local_408._8_8_ * *(double *)(local_458 + 0x58);
      local_408._8_4_ = SUB84(dVar32,0);
      local_408._0_8_ = (double)local_408._0_8_ * *(double *)(local_458 + 0x50);
      local_408._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      uStack_3f0 = 0;
      FUN_14076bfc3(&local_2f8,uVar1,&local_3d8);
      uVar25 = uStack_360;
      lVar16 = (longlong)(int)uStack_360;
      uVar5 = (int)uStack_360 + 1;
      uStack_360 = CONCAT44(uStack_360._4_4_,uVar5);
      if (uStack_360._4_4_ < uVar5) {
        FUN_14076cc58(&local_368,uVar25 & 0xffffffff);
      }
      memcpy((void *)(lVar16 * 0xd0 + local_368),&local_2f8,0xd0);
      if (local_3d8 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar28 = uVar28 & ~(uint)uVar27;
      puVar8 = local_328;
      if (local_328 == (uint *)0x0) {
        puVar8 = local_338;
      }
      iVar9 = (int)uVar12;
      lVar16 = (longlong)iVar9;
      uVar5 = puVar8[lVar16] & uVar28;
      if (uVar5 == 0) {
        iVar10 = local_320 + 0x1e;
        if (-1 < (int)(local_320 - 1)) {
          iVar10 = local_320 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar14 = iVar10;
        if (iVar10 < iVar9) {
          iVar14 = iVar9;
        }
        if (iVar9 < iVar10) {
          lVar11 = 0;
          do {
            uVar5 = puVar8[lVar16 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar12 = (ulonglong)(iVar9 + (int)lVar11 + 1);
              uVar28 = 0xffffffff;
              goto LAB_143621862;
            }
            iVar19 = iVar19 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar14 - lVar16 != lVar11);
          uVar28 = 0xffffffff;
          iVar9 = iVar14;
        }
        uVar12 = (ulonglong)(iVar9 + 1);
        uVar5 = local_320;
      }
      else {
LAB_143621862:
        uVar27 = (ulonglong)(-uVar5 & uVar5);
        uVar25 = uVar27 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar5 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)local_320 <= (int)uVar5) {
          uVar5 = local_320;
        }
      }
    } while (uVar5 != (uint)local_470);
    if ((int)uStack_360 < 1) goto LAB_14362195d;
    FUN_141729c66(&local_2f8,&local_368);
    uVar53 = (undefined4)local_2a8;
    uVar54 = (undefined4)((ulonglong)local_2a8 >> 0x20);
    uVar51 = (undefined4)local_280;
    uVar52 = (undefined4)((ulonglong)local_280 >> 0x20);
    uVar49 = (undefined4)local_258;
    uVar50 = (undefined4)((ulonglong)local_258 >> 0x20);
    uVar33 = (undefined4)local_2c8;
    uVar34 = local_2c8._4_4_;
    uVar35 = (undefined4)uStack_2c0;
    uVar36 = uStack_2c0._4_4_;
    uVar37 = local_2d8;
    uVar38 = uStack_2d4;
    uVar39 = (undefined4)local_2b8;
    uVar40 = local_2b8._4_4_;
    uVar41 = (undefined4)uStack_2b0;
    uVar42 = uStack_2b0._4_4_;
    uVar43 = uStack_2e0;
    uVar44 = uStack_2dc;
    uVar45 = local_2e8;
    uVar46 = uStack_2e4;
    uVar47 = local_2f8;
    uVar48 = uStack_2f4;
  }
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  local_300 = 0;
  if (local_308 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_320 == 0) {
    uVar12 = 1;
    uVar25 = 0;
    iVar19 = 0;
    uVar5 = 0;
  }
  else {
    puVar8 = local_328;
    if (local_328 == (uint *)0x0) {
      puVar8 = local_460;
    }
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      iVar19 = local_320 + 0x1e;
      if (-1 < (int)(local_320 - 1)) {
        iVar19 = local_320 - 1;
      }
      uVar25 = 0;
      uVar12 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar12 = uVar25;
      }
      iVar19 = 0;
      do {
        if (uVar12 == uVar25) goto LAB_143621af8;
        iVar19 = iVar19 + 0x20;
        uVar5 = puVar8[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar25 = 0;
      iVar19 = 0;
    }
    uVar12 = (ulonglong)(-uVar5 & uVar5);
    uVar27 = uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar5 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)local_320 <= (int)uVar5) {
      uVar5 = local_320;
    }
  }
  if ((int)uVar5 < (int)local_320) {
    uVar18 = 0xffffffff;
    uVar28 = local_320;
    do {
      if (*(longlong *)(local_348 + 0x10 + (longlong)(int)uVar5 * 0x90) != 0) {
        FUN_1400020a8();
        uVar28 = local_320;
      }
      uVar18 = uVar18 & ~(uint)uVar12;
      puVar8 = local_328;
      if (local_328 == (uint *)0x0) {
        puVar8 = local_460;
      }
      iVar9 = (int)uVar25;
      lVar16 = (longlong)iVar9;
      uVar5 = puVar8[lVar16] & uVar18;
      if (uVar5 == 0) {
        iVar10 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar10 = uVar28 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar10;
        if (iVar10 < iVar9) {
          iVar14 = iVar9;
        }
        if (iVar10 <= iVar9) break;
        lVar11 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar5 = puVar8[lVar16 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar14 - lVar16 == lVar11) goto LAB_143621af8;
        }
        uVar25 = (ulonglong)(iVar9 + (int)lVar11 + 1);
        uVar18 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar27 = uVar12 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while ((int)uVar5 < (int)uVar28);
  }
LAB_143621af8:
  uVar12 = uStack_340 >> 0x20;
  uStack_340 = uStack_340 & 0xffffffff00000000;
  if ((int)uVar12 != 0) {
    FUN_14074f60a(&local_348,0);
  }
  uStack_318 = 0xffffffff;
  local_314 = 0;
  local_320 = 0;
  if (0x80 < local_31c) {
    local_31c = 0x80;
    FUN_1446efbd8(local_460,0);
  }
  if (local_328 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_348 != 0) {
    FUN_1400020a8();
  }
LAB_143621b7c:
  plVar23 = local_478;
  if (1e-08 < (float)(((double)CONCAT44(uVar52,uVar51) + (double)CONCAT44(uVar54,uVar53) +
                      (double)CONCAT44(uVar50,uVar49)) / 3.0)) {
    local_3e8 = CONCAT44(uVar54,uVar53);
    uStack_3e0 = CONCAT44(uVar52,uVar51);
    local_3d8 = (void *)CONCAT44(uVar50,uVar49);
    FUN_141731c00(local_478);
    FUN_14048fe7c(plVar23,(float)(double)CONCAT44(uVar48,uVar47));
    local_2c8 = CONCAT44(uVar38,uVar37);
    uStack_2c0 = 0;
    local_2b8 = 0x3ff0000000000000;
    uStack_2b0 = 0x3ff0000000000000;
    local_2a8 = 0x3ff0000000000000;
    uStack_2a0 = 0;
    local_2f8 = uVar33;
    uStack_2f4 = uVar34;
    uStack_2f0 = uVar35;
    uStack_2ec = uVar36;
    local_2e8 = uVar39;
    uStack_2e4 = uVar40;
    uStack_2e0 = uVar41;
    uStack_2dc = uVar42;
    local_2d8 = uVar45;
    uStack_2d4 = uVar46;
    uStack_2d0 = uVar43;
    uStack_2cc = uVar44;
    FUN_140497070(plVar23);
  }
  if (local_358._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_143621c29:
  if ((local_e0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143621cf6 FUN_143621cf6 body=709 status=ok
// SIG undefined FUN_143621cf6(void)

int * FUN_143621cf6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_146ceb2ee(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_143621ee6;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_143621ee6:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x90);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x90) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 143621fbc FUN_143621fbc body=280 status=ok
// SIG undefined FUN_143621fbc(void)

undefined8 FUN_143621fbc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x90);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x90) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x80);
          iVar2 = *param_4;
          lVar3 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x90) = iVar2;
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x90) = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x90 + 4) = uVar6;
          *(int *)(param_1 + 6) = iVar2;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          iVar7 = iVar2 + 0x1f;
          if (-1 < iVar2) {
            iVar7 = iVar2;
          }
          bVar4 = (byte)iVar2 & 0x1f;
          puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          *param_4 = iVar8;
          return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        }
        iVar8 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1436220d4 FUN_1436220d4 body=98 status=ok
// SIG undefined FUN_1436220d4(void)

void FUN_1436220d4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != 0) &&
     (((lVar1 = *(longlong *)(*param_2 + 0x40), lVar1 == 0 || (*(byte *)(lVar1 + 0x90) == 0)) ||
      ((1 < *(byte *)(lVar1 + 0x90) && (*(char *)(lVar1 + 0x1ac) == '\x03')))))) {
    return;
  }
  lVar1 = *param_1;
  FUN_1417319d0(param_2,*(undefined4 *)(lVar1 + 0xa8));
  FUN_141731ae8(param_2,*(undefined4 *)(lVar1 + 0xac));
  return;
}



// FUNCTION 14362224a FUN_14362224a body=234 status=ok
// SIG undefined FUN_14362224a(void)

void FUN_14362224a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x40), lVar2 == 0)) ||
     (*(byte *)(lVar2 + 0x90) == 0)) goto LAB_1436222fa;
  if (*(byte *)(lVar2 + 0x90) < 2) {
    pdVar3 = (double *)*param_1;
    local_20 = *pdVar3;
    local_18 = pdVar3[1];
    local_10 = pdVar3[2];
    if (*(char *)param_1[1] != '\0') {
LAB_1436222b5:
      local_10 = local_10 + (double)*(float *)(lVar2 + 0xa0);
      local_18 = local_18 + (double)*(float *)(lVar2 + 0x9c);
      local_20 = local_20 + (double)*(float *)(lVar2 + 0x98);
    }
  }
  else {
    if (*(char *)(lVar2 + 0x1ac) == '\x03') goto LAB_1436222fa;
    pdVar3 = (double *)*param_1;
    local_20 = *pdVar3;
    local_18 = pdVar3[1];
    local_10 = pdVar3[2];
    if (*(char *)param_1[1] == '\x01') goto LAB_1436222b5;
  }
  FUN_1402a3ce4(lVar1,&local_20,CONCAT71((int7)((ulonglong)pdVar3 >> 8),1));
LAB_1436222fa:
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143622336 FUN_143622336 body=234 status=ok
// SIG undefined FUN_143622336(void)

void FUN_143622336(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x40), lVar2 == 0)) ||
     (*(byte *)(lVar2 + 0x90) == 0)) goto LAB_1436223e6;
  if (*(byte *)(lVar2 + 0x90) < 2) {
    pdVar3 = (double *)*param_1;
    local_20 = *pdVar3;
    local_18 = pdVar3[1];
    local_10 = pdVar3[2];
    if (*(char *)param_1[1] != '\0') {
LAB_1436223a1:
      local_10 = local_10 + (double)*(float *)(lVar2 + 0xac);
      local_18 = local_18 + (double)*(float *)(lVar2 + 0xa8);
      local_20 = local_20 + (double)*(float *)(lVar2 + 0xa4);
    }
  }
  else {
    if (*(char *)(lVar2 + 0x1ac) == '\x03') goto LAB_1436223e6;
    pdVar3 = (double *)*param_1;
    local_20 = *pdVar3;
    local_18 = pdVar3[1];
    local_10 = pdVar3[2];
    if (*(char *)param_1[1] == '\x01') goto LAB_1436223a1;
  }
  FUN_140431a82(lVar1,&local_20,CONCAT71((int7)((ulonglong)pdVar3 >> 8),1));
LAB_1436223e6:
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143622422 FUN_143622422 body=158 status=ok
// SIG undefined FUN_143622422(void)

void FUN_143622422(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  
  if (*(char *)*param_1 == '\x01') {
    if (*param_2 == 0) {
      fVar2 = 3.4028235e+38;
    }
    else {
      lVar1 = *(longlong *)(*param_2 + 0x40);
      dVar3 = 1.79769313486232e+308;
      if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
        dVar3 = (double)*(float *)(lVar1 + 0x19c);
      }
      if (dVar3 < 0.0) {
        dVar3 = sqrt(dVar3);
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      fVar2 = (float)dVar3;
    }
    *(float *)param_1[1] = *(float *)param_1[1] + fVar2;
    *(float *)param_1[2] = fVar2 * 57.295776 + *(float *)param_1[2];
  }
  FUN_140501f72(param_2,*(undefined4 *)param_1[1]);
  return;
}



// FUNCTION 1436224d6 FUN_1436224d6 body=46 status=ok
// SIG undefined FUN_1436224d6(void)

void FUN_1436224d6(longlong *param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  plVar3 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)puVar1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143622501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143622504 FUN_143622504 body=102 status=ok
// SIG undefined FUN_143622504(void)

void FUN_143622504(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x20) + 0x138;
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    cVar2 = FUN_1436225f9(lVar3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    if (cVar2 != '\0') {
      FUN_146ef19e0(lVar3,param_1,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19),
                    uVar1);
    }
  }
  return;
}



// FUNCTION 14362256a FUN_14362256a body=78 status=ok
// SIG undefined FUN_14362256a(void)

undefined8 * FUN_14362256a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa1ddc0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1436225be FUN_1436225be body=29 status=ok
// SIG undefined FUN_1436225be(void)

void FUN_1436225be(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436225dc FUN_1436225dc body=29 status=ok
// SIG undefined FUN_1436225dc(void)

undefined8 FUN_1436225dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436225f9 FUN_1436225f9 body=130 status=ok
// SIG undefined FUN_1436225f9(void)

undefined8 FUN_1436225f9(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined7 uVar5;
  
  lVar4 = *param_1;
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(lVar4 + 0x40);
    uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
    cVar3 = '\x03';
    if ((lVar2 != 0 && *(byte *)(lVar2 + 0x90) != 0) &&
       (cVar3 = '\x02', 1 < *(byte *)(lVar2 + 0x90))) {
      cVar3 = *(char *)(lVar2 + 0x1ac);
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x48) == 0) {
      lVar4 = 0;
    }
    plVar1 = *(longlong **)(lVar4 + 0x48);
    uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
    cVar3 = '\x03';
    if ((plVar1 != (longlong *)0x0 && *(byte *)((longlong)plVar1 + 0xc) != 0) &&
       (cVar3 = '\x02', 1 < *(byte *)((longlong)plVar1 + 0xc))) {
      cVar3 = *(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xb + (longlong)(int)plVar1[1] * 0x10);
      uVar5 = (undefined7)((ulonglong)*(longlong *)(*plVar1 + 0x2c0) >> 8);
    }
  }
  return CONCAT71(uVar5,cVar3 == '\x01' || cVar3 == '\x04');
}



// FUNCTION 14362267c FUN_14362267c body=109 status=ok
// SIG undefined FUN_14362267c(void)

void FUN_14362267c(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x38) + 0x138;
    uVar1 = *(undefined1 *)(param_1 + 0x32);
    cVar2 = FUN_1436225f9(lVar3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    if (cVar2 != '\0') {
      FUN_1458ffd5c(lVar3,param_1,param_1 + 0x18,*(undefined1 *)(param_1 + 0x30),
                    *(undefined1 *)(param_1 + 0x31),uVar1);
    }
  }
  return;
}



// FUNCTION 1436226ea FUN_1436226ea body=86 status=ok
// SIG undefined FUN_1436226ea(void)

undefined8 * FUN_1436226ea(longlong param_1,undefined8 *param_2)

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
  *puVar8 = &PTR_FUN_14aa1dde0;
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



// FUNCTION 143622746 FUN_143622746 body=29 status=ok
// SIG undefined FUN_143622746(void)

void FUN_143622746(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143622764 FUN_143622764 body=29 status=ok
// SIG undefined FUN_143622764(void)

undefined8 FUN_143622764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143622872 FUN_143622872 body=102 status=ok
// SIG undefined FUN_143622872(void)

void FUN_143622872(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x20) + 0x138;
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    cVar2 = FUN_1436225f9(lVar3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    if (cVar2 != '\0') {
      FUN_146ef25ae(lVar3,param_1,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19),
                    uVar1);
    }
  }
  return;
}



// FUNCTION 1436228d8 FUN_1436228d8 body=78 status=ok
// SIG undefined FUN_1436228d8(void)

undefined8 * FUN_1436228d8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa1de00;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14362292c FUN_14362292c body=29 status=ok
// SIG undefined FUN_14362292c(void)

void FUN_14362292c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14362294a FUN_14362294a body=29 status=ok
// SIG undefined FUN_14362294a(void)

undefined8 FUN_14362294a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436229e6 FUN_1436229e6 body=125 status=ok
// SIG undefined FUN_1436229e6(void)

void FUN_1436229e6(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x20) + 0x138;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x19));
    cVar1 = FUN_1436225f9(lVar3,uVar2 & 0xffffffff);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        FUN_1459a3a28(lVar3,param_1,uVar2 & 0xffffffff);
        return;
      }
      FUN_146ef1666(lVar3,param_1,uVar2 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143622a64 FUN_143622a64 body=78 status=ok
// SIG undefined FUN_143622a64(void)

undefined8 * FUN_143622a64(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa1de20;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143622ab8 FUN_143622ab8 body=29 status=ok
// SIG undefined FUN_143622ab8(void)

void FUN_143622ab8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143622ad6 FUN_143622ad6 body=29 status=ok
// SIG undefined FUN_143622ad6(void)

undefined8 FUN_143622ad6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143622af4 FUN_143622af4 body=126 status=ok
// SIG undefined FUN_143622af4(void)

void FUN_143622af4(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x20) + 0x138;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x19));
    cVar1 = FUN_1436225f9(lVar3,uVar2 & 0xffffffff);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        FUN_1410b7750(lVar3,param_1,uVar2 & 0xffffffff);
        return;
      }
      FUN_140e0d8bc(lVar3,param_1,uVar2 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143622b72 FUN_143622b72 body=78 status=ok
// SIG undefined FUN_143622b72(void)

undefined8 * FUN_143622b72(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa1de40;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143622bc6 FUN_143622bc6 body=29 status=ok
// SIG undefined FUN_143622bc6(void)

void FUN_143622bc6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143622be4 FUN_143622be4 body=29 status=ok
// SIG undefined FUN_143622be4(void)

undefined8 FUN_143622be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143622c02 FUN_143622c02 body=102 status=ok
// SIG undefined FUN_143622c02(void)

void FUN_143622c02(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x38) + 0x138;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x30));
    cVar1 = FUN_1436225f9(lVar3,uVar2 & 0xffffffff);
    if (cVar1 != '\0') {
      FUN_146288480(lVar3,param_1,param_1 + 0x18,uVar2 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143622c68 FUN_143622c68 body=86 status=ok
// SIG undefined FUN_143622c68(void)

undefined8 * FUN_143622c68(longlong param_1,undefined8 *param_2)

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
  *puVar8 = &PTR_FUN_14aa1de60;
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



// FUNCTION 143622cc4 FUN_143622cc4 body=29 status=ok
// SIG undefined FUN_143622cc4(void)

void FUN_143622cc4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143622ce2 FUN_143622ce2 body=29 status=ok
// SIG undefined FUN_143622ce2(void)

undefined8 FUN_143622ce2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143622d00 FUN_143622d00 body=102 status=ok
// SIG undefined FUN_143622d00(void)

void FUN_143622d00(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138);
  if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x260) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x38) + 0x138;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x30));
    cVar1 = FUN_1436225f9(lVar3,uVar2 & 0xffffffff);
    if (cVar1 != '\0') {
      FUN_145906f82(lVar3,param_1,param_1 + 0x18,uVar2 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143622d66 FUN_143622d66 body=86 status=ok
// SIG undefined FUN_143622d66(void)

undefined8 * FUN_143622d66(longlong param_1,undefined8 *param_2)

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
  *puVar8 = &PTR_FUN_14aa1de80;
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



// FUNCTION 143622dc2 FUN_143622dc2 body=29 status=ok
// SIG undefined FUN_143622dc2(void)

void FUN_143622dc2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143622de0 FUN_143622de0 body=29 status=ok
// SIG undefined FUN_143622de0(void)

undefined8 FUN_143622de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143622dfe FUN_143622dfe body=119 status=ok
// SIG undefined FUN_143622dfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143622dfe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [47];
  byte local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = _DAT_00000040;
  if ((*param_2 == 0) ||
     (((lVar1 = *(longlong *)(*param_2 + 0x40), lVar1 != 0 && (*(byte *)(lVar1 + 0x90) != 0)) &&
      ((*(byte *)(lVar1 + 0x90) < 2 || (*(char *)(lVar1 + 0x1ac) != '\x03')))))) {
    local_9 = *(byte *)(*param_1 + 8) >> 2 & 1;
    FUN_1457ef4c0(&local_9,lVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143622e76 FUN_143622e76 body=119 status=ok
// SIG undefined FUN_143622e76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143622e76(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [47];
  byte local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = _DAT_00000040;
  if ((*param_2 == 0) ||
     (((lVar1 = *(longlong *)(*param_2 + 0x40), lVar1 != 0 && (*(byte *)(lVar1 + 0x90) != 0)) &&
      ((*(byte *)(lVar1 + 0x90) < 2 || (*(char *)(lVar1 + 0x1ac) != '\x03')))))) {
    local_9 = *(byte *)(*param_1 + 8) >> 3 & 1;
    FUN_146ef97aa(&local_9,lVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143622fc2 FUN_143622fc2 body=166 status=ok
// SIG undefined FUN_143622fc2(void)

void FUN_143622fc2(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if ((((((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x40), lVar3 != 0)) &&
        (bVar1 = *(byte *)(lVar3 + 0x90), bVar1 != 0)) &&
       ((bVar1 < 2 || (*(char *)(lVar3 + 0x1ac) != '\x03')))) &&
      ((*(longlong *)(lVar2 + 8) != 0 &&
       (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x260) != 0 && 1 < bVar1)))) &&
     ((*(char *)(lVar3 + 0x1ac) == '\x03' || (*(char *)(lVar3 + 0x1ac) != '\x02')))) {
    FUN_1414162b4(lVar2,*param_1,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
                  *(undefined1 *)param_1[3],*(undefined1 *)param_1[4]);
  }
  return;
}



// FUNCTION 143623068 FUN_143623068 body=235 status=ok
// SIG undefined FUN_143623068(void)

void FUN_143623068(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if ((((((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x40), lVar3 != 0)) &&
        (bVar1 = *(byte *)(lVar3 + 0x90), bVar1 != 0)) &&
       ((bVar1 < 2 || (*(char *)(lVar3 + 0x1ac) != '\x03')))) &&
      (((*(longlong *)(lVar2 + 8) != 0 &&
        (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x260) != 0 && 1 < bVar1)) &&
       (((*(char *)(lVar3 + 0x1ac) == '\x03' || (*(char *)(lVar3 + 0x1ac) != '\x02')) &&
        (lVar2 = *(longlong *)(*param_1 + 0x138), lVar2 != 0)))))) &&
     ((lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0 && (*(longlong *)(lVar2 + 0x260) != 0)))) {
    FUN_146ef1fe2(*param_1 + 0x138,param_1[1],*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                  *(undefined1 *)param_1[4],*(undefined1 *)param_1[5],*(undefined1 *)param_1[6],0);
  }
  return;
}



// FUNCTION 143623154 FUN_143623154 body=177 status=ok
// SIG undefined FUN_143623154(void)

void FUN_143623154(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
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
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  local_68 = puVar1[2];
  uStack_60 = puVar1[3];
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  local_48 = puVar2[2];
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  local_80 = *(undefined1 *)param_1[6];
  local_88 = *(undefined8 *)param_1[5];
  uVar3 = FUN_140e7b49e(param_1[3],param_1[4]);
  *(undefined1 *)param_1[2] = uVar3;
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143623206 FUN_143623206 body=1100 status=ok
// SIG undefined FUN_143623206(void)

void FUN_143623206(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_378 [32];
  longlong *local_358;
  undefined4 local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  undefined1 *local_330;
  longlong local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  ulonglong uStack_300;
  undefined1 local_2e9;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_280 [512];
  undefined1 *local_80;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*param_2 == 0) goto LAB_1436235f2;
  lVar1 = param_1[1];
  local_80 = (undefined1 *)0x0;
  local_74 = 0x20;
  lVar10 = *(longlong *)(*param_2 + 0x40);
  uVar13 = *(uint *)(lVar10 + 0x88);
  uVar17 = (ulonglong)uVar13;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar17);
  }
  local_78 = 0;
  if (uVar13 < 0x21) {
    if (uVar17 != 0) goto LAB_143623297;
  }
  else {
    FUN_140e4bc70(local_280,uVar13);
LAB_143623297:
    lVar12 = lVar10 + 0x78;
    uVar11 = 0;
    do {
      uVar13 = local_78;
      lVar8 = *(longlong *)(lVar10 + 0x80);
      if (*(longlong *)(lVar10 + 0x80) == 0) {
        lVar8 = lVar12;
      }
      uVar2 = *(undefined8 *)(lVar8 + uVar11 * 8);
      lVar8 = *param_2;
      lVar16 = (longlong)(int)local_78;
      local_78 = local_78 + 1;
      if (local_74 < local_78) {
        local_320 = lVar12;
        local_318 = param_2;
        FUN_146ef97fe(local_280,uVar13);
        param_2 = local_318;
        lVar12 = local_320;
      }
      puVar9 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar9 = local_280;
      }
      *(undefined8 *)(puVar9 + lVar16 * 0x10) = uVar2;
      *(longlong *)(puVar9 + lVar16 * 0x10 + 8) = lVar8;
      uVar11 = uVar11 + 1;
    } while (uVar17 != uVar11);
    uVar17 = (ulonglong)(int)local_78;
    local_308 = 0;
    uStack_300 = 0;
    if (0 < (longlong)uVar17) {
      uVar11 = 0;
      do {
        lVar10 = *param_1;
        if ((*(char *)(lVar10 + 0x80) == '\0') ||
           (bVar6 = FUN_140757f18(lVar1,uVar11 & 0xffffffff),
           (*(byte *)(lVar10 + 0x80) & (byte)(1 << (bVar6 & 0x1f))) != 0)) {
          puVar9 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar9 = local_280;
          }
          local_310 = *(undefined8 *)(*(longlong *)(puVar9 + uVar11 * 0x10) + 0x10);
          lVar10 = *(longlong *)(lVar1 + 0x108);
          if (*(longlong *)(lVar1 + 0x108) == 0) {
            lVar10 = lVar1;
          }
          plVar3 = *(longlong **)(lVar10 + 0x170);
          if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)))
          {
            uVar5 = *(ulonglong *)(puVar9 + uVar11 * 0x10);
            uVar13 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
            plVar15 = plVar3 + 7;
            if ((longlong *)plVar3[8] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar3[8];
            }
            iVar14 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar3[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
            if (iVar14 != -1) {
              do {
                lVar12 = *plVar3 + (longlong)iVar14 * 0x90;
                if (*(ulonglong *)(*plVar3 + (longlong)iVar14 * 0x90) == uVar5) {
                  if ((longlong *)(lVar12 + 0x10) != (longlong *)0x0 && lVar12 != 0) {
                    lVar10 = *(longlong *)(lVar12 + 0x10);
                  }
                  break;
                }
                iVar14 = *(int *)(lVar12 + 0x80);
              } while (iVar14 != -1);
            }
          }
          if ((lVar10 == lVar1) &&
             (*(char *)(*(longlong *)(*(ulonglong *)(puVar9 + uVar11 * 0x10) + 0x10) + 0x18) ==
              '\x01')) {
            bVar18 = (longlong)uStack_300 < 0;
            uStack_300 = uStack_300 & 0xffffffff00000000;
            if (bVar18) {
              FUN_1417bb680(&local_308,0);
            }
            local_338 = param_1[6];
            local_340 = param_1[5];
            local_350 = *(undefined4 *)param_1[4];
            puVar4 = (undefined4 *)param_1[3];
            local_2e8 = *puVar4;
            uStack_2e4 = puVar4[1];
            uStack_2e0 = puVar4[2];
            uStack_2dc = puVar4[3];
            local_2d8 = puVar4[4];
            uStack_2d4 = puVar4[5];
            uStack_2d0 = puVar4[6];
            uStack_2cc = puVar4[7];
            local_2c8 = puVar4[8];
            uStack_2c4 = puVar4[9];
            uStack_2c0 = puVar4[10];
            uStack_2bc = puVar4[0xb];
            local_2b8 = *(undefined8 *)(puVar4 + 0xc);
            local_348 = *param_1;
            uStack_2b0 = 0;
            local_2a8 = 0x3ff0000000000000;
            uStack_2a0 = 0x3ff0000000000000;
            local_298 = 0x3ff0000000000000;
            uStack_290 = 0;
            local_330 = &local_2e9;
            local_358 = &local_308;
            cVar7 = FUN_140200cc4(*(undefined8 *)param_1[2],local_310,&local_310,&local_2e8);
            uVar5 = uStack_300;
            if (cVar7 != '\0') {
              *(undefined1 *)param_1[7] = 1;
            }
            if ((uint)uStack_300 != 0) {
              plVar3 = (longlong *)param_1[8];
              iVar14 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar14 + (uint)uStack_300;
              if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar14) < (uint)uStack_300) {
                FUN_1414fa4c8(plVar3,iVar14);
              }
              FUN_144a80303((longlong)iVar14 * 0x48 + *plVar3,local_308,uVar5 & 0xffffffff);
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar17);
      if (local_308 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1436235f2:
  if ((local_70 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143623654 FUN_143623654 body=89 status=ok
// SIG undefined FUN_143623654(void)

void FUN_143623654(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)param_1[1];
  local_10 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  FUN_14360610e(param_2,*(undefined8 *)*param_1,&local_18,param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436236ae FUN_1436236ae body=4339 status=ok
// SIG undefined FUN_1436236ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1436236ae(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong *plVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong unaff_R15;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  uint *local_150;
  int *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [4];
  undefined4 local_108;
  undefined4 local_c8;
  undefined1 local_c4;
  byte local_c3;
  undefined8 local_c0;
  longlong local_b8 [3];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar9 = *(uint *)(*param_1 + 8);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar25 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar25 != 2)) {
    if (iVar25 != 1) goto LAB_14362372d;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14362372d;
  }
  (**(code **)(*(longlong *)param_1[2] + 0x2a0))();
LAB_14362372d:
  if (((DAT_14caf6718 == '\x01') && (lVar26 = param_1[2], *(int *)(lVar26 + 0x100) == 0)) &&
     (*(int *)(lVar26 + 0x60) + *(int *)(lVar26 + 0x40) + *(int *)(lVar26 + 0x50) +
      *(int *)(lVar26 + 0x70) + *(int *)(lVar26 + 0x80) + *(int *)(lVar26 + 0x90) +
      *(int *)(lVar26 + 0xa0) == 0)) {
    uVar28 = 0;
  }
  else {
    if (0 < (int)uVar9) {
      local_148 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      iVar25 = -uVar9;
      lVar26 = (ulonglong)uVar9 * 0x60;
      uVar15 = (ulonglong)uVar9 + 1;
      do {
        puVar4 = *(uint **)(*(longlong *)*param_1 + -0x10 + uVar15 * 8);
        lVar14 = *(longlong *)param_1[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caf6f00) && (FUN_144b3d300(), DAT_14caf6f00 == -1)) {
          FUN_140056680(&DAT_14caf6ef0,L"<NoName>");
          atexit((_func_5014 *)&LAB_1436247a2);
          _Init_thread_footer();
        }
        puVar24 = puVar4 + 0x50;
        if (param_1[3] == 0) {
          *puVar24 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[3] + 0xc);
          *puVar24 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[0x51] = uVar9;
        *(longlong *)(puVar4 + 0x52) = param_1[4];
        if (param_1[5] == 0) {
          puVar4[0x54] = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[5] + 0xc);
          puVar4[0x54] = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[0x55] = uVar9;
        if (param_1[2] == 0) {
          *puVar4 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1[2] + 0xc);
          *puVar4 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          uVar9 = *(uint *)(lVar27 + 0x10);
          if (*(uint *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar19 = DAT_14c964868 + 1;
            bVar29 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar29) {
              local_150 = puVar24;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar19);
              puVar24 = local_150;
            }
            LOCK();
            uVar9 = *(uint *)(lVar27 + 0x10);
            bVar29 = uVar9 == 0;
            if (bVar29) {
              *(uint *)(lVar27 + 0x10) = uVar19;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar29) {
              uVar9 = uVar19;
            }
          }
        }
        puVar4[1] = uVar9;
        puVar18 = (uint *)(lVar14 + -0x20 + lVar26);
        uVar9 = puVar18[1];
        uVar19 = puVar18[2];
        uVar5 = puVar18[3];
        uVar2 = *(undefined8 *)(lVar14 + -0x10 + lVar26);
        puVar4[0x14] = *puVar18;
        puVar4[0x15] = uVar9;
        puVar4[0x16] = uVar19;
        puVar4[0x17] = uVar5;
        *(undefined8 *)(puVar4 + 0x18) = uVar2;
        bVar8 = (byte)puVar4[2];
        if (((bVar8 & 4) == 0) || ((param_1[8] != 0 && ((*(byte *)(param_1[8] + 0x418) & 4) == 0))))
        {
          bVar13 = 0;
        }
        else {
          bVar13 = 4;
        }
        *(byte *)(puVar4 + 2) = bVar8 & 0xfb | bVar13;
        if (((bVar8 & 0x10) != 0) && (*(char *)((longlong)param_1 + 0x39) == '\0')) {
          if (((puVar4[0x51] == 0) ||
              (((uVar9 = *puVar24, (int)uVar9 < 0 || (DAT_14c9647dc <= (int)uVar9)) ||
               (plVar17 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar17 == (longlong *)0x0)))) ||
             (((*(uint *)(plVar17 + 2) != puVar4[0x51] ||
               ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar27 = *plVar17, lVar27 == 0))))
          {
LAB_1436239c5:
            pcVar21 = (char *)((longlong)puVar4 + 0x17);
LAB_1436239c9:
            if (*pcVar21 == '\x01') goto LAB_143623a76;
          }
          else if ((*(longlong *)(lVar27 + 0xa8) == 0) ||
                  ((*(byte *)(*(longlong *)(lVar27 + 0xa8) + 0x65) & 1) != 0)) {
            if (DAT_14cad2858 == 0) {
              local_138 = FUN_144a7958c;
              local_160 = FUN_14081d0ea;
              local_168 = (code *)&LAB_146395584;
              local_170 = (code **)&local_138;
              local_178 = &LAB_147a0ba80;
              local_180 = &LAB_14575ccce;
              local_188 = L"Engine";
              local_190 = (undefined8 *)0x40000000000;
              local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
              local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
              local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_1436239c5;
            pcVar21 = (char *)(lVar27 + 0x427);
            goto LAB_1436239c9;
          }
          if ((param_1[3] != 0) && (lVar27 = *(longlong *)(param_1[3] + 0x120), lVar27 != 0)) {
            if (DAT_14cac6e60 == 0) {
              local_138 = FUN_144a7958c;
              local_160 = FUN_14081d0ea;
              local_168 = FUN_142b47bc4;
              local_170 = (code **)&local_138;
              local_178 = &LAB_1478989f1;
              local_180 = &LAB_146391124;
              local_188 = L"Engine";
              local_190 = (undefined8 *)0x10000000000;
              local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000005);
              local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
              local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x620);
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
                ((lVar12 = *(longlong *)(param_1[3] + 0xb0), lVar12 != 0 ||
                 (lVar12 = FUN_1448abda6(), lVar12 != 0)))) &&
               ((bVar8 = *(byte *)(lVar12 + 0x152), bVar8 == 1 ||
                ((bVar8 < 7 && ((0x68U >> (bVar8 & 0x1f) & 1) != 0)))))) {
              local_1a8 = (undefined4 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
              uVar28 = 0;
              cVar7 = FUN_143657a00(param_1[3],lVar27,*(undefined8 *)(param_1[3] + 0x128),0);
              if (cVar7 != '\0') goto LAB_143624731;
            }
          }
        }
LAB_143623a76:
        unaff_R15 = uVar15 - 1;
        if (*(longlong *)(puVar4 + 0x4e) == 0) {
          if ((*(char *)((longlong)param_1 + 0x39) == '\0') && (*(char *)(param_1[9] + 1) == '\x01')
             ) {
            *(byte *)(puVar4 + 2) = (byte)puVar4[2] & 0xfe | *(byte *)((longlong)param_1 + 0x3a);
            fVar1 = *(float *)((longlong)param_1 + 0x3c);
            if ((fVar1 != -1.0) || (NAN(fVar1))) {
              puVar4[0x4d] = (uint)fVar1;
            }
          }
          puVar4[0x58] = 1;
          *(uint **)(puVar4 + 0x5a) = puVar4;
          if (((((puVar4[0x51] == 0) || (uVar9 = *puVar24, (int)uVar9 < 0)) ||
               (DAT_14c9647dc <= (int)uVar9)) ||
              ((plVar17 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar4[0x51])))) ||
             (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (lVar27 = *plVar17, lVar27 == 0)))) {
LAB_143623bd4:
            pcVar21 = (char *)((longlong)puVar4 + 0x17);
LAB_143623bd8:
            bVar29 = *pcVar21 == '\x01';
          }
          else {
            if ((*(longlong *)(lVar27 + 0xa8) == 0) ||
               ((*(byte *)(*(longlong *)(lVar27 + 0xa8) + 0x65) & 1) != 0)) {
              if (DAT_14cad2858 == 0) {
                local_138 = FUN_144a7958c;
                local_160 = FUN_14081d0ea;
                local_168 = (code *)&LAB_146395584;
                local_170 = (code **)&local_138;
                local_178 = &LAB_147a0ba80;
                local_180 = &LAB_14575ccce;
                local_188 = L"Engine";
                local_190 = (undefined8 *)0x40000000000;
                local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
                local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
                local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
              goto LAB_143623bd4;
              pcVar21 = (char *)(lVar27 + 0x427);
              goto LAB_143623bd8;
            }
            bVar29 = false;
          }
          local_c4 = 0;
          local_c8 = 0;
          local_c0 = 0;
          puVar20 = (undefined8 *)(lVar14 + lVar26 + -0x60);
          puVar22 = local_128;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *puVar22 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar22 = puVar22 + 1;
          }
          bVar8 = (byte)puVar4[2];
          local_150 = puVar24;
          if (((bVar8 & 1) == 0) || (puVar4[1] == 0)) {
LAB_143623c1e:
            bVar16 = false;
          }
          else {
            uVar9 = *puVar4;
            bVar16 = false;
            if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
              plVar17 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((plVar17 == (longlong *)0x0) || (*(uint *)(plVar17 + 2) != puVar4[1])) ||
                 ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143623c1e;
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar17;
              }
              else {
                lVar14 = 0;
              }
              lVar27 = DAT_14c997cc0;
              if (DAT_14c997cc0 == 0) {
                plVar17 = (longlong *)FUN_145a62958();
                lVar27 = plVar17[0x22];
                if (lVar27 == 0) {
                  (**(code **)(*plVar17 + 1000))(plVar17);
                  lVar27 = plVar17[0x22];
                }
              }
              cVar7 = *(char *)(lVar27 + 0x75);
              if (*(char *)(lVar14 + 0x31) != '\0') {
                cVar7 = *(char *)(lVar14 + 0x31);
              }
              bVar16 = cVar7 != '\x03';
              bVar8 = (byte)puVar4[2];
            }
          }
          puVar24 = puVar4 + 0x4e;
          local_c3 = bVar8 >> 5 & 1;
          local_c8 = CONCAT13(bVar8 >> 3,CONCAT12(bVar8 >> 2,(undefined2)local_c8)) & 0x101ffff;
          local_c8._0_2_ = CONCAT11(bVar29,(undefined1)local_c8);
          local_138 = (code *)param_1[6];
          local_c4 = bVar16;
          if (*(char *)((longlong)param_1 + 0x39) == '\x01') {
            local_c8 = CONCAT31(local_c8._1_3_,1);
            FUN_1407125d4(&local_138,puVar24);
          }
          else {
            puVar18 = puVar24;
            FUN_1407125d4(&local_138,puVar24);
            uVar15 = CONCAT71((int7)((ulonglong)puVar18 >> 8),
                              *(undefined1 *)((longlong)puVar4 + 0x3b)) & 0xffffffffffffff01;
            FUN_1401fe056(*(undefined8 *)(puVar4 + 0x4e),uVar15);
            uVar15 = CONCAT71((int7)(uVar15 >> 8),*(undefined1 *)((longlong)puVar4 + 0x3b)) &
                     0xffffffffffffff08;
            FUN_14020126e(*(undefined8 *)(puVar4 + 0x4e),
                          CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 3));
            bVar29 = true;
            if ((((((puVar4[2] & 1) != 0) && (puVar4[1] != 0)) &&
                 ((uVar9 = *puVar4, -1 < (int)uVar9 &&
                  (((int)uVar9 < DAT_14c9647dc &&
                   (plVar17 = (longlong *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                   plVar17 != (longlong *)0x0)))))) && (*(uint *)(plVar17 + 2) == puVar4[1])) &&
               ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar17;
              }
              else {
                lVar14 = 0;
              }
              lVar27 = DAT_14c997cc0;
              if (DAT_14c997cc0 == 0) {
                plVar17 = (longlong *)FUN_145a62958(plVar17,1);
                lVar27 = plVar17[0x22];
                if (lVar27 == 0) {
                  (**(code **)(*plVar17 + 1000))(plVar17);
                  lVar27 = plVar17[0x22];
                }
              }
              cVar7 = *(char *)(lVar27 + 0x75);
              if (*(char *)(lVar14 + 0x31) != '\0') {
                cVar7 = *(char *)(lVar14 + 0x31);
              }
              bVar29 = cVar7 == '\x03';
            }
            FUN_140cd4d2c(puVar24,bVar29);
            FUN_1403452ce(puVar24,0x7f7fffff);
            FUN_1401cddec(*(undefined8 *)(puVar4 + 0x4e),*(byte *)((longlong)puVar4 + 0x3b) >> 7);
            FUN_142a2e190(puVar24,*(byte *)((longlong)puVar4 + 0x3d) >> 7);
            FUN_14017b994(*(undefined8 *)(puVar4 + 0x4e),*(undefined1 *)((longlong)puVar4 + 0x12));
            FUN_14017baa4(*(undefined8 *)(puVar4 + 0x4e),*(undefined1 *)((longlong)puVar4 + 0x13));
            FUN_14017bbb4(*(undefined8 *)(puVar4 + 0x4e),(char)puVar4[5]);
            if (*(longlong *)(puVar4 + 0x4e) == 0) {
              bVar29 = *(byte *)(_DAT_00000040 + 0x90) < 2;
              lVar14 = _DAT_00000040;
            }
            else {
              lVar14 = *(longlong *)(*(longlong *)(puVar4 + 0x4e) + 0x40);
              if (((lVar14 == 0) || (*(byte *)(lVar14 + 0x90) < 2)) ||
                 (*(char *)(lVar14 + 0x1ac) == '\x03')) goto LAB_143623d77;
              bVar29 = false;
            }
            if ((!bVar29) && (lVar14 != 0)) {
              FUN_1401be71c(lVar14,(char)puVar4[0x39]);
            }
          }
LAB_143623d77:
          local_140 = FUN_14034b308(puVar4);
          local_b8[0] = 0;
          local_b8[1] = 0;
          local_138 = (code *)0x0;
          uStack_130 = 0;
          local_1a8 = *(undefined4 **)(puVar4 + 0x52);
          FUN_143605db2(puVar4,*(undefined8 *)(puVar4 + 0x50),&local_138,local_b8);
          local_a0 = (undefined4)local_138;
          uStack_9c = local_138._4_4_;
          uStack_98 = (undefined4)uStack_130;
          uStack_94 = uStack_130._4_4_;
          local_128[2] = 0;
          local_128[3] = 0;
          local_128[0] = 0;
          local_128[1] = 0;
          local_138 = (code *)0x0;
          uStack_130 = 0;
          local_108 = 0;
          FUN_144a2a070(puVar4,&local_138,0xffffffff);
          lVar14 = param_1[2];
          lVar27 = DAT_14c997cc0;
          if (DAT_14c997cc0 == 0) {
            plVar17 = (longlong *)FUN_145a62958();
            lVar27 = plVar17[0x22];
            if (lVar27 == 0) {
              (**(code **)(*plVar17 + 1000))(plVar17);
              lVar27 = plVar17[0x22];
            }
          }
          cVar7 = *(char *)(lVar27 + 0x75);
          if (*(char *)(lVar14 + 0x31) != '\0') {
            cVar7 = *(char *)(lVar14 + 0x31);
          }
          if (((puVar4[0x51] == 0) || (uVar9 = *local_150, (int)uVar9 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar9 ||
              ((((plVar17 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar4[0x51])) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar14 = *plVar17, lVar14 == 0))))
             )) {
LAB_143623ec3:
            pbVar23 = (byte *)((longlong)puVar4 + 0x17);
LAB_143623ec7:
            bVar8 = *pbVar23;
            local_108 = 0;
            if (bVar8 != 0) {
              bVar16 = bVar8 == 5 || (bVar8 & 0xfd) == 1;
              bVar8 = bVar8 & 0xfe;
              bVar30 = DAT_14c761714 != 0;
              local_108 = (uint)bVar16 << 0x10;
              bVar29 = bVar8 == 2;
              if (!bVar30) {
                bVar29 = bVar30;
              }
              if (bVar8 == 4) {
                bVar29 = bVar30;
              }
              if (bVar29) {
                uVar6 = CONCAT11(bVar8 == 4,bVar16);
                local_108 = (uint)uVar6 << 0x10;
                local_108 = CONCAT31(local_108._1_3_,1);
                if (cVar7 == '\x03') {
                  local_108 = CONCAT22(uVar6,0x101);
                }
              }
            }
          }
          else {
            if ((*(longlong *)(lVar14 + 0xa8) == 0) ||
               ((*(byte *)(*(longlong *)(lVar14 + 0xa8) + 0x65) & 1) != 0)) {
              if (DAT_14cad2858 == 0) {
                local_90 = FUN_144a7958c;
                local_160 = FUN_14081d0ea;
                local_168 = (code *)&LAB_146395584;
                local_170 = &local_90;
                local_178 = &LAB_147a0ba80;
                local_180 = &LAB_14575ccce;
                local_188 = L"Engine";
                local_190 = (undefined8 *)0x40000000000;
                local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x10000004);
                local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,0x10);
                local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
              goto LAB_143623ec3;
              pbVar23 = (byte *)(lVar14 + 0x427);
              goto LAB_143623ec7;
            }
            local_108 = 0;
          }
          local_190 = &DAT_14c846480;
          local_198 = &local_138;
          local_1a0 = local_b8;
          local_1a8 = &local_a0;
          local_188 = (wchar_t *)0x0;
          FUN_14360721e(param_1[2],puVar4,puVar4 + 0x14);
          lVar14 = DAT_14caf66f0;
          iVar3 = *local_148;
          if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
            uVar15 = 0;
          }
          else if (iVar3 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            uVar15 = (ulonglong)(DVar10 != DVar11);
          }
          else {
            uVar15 = 1;
          }
          local_88 = 1;
          if (*(int *)(lVar14 + uVar15 * 4) == 0) {
            local_88 = *(byte *)((longlong)puVar4 + 0x3b) >> 4 & 1;
          }
          local_90 = *(code **)(*(longlong *)puVar24 + 0x40);
          FUN_1400b4776(local_90,2,&local_90);
          iVar3 = *(int *)(*(longlong *)(*(longlong *)puVar24 + 0x40) + 0x88);
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_9c,local_a0) != 0) {
            FUN_1400020a8();
          }
          if (iVar3 == 0) {
            FUN_142a2e46a(puVar24,param_1[6],0);
            puVar4[0] = 0;
            puVar4[1] = 0;
            puVar4[0x28] = 0;
            puVar4[0x29] = 0;
            local_150[4] = 0;
            local_150[5] = 0;
            local_150[0] = 0;
            local_150[1] = 0;
            local_150[2] = 0;
            local_150[3] = 0;
          }
          else {
            *(uint **)(*(longlong *)(*(longlong *)puVar24 + 0x40) + 0x70) = puVar4 + 0x58;
          }
        }
        else {
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar24[4] = 0;
          puVar24[5] = 0;
          puVar24[0] = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          plVar17 = (longlong *)*param_1;
          uVar9 = *(uint *)(plVar17 + 1);
          if (unaff_R15 != uVar9) {
            memmove((void *)(*plVar17 + uVar15 * 8 + -0x10),(void *)(*plVar17 + uVar15 * 8 + -8),
                    (longlong)(int)(uVar9 + iVar25) << 3);
            uVar9 = *(uint *)(plVar17 + 1);
          }
          *(uint *)(plVar17 + 1) = uVar9 - 1;
          plVar17 = (longlong *)param_1[1];
          uVar9 = *(uint *)(plVar17 + 1);
          if (unaff_R15 != uVar9) {
            memmove((void *)(*plVar17 + lVar26 + -0x60),(void *)(*plVar17 + lVar26),
                    (longlong)(int)(uVar9 + iVar25) * 0x60);
            uVar9 = *(uint *)(plVar17 + 1);
          }
          *(uint *)(plVar17 + 1) = uVar9 - 1;
        }
        iVar25 = iVar25 + 1;
        lVar26 = lVar26 + -0x60;
        uVar15 = unaff_R15;
      } while (1 < unaff_R15);
    }
    uVar28 = CONCAT71((int7)(unaff_R15 >> 8),1);
  }
LAB_143624731:
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar28 & 0xffffffff;
}



// FUNCTION 1436247b4 FUN_1436247b4 body=586 status=ok
// SIG undefined FUN_1436247b4(void)

void FUN_1436247b4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar8 = (longlong *)*param_1;
  if (0 < (int)plVar8[1]) {
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(*plVar8 + lVar11 * 8);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x17) != '\0')) && (*(longlong *)(lVar4 + 0x138) != 0)
         ) {
        cVar5 = FUN_14004245a(lVar4,param_1[1],&local_8c,&local_88);
        if ((cVar5 != '\0') && (local_8c <= *(float *)param_1[2])) {
          plVar8 = (longlong *)param_1[3];
          iVar6 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar6 + 1U) {
            FUN_1412f3262(plVar8,iVar6);
          }
          lVar13 = *plVar8;
          lVar12 = (longlong)iVar6 * 0x30;
          *(undefined8 *)(lVar13 + 0x10 + lVar12) = DAT_14c8464f0;
          uVar7 = DAT_14c8464e8;
          *(undefined8 *)(lVar13 + lVar12) = DAT_14c8464e0;
          ((undefined8 *)(lVar13 + lVar12))[1] = uVar7;
          *(undefined4 *)(lVar13 + 0x18 + lVar12) = 0xbf800000;
          puVar2 = (undefined8 *)(lVar13 + 0x1c + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar13 + 0x10 + lVar12) = local_78;
          *(undefined8 *)(lVar13 + lVar12) = local_88;
          ((undefined8 *)(lVar13 + lVar12))[1] = uStack_80;
          fVar15 = 0.0;
          if (0.0 < local_8c) {
            if (local_8c < 0.0) {
              fVar15 = sqrtf(local_8c);
            }
            else {
              fVar15 = SQRT(local_8c);
            }
          }
          lVar1 = lVar12 + lVar13;
          puVar9 = (uint *)(lVar12 + lVar13 + 0x1c);
          *(float *)(lVar1 + 0x18) = fVar15;
          if (*(longlong *)param_1[4] == 0) {
            *puVar9 = 0;
            iVar6 = 0;
          }
          else {
            uVar3 = *(uint *)(*(longlong *)param_1[4] + 0xc);
            *puVar9 = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar6 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar6 = *(int *)(lVar13 + 0x10);
              bVar14 = iVar6 == 0;
              if (bVar14) {
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar6 = iVar10;
              }
            }
          }
          *(int *)(lVar1 + 0x20) = iVar6;
          if ((*(longlong *)param_1[5] == 0) || (*(short *)(lVar4 + 0x10) == -1)) {
            uVar7 = 0;
          }
          else {
            FUN_14041807a(*(longlong *)param_1[5],&local_98);
            uVar7 = local_98;
          }
          *(undefined8 *)(lVar1 + 0x24) = uVar7;
        }
        plVar8 = (longlong *)*param_1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)plVar8[1]);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143624a00 FUN_143624a00 body=431 status=ok
// SIG undefined FUN_143624a00(void)

undefined8 FUN_143624a00(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar2 = (longlong *)*param_2;
  memset(local_128,0,0x100);
  local_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  local_170 = param_1[5];
  local_180 = (undefined4)param_1[3];
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_178 = (undefined4)param_1[4];
  uStack_174 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_188 = (undefined4)param_1[2];
  puVar3 = (undefined8 *)param_1[1];
  local_148 = *puVar3;
  uStack_140 = puVar3[1];
  local_138 = puVar3[2];
  puVar4 = (undefined4 *)*param_1;
  local_168 = *puVar4;
  uStack_164 = puVar4[1];
  uStack_160 = puVar4[2];
  uStack_15c = puVar4[3];
  local_158 = *(undefined8 *)(puVar4 + 4);
  cVar6 = (**(code **)(*plVar2 + 0x970))(plVar2,local_128);
  if (cVar6 != '\0') {
    plVar2 = (longlong *)param_1[6];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_144a3a3ee(plVar2,iVar1);
    }
    lVar5 = *plVar2;
    lVar7 = (longlong)iVar1 * 0x100;
    memcpy((void *)(lVar5 + lVar7),local_128,0xb8);
    puVar3 = (undefined8 *)(lVar5 + 0xb8 + lVar7);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar5 + 200 + lVar7) = 0;
    *(undefined4 *)(lVar5 + 0xd0 + lVar7) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0xd4 + lVar7) = 0;
    *(undefined8 *)(lVar5 + 0xb8 + lVar7) = local_70;
    puVar3 = (undefined8 *)(lVar5 + 0xc0 + lVar7);
    *puVar3 = local_68;
    puVar3[1] = uStack_60;
    *(undefined4 *)(lVar5 + 0xd0 + lVar7) = local_58;
    *(undefined1 *)(lVar5 + 0xd4 + lVar7) = local_54;
    *(undefined8 *)(lVar5 + 0xf8 + lVar7) = local_30;
    puVar3 = (undefined8 *)(lVar5 + 0xe8 + lVar7);
    *puVar3 = local_40;
    puVar3[1] = uStack_38;
    puVar4 = (undefined4 *)(lVar5 + 0xd8 + lVar7);
    *puVar4 = local_50;
    puVar4[1] = uStack_4c;
    puVar4[2] = uStack_48;
    puVar4[3] = uStack_44;
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143624bb0 FUN_143624bb0 body=86 status=ok
// SIG undefined FUN_143624bb0(void)

undefined8 * FUN_143624bb0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14aa1e130;
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



// FUNCTION 143624c0c FUN_143624c0c body=29 status=ok
// SIG undefined FUN_143624c0c(void)

void FUN_143624c0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143624c2a FUN_143624c2a body=29 status=ok
// SIG undefined FUN_143624c2a(void)

undefined8 FUN_143624c2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143624c48 FUN_143624c48 body=451 status=ok
// SIG undefined FUN_143624c48(void)

undefined8 FUN_143624c48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar2 = (longlong *)*param_2;
  memset(local_128,0,0x100);
  local_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  local_170 = param_1[7];
  local_180 = *(undefined4 *)(param_1 + 5);
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_178 = *(undefined4 *)(param_1 + 6);
  uStack_174 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_188 = *(undefined4 *)(param_1 + 4);
  local_198 = param_1[3];
  local_190 = *param_1;
  puVar3 = (undefined8 *)param_1[2];
  local_148 = *puVar3;
  uStack_140 = puVar3[1];
  local_138 = puVar3[2];
  puVar4 = (undefined4 *)param_1[1];
  local_168 = *puVar4;
  uStack_164 = puVar4[1];
  uStack_160 = puVar4[2];
  uStack_15c = puVar4[3];
  local_158 = *(undefined8 *)(puVar4 + 4);
  cVar6 = (**(code **)(*plVar2 + 0x980))(plVar2,local_128);
  if (cVar6 != '\0') {
    plVar2 = (longlong *)param_1[8];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_144a3a3ee(plVar2,iVar1);
    }
    lVar5 = *plVar2;
    lVar7 = (longlong)iVar1 * 0x100;
    memcpy((void *)(lVar5 + lVar7),local_128,0xb8);
    puVar3 = (undefined8 *)(lVar5 + 0xb8 + lVar7);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar5 + 200 + lVar7) = 0;
    *(undefined4 *)(lVar5 + 0xd0 + lVar7) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0xd4 + lVar7) = 0;
    *(undefined8 *)(lVar5 + 0xb8 + lVar7) = local_70;
    puVar3 = (undefined8 *)(lVar5 + 0xc0 + lVar7);
    *puVar3 = local_68;
    puVar3[1] = uStack_60;
    *(undefined4 *)(lVar5 + 0xd0 + lVar7) = local_58;
    *(undefined1 *)(lVar5 + 0xd4 + lVar7) = local_54;
    *(undefined8 *)(lVar5 + 0xf8 + lVar7) = local_30;
    puVar3 = (undefined8 *)(lVar5 + 0xe8 + lVar7);
    *puVar3 = local_40;
    puVar3[1] = uStack_38;
    puVar4 = (undefined4 *)(lVar5 + 0xd8 + lVar7);
    *puVar4 = local_50;
    puVar4[1] = uStack_4c;
    puVar4[2] = uStack_48;
    puVar4[3] = uStack_44;
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143624e0c FUN_143624e0c body=71 status=ok
// SIG undefined FUN_143624e0c(void)

void FUN_143624e0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aa1e150;
  lVar2 = 9;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143624e5a FUN_143624e5a body=29 status=ok
// SIG undefined FUN_143624e5a(void)

void FUN_143624e5a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143624e78 FUN_143624e78 body=29 status=ok
// SIG undefined FUN_143624e78(void)

undefined8 FUN_143624e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143624e96 FUN_143624e96 body=255 status=ok
// SIG undefined FUN_143624e96(void)

undefined8 FUN_143624e96(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  undefined4 local_11c;
  float local_118;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar1 = (longlong *)*param_2;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  local_160 = param_1[5];
  local_170 = (undefined4)param_1[3];
  uStack_16c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_168 = (undefined4)param_1[4];
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_178 = (undefined4)param_1[2];
  puVar2 = (undefined8 *)param_1[1];
  local_138 = *puVar2;
  uStack_130 = puVar2[1];
  local_128 = puVar2[2];
  puVar3 = (undefined4 *)*param_1;
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = *(undefined8 *)(puVar3 + 4);
  cVar4 = (**(code **)(*plVar1 + 0x970))(plVar1,local_120);
  if ((cVar4 != '\0') && (local_118 < *(float *)(param_1[7] + 8))) {
    *(undefined1 *)param_1[6] = 1;
    memcpy((void *)param_1[7],local_120,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143624f96 FUN_143624f96 body=86 status=ok
// SIG undefined FUN_143624f96(void)

undefined8 * FUN_143624f96(longlong param_1,undefined8 *param_2)

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
  *puVar8 = &PTR_FUN_14aa1e170;
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



// FUNCTION 143624ff2 FUN_143624ff2 body=29 status=ok
// SIG undefined FUN_143624ff2(void)

void FUN_143624ff2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143625010 FUN_143625010 body=29 status=ok
// SIG undefined FUN_143625010(void)

undefined8 FUN_143625010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14362502e FUN_14362502e body=281 status=ok
// SIG undefined FUN_14362502e(void)

undefined8 FUN_14362502e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  undefined4 local_11c;
  float local_118;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = (longlong *)*param_2;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  local_160 = param_1[7];
  local_170 = *(undefined4 *)(param_1 + 5);
  uStack_16c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_168 = *(undefined4 *)(param_1 + 6);
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_178 = *(undefined4 *)(param_1 + 4);
  local_188 = param_1[3];
  local_180 = *param_1;
  puVar2 = (undefined8 *)param_1[2];
  local_138 = *puVar2;
  uStack_130 = puVar2[1];
  local_128 = puVar2[2];
  puVar3 = (undefined4 *)param_1[1];
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = *(undefined8 *)(puVar3 + 4);
  cVar4 = (**(code **)(*plVar1 + 0x980))(plVar1,local_120);
  if ((cVar4 != '\0') && (local_118 < *(float *)(param_1[9] + 8))) {
    *(undefined1 *)param_1[8] = 1;
    memcpy((void *)param_1[9],local_120,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625148 FUN_143625148 body=71 status=ok
// SIG undefined FUN_143625148(void)

void FUN_143625148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aa1e190;
  lVar2 = 10;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143625196 FUN_143625196 body=29 status=ok
// SIG undefined FUN_143625196(void)

void FUN_143625196(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436251b4 FUN_1436251b4 body=29 status=ok
// SIG undefined FUN_1436251b4(void)

undefined8 FUN_1436251b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436251d2 FUN_1436251d2 body=323 status=ok
// SIG undefined FUN_1436251d2(void)

undefined8 FUN_1436251d2(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  double *pdVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2 = (longlong *)*param_2;
  pdVar2 = (double *)*param_1;
  dVar7 = pdVar2[6] + (double)param_2[0x32] + 9.999999747378752e-05;
  dVar6 = 0.0;
  if (0.0 <= dVar7) {
    dVar6 = dVar7;
  }
  if ((pdVar2[2] - (double)param_2[0x2e]) * (pdVar2[2] - (double)param_2[0x2e]) +
      (*pdVar2 - (double)param_2[0x2c]) * (*pdVar2 - (double)param_2[0x2c]) +
      (pdVar2[1] - (double)param_2[0x2d]) * (pdVar2[1] - (double)param_2[0x2d]) <= dVar6 * dVar6) {
    local_48 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_50 = param_1[7];
    local_60 = param_1[5];
    uStack_58 = param_1[6];
    local_68 = *(undefined4 *)(param_1 + 4);
    cVar5 = (**(code **)(*param_2 + 0x9a8))(param_2,param_1[2],param_1[3],param_1[1]);
    uVar4 = uStack_30;
    if (cVar5 != '\0') {
      *(undefined1 *)param_1[8] = 1;
      if ((uint)uStack_30 != 0) {
        plVar3 = (longlong *)param_1[9];
        iVar1 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar1 + (uint)uStack_30;
        if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < (uint)uStack_30) {
          FUN_1414fa4c8(plVar3,iVar1);
        }
        FUN_144a80303((longlong)iVar1 * 0x48 + *plVar3,local_38,uVar4 & 0xffffffff);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625316 FUN_143625316 body=71 status=ok
// SIG undefined FUN_143625316(void)

void FUN_143625316(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aa1e1b0;
  lVar2 = 10;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143625364 FUN_143625364 body=29 status=ok
// SIG undefined FUN_143625364(void)

void FUN_143625364(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143625382 FUN_143625382 body=29 status=ok
// SIG undefined FUN_143625382(void)

undefined8 FUN_143625382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436253a0 FUN_1436253a0 body=371 status=ok
// SIG undefined FUN_1436253a0(void)

undefined8 FUN_1436253a0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined4 *local_e8;
  undefined8 *local_e0;
  int *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_3 != 0) && (puVar1 = *(undefined8 **)(*param_3 + 0x10), puVar1 != (undefined8 *)0x0))
  {
    lVar2 = *param_1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    uVar7 = DAT_14cad0ec4;
    UNLOCK();
    local_d0 = (int *)(puVar1 + 1);
    lVar3 = param_1[5];
    lVar4 = param_1[4];
    puVar5 = (undefined4 *)param_1[2];
    puVar6 = (undefined8 *)param_1[3];
    lVar9 = *(longlong *)(lVar2 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(lVar2);
    }
    local_60 = *(undefined8 *)(lVar2 + 0x868);
    local_e0 = &local_60;
    local_c8 = *puVar6;
    uStack_c0 = puVar6[1];
    local_b8 = puVar6[2];
    uStack_b0 = puVar6[3];
    local_a8 = *puVar5;
    uStack_a4 = puVar5[1];
    uStack_a0 = (undefined4)*(undefined8 *)(puVar5 + 2);
    uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(puVar5 + 2) >> 0x20);
    local_98 = *(undefined8 *)(puVar5 + 4);
    uStack_90 = 0;
    local_88 = 0x3ff0000000000000;
    uStack_80 = 0x3ff0000000000000;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0;
    local_e8 = &DAT_14cad0f08;
    local_f0 = &DAT_14cad0f10;
    local_100 = uVar7;
    local_108 = lVar4;
    local_f8 = lVar3;
    local_58 = puVar1;
    local_50 = puVar6;
    bVar8 = FUN_1479b375d(lVar9,puVar1);
    *(byte *)param_1[1] = *(byte *)param_1[1] | bVar8;
    LOCK();
    *local_d0 = *local_d0 + -1;
    UNLOCK();
    if ((*local_d0 == 0) && (*(int *)((longlong)puVar1 + 0xc) == 0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625514 FUN_143625514 body=304 status=ok
// SIG undefined FUN_143625514(void)

undefined8 FUN_143625514(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  double *pdVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  pdVar2 = (double *)*param_1;
  dVar7 = pdVar2[6] + (double)param_2[0x32] + 9.999999747378752e-05;
  dVar6 = 0.0;
  if (0.0 <= dVar7) {
    dVar6 = dVar7;
  }
  if ((pdVar2[2] - (double)param_2[0x2e]) * (pdVar2[2] - (double)param_2[0x2e]) +
      (*pdVar2 - (double)param_2[0x2c]) * (*pdVar2 - (double)param_2[0x2c]) +
      (pdVar2[1] - (double)param_2[0x2d]) * (pdVar2[1] - (double)param_2[0x2d]) <= dVar6 * dVar6) {
    local_40 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = param_1[4];
    cVar5 = (**(code **)(*param_2 + 0x998))(param_2,param_1[1],param_1[2],param_1[3]);
    uVar4 = uStack_30;
    if (cVar5 != '\0') {
      *(undefined1 *)param_1[5] = 1;
      if ((uint)uStack_30 != 0) {
        plVar3 = (longlong *)param_1[6];
        iVar1 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar1 + (uint)uStack_30;
        if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < (uint)uStack_30) {
          FUN_1414fa4c8(plVar3,iVar1);
        }
        FUN_144a80303((longlong)iVar1 * 0x48 + *plVar3,local_38,uVar4 & 0xffffffff);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625646 FUN_143625646 body=86 status=ok
// SIG undefined FUN_143625646(void)

undefined8 * FUN_143625646(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14aa1e1d0;
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



// FUNCTION 1436256a2 FUN_1436256a2 body=29 status=ok
// SIG undefined FUN_1436256a2(void)

void FUN_1436256a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436256c0 FUN_1436256c0 body=29 status=ok
// SIG undefined FUN_1436256c0(void)

undefined8 FUN_1436256c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436256de FUN_1436256de body=297 status=ok
// SIG undefined FUN_1436256de(void)

undefined8 FUN_1436256de(undefined4 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 4);
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar7 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[8];
      }
      iVar4 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar6[9] - 1U & *(uint *)((longlong)param_2 + 0xc)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*plVar6 + (longlong)iVar4 * 0xc) == *(uint *)((longlong)param_2 + 0xc))
          goto LAB_1436257e8;
          iVar4 = *(int *)(*plVar6 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
    if ((param_2[0x15] != 0) &&
       (plVar6 = *(longlong **)(param_1 + 2), (int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)))
    {
      uVar1 = *(uint *)(param_2[0x15] + 0xc);
      plVar7 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[8];
      }
      iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar6[9] - 1U & uVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*plVar6 + (longlong)iVar4 * 0xc) == uVar1) goto LAB_1436257e8;
          iVar4 = *(int *)(*plVar6 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (**(code **)(*param_2 + 0x578))(param_2,*param_1);
    if (iVar4 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 6);
      pcVar3 = (code *)*puVar2;
      plVar6 = puVar2 + 4;
      if ((longlong *)puVar2[2] != (longlong *)0x0) {
        plVar6 = (longlong *)puVar2[2];
      }
      local_20 = param_2;
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,&local_20);
    }
  }
LAB_1436257e8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625808 FUN_143625808 body=70 status=ok
// SIG undefined FUN_143625808(void)

undefined8 * FUN_143625808(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aa1e1f0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143625854 FUN_143625854 body=29 status=ok
// SIG undefined FUN_143625854(void)

void FUN_143625854(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143625872 FUN_143625872 body=29 status=ok
// SIG undefined FUN_143625872(void)

undefined8 FUN_143625872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143625890 FUN_143625890 body=50 status=ok
// SIG undefined FUN_143625890(void)

undefined8 FUN_143625890(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    bVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0x60))(lVar1 + 0x2a8,param_1[1]);
    *(byte *)*param_1 = *(byte *)*param_1 | bVar2;
  }
  return 1;
}



// FUNCTION 1436258e0 FUN_1436258e0 body=12 status=ok
// SIG undefined FUN_1436258e0(void)

void FUN_1436258e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436258e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436258ec FUN_1436258ec body=29 status=ok
// SIG undefined FUN_1436258ec(void)

undefined8 FUN_1436258ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14362593a FUN_14362593a body=64 status=ok
// SIG undefined FUN_14362593a(void)

void FUN_14362593a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_140b269ea(lVar1 + 0x15c,param_2,*(undefined4 *)(lVar1 + 0x114));
  FUN_140b26976(lVar1 + 0x17c,param_2,*(undefined4 *)(lVar1 + 0x114));
  return;
}



// FUNCTION 143625a2e FUN_143625a2e body=165 status=ok
// SIG undefined FUN_143625a2e(void)

void FUN_143625a2e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_3;
  uVar2 = *param_2;
  uVar3 = *param_1;
  local_50 = 0;
  local_48 = 0;
  FUN_140146ccc(&local_50,param_1[3]);
  local_60 = 0;
  local_58 = 0;
  FUN_140146ccc(&local_60,param_1[2]);
  local_78 = &local_60;
  local_70 = &local_50;
  FUN_140b25d1c(uVar3,uVar2,uVar1,*(undefined4 *)param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625ae0 FUN_143625ae0 body=66 status=ok
// SIG undefined FUN_143625ae0(void)

void FUN_143625ae0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x110) & 1) == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x60);
  }
  FUN_140b267ac(lVar1 + 0x118,lVar1 + 8,*(undefined4 *)(lVar1 + 0x114),uVar2,0);
  return;
}



// FUNCTION 143625b38 FUN_143625b38 body=174 status=ok
// SIG undefined FUN_143625b38(void)

void FUN_143625b38(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_2;
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) && (*(int *)(lVar2 + 8) == 1)) {
    if (*(int *)*param_1 == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x40);
      goto LAB_143625b8f;
    }
    if (*(int *)*param_1 == 1) {
      puVar3 = (undefined8 *)(lVar2 + 0xa0);
      goto LAB_143625b8f;
    }
  }
  puVar3 = &DAT_14c846480;
LAB_143625b8f:
  puVar4 = local_78;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)param_1[1];
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  local_48 = *(undefined8 *)(puVar1 + 4);
  uStack_40 = 0;
  FUN_146ef2d18(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625be8 FUN_143625be8 body=305 status=ok
// SIG undefined FUN_143625be8(void)

void FUN_143625be8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [96];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = (undefined8 *)param_1[2];
  pdVar2 = (double *)*param_1;
  pdVar3 = (double *)param_1[1];
  local_98 = *pdVar3;
  local_90 = pdVar3[1];
  local_b8 = *pdVar2;
  local_b0 = pdVar2[1];
  local_a8 = pdVar2[2];
  local_88 = pdVar3[2];
  local_a0 = 0;
  local_68 = local_b8 * local_90 - local_98 * local_b0;
  local_70 = local_a8 * local_98 - local_88 * local_b8;
  local_78 = local_b0 * local_88 - local_90 * local_a8;
  local_80 = 0;
  local_60 = 0;
  local_58 = *puVar1;
  local_50 = puVar1[1];
  local_48 = puVar1[2];
  local_40 = 0x3ff0000000000000;
  FUN_1448ac920(local_118);
  FUN_146ef2d18(param_2,local_118,*(undefined4 *)param_1[3]);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143625e0c FUN_143625e0c body=97 status=ok
// SIG undefined FUN_143625e0c(void)

void FUN_143625e0c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)param_1[1];
    uVar5 = *(undefined4 *)param_1[2];
    uVar2 = *(undefined4 *)param_1[3];
    uVar3 = *(undefined4 *)param_1[4];
  }
  else {
    uVar4 = 0;
    uVar2 = 0xbf800000;
    uVar5 = 0;
    uVar3 = 0xbf800000;
  }
  FUN_140b279e2(param_2,CONCAT71((int7)((ulonglong)*param_1 >> 8),cVar1),uVar4,uVar5,uVar2,uVar3);
  return;
}



// FUNCTION 143625e90 FUN_143625e90 body=4020 status=ok
// SIG undefined FUN_143625e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143625e90(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined **ppuStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_a8,&DAT_14caf606c);
  if (cVar3 == '\0') {
    _DAT_14caf606c = 0;
    uRam000000014caf6074 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = FUN_145fa0c36;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf6118,&local_a8);
  DAT_14caf6f30 = 0xffffffff;
  _DAT_14caf6f34 = 0x105;
  DAT_14caf6f36 = 0;
  DAT_14caf6f38 = 0;
  _DAT_14caf6f28 = &PTR_FUN_14aa1d8e0;
  FUN_1463f4a04(&DAT_14caf6f28);
  atexit(FUN_1436021d0);
  _DAT_14caf6130 = 0xffffffff;
  _DAT_14caf6134 = 0x105;
  DAT_14caf6136 = 0;
  _DAT_14caf6138 = 0;
  DAT_14caf6140 = 0;
  DAT_14caf6128 = &PTR_FUN_14aa1d960;
  FUN_1463f4a42();
  atexit(FUN_1436022c0);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14361a0fc;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf61b0,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14361a116;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf6220,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14361a130;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf6290,6,&local_a8);
  _DAT_14caf62a0 = 0xffffffff;
  _DAT_14caf62a4 = 0x105;
  DAT_14caf62a6 = 0;
  DAT_14caf62a8 = 0;
  _DAT_14caf62b0 = 1;
  _DAT_14caf6298 = &PTR_FUN_14aa1da00;
  FUN_1463f4b0e(&DAT_14caf6298);
  atexit(FUN_1436022ef);
  _DAT_14caf62c0 = 0xffffffff;
  _DAT_14caf62c4 = 0x105;
  DAT_14caf62c6 = 0;
  DAT_14caf62c8 = 0;
  _DAT_14caf62d0 = 0x101;
  _DAT_14caf62b8 = &PTR_FUN_14aa1da00;
  FUN_1463f4b0e(&DAT_14caf62b8);
  atexit(FUN_14360231e);
  local_b8 = &LAB_14360234e;
  local_c0 = &LAB_14360235a;
  local_c8 = &LAB_14360236b;
  ppuStack_d0 = (undefined **)FUN_1436023a0;
  local_d8 = FUN_1436023d3;
  FUN_141585c60(&DAT_14caf6f40,L"FParticleSpriteVertexFactory",
                L"/Engine/Private/ParticleSpriteVertexFactory.ush",0x200a);
  atexit((_func_5014 *)&LAB_14360240d);
  local_c8 = (undefined1 *)0x1;
  ppuStack_d0 = &PTR_FUN_14aa08240;
  local_d8 = (code *)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa08260);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf6338,L"FX.ParticleSystemPool.KillUnusedTime",&DAT_14c761700,
                L"How long a pooled particle component needs to be unused for before it is destroyed."
               );
  atexit(FUN_143602863);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf6348,L"FX.ParticleSystemPool.Enable",&DAT_14c761704,
                L"How many Particle System Components to preallocate when creating new ones for the pool."
               );
  atexit(FUN_1436028a8);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf6358,L"FX.ParticleSystemPool.CleanTime",&DAT_14c761708,
                L"How often should the pool be cleaned (in seconds).");
  atexit(FUN_1436028ed);
  local_a8 = (code *)0x0;
  local_a0 = (code *)((ulonglong)local_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)(local_a8 + 0x10) = lVar9;
  *(undefined ***)local_a8 = &PTR_FUN_14a1e19d0;
  *(undefined **)(local_a8 + 0x18) = &DAT_147c44fc1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14caf6368,L"fx.DumpPSCPoolInfo",L"Dump Particle System Pooling Info",&local_a8)
  ;
  if ((int)local_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_1436262d3;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0._0_4_ = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1436262d3:
  atexit(FUN_1436033aa);
  local_a8 = (code *)&DAT_14a19662d;
  local_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14caf6468,L"ReceiveControllerChanged",1);
  FUN_1446f470e(&DAT_14caf6478,L"ReceivePossessed",1);
  FUN_1446f470e(&DAT_14caf6488,L"ReceiveRestarted",1);
  FUN_1446f470e(&DAT_14caf6498,L"ReceiveUnpossessed",1);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa0b0d0,1,0);
  DAT_14caf6fc8 = 0;
  _DAT_14caf6fd0 = 0;
  _DAT_14caf6fd8 = 2;
  atexit(FUN_14360363e);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa0b560,1,0);
  local_a8._0_4_ = 0x42480000;
  local_d8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14caf6540,L"t.UnacceptableFrameTimeThreshold",&local_a8,
                L"The frame time theshold for what is considered completely unacceptable (in ms); values above this will be drawn as red\n default: 50.0 ms"
               );
  atexit(FUN_14360512d);
  local_a8._0_4_ = 0x4207999a;
  local_d8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14caf6558,L"t.TargetFrameTimeThreshold",&local_a8,
                L"The target frame time (in ms); values below this will be drawn in green, values above will be yellow or red depending on the severity\n default: 33.9 ms"
               );
  atexit(FUN_143605172);
  local_d8._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14caf6570,L"t.HitchFrameTimeThreshold",&DAT_14c75b138,
                L"Definition of a hitchy frame (in ms)\n default: 60.0 ms");
  atexit(FUN_1436051b7);
  local_a8._0_4_ = 0x43480000;
  local_d8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14caf6580,L"t.HitchDeadTimeWindow",&local_a8,
                L"Minimum time passed before we\'ll record a new hitch (in ms)\n default: 200.0 ms")
  ;
  atexit(FUN_1436051fc);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3fc00000);
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0x40);
  FUN_140a6b41e(&DAT_14caf6598,L"t.HitchVersusNonHitchRatio",&local_a8,
                L"For the current frame to be considered a hitch, it must have run at least this many times slower than the previous frame.\nThe actual ratio is clamped to be between this and t.HitchFrameTimeThreshold/t.TargetFrameTimeThreshold\n default: 1.5"
               );
  atexit(FUN_143605241);
  local_c8 = (undefined1 *)0x1;
  ppuStack_d0 = &PTR_FUN_14aa0c230;
  local_d8 = (code *)0x2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa0c250);
  local_a8 = (code *)&DAT_149e3cb9d;
  local_a0._0_5_ = 3;
  uVar5 = FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x149dfd13f;
  local_a0._0_5_ = 6;
  uVar6 = FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)&DAT_149e3cba1;
  local_a0._0_5_ = 4;
  uVar7 = FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)&DAT_14aa0c2a0;
  local_a0._0_5_ = 4;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  local_a8 = (code *)0x14aa0c2a5;
  local_a0 = (code *)CONCAT35(local_a0._5_3_,9);
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14caf65f8 = (ulonglong *)0x0;
  _DAT_14caf6600 = 5;
  FUN_1401b309e(&DAT_14caf65f8,5,0);
  puVar1 = DAT_14caf65f8;
  *DAT_14caf65f8 = uVar5 & 0xffffffff;
  puVar1[1] = uVar6 & 0xffffffff;
  puVar1[2] = uVar7 & 0xffffffff;
  puVar1[3] = uVar8 & 0xffffffff;
  puVar1[4] = (ulonglong)uVar4;
  atexit((_func_5014 *)&LAB_1436052c9);
  FUN_140056680(&DAT_14caf6608,L"QualityLevelMapping");
  atexit((_func_5014 *)&LAB_1436052da);
  FUN_1446f470e(&DAT_14caf6628,L"ServerRPCBufferInput",1);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa0ccb0,1,0);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf6650,L"p.net.ForceInputDrop",&DAT_14caf6660,
                L"Forces client to drop inputs. Useful for simulating desync");
  atexit(FUN_1436052eb);
  local_c8 = (undefined1 *)0x1;
  ppuStack_d0 = &PTR_FUN_14aa0e160;
  local_d8 = (code *)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa0e180);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 4;
  FUN_14078dbce(&DAT_14caf66c8,L"p.EnableDynamicPerBodyFilterHacks",&local_a8,
                L"Enables/Disables the use of a set of game focused hacks - allowing users to modify skel body collision dynamically (changes the behavior of per-body collision filtering)."
               );
  atexit(FUN_1436054d0);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 4;
  FUN_14078dbce(&DAT_14caf66e0,L"p.IgnoreAnalyticCollisionsOverride",&local_a8,
                L"Overrides the default for ignroing analytic collsions.");
  atexit(FUN_143605515);
  local_d8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf66f8,L"p.PreventInvalidBodyInstanceTransforms",&DAT_14c76170c,
                L"If true, an attempt to create a BodyInstance with an invalid transform will fail with a warning"
               );
  atexit(FUN_14360555a);
  local_d8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf6708,L"p.EnableOverrideSolverDeltaTime",&DAT_14c76170d,
                L"If true, setting for override solver delta time can be used.  False will disable this feature."
               );
  atexit(FUN_14360559f);
  local_d8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf6720,L"p.SkipShapeCreationForEmptyBodySetup",&DAT_14caf6718,
                L"If true, CreateShapesAndActors will not try to create actors and shapes for all instances if the body setup doesn\'t have any geometry."
               );
  atexit(FUN_1436055e4);
  local_d8._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf6730,L"p.SensitiveSleepThresholdMultiplier",&DAT_14c761710,
                L"The sleep threshold multiplier to use for bodies using the Sensitive sleep family."
               );
  atexit(FUN_143605629);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caf6740,L"p.DisableQueryOnlyActors",&local_a8,
                L"If QueryOnly is used, actors are marked as simulation disabled. This is NOT compatible with origin shifting at the moment."
               );
  atexit(FUN_14360566e);
  local_a8._0_4_ = 1;
  local_d8._0_4_ = 4;
  FUN_14078dbce(&DAT_14caf6758,L"p.chaos.AllowCreatePhysxBodies",&local_a8,
                L" 0 is off, 1 is on (default)");
  atexit(FUN_1436057d2);
  local_d8._0_4_ = 0;
  FUN_141471170(&DAT_14caf6778,L"p.EnsureUnweldModifiesGTOnly",&DAT_14caf6770,
                L"Ensure if unweld modifies geometry shared with physics thread");
  atexit(FUN_143605c96);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_141471170(&DAT_14caf6788,L"p.SimCollisionEnabled",&DAT_14c761714,
                L"If 0 no sim collision will be used");
  atexit(FUN_1436066be);
  DAT_14caf6fb0 = 0;
  _DAT_14caf6fb8 = 0;
  _DAT_14caf6fc0 = 2;
  atexit(FUN_143606703);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa0ee80,1,0);
  local_a8._0_4_ = 0xbf800000;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14caf67b0,L"p.ContactOffsetFactor",&local_a8,
                L"Multiplied by min dimension of object to calculate how close objects get before generating contacts. < 0 implies use project settings. Default: 0.01"
               );
  atexit(FUN_143606b66);
  local_a8._0_4_ = 0xbf800000;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14caf67c8,L"p.MaxContactOffset",&local_a8,
                L"Max value of contact offset, which controls how close objects get before generating contacts. < 0 implies use project settings. Default: 1.0"
               );
  atexit(FUN_143606bab);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf67f0,L"p.ComNudgeAffectsInertia",&DAT_14c761718);
  atexit(FUN_143607be7);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa0fc50,1,0);
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa12520,1,&PTR_FUN_14aa12430);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf6958,L"ClusterUnion.UseAccelerationStructure",&DAT_14c761719,
                L"Whether component level sweeps and overlaps against cluster unions should use an acceleration structure instead."
               );
  atexit(FUN_1436085dd);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf6968,L"ClusterUnion.UseLocalRoleForAuthorityCheck",&DAT_14c76171a,
                L"If true, we will only check this component\'s owner local role to determine authority"
               );
  atexit(FUN_143608622);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf6978,L"ClusterUnion.PreAllocateLocalBoneDataMap",&DAT_14c76171b,
                L"If true, it will reserve an expected size for the local map used to cache updated bone data"
               );
  atexit(FUN_143608667);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf6988,L"ClusterUnion.LocalBoneDataMapGrowFactor",&DAT_14c76171c,
                L"Grow factor to apply to the size of bone data array of pre-existing component when preallocating the local bones data map"
               );
  atexit(FUN_1436086ac);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf6998,L"ClusterUnion.ApplyReplicatedRigidStateOnCreatePhysicsState",
                &DAT_14c761720,
                L"When physics state is created, apply replicated rigid state. Useful because sometimes the initial OnRep will have been called before a proxy exists, so initial properties will be unset"
               );
  atexit(FUN_1436086f1);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf69a8,L"ClusterUnion.DirtyRigidStateOnlyIfChanged",&DAT_14caf69b8,
                L"Add a check for changed rigid state before marking it dirty and updating the replicated data. No need to flush an update if there was no change."
               );
  atexit(FUN_143608736);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf69c0,L"ClusterUnion.FlushNetDormancyOnSyncProxy",&DAT_14c761721,
                L"When there is a new rigid state on the authority, flush net dormancy so that even if this object is net dorman the rigid state will come through to the client."
               );
  atexit(FUN_14360877b);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf69d0,L"ClusterUnion.SkipZeroStateInOnRep",&DAT_14c761722,
                L"Whether we skip 0 (uninitialized) states when running the onrep for the replicated rigid state of the cluster union"
               );
  atexit(FUN_1436087c0);
  local_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa143b0,1,0);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf6a90,L"p.Chaos.CU.UseFlushNetDormancy",&DAT_14c761723,
                L"When true it will flush the net dormancy of the owner the next frame instead of awaking the actor"
               );
  atexit(FUN_14360b1f3);
  local_c8 = (undefined1 *)0x1;
  ppuStack_d0 = &PTR_FUN_14aa14cb0;
  local_d8 = (code *)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa14cd0);
  local_c8 = (undefined1 *)0x1;
  ppuStack_d0 = &PTR_FUN_14aa15c70;
  local_d8 = (code *)0x4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa15c90);
  local_a8._0_4_ = 0x3f800000;
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf6b78,L"p.ConstraintLinearDampingScale",&local_a8,
                L"The multiplier of constraint linear damping in simulation. Default: 1");
  atexit(FUN_14360b645);
  local_a8._0_4_ = 0x3f800000;
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf6b90,L"p.ConstraintLinearStiffnessScale",&local_a8,
                L"The multiplier of constraint linear stiffness in simulation. Default: 1");
  atexit(FUN_14360b68a);
  local_a8._0_4_ = 0x47c35000;
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf6ba8,L"p.ConstraintAngularDampingScale",&local_a8,
                L"The multiplier of constraint angular damping in simulation. Default: 100000");
  atexit(FUN_14360b6cf);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x47c35000);
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf6bc0,L"p.ConstraintAngularStiffnessScale",&local_a8,
                L"The multiplier of constraint angular stiffness in simulation. Default: 100000");
  atexit(FUN_14360b714);
  local_d8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf6bd8,L"p.EnableSkeletalMeshConstraints",&DAT_14c761724,
                L"Enable skeletal mesh constraints defined within the Physics Asset Editor");
  atexit(FUN_14360b759);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_14153156c(&DAT_14caf6be8,L"p.AllowKinematicKinematicConstraints",&DAT_14c761725,
                L"Do not create constraints between two rigid kinematics.");
  atexit(FUN_14360b79e);
  local_c8 = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa1b520,1,0);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143626e48 FUN_143626e48 body=69 status=ok
// SIG undefined FUN_143626e48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143626e48(void)

{
  _DAT_14caf7040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143626e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7048,1);
  return;
}



// FUNCTION 143626e8e FUN_143626e8e body=361 status=ok
// SIG undefined FUN_143626e8e(void)

void FUN_143626e8e(longlong *param_1,longlong *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    plVar7 = plVar8 + (longlong)(int)param_2[1] * 2;
    do {
      uVar3 = *(uint *)(plVar8 + 1);
      uVar9 = (ulonglong)uVar3;
      if (uVar9 != 0) {
        local_78[0] = 0;
        local_78[1] = 0;
        FUN_146e7fd58(local_78,uVar9,1);
        if (0 < (int)uVar3) {
          lVar6 = 0;
          do {
            lVar5 = *plVar8;
            dVar10 = *(double *)(lVar5 + lVar6 * 2);
            if (param_3 != '\0') {
              dVar10 = -dVar10;
            }
            dVar1 = *(double *)(lVar5 + 0x10 + lVar6 * 2);
            dVar2 = *(double *)(lVar5 + 8 + lVar6 * 2);
            *(float *)(local_78[0] + lVar6) = (float)dVar10;
            *(float *)(local_78[0] + 4 + lVar6) = (float)dVar2;
            *(float *)(local_78[0] + 8 + lVar6) = (float)dVar1;
            lVar6 = lVar6 + 0xc;
          } while (uVar9 * 0xc != lVar6);
        }
        lVar6 = FUN_14001cc68(0xb0,0x10);
        FUN_146d83314(lVar6,local_78,0,0);
        iVar4 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_140619960(param_1,iVar4);
        }
        *(longlong *)(*param_1 + (longlong)iVar4 * 8) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143626ff8 FUN_143626ff8 body=171 status=ok
// SIG undefined FUN_143626ff8(void)

void FUN_143626ff8(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140752078();
  local_28 = 1;
  FUN_142c039ac(&local_20,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if ((int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14362707f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_14362707f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436270a4 FUN_1436270a4 body=914 status=ok
// SIG undefined FUN_1436270a4(void)

void * FUN_1436270a4(void *param_1,longlong param_2)

{
  int *piVar1;
  uint5 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1d8 [44];
  int local_1ac;
  undefined **local_1a8;
  ulonglong *local_1a0;
  byte local_17e;
  undefined8 local_120;
  undefined ***local_118;
  longlong local_110;
  undefined **local_108 [5];
  byte local_e0;
  byte local_df;
  longlong *local_b0;
  longlong local_90;
  char local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  memset(param_1,0,0x81);
  uVar3 = FUN_14031511a(param_2);
  uVar2 = *(uint5 *)(param_2 + 8);
  FUN_144869430(local_108);
  local_108[0] = &PTR__purecall_149e30ac0;
  local_70 = 0;
  local_60 = '\0';
  local_e0 = local_e0 | 1;
  local_78 = uVar3;
  local_68 = (ulonglong)uVar2;
  FUN_1449c2eca(local_108,0);
  local_108[0] = &PTR_FUN_149e447c0;
  FUN_1407134c4(&local_1a8,local_108);
  local_120 = local_80;
  local_1a8 = &PTR_FUN_149f52ef0;
  local_118 = local_108;
  local_80 = &local_1a8;
  lVar4 = FUN_14001cc68(0x158,0x10);
  FUN_140dffb3a(lVar4);
  local_1ac = -1;
  piVar1 = (int *)*local_1a0 + 1;
  local_110 = lVar4;
  if ((int *)local_1a0[1] < piVar1) {
    if ((local_17e & 2) == 0) {
      (*(code *)local_1a8[0x2e])(&local_1a8,&local_1ac,4);
    }
    else {
      FUN_14572512c(&local_1a8,&local_1ac);
    }
  }
  else {
    local_1ac = *(int *)*local_1a0;
    *local_1a0 = (ulonglong)piVar1;
  }
  if ((local_e0 & 1) == 0) {
    if ((code *)local_108[0][0xb] == FUN_1447a7ed6) {
      if (local_b0 == (longlong *)0x0) {
        local_b0 = (longlong *)FUN_14001cc68(0x10,0x10);
        *local_b0 = 0;
        local_b0[1] = 0;
      }
      plVar5 = local_b0;
      if (local_88 == '\x01') {
        local_88 = '\0';
        *(undefined4 *)(local_b0 + 1) = 0;
        if (*(int *)((longlong)local_b0 + 0xc) != 0) {
          FUN_1401255f0(local_b0,0);
          plVar5 = local_b0;
        }
      }
    }
    else {
      plVar5 = (longlong *)(*(code *)local_108[0][0xb])(local_108);
    }
    local_58 = 0x8dbc2c5b;
    uStack_54 = 0x54a743e0;
    uStack_50 = 0xa768fcbb;
    uStack_4c = 0x7da29060;
    FUN_14486d2bc(plVar5,&local_58,
                  (uint)CONCAT71((int7)((ulonglong)&local_1a8 >> 8),local_df >> 5) & 0xffffff01);
  }
  if (local_1ac == 4) {
    FUN_140049436(&local_1a8,(longlong)param_1 + 0x20);
    uVar3 = FUN_140625cef(&local_1a8,(longlong)param_1 + 0x30);
    FUN_1403b0476(uVar3,(longlong)param_1 + 0x40);
    FUN_1436364e8(uVar3,(longlong)param_1 + 0x50);
    FUN_1417e7c60(uVar3,(longlong)param_1 + 0x60);
    FUN_1403b0476(uVar3,(longlong)param_1 + 0x70);
    *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  }
  *(undefined1 *)(param_2 + 0x13) = 0;
  if ((*(byte *)(param_2 + 0x14) & 8) != 0) {
    FUN_1400ea36e(param_2,param_2);
  }
  lVar4 = local_110;
  local_1a8 = &PTR_FUN_149f52ef0;
  if (local_110 != 0) {
    FUN_14041e184(local_110);
    FUN_1400020a8(lVar4);
  }
  FUN_14041e0ea(&local_1a8);
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
    local_78 = 0;
  }
  plVar5 = local_b0;
  local_108[0] = &PTR__purecall_149e35f70;
  if (local_b0 != (longlong *)0x0) {
    if (*local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar5);
  }
  if (local_90 != 0) {
    if (*(longlong *)(local_90 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143627438 FUN_143627438 body=141 status=ok
// SIG undefined FUN_143627438(void)

void FUN_143627438(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  param_1[2] = uVar5;
  param_1[6] = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  param_1[4] = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[7] = *(undefined8 *)(param_2 + 0x40);
  param_1[8] = uVar5;
  param_1[9] = *(undefined8 *)(param_2 + 0x50);
  dVar1 = *(double *)(param_2 + 0x88);
  dVar2 = *(double *)(param_2 + 0x70);
  dVar3 = *(double *)(param_2 + 0x80);
  dVar4 = *(double *)(param_2 + 0x68);
  param_1[10] = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  param_1[0xb] = dVar3 - dVar4;
  param_1[0xc] = dVar1 - dVar2;
  *(float *)(param_1 + 0xd) = (float)*(double *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x94);
  return;
}



// FUNCTION 1436274c5 FUN_1436274c5 body=69 status=ok
// SIG undefined FUN_1436274c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436274c5(void)

{
  _DAT_14caf70c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143627507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf70d0,1);
  return;
}



// FUNCTION 14362750a FUN_14362750a body=69 status=ok
// SIG undefined FUN_14362750a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362750a(void)

{
  _DAT_14caf70d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf70e0,1);
  return;
}



// FUNCTION 14362754f FUN_14362754f body=69 status=ok
// SIG undefined FUN_14362754f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362754f(void)

{
  _DAT_14caf70e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143627591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf70f0,1);
  return;
}



// FUNCTION 143627594 FUN_143627594 body=7162 status=ok
// SIG undefined FUN_143627594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143627594(wchar_t *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  undefined4 extraout_EAX;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  undefined8 **ppuVar30;
  int iVar31;
  longlong lVar32;
  longlong *plVar33;
  bool bVar34;
  bool bVar35;
  uint uVar36;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  float fVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  uint local_2d0;
  uint local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  code **local_2a0;
  undefined1 *local_298;
  code *local_290;
  char local_279;
  wchar_t *local_278;
  undefined8 local_270;
  double local_268;
  double dStack_260;
  code *local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 *local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 *local_1f0;
  code *local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  code *local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  double dStack_198;
  double dStack_190;
  float local_188;
  float local_184;
  float local_180;
  wchar_t *local_170;
  uint *local_168;
  uint local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  code *local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  uVar26 = *(uint *)(param_1 + 0x1c);
  pwVar23 = param_1;
  if (uVar26 == 0) {
    local_15c = uVar26;
    if (DAT_14caf84d0 == (wchar_t *)0x0) {
      local_2a0 = &local_1e8;
      local_1e8 = FUN_1449e2820;
      local_290 = FUN_14081d0ea;
      local_298 = &LAB_145a62952;
      local_2a8 = &LAB_147c8cd45;
      local_2b0 = &LAB_1461468ae;
      local_2b8 = L"Engine";
      local_2c0 = 0;
      local_2c8 = 0x10000006;
      local_2d0 = 8;
      local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x218);
      pwVar23 = L"/Script/Engine";
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    pwVar2 = DAT_14caf84d0;
    lVar32 = *(longlong *)(DAT_14caf84d0 + 0x88);
    if (lVar32 == 0) {
      pwVar23 = DAT_14caf84d0;
      (**(code **)(*(longlong *)DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar32 = *(longlong *)(pwVar2 + 0x88);
    }
    uVar26 = (uint)*(byte *)(lVar32 + 0x75);
  }
  local_15c = uVar26;
  lVar18 = FUN_140849a2e();
  fVar48 = DAT_14c761730;
  fVar54 = DAT_14c76172c;
  iVar21 = *(int *)(param_1 + 0xb0);
  lVar32 = *(longlong *)(param_1 + 0xa0);
  iVar31 = *(int *)(lVar32 + 0x18) + *(int *)(lVar32 + 8) + *(int *)(lVar32 + 0x28) +
           *(int *)(lVar32 + 0x48) + *(int *)(lVar32 + 0x38);
  bVar35 = uVar26 != 2;
  uVar24 = (undefined4)CONCAT71((int7)((ulonglong)pwVar23 >> 8),bVar35);
  bVar34 = iVar31 == 0 || bVar35;
  iVar28 = iVar31;
  if (iVar21 != 0 && uVar26 == 3) {
    iVar28 = 0;
  }
  iVar27 = 0;
  if (iVar31 == 0 || bVar35) {
    iVar27 = iVar21;
  }
  iVar31 = *(int *)(param_3 + 0x10) + iVar27 + iVar28;
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar31);
  }
  fVar52 = 0.0;
  if (0.0 <= *(float *)(lVar18 + 0x84)) {
    fVar52 = *(float *)(lVar18 + 0x84);
  }
  fVar53 = 0.0;
  if (0.0 <= *(float *)(lVar18 + 0x88)) {
    fVar53 = *(float *)(lVar18 + 0x88);
  }
  if (*(int *)(param_3 + 0x14) < iVar31) {
    lVar18 = param_3;
    FUN_1403245fa();
    uVar24 = (undefined4)lVar18;
  }
  uVar56 = (undefined4)lVar32;
  iVar28 = iVar27 + iVar28 + (int)param_2[1];
  local_279 = bVar34;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar28);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar28) {
    plVar33 = param_2;
    FUN_140836c88(param_2,iVar28);
    uVar24 = SUB84(plVar33,0);
  }
  puVar20 = &local_15c;
  local_278 = param_1;
  pcVar15 = local_258;
  local_170 = param_1;
  local_168 = puVar20;
  if (iVar21 == 0 || uVar26 != 3) {
    uVar26 = -(uint)(fVar54 < 0.0);
    uVar36 = -(uint)(fVar48 < 0.0);
    local_228 = ZEXT416(~uVar26 & (uint)fVar54 | (uint)fVar52 & uVar26);
    local_218 = ZEXT416(~uVar36 & (uint)fVar48 | (uint)fVar53 & uVar36);
    local_270 = param_1 + 0x20;
    puVar20 = *(uint **)(param_1 + 0xa0);
    if ((longlong)(int)puVar20[2] != 0) {
      lVar32 = *(longlong *)puVar20;
      lVar18 = (longlong)(int)puVar20[2] * 0x50 + lVar32;
      do {
        FUN_1417e5bd4(lVar32,&local_1e8,local_270,param_1 + 0x40);
        fVar54 = fStack_1a0;
        if (fStack_1a0 <= 0.0001) {
          fVar54 = 0.0001;
        }
        puVar19 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar19[1] = 0;
        *(undefined2 *)(puVar19 + 3) = 0x101;
        *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
        *(undefined2 *)((longlong)puVar19 + 0x1c) = 0;
        *puVar19 = &PTR_FUN_149f48e60;
        puVar19[4] = local_1b8;
        puVar19[5] = dStack_1b0;
        puVar19[6] = local_1a8;
        puVar19[2] = (double)fVar54;
        local_158._0_8_ = puVar19;
        if (puVar19 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
        }
        local_2d8 = (longlong *)(lVar32 + 0x20);
        *(undefined4 *)(lVar32 + 0x20) = 6;
        *(longlong *)(lVar32 + 0x28) = lVar32;
        local_2d0 = (uint)*(byte *)(lVar32 + 0x19);
        local_2c8 = local_2c8 & 0xffffff00;
        puVar29 = local_158;
        FUN_143629190(&local_170,&local_208,local_158,*(undefined4 *)(param_3 + 0x10));
        uVar56 = SUB84(puVar29,0);
        iVar21 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar21 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar21 + 1U) {
          FUN_14745abde(param_3,iVar21);
        }
        lVar37 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar37 = param_3;
        }
        *(undefined8 **)(lVar37 + (longlong)iVar21 * 8) = local_208;
        iVar21 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar21 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
          FUN_140619960(param_2,iVar21);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar21 * 8) = local_158._0_8_;
        lVar32 = lVar32 + 0x50;
      } while (lVar32 != lVar18);
      puVar20 = *(uint **)(local_278 + 0xa0);
    }
    if ((longlong)(int)puVar20[6] != 0) {
      lVar32 = *(longlong *)(puVar20 + 4);
      lVar18 = (longlong)(int)puVar20[6] * 0x70 + lVar32;
      pwVar23 = local_278 + 0x40;
      local_238 = (double)(float)local_228._0_4_;
      local_248 = (double)(float)local_218._0_4_;
      do {
        lVar37 = lVar32;
        FUN_140492472(lVar32,&local_1e8,local_270,pwVar23);
        uVar24 = (undefined4)lVar37;
        auVar51._4_4_ = uStack_19c;
        auVar51._0_4_ = fStack_1a0;
        auVar51._8_8_ = dStack_198;
        auVar47 = divpd(auVar51,_DAT_1499387d0);
        auVar50._8_8_ = 0;
        auVar50._0_8_ = dStack_190;
        auVar51 = divpd(auVar50,_DAT_1499387d0);
        auVar47 = roundpd(auVar47,auVar47,3);
        auVar51 = roundpd(auVar51,auVar51,3);
        dVar41 = ((double)CONCAT44(uStack_19c,fStack_1a0) - auVar47._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar42 = (dStack_198 - auVar47._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar44 = (dStack_190 - auVar51._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar55 = (0.0 - auVar51._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar38 = sin(dVar41);
        dVar39 = sin(dVar42);
        dVar40 = sin(dVar44);
        sin(dVar55);
        dVar41 = cos(dVar41);
        dVar42 = cos(dVar42);
        dVar43 = cos(dVar44);
        cos(dVar55);
        dVar44 = -(dVar42 * dVar38 * dVar40) + dVar39 * dVar41 * dVar43;
        dVar55 = dVar39 * dVar38 * dVar40 + dVar42 * dVar41 * dVar43;
        dVar46 = dVar38 * dVar39 * dVar43 - dVar41 * dVar42 * dVar40;
        dVar38 = -(dVar38 * dVar42 * dVar43) - dVar41 * dVar39 * dVar40;
        local_268 = local_1b8;
        dStack_260 = dStack_1b0;
        local_258 = local_1a8;
        dStack_250 = 0.0;
        dVar42 = (double)(local_184 * 0.5);
        auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar38 - DAT_14c8463d8));
        auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar46 - DAT_14c8463d0));
        uVar26 = movmskpd(extraout_EAX,auVar47);
        dVar41 = (double)(local_188 * 0.5);
        if (dVar41 <= 9.999999747378752e-05) {
          dVar41 = 9.999999747378752e-05;
        }
        if (dVar42 <= 9.999999747378752e-05) {
          dVar42 = 9.999999747378752e-05;
        }
        dVar39 = (double)(local_180 * 0.5);
        if ((double)(local_180 * 0.5) <= 9.999999747378752e-05) {
          dVar39 = 9.999999747378752e-05;
        }
        auVar6._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar55 - DAT_14c8463e8));
        auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar44 - DAT_14c8463e0));
        iVar21 = movmskpd(uVar24,auVar6);
        uVar24 = SUB84(dVar41,0);
        uVar56 = (undefined4)((ulonglong)dVar41 >> 0x20);
        if (dVar42 <= dVar41) {
          uVar24 = SUB84(dVar42,0);
          uVar56 = (undefined4)((ulonglong)dVar42 >> 0x20);
        }
        dVar40 = (double)CONCAT44(uVar56,uVar24);
        if (dVar39 <= (double)CONCAT44(uVar56,uVar24)) {
          dVar40 = dVar39;
        }
        dVar40 = (dVar40 + dVar40) * local_238;
        if (local_248 <= dVar40) {
          dVar40 = local_248;
        }
        local_208 = (undefined8 *)0x0;
        uVar36 = iVar21 << 2 | uVar26;
        if (uVar36 == 0) {
LAB_143627da8:
          dVar55 = (double)local_1a8 + dVar39;
          dVar46 = dStack_1b0 + dVar42;
          dVar44 = local_1b8 + dVar41;
          dVar39 = (double)local_1a8 - dVar39;
          dVar42 = dStack_1b0 - dVar42;
          dVar41 = local_1b8 - dVar41;
          puVar19 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar19[1] = 0;
          *(undefined2 *)(puVar19 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar19 + 0x1c) = 0x101;
          *puVar19 = &PTR_FUN_149f489d0;
          puVar19[4] = dVar41;
          puVar19[5] = dVar42;
          puVar19[6] = dVar39;
          puVar19[7] = dVar44;
          puVar19[8] = dVar46;
          puVar19[9] = dVar55;
          dVar55 = dVar55 - dVar39;
          dVar46 = dVar46 - dVar42;
          dVar44 = dVar44 - dVar41;
          if ((dVar46 <= dVar44 || dVar55 <= dVar44) && (dVar44 = dVar46, dVar55 <= dVar46)) {
            dVar44 = dVar55;
          }
          if (dVar44 * 0.5 <= dVar40) {
            dVar40 = dVar44 * 0.5;
          }
          puVar19[2] = dVar40;
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
            puVar22 = local_208;
            goto LAB_143627e8b;
          }
        }
        else {
          lVar37 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dVar38));
          auVar4._8_4_ = (int)lVar37;
          auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + dVar46));
          auVar4._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          iVar21 = movmskpd(uVar26,auVar4);
          lVar37 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dVar55));
          auVar12._8_4_ = (int)lVar37;
          auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + dVar44));
          auVar12._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
          uVar26 = movmskpd(uVar36,auVar12);
          if ((uVar26 & 0x3fffffff) == 0 && iVar21 == 0) goto LAB_143627da8;
          local_1f0 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          local_1f0[1] = 0;
          *(undefined2 *)(local_1f0 + 3) = 0x101;
          *(undefined1 *)((longlong)local_1f0 + 0x1a) = 1;
          *(undefined2 *)((longlong)local_1f0 + 0x1c) = 0x101;
          *local_1f0 = &PTR_FUN_149f489d0;
          local_1f0[4] = -dVar41;
          local_1f0[5] = -dVar42;
          local_1f0[6] = -dVar39;
          local_1f0[7] = dVar41;
          local_1f0[8] = dVar42;
          local_1f0[9] = dVar39;
          dVar39 = dVar39 + dVar39;
          dVar42 = dVar42 + dVar42;
          dVar41 = dVar41 + dVar41;
          if ((dVar42 <= dVar41 || dVar39 <= dVar41) && (dVar41 = dVar42, dVar39 <= dVar42)) {
            dVar41 = dVar39;
          }
          if (dVar41 * 0.5 <= dVar40) {
            dVar40 = dVar41 * 0.5;
          }
          local_1f0[2] = dVar40;
          if (local_1f0 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_1f0 + 1) = *(int *)(local_1f0 + 1) + 1;
            UNLOCK();
          }
          puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
          local_158._8_4_ = SUB84(dVar38,0);
          local_158._0_8_ = dVar46;
          local_158._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          local_148._8_4_ = SUB84(dVar55,0);
          local_148._0_8_ = dVar44;
          local_148._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
          local_138 = local_268;
          dStack_130 = dStack_260;
          local_128 = local_258;
          dStack_120 = dStack_250;
          local_118 = 0x3ff0000000000000;
          uStack_110 = 0x3ff0000000000000;
          local_108 = 0x3ff0000000000000;
          uStack_100 = 0;
          FUN_14010f5c4(puVar19,&local_1f0,local_158);
          puVar3 = local_208;
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
          }
          puVar22 = local_1f0;
          if (local_208 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_208 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_208 + 0xc) == 0)) {
              puVar22 = (undefined8 *)*local_208;
              local_208 = puVar19;
              (*(code *)*puVar22)(puVar3,1);
              puVar22 = local_1f0;
              puVar19 = local_208;
            }
          }
LAB_143627e8b:
          local_208 = puVar19;
          puVar19 = local_208;
          if (puVar22 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar22 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)puVar22 + 0xc) == 0)) {
              (**(code **)*puVar22)(puVar22,1);
              puVar19 = local_208;
            }
          }
        }
        local_208 = puVar19;
        local_2d8 = (longlong *)(lVar32 + 0x20);
        *(undefined4 *)(lVar32 + 0x20) = 6;
        *(longlong *)(lVar32 + 0x28) = lVar32;
        local_2d0 = (uint)*(byte *)(lVar32 + 0x19);
        local_2c8 = local_2c8 & 0xffffff00;
        ppuVar30 = &local_208;
        FUN_143629190(&local_170,local_158,ppuVar30,*(undefined4 *)(param_3 + 0x10));
        uVar56 = SUB84(ppuVar30,0);
        iVar21 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar21 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar21 + 1U) {
          FUN_14745abde(param_3,iVar21);
        }
        lVar37 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar37 = param_3;
        }
        *(undefined8 *)(lVar37 + (longlong)iVar21 * 8) = local_158._0_8_;
        iVar21 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar21 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
          FUN_140619960(param_2,iVar21);
        }
        *(undefined8 **)(*param_2 + (longlong)iVar21 * 8) = local_208;
        lVar32 = lVar32 + 0x70;
      } while (lVar32 != lVar18);
      puVar20 = *(uint **)(local_278 + 0xa0);
    }
    if ((longlong)(int)puVar20[10] != 0) {
      lVar32 = *(longlong *)(puVar20 + 8);
      lVar18 = (longlong)(int)puVar20[10] * 0x68 + lVar32;
      pwVar23 = local_278 + 0x40;
      do {
        FUN_1417e5e4c(lVar32,&local_1e8,local_270,pwVar23);
        fVar54 = local_184 * 0.5;
        if (fVar54 <= 0.0001) {
          fVar54 = 0.0001;
        }
        fVar48 = local_188;
        if (local_188 <= 0.0001) {
          fVar48 = 0.0001;
        }
        local_1f0 = (undefined8 *)0x0;
        if (0.0001 <= fVar54) {
          local_1f8 = (double)fVar54;
          local_208 = (undefined8 *)0x0;
          uStack_200 = 0;
          FUN_1401c9a0e(&fStack_1a0,local_158,&local_208);
          dVar39 = (double)local_148._0_8_ + (double)local_1a8;
          dVar40 = (double)local_158._8_8_ + dStack_1b0;
          dVar42 = (double)local_158._0_8_ + local_1b8;
          dVar44 = (double)local_1a8 - (double)local_148._0_8_;
          dVar41 = dStack_1b0 - (double)local_158._8_8_;
          dVar55 = local_1b8 - (double)local_158._0_8_;
          puVar19 = (undefined8 *)FUN_14001cc68(0x58,0x10);
          puVar19[1] = 0;
          *(undefined2 *)(puVar19 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar19 + 0x1c) = 0x303;
          *puVar19 = &PTR_FUN_149f487f0;
          puVar19[4] = dVar55;
          puVar19[5] = dVar41;
          puVar19[6] = dVar44;
          dVar39 = dVar39 - dVar44;
          dVar40 = dVar40 - dVar41;
          dVar42 = dVar42 - dVar55;
          dVar38 = dVar39 * dVar39 + dVar42 * dVar42 + dVar40 * dVar40;
          dVar44 = 0.0;
          dVar55 = 0.0;
          dVar46 = 0.0;
          dVar41 = 1.0;
          if (9.999999747378752e-05 <= dVar38) {
            dVar46 = SQRT(dVar38);
            dVar55 = dVar39 / dVar46;
            dVar44 = dVar40 / dVar46;
            dVar41 = dVar42 / dVar46;
          }
          puVar19[7] = dVar41;
          puVar19[8] = dVar44;
          puVar19[9] = dVar55;
          puVar19[10] = dVar46;
        }
        else {
          puVar19 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          puVar19[1] = 0;
          *(undefined2 *)(puVar19 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar19 + 0x1c) = 0;
          *puVar19 = &PTR_FUN_149f48e60;
          puVar19[4] = local_1b8;
          puVar19[5] = dStack_1b0;
          puVar19[6] = local_1a8;
        }
        puVar22 = local_1f0;
        puVar19[2] = (double)fVar48;
        if (puVar19 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          if (local_1f0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_1f0 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_1f0 + 0xc) == 0)) {
              puVar3 = (undefined8 *)*local_1f0;
              local_1f0 = puVar19;
              (*(code *)*puVar3)(puVar22,1);
              puVar19 = local_1f0;
            }
          }
        }
        local_1f0 = puVar19;
        local_2d8 = (longlong *)(lVar32 + 0x20);
        *(undefined4 *)(lVar32 + 0x20) = 6;
        *(longlong *)(lVar32 + 0x28) = lVar32;
        local_2d0 = (uint)*(byte *)(lVar32 + 0x19);
        local_2c8 = local_2c8 & 0xffffff00;
        ppuVar30 = &local_1f0;
        FUN_143629190(&local_170,local_158,ppuVar30,*(undefined4 *)(param_3 + 0x10));
        uVar56 = SUB84(ppuVar30,0);
        iVar21 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar21 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar21 + 1U) {
          FUN_14745abde(param_3,iVar21);
        }
        lVar37 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar37 = param_3;
        }
        *(undefined8 *)(lVar37 + (longlong)iVar21 * 8) = local_158._0_8_;
        iVar21 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar21 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
          FUN_140619960(param_2,iVar21);
        }
        *(undefined8 **)(*param_2 + (longlong)iVar21 * 8) = local_1f0;
        lVar32 = lVar32 + 0x68;
      } while (lVar32 != lVar18);
      puVar20 = *(uint **)(local_278 + 0xa0);
    }
    pwVar23 = local_278;
    if ((longlong)(int)puVar20[0x12] != 0) {
      lVar32 = *(longlong *)(puVar20 + 0x10);
      lVar18 = (longlong)(int)puVar20[0x12] * 0x70 + lVar32;
      pwVar2 = local_278 + 0x40;
      do {
        FUN_147c4c3ac(lVar32,&local_1e8,local_270,pwVar2);
        fVar54 = local_180 * 0.5;
        if (fVar54 <= 0.0001) {
          fVar54 = 0.0001;
        }
        fVar48 = local_188;
        if (local_188 <= 0.0001) {
          fVar48 = 0.0001;
        }
        fVar52 = local_184;
        if (local_184 <= 0.0001) {
          fVar52 = 0.0001;
        }
        local_1f0 = (undefined8 *)0x0;
        if (0.0001 <= fVar54) {
          local_1f8 = (double)fVar54;
          local_208 = (undefined8 *)0x0;
          uStack_200 = 0;
          FUN_1401c9a0e(&fStack_1a0,local_158,&local_208);
          dVar38 = ((double)fVar48 + (double)fVar52) * 0.5;
          dVar43 = (double)local_148._0_8_ + (double)local_1a8;
          dVar44 = (double)local_158._8_8_ + dStack_1b0;
          dVar55 = (double)local_158._0_8_ + local_1b8;
          dVar46 = (double)local_1a8 - (double)local_148._0_8_;
          dVar42 = dStack_1b0 - (double)local_158._8_8_;
          dVar41 = local_1b8 - (double)local_158._0_8_;
          puVar19 = (undefined8 *)FUN_14001cc68(0x58,0x10);
          puVar19[1] = 0;
          *(undefined2 *)(puVar19 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar19 + 0x1c) = 0x303;
          *puVar19 = &PTR_FUN_149f487f0;
          puVar19[4] = dVar41;
          puVar19[5] = dVar42;
          puVar19[6] = dVar46;
          dVar43 = dVar43 - dVar46;
          dVar44 = dVar44 - dVar42;
          dVar55 = dVar55 - dVar41;
          dVar40 = dVar43 * dVar43 + dVar55 * dVar55 + dVar44 * dVar44;
          dVar41 = 0.0;
          dVar46 = 0.0;
          dVar39 = 0.0;
          dVar42 = 1.0;
          if (9.999999747378752e-05 <= dVar40) {
            dVar39 = SQRT(dVar40);
            dVar46 = dVar43 / dVar39;
            dVar41 = dVar44 / dVar39;
            dVar42 = dVar55 / dVar39;
          }
          puVar19[7] = dVar42;
          puVar19[8] = dVar41;
          puVar19[9] = dVar46;
          puVar19[10] = dVar39;
        }
        else {
          dVar38 = (double)fVar48;
          if (fVar48 <= fVar52) {
            dVar38 = (double)fVar52;
          }
          puVar19 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          puVar19[1] = 0;
          *(undefined2 *)(puVar19 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar19 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar19 + 0x1c) = 0;
          *puVar19 = &PTR_FUN_149f48e60;
          puVar19[4] = local_1b8;
          puVar19[5] = dStack_1b0;
          puVar19[6] = local_1a8;
        }
        puVar22 = local_1f0;
        puVar19[2] = dVar38;
        if (puVar19 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          if (local_1f0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_1f0 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_1f0 + 0xc) == 0)) {
              puVar3 = (undefined8 *)*local_1f0;
              local_1f0 = puVar19;
              (*(code *)*puVar3)(puVar22,1);
              puVar19 = local_1f0;
            }
          }
        }
        local_1f0 = puVar19;
        local_2d8 = (longlong *)(lVar32 + 0x20);
        *(undefined4 *)(lVar32 + 0x20) = 6;
        *(longlong *)(lVar32 + 0x28) = lVar32;
        local_2d0 = (uint)*(byte *)(lVar32 + 0x19);
        local_2c8 = local_2c8 & 0xffffff00;
        ppuVar30 = &local_1f0;
        pwVar23 = (wchar_t *)local_158;
        FUN_143629190(&local_170,local_158,ppuVar30,*(undefined4 *)(param_3 + 0x10));
        uVar56 = SUB84(ppuVar30,0);
        uVar26 = *(uint *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = uVar26 + 1;
        if (*(uint *)(param_3 + 0x14) < uVar26 + 1) {
          pwVar23 = (wchar_t *)(ulonglong)uVar26;
          FUN_14745abde(param_3,pwVar23);
        }
        lVar37 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar37 = param_3;
        }
        *(undefined8 *)(lVar37 + (longlong)(int)uVar26 * 8) = local_158._0_8_;
        uVar26 = *(uint *)(param_2 + 1);
        *(uint *)(param_2 + 1) = uVar26 + 1;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar26 + 1) {
          pwVar23 = (wchar_t *)(ulonglong)uVar26;
          FUN_140619960(param_2,pwVar23);
        }
        *(undefined8 **)(*param_2 + (longlong)(int)uVar26 * 8) = local_1f0;
        lVar32 = lVar32 + 0x70;
      } while (lVar32 != lVar18);
      puVar20 = *(uint **)(local_278 + 0xa0);
    }
    pwVar2 = local_278;
    lVar32 = DAT_14caf70f8;
    puVar19 = (undefined8 *)(ulonglong)puVar20[0xe];
    uVar24 = 0;
    pcVar15 = local_258;
    if (puVar20[0xe] != 0) {
      dVar44 = *(double *)(local_278 + 0x68) * *(double *)(local_278 + 0x28);
      dVar41 = ABS(dVar44);
      dVar42 = *(double *)(local_278 + 0x28) * *(double *)(local_278 + 0x58);
      dVar55 = (double)(-(ulonglong)(dVar41 < 9.999999747378752e-05) & 0x3f1a36e2e0000000 |
                       ~-(ulonglong)(dVar41 < 9.999999747378752e-05) & (ulonglong)dVar44);
      local_258 = (code *)(*(double *)(local_278 + 0x54) * *(double *)(local_278 + 0x24));
      dVar44 = *(double *)(local_278 + 0x50) * *(double *)(local_278 + 0x20);
      pcVar15 = *(code **)(local_278 + 0x40);
      dVar46 = *(double *)(local_278 + 0x44);
      dVar38 = *(double *)(local_278 + 0x48);
      dVar39 = *(double *)(local_278 + 0x4c);
      uVar24 = (undefined4)CONCAT71((int7)((ulonglong)pwVar23 >> 8),1);
      local_270 = (wchar_t *)CONCAT44(local_270._4_4_,uVar24);
      if (((ABS(dVar44) <= 9.999999747378752e-05) &&
          (ABS((double)local_258) <= 9.999999747378752e-05)) &&
         (ABS(dVar42) <= 9.999999747378752e-05)) {
        dStack_260 = 0.0;
        lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar46 - DAT_14c8463d8));
        auVar13._8_4_ = (int)lVar18;
        auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)pcVar15 - DAT_14c8463d0));
        auVar13._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
        uVar26 = movmskpd(uVar24,auVar13);
        lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar39 - DAT_14c8463e8));
        auVar8._8_4_ = (int)lVar18;
        auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar38 - DAT_14c8463e0));
        auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
        iVar21 = movmskpd(uVar56,auVar8);
        uVar36 = iVar21 << 2 | uVar26;
        if (uVar36 == 0) {
          local_270 = (wchar_t *)((ulonglong)local_270._4_4_ << 0x20);
          local_268 = dVar41;
        }
        else {
          auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dVar46));
          auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + (double)pcVar15));
          iVar21 = movmskpd(uVar26,auVar7);
          lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dVar39));
          auVar5._8_4_ = (int)lVar18;
          auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + dVar38));
          auVar5._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
          uVar26 = movmskpd(uVar36,auVar5);
          local_270 = (wchar_t *)
                      CONCAT44(local_270._4_4_,
                               CONCAT31((int3)((uint)iVar21 >> 8),
                                        (uVar26 & 0x3fffffff) != 0 || iVar21 != 0));
          local_268 = dVar41;
        }
      }
      dVar40 = *(double *)(local_278 + 0x24) * *(double *)(local_278 + 100);
      dVar43 = *(double *)(local_278 + 0x20) * *(double *)(local_278 + 0x60);
      iVar21 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar21 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar21 == 2)) {
        uVar25 = 0;
      }
      else if (iVar21 == 1) {
        dStack_260 = 0.0;
        dStack_250 = 0.0;
        local_268 = dVar41;
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        uVar25 = (ulonglong)(DVar16 != DVar17);
        puVar20 = *(uint **)(pwVar2 + 0xa0);
        puVar19 = (undefined8 *)(ulonglong)puVar20[0xe];
        dVar41 = local_268;
      }
      else {
        uVar25 = 1;
      }
      local_268 = (double)CONCAT44(local_268._4_4_,0xffffffff);
      if (*(char *)(lVar32 + uVar25) != '\0') {
        local_268 = (double)CONCAT44(local_268._4_4_,*(undefined4 *)(pwVar2 + 0xb4));
      }
      uVar24 = 0;
      dStack_250 = dVar46;
      local_238 = dVar38;
      dStack_230 = dVar39;
      if ((int)puVar19 != 0) {
        dVar45 = ABS(dVar43);
        dVar46 = ABS(dVar40);
        pcVar11 = (code *)(-(ulonglong)(dVar45 < 9.999999747378752e-05) & 0x3f1a36e2e0000000 |
                          ~-(ulonglong)(dVar45 < 9.999999747378752e-05) & (ulonglong)dVar43);
        dVar38 = (double)(-(ulonglong)(dVar46 < 9.999999747378752e-05) & 0x3f1a36e2e0000000 |
                         ~-(ulonglong)(dVar46 < 9.999999747378752e-05) & (ulonglong)dVar40);
        dVar39 = 9.999999747378752e-05;
        if (9.999999747378752e-05 <= dVar41) {
          dVar39 = dVar41;
        }
        dVar41 = 9.999999747378752e-05;
        if (9.999999747378752e-05 <= dVar46) {
          dVar41 = dVar46;
        }
        dVar46 = 9.999999747378752e-05;
        if (9.999999747378752e-05 <= dVar45) {
          dVar46 = dVar45;
        }
        uVar56 = SUB84(local_258,0);
        uVar25 = (ulonglong)local_258 >> 0x20;
        dStack_240 = 0.0;
        dVar43 = (double)(float)local_228._0_4_;
        dVar40 = (double)(float)local_218._0_4_;
        lVar32 = (longlong)(int)puVar19 << 8;
        plVar33 = (longlong *)(*(longlong *)(puVar20 + 0xc) + 0xf0);
        uVar26 = 0;
        local_258 = pcVar15;
        local_248 = dVar42;
        do {
          if (*plVar33 != 0) {
            if (uVar26 < 0x20) {
              puVar20 = (uint *)((ulonglong)local_268 & 0xffffffff);
              if ((local_268._0_4_ >> (uVar26 & 0x1f) & 1) == 0) goto LAB_143628bdf;
            }
            dVar45 = ((double)plVar33[-0xf] - (double)plVar33[-0x12]) * dVar39;
            dVar49 = ((double)plVar33[-0x10] - (double)plVar33[-0x13]) * dVar41;
            dVar42 = ((double)plVar33[-0x11] - (double)plVar33[-0x14]) * dVar46;
            if (dVar49 <= dVar42) {
              dVar42 = dVar49;
            }
            if (dVar45 <= dVar42) {
              dVar42 = dVar45;
            }
            dVar45 = dVar42 * dVar43;
            if (dVar40 <= dVar42 * dVar43) {
              dVar45 = dVar40;
            }
            local_208 = (undefined8 *)0x0;
            if (dVar55 == 1.0 && ((double)pcVar11 == 1.0 && dVar38 == 1.0)) {
              puVar19 = (undefined8 *)FUN_14001cc68(0x30,0x10);
              FUN_1429b40a4(puVar19,plVar33,SUB84(dVar45,0));
            }
            else {
              puVar19 = (undefined8 *)FUN_14001cc68(0x90,0x10);
              lVar18 = *plVar33;
              local_158._0_8_ = lVar18;
              if (lVar18 != 0) {
                LOCK();
                *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
                UNLOCK();
              }
              local_1e8 = pcVar11;
              dStack_1e0 = dVar38;
              local_1d8 = dVar55;
              FUN_1405445a8(puVar19,local_158,&local_1e8,dVar45);
            }
            puVar22 = local_208;
            if (puVar19 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
              UNLOCK();
            }
            if (local_208 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_208 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)local_208 + 0xc) == 0)) {
                puVar3 = (undefined8 *)*local_208;
                local_208 = puVar19;
                (*(code *)*puVar3)(puVar22,1);
                puVar19 = local_208;
              }
            }
            local_208 = puVar19;
            puVar19 = local_208;
            if ((char)local_270 != '\0') {
              puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
              local_1e8 = local_258;
              dStack_1e0 = dStack_250;
              local_1d8 = local_238;
              dStack_1d0 = dStack_230;
              local_1c8._8_4_ = uVar56;
              local_1c8._0_8_ = dVar44;
              local_1c8._12_4_ = (int)uVar25;
              local_1b8 = local_248;
              dStack_1b0 = dStack_240;
              local_1a8 = (code *)0x3ff0000000000000;
              fStack_1a0 = 0.0;
              uStack_19c = 0x3ff00000;
              dStack_198 = 1.0;
              dStack_190 = 0.0;
              FUN_14010f5c4(puVar19,&local_208,&local_1e8);
              puVar22 = local_208;
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              if (local_208 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(local_208 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)local_208 + 0xc) == 0)) {
                  puVar3 = (undefined8 *)*local_208;
                  local_208 = puVar19;
                  (*(code *)*puVar3)(puVar22,1);
                  puVar19 = local_208;
                }
              }
            }
            local_208 = puVar19;
            local_2d8 = plVar33 + -0x1a;
            *(undefined4 *)(plVar33 + -0x1a) = 6;
            plVar33[-0x19] = (longlong)(plVar33 + -0x1e);
            local_2d0 = (uint)*(byte *)((longlong)plVar33 + -0xd7);
            local_2c8 = local_2c8 & 0xffffff00;
            FUN_143629190(&local_170,&local_1e8,&local_208,*(undefined4 *)(param_3 + 0x10));
            iVar21 = *(int *)(param_3 + 0x10);
            *(uint *)(param_3 + 0x10) = iVar21 + 1U;
            if (*(uint *)(param_3 + 0x14) < iVar21 + 1U) {
              FUN_14745abde(param_3,iVar21);
            }
            lVar18 = *(longlong *)(param_3 + 8);
            if (*(longlong *)(param_3 + 8) == 0) {
              lVar18 = param_3;
            }
            *(code **)(lVar18 + (longlong)iVar21 * 8) = local_1e8;
            iVar21 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
              FUN_140619960(param_2,iVar21);
            }
            puVar20 = (uint *)*param_2;
            *(undefined8 **)(puVar20 + (longlong)iVar21 * 2) = local_208;
            puVar19 = local_208;
          }
LAB_143628bdf:
          uVar24 = SUB84(puVar19,0);
          uVar26 = uVar26 + 1;
          plVar33 = plVar33 + 0x20;
          lVar32 = lVar32 + -0x100;
          pcVar15 = local_258;
        } while (lVar32 != 0);
      }
    }
  }
  local_258 = pcVar15;
  if (local_279 != '\0') {
    dVar46 = *(double *)(local_278 + 0x58) * *(double *)(local_278 + 0x28);
    dVar38 = *(double *)(local_278 + 0x54) * *(double *)(local_278 + 0x24);
    dVar41 = *(double *)(local_278 + 0x50) * *(double *)(local_278 + 0x20);
    pcVar15 = *(code **)(local_278 + 0x40);
    dVar42 = *(double *)(local_278 + 0x44);
    dVar44 = *(double *)(local_278 + 0x48);
    dVar55 = *(double *)(local_278 + 0x4c);
    bVar34 = true;
    if (((ABS(dVar41) <= 9.999999747378752e-05) && (ABS(dVar38) <= 9.999999747378752e-05)) &&
       (ABS(dVar46) <= 9.999999747378752e-05)) {
      lVar32 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar42 - DAT_14c8463d8));
      auVar14._8_4_ = (int)lVar32;
      auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)pcVar15 - DAT_14c8463d0));
      auVar14._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar26 = movmskpd((int)puVar20,auVar14);
      auVar57._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar55 - DAT_14c8463e8));
      auVar57._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar44 - DAT_14c8463e0));
      iVar21 = movmskpd(uVar24,auVar57);
      uVar36 = iVar21 << 2 | uVar26;
      if (uVar36 == 0) {
        bVar34 = false;
      }
      else {
        auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dVar42));
        auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + (double)pcVar15));
        iVar21 = movmskpd(uVar26,auVar10);
        lVar32 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dVar55));
        auVar9._8_4_ = (int)lVar32;
        auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + dVar44));
        auVar9._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar26 = movmskpd(uVar36,auVar9);
        bVar34 = (uVar26 & 0x3fffffff) != 0 || iVar21 != 0;
      }
    }
    dVar39 = *(double *)(local_278 + 0x28) * *(double *)(local_278 + 0x68);
    dVar40 = *(double *)(local_278 + 0x24) * *(double *)(local_278 + 100);
    pcVar11 = (code *)(*(double *)(local_278 + 0x20) * *(double *)(local_278 + 0x60));
    if ((9.999999747378752e-05 <= ABS((double)pcVar11 + -1.0)) ||
       (9.999999747378752e-05 <= ABS(dVar40 + -1.0))) {
      bVar35 = false;
    }
    else {
      bVar35 = ABS(dVar39 + -1.0) < 9.999999747378752e-05;
    }
    if ((longlong)*(int *)(local_278 + 0xb0) != 0) {
      plVar33 = *(longlong **)(local_278 + 0xac);
      lVar32 = (longlong)*(int *)(local_278 + 0xb0) << 3;
      do {
        local_208 = (undefined8 *)0x0;
        if (bVar35) {
          puVar19 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          FUN_1429b41c6(puVar19,plVar33,0);
        }
        else {
          puVar19 = (undefined8 *)FUN_14001cc68(0x90,0x10);
          lVar18 = *plVar33;
          local_158._0_8_ = lVar18;
          if (lVar18 != 0) {
            LOCK();
            *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
            UNLOCK();
          }
          local_1e8 = pcVar11;
          dStack_1e0 = dVar40;
          local_1d8 = dVar39;
          FUN_140fa714a(puVar19,local_158,&local_1e8,0);
        }
        puVar22 = local_208;
        if (puVar19 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
        }
        if (local_208 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_208 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_208 + 0xc) == 0)) {
            puVar3 = (undefined8 *)*local_208;
            local_208 = puVar19;
            (*(code *)*puVar3)(puVar22,1);
            puVar19 = local_208;
          }
        }
        local_208 = puVar19;
        puVar19 = local_208;
        if (bVar34) {
          puVar19 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
          local_1c8._8_4_ = SUB84(dVar38,0);
          local_1c8._0_8_ = dVar41;
          local_1c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          dStack_1b0 = 0.0;
          local_1a8 = (code *)0x3ff0000000000000;
          fStack_1a0 = 0.0;
          uStack_19c = 0x3ff00000;
          dStack_198 = 1.0;
          dStack_190 = 0.0;
          local_1e8 = pcVar15;
          dStack_1e0 = dVar42;
          local_1d8 = dVar44;
          dStack_1d0 = dVar55;
          local_1b8 = dVar46;
          FUN_14010f5c4(puVar19,&local_208,&local_1e8);
          puVar22 = local_208;
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
          }
          if (local_208 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_208 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_208 + 0xc) == 0)) {
              puVar3 = (undefined8 *)*local_208;
              local_208 = puVar19;
              (*(code *)*puVar3)(puVar22,1);
              puVar19 = local_208;
            }
          }
        }
        local_208 = puVar19;
        *(byte *)(*plVar33 + 0xd8) = (byte)*local_278 ^ 1;
        local_2c8 = CONCAT31(local_2c8._1_3_,1);
        local_2d0 = 3;
        local_2d8 = (longlong *)0x0;
        FUN_143629190(&local_170,&local_1e8,&local_208,*(undefined4 *)(param_3 + 0x10));
        iVar21 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar21 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar21 + 1U) {
          FUN_14745abde(param_3,iVar21);
        }
        lVar18 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar18 = param_3;
        }
        *(code **)(lVar18 + (longlong)iVar21 * 8) = local_1e8;
        iVar21 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar21 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
          FUN_140619960(param_2,iVar21);
        }
        *(undefined8 **)(*param_2 + (longlong)iVar21 * 8) = local_208;
        plVar33 = plVar33 + 1;
        lVar32 = lVar32 + -8;
      } while (lVar32 != 0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143629190 FUN_143629190 body=873 status=ok
// SIG undefined FUN_143629190(void)

longlong *
FUN_143629190(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,byte param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140711c7e(local_98);
  *param_2 = local_98[0];
  lVar7 = *param_1 + (ulonglong)param_7 * 0x10;
  uVar8 = *(uint *)(local_98[0] + 8);
  if ((uVar8 & 3) == 0) {
    lVar1 = *(longlong *)(local_98[0] + 0x48);
    uVar2 = *(undefined4 *)(lVar7 + 0x18);
    uVar3 = *(undefined4 *)(lVar7 + 0x1c);
    uVar4 = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(local_98[0] + 0x50) = *(undefined4 *)(lVar7 + 0x14);
    *(undefined4 *)(local_98[0] + 0x54) = uVar2;
    *(undefined4 *)(local_98[0] + 0x58) = uVar3;
    *(undefined4 *)(local_98[0] + 0x5c) = uVar4;
    uVar6 = *(uint *)(local_98[0] + 0xc);
    *(uint *)(local_98[0] + 0xc) = uVar6 | 1;
    if ((lVar1 != 0 && uVar6 == 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar1 + 8) + 0x70,lVar1,uVar8 >> 3);
      uVar8 = *(uint *)(local_98[0] + 8);
    }
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + 0x1c);
    *(undefined8 *)(local_98[0] + 0x48) = *(undefined8 *)(lVar7 + 0x14);
    *(undefined8 *)(local_98[0] + 0x50) = uVar5;
  }
  lVar7 = *param_1;
  if ((uVar8 & 3) == 0) {
    uVar2 = *(undefined4 *)(lVar7 + 8);
    uVar3 = *(undefined4 *)(lVar7 + 0xc);
    uVar4 = *(undefined4 *)(lVar7 + 0x10);
    *(undefined4 *)(local_98[0] + 0x60) = *(undefined4 *)(lVar7 + 4);
    *(undefined4 *)(local_98[0] + 100) = uVar2;
    *(undefined4 *)(local_98[0] + 0x68) = uVar3;
    *(undefined4 *)(local_98[0] + 0x6c) = uVar4;
    uVar8 = *(uint *)(local_98[0] + 0xc);
    *(uint *)(local_98[0] + 0xc) = uVar8 | 1;
    if ((*(longlong *)(local_98[0] + 0x48) != 0 && uVar8 == 0) &&
       (lVar7 = *(longlong *)(*(longlong *)(local_98[0] + 0x48) + 8), lVar7 != 0)) {
      FUN_144821112(lVar7 + 0x70);
    }
  }
  else {
    uVar2 = *(undefined4 *)(lVar7 + 8);
    uVar3 = *(undefined4 *)(lVar7 + 0xc);
    uVar4 = *(undefined4 *)(lVar7 + 0x10);
    *(undefined4 *)(local_98[0] + 0x58) = *(undefined4 *)(lVar7 + 4);
    *(undefined4 *)(local_98[0] + 0x5c) = uVar2;
    *(undefined4 *)(local_98[0] + 0x60) = uVar3;
    *(undefined4 *)(local_98[0] + 100) = uVar4;
  }
  uVar8 = 0;
  if (*(uint *)param_1[1] < 5) {
    uVar8 = *(uint *)param_1[1];
  }
  uVar6 = *(uint *)(local_98[0] + 8);
  if ((uVar6 & 3) == 0) {
    FUN_1429b8506(local_98[0]);
    uVar6 = *(uint *)(local_98[0] + 8);
  }
  else {
    *(char *)(local_98[0] + 0x70) = (char)uVar8;
  }
  plVar11 = (longlong *)(*param_1 + 0xe0);
  plVar12 = local_98;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar12 = *plVar11;
    plVar11 = plVar11 + 1;
    plVar12 = plVar12 + 1;
  }
  if ((uVar6 & 3) == 0) {
    FUN_14484a332();
  }
  else {
    FUN_146e226b0(local_98[0],local_98);
  }
  if ((*(byte *)(local_98[0] + 8) & 3) == 0) {
    FUN_14142a816(local_98[0]);
  }
  else {
    *(undefined8 *)(local_98[0] + 0x68) = param_5;
  }
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 0x34) == '\x01') {
    bVar9 = *(byte *)(lVar7 + 0x37);
    iVar13 = (bVar9 ^ 1) * 2;
  }
  else {
    bVar9 = *(byte *)(lVar7 + 0x37);
    iVar13 = 0;
    if (*(char *)(lVar7 + 0x35) != '\0') {
      iVar13 = (bVar9 ^ 1) * 2;
    }
  }
  bVar10 = 0;
  if ((0 < param_6) &&
     (uVar8 = iVar13 + (uint)bVar9 * 4 | (uint)*(byte *)(lVar7 + 0x36), bVar10 = 0, uVar8 != 0)) {
    bVar10 = (&DAT_14aa1e2c0)[(ulonglong)(param_6 - 1) * 4 + (ulonglong)(uVar8 - 1) * 0x14];
  }
  uVar8 = *(uint *)(local_98[0] + 8);
  bVar14 = (bVar10 & 6) != 0;
  if ((uVar8 & 3) == 0) {
    lVar7 = *(longlong *)(local_98[0] + 0x48);
    *(byte *)(local_98[0] + 0x79) = *(byte *)(local_98[0] + 0x79) & 0xfe | bVar14;
    uVar6 = *(uint *)(local_98[0] + 0xc);
    *(uint *)(local_98[0] + 0xc) = uVar6 | 1;
    if ((lVar7 != 0 && uVar6 == 0) && (*(longlong *)(lVar7 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar7 + 8) + 0x70,lVar7,uVar8 >> 3);
      uVar8 = *(uint *)(local_98[0] + 8);
    }
  }
  else {
    *(byte *)(local_98[0] + 0x71) = *(byte *)(local_98[0] + 0x71) & 0xfe | bVar14;
  }
  if ((uVar8 & 3) == 0) {
    lVar7 = *(longlong *)(local_98[0] + 0x48);
    *(byte *)(local_98[0] + 0x79) = *(byte *)(local_98[0] + 0x79) & 0xfd | (bVar10 & 1) * '\x02';
    uVar6 = *(uint *)(local_98[0] + 0xc);
    *(uint *)(local_98[0] + 0xc) = uVar6 | 1;
    if ((lVar7 != 0 && uVar6 == 0) && (*(longlong *)(lVar7 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar7 + 8) + 0x70,lVar7,uVar8 >> 3);
      uVar8 = *(uint *)(local_98[0] + 8);
    }
  }
  else {
    *(byte *)(local_98[0] + 0x71) = *(byte *)(local_98[0] + 0x71) & 0xfd | (bVar10 & 1) * '\x02';
  }
  if ((uVar8 & 3) == 0) {
    lVar7 = *(longlong *)(local_98[0] + 0x48);
    *(byte *)(local_98[0] + 0x79) = *(byte *)(local_98[0] + 0x79) & 0xfb | bVar10 & 4;
    uVar6 = *(uint *)(local_98[0] + 0xc);
    *(uint *)(local_98[0] + 0xc) = uVar6 | 1;
    if ((lVar7 != 0 && uVar6 == 0) && (*(longlong *)(lVar7 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar7 + 8) + 0x70,lVar7,uVar8 >> 3);
    }
  }
  else {
    *(byte *)(local_98[0] + 0x71) = *(byte *)(local_98[0] + 0x71) & 0xfb | bVar10 & 4;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436294fa FUN_1436294fa body=1856 status=ok
// SIG undefined FUN_1436294fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1436294fa(longlong param_1,longlong param_2,uint param_3,double *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_138 [32];
  double *local_118;
  float local_110;
  uint *local_100;
  longlong local_f8;
  uint *local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_1 + 8) & 3) == 0) {
    lVar9 = param_1 + 0x80;
  }
  else {
    lVar9 = FUN_140135db2(param_1);
  }
  if (((0 < *(int *)(lVar9 + 8)) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8), lVar9 != 0)) {
    if ((*(byte *)(param_1 + 8) & 3) == 0) {
      lVar10 = param_1 + 0x90;
    }
    else {
      lVar10 = FUN_140135db2(param_1);
      lVar10 = lVar10 + 0x10;
    }
    if ((0 < *(int *)(lVar10 + 8)) && (piVar1 = *(int **)(param_2 + 0x70), piVar1 != (int *)0x0)) {
      iVar7 = *piVar1;
      if (iVar7 == 8) {
        if ((*(longlong *)(piVar1 + 2) == 0) ||
           (piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10), piVar1 == (int *)0x0))
        goto LAB_143629839;
        iVar7 = *piVar1;
      }
      if ((iVar7 == 1) && (lVar10 = *(longlong *)(piVar1 + 2), lVar10 != 0)) {
        plVar13 = *(longlong **)(lVar10 + 0x170);
        lVar11 = *(longlong *)(lVar10 + 0x108);
        if (*(longlong *)(lVar10 + 0x108) == 0) {
          lVar11 = lVar10;
        }
        if ((plVar13 != (longlong *)0x0) && (iVar7 = (int)plVar13[5], iVar7 != 0)) {
          local_100 = (uint *)(plVar13 + 2);
          if ((uint *)plVar13[4] != (uint *)0x0) {
            local_100 = (uint *)plVar13[4];
          }
          uVar16 = *local_100;
          if (uVar16 == 0) {
            iVar15 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar15 = iVar7 + -1;
            }
            uVar19 = 0;
            uVar22 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar22 = uVar19;
            }
            iVar15 = 0;
            do {
              if (uVar22 == uVar19) goto LAB_143629617;
              iVar15 = iVar15 + 0x20;
              uVar16 = local_100[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar19 = 0;
            iVar15 = 0;
          }
          uVar24 = (ulonglong)(-uVar16 & uVar16);
          uVar22 = uVar24 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar20 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar20 < iVar7) {
            iVar23 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar23 = iVar7 + -1;
            }
            local_f8 = *plVar13;
            iVar23 = iVar23 >> 5;
            local_f0 = local_100 + 1;
            uVar16 = 0xffffffff;
            do {
              if (*(longlong *)(local_f8 + (longlong)iVar20 * 0x90) == param_1) {
                lVar11 = *(longlong *)(local_f8 + 0x10 + (longlong)iVar20 * 0x90);
              }
              uVar16 = uVar16 & ~(uint)uVar24;
              iVar20 = (int)uVar19;
              lVar10 = (longlong)iVar20;
              uVar8 = local_100[lVar10] & uVar16;
              if (uVar8 == 0) {
                iVar21 = iVar23;
                if (iVar23 < iVar20) {
                  iVar21 = iVar20;
                }
                if (iVar23 <= iVar20) break;
                lVar17 = 0;
                while( true ) {
                  iVar15 = iVar15 + 0x20;
                  uVar8 = local_f0[lVar10 + lVar17];
                  if (uVar8 != 0) break;
                  lVar17 = lVar17 + 1;
                  if (iVar21 - lVar10 == lVar17) goto LAB_143629617;
                }
                uVar19 = (ulonglong)(iVar20 + (int)lVar17 + 1);
                uVar16 = 0xffffffff;
              }
              uVar24 = (ulonglong)(-uVar8 & uVar8);
              uVar22 = uVar24 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar20 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            } while (iVar20 < iVar7);
          }
        }
LAB_143629617:
        lVar10 = FUN_140aa2aee(lVar11);
        plVar13 = *(longlong **)(param_1 + 0x10);
        bVar14 = *(byte *)((longlong)plVar13 + 0x1c) & 0x1f;
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0xb8) < '\0')) {
          plVar18 = plVar13;
          if (plVar13 != (longlong *)0x0 && bVar14 == 4) {
            do {
              plVar18 = (longlong *)plVar18[4];
              bVar14 = *(byte *)((longlong)plVar18 + 0x1c) & 0x1f;
            } while (plVar18 != (longlong *)0x0 && bVar14 == 4);
          }
          if (bVar14 == 0xb) {
            dVar26 = 1.0;
            dVar27 = 1.0;
            dVar25 = 1.0;
            if (plVar13 != (longlong *)0x0 && *(byte *)((longlong)plVar13 + 0x1c) == 0x8b) {
              dVar26 = (double)plVar13[4];
              dVar27 = (double)plVar13[5];
              dVar25 = (double)plVar13[6];
            }
            dVar30 = (double)*(float *)(param_2 + 0x44);
            dVar28 = (double)*(float *)(param_2 + 0x40);
            dVar2 = *param_4 - *(double *)(param_2 + 0x20);
            dVar3 = param_4[1] - *(double *)(param_2 + 0x28);
            dVar31 = param_4[2] - *(double *)(param_2 + 0x30);
            dVar32 = (double)*(float *)(param_2 + 0x48) * -1.0;
            dVar33 = (double)*(float *)(param_2 + 0x4c) * 1.0;
            dVar34 = dVar2 * dVar32 - -dVar28 * dVar31;
            dVar4 = dVar3 * -dVar28 - -dVar30 * dVar2;
            dVar5 = dVar31 * -dVar30 - dVar32 * dVar3;
            dVar5 = dVar5 + dVar5;
            dVar34 = dVar34 + dVar34;
            dVar4 = dVar4 + dVar4;
            auVar29._8_8_ = dVar27;
            auVar29._0_8_ = dVar26;
            auVar29 = divpd(_DAT_149934d80,auVar29);
            local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar26)) & auVar29._0_8_) *
                       ((dVar4 * -dVar30 - dVar34 * dVar32) + dVar33 * dVar5 + dVar2);
            dStack_d0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar27)) & auVar29._8_8_) *
                        (dVar28 * dVar4 + dVar32 * dVar5 + dVar33 * dVar34 + dVar3);
            local_c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar25)) &
                               (ulonglong)(1.0 / dVar25)) *
                       (dVar33 * dVar4 + dVar31 + (dVar34 * -dVar28 - dVar5 * -dVar30));
            bVar14 = (**(code **)(*plVar13 + 0x110))(plVar13,param_3);
            if ((*(byte *)(param_1 + 8) & 3) == 0) {
              lVar11 = param_1 + 0x90;
            }
            else {
              lVar11 = FUN_140135db2(param_1);
              lVar11 = lVar11 + 0x10;
            }
            if ((int)(uint)bVar14 < *(int *)(lVar11 + 8)) {
              if ((*(byte *)(param_1 + 8) & 3) == 0) {
                plVar13 = (longlong *)(param_1 + 0x90);
              }
              else {
                lVar11 = FUN_140135db2(param_1);
                plVar13 = (longlong *)(lVar11 + 0x10);
              }
              puVar12 = (undefined4 *)
                        FUN_146e1f850(lVar9 + 0xad8,
                                      *(undefined4 *)(*plVar13 + (ulonglong)bVar14 * 4));
              if ((puVar12 != (undefined4 *)0x0) && (param_3 < *(uint *)(lVar10 + 0x140))) {
                local_118 = &local_e8;
                cVar6 = FUN_147c4904a(lVar10,&local_d8,
                                      *(undefined4 *)
                                       (*(longlong *)(lVar10 + 0x138) + (longlong)(int)param_3 * 4),
                                      puVar12[6]);
                if (cVar6 != '\0') {
                  local_110 = (float)local_e0;
                  local_118 = (double *)CONCAT44(local_118._4_4_,(float)local_e8);
                  iVar7 = FUN_147c68690(puVar12 + 2,*puVar12,puVar12[1],puVar12[7]);
                  uVar16 = iVar7 + (uint)bVar14 * 8;
                  if ((*(byte *)(param_1 + 8) & 3) == 0) {
                    lVar10 = param_1 + 0xa0;
                  }
                  else {
                    lVar10 = FUN_140135db2(param_1);
                    lVar10 = lVar10 + 0x20;
                  }
                  if ((int)uVar16 < *(int *)(lVar10 + 8)) {
                    uVar8 = *(uint *)(param_1 + 8);
                    if ((uVar8 & 3) == 0) {
                      plVar13 = (longlong *)(param_1 + 0xa0);
                    }
                    else {
                      lVar10 = FUN_140135db2(param_1);
                      plVar13 = (longlong *)(lVar10 + 0x20);
                      uVar8 = *(uint *)(param_1 + 8);
                    }
                    uVar16 = *(uint *)(*plVar13 + (ulonglong)uVar16 * 4);
                    if ((uVar8 & 3) == 0) {
                      lVar10 = param_1 + 0xb0;
                    }
                    else {
                      lVar10 = FUN_140135db2(param_1);
                      lVar10 = lVar10 + 0x30;
                    }
                    if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(lVar10 + 8))) {
                      if ((*(byte *)(param_1 + 8) & 3) == 0) {
                        plVar13 = (longlong *)(param_1 + 0xb0);
                      }
                      else {
                        lVar10 = FUN_140135db2(param_1);
                        plVar13 = (longlong *)(lVar10 + 0x30);
                      }
                      uVar16 = *(uint *)(*plVar13 + (ulonglong)uVar16 * 4);
                      if ((0xffffff < uVar16) &&
                         (uVar8 = uVar16 & 0xffffff, (int)uVar8 < *(int *)(lVar9 + 0xab8))) {
                        lVar10 = lVar9 + 0xaa0;
                        if (*(longlong *)(lVar9 + 0xab0) != 0) {
                          lVar10 = *(longlong *)(lVar9 + 0xab0);
                        }
                        if (((*(uint *)(lVar10 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar16 & 0x1f) & 1
                             ) != 0) &&
                           ((uVar16 ^ *(uint *)(*(longlong *)(lVar9 + 0xa90) + (ulonglong)uVar8 * 4)
                            ) < 0x1000000)) {
                          lVar9 = (ulonglong)(uVar8 << 7) + *(longlong *)(lVar9 + 0xac0);
                          goto LAB_143629847;
                        }
                      }
                      lVar9 = 0;
                      goto LAB_143629847;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143629839:
  lVar9 = FUN_144b266e4(param_1,param_2,param_3);
LAB_143629847:
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143629c3c FUN_143629c3c body=557 status=ok
// SIG undefined FUN_143629c3c(void)

void FUN_143629c3c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x100000000;
  FUN_143627594(param_2,&local_88,local_60);
  lVar6 = *param_1;
  local_90 = param_1;
  if ((lVar6 != 0) && ((int)uStack_80 != 0)) {
    puVar8 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    lVar7 = (longlong)(int)local_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        local_70 = *(longlong **)(puVar8 + lVar6);
        uStack_68 = *local_90;
        if (param_3 != (longlong *)0x0) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1417333de(param_3,iVar3);
          }
          puVar2 = (undefined4 *)(*param_3 + (longlong)iVar3 * 0x10);
          *puVar2 = (undefined4)local_70;
          puVar2[1] = local_70._4_4_;
          puVar2[2] = (undefined4)uStack_68;
          puVar2[3] = uStack_68._4_4_;
        }
        FUN_14360610e(&local_70,*(undefined8 *)(param_2 + 0x58),param_2 + 0x60,param_2 + 0x70);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
      lVar6 = *local_90;
    }
    lVar6 = *(longlong *)(lVar6 + 0x40);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
      FUN_14014f414(plVar5,&local_88);
      if (plVar5 == (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        FUN_1406188f0(*(undefined8 *)(*local_90 + 0x40));
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        uVar4 = *(undefined8 *)(*local_90 + 0x40);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_70 = plVar5;
        FUN_1406188f0(uVar4);
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar5 + 0xc) == 0)) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
    else if (*(char *)(*(longlong *)(lVar6 + 0x50) + 0x1c) == '\x05') {
      local_70 = &local_88;
      uStack_68 = lVar6;
      FUN_146dd978c(lVar6,1);
    }
    FUN_140711be6(*(undefined8 *)(*local_90 + 0x40),local_60);
  }
  FUN_140711b04(local_60);
  FUN_144756766(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143629e6a FUN_143629e6a body=2525 status=ok
// SIG undefined FUN_143629e6a(void)

void FUN_143629e6a(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  ulonglong *local_108;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  longlong **local_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar2 = *(longlong **)(param_1 + 8);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    iVar21 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    puVar1 = (uint *)(plVar2 + 2);
    iVar5 = (int)plVar2[5];
    if (iVar5 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar12 = 0;
    }
    else {
      puVar6 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      uVar17 = *puVar6;
      if (uVar17 == 0) {
        iVar21 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar21 = iVar5 + -1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_14362a0eb;
          iVar21 = iVar21 + 0x20;
          uVar17 = puVar6[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar17 == 0);
      }
      else {
        iVar21 = 0;
        uVar23 = 0;
      }
      uVar22 = (ulonglong)(-uVar17 & uVar17);
      uVar18 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar12 = (iVar21 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar12) {
        iVar12 = iVar5;
      }
    }
    if (iVar12 != iVar5) {
      uVar17 = 0xffffffff;
      iVar4 = iVar5;
      do {
        if (*(int *)(*plVar2 + 8 + (longlong)iVar12 * 0x18) == 0) {
          plVar3 = *(longlong **)(*plVar2 + (longlong)iVar12 * 0x18);
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_b8);
          iVar4 = (int)plVar2[5];
        }
        uVar17 = uVar17 & ~(uint)uVar22;
        puVar6 = (uint *)plVar2[4];
        if ((uint *)plVar2[4] == (uint *)0x0) {
          puVar6 = puVar1;
        }
        iVar12 = (int)uVar23;
        lVar20 = (longlong)iVar12;
        uVar13 = puVar6[lVar20] & uVar17;
        if (uVar13 == 0) {
          iVar14 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar14 = iVar4 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar12 < iVar14) {
            lVar19 = 0;
            do {
              uVar13 = puVar6[lVar20 + lVar19 + 1];
              if (uVar13 != 0) {
                uVar23 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14362a02e;
              }
              iVar21 = iVar21 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar15 - lVar20 != lVar19);
            uVar17 = 0xffffffff;
            lVar20 = (longlong)iVar15;
          }
          uVar23 = lVar20 + 1U & 0xffffffff;
          iVar12 = iVar4;
        }
        else {
LAB_14362a02e:
          uVar22 = (ulonglong)(-uVar13 & uVar13);
          uVar18 = uVar22 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar12 = (iVar21 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar12) {
            iVar12 = iVar4;
          }
        }
      } while (iVar12 != iVar5);
      if ((int)uStack_b0 != local_84) {
        FUN_14362aeae(&local_b8,&local_e8);
        local_d0 = &local_f8;
        local_108 = &local_c8;
        local_c8 = 0;
        local_c0 = 0;
        local_d8 = &LAB_14363e142;
        local_110 = 0;
        local_f8 = plVar2;
        local_f0 = &local_e8;
        FUN_1411ca36e(L"CreatePhysicsMeshes.PF",local_e0,1);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_14362a0eb:
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14363e0cc();
    iVar5 = (int)plVar2[5];
    if (iVar5 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar12 = 0;
      iVar21 = 0;
    }
    else {
      puVar6 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      uVar17 = *puVar6;
      if (uVar17 == 0) {
        iVar21 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar21 = iVar5 + -1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar12 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_14362a199;
          iVar12 = iVar12 + 0x20;
          uVar17 = puVar6[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar23 = 0;
        iVar12 = 0;
      }
      uVar22 = (ulonglong)(-uVar17 & uVar17);
      uVar18 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar21 = (iVar12 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar21) {
        iVar21 = iVar5;
      }
    }
    if (iVar21 != iVar5) {
      uVar17 = 0xffffffff;
      iVar4 = iVar5;
      do {
        if (*(int *)(*plVar2 + 8 + (longlong)iVar21 * 0x18) == 1) {
          (**(code **)(**(longlong **)(*plVar2 + (longlong)iVar21 * 0x18) + 0x38))();
          iVar4 = (int)plVar2[5];
        }
        uVar17 = uVar17 & ~(uint)uVar22;
        puVar6 = (uint *)plVar2[4];
        if ((uint *)plVar2[4] == (uint *)0x0) {
          puVar6 = puVar1;
        }
        iVar21 = (int)uVar23;
        lVar20 = (longlong)iVar21;
        uVar13 = puVar6[lVar20] & uVar17;
        if (uVar13 == 0) {
          iVar14 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar14 = iVar4 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar21) {
            iVar15 = iVar21;
          }
          if (iVar21 < iVar14) {
            lVar19 = 0;
            do {
              uVar13 = puVar6[lVar20 + lVar19 + 1];
              if (uVar13 != 0) {
                uVar23 = (ulonglong)(iVar21 + (int)lVar19 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14362a37a;
              }
              iVar12 = iVar12 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar15 - lVar20 != lVar19);
            uVar17 = 0xffffffff;
            lVar20 = (longlong)iVar15;
          }
          uVar23 = lVar20 + 1U & 0xffffffff;
          iVar21 = iVar4;
        }
        else {
LAB_14362a37a:
          uVar22 = (ulonglong)(-uVar13 & uVar13);
          uVar18 = uVar22 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar21 = (iVar12 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar21) {
            iVar21 = iVar4;
          }
        }
      } while (iVar21 != iVar5);
    }
LAB_14362a199:
    puVar7 = (undefined8 *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar5 + 1U) {
      FUN_147c809ac((longlong *)(param_1 + 0x10),iVar5);
    }
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 8);
    *puVar10 = 0;
    if (puVar10 != puVar7) {
      *puVar10 = *puVar7;
      *puVar7 = 0;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      puVar7 = (undefined8 *)FUN_1448fe162();
      *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
      puVar7[1] = &DAT_100000001;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined4 *)(puVar7 + 4) = 0xffffffff;
      puVar7[6] = 0;
      puVar7[7] = 0x100000000;
      *(undefined1 *)(puVar7 + 8) = 1;
      puVar7[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateDummy::vftable;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0xe800000000000020;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0x100000000;
      *(undefined2 *)(puVar7 + 0x14) = 0;
      LOCK();
      bVar24 = *(char *)(puVar7 + 8) == '\x01';
      if (bVar24) {
        *(char *)(puVar7 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_14008cdb0(puVar7 + 8);
      }
      *puVar7 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
      }
      puVar7[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                    ::vftable;
      puVar7[9] = puVar7;
      puVar7[10] = puVar7;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar7[0xf] = uVar8;
      puVar7[0x10] = 0xc8000052a8814000;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
      *(undefined8 **)(param_1 + 0x30) = puVar7;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    uVar8 = *puVar10;
    puVar7 = TlsGetValue(DAT_14c896140);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar7);
    }
    puVar10 = (undefined8 *)puVar7[1];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar7;
      if (puVar10 == (undefined8 *)0x0) {
        uVar17 = (uint)DAT_14c896180;
        uVar22 = DAT_14c896180;
        while (DAT_14c896180 = uVar22, local_b8 = uVar22, (uVar22 & 0x3ffffff) != 0) {
          local_c8 = (uVar22 & 0xfffffffffc000000) + 0x4000000;
          if (local_c8 >> 0x1a < uVar22 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar23 = (ulonglong)((uVar17 & 0x3ffffff) >> 0xe);
          uVar18 = (ulonglong)((uint)uVar22 & 0x3fff);
          local_c8 = local_c8 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar23 * 8) + 0x10 + uVar18 * 0x18);
          LOCK();
          bVar24 = local_b8 == DAT_14c896180;
          uVar22 = local_c8;
          if (!bVar24) {
            uVar22 = DAT_14c896180;
          }
          DAT_14c896180 = uVar22;
          UNLOCK();
          if (bVar24) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar23 * 8) + uVar18 * 0x18 + 0x10) = 0;
            puVar10 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar23 * 8) + 8 +
                       (ulonglong)(uVar17 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar17 & 0x3ffffff);
            puVar7[1] = puVar10;
            if (puVar10 != (undefined8 *)0x0) goto LAB_14362a58f;
            goto LAB_14362a7de;
          }
          uVar17 = (uint)DAT_14c896180;
          uVar22 = DAT_14c896180;
        }
        puVar7[1] = 0;
LAB_14362a7de:
        puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar7[1] = puVar10;
        iVar5 = 0xff;
        puVar11 = puVar10;
        do {
          puVar9 = puVar11 + 0x20;
          *puVar11 = puVar9;
          iVar5 = iVar5 + -1;
          puVar11 = puVar9;
        } while (iVar5 != 0);
      }
      else {
        puVar7[1] = puVar10;
        puVar9 = puVar7;
      }
      *puVar9 = 0;
LAB_14362a58f:
      *(undefined4 *)(puVar7 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar7 + 2) + -1;
    }
    puVar7[1] = *puVar10;
    *(int *)(puVar7 + 2) = iVar5;
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar24 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar24) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar24) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14aa2a868;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar20 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar10[0xf] = uVar16;
    puVar10[0x10] = 0xd0000052a8817000;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
    puVar10[0x15] = param_1;
    puVar10[0x16] = uVar8;
    *puVar10 = &PTR_FUN_14aa2a858;
    LOCK();
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + 1;
    UNLOCK();
    puVar10[2] = param_1 + 0x40;
    FUN_14302e1ba(puVar10,param_1 + 0x30);
    local_b8 = CONCAT71(local_b8._1_7_,1);
    FUN_1447439e4(puVar10);
    iVar5 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar5 + 1U) {
      FUN_146c54922((longlong *)(param_1 + 0x20),iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8) = puVar10;
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14362a848 FUN_14362a848 body=144 status=ok
// SIG undefined FUN_14362a848(void)

void FUN_14362a848(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined8 **)(param_1 + 8) = puVar1;
    FUN_147c806f0(0);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  FUN_147c7f0b6(lVar2,local_1c,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14362a8da FUN_14362a8da body=137 status=ok
// SIG undefined FUN_14362a8da(void)

void FUN_14362a8da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (iVar3 = FUN_147c7f5e8(*(longlong *)(param_1 + 8),param_2), iVar3 == 0)) {
    FUN_14362aaee(param_1);
    FUN_142972845(param_1 + 0x20,0x7fffffffffffffff);
    iVar3 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar4 = 0;
      do {
        iVar2 = FUN_147c7f5e8(*(undefined8 *)(lVar1 + lVar4),param_2);
        if (iVar2 != 0) {
          FUN_147c6960c(param_2);
          return;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 14362a964 FUN_14362a964 body=394 status=ok
// SIG undefined FUN_14362a964(void)

void FUN_14362a964(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_147c6960c((longlong)iVar4 * 0x18 + *param_1);
      uVar6 = ~(uint)uVar14 & uVar6;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14362aa9a;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          lVar11 = (longlong)iVar8;
        }
        uVar13 = lVar11 + 1U & 0xffffffff;
        iVar4 = iVar3;
      }
      else {
LAB_14362aa9a:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 14362aaee FUN_14362aaee body=68 status=ok
// SIG undefined FUN_14362aaee(void)

void FUN_14362aaee(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1400daade((longlong *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x38) == '\x01') {
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



// FUNCTION 14362ab32 FUN_14362ab32 body=891 status=ok
// SIG undefined FUN_14362ab32(void)

void FUN_14362ab32(longlong *param_1,char param_2)

{
  void *_Dst;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143629e6a();
  if (param_2 == '\0') {
    lVar3 = *(longlong *)(*param_1 + 0x48);
    if (lVar3 == 0) {
LAB_14362ab98:
      lVar3 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_50 = &local_38;
        local_38 = FUN_140754f84;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147da9a76;
        local_60 = FUN_1409f3105;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_14362ab98;
    }
    if (*(int *)(lVar3 + 0x15c) == 0) {
      lVar3 = *(longlong *)(*param_1 + 0x48);
      if (lVar3 == 0) {
LAB_14362abde:
        lVar3 = 0;
      }
      else {
        if (DAT_14cb10130 == 0) {
          local_50 = &local_38;
          local_38 = FUN_140754f84;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_147da9a76;
          local_60 = FUN_1409f3105;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x990;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
        goto LAB_14362abde;
      }
      if ((*(byte *)(lVar3 + 0x156) & 0x40) == 0) {
        lVar3 = *(longlong *)(*param_1 + 0x48);
        if (lVar3 == 0) {
LAB_14362ac20:
          lVar3 = 0;
        }
        else {
          if (DAT_14cb10130 == 0) {
            local_50 = &local_38;
            local_38 = FUN_140754f84;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_147da9a76;
            local_60 = FUN_1409f3105;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x990;
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
          goto LAB_14362ac20;
        }
        if (*(char *)(lVar3 + 0x158) != '\x01') goto LAB_14362ac46;
      }
    }
  }
  FUN_14362aaee(param_1);
  FUN_142972845(param_1 + 4,0x7fffffffffffffff);
LAB_14362ac46:
  if (0 < (int)param_1[5]) {
    uVar2 = 0;
    do {
      lVar4 = (longlong)(int)uVar2;
      lVar3 = *(longlong *)(param_1[4] + lVar4 * 8);
      if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0xa0) & 1) != 0)) {
        FUN_14362a964(*(undefined8 *)(param_1[2] + lVar4 * 8));
        FUN_147c80a32(param_1 + 4,uVar2);
        lVar3 = param_1[2];
        FUN_147c806f0(*(undefined8 *)(lVar3 + lVar4 * 8));
        iVar1 = (int)param_1[3];
        if (~uVar2 + iVar1 != 0) {
          _Dst = (void *)(lVar3 + lVar4 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar2 + iVar1) << 3);
          iVar1 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar1 + -1;
      }
      else {
        uVar2 = uVar2 + 1;
      }
    } while ((int)uVar2 < (int)param_1[5]);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14362aeae FUN_14362aeae body=332 status=ok
// SIG undefined FUN_14362aeae(void)

longlong * FUN_14362aeae(longlong *param_1,longlong *param_2)

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
    FUN_147c80a8e(param_2);
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
        FUN_147c80aee(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14362affb FUN_14362affb body=69 status=ok
// SIG undefined FUN_14362affb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362affb(void)

{
  _DAT_14caf7110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7118,1);
  return;
}



// FUNCTION 14362b040 FUN_14362b040 body=69 status=ok
// SIG undefined FUN_14362b040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362b040(void)

{
  _DAT_14caf7120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7128,1);
  return;
}



// FUNCTION 14362b085 FUN_14362b085 body=69 status=ok
// SIG undefined FUN_14362b085(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362b085(void)

{
  _DAT_14caf7138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7140,1);
  return;
}



// FUNCTION 14362b0ca FUN_14362b0ca body=69 status=ok
// SIG undefined FUN_14362b0ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362b0ca(void)

{
  _DAT_14caf7150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7158,1);
  return;
}



// FUNCTION 14362b10f FUN_14362b10f body=69 status=ok
// SIG undefined FUN_14362b10f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362b10f(void)

{
  _DAT_14caf7160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7168,1);
  return;
}



// FUNCTION 14362b161 FUN_14362b161 body=69 status=ok
// SIG undefined FUN_14362b161(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362b161(void)

{
  _DAT_14caf7178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362b1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7180,1);
  return;
}



// FUNCTION 14362b1a6 FUN_14362b1a6 body=801 status=ok
// SIG undefined FUN_14362b1a6(void)

void FUN_14362b1a6(longlong param_1,double *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *_Dst;
  byte *pbVar12;
  byte *pbVar13;
  PSRWLOCK SRWLock;
  ulonglong uVar14;
  undefined1 auStack_b8 [40];
  PSRWLOCK local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar3 = (double)(float)*param_2;
    if (*(double *)(param_1 + 0x370) <= dVar3 && dVar3 != *(double *)(param_1 + 0x370)) {
      *(double *)(param_1 + 0x370) = dVar3;
      local_58 = 0;
      uStack_50 = 0;
      uStack_50._0_4_ = 0;
      if ((longlong)*(int *)(param_2 + 2) != 0) {
        pbVar12 = (byte *)param_2[1];
        pbVar13 = pbVar12 + (longlong)*(int *)(param_2 + 2) * 0xd0;
        local_90 = (PSRWLOCK)(param_1 + 0x280);
        do {
          if (((*pbVar12 & 2) != 0) && (*(longlong *)(pbVar12 + 8) != 0)) {
            lVar11 = (longlong)(int)uStack_50;
            uVar9 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar9);
            if (uStack_50._4_4_ < uVar9) {
              FUN_14748d140(&local_58);
            }
            _Dst = (ulonglong *)(lVar11 * 0xc0 + local_58);
            memset(_Dst,0,0xc0);
            uVar14 = *(ulonglong *)(pbVar12 + 8);
            SRWLock = (PSRWLOCK)0x0;
            if (DAT_14c992a90 != '\0') {
              SRWLock = local_90;
            }
            if (SRWLock != (PSRWLOCK)0x0) {
              AcquireSRWLockShared(SRWLock);
            }
            if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
              uVar9 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              lVar11 = *(longlong *)(param_1 + 0x2e8);
              if (*(longlong *)(param_1 + 0x2e8) == 0) {
                lVar11 = param_1 + 0x2e0;
              }
              iVar10 = *(int *)(lVar11 + (ulonglong)
                                         (*(int *)(param_1 + 0x2f0) - 1U & (uVar9 >> 0x10 ^ uVar9))
                                         * 4);
              if (iVar10 != -1) {
                do {
                  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar10 * 0x18);
                  if (*puVar1 == uVar14) {
                    if (puVar1 != (ulonglong *)0x0) {
                      uVar14 = 0;
                      if (puVar1 + 1 != (ulonglong *)0x0) {
                        uVar14 = puVar1[1];
                      }
                      goto LAB_14362b34a;
                    }
                    break;
                  }
                  iVar10 = (int)puVar1[2];
                } while (iVar10 != -1);
              }
            }
            uVar14 = 0;
LAB_14362b34a:
            if (SRWLock != (PSRWLOCK)0x0) {
              ReleaseSRWLockShared(SRWLock);
            }
            if ((uVar14 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(uVar14);
            }
            *_Dst = uVar14;
            _Dst[3] = *(ulonglong *)(pbVar12 + 0x20);
            uVar14 = *(ulonglong *)(pbVar12 + 0x18);
            _Dst[1] = *(ulonglong *)(pbVar12 + 0x10);
            _Dst[2] = uVar14;
            uVar14 = *(ulonglong *)(pbVar12 + 0x30);
            uVar4 = *(ulonglong *)(pbVar12 + 0x38);
            uVar5 = *(ulonglong *)(pbVar12 + 0x48);
            _Dst[6] = *(ulonglong *)(pbVar12 + 0x40);
            _Dst[7] = uVar5;
            _Dst[4] = uVar14;
            _Dst[5] = uVar4;
            _Dst[10] = *(ulonglong *)(pbVar12 + 0x60);
            uVar14 = *(ulonglong *)(pbVar12 + 0x58);
            _Dst[8] = *(ulonglong *)(pbVar12 + 0x50);
            _Dst[9] = uVar14;
            _Dst[0xd] = *(ulonglong *)(pbVar12 + 0x78);
            uVar14 = *(ulonglong *)(pbVar12 + 0x70);
            _Dst[0xb] = *(ulonglong *)(pbVar12 + 0x68);
            _Dst[0xc] = uVar14;
            *(float *)(_Dst + 0xe) = (float)*(double *)(pbVar12 + 0x80);
            local_78 = *(ulonglong *)(pbVar12 + 0x98);
            uVar6 = *(undefined8 *)(pbVar12 + 0x88);
            uVar7 = *(undefined8 *)(pbVar12 + 0x90);
            uVar2 = *(undefined8 *)(pbVar12 + 0xb0);
            local_70 = *(ulonglong *)(pbVar12 + 0xa0);
            uVar8 = *(undefined8 *)(pbVar12 + 0xa8);
            local_88._0_4_ = (undefined4)uVar6;
            local_88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_80._0_4_ = (undefined4)uVar7;
            uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_68._0_4_ = (undefined4)uVar8;
            uStack_68._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            local_60._0_4_ = (undefined4)uVar2;
            local_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            _Dst[0x11] = local_78;
            _Dst[0x12] = local_70;
            *(undefined4 *)(_Dst + 0x13) = (undefined4)uStack_68;
            *(undefined4 *)((longlong)_Dst + 0x9c) = uStack_68._4_4_;
            *(undefined4 *)(_Dst + 0x14) = (undefined4)local_60;
            *(undefined4 *)((longlong)_Dst + 0xa4) = local_60._4_4_;
            *(undefined4 *)(_Dst + 0xf) = (undefined4)local_88;
            *(undefined4 *)((longlong)_Dst + 0x7c) = local_88._4_4_;
            *(undefined4 *)(_Dst + 0x10) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)_Dst + 0x84) = uStack_80._4_4_;
            *(undefined1 *)(_Dst + 0x15) = 1;
            local_88 = uVar6;
            uStack_80 = uVar7;
            uStack_68 = uVar8;
            local_60 = uVar2;
            FUN_14054c6c4(_Dst + 0x16);
          }
          pbVar12 = pbVar12 + 0xd0;
        } while (pbVar12 != pbVar13);
        if ((0 < (int)uStack_50) && (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 0x60))) {
          FUN_147860f2b(*(longlong *)(param_1 + 0x350) + 0x58,&local_58);
        }
      }
      FUN_14748d10a(local_58,(int)uStack_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14362b4e8 FUN_14362b4e8 body=1738 status=ok
// SIG undefined FUN_14362b4e8(void)

void FUN_14362b4e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  char cVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_628 [32];
  undefined4 local_608;
  longlong local_600;
  longlong *local_5f8;
  uint *local_5f0;
  undefined1 *local_5e8;
  undefined4 local_5e0;
  longlong local_5d8;
  undefined1 *puStack_5d0;
  undefined1 *local_5c8;
  undefined8 **ppuStack_5c0;
  code *local_5b8;
  longlong *local_5b0;
  undefined8 *local_5a8;
  undefined8 *local_5a0;
  longlong local_590 [64];
  longlong *local_390;
  undefined8 local_388;
  undefined1 local_380 [512];
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 local_170 [256];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_628;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x4000000000;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x4000000000;
  local_390 = (longlong *)0x0;
  local_388 = 0x4000000000;
  local_5a8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *local_5a8 = 0;
  uVar7 = *(uint *)(param_1 + 0x220);
  local_5a0 = local_5a8;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  if (0x40 < uVar7) {
    FUN_147c80fb0(local_170);
    uVar7 = *(uint *)(param_1 + 0x220);
  }
  local_5f8 = (longlong *)(param_1 + 0x218);
  if (uVar7 == 0) {
    uVar12 = 0;
    iVar16 = (int)local_178;
  }
  else {
    lVar3 = *local_5f8;
    lVar14 = 0;
    uVar12 = 0;
    do {
      lVar17 = (longlong)(int)local_68;
      uVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar6);
      if (local_68._4_4_ < uVar6) {
        FUN_147c81098(local_170);
      }
      puVar8 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar8 = local_170;
      }
      *(uint *)(puVar8 + lVar17 * 4) = uVar12;
      iVar16 = *(int *)(lVar3 + 4 + lVar14);
      if ((((((iVar16 != 0) && (uVar6 = *(uint *)(lVar3 + lVar14), -1 < (int)uVar6)) &&
            ((int)uVar6 < DAT_14c9647dc)) &&
           ((plVar10 = (longlong *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
            plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar16)))) &&
          ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
         ((lVar17 = *plVar10, lVar17 != 0 && (-1 < *(char *)(lVar17 + 0xc70))))) {
        uVar12 = uVar12 + *(int *)(lVar17 + 0xd78);
      }
      lVar14 = lVar14 + 0xc;
    } while ((longlong)(int)uVar7 * 0xc != lVar14);
    iVar16 = (int)local_178;
    local_178 = CONCAT44(local_178._4_4_,(int)local_178 + uVar12);
    if ((uint)(local_178._4_4_ - iVar16) < uVar12) {
      FUN_147c81116(local_380);
    }
  }
  puVar8 = local_180;
  if (local_180 == (undefined1 *)0x0) {
    puVar8 = local_380;
  }
  memset(puVar8 + (longlong)iVar16 * 8,0,(longlong)(int)uVar12 * 8);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  if ((int)local_388._4_4_ < (int)uVar12) {
    FUN_14042648c(local_590,uVar12);
  }
  local_600 = param_1;
  if ((longlong)*(int *)(param_1 + 0x220) != 0) {
    puVar15 = *(uint **)(param_1 + 0x218);
    local_5f0 = puVar15 + (longlong)*(int *)(param_1 + 0x220) * 3;
    do {
      if ((((puVar15[1] != 0) && (uVar7 = *puVar15, -1 < (int)uVar7)) &&
          ((int)uVar7 < DAT_14c9647dc)) &&
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == puVar15[1])) &&
          (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
           (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))) {
        if ((char)plVar10[0x18e] < '\0') {
          local_608 = 1;
          (**(code **)(*plVar10 + 0xc98))
                    (plVar10,plVar10 + (longlong)(int)plVar10[0xe3] * 2 + 0xda,(char)puVar15[2],
                     *(undefined1 *)((longlong)puVar15 + 9));
        }
        else {
          lVar3 = plVar10[0x1af];
          if (0 < (longlong)(int)lVar3) {
            lVar14 = 0;
            do {
              puVar4 = *(uint **)(plVar10[0x1ae] + lVar14 * 8);
              if (DAT_14c761734 == '\x01') {
                if ((puVar4 != (uint *)0x0) && (lVar17 = *(longlong *)(puVar4 + 0x4e), lVar17 != 0))
                {
                  lVar18 = *(longlong *)(lVar17 + 0x20);
                  plVar11 = *(longlong **)(lVar17 + 0x28);
                  if (plVar11 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                    UNLOCK();
                  }
                  if (lVar18 == 0) {
                    cVar13 = '\x01';
                  }
                  else {
                    cVar13 = **(char **)(*(longlong *)(puVar4 + 0x4e) + 0x20);
                  }
                  if (plVar11 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar11 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar11)(plVar11);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar11 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                    }
                  }
                  if (cVar13 == '\0') goto LAB_14362b809;
                }
              }
              else {
LAB_14362b809:
                if (((((puVar4[2] & 1) != 0) && (puVar4[1] != 0)) &&
                    (uVar7 = *puVar4, -1 < (int)uVar7)) &&
                   ((((int)uVar7 < DAT_14c9647dc &&
                     (plVar11 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                     plVar11 != (longlong *)0x0)) &&
                    ((*(uint *)(plVar11 + 2) == puVar4[1] &&
                     ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))))) {
                  if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                    lVar17 = *plVar11;
                  }
                  else {
                    lVar17 = 0;
                  }
                  lVar18 = DAT_14c997cc0;
                  if (DAT_14c997cc0 == 0) {
                    plVar11 = (longlong *)FUN_145a62958();
                    lVar18 = plVar11[0x22];
                    if (lVar18 == 0) {
                      (**(code **)(*plVar11 + 1000))(plVar11);
                      lVar18 = plVar11[0x22];
                    }
                  }
                  cVar13 = *(char *)(lVar18 + 0x75);
                  if (*(char *)(lVar17 + 0x31) != '\0') {
                    cVar13 = *(char *)(lVar17 + 0x31);
                  }
                  if ((cVar13 != '\x03') && (*(longlong *)(puVar4 + 0x4e) != 0)) goto LAB_14362b895;
                }
                uVar5 = local_388;
                if (((short)puVar4[4] != -1) &&
                   ((lVar17 = *(longlong *)(puVar4 + 0x4e), lVar17 != 0 &&
                    (*(int *)(lVar17 + 0x18) == -1)))) {
                  lVar18 = (longlong)(int)local_388;
                  uVar7 = (int)local_388 + 1;
                  local_388 = CONCAT44(local_388._4_4_,uVar7);
                  if (local_388._4_4_ < uVar7) {
                    FUN_147c8121c(local_590,uVar5 & 0xffffffff);
                  }
                  plVar11 = local_390;
                  if (local_390 == (longlong *)0x0) {
                    plVar11 = local_590;
                  }
                  plVar11[lVar18] = lVar17;
                }
              }
LAB_14362b895:
              lVar14 = lVar14 + 1;
            } while ((int)lVar3 != lVar14);
          }
        }
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != local_5f0);
  }
  if (0 < (int)local_388) {
    plVar10 = local_390;
    if (local_390 == (longlong *)0x0) {
      plVar10 = local_590;
    }
    FUN_1401fab48(*(longlong *)(*plVar10 + 8) + 0x70);
  }
  lVar3 = local_600;
  local_5b0 = &local_5d8;
  local_5d8 = local_600;
  puStack_5d0 = local_170;
  ppuStack_5c0 = &local_5a8;
  local_5b8 = FUN_14363e172;
  local_5c8 = local_380;
  FUN_1400bd65e(*(undefined4 *)(local_600 + 0x220),&local_5b8,0);
  puVar9 = (undefined8 *)*local_5a0;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      local_5d8 = puVar9[1];
      puStack_5d0 = (undefined1 *)puVar9[2];
      local_5c8 = (undefined1 *)puVar9[3];
      ppuStack_5c0 = (undefined8 **)puVar9[4];
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      bVar19 = local_5a0 != (undefined8 *)0x0;
      local_5a0 = puVar9;
      if (bVar19) {
        FUN_1400020a8();
      }
      FUN_140043360(local_5d8,&puStack_5d0,0);
      puVar9 = (undefined8 *)*local_5a0;
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (DAT_14caf7130 == '\x01') {
    FUN_141731f7a(lVar3);
  }
  local_5e8 = local_380;
  if (local_180 != (undefined1 *)0x0) {
    local_5e8 = local_180;
  }
  local_5e0 = (int)local_178;
  FUN_144aa65e2(lVar3);
  *(undefined4 *)(lVar3 + 0x220) = 0;
  if (*(int *)(lVar3 + 0x224) < 0) {
    FUN_147c8129a(local_5f8);
  }
  while (local_5a0 != (undefined8 *)0x0) {
    local_5a0 = (undefined8 *)*local_5a0;
    FUN_1400020a8();
  }
  if (local_390 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_180 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14362bbb4 FUN_14362bbb4 body=121 status=ok
// SIG undefined FUN_14362bbb4(void)

undefined4 FUN_14362bbb4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (DAT_14c761828 == 0) {
    FUN_14362b4e8(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  if (DAT_14c761828 != 0) {
    FUN_14362b4e8(param_1);
  }
  FUN_1447ae254(param_1 + 0x88,param_1,param_2);
  FUN_1447ae254(param_1 + 0xa0,param_1,param_2);
  return param_2;
}



// FUNCTION 14362bc2e FUN_14362bc2e body=120 status=ok
// SIG undefined FUN_14362bc2e(void)

void FUN_14362bc2e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [7];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x378);
  local_18 = param_2;
  if (lVar1 == 0) {
    lVar1 = FUN_147c69bda(*(undefined8 *)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x378) = lVar1;
  }
  local_19 = 0;
  FUN_140d0b320(lVar1 + 0xf8,local_20,&local_18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14362bca8 FUN_14362bca8 body=25 status=ok
// SIG undefined FUN_14362bca8(void)

void FUN_14362bca8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x378) == 0) {
    return;
  }
  FUN_147c69caa(*(longlong *)(param_1 + 0x378) + 0xf8);
  return;
}



// FUNCTION 14362bcc1 FUN_14362bcc1 body=59 status=ok
// SIG undefined FUN_14362bcc1(void)

void FUN_14362bcc1(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14caf7190;
  if (DAT_14caf7190 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14caf7190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014362bcf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14362bcfc FUN_14362bcfc body=69 status=ok
// SIG undefined FUN_14362bcfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bcfc(void)

{
  _DAT_14caf71a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71a8,1);
  return;
}



// FUNCTION 14362bd41 FUN_14362bd41 body=69 status=ok
// SIG undefined FUN_14362bd41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bd41(void)

{
  _DAT_14caf71b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71b8,1);
  return;
}



// FUNCTION 14362bd86 FUN_14362bd86 body=69 status=ok
// SIG undefined FUN_14362bd86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bd86(void)

{
  _DAT_14caf71c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71c8,1);
  return;
}



// FUNCTION 14362bdcb FUN_14362bdcb body=69 status=ok
// SIG undefined FUN_14362bdcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bdcb(void)

{
  _DAT_14caf71d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362be0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71d8,1);
  return;
}



// FUNCTION 14362be10 FUN_14362be10 body=69 status=ok
// SIG undefined FUN_14362be10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362be10(void)

{
  _DAT_14caf71e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362be52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71e8,1);
  return;
}



// FUNCTION 14362be55 FUN_14362be55 body=69 status=ok
// SIG undefined FUN_14362be55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362be55(void)

{
  _DAT_14caf71f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362be97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf71f8,1);
  return;
}



// FUNCTION 14362be9a FUN_14362be9a body=69 status=ok
// SIG undefined FUN_14362be9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362be9a(void)

{
  _DAT_14caf7200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7208,1);
  return;
}



// FUNCTION 14362bedf FUN_14362bedf body=69 status=ok
// SIG undefined FUN_14362bedf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bedf(void)

{
  _DAT_14caf7210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bf21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7218,1);
  return;
}



// FUNCTION 14362bf24 FUN_14362bf24 body=69 status=ok
// SIG undefined FUN_14362bf24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bf24(void)

{
  _DAT_14caf7220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bf66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7228,1);
  return;
}



// FUNCTION 14362bf69 FUN_14362bf69 body=69 status=ok
// SIG undefined FUN_14362bf69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bf69(void)

{
  _DAT_14caf7230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7238,1);
  return;
}



// FUNCTION 14362bfae FUN_14362bfae body=69 status=ok
// SIG undefined FUN_14362bfae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bfae(void)

{
  _DAT_14caf7240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7248,1);
  return;
}



// FUNCTION 14362bff3 FUN_14362bff3 body=69 status=ok
// SIG undefined FUN_14362bff3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362bff3(void)

{
  _DAT_14caf7250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7258,1);
  return;
}



// FUNCTION 14362c038 FUN_14362c038 body=69 status=ok
// SIG undefined FUN_14362c038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c038(void)

{
  _DAT_14caf7260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7268,1);
  return;
}



// FUNCTION 14362c07d FUN_14362c07d body=69 status=ok
// SIG undefined FUN_14362c07d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c07d(void)

{
  _DAT_14caf7270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c0bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7278,1);
  return;
}



// FUNCTION 14362c0c2 FUN_14362c0c2 body=69 status=ok
// SIG undefined FUN_14362c0c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c0c2(void)

{
  _DAT_14caf7280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7288,1);
  return;
}



// FUNCTION 14362c107 FUN_14362c107 body=69 status=ok
// SIG undefined FUN_14362c107(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c107(void)

{
  _DAT_14caf7290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7298,1);
  return;
}



// FUNCTION 14362c14c FUN_14362c14c body=69 status=ok
// SIG undefined FUN_14362c14c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c14c(void)

{
  _DAT_14caf72a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72a8,1);
  return;
}



// FUNCTION 14362c191 FUN_14362c191 body=69 status=ok
// SIG undefined FUN_14362c191(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c191(void)

{
  _DAT_14caf72b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72b8,1);
  return;
}



// FUNCTION 14362c1d6 FUN_14362c1d6 body=69 status=ok
// SIG undefined FUN_14362c1d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c1d6(void)

{
  _DAT_14caf72c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72c8,1);
  return;
}



// FUNCTION 14362c21b FUN_14362c21b body=69 status=ok
// SIG undefined FUN_14362c21b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c21b(void)

{
  _DAT_14caf72d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c25d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72d8,1);
  return;
}



// FUNCTION 14362c260 FUN_14362c260 body=69 status=ok
// SIG undefined FUN_14362c260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c260(void)

{
  _DAT_14caf72e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c2a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72e8,1);
  return;
}



// FUNCTION 14362c2a5 FUN_14362c2a5 body=69 status=ok
// SIG undefined FUN_14362c2a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c2a5(void)

{
  _DAT_14caf72f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf72f8,1);
  return;
}



// FUNCTION 14362c2ea FUN_14362c2ea body=69 status=ok
// SIG undefined FUN_14362c2ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c2ea(void)

{
  _DAT_14caf7300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7308,1);
  return;
}



// FUNCTION 14362c32f FUN_14362c32f body=69 status=ok
// SIG undefined FUN_14362c32f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c32f(void)

{
  _DAT_14caf7310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7318,1);
  return;
}



// FUNCTION 14362c374 FUN_14362c374 body=69 status=ok
// SIG undefined FUN_14362c374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c374(void)

{
  _DAT_14caf7320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7328,1);
  return;
}



// FUNCTION 14362c3b9 FUN_14362c3b9 body=69 status=ok
// SIG undefined FUN_14362c3b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c3b9(void)

{
  _DAT_14caf7330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7338,1);
  return;
}



// FUNCTION 14362c3fe FUN_14362c3fe body=69 status=ok
// SIG undefined FUN_14362c3fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c3fe(void)

{
  _DAT_14caf7340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7348,1);
  return;
}



// FUNCTION 14362c443 FUN_14362c443 body=69 status=ok
// SIG undefined FUN_14362c443(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c443(void)

{
  _DAT_14caf7350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7358,1);
  return;
}



// FUNCTION 14362c488 FUN_14362c488 body=69 status=ok
// SIG undefined FUN_14362c488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c488(void)

{
  _DAT_14caf7360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7368,1);
  return;
}



// FUNCTION 14362c4cd FUN_14362c4cd body=69 status=ok
// SIG undefined FUN_14362c4cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c4cd(void)

{
  _DAT_14caf7370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c50f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7378,1);
  return;
}



// FUNCTION 14362c512 FUN_14362c512 body=69 status=ok
// SIG undefined FUN_14362c512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c512(void)

{
  _DAT_14caf7380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7388,1);
  return;
}



// FUNCTION 14362c557 FUN_14362c557 body=69 status=ok
// SIG undefined FUN_14362c557(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c557(void)

{
  _DAT_14caf7390 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7398,1);
  return;
}



// FUNCTION 14362c59c FUN_14362c59c body=69 status=ok
// SIG undefined FUN_14362c59c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c59c(void)

{
  _DAT_14caf73a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c5de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73a8,1);
  return;
}



// FUNCTION 14362c5e1 FUN_14362c5e1 body=69 status=ok
// SIG undefined FUN_14362c5e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c5e1(void)

{
  _DAT_14caf73b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73b8,1);
  return;
}



// FUNCTION 14362c626 FUN_14362c626 body=69 status=ok
// SIG undefined FUN_14362c626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c626(void)

{
  _DAT_14caf73c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73c8,1);
  return;
}



// FUNCTION 14362c66b FUN_14362c66b body=69 status=ok
// SIG undefined FUN_14362c66b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c66b(void)

{
  _DAT_14caf73d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73d8,1);
  return;
}



// FUNCTION 14362c6b0 FUN_14362c6b0 body=69 status=ok
// SIG undefined FUN_14362c6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c6b0(void)

{
  _DAT_14caf73e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c6f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73e8,1);
  return;
}



// FUNCTION 14362c6f5 FUN_14362c6f5 body=69 status=ok
// SIG undefined FUN_14362c6f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c6f5(void)

{
  _DAT_14caf73f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf73f8,1);
  return;
}



// FUNCTION 14362c73a FUN_14362c73a body=69 status=ok
// SIG undefined FUN_14362c73a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c73a(void)

{
  _DAT_14caf7400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7408,1);
  return;
}



// FUNCTION 14362c77f FUN_14362c77f body=69 status=ok
// SIG undefined FUN_14362c77f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c77f(void)

{
  _DAT_14caf7410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7418,1);
  return;
}



// FUNCTION 14362c7c4 FUN_14362c7c4 body=69 status=ok
// SIG undefined FUN_14362c7c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c7c4(void)

{
  _DAT_14caf7420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7428,1);
  return;
}



// FUNCTION 14362c809 FUN_14362c809 body=69 status=ok
// SIG undefined FUN_14362c809(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14362c809(void)

{
  _DAT_14caf7430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014362c84b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf7438,1);
  return;
}


