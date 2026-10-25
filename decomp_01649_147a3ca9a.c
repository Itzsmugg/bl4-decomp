// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a3ca9a FUN_147a3ca9a body=88 status=ok
// SIG undefined FUN_147a3ca9a(void)

undefined8 * FUN_147a3ca9a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a4d72e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a3caf2 FUN_147a3caf2 body=472 status=ok
// SIG undefined FUN_147a3caf2(void)

void FUN_147a3caf2(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1434a7268(&local_60);
  if (0 < local_58) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar3 = (int)param_1[5];
    }
    local_70 = (uint)local_40;
    iStack_6c = local_40._4_4_;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    local_80 = (undefined4)local_50;
    uStack_7c = local_50._4_4_;
    uStack_78 = (undefined4)uStack_48;
    uStack_74 = uStack_48._4_4_;
    local_88 = param_1;
    if ((local_40._4_4_ != iVar3) || (uStack_48 != plVar1)) {
      do {
        lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x18);
        if ((*(char *)(lVar4 + 0x1fb) != '\0' & (param_2 ^ 1)) == 0) {
          if ((longlong)local_58 == 0) {
            fVar5 = 0.0;
          }
          else {
            dVar2 = *(double *)(lVar4 + 400);
            fVar5 = 0.0;
            fVar6 = 3.4028235e+38;
            lVar4 = 0;
            do {
              fVar7 = ABS((float)(dVar2 + dVar2) - *(float *)(local_60 + lVar4));
              if (fVar7 < fVar6) {
                fVar5 = *(float *)(local_60 + 4 + lVar4);
                fVar6 = fVar7;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)local_58 * 8 != lVar4);
          }
          lVar4 = *local_88 + (longlong)iStack_6c * 0x18;
          fVar6 = *(float *)(lVar4 + 8);
          if (fVar6 <= 0.0 || fVar5 <= fVar6) {
            fVar6 = fVar5;
          }
          *(float *)(lVar4 + 8) = fVar6;
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar3));
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3cccc FUN_147a3cccc body=1281 status=ok
// SIG undefined FUN_147a3cccc(void)

void FUN_147a3cccc(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1434a7268(&local_c8);
  pvVar7 = local_c8;
  local_d8 = (void *)0x0;
  local_d0 = local_c0;
  if ((longlong)local_c0 == 0) {
    local_cc = 0;
    local_b0 = 0;
LAB_147a3cd2f:
    local_b8 = (void *)0x0;
    local_ac = 0;
  }
  else {
    FUN_147a4d72e(&local_d8,local_c0,0);
    memcpy(local_d8,pvVar7,(longlong)local_c0 << 3);
    pvVar7 = local_d8;
    local_b0 = local_d0;
    lVar3 = (longlong)local_d0;
    local_b8 = (void *)0x0;
    if (lVar3 == 0) goto LAB_147a3cd2f;
    FUN_147a4d72e(&local_b8,local_d0,0);
    memcpy(local_b8,pvVar7,lVar3 << 3);
  }
  lVar3 = FUN_144a80466();
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar3 != 0) goto LAB_147a3cd5a;
    bVar2 = true;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_147a3cd5a:
    lVar4 = FUN_144a78d6a();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      bVar2 = false;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar8 = lVar3;
      }
      goto LAB_147a3cd76;
    }
    bVar2 = false;
  }
  lVar8 = 0;
LAB_147a3cd76:
  lVar4 = FUN_144a78d6a();
  pvVar7 = local_b8;
  if (lVar8 == lVar4) {
    local_98 = (void *)0x0;
    lVar4 = (longlong)local_b0;
    local_90 = local_b0;
    if (lVar4 == 0) {
      local_8c = 0;
    }
    else {
      FUN_147a4d72e(&local_98,local_b0,0);
      memcpy(local_98,pvVar7,lVar4 << 3);
    }
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar3 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar3;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (pvVar7 = local_98, uStack_58 != lVar3)) {
      do {
        if (*(longlong *)(*local_88 + (longlong)iStack_6c * 0x10) != 0) {
          FUN_1434b5d76(&local_98);
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
        pvVar7 = local_98;
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar9))
      ;
    }
  }
  else {
    local_a8 = (void *)0x0;
    lVar4 = (longlong)local_b0;
    local_a0 = local_b0;
    if (lVar4 == 0) {
      local_9c = 0;
    }
    else {
      FUN_147a4d72e(&local_a8,local_b0,0);
      memcpy(local_a8,pvVar7,lVar4 << 3);
    }
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar9) || (pvVar7 = local_a8, uStack_58 != lVar4)) {
      do {
        lVar8 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
        if (lVar8 != 0) {
          if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          if (((bVar2) || (lVar5 = FUN_144a78d6a(), lVar5 == 0)) ||
             (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30) {
              lVar6 = lVar3;
            }
          }
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            FUN_1434b5d76(&local_a8,lVar8);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
        pvVar7 = local_a8;
      } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar9))
      ;
    }
  }
  if (pvVar7 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3d1ce FUN_147a3d1ce body=1485 status=ok
// SIG undefined FUN_147a3d1ce(void)

void FUN_147a3d1ce(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,float param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  float local_1b0;
  int local_1a8;
  int local_1a0;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_7 < param_8) {
    dVar2 = param_5[2];
    local_e8 = param_2[2];
    dVar7 = dVar2 - local_e8;
    dVar3 = *param_5;
    dVar4 = param_5[1];
    local_f8 = *param_2;
    local_f0 = param_2[1];
    dVar8 = dVar4 - local_f0;
    dVar15 = dVar3 - local_f8;
    if (((9.999999747378752e-05 < ABS(dVar15)) || (9.999999747378752e-05 < ABS(dVar8))) ||
       (9.999999747378752e-05 < ABS(dVar7))) {
      dVar17 = 1.0 / SQRT(dVar7 * dVar7 + dVar15 * dVar15 + dVar8 * dVar8);
      dVar7 = dVar7 * dVar17;
      dVar8 = dVar8 * dVar17;
      dVar17 = dVar17 * dVar15;
      local_180 = param_3[2];
      local_190 = local_180 - local_e8;
      local_178 = *param_3;
      local_188 = param_3[1];
      dVar11 = local_188 - local_f0;
      dVar9 = local_178 - local_f8;
      dVar15 = dVar7 * local_190 + dVar17 * dVar9 + dVar8 * dVar11;
      dVar16 = dVar15 * dVar17 - dVar9;
      dVar10 = dVar8 * dVar15 - dVar11;
      local_100 = param_4[2];
      dVar15 = dVar7 * dVar15 - local_190;
      local_110 = *param_4;
      local_108 = param_4[1];
      local_170 = dVar3;
      local_168 = dVar4;
      local_160 = dVar2;
      if ((float)(dVar15 * dVar15 + dVar10 * dVar10 + dVar16 * dVar16) < param_6) {
        dVar15 = dVar7 * (local_100 - local_e8) +
                 dVar17 * (local_110 - local_f8) + dVar8 * (local_108 - local_f0);
        dVar16 = dVar15 * dVar17 - (local_110 - local_f8);
        dVar8 = dVar8 * dVar15 - (local_108 - local_f0);
        dVar15 = dVar7 * dVar15 - (local_100 - local_e8);
        if ((float)(dVar15 * dVar15 + dVar8 * dVar8 + dVar16 * dVar16) < param_6)
        goto LAB_147a3d2fb;
      }
      local_e8 = local_e8 + local_190 * 0.5;
      local_f0 = local_f0 + dVar11 * 0.5;
      local_f8 = local_f8 + dVar9 * 0.5;
      dVar8 = (local_100 - local_180) * 0.5 + local_180;
      dVar7 = (local_108 - local_188) * 0.5 + local_188;
      dVar15 = (local_110 - local_178) * 0.5 + local_178;
      local_100 = (dVar2 - local_100) * 0.5 + local_100;
      local_108 = (dVar4 - local_108) * 0.5 + local_108;
      local_110 = (dVar3 - local_110) * 0.5 + local_110;
      local_130 = (local_100 - dVar8) * 0.5 + dVar8;
      local_138 = (local_108 - dVar7) * 0.5 + dVar7;
      local_140 = (local_110 - dVar15) * 0.5 + dVar15;
      local_118 = (dVar8 - local_e8) * 0.5 + local_e8;
      local_120 = (dVar7 - local_f0) * 0.5 + local_f0;
      local_128 = (dVar15 - local_f8) * 0.5 + local_f8;
      local_148 = (local_130 - local_118) * 0.5 + local_118;
      local_150 = (local_138 - local_120) * 0.5 + local_120;
      local_158 = (local_140 - local_128) * 0.5 + local_128;
      local_1a0 = param_8;
      local_1b0 = param_6;
      local_1b8 = &local_158;
      local_1a8 = param_7 + 1;
      FUN_147a3d1ce(param_1);
      local_1a0 = param_8;
      local_1b0 = param_6;
      local_1b8 = param_5;
      local_1a8 = param_7 + 1;
      FUN_147a3d1ce(param_1,&local_158,&local_140,&local_110);
      if ((local_e0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_147a3d2fb:
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1403e3958(param_1,iVar5);
  }
  lVar6 = *param_1;
  *(double *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = param_5[2];
  uVar12 = *(undefined4 *)((longlong)param_5 + 4);
  uVar13 = *(undefined4 *)(param_5 + 1);
  uVar14 = *(undefined4 *)((longlong)param_5 + 0xc);
  puVar1 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
  *puVar1 = *(undefined4 *)param_5;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 147a3d79c FUN_147a3d79c body=62 status=ok
// SIG undefined FUN_147a3d79c(void)

void FUN_147a3d79c(void)

{
  FUN_147a3d1ce();
  return;
}



// FUNCTION 147a3d7da FUN_147a3d7da body=266 status=ok
// SIG undefined FUN_147a3d7da(void)

void FUN_147a3d7da(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1457437e2(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3d8e6 FUN_147a3d8e6 body=266 status=ok
// SIG undefined FUN_147a3d8e6(void)

void FUN_147a3d8e6(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a3d9f2(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3d9f2 FUN_147a3d9f2 body=226 status=ok
// SIG undefined FUN_147a3d9f2(void)

void FUN_147a3d9f2(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,&local_48);
  if (0 < local_40) {
    (**(code **)(**(longlong **)(local_48 + 8) + 0x70))
              (*(longlong **)(local_48 + 8),param_2,param_3);
    if (1 < local_40) {
      lVar2 = 1;
      lVar1 = 0x18;
      do {
        (**(code **)(**(longlong **)(local_48 + lVar1) + 0x70))
                  (*(longlong **)(local_48 + lVar1),&local_4c,&local_50);
        fVar3 = local_4c;
        if (*param_2 <= local_4c) {
          fVar3 = *param_2;
        }
        *param_2 = fVar3;
        fVar3 = local_50;
        if (local_50 <= *param_3) {
          fVar3 = *param_3;
        }
        *param_3 = fVar3;
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x10;
      } while (lVar2 < local_40);
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3dada FUN_147a3dada body=55 status=ok
// SIG undefined FUN_147a3dada(void)

undefined8 * FUN_147a3dada(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_140ef9edc(param_2,0);
  *(longlong *)*param_2 = param_1 + -0x28;
  return param_2;
}



// FUNCTION 147a3db24 FUN_147a3db24 body=769 status=ok
// SIG undefined FUN_147a3db24(void)

/* WARNING: Removing unreachable block (ram,0x000147a3dda0) */
/* WARNING: Removing unreachable block (ram,0x000147a3dd02) */

void FUN_147a3db24(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14047afda(&local_68);
  cVar4 = FUN_14047b282(local_68,&local_58,0);
  plVar5 = local_60;
  if ((cVar4 == '\0') || (local_58 == 0)) {
    if (*(int *)(local_68 + 0x40) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(local_68 + 0x38);
    }
    FUN_140002266(&local_78,L"Failed to parse the JSON data. Error: %s",puVar9);
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_3,iVar3);
    }
    plVar5 = local_60;
    lVar6 = *param_3;
    lVar8 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar6 + lVar8) = 0;
    *(undefined8 *)(lVar6 + lVar8) = local_78;
    *(undefined4 *)(lVar6 + 8 + lVar8) = (undefined4)local_70;
    *(undefined4 *)(lVar6 + 0xc + lVar8) = local_70._4_4_;
    local_70 = 0;
    local_78 = 0;
    if (local_60 == (longlong *)0x0) goto LAB_147a3ddc7;
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147a3ddc7;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_147a3ddc7;
    lVar6 = *plVar5;
  }
  else {
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e441a0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
    *(undefined4 *)(plVar5 + 8) = 0xffffffff;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    cVar4 = FUN_142a66c8c(*(undefined8 *)(param_1 + 0x10),param_1,plVar5 + 2,0);
    if (cVar4 == '\0') {
      pwVar7 = L"Failed to backup existing data before import.";
LAB_147a3dd43:
      FUN_140002266(&local_68,pwVar7);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_3,iVar3);
      }
      lVar6 = *param_3;
      lVar8 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar8) = 0;
      *(longlong *)(lVar6 + lVar8) = local_68;
      local_68 = 0;
      *(undefined4 *)(lVar6 + 8 + lVar8) = (undefined4)local_60;
      *(undefined4 *)(lVar6 + 0xc + lVar8) = local_60._4_4_;
      local_60 = (longlong *)0x0;
    }
    else {
      local_88 = 0;
      uStack_80 = 0;
      uStack_90 = CONCAT71(uStack_90._1_7_,1);
      local_98 = 0x20002000;
      cVar4 = FUN_146f0329c(local_58,*(undefined8 *)(param_1 + 0x10),param_1,0);
      if (cVar4 == '\0') {
        local_88 = 0;
        uStack_80 = 0;
        uStack_90 = CONCAT71(uStack_90._1_7_,1);
        local_98 = 0x20002000;
        FUN_146f0329c(plVar5 + 2,*(undefined8 *)(param_1 + 0x10),param_1,0);
        pwVar7 = L"Failed to import JSON data. Check logs for details.";
        goto LAB_147a3dd43;
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_147a3ddc7;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147a3ddc7;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_147a3ddc7;
    lVar6 = *plVar5;
  }
  (**(code **)(lVar6 + 0x10))(plVar5);
LAB_147a3ddc7:
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3de2a FUN_147a3de2a body=879 status=ok
// SIG undefined FUN_147a3de2a(void)

void FUN_147a3de2a(double *param_1,double *param_2)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar2 = -(ulonglong)(param_1[3] != 0.0);
  dVar5 = (double)(~uVar2 & 0x3c9cd2b297d889bd | (ulonglong)param_1[3] & uVar2);
  dVar1 = param_1[2] / dVar5;
  dVar4 = ((dVar1 * 0.07407407407407407 * dVar1 * dVar1 -
           (param_1[1] / dVar5) * dVar1 * 0.3333333333333333) + *param_1 / dVar5) * 0.5;
  dVar5 = (dVar1 * dVar1 * -0.3333333333333333 + param_1[1] / dVar5) * 0.3333333333333333;
  dVar6 = dVar5 * dVar5 * dVar5;
  dVar3 = dVar4 * dVar4 + dVar6;
  if (ABS(dVar3) <= 1e-08) {
    if (1e-08 < ABS(dVar4)) {
      dVar5 = 0.0;
      if (0.0 <= dVar4) {
        if (0.0 < dVar4) {
          dVar5 = pow(dVar4,0.3333333333333333);
          dVar5 = -dVar5;
        }
      }
      else {
        dVar5 = pow(-dVar4,0.3333333333333333);
      }
      *param_2 = dVar5 + dVar5;
      param_2[1] = -dVar5;
      uVar8 = 2;
      goto LAB_147a3e08a;
    }
    *param_2 = 0.0;
  }
  else {
    if (dVar3 < 0.0) {
      if (-0.0 < dVar6) {
        dVar3 = sqrt(-dVar6);
      }
      else {
        dVar3 = SQRT(-dVar6);
      }
      dVar4 = acos(-dVar4 / dVar3);
      dVar4 = dVar4 * 0.3333333333333333;
      if (-0.0 < dVar5) {
        dVar5 = sqrt(-dVar5);
      }
      else {
        dVar5 = SQRT(-dVar5);
      }
      dVar3 = cos(dVar4);
      *param_2 = dVar3 * (dVar5 + dVar5);
      dVar5 = -(dVar5 + dVar5);
      dVar3 = cos(dVar4 + 1.0471975511965976);
      param_2[1] = dVar3 * dVar5;
      dVar4 = cos(dVar4 + -1.0471975511965976);
      param_2[2] = dVar4 * dVar5;
      uVar8 = 3;
      goto LAB_147a3e08a;
    }
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    dVar5 = dVar3 - dVar4;
    if (dVar5 <= 0.0) {
      uVar7 = 0;
      uVar8 = 0;
      if (dVar5 < 0.0) {
        dVar5 = pow(-dVar5,0.3333333333333333);
        uVar8 = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
        uVar7 = SUB84(dVar5,0);
      }
    }
    else {
      dVar5 = pow(dVar5,0.3333333333333333);
      uVar7 = SUB84(dVar5,0);
      uVar8 = (uint)((ulonglong)dVar5 >> 0x20);
    }
    dVar4 = dVar4 + dVar3;
    dVar5 = 0.0;
    if (dVar4 <= 0.0) {
      if (dVar4 < 0.0) {
        dVar5 = pow(-dVar4,0.3333333333333333);
        dVar5 = -dVar5;
      }
    }
    else {
      dVar5 = pow(dVar4,0.3333333333333333);
    }
    *param_2 = (double)CONCAT44(uVar8,uVar7) - dVar5;
  }
  uVar8 = 1;
LAB_147a3e08a:
  uVar2 = 0;
  do {
    param_2[uVar2] = param_2[uVar2] - dVar1 * 0.3333333333333333;
    uVar2 = uVar2 + 1;
  } while (uVar8 != uVar2);
  return;
}



// FUNCTION 147a3e199 FUN_147a3e199 body=78 status=ok
// SIG undefined FUN_147a3e199(void)

void FUN_147a3e199(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  double dVar1;
  
  dVar1 = (param_3 - param_2) - (param_2 - param_1);
  *param_5 = ((param_4 - param_3) - (param_3 - param_2)) - dVar1;
  *param_6 = dVar1 * 3.0;
  *param_7 = (param_2 - param_1) * 3.0;
  *param_8 = param_1;
  return;
}



// FUNCTION 147a3e1e7 FUN_147a3e1e7 body=1521 status=ok
// SIG undefined FUN_147a3e1e7(void)

void FUN_147a3e1e7(undefined4 param_1,float param_2,float param_3,float param_4,uint param_5,
                  undefined8 param_6,float param_7,float param_8,float param_9,uint param_10,
                  float param_11)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_138 [36];
  float local_114;
  float local_110;
  undefined4 local_10c;
  double local_108 [4];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar11 = param_7 - param_2;
  local_114 = param_2;
  local_10c = param_1;
  fVar3 = atanf(param_3);
  fVar3 = (float)(longlong)
                 (fVar3 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar3 < 0.0) * 4)) *
          -6.2831855 + fVar3;
  if (fVar3 <= 1.5707964) {
    if (fVar3 < -1.5707964) {
      fVar9 = -3.1415927;
      goto LAB_147a3e2e3;
    }
    fVar9 = 1.0;
  }
  else {
    fVar9 = 3.1415927;
LAB_147a3e2e3:
    fVar3 = fVar9 - fVar3;
    fVar9 = -1.0;
  }
  fVar3 = fVar3 * fVar3;
  if (param_5 < 2) {
    param_4 = SQRT(param_3 * fVar11 * param_3 * fVar11 + fVar11 * fVar11) * 0.33333334;
  }
  param_11 = param_11 - local_114;
  fVar4 = atanf(param_8);
  fVar4 = (float)(longlong)
                 (fVar4 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar4 < 0.0) * 4)) *
          -6.2831855 + fVar4;
  if (fVar4 <= 1.5707964) {
    if (-1.5707964 <= fVar4) {
      fVar10 = 1.0;
      goto LAB_147a3e40e;
    }
    fVar10 = -3.1415927;
  }
  else {
    fVar10 = 3.1415927;
  }
  fVar4 = fVar10 - fVar4;
  fVar10 = -1.0;
LAB_147a3e40e:
  fVar4 = fVar4 * fVar4;
  if ((param_10 & 0xfffffffd) == 0) {
    param_9 = SQRT(fVar11 * fVar11 + param_8 * fVar11 * param_8 * fVar11) * 0.33333334;
  }
  dVar5 = (double)(((param_7 -
                    (((((fVar4 * -2.6051615e-07 + 2.4760495e-05) * fVar4 + -0.0013888378) * fVar4 +
                      0.041666638) * fVar4 + -0.5) * fVar4 + 1.0) * fVar10 * param_9) - local_114) /
                  fVar11);
  local_e0 = (double)((((((((fVar3 * -2.6051615e-07 + 2.4760495e-05) * fVar3 + -0.0013888378) *
                           fVar3 + 0.041666638) * fVar3 + -0.5) * fVar3 + 1.0) * fVar9 * param_4 +
                       local_114) - local_114) / fVar11);
  dVar6 = dVar5 - local_e0;
  local_d8 = dVar6 - local_e0;
  local_d0 = ((1.0 - dVar5) - dVar6) - local_d8;
  local_d8 = local_d8 * 3.0;
  local_e0 = local_e0 * 3.0;
  local_e8 = 0.0 - (double)(param_11 / fVar11);
  local_110 = param_4;
  iVar1 = FUN_147a3de2a(&local_e8,local_108);
  if (iVar1 != 1) {
    auVar8 = ZEXT816(0xffefffffffffffff);
    lVar2 = 0;
    do {
      dVar5 = *(double *)((longlong)local_108 + lVar2);
      if (((0.0 < dVar5) || (ABS(dVar5) <= 1e-08)) &&
         ((dVar5 < 1.0 || (ABS(dVar5 + -1.0) <= 1e-08)))) {
        dVar7 = auVar8._0_8_;
        dVar6 = dVar5;
        if (dVar5 <= dVar7) {
          dVar6 = dVar7;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = -(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar5 |
                       ~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar6;
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x18);
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a3e7da FUN_147a3e7da body=172 status=ok
// SIG undefined FUN_147a3e7da(void)

void FUN_147a3e7da(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1448c9f94(param_1 + 0x30,local_24,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3e892 FUN_147a3e892 body=180 status=ok
// SIG undefined FUN_147a3e892(void)

longlong * FUN_147a3e892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = *(undefined8 *)(param_1 + -0x10);
  FUN_1400021e4(&local_28,&local_40);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar2,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_147a4d790(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = local_30;
  puVar1[1] = param_1 + 8;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a3e954 FUN_147a3e954 body=101 status=ok
// SIG undefined FUN_147a3e954(void)

bool FUN_147a3e954(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 0x78)) {
    if (0 < (int)uVar1) {
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar4 = *(longlong *)(param_2 + 0x70);
      do {
        cVar2 = FUN_147a4107c(lVar3,lVar4);
        if (cVar2 == '\0') {
          return false;
        }
        lVar4 = lVar4 + 0x1c;
        lVar3 = lVar3 + 0x1c;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (*(char *)(param_1 + 0x6c) == *(char *)(param_2 + 0x6c)) {
      return *(char *)(param_1 + 0x6d) == *(char *)(param_2 + 0x6d);
    }
  }
  return false;
}



// FUNCTION 147a3e9ba FUN_147a3e9ba body=181 status=ok
// SIG undefined FUN_147a3e9ba(void)

void FUN_147a3e9ba(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1 + 0x28,&local_34,local_24);
  *param_3 = local_34;
  param_3[1] = uStack_30;
  param_3[2] = uStack_2c;
  param_3[3] = uStack_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3ea70 FUN_147a3ea70 body=181 status=ok
// SIG undefined FUN_147a3ea70(void)

void FUN_147a3ea70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x50))(param_1 + 0x28,&local_34,local_24);
  *param_3 = local_34;
  param_3[1] = uStack_30;
  param_3[2] = uStack_2c;
  param_3[3] = uStack_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3eb26 FUN_147a3eb26 body=175 status=ok
// SIG undefined FUN_147a3eb26(void)

void FUN_147a3eb26(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147a3ebd6(param_1,&local_34,local_24);
  *param_3 = local_34;
  param_3[1] = uStack_30;
  param_3[2] = uStack_2c;
  param_3[3] = uStack_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3ebd6 FUN_147a3ebd6 body=145 status=ok
// SIG undefined FUN_147a3ebd6(void)

undefined4 * FUN_147a3ebd6(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1448c9f94(param_1 + 0x30,param_3,0);
  *param_2 = uVar1;
  uVar1 = FUN_1448c9f94(param_1 + 0xb0,param_3,0);
  param_2[1] = uVar1;
  uVar1 = FUN_1448c9f94(param_1 + 0x130,param_3,0);
  param_2[2] = uVar1;
  if (*(int *)(param_1 + 0x228) == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = FUN_1448c9f94(param_1 + 0x1b0,param_3,0);
  }
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 147a3ec6a FUN_147a3ec6a body=132 status=ok
// SIG undefined FUN_147a3ec6a(void)

void FUN_147a3ec6a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e31250);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3ecf0 FUN_147a3ecf0 body=174 status=ok
// SIG undefined FUN_147a3ecf0(void)

undefined4 * FUN_147a3ecf0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 == 0) {
    uVar2 = FUN_1448c9f94(param_1,param_3,0);
    *param_2 = uVar2;
    uVar2 = FUN_1448c9f94(param_1 + 0x80,param_3,0);
    param_2[1] = uVar2;
    uVar2 = FUN_1448c9f94(param_1 + 0x100,param_3,0);
    param_2[2] = uVar2;
    if (*(int *)(param_1 + 0x1f8) == 0) {
      param_2[3] = 0x3f800000;
    }
    else {
      uVar2 = FUN_1448c9f94(param_1 + 0x180,param_3,0);
      param_2[3] = uVar2;
    }
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x50))(lVar1 + 0x28,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 147a3ed9e FUN_147a3ed9e body=494 status=ok
// SIG undefined FUN_147a3ed9e(void)

longlong FUN_147a3ed9e(longlong param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [40];
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147a3ebd6(param_1 + -0x28,&local_60);
  bVar1 = false;
  if ((local_60 <= 1.0) && (bVar1 = false, local_5c <= 1.0)) {
    bVar1 = local_58 <= 1.0;
  }
  FUN_1467edb3c(&local_60,&local_70);
  local_68 = *(float *)(param_1 + 0x210) * local_68;
  fVar3 = *(float *)(param_1 + 0x214);
  if ((0.0001 < ABS(fVar3 + -1.0)) && ((fVar3 != 0.0 || (NAN(fVar3))))) {
    local_68 = powf(local_68,fVar3);
  }
  if (0.0001 < ABS(*(float *)(param_1 + 0x218))) {
    fVar2 = powf(1.0 - local_6c,5.0);
    fVar3 = *(float *)(param_1 + 0x218);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_6c = fVar3 * 0.5 * fVar2 + local_6c;
  }
  local_6c = local_6c * *(float *)(param_1 + 0x20c);
  local_70 = *(float *)(param_1 + 0x208) + local_70;
  fVar3 = (float)FUN_1447c7e44();
  local_70 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar3 |
                    (uint)(fVar3 + 360.0) & -(uint)(fVar3 < 0.0));
  if (1.0 <= local_6c) {
    local_6c = 1.0;
  }
  if (local_6c <= 0.0) {
    local_6c = 0.0;
  }
  if (bVar1) {
    if (1.0 <= local_68) {
      local_68 = 1.0;
    }
    if (local_68 <= 0.0) {
      local_68 = 0.0;
    }
  }
  FUN_1467eda2e(&local_70,param_2);
  *(float *)(param_2 + 0xc) =
       (*(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x21c)) * local_54 +
       *(float *)(param_1 + 0x21c);
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a3ef8e FUN_147a3ef8e body=450 status=ok
// SIG undefined FUN_147a3ef8e(void)

longlong FUN_147a3ef8e(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_88 [40];
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [12];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a3ebd6(param_1 + -0x28,local_50);
  FUN_1467edb3c(local_50,&local_60);
  local_58 = *(float *)(param_1 + 0x210) * local_58;
  fVar2 = *(float *)(param_1 + 0x214);
  if ((0.0001 < ABS(fVar2 + -1.0)) && ((fVar2 != 0.0 || (NAN(fVar2))))) {
    local_58 = powf(local_58,fVar2);
  }
  if (0.0001 < ABS(*(float *)(param_1 + 0x218))) {
    fVar1 = powf(1.0 - local_5c,5.0);
    fVar2 = *(float *)(param_1 + 0x218);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    local_5c = fVar2 * 0.5 * fVar1 + local_5c;
  }
  local_5c = local_5c * *(float *)(param_1 + 0x20c);
  local_60 = *(float *)(param_1 + 0x208) + local_60;
  fVar2 = (float)FUN_1447c7e44();
  local_60 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                    (uint)(fVar2 + 360.0) & -(uint)(fVar2 < 0.0));
  if (1.0 <= local_5c) {
    local_5c = 1.0;
  }
  if (local_5c <= 0.0) {
    local_5c = 0.0;
  }
  if (1.0 <= local_58) {
    local_58 = 1.0;
  }
  if (local_58 <= 0.0) {
    local_58 = 0.0;
  }
  FUN_1467eda2e(&local_60,param_2);
  *(float *)(param_2 + 0xc) =
       (*(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x21c)) * local_44 +
       *(float *)(param_1 + 0x21c);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3f152 FUN_147a3f152 body=250 status=ok
// SIG undefined FUN_147a3f152(void)

longlong * FUN_147a3f152(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_14cad41d8;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_14574390c(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = uVar4;
  puVar2[1] = param_1 + 8;
  uVar4 = DAT_14cad41e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14574390c(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x88;
  uVar4 = DAT_14cad41e8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14574390c(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x108;
  uVar4 = DAT_14cad41f0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14574390c(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x188;
  return param_2;
}



// FUNCTION 147a3f24c FUN_147a3f24c body=250 status=ok
// SIG undefined FUN_147a3f24c(void)

longlong * FUN_147a3f24c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_14cad41d8;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_147a4d790(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = uVar4;
  puVar2[1] = param_1 + 8;
  uVar4 = DAT_14cad41e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147a4d790(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x88;
  uVar4 = DAT_14cad41e8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147a4d790(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x108;
  uVar4 = DAT_14cad41f0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147a4d790(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x188;
  return param_2;
}



// FUNCTION 147a3f392 FUN_147a3f392 body=251 status=ok
// SIG undefined FUN_147a3f392(void)

void FUN_147a3f392(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a3f48e(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3f48e FUN_147a3f48e body=164 status=ok
// SIG undefined FUN_147a3f48e(void)

undefined8 FUN_147a3f48e(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    in_RAX = FUN_1456cec3c(param_2);
  }
  fVar6 = 0.0;
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14c950c29);
    lVar5 = (longlong)*(int *)(param_1 + 0x170) << 3;
    lVar4 = 0;
    do {
      if ((param_2 != 0) && ((uVar2 & 1) != 0)) {
        uVar3 = FUN_1456cec3c(param_2);
        uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),DAT_14c950c29);
      }
      if (*(longlong *)(lVar1 + lVar4 * 8) == param_2) {
        if ((int)lVar4 != -1) {
          fVar6 = (float)(int)lVar4;
          uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
          goto LAB_147a3f513;
        }
        break;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar3 = 0;
LAB_147a3f513:
  *param_3 = fVar6;
  return uVar3;
}



// FUNCTION 147a3f53e FUN_147a3f53e body=689 status=ok
// SIG undefined FUN_147a3f53e(void)

undefined4 * FUN_147a3f53e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_3,&local_28);
  puVar1 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  lVar2 = 0;
  uVar7 = 0x3d4ccccd;
  uVar8 = 0x3f800000;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)&DAT_149e25cc8 + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_147a3f7ad;
LAB_147a3f5b2:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f5b2;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_147a3f5eb;
  }
LAB_147a3f7ad:
  uVar9 = 0x3d4ccccd;
LAB_147a3f7b0:
  *param_2 = uVar8;
  param_2[1] = uVar7;
  param_2[2] = uVar9;
  param_2[3] = 0x3f800000;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_147a3f5eb:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149ebbc0e + lVar2);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f604;
    }
    uVar9 = 0x3d4ccccd;
    if (uVar4 == uVar5) goto LAB_147a3f7b0;
    lVar2 = 0;
    uVar7 = 0x3f800000;
    uVar8 = 0x3d4ccccd;
    goto LAB_147a3f650;
  }
  if (uVar4 == 0) goto LAB_147a3f7ad;
LAB_147a3f604:
  lVar2 = lVar2 + 2;
  goto LAB_147a3f5eb;
LAB_147a3f650:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e25ccc + lVar2);
  uVar9 = uVar8;
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f669;
    }
    if (uVar4 != uVar5) {
      lVar2 = 0;
      goto LAB_147a3f6a2;
    }
    goto LAB_147a3f7b0;
  }
  if (uVar4 == 0) goto LAB_147a3f7b0;
LAB_147a3f669:
  lVar2 = lVar2 + 2;
  goto LAB_147a3f650;
LAB_147a3f6a2:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149ebbbea + lVar2);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f6bb;
    }
    uVar9 = 0x3d4ccccd;
    if (uVar4 != uVar5) {
      lVar2 = 0;
      uVar9 = 0x3f800000;
      uVar7 = 0x3e4ccccd;
      uVar8 = 0x3dcccccd;
      goto LAB_147a3f70f;
    }
    goto LAB_147a3f7b0;
  }
  if (uVar4 == 0) goto LAB_147a3f7b0;
LAB_147a3f6bb:
  lVar2 = lVar2 + 2;
  goto LAB_147a3f6a2;
LAB_147a3f70f:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e25cd0 + lVar2);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f728;
    }
    if (uVar4 != uVar5) {
      lVar2 = 0;
      goto LAB_147a3f75d;
    }
    goto LAB_147a3f7b0;
  }
  if (uVar4 == 0) goto LAB_147a3f7b0;
