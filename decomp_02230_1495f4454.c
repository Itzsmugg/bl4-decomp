// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1495f4454 FUN_1495f4454 body=825 status=ok
// SIG undefined FUN_1495f4454(void)

void FUN_1495f4454(longlong param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar10 = FUN_14001cc68(0x220,0x10);
  local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffffffffff00);
  uVar17 = 0;
  FUN_1411b354a(uVar10,0,0,0);
  puVar5 = *(undefined8 **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = uVar10;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
    uVar10 = *(undefined8 *)(param_1 + 0x120);
  }
  FUN_1495f52d4(param_1,uVar10);
  fVar3 = *(float *)(*(longlong *)(param_1 + 0xb0) + 0xb0);
  bVar4 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0xb4);
  if (fVar3 != 1.0 || (bVar4 & 1) != 0) {
    fVar20 = 1.0;
    local_108 = *(double *)(param_1 + 0x120);
    if (fVar3 == 1.0 || (bVar4 & 1) != 0) {
      fVar20 = 0.01;
    }
    local_138 = local_d8;
    local_88 = 0;
    FUN_146bcad02(&local_108,fVar3 * fVar20,
                  CONCAT71((int7)((ulonglong)uVar17 >> 8),fVar3 == 1.0 | bVar4) & 0xffffffffffffff01
                  ,0);
  }
  FUN_145c688c4(*(undefined8 *)(param_1 + 0x120),&local_108,1);
  lVar15 = *(longlong *)(param_1 + 0x120);
  uVar14 = *(int *)(lVar15 + 0x20) * 0x200 + *(int *)(lVar15 + 0x24);
  uVar18 = 0;
  if ((uVar14 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x28) - 1U))) {
    uVar19 = 1;
    uVar11 = 1;
    if (1 < (int)uVar14) {
      uVar19 = uVar14;
    }
    do {
      uVar18 = uVar19;
      if (uVar19 == uVar11) break;
      uVar13 = uVar11 >> 9;
      uVar16 = uVar11 & 0x1ff;
      uVar18 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar15 + 0x28))[uVar13] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  if (uVar18 != uVar14) {
    dVar8 = local_108 + local_f0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x120);
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
      uVar12 = (ulonglong)(uVar18 & 0x1ff);
      pdVar1 = (double *)(lVar7 + uVar12 * 0x18);
      local_128 = *pdVar1 - dVar8 * 0.5;
      uStack_120 = pdVar1[1] - (local_100 + local_e8) * 0.5;
      local_118 = *(double *)(lVar7 + 0x10 + uVar12 * 0x18) - (local_f8 + local_e0) * 0.5;
      cVar9 = FUN_146bfed03(&local_128);
      if (cVar9 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar7 + 0x10 + uVar12 * 0x18) = local_118;
        puVar2 = (undefined4 *)(lVar7 + uVar12 * 0x18);
        *puVar2 = (undefined4)local_128;
        puVar2[1] = local_128._4_4_;
        puVar2[2] = (undefined4)uStack_120;
        puVar2[3] = uStack_120._4_4_;
        if (*(char *)(lVar6 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar6 + 0x214) = *(int *)(lVar6 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar19 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar14) {
        uVar19 = uVar14;
      }
      do {
        uVar11 = uVar19;
        if (uVar19 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar11 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar15 + 0x28) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar11;
    } while (uVar18 != uVar14);
    lVar15 = *(longlong *)(param_1 + 0x120);
  }
  FUN_14851bbe8(*(undefined8 *)(param_1 + 0xb8),lVar15,1,0xf);
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495f478e FUN_1495f478e body=208 status=ok
// SIG undefined FUN_1495f478e(void)

void FUN_1495f478e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14851bab8(*(undefined8 *)(param_1 + 0xb8),0);
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xb0);
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



// FUNCTION 1495f4862 FUN_1495f4862 body=83 status=ok
// SIG undefined FUN_1495f4862(void)

void FUN_1495f4862(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14851b88e(*(undefined8 *)(param_1 + 0xb8),
                *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb5));
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0xb0) + 0xa8);
  FUN_14851b338(uVar1,uVar2);
  FUN_1495f4454(param_1);
  return;
}



// FUNCTION 1495f48b6 FUN_1495f48b6 body=126 status=ok
// SIG undefined FUN_1495f48b6(void)

undefined1 * FUN_1495f48b6(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  FUN_14485c47a(&local_20,0);
  *(undefined8 *)(param_2 + 0x38) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f4942 FUN_1495f4942 body=578 status=ok
// SIG undefined FUN_1495f4942(void)

void FUN_1495f4942(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  float fVar2;
  float _X;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [4];
  undefined1 local_198 [4];
  undefined4 local_194;
  double local_170;
  double local_168;
  double local_160;
  double local_140;
  double local_138;
  double local_130;
  undefined4 local_f4;
  undefined4 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = param_2[2];
  uStack_80 = param_2[3];
  local_78 = param_2[4];
  uStack_70 = param_2[5];
  memset(local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_194 = 0x3f800000;
  local_f4 = 0xffffffff;
  local_1c8 = 0;
  cVar1 = FUN_14855784a(param_1,local_198,&local_98,0);
  if (cVar1 != '\0') {
    local_1b8 = (float)local_130;
    local_1bc = (float)local_138;
    local_1c0 = (float)local_140;
    fStack_1ac = (float)local_160;
    fStack_1b0 = (float)local_168;
    local_1b4 = (float)local_170;
    afStack_1a8[2] = 0.0;
    afStack_1a8[3] = 1.0;
    afStack_1a8[0] = 0.0;
    afStack_1a8[1] = 0.0;
    local_58 = DAT_14c84636c;
    local_60 = DAT_14c846364;
    FUN_146bfaf56(afStack_1a8);
    *(ulonglong *)(param_1 + 0x100) = CONCAT44(fStack_1b0,local_1b4);
    *(ulonglong *)(param_1 + 0x108) = CONCAT44(afStack_1a8[0],fStack_1ac);
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  fVar2 = *(float *)(*(longlong *)(param_1 + 0xa8) + 0xac);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    _X = fVar2 * 0.017453292 * 0.5;
    fVar2 = sinf(_X);
    afStack_1a8[0] = cosf(_X);
    local_1b4 = fVar2 * 0.0;
    fStack_1b0 = local_1b4;
    fStack_1ac = fVar2;
    FUN_1495f5132(param_1 + 0x100);
  }
  if (cVar1 == '\0') {
    FUN_14851bab8(*(undefined8 *)(param_1 + 0xb8),0);
  }
  else {
    *(undefined1 *)(param_1 + 0x11c) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f4b86 FUN_1495f4b86 body=23 status=ok
// SIG undefined FUN_1495f4b86(void)

undefined1 FUN_1495f4b86(longlong param_1)

{
  FUN_1495f4942(param_1 + -0xa0);
  return 1;
}



// FUNCTION 1495f4ba0 FUN_1495f4ba0 body=51 status=ok
// SIG undefined FUN_1495f4ba0(void)

void FUN_1495f4ba0(longlong param_1)

{
  if (*(char *)(param_1 + 0x11c) == '\0') {
    FUN_1495f4bd4();
    FUN_14851bab8(*(undefined8 *)(param_1 + 0xb8),1);
    *(undefined1 *)(param_1 + 0x11c) = 1;
  }
  return;
}



// FUNCTION 1495f4bd4 FUN_1495f4bd4 body=1372 status=ok
// SIG undefined FUN_1495f4bd4(void)

void FUN_1495f4bd4(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_518 [40];
  undefined4 local_4f0;
  undefined1 **local_4e8;
  longlong local_4d8;
  undefined8 uStack_4d0;
  LPCRITICAL_SECTION local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  float local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_458 [12];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  double local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  code *local_390;
  longlong *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  _RTL_CRITICAL_SECTION local_370;
  undefined8 *local_348;
  undefined8 uStack_340;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_31c;
  int local_314;
  undefined1 local_310 [8];
  undefined1 *local_308;
  int local_300;
  undefined1 local_2f0 [32];
  int local_2d0;
  int local_2cc;
  longlong local_1c0;
  int local_1b0;
  int local_1ac;
  undefined8 *local_1a8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  dVar4 = *(double *)(param_1 + 0xf0);
  dVar5 = *(double *)(param_1 + 0xd8);
  FUN_146bff712(local_2f0,*(undefined8 *)(param_1 + 0x120));
  local_3c8 = (double)*(float *)(param_1 + 0x108);
  fVar1 = *(float *)(param_1 + 0x100);
  uVar22 = SUB84((double)*(float *)(param_1 + 0x104),0);
  uVar23 = (undefined4)((ulonglong)(double)*(float *)(param_1 + 0x104) >> 0x20);
  fVar2 = *(float *)(param_1 + 0x10c);
  dVar9 = (double)*(float *)(param_1 + 0x110);
  fVar3 = *(float *)(param_1 + 0x114);
  dVar10 = (double)*(float *)(param_1 + 0x118);
  local_3f8._8_4_ = SUB84(dVar9,0);
  local_3f8._0_8_ = (double)fVar2;
  local_3f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_3e8._8_4_ = SUB84(dVar10,0);
  local_3e8._0_8_ = (double)fVar3;
  local_3e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_3d8._8_4_ = uVar22;
  local_3d8._0_8_ = (double)fVar1;
  local_3d8._12_4_ = uVar23;
  uStack_3c0 = 0;
  local_3b8 = 0x3ff0000000000000;
  uStack_3b0 = 0x3ff0000000000000;
  local_3a8 = 0x3ff0000000000000;
  uStack_3a0 = 0;
  uVar21 = 0;
  local_328 = 0;
  local_320 = 0;
  local_348 = (undefined8 *)0x0;
  uStack_340 = 0;
  local_31c = 0xffffffff00000080;
  local_314 = 0;
  local_308 = (undefined1 *)0x0;
  local_300 = 0;
  InitializeCriticalSection(&local_370);
  SetCriticalSectionSpinCount(&local_370,4000);
  local_4b8._8_4_ = uVar22;
  local_4b8._0_8_ = (double)fVar1;
  local_4b8._12_4_ = uVar23;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0x3ff0000000000000;
  puVar17 = (undefined8 *)local_3f8;
  puVar18 = local_458;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  local_4e8 = &local_380;
  local_380 = (undefined1 *)0x0;
  local_378 = 0;
  local_390 = FUN_144551634;
  local_388 = &local_4d8;
  local_4f0 = 0;
  local_4d8 = param_1;
  uStack_4d0 = &local_348;
  local_4c8 = &local_370;
  local_4c0 = local_2f0;
  local_4a8 = (double)((float)dVar4 + 100.0);
  local_4a0 = (double)fVar2;
  local_498 = dVar9;
  local_490 = (double)fVar3;
  local_488 = dVar10;
  local_480 = (float)dVar5;
  FUN_1401f8d10(L"ParallelFor Task",local_2d0 * 0x200 + local_2cc,1);
  local_4d8 = 0;
  uStack_4d0 = (undefined8 **)0x0;
  uVar16 = local_1b0 * 0x200 + local_1ac;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)*local_1a8 - 1U))) {
    uVar21 = 1;
    uVar20 = 1;
    if (1 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
    }
    do {
      uVar12 = uVar20;
      if ((uint)uVar21 == uVar12) goto LAB_1495f4e42;
      uVar20 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_1a8[uVar12 >> 9] + (ulonglong)(uVar12 & 0x1ff) * 2)
                              - 1U));
    uVar21 = (ulonglong)uVar12;
  }
LAB_1495f4e42:
  if ((uint)uVar21 == uVar16) {
LAB_1495f4e4b:
    FUN_146c38c5e(local_2f0,0);
    local_380 = local_2f0;
    FUN_146bc603c(&local_380,&local_4d8,0);
    FUN_14851bbe8(*(undefined8 *)(param_1 + 0xb8),local_2f0,1,0xf);
    FUN_14851b91a(*(undefined8 *)(param_1 + 0xb8),local_3f8);
    FUN_14851bab8(*(undefined8 *)(param_1 + 0xb8),1);
    if (local_4d8 != 0) {
      FUN_1400020a8();
    }
    DeleteCriticalSection(&local_370);
    local_300 = 0;
    if (local_308 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_348);
    FUN_141082778(local_2f0);
    if ((local_d0 ^ (ulonglong)auStack_518) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1495f4f7a:
  uVar11 = (ulonglong)uStack_4d0;
  uVar20 = (uint)uVar21;
  if ((int)uStack_340 != local_314) {
    lVar13 = *(longlong *)(local_1c0 + (uVar21 >> 9) * 8);
    uVar14 = (ulonglong)(uVar20 & 0x1ff);
    uVar12 = *(uint *)(lVar13 + uVar14 * 0xc);
    uVar6 = *(uint *)(lVar13 + 4 + uVar14 * 0xc);
    uVar7 = *(uint *)(lVar13 + 8 + uVar14 * 0xc);
    puVar15 = local_308;
    if (local_308 == (undefined1 *)0x0) {
      puVar15 = local_310;
    }
    uVar19 = local_300 - 1;
    for (iVar8 = *(int *)(puVar15 + (ulonglong)(uVar19 & uVar12) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)local_348 + (longlong)iVar8 * 0xc + 4)) {
      if (*(uint *)((longlong)local_348 + (longlong)iVar8 * 0xc) == uVar12) goto LAB_1495f50ba;
    }
    for (iVar8 = *(int *)(puVar15 + (ulonglong)(uVar19 & uVar6) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)local_348 + (longlong)iVar8 * 0xc + 4)) {
      if (*(uint *)((longlong)local_348 + (longlong)iVar8 * 0xc) == uVar6) goto LAB_1495f50ba;
    }
    for (iVar8 = *(int *)(puVar15 + (ulonglong)(uVar19 & uVar7) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)local_348 + (longlong)iVar8 * 0xc + 4)) {
      if (*(uint *)((longlong)local_348 + (longlong)iVar8 * 0xc) == uVar7) goto LAB_1495f50ba;
    }
  }
  goto LAB_1495f4f8a;
LAB_1495f50ba:
  lVar13 = (longlong)(int)uStack_4d0;
  uVar12 = (int)uStack_4d0 + 1;
  uStack_4d0 = (undefined8 **)CONCAT44(uStack_4d0._4_4_,uVar12);
  if (uStack_4d0._4_4_ < uVar12) {
    FUN_1446f48e2(&local_4d8,uVar11 & 0xffffffff);
  }
  *(uint *)(local_4d8 + lVar13 * 4) = uVar20;
LAB_1495f4f8a:
  uVar12 = uVar20 + 1;
  if ((int)(uVar20 + 1) < (int)uVar16) {
    uVar12 = uVar16;
  }
  do {
    if (uVar12 - 1 == (int)uVar21) {
      uVar21 = (ulonglong)uVar12;
      break;
    }
    uVar20 = (int)uVar21 + 1;
    uVar21 = (ulonglong)uVar20;
  } while (0xfffd < (ushort)(*(short *)(local_1a8[uVar20 >> 9] + (ulonglong)(uVar20 & 0x1ff) * 2) -
                            1U));
  if ((uint)uVar21 == uVar16) goto LAB_1495f4e4b;
  goto LAB_1495f4f7a;
}



// FUNCTION 1495f5132 FUN_1495f5132 body=418 status=ok
// SIG undefined FUN_1495f5132(void)

void FUN_1495f5132(longlong param_1,float *param_2)

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
  
  fVar7 = param_2[3];
  fVar11 = *(float *)(param_1 + 0x18);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = param_2[2];
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar8 = ((fVar7 * fVar11 - fVar3 * fVar1) - fVar2 * fVar5) - fVar4 * fVar6;
  fVar10 = (fVar2 * fVar6 + fVar7 * fVar3 + fVar11 * fVar1) - fVar4 * fVar5;
  fVar9 = (fVar4 * fVar3 + fVar7 * fVar5 + fVar11 * fVar2) - fVar1 * fVar6;
  fVar7 = (fVar1 * fVar5 + fVar7 * fVar6 + fVar11 * fVar4) - fVar2 * fVar3;
  fVar11 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10 + fVar9 * fVar9);
  if ((0.0 < fVar11) && (fVar11 = 1.0 / fVar11, 0.0 < fVar11)) {
    *(float *)(param_1 + 0xc) = fVar10 * fVar11;
    *(float *)(param_1 + 0x10) = fVar9 * fVar11;
    *(float *)(param_1 + 0x14) = fVar7 * fVar11;
    *(float *)(param_1 + 0x18) = fVar8 * fVar11;
  }
  return;
}



// FUNCTION 1495f52d4 FUN_1495f52d4 body=162 status=ok
// SIG undefined FUN_1495f52d4(void)

void FUN_1495f52d4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_138 [40];
  undefined1 local_110 [200];
  double local_48;
  double local_40;
  int local_38;
  int local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_146c6027e(local_110);
  local_48 = (double)*(float *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
  local_38 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0xb0) + 2;
  local_40 = local_48;
  local_34 = local_38;
  FUN_142978942(local_110);
  FUN_146c00e98(param_2,local_110);
  FUN_146bd8050(local_110);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f5378 FUN_1495f5378 body=634 status=ok
// SIG undefined FUN_1495f5378(void)

void FUN_1495f5378(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_768 [32];
  undefined8 local_748;
  char local_740 [8];
  longlong local_738;
  undefined1 local_71c [4];
  undefined8 local_718 [12];
  wchar_t *local_6b8;
  undefined4 local_6b0;
  longlong local_698;
  undefined8 local_688 [12];
  undefined1 local_628 [16];
  longlong local_618;
  uint local_610;
  uint local_60c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_768;
  plVar1 = (longlong *)(param_1 + -0x98);
  lVar4 = *(longlong *)(param_1 + 0x20);
  plVar2 = *(longlong **)(lVar4 + 0x50);
  if (plVar2 == (longlong *)0x0) {
    local_748 = 0;
  }
  else {
    local_748 = (**(code **)(*plVar2 + 0xa88))(plVar2);
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  FUN_14851b8ac(lVar4,local_718);
  lVar4 = FUN_14851b4e4(*(undefined8 *)(param_1 + 0x20),0);
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(plVar1);
  local_6b8 = L"AddPatchToolTransactionName";
  local_6b0 = 0x1b;
  FUN_1446e940c(local_740,&local_6b8);
  local_6b8 = L"UAddPatchTool";
  local_6b0 = 0xd;
  FUN_1446e940c(local_71c,&local_6b8);
  FUN_140208bae(&local_6b8,local_71c,local_740,L"Add Patch Mesh");
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_6b8 + 0x10))();
  }
  FUN_14850577a(&local_6b8,1);
  local_698 = *(longlong *)(param_1 + 0x28);
  if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_698);
  }
  puVar7 = local_718;
  puVar8 = local_688;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_14020fad6(local_628,L"Patch");
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  uVar3 = local_610;
  lVar5 = (longlong)(int)local_610;
  local_610 = local_610 + 1;
  if (local_60c < local_610) {
    FUN_140655806(&local_618,uVar3);
  }
  *(longlong *)(local_618 + lVar5 * 8) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  FUN_148505bae(&local_6b8,local_748);
  uVar6 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148505c7a(local_740,uVar6,&local_6b8);
  if ((local_740[0] == '\0') && (local_738 != 0)) {
    uVar6 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
    FUN_1485509b4(uVar6,local_738);
  }
  lVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  FUN_1484c7624(&local_6b8);
  if ((local_48 ^ (ulonglong)auStack_768) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f5618 FUN_1495f5618 body=136 status=ok
// SIG undefined FUN_1495f5618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1495f5618(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1fea0) {
    FUN_144b3d300(&DAT_14cc1fea0);
    if (DAT_14cc1fea0 == -1) {
      _DAT_14cc1fe68 = FUN_145a7b1c0();
      DAT_14cc1fe90 = 0;
      _DAT_14cc1fe98 = 0x500000001;
      atexit((_func_5014 *)&LAB_14454d2a1);
      _Init_thread_footer(&DAT_14cc1fea0);
    }
  }
  return &DAT_14cc1fe68;
}



// FUNCTION 1495f56a0 FUN_1495f56a0 body=54 status=ok
// SIG undefined FUN_1495f56a0(void)

bool FUN_1495f56a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return 1 < iVar2;
}



// FUNCTION 1495f56df FUN_1495f56df body=148 status=ok
// SIG undefined FUN_1495f56df(void)

undefined8 FUN_1495f56df(undefined8 param_1)

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
  uVar1 = FUN_145bab060();
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



// FUNCTION 1495f5774 FUN_1495f5774 body=509 status=ok
// SIG undefined FUN_1495f5774(void)

void FUN_1495f5774(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484416be();
  plVar1 = (longlong *)FUN_14841014b(param_1);
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 0x17);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  uVar2 = FUN_1409ffe1d();
  plVar1 = (longlong *)FUN_1495f5972(uVar2);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x18] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  FUN_1495f5a08(param_1);
  local_40 = L"ToolName";
  local_38 = 8;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UAlignObjectsTool";
  local_38 = 0x11;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Align");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"OnStartTool";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UAlignObjectsTool";
  local_38 = 0x11;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"This Tool aligns the Pivots or Bounding Boxes of the input Objects.");
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f5972 FUN_1495f5972 body=148 status=ok
// SIG undefined FUN_1495f5972(void)

undefined8 FUN_1495f5972(undefined8 param_1)

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
  uVar1 = FUN_1459f91ee();
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



// FUNCTION 1495f5a08 FUN_1495f5a08 body=1527 status=ok
// SIG undefined FUN_1495f5a08(void)

void FUN_1495f5a08(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_298 [40];
  longlong local_270;
  longlong local_268;
  longlong local_260;
  double local_258 [12];
  longlong local_1f8 [2];
  double local_1e8 [2];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188 [2];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(undefined8 *)(param_1 + 0x108) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x110) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x118) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x120) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x128) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x130) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0xd8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xe0) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xe8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xf0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x100) = 0xffefffffffffffff;
  dVar10 = DAT_14c8464e8;
  *(double *)(param_1 + 0x138) = DAT_14c8464e0;
  *(double *)(param_1 + 0x140) = dVar10;
  *(double *)(param_1 + 0x148) = DAT_14c8464f0;
  if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
    dVar10 = *(double *)(param_1 + 0x138);
    dVar12 = *(double *)(param_1 + 0x140);
    dVar9 = *(double *)(param_1 + 0x148);
  }
  else {
    local_260 = param_1 + 0x108;
    lVar2 = *(longlong *)(param_1 + 0xa0);
    local_270 = param_1 + 200;
    local_268 = (longlong)*(int *)(param_1 + 0xa8) << 3;
    lVar6 = 0;
    do {
      local_1e8[0] = 0.0;
      local_1e8[1] = 0.0;
      local_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0x3ff00000;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1a8 = 0x3ff0000000000000;
      uStack_1a0 = 0x3ff0000000000000;
      local_198 = 0x3ff0000000000000;
      uStack_190 = 0;
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      local_178 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16c = 0x3ff00000;
      local_158 = 0.0;
      uStack_150 = 0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_148 = 1.0;
      dStack_140 = 1.0;
      local_138 = 1.0;
      uStack_130 = 0;
      local_110 = 1.79769313486232e+308;
      local_108 = 1.79769313486232e+308;
      local_100 = 1.79769313486232e+308;
      local_f8 = -1.79769313486232e+308;
      local_f0 = -1.79769313486232e+308;
      local_e8 = -1.79769313486232e+308;
      local_1f8[0] = FUN_1485062e8(*(undefined8 *)(lVar2 + lVar6));
      FUN_1485063a5(local_258,*(undefined8 *)(lVar2 + lVar6));
      pdVar4 = local_258;
      pdVar5 = local_1e8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar5 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar5 = pdVar5 + 1;
      }
      FUN_1485063a5(local_258,*(undefined8 *)(lVar2 + lVar6));
      pdVar4 = local_258;
      pdVar5 = local_188;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar5 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar5 = pdVar5 + 1;
      }
      local_e8 = *(double *)(local_1f8[0] + 0x170) + *(double *)(local_1f8[0] + 0x188);
      local_f0 = *(double *)(local_1f8[0] + 0x168) + *(double *)(local_1f8[0] + 0x180);
      local_f8 = *(double *)(local_1f8[0] + 0x160) + *(double *)(local_1f8[0] + 0x178);
      local_100 = *(double *)(local_1f8[0] + 0x170) - *(double *)(local_1f8[0] + 0x188);
      local_108 = *(double *)(local_1f8[0] + 0x168) - *(double *)(local_1f8[0] + 0x180);
      local_110 = *(double *)(local_1f8[0] + 0x160) - *(double *)(local_1f8[0] + 0x178);
      dVar8 = DAT_14c8464e0 * local_148;
      dVar9 = DAT_14c8464e8 * dStack_140;
      dVar7 = DAT_14c8464f0 * local_138;
      dVar13 = (double)CONCAT44(uStack_174,local_178);
      dVar10 = dVar9 * local_188[0] - dVar8 * local_188[1];
      dVar11 = dVar7 * local_188[1] - dVar9 * dVar13;
      dVar12 = dVar8 * dVar13 - local_188[0] * dVar7;
      dVar11 = dVar11 + dVar11;
      dVar12 = dVar12 + dVar12;
      dVar10 = dVar10 + dVar10;
      dVar9 = (dVar13 * dVar11 - local_188[0] * dVar10) +
              (double)CONCAT44(uStack_16c,uStack_170) * dVar12 + dVar9 + dStack_160;
      local_118 = dVar10 * (double)CONCAT44(uStack_16c,uStack_170) + dVar7 +
                  (dVar12 * local_188[0] - dVar11 * local_188[1]) + local_158;
      local_128._8_4_ = SUB84(dVar9,0);
      local_128._0_8_ =
           (dVar10 * local_188[1] - dVar12 * dVar13) +
           (double)CONCAT44(uStack_16c,uStack_170) * dVar11 + dVar8 + local_168;
      local_128._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      iVar1 = *(int *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
        FUN_1496039f4(local_270,iVar1);
      }
      memcpy((void *)((longlong)iVar1 * 0x120 + *(longlong *)(param_1 + 200)),local_1f8,0x120);
      dVar10 = *(double *)(param_1 + 0xd8);
      if (local_110 <= *(double *)(param_1 + 0xd8)) {
        dVar10 = local_110;
      }
      *(double *)(param_1 + 0xd8) = dVar10;
      dVar10 = *(double *)(param_1 + 0xe0);
      if (local_108 <= *(double *)(param_1 + 0xe0)) {
        dVar10 = local_108;
      }
      *(double *)(param_1 + 0xe0) = dVar10;
      dVar10 = *(double *)(param_1 + 0xe8);
      if (local_100 <= *(double *)(param_1 + 0xe8)) {
        dVar10 = local_100;
      }
      *(double *)(param_1 + 0xe8) = dVar10;
      dVar10 = *(double *)(param_1 + 0xf0);
      if (*(double *)(param_1 + 0xf0) <= local_f8) {
        dVar10 = local_f8;
      }
      *(double *)(param_1 + 0xf0) = dVar10;
      dVar10 = *(double *)(param_1 + 0xf8);
      if (*(double *)(param_1 + 0xf8) <= local_f0) {
        dVar10 = local_f0;
      }
      *(double *)(param_1 + 0xf8) = dVar10;
      dVar10 = *(double *)(param_1 + 0x100);
      if (*(double *)(param_1 + 0x100) <= local_e8) {
        dVar10 = local_e8;
      }
      *(double *)(param_1 + 0x100) = dVar10;
      FUN_146ba5262(local_260,local_128);
      dVar10 = (double)local_128._0_8_ + *(double *)(param_1 + 0x138);
      *(double *)(param_1 + 0x138) = dVar10;
      dVar12 = (double)local_128._8_8_ + *(double *)(param_1 + 0x140);
      *(double *)(param_1 + 0x140) = dVar12;
      dVar9 = local_118 + *(double *)(param_1 + 0x148);
      *(double *)(param_1 + 0x148) = dVar9;
      lVar6 = lVar6 + 8;
    } while (local_268 != lVar6);
  }
  dVar13 = 1.0 / (double)*(int *)(param_1 + 0xd0);
  *(double *)(param_1 + 0x138) = dVar10 * dVar13;
  *(double *)(param_1 + 0x140) = dVar12 * dVar13;
  *(double *)(param_1 + 0x148) = dVar13 * dVar9;
  *(undefined1 *)(param_1 + 0x150) = 1;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6000 FUN_1495f6000 body=421 status=ok
// SIG undefined FUN_1495f6000(void)

