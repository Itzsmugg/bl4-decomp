// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e3eb92 FUN_147e3eb92 body=428 status=ok
// SIG undefined FUN_147e3eb92(void)

undefined8 FUN_147e3eb92(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_3d8 [40];
  undefined2 *local_3b0;
  int local_3a8;
  undefined8 local_3a0;
  undefined2 *local_398;
  int local_390;
  longlong local_328;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (param_2 == 0) {
    FUN_140056680(param_1,L"Actor is \'None\'.");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_3d8);
  }
  lVar1 = FUN_14070cc62();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    local_3b0 = *(undefined2 **)(param_2 + 0x18);
    FUN_1400021e4(&local_3b0,&local_398);
    puVar3 = local_398;
    if (local_390 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    pwVar2 = L"%s is not a GbxNavCharacter.";
  }
  else {
    if (*(longlong *)(param_2 + 0x858) != 0) {
      FUN_144a238e8(&local_398,*(longlong *)(param_2 + 0x858) + 0x1730);
      if (local_328 == 0) {
        local_3a0 = *(undefined8 *)(param_2 + 0x18);
        FUN_1400021e4(&local_3a0,&local_3b0);
        puVar3 = local_3b0;
        if (local_3a8 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_140002266(param_1,L"%s does not currently have a nav anim.",puVar3);
        if (local_3b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_144750a86(local_328,param_1,0,0);
      }
      FUN_144b2e76e(&local_398);
      goto LAB_147e3ec55;
    }
    local_3b0 = *(undefined2 **)(param_2 + 0x18);
    FUN_1400021e4(&local_3b0,&local_398);
    puVar3 = local_398;
    if (local_390 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    pwVar2 = L"%s does not have a GbxNavCharacterMovementComponent.";
  }
  FUN_140002266(param_1,pwVar2,puVar3);
  if (local_398 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147e3ec55:
  if ((local_20 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3ed40 FUN_147e3ed40 body=41 status=ok
// SIG undefined FUN_147e3ed40(void)

undefined8 * FUN_147e3ed40(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 147e3ed6a FUN_147e3ed6a body=48 status=ok
// SIG undefined FUN_147e3ed6a(void)

void FUN_147e3ed6a(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = *(uint *)((longlong)param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 1);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  *param_2 = *(undefined4 *)param_1;
  param_2[1] = uVar2 ^ 0x80000000;
  param_2[2] = uVar3;
  param_2[3] = uVar4 ^ 0x80000000;
  *(ulonglong *)(param_2 + 4) = uVar1 ^ 0x8000000000000000;
  *(undefined8 *)(param_2 + 10) = param_1[2];
  uVar5 = param_1[1];
  *(undefined8 *)(param_2 + 6) = *param_1;
  *(undefined8 *)(param_2 + 8) = uVar5;
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}



// FUNCTION 147e3ed9a FUN_147e3ed9a body=118 status=ok
// SIG undefined FUN_147e3ed9a(void)

undefined8 FUN_147e3ed9a(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_1;
  uStack_40 = param_1[2];
  uStack_44 = param_1[1] ^ 0x80000000;
  uStack_3c = param_1[3] ^ 0x80000000;
  local_38 = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
  local_20 = *(undefined8 *)(param_1 + 4);
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  uStack_24 = param_1[3];
  local_18 = 1;
  FUN_144a1c3a2(&local_48,param_2,param_1 + 8);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3ee12 FUN_147e3ee12 body=573 status=ok
// SIG undefined FUN_147e3ee12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e3ee12(longlong param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  double *pdVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x70);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar20._8_4_ = (int)lVar14;
  auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar20._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar11 = movmskpd((int)param_2,auVar20);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar22._8_4_ = (int)lVar14;
  auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar22._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar13 = movmskpd(param_3,auVar22);
  if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
    pdVar12 = (double *)&DAT_14c846480;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *param_2 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    auVar22 = divpd(_DAT_149934d80,auVar1);
    auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar22._0_8_);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar22._8_8_);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar20._0_8_);
    dVar10 = *(double *)(param_1 + 0x20);
    dVar17 = -dVar10;
    dVar18 = -*(double *)(param_1 + 0x28);
    dVar5 = *(double *)(param_1 + 0x30) * -1.0;
    dVar6 = *(double *)(param_1 + 0x38) * 1.0;
    dVar19 = *(double *)(param_1 + 0x40) * dVar15;
    dVar21 = *(double *)(param_1 + 0x48) * dVar16;
    dVar4 = *(double *)(param_1 + 0x50) * dVar3;
    *param_2 = dVar17;
    param_2[1] = dVar18;
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar5;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 2) = auVar1;
    dVar8 = dVar21 * dVar17 - dVar18 * dVar19;
    dVar9 = dVar4 * dVar18 - dVar5 * dVar21;
    dVar7 = dVar19 * dVar5 - dVar17 * dVar4;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    param_2[4] = 0.0 - ((dVar8 * dVar18 - dVar7 * dVar5) + dVar6 * dVar9 + dVar19);
    param_2[5] = 0.0 - (dVar8 * dVar10 + dVar5 * dVar9 + dVar6 * dVar7 + dVar21);
    param_2[6] = 0.0 - (dVar6 * dVar8 + dVar4 + (dVar7 * dVar17 - dVar9 * dVar18));
    param_2[7] = 0.0;
    param_2[8] = dVar15;
    param_2[9] = dVar16;
    param_2[10] = dVar3;
    param_2[0xb] = 0.0;
  }
  return;
}



// FUNCTION 147e3f050 FUN_147e3f050 body=436 status=ok
// SIG undefined FUN_147e3f050(void)

undefined8 FUN_147e3f050(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = (undefined8 *)(**(code **)(*param_1 + 0x180))();
  FUN_147e446ea(local_80,&local_98);
  lVar3 = local_58;
  local_98 = local_78;
  local_90 = local_70;
  LOCK();
  *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + 1;
  UNLOCK();
  local_88 = local_68;
  LOCK();
  *(int *)(local_58 + 0x38) = *(int *)(local_58 + 0x38) + 1;
  UNLOCK();
  if (local_78 != local_60) {
    do {
      puVar2 = local_98;
      lVar1 = local_98[2];
      if ((*(char *)(lVar1 + 0x4f5) == '\x01') && ((*(uint *)(lVar1 + 0x590) & 0xf00) == 0x100)) {
        local_a0 = *(double *)(lVar1 + 0x290) * *(double *)(lVar1 + 0x650);
        local_a8 = *(double *)(lVar1 + 0x288) * *(double *)(lVar1 + 0x648);
        local_b0 = *(double *)(lVar1 + 0x280) * *(double *)(lVar1 + 0x640);
        local_c8 = *(undefined8 *)(lVar1 + 0x260);
        uStack_c0 = *(undefined8 *)(lVar1 + 0x268);
        local_b8 = *(undefined8 *)(lVar1 + 0x270);
        local_e8 = *param_2;
        uStack_e4 = param_2[1];
        uStack_e0 = param_2[2];
        uStack_dc = param_2[3];
        local_d8 = *(undefined8 *)(param_2 + 4);
        cVar4 = FUN_1435407bc(&local_e8,&local_c8,&local_b0);
        if (cVar4 != '\0') {
          uVar5 = 1;
          goto LAB_147e3f1b0;
        }
      }
      local_98 = (undefined8 *)FUN_147e44774(*puVar2);
      FUN_147e447f6(&local_98);
    } while (local_98 != local_60);
  }
  uVar5 = 0;
LAB_147e3f1b0:
  LOCK();
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_90 + 0x38) = *(int *)(local_90 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_58 + 0x38) = *(int *)(local_58 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + -1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3f20a FUN_147e3f20a body=133 status=ok
// SIG undefined FUN_147e3f20a(void)

undefined8 FUN_147e3f20a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"NavChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3f2a6 FUN_147e3f2a6 body=204 status=ok
// SIG undefined FUN_147e3f2a6(void)

void FUN_147e3f2a6(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  FUN_141246736(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_147e3e66a(local_30 + 0xc0,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  FUN_1414df1a6(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e3f374 FUN_147e3f374 body=49 status=ok
// SIG undefined FUN_147e3f374(void)

void FUN_147e3f374(longlong param_1)

{
  FUN_147997c32();
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FUN_14483674a(*(longlong *)(param_1 + 0x858) + 0x1288);
    return;
  }
  return;
}



// FUNCTION 147e3f3a6 FUN_147e3f3a6 body=49 status=ok
// SIG undefined FUN_147e3f3a6(void)

void FUN_147e3f3a6(longlong param_1)

{
  FUN_147997b42();
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FUN_14483674a(*(longlong *)(param_1 + 0x858) + 0x1288);
    return;
  }
  return;
}



// FUNCTION 147e3f3d8 FUN_147e3f3d8 body=95 status=ok
// SIG undefined FUN_147e3f3d8(void)

void FUN_147e3f3d8(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x858) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x858) + 0x1518) == 0)) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_147c46b2a(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3f446 FUN_147e3f446 body=556 status=ok
// SIG undefined FUN_147e3f446(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e3f446(longlong param_1)

{
  char cVar1;
  undefined1 auStack_1f8 [32];
  longlong **local_1d8;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined1 local_a0 [8];
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
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1c8 = (longlong *)0x0;
  uStack_1c0 = 0;
  local_1b8 = _DAT_14cb1c848;
  uStack_1b0 = _DAT_14cb1c850;
  local_1a8 = DAT_14cb1c858;
  local_1a0 = (undefined4)DAT_14cb1c860;
  uStack_19c = DAT_14cb1c860._4_4_;
  uStack_198 = (undefined4)DAT_14cb1c868;
  uStack_194 = DAT_14cb1c868._4_4_;
  local_190 = DAT_14cb1c870;
  local_188 = _DAT_14cb1c848;
  uStack_180 = _DAT_14cb1c850;
  local_178 = DAT_14cb1c858;
  local_170 = (undefined4)DAT_14cb1c860;
  uStack_16c = DAT_14cb1c860._4_4_;
  uStack_168 = (undefined4)DAT_14cb1c868;
  uStack_164 = DAT_14cb1c868._4_4_;
  local_160 = DAT_14cb1c870;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0xffffffff;
  local_140 = _DAT_14cb1c848;
  uStack_138 = _DAT_14cb1c850;
  local_130 = DAT_14cb1c858;
  local_118 = DAT_14cb1c870;
  local_128 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  uStack_120 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  local_100 = DAT_14cb1c858;
  local_110 = _DAT_14cb1c848;
  uStack_108 = _DAT_14cb1c850;
  local_e8 = DAT_14cb1c870;
  local_f8 = (undefined4)DAT_14cb1c860;
  uStack_f4 = DAT_14cb1c860._4_4_;
  uStack_f0 = (undefined4)DAT_14cb1c868;
  uStack_ec = DAT_14cb1c868._4_4_;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  local_b8 = 0xffffffff;
  local_ac = 0;
  local_b4 = 0;
  local_1d8 = &local_1c8;
  FUN_147e3f674(param_1,(undefined4)DAT_14cb1c860,(undefined4)DAT_14cb1c860,local_a0);
  cVar1 = FUN_147e6a218(&local_1c8);
  if (cVar1 != '\0') {
    if ((longlong **)(param_1 + 0x15e8) != &local_1c8) {
      FUN_140f30d7a((longlong **)(param_1 + 0x15e8),&local_1c8);
    }
    if (local_1c8 == (longlong *)0x0) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_28 = 0;
      local_98 = 0x3f80000000000000;
      uStack_90 = 1;
    }
    else {
      (**(code **)(*local_1c8 + 0x30))(local_1c8,&local_98,0,&local_1c8);
    }
    FUN_144aeb1d0(param_1 + 0x1790,&local_98);
    if (((char)local_28 == '\x01') && (local_38 != 0)) {
      FUN_1400020a8();
    }
  }
  FUN_140302978(&local_1c8);
  if ((local_18 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3f674 FUN_147e3f674 body=1144 status=ok
// SIG undefined FUN_147e3f674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e3f674(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_578 [32];
  undefined8 *local_558;
  undefined8 *local_550;
  undefined4 local_548;
  undefined8 local_540;
  undefined1 local_538;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  double local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3a8 [24];
  undefined8 auStack_390 [12];
  undefined1 auStack_330 [24];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 uStack_308;
  undefined4 uStack_307;
  undefined4 uStack_303;
  undefined4 uStack_2ff;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  float local_17c;
  undefined1 local_170 [40];
  undefined1 local_148 [192];
  undefined1 local_88 [16];
  char local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  lVar5 = *(longlong *)(param_1 + 0x14e8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
    uVar3 = FUN_1401b0f18();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (*(longlong **)(lVar5 + 0xd8) != (longlong *)0x0) {
        uVar3 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0xd0))();
        plVar4 = (longlong *)FUN_140f30018(uVar3);
        if (plVar4 != (longlong *)0x0) {
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          uStack_284 = 0;
          uStack_280 = 0;
          uStack_27c = 0x3ff00000;
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_258 = 0;
          uStack_254 = 0x3ff00000;
          uStack_250 = 0;
          uStack_24c = 0x3ff00000;
          local_248 = 0x3ff0000000000000;
          uStack_240 = 0;
          local_418 = 0;
          uStack_410 = 0;
          local_408._0_4_ = 0;
          local_408._4_4_ = 0;
          uStack_400 = 0;
          uStack_3fc = 0x3ff00000;
          local_3f8 = 0;
          uStack_3f0 = 0;
          local_3e8 = 0;
          uStack_3e0 = 0;
          local_3d8 = 0;
          uStack_3d4 = 0x3ff00000;
          uStack_3d0 = 0;
          uStack_3cc = 0x3ff00000;
          local_3c8 = 0x3ff0000000000000;
          uStack_3c0 = 0;
          (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0xd8))
                    (*(longlong **)(lVar5 + 0xd8),&local_4a8);
          local_548 = 2;
          local_558 = &local_418;
          local_550 = &local_298;
          (**(code **)(*plVar4 + 0x30))(plVar4,local_148,param_3,&local_4a8);
          if (local_78 == '\x01') {
            FUN_1446dcdd4(local_170,local_88);
            plVar4 = (longlong *)FUN_140a6b12c(local_170);
            if (plVar4 != (longlong *)0x0) {
              cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
              if (cVar1 != '\0') {
                if ((char)plVar4[3] == '\0') {
                  uVar2 = (**(code **)(*plVar4 + 0x70))(plVar4);
                  *(undefined1 *)(plVar4 + 3) = uVar2;
                }
                FUN_144a75fa0(param_1,&local_298,0);
                uStack_2b0 = local_1c8;
                uStack_2a8 = uStack_1c0;
                local_2c8 = CONCAT44(uStack_27c,uStack_280);
                uStack_2c0 = local_278;
                local_2b8 = uStack_270;
                local_418 = *param_2;
                uStack_410 = param_2[1];
                local_408._0_4_ = *(undefined4 *)(param_2 + 2);
                local_408._4_4_ = *(undefined4 *)((longlong)param_2 + 0x14);
                uStack_400 = *(undefined4 *)(param_2 + 3);
                uStack_3fc = *(undefined4 *)((longlong)param_2 + 0x1c);
                FUN_1448052ee(&local_418,&local_2f8);
                uStack_2e0 = param_2[4];
                uStack_2d8 = param_2[5];
                uStack_2d0 = param_2[6];
                local_2e8 = 0;
                cVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(param_1 + 0x178);
                if (cVar1 != '\0') {
                  local_2f8 = 0;
                }
                local_540 = *(undefined8 *)(param_1 + 0x13c8);
                local_550 = &local_424;
                local_424 = 0xfffffffffffffffe;
                local_41c = 0xffffffff;
                local_558 = &local_248;
                local_488 = uStack_2d8;
                uStack_480 = uStack_2d0;
                local_498 = local_2e8;
                uStack_490 = uStack_2e0;
                local_4a8 = local_2f8;
                local_4a0 = local_2f0;
                local_478 = _DAT_14cb1c848;
                uStack_470 = _DAT_14cb1c850;
                local_468 = DAT_14cb1c858;
                local_460 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
                uStack_458 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
                local_450 = DAT_14cb1c870;
                local_448 = 0;
                uStack_440 = 0;
                local_438 = 0xffffffff;
                local_508 = uStack_2a8;
                local_518 = (undefined4)local_2b8;
                uStack_514 = local_2b8._4_4_;
                uStack_510 = (undefined4)uStack_2b0;
                uStack_50c = uStack_2b0._4_4_;
                local_528 = local_2c8;
                uStack_520 = uStack_2c0;
                local_4f8 = _DAT_14cb1c848;
                uStack_4f0 = _DAT_14cb1c850;
                local_4e8 = DAT_14cb1c858;
                local_4e0 = (undefined4)DAT_14cb1c860;
                uStack_4dc = DAT_14cb1c860._4_4_;
                uStack_4d8 = (undefined4)DAT_14cb1c868;
                uStack_4d4 = DAT_14cb1c868._4_4_;
                local_4d0 = DAT_14cb1c870;
                local_4c8 = 0;
                uStack_4c0 = 0;
                local_4b8 = 0xffffffff;
                local_538 = 0;
                local_548 = 0;
                local_500 = local_1b8 - (double)local_17c;
                FUN_140f30c7e(&local_418,plVar4);
                *param_5 = (undefined4)local_418;
                param_5[1] = local_418._4_4_;
                param_5[2] = (undefined4)uStack_410;
                param_5[3] = uStack_410._4_4_;
                puVar6 = &local_408;
                puVar7 = (undefined8 *)(param_5 + 4);
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                FUN_144a7c4b8(param_5 + 0x1c,local_3a8);
                puVar6 = auStack_390;
                puVar7 = (undefined8 *)(param_5 + 0x22);
                for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                FUN_144a7c4b8(param_5 + 0x3a,auStack_330);
                param_5[0x40] = local_318;
                param_5[0x41] = uStack_314;
                param_5[0x42] = uStack_310;
                param_5[0x43] = uStack_30c;
                *(uint *)((longlong)param_5 + 0x10d) = CONCAT13(uStack_308,uStack_30c._1_3_);
                *(undefined4 *)((longlong)param_5 + 0x111) = uStack_307;
                *(undefined4 *)((longlong)param_5 + 0x115) = uStack_303;
                *(undefined4 *)((longlong)param_5 + 0x119) = uStack_2ff;
                FUN_140302978(&local_418);
                *param_4 = plVar4;
                FUN_144a8db3c(&local_298);
              }
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3faee FUN_147e3faee body=620 status=ok
// SIG undefined FUN_147e3faee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147e3faee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  longlong *local_a0;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_a0 = (longlong *)0x0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = _DAT_14cb1c848;
  uStack_1b0 = _DAT_14cb1c850;
  local_1a8 = DAT_14cb1c858;
  local_1a0 = (undefined4)DAT_14cb1c860;
  uStack_19c = DAT_14cb1c860._4_4_;
  uStack_198 = (undefined4)DAT_14cb1c868;
  uStack_194 = DAT_14cb1c868._4_4_;
  local_190 = DAT_14cb1c870;
  local_188 = _DAT_14cb1c848;
  uStack_180 = _DAT_14cb1c850;
  local_178 = DAT_14cb1c858;
  local_170 = (undefined4)DAT_14cb1c860;
  uStack_16c = DAT_14cb1c860._4_4_;
  uStack_168 = (undefined4)DAT_14cb1c868;
  uStack_164 = DAT_14cb1c868._4_4_;
  local_160 = DAT_14cb1c870;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0xffffffff;
  local_140 = _DAT_14cb1c848;
  uStack_138 = _DAT_14cb1c850;
  local_130 = DAT_14cb1c858;
  local_118 = DAT_14cb1c870;
  local_128 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  uStack_120 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  local_100 = DAT_14cb1c858;
  local_110 = _DAT_14cb1c848;
  uStack_108 = _DAT_14cb1c850;
  local_e8 = DAT_14cb1c870;
  local_f8 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  uStack_f0 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_ac = 0;
  if (*(longlong *)(param_1 + 0x110) == 0) {
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3ff00000;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = 0;
    uStack_4c = 0x3ff00000;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x240);
    puVar3 = local_98;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  local_1d8 = &local_1c8;
  FUN_147e3f674(param_1,local_98,(undefined4)DAT_14cb1c860,&local_a0);
  if (local_a0 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*local_a0 + 0x30))(local_a0,local_98,0,&local_1c8);
    lVar1 = CONCAT44(uStack_84,local_88);
    if ((local_28 == '\x01') && (local_38 != 0)) {
      FUN_1400020a8();
    }
    *param_2 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_140302978(&local_1c8);
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3fd8c FUN_147e3fd8c body=79 status=ok
// SIG undefined FUN_147e3fd8c(void)

uint FUN_147e3fd8c(ulonglong *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  return (uVar1 >> 2) + uVar1 * 0x40 + (int)(*(float *)(param_1 + 1) * 100.0) + 0x9e3779b9 ^ uVar1;
}



// FUNCTION 147e3fddc FUN_147e3fddc body=63 status=ok
// SIG undefined FUN_147e3fddc(void)

void FUN_147e3fddc(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_147e3fe1c();
    FUN_147e4014a(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) < 0) {
      FUN_147e451ba(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 147e3fe1c FUN_147e3fe1c body=812 status=ok
// SIG undefined FUN_147e3fe1c(void)

void FUN_147e3fe1c(longlong *param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1d8 [104];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong local_f8;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x800000000;
  local_1f8 = FUN_14479d2ce(*param_1 + 8);
  FUN_1438026c2(local_120,&DAT_14cb1cfb0);
  local_138 = local_118;
  local_130 = local_110;
  LOCK();
  *(int *)(local_110 + 0x38) = *(int *)(local_110 + 0x38) + 1;
  UNLOCK();
  local_128 = local_108;
  local_200 = local_f8;
  LOCK();
  *(int *)(local_f8 + 0x38) = *(int *)(local_f8 + 0x38) + 1;
  UNLOCK();
  if (local_118 != local_100) {
    do {
      uVar2 = local_138[2];
      FUN_1406a930a(uVar2,&local_1f8);
      local_d8 = local_1e8 ^ 0x8000000000000000;
      local_e8 = local_1f8 ^ 0x8000000000000000;
      uStack_e0 = uStack_1f0 ^ 0x8000000000000000;
      local_c0 = local_1e8;
      local_d0 = local_1f8;
      uStack_c8 = uStack_1f0;
      local_b8 = 1;
      FUN_144a1c3a2(&local_e8,&local_170,local_1d8);
      if ((longlong)(int)param_1[2] != 0) {
        lVar6 = param_1[1];
        lVar5 = 0;
        do {
          if (((((*(uint *)(lVar6 + 0x38 + lVar5) & 0xfffffffd) == 0) &&
               (*(double *)(lVar6 + lVar5) <= local_158)) &&
              (pdVar1 = (double *)(lVar6 + 0x18 + lVar5),
              local_170 < *pdVar1 || local_170 == *pdVar1)) &&
             (((*(double *)(lVar6 + 8 + lVar5) <= local_150 &&
               (pdVar1 = (double *)(lVar6 + 0x20 + lVar5),
               local_168 < *pdVar1 || local_168 == *pdVar1)) &&
              ((*(double *)(lVar6 + 0x10 + lVar5) <= local_148 &&
               (pdVar1 = (double *)(lVar6 + 0x28 + lVar5),
               local_160 < *pdVar1 || local_160 == *pdVar1)))))) {
            lVar6 = (longlong)(int)local_68;
            uVar3 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,uVar3);
            if (local_68._4_4_ < uVar3) {
              local_208 = lVar6;
              FUN_147e451ea(local_b0,lVar6);
              lVar6 = local_208;
            }
            puVar4 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar4 = local_b0;
            }
            *(undefined8 *)(puVar4 + lVar6 * 8) = uVar2;
            break;
          }
          lVar5 = lVar5 + 0x40;
        } while ((longlong)(int)param_1[2] * 0x40 != lVar5);
      }
      local_138 = (undefined8 *)FUN_144b2e940(*local_138);
      FUN_144b2e9ba(&local_138);
    } while (local_138 != local_100);
  }
  LOCK();
  *(int *)(local_200 + 0x38) = *(int *)(local_200 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_130 + 0x38) = *(int *)(local_130 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_f8 + 0x38) = *(int *)(local_f8 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_110 + 0x38) = *(int *)(local_110 + 0x38) + -1;
  UNLOCK();
  lVar6 = (longlong)(int)local_68;
  if (lVar6 != 0) {
    puVar4 = local_b0;
    if (local_70 != (undefined1 *)0x0) {
      puVar4 = local_70;
    }
    lVar5 = 0;
    do {
      FUN_143813148(*(undefined8 *)(puVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e4014a FUN_147e4014a body=794 status=ok
// SIG undefined FUN_147e4014a(void)

void FUN_147e4014a(longlong *param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1d8 [104];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong local_f8;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x800000000;
  local_1f8 = FUN_14479d2ce(*param_1 + 8);
  FUN_14380284a(local_120);
  local_138 = local_118;
  local_130 = local_110;
  LOCK();
  *(int *)(local_110 + 0x38) = *(int *)(local_110 + 0x38) + 1;
  UNLOCK();
  local_128 = local_108;
  local_200 = local_f8;
  LOCK();
  *(int *)(local_f8 + 0x38) = *(int *)(local_f8 + 0x38) + 1;
  UNLOCK();
  if (local_118 != local_100) {
    do {
      puVar3 = local_138;
      uVar2 = local_138[2];
      FUN_1406a930a(uVar2,&local_1f8);
      local_d8 = local_1e8 ^ 0x8000000000000000;
      local_e8 = local_1f8 ^ 0x8000000000000000;
      uStack_e0 = uStack_1f0 ^ 0x8000000000000000;
      local_c0 = local_1e8;
      local_d0 = local_1f8;
      uStack_c8 = uStack_1f0;
      local_b8 = 1;
      FUN_144a1c3a2(&local_e8,&local_170,local_1d8);
      if ((longlong)(int)param_1[2] != 0) {
        lVar7 = param_1[1];
        lVar6 = 0;
        do {
          if ((((*(int *)(lVar7 + 0x38 + lVar6) - 1U < 2) &&
               (*(double *)(lVar7 + lVar6) <= local_158)) &&
              (pdVar1 = (double *)(lVar7 + 0x18 + lVar6),
              local_170 < *pdVar1 || local_170 == *pdVar1)) &&
             (((*(double *)(lVar7 + 8 + lVar6) <= local_150 &&
               (pdVar1 = (double *)(lVar7 + 0x20 + lVar6),
               local_168 < *pdVar1 || local_168 == *pdVar1)) &&
              ((*(double *)(lVar7 + 0x10 + lVar6) <= local_148 &&
               (pdVar1 = (double *)(lVar7 + 0x28 + lVar6),
               local_160 < *pdVar1 || local_160 == *pdVar1)))))) {
            lVar7 = (longlong)(int)local_68;
            uVar4 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,uVar4);
            if (local_68._4_4_ < uVar4) {
              local_208 = lVar7;
              FUN_147e452de(local_b0,lVar7);
              lVar7 = local_208;
            }
            puVar5 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar5 = local_b0;
            }
            *(undefined8 *)(puVar5 + lVar7 * 8) = uVar2;
            break;
          }
          lVar6 = lVar6 + 0x40;
        } while ((longlong)(int)param_1[2] * 0x40 != lVar6);
      }
      local_138 = (undefined8 *)FUN_1438029ea(*puVar3);
      FUN_143802a64(&local_138);
    } while (local_138 != local_100);
  }
  LOCK();
  *(int *)(local_200 + 0x38) = *(int *)(local_200 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_130 + 0x38) = *(int *)(local_130 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_f8 + 0x38) = *(int *)(local_f8 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_110 + 0x38) = *(int *)(local_110 + 0x38) + -1;
  UNLOCK();
  lVar7 = (longlong)(int)local_68;
  if (lVar7 != 0) {
    puVar5 = local_b0;
    if (local_70 != (undefined1 *)0x0) {
      puVar5 = local_70;
    }
    lVar6 = 0;
    do {
      FUN_143813204(*(undefined8 *)(puVar5 + lVar6));
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e40466 FUN_147e40466 body=9 status=ok
// SIG undefined FUN_147e40466(void)

void FUN_147e40466(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x28) = param_2 + 1;
  return;
}



// FUNCTION 147e4046f FUN_147e4046f body=723 status=ok
// SIG undefined FUN_147e4046f(void)

double * FUN_147e4046f(double *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined6 uStack_b6;
  char local_b0;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    dVar2 = (param_3[4] - param_3[1]) * 0.5;
    dVar1 = (param_3[3] - *param_3) * 0.5;
    dStack_110 = param_3[1] + dVar2;
    local_118 = *param_3 + dVar1;
    local_108 = 0;
    local_bc = 0;
    local_b8 = 0x101;
    local_90 = 0;
    local_88 = 0x800000000;
    local_70 = 0;
    local_68 = 0x400000000;
    local_d0 = 0;
    local_c4 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_cf = 1;
    uStack_cd = 0;
    local_c0 = 0;
    uStack_cc = 0x1000000;
    local_c8 = 1;
    FUN_1446f470e(&local_e0,L"CalcGeoBoundsForNav",1);
    uStack_d8 = *(undefined8 *)(param_2 + 0x18);
    FUN_140bfa850();
    fStack_120 = (float)dVar2;
    fStack_124 = (float)dVar1;
    local_140 = &local_128;
    local_128 = 1;
    uStack_11c = 0x54800000;
    local_130 = &DAT_14cad0f10;
    local_148 = 2;
    local_138 = &local_e0;
    FUN_14052f48a(param_2,&local_f8,&local_118,&DAT_14c8463d0);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_f0 == 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    else {
      local_118 = *param_3;
      dStack_110 = param_3[1];
      local_128 = *(undefined4 *)(param_3 + 3);
      fStack_124 = *(float *)((longlong)param_3 + 0x1c);
      fStack_120 = *(float *)(param_3 + 4);
      uStack_11c = *(undefined4 *)((longlong)param_3 + 0x24);
      dVar1 = param_3[6];
      lVar7 = (longlong)(int)uStack_f0 * 0x48;
      lVar6 = local_f8 + 0x20;
      uVar8 = 0;
      uVar9 = 0xc2900000;
      uVar10 = 0;
      uVar11 = 0x42900000;
      bVar5 = false;
      do {
        lVar4 = FUN_14479d2ce(lVar6);
        if ((lVar4 != 0) &&
           ((**(code **)(*(longlong *)(lVar4 + 0x2a8) + 0x18))(lVar4 + 0x2a8,&local_e0),
           local_b0 != '\0')) {
          uVar3 = CONCAT13(uStack_cd,CONCAT21(uStack_cf,local_d0));
          if ((double)CONCAT44(uStack_cc,uVar3) <= (double)CONCAT44(uVar11,uVar10)) {
            uVar10 = uVar3;
            uVar11 = uStack_cc;
          }
          if ((double)CONCAT44(uVar9,uVar8) <= (double)CONCAT62(uStack_b6,local_b8)) {
            uVar8 = (undefined4)CONCAT62(uStack_b6,local_b8);
            uVar9 = (undefined4)((uint6)uStack_b6 >> 0x10);
          }
          bVar5 = true;
        }
        lVar6 = lVar6 + 0x48;
        lVar7 = lVar7 + -0x48;
      } while (lVar7 != 0);
      if (bVar5) {
        *param_1 = local_118;
        param_1[1] = dStack_110;
        param_1[2] = (double)CONCAT44(uVar11,uVar10);
        *(undefined4 *)(param_1 + 3) = local_128;
        *(float *)((longlong)param_1 + 0x1c) = fStack_124;
        *(float *)(param_1 + 4) = fStack_120;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_11c;
        param_1[5] = (double)CONCAT44(uVar9,uVar8);
        param_1[6] = dVar1;
      }
      *(bool *)(param_1 + 7) = bVar5;
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e40743 FUN_147e40743 body=719 status=ok
// SIG undefined FUN_147e40743(void)

undefined8 * FUN_147e40743(undefined8 *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  double *pdVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  undefined1 auStack_d8 [40];
  double *local_b0;
  undefined8 *local_a8;
  int local_9c;
  longlong local_98;
  double *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    local_a8 = param_1;
    local_98 = param_2;
    local_50 = param_2;
    FUN_147e453d2(local_88);
    lVar7 = local_60;
    lVar17 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    plVar13 = local_80;
LAB_147e407f1:
    if (plVar13 != local_68) {
      puVar3 = (undefined8 *)plVar13[2];
      cVar8 = FUN_144729dda(puVar3 + 5);
      if (cVar8 != '\0') {
        plVar4 = (longlong *)*puVar3;
        (**(code **)(*plVar4 + 8))(plVar4,local_a8);
      }
      do {
        plVar13 = (longlong *)*plVar13;
        if (plVar13 == (longlong *)0x0) break;
        lVar11 = FUN_147e47e4e(plVar13[2]);
      } while (lVar11 != *local_70);
      goto LAB_147e407f1;
    }
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
    uVar2 = *(uint *)(local_a8 + 1);
    uVar18 = (ulonglong)(int)uVar2;
    param_1 = local_a8;
    if (uVar18 != 0) {
      local_b0 = (double *)*local_a8;
      dVar1 = *local_b0;
      bVar10 = 1;
      if ((((*param_3 <= dVar1 && dVar1 != *param_3) && (dVar1 < param_3[3])) &&
          (dVar1 = local_b0[1], param_3[1] <= dVar1 && dVar1 != param_3[1])) &&
         (((dVar1 < param_3[4] && (dVar1 = local_b0[2], param_3[2] <= dVar1 && dVar1 != param_3[2]))
          && (dVar1 < param_3[5])))) {
        bVar10 = FUN_147e3f050(local_98,local_b0);
      }
      pdVar12 = local_b0 + 3;
      iVar15 = 0;
      uVar16 = 0;
      local_90 = pdVar12;
LAB_147e408d6:
      do {
        iVar6 = (int)uVar16;
        uVar16 = (ulonglong)(iVar6 + 1U);
        lVar17 = (longlong)iVar6;
        if ((int)(iVar6 + 1U) < (int)uVar2) {
          uVar16 = lVar17 + 1;
          pdVar19 = pdVar12 + lVar17 * 3;
          bVar5 = true;
          do {
            dVar1 = *pdVar19;
            if (((dVar1 < *param_3 || dVar1 == *param_3) || (param_3[3] <= dVar1)) ||
               ((dVar1 = pdVar19[1], dVar1 < param_3[1] || dVar1 == param_3[1] ||
                (((param_3[4] <= dVar1 ||
                  (dVar1 = pdVar19[2], dVar1 < param_3[2] || dVar1 == param_3[2])) ||
                 (param_3[5] <= dVar1)))))) {
              if ((bVar10 & 1) == 0) goto LAB_147e409a1;
            }
            else {
              local_9c = iVar15;
              bVar9 = FUN_147e3f050(local_98,pdVar19);
              pdVar12 = local_90;
              iVar15 = local_9c;
              if (((bVar9 ^ bVar10) & 1) != 0) goto LAB_147e40983;
            }
            uVar16 = uVar16 + 1;
            bVar5 = (longlong)uVar16 < (longlong)uVar18;
            pdVar19 = pdVar19 + 3;
          } while (uVar18 != uVar16);
          uVar16 = (ulonglong)uVar2;
LAB_147e40983:
          if ((bVar10 & 1) != 0) {
            bVar10 = 0;
            if (!bVar5) break;
            goto LAB_147e408d6;
          }
        }
        else {
          if ((bVar10 & 1) != 0) break;
          bVar5 = false;
        }
LAB_147e409a1:
        iVar14 = (int)uVar16 - iVar6;
        if (iVar15 != iVar6) {
          memmove(local_b0 + (longlong)iVar15 * 3,local_b0 + lVar17 * 3,(longlong)iVar14 * 0x18);
          pdVar12 = local_90;
        }
        iVar15 = iVar15 + iVar14;
        bVar10 = 1;
      } while (bVar5);
      *(int *)(local_a8 + 1) = iVar15;
      param_1 = local_a8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e40a13 FUN_147e40a13 body=407 status=ok
// SIG undefined FUN_147e40a13(void)

longlong * FUN_147e40a13(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_2e8 [40];
  longlong local_2c0;
  undefined8 *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [8];
  undefined8 *local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 *local_280;
  longlong local_278;
  longlong local_268 [34];
  char local_158;
  undefined1 local_148 [240];
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1437fd7f6(local_148);
  if (local_58 == '\x01') {
    local_268[0] = *(longlong *)(param_2 + 0xb0);
    if (local_268[0] == 0) {
      local_268[0] = FUN_1448abda6(param_2);
    }
    FUN_14380284a(local_2a0);
    local_2b8 = local_298;
    local_2b0 = local_290;
    LOCK();
    *(int *)(local_290 + 0x38) = *(int *)(local_290 + 0x38) + 1;
    UNLOCK();
    local_2a8 = local_288;
    local_2c0 = local_278;
    LOCK();
    *(int *)(local_278 + 0x38) = *(int *)(local_278 + 0x38) + 1;
    UNLOCK();
    if (local_298 != local_280) {
      do {
        puVar2 = local_2b8;
        if ((local_2b8[2] != param_2) && (FUN_1437fdf9a(local_268,local_148), local_158 == '\x01'))
        {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_147e45492(param_1,iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 0x110 + *param_1),local_268,0x110);
        }
        local_2b8 = (undefined8 *)FUN_1438029ea(*puVar2);
        FUN_143802a64(&local_2b8);
      } while (local_2b8 != local_280);
    }
    LOCK();
    *(int *)(local_2c0 + 0x38) = *(int *)(local_2c0 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_2b0 + 0x38) = *(int *)(local_2b0 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_278 + 0x38) = *(int *)(local_278 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_290 + 0x38) = *(int *)(local_290 + 0x38) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e40bab FUN_147e40bab body=973 status=ok
// SIG undefined FUN_147e40bab(void)

undefined8 FUN_147e40bab(double *param_1,undefined8 *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188 [6];
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
  double local_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pdVar6 = (double *)*param_2;
    pdVar8 = pdVar6 + (longlong)*(int *)(param_2 + 1) * 0x22;
    local_188[1] = param_1[5];
    local_188[0] = *param_1;
    local_190 = param_1[1];
    local_198 = param_1[2];
    local_1a0 = param_1[4];
    local_1a8 = param_1[3];
    do {
      if ((param_3 & ~*(uint *)(pdVar6 + 0x20)) == 0) {
        local_188[4] = param_1[2];
        local_188[2] = *param_1;
        local_188[3] = param_1[1];
        local_188[5] = local_188[0];
        local_158 = local_190;
        local_150 = local_188[1];
        local_148 = local_188[0];
        local_140 = local_1a0;
        local_138 = local_198;
        local_130 = local_1a8;
        local_128 = local_190;
        local_120 = local_198;
        local_118 = local_1a8;
        local_110 = local_1a0;
        local_108 = local_198;
        local_100 = local_1a8;
        local_f8 = local_190;
        local_f0 = local_188[1];
        local_e8 = local_188[0];
        local_e0 = local_1a0;
        local_d8 = local_188[1];
        local_c0 = param_1[5];
        local_d0 = param_1[3];
        dStack_c8 = param_1[4];
        dVar3 = pdVar6[0x16];
        dVar1 = pdVar6[0x17];
        dVar4 = pdVar6[0x14];
        dVar5 = pdVar6[0x15];
        lVar9 = 0x10;
        while( true ) {
          dVar10 = *(double *)((longlong)local_188 + lVar9) * pdVar6[0x1c];
          dVar11 = *(double *)((longlong)local_188 + lVar9 + 8) * pdVar6[0x1d];
          dVar2 = *(double *)((longlong)local_188 + lVar9 + 0x10) * pdVar6[0x1e];
          dVar12 = dVar11 * dVar4 - dVar5 * dVar10;
          dVar13 = dVar2 * dVar5 - dVar3 * dVar11;
          dVar14 = dVar10 * dVar3 - dVar4 * dVar2;
          dVar13 = dVar13 + dVar13;
          dVar14 = dVar14 + dVar14;
          dVar12 = dVar12 + dVar12;
          dVar10 = (dVar12 * dVar5 - dVar14 * dVar3) + dVar1 * dVar13 + dVar10 + pdVar6[0x18];
          dVar11 = (dVar3 * dVar13 - dVar4 * dVar12) + pdVar6[0x17] * dVar14 + dVar11 + pdVar6[0x19]
          ;
          if ((((dVar10 < *pdVar6) || (pdVar6[3] < dVar10)) || (dVar11 < pdVar6[1])) ||
             (pdVar6[4] < dVar11)) break;
          dVar2 = dVar2 + dVar12 * dVar1 + (dVar14 * dVar4 - dVar13 * dVar5) + pdVar6[0x1a];
          if ((dVar2 < pdVar6[2]) || (pdVar6[5] < dVar2)) break;
          lVar9 = lVar9 + 0x18;
          if (lVar9 == 0xd0) {
            uVar7 = CONCAT71((int7)((ulonglong)pdVar6 >> 8),1);
            goto LAB_147e40efb;
          }
        }
      }
      pdVar6 = pdVar6 + 0x22;
    } while (pdVar6 != pdVar8);
  }
  uVar7 = 0;
LAB_147e40efb:
  if ((DAT_14c707940 ^ (ulonglong)auStack_1c8 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e40f79 FUN_147e40f79 body=556 status=ok
// SIG undefined FUN_147e40f79(void)

void FUN_147e40f79(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [56];
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1406a930a(param_1,&local_d8);
  local_100 = -local_c8;
  local_110 = -local_d8;
  dStack_108 = -dStack_d0;
  local_f8 = local_d8;
  dStack_f0 = dStack_d0;
  local_e8 = local_c8;
  local_e0 = 1;
  FUN_144a1c3a2(&local_110,local_148,&local_b8);
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  FUN_147e4046f(&local_d8,lVar4,local_148);
  if (local_a0 == '\x01') {
    local_c8 = local_c8 + -1000.0;
    local_b0 = local_b0 + 1000.0;
    dVar1 = (local_b0 - local_c8) * 0.5;
    dVar2 = (local_b8 - dStack_d0) * 0.5;
    dVar3 = (local_c0 - local_d8) * 0.5;
    local_100 = local_c8 + dVar1;
    dStack_108 = dStack_d0 + dVar2;
    local_110 = local_d8 + dVar3;
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (lVar4 != 0) {
      lVar5 = FUN_140cee6b8();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        local_168 = 0;
        FUN_1413dd462(lVar4,&local_110,0,0);
        if (*(longlong *)(lVar4 + 0x398) != 0) {
          local_150 = dVar1 * 0.05;
          local_158 = dVar2 * 0.05;
          local_160 = dVar3 * 0.05;
          FUN_140c9cc04(*(longlong *)(lVar4 + 0x398),&local_160,1);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e411a6 FUN_147e411a6 body=665 status=ok
// SIG undefined FUN_147e411a6(void)

void FUN_147e411a6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [56];
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
      (*(longlong *)(lVar5 + 0x30) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0), lVar5 != 0)) {
    lVar4 = FUN_140f08004();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_1406a930a(param_1,&local_d8);
      local_100 = -local_c8;
      local_110 = -local_d8;
      dStack_108 = -dStack_d0;
      local_f8 = local_d8;
      dStack_f0 = dStack_d0;
      local_e8 = local_c8;
      local_e0 = 1;
      FUN_144a1c3a2(&local_110,local_148,&local_b8);
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_1);
      }
      FUN_147e4046f(&local_d8,lVar4,local_148);
      if (local_a0 == '\x01') {
        local_b0 = *(double *)(lVar5 + 0x650) + 1000.0 + local_b0;
        local_c8 = local_c8 + -1000.0;
        dVar1 = (local_b0 - local_c8) * 0.5;
        dVar2 = (local_b8 - dStack_d0) * 0.5;
        dVar3 = (local_c0 - local_d8) * 0.5;
        local_100 = local_c8 + dVar1;
        dStack_108 = dStack_d0 + dVar2;
        local_110 = local_d8 + dVar3;
        lVar5 = *(longlong *)(param_1 + 0xa8);
        if (lVar5 != 0) {
          lVar4 = FUN_145a743fa();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            local_168 = 0;
            FUN_1413dd462(lVar5,&local_110,0,0);
            if (*(longlong *)(lVar5 + 0x398) != 0) {
              local_150 = dVar1 * 0.05;
              local_158 = dVar2 * 0.05;
              local_160 = dVar3 * 0.05;
              FUN_140c9cc04(*(longlong *)(lVar5 + 0x398),&local_160,1);
            }
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e41440 FUN_147e41440 body=2058 status=ok
// SIG undefined FUN_147e41440(void)

void FUN_147e41440(undefined1 *param_1,longlong param_2,double *param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar15;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined4 *local_270;
  undefined8 *local_268;
  undefined1 *local_258;
  ulonglong local_250;
  longlong local_248;
  undefined8 uStack_240;
  longlong *local_238;
  undefined8 local_230;
  undefined1 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_20c [4];
  longlong local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8 [2];
  undefined1 local_198 [16];
  undefined8 local_188;
  int local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_248 = 0;
  uStack_240 = 0;
  iVar7 = 0;
  if (((param_2 != 0) && (param_5 != 0)) && (*(char *)(param_3 + 6) != '\0')) {
    uVar2 = *param_1;
    lVar10 = FUN_14019257c(param_2);
    iVar7 = 0;
    if (lVar10 != 0) {
      local_258 = (undefined1 *)CONCAT71(local_258._1_7_,uVar2);
      dVar3 = (param_3[5] - param_3[2]) * 0.5;
      dVar4 = (param_3[4] - param_3[1]) * 0.5;
      dVar5 = (param_3[3] - *param_3) * 0.5;
      local_1d0 = param_3[2] + dVar3;
      local_1d8 = param_3[1] + dVar4;
      local_1e0 = *param_3 + dVar5;
      plVar20 = (longlong *)0x0;
      local_dc = 0;
      local_d8 = 0x101;
      local_b0 = 0;
      local_a8 = 0x800000000;
      local_90 = 0;
      local_88 = 0x400000000;
      local_f0 = 0;
      local_e4 = 0;
      local_ef = 1;
      local_ed = 0;
      local_e0 = 0;
      local_ec = 0x1000000;
      local_e8 = 1;
      local_100 = DAT_14cb1cd18;
      local_f8 = *(undefined8 *)(param_2 + 0x18);
      puVar11 = (undefined4 *)FUN_140bfa850();
      local_1e8 = *puVar11;
      local_278 = &local_1e8;
      local_1e4 = 0;
      local_1ec = (float)dVar3;
      local_1f0 = (float)dVar4;
      local_1f4 = (float)dVar5;
      local_270 = &local_1f8;
      local_1f8 = 1;
      local_208 = 0;
      uStack_200 = 0;
      local_268 = &local_100;
      FUN_1417bb7cc(param_2,&local_208,&local_1e0,&DAT_14c8463d0);
      if (*(longlong *)(param_5 + 0xa8) != 0) {
        plVar18 = *(longlong **)(*(longlong *)(param_5 + 0xa8) + 0x1c8);
        if (plVar18 == (longlong *)0x0) {
          plVar20 = (longlong *)0x0;
        }
        else {
          do {
            plVar20 = plVar18;
            plVar18 = (longlong *)plVar20[0x24];
          } while ((longlong *)plVar20[0x24] != (longlong *)0x0);
        }
      }
      iVar7 = FUN_147e41c4c(plVar20);
      plVar18 = (longlong *)0x0;
      if (iVar7 == 2) {
        plVar18 = plVar20;
      }
      local_250 = 0;
      if (plVar20[0x15] != 0) {
        local_250 = FUN_14477b890(lVar10);
      }
      local_138 = 0;
      local_130 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = (undefined1 *)0x0;
      local_110 = 0;
      local_188 = 0;
      local_180 = 0;
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      local_17c = 0xffffffff00000080;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      if ((longlong)(int)uStack_200 == 0) {
        local_1c8 = 0x100000000;
        local_1b8 = 0xffffffff;
        local_1b0 = 0;
        iVar7 = 0;
        local_1c0 = local_198;
      }
      else {
        lVar19 = local_208 + (longlong)(int)uStack_200 * 0x48;
        lVar21 = local_208;
        do {
          local_238 = (longlong *)FUN_14479d2ce(lVar21 + 0x20);
          if ((local_238 != (longlong *)0x0) &&
             (((lVar12 = FUN_14485cccc(lVar21), lVar12 == 0 || ((*(uint *)(lVar12 + 8) & 0x40) == 0)
               ) || (lVar13 = FUN_14477b890(lVar10,lVar12), lVar13 != 0)))) {
            if (plVar18 == (longlong *)0x0) {
              iVar7 = FUN_147e41c4c();
              if (iVar7 != 2) {
LAB_147e41aa5:
                if (((lVar12 == 0) || (uVar14 = FUN_14477b890(lVar10,lVar12), uVar14 == 0)) ||
                   (uVar14 == local_250)) {
LAB_147e41b7d:
                  FUN_1401f7bd6(&local_1c8,local_238 + 0x82);
                  uVar9 = (uint)local_1c8;
                  bVar15 = local_1c8._1_1_;
                  if (((uVar9 >> 0xd & 1) != 0) && ((char)local_258 != '\0')) {
                    bVar15 = 1;
                    local_1c8 = local_1c8 & 0xfffffffffffff0ff | 0x100;
                  }
                  if (1 < (byte)((bVar15 & 0xf) - 3)) {
                    FUN_1409e9912(local_1a8,local_20c,&local_238,0);
                  }
                }
                else if ((int)uStack_150 != local_124) {
                  uVar9 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
                  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                  puVar17 = local_118;
                  if (local_118 == (undefined1 *)0x0) {
                    puVar17 = local_120;
                  }
                  iVar7 = *(int *)(puVar17 +
                                  (ulonglong)(local_110 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
                  while (iVar7 != -1) {
                    puVar1 = (ulonglong *)(local_158 + (longlong)iVar7 * 0x18);
                    if (*puVar1 == uVar14) {
                      if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
                         ((char)puVar1[1] == '\x01')) goto LAB_147e41b7d;
                      break;
                    }
                    iVar7 = (int)puVar1[2];
                  }
                }
              }
            }
            else {
              plVar20 = local_238;
              if (local_238 != (longlong *)0x0) {
                do {
                  plVar16 = plVar20;
                  plVar20 = (longlong *)plVar16[0x24];
                } while (plVar20 != (longlong *)0x0);
                if (plVar16 == plVar18) goto LAB_147e41aa5;
              }
            }
          }
          lVar21 = lVar21 + 0x48;
        } while (lVar21 != lVar19);
        local_1c8 = 0x100000000;
        local_1b8 = 0xffffffff;
        local_1b0 = 0;
        iVar7 = 0;
        local_1c0 = local_198;
        if (local_180 != 0) {
          FUN_1449c0562(&local_1c8);
          iVar7 = local_180;
        }
      }
      puVar17 = local_198;
      local_220 = local_1b8;
      uVar6 = local_220;
      local_218 = local_1b0;
      local_214 = local_1ac;
      local_230 = local_1c8;
      local_228 = local_1c0;
      local_220._4_4_ = (int)((ulonglong)local_1b8 >> 0x20);
      local_238 = local_1a8;
      if ((local_220._4_4_ != iVar7) || (local_1c0 != puVar17)) {
        iVar8 = local_220._4_4_;
        local_258 = puVar17;
        local_220 = uVar6;
        do {
          lVar10 = *(longlong *)(*local_238 + (longlong)iVar8 * 0x10);
          if (lVar10 == 0) {
LAB_147e41925:
            uVar14 = uStack_240;
            lVar19 = (longlong)(int)uStack_240;
            uVar9 = (int)uStack_240 + 1;
            uStack_240 = CONCAT44(uStack_240._4_4_,uVar9);
            if (uStack_240._4_4_ < uVar9) {
              FUN_1405a36b0(&local_248,uVar14 & 0xffffffff);
            }
            *(longlong *)(local_248 + lVar19 * 8) = lVar10 + 0x410;
          }
          else {
            lVar19 = FUN_144a80466();
            uVar14 = uStack_240;
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar19 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar19 + 0x38) * 8) != lVar19 + 0x30)) goto LAB_147e41925;
            uVar9 = *(uint *)(lVar10 + 0x840);
            if ((longlong)(int)uVar9 != 0) {
              iVar8 = (int)uStack_240;
              lVar19 = (longlong)(int)uStack_240;
              uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + uVar9);
              if (uStack_240._4_4_ - iVar8 < uVar9) {
                FUN_1405a36b0(&local_248,uVar14 & 0xffffffff);
              }
              memcpy((void *)(lVar19 * 8 + local_248),*(void **)(lVar10 + 0x838),
                     (longlong)(int)uVar9 << 3);
              puVar17 = local_258;
            }
          }
          local_220 = CONCAT44(local_220._4_4_,(uint)local_220 & ~local_230._4_4_);
          FUN_1449c0562(&local_230);
          iVar8 = local_220._4_4_;
          uVar6 = local_220;
        } while (local_238 != local_1a8 || (local_228 != puVar17 || local_220._4_4_ != iVar7));
      }
      local_220 = uVar6;
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_141361a2c(local_1a8);
      local_110 = 0;
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_147e43d1a(&local_158);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      iVar7 = (int)uStack_240;
      if ((int)uStack_240 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((int)uStack_240);
      }
    }
  }
  if (*(int *)(param_1 + 0x14) < iVar7) {
    FUN_147e456f6(param_1 + 8,iVar7);
    iVar7 = (int)uStack_240;
  }
  lVar10 = local_248;
  if (iVar7 != 0) {
    lVar19 = 0;
    do {
      FUN_140d508bc(param_1,*(undefined8 *)(lVar10 + lVar19),param_4,0);
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar7 * 8 != lVar19);
  }
  if (local_248 != 0) {
    FUN_1400020a8(local_248);
  }
  if ((local_80 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e41c4c FUN_147e41c4c body=189 status=ok
// SIG undefined FUN_147e41c4c(void)

char FUN_147e41c4c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    cVar1 = '\0';
  }
  else {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      if ((*(longlong *)(param_1 + 0xa8) == 0) ||
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar2 == 0)) {
        lVar3 = 0;
      }
      else {
        do {
          lVar3 = lVar2;
          lVar2 = *(longlong *)(lVar3 + 0x120);
        } while (*(longlong *)(lVar3 + 0x120) != 0);
      }
      if (lVar3 != 0) {
        param_1 = lVar3;
      }
      cVar1 = *(char *)(param_1 + 0x1fb);
    }
    else {
      FUN_147ad4f68(local_20,param_1);
      cVar1 = FUN_147ad4fda(local_20);
      cVar1 = (cVar1 == '\x01') * '\x02';
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1;
}



// FUNCTION 147e41d0a FUN_147e41d0a body=129 status=ok
// SIG undefined FUN_147e41d0a(void)

void FUN_147e41d0a(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)(param_1 + 0x29) = 0x101;
  local_30 = *(undefined8 *)(param_2 + 4);
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  local_48 = 0;
  local_28 = 0x18;
  local_20 = 5;
  local_18 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  FUN_1403719a4(param_1 + 0x30,&local_48);
  FUN_144a2da94(&local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e41d8c FUN_147e41d8c body=201 status=ok
// SIG undefined FUN_147e41d8c(void)

undefined1 * FUN_147e41d8c(undefined1 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  uVar3 = DAT_14cb1c868._4_4_;
  uVar2 = (undefined4)DAT_14cb1c868;
  uVar1 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = DAT_14cb1c870;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_14158b53a(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *param_1 = 0;
  local_48 = param_2;
  FUN_14485c47a(param_1 + 0x20,param_2);
  FUN_1405b7cc6(&local_58,&local_48);
  *(undefined4 *)(param_1 + 0x30) = local_58;
  *(undefined4 *)(param_1 + 0x34) = uStack_54;
  *(undefined4 *)(param_1 + 0x38) = uStack_50;
  *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e41e56 FUN_147e41e56 body=183 status=ok
// SIG undefined FUN_147e41e56(void)

undefined8 * FUN_147e41e56(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140298f1c(param_2,param_1);
  lVar2 = FUN_140612f46(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a6c4d8();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) &&
        (lVar2 = FUN_144a79cc8(lVar2), lVar2 != 0 && *(longlong *)(param_3 + 0xa8) != 0)) &&
       (lVar3 = FUN_144a79cc8(), lVar3 == lVar2)) {
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)((longlong)param_2 + 0x24) < 0) {
    FUN_1446f8c06(param_2 + 3,0);
  }
  puVar1 = (undefined2 *)param_2[3];
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return param_2;
}



// FUNCTION 147e41f0e FUN_147e41f0e body=22 status=ok
// SIG undefined FUN_147e41f0e(void)

undefined8 FUN_147e41f0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x410);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x658));
  }
  return 0;
}



// FUNCTION 147e41f24 FUN_147e41f24 body=7 status=ok
// SIG undefined FUN_147e41f24(void)

undefined1 FUN_147e41f24(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x658);
}



// FUNCTION 147e41f2c FUN_147e41f2c body=32 status=ok
// SIG undefined FUN_147e41f2c(void)

void FUN_147e41f2c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x410);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x658) != param_2)) {
    *(char *)(lVar1 + 0x658) = param_2;
    FUN_147e420e8();
    return;
  }
  return;
}



// FUNCTION 147e41f4c FUN_147e41f4c body=20 status=ok
// SIG undefined FUN_147e41f4c(void)

void FUN_147e41f4c(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x658) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x658) = param_2;
  FUN_147e420e8();
  return;
}



// FUNCTION 147e41f60 FUN_147e41f60 body=249 status=ok
// SIG undefined FUN_147e41f60(void)

double * FUN_147e41f60(longlong param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x528))(plVar1,&local_88,plVar1 + 0x48);
    *param_2 = local_88 - local_70;
    param_2[1] = local_80 - local_68;
    param_2[2] = local_78 - local_60;
    param_2[3] = local_88 + local_70;
    param_2[4] = local_80 + local_68;
    param_2[5] = local_78 + local_60;
  }
  *(bool *)(param_2 + 6) = plVar1 != (longlong *)0x0;
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e4205a FUN_147e4205a body=73 status=ok
// SIG undefined FUN_147e4205a(void)

void FUN_147e4205a(longlong param_1)

{
  longlong lVar1;
  
  FUN_14113d18c();
  if (*(longlong *)(param_1 + 0x6d0) == 0) {
    lVar1 = FUN_14477bcf0();
    lVar1 = *(longlong *)(lVar1 + 0x68);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x6d0) = lVar1;
  }
  return;
}



// FUNCTION 147e420a4 FUN_147e420a4 body=67 status=ok
// SIG undefined FUN_147e420a4(void)

ulonglong FUN_147e420a4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14477bcf0();
  if ((longlong)*(int *)(lVar1 + 0x78) != 0) {
    lVar2 = (longlong)*(int *)(lVar1 + 0x78) << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + uVar3 * 8) == param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 147e420e8 FUN_147e420e8 body=198 status=ok
// SIG undefined FUN_147e420e8(void)

void FUN_147e420e8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  FUN_141246736(&local_28,lVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140d36aa0(local_28 + 0x200,param_1,0);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e421b0 FUN_147e421b0 body=1754 status=ok
// SIG undefined FUN_147e421b0(void)

bool FUN_147e421b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_238 [32];
  double local_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double dStack_190;
  double local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar4 = *(longlong *)(param_1 + 0x6d0);
  if (lVar4 != 0) {
    lVar38 = *(longlong *)(lVar4 + 0x30);
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      lVar38 = lVar4;
    }
    param_2[4] = *(longlong *)(param_1 + 0x6e0);
    uVar35 = *(undefined4 *)(param_1 + 0x6ec);
    uVar23 = *(undefined4 *)(param_1 + 0x6f0);
    uVar24 = *(undefined4 *)(param_1 + 0x6f4);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x6e8);
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar35;
    *(undefined4 *)(param_2 + 6) = uVar23;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar24;
    FUN_144a787a6(param_2 + 7,param_1 + 0x6f8);
    *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_1 + 0x708);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x6c8);
    lVar34 = *(longlong *)(param_1 + 0x6d0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    lVar33 = FUN_14477bcf0();
    uVar35 = 0xffffffff;
    if ((longlong)*(int *)(lVar33 + 0x78) != 0) {
      lVar36 = (longlong)*(int *)(lVar33 + 0x78) << 3;
      lVar37 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar33 + 0x70) + lVar37 * 8) == lVar34) {
          uVar35 = (undefined4)lVar37;
          break;
        }
        lVar37 = lVar37 + 1;
        lVar36 = lVar36 + -8;
      } while (lVar36 != 0);
    }
    *(undefined4 *)(param_2 + 2) = uVar35;
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    lVar34 = FUN_14477bcf0();
    uVar35 = 0xffffffff;
    if ((longlong)*(int *)(lVar34 + 0x78) != 0) {
      lVar33 = (longlong)*(int *)(lVar34 + 0x78) << 3;
      lVar36 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar34 + 0x70) + lVar36 * 8) == lVar38) {
          uVar35 = (undefined4)lVar36;
          break;
        }
        lVar36 = lVar36 + 1;
        lVar33 = lVar33 + -8;
      } while (lVar33 != 0);
    }
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar35;
    lVar38 = param_3[1];
    if ((longlong)(int)lVar38 != 0) {
      lVar34 = *param_3;
      lVar33 = 0;
      do {
        lVar37 = *(longlong *)(lVar34 + lVar33);
        lVar36 = 0x40;
        if (*(char *)(lVar37 + 0x44) == '\0') {
          lVar36 = (ulonglong)*(byte *)(lVar37 + 0x3c) * 4 + 0x30;
        }
        uVar35 = *(undefined4 *)(lVar37 + lVar36);
        FUN_147e4288c(param_1,&local_158,uVar35);
        FUN_147e42ebe(param_1,&local_1b8,uVar35);
        dVar10 = dStack_110;
        dVar9 = local_118;
        dVar32 = dStack_140;
        dVar31 = local_148;
        dVar30 = dStack_150;
        dVar29 = local_158;
        dVar28 = local_1a8;
        dVar27 = dStack_1b0;
        dVar26 = local_1b8;
        fVar2 = *(float *)(param_1 + 0x6c0);
        local_1e8 = ZEXT416(*(uint *)(param_1 + 0x6c4));
        dVar16 = local_108 * 0.0;
        local_1f8 = local_138;
        dStack_1f0 = dStack_130;
        local_218 = local_128;
        local_208 = local_178;
        uStack_204 = uStack_174;
        uStack_200 = uStack_170;
        uStack_1fc = uStack_16c;
        dVar19 = local_168 * 0.0;
        local_1d8 = uStack_1a0;
        uStack_1d4 = uStack_19c;
        uStack_1d0 = uStack_1a0;
        uStack_1cc = uStack_19c;
        local_1c8 = local_198;
        dStack_1c0 = dStack_190;
        local_210 = local_188;
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1409f544c(param_2,iVar3);
        }
        dVar39 = dVar9 * 0.0;
        dVar42 = (double)-fVar2 * dVar10;
        dVar6 = dVar42 * dVar29 - dVar39 * dVar30;
        dVar7 = dVar16 * dVar30 - dVar42 * dVar31;
        dVar44 = dVar39 * dVar31 - dVar29 * dVar16;
        dVar7 = dVar7 + dVar7;
        dVar44 = dVar44 + dVar44;
        dVar6 = dVar6 + dVar6;
        dVar9 = dVar9 * 0.0;
        dVar10 = (double)fVar2 * dVar10;
        dVar40 = dVar10 * dVar29 - dVar9 * dVar30;
        dVar43 = dVar16 * dVar30 - dVar10 * dVar31;
        dVar45 = dVar9 * dVar31 - dVar29 * dVar16;
        dVar43 = dVar43 + dVar43;
        dVar45 = dVar45 + dVar45;
        dVar40 = dVar40 + dVar40;
        dVar42 = (dVar31 * dVar7 - dVar29 * dVar6) + dVar32 * dVar44 + dVar42 + dStack_1f0;
        dVar12 = (double)CONCAT44(uStack_204,local_208) * 0.0;
        dVar14 = (double)(float)local_1e8._0_4_ * (double)CONCAT44(uStack_1fc,uStack_200);
        dVar41 = dVar14 * dVar26 - dVar12 * dVar27;
        dVar11 = dVar19 * dVar27 - dVar14 * dVar28;
        dVar17 = dVar12 * dVar28 - dVar26 * dVar19;
        dVar11 = dVar11 + dVar11;
        dVar17 = dVar17 + dVar17;
        dVar25 = (double)CONCAT44(uStack_1d4,local_1d8);
        dVar41 = dVar41 + dVar41;
        dVar21 = (double)CONCAT44(uStack_204,local_208) * 0.0;
        dVar22 = (double)-(float)local_1e8._0_4_ * (double)CONCAT44(uStack_1fc,uStack_200);
        dVar13 = dVar22 * dVar26 - dVar21 * dVar27;
        dVar15 = dVar19 * dVar27 - dVar22 * dVar28;
        dVar18 = dVar21 * dVar28 - dVar26 * dVar19;
        dVar15 = dVar15 + dVar15;
        dVar18 = dVar18 + dVar18;
        dVar13 = dVar13 + dVar13;
        dVar14 = (dVar28 * dVar11 - dVar26 * dVar41) +
                 (double)CONCAT44(uStack_1cc,uStack_1d0) * dVar17 + dVar14 + dStack_1c0;
        dVar22 = (dVar28 * dVar15 - dVar26 * dVar13) +
                 (double)CONCAT44(uStack_1cc,uStack_1d0) * dVar18 + dVar22 + dStack_1c0;
        lVar36 = *param_2;
        lVar37 = (longlong)iVar3 * 0x60;
        auVar5._8_4_ = SUB84(dVar42,0);
        auVar5._0_8_ = (dVar6 * dVar30 - dVar44 * dVar31) + dVar32 * dVar7 + dVar39 + local_1f8;
        auVar5._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        *(undefined1 (*) [16])(lVar36 + lVar37) = auVar5;
        *(double *)(lVar36 + 0x10 + lVar37) =
             dVar6 * dVar32 + dVar16 + (dVar44 * dVar29 - dVar7 * dVar30) + local_218;
        pdVar1 = (double *)(lVar36 + 0x18 + lVar37);
        *pdVar1 = (dVar40 * dVar30 - dVar45 * dVar31) + dVar32 * dVar43 + dVar9 + local_1f8;
        pdVar1[1] = (dVar31 * dVar43 - dVar29 * dVar40) + dVar32 * dVar45 + dVar10 + dStack_1f0;
        *(double *)(lVar36 + 0x28 + lVar37) =
             dVar40 * dVar32 + dVar16 + (dVar45 * dVar29 - dVar43 * dVar30) + local_218;
        auVar8._8_4_ = SUB84(dVar14,0);
        auVar8._0_8_ = (dVar41 * dVar27 - dVar17 * dVar28) + dVar25 * dVar11 + dVar12 + local_1c8;
        auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(lVar36 + 0x30 + lVar37) = auVar8;
        *(double *)(lVar36 + 0x40 + lVar37) =
             dVar41 * dVar25 + dVar19 + (dVar17 * dVar26 - dVar11 * dVar27) + local_210;
        auVar20._8_4_ = SUB84(dVar22,0);
        auVar20._0_8_ = (dVar13 * dVar27 - dVar18 * dVar28) + dVar25 * dVar15 + dVar21 + local_1c8;
        auVar20._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(lVar36 + 0x48 + lVar37) = auVar20;
        *(double *)(lVar36 + 0x58 + lVar37) =
             dVar13 * dVar25 + dVar19 + (dVar18 * dVar26 - dVar15 * dVar27) + local_210;
        lVar33 = lVar33 + 8;
      } while ((longlong)(int)lVar38 * 8 != lVar33);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 != 0;
}