LAB_147a3f728:
  lVar2 = lVar2 + 2;
  goto LAB_147a3f70f;
LAB_147a3f75d:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e060e8 + lVar2);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_147a3f772;
    }
    if (uVar4 != uVar5) {
      uVar8 = 0x3e4ccccd;
      uVar7 = 0x3e4ccccd;
      uVar9 = uVar8;
    }
    goto LAB_147a3f7b0;
  }
  if (uVar4 == 0) goto LAB_147a3f7b0;
LAB_147a3f772:
  lVar2 = lVar2 + 2;
  goto LAB_147a3f75d;
}



// FUNCTION 147a3f7f0 FUN_147a3f7f0 body=281 status=ok
// SIG undefined FUN_147a3f7f0(void)

void FUN_147a3f7f0(longlong param_1,longlong param_2,double *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  uVar1 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar2 = (float)FUN_1448c9f94(param_1 + 0x30,local_54,0);
  fVar3 = (float)FUN_1448c9f94(param_1 + 0xb0,uVar1,0);
  fVar4 = (float)FUN_1448c9f94(param_1 + 0x130,uVar1,0);
  *param_3 = (double)fVar2;
  param_3[1] = (double)fVar3;
  param_3[2] = (double)fVar4;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3f90a FUN_147a3f90a body=115 status=ok
// SIG undefined FUN_147a3f90a(void)

double * FUN_147a3f90a(longlong param_1,double *param_2,undefined4 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1448c9f94(param_1 + 0x30,param_3,0);
  *param_2 = (double)fVar1;
  fVar1 = (float)FUN_1448c9f94(param_1 + 0xb0,param_3,0);
  param_2[1] = (double)fVar1;
  fVar1 = (float)FUN_1448c9f94(param_1 + 0x130,param_3,0);
  param_2[2] = (double)fVar1;
  return param_2;
}



// FUNCTION 147a3f980 FUN_147a3f980 body=190 status=ok
// SIG undefined FUN_147a3f980(void)

longlong * FUN_147a3f980(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_14cad4288;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_14574390c(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = uVar4;
  puVar2[1] = param_1 + 8;
  uVar4 = DAT_14cad4290;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14574390c(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x88;
  uVar4 = DAT_14cad4298;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14574390c(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x108;
  return param_2;
}



// FUNCTION 147a3fa3e FUN_147a3fa3e body=190 status=ok
// SIG undefined FUN_147a3fa3e(void)

longlong * FUN_147a3fa3e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_14cad4288;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_147a4d790(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = uVar4;
  puVar2[1] = param_1 + 8;
  uVar4 = DAT_14cad4290;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147a4d790(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x88;
  uVar4 = DAT_14cad4298;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147a4d790(param_2,iVar1);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_1 + 0x108;
  return param_2;
}



// FUNCTION 147a3fb2e FUN_147a3fb2e body=20 status=ok
// SIG undefined FUN_147a3fb2e(void)

void FUN_147a3fb2e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c) == param_2) {
    return;
  }
  FUN_147a3fb42(param_1 + 8);
  return;
}



// FUNCTION 147a3fb42 FUN_147a3fb42 body=258 status=ok
// SIG undefined FUN_147a3fb42(void)

void FUN_147a3fb42(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x58);
  if (param_2 < iVar1) {
    lVar2 = (longlong)param_2;
    lVar3 = lVar2 * 4;
    do {
      FUN_147a4dc14(param_1,*(longlong *)(param_1 + 0x50) + lVar3);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 4;
    } while (lVar2 < *(int *)(param_1 + 0x58));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if (iVar1 < param_2) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)(param_1 + 0x5c) < param_2) {
      FUN_1406525c2(param_1 + 0x50,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
    }
    local_54 = iVar1;
    if (iVar1 < param_2) {
      do {
        FUN_14065166a(param_1 + 0x50);
        local_50 = (longlong)(*(int *)(param_1 + 0x58) + -1) * 4 + *(longlong *)(param_1 + 0x50);
        local_48 = &local_54;
        FUN_140650ca6(param_1,local_3c,&local_50);
        local_54 = local_54 + 1;
      } while (local_54 < param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3fc60 FUN_147a3fc60 body=10 status=ok
// SIG undefined FUN_147a3fc60(void)

undefined4 * FUN_147a3fc60(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 147a3fc6a FUN_147a3fc6a body=67 status=ok
// SIG undefined FUN_147a3fc6a(void)

undefined4 FUN_147a3fc6a(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  puVar1 = (undefined4 *)FUN_14045d29c(param_1 + 8,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3fcb4 FUN_147a3fcb4 body=18 status=ok
// SIG undefined FUN_147a3fcb4(void)

longlong * FUN_147a3fcb4(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x68;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 147a3fcc6 FUN_147a3fcc6 body=159 status=ok
// SIG undefined FUN_147a3fcc6(void)

void FUN_147a3fcc6(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_2;
  puVar2 = (uint *)FUN_14045d29c(param_1 + 8,&local_24);
  uVar1 = *puVar2;
  iVar3 = *(int *)(param_1 + 0x70);
  if (~uVar1 + iVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1 * 8),
            (void *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1 * 8 + 8),
            (longlong)(int)(~uVar1 + iVar3) << 3);
    iVar3 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar3 + -1;
  FUN_147a4d816(param_1 + 0x68);
  FUN_147a3fd66(param_1 + 8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3fd66 FUN_147a3fd66 body=464 status=ok
// SIG undefined FUN_147a3fd66(void)

void FUN_147a3fd66(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & *param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = *param_1;
      do {
        lVar7 = (longlong)iVar5 * 0x10;
        if (*(uint *)(lVar3 + lVar7) == *param_2) {
          uVar1 = *(uint *)(lVar3 + 4 + lVar7);
          FUN_147a4db18(param_1);
          local_38 = param_1 + 2;
          local_40 = 0x100000000;
          local_30 = 0xffffffff;
          local_28 = 0;
          if ((int)param_1[5] != 0) {
            FUN_1449c0562(&local_40);
          }
          local_68 = local_30;
          uVar4 = local_68;
          local_60 = local_28;
          local_5c = local_24;
          local_78 = local_40;
          local_70 = local_38;
          local_48 = 0;
          local_68._4_4_ = (int)((ulonglong)local_30 >> 0x20);
          local_80 = param_1;
          local_58 = param_1;
          local_50 = param_1;
          if (local_68._4_4_ < (int)local_38[3]) {
            iVar5 = local_68._4_4_;
            local_68 = uVar4;
            do {
              iVar2 = *(int *)(*local_80 + 4 + (longlong)iVar5 * 0x10);
              if ((int)uVar1 <= iVar2) {
                *(int *)((longlong)iVar5 * 0x10 + *local_80 + 4) = iVar2 + -1;
              }
              local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
              FUN_1449c0562(&local_78);
              iVar5 = local_68._4_4_;
            } while (local_68._4_4_ < (int)local_70[3]);
            uVar4 = local_68;
            if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
              FUN_147a4d924(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
              uVar4 = local_68;
            }
          }
          local_68 = uVar4;
          iVar5 = (int)param_1[0xb];
          if (~uVar1 + iVar5 != 0) {
            memmove((void *)(param_1[10] + (longlong)(int)uVar1 * 4),
                    (void *)(param_1[10] + (longlong)(int)uVar1 * 4 + 4),
                    (longlong)(int)(~uVar1 + iVar5) << 2);
            iVar5 = (int)param_1[0xb];
          }
          *(int *)(param_1 + 0xb) = iVar5 + -1;
          FUN_147a4db72(param_1 + 10);
          break;
        }
        iVar5 = *(int *)(lVar7 + lVar3 + 8);
      } while (iVar5 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3ff38 FUN_147a3ff38 body=144 status=ok
// SIG undefined FUN_147a3ff38(void)

void FUN_147a3ff38(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    lVar3 = FUN_147a3ffca(param_1,param_2);
    uVar1 = *(undefined4 *)(lVar3 + 4);
    FUN_147a3fcc6(param_1,param_2);
    local_48 = param_2;
    FUN_140da67de(param_1,local_34,param_3,uVar1);
    puVar4 = (undefined4 *)FUN_147a3ffca(param_1,param_2);
    puVar4[1] = uVar1;
    *puVar4 = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a3ffca FUN_147a3ffca body=111 status=ok
// SIG undefined FUN_147a3ffca(void)

longlong FUN_147a3ffca(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_1c = param_2;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)*piVar2 * 8 + param_1[0xd];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4003a FUN_147a4003a body=94 status=ok
// SIG undefined FUN_147a4003a(void)

void FUN_147a4003a(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a4009a(0,local_28,param_2);
    uVar2 = local_28[0];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a4009a FUN_147a4009a body=123 status=ok
// SIG undefined FUN_147a4009a(void)

undefined8 * FUN_147a4009a(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_24 = param_3;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  *param_2 = *(undefined8 *)(param_1[0xd] + (longlong)*piVar2 * 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40116 FUN_147a40116 body=207 status=ok
// SIG undefined FUN_147a40116(void)

void FUN_147a40116(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [36];
  int local_64;
  undefined4 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a401e6(param_1,(int)param_2[1]);
  local_64 = 0;
  if (0 < (int)param_2[1]) {
    do {
      puVar2 = (undefined4 *)((longlong)local_64 * 4 + *param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
        FUN_14065110c(param_1 + 0x50,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 4) = *puVar2;
      local_60 = puVar2;
      local_58 = &local_64;
      FUN_140650ca6(param_1,local_4c,&local_60);
      local_64 = local_64 + 1;
    } while (local_64 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a401e6 FUN_147a401e6 body=66 status=ok
// SIG undefined FUN_147a401e6(void)

void FUN_147a401e6(longlong param_1,int param_2)

{
  FUN_14093ce12();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) == param_2) {
    return;
  }
  FUN_1406525c2(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 147a4022a FUN_147a4022a body=299 status=ok
// SIG undefined FUN_147a4022a(void)

void FUN_147a4022a(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x5c) < (int)param_2) {
    FUN_1406525c2(param_1 + 0x50,param_2);
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < param_2) {
    FUN_147a4d96a(param_1,param_2);
    iVar2 = 1;
    if (3 < param_2) {
      uVar1 = (param_2 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar2)) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1406513ec(param_1);
    }
    local_44 = 0;
  }
  else {
    local_44 = 0;
    if (param_2 == 0) goto LAB_147a402e5;
  }
  do {
    LOCK();
    UNLOCK();
    local_48 = DAT_14c761474 + 1;
    iVar2 = *(int *)(param_1 + 0x58);
    DAT_14c761474 = DAT_14c761474 + 1;
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_14065110c(param_1 + 0x50,iVar2);
    }
    *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 4) = local_48;
    local_40 = &local_48;
    local_38 = &local_44;
    FUN_140650ca6(param_1,local_2c);
    local_44 = local_44 + 1;
  } while (local_44 < (int)param_2);
LAB_147a402e5:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40358 FUN_147a40358 body=139 status=ok
// SIG undefined FUN_147a40358(void)

void FUN_147a40358(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)param_2);
    }
    FUN_147a4d96a(param_1,param_2);
    iVar2 = 1;
    if (3 < param_2) {
      uVar1 = (param_2 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar2)) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1406513ec(param_1);
    }
  }
  else if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x5c) < (int)param_2) {
    FUN_1406525c2(param_1 + 0x50,param_2);
    return;
  }
  return;
}



// FUNCTION 147a403e4 FUN_147a403e4 body=115 status=ok
// SIG undefined FUN_147a403e4(void)

void FUN_147a403e4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14065110c(param_1,iVar1);
    }
    FUN_1406516a8((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147a4db72(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a40458 FUN_147a40458 body=110 status=ok
// SIG undefined FUN_147a40458(void)

undefined4 FUN_147a40458(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar1 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x78);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x10) == param_2) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147a404c6 FUN_147a404c6 body=202 status=ok
// SIG undefined FUN_147a404c6(void)

uint * FUN_147a404c6(longlong *param_1,uint *param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined1 local_44 [4];
  uint *local_40;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_1[5])) {
    plVar1 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar1 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0)
    {
      *param_2 = *(uint *)(*param_1 + (ulonglong)param_3 * 8);
      goto LAB_147a4051e;
    }
  }
  LOCK();
  UNLOCK();
  uVar2 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  *param_2 = uVar2;
  FUN_147a4dc64(param_1,&local_40,param_3);
  *local_38 = uVar2;
  local_40 = param_2;
  local_38 = &local_48;
  FUN_140650ca6(param_1 + 7,local_44,&local_40);
LAB_147a4051e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40592 FUN_147a40592 body=232 status=ok
// SIG undefined FUN_147a40592(void)

void FUN_147a40592(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [36];
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined4 *local_38;
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[5])) {
    plVar2 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    {
      iVar1 = *(int *)(*param_1 + (ulonglong)param_2 * 8);
      local_44 = iVar1;
      FUN_147a4dda2(param_1,param_2);
      FUN_147a4067c(param_1,param_2,0xffffffff);
      if (param_3 < (int)param_1[1]) {
        FUN_147a4067c(param_1,param_3,1);
      }
      FUN_147a4dc64(param_1,&local_38,param_3);
      *local_30 = iVar1;
      local_38 = &local_44;
      local_30 = &local_40;
      FUN_140650ca6(param_1 + 7,local_3c,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4067c FUN_147a4067c body=330 status=ok
// SIG undefined FUN_147a4067c(void)

void FUN_147a4067c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_64;
  int local_60;
  undefined1 local_5c [4];
  int *local_58;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    iVar3 = (int)param_1[1];
    iVar1 = iVar3 + -1;
    if (0 < param_3) {
      FUN_147a40926(param_1,iVar3 + 1);
      iVar3 = param_2 + -1;
      param_2 = iVar1;
    }
    if (param_2 != iVar3) {
      local_70 = param_1 + 7;
      uVar6 = (ulonglong)param_2;
      do {
        plVar4 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar4 = param_1 + 2;
        }
        uVar2 = (uint)uVar6;
        uVar5 = uVar2 + 0x1f;
        if (-1 < (int)uVar2) {
          uVar5 = uVar2;
        }
        if ((*(uint *)((longlong)plVar4 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar2 & 0x1f) & 1) !=
            0) {
          local_60 = *(int *)(*param_1 + uVar6 * 8);
          FUN_147a4dc64(param_1,&local_58,param_3 + uVar2);
          *local_50 = local_60;
          local_58 = &local_60;
          local_50 = &local_64;
          local_64 = param_3 + uVar2;
          FUN_147a4de4e(local_70,local_5c,&local_58);
          FUN_147a4dda2(param_1,uVar6 & 0xffffffff);
        }
        uVar6 = uVar6 + (ulonglong)(param_3 < 1) * 2 + -1;
      } while (iVar3 != (int)uVar6);
    }
    if (param_3 < 0) {
      FUN_147a40ad0(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a407c8 FUN_147a407c8 body=173 status=ok
// SIG undefined FUN_147a407c8(void)

int * FUN_147a407c8(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_44 [4];
  int *local_40;
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  *param_2 = iVar1;
  local_48 = param_3;
  if (param_3 < *(int *)(param_1 + 8)) {
    FUN_147a4067c(param_1,param_3,1);
  }
  FUN_147a4dc64(param_1,&local_40,param_3);
  *local_38 = iVar1;
  local_38 = &local_48;
  local_40 = param_2;
  FUN_140650ca6(param_1 + 0x38,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40876 FUN_147a40876 body=107 status=ok
// SIG undefined FUN_147a40876(void)

void FUN_147a40876(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[5])) {
    plVar1 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    {
      FUN_147a4dc14(param_1 + 7,(ulonglong)param_2 * 8 + *param_1);
      FUN_147a4dda2(param_1,param_2);
      FUN_147a4067c(param_1,param_2 + 1,0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 147a408e2 FUN_147a408e2 body=64 status=ok
// SIG undefined FUN_147a408e2(void)

void FUN_147a408e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146f9e890(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_147a4de0c(param_1 + 0x38);
  return;
}



// FUNCTION 147a40926 FUN_147a40926 body=424 status=ok
// SIG undefined FUN_147a40926(void)

void FUN_147a40926(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong *_Dst;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = (int)param_1[1];
  uVar8 = param_2 - iVar2;
  if (uVar8 != 0 && iVar2 <= (int)param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)param_2);
    }
    iVar9 = *(int *)((longlong)param_1 + 0xc);
    iVar10 = iVar2;
    if (iVar9 < (int)param_2) {
      FUN_146f9e890(param_1);
      iVar10 = (int)param_1[1];
      iVar9 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar10 + uVar8;
    if ((uint)(iVar9 - iVar10) < uVar8) {
      FUN_146f9ea2e(param_1);
    }
    if (iVar10 < (int)param_2) {
      lVar3 = *param_1;
      iVar9 = *(int *)((longlong)param_1 + 0x34);
      uVar6 = (ulonglong)param_2;
      do {
        if (iVar9 != 0) {
          *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = (int)uVar6 + -1;
        }
        *(undefined4 *)(lVar3 + -8 + uVar6 * 8) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (undefined4)param_1[6];
        }
        uVar1 = uVar6 - 1;
        *(undefined4 *)(lVar3 + -4 + uVar6 * 8) = uVar4;
        *(int *)(param_1 + 6) = (int)uVar6 + -1;
        iVar9 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar9;
        uVar6 = uVar1;
      } while ((longlong)iVar10 < (longlong)uVar1);
    }
    if (iVar2 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar11 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar11) {
          FUN_14499171c(plVar7,0,uVar11,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar11 = uVar11 + (uVar11 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar11 << 2));
        iVar2 = (int)param_1[5];
        iVar9 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar9 = iVar2;
        }
        if (iVar2 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar5 = -(char)(iVar2 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar4 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar4,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a40ad0 FUN_147a40ad0 body=184 status=ok
// SIG undefined FUN_147a40ad0(void)

void FUN_147a40ad0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7 * 8);
          iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7 * 8);
        }
      } while ((int)uVar6 != -1);
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
  FUN_146f9e890(param_1,iVar5);
  return;
}



// FUNCTION 147a40b88 FUN_147a40b88 body=112 status=ok
// SIG undefined FUN_147a40b88(void)

void FUN_147a40b88(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a40be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 1);
  return;
}



// FUNCTION 147a40bf8 FUN_147a40bf8 body=250 status=ok
// SIG undefined FUN_147a40bf8(void)

undefined8 FUN_147a40bf8(longlong param_1,undefined8 param_2,float param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    pfVar5 = *(float **)(param_1 + 0x68);
    uVar6 = 0;
    do {
      if (param_3 < *pfVar5 || param_3 == *pfVar5) goto LAB_147a40c4c;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 3;
    } while (uVar1 != uVar6);
    uVar6 = (ulonglong)uVar1;
  }
LAB_147a40c4c:
  uVar2 = *param_4;
  *(uint *)(param_1 + 0x70) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x74) < uVar1 + 1) {
    FUN_147a4df66((undefined8 *)(param_1 + 0x68),uVar1);
  }
  lVar4 = (uVar6 & 0xffffffff) * 0xc;
  memmove((void *)(*(longlong *)(param_1 + 0x68) + lVar4 + 0xc),
          (void *)(*(longlong *)(param_1 + 0x68) + lVar4),(ulonglong)(uVar1 - (int)uVar6) * 0xc);
  lVar3 = *(longlong *)(param_1 + 0x68);
  *(float *)(lVar3 + lVar4) = param_3;
  *(undefined8 *)(lVar3 + 4 + lVar4) = uVar2;
  FUN_1406509a6(param_1 + 8,&stack0x00000028,uVar6 & 0xffffffff);
  FUN_140da68da(param_1,param_2,uVar6 & 0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40cf4 FUN_147a40cf4 body=167 status=ok
// SIG undefined FUN_147a40cf4(void)

void FUN_147a40cf4(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_2;
  puVar3 = (uint *)FUN_14045d29c(param_1 + 8,&local_24);
  uVar1 = *puVar3;
  iVar2 = *(int *)(param_1 + 0x70);
  if (~uVar1 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1 * 0xc),
            (void *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1 * 0xc + 0xc),
            (longlong)(int)(~uVar1 + iVar2) * 0xc);
    iVar2 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar2 + -1;
  FUN_147a4dffa(param_1 + 0x68);
  FUN_147a3fd66(param_1 + 8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40d9c FUN_147a40d9c body=115 status=ok
// SIG undefined FUN_147a40d9c(void)

longlong FUN_147a40d9c(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_1c = param_2;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)*piVar2 * 0xc + param_1[0xd];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40e10 FUN_147a40e10 body=134 status=ok
// SIG undefined FUN_147a40e10(void)

undefined8 * FUN_147a40e10(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar2) {
    FUN_147a3fb42(param_1 + 1,iVar2);
  }
  local_24 = param_3;
  piVar3 = (int *)FUN_14045d29c(param_1 + 1);
  iVar2 = *piVar3;
  lVar1 = param_1[0xd];
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc);
  *param_2 = *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40e98 FUN_147a40e98 body=94 status=ok
// SIG undefined FUN_147a40e98(void)

void FUN_147a40e98(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a40e10(0,local_2c,param_2);
    uVar2 = local_2c[0];
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a40ef8 FUN_147a40ef8 body=169 status=ok
// SIG undefined FUN_147a40ef8(void)

void FUN_147a40ef8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_14045d218();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_147a40d9c(param_1,param_2);
    local_40 = *puVar2;
    local_38 = *(undefined4 *)(puVar2 + 1);
    FUN_147a40cf4(param_1,param_2);
    local_58 = param_2;
    FUN_147a40bf8(param_1,local_44,param_3,(longlong)&local_40 + 4);
    puVar2 = (undefined8 *)FUN_147a40d9c(param_1,param_2);
    *puVar2 = local_40;
    *(undefined4 *)(puVar2 + 1) = local_38;
    *(undefined4 *)puVar2 = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a40fa2 FUN_147a40fa2 body=218 status=ok
// SIG undefined FUN_147a40fa2(void)

void FUN_147a40fa2(float param_1,float param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar3 = param_2 - param_1;
  if (fVar1 <= param_2) {
    fVar4 = fVar1;
    if (param_1 <= fVar1) goto LAB_147a40fec;
    fVar4 = (fVar1 - param_1) / fVar3;
    iVar2 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    *param_4 = iVar2;
    fVar4 = *param_3 - (float)iVar2 * fVar3;
  }
  else {
    fVar4 = (param_2 - fVar1) / fVar3;
    iVar2 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    *param_4 = iVar2;
    fVar4 = (float)iVar2 * fVar3 + *param_3;
  }
  *param_3 = fVar4;
LAB_147a40fec:
  fVar3 = param_1;
  if (param_1 <= fVar1 || fVar4 != param_2) {
    fVar3 = fVar4;
  }
  if (param_1 > fVar1 && fVar4 == param_2 || fVar1 > param_2 && param_1 == fVar3) {
    if (fVar1 <= param_2 || param_1 != fVar3) {
      param_2 = fVar3;
    }
    *param_3 = param_2;
  }
  iVar2 = -*param_4;
  if (iVar2 < 0) {
    iVar2 = *param_4;
  }
  *param_4 = iVar2;
  return;
}



// FUNCTION 147a4107c FUN_147a4107c body=94 status=ok
// SIG undefined FUN_147a4107c(void)

byte FUN_147a4107c(char *param_1,char *param_2)

{
  if ((*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
     (!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)))) {
    if (((*(float *)(param_1 + 8) == *(float *)(param_2 + 8)) &&
        (((!NAN(*(float *)(param_1 + 8)) && !NAN(*(float *)(param_2 + 8)) && (*param_1 == *param_2))
         && (param_1[1] == param_2[1])))) && (param_1[2] == param_2[2])) {
      if (*param_2 != '\x02') {
        return 1;
      }
      if ((*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc)) &&
         (!NAN(*(float *)(param_1 + 0xc)) && !NAN(*(float *)(param_2 + 0xc)))) {
        return -(*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14)) & 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147a410da FUN_147a410da body=18 status=ok
// SIG undefined FUN_147a410da(void)

longlong * FUN_147a410da(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x70;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 147a410ec FUN_147a410ec body=143 status=ok
// SIG undefined FUN_147a410ec(void)

undefined4 * FUN_147a410ec(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar9 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar9) {
    FUN_147a3fb42(param_1 + 1,iVar9);
  }
  local_24 = param_3;
  piVar10 = (int *)FUN_14045d29c(param_1 + 1);
  puVar1 = (undefined4 *)(param_1[0xe] + (longlong)*piVar10 * 0x1c);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined4 *)(param_1[0xe] + 0xc + (longlong)*piVar10 * 0x1c);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  param_2[3] = *puVar1;
  param_2[4] = uVar6;
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4117c FUN_147a4117c body=22 status=ok
// SIG undefined FUN_147a4117c(void)

undefined8 * FUN_147a4117c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)((longlong)puVar1 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
  *(undefined8 *)((longlong)param_2 + 0x14) = uVar4;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 147a41192 FUN_147a41192 body=58 status=ok
// SIG undefined FUN_147a41192(void)

void FUN_147a41192(longlong param_1,int param_2)

{
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x7c) < param_2) {
      FUN_14093d050(param_1 + 0x70,param_2);
    }
    FUN_147a40358(param_1 + 8,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a411ce FUN_147a411ce body=118 status=ok
// SIG undefined FUN_147a411ce(void)

void FUN_147a411ce(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  FUN_14093cdbe();
  FUN_1470956a6((longlong *)(param_1 + 0x70),(int)param_2[1],1);
  FUN_147a4022a(param_1 + 8,(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x70);
      puVar1 = (undefined4 *)(*param_2 + lVar10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(*param_2 + 0xc + lVar10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0xc + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar1 = (undefined4 *)(lVar4 + lVar10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x1c;
    } while (lVar11 < (int)param_2[1]);
  }
  FUN_14045d2f8(param_1,0);
  return;
}



// FUNCTION 147a41244 FUN_147a41244 body=187 status=ok
// SIG undefined FUN_147a41244(void)

void FUN_147a41244(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_2;
  puVar2 = (uint *)FUN_14045d29c(param_1 + 8,&local_24);
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = ~*puVar2 + iVar3;
  if (iVar4 != 0) {
    lVar1 = (longlong)(int)*puVar2 * 0x1c;
    memmove((void *)(*(longlong *)(param_1 + 0x70) + lVar1),
            (void *)(*(longlong *)(param_1 + 0x70) + lVar1 + 0x1c),(longlong)iVar4 * 0x1c);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar3 + -1;
  FUN_14709c10e(param_1 + 0x70);
  FUN_14045d2f8(param_1,0);
  FUN_147a3fd66(param_1 + 8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a41300 FUN_147a41300 body=136 status=ok
// SIG undefined FUN_147a41300(void)

undefined8
FUN_147a41300(float param_1,undefined8 param_2,float param_3,undefined4 param_4,undefined1 param_5,
             float param_6)

{
  longlong in_RCX;
  int iVar1;
  undefined4 *puVar2;
  ulonglong in_R8;
  
  if (0 < (longlong)*(int *)(in_RCX + 0x78)) {
    puVar2 = (undefined4 *)(*(longlong *)(in_RCX + 0x70) + 8);
    in_R8 = 0;
    do {
      if (ABS((float)puVar2[-1] - param_3) <= param_6) {
        *puVar2 = param_4;
        FUN_140da68da(param_6,param_2);
        return param_2;
      }
      param_1 = param_6;
      if (param_3 < (float)puVar2[-1]) break;
      in_R8 = in_R8 + 1;
      puVar2 = puVar2 + 7;
    } while (in_R8 < (ulonglong)(longlong)*(int *)(in_RCX + 0x78));
  }
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(param_1,param_2,in_R8,param_4,param_5,iVar1);
  return param_2;
}



// FUNCTION 147a41388 FUN_147a41388 body=197 status=ok
// SIG undefined FUN_147a41388(void)

void FUN_147a41388(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_14045d218();
  if (cVar3 != '\0') {
    puVar4 = (undefined8 *)FUN_14045d1a0(param_1,param_2);
    uVar2 = *puVar4;
    uVar1 = *(undefined4 *)(puVar4 + 1);
    local_58 = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_54 = *(undefined4 *)(puVar4 + 2);
    uStack_50 = *(undefined4 *)((longlong)puVar4 + 0x14);
    uStack_4c = *(undefined4 *)(puVar4 + 3);
    FUN_147a41244(param_1,param_2);
    local_78 = 0;
    local_70 = param_2;
    FUN_1406507bc(param_1,local_5c,param_3,uVar1);
    puVar4 = (undefined8 *)FUN_14045d1a0(param_1,param_2);
    *puVar4 = uVar2;
    *(undefined4 *)(puVar4 + 1) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_58;
    *(undefined4 *)(puVar4 + 2) = uStack_54;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_50;
    *(undefined4 *)(puVar4 + 3) = uStack_4c;
    *(undefined4 *)((longlong)puVar4 + 4) = param_3;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4144e FUN_147a4144e body=95 status=ok
// SIG undefined FUN_147a4144e(void)

void FUN_147a4144e(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a410ec(0,local_3c,param_2);
    uVar2 = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a41522 FUN_147a41522 body=87 status=ok
// SIG undefined FUN_147a41522(void)

void FUN_147a41522(undefined8 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    lVar1 = FUN_14045d1a0(param_1,param_2);
    *(undefined4 *)(lVar1 + 8) = param_3;
    if (param_4 != '\0') {
      FUN_14045d2f8(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a4157a FUN_147a4157a body=95 status=ok
// SIG undefined FUN_147a4157a(void)

void FUN_147a4157a(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined1 local_3c [8];
  undefined4 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a410ec(0,local_3c,param_2);
    uVar2 = local_34;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a415da FUN_147a415da body=128 status=ok
// SIG undefined FUN_147a415da(void)

undefined4 * FUN_147a415da(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14045d218(param_1,param_3);
  uVar2 = 0;
  uVar3 = 0;
  if (cVar1 != '\0') {
    FUN_147a410ec(param_1,local_44,param_3);
    uVar2 = local_40;
    uVar3 = local_3c;
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4165c FUN_147a4165c body=94 status=ok
// SIG undefined FUN_147a4165c(void)

undefined1 FUN_147a4165c(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [44];
  undefined1 local_3c [28];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a410ec(param_1,local_3c,param_2);
    uVar2 = local_3c[0];
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a416bc FUN_147a416bc body=976 status=ok
// SIG undefined FUN_147a416bc(void)

void FUN_147a416bc(longlong param_1,float param_2,float param_3,char param_4,float param_5,
                  float param_6)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_4 == '\0') {
    local_b8 = 0;
    uStack_b0 = 0;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
    if (0 < (int)*(uint *)(param_1 + 0x78)) {
      uVar11 = 0;
      lVar3 = 0;
      bVar4 = false;
      do {
        lVar5 = lVar3 * 0x1c + 4;
        while( true ) {
          fVar10 = *(float *)(*(longlong *)(param_1 + 0x70) + lVar5);
          if ((param_5 <= fVar10) && (fVar10 <= param_6)) break;
          if (param_6 < fVar10) {
            *(float *)(*(longlong *)(param_1 + 0x70) + lVar5) = fVar10 - (param_6 - param_5);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
          }
          lVar3 = lVar3 + 1;
          lVar5 = lVar5 + 0x1c;
          if ((int)uVar9 <= lVar3) {
            if (bVar4) goto LAB_147a41a16;
            goto LAB_147a4185e;
          }
        }
        uVar11 = FUN_1448c9f94(param_1,~-(uint)(param_5 != 0.0) & (uint)param_6 |
                                       -(uint)(param_5 != 0.0) & (uint)param_5,0);
        uVar9 = uStack_b0;
        lVar5 = (longlong)(int)uStack_b0;
        uVar6 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
        if (uStack_b0._4_4_ < uVar6) {
          FUN_1446f48e2(&local_b8,uVar9 & 0xffffffff);
        }
        *(int *)(local_b8 + lVar5 * 4) = (int)lVar3;
        lVar3 = lVar3 + 1;
        uVar9 = (ulonglong)*(int *)(param_1 + 0x78);
        bVar4 = true;
      } while (lVar3 < (longlong)uVar9);
LAB_147a41a16:
      if (0 < (longlong)(int)uStack_b0) {
        uVar9 = (longlong)(int)uStack_b0 + 1;
        do {
          FUN_140da68da(param_1,&local_bc,*(undefined4 *)(local_b8 + -8 + uVar9 * 4));
          uVar1 = local_bc;
          cVar2 = FUN_14045d218(param_1,local_bc);
          if (cVar2 != '\0') {
            FUN_147a41244(param_1,uVar1);
          }
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
      local_d0 = 0x38d1b717;
      local_d8 = local_d8 & 0xffffffffffffff00;
      FUN_147a41300(param_1,&local_bc,param_5,uVar11);
LAB_147a4185e:
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    iVar7 = *(int *)(param_1 + 0x78);
LAB_147a41871:
    if (2 < iVar7) {
      local_d8 = 0;
      FUN_147a41c6c(param_1,0,0,iVar7 + -1);
      iVar7 = *(int *)(param_1 + 0x78);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x78);
    if (0 < iVar7) {
      lVar3 = 4;
      lVar5 = 0;
      do {
        fVar10 = *(float *)(*(longlong *)(param_1 + 0x70) + lVar3);
        if (param_5 <= fVar10) {
          *(float *)(*(longlong *)(param_1 + 0x70) + lVar3) = fVar10 + (param_6 - param_5);
          iVar7 = *(int *)(param_1 + 0x78);
        }
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x1c;
      } while (lVar5 < iVar7);
      goto LAB_147a41871;
    }
  }
  if (iVar7 == 0) {
    fVar10 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x70) + 4);
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x70) + -0x18 + (longlong)iVar7 * 0x1c);
  }
  if (fVar10 < param_2) {
    uVar11 = FUN_1448c9f94(param_1,param_2,0);
    local_d0 = 0x38d1b717;
    local_d8 = local_d8 & 0xffffffffffffff00;
    FUN_147a41300(param_1,&local_b8,param_2,uVar11);
    if (param_3 < fVar12) goto LAB_147a4194d;
  }
  else {
    if (fVar12 <= param_3) goto LAB_147a418b5;
LAB_147a4194d:
    uVar11 = FUN_1448c9f94(param_1,param_3,0);
    local_d0 = 0x38d1b717;
    local_d8 = local_d8 & 0xffffffffffffff00;
    FUN_147a41300(param_1,&local_b8,param_3,uVar11);
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    uVar6 = 0;
    do {
      if ((((-1 < (int)uVar6) &&
           (fVar10 = *(float *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)(int)uVar6 * 0x1c),
           fVar10 < param_2 || param_3 < fVar10)) && ((int)uVar6 < *(int *)(param_1 + 0x60))) &&
         ((puVar8 = (undefined4 *)((ulonglong)uVar6 * 4 + *(longlong *)(param_1 + 0x58)),
          puVar8 != (undefined4 *)0x0 && (cVar2 = FUN_14045d218(param_1,*puVar8), cVar2 != '\0'))))
      {
        FUN_147a41244(param_1,*puVar8);
        uVar6 = uVar6 - 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x78));
  }
LAB_147a418b5:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a41ab8 FUN_147a41ab8 body=395 status=ok
// SIG undefined FUN_147a41ab8(void)

void FUN_147a41ab8(longlong param_1,float param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_8c [4];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar3 = (int)((param_4 - param_3) / param_2 + -1.0);
    local_88 = 0;
    uStack_80 = 0;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 != 0) {
      FUN_147a4e0a8(&local_88);
    }
    param_3 = param_3 + param_2;
    if (param_3 < param_4) {
      do {
        uVar7 = FUN_1448c9f94(param_1,param_3,0);
        uVar1 = uStack_80;
        lVar4 = (longlong)(int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        if (uStack_80._4_4_ < uVar2) {
          FUN_147a4e0fe(&local_88,uVar1 & 0xffffffff);
        }
        *(float *)(local_88 + lVar4 * 8) = param_3;
        *(undefined4 *)(local_88 + 4 + lVar4 * 8) = uVar7;
        param_3 = param_3 + param_2;
      } while (param_3 < param_4);
    }
    lVar4 = local_88;
    lVar5 = (longlong)(int)uStack_80;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        local_a0 = 0x38d1b717;
        local_a8 = 0;
        FUN_147a41300(param_1,local_8c,*(undefined4 *)(lVar4 + lVar6),
                      *(undefined4 *)(lVar4 + 4 + lVar6));
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a41c46 FUN_147a41c46 body=37 status=ok
// SIG undefined FUN_147a41c46(void)

void FUN_147a41c46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (2 < *(int *)(param_1 + 0x78)) {
    FUN_147a41c6c(param_1,param_2,0,*(int *)(param_1 + 0x78) + -1,param_3);
  }
  return;
}



// FUNCTION 147a41c6c FUN_147a41c6c body=2284 status=ok
// SIG undefined FUN_147a41c6c(void)

void FUN_147a41c6c(longlong param_1,float param_2,uint param_3,int param_4,ulonglong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong **pplVar13;
  void *pvVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auStack_1d8 [36];
  int local_1b4;
  int local_1b0;
  int local_1ac;
  longlong **local_1a8;
  int local_19c;
  ulonglong local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined4 local_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_138;
  undefined8 uStack_130;
  void *local_128;
  ulonglong uStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar22 = *(uint *)(param_1 + 0x78);
  uVar19 = (ulonglong)(int)uVar22;
  if ((longlong)uVar19 < 3) goto LAB_147a41d18;
  uVar16 = 0;
  if (0 < (int)param_3) {
    uVar16 = (ulonglong)param_3;
  }
  iVar17 = uVar22 - 1;
  if (param_4 < (int)(uVar22 - 1)) {
    iVar17 = param_4;
  }
  if (iVar17 - (int)uVar16 < 2) goto LAB_147a41d18;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  local_138 = 0;
  uStack_130 = 0;
  local_1b0 = *(int *)(param_1 + 0x10);
  local_1b4 = *(int *)(param_1 + 0x3c);
  local_19c = iVar17;
  local_190 = plVar1;
  if (local_1b0 == local_1b4) {
LAB_147a41ddf:
    uStack_160 = 0;
    local_168 = (longlong *)0x0;
    FUN_14093d050(&local_168,uVar19 & 0xffffffff);
  }
  else {
    uStack_120 = (ulonglong)uVar22;
    FUN_14065110c(&local_128);
    memset(local_128,0,uVar19 << 2);
    iVar17 = *(int *)(param_1 + 0x78);
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if ((int)uStack_130._4_4_ < iVar17) {
      FUN_1406525c2(&local_138);
    }
    lVar23 = param_1 + 0x18;
    local_110 = 0x100000000;
    local_100 = 0xffffffff;
    uStack_f8 = 0;
    uStack_108 = lVar23;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_110);
      iVar17 = *(int *)(param_1 + 0x30);
    }
    uStack_148 = CONCAT44(uStack_f4,uStack_f8);
    local_150 = local_100;
    uVar12 = local_150;
    uStack_160._0_4_ = (int)local_110;
    uStack_160._4_4_ = local_110._4_4_;
    local_158 = (undefined4)uStack_108;
    uStack_154 = uStack_108._4_4_;
    local_150._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    if ((local_150._4_4_ != iVar17) || (uStack_108 != lVar23)) {
      iVar24 = local_150._4_4_;
      local_168 = plVar1;
      local_150 = uVar12;
      do {
        *(undefined4 *)
         ((longlong)local_128 + (longlong)*(int *)(*local_168 + 4 + (longlong)iVar24 * 0x10) * 4) =
             *(undefined4 *)(*local_168 + (longlong)iVar24 * 0x10);
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_160._4_4_);
        FUN_1449c0562(&uStack_160);
        iVar24 = local_150._4_4_;
        uVar12 = local_150;
      } while (local_168 != plVar1 ||
               (CONCAT44(uStack_154,local_158) != lVar23 || local_150._4_4_ != iVar17));
    }
    local_150 = uVar12;
    uVar22 = *(uint *)(param_1 + 0x78);
    uVar19 = (ulonglong)uVar22;
    local_168 = (longlong *)0x0;
    uStack_160 = 0;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar19);
    }
    if (uVar22 != 0) goto LAB_147a41ddf;
  }
  local_198 = param_5 >> 0x20;
  local_1a8 = (longlong **)(param_1 + 0x70);
  uVar22 = (int)uVar16 + 1;
  uVar19 = (ulonglong)uVar22;
  lVar23 = 0;
  uVar20 = 0;
  local_188 = param_1;
  do {
    uVar26 = uStack_160;
    puVar21 = (undefined4 *)((longlong)*local_1a8 + lVar23);
    lVar27 = (longlong)(int)uStack_160;
    uVar15 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar15);
    if (uStack_160._4_4_ < uVar15) {
      FUN_14065126e(&local_168,uVar26 & 0xffffffff);
    }
    pvVar14 = local_128;
    uVar26 = uStack_130;
    uVar8 = *puVar21;
    uVar9 = puVar21[1];
    uVar10 = puVar21[2];
    uVar11 = puVar21[3];
    uVar12 = *(undefined8 *)(puVar21 + 5);
    puVar3 = (undefined8 *)((longlong)local_168 + lVar27 * 0x1c + 0xc);
    *puVar3 = *(undefined8 *)(puVar21 + 3);
    puVar3[1] = uVar12;
    puVar21 = (undefined4 *)((longlong)local_168 + lVar27 * 0x1c);
    *puVar21 = uVar8;
    puVar21[1] = uVar9;
    puVar21[2] = uVar10;
    puVar21[3] = uVar11;
    if (local_1b0 != local_1b4) {
      lVar27 = (longlong)(int)uStack_130;
      uVar15 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar15);
      if (uStack_130._4_4_ < uVar15) {
        FUN_14065110c(&local_138,uVar26 & 0xffffffff);
      }
      *(undefined4 *)(local_138 + lVar27 * 4) = *(undefined4 *)((longlong)pvVar14 + uVar20 * 4);
    }
    uVar20 = uVar20 + 1;
    lVar23 = lVar23 + 0x1c;
  } while (uVar19 != uVar20);
  if ((int)uVar22 < local_19c) {
    dVar6 = (double)(int)param_5;
    dVar7 = (double)(int)local_198;
    local_1ac = 0;
    uVar20 = local_198;
    do {
      plVar1 = *local_1a8;
      uVar26 = (ulonglong)local_1ac;
      if ((int)uVar20 < 1) {
        if ((((0xfd < (byte)(*(char *)((longlong)plVar1 + uVar26 * 0x1c + 1) - 3U)) ||
             (0xfd < (byte)(*(char *)((longlong)plVar1 + uVar16 * 0x1c + 0x39) - 3U))) ||
            (lVar23 = uVar19 * 0x1c, 0xfd < (byte)(*(char *)((longlong)plVar1 + lVar23 + 1) - 3U)))
           || (fVar37 = *(float *)((longlong)plVar1 + lVar23 + 8),
              fVar29 = (float)FUN_1434a7309(uVar26 * 0x1c + (longlong)plVar1,
                                            (longlong)plVar1 + uVar16 * 0x1c + 0x38,
                                            *(undefined4 *)((longlong)plVar1 + lVar23 + 4)),
              iVar17 = local_1ac, param_2 < ABS(fVar29 - fVar37))) goto LAB_147a4210e;
      }
      else {
        local_180 = uVar26 * 0x1c;
        dVar5 = ((double)*(float *)((longlong)plVar1 + local_180 + 4) * dVar6) / dVar7;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = dVar5;
        auVar34 = roundpd(auVar34,auVar34,1);
        dVar32 = auVar34._0_8_;
        dVar5 = dVar5 - dVar32;
        if (2147483647.0 <= dVar32) {
          dVar32 = 2147483647.0;
        }
        if (dVar32 <= -2147483648.0) {
          dVar32 = -2147483648.0;
        }
        iVar17 = (int)dVar5;
        fVar29 = (float)dVar5 - (float)iVar17;
        fVar37 = fVar29;
        if (0.99999994 <= fVar29) {
          fVar37 = 0.99999994;
        }
        fVar37 = (float)(~-(uint)(0.0 < fVar29) & (uint)fVar29 |
                        (uint)fVar37 & -(uint)(0.0 < fVar29)) + 0.5 + -0.5;
        if (0.99999994 <= fVar37) {
          fVar37 = 0.99999994;
        }
        uVar2 = uVar16 + 2;
        dVar5 = ((double)*(float *)((longlong)plVar1 + uVar16 + 6 + uVar2 * 0x1b) * dVar6) / dVar7;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar5;
        auVar34 = roundpd(auVar35,auVar35,1);
        dVar33 = auVar34._0_8_;
        dVar5 = dVar5 - dVar33;
        if (2147483647.0 <= dVar33) {
          dVar33 = 2147483647.0;
        }
        if (dVar33 <= -2147483648.0) {
          dVar33 = -2147483648.0;
        }
        iVar24 = (int)dVar5;
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        fVar30 = (float)dVar5 - (float)iVar24;
        fVar29 = fVar30;
        if (0.99999994 <= fVar30) {
          fVar29 = 0.99999994;
        }
        fVar29 = (float)(~-(uint)(0.0 < fVar30) & (uint)fVar30 |
                        (uint)fVar29 & -(uint)(0.0 < fVar30)) + 0.5 + -0.5;
        if (0.99999994 <= fVar29) {
          fVar29 = 0.99999994;
        }
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        fVar30 = *(float *)((longlong)plVar1 + uVar19 * 0x1c + 4);
        lVar28 = (longlong)((int)dVar32 + iVar17);
        lVar27 = (longlong)((int)dVar33 + iVar24);
        lVar23 = uVar20 * lVar28;
        do {
          pplVar13 = local_1a8;
          if ((lVar27 <= lVar28) && (iVar17 = local_1ac, lVar27 != lVar28 || fVar29 < fVar37))
          goto LAB_147a421b4;
          fVar36 = (float)(((double)lVar23 + (double)fVar37 * dVar7) / dVar6);
          fVar31 = (float)FUN_1434a7309((longlong)*local_1a8 + local_180,
                                        (longlong)*local_1a8 + uVar2 * 0x1c,fVar36);
          uVar20 = local_198;
          bVar4 = fVar30 < fVar36;
          uVar16 = uVar26;
          if (bVar4) {
            uVar16 = uVar19;
          }
          uVar18 = uVar19;
          if (bVar4) {
            uVar18 = uVar2;
          }
          fVar36 = (float)FUN_1434a7309(uVar16 * 0x1c + (longlong)*pplVar13,
                                        uVar18 * 0x1c + (longlong)*pplVar13,fVar36);
          lVar28 = lVar28 + 1;
          lVar23 = lVar23 + uVar20;
        } while (ABS(fVar31 - fVar36) <= param_2);
LAB_147a4210e:
        uVar16 = uStack_160;
        puVar21 = (undefined4 *)(uVar19 * 0x1c + (longlong)*local_1a8);
        lVar23 = (longlong)(int)uStack_160;
        uVar22 = (int)uStack_160 + 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar22);
        if (uStack_160._4_4_ < uVar22) {
          FUN_14065126e(&local_168,uVar16 & 0xffffffff);
        }
        pvVar14 = local_128;
        uVar16 = uStack_130;
        uVar8 = *puVar21;
        uVar9 = puVar21[1];
        uVar10 = puVar21[2];
        uVar11 = puVar21[3];
        uVar12 = *(undefined8 *)(puVar21 + 5);
        puVar3 = (undefined8 *)((longlong)local_168 + lVar23 * 0x1c + 0xc);
        *puVar3 = *(undefined8 *)(puVar21 + 3);
        puVar3[1] = uVar12;
        puVar21 = (undefined4 *)((longlong)local_168 + lVar23 * 0x1c);
        *puVar21 = uVar8;
        puVar21[1] = uVar9;
        puVar21[2] = uVar10;
        puVar21[3] = uVar11;
        iVar17 = (int)uVar19;
        if (local_1b0 != local_1b4) {
          lVar23 = (longlong)(int)uStack_130;
          uVar22 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar22);
          if (uStack_130._4_4_ < uVar22) {
            FUN_14065110c(&local_138,uVar16 & 0xffffffff);
          }
          *(undefined4 *)(local_138 + lVar23 * 4) = *(undefined4 *)((longlong)pvVar14 + uVar19 * 4);
        }
      }
LAB_147a421b4:
      local_1ac = iVar17;
      uVar16 = uVar19 & 0xffffffff;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < local_19c);
  }
  lVar23 = local_188;
  if (local_19c < *(int *)(local_188 + 0x78)) {
    lVar28 = (longlong)local_19c;
    lVar27 = lVar28 * 0x1c;
    do {
      uVar19 = uStack_160;
      puVar21 = (undefined4 *)((longlong)*local_1a8 + lVar27);
      lVar25 = (longlong)(int)uStack_160;
      uVar22 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar22);
      if (uStack_160._4_4_ < uVar22) {
        FUN_14065126e(&local_168,uVar19 & 0xffffffff);
      }
      pvVar14 = local_128;
      uVar19 = uStack_130;
      uVar8 = *puVar21;
      uVar9 = puVar21[1];
      uVar10 = puVar21[2];
      uVar11 = puVar21[3];
      uVar12 = *(undefined8 *)(puVar21 + 5);
      puVar3 = (undefined8 *)((longlong)local_168 + lVar25 * 0x1c + 0xc);
      *puVar3 = *(undefined8 *)(puVar21 + 3);
      puVar3[1] = uVar12;
      puVar21 = (undefined4 *)((longlong)local_168 + lVar25 * 0x1c);
      *puVar21 = uVar8;
      puVar21[1] = uVar9;
      puVar21[2] = uVar10;
      puVar21[3] = uVar11;
      if (local_1b0 != local_1b4) {
        lVar25 = (longlong)(int)uStack_130;
        uVar22 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar22);
        if (uStack_130._4_4_ < uVar22) {
          FUN_14065110c(&local_138,uVar19 & 0xffffffff);
        }
        *(undefined4 *)(local_138 + lVar25 * 4) = *(undefined4 *)((longlong)pvVar14 + lVar28 * 4);
      }
      lVar28 = lVar28 + 1;
      lVar27 = lVar27 + 0x1c;
    } while (lVar28 < *(int *)(lVar23 + 0x78));
  }
  if (local_1a8 == &local_168) {
    if (local_168 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar23 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(lVar23 + 0x70) = local_168;
    local_168 = (longlong *)0x0;
    *(int *)(lVar23 + 0x78) = (int)uStack_160;
    *(uint *)(lVar23 + 0x7c) = uStack_160._4_4_;
    uStack_160 = 0;
  }
  FUN_14045d2f8(lVar23);
  if (local_1b0 != local_1b4) {
    local_178 = local_138;
    local_170 = (int)uStack_130;
    FUN_147a40116(local_190);
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147a41d18:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a425aa FUN_147a425aa body=376 status=ok
// SIG undefined FUN_147a425aa(void)

void FUN_147a425aa(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [36];
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < 2) goto LAB_147a4260c;
  lVar2 = *(longlong *)(param_1 + 0x70);
  fVar4 = *(float *)(lVar2 + 4);
  if (*param_2 <= fVar4) {
    if (*(byte *)(param_1 + 0x6c) - 3 < 2) goto LAB_147a4260c;
    lVar3 = (ulonglong)(iVar1 - 1) * 0x1c;
    fVar5 = *(float *)(lVar2 + 4 + lVar3);
    local_54 = 0;
    FUN_147a40fa2(fVar4,fVar5,param_2);
    if (*(char *)(param_1 + 0x6c) == '\x02') goto LAB_147a42700;
    if (*(char *)(param_1 + 0x6c) != '\x01') goto LAB_147a4260c;
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x70) + 8) -
            *(float *)(*(longlong *)(param_1 + 0x70) + 8 + lVar3);
  }
  else {
    lVar3 = (ulonglong)(iVar1 - 1) * 0x1c;
    fVar5 = *(float *)(lVar2 + 4 + lVar3);
    if ((*param_2 < fVar5) || (*(byte *)(param_1 + 0x6d) - 3 < 2)) goto LAB_147a4260c;
    local_54 = 0;
    FUN_147a40fa2(fVar4,fVar5,param_2);
    if (*(char *)(param_1 + 0x6d) == '\x02') {
LAB_147a42700:
      if ((local_54 & 0x80000001) == 1) {
        *param_2 = fVar4 + (fVar5 - *param_2);
      }
      goto LAB_147a4260c;
    }
    if (*(char *)(param_1 + 0x6d) != '\x01') goto LAB_147a4260c;
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x70) + 8 + lVar3) -
            *(float *)(*(longlong *)(param_1 + 0x70) + 8);
  }
  *param_3 = (float)(int)local_54 * fVar4;
LAB_147a4260c:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a42724 FUN_147a42724 body=2557 status=ok
// SIG undefined FUN_147a42724(void)

void FUN_147a42724(longlong param_1,char *param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  char *pcVar20;
  char cVar21;
  char *pcVar22;
  char cVar23;
  char *pcVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar18 = *(uint *)(param_1 + 0x78);
  cVar23 = '\x01';
  if ((ulonglong)uVar18 == 0) {
    bVar10 = false;
    bVar6 = true;
    bVar8 = false;
    bVar11 = false;
    cVar21 = '\0';
    goto LAB_147a427bd;
  }
  cVar21 = '\x01';
  if (1 < (int)uVar18) {
    pcVar20 = *(char **)(param_1 + 0x70);
    lVar19 = (ulonglong)uVar18 * 0x1c;
    lVar13 = 0;
    do {
      if ((1e-08 < ABS(*(float *)(pcVar20 + lVar13 + 8) - *(float *)(pcVar20 + 8))) ||
         (pcVar20[lVar13] == '\x02')) {
        lVar13 = 0;
        bVar4 = 0;
        goto LAB_147a42baa;
      }
      lVar13 = lVar13 + 0x1c;
    } while (lVar19 != lVar13);
  }
  bVar6 = true;
  goto LAB_147a427b7;
  while( true ) {
    lVar13 = lVar13 + 0x1c;
    bVar4 = bVar7 | cVar5 != *pcVar20;
    if (lVar19 == lVar13) break;
LAB_147a42baa:
    bVar7 = bVar4;
    cVar5 = pcVar20[lVar13];
    if ((cVar5 == '\x02') && (pcVar20[lVar13 + 2] != '\0')) {
      cVar21 = '\x05';
      bVar8 = true;
      bVar6 = false;
      goto LAB_147a427ba;
    }
  }
  bVar10 = true;
  if ((bool)(bVar7 | cVar5 != *pcVar20)) {
LAB_147a42be0:
    bVar6 = false;
    bVar8 = false;
    bVar11 = false;
    cVar21 = '\x04';
    goto LAB_147a427bd;
  }
  if (cVar5 == '\0') {
    cVar21 = '\x02';
    bVar6 = false;
  }
  else {
    if (cVar5 == '\x01') goto LAB_147a42be0;
    if (cVar5 == '\x02') {
      cVar21 = '\x03';
      bVar11 = true;
      bVar6 = false;
      bVar10 = false;
      bVar8 = false;
      goto LAB_147a427bd;
    }
    bVar6 = true;
  }
LAB_147a427b7:
  bVar8 = false;
LAB_147a427ba:
  bVar10 = false;
  bVar11 = false;
LAB_147a427bd:
  *param_2 = cVar21;
  bVar9 = false;
  if ((((0.0 < param_4) && (0.0 < param_3)) && (bVar9 = false, !bVar6)) &&
     (iVar17 = *(int *)(param_1 + 0x78), iVar17 != 0)) {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x70) + 4);
    fVar32 = *(float *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)(iVar17 + -1) * 0x1c);
    if (fVar2 <= fVar32) {
      fVar35 = fVar32 - fVar2;
      fVar33 = 1.0 / fVar35;
      iVar16 = 0;
      iVar25 = 0;
      fVar29 = fVar2;
      do {
        fVar30 = 0.0;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar25 * 0x1c + 0x20);
        if ((*pfVar1 <= fVar29 && fVar29 != *pfVar1) && (iVar25 = iVar25 + 1, iVar17 <= iVar25))
        goto LAB_147a42826;
        lVar19 = (longlong)iVar16;
        fVar26 = (*(float *)(*(longlong *)(param_1 + 0x70) + lVar19 + 5 + (lVar19 + 1) * 0x1b) -
                 fVar2) * fVar33;
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
        if (fVar26 <= 0.0) {
          fVar26 = fVar30;
        }
        fVar26 = (float)FUN_144afe150(fVar26 * 65535.0);
        fVar26 = fVar26 * 1.5259022e-05 * fVar35 + fVar2;
        if (fVar29 <= fVar26) {
          fVar27 = (*(float *)(*(longlong *)(param_1 + 0x70) + 4 + lVar19 * 0x1c) - fVar2) * fVar33;
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          if (fVar27 <= 0.0) {
            fVar27 = fVar30;
          }
          fVar30 = (float)FUN_144afe150(fVar27 * 65535.0);
          fVar30 = fVar30 * 1.5259022e-05 * fVar35 + fVar2;
        }
        else {
          if (iVar17 <= iVar16 + 1) goto LAB_147a42826;
          fVar27 = (*(float *)(*(longlong *)(param_1 + 0x70) + 0x3c + (longlong)iVar16 * 0x1c) -
                   fVar2) * fVar33;
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          if (fVar27 <= 0.0) {
            fVar27 = fVar30;
          }
          fVar27 = (float)FUN_144afe150(fVar27 * 65535.0);
          lVar19 = lVar19 + 1;
          fVar30 = fVar26;
          fVar26 = fVar27 * 1.5259022e-05 * fVar35 + fVar2;
          iVar16 = iVar16 + 1;
        }
        lVar13 = *(longlong *)(param_1 + 0x70);
        pcVar20 = (char *)(lVar19 * 0x1c + lVar13);
        fVar27 = fVar26 - fVar30;
        if ((fVar27 <= 0.0) || (*pcVar20 == '\x01')) {
          fVar30 = *(float *)(pcVar20 + 8);
        }
        else {
          fVar34 = (fVar29 - fVar30) / fVar27;
          fVar30 = *(float *)(pcVar20 + 8);
          fVar3 = *(float *)(pcVar20 + 0x24);
          if (*pcVar20 == '\0') {
            fVar30 = fVar34 * (fVar3 - fVar30) + fVar30;
          }
          else {
            bVar4 = pcVar20[2];
            if ((bVar4 < 2) && ((pcVar20[0x1e] & 0xfdU) == 0)) {
              fVar26 = *(float *)(pcVar20 + 0x14) * fVar27 * 0.33333334 + fVar30;
              fVar27 = fVar3 - fVar27 * *(float *)(pcVar20 + 0x28) * 0.33333334;
              fVar31 = (fVar27 - fVar26) * fVar34 + fVar26;
              fVar30 = (fVar26 - fVar30) * fVar34 + fVar30;
              fVar30 = (fVar31 - fVar30) * fVar34 + fVar30;
              fVar30 = (((((fVar3 - fVar27) * fVar34 + fVar27) - fVar31) * fVar34 + fVar31) - fVar30
                       ) * fVar34 + fVar30;
            }
            else {
              fVar30 = (float)FUN_147a3e1e7(pcVar20,bVar4,*(undefined4 *)(pcVar20 + 0x14),
                                            *(undefined4 *)(pcVar20 + 0x18),bVar4,fVar3,fVar26,
                                            *(undefined4 *)(pcVar20 + 0x28),
                                            *(undefined4 *)(pcVar20 + 0x2c),pcVar20[0x1e],fVar29);
              lVar13 = *(longlong *)(param_1 + 0x70);
            }
          }
        }
        fVar26 = (float)FUN_1434a7309(lVar13 + (longlong)iVar25 * 0x1c,
                                      (longlong)iVar25 * 0x1c + lVar13 + 0x1c,fVar29);
        bVar6 = ABS(fVar26 - fVar30) <= param_3;
        fVar29 = fVar29 + 1.0 / param_4;
      } while ((fVar29 <= fVar32) && (ABS(fVar26 - fVar30) <= param_3));
    }
    else {
LAB_147a42826:
      bVar6 = true;
    }
    iVar16 = iVar17;
    if (cVar21 != '\x04') {
      if (cVar21 == '\x05') {
        iVar16 = iVar17 * 2;
      }
      else {
        iVar16 = 0;
      }
    }
    if ((bVar6) &&
       ((int)(((iVar16 + 1U & 0xfffffffe) + iVar17 * 2 + 3 & 0xfffffffc) + 8) <
        (int)((iVar16 + 3U & 0xfffffffc) + iVar17 * 4))) {
      bVar9 = true;
      cVar23 = '\0';
    }
    else {
      cVar23 = '\x01';
      bVar9 = false;
    }
  }
  param_2[1] = cVar23;
  param_2[2] = *(char *)(param_1 + 0x6c);
  param_2[3] = *(char *)(param_1 + 0x6d);
  if (cVar21 == '\x01') {
    uVar28 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 8);
  }
  else {
    if (cVar21 != '\0') {
      iVar17 = *(int *)(param_1 + 0x78);
      iVar16 = 0;
      if (bVar8) {
        iVar16 = iVar17 * 2;
      }
      if (bVar10) {
        iVar16 = iVar17;
      }
      if (bVar9) {
        iVar16 = ((iVar16 + 1U & 0xfffffffe) + iVar17 * 2 + 3 & 0xfffffffc) + 8;
      }
      else {
        iVar16 = (iVar16 + 3U & 0xfffffffc) + iVar17 * 4;
      }
      uVar18 = iVar17 * 4 + iVar16;
      if ((bVar11) || (bVar10)) {
        uVar18 = uVar18 + iVar17 * 8;
      }
      else if (bVar8) {
        uVar18 = uVar18 + iVar17 * 0x10;
      }
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar18);
      }
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      iVar17 = 0;
      uVar12 = uVar18;
      if (*(uint *)(param_2 + 0x14) != uVar18) {
        FUN_144893a1c(param_2 + 8,uVar18);
        iVar17 = *(int *)(param_2 + 0x10);
        uVar12 = *(uint *)(param_2 + 0x14);
      }
      *(uint *)(param_2 + 0x10) = iVar17 + uVar18;
      if (uVar12 - iVar17 < uVar18) {
        FUN_1447403be(param_2 + 8);
      }
      pcVar20 = *(char **)(param_2 + 8);
      iVar17 = *(int *)(param_1 + 0x78);
      *(int *)(param_2 + 4) = iVar17;
      if (bVar10) {
        if (iVar17 == 0) {
          iVar16 = 0;
        }
        else {
          lVar19 = *(longlong *)(param_1 + 0x70);
          lVar13 = 0;
          pcVar24 = pcVar20;
          do {
            cVar23 = *(char *)(lVar19 + lVar13);
            cVar21 = (cVar23 == '\x02') * '\x02' + '\x01';
            if (cVar23 == '\0') {
              cVar21 = '\x02';
            }
            *pcVar24 = cVar21;
            pcVar24 = pcVar24 + 1;
            lVar13 = lVar13 + 0x1c;
            iVar16 = iVar17;
          } while ((longlong)iVar17 * 0x1c != lVar13);
        }
      }
      else {
        iVar16 = 0;
        if ((bVar8) && (iVar17 != 0)) {
          pcVar24 = *(char **)(param_1 + 0x70);
          pcVar15 = pcVar24 + (longlong)iVar17 * 0x1c;
          pcVar22 = pcVar20;
          do {
            cVar23 = (*pcVar24 == '\x02') * '\x02' + '\x01';
            if (*pcVar24 == '\0') {
              cVar23 = '\x02';
            }
            *pcVar22 = cVar23;
            pcVar22[1] = pcVar24[2];
            pcVar22 = pcVar22 + 2;
            pcVar24 = pcVar24 + 0x1c;
            iVar16 = iVar17 * 2;
          } while (pcVar24 != pcVar15);
        }
      }
      if (bVar9) {
        iVar17 = *(int *)(param_1 + 0x78);
        uVar18 = iVar16 + 1U & 0xfffffffe;
        lVar19 = *(longlong *)(param_1 + 0x70);
        fVar2 = *(float *)(lVar19 + 4);
        fVar32 = *(float *)(lVar19 + 4 + (longlong)(iVar17 + -1) * 0x1c) - fVar2;
        if (iVar17 != 0) {
          pcVar24 = pcVar20 + (int)uVar18;
          lVar13 = 0;
          do {
            fVar29 = (*(float *)(lVar19 + 4 + lVar13) - fVar2) * (1.0 / fVar32);
            if (1.0 <= fVar29) {
              fVar29 = 1.0;
            }
            if (fVar29 <= 0.0) {
              fVar29 = 0.0;
            }
            fVar29 = (float)FUN_144afe150(fVar29 * 65535.0);
            *(short *)pcVar24 = (short)(int)fVar29;
            pcVar24 = pcVar24 + 2;
            lVar13 = lVar13 + 0x1c;
          } while ((longlong)iVar17 * 0x1c != lVar13);
        }
        uVar14 = (longlong)(int)(iVar17 * 2 + uVar18 + 3) & 0xfffffffffffffffc;
        iVar16 = (int)uVar14 + 8;
        *(float *)(pcVar20 + uVar14) = fVar2;
        *(float *)(pcVar20 + uVar14 + 4) = fVar32;
      }
      else {
        uVar18 = iVar16 + 3U & 0xfffffffc;
        iVar17 = *(int *)(param_1 + 0x78);
        iVar16 = uVar18 + iVar17 * 4;
        if ((longlong)iVar17 != 0) {
          lVar19 = *(longlong *)(param_1 + 0x70);
          pcVar24 = pcVar20 + (int)uVar18;
          lVar13 = 0;
          do {
            *(undefined4 *)pcVar24 = *(undefined4 *)(lVar19 + 4 + lVar13);
            pcVar24 = pcVar24 + 4;
            lVar13 = lVar13 + 0x1c;
          } while ((longlong)iVar17 * 0x1c != lVar13);
        }
      }
      iVar17 = *(int *)(param_1 + 0x78);
      if ((longlong)iVar17 == 0) {
        return;
      }
      lVar19 = *(longlong *)(param_1 + 0x70);
      pcVar20 = pcVar20 + iVar16;
      lVar13 = 0;
      do {
        *(undefined4 *)pcVar20 = *(undefined4 *)(lVar19 + 8 + lVar13);
        if ((bVar10) || (!(bool)(~bVar8 & *(char *)(lVar19 + lVar13) != '\x02'))) {
          *(undefined4 *)(pcVar20 + 4) = *(undefined4 *)(lVar19 + 0xc + lVar13);
          *(undefined4 *)(pcVar20 + 8) = *(undefined4 *)(lVar19 + 0x14 + lVar13);
          pcVar20 = pcVar20 + 0xc;
        }
        else {
          pcVar20 = pcVar20 + 4;
        }
        if (bVar8) {
          *(undefined4 *)pcVar20 = *(undefined4 *)(lVar19 + 0x10 + lVar13);
          *(undefined4 *)(pcVar20 + 4) = *(undefined4 *)(lVar19 + 0x18 + lVar13);
          pcVar20 = pcVar20 + 8;
        }
        lVar13 = lVar13 + 0x1c;
      } while ((longlong)iVar17 * 0x1c != lVar13);
      return;
    }
    uVar28 = *(undefined4 *)(param_1 + 0x68);
  }
  *(undefined4 *)(param_2 + 4) = uVar28;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  if (*(int *)(param_2 + 0x14) == 0) {
    return;
  }
  FUN_144893a1c(param_2 + 8,0);
  return;
}



// FUNCTION 147a43122 FUN_147a43122 body=219 status=ok
// SIG undefined FUN_147a43122(void)

void FUN_147a43122(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *(undefined8 *)(param_1 + 8);
  local_44 = *(undefined4 *)(param_1 + 4);
  local_5c = (uint)param_1[3];
  local_60 = (uint)param_1[2];
  puVar1 = (undefined8 *)
           (&DAT_14cad4350 + (ulonglong)param_1[1] * 0x40 + (ulonglong)*param_1 * 0x80);
  pcVar2 = (code *)*puVar1;
  plVar4 = (longlong *)puVar1[2];
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    plVar4 = puVar1 + 4;
  }
  local_4c = param_2;
  local_48 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))();
  local_78 = &local_58;
  local_70 = &local_4c;
  local_68 = &local_48;
  (*pcVar2)(uVar3,&local_60,&local_5c,&local_44);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a431fe FUN_147a431fe body=647 status=ok