void FUN_1495f6000(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_1[0x18];
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)param_1[0x1a] != 0) {
    puVar3 = (undefined8 *)param_1[0x19];
    puVar4 = puVar3 + (longlong)(int)param_1[0x1a] * 0x24;
    do {
      local_58 = 0;
      FUN_140613f88(*puVar3,puVar3 + 2,0,0);
      puVar3 = puVar3 + 0x24;
    } while (puVar3 != puVar4);
  }
  if (param_2 == '\x01') {
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"AlignObjectsTransactionName";
    local_40 = 0x1b;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UAlignObjectsTool";
    local_40 = 0x11;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Align Objects");
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x2a) = 1;
    if (*(int *)(param_1[0x18] + 0xa8) == 1) {
      FUN_1495f6416(param_1);
    }
    else if (*(int *)(param_1[0x18] + 0xa8) == 0) {
      FUN_1495f61fa(param_1);
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f61a6 FUN_1495f61a6 body=72 status=ok
// SIG undefined FUN_1495f61a6(void)

void FUN_1495f61a6(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xa8);
    if (iVar1 == 1) {
      FUN_1495f6416(param_1);
    }
    else if (iVar1 == 0) {
      FUN_1495f61fa(param_1);
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1495f61fa FUN_1495f61fa body=539 status=ok
// SIG undefined FUN_1495f61fa(void)

void FUN_1495f61fa(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xac);
  if (iVar7 == 1) {
    lVar9 = *(longlong *)(param_1 + 200);
    lVar10 = (longlong)*(int *)(param_1 + 0xd0) * 0x120;
    uVar3 = *(undefined8 *)(lVar9 + -0x50 + lVar10);
    uVar15 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)(lVar9 + -0x48 + lVar10);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)(lVar9 + -0x40 + lVar10);
    uVar19 = (undefined4)uVar3;
    uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else if (iVar7 == 0) {
    lVar9 = *(longlong *)(param_1 + 200);
    uVar15 = (undefined4)*(undefined8 *)(lVar9 + 0xd0);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0xd0) >> 0x20);
    uVar17 = (undefined4)*(undefined8 *)(lVar9 + 0xd8);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0xd8) >> 0x20);
    uVar19 = (int)*(undefined8 *)(lVar9 + 0xe0);
    uVar20 = (int)((ulonglong)*(undefined8 *)(lVar9 + 0xe0) >> 0x20);
  }
  else {
    FUN_14454d2b2(&local_d8,param_1 + 0x108,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0xb0));
    uVar15 = (undefined4)local_d8;
    uVar16 = (undefined4)((ulonglong)local_d8 >> 0x20);
    uVar17 = (undefined4)uStack_d0;
    uVar18 = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    lVar9 = *(longlong *)(param_1 + 200);
    uVar19 = local_c8;
    uVar20 = uStack_c4;
  }
  iVar7 = *(int *)(param_1 + 0xd0);
  if ((longlong)iVar7 != 0) {
    lVar10 = 0;
    do {
      dVar4 = *(double *)(lVar9 + 0xe0 + lVar10);
      lVar8 = *(longlong *)(param_1 + 0xc0);
      dVar11 = (double)CONCAT44(uVar20,uVar19);
      if (*(char *)(lVar8 + 0xb6) == '\0') {
        dVar11 = dVar4;
      }
      dVar5 = *(double *)(lVar9 + 0xd8 + lVar10);
      uVar12 = uVar17;
      uVar13 = uVar18;
      if (*(char *)(lVar8 + 0xb5) == '\0') {
        uVar12 = SUB84(dVar5,0);
        uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar6 = *(double *)(lVar9 + 0xd0 + lVar10);
      dVar14 = (double)CONCAT44(uVar16,uVar15);
      if (*(char *)(lVar8 + 0xb4) == '\0') {
        dVar14 = dVar6;
      }
      local_a8 = (dVar11 - dVar4) + *(double *)(lVar9 + 0xa0 + lVar10);
      dStack_b0 = ((double)CONCAT44(uVar13,uVar12) - dVar5) + *(double *)(lVar9 + 0x98 + lVar10);
      local_b8 = (dVar14 - dVar6) + *(double *)(lVar9 + 0x90 + lVar10);
      puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar10);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      puVar2 = (undefined4 *)(lVar9 + 0x80 + lVar10);
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      uStack_a0 = 0;
      puVar1 = (undefined8 *)(lVar9 + 0xb0 + lVar10);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      puVar2 = (undefined4 *)(lVar9 + 0xc0 + lVar10);
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      local_e8 = 0;
      FUN_140613f88(*(undefined8 *)(lVar9 + lVar10),&local_d8,0,0);
      lVar10 = lVar10 + 0x120;
    } while ((longlong)iVar7 * 0x120 != lVar10);
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6416 FUN_1495f6416 body=585 status=ok
// SIG undefined FUN_1495f6416(void)

void FUN_1495f6416(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(int *)(lVar5 + 0xac) == 1) {
    uVar10 = *(undefined4 *)(lVar5 + 0xb0);
    lVar4 = *(longlong *)(param_1 + 200);
    lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0xd0) * 0x120 + -0x38;
  }
  else {
    if (*(int *)(lVar5 + 0xac) != 0) {
      FUN_14454d2b2(&local_e8,param_1 + 0xd8,*(undefined4 *)(lVar5 + 0xb0));
      uVar10 = (undefined4)local_e8;
      uVar11 = (undefined4)((ulonglong)local_e8 >> 0x20);
      uVar12 = (undefined4)uStack_e0;
      uVar13 = (undefined4)((ulonglong)uStack_e0 >> 0x20);
      lVar4 = *(longlong *)(param_1 + 200);
      goto LAB_1495f64c8;
    }
    uVar10 = *(undefined4 *)(lVar5 + 0xb0);
    lVar4 = *(longlong *)(param_1 + 200);
    lVar5 = lVar4 + 0xe8;
  }
  FUN_14454d2b2(&local_e8,lVar5,uVar10);
  uVar10 = (undefined4)local_e8;
  uVar11 = (undefined4)((ulonglong)local_e8 >> 0x20);
  uVar12 = (undefined4)uStack_e0;
  uVar13 = (undefined4)((ulonglong)uStack_e0 >> 0x20);
LAB_1495f64c8:
  uVar3 = uStack_d4;
  uVar2 = local_d8;
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0xd0) * 0x120;
    lVar4 = lVar4 + 0xe8;
    do {
      lVar1 = *(longlong *)(param_1 + 0xc0);
      FUN_14454d2b2(&local_88,lVar4,*(undefined4 *)(lVar1 + 0xb0));
      dVar6 = (double)CONCAT44(uVar3,uVar2);
      if (*(char *)(lVar1 + 0xb6) == '\0') {
        dVar6 = local_78;
      }
      uVar7 = uVar12;
      uVar8 = uVar13;
      if (*(char *)(lVar1 + 0xb5) == '\0') {
        uVar7 = SUB84(local_80,0);
        uVar8 = (undefined4)((ulonglong)local_80 >> 0x20);
      }
      dVar9 = (double)CONCAT44(uVar11,uVar10);
      if (*(char *)(lVar1 + 0xb4) == '\0') {
        dVar9 = local_88;
      }
      local_b8 = (dVar6 - local_78) + *(double *)(lVar4 + -0x48);
      dStack_c0 = ((double)CONCAT44(uVar8,uVar7) - local_80) + *(double *)(lVar4 + -0x50);
      local_c8 = (dVar9 - local_88) + *(double *)(lVar4 + -0x58);
      local_e8 = *(undefined8 *)(lVar4 + -0x78);
      uStack_e0 = *(undefined8 *)(lVar4 + -0x70);
      local_d8 = *(undefined4 *)(lVar4 + -0x68);
      uStack_d4 = *(undefined4 *)(lVar4 + -100);
      uStack_d0 = *(undefined4 *)(lVar4 + -0x60);
      uStack_cc = *(undefined4 *)(lVar4 + -0x5c);
      uStack_b0 = 0;
      local_a8 = *(undefined8 *)(lVar4 + -0x38);
      uStack_a0 = *(undefined8 *)(lVar4 + -0x30);
      local_98 = *(undefined4 *)(lVar4 + -0x28);
      uStack_94 = *(undefined4 *)(lVar4 + -0x24);
      uStack_90 = *(undefined4 *)(lVar4 + -0x20);
      uStack_8c = *(undefined4 *)(lVar4 + -0x1c);
      local_f8 = 0;
      FUN_140613f88(*(undefined8 *)(lVar4 + -0xe8),&local_e8,0,0);
      lVar4 = lVar4 + 0x120;
      lVar5 = lVar5 + -0x120;
    } while (lVar5 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6660 FUN_1495f6660 body=138 status=ok
// SIG undefined FUN_1495f6660(void)

undefined1 * FUN_1495f6660(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  FUN_14485c47a(&local_20,0);
  *(undefined8 *)(param_2 + 0x38) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f671e FUN_1495f671e body=329 status=ok
// SIG undefined FUN_1495f671e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1495f671e(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *_Dst;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1ff30) {
    FUN_144b3d300(&DAT_14cc1ff30);
    if (DAT_14cc1ff30 == -1) {
      uVar1 = FUN_145b71442();
      uVar2 = FUN_145a7b1c0();
      uVar3 = FUN_145b7126e();
      local_48 = (undefined8 *)0x0;
      local_40 = 3;
      FUN_1484d6e40(&local_48,3,0);
      _Src = local_48;
      *local_48 = uVar1;
      local_48[1] = uVar2;
      local_48[2] = uVar3;
      DAT_14cc1ff20 = (undefined *)0x0;
      _DAT_14cc1ff2c = 5;
      lVar4 = (longlong)local_40;
      _DAT_14cc1ff28 = local_40;
      FUN_1484d23fc(&DAT_14cc1fef8,local_40,5);
      if (lVar4 != 0) {
        _Dst = &DAT_14cc1fef8;
        if (DAT_14cc1ff20 != (undefined *)0x0) {
          _Dst = DAT_14cc1ff20;
        }
        memcpy(_Dst,_Src,lVar4 << 3);
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14454d39d);
      _Init_thread_footer(&DAT_14cc1ff30);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cc1fef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6868 FUN_1495f6868 body=186 status=ok
// SIG undefined FUN_1495f6868(void)

undefined1 FUN_1495f6868(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  code *local_48;
  undefined1 **local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar4 = (**(code **)(*param_1 + 0x2c0))();
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar4);
  if (iVar3 - 1U < 2) {
    local_50 = &local_31;
    local_31 = 1;
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_40 = &local_50;
    local_48 = FUN_1445519d6;
    uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,uVar4,&local_48);
    uVar2 = local_31;
  }
  else {
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f692d FUN_1495f692d body=148 status=ok
// SIG undefined FUN_1495f692d(void)

undefined8 FUN_1495f692d(undefined8 param_1)

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
  uVar1 = FUN_145bab234();
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



// FUNCTION 1495f69c2 FUN_1495f69c2 body=374 status=ok
// SIG undefined FUN_1495f69c2(void)

void FUN_1495f69c2(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1495faafa();
  FUN_1495fab7c();
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/BakePreviewMaterial",0,0,0,1,0);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = FUN_14090ceee(lVar2,uVar1,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x38] = lVar2;
    FUN_1495fad20();
  }
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/BakeBentNormalPreviewMaterial",0
                        ,0,0,1,0);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = FUN_14090ceee(lVar2,uVar1,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x39] = lVar2;
  }
  FUN_148506321(*(undefined8 *)param_1[0x14]);
  uVar1 = (**(code **)(*param_1 + 0x390))(param_1);
  lVar2 = FUN_14960c77d(param_1,*(undefined8 *)param_1[0x14],uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x37] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0001495f6b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar2 + 0x50) + 0xb30))(*(longlong **)(lVar2 + 0x50),param_1[0x38]);
  return;
}



// FUNCTION 1495f6b38 FUN_1495f6b38 body=148 status=ok
// SIG undefined FUN_1495f6b38(void)

undefined8 FUN_1495f6b38(undefined8 param_1)

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
  uVar1 = FUN_14599c5f2();
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



// FUNCTION 1495f6bce FUN_1495f6bce body=212 status=ok
// SIG undefined FUN_1495f6bce(void)

void FUN_1495f6bce(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149603bc4(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6ca4 FUN_1495f6ca4 body=212 status=ok
// SIG undefined FUN_1495f6ca4(void)

void FUN_1495f6ca4(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149603ee2(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6d7a FUN_1495f6d7a body=212 status=ok
// SIG undefined FUN_1495f6d7a(void)

void FUN_1495f6d7a(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149604200(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f6e50 FUN_1495f6e50 body=215 status=ok
// SIG undefined FUN_1495f6e50(void)

int FUN_1495f6e50(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_14960451e(uVar2,param_2,local_68);
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



// FUNCTION 1495f6f28 FUN_1495f6f28 body=148 status=ok
// SIG undefined FUN_1495f6f28(void)

undefined8 FUN_1495f6f28(undefined8 param_1)

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
  uVar1 = FUN_145923d3a();
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



// FUNCTION 1495f6fbe FUN_1495f6fbe body=212 status=ok
// SIG undefined FUN_1495f6fbe(void)

void FUN_1495f6fbe(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149604908(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f7093 FUN_1495f7093 body=148 status=ok
// SIG undefined FUN_1495f7093(void)

undefined8 FUN_1495f7093(undefined8 param_1)

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
  uVar1 = FUN_14595edc0();
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



// FUNCTION 1495f7128 FUN_1495f7128 body=148 status=ok
// SIG undefined FUN_1495f7128(void)

undefined8 FUN_1495f7128(undefined8 param_1)

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
  uVar1 = FUN_1459f7bce();
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



// FUNCTION 1495f71bd FUN_1495f71bd body=148 status=ok
// SIG undefined FUN_1495f71bd(void)

undefined8 FUN_1495f71bd(undefined8 param_1)

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
  uVar1 = FUN_1459f7cba();
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



// FUNCTION 1495f7252 FUN_1495f7252 body=212 status=ok
// SIG undefined FUN_1495f7252(void)

void FUN_1495f7252(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149604c26(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f7328 FUN_1495f7328 body=212 status=ok
// SIG undefined FUN_1495f7328(void)

void FUN_1495f7328(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149604f44(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f73fe FUN_1495f73fe body=212 status=ok
// SIG undefined FUN_1495f73fe(void)

void FUN_1495f73fe(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149605262(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f74d3 FUN_1495f74d3 body=148 status=ok
// SIG undefined FUN_1495f74d3(void)

undefined8 FUN_1495f74d3(undefined8 param_1)

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
  uVar1 = FUN_1459f7da6();
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



// FUNCTION 1495f7568 FUN_1495f7568 body=148 status=ok
// SIG undefined FUN_1495f7568(void)

undefined8 FUN_1495f7568(undefined8 param_1)

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
  uVar1 = FUN_14599c06a();
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



// FUNCTION 1495f75fd FUN_1495f75fd body=148 status=ok
// SIG undefined FUN_1495f75fd(void)

undefined8 FUN_1495f75fd(undefined8 param_1)

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
  uVar1 = FUN_14599c156();
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



// FUNCTION 1495f7692 FUN_1495f7692 body=313 status=ok
// SIG undefined FUN_1495f7692(void)

void FUN_1495f7692(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined8 local_a8 [6];
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = FUN_14001cc68(0xe0,0x10);
  local_78[0] = *param_4;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  local_b8[0] = *param_3;
  local_a8[0] = 0;
  if (local_b8[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_a8);
  }
  FUN_149605580(uVar2,param_2,local_b8,local_78);
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
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f77cc FUN_1495f77cc body=532 status=ok
// SIG undefined FUN_1495f77cc(void)

void FUN_1495f77cc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)FUN_1485062e8();
  if (plVar5 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(*plVar5 + 0x790))(plVar5,&local_78,0);
    uVar3 = uStack_70;
    lVar7 = (longlong)(int)uStack_70;
    if (0 < lVar7) {
      lVar10 = 0;
      local_90 = param_3;
      do {
        plVar5 = *(longlong **)(local_78 + lVar10 * 8);
        local_88 = 0;
        uStack_80 = 0;
        if (plVar5 != (longlong *)0x0) {
          local_a0 = 1;
          local_a8 = 3;
          (**(code **)(*plVar5 + 0x310))(plVar5,&local_88,1,1);
        }
        FUN_149607bda(param_3,uVar3 & 0xffffffff);
        lVar11 = local_88;
        lVar8 = (longlong)(int)uStack_80;
        if (lVar8 != 0) {
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(lVar11 + lVar9);
            if (lVar2 != 0) {
              lVar6 = FUN_144a79692();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar2);
                }
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_148182430(param_2,iVar1);
                }
                *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar2);
                }
              }
            }
            lVar9 = lVar9 + 8;
          } while (lVar8 * 8 != lVar9);
        }
        uVar4 = FUN_1495ff278(&local_88);
        if (((int)uVar4 < 0) ||
           (lVar11 = *(longlong *)(local_88 + (ulonglong)uVar4 * 8), lVar11 == 0)) {
LAB_1495f78c4:
          lVar8 = *local_90;
          lVar11 = 0;
          param_3 = local_90;
        }
        else {
          lVar8 = FUN_144a79692();
          param_3 = local_90;
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_1495f78c4;
          lVar8 = *local_90;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar11);
          }
        }
        *(longlong *)(lVar8 + lVar10 * 8) = lVar11;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495f79e2 FUN_1495f79e2 body=363 status=ok
// SIG undefined FUN_1495f79e2(void)

void FUN_1495f79e2(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x65];
  FUN_1495fa988(param_1,*(undefined4 *)(lVar3 + 0xa8),param_1[0x66] + 0xa8,lVar3 + 0xb0,lVar3 + 0xd8
                ,lVar3 + 0xe8);
  lVar3 = 0;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x67],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1b],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1c],0);
  do {
    uVar1 = *(uint *)(param_1[0x65] + 0xa8) & *(uint *)((longlong)&DAT_14bd72980 + lVar3);
    if ((int)uVar1 < 0x80) {
      plVar2 = param_1 + 0x19;
      if (((uVar1 == 8) || (plVar2 = param_1 + 0x1a, uVar1 == 0x20)) ||
         (plVar2 = param_1 + 0x19, uVar1 == 0x40)) {
LAB_1495f7b20:
        (**(code **)(*param_1 + 0x328))(param_1,*plVar2,1);
      }
    }
    else {
      plVar2 = param_1 + 0x1b;
      if (((uVar1 == 0x80) || (plVar2 = param_1 + 0x1c, uVar1 == 0x100)) ||
         (plVar2 = param_1 + 0x67, uVar1 == 0x4000)) goto LAB_1495f7b20;
    }
    lVar3 = lVar3 + 4;
    if (lVar3 == 0x34) {
      return;
    }
  } while( true );
}



// FUNCTION 1495f7b4e FUN_1495f7b4e body=1445 status=ok
// SIG undefined FUN_1495f7b4e(void)

void FUN_1495f7b4e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined1 local_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar3 = *(undefined8 *)
           (*(longlong *)(param_1 + 0xa0) + (ulonglong)(*(byte *)(param_1 + 0x340) ^ 1) * 8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 800) + 0xf8);
  local_26c = lVar4 != 0;
  local_274 = 0;
  local_270 = 1000;
  FUN_148506727(&local_268,uVar3);
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  FUN_146bffece(plVar6 + 2,&local_268);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x348) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x350);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x350) = 0;
LAB_1495f7c2e:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_1495f7c9d;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x348) = plVar6 + 2;
    plVar7 = *(longlong **)(param_1 + 0x350);
    if (plVar6 == plVar7) {
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x350) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_1495f7c2e;
    }
LAB_1495f7c9d:
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)(param_1 + 0x348);
  FUN_141082778(&local_268);
  if ((*(char *)(*(longlong *)(param_1 + 800) + 0x11c) == '\x01') &&
     (*(char *)(param_1 + 0x340) == '\0')) {
    FUN_1485063a5(&local_268,uVar3);
    local_2c8 = local_268;
    uStack_2c0 = uStack_260;
    local_2b8 = local_258;
    uStack_2b0 = uStack_250;
    local_2a8 = local_248;
    uStack_2a4 = uStack_244;
    uStack_2a0 = uStack_240;
    uStack_29c = uStack_23c;
    local_298 = local_238;
    local_290 = local_228;
    uStack_28c = uStack_224;
    uStack_288 = uStack_220;
    uStack_284 = uStack_21c;
    local_280 = local_218;
    FUN_146c3cd49(*(undefined8 *)(param_1 + 0x348),&local_2c8,1);
    FUN_1485063a5(&local_268,**(undefined8 **)(param_1 + 0xa0));
    local_318 = local_268;
    uStack_310 = uStack_260;
    local_308 = local_258;
    uStack_300 = uStack_250;
    local_2f8 = local_248;
    uStack_2f4 = uStack_244;
    uStack_2f0 = uStack_240;
    uStack_2ec = uStack_23c;
    local_2e8 = local_238;
    local_2e0 = local_228;
    uStack_2dc = uStack_224;
    uStack_2d8 = uStack_220;
    uStack_2d4 = uStack_21c;
    local_2d0 = local_218;
    FUN_146c3cfa5(*(undefined8 *)(param_1 + 0x348),&local_318,1);
  }
  plVar7 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14af7cde0;
  FUN_1457e37e0(plVar7 + 2);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x358) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x360);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x360) = 0;
LAB_1495f7dfb:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1495f7e68;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x358) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 0x360);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x360) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_1495f7dfb;
    }
LAB_1495f7e68:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x358);
  *(longlong *)(lVar5 + 8) = *plVar6;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  FUN_146bee918(lVar5,0);
  *(ulonglong *)(lVar5 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar5 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar5 + 8) + 0x218));
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    plVar6 = *(longlong **)(param_1 + 0x370);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x370) = 0;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    goto LAB_1495f7f79;
  }
  lVar4 = *plVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14af3df30;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[2] = lVar4;
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x368) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x370);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x370) = 0;
LAB_1495f7f2f:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1495f7f51;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x368) = plVar7 + 2;
    plVar8 = *(longlong **)(param_1 + 0x370);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x370) = plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_1495f7f2f;
    }
LAB_1495f7f51:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_146c3b4b2(*(undefined8 *)(param_1 + 0x368),*plVar6);
LAB_1495f7f79:
  FUN_14960c5b2(*(longlong *)(param_1 + 800) + 0x100,*(longlong *)(param_1 + 800) + 0x130,
                *(undefined8 *)(param_1 + 0x348));
  FUN_14960c5b2(*(longlong *)(param_1 + 0xd8) + 0xb0,*(longlong *)(param_1 + 0xd8) + 0xc0,
                *(undefined8 *)(param_1 + 0x348));
  FUN_14960c5b2(*(longlong *)(param_1 + 0xe0) + 0xb8,*(longlong *)(param_1 + 0xe0) + 200,
                *(undefined8 *)(param_1 + 0x348));
  *(uint *)(param_1 + 0xfc) = (*(uint *)(param_1 + 0xfc) & 0xfffffffc) + 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0x140400000;
  *(undefined4 *)(param_1 + 500) = 0;
  *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + 1;
  if ((local_40 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495f80f4 FUN_1495f80f4 body=508 status=ok
// SIG undefined FUN_1495f80f4(void)

void FUN_1495f80f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_1495fadfe();
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  param_1[0x36] = (longlong)plVar3;
  FUN_140056680(local_78,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,local_78);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x36]);
  local_58 = 0;
  local_48 = &PTR_LAB_14bd79530;
  local_68 = FUN_144552d88;
  local_40 = param_1;
  FUN_1484c9b00(param_1[0x36] + 0x28,param_1[0x36] + 0xa8);
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aee5340;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    param_1[0x41] = 0x10;
    plVar4 = (longlong *)param_1[0x42];
    if (plVar4 == (longlong *)0x0) goto LAB_1495f825c;
    param_1[0x42] = 0;
LAB_1495f821d:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1495f825c;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[0x41] = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[0x42];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[0x42] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1495f821d;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1495f825c:
  FUN_14837ffba(param_1[0x20],param_1[0x41]);
  (**(code **)(*param_1 + 0x3a8))(param_1,param_1 + 0x53);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f82f2 FUN_1495f82f2 body=355 status=ok
// SIG undefined FUN_1495f82f2(void)

int FUN_1495f82f2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_RBP;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = local_60;
  if (((*(byte *)(param_1 + 0xfc) & 4) == 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    iVar7 = 0;
    iVar8 = iVar7;
    if (*(char *)(*(longlong *)(param_1 + 0x218) + 0x30) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x330);
      plVar1 = (longlong *)(lVar3 + 0xa8);
      lVar2 = lVar3 + 0xb8;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = lVar2;
      if (*(int *)(lVar3 + 0xd0) != 0) {
        FUN_1449c0562(&local_50);
        iVar7 = *(int *)(lVar3 + 0xd0);
      }
      local_60 = local_40;
      uVar4 = local_60;
      local_58 = local_38;
      local_54 = local_34;
      local_70 = local_50;
      local_68 = local_48;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      local_78 = plVar1;
      if (local_60._4_4_ == iVar7) {
        unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        iVar8 = (int)unaff_RBP;
        if (local_48 == lVar2) goto LAB_1495f8432;
      }
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      iVar5 = local_60._4_4_;
      local_60 = uVar4;
      do {
        if ((char)uVar6 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),
                           *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x18) != 0);
        }
        iVar8 = (int)uVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar2 || local_60._4_4_ != iVar7));
    }
  }
  else {
    iVar8 = 0;
  }
LAB_1495f8432:
  local_60 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1495f8456 FUN_1495f8456 body=1057 status=ok
// SIG undefined FUN_1495f8456(void)

undefined8 * FUN_1495f8456(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x198);
  memset(_Dst,0,0x198);
  FUN_149605aa2(_Dst);
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)_Dst + 0x18);
  *(undefined8 *)((longlong)_Dst + 0x10) = uVar4;
  *(longlong *)((longlong)_Dst + 0x18) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1b0);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)_Dst + 0x28);
  *(undefined8 *)((longlong)_Dst + 0x20) = uVar4;
  *(longlong *)((longlong)_Dst + 0x28) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + -0xa8);
  lVar5 = *(longlong *)(param_1 + -0xa0);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)_Dst + 0x48);
  *(undefined8 *)((longlong)_Dst + 0x40) = uVar4;
  *(longlong *)((longlong)_Dst + 0x48) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  *(undefined8 *)((longlong)_Dst + 0x78) = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x34);
  uVar11 = *(undefined4 *)(param_1 + 0x3c);
  uVar12 = *(undefined4 *)(param_1 + 0x40);
  uVar13 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((longlong)_Dst + 0x68) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)_Dst + 0x6c) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0x70) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0x74) = uVar13;
  *(undefined4 *)((longlong)_Dst + 0x58) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0x5c) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x60) = uVar9;
  *(undefined4 *)((longlong)_Dst + 100) = uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)_Dst + 0x98);
  *(undefined8 *)((longlong)_Dst + 0x90) = uVar4;
  *(longlong *)((longlong)_Dst + 0x98) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  *(undefined1 *)((longlong)_Dst + 0xa0) = *(undefined1 *)(param_1 + 0x198);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)_Dst + 0xb0);
  *(undefined8 *)((longlong)_Dst + 0xa8) = uVar4;
  *(longlong *)((longlong)_Dst + 0xb0) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2c) & 9) != 0) {
    uVar4 = *(undefined8 *)(param_1 + -0x98);
    lVar5 = *(longlong *)(param_1 + -0x90);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)((longlong)_Dst + 0x88);
    *(undefined8 *)((longlong)_Dst + 0x80) = uVar4;
    *(longlong *)((longlong)_Dst + 0x88) = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1c0);
    lVar5 = *(longlong *)(param_1 + 0x1c8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)((longlong)_Dst + 0x38);
    *(undefined8 *)((longlong)_Dst + 0x30) = uVar4;
    *(longlong *)((longlong)_Dst + 0x38) = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1e0);
    lVar5 = *(longlong *)(param_1 + 0x1e8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)((longlong)_Dst + 0x168);
    *(undefined8 *)((longlong)_Dst + 0x160) = uVar4;
    *(longlong *)((longlong)_Dst + 0x168) = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    *(undefined4 *)((longlong)_Dst + 0x170) = *(undefined4 *)(param_1 + 0x1d4);
    *(uint *)((longlong)_Dst + 0x174) = (uint)(*(int *)(param_1 + 0x1d8) != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)((longlong)_Dst + 0xbc) = *(undefined8 *)(param_1 + -0x84);
  }
  if ((uVar3 & 0x48) != 0) {
    uVar7 = *(undefined4 *)(param_1 + -0x7c);
    uVar8 = *(undefined4 *)(param_1 + -0x78);
    uVar9 = *(undefined4 *)(param_1 + -0x74);
    uVar10 = *(undefined4 *)(param_1 + -0x70);
    uVar4 = *(undefined8 *)(param_1 + -0x68);
    *(undefined8 *)((longlong)_Dst + 0xd0) = *(undefined8 *)(param_1 + -0x70);
    *(undefined8 *)((longlong)_Dst + 0xd8) = uVar4;
    *(undefined4 *)((longlong)_Dst + 0xc4) = uVar7;
    *(undefined4 *)((longlong)_Dst + 200) = uVar8;
    *(undefined4 *)((longlong)_Dst + 0xcc) = uVar9;
    *(undefined4 *)((longlong)_Dst + 0xd0) = uVar10;
  }
  if ((uVar3 & 0x20) != 0) {
    uVar7 = *(undefined4 *)(param_1 + -0x60);
    uVar8 = *(undefined4 *)(param_1 + -0x5c);
    uVar9 = *(undefined4 *)(param_1 + -0x58);
    uVar10 = *(undefined4 *)(param_1 + -0x54);
    uVar4 = *(undefined8 *)(param_1 + -0x4c);
    *(undefined8 *)((longlong)_Dst + 0xec) = *(undefined8 *)(param_1 + -0x54);
    *(undefined8 *)((longlong)_Dst + 0xf4) = uVar4;
    *(undefined4 *)((longlong)_Dst + 0xe0) = uVar7;
    *(undefined4 *)((longlong)_Dst + 0xe4) = uVar8;
    *(undefined4 *)((longlong)_Dst + 0xe8) = uVar9;
    *(undefined4 *)((longlong)_Dst + 0xec) = uVar10;
  }
  if ((uVar3 & 0x616) != 0) {
    *(undefined8 *)((longlong)_Dst + 0xfc) = *(undefined8 *)(param_1 + -0x44);
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x1f0);
    uVar8 = *(undefined4 *)(param_1 + 500);
    uVar9 = *(undefined4 *)(param_1 + 0x1f8);
    uVar10 = *(undefined4 *)(param_1 + 0x1fc);
    uVar4 = *(undefined8 *)(param_1 + 0x200);
    uVar14 = *(undefined8 *)(param_1 + 0x208);
    uVar15 = *(undefined8 *)(param_1 + 0x210);
    uVar16 = *(undefined8 *)(param_1 + 0x218);
    uVar17 = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)((longlong)_Dst + 0x134) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)((longlong)_Dst + 0x13c) = uVar17;
    *(undefined8 *)((longlong)_Dst + 0x124) = uVar15;
    *(undefined8 *)((longlong)_Dst + 300) = uVar16;
    *(undefined8 *)((longlong)_Dst + 0x114) = uVar4;
    *(undefined8 *)((longlong)_Dst + 0x11c) = uVar14;
    *(undefined4 *)((longlong)_Dst + 0x104) = uVar7;
    *(undefined4 *)((longlong)_Dst + 0x108) = uVar8;
    *(undefined4 *)((longlong)_Dst + 0x10c) = uVar9;
    *(undefined4 *)((longlong)_Dst + 0x110) = uVar10;
  }
  if ((char)uVar3 < '\0') {
    *(undefined4 *)((longlong)_Dst + 0x14c) = *(undefined4 *)(param_1 + -0x34);
    *(undefined8 *)((longlong)_Dst + 0x144) = *(undefined8 *)(param_1 + -0x3c);
    uVar4 = *(undefined8 *)(param_1 + -0x30);
    lVar5 = *(longlong *)(param_1 + -0x28);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)((longlong)_Dst + 0x180);
    *(undefined8 *)((longlong)_Dst + 0x178) = uVar4;
    *(longlong *)((longlong)_Dst + 0x180) = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2d) & 1) != 0) {
    *(undefined4 *)((longlong)_Dst + 0x158) = *(undefined4 *)(param_1 + -0x18);
    *(undefined8 *)((longlong)_Dst + 0x150) = *(undefined8 *)(param_1 + -0x20);
    FUN_1495f8878((longlong)_Dst + 0x188,param_1 + -0x10);
  }
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 1495f8878 FUN_1495f8878 body=95 status=ok
// SIG undefined FUN_1495f8878(void)