// FUNCTION 147e4288c FUN_147e4288c body=1584 status=ok
// SIG undefined FUN_147e4288c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_147e4288c(longlong param_1,undefined1 (*param_2) [16],float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar28;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auStack_2c8 [32];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  auVar30 = _DAT_149934d80;
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar15 = auVar3._0_8_;
  dVar29 = auVar3._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x290);
  dVar5 = auVar4._0_8_;
  auVar17 = minpd(_DAT_149934d80,auVar3);
  auVar23 = minpd(ZEXT816(0x3ff0000000000000),auVar4);
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar12 = movmskpd((int)local_c0,auVar18);
  auVar17._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  uVar13 = movmskpd((int)param_2,auVar17);
  if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar10 = *(double *)(param_1 + 0x240);
    dVar11 = *(double *)(param_1 + 0x248);
    local_2a8 = *(double *)(param_1 + 0x250);
    dStack_2a0 = *(double *)(param_1 + 600);
    dVar21 = *(double *)(param_1 + 600);
    dVar1 = *(double *)(param_1 + 600);
    local_288 = dVar21 * 0.0;
    dStack_280 = dVar1 * 1.0;
    dVar2 = *(double *)(param_1 + 0x248);
    dVar24 = *(double *)(param_1 + 0x248);
    local_298 = (double)-param_3 * dVar15;
    dStack_290 = dVar29 * 0.0;
    dVar33 = dVar5 * 0.0;
    dVar6 = auVar4._8_8_ * 0.0;
    dVar16 = dStack_290 * dVar10 - local_298 * dVar11;
    dVar8 = dVar33 * dVar11 - dStack_290 * local_2a8;
    dVar22 = local_298 * local_2a8 - dVar33 * dVar10;
    dVar25 = dVar6 * dStack_2a0 - dVar6 * dStack_2a0;
    dVar8 = dVar8 + dVar8;
    dVar22 = dVar22 + dVar22;
    dVar16 = dVar16 + dVar16;
    dVar25 = dVar25 + dVar25;
    dVar7 = local_2a8 * 0.0 * 1.0 +
            dVar24 * 1.0 + *(double *)(param_1 + 0x240) * 0.0 * -1.0 + dVar1 * 0.0;
    dVar15 = *(double *)(param_1 + 0x250);
    dVar29 = *(double *)(param_1 + 0x250);
    dVar26 = *(double *)(param_1 + 0x260);
    dVar9 = (dVar8 * local_2a8 - dVar16 * dVar10) + dVar1 * dVar22 + dStack_290 +
            *(double *)(param_1 + 0x268);
    dVar32 = *(double *)(param_1 + 0x270);
    dVar28 = *(double *)(param_1 + 0x278);
    auVar30._8_4_ = SUB84(dVar7,0);
    auVar30._0_8_ =
         local_2a8 * 0.0 * -1.0 +
         dVar2 * 0.0 + *(double *)(param_1 + 0x240) * 1.0 * 1.0 + dVar21 * 0.0;
    auVar30._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *param_2 = auVar30;
    *(double *)param_2[1] = dVar15 * 1.0 * 1.0 + ((dVar10 * 0.0 * 1.0 + local_288) - dVar2 * 0.0);
    *(double *)(param_2[1] + 8) =
         dVar29 * 0.0 * -1.0 + ((dVar10 * 0.0 * -1.0 + dStack_280) - dVar24 * 0.0);
    auVar23._8_4_ = SUB84(dVar9,0);
    auVar23._0_8_ = (dVar16 * dVar11 - local_2a8 * dVar22) + dVar21 * dVar8 + local_298 + dVar26;
    auVar23._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    param_2[2] = auVar23;
    *(double *)param_2[3] = (dVar22 * dVar10 - dVar11 * dVar8) + dVar21 * dVar16 + dVar33 + dVar32;
    *(double *)(param_2[3] + 8) =
         (dVar25 * dStack_2a0 - dVar25 * dStack_2a0) + dVar1 * dVar25 + dVar6 + dVar28;
    local_278 = auVar3;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x240);
    dVar2 = *(double *)(param_1 + 0x248);
    dVar21 = *(double *)(param_1 + 0x250);
    dVar24 = dVar2 + dVar2;
    dVar26 = dVar21 + dVar21;
    dVar32 = dVar1 * (dVar1 + dVar1);
    local_1c8 = ((double)DAT_149934d80 - (dVar21 * dVar26 + dVar2 * dVar24)) * dVar15;
    dStack_1a0 = (DAT_149934d80._8_8_ - (dVar21 * dVar26 + dVar32)) * dVar29;
    local_178 = (1.0 - (dVar32 + dVar2 * dVar24)) * dVar5;
    dVar33 = *(double *)(param_1 + 0x240) * dVar26;
    dVar21 = *(double *)(param_1 + 600);
    dVar32 = dVar26 * dVar21;
    dVar28 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
    dVar21 = dVar24 * dVar21;
    dStack_1c0 = (dVar24 * dVar1 + dVar32) * dVar15;
    local_198 = (dVar26 * dVar2 + dVar28) * dVar29;
    local_188 = (dVar21 + dVar33) * dVar5;
    local_1a8 = (dVar24 * dVar1 - dVar32) * dVar29;
    dStack_180 = (dVar26 * dVar2 - dVar28) * dVar5;
    local_1b8 = (dVar33 - dVar21) * dVar15;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(undefined8 *)(param_1 + 0x260);
    uStack_160 = *(undefined8 *)(param_1 + 0x268);
    local_158 = *(undefined8 *)(param_1 + 0x270);
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    auVar18 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    uStack_1e0 = 0;
    local_228 = auVar18;
    local_1e8 = (double)-param_3;
    local_1d8 = auVar18;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar29);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar17 = blendvpd(_DAT_149936790,auVar30,auVar19);
    uVar14 = -(ulonglong)(0.0 <= dVar5 * 1.0);
    dVar15 = (double)(~uVar14 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar14 >> 0x20) & 0x3ff00000) << 0x20);
    dVar29 = auVar17._0_8_;
    local_138 = local_138 * dVar29;
    local_140 = local_140 * dVar29;
    local_148 = local_148 * dVar29;
    dVar29 = auVar17._8_8_;
    local_118 = local_118 * dVar29;
    local_120 = local_120 * dVar29;
    local_128 = dVar29 * local_128;
    local_f8 = local_f8 * dVar15;
    local_100 = local_100 * dVar15;
    local_108 = dVar15 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar15 = local_258 * local_258 + local_268 * local_268;
    dVar29 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar27._0_8_ = dVar15 + dVar29;
    auVar27._8_8_ = dVar15 + dVar29;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar17 = sqrtpd(auVar27,auVar27);
    auVar30 = divpd(auVar30,auVar17);
    auVar31._0_8_ = auVar30._0_8_ * local_258;
    auVar31._8_8_ = auVar30._8_8_ * dStack_250;
    auVar17 = blendvpd(auVar18,auVar31,auVar20);
    *(ulonglong *)*param_2 =
         (ulonglong)(local_268 * auVar30._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    *(ulonglong *)(*param_2 + 8) =
         (ulonglong)(dStack_260 * auVar30._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    param_2[1] = auVar17;
    *(undefined8 *)param_2[2] = local_e8;
    *(undefined8 *)(param_2[2] + 8) = uStack_e0;
    *(undefined8 *)param_2[3] = local_d8;
    *(undefined8 *)(param_2[3] + 8) = 0;
  }
  dVar15 = auVar4._8_8_ * 0.0;
  *(int *)param_2[4] = auVar3._0_4_;
  *(int *)(param_2[4] + 4) = auVar3._4_4_;
  *(int *)(param_2[4] + 8) = auVar3._8_4_;
  *(int *)(param_2[4] + 0xc) = auVar3._12_4_;
  auVar3._8_4_ = SUB84(dVar15,0);
  auVar3._0_8_ = dVar5 * 1.0;
  auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  param_2[5] = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e42ebe FUN_147e42ebe body=1545 status=ok
// SIG undefined FUN_147e42ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147e42ebe(undefined4 param_1,double *param_2,float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar17;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_328 [48];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
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
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar7 = (double)param_3;
  uVar3 = FUN_1437feef8(dVar7,&local_2c8);
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar19 = _DAT_149934d80;
  dVar8 = local_288._0_8_;
  dVar18 = local_288._8_8_;
  dVar1 = local_278._0_8_;
  auVar10 = minpd(_DAT_149934d80,local_288);
  auVar14 = minpd(ZEXT816(0x3ff0000000000000),local_278);
  auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
  iVar4 = movmskpd(uVar3,auVar11);
  auVar10._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar10._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  uVar5 = movmskpd(param_1,auVar10);
  if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
    local_2e8 = dStack_2b0 * 0.0;
    dStack_2e0 = dStack_2b0 * 1.0;
    local_2f8 = dVar7 * dVar8;
    dStack_2f0 = dVar18 * 0.0;
    dVar8 = dVar1 * 0.0;
    dVar18 = local_278._8_8_ * 0.0;
    dVar7 = dStack_2f0 * local_2c8 - local_2f8 * dStack_2c0;
    dVar12 = dVar8 * dStack_2c0 - dStack_2f0 * local_2b8;
    dVar15 = local_2f8 * local_2b8 - dVar8 * local_2c8;
    dVar13 = dVar18 * dStack_2b0 - dVar18 * dStack_2b0;
    dVar12 = dVar12 + dVar12;
    dVar15 = dVar15 + dVar15;
    dVar7 = dVar7 + dVar7;
    dVar13 = dVar13 + dVar13;
    dStack_2a0 = (dVar12 * local_2b8 - dVar7 * local_2c8) + dStack_2b0 * dVar15 + dStack_2f0 +
                 dStack_2a0;
    *param_2 = local_2b8 * 0.0 * -1.0 + dStack_2c0 * 0.0 + local_2c8 * 1.0 * 1.0 + dStack_2b0 * 0.0;
    param_2[1] = local_2b8 * 0.0 * 1.0 +
                 dStack_2c0 * 1.0 + local_2c8 * 0.0 * -1.0 + dStack_2b0 * 0.0;
    param_2[2] = local_2b8 * 1.0 * 1.0 + ((local_2c8 * 0.0 * 1.0 + local_2e8) - dStack_2c0 * 0.0);
    param_2[3] = local_2b8 * 0.0 * -1.0 + ((local_2c8 * 0.0 * -1.0 + dStack_2e0) - dStack_2c0 * 0.0)
    ;
    auVar19._8_4_ = SUB84(dStack_2a0,0);
    auVar19._0_8_ =
         (dVar7 * dStack_2c0 - local_2b8 * dVar15) + dStack_2b0 * dVar12 + local_2f8 + local_2a8;
    auVar19._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar19;
    param_2[6] = (dVar15 * local_2c8 - dStack_2c0 * dVar12) + dStack_2b0 * dVar7 + dVar8 + local_298
    ;
    param_2[7] = (dVar13 * dStack_2b0 - dVar13 * dStack_2b0) + dStack_2b0 * dVar13 + dVar18 +
                 dStack_290;
  }
  else {
    dVar12 = dStack_2c0 + dStack_2c0;
    dVar15 = local_2b8 + local_2b8;
    dVar13 = local_2c8 * (local_2c8 + local_2c8);
    local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar15 + dStack_2c0 * dVar12)) * dVar8;
    dStack_1a0 = (DAT_149934d80._8_8_ - (local_2b8 * dVar15 + dVar13)) * dVar18;
    dVar17 = (local_2c8 + local_2c8) * dStack_2b0;
    local_1a8 = (dVar12 * local_2c8 - dVar15 * dStack_2b0) * dVar18;
    dStack_180 = (dVar15 * dStack_2c0 - dVar17) * dVar1;
    local_188 = (dVar12 * dStack_2b0 + local_2c8 * dVar15) * dVar1;
    dStack_1c0 = (dVar12 * local_2c8 + dVar15 * dStack_2b0) * dVar8;
    local_198 = (dVar15 * dStack_2c0 + dVar17) * dVar18;
    local_1b8 = (local_2c8 * dVar15 - dVar12 * dStack_2b0) * dVar8;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_178 = (1.0 - (dVar13 + dStack_2c0 * dVar12)) * dVar1;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    auVar11 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    uStack_1e0 = 0;
    local_228 = auVar11;
    local_1e8 = dVar7;
    local_1d8 = auVar11;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar8);
    auVar10 = blendvpd(_DAT_149936790,auVar19,auVar14);
    uVar6 = -(ulonglong)(0.0 <= dVar1 * 1.0);
    dVar8 = (double)(~uVar6 & 0xbff0000000000000 |
                    (ulonglong)((uint)(uVar6 >> 0x20) & 0x3ff00000) << 0x20);
    dVar18 = auVar10._0_8_;
    local_138 = local_138 * dVar18;
    local_140 = local_140 * dVar18;
    local_148 = local_148 * dVar18;
    dVar18 = auVar10._8_8_;
    local_118 = local_118 * dVar18;
    local_120 = local_120 * dVar18;
    local_128 = dVar18 * local_128;
    local_f8 = local_f8 * dVar8;
    local_100 = local_100 * dVar8;
    local_108 = dVar8 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar8 = local_258 * local_258 + local_268 * local_268;
    dVar18 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar16._0_8_ = dVar8 + dVar18;
    auVar16._8_8_ = dVar8 + dVar18;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar10 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(auVar19,auVar10);
    auVar20._0_8_ = auVar19._0_8_ * local_258;
    auVar20._8_8_ = auVar19._8_8_ * dStack_250;
    auVar10 = blendvpd(auVar11,auVar20,auVar9);
    *param_2 = (double)((ulonglong)(local_268 * auVar19._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar19._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar10;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  dVar8 = local_278._8_8_ * 0.0;
  *(int *)(param_2 + 8) = local_288._0_4_;
  *(int *)((longlong)param_2 + 0x44) = local_288._4_4_;
  *(int *)(param_2 + 9) = local_288._8_4_;
  *(int *)((longlong)param_2 + 0x4c) = local_288._12_4_;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar1 * 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar2;
  if ((local_c0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e434c8 FUN_147e434c8 body=240 status=ok
// SIG undefined FUN_147e434c8(void)

void FUN_147e434c8(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 1) {
    uVar5 = *(undefined8 *)(param_1 + -0x3c0);
    uVar6 = *(undefined8 *)(param_1 + -0x3b8);
    uVar2 = *(undefined8 *)(param_1 + -0x3b0);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1403e3958(param_2,iVar3);
    }
    lVar4 = *param_2;
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = uVar2;
    FUN_1437feef8(param_1 + -0x620,local_a8);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1403e3958(param_2,iVar3);
    }
    lVar4 = *param_2;
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
    *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_78;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e435ba FUN_147e435ba body=198 status=ok
// SIG undefined FUN_147e435ba(void)

void FUN_147e435ba(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = param_1 + 0xd;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = param_1 + 0x1f;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 147e43680 FUN_147e43680 body=131 status=ok
// SIG undefined FUN_147e43680(void)

void FUN_147e43680(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_14479d2ce(param_2 + 0x140);
    if (((lVar1 != 0) &&
        (((lVar2 = *(longlong *)(lVar1 + 0xb0), lVar2 != 0 ||
          (lVar2 = FUN_1448abda6(lVar1), lVar2 != 0)) &&
         (lVar1 = FUN_14479d2ce(param_1 + 8), (byte)param_3 < 2)))) && (lVar2 == lVar1)) {
      FUN_1401f7b40(*(longlong *)(param_1 + 0x598) + 0x1a0,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147e43704 FUN_147e43704 body=68 status=ok
// SIG undefined FUN_147e43704(void)

void FUN_147e43704(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1478b6d68();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4374a FUN_147e4374a body=132 status=ok
// SIG undefined FUN_147e4374a(void)

void FUN_147e4374a(longlong param_1,int param_2)

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



// FUNCTION 147e437d0 FUN_147e437d0 body=125 status=ok
// SIG undefined FUN_147e437d0(void)

void FUN_147e437d0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_147e38434(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e4384e FUN_147e4384e body=230 status=ok
// SIG undefined FUN_147e4384e(void)

undefined4 * FUN_147e4384e(undefined4 *param_1,uint param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x800000000;
  FUN_147e439ca(&local_70);
  if (&local_70 == param_1) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_30 == 0) {
      *(undefined8 *)(param_1 + 0xc) = local_40;
      *(undefined8 *)(param_1 + 0xe) = uStack_38;
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 4) = local_60;
      *(undefined8 *)(param_1 + 6) = uStack_58;
      *param_1 = local_70;
      param_1[1] = uStack_6c;
      param_1[2] = uStack_68;
      param_1[3] = uStack_64;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x10));
    }
    *(longlong *)(param_1 + 0x10) = local_30;
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
  }
  param_1[0x14] = (param_2 >> 8 & 0xffff) - 1;
  *(byte *)(param_1 + 0x15) = (byte)(param_2 >> 0x18) & 3;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e43936 FUN_147e43936 body=147 status=ok
// SIG undefined FUN_147e43936(void)

uint FUN_147e43936(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = FUN_14477bcf0();
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if ((longlong)(int)param_1[9] == 0) {
    uVar7 = 0;
  }
  else {
    plVar1 = plVar4 + (int)param_1[9];
    uVar7 = 0;
    do {
      if (*(int *)(lVar2 + 0x50) != 0) {
        lVar3 = 0;
        lVar5 = (longlong)*(int *)(lVar2 + 0x50) << 3;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x48) + lVar3 * 8) == *plVar4) {
            uVar6 = 1 << ((byte)lVar3 & 0x1f);
            if (-1 < (int)lVar3) goto LAB_147e4398c;
            break;
          }
          lVar3 = lVar3 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      uVar6 = 0;
LAB_147e4398c:
      uVar7 = uVar7 | uVar6;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return *(int *)((longlong)param_1 + 0x54) << 0x18 | uVar7 | (int)param_1[10] * 0x100 + 0x100U;
}



// FUNCTION 147e439ca FUN_147e439ca body=339 status=ok
// SIG undefined FUN_147e439ca(void)

longlong FUN_147e439ca(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x800000000;
  lVar2 = FUN_14477bcf0();
  FUN_147e43b1e(local_78,param_2);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  if ((longlong)local_50 != 0) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(puVar6 + lVar5);
      lVar4 = 0;
      bVar7 = false;
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x50))) {
        lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 8);
        bVar7 = lVar4 != 0;
        if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        if ((lVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar4);
          bVar7 = true;
        }
      }
      iVar1 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
        FUN_147e43b9c(param_1,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1;
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4;
      if ((bVar7 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)local_50 * 4 != lVar5);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e43b1e FUN_147e43b1e body=125 status=ok
// SIG undefined FUN_147e43b1e(void)

longlong FUN_147e43b1e(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x800000000;
  uVar5 = param_2 & 0xff;
  if ((param_2 & 0xff) != 0) {
    do {
      uVar4 = -uVar5 & uVar5;
      iVar2 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      if (uVar4 == 0) {
        iVar2 = 0;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
        FUN_1400cc390(param_1,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar3 = param_1;
      }
      *(int *)(lVar3 + (longlong)iVar1 * 4) = iVar2;
      bVar6 = uVar4 != uVar5;
      uVar5 = uVar4 ^ uVar5;
    } while (bVar6);
  }
  return param_1;
}



// FUNCTION 147e43b9c FUN_147e43b9c body=116 status=ok
// SIG undefined FUN_147e43b9c(void)

void FUN_147e43b9c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_147e43c12(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e43c12 FUN_147e43c12 body=133 status=ok
// SIG undefined FUN_147e43c12(void)

void FUN_147e43c12(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e43c98 FUN_147e43c98 body=128 status=ok
// SIG undefined FUN_147e43c98(void)

undefined8 FUN_147e43c98(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_2c = 0x3dcccccd;
  FUN_142991572(param_2,local_28);
  local_38 = 1;
  FUN_146e2839a(param_1,local_28,0,0xffffffff);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e43d1a FUN_147e43d1a body=52 status=ok
// SIG undefined FUN_147e43d1a(void)

void FUN_147e43d1a(longlong *param_1)

{
  FUN_147e43d4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e43d4e FUN_147e43d4e body=89 status=ok
// SIG undefined FUN_147e43d4e(void)

void FUN_147e43d4e(longlong param_1)

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



// FUNCTION 147e43da8 FUN_147e43da8 body=142 status=ok
// SIG undefined FUN_147e43da8(void)

void FUN_147e43da8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x30c) = (int)uVar4;
    FUN_147e43e38(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e43e38 FUN_147e43e38 body=150 status=ok
// SIG undefined FUN_147e43e38(void)

void FUN_147e43e38(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e43ece FUN_147e43ece body=48 status=ok
// SIG undefined FUN_147e43ece(void)

void FUN_147e43ece(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147e43efe FUN_147e43efe body=114 status=ok
// SIG undefined FUN_147e43efe(void)

void FUN_147e43efe(longlong *param_1,int param_2)

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



// FUNCTION 147e43f70 FUN_147e43f70 body=266 status=ok
// SIG undefined FUN_147e43f70(void)

void FUN_147e43f70(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_147e4407a(lVar2,*param_2);
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar11 = (ulonglong)uVar7;
      uVar3 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar8 = uVar7;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_147e4407a(lVar12,*param_2);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 8;
        uVar9 = uVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar10 != uVar7) {
          memmove((void *)(lVar2 + (longlong)(int)uVar10 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar10 = uVar10 + (uVar9 - uVar7);
      }
      uVar7 = uVar9;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar10;
  }
  return;
}



// FUNCTION 147e4407a FUN_147e4407a body=53 status=ok
// SIG undefined FUN_147e4407a(void)

ulonglong FUN_147e4407a(int *param_1,int *param_2)

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



// FUNCTION 147e440b4 FUN_147e440b4 body=81 status=ok
// SIG undefined FUN_147e440b4(void)

undefined8 FUN_147e440b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e4410c FUN_147e4410c body=89 status=ok
// SIG undefined FUN_147e4410c(void)

bool FUN_147e4410c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e44157;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e44157:
  return lVar6 == param_2;
}



// FUNCTION 147e44166 FUN_147e44166 body=118 status=ok
// SIG undefined FUN_147e44166(void)

void FUN_147e44166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e441dc FUN_147e441dc body=118 status=ok
// SIG undefined FUN_147e441dc(void)

void FUN_147e441dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e44252 FUN_147e44252 body=156 status=ok
// SIG undefined FUN_147e44252(void)

void FUN_147e44252(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0450;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e442de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e442ee FUN_147e442ee body=120 status=ok
// SIG undefined FUN_147e442ee(void)

void FUN_147e442ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147e4434f:
    (**(code **)(param_1 + 0x28))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147e4434f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e4434b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e44366 FUN_147e44366 body=48 status=ok
// SIG undefined FUN_147e44366(void)

void FUN_147e44366(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147e44396 FUN_147e44396 body=75 status=ok
// SIG undefined FUN_147e44396(void)

void FUN_147e44396(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 4);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 147e443e2 FUN_147e443e2 body=132 status=ok
// SIG undefined FUN_147e443e2(void)

void FUN_147e443e2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147e44466 FUN_147e44466 body=110 status=ok
// SIG undefined FUN_147e44466(void)

void FUN_147e44466(longlong param_1,int param_2)

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
    FUN_147e443e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e444d6 FUN_147e444d6 body=135 status=ok
// SIG undefined FUN_147e444d6(void)

void FUN_147e444d6(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = DAT_14cb1cc20;
  if (param_1 <= (int)DAT_14cb1cc20) {
    iVar2 = 0x22;
    if (0x22 < DAT_14cb1cc20) {
      lVar3 = (longlong)(int)DAT_14cb1cc20;
      if (0x22 < DAT_14cb1cc24) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar2 = iVar5;
      }
    }
    DAT_14cb1cc24 = iVar2;
    FUN_140083440(&DAT_14cb1c8e8,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb1cc20);
}



// FUNCTION 147e4455e FUN_147e4455e body=147 status=ok
// SIG undefined FUN_147e4455e(void)

void FUN_147e4455e(longlong param_1,int param_2)

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



// FUNCTION 147e445f2 FUN_147e445f2 body=48 status=ok
// SIG undefined FUN_147e445f2(void)

void FUN_147e445f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 147e44622 FUN_147e44622 body=199 status=ok
// SIG undefined FUN_147e44622(void)

/* WARNING: Removing unreachable block (ram,0x000147e44663) */
/* WARNING: Removing unreachable block (ram,0x000147e44636) */
/* WARNING: Removing unreachable block (ram,0x000147e44655) */
/* WARNING: Removing unreachable block (ram,0x000147e44671) */
/* WARNING: Removing unreachable block (ram,0x000147e44657) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e44622(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cb1cc58;
  LOCK();
  UNLOCK();
  DAT_14cb1cc58 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cc60 = _DAT_14cb1cc60 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cb1cc48 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cb1cc40 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cb1cc40 + lVar3) != 0)) {
              FUN_147e33d5a(&DAT_14cb1cc40);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cb1cc48 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1cc60 = _DAT_14cb1cc60 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e446ea FUN_147e446ea body=137 status=ok
// SIG undefined FUN_147e446ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e446ea(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1cc60 = _DAT_14cb1cc60 + 1;
  UNLOCK();
  uVar1 = FUN_147e44774(DAT_14cb1cc58);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1cc28;
  LOCK();
  _DAT_14cb1cc60 = _DAT_14cb1cc60 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_147e447f6(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1cc28;
  LOCK();
  _DAT_14cb1cc60 = _DAT_14cb1cc60 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_147e447f6(param_1 + 4);
  LOCK();
  _DAT_14cb1cc60 = _DAT_14cb1cc60 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e44774 FUN_147e44774 body=130 status=ok
// SIG undefined FUN_147e44774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e44774(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_147e447e6:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_147e447e6;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 147e447f6 FUN_147e447f6 body=73 status=ok
// SIG undefined FUN_147e447f6(void)

void FUN_147e447f6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_147e44774(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 147e44840 FUN_147e44840 body=107 status=ok
// SIG undefined FUN_147e44840(void)

/* WARNING: Removing unreachable block (ram,0x000147e44872) */
/* WARNING: Removing unreachable block (ram,0x000147e4484e) */
/* WARNING: Removing unreachable block (ram,0x000147e44864) */
/* WARNING: Removing unreachable block (ram,0x000147e4487d) */
/* WARNING: Removing unreachable block (ram,0x000147e44866) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e44840(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1c8a0;
  LOCK();
  UNLOCK();
  DAT_14cb1c8a0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + -1;
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
    _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e448ac FUN_147e448ac body=110 status=ok
// SIG undefined FUN_147e448ac(void)

void FUN_147e448ac(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_147e4491c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e4491c FUN_147e4491c body=132 status=ok
// SIG undefined FUN_147e4491c(void)

void FUN_147e4491c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 147e449a0 FUN_147e449a0 body=328 status=ok
// SIG undefined FUN_147e449a0(void)

void FUN_147e449a0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x102c + (longlong)iVar4 * 0x1030) * 4)
             = 0xffffffff;
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



// FUNCTION 147e44aea FUN_147e44aea body=287 status=ok
// SIG undefined FUN_147e44aea(void)

void FUN_147e44aea(longlong *param_1)

{
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
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_141082322(*local_60 + (longlong)iStack_44 * 0x1030 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_145bdb90a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e44c0a FUN_147e44c0a body=48 status=ok
// SIG undefined FUN_147e44c0a(void)

void FUN_147e44c0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e44c3a FUN_147e44c3a body=127 status=ok
// SIG undefined FUN_147e44c3a(void)

void FUN_147e44c3a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_147e44cba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e44cba FUN_147e44cba body=140 status=ok
// SIG undefined FUN_147e44cba(void)

void FUN_147e44cba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0xc);
  return;
}



// FUNCTION 147e44d46 FUN_147e44d46 body=258 status=ok
// SIG undefined FUN_147e44d46(void)

void FUN_147e44d46(float *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x10);
  iVar2 = 1 << ((char)local_4c + 1U & 0x1f);
  iVar1 = 1 << ((char)local_4c + 2U & 0x1f);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_50,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_54,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_58,iVar1);
  *param_1 = (float)(local_50 - iVar2);
  param_1[1] = (float)(local_54 - iVar2);
  param_1[2] = (float)(local_58 - iVar2);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e44e4a FUN_147e44e4a body=142 status=ok
// SIG undefined FUN_147e44e4a(void)

void FUN_147e44e4a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1405f963a(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e44eda FUN_147e44eda body=73 status=ok
// SIG undefined FUN_147e44eda(void)

void FUN_147e44eda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e44f24(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  if (iVar1 == *(int *)(param_1 + 0xcc)) {
    return;
  }
  *(int *)(param_1 + 0xcc) = iVar1;
  FUN_1405f963a(param_1,*(undefined4 *)(param_1 + 200),iVar1,0x18);
  return;
}



// FUNCTION 147e44f24 FUN_147e44f24 body=129 status=ok
// SIG undefined FUN_147e44f24(void)

ulonglong FUN_147e44f24(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 147e44fa6 FUN_147e44fa6 body=125 status=ok
// SIG undefined FUN_147e44fa6(void)

void FUN_147e44fa6(longlong param_1,int param_2)

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
    FUN_1405f95ac(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e45024 FUN_147e45024 body=73 status=ok
// SIG undefined FUN_147e45024(void)

void FUN_147e45024(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e4506e(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_1405f95ac(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 147e4506e FUN_147e4506e body=108 status=ok
// SIG undefined FUN_147e4506e(void)

ulonglong FUN_147e4506e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147e450da FUN_147e450da body=48 status=ok
// SIG undefined FUN_147e450da(void)

void FUN_147e450da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e4510a FUN_147e4510a body=87 status=ok
// SIG undefined FUN_147e4510a(void)

void FUN_147e4510a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(uint *)(param_1 + 8) = (uint)(*(int *)(param_1 + 0x28) == 0) * 3 + 1;
  return;
}



// FUNCTION 147e45162 FUN_147e45162 body=87 status=ok
// SIG undefined FUN_147e45162(void)

void FUN_147e45162(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(uint *)(param_1 + 8) = (uint)(*(int *)(param_1 + 0x28) == 0) * 3 + 1;
  return;
}



// FUNCTION 147e451ba FUN_147e451ba body=48 status=ok
// SIG undefined FUN_147e451ba(void)

void FUN_147e451ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147e451ea FUN_147e451ea body=110 status=ok
// SIG undefined FUN_147e451ea(void)

void FUN_147e451ea(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147e4525a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e4525a FUN_147e4525a body=132 status=ok
// SIG undefined FUN_147e4525a(void)

void FUN_147e4525a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147e452de FUN_147e452de body=110 status=ok
// SIG undefined FUN_147e452de(void)

void FUN_147e452de(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147e4534e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e4534e FUN_147e4534e body=132 status=ok
// SIG undefined FUN_147e4534e(void)

void FUN_147e4534e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147e453d2 FUN_147e453d2 body=191 status=ok
// SIG undefined FUN_147e453d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e453d2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1cff8 = _DAT_14cb1cff8 + 1;
  UNLOCK();
  param_1[1] = DAT_14cb1cff0;
  param_1[2] = &DAT_14cb1cff0;
  LOCK();
  _DAT_14cb1cff8 = _DAT_14cb1cff8 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_147e47e4e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1cff0;
  LOCK();
  _DAT_14cb1cff8 = _DAT_14cb1cff8 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_147e47e4e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  _DAT_14cb1cff8 = _DAT_14cb1cff8 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e45492 FUN_147e45492 body=146 status=ok
// SIG undefined FUN_147e45492(void)

void FUN_147e45492(longlong param_1,int param_2)

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



// FUNCTION 147e4553a FUN_147e4553a body=62 status=ok
// SIG undefined FUN_147e4553a(void)

void FUN_147e4553a(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + uVar2 * 8);
      *(longlong *)(param_1 + uVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        FUN_144b3d910();
      }
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  return;
}



// FUNCTION 147e45578 FUN_147e45578 body=51 status=ok
// SIG undefined FUN_147e45578(void)

void FUN_147e45578(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3 + 1;
    do {
      if (*(longlong *)(param_1 + -0x10 + uVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147e455ac FUN_147e455ac body=98 status=ok
// SIG undefined FUN_147e455ac(void)

void FUN_147e455ac(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar4 * 8);
      lVar1 = *(longlong *)(param_2 + uVar4 * 8);
      if (lVar3 != lVar1) {
        if (lVar1 == 0) {
          uVar2 = 0;
        }
        else {
          FUN_144b3d910(lVar1);
          lVar3 = *(longlong *)(param_1 + uVar4 * 8);
          uVar2 = *(undefined8 *)(param_2 + uVar4 * 8);
        }
        *(undefined8 *)(param_1 + uVar4 * 8) = uVar2;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
  }
  return;
}



// FUNCTION 147e45622 FUN_147e45622 body=62 status=ok
// SIG undefined FUN_147e45622(void)

void FUN_147e45622(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + uVar2 * 8);
      *(longlong *)(param_1 + uVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        FUN_144b3d910();
      }
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  return;
}



// FUNCTION 147e45660 FUN_147e45660 body=51 status=ok
// SIG undefined FUN_147e45660(void)

void FUN_147e45660(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3 + 1;
    do {
      if (*(longlong *)(param_1 + -0x10 + uVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147e45694 FUN_147e45694 body=98 status=ok
// SIG undefined FUN_147e45694(void)

void FUN_147e45694(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar4 * 8);
      lVar1 = *(longlong *)(param_2 + uVar4 * 8);
      if (lVar3 != lVar1) {
        if (lVar1 == 0) {
          uVar2 = 0;
        }
        else {
          FUN_144b3d910(lVar1);
          lVar3 = *(longlong *)(param_1 + uVar4 * 8);
          uVar2 = *(undefined8 *)(param_2 + uVar4 * 8);
        }
        *(undefined8 *)(param_1 + uVar4 * 8) = uVar2;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
  }
  return;
}



// FUNCTION 147e456f6 FUN_147e456f6 body=111 status=ok
// SIG undefined FUN_147e456f6(void)

void FUN_147e456f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xb0,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,0x10);
  }
  return;
}



// FUNCTION 147e45766 FUN_147e45766 body=48 status=ok
// SIG undefined FUN_147e45766(void)

void FUN_147e45766(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147e45796 FUN_147e45796 body=107 status=ok
// SIG undefined FUN_147e45796(void)

/* WARNING: Removing unreachable block (ram,0x000147e457c8) */
/* WARNING: Removing unreachable block (ram,0x000147e457a4) */
/* WARNING: Removing unreachable block (ram,0x000147e457ba) */
/* WARNING: Removing unreachable block (ram,0x000147e457d3) */
/* WARNING: Removing unreachable block (ram,0x000147e457bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e45796(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1cd40;
  LOCK();
  UNLOCK();
  DAT_14cb1cd40 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cd48 = _DAT_14cb1cd48 + -1;
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
    _DAT_14cb1cd48 = _DAT_14cb1cd48 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e45802 FUN_147e45802 body=107 status=ok
// SIG undefined FUN_147e45802(void)

/* WARNING: Removing unreachable block (ram,0x000147e45834) */
/* WARNING: Removing unreachable block (ram,0x000147e45810) */
/* WARNING: Removing unreachable block (ram,0x000147e45826) */
/* WARNING: Removing unreachable block (ram,0x000147e4583f) */
/* WARNING: Removing unreachable block (ram,0x000147e45828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e45802(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1cd30;
  LOCK();
  UNLOCK();
  DAT_14cb1cd30 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cd38 = _DAT_14cb1cd38 + -1;
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
    _DAT_14cb1cd38 = _DAT_14cb1cd38 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e4586e FUN_147e4586e body=48 status=ok
// SIG undefined FUN_147e4586e(void)

void FUN_147e4586e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 147e4589e FUN_147e4589e body=101 status=ok
// SIG undefined FUN_147e4589e(void)

void FUN_147e4589e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_1406a922a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147e45904 FUN_147e45904 body=62 status=ok
// SIG undefined FUN_147e45904(void)

void FUN_147e45904(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e45942(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 147e45942 FUN_147e45942 body=112 status=ok
// SIG undefined FUN_147e45942(void)

ulonglong FUN_147e45942(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147e4597c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_147e4597c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147e459b2 FUN_147e459b2 body=31 status=ok
// SIG undefined FUN_147e459b2(void)

undefined8 FUN_147e459b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e459ee FUN_147e459ee body=101 status=ok
// SIG undefined FUN_147e459ee(void)

void FUN_147e459ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e45a54 FUN_147e45a54 body=101 status=ok
// SIG undefined FUN_147e45a54(void)

void FUN_147e45a54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e45aba FUN_147e45aba body=134 status=ok
// SIG undefined FUN_147e45aba(void)

void FUN_147e45aba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0760;
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
                    /* WARNING: Could not recover jumptable at 0x000147e45b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e45b52 FUN_147e45b52 body=68 status=ok
// SIG undefined FUN_147e45b52(void)

undefined8 * FUN_147e45b52(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aba07d0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147e45b9a FUN_147e45b9a body=81 status=ok
// SIG undefined FUN_147e45b9a(void)

undefined8 FUN_147e45b9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e45bf2 FUN_147e45bf2 body=91 status=ok
// SIG undefined FUN_147e45bf2(void)

bool FUN_147e45bf2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e45c0e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e45c0e:
  return lVar6 == param_2;
}



// FUNCTION 147e45c4e FUN_147e45c4e body=118 status=ok
// SIG undefined FUN_147e45c4e(void)

void FUN_147e45c4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba07d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e45cc4 FUN_147e45cc4 body=118 status=ok
// SIG undefined FUN_147e45cc4(void)

void FUN_147e45cc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba07d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e45d3a FUN_147e45d3a body=156 status=ok
// SIG undefined FUN_147e45d3a(void)

void FUN_147e45d3a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0840;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba07d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e45dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e45dd6 FUN_147e45dd6 body=104 status=ok
// SIG undefined FUN_147e45dd6(void)

void FUN_147e45dd6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e45e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e45e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e45e40 FUN_147e45e40 body=68 status=ok
// SIG undefined FUN_147e45e40(void)

undefined8 * FUN_147e45e40(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aba08b0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147e45e88 FUN_147e45e88 body=81 status=ok
// SIG undefined FUN_147e45e88(void)

undefined8 FUN_147e45e88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e45ee0 FUN_147e45ee0 body=118 status=ok
// SIG undefined FUN_147e45ee0(void)

void FUN_147e45ee0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba08b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e45f56 FUN_147e45f56 body=118 status=ok
// SIG undefined FUN_147e45f56(void)

void FUN_147e45f56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba08b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e45fcc FUN_147e45fcc body=156 status=ok
// SIG undefined FUN_147e45fcc(void)

void FUN_147e45fcc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba08b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e46058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e46068 FUN_147e46068 body=104 status=ok
// SIG undefined FUN_147e46068(void)

void FUN_147e46068(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e460b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e460c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e460d0 FUN_147e460d0 body=68 status=ok
// SIG undefined FUN_147e460d0(void)

undefined8 * FUN_147e460d0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aba0920;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147e46118 FUN_147e46118 body=81 status=ok
// SIG undefined FUN_147e46118(void)

undefined8 FUN_147e46118(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e46170 FUN_147e46170 body=91 status=ok
// SIG undefined FUN_147e46170(void)

bool FUN_147e46170(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e461a0;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e461a0:
  return lVar6 == param_2;
}



// FUNCTION 147e461cc FUN_147e461cc body=118 status=ok
// SIG undefined FUN_147e461cc(void)

void FUN_147e461cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e46242 FUN_147e46242 body=118 status=ok
// SIG undefined FUN_147e46242(void)

void FUN_147e46242(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e462b8 FUN_147e462b8 body=156 status=ok
// SIG undefined FUN_147e462b8(void)

void FUN_147e462b8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e46344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e46354 FUN_147e46354 body=100 status=ok
// SIG undefined FUN_147e46354(void)

void FUN_147e46354(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e463a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e463ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e463b8 FUN_147e463b8 body=68 status=ok
// SIG undefined FUN_147e463b8(void)

undefined8 * FUN_147e463b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aba09b0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147e46400 FUN_147e46400 body=81 status=ok
// SIG undefined FUN_147e46400(void)

undefined8 FUN_147e46400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e46458 FUN_147e46458 body=91 status=ok
// SIG undefined FUN_147e46458(void)

bool FUN_147e46458(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e46474;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e46474:
  return lVar6 == param_2;
}



// FUNCTION 147e464b4 FUN_147e464b4 body=118 status=ok
// SIG undefined FUN_147e464b4(void)

void FUN_147e464b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba09b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e4652a FUN_147e4652a body=118 status=ok
// SIG undefined FUN_147e4652a(void)

void FUN_147e4652a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba09b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e465a0 FUN_147e465a0 body=156 status=ok
// SIG undefined FUN_147e465a0(void)

void FUN_147e465a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0a20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba09b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e4662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e4663c FUN_147e4663c body=104 status=ok
// SIG undefined FUN_147e4663c(void)

void FUN_147e4663c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e46689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e4669a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e466a6 FUN_147e466a6 body=68 status=ok
// SIG undefined FUN_147e466a6(void)

undefined8 * FUN_147e466a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aba0a90;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147e466ee FUN_147e466ee body=81 status=ok
// SIG undefined FUN_147e466ee(void)

undefined8 FUN_147e466ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e46746 FUN_147e46746 body=91 status=ok
// SIG undefined FUN_147e46746(void)

bool FUN_147e46746(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e46762;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e46762:
  return lVar6 == param_2;
}



// FUNCTION 147e467a2 FUN_147e467a2 body=118 status=ok
// SIG undefined FUN_147e467a2(void)

void FUN_147e467a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e46818 FUN_147e46818 body=118 status=ok
// SIG undefined FUN_147e46818(void)

void FUN_147e46818(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0b00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0a90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147e4688e FUN_147e4688e body=156 status=ok
// SIG undefined FUN_147e4688e(void)

void FUN_147e4688e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0b00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0a90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e4691a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e4692a FUN_147e4692a body=104 status=ok
// SIG undefined FUN_147e4692a(void)

void FUN_147e4692a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e46977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e46988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e46994 FUN_147e46994 body=119 status=ok
// SIG undefined FUN_147e46994(void)

void FUN_147e46994(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1405e536c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e46a0c FUN_147e46a0c body=77 status=ok
// SIG undefined FUN_147e46a0c(void)

longlong FUN_147e46a0c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_147e4a3e8(param_1);
    FUN_147e470ec(param_1 + 0x10,param_2 + 0x10);
    FUN_147e4713a(param_1 + 0x20,param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  return param_1;
}



// FUNCTION 147e46a5c FUN_147e46a5c body=360 status=ok
// SIG undefined FUN_147e46a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e46a5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab9f0f0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14aba0f00;
  param_1[5] = *param_3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_14485c47a(param_1 + 0x1c);
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 1;
  param_1[0x1e] = &PTR_LAB_14aba2aa0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  uVar4 = uRam000000014c6dae8c;
  uVar3 = uRam000000014c6dae88;
  uVar2 = uRam000000014c6dae84;
  uVar1 = _DAT_14c6dae80;
  *(uint *)(param_1 + 0x26) = _DAT_14c6dae80;
  *(uint *)((longlong)param_1 + 0x134) = uVar2;
  *(uint *)(param_1 + 0x27) = uVar3;
  *(uint *)((longlong)param_1 + 0x13c) = uVar4;
  *(uint *)(param_1 + 0x28) = uVar1 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x144) = uVar2 ^ 0x80000000;
  *(uint *)(param_1 + 0x29) = uVar3 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x14c) = uVar4 ^ 0x80000000;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_1 + 0x13) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x14) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_34;
  *(undefined4 *)((longlong)param_1 + 0x94) = 3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e46bc6 FUN_147e46bc6 body=161 status=ok
// SIG undefined FUN_147e46bc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e46bc6(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x3c800000;
  uVar1 = uRam000000014c6dae68;
  *(undefined8 *)(param_1 + 4) = _DAT_14c6dae60;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = 0x3ecccccd3e4ccccd;
  *(undefined8 *)(param_1 + 10) = 0x3e99999a3e99999a;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *(undefined8 *)(param_1 + 0xe) = 0x3f0000003f000000;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x11) = 0x7f7fffee3f000000;
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000040a00000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000001;
  return;
}



// FUNCTION 147e46c68 FUN_147e46c68 body=112 status=ok
// SIG undefined FUN_147e46c68(void)

longlong * FUN_147e46c68(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_147e6746a(param_2);
    _Dst = (void *)*param_2;
  }
  memset(_Dst,0,(longlong)iVar2);
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar3 * 8);
      if (lVar1 != 0) {
        *(undefined1 *)(*param_2 + lVar3) = *(undefined1 *)(lVar1 + 0x3c);
        iVar2 = *(int *)(param_1 + 0x78);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return param_2;
}



// FUNCTION 147e46cd8 FUN_147e46cd8 body=134 status=ok
// SIG undefined FUN_147e46cd8(void)

longlong * FUN_147e46cd8(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 4);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e4a87c(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e46d5e FUN_147e46d5e body=107 status=ok
// SIG undefined FUN_147e46d5e(void)

void FUN_147e46d5e(longlong param_1)

{
  if ((*(int *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0x151) == '\0')) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      FUN_14000f986(0x3e800000);
    }
    FUN_14380b508(param_1,param_1 + 0xf0);
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_14380c590(param_1);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_147e46dca(param_1);
        FUN_14380ccca(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e46dca FUN_147e46dca body=298 status=ok
// SIG undefined FUN_147e46dca(void)

void FUN_147e46dca(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x1e0;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x98);
    do {
      if (puVar3[-3] != 0) {
        cVar1 = FUN_144b3e610(puVar3[-3] + 0x90);
        if (cVar1 != '\0') {
          local_80 = 0x98;
          uVar2 = (*DAT_14c787670)(0,&local_80,0);
          if (DAT_14c787680 != (code *)0x0) {
            (*DAT_14c787680)(uVar2,"hkaiClusterGraph");
          }
          FUN_144c36ab0(uVar2);
          FUN_1409380d0(puVar3);
          *puVar3 = uVar2;
          local_78 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 0x90));
          FUN_144c62b90(puVar3[-3],uVar2);
          FUN_144c36d70(*puVar3);
        }
      }
      puVar3 = puVar3 + 0x3c;
      lVar4 = lVar4 + -0x1e0;
    } while (lVar4 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e46ef6 FUN_147e46ef6 body=500 status=ok
// SIG undefined FUN_147e46ef6(void)

void FUN_147e46ef6(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void **ppvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0x18) == 0) && (lVar4 = FUN_14479d2ce(param_1 + 0xe0), lVar4 != 0)) {
    iVar1 = *(int *)(param_1 + 0x68);
    local_80 = param_1;
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      puVar5 = (undefined8 *)(lVar6 + 0x18);
      do {
        FUN_147e41e56(puVar5 + -3,&local_78,lVar4);
        iVar3 = local_58;
        pvVar2 = local_60;
        puVar5[-3] = local_78;
        *(undefined4 *)(puVar5 + -2) = local_70;
        *(undefined4 *)((longlong)puVar5 + -0xc) = uStack_6c;
        *(undefined4 *)(puVar5 + -1) = uStack_68;
        *(undefined4 *)((longlong)puVar5 + -4) = uStack_64;
        if ((void **)(puVar5 + -3) != &local_78) {
          lVar8 = (longlong)local_58;
          *(int *)(puVar5 + 1) = local_58;
          if (local_58 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar5,local_58);
            if (iVar3 != 0) {
              memcpy((void *)*puVar5,pvVar2,lVar8 * 2);
            }
          }
        }
        *(undefined4 *)(puVar5 + 2) = local_50;
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar9 = puVar5 + 6;
        puVar5 = puVar5 + 9;
      } while (puVar9 != (undefined8 *)(lVar6 + (longlong)iVar1 * 0x48));
    }
    if ((longlong)*(int *)(local_80 + 0x88) != 0) {
      lVar6 = (longlong)*(int *)(local_80 + 0x88) * 0x50;
      ppvVar7 = (void **)(*(longlong *)(local_80 + 0x80) + 0x38);
      do {
        FUN_147e41e56(ppvVar7 + -3,&local_78,lVar4);
        iVar1 = local_58;
        pvVar2 = local_60;
        ppvVar7[-3] = local_78;
        *(undefined4 *)(ppvVar7 + -2) = local_70;
        *(undefined4 *)((longlong)ppvVar7 + -0xc) = uStack_6c;
        *(undefined4 *)(ppvVar7 + -1) = uStack_68;
        *(undefined4 *)((longlong)ppvVar7 + -4) = uStack_64;
        if (ppvVar7 != &local_60) {
          lVar8 = (longlong)local_58;
          *(int *)(ppvVar7 + 1) = local_58;
          if (local_58 == 0 && *(int *)((longlong)ppvVar7 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar7 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(ppvVar7,local_58);
            if (iVar1 != 0) {
              memcpy(*ppvVar7,pvVar2,lVar8 * 2);
            }
          }
        }
        *(undefined4 *)(ppvVar7 + 2) = local_50;
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        ppvVar7 = ppvVar7 + 10;
        lVar6 = lVar6 + -0x50;
      } while (lVar6 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e470ec FUN_147e470ec body=78 status=ok
// SIG undefined FUN_147e470ec(void)

longlong * FUN_147e470ec(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140298e51(*param_1,(int)param_1[1]);
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



// FUNCTION 147e4713a FUN_147e4713a body=78 status=ok
// SIG undefined FUN_147e4713a(void)

longlong * FUN_147e4713a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140937fd9(*param_1,(int)param_1[1]);
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



// FUNCTION 147e47188 FUN_147e47188 body=109 status=ok
// SIG undefined FUN_147e47188(void)

undefined8 * FUN_147e47188(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_14aba2aa0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  FUN_147e4ac7e(param_1 + 4,param_2 + 0x20);
  FUN_147e4ad08(param_1 + 6,param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 147e471f6 FUN_147e471f6 body=89 status=ok
// SIG undefined FUN_147e471f6(void)

void FUN_147e471f6(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  if (param_1[2] != 0) {
    FUN_144b3f230();
  }
  if (param_1[1] != 0) {
    FUN_144b3f230();
  }
  if (*param_1 != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 147e47250 FUN_147e47250 body=128 status=ok
// SIG undefined FUN_147e47250(void)

void FUN_147e47250(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14aba2aa0;
  FUN_147e4ae00(param_1 + 6);
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x3c)) && (lVar1 = param_1[6], lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar1,(longlong)*(int *)((longlong)param_1 + 0x3c) * 0x18);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_147e4ae7e(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e472d0 FUN_147e472d0 body=528 status=ok
// SIG undefined FUN_147e472d0(void)

longlong FUN_147e472d0(float *param_1,undefined8 *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar5 = (longlong)*(int *)(param_2 + 1);
  if (lVar5 != 0) {
    dVar2 = (double)param_1[9] * 100.0;
    dVar3 = (double)param_1[5] * 100.0;
    dVar4 = (double)param_1[1] * 100.0;
    dVar8 = (double)param_1[8] * 100.0;
    dVar9 = (double)param_1[4] * 100.0;
    dVar10 = (double)*param_1 * 100.0;
    dVar11 = dVar10;
    if (dVar4 <= dVar10) {
      dVar11 = dVar4;
    }
    dVar12 = dVar9;
    if (dVar3 <= dVar9) {
      dVar12 = dVar3;
    }
    dVar13 = dVar8;
    if (dVar2 <= dVar8) {
      dVar13 = dVar2;
    }
    if (dVar10 <= dVar4) {
      dVar10 = dVar4;
    }
    if (dVar9 <= dVar3) {
      dVar9 = dVar3;
    }
    if (dVar8 <= dVar2) {
      dVar8 = dVar2;
    }
    dVar2 = (double)param_1[10] * 100.0;
    dVar3 = (double)param_1[6] * 100.0;
    dVar4 = (double)param_1[2] * 100.0;
    if (dVar4 <= dVar11) {
      dVar11 = dVar4;
    }
    if (dVar3 <= dVar12) {
      dVar12 = dVar3;
    }
    if (dVar2 <= dVar13) {
      dVar13 = dVar2;
    }
    if (dVar10 <= dVar4) {
      dVar10 = dVar4;
    }
    if (dVar9 <= dVar3) {
      dVar9 = dVar3;
    }
    if (dVar8 <= dVar2) {
      dVar8 = dVar2;
    }
    dVar4 = (double)param_1[0xb] * 100.0;
    dVar3 = (double)param_1[7] * 100.0;
    dVar2 = (double)param_1[3] * 100.0;
    if (dVar2 <= dVar11) {
      dVar11 = dVar2;
    }
    if (dVar3 <= dVar12) {
      dVar12 = dVar3;
    }
    if (dVar4 <= dVar13) {
      dVar13 = dVar4;
    }
    if (dVar10 <= dVar2) {
      dVar10 = dVar2;
    }
    if (dVar9 <= dVar3) {
      dVar9 = dVar3;
    }
    if (dVar8 <= dVar4) {
      dVar8 = dVar4;
    }
    pdVar7 = (double *)*param_2;
    lVar6 = lVar5 * 9;
    pdVar1 = pdVar7 + lVar5 * 9;
    do {
      if ((((*pdVar7 <= dVar10) && (dVar11 < pdVar7[3] || dVar11 == pdVar7[3])) &&
          (pdVar7[1] <= dVar9)) &&
         (((dVar12 < pdVar7[4] || dVar12 == pdVar7[4] && (pdVar7[2] <= dVar8 + 100.0)) &&
          (dVar13 + -100.0 < pdVar7[5] || dVar13 + -100.0 == pdVar7[5])))) {
        lVar6 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        if ((longlong)*(int *)(pdVar7 + 8) == 0) {
          return lVar6;
        }
        lVar5 = 0;
        while (*(int *)((longlong)pdVar7[7] + lVar5) != param_3) {
          lVar5 = lVar5 + 4;
          if ((longlong)*(int *)(pdVar7 + 8) * 4 == lVar5) {
            return lVar6;
          }
        }
      }
      pdVar7 = pdVar7 + 9;
    } while (pdVar7 != pdVar1);
  }
  return 0;
}



// FUNCTION 147e474e0 FUN_147e474e0 body=217 status=ok
// SIG undefined FUN_147e474e0(void)

longlong * FUN_147e474e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x170,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aba46d0;
  plVar1 = plVar3 + 2;
  FUN_147e46a5c(plVar1,param_2,param_3);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_147e66716(&local_40,plVar1);
  plVar1 = local_38;
  *param_1 = (longlong)local_40;
  param_1[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e475ba FUN_147e475ba body=217 status=ok
// SIG undefined FUN_147e475ba(void)

longlong * FUN_147e475ba(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aba4710;
  plVar1 = plVar3 + 2;
  FUN_147e3cc82(plVar1,param_2,param_3);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_147e667e6(&local_40,plVar1);
  plVar1 = local_38;
  *param_1 = (longlong)local_40;
  param_1[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47694 FUN_147e47694 body=160 status=ok
// SIG undefined FUN_147e47694(void)

undefined8 FUN_147e47694(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x100;
  uVar2 = (*DAT_14c787670)(0,&local_30,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(uVar2,"hkaiViewerContext");
  }
  FUN_144d3f2e0(uVar2);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_147e6688e((longlong *)(param_1 + 0x18),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47738 FUN_147e47738 body=74 status=ok
// SIG undefined FUN_147e47738(void)

void FUN_147e47738(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if ((param_2 != 0) && (0 < (longlong)*(int *)(param_1 + 0x20))) {
    plVar2 = (longlong *)(param_1 + 0x18);
    uVar1 = 0;
    do {
      if (*(longlong *)(*plVar2 + uVar1 * 8) == param_2) {
        FUN_147e66914(plVar2,uVar1 & 0xffffffff);
        FUN_147e66966(plVar2);
        return;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x20) != uVar1);
  }
  return;
}



// FUNCTION 147e47782 FUN_147e47782 body=225 status=ok
// SIG undefined FUN_147e47782(void)

undefined8 FUN_147e47782(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_149e020b0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14aba4810;
  local_28[3] = &DAT_14cb1b430;
  local_28[4] = &LAB_147e47864;
  FUN_1448b6402(&DAT_14c8687d0,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4786e FUN_147e4786e body=22 status=ok
// SIG undefined FUN_147e4786e(void)

undefined8 FUN_147e4786e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x680));
  }
  return 0;
}



// FUNCTION 147e47884 FUN_147e47884 body=7 status=ok
// SIG undefined FUN_147e47884(void)

undefined1 FUN_147e47884(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x680);
}



// FUNCTION 147e4788c FUN_147e4788c body=32 status=ok
// SIG undefined FUN_147e4788c(void)

void FUN_147e4788c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x680) != param_2)) {
    *(char *)(lVar1 + 0x680) = param_2;
    FUN_140acee66();
    return;
  }
  return;
}



// FUNCTION 147e478ac FUN_147e478ac body=37 status=ok
// SIG undefined FUN_147e478ac(void)

bool FUN_147e478ac(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1479ed816();
  bVar2 = true;
  if (cVar1 == '\0') {
    bVar2 = *(int *)(param_1 + 0x1f8) != 0;
  }
  return bVar2;
}



// FUNCTION 147e478d2 FUN_147e478d2 body=86 status=ok
// SIG undefined FUN_147e478d2(void)

void FUN_147e478d2(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x684) == '\x01') {
    if ((*(longlong *)(param_1 + 0x720) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x4f5) = 0;
      *(byte *)(lVar1 + 0x2de) = *(byte *)(lVar1 + 0x2de) | 0xc;
      *(undefined1 *)(lVar1 + 0x4f5) = 1;
      *(uint *)(lVar1 + 0x590) = *(uint *)(lVar1 + 0x590) & 0xffffe0ff | 0x200;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4f5) = 1;
  }
  return;
}



// FUNCTION 147e47928 FUN_147e47928 body=93 status=ok
// SIG undefined FUN_147e47928(void)

undefined8 * FUN_147e47928(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147e66d9e(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47986 FUN_147e47986 body=173 status=ok
// SIG undefined FUN_147e47986(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e47986(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x684) == '\x01') {
    if ((*(longlong *)(param_1 + 0x720) == 0) ||
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar4 == 0)) {
LAB_147e479ea:
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
      uVar3 = DAT_14cb1ce20;
      uVar2 = uRam000000014cb1ce14;
      uVar6 = (undefined4)DAT_14cb1ce18;
      uVar1 = (ulonglong)DAT_14cb1ce18 >> 0x20;
      *(undefined4 *)(param_2 + 4) = _DAT_14cb1ce10;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 5) = uVar6;
      *(int *)((longlong)param_2 + 0x2c) = (int)uVar1;
      param_2[6] = uVar3;
      param_2[7] = 0;
      param_2[8] = 0x3ff0000000000000;
      param_2[9] = 0x3ff0000000000000;
      param_2[10] = 0x3ff0000000000000;
      param_2[0xb] = 0;
      return;
    }
    puVar5 = (undefined8 *)(lVar4 + 0x240);
  }
  else {
    if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_147e479ea;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    puVar5 = &DAT_14c846480;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x240);
    }
  }
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 147e47a34 FUN_147e47a34 body=285 status=ok
// SIG undefined FUN_147e47a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147e47a34(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x684) == '\x01') {
    if ((*(longlong *)(param_1 + 0x720) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar1 == 0)) {
      param_2[2] = DAT_14cb1ce20;
      dVar2 = DAT_14cb1ce18;
      *param_2 = _DAT_14cb1ce10;
      param_2[1] = dVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_14380b060(param_1,&local_58);
    dVar2 = (local_30 - local_48) * 0.5 * *(double *)(lVar1 + 0x290);
    dVar4 = (local_38 - local_50) * 0.5 * *(double *)(lVar1 + 0x288);
    dVar3 = (local_40 - local_58) * 0.5 * *(double *)(lVar1 + 0x280);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x290) * *(double *)(param_1 + 0x650);
    dVar4 = *(double *)(param_1 + 0x288) * *(double *)(param_1 + 0x648);
    dVar3 = *(double *)(param_1 + 0x280) * *(double *)(param_1 + 0x640);
  }
  *param_2 = dVar3;
  param_2[1] = dVar4;
  param_2[2] = dVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47b54 FUN_147e47b54 body=456 status=ok
// SIG undefined FUN_147e47b54(void)

undefined8 FUN_147e47b54(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [40];
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 == (longlong *)0x0) || (cVar6 = FUN_144a61b4f(), cVar6 == '\0')) goto LAB_147e47c46;
  lVar7 = FUN_140a40fb0(param_2);
  if ((lVar7 != 0) && (lVar4 = *(longlong *)(lVar7 + 0x1518), lVar4 != 0)) {
    iVar2 = *(int *)(lVar4 + 0x250);
    plVar5 = *(longlong **)(lVar4 + 0x488);
    if (plVar5 == (longlong *)0x0) {
      iVar3 = *(int *)(param_1 + 0x88);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      iVar3 = *(int *)(param_1 + 0x88);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (iVar2 == iVar3) {
      lVar7 = *(longlong *)(lVar7 + 0x1518);
      if (*(int *)(lVar7 + 0x260) - 1U < 2) {
        if ((*(int *)(lVar7 + 600) != -1) && (*(int *)(lVar7 + 0x25c) != -1)) {
LAB_147e47c14:
          cVar6 = FUN_144a872af(lVar7 + 0x268);
          if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
          }
        }
      }
      else if (*(int *)(lVar7 + 0x260) == 3) goto LAB_147e47c14;
LAB_147e47c46:
      uVar9 = 0;
      goto LAB_147e47c48;
    }
  }
  if (*(uint *)(param_1 + 0x88) < 0x15) {
    local_4c = 0;
    local_50 = 0.0;
    (**(code **)(*param_2 + 0x528))(param_2,&local_4c,&local_50);
    lVar7 = param_2[0x39];
    if (lVar7 == 0) {
      puVar8 = &DAT_14c8464e0;
      local_38 = DAT_14c8464f0;
    }
    else {
      puVar8 = (undefined8 *)(lVar7 + 0x260);
      local_38 = *(double *)(lVar7 + 0x270);
    }
    local_48 = *puVar8;
    uStack_40 = puVar8[1];
    local_38 = local_38 - (double)local_50;
  }
  else {
    lVar7 = param_2[0x39];
    if (lVar7 == 0) {
      puVar8 = &DAT_14c8464e0;
      local_38 = DAT_14c8464f0;
    }
    else {
      puVar8 = (undefined8 *)(lVar7 + 0x260);
      local_38 = *(double *)(lVar7 + 0x270);
    }
    local_48 = *puVar8;
    uStack_40 = puVar8[1];
  }
  uVar9 = FUN_14024b35c(param_1,&local_48);
LAB_147e47c48:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47d32 FUN_147e47d32 body=34 status=ok
// SIG undefined FUN_147e47d32(void)

int FUN_147e47d32(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
    bVar1 = FUN_14024ae2e();
    iVar2 = bVar1 + 1;
  }
  return iVar2;
}



// FUNCTION 147e47d54 FUN_147e47d54 body=249 status=ok
// SIG undefined FUN_147e47d54(void)

void FUN_147e47d54(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    if (param_3 == 2) {
      uVar6 = *(undefined8 *)(lVar5 + 0x260);
      uVar7 = *(undefined8 *)(lVar5 + 0x268);
      uVar3 = *(undefined8 *)(lVar5 + 0x270);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1403e3958(param_2,iVar4);
      }
      lVar5 = *param_2;
      puVar2 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x18);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = uVar3;
    }
    else if ((param_3 == 1) && (*(char *)(lVar5 + 0x638) == '\x01')) {
      local_48 = *(undefined8 *)(lVar5 + 0x630);
      local_58 = *(undefined4 *)(lVar5 + 0x620);
      uStack_54 = *(undefined4 *)(lVar5 + 0x624);
      uStack_50 = *(undefined4 *)(lVar5 + 0x628);
      uStack_4c = *(undefined4 *)(lVar5 + 0x62c);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1403e3958(param_2,iVar4);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = local_48;
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e47e4e FUN_147e47e4e body=42 status=ok
// SIG undefined FUN_147e47e4e(void)

undefined8 FUN_147e47e4e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e47e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e47e78 FUN_147e47e78 body=68 status=ok
// SIG undefined FUN_147e47e78(void)

longlong FUN_147e47e78(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14477bcf0();
  lVar2 = 0;
  if ((((-1 < (int)param_1) && ((int)param_1 < *(int *)(lVar1 + 0x50))) &&
      (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)param_1 * 8),
      DAT_14c950c29 == '\x01')) && (lVar2 != 0)) {
    FUN_1456cec3c(lVar2);
  }
  return lVar2;
}



// FUNCTION 147e47ebc FUN_147e47ebc body=103 status=ok
// SIG undefined FUN_147e47ebc(void)

void FUN_147e47ebc(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_147e673e4(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 8),(void *)*param_1,(ulonglong)uVar1 << 3);
  lVar2 = *param_2;
  *(longlong *)*param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147e47f23 FUN_147e47f23 body=103 status=ok
// SIG undefined FUN_147e47f23(void)

undefined8 FUN_147e47f23(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 2 && iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x20);
    if ((iVar2 == 0) || (*(int *)(*plVar1 + (longlong)(iVar2 + -1) * 4) != 1)) {
      *(uint *)(param_1 + 0x28) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
        FUN_140b39638(plVar1);
      }
      lVar3 = *plVar1;
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return uVar4;
}



// FUNCTION 147e47f8a FUN_147e47f8a body=141 status=ok
// SIG undefined FUN_147e47f8a(void)

undefined8 * FUN_147e47f8a(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
LAB_147e47ff2:
    uVar4 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x58);
    plVar1 = plVar3 + *(int *)(param_1 + 0x60);
    uVar4 = 0;
    do {
      lVar2 = *plVar3;
      if ((longlong)*(int *)(lVar2 + 0x18) != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar2 + 0x10) + 4 + lVar5) == param_3) {
            if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x48) != '\x01')) || (*(int *)(lVar2 + 8) != 8)
                ) || (*(int *)(lVar2 + 0x28) != 0)) goto LAB_147e47ff2;
            uVar4 = FUN_14479d2ce(lVar2,0);
            goto LAB_147e47ff4;
          }
          lVar5 = lVar5 + 0x60;
        } while ((longlong)*(int *)(lVar2 + 0x18) * 0x60 != lVar5);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
LAB_147e47ff4:
  *param_2 = 0;
  FUN_14485c47a(param_2,uVar4);
  return param_2;
}



// FUNCTION 147e48018 FUN_147e48018 body=113 status=ok
// SIG undefined FUN_147e48018(void)

undefined4 FUN_147e48018(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(undefined8 *)(lVar2 + lVar4));
      if (lVar3 == param_2) {
        lVar2 = *(longlong *)(lVar2 + lVar4);
        if (*(char *)(lVar2 + 0x48) != '\x01') {
          return 0xffffffff;
        }
        if (*(int *)(lVar2 + 8) != 8) {
          return 0xffffffff;
        }
        if (*(int *)(lVar2 + 0x28) != 0) {
          return 0xffffffff;
        }
        if (*(int *)(lVar2 + 0x18) == 0) {
          return 0xffffffff;
        }
        return *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 4);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 147e48089 FUN_147e48089 body=103 status=ok
// SIG undefined FUN_147e48089(void)

undefined8 FUN_147e48089(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 2 && iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x20);
    if ((iVar2 == 0) || (*(int *)(*plVar1 + (longlong)(iVar2 + -1) * 4) != 1)) {
      *(uint *)(param_1 + 0x28) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
        FUN_140b39638(plVar1);
      }
      lVar3 = *plVar1;
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return uVar4;
}



// FUNCTION 147e480f0 FUN_147e480f0 body=17 status=ok
// SIG undefined FUN_147e480f0(void)

undefined4 * FUN_147e480f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0xffffffff;
  return param_1;
}



// FUNCTION 147e48101 FUN_147e48101 body=1349 status=ok
// SIG undefined FUN_147e48101(void)

ulonglong FUN_147e48101(float *param_1,longlong *param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  float fVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_2b8 [32];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  double local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  longlong local_1d8;
  int local_1d0;
  char local_1bc;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  float local_128;
  longlong local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar7 = FUN_144a872af(param_1 + 10);
    if (cVar7 != '\0') {
      cVar7 = FUN_144a872af(param_1 + 0x10);
      if (cVar7 != '\0') {
        local_248 = *(double *)(param_1 + 0xe);
        local_258 = *(double *)(param_1 + 10);
        uStack_250 = *(double *)(param_1 + 0xc);
        local_260 = *(ulonglong *)(param_1 + 0x16);
        if ((local_260 & 0x8000000080000000) != 0) {
          local_1a0 = param_1[2];
          local_1a8 = *(undefined8 *)param_1;
          local_198 = *(undefined8 *)(param_1 + 4);
          local_190 = *(longlong **)(param_1 + 6);
          if (local_190 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)((longlong)local_190 + 0xc) = *(int *)((longlong)local_190 + 0xc) + 1;
            UNLOCK();
            plVar9 = local_190;
          }
          local_188 = *(undefined8 *)(param_1 + 8);
          uStack_180 = CONCAT44(uStack_180._4_4_,0x43fa0000);
          local_258._4_4_ = (float)((ulonglong)local_258 >> 0x20);
          uStack_250._4_4_ = (float)((ulonglong)uStack_250 >> 0x20);
          local_178 = (float)local_258;
          fStack_174 = local_258._4_4_;
          fStack_170 = (float)uStack_250;
          fStack_16c = uStack_250._4_4_;
          local_168 = local_248;
          cVar7 = FUN_14488ab98(&local_1a8,&local_258,&local_260);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          if (cVar7 == '\0') goto LAB_147e48464;
        }
        local_268 = *(double *)(param_1 + 0x14);
        local_278 = param_1[0x10];
        fStack_274 = param_1[0x11];
        fStack_270 = param_1[0x12];
        fStack_26c = param_1[0x13];
        local_280 = *(ulonglong *)(param_1 + 0x18);
        if ((local_280 & 0x8000000080000000) != 0) {
          local_1a0 = param_1[2];
          local_1a8 = *(undefined8 *)param_1;
          local_198 = *(undefined8 *)(param_1 + 4);
          local_190 = *(longlong **)(param_1 + 6);
          if (local_190 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)((longlong)local_190 + 0xc) = *(int *)((longlong)local_190 + 0xc) + 1;
            UNLOCK();
            plVar9 = local_190;
          }
          local_188 = *(undefined8 *)(param_1 + 8);
          uStack_180 = CONCAT44(uStack_180._4_4_,0x43fa0000);
          local_178 = local_278;
          fStack_174 = fStack_274;
          fStack_170 = fStack_270;
          fStack_16c = fStack_26c;
          local_168 = local_268;
          cVar7 = FUN_14488ab98(&local_1a8,&local_278,&local_280);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          if (cVar7 == '\0') goto LAB_147e48464;
        }
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x598);
        FUN_144afd2fa(&DAT_14cb1d000);
        SRWLock = (PSRWLOCK)(lVar13 + 0x250);
        AcquireSRWLockExclusive(SRWLock);
        lVar13 = *(longlong *)(lVar13 + 0x78);
        if ((lVar13 == 0) || (lVar13 = *(longlong *)(lVar13 + 0x140), lVar13 == 0)) {
          uVar10 = 0;
        }
        else {
          FUN_144b40b30(&local_1a8);
          uVar4 = (uint)local_260 << 0x16 | local_260._4_4_;
          if ((int)((uint)local_260 | local_260._4_4_) < 0) {
            uVar4 = 0xffffffff;
          }
          local_298 = (float)local_258 * 0.01;
          fStack_294 = (float)uStack_250 * 0.01;
          fStack_290 = (float)local_248 * 0.01;
          fStack_28c = (float)local_248 * 0.01;
          FUN_144b40980(&local_238,&local_298,uVar4);
          local_188 = CONCAT44(fStack_234,local_238);
          uStack_180 = CONCAT44(fStack_22c,fStack_230);
          local_178 = local_228;
          uVar4 = (uint)local_280 << 0x16 | local_280._4_4_;
          if ((int)((uint)local_280 | local_280._4_4_) < 0) {
            uVar4 = 0xffffffff;
          }
          local_168 = local_218;
          uStack_160 = uStack_210;
          local_158 = local_208;
          local_238 = (float)(double)CONCAT44(fStack_274,local_278) * 0.01;
          fStack_234 = (float)(double)CONCAT44(fStack_26c,fStack_270) * 0.01;
          fStack_230 = (float)local_268 * 0.01;
          fStack_22c = (float)local_268 * 0.01;
          FUN_144b40aa0(&local_1a8,&local_238,uVar4);
          local_128 = *param_1 * 0.01;
          if (*(longlong *)(param_1 + 8) == 0) {
            local_108 = 0;
LAB_147e484e3:
            lVar8 = 0;
            local_110 = 0;
          }
          else {
            local_108 = FUN_1438167d4();
            if (*(longlong *)(param_1 + 8) == 0) goto LAB_147e484e3;
            lVar8 = FUN_1438167d4(param_1 + 4);
            local_110 = lVar8 + 0x40;
            if (lVar8 == 0) {
              local_110 = 0;
            }
            lVar8 = *(longlong *)(param_1 + 8);
          }
          lVar12 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x598) + 400);
          local_fc = 0xffffffffffffffff;
          local_100 = -NAN;
          if (lVar12 != 0) {
            pfVar11 = *(float **)(*(longlong *)(lVar8 + 0x598) + 0x188);
            lVar12 = lVar12 * 0xc;
            do {
              if (*pfVar11 == param_1[2]) {
                if (pfVar11 != (float *)0x0) {
                  local_fc = *(undefined8 *)(pfVar11 + 1);
                  local_100 = param_1[2];
                }
                break;
              }
              pfVar11 = pfVar11 + 3;
              lVar12 = lVar12 + -0xc;
            } while (lVar12 != 0);
          }
          FUN_144b40a10(&local_238);
          FUN_144b41050(lVar13,&local_1a8,&local_238);
          uVar10 = CONCAT71((int7)((ulonglong)&local_1a8 >> 8),local_1bc == '\x01');
          if ((param_2 != (longlong *)0x0 && local_1bc == '\x01') && ((longlong)local_1d0 != 0)) {
            lVar13 = 0;
            do {
              fVar5 = *(float *)(local_1d8 + lVar13);
              fVar6 = ((float *)(local_1d8 + lVar13))[1];
              fVar2 = *(float *)(local_1d8 + 8 + lVar13);
              iVar3 = (int)param_2[1];
              lVar8 = (longlong)iVar3;
              *(uint *)(param_2 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                FUN_1403e3958(param_2,iVar3);
              }
              lVar12 = *param_2;
              *(double *)(lVar12 + lVar8 * 0x18) = (double)fVar5 * 100.0;
              *(double *)(lVar12 + 8 + lVar8 * 0x18) = (double)fVar6 * 100.0;
              *(double *)(lVar12 + 0x10 + lVar8 * 0x18) = (double)fVar2 * 100.0;
              lVar13 = lVar13 + 0x30;
            } while ((longlong)local_1d0 * 0x30 != lVar13);
          }
          FUN_144b40c40(&local_238);
          FUN_144b409a0(&local_1a8);
        }
        FUN_144afd32c(&DAT_14cb1d000);
        ReleaseSRWLockExclusive(SRWLock);
        goto LAB_147e48466;
      }
    }
  }
LAB_147e48464:
  uVar10 = 0;
LAB_147e48466:
  if ((local_80 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e48647 FUN_147e48647 body=193 status=ok
// SIG undefined FUN_147e48647(void)

undefined4 * FUN_147e48647(undefined4 *param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_143815780(&local_78);
  if (local_74 == '\x01') {
    FUN_147e4384e(&local_70,local_78);
    if (local_30 == 0) {
      *(undefined8 *)(param_1 + 0xc) = local_40;
      *(undefined8 *)(param_1 + 0xe) = uStack_38;
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 4) = local_60;
      *(undefined8 *)(param_1 + 6) = uStack_58;
      *param_1 = local_70;
      param_1[1] = uStack_6c;
      param_1[2] = uStack_68;
      param_1[3] = uStack_64;
    }
    *(longlong *)(param_1 + 0x10) = local_30;
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
    *(undefined1 *)(param_1 + 0x15) = local_1c;
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4870a FUN_147e4870a body=341 status=ok
// SIG undefined FUN_147e4870a(void)

undefined4
FUN_147e4870a(undefined8 param_1,undefined4 *param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  uint local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  FUN_14038cdaa(&local_a0,uVar3,param_4);
  local_78 = local_a0;
  local_70 = local_98;
  local_68 = local_90;
  local_60 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_58 = local_80;
  }
  else {
    LOCK();
    *(int *)((longlong)local_88 + 0xc) = *(int *)((longlong)local_88 + 0xc) + 1;
    UNLOCK();
    local_58 = local_80;
    local_50 = 0x43fa0000;
    local_48 = (undefined4)DAT_14cb1cda8;
    uStack_44 = DAT_14cb1cda8._4_4_;
    uStack_40 = (undefined4)DAT_14cb1cdb0;
    uStack_3c = DAT_14cb1cdb0._4_4_;
    local_38 = DAT_14cb1cdb8;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_50 = param_3;
  if ((*param_4 == 0) || (local_70 < 0x15)) {
    uVar2 = FUN_14488ab98(&local_78,param_5,0);
  }
  else {
    uVar2 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e48860 FUN_147e48860 body=382 status=ok
// SIG undefined FUN_147e48860(void)

undefined4
FUN_147e48860(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
             longlong *param_5)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  uint local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  FUN_14038cdaa(&local_d0,uVar4,param_5);
  local_a8 = local_d0;
  local_a0 = local_c8;
  local_98 = local_c0;
  local_90 = local_b8;
  if (local_b8 == (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
    UNLOCK();
  }
  local_88 = local_b0;
  local_80 = DAT_14cb1cda8;
  uStack_78 = DAT_14cb1cdb0;
  local_70 = DAT_14cb1cdb8;
  local_68 = DAT_14cb1cda8;
  uStack_60 = DAT_14cb1cdb0;
  local_58 = DAT_14cb1cdb8;
  local_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  local_70 = param_2[2];
  local_80 = *param_2;
  uStack_78 = param_2[1];
  local_58 = param_3[2];
  local_68 = *param_3;
  uStack_60 = param_3[1];
  fVar2 = 1.0;
  if (1.0 <= param_4) {
    fVar2 = param_4;
  }
  local_a8 = CONCAT44(local_a8._4_4_,fVar2);
  if ((*param_5 == 0) || (0x14 < local_a0)) {
    uVar3 = FUN_14038d3af(&local_a8,0,0);
  }
  else {
    uVar3 = 0;
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e489e0 FUN_147e489e0 body=379 status=ok
// SIG undefined FUN_147e489e0(void)

undefined4
FUN_147e489e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
             longlong *param_5)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  uint local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  FUN_14038cdaa(&local_d0,uVar4,param_5);
  local_a8 = local_d0;
  local_a0 = local_c8;
  local_98 = local_c0;
  local_90 = local_b8;
  if (local_b8 == (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
    UNLOCK();
  }
  local_88 = local_b0;
  local_80 = DAT_14cb1cda8;
  uStack_78 = DAT_14cb1cdb0;
  local_70 = DAT_14cb1cdb8;
  local_68 = DAT_14cb1cda8;
  uStack_60 = DAT_14cb1cdb0;
  local_58 = DAT_14cb1cdb8;
  local_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  local_70 = param_2[2];
  local_80 = *param_2;
  uStack_78 = param_2[1];
  local_58 = param_3[2];
  local_68 = *param_3;
  uStack_60 = param_3[1];
  fVar2 = 1.0;
  if (1.0 <= param_4) {
    fVar2 = param_4;
  }
  local_a8 = CONCAT44(local_a8._4_4_,fVar2);
  if ((*param_5 == 0) || (local_a0 < 0x15)) {
    uVar3 = FUN_147e48101(&local_a8,0);
  }
  else {
    uVar3 = 0;
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e48b5c FUN_147e48b5c body=21 status=ok
// SIG undefined FUN_147e48b5c(void)

void FUN_147e48b5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_4 = param_1[2];
  return;
}



// FUNCTION 147e48b72 FUN_147e48b72 body=134 status=ok
// SIG undefined FUN_147e48b72(void)

longlong * FUN_147e48b72(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *param_1 = param_2;
  if (param_3 != 0 && (~bVar1 & 1) == 0) {
    FUN_1456cec3c(param_3);
    bVar1 = DAT_14c950c29;
  }
  param_1[1] = param_3;
  if ((param_4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_4);
  }
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 147e48bfc FUN_147e48bfc body=8 status=ok
// SIG undefined FUN_147e48bfc(void)

undefined8 FUN_147e48bfc(void)

{
  return DAT_14cb1ceb0;
}



// FUNCTION 147e48c04 FUN_147e48c04 body=204 status=ok
// SIG undefined FUN_147e48c04(void)

undefined8 * FUN_147e48c04(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_144bdf130(param_1 + 3);
  param_1[3] = &PTR_FUN_14aba4b70;
  param_1[6] = param_1 + 1;
  param_1[7] = (longlong)*(int *)(param_1 + 2);
  param_1[8] = (longlong)*(int *)(param_1 + 2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  if (param_3 != 0) {
    plVar1 = param_1 + 9;
    FUN_140b60414(plVar1,param_3);
    do {
      iVar2 = *(int *)(param_1 + 10);
      *(uint *)(param_1 + 10) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar2 + 1U) {
        FUN_147e4b622(plVar1,iVar2);
      }
      lVar3 = *plVar1;
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffffffffffff;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = 0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  (**(code **)(*(longlong *)*param_1 + 0x218))((longlong *)*param_1,&DAT_14aba4b38);
  return param_1;
}



// FUNCTION 147e48cd2 FUN_147e48cd2 body=269 status=ok
// SIG undefined FUN_147e48cd2(void)

void FUN_147e48cd2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78 [4];
  undefined1 local_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    FUN_147e67820(param_1 + 0x18,0x10);
    iVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
  }
  if (*param_2 != 0) {
    FUN_144bfe310(local_58);
    uVar3 = FUN_144bfe340(local_58,*(undefined8 *)(param_1 + 0x68),0);
    local_80 = param_1 + 0x18;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_147e67998(local_78);
    FUN_147e678a0(uVar3,&local_34,*param_2,local_78);
    if (local_78[0] != 0) {
      FUN_144b3f230();
    }
    FUN_144bfe330(local_58);
    if (-1 < local_34) {
      iVar1 = *(int *)(param_1 + 0x10);
      lVar4 = (longlong)*(int *)(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x48);
      *(int *)(lVar2 + lVar4 * 0xc) = iVar5;
      *(int *)(lVar2 + 4 + lVar4 * 0xc) = iVar1 - iVar5;
      *(undefined4 *)(lVar2 + 8 + lVar4 * 0xc) = 0;
    }
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e48de0 FUN_147e48de0 body=220 status=ok
// SIG undefined FUN_147e48de0(void)

void FUN_147e48de0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = (int)param_1[2];
  plVar2 = (longlong *)*param_1;
  puVar3 = (ulonglong *)plVar2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(plVar2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,param_1[1],(longlong)local_1c);
  FUN_140b60062(*param_1,param_1 + 9);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144bdf150(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e48ebe FUN_147e48ebe body=182 status=ok
// SIG undefined FUN_147e48ebe(void)

void FUN_147e48ebe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (-1 < (int)*(uint *)(param_1 + 0x34))) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)*(uint *)(param_1 + 0x34) << 4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (longlong)*(int *)(param_1 + 0x14) << 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 147e48f74 FUN_147e48f74 body=149 status=ok
// SIG undefined FUN_147e48f74(void)

undefined8 * FUN_147e48f74(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14aba2920;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = param_2;
  FUN_147e4900a(param_1 + 1,local_58);
  FUN_14579fb2e(local_58);
  if ((local_58[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4900a FUN_147e4900a body=121 status=ok
// SIG undefined FUN_147e4900a(void)

undefined8 * FUN_147e4900a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_14579fb6e(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  return param_1;
}



// FUNCTION 147e49084 FUN_147e49084 body=162 status=ok
// SIG undefined FUN_147e49084(void)

undefined8 * FUN_147e49084(undefined8 *param_1,undefined8 param_2,undefined2 param_3,int param_4)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147e48f74();
  *param_1 = &PTR_FUN_14aba2960;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = param_3;
  *(bool *)((longlong)param_1 + 0x3a) = param_4 == -1;
  *(int *)((longlong)param_1 + 0x3c) = param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1446f470e(local_28,L"HavokNav/Runtime",1);
  FUN_145c48e7c(param_1 + 10,local_28);
  FUN_144c6de90(param_1[1]);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49128 FUN_147e49128 body=107 status=ok
// SIG undefined FUN_147e49128(void)

void FUN_147e49128(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aba2960;
  FUN_144c6d7d0(param_1[1]);
  FUN_1414352ec(param_1 + 10);
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_147e49194(param_1 + 4);
  *param_1 = &PTR_LAB_14aba2920;
  FUN_14579fb6e(param_1 + 1);
  FUN_14579fb2e(param_1 + 1);
  return;
}



// FUNCTION 147e49194 FUN_147e49194 body=64 status=ok
// SIG undefined FUN_147e49194(void)

void FUN_147e49194(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147e679e0();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147e491c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e49204 FUN_147e49204 body=245 status=ok
// SIG undefined FUN_147e49204(void)

void FUN_147e49204(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144c2d090(*(undefined8 *)(param_1 + 8),&local_28,*(undefined8 *)(param_1 + 0x20));
  if (local_28 != 0) {
    FUN_144be4a80(&local_48);
    FUN_144be3fc0(local_28,&local_48,0);
    FUN_144be4aa0(&local_48);
    if (local_28 != 0) {
      FUN_144b3f230();
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_147e492fa(param_1 + 0x20,&local_48);
  FUN_147e49194(&local_48);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e492fa FUN_147e492fa body=121 status=ok
// SIG undefined FUN_147e492fa(void)

undefined8 * FUN_147e492fa(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_147e679e0(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  return param_1;
}



// FUNCTION 147e49374 FUN_147e49374 body=269 status=ok
// SIG undefined FUN_147e49374(void)

void FUN_147e49374(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78 [4];
  undefined1 local_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    FUN_147e67820(param_1 + 0x18,0x10);
    iVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
  }
  if (*param_2 != 0) {
    FUN_144bfe310(local_58);
    uVar3 = FUN_144bfe340(local_58,*(undefined8 *)(param_1 + 0x68),0);
    local_80 = param_1 + 0x18;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_147e67998(local_78);
    FUN_147e67c64(uVar3,&local_34,*param_2,local_78);
    if (local_78[0] != 0) {
      FUN_144b3f230();
    }
    FUN_144bfe330(local_58);
    if (-1 < local_34) {
      iVar1 = *(int *)(param_1 + 0x10);
      lVar4 = (longlong)*(int *)(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x48);
      *(int *)(lVar2 + lVar4 * 0xc) = iVar5;
      *(int *)(lVar2 + 4 + lVar4 * 0xc) = iVar1 - iVar5;
      *(undefined4 *)(lVar2 + 8 + lVar4 * 0xc) = 0;
    }
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49482 FUN_147e49482 body=269 status=ok
// SIG undefined FUN_147e49482(void)

void FUN_147e49482(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78 [4];
  undefined1 local_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    FUN_147e67820(param_1 + 0x18,0x10);
    iVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
  }
  if (*param_2 != 0) {
    FUN_144bfe310(local_58);
    uVar3 = FUN_144bfe340(local_58,*(undefined8 *)(param_1 + 0x68),0);
    local_80 = param_1 + 0x18;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_147e67998(local_78);
    FUN_147e67d5c(uVar3,&local_34,*param_2,local_78);
    if (local_78[0] != 0) {
      FUN_144b3f230();
    }
    FUN_144bfe330(local_58);
    if (-1 < local_34) {
      iVar1 = *(int *)(param_1 + 0x10);
      lVar4 = (longlong)*(int *)(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x48);
      *(int *)(lVar2 + lVar4 * 0xc) = iVar5;
      *(int *)(lVar2 + 4 + lVar4 * 0xc) = iVar1 - iVar5;
      *(undefined4 *)(lVar2 + 8 + lVar4 * 0xc) = 0;
    }
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49590 FUN_147e49590 body=375 status=ok
// SIG undefined FUN_147e49590(void)

undefined8 * FUN_147e49590(undefined8 *param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147e48f74();
  *param_1 = &PTR_FUN_14aba29a0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(float *)(param_1 + 0xd) = param_4 / 1000.0;
  FUN_144bda160(local_98);
  local_98[0] = 0;
  local_58 = CONCAT71(local_58._1_7_,2);
  local_94 = param_3;
  FUN_147e67f18(local_70,param_3,&local_58);
  local_60 = 0;
  local_58 = 0xc0;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkAsyncThreadPool");
  }
  FUN_144bdb2e0(puVar1,local_98);
  *puVar1 = &PTR_FUN_14aba4a80;
  FUN_144bdde80(puVar1 + 0xf);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0x8000000000000000;
  uVar2 = FUN_144b3d480();
  puVar1[0x16] = uVar2;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  FUN_147e67e54(param_1 + 4);
  param_1[4] = puVar1;
  FUN_144c6de90(param_2);
  FUN_147e49708(local_98);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49708 FUN_147e49708 body=147 status=ok
// SIG undefined FUN_147e49708(void)

void FUN_147e49708(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0 && -1 < *(int *)(param_1 + 0x34)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_144b49dd0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (longlong)*(int *)(param_1 + 0x14) << 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 147e4979c FUN_147e4979c body=187 status=ok
// SIG undefined FUN_147e4979c(void)

void FUN_147e4979c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14aba29a0;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x18))();
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_147e49858(param_1 + 4,&local_38);
    FUN_147e498d2(&local_38);
  }
  FUN_144c6d7d0(param_1[1]);
  FUN_147e49194(param_1 + 10);
  FUN_147e49912(param_1 + 7);
  FUN_147e498d2(param_1 + 4);
  *param_1 = &PTR_LAB_14aba2920;
  FUN_14579fb6e(param_1 + 1);
  FUN_14579fb2e(param_1 + 1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49858 FUN_147e49858 body=121 status=ok
// SIG undefined FUN_147e49858(void)

undefined8 * FUN_147e49858(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_147e67e54(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  return param_1;
}



// FUNCTION 147e498d2 FUN_147e498d2 body=64 status=ok
// SIG undefined FUN_147e498d2(void)

void FUN_147e498d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147e67e54();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147e49907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e49912 FUN_147e49912 body=64 status=ok
// SIG undefined FUN_147e49912(void)

void FUN_147e49912(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147e67eb6();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147e49947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e4995c FUN_147e4995c body=46 status=ok
// SIG undefined FUN_147e4995c(void)

void FUN_147e4995c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144bdb440(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000147e49987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70),*(code **)(*plVar1 + 0x80)
            );
  return;
}



// FUNCTION 147e4998a FUN_147e4998a body=770 status=ok
// SIG undefined FUN_147e4998a(void)

void FUN_147e4998a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  char *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_144c6ded0(*(undefined8 *)(param_1 + 8),local_88);
  cVar2 = FUN_144c6db30(*(undefined8 *)(param_1 + 8),local_88);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar6 = *(longlong *)(lVar1 + 0xf0);
    if (lVar6 == 0) {
      lVar6 = FUN_144b3f4a0();
      *(longlong *)(lVar1 + 0xf0) = lVar6;
    }
    lVar1 = *(longlong *)(lVar6 + 0x3e0);
    if (lVar1 != 0) {
      local_f8 = "TtstartAsyncProcessingRun";
      local_f0 = "";
      FUN_144b3f370(lVar1);
    }
    local_108 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28);
    FUN_144c2d020(*(undefined8 *)(param_1 + 8),&local_90,local_88,1);
    FUN_144c2d050(*(undefined8 *)(param_1 + 8),&local_98,local_90);
    if (local_98 != 0) {
      FUN_144be4a80(&local_f8);
      FUN_144be50a0(&local_f8,local_98,0);
      FUN_144be4aa0(&local_f8);
      if (local_98 != 0) {
        FUN_144b3f230();
      }
    }
    local_f8 = (char *)((ulonglong)local_f8 & 0xffffffffffffff00);
    local_f0 = (char *)0x0;
    local_e8 = 0x8000000000000000;
    local_e0 = 0;
    local_d8 = 0x7fffffff;
    local_d4 = 0;
    local_d0 = 0;
    local_c8 = 0x8000000000000000;
    local_c0 = FUN_144b3d480();
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0x7fffffff7fffffff;
    local_a4 = 0xffffffff;
    local_a0 = 0;
    FUN_14475e23c(&local_f8,local_88);
    FUN_147e6851a(*(longlong *)(param_1 + 8) + 0x100,*(longlong *)(param_1 + 8),&local_f8);
    FUN_147e48ebe(&local_f8);
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_f8 = (char *)0x40;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_f8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"hkReferencedTask");
    }
    puVar3[1] = 0xffffffff;
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_14aba4ab0;
    puVar3[4] = &PTR_FUN_14aba4ad0;
    puVar3[5] = uVar5;
    puVar3[6] = local_90;
    if (local_90 != 0) {
      FUN_144b3d910();
    }
    *(undefined1 *)(puVar3 + 7) = 0;
    FUN_147e67eb6(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    plVar4 = (longlong *)FUN_144bdb440(*(undefined8 *)(param_1 + 0x20));
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + 0x20;
    }
    uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,lVar6,0x40);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70) = uVar5;
    FUN_147e679e0(param_1 + 0x50);
    *(longlong *)(param_1 + 0x50) = local_90;
    if (local_90 != 0) {
      FUN_144b3d910();
      if (local_90 != 0) {
        FUN_144b3f230();
      }
    }
    if (lVar1 != 0) {
      local_f8 = "Et";
      local_f0 = "";
      FUN_144b3f260(lVar1);
    }
  }
  FUN_147e48ebe(local_88);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49c8e FUN_147e49c8e body=247 status=ok
// SIG undefined FUN_147e49c8e(void)

void FUN_147e49c8e(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_28 = "TtFHavokNavTimeSlicedAsyncStepper::CompleteAsyncProcessingRunImmediately";
    local_20 = "";
    FUN_144b3f370(lVar1);
  }
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar2 == '\0') {
    FUN_144bdb460(param_1[4],*(undefined8 *)(param_1[4] + 0x70));
  }
  local_28 = (char *)CONCAT44(local_28._4_4_,0xbf800000);
  FUN_147e6874e(param_1[1] + 0x108);
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49d86 FUN_147e49d86 body=397 status=ok
// SIG undefined FUN_147e49d86(void)

void FUN_147e49d86(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  char *local_48;
  char *pcStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TtFHavokNavTimeSlicedAsyncStepper::CommitAsyncProcessingRun";
    pcStack_40 = "";
    FUN_144b3f370(lVar1);
  }
  plVar2 = (longlong *)FUN_144bdb440(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*plVar2 + 0x18))(plVar2,*(longlong *)(param_1 + 0x20) + 0x70,1,8);
  local_48 = (char *)0x0;
  pcStack_40 = (char *)0x0;
  local_38 = 0;
  FUN_147e49f14(param_1 + 0x38,&local_48);
  FUN_147e49912(&local_48);
  FUN_144ca8d60(&local_50,*(undefined8 *)(param_1 + 0x50));
  if (local_50 != 0) {
    FUN_144be4a80(&local_48);
    FUN_144be50a0(&local_48,local_50,0);
    FUN_144be4aa0(&local_48);
    if (local_50 != 0) {
      FUN_144b3f230();
    }
  }
  local_48 = (char *)0x0;
  pcStack_40 = (undefined *)0x0;
  local_38 = 0;
  FUN_147e492fa(param_1 + 0x50,&local_48);
  FUN_147e49194(&local_48);
  if (lVar1 != 0) {
    local_48 = "Et";
    pcStack_40 = "";
    FUN_144b3f260(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e49f14 FUN_147e49f14 body=121 status=ok
// SIG undefined FUN_147e49f14(void)

undefined8 * FUN_147e49f14(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_147e67eb6(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  return param_1;
}



// FUNCTION 147e49f8e FUN_147e49f8e body=557 status=ok
// SIG undefined FUN_147e49f8e(void)

double * FUN_147e49f8e(longlong param_1,double *param_2,int param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_2 + 0xc) = 0;
  if (DAT_14cb1d000 != 0) {
    pvVar4 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar4 + 1));
    if ((int)pvVar4 == 0) {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x250));
      bVar3 = true;
      goto LAB_147e49ff8;
    }
  }
  bVar3 = false;
LAB_147e49ff8:
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x4d0);
  if (lVar6 != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4c8);
    plVar1 = plVar5 + lVar6;
    do {
      lVar6 = *plVar5;
      if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
        lVar7 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar6 + 0x10) + 4 + lVar7) == param_3) {
            if ((((lVar6 != 0) && (*(int *)(lVar6 + 8) == 8)) && (*(int *)(lVar6 + 0x28) == 0)) &&
               (((*(char *)(lVar6 + 0x48) == '\x01' &&
                 (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x140), lVar6 != 0)) &&
                ((param_3 < *(int *)(lVar6 + 0x40) &&
                 (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + (longlong)param_3 * 0x120),
                 lVar6 != 0)))))) {
              local_88 = *(undefined8 *)(lVar6 + 0x60);
              uStack_80 = *(undefined8 *)(lVar6 + 0x68);
              local_78 = *(undefined8 *)(lVar6 + 0x70);
              uStack_70 = *(undefined8 *)(lVar6 + 0x78);
              local_68 = *(undefined8 *)(lVar6 + 0x80);
              uStack_60 = *(undefined8 *)(lVar6 + 0x88);
              local_58 = *(float *)(lVar6 + 0x90);
              fStack_54 = *(float *)(lVar6 + 0x94);
              fStack_50 = *(float *)(lVar6 + 0x98);
              uStack_4c = *(undefined4 *)(lVar6 + 0x9c);
              FUN_144b43240(&local_48,&local_88);
              *param_2 = (double)local_48;
              param_2[1] = (double)fStack_44;
              param_2[2] = (double)fStack_40;
              param_2[3] = (double)fStack_3c;
              auVar2._8_4_ = SUB84((double)fStack_54 * 100.0,0);
              auVar2._0_8_ = (double)local_58 * 100.0;
              auVar2._12_4_ = (int)((ulonglong)((double)fStack_54 * 100.0) >> 0x20);
              *(undefined1 (*) [16])(param_2 + 4) = auVar2;
              param_2[6] = (double)fStack_50 * 100.0;
              param_2[7] = 0.0;
              param_2[8] = 1.0;
              param_2[9] = 1.0;
              param_2[10] = 1.0;
              param_2[0xb] = 0.0;
              *(undefined1 *)(param_2 + 0xc) = 1;
            }
            goto LAB_147e4a060;
          }
          lVar7 = lVar7 + 0x60;
        } while ((longlong)*(int *)(lVar6 + 0x18) * 0x60 != lVar7);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
LAB_147e4a060:
  if (bVar3) {
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar4 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar4 + -1));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e4a1bc FUN_147e4a1bc body=379 status=ok
// SIG undefined FUN_147e4a1bc(void)

void FUN_147e4a1bc(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 in_RDX;
  longlong lVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 in_register_00001284 [12];
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [48];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = FUN_14479d2ce(in_RDX);
  if (lVar7 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar7 = FUN_147e688ba(lVar2 + 0x508,lVar7);
    if (lVar7 != 0) {
      if (((*(int *)(lVar7 + 8) == 8) && (*(int *)(lVar7 + 0x28) == 0)) &&
         (*(int *)(lVar7 + 0x30) == 0)) {
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x140);
        if (lVar3 != 0) {
          auVar10._4_12_ = in_XMM3._4_12_;
          auVar10._0_4_ = (float)*param_3;
          auVar6._4_12_ = in_register_00001284;
          auVar6._0_4_ = (float)param_3[1];
          auVar11 = insertps(auVar10,auVar6,0x10);
          auVar12._4_4_ = uVar9;
          auVar12._0_4_ = (float)param_3[2];
          auVar12._8_4_ = in_XMM1_Dc;
          auVar12._12_4_ = in_XMM1_Dd;
          auVar12 = insertps(auVar11,auVar12,0x20);
          auVar11._4_4_ = extraout_XMM0_Db;
          auVar11._0_4_ = (float)param_3[3];
          auVar11._8_4_ = extraout_XMM0_Dc;
          auVar11._12_4_ = extraout_XMM0_Dd;
          local_58 = insertps(auVar12,auVar11,0x30);
          FUN_144b45650(local_88);
          FUN_144b46c30(local_a8,local_88);
          local_98 = (float)param_3[4] * 0.01;
          fStack_94 = (float)param_3[5] * 0.01;
          fStack_90 = (float)param_3[6] * 0.01;
          fStack_8c = (float)param_3[6] * 0.01;
          iVar1 = *(int *)(lVar7 + 0x18);
          if ((longlong)iVar1 != 0) {
            lVar4 = *(longlong *)(lVar7 + 0x10);
            lVar8 = 0;
            do {
              lVar5 = *(longlong *)(lVar4 + 0x20 + lVar8);
              if (lVar5 != 0) {
                FUN_144ca4de0(lVar3,lVar5,local_a8);
              }
              lVar8 = lVar8 + 0x40;
            } while ((longlong)iVar1 * 0x40 != lVar8);
          }
          *(undefined1 *)(lVar7 + 0x49) = 1;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
      }
      *(undefined1 *)(lVar2 + 0x590) = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4a338 FUN_147e4a338 body=38 status=ok
// SIG undefined FUN_147e4a338(void)

undefined8 FUN_147e4a338(undefined8 param_1,int param_2)

{
  FUN_147e6657c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4a36a FUN_147e4a36a body=38 status=ok
// SIG undefined FUN_147e4a36a(void)

undefined8 FUN_147e4a36a(undefined8 param_1,int param_2)

{
  FUN_140b25b46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4a39c FUN_147e4a39c body=38 status=ok
// SIG undefined FUN_147e4a39c(void)

undefined8 FUN_147e4a39c(undefined8 param_1,int param_2)

{
  FUN_147e49128();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4a3c2 FUN_147e4a3c2 body=38 status=ok
// SIG undefined FUN_147e4a3c2(void)

undefined8 FUN_147e4a3c2(undefined8 param_1,int param_2)

{
  FUN_147e4979c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4a3e8 FUN_147e4a3e8 body=78 status=ok
// SIG undefined FUN_147e4a3e8(void)

longlong * FUN_147e4a3e8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140938008(*param_1,(int)param_1[1]);
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



// FUNCTION 147e4a436 FUN_147e4a436 body=44 status=ok
// SIG undefined FUN_147e4a436(void)

undefined8 FUN_147e4a436(undefined8 param_1,int param_2)

{
  FUN_147e47250();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4a462 FUN_147e4a462 body=90 status=ok
// SIG undefined FUN_147e4a462(void)

undefined8 * FUN_147e4a462(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_2 != param_1) {
    FUN_140c3e794(param_1 + 1,&PTR_vftable_14c6e47a0,param_2[1],*(undefined4 *)(param_2 + 2));
    FUN_147e4a508(param_1 + 3,&PTR_vftable_14c6e47a0,param_2[3],*(undefined4 *)(param_2 + 4));
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 147e4a4bc FUN_147e4a4bc body=76 status=ok
// SIG undefined FUN_147e4a4bc(void)

undefined8 * FUN_147e4a4bc(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 != param_1) {
    FUN_140c3e794(param_1,&PTR_vftable_14c6e47a0,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_147e4a5d6(param_1 + 2,&PTR_vftable_14c6e47a0,param_2[2],*(undefined4 *)(param_2 + 3));
  }
  return param_1;
}



// FUNCTION 147e4a508 FUN_147e4a508 body=71 status=ok
// SIG undefined FUN_147e4a508(void)

void FUN_147e4a508(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e4a550(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 << 5);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e4a550 FUN_147e4a550 body=134 status=ok
// SIG undefined FUN_147e4a550(void)

void FUN_147e4a550(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 5);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e4a5d6 FUN_147e4a5d6 body=184 status=ok
// SIG undefined FUN_147e4a5d6(void)

void FUN_147e4a5d6(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e4a722(param_1,param_2,param_4);
  }
  if (param_4 < (int)param_1[1]) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 4;
    do {
      *(undefined4 *)(lVar1 + -8 + lVar4) = 0;
      lVar3 = (longlong)*(int *)(lVar1 + -4 + lVar4);
      if ((-1 < lVar3) && (lVar2 = *(longlong *)(lVar1 + -0x10 + lVar4), lVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar2,lVar3 << 4);
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar4) = 0;
      *(undefined4 *)(lVar1 + -4 + lVar4) = 0x80000000;
      lVar4 = lVar4 + -0x10;
    } while ((longlong)param_4 * 0x10 != lVar4);
  }
  FUN_147e4a68e(param_1,param_3,param_4);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e4a68e FUN_147e4a68e body=147 status=ok
// SIG undefined FUN_147e4a68e(void)

void FUN_147e4a68e(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_3 <= (int)*(uint *)(param_1 + 1)) {
    uVar1 = param_3;
  }
  lVar3 = *param_1;
  if (0 < (int)uVar1 && lVar3 != param_2) {
    lVar2 = 0;
    do {
      FUN_140c3e794(lVar3 + lVar2,&PTR_vftable_14c6e47a0,*(undefined8 *)(param_2 + lVar2),
                    *(undefined4 *)(param_2 + 8 + lVar2));
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
    lVar3 = *param_1;
  }
  FUN_147e4a8de((longlong)(int)uVar1 * 0x10 + lVar3,param_3 - uVar1,
                param_2 + (longlong)(int)uVar1 * 0x10);
  return;
}



// FUNCTION 147e4a722 FUN_147e4a722 body=130 status=ok
// SIG undefined FUN_147e4a722(void)

void FUN_147e4a722(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  FUN_147e4a7a4(uVar1,*param_1,*(undefined4 *)(param_1 + 1));
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e4a7a4 FUN_147e4a7a4 body=215 status=ok
// SIG undefined FUN_147e4a7a4(void)

void FUN_147e4a7a4(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  puVar3 = param_2;
  iVar1 = param_3;
  if (0 < param_3) {
    do {
      *param_1 = 0;
      param_1[1] = 0x8000000000000000;
      FUN_147e4a87c(puVar3,&PTR_vftable_14c6e47a0);
      *param_1 = *puVar3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
      param_1 = param_1 + 2;
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 2;
    } while (iVar1 != 0);
    piVar2 = (int *)((longlong)param_2 + 0xc);
    do {
      piVar2[-1] = 0;
      if ((-1 < (longlong)*piVar2) && (*(longlong *)(piVar2 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(piVar2 + -3),(longlong)*piVar2 << 4);
      }
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e4a87c FUN_147e4a87c body=97 status=ok
// SIG undefined FUN_147e4a87c(void)

void FUN_147e4a87c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e4a8de FUN_147e4a8de body=155 status=ok
// SIG undefined FUN_147e4a8de(void)

void FUN_147e4a8de(longlong *param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  if (0 < param_2) {
    iVar12 = 0;
    do {
      *param_1 = 0;
      param_1[1] = -0x8000000000000000;
      iVar3 = (int)param_3[1];
      uVar11 = (ulonglong)iVar3;
      if (0 < (longlong)uVar11) {
        lVar4 = *param_3;
        lVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,uVar11 << 4);
        *param_1 = lVar8;
        *(int *)(param_1 + 1) = iVar3;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        lVar9 = 0;
        do {
          puVar2 = (undefined4 *)(lVar4 + lVar9);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar1 = (undefined4 *)(lVar8 + lVar9);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          lVar9 = lVar9 + 0x10;
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 != 0);
      }
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_2);
  }
  return;
}



// FUNCTION 147e4a97a FUN_147e4a97a body=326 status=ok
// SIG undefined FUN_147e4a97a(void)

void FUN_147e4a97a(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_48 = uVar7 * 8;
  lVar4 = (*DAT_14c787670)(DAT_14c6e47a8,&local_48,DAT_14c6e47ac);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar3 = *param_1;
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar4 + lVar5 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (iVar2 != (int)lVar5);
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar5 = lVar5 + 1;
    } while (iVar2 != (int)lVar5);
  }
  uVar1 = uVar7 * 8 + 8;
  uVar6 = uVar7;
  if (uVar1 <= local_48) {
    uVar6 = uVar7 + 1;
    local_48 = local_48 - 8;
    if (uVar1 <= local_48) {
      uVar6 = uVar6 + (local_48 + uVar7 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  *param_1 = lVar4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4aac2 FUN_147e4aac2 body=45 status=ok
// SIG undefined FUN_147e4aac2(void)

undefined8 * FUN_147e4aac2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4aaf0 FUN_147e4aaf0 body=140 status=ok
// SIG undefined FUN_147e4aaf0(void)

void FUN_147e4aaf0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_147e4ac04(param_1 + 2);
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (lVar1 = param_1[2], lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar1,(longlong)*(int *)((longlong)param_1 + 0x1c) << 4);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4ab7c FUN_147e4ab7c body=136 status=ok
// SIG undefined FUN_147e4ab7c(void)

void FUN_147e4ab7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (longlong)*(int *)(param_1 + 0x24) << 5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (longlong)*(int *)(param_1 + 0x14) << 4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 147e4ac04 FUN_147e4ac04 body=122 status=ok
// SIG undefined FUN_147e4ac04(void)

void FUN_147e4ac04(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar3 = (longlong)(int)param_1[1] << 4;
    do {
      *(undefined4 *)(lVar1 + -8 + lVar3) = 0;
      lVar4 = (longlong)*(int *)(lVar1 + -4 + lVar3);
      if ((-1 < lVar4) && (lVar2 = *(longlong *)(lVar1 + -0x10 + lVar3), lVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar2,lVar4 << 4);
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar3) = 0;
      *(undefined4 *)(lVar1 + -4 + lVar3) = 0x80000000;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