// SIG undefined FUN_147a431fe(void)

undefined8 FUN_147a431fe(undefined1 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,1);
  }
  else {
    param_1[3] = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  local_24 = *(undefined4 *)(param_1 + 4);
  puVar5 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar5 + 1;
  if ((undefined4 *)puVar5[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  *(undefined4 *)(param_1 + 4) = local_24;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_28 = *(uint *)(param_1 + 0x10);
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
  }
  else {
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    if ((int)local_28 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_28);
    }
    puVar3 = (undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar6 = 0;
    uVar7 = local_28;
    if (*(uint *)(param_1 + 0x14) != local_28) {
      FUN_144893a1c(puVar3);
      iVar6 = *(int *)(param_1 + 0x10);
      uVar7 = *(uint *)(param_1 + 0x14);
    }
    *(uint *)(param_1 + 0x10) = local_28 + iVar6;
    if (uVar7 - iVar6 < local_28) {
      FUN_1447403be(puVar3,iVar6);
    }
    uVar8 = *puVar3;
  }
  (**(code **)(*param_2 + 0x170))(param_2,uVar8,(longlong)(int)local_28);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147a43488 FUN_147a43488 body=88 status=ok
// SIG undefined FUN_147a43488(void)

undefined8 FUN_147a43488(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))))) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      if (iVar1 != 0) {
        iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),(longlong)iVar1);
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
      }
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 4) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147a434e0 FUN_147a434e0 body=177 status=ok
// SIG undefined FUN_147a434e0(void)