undefined8 * FUN_1495f8878(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145810cd0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149603b34(param_1,iVar1);
      FUN_149603b96(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1495f88d8 FUN_1495f88d8 body=170 status=ok
// SIG undefined FUN_1495f88d8(void)

void FUN_1495f88d8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_14851bab8(*(longlong *)(param_1 + 0x1b8),0);
    FUN_14851b2ea(*(undefined8 *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  FUN_14850635b(**(undefined8 **)(param_1 + 0xa0));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f8984 FUN_1495f8984 body=854 status=ok
// SIG undefined FUN_1495f8984(void)

void FUN_1495f8984(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8 [2];
  char local_b8 [16];
  void *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  void *pvStack_78;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_1;
  local_108 = param_3;
  local_100 = param_4;
  lVar3 = FUN_1485062af(*(undefined8 *)param_1[0x14]);
  local_f8 = *(undefined8 *)(lVar3 + 0x18);
  FUN_1400021e4(&local_f8,local_70);
  plVar1 = param_2 + 2;
  local_f8 = 0x100000000;
  local_e8 = 0xffffffff;
  uStack_e0 = (void *)((ulonglong)uStack_e0._4_4_ << 0x20);
  iVar6 = 0;
  uStack_f0 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_f8);
    iVar6 = (int)param_2[5];
  }
  local_80 = local_e8;
  lVar3 = local_80;
  pvStack_78 = uStack_e0;
  local_90 = (undefined4)local_f8;
  uStack_8c = local_f8._4_4_;
  uStack_88 = (undefined4)uStack_f0;
  uStack_84 = uStack_f0._4_4_;
  local_80._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
  local_98 = param_2;
  if ((local_80._4_4_ != iVar6) || (uStack_f0 != plVar1)) {
    bVar7 = true;
    iVar2 = local_80._4_4_;
    local_80 = lVar3;
    do {
      lVar3 = *local_98;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      FUN_1495fb152(*(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18),local_70,&local_a8);
      if (bVar7) {
        local_f8 = local_f8 & 0xffffffff00000000;
        uStack_f0 = local_108;
        if (DAT_14c950c29 == 1 && local_108 != (longlong *)0x0) {
          FUN_1456cec3c(local_108);
        }
        local_e8 = local_100;
        if ((local_100 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(local_100);
        }
        _Src = local_a8;
        uStack_e0 = (void *)0x0;
        lVar5 = (longlong)(int)uStack_a0;
        local_d8 = (int)uStack_a0;
        if (lVar5 == 0) {
          local_d4 = 0;
        }
        else {
          FUN_1446dd670(&uStack_e0,uStack_a0 & 0xffffffff,0);
          memcpy(uStack_e0,_Src,lVar5 * 2);
        }
        local_d0 = *(longlong *)((longlong)iVar2 * 0x18 + lVar3 + 8);
        if ((DAT_14c950c29 == 1) && (local_d0 != 0)) {
          FUN_1456cec3c();
        }
        FUN_1400b22c2(local_c8,&DAT_149e02088);
        uVar4 = (**(code **)(*local_110 + 0x2c8))();
        FUN_148505d82(local_b8,uVar4,&local_f8);
        bVar7 = local_b8[0] == '\0';
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (uStack_e0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        bVar7 = false;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
      FUN_1449c0562(&local_90);
      iVar2 = local_80._4_4_;
      lVar3 = local_80;
    } while (local_98 != param_2 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || local_80._4_4_ != iVar6));
  }
  local_80 = lVar3;
  plVar1 = local_110;
  (**(code **)(*local_110 + 0x3b0))(local_110,&local_f8);
  FUN_1495fb422(plVar1 + 0x4e,&local_f8);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495f8cdc FUN_1495f8cdc body=124 status=ok
// SIG undefined FUN_1495f8cdc(void)

ulonglong FUN_1495f8cdc(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x348) == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x341) == '\0') {
    uVar1 = CONCAT71((int7)(local_18 >> 8),*(undefined1 *)(param_1 + 0x342));
  }
  else {
    FUN_146c3a27e(local_38);
    uVar1 = FUN_146c3a31e(local_38,1);
    *(char *)(param_1 + 0x342) = (char)uVar1;
    *(undefined1 *)(param_1 + 0x341) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f8d5a FUN_1495f8d5a body=837 status=ok
// SIG undefined FUN_1495f8d5a(void)

void FUN_1495f8d5a(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(uint *)((longlong)param_1 + 0xfc);
  if ((uVar4 & 2) != 0) {
    FUN_1495f7b4e(param_1);
    uVar4 = *(uint *)((longlong)param_1 + 0xfc);
  }
  if (uVar4 != 0) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_144a5dc74(&local_48);
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_48);
    if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
    }
    uVar1 = *(undefined4 *)(param_1[0x65] + 0xc0);
    lStack_40 = CONCAT44(uVar1,uVar1);
    local_38 = *(undefined4 *)(param_1[0x65] + 0xc4);
    uStack_34 = FUN_140e1307c(param_1[100] + 0x120,param_1[100] + 0xc0);
    uStack_30 = (undefined4)param_1[0x6f];
    uStack_2c = *(undefined4 *)(param_1[100] + 0x118);
    local_28 = *(undefined4 *)(param_1[0x65] + 200);
    uStack_24 = CONCAT31(uStack_24._1_3_,*(undefined1 *)(param_1[100] + 0x11c));
    local_48 = *(uint *)(param_1[0x65] + 0xa8);
    uStack_44 = local_48 * 8 & 0x40 | local_48;
    cVar3 = FUN_1495f90a0(param_1 + 0x3a,&local_48);
    if (cVar3 == '\0') {
      param_1[0x3e] = CONCAT44(uStack_24,local_28);
      param_1[0x3c] = CONCAT44(uStack_34,local_38);
      param_1[0x3d] = CONCAT44(uStack_2c,uStack_30);
      param_1[0x3a] = CONCAT44(uStack_44,local_48);
      param_1[0x3b] = lStack_40;
      *(undefined8 *)((longlong)param_1 + 0x144) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x134) = 0;
      *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x124) = 0;
      *(undefined8 *)((longlong)param_1 + 300) = 0;
      *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
      param_1[0x31] = 0;
      *(undefined4 *)(param_1 + 0x32) = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
    }
    *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) & 0xfb;
    uVar4 = FUN_1495f90fa(param_1,*(undefined4 *)((longlong)param_1 + 0x1d4));
    *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar4;
    uVar4 = FUN_1495f91e8(param_1);
    *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar4;
    uVar5 = FUN_1495f9566(param_1,*(undefined8 *)(param_1[0x65] + 0xd0));
    uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
    *(uint *)((longlong)param_1 + 0xfc) = uVar5;
    uVar4 = *(uint *)((longlong)param_1 + 0x1d4);
    if ((uVar4 & 1) != 0) {
      lVar2 = param_1[0x3b];
      if ((*(int *)((longlong)param_1 + 0x124) != (int)lVar2) ||
         (uVar7 = 0, (int)param_1[0x25] != (int)((ulonglong)lVar2 >> 0x20))) {
        *(longlong *)((longlong)param_1 + 0x124) = lVar2;
        uVar7 = 1;
      }
      uVar5 = uVar5 | uVar7;
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
    }
    if ((uVar4 & 0x48) != 0) {
      uVar5 = FUN_1495f97c8(param_1,param_1 + 0x3b);
      uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
      uVar4 = *(uint *)((longlong)param_1 + 0x1d4);
    }
    if ((uVar4 & 0x20) != 0) {
      uVar5 = FUN_1495f98ac(param_1,param_1 + 0x3b);
      uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
      uVar4 = *(uint *)((longlong)param_1 + 0x1d4);
    }
    if ((uVar4 & 0xe16) != 0) {
      lVar2 = param_1[0x3b];
      if ((*(int *)((longlong)param_1 + 0x164) != (int)lVar2) ||
         (uVar7 = 0, (int)param_1[0x2d] != (int)((ulonglong)lVar2 >> 0x20))) {
        *(longlong *)((longlong)param_1 + 0x164) = lVar2;
        uVar7 = 1;
      }
      uVar5 = uVar5 | uVar7;
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
    }
    if ((uVar4 >> 0xe & 1) != 0) {
      uVar5 = FUN_1495f99b4(param_1);
      uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
      uVar4 = *(uint *)((longlong)param_1 + 0x1d4);
    }
    if ((char)uVar4 < '\0') {
      uVar5 = FUN_1495f9a72(param_1,param_1 + 0x3b,param_1[0x69]);
      uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
      uVar4 = *(uint *)((longlong)param_1 + 0x1d4);
    }
    if ((uVar4 >> 8 & 1) != 0) {
      uVar5 = FUN_1495f9e08(param_1,param_1 + 0x3b,param_1[0x69]);
      uVar5 = uVar5 | *(uint *)((longlong)param_1 + 0xfc);
      *(uint *)((longlong)param_1 + 0xfc) = uVar5;
    }
    if ((uVar5 & 4) == 0) {
      FUN_1495fa354();
    }
    else {
      FUN_1495fa24a(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f90a0 FUN_1495f90a0 body=89 status=ok
// SIG undefined FUN_1495f90a0(void)

undefined4 FUN_1495f90a0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((((param_1[1] != param_2[1]) || (param_1[2] != param_2[2])) || (param_1[3] != param_2[3]))
       || ((param_1[5] != param_2[5] || (param_1[6] != param_2[6])))) ||
      (((float)param_1[7] != (float)param_2[7] ||
       ((NAN((float)param_1[7]) || NAN((float)param_2[7]) || (param_1[8] != param_2[8])))))) ||
     ((param_1[4] != param_2[4] || (*param_1 != *param_2)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*param_1 >> 8),(char)param_1[9] == (char)param_2[9]);
  }
  return uVar1;
}



// FUNCTION 1495f90fa FUN_1495f90fa body=236 status=ok
// SIG undefined FUN_1495f90fa(void)

undefined8 FUN_1495f90fa(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if ((param_2 & 9) != 0) {
    cVar1 = FUN_1495ff1f6();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_38 = L"InvalidTargetTangentsWarning";
      local_30 = 0x1c;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UBakeMeshAttributeTool";
      local_30 = 0x16;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,L"The Target Mesh does not have valid tangents.");
      (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,3);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
      uVar3 = 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f91e8 FUN_1495f91e8 body=893 status=ok
// SIG undefined FUN_1495f91e8(void)

uint FUN_1495f91e8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_140e1307c(param_1[100] + 0x130,param_1[100] + 0x100);
  if ((((int)uVar5 < 0) || (*(int *)(*(longlong *)(param_1[0x69] + 0x208) + 0x28) <= (int)uVar5)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1[0x69] + 0x208) + 0x20) + (ulonglong)uVar5 * 8) == 0)) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_50 = L"InvalidUVWarning";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UBakeMeshAttributeMapsTool";
    local_48 = 0x1a;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"The Source Mesh does not have the selected UV layer"
                 );
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_50,3);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    uVar8 = 4;
    goto LAB_1495f9381;
  }
  lVar3 = *(longlong *)(param_1[100] + 0xf8);
  if (lVar3 == 0) {
    param_1[0x71] = 0;
    plVar6 = (longlong *)param_1[0x72];
    uVar7 = 0;
    uVar8 = 0;
    if (plVar6 != (longlong *)0x0) {
      param_1[0x72] = 0;
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      uVar8 = uVar7;
      if ((int)*plVar9 == 0) {
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
  else {
    plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14af3df50;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    if (plVar6 == (longlong *)0x0) {
      param_1[0x71] = 0x10;
      plVar9 = (longlong *)param_1[0x72];
      if (plVar9 != (longlong *)0x0) {
        param_1[0x72] = 0;
LAB_1495f9411:
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_1495f947c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      param_1[0x71] = (longlong)(plVar6 + 2);
      plVar9 = (longlong *)param_1[0x72];
      if (plVar6 == plVar9) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      else {
        param_1[0x72] = (longlong)plVar6;
        if (plVar9 != (longlong *)0x0) goto LAB_1495f9411;
      }
LAB_1495f947c:
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    cVar4 = FUN_1484c23e9(lVar3,param_1[0x71],*(undefined1 *)((longlong)param_1 + 0x122));
    if (cVar4 == '\0') {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_50 = L"CannotReadTextureWarning";
      local_48 = 0x18;
      FUN_1446e940c(local_54,&local_50);
      local_50 = L"UBakeMeshAttributeMapsTool";
      local_48 = 0x1a;
      FUN_1446e940c(local_58,&local_50);
      FUN_140208bae(&local_50,local_58,local_54,L"Cannot read from the source normal map texture");
      (**(code **)(*plVar6 + 0x340))(plVar6,&local_50,3);
      if (local_50 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_50 + 0x10))();
      }
    }
    uVar8 = FUN_1495fa4d6(param_1,*(undefined4 *)((longlong)param_1 + 0x1d4));
  }
  if ((*(uint *)((longlong)param_1 + 0x37c) != uVar5) ||
     ((int)param_1[0x70] != *(int *)(param_1[100] + 0x110))) {
    *(ulonglong *)((longlong)param_1 + 0x37c) = CONCAT44(*(int *)(param_1[100] + 0x110),uVar5);
    uVar8 = uVar8 | 1;
  }
LAB_1495f9381:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1495f9566 FUN_1495f9566 body=608 status=ok
// SIG undefined FUN_1495f9566(void)

undefined8 FUN_1495f9566(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    if (param_1[0x3f] == 0) {
      uVar5 = 0;
    }
    else {
      param_1[0x3f] = 0;
      plVar4 = (longlong *)param_1[0x40];
      uVar5 = 1;
      if (plVar4 != (longlong *)0x0) {
        param_1[0x40] = 0;
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    goto LAB_1495f96f8;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14af3df50;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  if (plVar4 == (longlong *)0x0) {
    param_1[0x3f] = 0x10;
    plVar6 = (longlong *)param_1[0x40];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x40] = 0;
LAB_1495f95fa:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (plVar4 != (longlong *)0x0) goto LAB_1495f961e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x3f] = (longlong)(plVar4 + 2);
    plVar6 = (longlong *)param_1[0x40];
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[0x40] = (longlong)plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_1495f95fa;
    }
LAB_1495f961e:
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  cVar3 = FUN_1484c23e9(param_2,param_1[0x3f],*(undefined1 *)((longlong)param_1 + 0x122));
  uVar5 = 1;
  if (cVar3 == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_38 = L"CannotReadTextureWarning";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UBakeMeshAttributeMapsToolBase";
    local_30 = 0x1e;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"Cannot read from the sample filter mask");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_38,3);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    uVar5 = 4;
  }
LAB_1495f96f8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f97c8 FUN_1495f97c8 body=227 status=ok
// SIG undefined FUN_1495f97c8(void)

undefined8 FUN_1495f97c8(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  
  lVar5 = *(longlong *)(param_1 + 200);
  if (lVar5 != 0) {
    uVar6 = *param_2;
    uVar8 = -(uint)(*(float *)(lVar5 + 0xac) == 0.0);
    fVar9 = (float)(~uVar8 & (uint)*(float *)(lVar5 + 0xac) | uVar8 & 0x7f7fffff);
    iVar3 = *(int *)(lVar5 + 0xa8);
    fVar1 = *(float *)(lVar5 + 0xb0);
    fVar2 = *(float *)(lVar5 + 0xb4);
    iVar4 = *(int *)(lVar5 + 0xb8);
    if ((((((*(int *)(param_1 + 300) != (int)uVar6) ||
           (*(int *)(param_1 + 0x130) != (int)((ulonglong)uVar6 >> 0x20))) ||
          (*(int *)(param_1 + 0x134) != iVar3)) ||
         ((*(float *)(param_1 + 0x138) != fVar9 || (NAN(*(float *)(param_1 + 0x138)) || NAN(fVar9)))
         )) || ((*(float *)(param_1 + 0x13c) != fVar1 ||
                ((NAN(*(float *)(param_1 + 0x13c)) || NAN(fVar1) ||
                 (*(float *)(param_1 + 0x140) != fVar2)))))) ||
       ((NAN(*(float *)(param_1 + 0x140)) || NAN(fVar2) ||
        (uVar7 = 0, *(int *)(param_1 + 0x144) != iVar4)))) {
      *(undefined8 *)(param_1 + 300) = uVar6;
      *(int *)(param_1 + 0x134) = iVar3;
      *(float *)(param_1 + 0x138) = fVar9;
      *(float *)(param_1 + 0x13c) = fVar1;
      *(float *)(param_1 + 0x140) = fVar2;
      *(int *)(param_1 + 0x144) = iVar4;
      uVar7 = 1;
    }
    return uVar7;
  }
  return 4;
}



// FUNCTION 1495f98ac FUN_1495f98ac body=264 status=ok
// SIG undefined FUN_1495f98ac(void)

undefined8 FUN_1495f98ac(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    uVar4 = *param_2;
    uVar7 = *(int *)(lVar3 + 0xa8) - 1;
    iVar6 = 0;
    if (uVar7 < 3) {
      iVar6 = *(int *)(&DAT_14bd79fbc + (ulonglong)uVar7 * 4);
    }
    fVar1 = *(float *)(lVar3 + 0xb0);
    fVar2 = *(float *)(lVar3 + 0xb4);
    iVar8 = (uint)(*(int *)(lVar3 + 0xac) == 1) * 2;
    if (*(int *)(lVar3 + 0xac) == 2) {
      iVar8 = 1;
    }
    uVar7 = (uint)(*(int *)(lVar3 + 0xb8) == 1);
    if (*(int *)(lVar3 + 0xb8) == 2) {
      uVar7 = 2;
    }
    if ((((((*(int *)(param_1 + 0x148) != (int)uVar4) ||
           (*(int *)(param_1 + 0x14c) != (int)((ulonglong)uVar4 >> 0x20))) ||
          (*(int *)(param_1 + 0x150) != iVar6)) ||
         ((*(float *)(param_1 + 0x154) != fVar1 || (NAN(*(float *)(param_1 + 0x154)) || NAN(fVar1)))
         )) || ((*(float *)(param_1 + 0x158) != fVar2 ||
                ((NAN(*(float *)(param_1 + 0x158)) || NAN(fVar2) ||
                 (*(int *)(param_1 + 0x15c) != iVar8)))))) ||
       (uVar5 = 0, *(uint *)(param_1 + 0x160) != uVar7)) {
      *(undefined8 *)(param_1 + 0x148) = uVar4;
      *(int *)(param_1 + 0x150) = iVar6;
      *(float *)(param_1 + 0x154) = fVar1;
      *(float *)(param_1 + 0x158) = fVar2;
      *(int *)(param_1 + 0x15c) = iVar8;
      *(uint *)(param_1 + 0x160) = uVar7;
      uVar5 = 1;
    }
    return uVar5;
  }
  return 4;
}



// FUNCTION 1495f99b4 FUN_1495f99b4 body=188 status=ok
// SIG undefined FUN_1495f99b4(void)

bool FUN_1495f99b4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  lVar1 = *(longlong *)(param_1 + 0x338);
  uStack_48 = *(undefined4 *)(lVar1 + 0xa8);
  uStack_44 = *(undefined4 *)(lVar1 + 0xac);
  local_40 = *(undefined8 *)(lVar1 + 0xb0);
  uStack_38 = *(undefined8 *)(lVar1 + 0xb8);
  local_30 = *(undefined8 *)(lVar1 + 0xc0);
  uStack_28 = *(undefined8 *)(lVar1 + 200);
  local_20 = *(undefined4 *)(lVar1 + 0xd0);
  uStack_1c = *(undefined4 *)(lVar1 + 0xd4);
  uStack_18 = *(undefined4 *)(lVar1 + 0xd8);
  uStack_14 = *(undefined4 *)(lVar1 + 0xdc);
  cVar2 = FUN_1495fa5c4((undefined4 *)(param_1 + 0x398));
  if (cVar2 == '\0') {
    *(ulonglong *)(param_1 + 0x3c8) = CONCAT44(uStack_1c,local_20);
    *(ulonglong *)(param_1 + 0x3d0) = CONCAT44(uStack_14,uStack_18);
    *(undefined8 *)(param_1 + 0x3b8) = local_30;
    *(undefined8 *)(param_1 + 0x3c0) = uStack_28;
    *(undefined8 *)(param_1 + 0x3a8) = local_40;
    *(undefined8 *)(param_1 + 0x3b0) = uStack_38;
    *(undefined4 *)(param_1 + 0x398) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x39c) = local_50._4_4_;
    *(undefined4 *)(param_1 + 0x3a0) = uStack_48;
    *(undefined4 *)(param_1 + 0x3a4) = uStack_44;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar2 == '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f9a72 FUN_1495f9a72 body=917 status=ok
// SIG undefined FUN_1495f9a72(void)

undefined8 FUN_1495f9a72(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[0x1b];
  uVar8 = 4;
  if (param_3 == 0 || lVar3 == 0) goto LAB_1495f9ab2;
  uVar4 = *param_2;
  uVar6 = FUN_140e1307c(lVar3 + 0xc0,lVar3 + 0xb0);
  if ((int)uVar6 < 0) {
LAB_1495f9c4f:
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"InvalidUVWarning";
    local_40 = 0x10;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UBakeMeshAttributeTool";
    local_40 = 0x16;
    FUN_1446e940c(local_50,&local_48);
    pwVar9 = L"The Source Mesh does not have the selected UV layer";
  }
  else {
    if ((*(int *)(*(longlong *)(param_3 + 0x208) + 0x28) <= (int)uVar6) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x20) + (ulonglong)uVar6 * 8)
        == 0)) goto LAB_1495f9c4f;
    if (*(longlong *)(param_1[0x1b] + 0xa8) == 0) {
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_48 = L"InvalidTextureWarning";
      local_40 = 0x15;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UBakeMeshAttributeTool";
      local_40 = 0x16;
      FUN_1446e940c(local_50,&local_48);
      pwVar9 = L"The Source Texture is not valid";
    }
    else {
      plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14af3df50;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      if (plVar7 == (longlong *)0x0) {
        param_1[0x2f] = 0x10;
        plVar10 = (longlong *)param_1[0x30];
        if (plVar10 != (longlong *)0x0) {
          param_1[0x30] = 0;
LAB_1495f9ba0:
          LOCK();
          plVar1 = plVar10 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          if (plVar7 != (longlong *)0x0) goto LAB_1495f9bc4;
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        param_1[0x2f] = (longlong)(plVar7 + 2);
        plVar10 = (longlong *)param_1[0x30];
        if (plVar7 == plVar10) {
          LOCK();
          plVar10 = plVar7 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        else {
          param_1[0x30] = (longlong)plVar7;
          if (plVar10 != (longlong *)0x0) goto LAB_1495f9ba0;
        }
LAB_1495f9bc4:
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      cVar5 = FUN_1484c23e9(*(undefined8 *)(param_1[0x1b] + 0xa8),param_1[0x2f],
                            *(undefined1 *)((longlong)param_1 + 0x122));
      if (cVar5 != '\0') {
        if (((*(int *)((longlong)param_1 + 0x16c) != (int)uVar4) ||
            ((int)param_1[0x2e] != (int)((ulonglong)uVar4 >> 0x20))) ||
           (uVar8 = 0, *(uint *)((longlong)param_1 + 0x174) != uVar6)) {
          *(undefined8 *)((longlong)param_1 + 0x16c) = uVar4;
          *(uint *)((longlong)param_1 + 0x174) = uVar6;
          uVar8 = 1;
        }
        goto LAB_1495f9ab2;
      }
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_48 = L"CannotReadTextureWarning";
      local_40 = 0x18;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UBakeMeshAttributeTool";
      local_40 = 0x16;
      FUN_1446e940c(local_50,&local_48);
      pwVar9 = L"Cannot read from the source texture";
    }
  }
  FUN_140208bae(&local_48,local_50,local_4c,pwVar9);
  (**(code **)(*plVar7 + 0x340))(plVar7,&local_48,3);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
LAB_1495f9ab2:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495f9e08 FUN_1495f9e08 body=1089 status=ok
// SIG undefined FUN_1495f9e08(void)

undefined8 FUN_1495f9e08(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  ulonglong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar13 = param_1[0x1c];
  uVar11 = 4;
  if (param_3 == 0 || lVar13 == 0) goto LAB_1495f9e50;
  uVar4 = *param_2;
  uVar7 = FUN_140e1307c(lVar13 + 200,lVar13 + 0xb8);
  if ((int)uVar7 < 0) {
LAB_1495f9eb8:
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_70 = L"InvalidUVWarning";
    local_68 = 0x10;
    FUN_1446e940c(local_74,&local_70);
    local_70 = L"UBakeMeshAttributeTool";
    local_68 = 0x16;
    FUN_1446e940c(local_78,&local_70);
    pwVar12 = L"The Source Mesh does not have the selected UV layer";
  }
  else {
    if ((*(int *)(*(longlong *)(param_3 + 0x208) + 0x28) <= (int)uVar7) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x20) + (ulonglong)uVar7 * 8)
        == 0)) goto LAB_1495f9eb8;
    uVar3 = *(uint *)(param_1[0x1c] + 0xb0);
    plVar8 = param_1 + 0x33;
    iVar9 = *(int *)((longlong)param_1 + 0x1a4);
    FUN_145810cd0(param_1[0x33],(int)param_1[0x34]);
    *(undefined4 *)(param_1 + 0x34) = 0;
    if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0x1a4) != 0)) {
      FUN_149607baa(plVar8);
    }
    FUN_148576378(plVar8,(ulonglong)uVar3,1);
    if (0 < (int)uVar3) {
      local_88 = uVar4 >> 0x20;
      lVar13 = (ulonglong)uVar3 << 3;
      lVar14 = 0;
      iVar9 = 0;
      local_90 = plVar8;
      local_80 = lVar13;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1[0x1c] + 0xa8) + lVar14);
        if (lVar5 != 0) {
          local_94 = iVar9;
          plVar8 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14af3df50;
          plVar8[2] = 0;
          plVar8[3] = 0;
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          if (plVar8 == (longlong *)0x0) {
            lVar13 = *local_90;
            *(undefined8 *)(lVar13 + lVar14 * 2) = 0x10;
            plVar10 = *(longlong **)(lVar13 + 8 + lVar14 * 2);
            if (plVar10 != (longlong *)0x0) {
              *(undefined8 *)(lVar13 + 8 + lVar14 * 2) = 0;
LAB_1495fa070:
              LOCK();
              plVar1 = plVar10 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
              if (plVar8 != (longlong *)0x0) goto LAB_1495fa094;
            }
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            lVar13 = *local_90;
            *(longlong **)(lVar13 + lVar14 * 2) = plVar8 + 2;
            plVar10 = *(longlong **)(lVar13 + 8 + lVar14 * 2);
            if (plVar8 == plVar10) {
              LOCK();
              plVar10 = plVar8 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            else {
              *(longlong **)(lVar13 + 8 + lVar14 * 2) = plVar8;
              if (plVar10 != (longlong *)0x0) goto LAB_1495fa070;
            }
LAB_1495fa094:
            LOCK();
            plVar10 = plVar8 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          cVar6 = FUN_1484c23e9(lVar5,*(undefined8 *)(param_1[0x33] + lVar14 * 2),
                                *(undefined1 *)((longlong)param_1 + 0x122));
          if (cVar6 == '\0') {
            plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
            local_70 = L"CannotReadTextureWarning";
            local_68 = 0x18;
            FUN_1446e940c(local_74,&local_70);
            local_70 = L"UBakeMeshAttributeTool";
            local_68 = 0x16;
            FUN_1446e940c(local_78,&local_70);
            pwVar12 = L"Cannot read from the source texture";
            goto LAB_1495f9f17;
          }
          iVar9 = local_94 + 1;
          lVar13 = local_80;
        }
        lVar14 = lVar14 + 8;
      } while (lVar13 != lVar14);
      if (iVar9 != 0) {
        if ((((int)param_1[0x31] != (int)uVar4) ||
            (*(int *)((longlong)param_1 + 0x18c) != (int)local_88)) ||
           (uVar11 = 0, *(uint *)(param_1 + 0x32) != uVar7)) {
          param_1[0x31] = uVar4;
          *(uint *)(param_1 + 0x32) = uVar7;
          uVar11 = 1;
        }
        goto LAB_1495f9e50;
      }
    }
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_70 = L"InvalidTextureWarning";
    local_68 = 0x15;
    FUN_1446e940c(local_74,&local_70);
    local_70 = L"UBakeMeshAttributeTool";
    local_68 = 0x16;
    FUN_1446e940c(local_78,&local_70);
    pwVar12 = L"The Source Texture is not valid";
  }