void FUN_147a434e0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  param_1 = param_1 + 1;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4355d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      return;
    }
    FUN_14572512c(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 147a43592 FUN_147a43592 body=111 status=ok
// SIG undefined FUN_147a43592(void)

longlong FUN_147a43592(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_1c = param_2;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)*piVar2 * 8 + param_1[0xf];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a43602 FUN_147a43602 body=123 status=ok
// SIG undefined FUN_147a43602(void)

undefined8 * FUN_147a43602(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_24 = param_3;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  *param_2 = *(undefined8 *)(param_1[0xf] + (longlong)*piVar2 * 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4367e FUN_147a4367e body=199 status=ok
// SIG undefined FUN_147a4367e(void)

void FUN_147a4367e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410e1094();
  if (0 < (int)param_2[1]) {
    uVar3 = 0;
    do {
      lVar2 = *param_2;
      iVar1 = *(int *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x80) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
        FUN_1410e1574((longlong *)(param_1 + 0x78),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar2 + uVar3 * 8);
      LOCK();
      UNLOCK();
      local_4c = DAT_14c761474 + 1;
      DAT_14c761474 = DAT_14c761474 + 1;
      FUN_1406509a6(param_1 + 8,&local_4c,uVar3 & 0xffffffff);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)(int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a43746 FUN_147a43746 body=168 status=ok
// SIG undefined FUN_147a43746(void)

void FUN_147a43746(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_2;
  puVar2 = (uint *)FUN_14045d29c(param_1 + 8,&local_24);
  uVar1 = *puVar2;
  iVar3 = *(int *)(param_1 + 0x80);
  if (~uVar1 + iVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar1 * 8),
            (void *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar1 * 8 + 8),
            (longlong)(int)(~uVar1 + iVar3) << 3);
    iVar3 = *(int *)(param_1 + 0x80);
  }
  *(int *)(param_1 + 0x80) = iVar3 + -1;
  FUN_147a4e1e8(param_1 + 0x78);
  FUN_147a3fd66(param_1 + 8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a437f0 FUN_147a437f0 body=135 status=ok
// SIG undefined FUN_147a437f0(void)

undefined8
FUN_147a437f0(float param_1,undefined8 param_2,float param_3,undefined4 param_4,undefined1 param_5,
             float param_6)

{
  float fVar1;
  longlong in_RCX;
  int iVar2;
  ulonglong in_R8;
  
  if (0 < (longlong)*(int *)(in_RCX + 0x80)) {
    in_R8 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(in_RCX + 0x78) + in_R8 * 8);
      if (ABS(fVar1 - param_3) <= param_6) {
        *(undefined4 *)(*(longlong *)(in_RCX + 0x78) + 4 + in_R8 * 8) = param_4;
        FUN_140da68da(param_6,param_2);
        return param_2;
      }
      param_1 = param_6;
    } while ((fVar1 <= param_3) &&
            (in_R8 = in_R8 + 1, in_R8 < (ulonglong)(longlong)*(int *)(in_RCX + 0x80)));
  }
  LOCK();
  UNLOCK();
  iVar2 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1410e11d4(param_1,param_2,in_R8,param_4,param_5,iVar2);
  return param_2;
}



// FUNCTION 147a43878 FUN_147a43878 body=142 status=ok
// SIG undefined FUN_147a43878(void)

void FUN_147a43878(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    lVar3 = FUN_147a43592(param_1,param_2);
    uVar1 = *(undefined4 *)(lVar3 + 4);
    FUN_147a43746(param_1,param_2);
    local_58 = 0;
    local_50 = param_2;
    FUN_1410e11d4(param_1,local_44,param_3,uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a43908 FUN_147a43908 body=94 status=ok
// SIG undefined FUN_147a43908(void)

void FUN_147a43908(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a43602(0,local_28,param_2);
    uVar2 = local_28[0];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a439d2 FUN_147a439d2 body=57 status=ok
// SIG undefined FUN_147a439d2(void)

void FUN_147a439d2(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    lVar1 = FUN_147a43592(param_1,param_2);
    *(undefined4 *)(lVar1 + 4) = param_3;
  }
  return;
}



// FUNCTION 147a43a0c FUN_147a43a0c body=95 status=ok
// SIG undefined FUN_147a43a0c(void)

void FUN_147a43a0c(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a43602(0,local_28,param_2);
    uVar2 = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147a43a6c FUN_147a43a6c body=127 status=ok
// SIG undefined FUN_147a43a6c(void)

undefined4 * FUN_147a43a6c(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14045d218(param_1,param_3);
  uVar2 = 0;
  uVar3 = 0;
  if (cVar1 != '\0') {
    FUN_147a43602(param_1,&local_30,param_3);
    uVar2 = local_30;
    uVar3 = local_2c;
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a43b86 FUN_147a43b86 body=981 status=ok
// SIG undefined FUN_147a43b86(void)

void FUN_147a43b86(longlong param_1,float param_2,float param_3,char param_4,float param_5,
                  float param_6)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined1 local_cc [4];
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 == '\0') {
    local_c8 = 0;
    uStack_c0 = 0;
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x80);
    if (0 < (int)*(uint *)(param_1 + 0x80)) {
      uVar9 = 0;
      lVar4 = 0;
      bVar3 = false;
      do {
        while( true ) {
          fVar10 = *(float *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
          if ((param_5 <= fVar10) && (fVar10 <= param_6)) break;
          if (param_6 < fVar10) {
            *(float *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8) = fVar10 - (param_6 - param_5);
            uVar8 = (ulonglong)*(uint *)(param_1 + 0x80);
          }
          lVar4 = lVar4 + 1;
          if ((int)uVar8 <= lVar4) {
            if (!bVar3) goto LAB_147a43cbe;
            goto LAB_147a43ef3;
          }
        }
        uVar9 = FUN_147a43f5c(param_1,~-(uint)(param_5 != 0.0) & (uint)param_6 |
                                      -(uint)(param_5 != 0.0) & (uint)param_5,0);
        uVar8 = uStack_c0;
        lVar7 = (longlong)(int)uStack_c0;
        uVar6 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
        if (uStack_c0._4_4_ < uVar6) {
          FUN_1446f48e2(&local_c8,uVar8 & 0xffffffff);
        }
        *(int *)(local_c8 + lVar7 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
        uVar8 = (ulonglong)*(int *)(param_1 + 0x80);
        bVar3 = true;
      } while (lVar4 < (longlong)uVar8);
LAB_147a43ef3:
      if (0 < (longlong)(int)uStack_c0) {
        uVar8 = (longlong)(int)uStack_c0 + 1;
        do {
          iVar2 = *(int *)(local_c8 + -8 + uVar8 * 4);
          if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x60))) &&
             (puVar5 = (undefined4 *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x58)),
             puVar5 != (undefined4 *)0x0)) {
            FUN_147a43746(param_1,*puVar5);
          }
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
      local_e0 = 0x38d1b717;
      local_e8 = 0;
      FUN_147a437f0(param_1,local_cc,param_5,uVar9);
LAB_147a43cbe:
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    uVar6 = *(uint *)(param_1 + 0x80);
LAB_147a43cd3:
    lVar4 = *(longlong *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if ((int)uVar6 < 1) goto LAB_147a43d50;
    uVar8 = 0;
    do {
      local_e0 = 0x38d1b717;
      local_e8 = 0;
      FUN_147a437f0(param_1,&local_c8,*(undefined4 *)(lVar4 + uVar8 * 8),
                    *(undefined4 *)(lVar4 + 4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
    if ((longlong)*(int *)(param_1 + 0x80) == 0) goto LAB_147a43d50;
    fVar10 = **(float **)(param_1 + 0x78);
    fVar11 = (*(float **)(param_1 + 0x78))[(longlong)*(int *)(param_1 + 0x80) * 2 + -2];
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x80);
    plVar1 = (longlong *)(param_1 + 0x78);
    if (0 < (int)uVar6) {
      lVar4 = 0;
      do {
        fVar10 = *(float *)(*plVar1 + lVar4 * 8);
        if (param_5 <= fVar10) {
          *(float *)(*plVar1 + lVar4 * 8) = fVar10 + (param_6 - param_5);
          uVar6 = *(uint *)(param_1 + 0x80);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar6);
      goto LAB_147a43cd3;
    }
    lVar4 = *plVar1;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
LAB_147a43d50:
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  if (fVar10 < param_2) {
    FUN_147a43f5c(param_1);
    local_e0 = 0x38d1b717;
    local_e8 = 0;
    FUN_147a437f0(param_1,&local_c8);
    if (param_3 < fVar11) goto LAB_147a43e06;
  }
  else {
    if (fVar11 <= param_3) goto LAB_147a43d64;
LAB_147a43e06:
    uVar9 = FUN_147a43f5c(param_1);
    local_e0 = 0x38d1b717;
    local_e8 = 0;
    FUN_147a437f0(param_1,&local_c8,param_3,uVar9);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (0 < iVar2) {
    uVar6 = 0;
    do {
      if (((-1 < (int)uVar6) &&
          (fVar10 = *(float *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar6 * 8),
          fVar10 < param_2 || param_3 < fVar10)) &&
         (((int)uVar6 < *(int *)(param_1 + 0x60) &&
          (puVar5 = (undefined4 *)((ulonglong)uVar6 * 4 + *(longlong *)(param_1 + 0x58)),
          puVar5 != (undefined4 *)0x0)))) {
        FUN_147a43746(param_1,*puVar5);
        uVar6 = uVar6 - 1;
        iVar2 = *(int *)(param_1 + 0x80);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
LAB_147a43d64:
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a43f5c FUN_147a43f5c body=491 status=ok
// SIG undefined FUN_147a43f5c(void)

undefined8 FUN_147a43f5c(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0.0;
  local_24 = param_2;
  FUN_147a4490c();
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar4 = (ulonglong)uVar2;
  if (uVar4 == 0) {
    uVar2 = -(uint)(*(float *)(param_1 + 0x68) == 3.4028235e+38);
    auVar6 = ZEXT416(~uVar2 & (uint)*(float *)(param_1 + 0x68) | param_3 & uVar2);
    goto LAB_147a43fae;
  }
  pfVar1 = *(float **)(param_1 + 0x78);
  if (1 < (int)uVar2) {
    fVar7 = *pfVar1;
    if (fVar7 < local_24) {
      fVar7 = pfVar1[uVar4 * 2 + -2];
      if (fVar7 <= local_24) {
        if ((*(char *)(param_1 + 0x6d) != '\x03') || (ABS(pfVar1[uVar4 * 2 + -4] - fVar7) <= 1e-08))
        {
          auVar6 = ZEXT416((uint)pfVar1[uVar4 * 2 + -1]);
        }
        else {
          auVar6 = ZEXT416((uint)((local_24 - fVar7) *
                                  ((pfVar1[uVar4 * 2 + -3] - pfVar1[uVar4 * 2 + -1]) /
                                  (pfVar1[uVar4 * 2 + -4] - fVar7)) + pfVar1[uVar4 * 2 + -1]));
        }
      }
      else {
        uVar4 = 1;
        if (uVar2 != 2) {
          uVar2 = uVar2 - 2;
          uVar3 = 1;
          do {
            uVar5 = uVar2 >> 1;
            if (pfVar1[(ulonglong)(uVar5 + uVar3) * 2] <= local_24) {
              uVar3 = uVar3 + uVar5 + 1;
              uVar5 = uVar2 + ~uVar5;
            }
            uVar2 = uVar5;
          } while (0 < (int)uVar2);
          uVar4 = (ulonglong)uVar3;
        }
        fVar7 = pfVar1[uVar4 * 2] - pfVar1[uVar4 * 2 + -2];
        if ((fVar7 <= 0.0) || (*(char *)(param_1 + 0x70) == '\x01')) {
          auVar6 = ZEXT416((uint)pfVar1[uVar4 * 2 + -1]);
        }
        else {
          auVar6 = ZEXT416((uint)((pfVar1[uVar4 * 2 + 1] - pfVar1[uVar4 * 2 + -1]) *
                                  ((local_24 - pfVar1[uVar4 * 2 + -2]) / fVar7) +
                                 pfVar1[uVar4 * 2 + -1]));
        }
      }
      goto LAB_147a43fae;
    }
    if ((*(char *)(param_1 + 0x6c) == '\x03') && (1e-08 < ABS(pfVar1[2] - fVar7))) {
      auVar6 = ZEXT416((uint)((local_24 - fVar7) * ((pfVar1[3] - pfVar1[1]) / (pfVar1[2] - fVar7)) +
                             pfVar1[1]));
      goto LAB_147a43fae;
    }
  }
  auVar6 = ZEXT416((uint)pfVar1[1]);
LAB_147a43fae:
  auVar6._0_4_ = auVar6._0_4_ + local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return auVar6._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44168 FUN_147a44168 body=398 status=ok
// SIG undefined FUN_147a44168(void)

void FUN_147a44168(longlong param_1,float param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_8c [4];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = (int)((param_4 - param_3) / param_2 + -1.0);
    local_88 = 0;
    uStack_80 = 0;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 != 0) {
      FUN_147a4e0a8(&local_88);
    }
    param_3 = param_3 + param_2;
    if (param_3 < param_4) {
      do {
        uVar7 = FUN_147a43f5c(param_1,param_3,0);
        uVar1 = uStack_80;
        lVar4 = (longlong)(int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        if (uStack_80._4_4_ < uVar2) {
          FUN_147a4e0fe(&local_88,uVar1 & 0xffffffff);
        }
        *(float *)(local_88 + lVar4 * 8) = param_3;
        *(undefined4 *)(local_88 + 4 + lVar4 * 8) = uVar7;
        param_3 = param_3 + param_2;
      } while (param_3 < param_4);
    }
    lVar4 = local_88;
    lVar5 = (longlong)(int)uStack_80;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        local_a0 = 0x38d1b717;
        local_a8 = 0;
        FUN_147a437f0(param_1,local_8c,*(undefined4 *)(lVar4 + lVar6),
                      *(undefined4 *)(lVar4 + 4 + lVar6));
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a44312 FUN_147a44312 body=1386 status=ok
// SIG undefined FUN_147a44312(void)

void FUN_147a44312(longlong param_1,float param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [40];
  longlong **local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  void *local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar7 = *(uint *)(param_1 + 0x80);
  if (2 < (longlong)(int)uVar7) {
    uVar11 = 0;
    if (param_3 < 1) {
      param_3 = 0;
    }
    uVar15 = (ulonglong)(uVar7 - 1);
    if ((int)param_4 < (int)(uVar7 - 1)) {
      uVar15 = param_4 & 0xffffffff;
    }
    iVar14 = (int)uVar15;
    if (1 < iVar14 - param_3) {
      local_100 = (longlong **)(param_1 + 0x78);
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_14481578e(&local_b8);
      do {
        lVar17 = (longlong)(int)uStack_b0;
        uVar6 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
        if (uStack_b0._4_4_ < uVar6) {
          FUN_1446f48e2(&local_b8);
        }
        *(uint *)(local_b8 + lVar17 * 4) = uVar11;
        uVar11 = uVar11 + 1;
      } while (param_3 + 1U != uVar11);
      uVar16 = (ulonglong)(param_3 + 1U);
LAB_147a44429:
      iVar8 = (int)uVar16;
      uVar13 = uVar16;
      if (iVar8 < iVar14) {
        plVar2 = *local_100;
        uVar9 = uStack_b0 & 0xffffffff;
        uVar11 = *(uint *)(local_b8 + (longlong)((int)uStack_b0 + -1) * 4);
        lVar17 = (longlong)(int)uVar11;
        pfVar1 = (float *)(plVar2 + iVar8);
        lVar12 = 0;
        bVar10 = false;
        fVar18 = *pfVar1;
        do {
          lVar4 = lVar12 * 2;
          fVar20 = pfVar1[lVar4 + 2] - *(float *)(plVar2 + lVar17);
          if (fVar20 <= 0.0) {
            fVar19 = *(float *)((longlong)plVar2 + lVar17 * 8 + 4);
          }
          else {
            fVar19 = *(float *)((longlong)plVar2 + lVar17 * 8 + 4);
            if (*(char *)(param_1 + 0x70) != '\x01') {
              fVar19 = fVar19 + (pfVar1[lVar12 * 2 + 3] - fVar19) *
                                ((fVar18 - *(float *)(plVar2 + lVar17)) / fVar20);
            }
          }
          if (param_2 < ABS(fVar19 - pfVar1[lVar12 * 2 + 1])) {
            uVar13 = (uVar16 & 0xffffffff) + lVar12;
            if (!bVar10) goto LAB_147a44588;
            break;
          }
          lVar12 = lVar12 + 1;
          bVar10 = true;
          uVar13 = uVar15;
          fVar18 = pfVar1[lVar4 + 2];
        } while ((longlong)iVar14 - (longlong)iVar8 != lVar12);
        if ((int)uVar11 <= param_3) goto LAB_147a44588;
        bVar10 = false;
        do {
          iVar8 = (int)uVar9;
          lVar17 = (longlong)*(int *)(local_b8 + -8 + (longlong)iVar8 * 4);
          fVar18 = *(float *)(plVar2 + (int)uVar13) - *(float *)(plVar2 + lVar17);
          if ((fVar18 <= 0.0) || (*(char *)(param_1 + 0x70) == '\x01')) {
            fVar20 = *(float *)((longlong)plVar2 + lVar17 * 8 + 4);
          }
          else {
            fVar20 = *(float *)((longlong)plVar2 + lVar17 * 8 + 4);
            fVar20 = (*(float *)((longlong)plVar2 + (longlong)(int)uVar13 * 8 + 4) - fVar20) *
                     ((*(float *)(plVar2 + uVar11) - *(float *)(plVar2 + lVar17)) / fVar18) + fVar20
            ;
          }
          uVar16 = uVar13;
          if (param_2 < ABS(fVar20 - *(float *)((longlong)plVar2 + (ulonglong)uVar11 * 8 + 4))) {
            if (!bVar10) goto LAB_147a44588;
            break;
          }
          uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar8 - 1U);
          uVar11 = *(uint *)(local_b8 + (longlong)(iVar8 + -2) * 4);
          bVar10 = true;
          uVar9 = (ulonglong)(iVar8 - 1U);
        } while (param_3 < (int)uVar11);
        goto LAB_147a44429;
      }
LAB_147a44588:
      iVar8 = (int)uVar13;
      if (iVar8 < iVar14) {
        lVar17 = (longlong)(int)uStack_b0;
        uVar11 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
        if (uStack_b0._4_4_ < uVar11) {
          FUN_1446f48e2(&local_b8);
        }
        *(int *)(local_b8 + lVar17 * 4) = iVar8;
        uVar16 = (ulonglong)(iVar8 + 1);
        goto LAB_147a44429;
      }
      if (iVar8 < (int)uVar7) {
        do {
          lVar17 = (longlong)(int)uStack_b0;
          uVar11 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
          if (uStack_b0._4_4_ < uVar11) {
            FUN_1446f48e2(&local_b8);
          }
          *(int *)(local_b8 + lVar17 * 4) = (int)uVar13;
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
        } while (uVar7 != uVar11);
      }
      plVar2 = (longlong *)(param_1 + 8);
      local_c8 = (void *)0x0;
      uStack_c0 = 0;
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
        FUN_147a448ca(&local_c8,uVar7);
      }
      else {
        uStack_c0 = (ulonglong)uVar7;
        iVar14 = 0;
        FUN_14065110c(&local_c8);
        memset(local_c8,0,(longlong)(int)uVar7 << 2);
        lVar17 = param_1 + 0x18;
        local_a0 = 0x100000000;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = lVar17;
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_1449c0562(&local_a0);
          iVar14 = *(int *)(param_1 + 0x30);
        }
        local_e0 = local_90;
        uVar5 = local_e0;
        local_d8 = local_88;
        local_d4 = local_84;
        uStack_f0 = local_a0;
        local_e8 = local_98;
        local_e0._4_4_ = (int)((ulonglong)local_90 >> 0x20);
        iVar8 = local_e0._4_4_;
        local_f8 = plVar2;
        if ((local_e0._4_4_ != iVar14) || (local_e0 = uVar5, local_98 != lVar17)) {
          do {
            local_e0 = uVar5;
            *(undefined4 *)
             ((longlong)local_c8 + (longlong)*(int *)(*local_f8 + 4 + (longlong)iVar8 * 0x10) * 4) =
                 *(undefined4 *)(*local_f8 + (longlong)iVar8 * 0x10);
            local_e0 = CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_f0._4_4_);
            FUN_1449c0562(&uStack_f0);
            iVar8 = local_e0._4_4_;
            uVar5 = local_e0;
          } while (local_f8 != plVar2 || (local_e8 != lVar17 || local_e0._4_4_ != iVar14));
        }
      }
      uVar15 = uStack_b0 & 0xffffffff;
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      if ((int)uStack_b0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar15);
      }
      if (uVar15 != 0) {
        FUN_147a4e284(&local_f8,uVar15);
      }
      FUN_14093ce12(plVar2,0);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 100) != 0) {
        FUN_1406525c2(param_1 + 0x58,0);
      }
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          uVar13 = uStack_f0;
          lVar17 = (longlong)*(int *)(local_b8 + uVar16 * 4);
          plVar3 = *local_100;
          lVar12 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_1410e1574(&local_f8,uVar13 & 0xffffffff);
          }
          local_f8[lVar12] = plVar3[lVar17];
          FUN_1406509a6(plVar2,(void *)(lVar17 * 4 + (longlong)local_c8),uVar16 & 0xffffffff);
          uVar16 = uVar16 + 1;
        } while (uVar15 != uVar16);
      }
      if (local_100 == &local_f8) {
        if (local_f8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_1 + 0x78) = local_f8;
        local_f8 = (longlong *)0x0;
        *(int *)(param_1 + 0x80) = (int)uStack_f0;
        *(uint *)(param_1 + 0x84) = uStack_f0._4_4_;
      }
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a448ca FUN_147a448ca body=65 status=ok
// SIG undefined FUN_147a448ca(void)

void FUN_147a448ca(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14065110c(param_1,iVar1);
  }
  FUN_1406516a8((longlong)iVar1 * 4 + *param_1,param_2);
  return;
}



// FUNCTION 147a4490c FUN_147a4490c body=362 status=ok
// SIG undefined FUN_147a4490c(void)

void FUN_147a4490c(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [36];
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 < 2) goto LAB_147a4493b;
  pfVar2 = *(float **)(param_1 + 0x78);
  fVar3 = *pfVar2;
  if (*param_2 <= fVar3) {
    if (*(byte *)(param_1 + 0x6c) - 3 < 2) goto LAB_147a4493b;
    fVar4 = pfVar2[(ulonglong)(iVar1 - 1) * 2];
    local_54 = 0;
    FUN_147a40fa2(fVar3,fVar4,param_2);
    if (*(char *)(param_1 + 0x6c) == '\x02') goto LAB_147a44a54;
    if (*(char *)(param_1 + 0x6c) != '\x01') goto LAB_147a4493b;
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x78) + 4) -
            *(float *)(*(longlong *)(param_1 + 0x78) + 4 + (ulonglong)(iVar1 - 1) * 8);
  }
  else {
    fVar4 = pfVar2[(ulonglong)(iVar1 - 1) * 2];
    if ((*param_2 < fVar4) || (*(byte *)(param_1 + 0x6d) - 3 < 2)) goto LAB_147a4493b;
    local_54 = 0;
    FUN_147a40fa2(fVar3,fVar4,param_2);
    if (*(char *)(param_1 + 0x6d) == '\x02') {
LAB_147a44a54:
      if ((local_54 & 0x80000001) == 1) {
        *param_2 = fVar3 + (fVar4 - *param_2);
      }
      goto LAB_147a4493b;
    }
    if (*(char *)(param_1 + 0x6d) != '\x01') goto LAB_147a4493b;
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x78) + 4 + (ulonglong)(iVar1 - 1) * 8) -
            *(float *)(*(longlong *)(param_1 + 0x78) + 4);
  }
  *param_3 = (float)(int)local_54 * fVar3;
LAB_147a4493b:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44a78 FUN_147a44a78 body=130 status=ok
// SIG undefined FUN_147a44a78(void)

undefined8 FUN_147a44a78(float *param_1,float *param_2)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  
  if ((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) {
    uVar6 = 0;
  }
  else {
    fVar3 = param_1[4];
    fVar4 = param_2[4];
    if (fVar3 == fVar4) {
      if ((int)fVar3 < 2) {
        return CONCAT71((uint7)(uint3)((uint)fVar4 >> 8),1);
      }
      uVar5 = *(ulonglong *)(param_2 + 2);
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar9);
        uVar7 = (uint)uVar1;
        uVar2 = *(ushort *)(uVar5 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147a44abd;
          }
          iVar8 = uVar7 - uVar10;
          goto LAB_147a44af6;
        }
        if (uVar1 == 0) break;
LAB_147a44abd:
        lVar9 = lVar9 + 2;
      }
      iVar8 = 0;
LAB_147a44af6:
      bVar11 = iVar8 == 0;
    }
    else {
      uVar5 = (ulonglong)(uint)((int)fVar4 + (int)fVar3);
      bVar11 = (int)fVar4 + (int)fVar3 == 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),bVar11);
  }
  return uVar6;
}



// FUNCTION 147a44afa FUN_147a44afa body=104 status=ok
// SIG undefined FUN_147a44afa(void)

void FUN_147a44afa(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,param_1 + 2);
  return;
}



// FUNCTION 147a44b62 FUN_147a44b62 body=263 status=ok
// SIG undefined FUN_147a44b62(void)

undefined8 FUN_147a44b62(longlong param_1,undefined8 param_2,float param_3,undefined8 *param_4)

{
  uint uVar1;
  void *_Src;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  float local_58 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar3 = 0;
  if (0 < (int)uVar1) {
    pfVar2 = *(float **)(param_1 + 0x78);
    uVar3 = 0;
    do {
      if (param_3 < *pfVar2 || param_3 == *pfVar2) goto LAB_147a44bae;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 6;
    } while (uVar1 != uVar3);
    uVar3 = (ulonglong)uVar1;
  }
LAB_147a44bae:
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_4 + 1);
  lVar4 = (longlong)local_48;
  _Src = (void *)*param_4;
  local_58[0] = param_3;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar4 * 2);
  }
  FUN_147a44c6a((undefined8 *)(param_1 + 0x78),local_58,uVar3 & 0xffffffff);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1406509a6(param_1 + 8,&stack0x00000028,uVar3 & 0xffffffff);
  FUN_140da68da(param_1,param_2,uVar3 & 0xffffffff);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44c6a FUN_147a44c6a body=161 status=ok
// SIG undefined FUN_147a44c6a(void)

int FUN_147a44c6a(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147a4e2e4(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar3 + 0x18),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3) = param_2[4];
  *(undefined4 *)(lVar2 + 0x14 + lVar3) = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  return param_3;
}



// FUNCTION 147a44d0c FUN_147a44d0c body=117 status=ok
// SIG undefined FUN_147a44d0c(void)