LAB_1495f9f17:
  FUN_140208bae(&local_70,local_78,local_74,pwVar12);
  (**(code **)(*plVar8 + 0x340))(plVar8,&local_70,3);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1495f9e50:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fa24a FUN_1495fa24a body=265 status=ok
// SIG undefined FUN_1495fa24a(void)

void FUN_1495fa24a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  lVar3 = *(longlong *)(param_1 + 0x330);
  plVar1 = (longlong *)(lVar3 + 0xa8);
  lVar2 = lVar3 + 0xb8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(lVar3 + 0xd0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(lVar3 + 0xd0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      *(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) = 0;
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fa354 FUN_1495fa354 body=384 status=ok
// SIG undefined FUN_1495fa354(void)

void FUN_1495fa354(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x218);
  if (lVar4 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 2) = 2;
    *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0x200000000;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined8 **)(param_1 + 0x218) = puVar2;
    FUN_1495fb108(puVar2,param_1 + 0x1a8);
    lVar4 = *(longlong *)(param_1 + 0x218);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_14bd79640;
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
    local_40[2] = lVar3;
    *local_40 = &PTR_FUN_14bd795d0;
    local_40[3] = param_1;
    FUN_149607480(lVar4 + 0x18,local_48,&local_40);
    FUN_1449db362(&local_40);
    lVar4 = *(longlong *)(param_1 + 0x218);
  }
  lVar1 = *(longlong *)(lVar4 + 0x40);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 1) {
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x10) = 2;
    }
    else if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_149606f64();
    }
    *(undefined1 *)(lVar4 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fa4d6 FUN_1495fa4d6 body=236 status=ok
// SIG undefined FUN_1495fa4d6(void)

undefined8 FUN_1495fa4d6(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if ((param_2 & 9) != 0) {
    cVar1 = FUN_1495f8cdc();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_38 = L"InvalidSourceTangentsWarning";
      local_30 = 0x1c;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UBakeMeshAttributeMapsTool";
      local_30 = 0x1a;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,L"The Source Mesh does not have valid tangents.");
      (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,3);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
      uVar3 = 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fa5c4 FUN_1495fa5c4 body=237 status=ok
// SIG undefined FUN_1495fa5c4(void)

byte FUN_1495fa5c4(int *param_1,int *param_2)

{
  byte bVar1;
  
  if (((((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
        (((float)param_1[3] != (float)param_2[3] ||
         (NAN((float)param_1[3]) || NAN((float)param_2[3]))))) ||
       ((float)param_1[4] != (float)param_2[4])) ||
      (((((NAN((float)param_1[4]) || NAN((float)param_2[4]) ||
          ((float)param_1[5] != (float)param_2[5])) ||
         ((NAN((float)param_1[5]) || NAN((float)param_2[5]) ||
          ((((float)param_1[6] != (float)param_2[6] ||
            (NAN((float)param_1[6]) || NAN((float)param_2[6]))) ||
           ((float)param_1[7] != (float)param_2[7])))))) ||
        (((NAN((float)param_1[7]) || NAN((float)param_2[7]) ||
          ((float)param_1[8] != (float)param_2[8])) ||
         ((NAN((float)param_1[8]) || NAN((float)param_2[8]) ||
          (((((float)param_1[9] != (float)param_2[9] ||
             (NAN((float)param_1[9]) || NAN((float)param_2[9]))) ||
            (((float)param_1[10] != (float)param_2[10] ||
             (((NAN((float)param_1[10]) || NAN((float)param_2[10]) ||
               ((float)param_1[0xb] != (float)param_2[0xb])) ||
              (NAN((float)param_1[0xb]) || NAN((float)param_2[0xb]))))))) ||
           (((float)param_1[0xc] != (float)param_2[0xc] ||
            (NAN((float)param_1[0xc]) || NAN((float)param_2[0xc]))))))))))) ||
       ((float)param_1[0xd] != (float)param_2[0xd])))) ||
     (((NAN((float)param_1[0xd]) || NAN((float)param_2[0xd]) ||
       ((float)param_1[0xe] != (float)param_2[0xe])) ||
      (NAN((float)param_1[0xe]) || NAN((float)param_2[0xe]))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -((float)param_2[0xf] == (float)param_1[0xf]) & 1;
  }
  return bVar1;
}



// FUNCTION 1495fa6b2 FUN_1495fa6b2 body=536 status=ok
// SIG undefined FUN_1495fa6b2(void)

void FUN_1495fa6b2(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1b8) + 0x50);
  (**(code **)(*plVar3 + 0xb30))(plVar3,*(undefined8 *)(param_1 + 0x1c0));
  plVar3 = (longlong *)(param_1 + 0x220);
  lVar1 = param_1 + 0x230;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = lVar1;
  if (*(int *)(param_1 + 0x248) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x248);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar3;
  if ((iStack_4c == iVar7) && (local_58 == lVar1)) {
LAB_1495fa888:
    FUN_1495fa8cc(param_1,*(longlong *)(param_1 + 0x328) + 0xb0,
                  *(longlong *)(param_1 + 0x328) + 0xe8);
    if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1495fa836:
  lVar4 = *(longlong *)(param_1 + 0x330);
  if (*(int *)(lVar4 + 0xb0) != *(int *)(lVar4 + 0xdc)) {
    uVar2 = *(uint *)(*local_88 + (longlong)iStack_6c * 0x18);
    lVar6 = lVar4 + 0xe0;
    if (*(longlong *)(lVar4 + 0xe8) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0xe8);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0xf0) - 1U & uVar2) * 4);
    if (uVar5 != 0xffffffff) {
      lVar6 = *local_88 + (longlong)iStack_6c * 0x18;
      lVar4 = *(longlong *)(lVar4 + 0xa8);
      uVar8 = uVar5;
      do {
        if (*(uint *)(lVar4 + (longlong)(int)uVar8 * 0x18) == uVar2) goto LAB_1495fa7f2;
        uVar8 = *(uint *)(lVar4 + (longlong)(int)uVar8 * 0x18 + 0x10);
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_1495fa851;
  while (uVar5 = puVar9[4], uVar5 != 0xffffffff) {
LAB_1495fa7f2:
    puVar9 = (uint *)(lVar4 + (longlong)(int)uVar5 * 0x18);
    if (*puVar9 == uVar2) goto LAB_1495fa810;
  }
  puVar9 = (uint *)0x0;
LAB_1495fa810:
  lVar4 = *(longlong *)(lVar6 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(lVar6 + 8);
    }
  }
  *(longlong *)(puVar9 + 2) = lVar4;
LAB_1495fa851:
  local_70 = local_70 & ~local_80._4_4_;
  FUN_1449c0562(&local_80);
  if (local_88 == plVar3 && (local_78 == lVar1 && iStack_6c == iVar7)) goto LAB_1495fa888;
  goto LAB_1495fa836;
}



// FUNCTION 1495fa8cc FUN_1495fa8cc body=187 status=ok
// SIG undefined FUN_1495fa8cc(void)

void FUN_1495fa8cc(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1457511aa(param_3,uVar1,param_2);
  uVar4 = 0;
  if (iVar2 != -1) {
    uVar4 = (longlong)iVar2 * 0x28 + *param_3;
  }
  if (uVar4 != 0) {
    if (DAT_14cc1ff70 == 0) {
      uVar3 = FUN_1410a127e();
      DAT_14cc1ff70 = FUN_14171c317(FUN_1467449c1,uVar3,L"EBakeMapType");
    }
    uVar4 = FUN_14689a7b0(DAT_14cc1ff70,uVar4 + 0x10,0);
    if (uVar4 != 0xffffffffffffffff) {
      FUN_1495fe332(param_1,uVar4 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 1495fa988 FUN_1495fa988 body=308 status=ok
// SIG undefined FUN_1495fa988(void)

void FUN_1495fa988(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  uint *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_4;
  FUN_1495fad20();
  local_80 = param_1 + 0x220;
  local_90 = param_1;
  FUN_149607576();
  local_78 = param_3;
  FUN_149607576(param_3);
  lVar1 = 0;
  do {
    local_64 = *(uint *)((longlong)&DAT_14bd72980 + lVar1);
    if ((local_64 & (param_2 * 8 & 0x40 | param_2)) != 0) {
      local_70 = 0;
      local_60 = &local_64;
      local_58 = &local_70;
      FUN_14960789e(local_80,local_4c,&local_60);
    }
    if ((local_64 & param_2) != 0) {
      local_70 = 0;
      local_60 = &local_64;
      local_58 = &local_70;
      FUN_14960789e(local_78,local_4c,&local_60);
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x34);
  local_98 = param_6;
  FUN_1495fe972(local_90,param_2,local_88,param_5);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495faafa FUN_1495faafa body=129 status=ok
// SIG undefined FUN_1495faafa(void)

void FUN_1495faafa(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1484416be();
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar2 = FUN_14855796a(uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x1d] = lVar2;
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar2 = FUN_148557997(uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x1e] = lVar2;
  return;
}



// FUNCTION 1495fab7c FUN_1495fab7c body=419 status=ok
// SIG undefined FUN_1495fab7c(void)

void FUN_1495fab7c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = &PTR_FUN_14aefd850;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 2;
  FUN_1484c1c3e(&local_78,5,0x1000000010);
  FUN_1484c1f36(&local_78,0);
  lVar1 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  *(longlong *)(param_1 + 0x308) = lVar1;
  local_b0 = &PTR_FUN_14aefd850;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 2;
  FUN_1484c1c3e(&local_b0,0,0x1000000010);
  local_e8 = (undefined **)CONCAT44(local_e8._4_4_,0xff000000);
  FUN_1484c1f8c(&local_b0);
  FUN_1484c1f36(&local_b0,0);
  lVar1 = local_98;
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_98);
  }
  *(longlong *)(param_1 + 0x310) = lVar1;
  local_e8 = &PTR_FUN_14aefd850;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 2;
  FUN_1484c1c3e(&local_e8,0,0x1000000010);
  FUN_1484c1f8c(&local_e8,&DAT_149e1e2cc);
  FUN_1484c1f36(&local_e8,0);
  lVar1 = local_d0;
  if ((local_d0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_d0);
  }
  *(longlong *)(param_1 + 0x318) = lVar1;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fad20 FUN_1495fad20 body=221 status=ok
// SIG undefined FUN_1495fad20(void)

void FUN_1495fad20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  FUN_1446f470e(&local_30,L"NormalMap",1);
  FUN_14016d8b0(uVar1,local_30,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  uVar2 = *(undefined8 *)(param_1 + 0x318);
  FUN_1446f470e(&local_38,L"OcclusionMap",1);
  FUN_14016d8b0(uVar1,local_38,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  uVar2 = *(undefined8 *)(param_1 + 0x318);
  FUN_1446f470e(&local_40,L"ColorMap",1);
  FUN_14016d8b0(uVar1,local_40,uVar2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fadfe FUN_1495fadfe body=148 status=ok
// SIG undefined FUN_1495fadfe(void)

undefined8 FUN_1495fadfe(undefined8 param_1)

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
  uVar1 = FUN_1459f7e92();
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



// FUNCTION 1495fae94 FUN_1495fae94 body=230 status=ok
// SIG undefined FUN_1495fae94(void)

void FUN_1495fae94(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x43];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_144552e02();
    }
    FUN_149606ea0(lVar1);
  }
  if ((*(byte *)((longlong)param_1 + 0xfc) & 4) != 0) goto LAB_1495faf2c;
  cVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
  if ((cVar2 != '\0') || (param_1[0x43] == 0)) goto LAB_1495faedb;
  lVar1 = *(longlong *)(param_1[0x43] + 0x40);
  if (lVar1 == 0) {
LAB_1495faf1b:
    fVar3 = 0.0;
  }
  else {
    FUN_144552e92(lVar1,local_30);
    if (local_30[0] != 3) goto LAB_1495faf1b;
    fVar3 = (float)local_28;
  }
  if (fVar3 < *(float *)(param_1 + 0x1f) || fVar3 == *(float *)(param_1 + 0x1f)) {
LAB_1495faedb:
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1495faf2c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1495faf8e FUN_1495faf8e body=360 status=ok
// SIG undefined FUN_1495faf8e(void)

void FUN_1495faf8e(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x398))();
  local_78 = (double)*(float *)(param_1[0x36] + 0xac);
  uVar1 = *(undefined4 *)(param_1[0x36] + 0xb0);
  lVar2 = param_1[0x38];
  local_70 = local_78;
  local_68 = local_78;
  FUN_1446f470e(&local_80,L"Brightness",1);
  FUN_144a083d0(local_60,&local_78);
  FUN_144a9d3f0(lVar2,local_80,local_60);
  lVar2 = param_1[0x38];
  FUN_1446f470e(&local_88,L"AOMultiplier",1);
  FUN_14472da24(lVar2,local_88,uVar1);
  lVar2 = param_1[0x39];
  FUN_1446f470e(&local_90,L"Brightness",1);
  FUN_144a083d0(local_60,&local_78);
  FUN_144a9d3f0(lVar2,local_90,local_60);
  lVar2 = param_1[0x39];
  FUN_1446f470e(&local_98,L"AOMultiplier",1);
  FUN_14472da24(lVar2,local_98,uVar1);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fb108 FUN_1495fb108 body=74 status=ok
// SIG undefined FUN_1495fb108(void)

void FUN_1495fb108(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(0x58,0x10);
  FUN_14960738a(uVar2,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_149603aea(uVar1);
  FUN_149603aea(0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1495fb152 FUN_1495fb152 body=719 status=ok
// SIG undefined FUN_1495fb152(void)

void FUN_1495fb152(int param_1,undefined8 *param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 < 0x80) {
    if (param_1 < 0x10) {
      switch(param_1) {
      case 1:
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        pwVar1 = L"%s_TangentNormal";
        break;
      case 2:
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        pwVar1 = L"%s_ObjectNormal";
        break;
      default:
        goto switchD_1495fb18d_caseD_3;
      case 4:
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        pwVar1 = L"%s_FaceNormal";
        break;
      case 8:
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        pwVar1 = L"%s_BentNormal";
      }
    }
    else if (param_1 == 0x10) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_Position";
    }
    else if (param_1 == 0x20) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_Curvature";
    }
    else {
      if (param_1 != 0x40) goto switchD_1495fb18d_caseD_3;
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_AmbientOcclusion";
    }
  }
  else if (param_1 < 0x400) {
    if (param_1 == 0x80) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_Texture";
    }
    else if (param_1 == 0x100) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_MultiTexture";
    }
    else {
      if (param_1 != 0x200) goto switchD_1495fb18d_caseD_3;
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      pwVar1 = L"%s_VertexColor";
    }
  }
  else if (param_1 == 0x400) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    pwVar1 = L"%s_MaterialID";
  }
  else if (param_1 == 0x800) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    pwVar1 = L"%s_PolyGroupID";
  }
  else {
    if (param_1 != 0x4000) goto switchD_1495fb18d_caseD_3;
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    pwVar1 = L"%s_UVShell";
  }
  FUN_140002266(&local_28,pwVar1,puVar2);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
switchD_1495fb18d_caseD_3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fb422 FUN_1495fb422 body=12046 status=ok
// SIG undefined FUN_1495fb422(void)

/* WARNING: Removing unreachable block (ram,0x0001495fe155) */
/* WARNING: Removing unreachable block (ram,0x0001495fdef6) */
/* WARNING: Removing unreachable block (ram,0x0001495fdc8a) */
/* WARNING: Removing unreachable block (ram,0x0001495fda1c) */
/* WARNING: Removing unreachable block (ram,0x0001495fd7af) */
/* WARNING: Removing unreachable block (ram,0x0001495fd557) */
/* WARNING: Removing unreachable block (ram,0x0001495fd2ff) */
/* WARNING: Removing unreachable block (ram,0x0001495fd08e) */
/* WARNING: Removing unreachable block (ram,0x0001495fce3c) */
/* WARNING: Removing unreachable block (ram,0x0001495fcbce) */
/* WARNING: Removing unreachable block (ram,0x0001495fc97c) */
/* WARNING: Removing unreachable block (ram,0x0001495fc71c) */
/* WARNING: Removing unreachable block (ram,0x0001495fc4b1) */
/* WARNING: Removing unreachable block (ram,0x0001495fc25f) */
/* WARNING: Removing unreachable block (ram,0x0001495fc00d) */
/* WARNING: Removing unreachable block (ram,0x0001495fbdaf) */
/* WARNING: Removing unreachable block (ram,0x0001495fbb5d) */
/* WARNING: Removing unreachable block (ram,0x0001495fb90b) */
/* WARNING: Removing unreachable block (ram,0x0001495fb6b9) */
/* WARNING: Removing unreachable block (ram,0x0001495fb590) */
/* WARNING: Removing unreachable block (ram,0x0001495fb7e2) */
/* WARNING: Removing unreachable block (ram,0x0001495fba34) */
/* WARNING: Removing unreachable block (ram,0x0001495fbc86) */
/* WARNING: Removing unreachable block (ram,0x0001495fbede) */
/* WARNING: Removing unreachable block (ram,0x0001495fc136) */
/* WARNING: Removing unreachable block (ram,0x0001495fc388) */
/* WARNING: Removing unreachable block (ram,0x0001495fc5e5) */
/* WARNING: Removing unreachable block (ram,0x0001495fc853) */
/* WARNING: Removing unreachable block (ram,0x0001495fcaa5) */
/* WARNING: Removing unreachable block (ram,0x0001495fcd05) */
/* WARNING: Removing unreachable block (ram,0x0001495fcf65) */
/* WARNING: Removing unreachable block (ram,0x0001495fd1c5) */
/* WARNING: Removing unreachable block (ram,0x0001495fd42b) */
/* WARNING: Removing unreachable block (ram,0x0001495fd683) */
/* WARNING: Removing unreachable block (ram,0x0001495fd8e5) */
/* WARNING: Removing unreachable block (ram,0x0001495fdb53) */
/* WARNING: Removing unreachable block (ram,0x0001495fddc1) */
/* WARNING: Removing unreachable block (ram,0x0001495fe024) */
/* WARNING: Removing unreachable block (ram,0x0001495fe286) */
/* WARNING: Removing unreachable block (ram,0x0001495fe167) */
/* WARNING: Removing unreachable block (ram,0x0001495fdf08) */
/* WARNING: Removing unreachable block (ram,0x0001495fdc9c) */
/* WARNING: Removing unreachable block (ram,0x0001495fda2e) */
/* WARNING: Removing unreachable block (ram,0x0001495fd7c1) */
/* WARNING: Removing unreachable block (ram,0x0001495fd569) */
/* WARNING: Removing unreachable block (ram,0x0001495fd311) */
/* WARNING: Removing unreachable block (ram,0x0001495fd0a0) */
/* WARNING: Removing unreachable block (ram,0x0001495fce4e) */
/* WARNING: Removing unreachable block (ram,0x0001495fcbe0) */
/* WARNING: Removing unreachable block (ram,0x0001495fc98e) */
/* WARNING: Removing unreachable block (ram,0x0001495fc72e) */
/* WARNING: Removing unreachable block (ram,0x0001495fc4c3) */
/* WARNING: Removing unreachable block (ram,0x0001495fc271) */
/* WARNING: Removing unreachable block (ram,0x0001495fc01f) */
/* WARNING: Removing unreachable block (ram,0x0001495fbdc1) */
/* WARNING: Removing unreachable block (ram,0x0001495fbb6f) */
/* WARNING: Removing unreachable block (ram,0x0001495fb91d) */
/* WARNING: Removing unreachable block (ram,0x0001495fb6cb) */
/* WARNING: Removing unreachable block (ram,0x0001495fb5a2) */
/* WARNING: Removing unreachable block (ram,0x0001495fb7f4) */
/* WARNING: Removing unreachable block (ram,0x0001495fba46) */
/* WARNING: Removing unreachable block (ram,0x0001495fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001495fbef0) */
/* WARNING: Removing unreachable block (ram,0x0001495fc148) */
/* WARNING: Removing unreachable block (ram,0x0001495fc39a) */
/* WARNING: Removing unreachable block (ram,0x0001495fc5f7) */
/* WARNING: Removing unreachable block (ram,0x0001495fc865) */
/* WARNING: Removing unreachable block (ram,0x0001495fcab7) */
/* WARNING: Removing unreachable block (ram,0x0001495fcd17) */
/* WARNING: Removing unreachable block (ram,0x0001495fcf77) */
/* WARNING: Removing unreachable block (ram,0x0001495fd1d7) */
/* WARNING: Removing unreachable block (ram,0x0001495fd43d) */
/* WARNING: Removing unreachable block (ram,0x0001495fd695) */
/* WARNING: Removing unreachable block (ram,0x0001495fd8f7) */
/* WARNING: Removing unreachable block (ram,0x0001495fdb65) */
/* WARNING: Removing unreachable block (ram,0x0001495fddd3) */
/* WARNING: Removing unreachable block (ram,0x0001495fe036) */
/* WARNING: Removing unreachable block (ram,0x0001495fe298) */

void FUN_1495fb422(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_378 [40];
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined1 local_340 [23];
  byte local_329;
  undefined1 local_328 [23];
  byte local_311;
  undefined1 local_310 [23];
  byte local_2f9;
  undefined1 local_2f8 [23];
  byte local_2e1;
  undefined1 local_2e0 [23];
  byte local_2c9;
  undefined1 local_2c8 [23];
  byte local_2b1;
  undefined1 local_2b0 [23];
  byte local_299;
  undefined1 local_298 [23];
  byte local_281;
  undefined1 local_280 [23];
  byte local_269;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [23];
  byte local_201;
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [23];
  byte local_1b9;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [23];
  byte local_161;
  undefined1 local_160 [23];
  byte local_149;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (DAT_14cad8288 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140056680(local_78,L"Bake.Duration.Total.Seconds");
    FUN_147bd92ba(&local_68,local_78,param_1);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uVar1 = (uint)uStack_30 + 1;
    uStack_30._0_4_ = uVar1;
    if (uStack_30._4_4_ < uVar1) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_88,L"Bake.Duration.WriteToImage.Seconds");
    FUN_147bd92ba(&local_68,local_88,param_1 + 8);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_98,L"Bake.Duration.WriteToGutter.Seconds");
    FUN_147bd92ba(&local_68,local_98,param_1 + 0x10);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_a8,L"Bake.Stats.NumSamplePixels");
    FUN_1495ff18c(&local_68,local_a8,param_1 + 0x18);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_b8,L"Bake.Stats.NumGutterPixels");
    FUN_1495ff18c(&local_68,local_b8,param_1 + 0x20);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_c8,L"Input.TargetMesh.NumTriangles");
    FUN_146b28a8a(&local_68,local_c8,param_1 + 0x28);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_d8,L"Input.DetailMesh.NumMeshes");
    FUN_146b28a8a(&local_68,local_d8,param_1 + 0x2c);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_e8,L"Input.DetailMesh.NumTriangles");
    FUN_1495ff18c(&local_68,local_e8,param_1 + 0x30);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_350 = *(undefined4 *)(param_1 + 0x40);
    FUN_140056680(local_f8,L"Settings.Image.Width");
    FUN_14731cdf8(&local_68,local_f8,&local_350);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_350 = *(undefined4 *)(param_1 + 0x44);
    FUN_140056680(local_108,L"Settings.Image.Height");
    FUN_14731cdf8(&local_68,local_108,&local_350);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_118,L"Settings.SamplesPerPixel");
    FUN_146b28a8a(&local_68,local_118,param_1 + 0x58);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_128,L"Settings.ProjectionDistance");
    FUN_1479a6dbe(&local_68,local_128,param_1 + 0x54);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_138,L"Settings.ProjectionInWorldSpace");
    FUN_1490d6ab4(&local_68,local_138,param_1 + 0x5c);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_140056680(local_148,L"Settings.TargetUVLayer");
    FUN_146b28a8a(&local_68,local_148,param_1 + 0x4c);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_149 = *(byte *)(param_1 + 0x38) & 1;
    FUN_140056680(local_160,L"Settings.TangentSpaceNormal.Enabled");
    FUN_1490d6ab4(&local_68,local_160,&local_149);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_161 = *(byte *)(param_1 + 0x38) >> 6 & 1;
    FUN_140056680(local_178,L"Settings.AmbientOcclusion.Enabled");
    FUN_1490d6ab4(&local_68,local_178,&local_161);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    if (local_161 == 1) {
      FUN_140056680(local_188,L"Settings.AmbientOcclusion.OcclusionRays");
      FUN_146b28a8a(&local_68,local_188,param_1 + 0x68);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_198,L"Settings.AmbientOcclusion.MaxDistance");
      FUN_1479a6dbe(&local_68,local_198,param_1 + 0x6c);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_1a8,L"Settings.AmbientOcclusion.SpreadAngle");
      FUN_1479a6dbe(&local_68,local_1a8,param_1 + 0x70);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_1b8,L"Settings.AmbientOcclusion.BiasAngle");
      FUN_1479a6dbe(&local_68,local_1b8,param_1 + 0x74);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    }
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_1b9 = *(byte *)(param_1 + 0x38) >> 3 & 1;
    FUN_140056680(local_1d0,L"Settings.BentNormal.Enabled");
    FUN_1490d6ab4(&local_68,local_1d0,&local_1b9);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    if (local_1b9 == 1) {
      FUN_140056680(local_1e0,L"Settings.BentNormal.OcclusionRays");
      FUN_146b28a8a(&local_68,local_1e0,param_1 + 0x68);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_1f0,L"Settings.BentNormal.MaxDistance");
      FUN_1479a6dbe(&local_68,local_1f0,param_1 + 0x6c);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_200,L"Settings.BentNormal.SpreadAngle");
      FUN_1479a6dbe(&local_68,local_200,param_1 + 0x70);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    }
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_201 = *(byte *)(param_1 + 0x38) >> 5 & 1;
    FUN_140056680(local_218,L"Settings.Curvature.Enabled");
    FUN_1490d6ab4(&local_68,local_218,&local_201);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    if (local_201 == 1) {
      FUN_140056680(local_228,L"Settings.Curvature.CurvatureType");
      FUN_146b28a8a(&local_68,local_228,param_1 + 0x84);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_238,L"Settings.Curvature.RangeMultiplier");
      FUN_1479a6dbe(&local_68,local_238,param_1 + 0x88);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_248,L"Settings.Curvature.MinRangeMultiplier");
      FUN_1479a6dbe(&local_68,local_248,param_1 + 0x8c);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_258,L"Settings.Curvature.ClampMode");
      FUN_146b28a8a(&local_68,local_258,param_1 + 0x94);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140056680(local_268,L"Settings.Curvature.ColorMode");
      FUN_146b28a8a(&local_68,local_268,param_1 + 0x90);
      lVar3 = (longlong)(int)(uint)uStack_30;
      uStack_30._0_4_ = (uint)uStack_30 + 1;
      if (uStack_30._4_4_ < (uint)uStack_30) {
        FUN_146b17dba(&local_38);
      }
      lVar3 = lVar3 * 0x30;
      *(undefined8 *)(local_38 + lVar3) = 0;
      *(longlong *)(local_38 + lVar3) = local_68;
      *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
      *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
      *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
      *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
      *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
      *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
      *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
      *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    }
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_269 = *(byte *)(param_1 + 0x38) >> 1 & 1;
    FUN_140056680(local_280,L"Settings.ObjectSpaceNormal.Enabled");
    FUN_1490d6ab4(&local_68,local_280,&local_269);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_281 = *(byte *)(param_1 + 0x38) >> 2 & 1;
    FUN_140056680(local_298,L"Settings.FaceNormal.Enabled");
    FUN_1490d6ab4(&local_68,local_298,&local_281);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_299 = *(byte *)(param_1 + 0x38) >> 4 & 1;
    FUN_140056680(local_2b0,L"Settings.Position.Enabled");
    FUN_1490d6ab4(&local_68,local_2b0,&local_299);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_2b1 = (byte)(*(uint *)(param_1 + 0x38) >> 10) & 1;
    FUN_140056680(local_2c8,L"Settings.MaterialID.Enabled");
    FUN_1490d6ab4(&local_68,local_2c8,&local_2b1);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_2c9 = (byte)(*(uint *)(param_1 + 0x38) >> 0xb) & 1;
    FUN_140056680(local_2e0,L"Settings.PolyGroupID.Enabled");
    FUN_1490d6ab4(&local_68,local_2e0,&local_2c9);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_2e1 = *(byte *)(param_1 + 0x38) >> 7;
    FUN_140056680(local_2f8,L"Settings.Texture.Enabled");
    FUN_1490d6ab4(&local_68,local_2f8,&local_2e1);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_2f9 = *(byte *)(param_1 + 0x39) & 1;
    FUN_140056680(local_310,L"Settings.MultiTexture.Enabled");
    FUN_1490d6ab4(&local_68,local_310,&local_2f9);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_311 = (byte)(*(uint *)(param_1 + 0x38) >> 9) & 1;
    FUN_140056680(local_328,L"Settings.VertexColor.Enabled");
    FUN_1490d6ab4(&local_68,local_328,&local_311);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_329 = (byte)(*(uint *)(param_1 + 0x38) >> 0xe) & 1;
    FUN_140056680(local_340,L"Settings.UVShell.Enabled");
    FUN_1490d6ab4(&local_68,local_340,&local_329);
    lVar3 = (longlong)(int)(uint)uStack_30;
    uStack_30._0_4_ = (uint)uStack_30 + 1;
    if (uStack_30._4_4_ < (uint)uStack_30) {
      FUN_146b17dba(&local_38);
    }
    lVar3 = lVar3 * 0x30;
    *(undefined8 *)(local_38 + lVar3) = 0;
    *(longlong *)(local_38 + lVar3) = local_68;
    *(undefined4 *)(local_38 + 8 + lVar3) = (undefined4)local_60;
    *(undefined4 *)(local_38 + 0xc + lVar3) = local_60._4_4_;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = 0;
    *(undefined8 *)(local_38 + 0x10 + lVar3) = local_58;
    *(undefined4 *)(local_38 + 0x18 + lVar3) = (undefined4)local_50;
    *(undefined4 *)(local_38 + 0x1c + lVar3) = local_50._4_4_;
    *(undefined8 *)(local_38 + 0x20 + lVar3) = local_48;
    *(undefined1 *)(local_38 + 0x28 + lVar3) = local_40;
    *(undefined4 *)(local_38 + 0x2c + lVar3) = local_3c;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    plVar2 = (longlong *)FUN_147a89392();
    FUN_140056680(&local_350,L"Editor.Usage.MeshModelingMode.");
    FUN_144a7dea0(&local_68,&local_350,param_2);
    (**(code **)(*plVar2 + 0xf0))(plVar2,&local_68,&local_38);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_34c,local_350) != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fe332 FUN_1495fe332 body=1598 status=ok