void FUN_147a44d0c(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_2;
  puVar1 = (undefined4 *)FUN_14045d29c(param_1 + 8,&local_24);
  FUN_147a4e378(param_1 + 0x78,*puVar1);
  FUN_147a4e3d2(param_1 + 0x78);
  FUN_147a3fd66(param_1 + 8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44d82 FUN_147a44d82 body=115 status=ok
// SIG undefined FUN_147a44d82(void)

longlong FUN_147a44d82(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_1c = param_2;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)*piVar2 * 0x18 + param_1[0xf];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44df6 FUN_147a44df6 body=212 status=ok
// SIG undefined FUN_147a44df6(void)

undefined4 * FUN_147a44df6(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar2) {
    FUN_147a3fb42(param_1 + 1,iVar2);
  }
  local_2c = param_3;
  piVar3 = (int *)FUN_14045d29c(param_1 + 1);
  lVar4 = (longlong)*piVar3;
  lVar1 = param_1[0xf];
  *param_2 = *(undefined4 *)(lVar1 + lVar4 * 0x18);
  *(undefined8 *)(param_2 + 2) = 0;
  iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
  _Src = *(void **)(lVar1 + 8 + lVar4 * 0x18);
  param_2[4] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_2[5] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,iVar2,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar2 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44ecc FUN_147a44ecc body=121 status=ok
// SIG undefined FUN_147a44ecc(void)

undefined4 FUN_147a44ecc(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14045d218();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_147a44df6(param_1,local_48,param_2);
    uVar2 = local_48[0];
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a44f46 FUN_147a44f46 body=341 status=ok
// SIG undefined FUN_147a44f46(void)

void FUN_147a44f46(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_5c [4];
  undefined4 local_58 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_14045d218();
  if (cVar3 != '\0') {
    puVar4 = (undefined4 *)FUN_147a44d82(param_1,param_2);
    local_58[0] = *puVar4;
    local_50 = (void *)0x0;
    local_48 = puVar4[4];
    lVar5 = (longlong)local_48;
    pvVar1 = *(void **)(puVar4 + 2);
    if (lVar5 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar5 * 2);
    }
    FUN_147a44d0c(param_1,param_2);
    local_68 = param_2;
    FUN_147a44b62(param_1,local_5c,param_3,&local_50);
    puVar4 = (undefined4 *)FUN_147a44d82(param_1,param_2);
    iVar2 = local_48;
    pvVar1 = local_50;
    *puVar4 = local_58[0];
    if (puVar4 != local_58) {
      lVar5 = (longlong)local_48;
      puVar4[4] = local_48;
      if (local_48 == 0 && puVar4[5] == 0) {
        puVar4[5] = 0;
      }
      else {
        FUN_1446dd670(puVar4 + 2,local_48);
        if (iVar2 != 0) {
          memcpy(*(void **)(puVar4 + 2),pvVar1,lVar5 * 2);
        }
      }
    }
    *puVar4 = param_3;
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a450ac FUN_147a450ac body=3587 status=ok
// SIG undefined FUN_147a450ac(void)

void FUN_147a450ac(ulonglong param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  undefined *****pppppuVar2;
  undefined ******ppppppuVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  undefined ****ppppuVar11;
  undefined8 uVar12;
  undefined ****ppppuVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined ***pppuVar19;
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  undefined8 uStack_280;
  undefined *****local_270;
  ulonglong local_268;
  undefined *****local_260;
  undefined8 uStack_258;
  undefined *****local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined ****local_238;
  int local_22c;
  ulonglong local_228;
  undefined1 local_21c [4];
  undefined *****local_218;
  undefined *****local_210;
  ulonglong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined ****local_1f8;
  undefined8 uStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined8 local_1e0;
  ulonglong uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_1e0 = &pppppuStack_1e8;
  local_1f8 = (undefined ****)&PTR_FUN_149e37810;
  pppppuStack_1e8 = &local_1f8;
  uStack_1f0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_1e0);
  (*(code *)(*param_2)[0x43])(param_2,&DAT_149e3cbb8);
  if (((ulonglong)param_2[5] & 1) == 0) {
    if (((ulonglong)param_2[5] & 4) == 0) {
      ppppppuVar3 = local_1e0;
      local_1d0 = (undefined *****)CONCAT44(local_1d0._4_4_,(int)local_1d0);
      local_1c8 = (undefined *****)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
      if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
        pppppuVar1 = (undefined *****)(param_1 + 0x30);
        (*(code *)(*param_2)[2])
                  (param_2,(longlong)*(int *)(param_1 + 0x38) * 0x18,
                   (longlong)*(int *)(param_1 + 0x3c) * 0x18);
        (*(code *)(*param_2)[2])
                  (param_2,*(int *)(param_1 + 0x58) + 0x1fU >> 3 & 0xfffffffc,
                   *(int *)(param_1 + 0x5c) + 0x1fU >> 3 & 0xfffffffc);
        lVar14 = (longlong)*(int *)(param_1 + 0x78) << 2;
        (*(code *)(*param_2)[2])(param_2,lVar14,lVar14);
        if (*(char *)(param_1 + 0x98) == '\x02') {
          lVar14 = ((longlong)*(int *)(param_1 + 0x38) - (longlong)*(int *)(param_1 + 100)) * 0x80;
          (*(code *)(*param_2)[2])(param_2,lVar14,lVar14);
          pppppuVar2 = (undefined *****)(param_1 + 0x40);
          local_260 = (undefined *****)&DAT_100000000;
          local_250 = (undefined *****)&DAT_ffffffff;
          uStack_248 = uStack_248 & 0xffffffff00000000;
          uStack_258 = pppppuVar2;
          if (*(int *)(param_1 + 0x58) == 0) {
            iVar7 = 0;
          }
          else {
            FUN_1449c0562(&local_260);
            iVar7 = *(int *)(param_1 + 0x58);
          }
          local_1e0 = (undefined ******)local_250;
          ppppppuVar3 = local_1e0;
          uStack_1d8 = uStack_248;
          uStack_1f0 = (undefined ******)local_260;
          pppppuStack_1e8 = uStack_258;
          local_1e0._4_4_ = (int)((ulonglong)local_250 >> 0x20);
          iVar16 = local_1e0._4_4_;
          local_1f8 = (undefined ****)pppppuVar1;
          if ((local_1e0._4_4_ != iVar7) ||
             (local_1d0 = (undefined *****)CONCAT44(local_1d0._4_4_,(int)local_1d0),
             local_1c8 = (undefined *****)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
             uStack_258 != pppppuVar2)) {
            do {
              local_1e0 = ppppppuVar3;
              (*(code *)(*param_2)[2])
                        (param_2,(longlong)*(int *)((*local_1f8)[(longlong)iVar16 * 3 + 1] + 0xf) *
                                 0x1c,
                         (longlong)*(int *)((longlong)(*local_1f8)[(longlong)iVar16 * 3 + 1] + 0x7c)
                         * 0x1c);
              local_1e0 = (undefined ******)
                          CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~uStack_1f0._4_4_);
              FUN_1449c0562(&uStack_1f0);
              iVar16 = local_1e0._4_4_;
              ppppppuVar3 = local_1e0;
            } while ((undefined *****)local_1f8 != pppppuVar1 ||
                     (pppppuStack_1e8 != pppppuVar2 || local_1e0._4_4_ != iVar7));
          }
        }
        else {
          ppppppuVar3 = local_1e0;
          local_1d0 = (undefined *****)CONCAT44(local_1d0._4_4_,(int)local_1d0);
          local_1c8 = (undefined *****)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
          if (*(char *)(param_1 + 0x98) == '\x01') {
            lVar14 = ((longlong)*(int *)(param_1 + 0x38) - (longlong)*(int *)(param_1 + 100)) * 0x88
            ;
            (*(code *)(*param_2)[2])(param_2,lVar14,lVar14);
            pppppuVar2 = (undefined *****)(param_1 + 0x40);
            local_260 = (undefined *****)&DAT_100000000;
            local_250 = (undefined *****)&DAT_ffffffff;
            uStack_248 = uStack_248 & 0xffffffff00000000;
            uStack_258 = pppppuVar2;
            if (*(int *)(param_1 + 0x58) == 0) {
              iVar7 = 0;
            }
            else {
              FUN_1449c0562(&local_260);
              iVar7 = *(int *)(param_1 + 0x58);
            }
            local_1e0 = (undefined ******)local_250;
            ppppppuVar3 = local_1e0;
            uStack_1d8 = uStack_248;
            uStack_1f0 = (undefined ******)local_260;
            pppppuStack_1e8 = uStack_258;
            local_1e0._4_4_ = (int)((ulonglong)local_250 >> 0x20);
            iVar16 = local_1e0._4_4_;
            local_1f8 = (undefined ****)pppppuVar1;
            if ((local_1e0._4_4_ != iVar7) ||
               (local_1d0 = (undefined *****)CONCAT44(local_1d0._4_4_,(int)local_1d0),
               local_1c8 = (undefined *****)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
               uStack_258 != pppppuVar2)) {
              do {
                local_1e0 = ppppppuVar3;
                (*(code *)(*param_2)[2])
                          (param_2,(longlong)*(int *)((*local_1f8)[(longlong)iVar16 * 3 + 1] + 0x10)
                                   << 3,
                           (longlong)
                           *(int *)((longlong)(*local_1f8)[(longlong)iVar16 * 3 + 1] + 0x84) << 3);
                local_1e0 = (undefined ******)
                            CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~uStack_1f0._4_4_);
                FUN_1449c0562(&uStack_1f0);
                iVar16 = local_1e0._4_4_;
                ppppppuVar3 = local_1e0;
              } while ((undefined *****)local_1f8 != pppppuVar1 ||
                       (pppppuStack_1e8 != pppppuVar2 || local_1e0._4_4_ != iVar7));
            }
          }
        }
      }
    }
    else {
      local_218 = (undefined *****)
                  CONCAT44(local_218._4_4_,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100));
      pppppuVar1 = param_2[1];
      ppppuVar11 = (undefined ****)((longlong)*pppppuVar1 + 4);
      if (pppppuVar1[1] < ppppuVar11) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (*(code *)(*param_2)[0x2e])(param_2,&local_218,4);
        }
        else {
          FUN_14572512c(param_2,&local_218);
        }
      }
      else {
        local_218 = (undefined *****)CONCAT44(local_218._4_4_,*(undefined4 *)*pppppuVar1);
        *pppppuVar1 = ppppuVar11;
      }
      pcVar4 = (char *)(param_1 + 0x98);
      ppppuVar11 = *param_2[1];
      if (param_2[1][1] < (undefined ****)((longlong)ppppuVar11 + 1U)) {
        (*(code *)(*param_2)[0x2e])(param_2,pcVar4,1);
      }
      else {
        *pcVar4 = *(char *)ppppuVar11;
        *param_2[1] = (undefined ****)((longlong)*param_2[1] + 1);
      }
      pppppuVar1 = (undefined *****)(param_1 + 0x30);
      uStack_258 = (undefined *****)(param_1 + 0x40);
      local_260 = (undefined *****)&DAT_100000000;
      local_250 = (undefined *****)&DAT_ffffffff;
      uStack_248 = (ulonglong)uStack_248._4_4_ << 0x20;
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_1449c0562(&local_260);
      }
      local_1e0 = (undefined ******)local_250;
      ppppppuVar3 = local_1e0;
      uStack_1d8 = uStack_248;
      uStack_1f0 = (undefined ******)local_260;
      pppppuStack_1e8 = uStack_258;
      local_1c0 = 0;
      local_1e0._4_4_ = (int)((ulonglong)local_250 >> 0x20);
      local_1f8 = (undefined ****)pppppuVar1;
      local_1d0 = pppppuVar1;
      local_1c8 = pppppuVar1;
      if (local_1e0._4_4_ < *(int *)(uStack_258 + 3)) {
        iVar7 = local_1e0._4_4_;
        local_1e0 = ppppppuVar3;
        do {
          local_260 = (undefined *****)(*local_1f8)[(longlong)iVar7 * 3];
          (*(code *)(*param_2)[0x2c])(param_2,&local_260);
          pppuVar15 = (undefined ***)(*local_1f8)[(longlong)local_1e0._4_4_ * 3 + 1];
          pppppuVar1 = param_2[0xd];
          if (*pcVar4 == '\x01') {
            if ((((pppppuVar1 != (undefined *****)0x0) && (pppppuVar1[2] != (undefined ****)0x0)) &&
                (((*(byte *)((longlong)param_2 + 0x29) & 1) != 0 &&
                 ((((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0 &&
                   ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0)) && (0 < DAT_14c76147c))))))
               && (2 < *(int *)(pppuVar15 + 0x10))) {
              FUN_147a44312(pppuVar15,0,0,*(int *)(pppuVar15 + 0x10) + -1);
            }
            lVar14 = DAT_14cad4970;
            lVar9 = DAT_14cad4970;
            if (DAT_14cad4970 == 0) {
              uVar8 = FUN_140002dac(0);
              lVar14 = FUN_140002ddd(FUN_1463c1cf1,uVar8,L"SimpleCurve");
              lVar9 = lVar14;
              DAT_14cad4970 = lVar14;
              if (lVar14 == 0) {
                uVar8 = FUN_140002dac(0);
                lVar9 = FUN_140002ddd(FUN_1463c1cf1,uVar8,L"SimpleCurve");
                lVar14 = 0;
                DAT_14cad4970 = lVar9;
              }
            }
          }
          else {
            if (((((pppppuVar1 != (undefined *****)0x0) && (pppppuVar1[2] != (undefined ****)0x0))
                 && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) &&
                (((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0 &&
                 ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0)))) &&
               ((0 < DAT_14c76147c && (2 < *(int *)(pppuVar15 + 0xf))))) {
              local_288 = 0;
              FUN_147a41c6c(pppuVar15,0,0,*(int *)(pppuVar15 + 0xf) + -1);
            }
            lVar14 = FUN_14639173e();
            lVar9 = FUN_14639173e();
          }
          uStack_280 = 0;
          local_288 = 0;
          FUN_14496b17c(lVar14,param_2,pppuVar15,lVar9);
          local_1e0 = (undefined ******)
                      CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~uStack_1f0._4_4_);
          FUN_1449c0562(&uStack_1f0);
          iVar7 = local_1e0._4_4_;
        } while (local_1e0._4_4_ < *(int *)(pppppuStack_1e8 + 3));
        ppppppuVar3 = local_1e0;
        if (((local_1c0 & 1) != 0) && (local_1c0._1_1_ == '\x01')) {
          FUN_147a4e5e0(local_1c8,*(int *)(local_1c8 + 1) - *(int *)((longlong)local_1c8 + 0x34));
          ppppppuVar3 = local_1e0;
        }
      }
    }
    goto LAB_147a45e0e;
  }
  local_228 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  piVar10 = (int *)FUN_145c76e42(&DAT_14cad4a08,uVar6 >> 0x10 ^ uVar6,&local_228);
  *piVar10 = *piVar10 + 1;
  pppppuVar1 = param_2[1];
  ppppuVar11 = (undefined ****)((longlong)*pppppuVar1 + 4);
  if (pppppuVar1[1] < ppppuVar11) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (*(code *)(*param_2)[0x2e])(param_2,&local_22c,4);
    }
    else {
      FUN_14572512c(param_2,&local_22c);
    }
  }
  else {
    local_22c = *(int *)*pppppuVar1;
    *pppppuVar1 = ppppuVar11;
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (iVar7 < 0x17) {
    *(char *)(param_1 + 0x98) = (0 < local_22c) * '\x02';
  }
  else {
    ppppuVar11 = *param_2[1];
    if (param_2[1][1] < (undefined ****)((longlong)ppppuVar11 + 1U)) {
      (*(code *)(*param_2)[0x2e])(param_2,(undefined1 *)(param_1 + 0x98),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)ppppuVar11;
      *param_2[1] = (undefined ****)((longlong)*param_2[1] + 1);
    }
  }
  ppppppuVar3 = (undefined ******)(param_1 + 0x30);
  uStack_1d8 = 0;
  local_1d0._0_4_ = 0;
  local_1f8 = (undefined ****)0x0;
  uStack_1f0 = (undefined ******)0x0;
  local_1d0._4_4_ = 0x80;
  local_1c8._0_4_ = 0xffffffff;
  local_1c8._4_4_ = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_268 = param_1;
  FUN_147a4c18e(&local_1f8,ppppppuVar3);
  FUN_145d34584(ppppppuVar3,local_22c);
  if (local_22c < 1) {
    if (iVar7 < 0x17) goto LAB_147a45abf;
  }
  else {
    iVar16 = 0;
    uVar17 = (ulonglong)(iVar7 < 0x17);
    do {
      local_218 = (undefined *****)0x0;
      (*(code *)(*param_2)[0x2c])(param_2,&local_218);
      if (*(char *)(local_268 + 0x98) == '\x01') {
        local_270 = (undefined *****)CONCAT71(local_270._1_7_,(char)uVar17);
        ppppuVar11 = (undefined ****)FUN_14001cc68(0x88,0x10);
        ppppuVar11[5] = (undefined ***)0x0;
        *(undefined4 *)(ppppuVar11 + 6) = 0;
        ppppuVar11[1] = (undefined ***)0x0;
        ppppuVar11[2] = (undefined ***)0x0;
        *(undefined8 *)((longlong)ppppuVar11 + 0x34) = 0xffffffff00000080;
        *(undefined4 *)((longlong)ppppuVar11 + 0x3c) = 0;
        ppppuVar11[9] = (undefined ***)0x0;
        *(undefined4 *)(ppppuVar11 + 10) = 0;
        ppppuVar11[0xb] = (undefined ***)0x0;
        ppppuVar11[0xc] = (undefined ***)0x0;
        *(undefined4 *)(ppppuVar11 + 0xd) = 0x7f7fffff;
        *(undefined2 *)((longlong)ppppuVar11 + 0x6c) = 0x404;
        *ppppuVar11 = (undefined ***)&PTR_FUN_14a89a2c0;
        *(undefined1 *)(ppppuVar11 + 0xe) = 0;
        ppppuVar11[0xf] = (undefined ***)0x0;
        ppppuVar11[0x10] = (undefined ***)0x0;
        lVar14 = DAT_14cad4970;
        if (DAT_14cad4970 == 0) {
          uVar8 = FUN_140002dac(0);
          lVar14 = FUN_140002ddd(FUN_1463c1cf1,uVar8,L"SimpleCurve");
          DAT_14cad4970 = lVar14;
          if (lVar14 == 0) {
            uVar8 = FUN_140002dac(0);
            DAT_14cad4970 = FUN_140002ddd(FUN_1463c1cf1,uVar8,L"SimpleCurve");
            lVar14 = 0;
          }
        }
        local_288 = 0;
        uStack_280 = 0;
        FUN_14496b17c(lVar14,param_2,ppppuVar11,DAT_14cad4970);
        uStack_258 = &local_238;
        local_260 = (undefined *****)&local_218;
        local_238 = ppppuVar11;
        FUN_147a4e480(ppppppuVar3,local_21c,&local_260);
        uVar18 = (ulonglong)local_270 & 0xff;
      }
      else {
        ppppuVar11 = (undefined ****)FUN_14001cc68(0x80,0x10);
        ppppuVar11[5] = (undefined ***)0x0;
        ppppuVar11[6] = (undefined ***)0x0;
        ppppuVar11[7] = (undefined ***)0x0;
        ppppuVar11[8] = (undefined ***)0x0;
        ppppuVar11[1] = (undefined ***)0x0;
        ppppuVar11[2] = (undefined ***)0x0;
        ppppuVar11[3] = (undefined ***)0x0;
        ppppuVar11[4] = (undefined ***)0x0;
        ppppuVar11[9] = (undefined ***)0x0;
        ppppuVar11[10] = (undefined ***)0x0;
        ppppuVar11[0xd] = (undefined ***)0x0;
        *(undefined4 *)((longlong)ppppuVar11 + 0x34) = 0x80;
        *(undefined4 *)(ppppuVar11 + 7) = 0xffffffff;
        ppppuVar11[0xb] = (undefined ***)0x0;
        ppppuVar11[0xc] = (undefined ***)0x0;
        *(undefined4 *)(ppppuVar11 + 0xd) = 0x7f7fffff;
        *(undefined2 *)((longlong)ppppuVar11 + 0x6c) = 0x404;
        *ppppuVar11 = (undefined ***)&DAT_14a176f00;
        ppppuVar11[0xe] = (undefined ***)0x0;
        ppppuVar11[0xf] = (undefined ***)0x0;
        uVar8 = FUN_14639173e();
        uVar12 = FUN_14639173e();
        local_288 = 0;
        uStack_280 = 0;
        FUN_14496b17c(uVar8,param_2,ppppuVar11,uVar12);
        uStack_258 = &local_238;
        local_260 = (undefined *****)&local_218;
        local_238 = ppppuVar11;
        FUN_147a4e480(ppppppuVar3,local_21c,&local_260);
        uVar18 = uVar17;
        if (((uVar17 & 1) != 0) && (0 < (longlong)*(int *)(ppppuVar11 + 0xf))) {
          lVar14 = 0;
          do {
            cVar5 = *(char *)((longlong)ppppuVar11[0xe] + lVar14);
            uVar18 = 0;
            if ((cVar5 == '\x02') || (cVar5 != *(char *)ppppuVar11[0xe])) break;
            lVar14 = lVar14 + 0x1c;
            uVar18 = uVar17;
          } while ((longlong)*(int *)(ppppuVar11 + 0xf) * 0x1c != lVar14);
        }
      }
      iVar16 = iVar16 + 1;
      uVar17 = uVar18;
    } while (iVar16 < local_22c);
    if ((uVar18 & 1) != 0) {
LAB_147a45abf:
      uVar17 = local_268;
      *(bool *)(local_268 + 0x98) = *(int *)(local_268 + 100) < *(int *)(local_268 + 0x38);
      local_270 = (undefined *****)(local_268 + 0x40);
      local_218 = (undefined *****)&DAT_100000000;
      local_208 = 0xffffffff;
      local_200 = 0;
      iVar7 = 0;
      local_210 = local_270;
      if (*(int *)(local_268 + 0x58) != 0) {
        FUN_1449c0562(&local_218);
        iVar7 = *(int *)(uVar17 + 0x58);
      }
      uStack_248 = local_208;
      uVar17 = uStack_248;
      local_240 = local_200;
      local_23c = local_1fc;
      uStack_258 = local_218;
      local_250 = local_210;
      uStack_248._4_4_ = (uint)(local_208 >> 0x20);
      iVar16 = uStack_248._4_4_;
      local_260 = (undefined *****)ppppppuVar3;
      if ((uStack_248._4_4_ != iVar7) || (uStack_248 = uVar17, local_210 != local_270)) {
        do {
          uStack_248 = uVar17;
          pppppuVar1 = (undefined *****)*local_260;
          ppppuVar13 = (undefined ****)FUN_14001cc68(0x88,0x10);
          ppppuVar13[5] = (undefined ***)0x0;
          *(undefined4 *)(ppppuVar13 + 6) = 0;
          ppppuVar13[1] = (undefined ***)0x0;
          ppppuVar13[2] = (undefined ***)0x0;
          *(undefined8 *)((longlong)ppppuVar13 + 0x34) = 0xffffffff00000080;
          *(undefined4 *)((longlong)ppppuVar13 + 0x3c) = 0;
          ppppuVar13[9] = (undefined ***)0x0;
          *(undefined4 *)(ppppuVar13 + 10) = 0;
          ppppuVar13[0xb] = (undefined ***)0x0;
          ppppuVar13[0xc] = (undefined ***)0x0;
          *(undefined4 *)(ppppuVar13 + 0xd) = 0x7f7fffff;
          *(undefined2 *)((longlong)ppppuVar13 + 0x6c) = 0x404;
          *ppppuVar13 = (undefined ***)&PTR_FUN_14a89a2c0;
          *(undefined1 *)(ppppuVar13 + 0xe) = 0;
          ppppuVar13[0xf] = (undefined ***)0x0;
          ppppuVar13[0x10] = (undefined ***)0x0;
          ppppuVar11 = pppppuVar1[(longlong)iVar16 * 3 + 1];
          lVar14 = (longlong)*(int *)(ppppuVar11 + 0xf);
          if (0 < lVar14) {
            pppuVar15 = ppppuVar11[0xe];
            if (*(char *)pppuVar15 != '\x02') {
              *(char *)(ppppuVar13 + 0xe) = *(char *)pppuVar15;
              lVar14 = (longlong)*(int *)(ppppuVar11 + 0xf);
              if (lVar14 == 0) goto LAB_147a45c65;
              pppuVar15 = ppppuVar11[0xe];
            }
            pppuVar19 = (undefined ***)((longlong)pppuVar15 + lVar14 * 0x1c);
            do {
              LOCK();
              UNLOCK();
              uStack_280 = CONCAT44(uStack_280._4_4_,DAT_14c761474 + 1);
              local_288 = local_288 & 0xffffffffffffff00;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1410e11d4(ppppuVar13,&local_218,*(undefined4 *)((longlong)pppuVar15 + 4),
                            *(undefined4 *)(pppuVar15 + 1));
              pppuVar15 = (undefined ***)((longlong)pppuVar15 + 0x1c);
            } while (pppuVar15 != pppuVar19);
          }
LAB_147a45c65:
          if (ppppuVar11 != (undefined ****)0x0) {
            (*(code *)**ppppuVar11)(ppppuVar11,1);
          }
          pppppuVar1[(longlong)iVar16 * 3 + 1] = ppppuVar13;
          uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248 & ~uStack_258._4_4_);
          FUN_1449c0562(&uStack_258);
          iVar16 = uStack_248._4_4_;
          uVar17 = uStack_248;
        } while ((undefined ******)local_260 != ppppppuVar3 ||
                 (local_250 != local_270 || uStack_248._4_4_ != iVar7));
      }
    }
  }
  local_218 = (undefined *****)&DAT_100000000;
  local_208 = 0xffffffff;
  local_200 = 0;
  iVar7 = 0;
  local_210 = (undefined *****)&pppppuStack_1e8;
  if ((int)local_1d0 != 0) {
    FUN_1449c0562(&local_218);
    iVar7 = (int)local_1d0;
  }
  uStack_248 = local_208;
  uVar17 = uStack_248;
  local_240 = local_200;
  local_23c = local_1fc;
  uStack_258 = local_218;
  local_250 = local_210;
  uStack_248._4_4_ = (uint)(local_208 >> 0x20);
  local_260 = &local_1f8;
  if ((uStack_248._4_4_ != iVar7) || ((undefined ******)local_210 != &pppppuStack_1e8)) {
    iVar16 = uStack_248._4_4_;
    uStack_248 = uVar17;
    do {
      ppppuVar11 = (undefined ****)(*local_260)[(longlong)iVar16 * 3 + 1];
      if (ppppuVar11 != (undefined ****)0x0) {
        (*(code *)**ppppuVar11)(ppppuVar11,1);
      }
      uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248 & ~uStack_258._4_4_);
      FUN_1449c0562(&uStack_258);
      iVar16 = uStack_248._4_4_;
      uVar17 = uStack_248;
    } while (local_260 != &local_1f8 ||
             ((undefined ******)local_250 != &pppppuStack_1e8 || uStack_248._4_4_ != iVar7));
  }
  uStack_248 = uVar17;
  local_1b0 = 0;
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1459da1b0(&local_1f8);
  FUN_14150fbd6(&local_228);
  ppppppuVar3 = local_1e0;
LAB_147a45e0e:
  local_1e0 = ppppppuVar3;
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a45eb0 FUN_147a45eb0 body=450 status=ok
// SIG undefined FUN_147a45eb0(void)

undefined8 FUN_147a45eb0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined2 *puVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_80;
  wchar_t *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(local_58,&DAT_149e3bec0);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  iVar6 = 0;
  uVar3 = 0;
  if (*(int *)(param_2 + 8) - 2U < 0x7fffffff) {
    iVar6 = 0;
    local_80 = param_1;
    do {
      FUN_144a63a7c(param_2,&local_78,iVar6,1);
      pwVar7 = local_78;
      if (local_70 == 0) {
        pwVar7 = L"";
      }
      if (pwVar7 == (wchar_t *)0x0) {
LAB_147a45f83:
        uVar1 = uStack_60;
        pwVar7 = local_78;
        lVar8 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_144a2dbb8(&local_68,uVar1 & 0xffffffff);
        }
        local_68[lVar8] = *pwVar7;
      }
      else {
        sVar4 = wcslen(pwVar7);
        local_90 = 0xffffffff;
        local_98 = 0;
        iVar2 = FUN_1447ee042(local_58,pwVar7,sVar4 & 0xffffffff,1);
        if (iVar2 == -1) goto LAB_147a45f83;
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
      iVar2 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = 0;
      }
    } while (iVar6 < iVar2);
    param_1 = local_80;
    iVar6 = (int)uStack_60;
    uVar3 = uStack_60._4_4_;
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar6 + 1U);
  if (uVar3 < iVar6 + 1U) {
    FUN_144a2dbb8(&local_68,iVar6);
  }
  local_68[iVar6] = 0;
  puVar5 = local_68;
  if ((int)uStack_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar5,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a46074 FUN_147a46074 body=129 status=ok
// SIG undefined FUN_147a46074(void)

void FUN_147a46074(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(param_1 + 0x30);
  FUN_147a4e624(plVar2,&local_1c,param_2);
  if ((longlong)local_1c != -1) {
    lVar1 = *(longlong *)(*plVar2 + 8 + (longlong)local_1c * 0x18);
    FUN_147a4e6a8(plVar2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4610a FUN_147a4610a body=340 status=ok
// SIG undefined FUN_147a4610a(void)

/* WARNING: Removing unreachable block (ram,0x000147a46208) */

undefined8 FUN_147a4610a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar9 < 1) {
    uVar5 = 0;
  }
  else {
    uVar6 = 1;
    uVar5 = 0;
    uVar10 = 0;
    do {
      local_68 = uVar10 + 1;
      local_60 = uVar6;
      if (local_68 < uVar9) {
        do {
          fVar2 = *(float *)(*param_1 + uVar10 * 4);
          pfVar1 = (float *)(*param_1 + uVar6 * 4);
          if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
            puVar7 = &DAT_149dfb77a;
            if (*(int *)(param_2 + 1) != 0) {
              puVar7 = (undefined2 *)*param_2;
            }
            local_70 = (undefined4)uVar6;
            local_78 = (undefined4)uVar10;
            FUN_140002266(&local_58,
                          L"Found duplicate columns in %s. %f is used in columns %d and %d",puVar7,
                          (double)fVar2);
            iVar3 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
              FUN_1447a1bd6(param_3,iVar3);
            }
            lVar4 = *param_3;
            lVar8 = (longlong)iVar3 * 0x10;
            *(undefined8 *)(lVar4 + lVar8) = 0;
            *(undefined8 *)(lVar4 + lVar8) = local_58;
            *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)local_50;
            *(undefined4 *)(lVar4 + 0xc + lVar8) = local_50._4_4_;
            local_50 = 0;
            local_58 = 0;
            uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar9 != uVar6);
      }
      uVar6 = local_60 + 1;
      uVar10 = local_68;
    } while (local_68 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147a46260 FUN_147a46260 body=3185 status=ok
// SIG undefined FUN_147a46260(void)

/* WARNING: Removing unreachable block (ram,0x000147a46c9f) */
/* WARNING: Removing unreachable block (ram,0x000147a46a16) */

longlong * FUN_147a46260(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  longlong *plVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined2 *puVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  int local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  int local_114;
  longlong *local_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined2 *local_f8;
  int local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong *local_90;
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_90 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  piVar9 = (int *)FUN_145c76e42(&DAT_14cad4a08,uVar7 >> 0x10 ^ uVar7,&local_90);
  *piVar9 = *piVar9 + 1;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_3 + 8) < 2) {
    FUN_140056680(&local_e8,L"Input data is empty.");
    iVar15 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar15 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
      FUN_1447a1bd6(param_2,iVar15);
    }
    lVar25 = *param_2;
    lVar21 = (longlong)iVar15 * 0x10;
    *(undefined8 *)(lVar25 + lVar21) = 0;
    *(longlong **)(lVar25 + lVar21) = local_e8;
    local_e8 = (longlong *)0x0;
    *(int *)(lVar25 + 8 + lVar21) = (int)local_e0;
    *(uint *)(lVar25 + 0xc + lVar21) = local_e0._4_4_;
    local_e0 = (undefined8 **)0x0;
    lVar25 = 0;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14047afda(&local_e8,param_3);
    bVar5 = FUN_147a4e706(local_e8,&local_a8,0);
    bVar5 = (int)uStack_a0 != 0 & bVar5;
    if (bVar5 == 0) {
      if ((int)local_e8[8] == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = (undefined2 *)local_e8[7];
      }
      FUN_140002266(&local_88,L"Failed to parse the JSON data. Error: %s",puVar17);
      iVar15 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
        FUN_1447a1bd6(param_2,iVar15);
      }
      lVar25 = *param_2;
      lVar21 = (longlong)iVar15 * 0x10;
      *(undefined8 *)(lVar25 + lVar21) = 0;
      *(undefined8 ***)(lVar25 + lVar21) = local_88;
      local_88 = (undefined8 **)0x0;
      *(int *)(lVar25 + 8 + lVar21) = (int)uStack_80;
      *(uint *)(lVar25 + 0xc + lVar21) = uStack_80._4_4_;
      uStack_80 = (longlong *)0x0;
    }
    ppuVar11 = local_e0;
    if (local_e0 != (undefined8 **)0x0) {
      LOCK();
      ppuVar1 = local_e0 + 1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppuVar1 == 0) {
        (*(code *)**local_e0)(local_e0);
        LOCK();
        piVar9 = (int *)((longlong)ppuVar11 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (*(code *)(*ppuVar11)[2])(ppuVar11);
        }
      }
    }
    if (bVar5 != 0) {
      (**(code **)(*param_1 + 0x2a8))(param_1);
      *(char *)(param_1 + 0x13) = (param_4 == 2) + '\x01';
      if (0 < (int)uStack_a0) {
        plVar19 = param_1 + 6;
        local_108 = param_1 + 0xd;
        uVar20 = 0;
        do {
          puVar10 = (undefined8 *)(**(code **)**(undefined8 **)(local_a8 + uVar20 * 0x10))();
          plVar2 = (longlong *)*puVar10;
          plVar3 = (longlong *)puVar10[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          if (plVar2 == (longlong *)0x0) {
            pwVar16 = L"Row \'%d\' is not a valid JSON object.";
LAB_147a4648f:
            FUN_140002266(&local_e8,pwVar16,uVar20 & 0xffffffff);
            lVar25 = param_2[1];
            uVar7 = (int)lVar25 + 1;
            *(uint *)(param_2 + 1) = uVar7;
            if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
              FUN_1447a1bd6(param_2);
            }
            lVar21 = *param_2;
            lVar25 = (longlong)(int)lVar25 * 0x10;
            *(undefined8 *)(lVar21 + lVar25) = 0;
            *(longlong **)(lVar21 + lVar25) = local_e8;
            local_e8 = (longlong *)0x0;
            *(int *)(lVar21 + 8 + lVar25) = (int)local_e0;
            *(uint *)(lVar21 + 0xc + lVar25) = local_e0._4_4_;
            local_e0 = (undefined8 **)0x0;
            ppuVar11 = (undefined8 **)0x0;
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cad4a90) && (FUN_144b3d300(&DAT_14cad4a90), DAT_14cad4a90 == -1))
            {
              FUN_140056680(&DAT_14cad4a80,L"Name");
              atexit((_func_5014 *)&LAB_1434a7778);
              _Init_thread_footer(&DAT_14cad4a90);
            }
            local_c0 = DAT_14cad4a80;
            local_b8 = DAT_14cad4a88 + -1;
            if (DAT_14cad4a88 == 0) {
              local_b8 = 0;
            }
            FUN_14047df9c(plVar2,&local_e8,&local_c0);
            FUN_147a45eb0(&local_b0,&local_e8);
            if (local_e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_b0 == 0) {
              pwVar16 = L"Row \'%d\' missing a name.";
              goto LAB_147a4648f;
            }
            if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
              uVar7 = (uint)((ulonglong)local_b0 >> 0x10);
              uVar14 = (uint)local_b0 & 0xffff;
              plVar12 = (longlong *)param_1[0xe];
              if ((longlong *)param_1[0xe] == (longlong *)0x0) {
                plVar12 = local_108;
              }
              iVar15 = *(int *)((longlong)plVar12 +
                               (ulonglong)
                               ((int)param_1[0xf] - 1U &
                               (int)((ulonglong)local_b0 >> 0x20) +
                               ((uint)local_b0 << 0x10 | uVar14) + (uVar7 << 0x13 | uVar7 & 0xffff)
                               + (uVar14 >> 4)) * 4);
              if (iVar15 != -1) {
                do {
                  plVar12 = (longlong *)(*plVar19 + (longlong)iVar15 * 0x18);
                  if (*plVar12 == local_b0) {
                    if ((plVar12 != (longlong *)0x0) &&
                       (plVar12 != (longlong *)&DAT_fffffffffffffff8)) {
                      FUN_1400021e4(&local_b0,&local_88);
                      ppuVar11 = (undefined8 **)&DAT_149dfb77a;
                      if ((int)uStack_80 != 0) {
                        ppuVar11 = local_88;
                      }
                      FUN_140002266(&local_e8,L"Duplicate row name \'%s\'.",ppuVar11);
                      lVar25 = param_2[1];
                      uVar7 = (int)lVar25 + 1;
                      *(uint *)(param_2 + 1) = uVar7;
                      if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
                        FUN_1447a1bd6(param_2);
                      }
                      lVar21 = *param_2;
                      lVar25 = (longlong)(int)lVar25 * 0x10;
                      *(undefined8 *)(lVar21 + lVar25) = 0;
                      *(longlong **)(lVar21 + lVar25) = local_e8;
                      local_e8 = (longlong *)0x0;
                      *(int *)(lVar21 + 8 + lVar25) = (int)local_e0;
                      *(uint *)(lVar21 + 0xc + lVar25) = local_e0._4_4_;
                      local_e0 = (undefined8 **)0x0;
                      puVar17 = (undefined2 *)0x0;
                      goto LAB_147a467f1;
                    }
                    break;
                  }
                  iVar15 = (int)plVar12[2];
                } while (iVar15 != -1);
              }
            }
            local_114 = param_4;
            local_110 = plVar19;
            if ((char)param_1[0x13] == '\x01') {
              local_120 = (undefined8 *)FUN_14001cc68(0x88,0x10);
              local_120[5] = 0;
              *(undefined4 *)(local_120 + 6) = 0;
              local_120[1] = 0;
              local_120[2] = 0;
              *(undefined8 *)((longlong)local_120 + 0x34) = 0xffffffff00000080;
              *(undefined4 *)((longlong)local_120 + 0x3c) = 0;
              local_120[9] = 0;
              *(undefined4 *)(local_120 + 10) = 0;
              local_120[0xb] = 0;
              local_120[0xc] = 0;
              *(undefined4 *)(local_120 + 0xd) = 0x7f7fffff;
              *(undefined2 *)((longlong)local_120 + 0x6c) = 0x404;
              *local_120 = &PTR_FUN_14a89a2c0;
              *(undefined1 *)(local_120 + 0xe) = 0;
              local_120[0xf] = 0;
              local_120[0x10] = 0;
              if (param_4 != 2) {
                *(char *)(local_120 + 0xe) = (char)param_4;
              }
              local_128 = (undefined8 *)0x0;
            }
            else {
              local_128 = (undefined8 *)FUN_14001cc68(0x80,0x10);
              local_128[5] = 0;
              local_128[6] = 0;
              local_128[7] = 0;
              local_128[8] = 0;
              local_128[1] = 0;
              local_128[2] = 0;
              local_128[3] = 0;
              local_128[4] = 0;
              local_128[9] = 0;
              local_128[10] = 0;
              local_128[0xd] = 0;
              *(undefined4 *)((longlong)local_128 + 0x34) = 0x80;
              *(undefined4 *)(local_128 + 7) = 0xffffffff;
              local_128[0xb] = 0;
              local_128[0xc] = 0;
              *(undefined4 *)(local_128 + 0xd) = 0x7f7fffff;
              *(undefined2 *)((longlong)local_128 + 0x6c) = 0x404;
              *local_128 = &DAT_14a176f00;
              local_128[0xe] = 0;
              local_128[0xf] = 0;
              local_120 = (undefined8 *)0x0;
            }
            plVar19 = plVar2 + 2;
            local_88 = (undefined8 **)&DAT_100000000;
            local_78 = 0xffffffff;
            local_70 = 0;
            iVar15 = 0;
            uStack_80 = plVar19;
            if ((int)plVar2[5] != 0) {
              FUN_1449c0562(&local_88);
              iVar15 = (int)plVar2[5];
            }
            local_d0 = local_78;
            uVar4 = local_d0;
            local_c8 = local_70;
            local_c4 = local_6c;
            local_e0 = local_88;
            local_d8 = uStack_80;
            local_d0._4_4_ = (int)((ulonglong)local_78 >> 0x20);
            iVar8 = local_d0._4_4_;
            local_e8 = plVar2;
            if ((local_d0._4_4_ != iVar15) || (local_d0 = uVar4, uStack_80 != plVar19)) {
              do {
                local_d0 = uVar4;
                plVar12 = (longlong *)(*local_e8 + (longlong)iVar8 * 0x28);
                iVar8 = (int)plVar12[1];
                if (iVar8 == DAT_14cad4a88) {
                  if (1 < iVar8) {
                    lVar25 = 0;
                    while( true ) {
                      uVar13 = *(ushort *)(*plVar12 + lVar25);
                      uVar18 = (ulonglong)uVar13;
                      uVar23 = *(ushort *)(DAT_14cad4a80 + lVar25);
                      if (uVar13 != uVar23) break;
                      if (uVar13 == 0) goto LAB_147a46b5a;
LAB_147a46b18:
                      lVar25 = lVar25 + 2;
                    }
                    if ((uVar23 | uVar13) < 0x80) {
                      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                      uVar24 = (ulonglong)uVar23;
                      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                      if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar24]) goto LAB_147a46b18;
                    }
                    if (uVar13 != uVar23) goto LAB_147a468c6;
                  }
                }
                else if (DAT_14cad4a88 + iVar8 != 1) {
LAB_147a468c6:
                  local_64 = 0;
                  puVar17 = &DAT_149dfb77a;
                  if ((int)plVar12[1] != 0) {
                    puVar17 = (undefined2 *)*plVar12;
                  }
                  cVar6 = FUN_146842e8b(&local_64,puVar17);
                  if (cVar6 == '\0') {
                    FUN_1400021e4(&local_b0,&local_f8);
                    puVar17 = &DAT_149dfb77a;
                    if (local_f0 != 0) {
                      puVar17 = local_f8;
                    }
                    puVar22 = &DAT_149dfb77a;
                    if ((int)plVar12[1] != 0) {
                      puVar22 = (undefined2 *)*plVar12;
                    }
                    pwVar16 = L"Key \'%s\' on row \'%s\' is not a float and cannot be parsed.";
                  }
                  else {
                    local_100 = (undefined8 *)0x0;
                    cVar6 = (**(code **)(*(longlong *)plVar12[2] + 0x50))
                                      ((longlong *)plVar12[2],&local_100);
                    puVar10 = local_128;
                    if (cVar6 != '\0') {
                      if (local_120 == (undefined8 *)0x0) {
                        LOCK();
                        UNLOCK();
                        local_130 = DAT_14c761474 + 1;
                        local_138 = 0;
                        DAT_14c761474 = DAT_14c761474 + 1;
                        FUN_1406507bc(local_128,&local_88,local_64,(float)(double)local_100);
                        FUN_14045d156(puVar10,(ulonglong)local_88 & 0xffffffff,local_114,1);
                      }
                      else {
                        LOCK();
                        UNLOCK();
                        local_130 = DAT_14c761474 + 1;
                        local_138 = 0;
                        DAT_14c761474 = DAT_14c761474 + 1;
                        FUN_1410e11d4(local_120,&local_88,local_64,(float)(double)local_100);
                      }
                      goto LAB_147a46b5a;
                    }
                    FUN_1400021e4(&local_b0,&local_f8);
                    puVar17 = &DAT_149dfb77a;
                    if (local_f0 != 0) {
                      puVar17 = local_f8;
                    }
                    puVar22 = &DAT_149dfb77a;
                    if ((int)plVar12[1] != 0) {
                      puVar22 = (undefined2 *)*plVar12;
                    }
                    pwVar16 = L"Entry \'%s\' on row \'%s\' is not a float and cannot be parsed.";
                  }
                  FUN_140002266(&local_88,pwVar16,puVar22,puVar17);
                  lVar25 = param_2[1];
                  uVar7 = (int)lVar25 + 1;
                  *(uint *)(param_2 + 1) = uVar7;
                  if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
                    FUN_1447a1bd6(param_2);
                  }
                  lVar21 = *param_2;
                  lVar25 = (longlong)(int)lVar25 * 0x10;
                  *(undefined8 *)(lVar21 + lVar25) = 0;
                  *(undefined8 ***)(lVar21 + lVar25) = local_88;
                  *(int *)(lVar21 + 8 + lVar25) = (int)uStack_80;
                  *(uint *)(lVar21 + 0xc + lVar25) = uStack_80._4_4_;
                  uStack_80 = (longlong *)0x0;
                  local_88 = (undefined8 **)0x0;
                  if (local_f8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
LAB_147a46b5a:
                local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
                FUN_1449c0562(&local_e0);
                iVar8 = local_d0._4_4_;
                uVar4 = local_d0;
              } while (local_e8 != plVar2 || (local_d8 != plVar19 || local_d0._4_4_ != iVar15));
            }
            local_88 = (undefined8 **)0x0;
            uStack_80 = (longlong *)0x0;
            if (local_120 == (undefined8 *)0x0) {
              iVar15 = *(int *)(local_128 + 0xf);
              if (iVar15 < 0) {
LAB_147a46e81:
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar15);
              }
              if (iVar15 != 0) {
                FUN_14482f6fa(&local_88);
                iVar15 = *(int *)(local_128 + 0xf);
                if ((longlong)iVar15 != 0) {
                  lVar25 = local_128[0xe];
                  lVar21 = 0;
                  do {
                    uVar18 = (ulonglong)uStack_80;
                    lVar26 = (longlong)(int)uStack_80;
                    uVar7 = (int)uStack_80 + 1;
                    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar7);
                    if (uStack_80._4_4_ < uVar7) {
                      FUN_14475e4ac(&local_88,uVar18 & 0xffffffff);
                    }
                    *(undefined4 *)((longlong)local_88 + lVar26 * 4) =
                         *(undefined4 *)(lVar25 + 4 + lVar21);
                    lVar21 = lVar21 + 0x1c;
                  } while ((longlong)iVar15 * 0x1c != lVar21);
                }
              }
            }
            else {
              iVar15 = *(int *)(local_120 + 0x10);
              if (iVar15 < 0) goto LAB_147a46e81;
              if (iVar15 != 0) {
                FUN_14482f6fa(&local_88);
                iVar15 = *(int *)(local_120 + 0x10);
                if ((longlong)iVar15 != 0) {
                  lVar25 = local_120[0xf];
                  lVar21 = 0;
                  do {
                    uVar18 = (ulonglong)uStack_80;
                    lVar26 = (longlong)(int)uStack_80;
                    uVar7 = (int)uStack_80 + 1;
                    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar7);
                    if (uStack_80._4_4_ < uVar7) {
                      FUN_14475e4ac(&local_88,uVar18 & 0xffffffff);
                    }
                    *(undefined4 *)((longlong)local_88 + lVar26 * 4) =
                         *(undefined4 *)(lVar25 + lVar21);
                    lVar21 = lVar21 + 8;
                  } while ((longlong)iVar15 << 3 != lVar21);
                }
              }
            }
            FUN_1400021e4(&local_b0,&local_e8);
            plVar19 = (longlong *)&DAT_149dfb77a;
            if ((int)local_e0 != 0) {
              plVar19 = local_e8;
            }
            FUN_140002266(&local_f8,L"UCurveTable::CreateTableFromJSONString (row=%s)",plVar19);
            plVar19 = local_110;
            param_4 = local_114;
            if (local_e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            cVar6 = FUN_147a4610a(&local_88,&local_f8,param_2);
            puVar17 = local_f8;
            if (cVar6 == '\0') {
              local_100 = local_120;
              if (local_120 == (undefined8 *)0x0) {
                local_100 = local_128;
              }
              local_e8 = &local_b0;
              local_e0 = &local_100;
              FUN_147a4e480(plVar19,&local_64);
              puVar17 = local_f8;
            }
LAB_147a467f1:
            ppuVar11 = local_88;
            if (puVar17 != (undefined2 *)0x0) {
              FUN_1400020a8();
              ppuVar11 = local_88;
            }
          }
          if (ppuVar11 != (undefined8 **)0x0) {
            FUN_1400020a8();
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar9 = (int *)((longlong)plVar3 + 0xc);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (*piVar9 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < (longlong)(int)uStack_a0);
      }
      FUN_1447f69b6(param_1 + 0x10);
    }
    FUN_14047c710(local_a8,uStack_a0 & 0xffffffff);
    lVar25 = local_a8;
  }
  if (lVar25 != 0) {
    FUN_1400020a8();
  }
  FUN_14150fbd6(&local_90);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a46ed2 FUN_147a46ed2 body=304 status=ok
// SIG undefined FUN_147a46ed2(void)

longlong * FUN_147a46ed2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 8);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar2 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18);
      uVar3 = *(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14574390c(param_2,iVar1);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
      *(undefined8 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = uVar3;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a47004 FUN_147a47004 body=374 status=ok
// SIG undefined FUN_147a47004(void)

longlong * FUN_147a47004(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = (longlong *)(param_1 + 8);
  local_48 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar3 = *(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      uVar4 = *(undefined8 *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_147a4d790(param_2,iVar2);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + (longlong)iVar2 * 0x10) = uVar3;
      *(undefined8 *)(lVar5 + 8 + (longlong)iVar2 * 0x10) = uVar4;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_147a4e5e0(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4718e FUN_147a4718e body=154 status=ok
// SIG undefined FUN_147a4718e(void)

void FUN_147a4718e(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_1 - 0x28;
  local_28 = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  piVar3 = (int *)FUN_145c76e42(&DAT_14cad4a08,uVar2 >> 0x10 ^ uVar2,&local_28);
  *piVar3 = *piVar3 + 1;
  FUN_1447f69b6(param_1 + 0x58);
  FUN_14150fbd6(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4722a FUN_147a4722a body=254 status=ok
// SIG undefined FUN_147a4722a(void)

ulonglong FUN_147a4722a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 8);
  local_38 = param_1 + 0x18;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      bVar2 = *(longlong *)(param_2 + 8) ==
              *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      plVar1 = (longlong *)CONCAT71((int7)((ulonglong)plVar1 >> 8),bVar2);
      if (bVar2) break;
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar1 & 0xffffffff;
}



// FUNCTION 147a4732a FUN_147a4732a body=55 status=ok
// SIG undefined FUN_147a4732a(void)

undefined8 * FUN_147a4732a(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_140ef9edc(param_2,0);
  *(longlong *)*param_2 = param_1 + -0x28;
  return param_2;
}



// FUNCTION 147a47362 FUN_147a47362 body=115 status=ok
// SIG undefined FUN_147a47362(void)

void FUN_147a47362(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_2 + 5) & 4) != 0) && (lVar1 = *param_1, lVar1 != 0)) {
    local_20 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    (**(code **)(*param_2 + 0x210))(param_2,&local_20,param_1 + 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a473f4 FUN_147a473f4 body=315 status=ok
// SIG undefined FUN_147a473f4(void)

undefined8 * FUN_147a473f4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    param_2[1] = uVar1;
LAB_147a4742c:
    if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 0x10000080) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40);
    lVar2 = FUN_1458f1330();
    if (lVar4 != lVar2) {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x40)) {
        lVar2 = *(longlong *)(lVar4 + 0x40);
        lVar3 = FUN_1458f1330();
        if ((lVar2 == lVar3) || ((*(uint *)(lVar4 + 0xd4) & 0x10000080) != 0)) {
          if ((*(uint *)(lVar4 + 0xd4) & 0x10000080) == 0) {
            lVar4 = FUN_144a79778(lVar4);
            local_50[0] = *(longlong *)(lVar4 + 0x18);
            FUN_140902cb4(&local_38);
          }
          else {
            local_38 = *(undefined8 *)(lVar4 + 0x18);
          }
          lVar4 = FUN_144a79778(param_1);
          local_30 = *(undefined8 *)(lVar4 + 0x18);
          FUN_1400021e4(&local_30,local_50);
          FUN_146870880(&local_40,local_50);
          *param_2 = local_38;
          param_2[1] = local_40;
          if (local_50[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_147a4742c;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 147a47536 FUN_147a47536 body=67 status=ok
// SIG undefined FUN_147a47536(void)

void FUN_147a47536(longlong param_1,longlong *param_2)

{
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 200)) {
    FUN_1468998c0(param_1,param_2);
    (**(code **)(*param_2 + 0x10))(param_2,0x30,0x30);
  }
  return;
}



// FUNCTION 147a4757a FUN_147a4757a body=67 status=ok
// SIG undefined FUN_147a4757a(void)

void FUN_147a4757a(longlong param_1,longlong *param_2)

{
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 200)) {
    FUN_146899842(param_1,param_2);
    (**(code **)(*param_2 + 0x10))(param_2,0x70,0x70);
  }
  return;
}



// FUNCTION 147a475c4 FUN_147a475c4 body=191 status=ok
// SIG undefined FUN_147a475c4(void)

void FUN_147a475c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x2b) & 8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4769a FUN_147a4769a body=84 status=ok
// SIG undefined FUN_147a4769a(void)