// SIG undefined FUN_1495fe332(void)

void FUN_1495fe332(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254))) {
    lVar6 = param_1 + 600;
    if (*(longlong *)(param_1 + 0x260) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x260);
    }
    uVar11 = *(int *)(param_1 + 0x268) - 1;
    uVar12 = *(uint *)(lVar6 + (ulonglong)(uVar11 & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      lVar2 = *(longlong *)(param_1 + 0x220);
      uVar14 = uVar12;
      do {
        if (*(uint *)(lVar2 + (longlong)(int)uVar14 * 0x18) == param_2) {
          goto LAB_1495fe40a;
        }
        uVar14 = *(uint *)(lVar2 + (longlong)(int)uVar14 * 0x18 + 0x10);
      } while (uVar14 != 0xffffffff);
    }
  }
  goto LAB_1495fe371;
  while (uVar12 = puVar13[4], uVar12 != 0xffffffff) {
LAB_1495fe40a:
    puVar13 = (uint *)(lVar2 + (longlong)(int)uVar12 * 0x18);
    if (*puVar13 == param_2) goto LAB_1495fe427;
  }
  puVar13 = (uint *)0x0;
LAB_1495fe427:
  uVar10 = *(undefined8 *)(puVar13 + 2);
  if (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0xa8) == '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x1c0);
    uVar9 = *(undefined8 *)(param_1 + 0x308);
    FUN_1446f470e(&local_d8,L"NormalMap",1);
    FUN_14016d8b0(uVar7,local_d8,uVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x1c0);
    uVar9 = *(undefined8 *)(param_1 + 0x318);
    FUN_1446f470e(&local_e0,L"OcclusionMap",1);
    FUN_14016d8b0(uVar7,local_e0,uVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x1c0);
    puVar15 = &local_e8;
LAB_1495fe561:
    FUN_1446f470e(puVar15,L"ColorMap",1);
    uVar9 = *puVar15;
  }
  else {
    if (0x7f < (int)param_2) {
      if ((int)param_2 < 0x400) {
        if (((param_2 != 0x80) && (param_2 != 0x100)) && (param_2 != 0x200)) {
switchD_1495fe45f_caseD_3:
          uVar10 = *(undefined8 *)(param_1 + 0x1c0);
          uVar7 = *(undefined8 *)(param_1 + 0x308);
          FUN_1446f470e(&local_58,L"NormalMap",1);
          FUN_14016d8b0(uVar10,local_58,uVar7);
          uVar10 = *(undefined8 *)(param_1 + 0x1c0);
          uVar7 = *(undefined8 *)(param_1 + 0x318);
          FUN_1446f470e(&local_60,L"OcclusionMap",1);
          FUN_14016d8b0(uVar10,local_60,uVar7);
          uVar7 = *(undefined8 *)(param_1 + 0x1c0);
          uVar10 = *(undefined8 *)(param_1 + 0x318);
          puVar15 = &local_68;
          goto LAB_1495fe80f;
        }
      }
      else if (((param_2 != 0x400) && (param_2 != 0x800)) && (param_2 != 0x4000))
      goto switchD_1495fe45f_caseD_3;
switchD_1495fe45f_caseD_2:
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      uVar9 = *(undefined8 *)(param_1 + 0x308);
      FUN_1446f470e(&local_c0,L"NormalMap",1);
      FUN_14016d8b0(uVar7,local_c0,uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      uVar9 = *(undefined8 *)(param_1 + 0x318);
      FUN_1446f470e(&local_c8,L"OcclusionMap",1);
      FUN_14016d8b0(uVar7,local_c8,uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      puVar15 = &local_d0;
      goto LAB_1495fe561;
    }
    if ((int)param_2 < 0x10) {
      switch(param_2) {
      case 1:
        uVar7 = *(undefined8 *)(param_1 + 0x1c0);
        FUN_1446f470e(&local_70,L"NormalMap",1);
        FUN_14016d8b0(uVar7,local_70,uVar10);
        uVar10 = *(undefined8 *)(param_1 + 0x1c0);
        uVar7 = *(undefined8 *)(param_1 + 0x318);
        FUN_1446f470e(&local_78,L"OcclusionMap",1);
        FUN_14016d8b0(uVar10,local_78,uVar7);
        uVar7 = *(undefined8 *)(param_1 + 0x1c0);
        uVar10 = *(undefined8 *)(param_1 + 0x318);
        puVar15 = &local_80;
        break;
      case 2:
      case 4:
        goto switchD_1495fe45f_caseD_2;
      default:
        goto switchD_1495fe45f_caseD_3;
      case 8:
        iVar5 = *(int *)(lVar6 + (ulonglong)(uVar11 & 0x40) * 4);
        for (iVar1 = iVar5; iVar1 != -1; iVar1 = *(int *)(lVar2 + (longlong)iVar1 * 0x18 + 0x10)) {
          if (*(int *)(lVar2 + (longlong)iVar1 * 0x18) == 0x40) goto LAB_1495fe954;
        }
        piVar8 = (int *)(param_1 + 0x318);
        goto LAB_1495fe85e;
      }
    }
    else {
      if ((param_2 == 0x10) || (param_2 == 0x20)) goto switchD_1495fe45f_caseD_2;
      if (param_2 != 0x40) goto switchD_1495fe45f_caseD_3;
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      uVar9 = *(undefined8 *)(param_1 + 0x308);
      FUN_1446f470e(&local_88,L"NormalMap",1);
      FUN_14016d8b0(uVar7,local_88,uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      FUN_1446f470e(&local_90,L"OcclusionMap",1);
      FUN_14016d8b0(uVar7,local_90,uVar10);
      uVar7 = *(undefined8 *)(param_1 + 0x1c0);
      uVar10 = *(undefined8 *)(param_1 + 0x318);
      puVar15 = &local_98;
    }
LAB_1495fe80f:
    FUN_1446f470e(puVar15,L"ColorMap",1);
    uVar9 = *puVar15;
  }
  FUN_14016d8b0(uVar7,uVar9,uVar10);
  goto LAB_1495fe57d;
  while (iVar5 = piVar8[4], iVar5 != -1) {
LAB_1495fe954:
    piVar8 = (int *)(lVar2 + (longlong)iVar5 * 0x18);
    if (*piVar8 == 0x40) goto LAB_1495fe968;
  }
  piVar8 = (int *)0x0;
LAB_1495fe968:
  piVar8 = piVar8 + 2;
LAB_1495fe85e:
  uVar7 = *(undefined8 *)piVar8;
  uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  FUN_1446f470e(&local_a0,L"NormalMap",1);
  FUN_14016d8b0(uVar9,local_a0,uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  FUN_1446f470e(&local_a8,L"OcclusionMap",1);
  FUN_14016d8b0(uVar9,local_a8,uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x1c8);
  uVar9 = *(undefined8 *)(param_1 + 0x318);
  FUN_1446f470e(&local_b0,L"ColorMap",1);
  FUN_14016d8b0(uVar7,local_b0,uVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x1c8);
  FUN_1446f470e(&local_b8,L"BentNormalMap",1);
  FUN_14016d8b0(uVar7,local_b8,uVar10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1b8) + 0x50);
  (**(code **)(*plVar4 + 0xb30))(plVar4,*(undefined8 *)(param_1 + 0x1c8));
LAB_1495fe57d:
  uVar10 = *(undefined8 *)(param_1 + 0x1c0);
  iVar5 = *(int *)(param_1 + 0x1e4);
  FUN_1446f470e(&local_f0,L"UVChannel",1);
  FUN_14472da24(uVar10,local_f0,(float)iVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x1c8);
  iVar5 = *(int *)(param_1 + 0x1e4);
  FUN_1446f470e(&local_f8,L"UVChannel",1);
  FUN_14472da24(uVar10,local_f8,(float)iVar5);
LAB_1495fe371:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495fe972 FUN_1495fe972 body=1224 status=ok
// SIG undefined FUN_1495fe972(void)

void FUN_1495fe972(longlong param_1,uint param_2,longlong **param_3,longlong *param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  uint local_cc;
  ulonglong local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  int local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar10 = *(int *)((longlong)param_4 + 0xc);
  local_cc = param_2;
  FUN_1447a1747(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if ((iVar10 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
    FUN_1408be2c4(param_4,0);
  }
  if (*(int *)(param_5 + 8) != *(int *)(param_5 + 0x34)) {
    FUN_14587c8aa(param_5);
    FUN_145da4014(param_5);
  }
  local_d8 = (longlong *)(param_1 + 0x220);
  local_c0 = (longlong *)(param_1 + 0x230);
  local_70 = (void **)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = local_c0;
  if (*(int *)(param_1 + 0x248) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar10 = *(int *)(param_1 + 0x248);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (int)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = local_d8;
  if ((iStack_5c != iVar10) || (uStack_68 != local_c0)) {
    local_c8 = 0;
    do {
      lVar11 = *local_98;
      lVar5 = (longlong)iStack_7c;
      uVar4 = *(uint *)(lVar11 + lVar5 * 0x18);
      if ((local_cc & uVar4) != 0) {
        if (DAT_14cc1ff70 == 0) {
          uVar6 = FUN_1410a127e();
          DAT_14cc1ff70 = FUN_14171c317(FUN_1467449c1,uVar6,L"EBakeMapType");
          uVar4 = *(uint *)(lVar11 + lVar5 * 0x18);
        }
        lVar11 = DAT_14cc1ff70;
        FUN_1406f1d90(DAT_14cc1ff70,&local_70,(longlong)(int)uVar4);
        puVar7 = (undefined8 *)FUN_1447a1f4a(&local_70);
        local_a8 = (void *)0x0;
        local_a0 = *(int *)(puVar7 + 1);
        lVar5 = (longlong)local_a0;
        pvVar3 = (void *)*puVar7;
        if (lVar5 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar3,lVar5 * 2);
        }
        if (local_70 != (void **)0x0) {
          (**(code **)((longlong)*local_70 + 0x10))();
        }
        FUN_1401cfad2(lVar11,local_b8,(longlong)(int)uVar4);
        iVar1 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_4,iVar1);
        }
        pvVar3 = local_a8;
        lVar11 = *param_4;
        lVar5 = (longlong)iVar1 * 0x10;
        puVar7 = (undefined8 *)(lVar11 + lVar5);
        *(undefined8 *)(lVar11 + lVar5) = 0;
        lVar14 = (longlong)local_a0;
        *(int *)(lVar11 + 8 + lVar5) = local_a0;
        if (lVar14 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar7,local_a0,0);
          memcpy((void *)*puVar7,pvVar3,lVar14 * 2);
        }
        local_70 = &local_a8;
        uStack_68 = local_b8;
        FUN_140ac5c08(param_5,local_4c,&local_70,0);
        lVar11 = *param_4;
        lVar5 = (longlong)((int)param_4[1] + -1) * 0x10;
        iVar1 = *(int *)(param_3 + 1);
        iVar2 = *(int *)(lVar11 + 8 + lVar5);
        if (iVar1 == iVar2) {
          if (1 < iVar1) {
            lVar11 = *(longlong *)(lVar11 + lVar5);
            lVar5 = 0;
            while( true ) {
              uVar8 = *(ushort *)((longlong)*param_3 + lVar5);
              uVar9 = (ulonglong)uVar8;
              uVar12 = *(ushort *)(lVar11 + lVar5);
              if (uVar8 != uVar12) break;
              if (uVar8 == 0) goto LAB_1495fed41;
LAB_1495fed04:
              lVar5 = lVar5 + 2;
            }
            if ((uVar12 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar13 = (ulonglong)uVar12;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar13]) goto LAB_1495fed04;
            }
            if (uVar8 != uVar12) goto LAB_1495fed48;
          }
LAB_1495fed41:
          local_c8 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
        }
        else if (iVar2 + iVar1 == 1) goto LAB_1495fed41;
LAB_1495fed48:
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != local_d8 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != local_c0 || iStack_7c != iVar10));
    if ((local_c8 & 1) != 0) goto LAB_1495feb0f;
  }
  if ((int)param_4[1] < 1) {
    FUN_140056680(&local_98,&DAT_149dfb77a);
  }
  else {
    local_98 = (longlong *)0x0;
    local_90 = *(int *)((undefined8 *)*param_4 + 1);
    lVar11 = (longlong)local_90;
    pvVar3 = *(void **)*param_4;
    if (lVar11 == 0) {
      uStack_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar3,lVar11 * 2);
    }
  }
  if (&local_98 == param_3) {
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_98;
    *(int *)(param_3 + 1) = local_90;
    *(uint *)((longlong)param_3 + 0xc) = uStack_8c;
  }
LAB_1495feb0f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495fee3c FUN_1495fee3c body=440 status=ok
// SIG undefined FUN_1495fee3c(void)

void FUN_1495fee3c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  int *local_68;
  undefined8 *local_60;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *(undefined8 *)(*param_2 + 0x490);
  lVar1 = param_1[0x3c];
  iVar3 = FUN_14838046a();
  local_54 = 0;
  if (0 < iVar3) {
    do {
      plVar6 = (longlong *)FUN_148380456(*param_2,local_54);
      local_78 = param_1;
      local_70 = param_2;
      local_68 = &local_54;
      local_60 = &local_50;
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      switch(uVar4) {
      case 1:
        uVar4 = 1;
        break;
      case 2:
        bVar2 = *(byte *)(plVar6 + 1);
        bVar7 = (bVar2 & 1) != 0;
        if (bVar7) {
          FUN_14454e61e(&local_78,0x40,(int)lVar1,0);
          bVar2 = *(byte *)(plVar6 + 1);
        }
        if ((bVar2 & 2) == 0) goto switchD_1495feeda_caseD_7;
        uVar4 = 8;
        goto LAB_1495fef7c;
      case 3:
        uVar4 = 0x20;
        break;
      case 4:
        uVar5 = (int)plVar6[1] - 1;
        uVar4 = 0;
        if (uVar5 < 7) {
          uVar4 = *(undefined4 *)(&DAT_14bd79fc8 + (ulonglong)uVar5 * 4);
        }
        break;
      case 5:
        uVar4 = 0x80;
        break;
      case 6:
        uVar4 = 0x100;
        break;
      default:
        goto switchD_1495feeda_caseD_7;
      case 8:
        uVar4 = 0x4000;
      }
      bVar7 = false;
LAB_1495fef7c:
      FUN_14454e61e(&local_78,uVar4,(int)lVar1,bVar7);
switchD_1495feeda_caseD_7:
      local_54 = local_54 + 1;
    } while (local_54 < iVar3);
  }
  FUN_1495feff6(*param_2,param_1 + 0x3a,param_1 + 0x4e);
  (**(code **)(*param_1 + 0x3a0))(param_1);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar6 + 0x348))(plVar6);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495feff6 FUN_1495feff6 body=303 status=ok
// SIG undefined FUN_1495feff6(void)

void FUN_1495feff6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  
  if (DAT_14cad8288 != 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x140);
    param_3[1] = *(undefined8 *)(param_1 + 0x148);
    param_3[2] = *(undefined8 *)(param_1 + 0x150);
    param_3[3] = *(undefined8 *)(param_1 + 0x158);
    param_3[4] = *(undefined8 *)(param_1 + 0x160);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined4 *)(param_3 + 7) = *param_2;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar1;
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0x44) = uVar3;
    *(undefined4 *)(param_3 + 9) = uVar4;
    *(undefined4 *)((longlong)param_3 + 0x4c) = uVar5;
    *(undefined4 *)(param_3 + 10) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0x54) = uVar7;
    param_3[0xb] = *(undefined8 *)(param_2 + 8);
    iVar8 = FUN_14838046a();
    if (0 < iVar8) {
      iVar11 = 0;
      do {
        plVar10 = (longlong *)FUN_148380456(param_1,iVar11);
        iVar9 = (**(code **)(*plVar10 + 0x18))(plVar10);
        if (iVar9 == 3) {
          *(int *)((longlong)param_3 + 0x84) = (int)plVar10[1];
          *(float *)(param_3 + 0x11) = (float)(double)plVar10[3];
          *(float *)((longlong)param_3 + 0x8c) = (float)(double)plVar10[4];
          *(undefined4 *)(param_3 + 0x12) = *(undefined4 *)((longlong)plVar10 + 0xc);
          *(int *)((longlong)param_3 + 0x94) = (int)plVar10[2];
        }
        else if (iVar9 == 2) {
          *(undefined4 *)(param_3 + 0xd) = *(undefined4 *)((longlong)plVar10 + 0xc);
          *(float *)((longlong)param_3 + 0x6c) = (float)(double)plVar10[2];
          *(float *)(param_3 + 0xe) = (float)(double)plVar10[3];
          *(float *)((longlong)param_3 + 0x74) = (float)(double)plVar10[5];
        }
        iVar11 = iVar11 + 1;
      } while (iVar8 != iVar11);
    }
  }
  return;
}



// FUNCTION 1495ff126 FUN_1495ff126 body=99 status=ok
// SIG undefined FUN_1495ff126(void)

undefined8 FUN_1495ff126(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (param_1 < 0x20) {
    uVar1 = uVar2;
    switch(param_1) {
    case 1:
    case 8:
      uVar1 = 5;
      break;
    case 2:
    case 4:
      return 1;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    default:
      if (param_1 == 0x10) {
        return 1;
      }
    }
  }
  else if (param_1 < 0x80) {
    if (param_1 == 0x20) {
      return 1;
    }
    uVar1 = uVar2;
    if (param_1 == 0x40) {
      return 6;
    }
  }
  else if ((param_1 == 0x80) || (param_1 == 0x100)) {
    uVar1 = 7;
    if (param_2 != 1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 1495ff18c FUN_1495ff18c body=101 status=ok
// SIG undefined FUN_1495ff18c(void)

longlong * FUN_1495ff18c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,L"%lld",*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1495ff1f6 FUN_1495ff1f6 body=129 status=ok
// SIG undefined FUN_1495ff1f6(void)

ulonglong FUN_1495ff1f6(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x120) == '\0') {
    uVar1 = CONCAT71((int7)(local_18 >> 8),*(undefined1 *)(param_1 + 0x121));
  }
  else {
    if (*(longlong *)(param_1 + 0x110) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_146c3a27e(local_38,*(undefined8 *)(param_1 + 0x100));
      uVar1 = FUN_146c3a31e(local_38,1);
    }
    *(char *)(param_1 + 0x121) = (char)uVar1;
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ff278 FUN_1495ff278 body=247 status=ok
// SIG undefined FUN_1495ff278(void)

ulonglong FUN_1495ff278(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_3c = 0;
  FUN_1448156a8();
  if ((int)param_1[1] < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(*param_1 + lVar8 * 8);
      if (lVar4 != 0) {
        lVar5 = FUN_144a79692();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           ((*(byte *)(lVar4 + 0xfe) & 1) != 0)) {
          piVar1 = (int *)(local_38 + lVar8 * 4);
          *piVar1 = *piVar1 + 1;
        }
      }
      lVar8 = lVar8 + 1;
      iVar2 = (int)param_1[1];
    } while (lVar8 < iVar2);
    if (iVar2 < 1) {
      uVar7 = 0xffffffff;
    }
    else {
      iVar6 = -1;
      uVar9 = 0;
      uVar7 = 0xffffffff;
      do {
        iVar3 = *(int *)(local_38 + uVar9 * 4);
        if (iVar6 < iVar3) {
          uVar7 = uVar9 & 0xffffffff;
          iVar6 = iVar3;
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)iVar2 != uVar9);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ff38c FUN_1495ff38c body=56 status=ok
// SIG undefined FUN_1495ff38c(void)

undefined4 FUN_1495ff38c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return CONCAT31((int3)(iVar2 - 1U >> 8),iVar2 - 1U < 2);
}



// FUNCTION 1495ff3cd FUN_1495ff3cd body=148 status=ok
// SIG undefined FUN_1495ff3cd(void)

undefined8 FUN_1495ff3cd(undefined8 param_1)

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
  uVar1 = FUN_145bab408();
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



// FUNCTION 1495ff462 FUN_1495ff462 body=148 status=ok
// SIG undefined FUN_1495ff462(void)

undefined8 FUN_1495ff462(undefined8 param_1)

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
  uVar1 = FUN_1459f94b2();
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



// FUNCTION 1495ff4f8 FUN_1495ff4f8 body=212 status=ok
// SIG undefined FUN_1495ff4f8(void)

void FUN_1495ff4f8(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149607cf2(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ff5ce FUN_1495ff5ce body=212 status=ok
// SIG undefined FUN_1495ff5ce(void)

void FUN_1495ff5ce(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149608010(uVar2,param_2,local_68);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495ff6a4 FUN_1495ff6a4 body=377 status=ok
// SIG undefined FUN_1495ff6a4(void)

void FUN_1495ff6a4(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1b],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1c],0);
  lVar3 = param_1[0x37];
  if (*(int *)(lVar3 + 0xa8) == 0) {
    iVar1 = *(int *)(lVar3 + 0xac);
    if (iVar1 < 0x40) {
      if ((iVar1 != 8) && (iVar1 != 0x20)) goto LAB_1495ff791;
    }
    else if ((iVar1 != 0x100) && ((iVar1 != 0x80 && (iVar1 != 0x40)))) goto LAB_1495ff791;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  local_38[0] = *(int *)(lVar3 + 0xb0);
  local_38[1] = *(undefined4 *)(lVar3 + 0xb4);
  local_38[2] = *(undefined4 *)(lVar3 + 0xb8);
  local_38[3] = *(undefined4 *)(lVar3 + 0xbc);
  lVar3 = 0;
  do {
    plVar2 = param_1 + 0x19;
    if ((local_38[lVar3] == 0x40) || (plVar2 = param_1 + 0x1a, local_38[lVar3] == 0x20)) {
      (**(code **)(*param_1 + 0x328))(param_1,*plVar2,1);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
LAB_1495ff791:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ff836 FUN_1495ff836 body=1107 status=ok
// SIG undefined FUN_1495ff836(void)

void FUN_1495ff836(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_398 [32];
  undefined1 local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined1 local_268 [544];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  plVar8 = *(longlong **)(param_1 + 0xa0);
  lVar4 = *plVar8;
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_145a7b1c0();
    plVar5 = (longlong *)FUN_144718840(lVar4,uVar6);
    plVar8 = *(longlong **)(param_1 + 0xa0);
  }
  lVar4 = plVar8[*(byte *)(param_1 + 0x209) ^ 1];
  if (lVar4 == 0) {
    uVar6 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_145a7b1c0();
    plVar8 = (longlong *)FUN_144718840(lVar4,uVar6);
    uVar6 = *(undefined8 *)
             (*(longlong *)(param_1 + 0xa0) + (ulonglong)(*(byte *)(param_1 + 0x209) ^ 1) * 8);
  }
  DAT_14c76779c = 1;
  FUN_148506727(local_268,uVar6,&DAT_14c767794);
  plVar7 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149fab260;
  local_378 = 0;
  FUN_1411b354a(plVar7 + 2,0,0,0);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x1e8);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1e8) = 0;
LAB_1495ff958:
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
      if (plVar7 != (longlong *)0x0) goto LAB_1495ff9ca;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1e0) = plVar7 + 2;
    plVar9 = *(longlong **)(param_1 + 0x1e8);
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x1e8) = plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_1495ff958;
    }
LAB_1495ff9ca:
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  puVar3 = (undefined8 *)(param_1 + 0x1e0);
  local_370 = 1;
  local_378 = 1;
  FUN_146c005f0(*puVar3,local_268,1,1);
  if ((*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x11c) == '\x01') &&
     (*(char *)(param_1 + 0x209) == '\0')) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_318);
    local_2b8 = local_318;
    uStack_2b0 = uStack_310;
    local_2a8 = local_308;
    uStack_2a0 = uStack_300;
    local_298 = local_2f8;
    uStack_294 = uStack_2f4;
    uStack_290 = uStack_2f0;
    uStack_28c = uStack_2ec;
    local_288 = local_2e8;
    local_280 = local_2d8;
    uStack_27c = uStack_2d4;
    uStack_278 = uStack_2d0;
    uStack_274 = uStack_2cc;
    local_270 = local_2c8;
    FUN_146c3cd49(*puVar3,&local_2b8,1);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_318);
    local_368 = local_318;
    uStack_360 = uStack_310;
    local_358 = local_308;
    uStack_350 = uStack_300;
    local_348 = local_2f8;
    uStack_344 = uStack_2f4;
    uStack_340 = uStack_2f0;
    uStack_33c = uStack_2ec;
    local_338 = local_2e8;
    local_330 = local_2d8;
    uStack_32c = uStack_2d4;
    uStack_328 = uStack_2d0;
    uStack_324 = uStack_2cc;
    local_320 = local_2c8;
    FUN_146c3cfa5(*puVar3,&local_368,1);
  }
  plVar8 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14af7cde0;
  FUN_1457e37e0(plVar8 + 2);
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x1f8);
    if (plVar5 == (longlong *)0x0) goto LAB_1495ffbbe;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
LAB_1495ffb3b:
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1495ffbbe;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1f0) = plVar8 + 2;
    plVar5 = *(longlong **)(param_1 + 0x1f8);
    if (plVar8 == plVar5) {
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x1f8) = plVar8;
      if (plVar5 != (longlong *)0x0) goto LAB_1495ffb3b;
    }
  }
  LOCK();
  plVar5 = plVar8 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1495ffbbe:
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  FUN_146bee918(lVar4,0);
  *(ulonglong *)(lVar4 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar4 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar4 + 8) + 0x218));
  FUN_14960c5b2(*(longlong *)(param_1 + 0xd8) + 0xb0,*(longlong *)(param_1 + 0xd8) + 0xc0,
                *(undefined8 *)(param_1 + 0x1e0));
  FUN_14960c5b2(*(longlong *)(param_1 + 0xe0) + 0xb8,*(longlong *)(param_1 + 0xe0) + 200,
                *(undefined8 *)(param_1 + 0x1e0));
  *(uint *)(param_1 + 0xfc) = (*(uint *)(param_1 + 0xfc) & 0xfffffffc) + 1;
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  FUN_141082778(local_268);
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495ffc8a FUN_1495ffc8a body=74 status=ok
// SIG undefined FUN_1495ffc8a(void)

void FUN_1495ffc8a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(0x58,0x10);
  FUN_14960832e(uVar2,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_149607ca8(uVar1);
  FUN_149607ca8(0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1495ffcd4 FUN_1495ffcd4 body=5330 status=ok
// SIG undefined FUN_1495ffcd4(void)

/* WARNING: Removing unreachable block (ram,0x000149601187) */
/* WARNING: Removing unreachable block (ram,0x000149600f0b) */
/* WARNING: Removing unreachable block (ram,0x00014960079a) */
/* WARNING: Removing unreachable block (ram,0x000149600548) */
/* WARNING: Removing unreachable block (ram,0x0001496002f6) */
/* WARNING: Removing unreachable block (ram,0x0001496000a4) */
/* WARNING: Removing unreachable block (ram,0x0001495ffe52) */
/* WARNING: Removing unreachable block (ram,0x0001495fff7b) */
/* WARNING: Removing unreachable block (ram,0x0001496001cd) */
/* WARNING: Removing unreachable block (ram,0x00014960041f) */
/* WARNING: Removing unreachable block (ram,0x000149600671) */
/* WARNING: Removing unreachable block (ram,0x0001496008e5) */
/* WARNING: Removing unreachable block (ram,0x000149601049) */
/* WARNING: Removing unreachable block (ram,0x000149600b3b) */
/* WARNING: Removing unreachable block (ram,0x00014960119d) */
/* WARNING: Removing unreachable block (ram,0x000149600f1d) */
/* WARNING: Removing unreachable block (ram,0x0001496007ac) */
/* WARNING: Removing unreachable block (ram,0x00014960055a) */
/* WARNING: Removing unreachable block (ram,0x000149600308) */
/* WARNING: Removing unreachable block (ram,0x0001496000b6) */
/* WARNING: Removing unreachable block (ram,0x0001495ffe64) */
/* WARNING: Removing unreachable block (ram,0x0001495fff91) */
/* WARNING: Removing unreachable block (ram,0x0001496001df) */
/* WARNING: Removing unreachable block (ram,0x000149600431) */
/* WARNING: Removing unreachable block (ram,0x000149600683) */
/* WARNING: Removing unreachable block (ram,0x0001496008f7) */
/* WARNING: Removing unreachable block (ram,0x00014960105b) */
/* WARNING: Removing unreachable block (ram,0x000149600b4d) */
/* WARNING: Removing unreachable block (ram,0x000149600d71) */
/* WARNING: Removing unreachable block (ram,0x000149600d83) */

void FUN_1495ffcd4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  longlong local_1a8 [2];
  undefined2 *local_198;
  int local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  undefined1 local_168 [16];
  longlong local_158 [2];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (DAT_14cad8288 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_1d0 = param_2;
    FUN_140056680(local_c8,L"Bake.Duration.Total.Seconds");
    FUN_147bd92ba(&local_78,local_c8,param_1);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uVar3 = (uint)uStack_b0 + 1;
    uStack_b0._0_4_ = uVar3;
    if (uStack_b0._4_4_ < uVar3) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_d8,L"Input.TargetMesh.NumTriangles");
    FUN_146b28a8a(&local_78,local_d8,param_1 + 0xc);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_e8,L"Input.TargetMesh.NumVertices");
    FUN_146b28a8a(&local_78,local_e8,param_1 + 8);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_f8,L"Input.DetailMesh.NumMeshes");
    FUN_146b28a8a(&local_78,local_f8,param_1 + 0x10);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_108,L"Input.DetailMesh.NumTriangles");
    FUN_1495ff18c(&local_78,local_108,param_1 + 0x18);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_118,L"Settings.Split.NormalSeams");
    FUN_1490d6ab4(&local_78,local_118,param_1 + 0x41);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_128,L"Settings.Split.UVSeams");
    FUN_1490d6ab4(&local_78,local_128,param_1 + 0x42);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_138,L"Settings.ProjectionDistance");
    FUN_1479a6dbe(&local_78,local_138,param_1 + 0x3c);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140056680(local_148,L"Settings.ProjectionInWorldSpace");
    FUN_1490d6ab4(&local_78,local_148,param_1 + 0x40);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    pwVar6 = L"PerChannel";
    if (*(int *)(param_1 + 0x20) == 0) {
      pwVar6 = L"RGBA";
    }
    FUN_140056680(local_158,pwVar6);
    FUN_140056680(local_168,L"Settings.Output.Type");
    FUN_146b280ea(&local_78,local_168,local_158);
    lVar7 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_146b17dba(&local_b8);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_b8 + lVar7) = 0;
    *(longlong *)(local_b8 + lVar7) = local_78;
    *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
    *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
    *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
    *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
    *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
    *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_188 = &local_b8;
    local_180 = param_1;
    local_178 = local_188;
    local_170 = param_1;
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_140056680(&local_198,L"RGBA");
      if (DAT_14cc1ff70 == 0) {
        uVar4 = FUN_1410a127e();
        DAT_14cc1ff70 = FUN_14171c317(FUN_1467449c1,uVar4,L"EBakeMapType");
      }
      FUN_1401cfad2(DAT_14cc1ff70,local_1a8,(longlong)*(int *)(param_1 + 0x24));
      puVar8 = local_198;
      if (local_190 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(local_1b8,L"Settings.Output.%s.Type",puVar8);
      FUN_146b175b8(&local_78,local_1b8,local_1a8);
      lVar7 = (longlong)(int)(uint)uStack_b0;
      uVar3 = (uint)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
      if (uStack_b0._4_4_ < uVar3) {
        FUN_146b17dba(&local_b8);
      }
      lVar7 = lVar7 * 0x30;
      *(undefined8 *)(local_b8 + lVar7) = 0;
      *(longlong *)(local_b8 + lVar7) = local_78;
      *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
      *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
      *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
      *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
      *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
      *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
      *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
      *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
      *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == 8) {
        puVar8 = local_198;
        if (local_190 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_88,L"Settings.Output.%s.BentNormal.OcclusionRays",puVar8);
        FUN_146b28a8a(&local_78,&local_88,param_1 + 0x4c);
        lVar7 = (longlong)(int)(uint)uStack_b0;
        uVar3 = (uint)uStack_b0 + 1;
        uStack_b0._0_4_ = uVar3;
        if (uStack_b0._4_4_ < uVar3) {
          FUN_146b17dba(&local_b8);
        }
        lVar7 = lVar7 * 0x30;
        *(undefined8 *)(local_b8 + lVar7) = 0;
        *(longlong *)(local_b8 + lVar7) = local_78;
        *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
        *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
        *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
        *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
        *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
        *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
        *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        puVar8 = local_198;
        if (local_190 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_140002266(local_98,L"Settings.Output.%s.BentNormal.MaxDistance",puVar8);
        FUN_1479a6dbe(&local_78,local_98,param_1 + 0x50);
        lVar7 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_146b17dba(&local_b8);
        }
        lVar7 = lVar7 * 0x30;
        *(undefined8 *)(local_b8 + lVar7) = 0;
        *(longlong *)(local_b8 + lVar7) = local_78;
        *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
        *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
        *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
        *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
        *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
        *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
        *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        puVar8 = local_198;
        if (local_190 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_140002266(local_a8,L"Settings.Output.%s.BentNormal.SpreadAngle",puVar8);
        FUN_1479a6dbe(&local_78,local_a8,param_1 + 0x54);
        lVar7 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_146b17dba(&local_b8);
        }
        lVar7 = lVar7 * 0x30;
        *(undefined8 *)(local_b8 + lVar7) = 0;
        *(longlong *)(local_b8 + lVar7) = local_78;
        local_78 = 0;
        *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
        *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
        local_70 = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
        *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
        local_60 = 0;
        *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
        *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
        *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
      }
      else if (iVar1 == 0x20) {
        FUN_1445502de(&local_188,&local_198);
      }
      else if (iVar1 == 0x40) {
        FUN_14454fe54(&local_178,&local_198);
      }
      if (local_1a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_198 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar9 = 0;
      do {
        if (DAT_14cc1ffd0 == 0) {
          uVar4 = FUN_1410a127e();
          DAT_14cc1ffd0 = FUN_14171c317(FUN_146744ad7,uVar4,L"EBakeVertexChannel");
        }
        FUN_1401cfb1c(DAT_14cc1ffd0,&local_88,uVar9 & 0xffffffff);
        if (DAT_14cc1ff70 == 0) {
          uVar4 = FUN_1410a127e();
          DAT_14cc1ff70 = FUN_14171c317(FUN_1467449c1,uVar4,L"EBakeMapType");
        }
        FUN_1401cfad2(DAT_14cc1ff70,local_98,(longlong)*(int *)(param_1 + 0x28 + uVar9 * 4));
        puVar8 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar8 = local_88;
        }
        FUN_140002266(local_1c8,L"Settings.Output.%s.Type",puVar8);
        FUN_146b175b8(&local_78,local_1c8,local_98);
        uVar2 = uStack_b0;
        lVar7 = (longlong)(int)(uint)uStack_b0;
        uVar3 = (uint)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
        if (uStack_b0._4_4_ < uVar3) {
          FUN_146b17dba(&local_b8,uVar2 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x30;
        *(undefined8 *)(local_b8 + lVar7) = 0;
        *(longlong *)(local_b8 + lVar7) = local_78;
        *(undefined4 *)(local_b8 + 8 + lVar7) = (undefined4)local_70;
        *(undefined4 *)(local_b8 + 0xc + lVar7) = local_70._4_4_;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar7) = local_68;
        *(undefined4 *)(local_b8 + 0x18 + lVar7) = (undefined4)local_60;
        *(undefined4 *)(local_b8 + 0x1c + lVar7) = local_60._4_4_;
        *(undefined8 *)(local_b8 + 0x20 + lVar7) = local_58;
        *(undefined1 *)(local_b8 + 0x28 + lVar7) = local_50;
        *(undefined4 *)(local_b8 + 0x2c + lVar7) = local_4c;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        iVar1 = *(int *)(param_1 + 0x28 + uVar9 * 4);
        if (iVar1 == 0x20) {
          FUN_1445502de(&local_188,&local_88);
        }
        else if (iVar1 == 0x40) {
          FUN_14454fe54(&local_178,&local_88);
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 4);
    }
    plVar5 = (longlong *)FUN_147a89392();
    FUN_140056680(&local_88,L"Editor.Usage.MeshModelingMode.");
    FUN_144a7dea0(&local_78,&local_88,local_1d0);
    (**(code **)(*plVar5 + 0xf0))(plVar5,&local_78,&local_b8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496011a8 FUN_1496011a8 body=211 status=ok
// SIG undefined FUN_1496011a8(void)

void FUN_1496011a8(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x3b];
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_144553dbe();
  }
  FUN_14960856a(lVar1);
  if ((*(byte *)((longlong)param_1 + 0xfc) & 4) != 0) goto LAB_149601248;
  cVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
  if (cVar2 != '\0') goto LAB_1496011fc;
  if (*(longlong *)(param_1[0x3b] + 0x40) == 0) {
LAB_149601237:
    fVar3 = 0.0;
  }
  else {
    FUN_144553e4e(*(longlong *)(param_1[0x3b] + 0x40),local_30);
    if (local_30[0] != 3) goto LAB_149601237;
    fVar3 = (float)local_28;
  }
  if (fVar3 < *(float *)(param_1 + 0x1f) || fVar3 == *(float *)(param_1 + 0x1f)) {
LAB_1496011fc:
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_149601248:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 149601296 FUN_149601296 body=1030 status=ok
// SIG undefined FUN_149601296(void)

void FUN_149601296(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined3 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  int local_68 [2];
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_1 + 0xfc) & 2) != 0) {
    FUN_1495ff836(param_1);
  }
  if ((char)param_1[0x41] == '\0') {
    FUN_1496019fa(param_1);
  }
  if (*(int *)((longlong)param_1 + 0xfc) == 0) goto LAB_1496012ca;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_144a5dc74(&local_48);
  (**(code **)(*plVar7 + 0x340))(plVar7,&local_48,3);
  if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
  }
  uStack_30 = 4;
  lVar2 = param_1[0x37];
  local_48 = *(undefined4 *)(lVar2 + 0xa8);
  uStack_44 = *(undefined4 *)(lVar2 + 0xac);
  uStack_40 = *(undefined4 *)(lVar2 + 0xb0);
  uStack_3c = *(undefined4 *)(lVar2 + 0xb4);
  local_38 = *(undefined4 *)(lVar2 + 0xb8);
  uStack_34 = *(undefined4 *)(lVar2 + 0xbc);
  uVar4 = CONCAT21(local_28._2_2_,*(undefined1 *)(lVar2 + 0xc4));
  local_28._0_3_ = CONCAT12(*(undefined1 *)(lVar2 + 0xc5),(short)uVar4 << 8);
  local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1[0x36] + 0x11c));
  uStack_2c = *(undefined4 *)(param_1[0x36] + 0x118);
  cVar5 = FUN_149601ab6();
  if (cVar5 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x22c) = local_28;
    *(ulonglong *)((longlong)param_1 + 0x21c) = CONCAT44(uStack_34,local_38);
    *(ulonglong *)((longlong)param_1 + 0x224) = CONCAT44(uStack_2c,uStack_30);
    *(undefined4 *)((longlong)param_1 + 0x20c) = local_48;
    *(undefined4 *)(param_1 + 0x42) = uStack_44;
    *(undefined4 *)((longlong)param_1 + 0x214) = uStack_40;
    *(undefined4 *)(param_1 + 0x43) = uStack_3c;
  }
  uVar6 = *(uint *)((longlong)param_1 + 0xfc) & 0xfffffffb;
  *(uint *)((longlong)param_1 + 0xfc) = uVar6;
  local_68[0] = *(int *)((longlong)param_1 + 0x204);
  local_68[1] = 1;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    if (*(char *)(param_1[0x19] + 0x88) == '\x01') {
      uVar6 = FUN_1495f97c8(param_1,local_68);
      *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar6;
    }
    if (*(char *)(param_1[0x1a] + 0x88) == '\x01') {
      uVar6 = FUN_1495f98ac(param_1,local_68);
      *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar6;
    }
    local_50 = &local_60;
    local_58 = FUN_144554064;
    local_60 = param_1;
    FUN_14851c368(param_1[0x38]);
    uVar6 = *(uint *)((longlong)param_1 + 0xfc);
    goto LAB_149601461;
  }
  iVar1 = (int)param_1[0x42];
  if (0x3f < iVar1) {
    if (iVar1 < 0x200) {
      if (iVar1 == 0x40) goto switchD_1496014d9_caseD_8;
      if (iVar1 == 0x80) {
        uVar6 = FUN_1495f9a72(param_1,local_68,param_1[0x3c]);
      }
      else {
        if (iVar1 != 0x100) goto switchD_1496014d9_caseD_3;
        uVar6 = FUN_1495f9e08(param_1,local_68,param_1[0x3c]);
      }
      goto LAB_1496015eb;
    }
    if (iVar1 == 0x200) {
      if ((*(int *)((longlong)param_1 + 0x164) != local_68[0]) ||
         (uVar8 = 0, (int)param_1[0x2d] != 1)) {
        *(ulonglong *)((longlong)param_1 + 0x164) = CONCAT44(1,local_68[0]);
        uVar8 = 1;
      }
      *(uint *)((longlong)param_1 + 0xfc) = uVar8 | uVar6;
      local_50 = &local_60;
      local_58 = FUN_144554064;
      local_60 = param_1;
      FUN_14851c368(param_1[0x38]);
    }
    else if ((iVar1 == 0x400) || (iVar1 == 0x800)) goto switchD_1496014d9_caseD_2;
    goto switchD_1496014d9_caseD_3;
  }
  switch(iVar1) {
  case 1:
    if ((*(int *)((longlong)param_1 + 0x124) != local_68[0]) || (uVar8 = 0, (int)param_1[0x25] != 1)
       ) {
      *(ulonglong *)((longlong)param_1 + 0x124) = CONCAT44(1,local_68[0]);
LAB_149601501:
      uVar8 = 1;
    }
    goto LAB_149601506;
  case 2:
  case 4:
switchD_1496014d9_caseD_2:
    if ((*(int *)((longlong)param_1 + 0x164) != local_68[0]) || (uVar8 = 0, (int)param_1[0x2d] != 1)
       ) {
      *(ulonglong *)((longlong)param_1 + 0x164) = CONCAT44(1,local_68[0]);
      goto LAB_149601501;
    }
LAB_149601506:
    *(uint *)((longlong)param_1 + 0xfc) = uVar8 | uVar6;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
switchD_1496014d9_caseD_8:
    uVar6 = FUN_1495f97c8(param_1,local_68);
LAB_1496015eb:
    *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar6;
    break;
  default:
    if (iVar1 == 0x10) goto switchD_1496014d9_caseD_2;
    if (iVar1 == 0x20) {
      uVar6 = FUN_1495f98ac(param_1,local_68);
      goto LAB_1496015eb;
    }
  }
switchD_1496014d9_caseD_3:
  uVar6 = FUN_1495f90fa(param_1,(int)param_1[0x42]);
  uVar6 = uVar6 | *(uint *)((longlong)param_1 + 0xfc);
  *(uint *)((longlong)param_1 + 0xfc) = uVar6;
LAB_149601461:
  if ((uVar6 & 4) == 0) {
    lVar2 = param_1[0x3b];
    lVar3 = *(longlong *)(lVar2 + 0x40);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x10) == 1) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x10) = 2;
      }
      else if (*(int *)(lVar3 + 0x10) == 0) {
        FUN_14960862e();
      }
      *(undefined1 *)(lVar2 + 0x30) = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
LAB_1496012ca:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496016b6 FUN_1496016b6 body=512 status=ok
// SIG undefined FUN_1496016b6(void)

undefined8 * FUN_1496016b6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *_Dst;
  undefined8 uVar14;
  
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_149608a54(_Dst);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)((longlong)_Dst + 0x18);
  *(undefined8 *)((longlong)_Dst + 0x10) = uVar14;
  *(longlong *)((longlong)_Dst + 0x18) = lVar3;
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
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)((longlong)_Dst + 0x28);
  *(undefined8 *)((longlong)_Dst + 0x20) = uVar14;
  *(longlong *)((longlong)_Dst + 0x28) = lVar3;
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
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x50);
  if (plVar4 == (longlong *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(*plVar4 + 0xa88))();
  }
  *(undefined8 *)((longlong)_Dst + 0x30) = uVar14;
  uVar14 = *(undefined8 *)(param_1 + -0x98);
  lVar3 = *(longlong *)(param_1 + -0x90);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)((longlong)_Dst + 0x40);
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar14;
  *(longlong *)((longlong)_Dst + 0x40) = lVar3;
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
  *(undefined4 *)((longlong)_Dst + 0x74) = *(undefined4 *)(param_1 + 0x84);
  uVar14 = *(undefined8 *)(param_1 + 100);
  uVar12 = *(undefined8 *)(param_1 + 0x6c);
  uVar13 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)((longlong)_Dst + 100) = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)((longlong)_Dst + 0x6c) = uVar13;
  *(undefined8 *)((longlong)_Dst + 0x54) = uVar14;
  *(undefined8 *)((longlong)_Dst + 0x5c) = uVar12;
  uVar14 = *(undefined8 *)(param_1 + -0x7c);
  uVar12 = *(undefined8 *)(param_1 + -0x74);
  uVar13 = *(undefined8 *)(param_1 + -0x68);
  *(undefined8 *)((longlong)_Dst + 0x84) = *(undefined8 *)(param_1 + -0x70);
  *(undefined8 *)((longlong)_Dst + 0x8c) = uVar13;
  *(undefined8 *)((longlong)_Dst + 0x78) = uVar14;
  *(undefined8 *)((longlong)_Dst + 0x80) = uVar12;
  uVar5 = *(undefined4 *)(param_1 + -0x60);
  uVar6 = *(undefined4 *)(param_1 + -0x5c);
  uVar7 = *(undefined4 *)(param_1 + -0x58);
  uVar8 = *(undefined4 *)(param_1 + -0x54);
  uVar9 = *(undefined4 *)(param_1 + -0x50);
  uVar10 = *(undefined4 *)(param_1 + -0x4c);
  uVar11 = *(undefined4 *)(param_1 + -0x48);
  *(undefined4 *)((longlong)_Dst + 0xa0) = *(undefined4 *)(param_1 + -0x54);
  *(undefined4 *)((longlong)_Dst + 0xa4) = uVar9;
  *(undefined4 *)((longlong)_Dst + 0xa8) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0xac) = uVar11;
  *(undefined4 *)((longlong)_Dst + 0x94) = uVar5;
  *(undefined4 *)((longlong)_Dst + 0x98) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0x9c) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0xa0) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0xb8) = *(undefined4 *)(param_1 + -0x34);
  *(undefined8 *)((longlong)_Dst + 0xb0) = *(undefined8 *)(param_1 + -0x3c);
  *(undefined8 *)((longlong)_Dst + 0xbc) = *(undefined8 *)(param_1 + -0x20);
  *(undefined4 *)((longlong)_Dst + 0xc4) = *(undefined4 *)(param_1 + -0x18);
  *(undefined1 *)((longlong)_Dst + 0x50) = *(undefined1 *)(param_1 + 0x61);
  uVar14 = *(undefined8 *)(param_1 + -0x30);
  lVar3 = *(longlong *)(param_1 + -0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)((longlong)_Dst + 0xd0);
  *(undefined8 *)((longlong)_Dst + 200) = uVar14;
  *(longlong *)((longlong)_Dst + 0xd0) = lVar3;
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
  FUN_1495f8878((longlong)_Dst + 0xd8,param_1 + -0x10);
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 1496018b6 FUN_1496018b6 body=301 status=ok
// SIG undefined FUN_1496018b6(void)

void FUN_1496018b6(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(*(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0xc0)) {
  case 0:
    local_38 = 0x3f800000;
    local_30 = 0;
    local_34 = 0;
    goto LAB_149601961;
  case 1:
    local_34 = 0x3f800000;
    local_30 = 0;
    break;
  case 2:
    local_34 = 0;
    local_30 = 0x3f800000;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  default:
    local_30 = 0x3f800000;
    local_34 = local_30;
    local_38 = local_30;
    goto LAB_149601961;
  }
  local_38 = 0;
LAB_149601961:
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  local_2c = 0x3f800000;
  FUN_1446ddc76(&local_40,"VertexColorMask",1);
  FUN_144a9d3f0(uVar1,local_40,&local_38);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x50);
  (**(code **)(*plVar2 + 0xb30))(plVar2,*(undefined8 *)(param_1 + 0x1c8));
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496019fa FUN_1496019fa body=187 status=ok
// SIG undefined FUN_1496019fa(void)

void FUN_1496019fa(code *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  code **local_38;
  code *local_30;
  code *local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_28;
  local_40 = FUN_144553f22;
  local_28 = param_1;
  FUN_14851c368(*(undefined8 *)(param_1 + 0x1c0));
  local_20 = &local_30;
  local_28 = FUN_144554064;
  local_30 = param_1;
  FUN_14851c368(*(undefined8 *)(param_1 + 0x1c0),&local_28);
  if (*(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x50) == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x50) + 0xa88))();
  }
  *(undefined4 *)(param_1 + 0x204) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x208) + 0x40) + 0x38);
  param_1[0x208] = (code)0x1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149601ab6 FUN_149601ab6 body=89 status=ok
// SIG undefined FUN_149601ab6(void)

undefined4 FUN_149601ab6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
       ((param_1[3] != param_2[3] || (param_1[4] != param_2[4])))) ||
      ((param_1[5] != param_2[5] ||
       (((char)param_1[8] != (char)param_2[8] || ((float)param_1[7] != (float)param_2[7])))))) ||
     ((NAN((float)param_1[7]) || NAN((float)param_2[7]) ||
      (*(char *)((longlong)param_1 + 0x21) != *(char *)((longlong)param_2 + 0x21))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)param_1[5] >> 8),
                     *(char *)((longlong)param_1 + 0x22) == *(char *)((longlong)param_2 + 0x22));
  }
  return uVar1;
}



// FUNCTION 149601b10 FUN_149601b10 body=186 status=ok
// SIG undefined FUN_149601b10(void)

void FUN_149601b10(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  code *local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = FUN_148383564(*param_2);
  if (local_20 != 0) {
    local_28 = &local_40;
    local_38 = &local_20;
    local_30 = FUN_14455427e;
    local_40 = param_1;
    FUN_14851c3f8(*(undefined8 *)(param_1 + 0x1c0),&local_30,0);
    FUN_14851bc40(*(undefined8 *)(param_1 + 0x1c0),2,2,0);
    FUN_1496018b6(param_1);
    FUN_149601bcc(*param_2,param_1 + 0x20c,param_1 + 0x230);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149601bcc FUN_149601bcc body=159 status=ok
// SIG undefined FUN_149601bcc(void)

void FUN_149601bcc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cad8288 != 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined4 *)(param_3 + 4) = *param_2;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar1;
    *(undefined4 *)(param_3 + 5) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar3;
    *(undefined4 *)(param_3 + 6) = uVar4;
    *(undefined4 *)((longlong)param_3 + 0x34) = uVar5;
    *(undefined4 *)(param_3 + 7) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar7;
    *(undefined4 *)(param_3 + 8) = param_2[8];
    local_28 = param_3;
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_14454fdb4(&local_28,*(undefined8 *)(param_1 + 0x48));
    }
    else {
      lVar8 = 0;
      do {
        FUN_14454fdb4(&local_28,*(undefined8 *)(param_1 + 0x58 + lVar8));
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149601cf8 FUN_149601cf8 body=329 status=ok
// SIG undefined FUN_149601cf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149601cf8(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *_Dst;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc200d0) {
    FUN_144b3d300(&DAT_14cc200d0);
    if (DAT_14cc200d0 == -1) {
      uVar1 = FUN_145b71442();
      uVar2 = FUN_145a7b1c0();
      uVar3 = FUN_145b7126e();
      local_48 = (undefined8 *)0x0;
      local_40 = 3;
      FUN_1484d6e40(&local_48,3,0);
      _Src = local_48;
      *local_48 = uVar1;
      local_48[1] = uVar2;
      local_48[2] = uVar3;
      DAT_14cc200c0 = (undefined *)0x0;
      _DAT_14cc200cc = 5;
      lVar4 = (longlong)local_40;
      _DAT_14cc200c8 = local_40;
      FUN_1484d23fc(&DAT_14cc20098,local_40,5);
      if (lVar4 != 0) {
        _Dst = &DAT_14cc20098;
        if (DAT_14cc200c0 != (undefined *)0x0) {
          _Dst = DAT_14cc200c0;
        }
        memcpy(_Dst,_Src,lVar4 << 3);
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445508cf);
      _Init_thread_footer(&DAT_14cc200d0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cc20098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149601e42 FUN_149601e42 body=199 status=ok
// SIG undefined FUN_149601e42(void)

undefined1 FUN_149601e42(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 *local_50;
  code *local_48;
  undefined1 **local_40;
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar4 = (**(code **)(*param_1 + 0x2c0))();
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar4);
  if (iVar3 < 2) {
    uVar2 = 0;
  }
  else {
    local_58 = &local_31;
    local_31 = 1;
    local_50 = &local_38;
    local_38 = 0;
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_40 = &local_58;
    local_48 = FUN_14455453e;
    uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,uVar4,&local_48);
    uVar2 = local_31;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149601f13 FUN_149601f13 body=148 status=ok
// SIG undefined FUN_149601f13(void)

undefined8 FUN_149601f13(undefined8 param_1)

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
  uVar1 = FUN_145bab5dc();
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



// FUNCTION 149601fa8 FUN_149601fa8 body=148 status=ok
// SIG undefined FUN_149601fa8(void)

undefined8 FUN_149601fa8(undefined8 param_1)

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
  uVar1 = FUN_14599c6de();
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



// FUNCTION 14960203d FUN_14960203d body=148 status=ok
// SIG undefined FUN_14960203d(void)

undefined8 FUN_14960203d(undefined8 param_1)

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
  uVar1 = FUN_14599c7ca();
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



// FUNCTION 1496020d2 FUN_1496020d2 body=355 status=ok
// SIG undefined FUN_1496020d2(void)

int FUN_1496020d2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_RBP;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = local_60;
  if (((*(byte *)(param_1 + 0xfc) & 4) == 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    iVar7 = 0;
    iVar8 = iVar7;
    if (*(char *)(*(longlong *)(param_1 + 0x218) + 0x30) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x330);
      plVar1 = (longlong *)(lVar3 + 0xa8);
      lVar2 = lVar3 + 0xb8;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = lVar2;
      if (*(int *)(lVar3 + 0xd0) != 0) {
        FUN_1449c0562(&local_50);
        iVar7 = *(int *)(lVar3 + 0xd0);
      }
      local_60 = local_40;
      uVar4 = local_60;
      local_58 = local_38;
      local_54 = local_34;
      local_70 = local_50;
      local_68 = local_48;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      local_78 = plVar1;
      if (local_60._4_4_ == iVar7) {
        unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        iVar8 = (int)unaff_RBP;
        if (local_48 == lVar2) goto LAB_149602212;
      }
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      iVar5 = local_60._4_4_;
      local_60 = uVar4;
      do {
        if ((char)uVar6 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),
                           *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x18) != 0);
        }
        iVar8 = (int)uVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar2 || local_60._4_4_ != iVar7));
    }
  }
  else {
    iVar8 = 0;
  }