void FUN_147a4769a(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1434a7c14(param_1,&local_19);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47702 FUN_147a47702 body=172 status=ok
// SIG undefined FUN_147a47702(void)

void FUN_147a47702(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*param_1 != 0) {
    FUN_146efe122(*param_1,param_2);
    return;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = FUN_146efe1bf;
  puVar5[1] = FUN_1434b8884;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = *(undefined8 *)(param_2 + 4);
  puVar5[5] = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(puVar5 + 6) = param_2[8];
  *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  puVar5[7] = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  lVar1 = *param_1;
  *param_1 = (longlong)(puVar5 + 2);
  if (lVar1 != 0) {
                    /* WARNING: Jumptable with 0 entries at 0x000147a47794 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 147a477bc FUN_147a477bc body=178 status=ok
// SIG undefined FUN_147a477bc(void)

void FUN_147a477bc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x90) & 0x10) == 0) {
    FUN_1401b093e(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x188);
      if ((longlong)(int)uVar1 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + uVar1;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
          FUN_1401b0d4a(param_2,iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x180),
               (longlong)(int)uVar1 << 3);
        *(undefined4 *)(param_1 + 0x188) = 0;
        if (*(int *)(param_1 + 0x18c) != 0) {
          FUN_1401b0cea(param_1 + 0x180,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147a4786e FUN_147a4786e body=233 status=ok
// SIG undefined FUN_147a4786e(void)

void FUN_147a4786e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  undefined **local_158;
  ulonglong *local_150;
  byte local_64;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FUN_1449daf8c(&local_158,lVar1,0);
    local_158 = &PTR_FUN_14a8a39a0;
    local_64 = local_64 | 0x10;
    local_159 = 6;
    if (local_150[1] < *local_150 + 1) {
      FUN_14011736e(&local_158,&local_159,1);
    }
    else {
      *local_150 = *local_150 + 1;
    }
    FUN_14021219d(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47988 FUN_147a47988 body=863 status=ok
// SIG undefined FUN_147a47988(void)

void FUN_147a47988(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  longlong local_68;
  char local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_59 = '\0';
  puVar3 = (ulonglong *)param_2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_59,1);
  }
  else {
    local_59 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  local_68 = 0;
  local_70 = (longlong *)0x0;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
  uVar8 = FUN_1446f8646();
  local_a8 = &local_68;
  cVar6 = (**(code **)(*plVar4 + 0x2a8))(plVar4,param_2,uVar8,&local_70);
  plVar4 = local_70;
  if ((cVar6 != '\0') && (local_70 != (longlong *)0x0)) {
    lVar9 = FUN_144a6c4d8();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30)) {
      if ((*(byte *)((longlong)plVar4 + 0x61) & 1) != 0) {
        cVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3f0))();
        if (cVar6 == '\0') {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
          (**(code **)(*plVar5 + 0x478))(plVar5,plVar4);
          goto LAB_147a47a4f;
        }
      }
      if ((((*(byte *)(param_1 + 0x30) & 4) == 0) || (local_59 != '\x01')) ||
         ((*(byte *)((longlong)plVar4 + 0x61) & 1) != 0)) {
        if ((*(byte *)(plVar4 + 0xc) & 1) == 0) {
          lVar9 = FUN_1447210f0(plVar4);
          if ((lVar9 != 0) && (DAT_14c872bd8 == '\0')) {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
            cVar6 = (**(code **)(*plVar5 + 0x450))(plVar5,plVar4);
            if (cVar6 != '\0') {
              plVar5 = plVar4 + 0x48;
              plVar2 = plVar4 + 0x4a;
              local_58 = 0x100000000;
              local_48 = 0xffffffff;
              uStack_40 = 0;
              uStack_50 = plVar2;
              if ((int)plVar4[0x4d] == 0) {
                iVar11 = 0;
              }
              else {
                FUN_1449c0562(&local_58);
                iVar11 = (int)plVar4[0x4d];
              }
              uStack_78 = CONCAT44(uStack_3c,uStack_40);
              local_80 = local_48;
              uVar8 = local_80;
              local_90 = (undefined4)local_58;
              uStack_8c = local_58._4_4_;
              uStack_88 = (undefined4)uStack_50;
              uStack_84 = uStack_50._4_4_;
              local_80._4_4_ = (int)((ulonglong)local_48 >> 0x20);
              iVar7 = local_80._4_4_;
              local_98 = plVar5;
              if ((local_80._4_4_ != iVar11) || (local_80 = uVar8, uStack_50 != plVar2)) {
                do {
                  local_80 = uVar8;
                  FUN_1435a0250(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58),
                                *(undefined8 *)(*local_98 + (longlong)iVar7 * 0x10));
                  local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                  FUN_1449c0562(&local_90);
                  iVar7 = local_80._4_4_;
                  uVar8 = local_80;
                } while (local_98 != plVar5 ||
                         ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar2 ||
                         local_80._4_4_ != iVar11));
              }
              FUN_1435a0250(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58),plVar4);
              (**(code **)(*plVar4 + 0x228))(plVar4);
              FUN_140aeefbc(plVar4,1,1);
              lVar9 = *(longlong *)(param_1 + 0x28);
              if ((DAT_14c761628 != 0) && (local_68 != 0)) {
                if (lVar9 == 0) {
                  lVar9 = 0;
                }
                else if ((*(longlong *)(lVar9 + 0x58) != 0) &&
                        (lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x58) + 0x1b8), lVar10 != 0))
                {
                  FUN_140326250(lVar10 + 0xa8,&local_68);
                  lVar9 = *(longlong *)(param_1 + 0x28);
                }
              }
              if (*(longlong *)(lVar9 + 0x68) != 0) {
                lVar10 = FUN_1413dbcfa();
                plVar4 = *(longlong **)(lVar9 + 0x68);
                if ((((plVar4 != (longlong *)0x0) && (lVar10 != 0)) &&
                    (lVar9 = plVar4[2], lVar9 != 0)) &&
                   ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                    (*(longlong *)
                      (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                     lVar10 + 0x30)))) {
                  (**(code **)(*plVar4 + 0x348))(plVar4,&local_68,0);
                }
              }
            }
          }
        }
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
        (**(code **)(*plVar5 + 0x470))(plVar5,plVar4);
        FUN_141089d6e(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58),plVar4);
      }
    }
  }
LAB_147a47a4f:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47ce8 FUN_147a47ce8 body=104 status=ok
// SIG undefined FUN_147a47ce8(void)

void FUN_147a47ce8(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined6 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  local_38 = param_1;
  FUN_147a4c282(&local_38,local_30);
  if (CONCAT44(uStack_24,uStack_28) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47d52 FUN_147a47d52 body=126 status=ok
// SIG undefined FUN_147a47d52(void)

void FUN_147a47d52(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14021219d(0,&local_58);
  FUN_14021219d(param_1,&local_48);
  FUN_14021219d(param_1,&local_38);
  FUN_147a4c370(&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47dd2 FUN_147a47dd2 body=80 status=ok
// SIG undefined FUN_147a47dd2(void)

void FUN_147a47dd2(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14021219d(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47e24 FUN_147a47e24 body=129 status=ok
// SIG undefined FUN_147a47e24(void)

void FUN_147a47e24(undefined8 param_1)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_80 = param_1;
  FUN_147a4c4e4(&local_80,&local_78);
  FUN_147a4c470(&local_78);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47ea6 FUN_147a47ea6 body=80 status=ok
// SIG undefined FUN_147a47ea6(void)

void FUN_147a47ea6(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14021219d(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47ef8 FUN_147a47ef8 body=121 status=ok
// SIG undefined FUN_147a47ef8(void)

void FUN_147a47ef8(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14021219d(0,&local_68);
  FUN_146214c9d(param_1,&local_58);
  FUN_147a4c526(&local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47f72 FUN_147a47f72 body=80 status=ok
// SIG undefined FUN_147a47f72(void)

void FUN_147a47f72(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14021219d(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a47fc4 FUN_147a47fc4 body=117 status=ok
// SIG undefined FUN_147a47fc4(void)

void FUN_147a47fc4(longlong *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong alStack_30 [3];
  
  alStack_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  (**(code **)(*param_1 + 400))(0,&local_38);
  FUN_14021219d(param_1,alStack_30);
  if (alStack_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((alStack_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4803a FUN_147a4803a body=80 status=ok
// SIG undefined FUN_147a4803a(void)

void FUN_147a4803a(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14021219d(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4808c FUN_147a4808c body=96 status=ok
// SIG undefined FUN_147a4808c(void)

void FUN_147a4808c(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_30 = param_1;
  FUN_147a4c5fe(&local_30,local_28);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a480ee FUN_147a480ee body=121 status=ok
// SIG undefined FUN_147a480ee(void)

void FUN_147a480ee(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14021219d(0,&local_68);
  FUN_146214c9d(param_1,&local_58);
  FUN_147a4c526(&local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48168 FUN_147a48168 body=80 status=ok
// SIG undefined FUN_147a48168(void)

void FUN_147a48168(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14021219d(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a481b9 FUN_147a481b9 body=98 status=ok
// SIG undefined FUN_147a481b9(void)

undefined4 * FUN_147a481b9(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*param_2;
  puVar5 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar5 + 4);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar5 + 6);
  *(undefined8 *)(puVar5 + 6) = 0;
  param_1[8] = puVar5[8];
  param_1[9] = puVar5[9];
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar5 + 10);
  *(undefined8 *)(puVar5 + 10) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_146efe122(param_1,param_3);
  }
  return param_1;
}



// FUNCTION 147a4821c FUN_147a4821c body=60 status=ok
// SIG undefined FUN_147a4821c(void)

void FUN_147a4821c(longlong param_1)

{
  FUN_140c692ee();
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_140c6998c(param_1 + 0x160,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 147a48258 FUN_147a48258 body=66 status=ok
// SIG undefined FUN_147a48258(void)

void FUN_147a48258(longlong param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x20;
  FUN_140c692ee(param_1,0);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_140c6998c(param_1 + 0x160,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 147a4829a FUN_147a4829a body=230 status=ok
// SIG undefined FUN_147a4829a(void)

void FUN_147a4829a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  undefined **local_158;
  ulonglong *local_150;
  byte local_64;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FUN_1449daf8c(&local_158,lVar1,0);
    local_158 = &PTR_FUN_14a8a39a0;
    local_64 = local_64 | 0x10;
    local_159 = 0x10;
    if (local_150[1] < *local_150 + 1) {
      FUN_14011736e(&local_158,&local_159,1);
    }
    else {
      *local_150 = *local_150 + 1;
    }
    FUN_1461c57a4(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48382 FUN_147a48382 body=176 status=ok
// SIG undefined FUN_147a48382(void)

longlong * FUN_147a48382(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = FUN_144a78877(param_3 & 0xffffffff,param_3 >> 0x20);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar4 * 0x40;
        lVar1 = lVar6 + lVar7;
        if ((*(int *)(lVar6 + lVar7) == (int)param_3) &&
           (*(int *)(lVar6 + 4 + lVar7) == (int)(param_3 >> 0x20))) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            lVar6 = lVar1 + 8;
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              lVar6 = *(longlong *)(lVar1 + 0x28);
            }
            *param_2 = lVar6;
            uVar3 = *(undefined4 *)(lVar1 + 0x30);
            goto LAB_147a483b7;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x38);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_147a483b7:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 147a48432 FUN_147a48432 body=281 status=ok
// SIG undefined FUN_147a48432(void)

undefined8 FUN_147a48432(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_145d632de(param_1,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"Actor: None %s",puVar4);
  }
  else {
    FUN_145d632de(param_1,&local_48);
    local_60 = &DAT_149dfb77a;
    if (local_40 != 0) {
      local_60 = local_48;
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    bVar1 = *(byte *)(lVar3 + 0x68);
    uVar2 = *(undefined1 *)(lVar3 + 0x178);
    FUN_144750a86(lVar3,&local_58,0,0);
    puVar4 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar4 = local_58;
    }
    local_68 = (uint)bVar1;
    FUN_140002266(param_2,L"[UActorChannel] Actor: %s, Role: %i, RemoteRole: %i %s",puVar4,uVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a4854c FUN_147a4854c body=1073 status=ok
// SIG undefined FUN_147a4854c(void)

void FUN_147a4854c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147a475c4();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0xb0) << 5,
               (longlong)*(int *)(param_1 + 0xb4) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0xd0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0xd4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0xf0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x100) << 3,
               (longlong)*(int *)(param_1 + 0x104) << 3);
    iVar5 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
      lVar6 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + lVar6);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x118) << 4,
               (longlong)*(int *)(param_1 + 0x11c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x138) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x13c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x158) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x168) << 3,
               (longlong)*(int *)(param_1 + 0x16c) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x178) << 3,
               (longlong)*(int *)(param_1 + 0x17c) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x188) << 3,
               (longlong)*(int *)(param_1 + 0x18c) << 3);
    iVar5 = *(int *)(param_1 + 0x188);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x180);
      lVar6 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + lVar6);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1b0) << 4,
               (longlong)*(int *)(param_1 + 0x1b4) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1d0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1d4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x1f0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    plVar1 = (longlong *)(param_1 + 0x1f8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x200) * 0x28,
               (longlong)*(int *)(param_1 + 0x204) * 0x28);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x220) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x224) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x240) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x208;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar4;
    if (*(int *)(param_1 + 0x220) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x220);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar2 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar3 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_68 = uVar2, uStack_50 != lVar4)) {
      do {
        local_68 = uVar2;
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(*local_80 + 0x18 + (longlong)iVar3 * 0x28) << 2,
                   (longlong)*(int *)(*local_80 + 0x1c + (longlong)iVar3 * 0x28) << 2);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar4 || local_68._4_4_ != iVar5));
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x250) << 2,
               (longlong)*(int *)(param_1 + 0x254) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x260) * 0x18,
               (longlong)*(int *)(param_1 + 0x264) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x280) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x284) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x2a0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4897e FUN_147a4897e body=123 status=ok
// SIG undefined FUN_147a4897e(void)

longlong FUN_147a4897e(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  do {
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      lVar2 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar2 = *(longlong *)(param_1 + 0xc0);
      }
      uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 200) - 1U & param_2) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + (longlong)(int)uVar3 * 0x18);
          if (*puVar1 == param_2) {
            if ((puVar1 != (uint *)0x0) && (*(longlong *)(puVar1 + 2) != 0)) {
              return *(longlong *)(puVar1 + 2);
            }
            break;
          }
          uVar3 = puVar1[4];
        } while (uVar3 != 0xffffffff);
      }
    }
    param_1 = *(longlong *)(param_1 + 8);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 147a489fa FUN_147a489fa body=8 status=ok
// SIG undefined FUN_147a489fa(void)

undefined8 FUN_147a489fa(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// FUNCTION 147a48a02 FUN_147a48a02 body=96 status=ok
// SIG undefined FUN_147a48a02(void)

void FUN_147a48a02(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48a72 FUN_147a48a72 body=92 status=ok
// SIG undefined FUN_147a48a72(void)

void FUN_147a48a72(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x10)) {
    FUN_147a48ace(param_1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 147a48ace FUN_147a48ace body=216 status=ok
// SIG undefined FUN_147a48ace(void)

void FUN_147a48ace(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x10) < 2) goto LAB_147a48ae8;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_147a48b12;
    puVar2 = &DAT_149dfb77a;
  }
  else {
LAB_147a48b12:
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar2,1);
  if (plVar1 != (longlong *)0x0) {
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*plVar1 + 200))(plVar1);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,plVar1,0);
    FUN_1449db362(&local_20);
  }
LAB_147a48ae8:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48ba8 FUN_147a48ba8 body=599 status=ok
// SIG undefined FUN_147a48ba8(void)

void FUN_147a48ba8(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < *(int *)(param_1 + 0x10)) {
    if ((DAT_14c8407a8 == (longlong *)0x0) && (FUN_1414b00ea(), *(int *)(param_1 + 0x10) == 0)) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 8);
    }
    plVar2 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
    if (plVar2 == (longlong *)0x0) {
      if (*param_1 == '\x02') {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        puVar4 = &DAT_149dfb77a;
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x20) != 0) {
          puVar6 = *(undefined2 **)(param_1 + 0x18);
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          puVar4 = *(undefined2 **)(param_1 + 8);
        }
        local_48 = 0x40;
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 0x20))(DAT_14c8407a8,puVar4,param_1[0x30],puVar6);
      }
      else if (*param_1 == '\x01') {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        puVar4 = &DAT_149dfb77a;
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x20) != 0) {
          puVar6 = *(undefined2 **)(param_1 + 0x18);
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          puVar4 = *(undefined2 **)(param_1 + 8);
        }
        local_48 = 0x40;
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 0x18))
                           (DAT_14c8407a8,puVar4,*(undefined4 *)(param_1 + 0x2c),puVar6);
      }
      else {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        puVar4 = &DAT_149dfb77a;
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x20) != 0) {
          puVar6 = *(undefined2 **)(param_1 + 0x18);
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          puVar4 = *(undefined2 **)(param_1 + 8);
        }
        local_48 = 0x40;
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 0x10))
                           (DAT_14c8407a8,puVar4,*(undefined4 *)(param_1 + 0x28),puVar6);
      }
    }
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_149e170a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_149e17030;
    local_38[3] = FUN_147a48e00;
    (**(code **)(*plVar2 + 200))(plVar2,&local_38);
    FUN_1449db362(&local_38);
    iVar5 = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(param_1 + 0x38,*(undefined8 *)(param_1 + 8),iVar5);
    iVar5 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(param_1 + 0x48,*(undefined8 *)(param_1 + 0x18),iVar5);
    param_1[0x58] = *param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a48e00 FUN_147a48e00 body=154 status=ok
// SIG undefined FUN_147a48e00(void)

void FUN_147a48e00(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_147a48e9c();
    if (lVar1 != 0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      (**(code **)(*DAT_14c8407a8 + 0xd8))(DAT_14c8407a8,local_30,param_1);
      FUN_147a48a02(lVar1 + 0x30,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48e9c FUN_147a48e9c body=103 status=ok
// SIG undefined FUN_147a48e9c(void)

void FUN_147a48e9c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b56214();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_147a4fada(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a48f04 FUN_147a48f04 body=38 status=ok
// SIG undefined FUN_147a48f04(void)

undefined8 FUN_147a48f04(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Engine",1);
  return param_2;
}



// FUNCTION 147a48f2a FUN_147a48f2a body=281 status=ok
// SIG undefined FUN_147a48f2a(void)

void FUN_147a48f2a(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x10a8) == '\x01') && (*(char *)(param_1 + 0x11f0) == '\0')) {
    if (*(char *)(param_1 + 0x70) == '\0') {
      *(undefined2 *)(param_1 + 0x70) = 0x101;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined1 *)(param_1 + 0x1078) = 0;
      *(undefined8 *)(param_1 + 0x10a0) = 0;
      *(undefined8 *)(param_1 + 0x1080) = 0;
      *(undefined8 *)(param_1 + 0x1088) = 0;
      *(undefined8 *)(param_1 + 0x108c) = 0;
      *(undefined8 *)(param_1 + 0x1094) = 0;
    }
    if (*(longlong *)(param_1 + 0x10c8) == param_3) {
      uVar2 = rand();
      if ((double)((float)(uVar2 & 0x7fff) / 32767.0) <= *(double *)(param_1 + 0x10d0)) {
        QueryPerformanceCounter(&local_30);
        FUN_147be516a(param_1,param_2,param_3,(double)local_30.QuadPart * DAT_14c83f420 + 16777216.0
                     );
        goto LAB_147a48f57;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x1078);
    *(byte *)(param_1 + 0x1078) = bVar1 + 1;
    lVar3 = (ulonglong)bVar1 * 0x10;
    *(undefined8 *)(param_1 + 0x78 + lVar3) = param_2;
    *(longlong *)(param_1 + 0x80 + lVar3) = param_3;
  }
LAB_147a48f57:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49044 FUN_147a49044 body=385 status=ok
// SIG undefined FUN_147a49044(void)

void FUN_147a49044(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0x10,0x10);
    FUN_147ce24a6(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x90) << 4,(longlong)*(int *)(param_1 + 0x94) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xb0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xb4) + 0x1fU >> 3 & 0xfffffffc);
  lVar3 = (longlong)*(int *)(param_1 + 0xd0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar3,lVar3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x70) * 0x18,
             (longlong)*(int *)(param_1 + 0x74) * 0x18);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x268))(plVar2,param_2);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x80) * 0x78,
             (longlong)*(int *)(param_1 + 0x84) * 0x78);
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 0x10 + lVar5),
                 (longlong)*(int *)(lVar3 + 0x14 + lVar5));
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 0x30 + lVar5) << 4,
                 (longlong)*(int *)(lVar3 + 0x34 + lVar5) << 4);
      (**(code **)(*param_2 + 0x10))
                (param_2,*(int *)(lVar3 + 0x50 + lVar5) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)(lVar3 + 0x54 + lVar5) + 0x1fU >> 3 & 0xfffffffc);
      lVar4 = (longlong)*(int *)(lVar3 + 0x70 + lVar5) << 2;
      (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
      lVar5 = lVar5 + 0x78;
    } while ((longlong)iVar1 * 0x78 - lVar5 != 0);
  }
  return;
}



// FUNCTION 147a491c6 FUN_147a491c6 body=159 status=ok
// SIG undefined FUN_147a491c6(void)

void FUN_147a491c6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1459b23c6();
  local_58 = 0xe;
  local_50 = 0;
  FUN_14485c47a(&local_50,uVar1);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_48 = uVar1;
  FUN_143587ad8(param_1,&local_58);
  if (local_30 != 0) {
    (**(code **)(local_30 + -0x10))(local_30 + -0x10);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49266 FUN_147a49266 body=79 status=ok
// SIG undefined FUN_147a49266(void)

void FUN_147a49266(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x78 + *param_1);
  FUN_147a4fb26(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar1) * 0x78);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147a4fefe(param_1);
  return;
}



// FUNCTION 147a492da FUN_147a492da body=62 status=ok
// SIG undefined FUN_147a492da(void)

void FUN_147a492da(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  switchD_143c3d4dc::caseD_2e();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 147a49318 FUN_147a49318 body=441 status=ok
// SIG undefined FUN_147a49318(void)

void FUN_147a49318(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) goto LAB_147a4945c;
  if (DAT_14cad5558 == 0) {
    uVar5 = FUN_140002dac();
    DAT_14cad5558 = FUN_140002ddd(FUN_1417c360e,uVar5,L"TableRowBase");
    if (DAT_14cad5558 != 0) goto LAB_147a4935b;
LAB_147a49368:
    bVar7 = false;
  }
  else {
LAB_147a4935b:
    if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cad5558 + 0x38)) goto LAB_147a49368;
    bVar7 = *(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad5558 + 0x38) * 8) ==
            DAT_14cad5558 + 0x30;
  }
  local_98 = *(longlong **)(param_1 + 0x18);
  FUN_1400021e4(&local_98,local_70);
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x58);
  }
  uStack_78 = CONCAT44(uStack_44,uStack_48);
  local_80 = local_50;
  uVar5 = local_80;
  local_90 = (undefined4)local_60;
  uStack_8c = local_60._4_4_;
  uStack_88 = (undefined4)uStack_58;
  uStack_84 = uStack_58._4_4_;
  local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  iVar4 = local_80._4_4_;
  local_98 = plVar1;
  if ((local_80._4_4_ != iVar6) || (local_80 = uVar5, uStack_58 != lVar2)) {
    do {
      local_80 = uVar5;
      if (bVar7) {
        plVar3 = *(longlong **)(*local_98 + 8 + (longlong)iVar4 * 0x18);
        (**(code **)(*plVar3 + 8))
                  (plVar3,param_1,*(undefined8 *)(*local_98 + (longlong)iVar4 * 0x18),param_2);
      }
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
      FUN_1449c0562(&local_90);
      iVar4 = local_80._4_4_;
      uVar5 = local_80;
    } while (local_98 != plVar1 ||
             (CONCAT44(uStack_84,uStack_88) != lVar2 || local_80._4_4_ != iVar6));
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
LAB_147a4945c:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a494d2 FUN_147a494d2 body=132 status=ok
// SIG undefined FUN_147a494d2(void)

void FUN_147a494d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_38();
  lVar1 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0x78)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x78) * 4;
  }
  FUN_14484255c(param_2,lVar1 + (ulonglong)(*(int *)(param_1 + 0x5c) + 0x1fU >> 5) * 4 +
                                (longlong)*(int *)(param_1 + 0x3c) * 0x18);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_14484255c(param_2,(longlong)
                          (int)((-*(int *)(lVar1 + 0x5c) &
                                (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U) *
                               (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100))));
    return;
  }
  return;
}



// FUNCTION 147a49556 FUN_147a49556 body=97 status=ok
// SIG undefined FUN_147a49556(void)

void FUN_147a49556(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c2e1a0(local_28,param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
  FUN_140c2e340(local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a495b8 FUN_147a495b8 body=161 status=ok
// SIG undefined FUN_147a495b8(void)

void FUN_147a495b8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_140c2e2cc();
  plVar3 = (longlong *)(param_1 + 0x30);
  FUN_147a5059e(plVar3,&local_2c,param_2);
  if ((longlong)local_2c != -1) {
    lVar1 = *(longlong *)(*plVar3 + 8 + (longlong)local_2c * 0x18);
    FUN_147a50622(plVar3);
    if (lVar1 != 0) {
      (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4966c FUN_147a4966c body=211 status=ok
// SIG undefined FUN_147a4966c(void)

void FUN_147a4966c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2e1a0(local_40,param_1);
  plVar1 = (longlong *)FUN_140c2e2cc(param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
  uVar2 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)plVar1 + 0x5c) &
                             ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U),0);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar2,1);
  FUN_1449b16b6(plVar1,uVar2,param_3,1);
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,uVar2);
  FUN_140c2e340(local_40);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49740 FUN_147a49740 body=211 status=ok
// SIG undefined FUN_147a49740(void)

void FUN_147a49740(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2e1a0(local_40,param_1);
  plVar1 = (longlong *)FUN_140c2e2cc(param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
  uVar2 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)plVar1 + 0x5c) &
                             ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U),0);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar2,1);
  FUN_1449b16b6(plVar1,uVar2,param_3,1);
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,uVar2);
  FUN_140c2e340(local_40);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49814 FUN_147a49814 body=91 status=ok
// SIG undefined FUN_147a49814(void)

void FUN_147a49814(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_28 = param_2;
  FUN_1407f258a(param_1 + 0x30,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49870 FUN_147a49870 body=482 status=ok
// SIG undefined FUN_147a49870(void)

longlong FUN_147a49870(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = FUN_144a87586(*(longlong *)(param_1 + 0x28),*param_2);
    if (lVar6 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x28);
      lVar6 = FUN_1408cc5f4();
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        lVar6 = 0;
      }
      else {
        FUN_1400021e4(param_2,&local_48);
        local_60 = *(longlong *)(param_1 + 0x28);
        if (local_60 == 0) {
          local_58 = 0;
        }
        else {
          local_58 = *(longlong *)(local_60 + 0x50);
        }
        local_50 = 0xffffffff;
        local_4c = 0x101;
        local_4a = 0;
        FUN_144a2daf0(&local_60);
        if (local_58 != 0) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x318))
                      (*(longlong **)(param_1 + 0x28),&local_70);
            if (local_40 == local_68) {
              bVar9 = true;
              if (1 < local_40) {
                lVar7 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(local_48 + lVar7);
                  uVar4 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_70 + lVar7);
                  uVar8 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147a499b5;
                    }
                    iVar5 = uVar4 - uVar8;
                    goto LAB_147a49a24;
                  }
                  if (uVar1 == 0) break;
LAB_147a499b5:
                  lVar7 = lVar7 + 2;
                }
                iVar5 = 0;
LAB_147a49a24:
                bVar9 = iVar5 == 0;
              }
            }
            else {
              bVar9 = local_68 + local_40 == 1;
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            lVar6 = local_58;
            if (bVar9) goto LAB_147a49a2f;
            local_58 = *(longlong *)(local_58 + 0x18);
            FUN_144a2daf0(&local_60);
          } while (local_58 != 0);
        }
        lVar6 = 0;
LAB_147a49a2f:
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
    cVar3 = FUN_147a54b5d(lVar6);
    lVar7 = 0;
    if (cVar3 != '\0') {
      lVar7 = lVar6;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 147a49a54 FUN_147a49a54 body=151 status=ok
// SIG undefined FUN_147a49a54(void)

undefined8 * FUN_147a49a54(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2e1a0(local_38,param_1);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_147a51a3a(local_50,param_1,param_3,param_2);
  FUN_147a51a4c(local_50);
  FUN_147a51a4a(local_50);
  FUN_147a49318(param_1,param_2);
  FUN_140c2e340(local_38);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49aec FUN_147a49aec body=32 status=ok
// SIG undefined FUN_147a49aec(void)

undefined8 * FUN_147a49aec(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_147a49b0c(param_1 + 0x30);
  return param_2;
}



// FUNCTION 147a49b0c FUN_147a49b0c body=763 status=ok
// SIG undefined FUN_147a49b0c(void)

void FUN_147a49b0c(longlong *param_1,longlong *param_2)

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
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x18);
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
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_147a49cb8;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar1);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_147a49cb8:
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



// FUNCTION 147a49e0a FUN_147a49e0a body=68 status=ok
// SIG undefined FUN_147a49e0a(void)

undefined8 FUN_147a49e0a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  lVar1 = *param_2;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    uVar3 = extraout_var;
  }
  uVar2 = CONCAT71(uVar3,1);
  if (*param_1 == lVar1) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[1] >> 8),param_1[1] != param_2[1]);
  }
  return uVar2;
}



// FUNCTION 147a49e4e FUN_147a49e4e body=115 status=ok
// SIG undefined FUN_147a49e4e(void)

void FUN_147a49e4e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_2 + 5) & 4) != 0) && (lVar1 = *param_1, lVar1 != 0)) {
    local_20 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    (**(code **)(*param_2 + 0x210))(param_2,&local_20,param_1 + 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49ec2 FUN_147a49ec2 body=45 status=ok
// SIG undefined FUN_147a49ec2(void)

longlong FUN_147a49ec2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a49f0c FUN_147a49f0c body=100 status=ok
// SIG undefined FUN_147a49f0c(void)

void FUN_147a49f0c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_147a3c0f8(param_2,param_1 + -0x28,&local_20);
  lVar1 = local_20;
  if (local_20 != 0) {
    lVar1 = local_20 + 0x28;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a49f72 FUN_147a49f72 body=45 status=ok
// SIG undefined FUN_147a49f72(void)

longlong FUN_147a49f72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f4e06c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a49fa0 FUN_147a49fa0 body=45 status=ok
// SIG undefined FUN_147a49fa0(void)

longlong FUN_147a49fa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cb3e94(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a49ff6 FUN_147a49ff6 body=45 status=ok
// SIG undefined FUN_147a49ff6(void)

longlong FUN_147a49ff6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ddd87a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a4a024 FUN_147a4a024 body=45 status=ok
// SIG undefined FUN_147a4a024(void)

longlong FUN_147a4a024(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459da140(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a4a052 FUN_147a4a052 body=38 status=ok
// SIG undefined FUN_147a4a052(void)

undefined8 FUN_147a4a052(undefined8 param_1,int param_2)

{
  FUN_1449daebe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a4a078 FUN_147a4a078 body=49 status=ok
// SIG undefined FUN_147a4a078(void)

undefined8 FUN_147a4a078(undefined8 param_1)

{
  FUN_140033559("Runtime\\Engine\\Public\\Net/DataBunch.h",0xd4,
                L"Cannot send Objects on the control channel");
  FUN_14572541c(param_1);
  return param_1;
}



// FUNCTION 147a4a0aa FUN_147a4a0aa body=49 status=ok
// SIG undefined FUN_147a4a0aa(void)

undefined8 FUN_147a4a0aa(undefined8 param_1)

{
  FUN_140033559("Runtime\\Engine\\Public\\Net/DataBunch.h",0xce,
                L"Cannot send Names on the control channel");
  FUN_14572541c(param_1);
  return param_1;
}



// FUNCTION 147a4a148 FUN_147a4a148 body=59 status=ok
// SIG undefined FUN_147a4a148(void)

undefined8 FUN_147a4a148(longlong *param_1)

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



// FUNCTION 147a4a2a0 FUN_147a4a2a0 body=63 status=ok
// SIG undefined FUN_147a4a2a0(void)

undefined1 FUN_147a4a2a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14115e0ba(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 147a4a308 FUN_147a4a308 body=59 status=ok
// SIG undefined FUN_147a4a308(void)

undefined8 FUN_147a4a308(longlong *param_1)

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



// FUNCTION 147a4a3a0 FUN_147a4a3a0 body=73 status=ok
// SIG undefined FUN_147a4a3a0(void)

void FUN_147a4a3a0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *param_1 = &DAT_14a176f00;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 147a4a3ea FUN_147a4a3ea body=123 status=ok
// SIG undefined FUN_147a4a3ea(void)

void FUN_147a4a3ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 147a4a466 FUN_147a4a466 body=37 status=ok
// SIG undefined FUN_147a4a466(void)

void FUN_147a4a466(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  FUN_1414f6638(param_2);
  return;
}



// FUNCTION 147a4a494 FUN_147a4a494 body=105 status=ok
// SIG undefined FUN_147a4a494(void)

void FUN_147a4a494(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)(param_2 + 0x180 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_2 + 0x1f0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_2 + 0x180 + lVar1) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_2 + 0x188 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x200);
  return;
}



// FUNCTION 147a4a514 FUN_147a4a514 body=63 status=ok
// SIG undefined FUN_147a4a514(void)

undefined1 FUN_147a4a514(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a4a61e(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 147a4a57c FUN_147a4a57c body=59 status=ok
// SIG undefined FUN_147a4a57c(void)

undefined8 FUN_147a4a57c(longlong *param_1)

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



// FUNCTION 147a4a61e FUN_147a4a61e body=138 status=ok
// SIG undefined FUN_147a4a61e(void)

longlong FUN_147a4a61e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_2 + 0x70;
  lVar2 = param_1 + 0x70;
  lVar3 = 4;
  do {
    *(undefined2 *)(lVar2 + -4) = *(undefined2 *)(lVar1 + -4);
    *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar1 + -8);
    FUN_14093c00e(lVar2,lVar1);
    lVar1 = lVar1 + 0x80;
    lVar2 = lVar2 + 0x80;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = *(longlong *)(param_2 + 0x200);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x200);
    }
  }
  *(longlong *)(param_1 + 0x200) = lVar1;
  return param_1;
}



// FUNCTION 147a4a6aa FUN_147a4a6aa body=121 status=ok
// SIG undefined FUN_147a4a6aa(void)

void FUN_147a4a6aa(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x208) == '\x01') {
    lVar1 = 0;
    do {
      *(undefined **)(param_1 + 0x180 + lVar1) = &DAT_14a176f00;
      if (*(longlong *)(param_1 + 0x1f0 + lVar1) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0x180 + lVar1) = &PTR_FUN_14a177080;
      FUN_144a78a1a(param_1 + 0x188 + lVar1);
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != -0x200);
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  return;
}



// FUNCTION 147a4a7c8 FUN_147a4a7c8 body=59 status=ok
// SIG undefined FUN_147a4a7c8(void)

undefined8 FUN_147a4a7c8(longlong *param_1)

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



// FUNCTION 147a4a86a FUN_147a4a86a body=37 status=ok
// SIG undefined FUN_147a4a86a(void)

void FUN_147a4a86a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  FUN_147a4aa22(param_2);
  return;
}



// FUNCTION 147a4a898 FUN_147a4a898 body=105 status=ok
// SIG undefined FUN_147a4a898(void)

void FUN_147a4a898(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)(param_2 + 0x100 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_2 + 0x170 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_2 + 0x100 + lVar1) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_2 + 0x108 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x180);
  return;
}



// FUNCTION 147a4a918 FUN_147a4a918 body=63 status=ok
// SIG undefined FUN_147a4a918(void)

undefined1 FUN_147a4a918(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a4aa96(param_2,param_3);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 147a4a980 FUN_147a4a980 body=59 status=ok
// SIG undefined FUN_147a4a980(void)

undefined8 FUN_147a4a980(longlong *param_1)

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



// FUNCTION 147a4aa22 FUN_147a4aa22 body=116 status=ok
// SIG undefined FUN_147a4aa22(void)

void FUN_147a4aa22(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x70;
  do {
    *(undefined8 *)(param_1 + -0x48 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x40 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x68 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x3c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x34 + lVar2) = 0;
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x18 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + -8 + lVar2) = 0x7f7fffff;
    *(undefined2 *)(param_1 + -4 + lVar2) = 0x404;
    *(undefined **)(param_1 + -0x70 + lVar2) = &DAT_14a176f00;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x1f0);
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 147a4aa96 FUN_147a4aa96 body=138 status=ok
// SIG undefined FUN_147a4aa96(void)

longlong FUN_147a4aa96(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_2 + 0x70;
  lVar2 = param_1 + 0x70;
  lVar3 = 3;
  do {
    *(undefined2 *)(lVar2 + -4) = *(undefined2 *)(lVar1 + -4);
    *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar1 + -8);
    FUN_14093c00e(lVar2,lVar1);
    lVar1 = lVar1 + 0x80;
    lVar2 = lVar2 + 0x80;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x180);
    }
  }
  *(longlong *)(param_1 + 0x180) = lVar1;
  return param_1;
}



// FUNCTION 147a4ab22 FUN_147a4ab22 body=121 status=ok
// SIG undefined FUN_147a4ab22(void)

void FUN_147a4ab22(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x188) == '\x01') {
    lVar1 = 0;
    do {
      *(undefined **)(param_1 + 0x100 + lVar1) = &DAT_14a176f00;
      if (*(longlong *)(param_1 + 0x170 + lVar1) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0x100 + lVar1) = &PTR_FUN_14a177080;
      FUN_144a78a1a(param_1 + 0x108 + lVar1);
      lVar1 = lVar1 + -0x80;
    } while (lVar1 != -0x180);
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147a4ac5c FUN_147a4ac5c body=59 status=ok
// SIG undefined FUN_147a4ac5c(void)

undefined8 FUN_147a4ac5c(longlong *param_1)

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



// FUNCTION 147a4aca2 FUN_147a4aca2 body=43 status=ok
// SIG undefined FUN_147a4aca2(void)

void FUN_147a4aca2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 147a4ad8a FUN_147a4ad8a body=59 status=ok
// SIG undefined FUN_147a4ad8a(void)

undefined8 FUN_147a4ad8a(longlong *param_1)

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



// FUNCTION 147a4aedc FUN_147a4aedc body=82 status=ok
// SIG undefined FUN_147a4aedc(void)

undefined8 FUN_147a4aedc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      FUN_14093c3cc(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4af56 FUN_147a4af56 body=59 status=ok
// SIG undefined FUN_147a4af56(void)

undefined8 FUN_147a4af56(longlong *param_1)

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



// FUNCTION 147a4affa FUN_147a4affa body=73 status=ok
// SIG undefined FUN_147a4affa(void)

void FUN_147a4affa(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *param_1 = &PTR_FUN_14a46be50;
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147a4b0ba FUN_147a4b0ba body=53 status=ok
// SIG undefined FUN_147a4b0ba(void)

undefined8
FUN_147a4b0ba(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  if (*(int *)(param_2 + 0x58) == *(int *)(param_3 + 0x58)) {
    uVar1 = FUN_147a4b1c0(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_3 + 0x50));
  }
  else {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147a4b10c FUN_147a4b10c body=59 status=ok
// SIG undefined FUN_147a4b10c(void)

undefined8 FUN_147a4b10c(longlong *param_1)

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



// FUNCTION 147a4b152 FUN_147a4b152 body=32 status=ok
// SIG undefined FUN_147a4b152(void)

void FUN_147a4b152(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_144a78a1a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147a4b1c0 FUN_147a4b1c0 body=40 status=ok
// SIG undefined FUN_147a4b1c0(void)

bool FUN_147a4b1c0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return true;
  }
  lVar2 = 0;
  do {
    bVar3 = *(int *)(param_1 + lVar2 * 4) == *(int *)(param_2 + lVar2 * 4);
    if (!bVar3) {
      return bVar3;
    }
    iVar1 = (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (param_3 + -1 != iVar1);
  return bVar3;
}



// FUNCTION 147a4b1ea FUN_147a4b1ea body=62 status=ok
// SIG undefined FUN_147a4b1ea(void)

void FUN_147a4b1ea(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  return;
}



// FUNCTION 147a4b284 FUN_147a4b284 body=97 status=ok
// SIG undefined FUN_147a4b284(void)

undefined1 FUN_147a4b284(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a4b3ce(param_2,param_3);
    FUN_147a4b444(param_2 + 0x38,param_3 + 0x38);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 147a4b30e FUN_147a4b30e body=59 status=ok
// SIG undefined FUN_147a4b30e(void)

undefined8 FUN_147a4b30e(longlong *param_1)

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



// FUNCTION 147a4b35a FUN_147a4b35a body=38 status=ok
// SIG undefined FUN_147a4b35a(void)

void FUN_147a4b35a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_141177934(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147a4b3ce FUN_147a4b3ce body=117 status=ok
// SIG undefined FUN_147a4b3ce(void)

undefined8 * FUN_147a4b3ce(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404dbb38(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146f9ea2e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 147a4b444 FUN_147a4b444 body=122 status=ok
// SIG undefined FUN_147a4b444(void)

longlong FUN_147a4b444(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147a4b4be(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147a4b4be FUN_147a4b4be body=115 status=ok
// SIG undefined FUN_147a4b4be(void)

undefined8 * FUN_147a4b4be(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147a4a3ea(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 147a4b558 FUN_147a4b558 body=19 status=ok
// SIG undefined FUN_147a4b558(void)

undefined1 FUN_147a4b558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147a40b88(param_3);
  return 1;
}



// FUNCTION 147a4b5c0 FUN_147a4b5c0 body=59 status=ok
// SIG undefined FUN_147a4b5c0(void)

undefined8 FUN_147a4b5c0(longlong *param_1)

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



// FUNCTION 147a4b6fa FUN_147a4b6fa body=62 status=ok
// SIG undefined FUN_147a4b6fa(void)

undefined1 FUN_147a4b6fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      FUN_147a4b7fc(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4b760 FUN_147a4b760 body=59 status=ok
// SIG undefined FUN_147a4b760(void)

undefined8 FUN_147a4b760(longlong *param_1)

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



// FUNCTION 147a4b7fc FUN_147a4b7fc body=89 status=ok
// SIG undefined FUN_147a4b7fc(void)

undefined8 * FUN_147a4b7fc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14760e5dc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a4b856 FUN_147a4b856 body=67 status=ok
// SIG undefined FUN_147a4b856(void)

void FUN_147a4b856(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *param_1 = &PTR_FUN_14a4c4280;
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147a4b8b0 FUN_147a4b8b0 body=19 status=ok
// SIG undefined FUN_147a4b8b0(void)

undefined1 FUN_147a4b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147a434e0(param_3);
  return 1;
}



// FUNCTION 147a4b920 FUN_147a4b920 body=59 status=ok
// SIG undefined FUN_147a4b920(void)

undefined8 FUN_147a4b920(longlong *param_1)

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



// FUNCTION 147a4ba7e FUN_147a4ba7e body=90 status=ok
// SIG undefined FUN_147a4ba7e(void)

undefined8 FUN_147a4ba7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      *(undefined2 *)(param_2 + -0xc) = *(undefined2 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_147a4bba2(param_2,param_3);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4bb00 FUN_147a4bb00 body=59 status=ok
// SIG undefined FUN_147a4bb00(void)

undefined8 FUN_147a4bb00(longlong *param_1)

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



// FUNCTION 147a4bba2 FUN_147a4bba2 body=88 status=ok
// SIG undefined FUN_147a4bba2(void)

undefined8 * FUN_147a4bba2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a3a0c0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a4bbfc FUN_147a4bbfc body=73 status=ok
// SIG undefined FUN_147a4bbfc(void)

void FUN_147a4bbfc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *param_1 = &PTR_FUN_14a89a2c0;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 147a4bc74 FUN_147a4bc74 body=19 status=ok
// SIG undefined FUN_147a4bc74(void)

undefined1 FUN_147a4bc74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147a44afa(param_3);
  return 1;
}



// FUNCTION 147a4bc9a FUN_147a4bc9a body=31 status=ok
// SIG undefined FUN_147a4bc9a(void)

undefined1
FUN_147a4bc9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147a44a78(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147a4bcd6 FUN_147a4bcd6 body=59 status=ok
// SIG undefined FUN_147a4bcd6(void)

undefined8 FUN_147a4bcd6(longlong *param_1)

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



// FUNCTION 147a4bd1c FUN_147a4bd1c body=38 status=ok
// SIG undefined FUN_147a4bd1c(void)

void FUN_147a4bd1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147a4be32 FUN_147a4be32 body=83 status=ok
// SIG undefined FUN_147a4be32(void)

undefined1 FUN_147a4be32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_147a4bf70(param_2,param_3);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4beae FUN_147a4beae body=59 status=ok
// SIG undefined FUN_147a4beae(void)

undefined8 FUN_147a4beae(longlong *param_1)

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



// FUNCTION 147a4befa FUN_147a4befa body=40 status=ok
// SIG undefined FUN_147a4befa(void)

void FUN_147a4befa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1475a4d22(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147a4bf70 FUN_147a4bf70 body=95 status=ok
// SIG undefined FUN_147a4bf70(void)

undefined8 * FUN_147a4bf70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1475af39b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475af294(param_1,iVar1);
      FUN_1475af307(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a4bffe FUN_147a4bffe body=100 status=ok
// SIG undefined FUN_147a4bffe(void)

undefined1 FUN_147a4bffe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4c08a FUN_147a4c08a body=157 status=ok
// SIG undefined FUN_147a4c08a(void)

void FUN_147a4c08a(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = param_2[1];
  uVar2 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = (uint)(uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  FUN_144a78877(((uint)uVar1 << 0x10 | uVar4) + (int)(uVar1 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),uVar3 >> 0x10 ^ uVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4c18e FUN_147a4c18e body=122 status=ok
// SIG undefined FUN_147a4c18e(void)

longlong FUN_147a4c18e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147a4c208(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147a4c208 FUN_147a4c208 body=121 status=ok
// SIG undefined FUN_147a4c208(void)

undefined8 * FUN_147a4c208(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459da1e8(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}