LAB_149602212:
  local_60 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 149602236 FUN_149602236 body=654 status=ok
// SIG undefined FUN_149602236(void)

undefined8 * FUN_149602236(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *_Dst;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _Dst = (void *)FUN_14001cc68(0x140);
  memset(_Dst,0,0x140);
  FUN_14960a0ee(_Dst);
  uVar3 = *(undefined8 *)(param_1 + 400);
  lVar4 = *(longlong *)(param_1 + 0x198);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x18);
  *(undefined8 *)((longlong)_Dst + 0x10) = uVar3;
  *(longlong *)((longlong)_Dst + 0x18) = lVar4;
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
  uVar3 = *(undefined8 *)(param_1 + -0xa8);
  lVar4 = *(longlong *)(param_1 + -0xa0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x28);
  *(undefined8 *)((longlong)_Dst + 0x20) = uVar3;
  *(longlong *)((longlong)_Dst + 0x28) = lVar4;
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
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x78);
  *(undefined8 *)((longlong)_Dst + 0x70) = uVar3;
  *(longlong *)((longlong)_Dst + 0x78) = lVar4;
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
  FUN_1485063a5(&local_88,**(undefined8 **)(param_1 + -0x108));
  *(undefined8 *)((longlong)_Dst + 0x90) = local_88;
  *(undefined8 *)((longlong)_Dst + 0x98) = uStack_80;
  *(undefined8 *)((longlong)_Dst + 0xa0) = local_78;
  *(undefined8 *)((longlong)_Dst + 0xa8) = uStack_70;
  *(undefined4 *)((longlong)_Dst + 0xb0) = local_68;
  *(undefined4 *)((longlong)_Dst + 0xb4) = uStack_64;
  *(undefined4 *)((longlong)_Dst + 0xb8) = uStack_60;
  *(undefined4 *)((longlong)_Dst + 0xbc) = uStack_5c;
  *(undefined8 *)((longlong)_Dst + 0xc0) = local_58;
  *(undefined8 *)((longlong)_Dst + 200) = local_48;
  *(undefined8 *)((longlong)_Dst + 0xd0) = uStack_40;
  *(undefined8 *)((longlong)_Dst + 0xd8) = local_38;
  *(undefined8 *)((longlong)_Dst + 0x68) = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((longlong)_Dst + 0x58) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)_Dst + 0x5c) = uVar10;
  *(undefined4 *)((longlong)_Dst + 0x60) = uVar11;
  *(undefined4 *)((longlong)_Dst + 100) = uVar12;
  *(undefined4 *)((longlong)_Dst + 0x48) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0x4c) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0x50) = uVar8;
  *(undefined4 *)((longlong)_Dst + 0x54) = uVar9;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x88);
  *(undefined8 *)((longlong)_Dst + 0x80) = uVar3;
  *(longlong *)((longlong)_Dst + 0x88) = lVar4;
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
  if ((*(byte *)(param_1 + 0x2c) & 9) != 0) {
    uVar3 = *(undefined8 *)(param_1 + -0x98);
    lVar4 = *(longlong *)(param_1 + -0x90);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)_Dst + 0x38);
    *(undefined8 *)((longlong)_Dst + 0x30) = uVar3;
    *(longlong *)((longlong)_Dst + 0x38) = lVar4;
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
  }
  if ((*(byte *)(param_1 + 0x2c) & 0x80) != 0) {
    FUN_1495f8878((longlong)_Dst + 0xe0,param_1 + 0x1b0);
    FUN_149603812((longlong)_Dst + 0xf0,param_1 + 0x1d0);
  }
  *param_2 = _Dst;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496024c6 FUN_1496024c6 body=444 status=ok
// SIG undefined FUN_1496024c6(void)

void FUN_1496024c6(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    FUN_144a5dc74(&local_48);
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_48,3);
    if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
    }
    uVar1 = *(undefined4 *)(param_1[100] + 0xc0);
    uStack_30 = 0;
    uStack_40 = CONCAT44(uVar1,uVar1);
    local_38 = *(undefined4 *)(param_1[100] + 0xc4);
    uStack_34 = FUN_140e1307c(param_1[0x65] + 0xe8,param_1[0x65] + 0xc0);
    uStack_2c = *(undefined4 *)(param_1[0x65] + 0xe0);
    uStack_24 = CONCAT31(uStack_24._1_3_,1);
    local_28 = *(undefined4 *)(param_1[100] + 200);
    local_48 = *(uint *)(param_1[100] + 0xa8);
    uStack_44 = local_48 * 8 & 0x40 | local_48;
    cVar2 = FUN_1495f90a0(param_1 + 0x3a,&local_48);
    if (cVar2 == '\0') {
      param_1[0x3e] = CONCAT44(uStack_24,local_28);
      *(undefined4 *)(param_1 + 0x3c) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x1e4) = uStack_34;
      *(undefined4 *)(param_1 + 0x3d) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1ec) = uStack_2c;
      *(uint *)(param_1 + 0x3a) = local_48;
      *(uint *)((longlong)param_1 + 0x1d4) = uStack_44;
      *(undefined4 *)(param_1 + 0x3b) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_40._4_4_;
      if (param_1[0x69] != 0) {
        FUN_1400020a8();
      }
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
    }
    *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) & 0xfb;
    uVar3 = FUN_1495f90fa(param_1,*(undefined4 *)((longlong)param_1 + 0x1d4));
    *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar3;
    uVar3 = FUN_1495f9566(param_1,*(undefined8 *)(param_1[100] + 0xd0));
    *(uint *)((longlong)param_1 + 0xfc) = *(uint *)((longlong)param_1 + 0xfc) | uVar3;
    uVar3 = FUN_149602684(param_1);
    uVar3 = uVar3 | *(uint *)((longlong)param_1 + 0xfc);
    *(uint *)((longlong)param_1 + 0xfc) = uVar3;
    if ((uVar3 & 4) == 0) {
      FUN_1495fa354();
    }
    else {
      FUN_149602b2e(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149602684 FUN_149602684 body=1193 status=ok
// SIG undefined FUN_149602684(void)

undefined8 FUN_149602684(wchar_t *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  wchar_t *local_140;
  code *local_138;
  wchar_t **local_130;
  undefined1 local_124 [4];
  undefined8 local_120;
  int local_118;
  undefined1 local_114 [4];
  wchar_t *local_110;
  int *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x194) + 0xd8);
  local_140 = param_1 + 0x1ac;
  FUN_148576378(local_140,iVar2,1);
  local_148 = param_1 + 0x1b4;
  FUN_144a1a59e(local_148,iVar2,1);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_118 = 0;
  if (0 < iVar2) {
    do {
      local_120 = FUN_1485062e8(*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x50) + 8 + (longlong)local_118 * 8));
      local_110 = (wchar_t *)&local_120;
      local_108 = &local_118;
      FUN_14960bdce(&local_b8,local_114,&local_110);
      if ((param_1[0xea] & L'\x80') != L'\0') {
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x194) + 0xd0) + 8 +
                 (longlong)local_118 * 0x18);
        if (lVar4 == 0) {
          plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
          local_110 = L"InvalidTextureWarning";
          local_108._0_4_ = 0x15;
          FUN_1446e940c(local_114,&local_110);
          local_110 = L"UBakeMultiMeshAttributeMapsTool";
          local_108 = (int *)CONCAT44(local_108._4_4_,0x1f);
          FUN_1446e940c(local_124,&local_110);
          FUN_140208bae(&local_110,local_124,local_114,L"The Source Texture is not valid");
          (**(code **)(*plVar7 + 0x340))(plVar7,&local_110,3);
          if (local_110 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_110 + 0x10))();
          }
        }
        else {
          uVar3 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x194) + 0xd0) + 0x10 +
                   (longlong)local_118 * 0x18);
          plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14af3df50;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar7[7] = 0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar7 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          cVar6 = FUN_1484c23e9(lVar4,plVar7 + 2,(char)param_1[0x91]);
          if (cVar6 == '\0') {
            plVar8 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
            local_110 = L"CannotReadTextureWarning";
            local_108._0_4_ = 0x18;
            FUN_1446e940c(local_114,&local_110);
            local_110 = L"UBakeMultiMeshAttributeMapsTool";
            local_108 = (int *)CONCAT44(local_108._4_4_,0x1f);
            FUN_1446e940c(local_124,&local_110);
            FUN_140208bae(&local_110,local_124,local_114,L"Cannot read from the source texture");
            (**(code **)(*plVar8 + 0x340))(plVar8,&local_110,3);
            if (local_110 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_110 + 0x10))();
            }
          }
          else {
            plVar8 = (longlong *)((longlong)local_118 * 0x10 + *(longlong *)local_140);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            plVar5 = (longlong *)plVar8[1];
            *plVar8 = (longlong)(plVar7 + 2);
            plVar8[1] = (longlong)plVar7;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar5 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            *(undefined4 *)(*(longlong *)local_148 + (longlong)local_118 * 4) = uVar3;
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (cVar6 != '\0') goto LAB_14960297c;
        }
        uVar9 = 4;
        goto LAB_149602acc;
      }
LAB_14960297c:
      local_118 = local_118 + 1;
    } while (local_118 < iVar2);
  }
  FUN_14960bf1c(param_1 + 0x1bc);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_110 = param_1;
  FUN_149603902(&local_108,&local_b8);
  local_130 = &local_110;
  local_138 = FUN_144554d6c;
  (**(code **)(**(longlong **)(param_1 + 0x19c) + 0x58))();
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14103a020(&local_108);
  uVar9 = 1;
LAB_149602acc:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14103a020(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149602b2e FUN_149602b2e body=265 status=ok
// SIG undefined FUN_149602b2e(void)

void FUN_149602b2e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  lVar3 = *(longlong *)(param_1 + 0x330);
  plVar1 = (longlong *)(lVar3 + 0xa8);
  lVar2 = lVar3 + 0xb8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(lVar3 + 0xd0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(lVar3 + 0xd0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      *(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) = 0;
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149602c38 FUN_149602c38 body=536 status=ok
// SIG undefined FUN_149602c38(void)

void FUN_149602c38(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1b8) + 0x50);
  (**(code **)(*plVar3 + 0xb30))(plVar3,*(undefined8 *)(param_1 + 0x1c0));
  plVar3 = (longlong *)(param_1 + 0x220);
  lVar1 = param_1 + 0x230;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = lVar1;
  if (*(int *)(param_1 + 0x248) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x248);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar3;
  if ((iStack_4c == iVar7) && (local_58 == lVar1)) {
LAB_149602e0e:
    FUN_1495fa8cc(param_1,*(longlong *)(param_1 + 800) + 0xb0,*(longlong *)(param_1 + 800) + 0xe8);
    if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_149602dbc:
  lVar4 = *(longlong *)(param_1 + 0x330);
  if (*(int *)(lVar4 + 0xb0) != *(int *)(lVar4 + 0xdc)) {
    uVar2 = *(uint *)(*local_88 + (longlong)iStack_6c * 0x18);
    lVar6 = lVar4 + 0xe0;
    if (*(longlong *)(lVar4 + 0xe8) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0xe8);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0xf0) - 1U & uVar2) * 4);
    if (uVar5 != 0xffffffff) {
      lVar6 = *local_88 + (longlong)iStack_6c * 0x18;
      lVar4 = *(longlong *)(lVar4 + 0xa8);
      uVar8 = uVar5;
      do {
        if (*(uint *)(lVar4 + (longlong)(int)uVar8 * 0x18) == uVar2) goto LAB_149602d78;
        uVar8 = *(uint *)(lVar4 + (longlong)(int)uVar8 * 0x18 + 0x10);
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_149602dd7;
  while (uVar5 = puVar9[4], uVar5 != 0xffffffff) {
LAB_149602d78:
    puVar9 = (uint *)(lVar4 + (longlong)(int)uVar5 * 0x18);
    if (*puVar9 == uVar2) goto LAB_149602d96;
  }
  puVar9 = (uint *)0x0;
LAB_149602d96:
  lVar4 = *(longlong *)(lVar6 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(lVar6 + 8);
    }
  }
  *(longlong *)(puVar9 + 2) = lVar4;
LAB_149602dd7:
  local_70 = local_70 & ~local_80._4_4_;
  FUN_1449c0562(&local_80);
  if (local_88 == plVar3 && (local_78 == lVar1 && iStack_6c == iVar7)) goto LAB_149602e0e;
  goto LAB_149602dbc;
}



// FUNCTION 149602e52 FUN_149602e52 body=126 status=ok
// SIG undefined FUN_149602e52(void)

void FUN_149602e52(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 *local_20;
  code *local_18;
  undefined4 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cad8288 != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x170);
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    local_10 = &local_20;
    local_18 = FUN_144554e9e;
    local_20 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x338) + 0x58))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149602ede FUN_149602ede body=45 status=ok
// SIG undefined FUN_149602ede(void)

longlong FUN_149602ede(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c8cdf4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149602f0c FUN_149602f0c body=48 status=ok
// SIG undefined FUN_149602f0c(void)

longlong FUN_149602f0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145c8cdf4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149602f54 FUN_149602f54 body=105 status=ok
// SIG undefined FUN_149602f54(void)

void FUN_149602f54(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 200) != param_2) {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0xd0) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14960304c FUN_14960304c body=45 status=ok
// SIG undefined FUN_14960304c(void)

longlong FUN_14960304c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a22cd2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603080 FUN_149603080 body=48 status=ok
// SIG undefined FUN_149603080(void)

longlong FUN_149603080(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145a22cd2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496030b8 FUN_1496030b8 body=48 status=ok
// SIG undefined FUN_1496030b8(void)

longlong FUN_1496030b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe8;
  FUN_145a22cd2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496030e8 FUN_1496030e8 body=48 status=ok
// SIG undefined FUN_1496030e8(void)

longlong FUN_1496030e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf0;
  FUN_145a22cd2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603188 FUN_149603188 body=32 status=ok
// SIG undefined FUN_149603188(void)

undefined8 FUN_149603188(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"BakeTexture");
  return param_2;
}



// FUNCTION 1496031a8 FUN_1496031a8 body=45 status=ok
// SIG undefined FUN_1496031a8(void)

longlong FUN_1496031a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14581092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496031dc FUN_1496031dc body=48 status=ok
// SIG undefined FUN_1496031dc(void)

longlong FUN_1496031dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14581092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603214 FUN_149603214 body=48 status=ok
// SIG undefined FUN_149603214(void)

longlong FUN_149603214(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_14581092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960324c FUN_14960324c body=48 status=ok
// SIG undefined FUN_14960324c(void)

longlong FUN_14960324c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_14581092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603288 FUN_149603288 body=48 status=ok
// SIG undefined FUN_149603288(void)

longlong FUN_149603288(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a8;
  FUN_14581092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496032c4 FUN_1496032c4 body=45 status=ok
// SIG undefined FUN_1496032c4(void)

longlong FUN_1496032c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145810a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496032f2 FUN_1496032f2 body=48 status=ok
// SIG undefined FUN_1496032f2(void)

longlong FUN_1496032f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145810a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603322 FUN_149603322 body=48 status=ok
// SIG undefined FUN_149603322(void)

longlong FUN_149603322(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145810a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603352 FUN_149603352 body=48 status=ok
// SIG undefined FUN_149603352(void)

longlong FUN_149603352(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_145810a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603382 FUN_149603382 body=48 status=ok
// SIG undefined FUN_149603382(void)

longlong FUN_149603382(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a8;
  FUN_145810a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496033b2 FUN_1496033b2 body=45 status=ok
// SIG undefined FUN_1496033b2(void)

longlong FUN_1496033b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145810bd4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496033e0 FUN_1496033e0 body=48 status=ok
// SIG undefined FUN_1496033e0(void)

longlong FUN_1496033e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145810bd4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603410 FUN_149603410 body=48 status=ok
// SIG undefined FUN_149603410(void)

longlong FUN_149603410(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145810bd4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603440 FUN_149603440 body=48 status=ok
// SIG undefined FUN_149603440(void)

longlong FUN_149603440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_145810bd4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603478 FUN_149603478 body=45 status=ok
// SIG undefined FUN_149603478(void)

longlong FUN_149603478(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1460161ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496034a6 FUN_1496034a6 body=48 status=ok
// SIG undefined FUN_1496034a6(void)

longlong FUN_1496034a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1460161ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496034d6 FUN_1496034d6 body=48 status=ok
// SIG undefined FUN_1496034d6(void)

longlong FUN_1496034d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_1460161ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603506 FUN_149603506 body=48 status=ok
// SIG undefined FUN_149603506(void)

longlong FUN_149603506(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_1460161ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603536 FUN_149603536 body=48 status=ok
// SIG undefined FUN_149603536(void)

longlong FUN_149603536(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a8;
  FUN_1460161ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960356e FUN_14960356e body=32 status=ok
// SIG undefined FUN_14960356e(void)

undefined8 FUN_14960356e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"BakeAll");
  return param_2;
}



// FUNCTION 14960358e FUN_14960358e body=45 status=ok
// SIG undefined FUN_14960358e(void)

longlong FUN_14960358e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d722d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496035bc FUN_1496035bc body=48 status=ok
// SIG undefined FUN_1496035bc(void)

longlong FUN_1496035bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d722d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496035ec FUN_1496035ec body=48 status=ok
// SIG undefined FUN_1496035ec(void)

longlong FUN_1496035ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145d722d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960361c FUN_14960361c body=48 status=ok
// SIG undefined FUN_14960361c(void)

longlong FUN_14960361c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_145d722d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960364c FUN_14960364c body=48 status=ok
// SIG undefined FUN_14960364c(void)

longlong FUN_14960364c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a8;
  FUN_145d722d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496036b2 FUN_1496036b2 body=54 status=ok
// SIG undefined FUN_1496036b2(void)

undefined1 FUN_1496036b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496037b0(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 149603710 FUN_149603710 body=59 status=ok
// SIG undefined FUN_149603710(void)

undefined8 FUN_149603710(longlong *param_1)

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



// FUNCTION 1496037b0 FUN_1496037b0 body=97 status=ok
// SIG undefined FUN_1496037b0(void)

longlong * FUN_1496037b0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 149603812 FUN_149603812 body=122 status=ok
// SIG undefined FUN_149603812(void)

longlong FUN_149603812(longlong param_1,longlong param_2)

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
    FUN_14960388c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14960388c FUN_14960388c body=117 status=ok
// SIG undefined FUN_14960388c(void)

undefined8 * FUN_14960388c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d72414(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 149603902 FUN_149603902 body=122 status=ok
// SIG undefined FUN_149603902(void)

longlong FUN_149603902(longlong param_1,longlong param_2)

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
    FUN_14960397c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14960397c FUN_14960397c body=119 status=ok
// SIG undefined FUN_14960397c(void)

undefined8 * FUN_14960397c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14103a058(param_1,uVar1);
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



// FUNCTION 1496039f4 FUN_1496039f4 body=147 status=ok
// SIG undefined FUN_1496039f4(void)

void FUN_1496039f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149603a88 FUN_149603a88 body=98 status=ok
// SIG undefined FUN_149603a88(void)

void FUN_149603a88(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_149603aea(param_1[8]);
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149603aea FUN_149603aea body=74 status=ok
// SIG undefined FUN_149603aea(void)

void FUN_149603aea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 149603b34 FUN_149603b34 body=98 status=ok
// SIG undefined FUN_149603b34(void)

void FUN_149603b34(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149603b96 FUN_149603b96 body=45 status=ok
// SIG undefined FUN_149603b96(void)

void FUN_149603b96(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149603bc4 FUN_149603bc4 body=199 status=ok
// SIG undefined FUN_149603bc4(void)

undefined8 * FUN_149603bc4(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd78d80;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd78da0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149603db8;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd78dc0;
  param_1[0x17] = &LAB_149603e06;
  param_1[0x12] = &LAB_149603e0e;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149603c8c FUN_149603c8c body=38 status=ok
// SIG undefined FUN_149603c8c(void)

undefined8 FUN_149603c8c(undefined8 param_1,int param_2)

{
  FUN_149603e62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603cb2 FUN_149603cb2 body=207 status=ok
// SIG undefined FUN_149603cb2(void)

void FUN_149603cb2(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149603d63;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149603d63:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149603d82 FUN_149603d82 body=53 status=ok
// SIG undefined FUN_149603d82(void)

void FUN_149603d82(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149603de8 FUN_149603de8 body=29 status=ok
// SIG undefined FUN_149603de8(void)

undefined8 FUN_149603de8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603e44 FUN_149603e44 body=29 status=ok
// SIG undefined FUN_149603e44(void)

undefined8 FUN_149603e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603e62 FUN_149603e62 body=127 status=ok
// SIG undefined FUN_149603e62(void)

void FUN_149603e62(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd78d80;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149603ee2 FUN_149603ee2 body=199 status=ok
// SIG undefined FUN_149603ee2(void)

undefined8 * FUN_149603ee2(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd78e00;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd78e20;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496040d6;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd78e40;
  param_1[0x17] = &LAB_149604124;
  param_1[0x12] = &LAB_14960412c;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149603faa FUN_149603faa body=38 status=ok
// SIG undefined FUN_149603faa(void)

undefined8 FUN_149603faa(undefined8 param_1,int param_2)

{
  FUN_149604180();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149603fd0 FUN_149603fd0 body=207 status=ok
// SIG undefined FUN_149603fd0(void)

void FUN_149603fd0(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149604081;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149604081:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496040a0 FUN_1496040a0 body=53 status=ok
// SIG undefined FUN_1496040a0(void)

void FUN_1496040a0(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149604106 FUN_149604106 body=29 status=ok
// SIG undefined FUN_149604106(void)

undefined8 FUN_149604106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604162 FUN_149604162 body=29 status=ok
// SIG undefined FUN_149604162(void)

undefined8 FUN_149604162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604180 FUN_149604180 body=127 status=ok
// SIG undefined FUN_149604180(void)

void FUN_149604180(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd78e00;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149604200 FUN_149604200 body=199 status=ok
// SIG undefined FUN_149604200(void)

undefined8 * FUN_149604200(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd78e80;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd78ea0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496043f4;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd78ec0;
  param_1[0x17] = &LAB_149604442;
  param_1[0x12] = &LAB_14960444a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496042c8 FUN_1496042c8 body=38 status=ok
// SIG undefined FUN_1496042c8(void)

undefined8 FUN_1496042c8(undefined8 param_1,int param_2)

{
  FUN_14960449e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496042ee FUN_1496042ee body=207 status=ok
// SIG undefined FUN_1496042ee(void)

void FUN_1496042ee(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14960439f;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14960439f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496043be FUN_1496043be body=53 status=ok
// SIG undefined FUN_1496043be(void)

void FUN_1496043be(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149604424 FUN_149604424 body=29 status=ok
// SIG undefined FUN_149604424(void)

undefined8 FUN_149604424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604480 FUN_149604480 body=29 status=ok
// SIG undefined FUN_149604480(void)

undefined8 FUN_149604480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960449e FUN_14960449e body=127 status=ok
// SIG undefined FUN_14960449e(void)

void FUN_14960449e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd78e80;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14960451e FUN_14960451e body=202 status=ok
// SIG undefined FUN_14960451e(void)

undefined8 * FUN_14960451e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd78f00;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_14bd78f20;
  param_1[9] = param_2;
  param_1[4] = FUN_149604784;
  param_1[0xc] = *param_3;
  param_1[0xe] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  if (param_1[0xc] != 0) {
    *param_3 = 0;
  }
  param_1[0x16] = 0;
  param_1[0x18] = &PTR_LAB_14bd78f40;
  param_1[0x19] = FUN_1496047fe;
  param_1[0x14] = &LAB_149604832;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496045e8 FUN_1496045e8 body=38 status=ok
// SIG undefined FUN_1496045e8(void)

undefined8 FUN_1496045e8(undefined8 param_1,int param_2)

{
  FUN_149604886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960460e FUN_14960460e body=235 status=ok
// SIG undefined FUN_14960460e(void)

void FUN_14960460e(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar4 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_30,uVar3);
  plVar4 = (longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar5 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar3,plVar4,&local_30);
    if (cVar2 == '\0') goto LAB_1496046d2;
  }
  if (&local_30 != plVar4) {
    *plVar4 = local_30;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar5 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x70);
  }
  uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar1)(uVar3,plVar4);
LAB_1496046d2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496046fa FUN_1496046fa body=137 status=ok
// SIG undefined FUN_1496046fa(void)

void FUN_1496046fa(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_28,uVar2);
  if (&local_28 != (longlong *)(param_1 + 8)) {
    *(longlong *)(param_1 + 8) = local_28;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149604784 FUN_149604784 body=49 status=ok
// SIG undefined FUN_149604784(void)

longlong * FUN_149604784(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1496047e0 FUN_1496047e0 body=29 status=ok
// SIG undefined FUN_1496047e0(void)

undefined8 FUN_1496047e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496047fe FUN_1496047fe body=51 status=ok
// SIG undefined FUN_1496047fe(void)

bool FUN_1496047fe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  return *param_1 != lVar1;
}



// FUNCTION 149604868 FUN_149604868 body=29 status=ok
// SIG undefined FUN_149604868(void)

undefined8 FUN_149604868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604886 FUN_149604886 body=130 status=ok
// SIG undefined FUN_149604886(void)

void FUN_149604886(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd78f00;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149604908 FUN_149604908 body=199 status=ok
// SIG undefined FUN_149604908(void)

undefined8 * FUN_149604908(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd79040;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd79060;
  param_1[7] = param_2;
  param_1[2] = &LAB_149604afc;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd79080;
  param_1[0x17] = &LAB_149604b4a;
  param_1[0x12] = &LAB_149604b52;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496049d0 FUN_1496049d0 body=38 status=ok
// SIG undefined FUN_1496049d0(void)

undefined8 FUN_1496049d0(undefined8 param_1,int param_2)

{
  FUN_149604ba6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496049f6 FUN_1496049f6 body=207 status=ok
// SIG undefined FUN_1496049f6(void)

void FUN_1496049f6(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149604aa7;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149604aa7:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149604ac6 FUN_149604ac6 body=53 status=ok
// SIG undefined FUN_149604ac6(void)

void FUN_149604ac6(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149604b2c FUN_149604b2c body=29 status=ok
// SIG undefined FUN_149604b2c(void)

undefined8 FUN_149604b2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604b88 FUN_149604b88 body=29 status=ok
// SIG undefined FUN_149604b88(void)

undefined8 FUN_149604b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604ba6 FUN_149604ba6 body=127 status=ok
// SIG undefined FUN_149604ba6(void)

void FUN_149604ba6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd79040;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149604c26 FUN_149604c26 body=199 status=ok
// SIG undefined FUN_149604c26(void)

undefined8 * FUN_149604c26(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd791a0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd791c0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149604e1a;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd791e0;
  param_1[0x17] = &LAB_149604e68;
  param_1[0x12] = &LAB_149604e70;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149604cee FUN_149604cee body=38 status=ok
// SIG undefined FUN_149604cee(void)

undefined8 FUN_149604cee(undefined8 param_1,int param_2)

{
  FUN_149604ec4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604d14 FUN_149604d14 body=207 status=ok
// SIG undefined FUN_149604d14(void)

void FUN_149604d14(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149604dc5;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149604dc5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149604de4 FUN_149604de4 body=53 status=ok
// SIG undefined FUN_149604de4(void)

void FUN_149604de4(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149604e4a FUN_149604e4a body=29 status=ok
// SIG undefined FUN_149604e4a(void)

undefined8 FUN_149604e4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604ea6 FUN_149604ea6 body=29 status=ok
// SIG undefined FUN_149604ea6(void)

undefined8 FUN_149604ea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149604ec4 FUN_149604ec4 body=127 status=ok
// SIG undefined FUN_149604ec4(void)

void FUN_149604ec4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd791a0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149604f44 FUN_149604f44 body=199 status=ok
// SIG undefined FUN_149604f44(void)

undefined8 * FUN_149604f44(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd79220;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd79240;
  param_1[7] = param_2;
  param_1[2] = &LAB_149605138;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd79260;
  param_1[0x17] = &LAB_149605186;
  param_1[0x12] = &LAB_14960518e;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14960500c FUN_14960500c body=38 status=ok
// SIG undefined FUN_14960500c(void)

undefined8 FUN_14960500c(undefined8 param_1,int param_2)

{
  FUN_1496051e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605032 FUN_149605032 body=207 status=ok
// SIG undefined FUN_149605032(void)

void FUN_149605032(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_1496050e3;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496050e3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149605102 FUN_149605102 body=53 status=ok
// SIG undefined FUN_149605102(void)

void FUN_149605102(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149605168 FUN_149605168 body=29 status=ok
// SIG undefined FUN_149605168(void)

undefined8 FUN_149605168(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496051c4 FUN_1496051c4 body=29 status=ok
// SIG undefined FUN_1496051c4(void)

undefined8 FUN_1496051c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496051e2 FUN_1496051e2 body=127 status=ok
// SIG undefined FUN_1496051e2(void)

void FUN_1496051e2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd79220;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149605262 FUN_149605262 body=199 status=ok
// SIG undefined FUN_149605262(void)

undefined8 * FUN_149605262(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd792a0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd792c0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149605456;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd792e0;
  param_1[0x17] = &LAB_1496054a4;
  param_1[0x12] = &LAB_1496054ac;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14960532a FUN_14960532a body=38 status=ok
// SIG undefined FUN_14960532a(void)

undefined8 FUN_14960532a(undefined8 param_1,int param_2)

{
  FUN_149605500();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605350 FUN_149605350 body=207 status=ok
// SIG undefined FUN_149605350(void)

void FUN_149605350(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149605401;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149605401:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149605420 FUN_149605420 body=53 status=ok
// SIG undefined FUN_149605420(void)

void FUN_149605420(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149605486 FUN_149605486 body=29 status=ok
// SIG undefined FUN_149605486(void)

undefined8 FUN_149605486(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496054e2 FUN_1496054e2 body=29 status=ok
// SIG undefined FUN_1496054e2(void)

undefined8 FUN_1496054e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605500 FUN_149605500 body=127 status=ok
// SIG undefined FUN_149605500(void)

void FUN_149605500(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd792a0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149605580 FUN_149605580 body=266 status=ok
// SIG undefined FUN_149605580(void)

undefined8 *
FUN_149605580(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd79400;
  param_1[1] = 0;
  param_1[2] = 0xffffffff00000000;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_14bd79420;
  param_1[9] = param_2;
  param_1[4] = FUN_149605834;
  param_1[0xc] = *param_3;
  param_1[0xe] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  lVar6 = param_3[5];
  lVar7 = param_3[7];
  param_1[0x12] = param_3[6];
  param_1[0x13] = lVar7;
  param_1[0x10] = lVar5;
  param_1[0x11] = lVar6;
  if (param_1[0xc] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = *param_4;
  param_1[0x16] = param_4[2];
  param_4[2] = 0;
  lVar5 = param_4[4];
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x24);
  lVar6 = param_4[5];
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  lVar7 = param_4[7];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(int *)(param_1 + 0x1a) = (int)param_4[6];
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(int *)(param_1 + 0x1b) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar4;
  *(int *)(param_1 + 0x18) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(int *)(param_1 + 0x19) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  if (param_1[0x14] != 0) {
    *param_4 = 0;
  }
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14960568a FUN_14960568a body=38 status=ok
// SIG undefined FUN_14960568a(void)

undefined8 FUN_14960568a(undefined8 param_1,int param_2)

{
  FUN_1496058e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496056b0 FUN_1496056b0 body=230 status=ok
// SIG undefined FUN_1496056b0(void)

void FUN_1496056b0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar4 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(local_38,uVar3);
  plVar4 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) != -1) {
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar5 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar3,plVar4,local_38);
    if (cVar2 == '\0') goto LAB_149605758;
  }
  if (local_38 != plVar4) {
    FUN_14960598a(plVar4,local_38);
  }
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar5 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x70);
  }
  uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar1)(uVar3,plVar4);
LAB_149605758:
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149605798 FUN_149605798 body=155 status=ok
// SIG undefined FUN_149605798(void)

void FUN_149605798(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_30,uVar2);
  if (&local_30 == (longlong *)(param_1 + 8)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_30;
    *(undefined4 *)(param_1 + 0x10) = local_28;
    *(undefined4 *)(param_1 + 0x14) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149605834 FUN_149605834 body=28 status=ok
// SIG undefined FUN_149605834(void)

undefined8 FUN_149605834(undefined8 param_1,undefined8 param_2)

{
  FUN_149605898(param_2,param_1);
  return param_1;
}



// FUNCTION 14960587a FUN_14960587a body=29 status=ok
// SIG undefined FUN_14960587a(void)

undefined8 FUN_14960587a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605898 FUN_149605898 body=80 status=ok
// SIG undefined FUN_149605898(void)

undefined8 * FUN_149605898(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  uVar3 = *puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1474513c8(param_2,iVar1,0);
    FUN_14745142a(*param_2,uVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 1496058e8 FUN_1496058e8 body=162 status=ok
// SIG undefined FUN_1496058e8(void)

void FUN_1496058e8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd79400;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = 0;
    param_1[2] = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 14960598a FUN_14960598a body=93 status=ok
// SIG undefined FUN_14960598a(void)

longlong * FUN_14960598a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474513c8(param_1,iVar1,0);
    FUN_14745142a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1496059e7 FUN_1496059e7 body=103 status=ok
// SIG undefined FUN_1496059e7(void)

bool FUN_1496059e7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 149605a84 FUN_149605a84 body=29 status=ok
// SIG undefined FUN_149605a84(void)

undefined8 FUN_149605a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605aa2 FUN_149605aa2 body=234 status=ok
// SIG undefined FUN_149605aa2(void)

undefined8 * FUN_149605aa2(undefined8 *param_1)

{
  FUN_149605b8c();
  *param_1 = &PTR_FUN_14bd794a0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x140400000;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 **)((longlong)param_1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x3f0000003f000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f8000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 149605b8c FUN_149605b8c body=102 status=ok
// SIG undefined FUN_149605b8c(void)

undefined8 * FUN_149605b8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  *param_1 = &PTR_LAB_14bd794b0;
  param_1[1] = 0;
  _Dst = (void *)FUN_14001cc68(0x570);
  memset(_Dst,0,0x570);
  FUN_1484d448a(_Dst);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 149605bf2 FUN_149605bf2 body=38 status=ok
// SIG undefined FUN_149605bf2(void)

undefined8 FUN_149605bf2(undefined8 param_1,int param_2)

{
  FUN_149606876();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149605c18 FUN_149605c18 body=3162 status=ok
// SIG undefined FUN_149605c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149605c18(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  void *_Dst;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined **local_138;
  longlong *plStack_130;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  _Dst = (void *)FUN_14001cc68(0x570);
  memset(_Dst,0,0x570);
  FUN_1484d448a(_Dst);
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  *(void **)(param_1 + 0x50) = _Dst;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    _Dst = *(void **)(param_1 + 0x50);
  }
  local_138 = *(undefined ***)((longlong)_Dst + 0x40);
  uStack_f0 = *(undefined8 *)((longlong)_Dst + 0x48);
  local_128 = *(longlong **)((longlong)_Dst + 0x50);
  uStack_e0 = *(undefined8 *)((longlong)_Dst + 0x58);
  local_d8 = *(longlong *)((longlong)_Dst + 0x60);
  uStack_d0 = *(ulonglong *)((longlong)_Dst + 0x68);
  local_c8 = *(undefined8 *)((longlong)_Dst + 0x70);
  uStack_c0 = *(undefined8 *)((longlong)_Dst + 0x78);
  uVar6 = local_c8;
  uVar7 = uStack_c0;
  local_e8 = local_128;
  uVar10 = uStack_e0;
  local_f8 = local_138;
  *(ulonglong *)((longlong)_Dst + 0x70) = CONCAT44(uStack_104,local_108);
  *(ulonglong *)((longlong)_Dst + 0x78) = CONCAT44(uStack_fc,uStack_100);
  *(undefined ***)((longlong)_Dst + 0x60) = &PTR_LAB_14bd794c0;
  *(undefined8 *)((longlong)_Dst + 0x68) = param_2;
  *(undefined8 *)((longlong)_Dst + 0x50) = 0;
  *(ulonglong *)((longlong)_Dst + 0x58) = CONCAT44(uStack_11c,uStack_120);
  *(code **)((longlong)_Dst + 0x40) = FUN_149606ca4;
  *(longlong **)((longlong)_Dst + 0x48) = plStack_130;
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  local_108 = (undefined4)local_c8;
  uStack_104 = local_c8._4_4_;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_118 = local_d8;
  uStack_110 = uStack_d0;
  uStack_120 = (undefined4)uStack_e0;
  uStack_11c = uStack_e0._4_4_;
  plStack_130 = (longlong *)uStack_f0;
  uStack_e0 = uVar10;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  if (local_138 != (undefined **)0x0) {
    plVar9 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar9 = &local_118;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x20) = *(undefined4 *)(param_1 + 0x6c);
  FUN_14838049e(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x60));
  *(double *)(*(longlong *)(param_1 + 0x50) + 0x28) = (double)*(float *)(param_1 + 0x74);
  FUN_1483804a6(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x78));
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x550) = *(undefined8 *)(param_1 + 0x90);
  FUN_1484c328a(*(undefined8 *)(param_1 + 0x50),param_1 + 0x80);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x30) = 3;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x50);
    local_138 = *(undefined ***)(lVar11 + 0x100);
    uStack_f0 = *(undefined8 *)(lVar11 + 0x108);
    local_128 = *(longlong **)(lVar11 + 0x110);
    uStack_e0 = *(undefined8 *)(lVar11 + 0x118);
    local_d8 = *(longlong *)(lVar11 + 0x120);
    uStack_d0 = *(ulonglong *)(lVar11 + 0x128);
    local_c8 = *(undefined8 *)(lVar11 + 0x130);
    uStack_c0 = *(undefined8 *)(lVar11 + 0x138);
    uVar6 = local_c8;
    uVar7 = uStack_c0;
    local_e8 = local_128;
    uVar10 = uStack_e0;
    local_f8 = local_138;
    *(ulonglong *)(lVar11 + 0x130) = CONCAT44(uStack_104,local_108);
    *(ulonglong *)(lVar11 + 0x138) = CONCAT44(uStack_fc,uStack_100);
    *(undefined ***)(lVar11 + 0x120) = &PTR_LAB_14bd794e0;
    *(longlong *)(lVar11 + 0x128) = param_1;
    *(undefined8 *)(lVar11 + 0x110) = 0;
    *(ulonglong *)(lVar11 + 0x118) = CONCAT44(uStack_11c,uStack_120);
    *(undefined1 **)(lVar11 + 0x100) = &LAB_149606d32;
    *(longlong **)(lVar11 + 0x108) = plStack_130;
    uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
    local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    local_108 = (undefined4)local_c8;
    uStack_104 = local_c8._4_4_;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    local_118 = local_d8;
    uStack_110 = uStack_d0;
    uStack_120 = (undefined4)uStack_e0;
    uStack_11c = uStack_e0._4_4_;
    if (local_138 != (undefined **)0x0) {
      plVar9 = &local_118;
      if (local_128 != (longlong *)0x0) {
        plVar9 = local_128;
      }
      plStack_130 = (longlong *)uStack_f0;
      uStack_e0 = uVar10;
      local_c8 = uVar6;
      uStack_c0 = uVar7;
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_f0 = *(undefined8 *)(param_1 + 0x10);
  local_e8 = *(longlong **)(param_1 + 0x20);
  local_f8 = &PTR_FUN_14af3d520;
  local_d8 = 0;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  local_c8 = 0;
  uStack_c0 = 0;
  *(undefined ****)(*(longlong *)(param_1 + 0x50) + 0x38) = &local_f8;
  local_138 = (undefined **)0x0;
  plStack_130 = (longlong *)0x0;
  lVar11 = 0;
  local_140 = param_1;
  do {
    uVar8 = *(uint *)(param_1 + 0x5c) & *(uint *)((longlong)&DAT_14bd72980 + lVar11);
    if (0x7f < (int)uVar8) {
      if ((int)uVar8 < 0x400) {
        if (uVar8 == 0x80) {
          plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14af3e070;
          plVar9[2] = 0;
          plVar9[3] = 0;
          plVar9[4] = 0;
          plVar9[5] = 0;
          plVar9[6] = 0;
          plVar9[7] = 0;
          plVar9[2] = (longlong)&PTR_FUN_14af3e090;
          *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar12 = plVar9 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          local_150 = plVar9 + 2;
          local_d8 = *(undefined8 *)(param_1 + 0x178);
          uStack_d0 = CONCAT44(uStack_d0._4_4_,*(undefined4 *)(param_1 + 0x14c));
          goto LAB_1496060a8;
        }
        if (uVar8 != 0x100) {
          if (uVar8 == 0x200) {
            plVar9 = (longlong *)FUN_148582953();
            plVar12 = plVar9 + 2;
            if (plVar9 == (longlong *)0x0) {
              _DAT_00000018 = 6;
              goto LAB_1496064f4;
            }
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar9 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            *(undefined4 *)(plVar9 + 3) = 6;
            goto LAB_149606538;
          }
          goto switchD_149605fd2_caseD_3;
        }
        plVar9 = (longlong *)FUN_14001cc68(0x50,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14af3e0b0;
        plVar9[2] = 0;
        plVar9[3] = 0;
        *(undefined8 *)((longlong)plVar9 + 0x1c) = 0;
        *(undefined8 *)((longlong)plVar9 + 0x24) = 0;
        *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
        plVar9[6] = 0;
        plVar9[2] = (longlong)&PTR_FUN_14af3e0d0;
        plVar9[7] = 0;
        plVar9[8] = 0;
        plVar9[9] = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar9 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        *(undefined4 *)(plVar9 + 9) = *(undefined4 *)(param_1 + 0x158);
        FUN_1495f8878(plVar9 + 7,param_1 + 0x188);
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        local_150 = plVar9 + 2;
        goto LAB_1496060b1;
      }
      if (uVar8 == 0x4000) {
        plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14af3e0f0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[6] = 0;
        plVar9[7] = 0;
        plVar9[8] = 0;
        plVar9[9] = 0;
        plVar9[10] = 0;
        plVar9[0xb] = 0;
        plVar9[0xc] = 0;
        plVar9[0xd] = 0;
        plVar9[2] = (longlong)&PTR_FUN_14af3e110;
        lVar5 = DAT_14c846328;
        plVar9[3] = DAT_14c846320;
        plVar9[4] = lVar5;
        *(undefined4 *)(plVar9 + 5) = 0x3f800000;
        plVar9[7] = (longlong)&DAT_3f8000003f800000;
        plVar9[8] = 0x3f0000003f000000;
        plVar9[9] = 0x3f8000003f000000;
        plVar9[10] = 0;
        plVar9[0xb] = 0;
        *(undefined4 *)(plVar9 + 0xc) = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar9 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        local_150 = plVar9 + 2;
        iVar3 = *(int *)(param_1 + 100);
        plVar9[3] = (longlong)(1.0 / (double)*(int *)(param_1 + 0x60));
        plVar9[4] = (longlong)(1.0 / (double)iVar3);
        *(undefined4 *)(plVar9 + 0xc) = *(undefined4 *)(param_1 + 0x10c);
        *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(param_1 + 0x110);
        lVar5 = *(longlong *)(param_1 + 0x11c);
        plVar9[6] = *(longlong *)(param_1 + 0x114);
        plVar9[7] = lVar5;
        lVar5 = *(longlong *)(param_1 + 300);
        plVar9[8] = *(longlong *)(param_1 + 0x124);
        plVar9[9] = lVar5;
        lVar5 = *(longlong *)(param_1 + 0x13c);
        plVar9[10] = *(longlong *)(param_1 + 0x134);
        plVar9[0xb] = lVar5;
        goto LAB_1496060a8;
      }
      if (uVar8 != 0x400) {
        if (uVar8 != 0x800) goto switchD_149605fd2_caseD_3;
        plVar9 = (longlong *)FUN_148582953();
        plVar12 = plVar9 + 2;
        if (plVar9 == (longlong *)0x0) {
          _DAT_00000018 = 7;
          goto LAB_1496064f4;
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(undefined4 *)(plVar9 + 3) = 7;
LAB_149606538:
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        local_150 = plVar12;
        goto LAB_1496060bb;
      }
      plVar9 = (longlong *)FUN_148582953();
      plVar12 = plVar9 + 2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(undefined4 *)(plVar9 + 3) = 5;
        goto LAB_149606538;
      }
      _DAT_00000018 = 5;
LAB_1496064f4:
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      local_148 = (longlong *)0x0;
      local_150 = plVar12;
      goto LAB_1496060c0;
    }
    if (0xf < (int)uVar8) {
      if (uVar8 == 0x20) {
        plVar9 = (longlong *)FUN_14001cc68(0xa8);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14af3e030;
        memset(plVar9 + 4,0,0x88);
        plVar9[2] = (longlong)&PTR_FUN_14af3e050;
        *(undefined4 *)(plVar9 + 3) = 0;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = 1;
        plVar9[5] = 0x3ff0000000000000;
        plVar9[8] = 0x3fb999999999999a;
        plVar9[9] = 0;
        plVar9[10] = 0;
        plVar9[0xb] = 0;
        plVar9[0xc] = -0x10000000000001;
        plVar9[0xd] = 0x7fefffffffffffff;
        plVar9[0xe] = 0x7fefffffffffffff;
        plVar9[0xf] = -0x10000000000001;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar9 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        dVar13 = (double)*(float *)(param_1 + 0xec);
        dVar14 = 1000.0;
        if (dVar13 <= 1000.0) {
          dVar14 = dVar13;
        }
        plVar9[5] = -(ulonglong)(dVar13 < 0.0001) & 0x3f1a36e2eb1c432d |
                    ~-(ulonglong)(dVar13 < 0.0001) & (ulonglong)dVar14;
        dVar14 = 0.0;
        if (0.0 <= *(float *)(param_1 + 0xf0)) {
          dVar13 = (double)*(float *)(param_1 + 0xf0);
          dVar14 = 1.0;
          if (dVar13 <= 1.0) {
            dVar14 = dVar13;
          }
        }
        local_150 = plVar9 + 2;
        plVar9[6] = (longlong)dVar14;
        *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(param_1 + 0xe8);
        *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(param_1 + 0xf4);
        *(undefined4 *)(plVar9 + 4) = *(undefined4 *)(param_1 + 0xf8);
        goto LAB_1496060a8;
      }
      if (uVar8 == 0x10) {
        plVar9 = (longlong *)FUN_148582953();
        plVar12 = plVar9 + 2;
        if (plVar9 == (longlong *)0x0) {
          _DAT_00000018 = 1;
          goto LAB_1496064f4;
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(undefined4 *)(plVar9 + 3) = 1;
        goto LAB_149606538;
      }
      if (uVar8 == 0x40) {
        FUN_149606a54(&local_140,&local_138);
        *(byte *)(local_138 + 1) = *(byte *)(local_138 + 1) | 1;
      }
      goto switchD_149605fd2_caseD_3;
    }
    switch(uVar8) {
    case 1:
      plVar9 = (longlong *)FUN_14001cc68(0x90,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3df70;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xf] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      plVar9[0x10] = 0;
      plVar9[0x11] = 0;
      plVar9[2] = (longlong)&PTR_FUN_14af3df90;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      *(undefined4 *)((longlong)plVar9 + 0x4c) = 0x80;
      *(undefined4 *)(plVar9 + 10) = 0xffffffff;
      *(undefined1 *)(plVar9 + 0xe) = 0;
      *(undefined4 *)(plVar9 + 0x11) = DAT_14c84636c;
      plVar9[0x10] = DAT_14c846364;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      goto LAB_14960608a;
    case 2:
      plVar9 = (longlong *)FUN_148582953();
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      *(undefined4 *)(plVar9 + 3) = 2;
LAB_14960608a:
      local_150 = plVar9 + 2;
      local_c8 = *(undefined8 *)(param_1 + 0x160);
      uStack_c0 = *(undefined8 *)(param_1 + 0x170);
LAB_1496060a8:
      uVar10 = *(undefined8 *)(param_1 + 0x50);
LAB_1496060b1:
      local_148 = plVar9;
      if (plVar9 != (longlong *)0x0) {
LAB_1496060bb:
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_148 = plVar9;
      }
LAB_1496060c0:
      FUN_1483803f4(uVar10,&local_150);
      plVar12 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_148 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      break;
    case 4:
      plVar9 = (longlong *)FUN_148582953();
      plVar12 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        _DAT_00000018 = 3;
        goto LAB_1496064f4;
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      *(undefined4 *)(plVar9 + 3) = 3;
      goto LAB_149606538;
    case 8:
      FUN_149606a54(&local_140,&local_138);
      *(byte *)(local_138 + 1) = *(byte *)(local_138 + 1) | 2;
    }
switchD_149605fd2_caseD_3:
    lVar11 = lVar11 + 4;
    if (lVar11 == 0x34) {
      FUN_143b13eb0(*(undefined8 *)(param_1 + 0x50));
      puVar4 = *(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar9 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_130 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 149606876 FUN_149606876 body=477 status=ok
// SIG undefined FUN_149606876(void)

void FUN_149606876(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd794a0;
  FUN_145810cd0(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x16];
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
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0x11];
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
  puVar4 = (undefined8 *)param_1[10];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_14bd794b0;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149606a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 149606a54 FUN_149606a54 body=590 status=ok
// SIG undefined FUN_149606a54(void)

void FUN_149606a54(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) goto LAB_149606a72;
  lVar3 = *param_1;
  plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3dff0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14af3e010;
  *(undefined1 *)(plVar5 + 3) = 3;
  *(undefined4 *)((longlong)plVar5 + 0x1c) = 0x20;
  plVar5[4] = 0x7fefffffffffffff;
  plVar5[5] = 0x4066800000000000;
  *(undefined4 *)(plVar5 + 6) = 1;
  plVar5[7] = 0x402e000000000000;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0x3fd0000000000000;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_149606b59:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_149606b7b;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_2 = (longlong)(plVar5 + 2);
    plVar6 = (longlong *)param_2[1];
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_2[1] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_149606b59;
    }
LAB_149606b7b:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  *(undefined1 *)(*param_2 + 8) = 0;
  *(undefined4 *)(*param_2 + 0xc) = *(undefined4 *)(lVar3 + 0xcc);
  *(double *)(*param_2 + 0x10) = (double)*(float *)(lVar3 + 0xd0);
  *(double *)(*param_2 + 0x18) = (double)*(float *)(lVar3 + 0xd4);
  *(double *)(*param_2 + 0x28) = (double)*(float *)(lVar3 + 0xd8);
  if (*(uint *)(lVar3 + 0xdc) < 2) {
    *(uint *)(*param_2 + 0x30) = *(uint *)(lVar3 + 0xdc);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_1483803f4(uVar4,&local_38);
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_149606a72:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149606ca4 FUN_149606ca4 body=70 status=ok
// SIG undefined FUN_149606ca4(void)

char FUN_149606ca4(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 149606d14 FUN_149606d14 body=29 status=ok
// SIG undefined FUN_149606d14(void)

undefined8 FUN_149606d14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149606d64 FUN_149606d64 body=29 status=ok
// SIG undefined FUN_149606d64(void)

undefined8 FUN_149606d64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149606d82 FUN_149606d82 body=199 status=ok
// SIG undefined FUN_149606d82(void)

void FUN_149606d82(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *puStack_40;
  float local_38;
  float local_34;
  float local_30;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar3 = *(int **)(*param_1 + 0xa8);
  local_48 = &DAT_3f8000003f800000;
  puStack_40 = &DAT_3f8000003f800000;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar5 = 1.0;
  if (dVar1 <= 1.0) {
    dVar5 = dVar1;
  }
  dVar4 = 1.0;
  if (dVar2 <= 1.0) {
    dVar4 = dVar2;
  }
  local_18 = (double)piVar3[1] * (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar4);
  local_20 = (double)*piVar3 * (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar5);
  FUN_1483b7358(piVar3,&local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((local_38 + local_34 + local_30) / 3.0);
}



// FUNCTION 149606e5c FUN_149606e5c body=68 status=ok
// SIG undefined FUN_149606e5c(void)

undefined8 * FUN_149606e5c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149606ea0 FUN_149606ea0 body=194 status=ok
// SIG undefined FUN_149606ea0(void)

void FUN_149606ea0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_144552e92(*(longlong *)(param_1 + 0x40),&local_30);
    if (local_30 == 0) {
      FUN_1496071e0(*(undefined8 *)(param_1 + 0x40),&local_30);
      puVar3 = (undefined8 *)CONCAT44(uStack_2c,local_30);
      FUN_149607242(param_1,puVar3);
      uVar1 = puVar3[1];
      puVar3[1] = 0;
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_1496072e6(param_1 + 0x18,param_1 + 0x38);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149606f64 FUN_149606f64 body=403 status=ok
// SIG undefined FUN_149606f64(void)

void FUN_149606f64(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  LOCK();
  *(int *)param_1[7] = *(int *)param_1[7] + 1;
  UNLOCK();
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_48);
  puVar7 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  puVar6 = local_48;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  *(undefined2 *)(puVar7 + 5) = 3;
  puVar7[6] = 0xffffffffffffffff;
  puVar7[7] = 0;
  *puVar7 = &PTR_FUN_14bd79590;
  local_48 = (undefined8 *)0x0;
  FUN_14851a5de(puVar7 + 10);
  puVar7[0x24] = puVar6;
  *puVar7 = &PTR_FUN_14bd79550;
  *(undefined1 *)(puVar7 + 0x26) = 0;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  puVar7[10] = puVar7 + 0x26;
  param_1[1] = puVar7;
  uVar3 = param_1[7];
  lVar4 = param_1[8];
  if (lVar4 == 0) {
    puVar7[0x27] = uVar3;
    puVar7[0x28] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar7[0x28];
    puVar7[0x27] = uVar3;
    puVar7[0x28] = lVar4;
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
  }
  local_58 = 0;
  local_60 = 0xffffffffffffffff;
  local_68 = 0;
  FUN_1402a8900(param_1[1],0,DAT_14c8442c0,3);
  param_1[4] = param_1[3];
  *(undefined4 *)(param_1 + 2) = 1;
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496070f8 FUN_1496070f8 body=38 status=ok
// SIG undefined FUN_1496070f8(void)

undefined8 FUN_1496070f8(undefined8 param_1,int param_2)

{
  FUN_149607186();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149607122 FUN_149607122 body=38 status=ok
// SIG undefined FUN_149607122(void)

undefined8 FUN_149607122(undefined8 param_1,int param_2)

{
  FUN_149607148();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149607148 FUN_149607148 body=62 status=ok
// SIG undefined FUN_149607148(void)

void FUN_149607148(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd79590;
  puVar1 = (undefined8 *)param_1[0x24];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1484c0408(param_1 + 0xc);
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 149607186 FUN_149607186 body=89 status=ok
// SIG undefined FUN_149607186(void)

void FUN_149607186(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd79550;
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_149607148(param_1);
  return;
}



// FUNCTION 1496071e0 FUN_1496071e0 body=98 status=ok
// SIG undefined FUN_1496071e0(void)

undefined8 * FUN_1496071e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar1 + 0x120) = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_149606f64(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_2;
}



// FUNCTION 149607242 FUN_149607242 body=164 status=ok
// SIG undefined FUN_149607242(void)

void FUN_149607242(longlong *param_1,undefined8 param_2)

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
        goto LAB_1496072c2;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1496072c2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1496072e6 FUN_1496072e6 body=164 status=ok
// SIG undefined FUN_1496072e6(void)

void FUN_1496072e6(longlong *param_1,undefined8 param_2)

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
        goto LAB_149607366;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_149607366:
  FUN_14474d06a(param_1,0);
  return;
}


