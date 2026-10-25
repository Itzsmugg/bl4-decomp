// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480e190a FUN_1480e190a body=194 status=ok
// SIG undefined FUN_1480e190a(void)

void FUN_1480e190a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x148,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *param_1 = &PTR_FUN_14ad903b0;
  FUN_14764cde2(param_1 + 8,param_2 + 0x40);
  return;
}



// FUNCTION 1480e19cc FUN_1480e19cc body=98 status=ok
// SIG undefined FUN_1480e19cc(void)

void FUN_1480e19cc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1480e1a2e FUN_1480e1a2e body=96 status=ok
// SIG undefined FUN_1480e1a2e(void)

void FUN_1480e1a2e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1480e1a8e FUN_1480e1a8e body=146 status=ok
// SIG undefined FUN_1480e1a8e(void)

void FUN_1480e1a8e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1480e1b22 FUN_1480e1b22 body=78 status=ok
// SIG undefined FUN_1480e1b22(void)

void FUN_1480e1b22(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x488,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_1480e1b70(param_1,param_2);
  return;
}



// FUNCTION 1480e1b70 FUN_1480e1b70 body=178 status=ok
// SIG undefined FUN_1480e1b70(void)

undefined8 * FUN_1480e1b70(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *param_1 = &PTR_FUN_14ad91010;
  lVar1 = 0x40;
  do {
    FUN_147613664((longlong)param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x480);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x480);
  return param_1;
}



// FUNCTION 1480e1c22 FUN_1480e1c22 body=202 status=ok
// SIG undefined FUN_1480e1c22(void)

void FUN_1480e1c22(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98950;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e1cee FUN_1480e1cee body=29 status=ok
// SIG undefined FUN_1480e1cee(void)

undefined8 FUN_1480e1cee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e1d20 FUN_1480e1d20 body=93 status=ok
// SIG undefined FUN_1480e1d20(void)

void FUN_1480e1d20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e1d7e FUN_1480e1d7e body=93 status=ok
// SIG undefined FUN_1480e1d7e(void)

void FUN_1480e1d7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e1ddc FUN_1480e1ddc body=126 status=ok
// SIG undefined FUN_1480e1ddc(void)

void FUN_1480e1ddc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e1e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e1e62 FUN_1480e1e62 body=19 status=ok
// SIG undefined FUN_1480e1e62(void)

undefined1 FUN_1480e1e62(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e1e76(param_2);
  return 1;
}



// FUNCTION 1480e1e76 FUN_1480e1e76 body=3242 status=ok
// SIG undefined FUN_1480e1e76(void)

void FUN_1480e1e76(char *param_1)

{
  float *pfVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_XMM8_Da;
  undefined1 unaff_XMM9 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_3d8 [36];
  int local_3b4;
  longlong local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  float *local_370;
  int local_368;
  float *local_360;
  int local_358;
  float *local_350;
  int local_348;
  float *local_340;
  int local_338;
  float *local_330;
  int local_328;
  float *local_320;
  int local_318;
  float *local_310;
  int local_308;
  float *local_300;
  int local_2f8;
  float *local_2f0;
  int local_2e8;
  float *local_2e0;
  int local_2d8;
  float *local_2d0;
  int local_2c8;
  float *local_2c0;
  int local_2b8;
  float *local_2b0;
  int local_2a8;
  char local_2a0;
  byte local_29f;
  char local_29e;
  byte local_29d;
  int *local_298;
  undefined8 uStack_290;
  int local_288;
  undefined1 local_278 [8];
  longlong local_270;
  undefined1 local_268 [32];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8 [16];
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  FUN_140982196(local_278,param_1);
  local_298 = (int *)0x0;
  uStack_290 = 0;
  local_288 = 0;
  FUN_144a98d08(&local_298,param_1);
  FUN_1480e2b22(&local_370,param_1);
  FUN_144a928e2(&local_208,local_270 + 0xf0);
  FUN_144a928e2(&local_248,local_270 + 0x1f0);
  if (local_29f == 1) {
    local_118 = local_1d8;
    uStack_114 = uStack_1d4;
    uStack_110 = uStack_1d0;
    uStack_10c = uStack_1cc;
    local_128 = local_1e8;
    uStack_124 = uStack_1e4;
    uStack_120 = uStack_1e0;
    uStack_11c = uStack_1dc;
    local_138 = local_1f8;
    uStack_130 = uStack_1f0;
    local_148._0_4_ = local_208;
    local_148._4_4_ = uStack_204;
    uStack_140 = uStack_200;
    uStack_13c = uStack_1fc;
    FUN_144afd82e(&local_148,0x322bcc77);
    FUN_144afdc36(&local_148,&local_388);
  }
  else {
    local_388 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_380 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_29f & 1) == 0) {
    local_398 = DAT_14c84633c._4_4_;
    fStack_394 = DAT_14c846344;
    fStack_390 = DAT_14c846348;
    fStack_38c = DAT_14c84634c;
  }
  else {
    local_118 = local_218;
    uStack_114 = uStack_214;
    uStack_110 = uStack_210;
    uStack_10c = uStack_20c;
    local_128 = local_228;
    uStack_124 = uStack_224;
    uStack_120 = uStack_220;
    uStack_11c = uStack_21c;
    local_138 = local_238;
    uStack_130 = uStack_230;
    local_148._0_4_ = local_248;
    local_148._4_4_ = uStack_244;
    uStack_140 = uStack_240;
    uStack_13c = uStack_23c;
    FUN_144afd82e(&local_148,0x322bcc77);
    FUN_144afdc36(&local_148,&local_398);
  }
  lVar8 = local_270;
  lVar5 = FUN_14479d2ce(local_270);
  if (lVar5 != 0) {
    FUN_144a74fb4();
  }
  plVar6 = (longlong *)FUN_14479d2ce(lVar8 + 0x50);
  lVar5 = FUN_14479d2ce(lVar8);
  if (lVar5 != 0) {
    lVar7 = FUN_144a74fb4();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) && (lVar7 = FUN_144a81888(lVar5), lVar7 != 0)) {
      FUN_1417c143e(lVar5,*(undefined4 *)(lVar8 + 0x31c),0);
    }
  }
  local_3b0 = *(longlong *)(lVar8 + 0x60);
  if (local_3b0 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(local_3b0 + 8));
  }
  if (plVar6 == (longlong *)0x0) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      fVar33 = 1.0 / *(float *)(local_270 + 0x270);
      iVar10 = 0;
      do {
        fVar32 = DAT_14c84634c;
        fVar31 = DAT_14c846348;
        fVar30 = DAT_14c846344;
        fVar29 = DAT_14c846338;
        fVar15 = DAT_14c846330._4_4_;
        fVar34 = (float)DAT_14c846330;
        if (local_29f == 1) {
          *local_340 = DAT_14c84633c._4_4_;
          *local_330 = fVar30;
          *local_320 = fVar31;
          *local_310 = fVar32;
          local_340 = local_340 + local_338;
          local_330 = local_330 + local_328;
          local_320 = local_320 + local_318;
          local_310 = local_310 + local_308;
        }
        fVar30 = fVar29;
        fVar31 = fVar15;
        fVar32 = fVar34;
        if (local_29d == 1) {
          fVar30 = (fVar29 - fVar29) + fVar29;
          fVar31 = (fVar15 - fVar15) + fVar15;
          fVar32 = (fVar34 - fVar34) + fVar34;
        }
        if (local_2a0 == '\x01') {
          *local_370 = fVar32;
          *local_360 = fVar31;
          *local_350 = fVar30;
          local_370 = local_370 + local_368;
          local_360 = local_360 + local_358;
          local_350 = local_350 + local_348;
        }
        if ((local_29d & 1) != 0) {
          *local_2d0 = (fVar32 - fVar34) * fVar33;
          *local_2c0 = (fVar31 - fVar15) * fVar33;
          *local_2b0 = (fVar30 - fVar29) * fVar33;
          local_2d0 = local_2d0 + local_2c8;
          local_2c0 = local_2c0 + local_2b8;
          local_2b0 = local_2b0 + local_2a8;
        }
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
      } while (iVar10 < *piVar9);
    }
  }
  else {
    lVar8 = (**(code **)(*plVar6 + 0x308))(plVar6);
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = *(int *)(lVar8 + 0x28);
      iVar14 = *(int *)(local_270 + 0x2b0) + iVar10;
      fVar33 = 1.0 / *(float *)(local_270 + 0x270);
      local_3a0 = (longlong *)((ulonglong)*(uint *)(local_270 + 700) * 0x10 + local_270 + 0x2c0);
      local_3a8 = (longlong *)
                  (local_270 + (ulonglong)((~*(uint *)(local_270 + 700) & 1) << 4) + 0x2c0);
      iVar13 = 0;
      local_3b4 = iVar14;
      do {
        fVar30 = DAT_14c84634c;
        fVar29 = DAT_14c846348;
        fVar15 = DAT_14c846344;
        fVar34 = DAT_14c846338;
        piVar9 = local_298 + local_288;
        iVar3 = *local_298;
        lVar8 = (longlong)iVar3;
        local_298 = piVar9;
        if ((lVar8 < 0) || (iVar14 <= iVar3)) {
          auVar36._4_4_ = DAT_14c846330._4_4_;
          auVar36._0_4_ = (float)DAT_14c846330;
          auVar36._8_8_ = 0;
          uVar17 = 0;
          uVar19 = 0;
          fVar32 = (float)DAT_14c846330;
          fVar25 = DAT_14c846330._4_4_;
          fVar31 = DAT_14c846338;
          if (local_29d == 0) {
            fVar32 = unaff_XMM9._0_4_;
            fVar25 = unaff_XMM9._4_4_;
            uVar17 = unaff_XMM9._8_4_;
            uVar19 = unaff_XMM9._12_4_;
            fVar31 = unaff_XMM8_Da;
          }
          if (local_29f == 1) {
            *local_340 = DAT_14c84633c._4_4_;
            *local_330 = fVar15;
            *local_320 = fVar29;
            *local_310 = fVar30;
            local_340 = local_340 + local_338;
            local_330 = local_330 + local_328;
            local_320 = local_320 + local_318;
            local_310 = local_310 + local_308;
          }
          if (local_29e == '\x01') {
            unaff_XMM9._4_4_ = fVar25;
            unaff_XMM9._0_4_ = fVar32;
            unaff_XMM9._8_4_ = uVar17;
            unaff_XMM9._12_4_ = uVar19;
            fVar15 = (float)DAT_14c846330;
            fVar30 = DAT_14c846338;
            fVar29 = DAT_14c846330._4_4_;
            goto LAB_1480e22b9;
          }
          unaff_XMM9._4_4_ = fVar25;
          unaff_XMM9._0_4_ = fVar32;
          unaff_XMM9._8_4_ = uVar17;
          unaff_XMM9._12_4_ = uVar19;
        }
        else if (iVar3 < iVar10) {
          lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
          if (iVar3 < *(int *)(lVar5 + 8)) {
            (**(code **)(*plVar6 + 0x340))(plVar6,&local_148,iVar3);
            uVar17 = (undefined4)local_d8;
            uVar19 = (undefined4)((ulonglong)local_d8 >> 0x20);
            uVar21 = (undefined4)local_e0;
            uVar23 = (undefined4)((ulonglong)local_e0 >> 0x20);
            dVar2 = local_e8;
          }
          else {
            lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
            lVar5 = *(longlong *)(lVar5 + 0x30);
            lVar7 = lVar8 * 0x60;
            uVar4 = *(undefined8 *)(lVar5 + 0x30 + lVar7);
            uVar17 = (undefined4)uVar4;
            uVar19 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar2 = *(double *)(lVar5 + 0x20 + lVar7);
            uVar4 = *(undefined8 *)(lVar5 + 0x28 + lVar7);
            uVar21 = (undefined4)uVar4;
            uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          if (local_29d == 1) {
            lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
            if (iVar3 < *(int *)(lVar5 + 8)) {
              (**(code **)(*plVar6 + 0x340))(plVar6,&local_148,iVar3);
              uVar20 = (undefined4)local_d8;
              uVar22 = (undefined4)((ulonglong)local_d8 >> 0x20);
              uVar16 = SUB84(local_e8,0);
              uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
              uVar24 = (undefined4)local_e0;
              uVar26 = (undefined4)((ulonglong)local_e0 >> 0x20);
            }
            else {
              lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
              lVar5 = *(longlong *)(lVar5 + 0x30);
              lVar7 = lVar8 * 0x60;
              uVar4 = *(undefined8 *)(lVar5 + 0x30 + lVar7);
              uVar20 = (undefined4)uVar4;
              uVar22 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 0x20 + lVar7);
              uVar16 = (undefined4)uVar4;
              uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 0x28 + lVar7);
              uVar24 = (undefined4)uVar4;
              uVar26 = (undefined4)((ulonglong)uVar4 >> 0x20);
            }
            unaff_XMM8_Da = (float)(double)CONCAT44(uVar22,uVar20);
            unaff_XMM9 = insertps(ZEXT416((uint)(float)(double)CONCAT44(uVar18,uVar16)),
                                  ZEXT416((uint)(float)(double)CONCAT44(uVar26,uVar24)),0x10);
          }
          if (local_29f == 1) {
            lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
            if (iVar3 < *(int *)(lVar5 + 8)) {
              (**(code **)(*plVar6 + 0x340))(plVar6,local_1c8,iVar3);
              puVar11 = local_1c8;
              puVar12 = &local_148;
              for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              FUN_144a1c686(&local_148,0xe0000000);
              iVar14 = local_3b4;
              FUN_141706d54(&local_148,local_268);
              uVar16 = (undefined4)local_268._24_8_;
              uVar18 = SUB84(local_268._24_8_,4);
              uVar24 = (undefined4)local_268._16_8_;
              uVar26 = SUB84(local_268._16_8_,4);
              uVar20 = (undefined4)local_268._0_8_;
              uVar22 = SUB84(local_268._0_8_,4);
              uVar27 = (undefined4)local_268._8_8_;
              uVar28 = SUB84(local_268._8_8_,4);
            }
            else {
              lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
              lVar5 = *(longlong *)(lVar5 + 0x30);
              lVar7 = lVar8 * 0x60;
              uVar4 = *(undefined8 *)(lVar5 + 0x18 + lVar7);
              uVar16 = (undefined4)uVar4;
              uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 0x10 + lVar7);
              uVar24 = (undefined4)uVar4;
              uVar26 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar20 = (undefined4)*(undefined8 *)(lVar5 + lVar7);
              uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + lVar7) >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 8 + lVar7);
              uVar27 = (undefined4)uVar4;
              uVar28 = (undefined4)((ulonglong)uVar4 >> 0x20);
            }
            *local_340 = (float)(double)CONCAT44(uVar22,uVar20);
            *local_330 = (float)(double)CONCAT44(uVar28,uVar27);
            *local_320 = (float)(double)CONCAT44(uVar26,uVar24);
            *local_310 = (float)(double)CONCAT44(uVar18,uVar16);
            local_340 = local_340 + local_338;
            local_330 = local_330 + local_328;
            local_320 = local_320 + local_318;
            local_310 = local_310 + local_308;
          }
          fVar34 = (float)(double)CONCAT44(uVar19,uVar17);
          auVar35._0_4_ = (float)dVar2;
          auVar35._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
          auVar35._8_8_ = 0;
          auVar36 = insertps(auVar35,ZEXT416((uint)(float)(double)CONCAT44(uVar23,uVar21)),0x10);
          fVar31 = unaff_XMM8_Da;
          if (local_29e == '\x01') {
            lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
            if (iVar3 < *(int *)(lVar5 + 8)) {
              (**(code **)(*plVar6 + 0x340))(plVar6,&local_148,iVar3);
              iVar14 = local_3b4;
              FUN_144afda3c(&local_148,local_1c8,0xe0000000);
              uVar21 = (undefined4)local_1c8[2];
              uVar23 = (undefined4)((ulonglong)local_1c8[2] >> 0x20);
              uVar17 = (undefined4)local_1c8[0];
              uVar19 = (undefined4)((ulonglong)local_1c8[0] >> 0x20);
              uVar16 = (undefined4)local_1c8[1];
              uVar18 = (undefined4)((ulonglong)local_1c8[1] >> 0x20);
            }
            else {
              lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
              lVar5 = *(longlong *)(lVar5 + 0x30);
              lVar8 = lVar8 * 0x60;
              uVar4 = *(undefined8 *)(lVar5 + 0x50 + lVar8);
              uVar21 = (undefined4)uVar4;
              uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 0x40 + lVar8);
              uVar17 = (undefined4)uVar4;
              uVar19 = (undefined4)((ulonglong)uVar4 >> 0x20);
              uVar4 = *(undefined8 *)(lVar5 + 0x48 + lVar8);
              uVar16 = (undefined4)uVar4;
              uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
            }
            fVar15 = (float)(double)CONCAT44(uVar19,uVar17);
            fVar30 = (float)(double)CONCAT44(uVar23,uVar21);
            fVar29 = (float)(double)CONCAT44(uVar18,uVar16);
LAB_1480e22b9:
            *local_300 = fVar15;
            *local_2f0 = fVar29;
            *local_2e0 = fVar30;
            local_300 = local_300 + local_2f8;
            local_2f0 = local_2f0 + local_2e8;
            local_2e0 = local_2e0 + local_2d8;
          }
        }
        else {
          lVar8 = (longlong)(iVar3 - iVar10) * 0x30;
          fVar31 = unaff_XMM8_Da;
          if (local_29d == 1) {
            unaff_XMM9 = *(undefined1 (*) [16])(*local_3a8 + 0x10 + lVar8);
            fVar31 = *(float *)(*local_3a8 + 0x18 + lVar8);
          }
          lVar5 = *local_3a0;
          auVar36 = *(undefined1 (*) [16])(lVar5 + 0x10 + lVar8);
          pfVar1 = (float *)(lVar5 + 0x20 + lVar8);
          fVar15 = *pfVar1;
          fVar29 = pfVar1[1];
          fVar30 = pfVar1[2];
          fVar34 = *(float *)(lVar5 + 0x18 + lVar8);
          if (local_29f == 1) {
            auVar35 = *(undefined1 (*) [16])(lVar5 + lVar8);
            *local_340 = auVar35._0_4_;
            uVar4 = extractps(auVar35,1);
            *(undefined8 *)local_330 = uVar4;
            uVar4 = extractps(auVar35,2);
            *(undefined8 *)local_320 = uVar4;
            uVar4 = extractps(auVar35,3);
            *(undefined8 *)local_310 = uVar4;
            local_340 = local_340 + local_338;
            local_330 = local_330 + local_328;
            local_320 = local_320 + local_318;
            local_310 = local_310 + local_308;
          }
          if (local_29e == '\x01') goto LAB_1480e22b9;
        }
        fVar15 = unaff_XMM9._0_4_;
        fVar29 = unaff_XMM9._4_4_;
        if (local_29d == 1) {
          fVar30 = auVar36._4_4_;
          fVar32 = auVar36._8_4_;
          fVar25 = auVar36._12_4_;
          fVar34 = (fVar34 - fVar31) + fVar31;
          auVar36._0_4_ = (auVar36._0_4_ - fVar15) + fVar15;
          auVar36._4_4_ = (fVar30 - fVar29) + fVar29;
          auVar36._8_4_ = (fVar32 - unaff_XMM9._8_4_) + unaff_XMM9._8_4_;
          auVar36._12_4_ = (fVar25 - unaff_XMM9._12_4_) + unaff_XMM9._12_4_;
        }
        if (local_2a0 == '\x01') {
          *local_370 = auVar36._0_4_;
          uVar4 = extractps(auVar36,1);
          *(undefined8 *)local_360 = uVar4;
          *local_350 = fVar34;
          local_370 = local_370 + local_368;
          local_360 = local_360 + local_358;
          local_350 = local_350 + local_348;
        }
        if ((local_29d & 1) != 0) {
          *local_2d0 = (auVar36._0_4_ - fVar15) * fVar33;
          *local_2c0 = (auVar36._4_4_ - fVar29) * fVar33;
          *local_2b0 = (fVar34 - fVar31) * fVar33;
          local_2d0 = local_2d0 + local_2c8;
          local_2c0 = local_2c0 + local_2b8;
          local_2b0 = local_2b0 + local_2a8;
        }
        iVar13 = iVar13 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        unaff_XMM8_Da = fVar31;
      } while (iVar13 < *piVar9);
    }
  }
  if (local_3b0 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_3b0 + 8));
  }
  if ((local_c0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e2b22 FUN_1480e2b22 body=323 status=ok
// SIG undefined FUN_1480e2b22(void)

longlong FUN_1480e2b22(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  
  FUN_144a76c20();
  FUN_144a76c20(param_1 + 0x10,param_2);
  FUN_144a76c20(param_1 + 0x20,param_2);
  FUN_144a76c20(param_1 + 0x30,param_2);
  FUN_144a76c20(param_1 + 0x40,param_2);
  FUN_144a76c20(param_1 + 0x50,param_2);
  FUN_144a76c20(param_1 + 0x60,param_2);
  FUN_144a76c20(param_1 + 0x70,param_2);
  FUN_144a76c20(param_1 + 0x80,param_2);
  FUN_144a76c20(param_1 + 0x90,param_2);
  FUN_144a76c20(param_1 + 0xa0,param_2);
  FUN_144a76c20(param_1 + 0xb0,param_2);
  FUN_144a76c20(param_1 + 0xc0,param_2);
  bVar1 = true;
  bVar2 = true;
  if ((*(int *)(param_1 + 8) < 1) && (*(int *)(param_1 + 0x18) < 1)) {
    bVar2 = 0 < *(int *)(param_1 + 0x28);
  }
  *(bool *)(param_1 + 0xd0) = bVar2;
  if (((*(int *)(param_1 + 0x38) < 1) && (*(int *)(param_1 + 0x48) < 1)) &&
     (*(int *)(param_1 + 0x58) < 1)) {
    bVar1 = 0 < *(int *)(param_1 + 0x68);
  }
  *(bool *)(param_1 + 0xd1) = bVar1;
  bVar1 = true;
  bVar2 = true;
  if ((*(int *)(param_1 + 0x78) < 1) && (*(int *)(param_1 + 0x88) < 1)) {
    bVar2 = 0 < *(int *)(param_1 + 0x98);
  }
  *(bool *)(param_1 + 0xd2) = bVar2;
  if ((*(int *)(param_1 + 0xa8) < 1) && (*(int *)(param_1 + 0xb8) < 1)) {
    bVar1 = 0 < *(int *)(param_1 + 200);
  }
  *(bool *)(param_1 + 0xd3) = bVar1;
  return param_1;
}



// FUNCTION 1480e2c66 FUN_1480e2c66 body=202 status=ok
// SIG undefined FUN_1480e2c66(void)

void FUN_1480e2c66(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad989c0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e2d32 FUN_1480e2d32 body=29 status=ok
// SIG undefined FUN_1480e2d32(void)

undefined8 FUN_1480e2d32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e2d64 FUN_1480e2d64 body=93 status=ok
// SIG undefined FUN_1480e2d64(void)

void FUN_1480e2d64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad989c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e2dc2 FUN_1480e2dc2 body=93 status=ok
// SIG undefined FUN_1480e2dc2(void)

void FUN_1480e2dc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad989c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e2e20 FUN_1480e2e20 body=126 status=ok
// SIG undefined FUN_1480e2e20(void)

void FUN_1480e2e20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad989c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e2e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e2ea6 FUN_1480e2ea6 body=19 status=ok
// SIG undefined FUN_1480e2ea6(void)

undefined1 FUN_1480e2ea6(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e2eba(param_2);
  return 1;
}



// FUNCTION 1480e2eba FUN_1480e2eba body=2519 status=ok
// SIG undefined FUN_1480e2eba(void)

void FUN_1480e2eba(char *param_1,float param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  undefined4 *local_210;
  int local_208;
  undefined8 *local_200;
  int local_1f8;
  undefined8 *local_1f0;
  int local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190;
  int local_188;
  float *local_180;
  int local_178;
  char local_170;
  byte local_16f;
  char local_16e;
  byte local_16d;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  fVar20 = (float)((ulonglong)param_3 >> 0x20);
  fVar19 = (float)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_140982196(local_148,param_1);
  local_168 = (int *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_1480e2b22(&local_240,param_1);
  FUN_144a928e2(&local_b8,local_140 + 0xf0);
  FUN_144a928e2(&local_f8,local_140 + 0x1f0);
  if (local_16f == 1) {
    local_108 = local_88;
    uStack_104 = uStack_84;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    local_118 = local_98;
    fStack_114 = fStack_94;
    fStack_110 = fStack_90;
    fStack_10c = fStack_8c;
    local_128 = local_a8;
    uStack_120 = uStack_a0;
    local_138 = local_b8;
    uStack_134 = uStack_b4;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    param_2 = 1e-08;
    FUN_144afd82e(&local_138);
    FUN_144afdc36(&local_138,&local_258);
    fVar19 = local_98;
    fVar20 = fStack_94;
    in_XMM2_Dc = fStack_90;
    in_XMM2_Dd = fStack_8c;
  }
  else {
    local_258 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_250 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_16f & 1) == 0) {
    local_268 = DAT_14c84633c._4_4_;
    uStack_264 = DAT_14c846344;
    uStack_260 = DAT_14c846348;
    uStack_25c = DAT_14c84634c;
  }
  else {
    local_108 = local_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    local_118 = local_d8;
    fStack_114 = fStack_d4;
    fStack_110 = fStack_d0;
    fStack_10c = fStack_cc;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_138 = local_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    param_2 = 1e-08;
    FUN_144afd82e(&local_138);
    FUN_144afdc36(&local_138,&local_268);
    fVar19 = local_d8;
    fVar20 = fStack_d4;
    in_XMM2_Dc = fStack_d0;
    in_XMM2_Dd = fStack_cc;
  }
  lVar6 = local_140;
  lVar11 = FUN_14479d2ce(local_140);
  if (lVar11 != 0) {
    FUN_144a74fb4();
  }
  lVar11 = FUN_14479d2ce(lVar6 + 0x50);
  lVar12 = FUN_14479d2ce(lVar6);
  if (lVar12 != 0) {
    lVar13 = FUN_144a74fb4();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
       (lVar13 = FUN_144a81888(lVar12), lVar13 != 0)) {
      FUN_1417c143e(lVar12,*(undefined4 *)(lVar6 + 0x31c),0);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    iVar14 = 0;
    if (lVar11 == 0) goto LAB_1480e3648;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 8));
    if (lVar11 == 0) {
LAB_1480e3648:
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        fVar19 = 1.0 / *(float *)(local_140 + 0x270);
        iVar14 = 0;
        do {
          uVar10 = DAT_14c84634c;
          uVar9 = DAT_14c846348;
          uVar8 = DAT_14c846344;
          fVar21 = DAT_14c846338;
          fVar18 = DAT_14c846330._4_4_;
          fVar20 = (float)DAT_14c846330;
          if (local_16f == 1) {
            *local_210 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_200 = uVar8;
            *(undefined4 *)local_1f0 = uVar9;
            *(undefined4 *)local_1e0 = uVar10;
            local_210 = local_210 + local_208;
            local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
            local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
            local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
          }
          fVar22 = fVar21;
          fVar23 = fVar18;
          fVar24 = fVar20;
          if (local_16d == 1) {
            fVar22 = (fVar21 - fVar21) + fVar21;
            fVar23 = (fVar18 - fVar18) + fVar18;
            fVar24 = (fVar20 - fVar20) + fVar20;
          }
          if (local_170 == '\x01') {
            *local_240 = fVar24;
            *local_230 = fVar23;
            *local_220 = fVar22;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          if ((local_16d & 1) != 0) {
            *local_1a0 = (fVar24 - fVar20) * fVar19;
            *local_190 = (fVar23 - fVar18) * fVar19;
            *local_180 = (fVar22 - fVar21) * fVar19;
            local_1a0 = local_1a0 + local_198;
            local_190 = local_190 + local_188;
            local_180 = local_180 + local_178;
          }
          iVar14 = iVar14 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
        } while (iVar14 < *piVar15);
      }
      goto LAB_1480e35e0;
    }
    iVar14 = *(int *)(lVar6 + 0x50 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
  }
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar3 = *(int *)(local_140 + 0x2b0);
    fVar18 = 1.0 / *(float *)(local_140 + 0x270);
    uVar4 = *(uint *)(local_140 + 700);
    lVar11 = lVar6 + 0x48;
    iVar17 = 0;
    do {
      uVar10 = DAT_14c84634c;
      uVar9 = DAT_14c846348;
      uVar8 = DAT_14c846344;
      fVar21 = DAT_14c846338;
      fVar23 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      piVar15 = local_168 + local_158;
      iVar5 = *local_168;
      if (((longlong)iVar5 < 0) || (iVar3 + iVar14 <= iVar5)) {
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar27 = (float)DAT_14c846330;
        fVar26 = DAT_14c846330._4_4_;
        fVar28 = fVar24;
        fVar29 = fVar25;
        fVar30 = DAT_14c846338;
        if (local_16d == 0) {
          fVar27 = fVar19;
          fVar26 = fVar20;
          fVar28 = in_XMM2_Dc;
          fVar29 = in_XMM2_Dd;
          fVar30 = param_2;
        }
        fVar19 = fVar27;
        fVar20 = fVar26;
        in_XMM2_Dc = fVar28;
        in_XMM2_Dd = fVar29;
        param_2 = fVar30;
        fVar26 = (float)DAT_14c846330;
        fVar28 = DAT_14c846330._4_4_;
        fVar27 = DAT_14c846338;
        if (local_16f == 1) {
          *local_210 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_200 = uVar8;
          *(undefined4 *)local_1f0 = uVar9;
          *(undefined4 *)local_1e0 = uVar10;
          fVar26 = (float)DAT_14c846330;
          fVar28 = DAT_14c846330._4_4_;
          fVar27 = DAT_14c846338;
          local_210 = local_210 + local_208;
          local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
          local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
          local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
        }
joined_r0x0001480e3359:
        if (local_16e == '\x01') {
LAB_1480e346c:
          *local_1d0 = fVar26;
          *local_1c0 = fVar28;
          *local_1b0 = fVar27;
          local_1d0 = local_1d0 + local_1c8;
          local_1c0 = local_1c0 + local_1b8;
          local_1b0 = local_1b0 + local_1a8;
        }
      }
      else {
        if (iVar14 <= iVar5) {
          lVar12 = (longlong)(iVar5 - iVar14) * 0x30;
          if (local_16d == 1) {
            lVar13 = *(longlong *)(local_140 + (ulonglong)((~uVar4 & 1) << 4) + 0x2c0);
            pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
            fVar19 = *pfVar1;
            fVar20 = pfVar1[1];
            in_XMM2_Dc = pfVar1[2];
            in_XMM2_Dd = pfVar1[3];
            param_2 = *(float *)(lVar13 + 0x18 + lVar12);
          }
          lVar13 = *(longlong *)((ulonglong)uVar4 * 0x10 + local_140 + 0x2c0);
          pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar1 = (float *)(lVar13 + 0x20 + lVar12);
          fVar26 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar21 = *(float *)(lVar13 + 0x18 + lVar12);
          if (local_16f == 1) {
            auVar2 = *(undefined1 (*) [16])(lVar13 + lVar12);
            *local_210 = auVar2._0_4_;
            uVar7 = extractps(auVar2,1);
            *local_200 = uVar7;
            uVar7 = extractps(auVar2,2);
            *local_1f0 = uVar7;
            uVar7 = extractps(auVar2,3);
            *local_1e0 = uVar7;
            local_210 = local_210 + local_208;
            local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
            local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
            local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
          }
          goto joined_r0x0001480e3359;
        }
        lVar12 = (longlong)iVar5 * 0x30;
        if (local_16d == 1) {
          lVar13 = *(longlong *)(lVar11 + ((longlong)*(int *)(lVar6 + 0x1c) ^ 1U) * 0x10);
          pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
          fVar19 = *pfVar1;
          fVar20 = pfVar1[1];
          in_XMM2_Dc = pfVar1[2];
          in_XMM2_Dd = pfVar1[3];
          param_2 = *(float *)(lVar13 + 0x18 + lVar12);
        }
        lVar13 = *(longlong *)(lVar11 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
        pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
        fVar22 = *pfVar1;
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        fVar21 = *(float *)(lVar13 + 0x18 + lVar12);
        if (local_16f == 1) {
          auVar2 = *(undefined1 (*) [16])(lVar13 + lVar12);
          *local_210 = auVar2._0_4_;
          uVar7 = extractps(auVar2,1);
          *local_200 = uVar7;
          uVar7 = extractps(auVar2,2);
          *local_1f0 = uVar7;
          uVar7 = extractps(auVar2,3);
          *local_1e0 = uVar7;
          local_210 = local_210 + local_208;
          local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
          local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
          local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
        }
        if (local_16e == '\x01') {
          lVar13 = *(longlong *)(lVar11 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
          pfVar1 = (float *)(lVar13 + 0x20 + lVar12);
          fVar26 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar27 = *(float *)(lVar13 + 0x28 + lVar12);
          goto LAB_1480e346c;
        }
      }
      if (local_16d == 1) {
        fVar21 = (fVar21 - param_2) + param_2;
        fVar22 = (fVar22 - fVar19) + fVar19;
        fVar23 = (fVar23 - fVar20) + fVar20;
        fVar24 = (fVar24 - in_XMM2_Dc) + in_XMM2_Dc;
        fVar25 = (fVar25 - in_XMM2_Dd) + in_XMM2_Dd;
      }
      if (local_170 == '\x01') {
        *local_240 = fVar22;
        auVar2._4_4_ = fVar23;
        auVar2._0_4_ = fVar22;
        auVar2._8_4_ = fVar24;
        auVar2._12_4_ = fVar25;
        uVar7 = extractps(auVar2,1);
        *(undefined8 *)local_230 = uVar7;
        *local_220 = fVar21;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      if ((local_16d & 1) != 0) {
        *local_1a0 = (fVar22 - fVar19) * fVar18;
        *local_190 = (fVar23 - fVar20) * fVar18;
        *local_180 = (fVar21 - param_2) * fVar18;
        local_1a0 = local_1a0 + local_198;
        local_190 = local_190 + local_188;
        local_180 = local_180 + local_178;
      }
      iVar17 = iVar17 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_168 = piVar15;
    } while (iVar17 < *piVar16);
  }
LAB_1480e35e0:
  if (lVar6 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e3892 FUN_1480e3892 body=202 status=ok
// SIG undefined FUN_1480e3892(void)

void FUN_1480e3892(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98a30;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e395e FUN_1480e395e body=29 status=ok
// SIG undefined FUN_1480e395e(void)

undefined8 FUN_1480e395e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e3990 FUN_1480e3990 body=93 status=ok
// SIG undefined FUN_1480e3990(void)

void FUN_1480e3990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e39ee FUN_1480e39ee body=93 status=ok
// SIG undefined FUN_1480e39ee(void)

void FUN_1480e39ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e3a4c FUN_1480e3a4c body=126 status=ok
// SIG undefined FUN_1480e3a4c(void)

void FUN_1480e3a4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98a30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e3abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e3ad2 FUN_1480e3ad2 body=19 status=ok
// SIG undefined FUN_1480e3ad2(void)

undefined1 FUN_1480e3ad2(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e3ae6(param_2);
  return 1;
}



// FUNCTION 1480e3ae6 FUN_1480e3ae6 body=2519 status=ok
// SIG undefined FUN_1480e3ae6(void)

void FUN_1480e3ae6(char *param_1,float param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  undefined4 *local_210;
  int local_208;
  undefined8 *local_200;
  int local_1f8;
  undefined8 *local_1f0;
  int local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190;
  int local_188;
  float *local_180;
  int local_178;
  char local_170;
  byte local_16f;
  char local_16e;
  byte local_16d;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  fVar20 = (float)((ulonglong)param_3 >> 0x20);
  fVar19 = (float)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_140982196(local_148,param_1);
  local_168 = (int *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_1480e2b22(&local_240,param_1);
  FUN_144a928e2(&local_b8,local_140 + 0xf0);
  FUN_144a928e2(&local_f8,local_140 + 0x1f0);
  if (local_16f == 1) {
    local_108 = local_88;
    uStack_104 = uStack_84;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    local_118 = local_98;
    fStack_114 = fStack_94;
    fStack_110 = fStack_90;
    fStack_10c = fStack_8c;
    local_128 = local_a8;
    uStack_120 = uStack_a0;
    local_138 = local_b8;
    uStack_134 = uStack_b4;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    param_2 = 1e-08;
    FUN_144afd82e(&local_138);
    FUN_144afdc36(&local_138,&local_258);
    fVar19 = local_98;
    fVar20 = fStack_94;
    in_XMM2_Dc = fStack_90;
    in_XMM2_Dd = fStack_8c;
  }
  else {
    local_258 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_250 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_16f & 1) == 0) {
    local_268 = DAT_14c84633c._4_4_;
    uStack_264 = DAT_14c846344;
    uStack_260 = DAT_14c846348;
    uStack_25c = DAT_14c84634c;
  }
  else {
    local_108 = local_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    local_118 = local_d8;
    fStack_114 = fStack_d4;
    fStack_110 = fStack_d0;
    fStack_10c = fStack_cc;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_138 = local_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    param_2 = 1e-08;
    FUN_144afd82e(&local_138);
    FUN_144afdc36(&local_138,&local_268);
    fVar19 = local_d8;
    fVar20 = fStack_d4;
    in_XMM2_Dc = fStack_d0;
    in_XMM2_Dd = fStack_cc;
  }
  lVar6 = local_140;
  lVar11 = FUN_14479d2ce(local_140);
  if (lVar11 != 0) {
    FUN_144a74fb4();
  }
  lVar11 = FUN_14479d2ce(lVar6 + 0x50);
  lVar12 = FUN_14479d2ce(lVar6);
  if (lVar12 != 0) {
    lVar13 = FUN_144a74fb4();
    if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
       (lVar13 = FUN_144a81888(lVar12), lVar13 != 0)) {
      FUN_1417c143e(lVar12,*(undefined4 *)(lVar6 + 0x31c),0);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    iVar14 = 0;
    if (lVar11 == 0) goto LAB_1480e4274;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 8));
    if (lVar11 == 0) {
LAB_1480e4274:
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        fVar19 = 1.0 / *(float *)(local_140 + 0x270);
        iVar14 = 0;
        do {
          uVar10 = DAT_14c84634c;
          uVar9 = DAT_14c846348;
          uVar8 = DAT_14c846344;
          fVar21 = DAT_14c846338;
          fVar18 = DAT_14c846330._4_4_;
          fVar20 = (float)DAT_14c846330;
          if (local_16f == 1) {
            *local_210 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_200 = uVar8;
            *(undefined4 *)local_1f0 = uVar9;
            *(undefined4 *)local_1e0 = uVar10;
            local_210 = local_210 + local_208;
            local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
            local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
            local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
          }
          fVar22 = fVar21;
          fVar23 = fVar18;
          fVar24 = fVar20;
          if (local_16d == 1) {
            fVar22 = (fVar21 - fVar21) + fVar21;
            fVar23 = (fVar18 - fVar18) + fVar18;
            fVar24 = (fVar20 - fVar20) + fVar20;
          }
          if (local_170 == '\x01') {
            *local_240 = fVar24;
            *local_230 = fVar23;
            *local_220 = fVar22;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          if ((local_16d & 1) != 0) {
            *local_1a0 = (fVar24 - fVar20) * fVar19;
            *local_190 = (fVar23 - fVar18) * fVar19;
            *local_180 = (fVar22 - fVar21) * fVar19;
            local_1a0 = local_1a0 + local_198;
            local_190 = local_190 + local_188;
            local_180 = local_180 + local_178;
          }
          iVar14 = iVar14 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
        } while (iVar14 < *piVar15);
      }
      goto LAB_1480e420c;
    }
    iVar14 = *(int *)(lVar6 + 0x50 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
  }
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar3 = *(int *)(local_140 + 0x2b0);
    fVar18 = 1.0 / *(float *)(local_140 + 0x270);
    uVar4 = *(uint *)(local_140 + 700);
    lVar11 = lVar6 + 0x48;
    iVar17 = 0;
    do {
      uVar10 = DAT_14c84634c;
      uVar9 = DAT_14c846348;
      uVar8 = DAT_14c846344;
      fVar21 = DAT_14c846338;
      fVar23 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      piVar15 = local_168 + local_158;
      iVar5 = *local_168;
      if (((longlong)iVar5 < 0) || (iVar3 + iVar14 <= iVar5)) {
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar27 = (float)DAT_14c846330;
        fVar26 = DAT_14c846330._4_4_;
        fVar28 = fVar24;
        fVar29 = fVar25;
        fVar30 = DAT_14c846338;
        if (local_16d == 0) {
          fVar27 = fVar19;
          fVar26 = fVar20;
          fVar28 = in_XMM2_Dc;
          fVar29 = in_XMM2_Dd;
          fVar30 = param_2;
        }
        fVar19 = fVar27;
        fVar20 = fVar26;
        in_XMM2_Dc = fVar28;
        in_XMM2_Dd = fVar29;
        param_2 = fVar30;
        fVar26 = (float)DAT_14c846330;
        fVar28 = DAT_14c846330._4_4_;
        fVar27 = DAT_14c846338;
        if (local_16f == 1) {
          *local_210 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_200 = uVar8;
          *(undefined4 *)local_1f0 = uVar9;
          *(undefined4 *)local_1e0 = uVar10;
          fVar26 = (float)DAT_14c846330;
          fVar28 = DAT_14c846330._4_4_;
          fVar27 = DAT_14c846338;
          local_210 = local_210 + local_208;
          local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
          local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
          local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
        }
joined_r0x0001480e3f85:
        if (local_16e == '\x01') {
LAB_1480e4098:
          *local_1d0 = fVar26;
          *local_1c0 = fVar28;
          *local_1b0 = fVar27;
          local_1d0 = local_1d0 + local_1c8;
          local_1c0 = local_1c0 + local_1b8;
          local_1b0 = local_1b0 + local_1a8;
        }
      }
      else {
        if (iVar14 <= iVar5) {
          lVar12 = (longlong)(iVar5 - iVar14) * 0x30;
          if (local_16d == 1) {
            lVar13 = *(longlong *)(local_140 + (ulonglong)((~uVar4 & 1) << 4) + 0x2c0);
            pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
            fVar19 = *pfVar1;
            fVar20 = pfVar1[1];
            in_XMM2_Dc = pfVar1[2];
            in_XMM2_Dd = pfVar1[3];
            param_2 = *(float *)(lVar13 + 0x18 + lVar12);
          }
          lVar13 = *(longlong *)((ulonglong)uVar4 * 0x10 + local_140 + 0x2c0);
          pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar1 = (float *)(lVar13 + 0x20 + lVar12);
          fVar26 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar21 = *(float *)(lVar13 + 0x18 + lVar12);
          if (local_16f == 1) {
            auVar2 = *(undefined1 (*) [16])(lVar13 + lVar12);
            *local_210 = auVar2._0_4_;
            uVar7 = extractps(auVar2,1);
            *local_200 = uVar7;
            uVar7 = extractps(auVar2,2);
            *local_1f0 = uVar7;
            uVar7 = extractps(auVar2,3);
            *local_1e0 = uVar7;
            local_210 = local_210 + local_208;
            local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
            local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
            local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
          }
          goto joined_r0x0001480e3f85;
        }
        lVar12 = (longlong)iVar5 * 0x30;
        if (local_16d == 1) {
          lVar13 = *(longlong *)(lVar11 + ((longlong)*(int *)(lVar6 + 0x1c) ^ 1U) * 0x10);
          pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
          fVar19 = *pfVar1;
          fVar20 = pfVar1[1];
          in_XMM2_Dc = pfVar1[2];
          in_XMM2_Dd = pfVar1[3];
          param_2 = *(float *)(lVar13 + 0x18 + lVar12);
        }
        lVar13 = *(longlong *)(lVar11 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
        pfVar1 = (float *)(lVar13 + 0x10 + lVar12);
        fVar22 = *pfVar1;
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar25 = pfVar1[3];
        fVar21 = *(float *)(lVar13 + 0x18 + lVar12);
        if (local_16f == 1) {
          auVar2 = *(undefined1 (*) [16])(lVar13 + lVar12);
          *local_210 = auVar2._0_4_;
          uVar7 = extractps(auVar2,1);
          *local_200 = uVar7;
          uVar7 = extractps(auVar2,2);
          *local_1f0 = uVar7;
          uVar7 = extractps(auVar2,3);
          *local_1e0 = uVar7;
          local_210 = local_210 + local_208;
          local_200 = (undefined8 *)((longlong)local_200 + (longlong)local_1f8 * 4);
          local_1f0 = (undefined8 *)((longlong)local_1f0 + (longlong)local_1e8 * 4);
          local_1e0 = (undefined8 *)((longlong)local_1e0 + (longlong)local_1d8 * 4);
        }
        if (local_16e == '\x01') {
          lVar13 = *(longlong *)(lVar11 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10);
          pfVar1 = (float *)(lVar13 + 0x20 + lVar12);
          fVar26 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar27 = *(float *)(lVar13 + 0x28 + lVar12);
          goto LAB_1480e4098;
        }
      }
      if (local_16d == 1) {
        fVar21 = (fVar21 - param_2) + param_2;
        fVar22 = (fVar22 - fVar19) + fVar19;
        fVar23 = (fVar23 - fVar20) + fVar20;
        fVar24 = (fVar24 - in_XMM2_Dc) + in_XMM2_Dc;
        fVar25 = (fVar25 - in_XMM2_Dd) + in_XMM2_Dd;
      }
      if (local_170 == '\x01') {
        *local_240 = fVar22;
        auVar2._4_4_ = fVar23;
        auVar2._0_4_ = fVar22;
        auVar2._8_4_ = fVar24;
        auVar2._12_4_ = fVar25;
        uVar7 = extractps(auVar2,1);
        *(undefined8 *)local_230 = uVar7;
        *local_220 = fVar21;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      if ((local_16d & 1) != 0) {
        *local_1a0 = (fVar22 - fVar19) * fVar18;
        *local_190 = (fVar23 - fVar20) * fVar18;
        *local_180 = (fVar21 - param_2) * fVar18;
        local_1a0 = local_1a0 + local_198;
        local_190 = local_190 + local_188;
        local_180 = local_180 + local_178;
      }
      iVar17 = iVar17 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_168 = piVar15;
    } while (iVar17 < *piVar16);
  }
LAB_1480e420c:
  if (lVar6 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 8));
  }
  if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e44be FUN_1480e44be body=202 status=ok
// SIG undefined FUN_1480e44be(void)

void FUN_1480e44be(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98aa0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e458a FUN_1480e458a body=29 status=ok
// SIG undefined FUN_1480e458a(void)

undefined8 FUN_1480e458a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e45bc FUN_1480e45bc body=93 status=ok
// SIG undefined FUN_1480e45bc(void)

void FUN_1480e45bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e461a FUN_1480e461a body=93 status=ok
// SIG undefined FUN_1480e461a(void)

void FUN_1480e461a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e4678 FUN_1480e4678 body=126 status=ok
// SIG undefined FUN_1480e4678(void)

void FUN_1480e4678(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e46e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e46fe FUN_1480e46fe body=19 status=ok
// SIG undefined FUN_1480e46fe(void)

undefined1 FUN_1480e46fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e4712(param_2);
  return 1;
}



// FUNCTION 1480e4712 FUN_1480e4712 body=4089 status=ok
// SIG undefined FUN_1480e4712(void)

void FUN_1480e4712(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  int iVar20;
  double *pdVar21;
  double *pdVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar34;
  float unaff_XMM12_Da;
  float fVar35;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_408 [36];
  int local_3e4;
  longlong local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  float local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  float *local_3a0;
  int local_398;
  float *local_390;
  int local_388;
  float *local_380;
  int local_378;
  float *local_370;
  int local_368;
  undefined8 *local_360;
  int local_358;
  undefined8 *local_350;
  int local_348;
  undefined8 *local_340;
  int local_338;
  float *local_330;
  int local_328;
  float *local_320;
  int local_318;
  float *local_310;
  int local_308;
  float *local_300;
  int local_2f8;
  float *local_2f0;
  int local_2e8;
  float *local_2e0;
  int local_2d8;
  char local_2d0;
  byte local_2cf;
  char local_2ce;
  byte local_2cd;
  int *local_2c8;
  undefined8 uStack_2c0;
  int local_2b8;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  double local_1f8 [16];
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  ulonglong local_f0;
  
  fVar33 = (float)((ulonglong)param_4 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  FUN_140982196(local_2a8,param_1);
  local_2c8 = (int *)0x0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  FUN_144a98d08(&local_2c8,param_1);
  FUN_1480e2b22(&local_3a0,param_1);
  FUN_144a928e2(&local_238,local_2a0 + 0xf0);
  FUN_144a928e2(&local_278,local_2a0 + 0x1f0);
  if (local_2cf == 1) {
    local_148 = local_208;
    fStack_144 = fStack_204;
    fStack_140 = fStack_200;
    fStack_13c = fStack_1fc;
    local_158 = local_218;
    fStack_154 = fStack_214;
    fStack_150 = fStack_210;
    fStack_14c = fStack_20c;
    local_178._0_4_ = local_238;
    local_178._4_4_ = fStack_234;
    fStack_170 = fStack_230;
    fStack_16c = fStack_22c;
    fVar33 = fStack_204;
    in_XMM3_Dc = fStack_200;
    in_XMM3_Dd = fStack_1fc;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3b8);
  }
  else {
    local_3b8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_3b0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_2cf & 1) == 0) {
    local_3c8 = DAT_14c84633c._4_4_;
    uStack_3c4 = DAT_14c846344;
    uStack_3c0 = DAT_14c846348;
    uStack_3bc = DAT_14c84634c;
  }
  else {
    local_148 = local_248;
    fStack_144 = fStack_244;
    fStack_140 = fStack_240;
    fStack_13c = fStack_23c;
    local_158 = local_258;
    fStack_154 = fStack_254;
    fStack_150 = fStack_250;
    fStack_14c = fStack_24c;
    local_178._0_4_ = local_278;
    local_178._4_4_ = fStack_274;
    fStack_170 = fStack_270;
    fStack_16c = fStack_26c;
    fVar33 = fStack_244;
    in_XMM3_Dc = fStack_240;
    in_XMM3_Dd = fStack_23c;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3c8);
  }
  lVar18 = local_2a0;
  lVar15 = FUN_14479d2ce(local_2a0);
  if (lVar15 != 0) {
    FUN_144a74fb4();
  }
  plVar16 = (longlong *)FUN_14479d2ce(lVar18 + 0x50);
  lVar15 = FUN_14479d2ce(lVar18);
  if (lVar15 != 0) {
    lVar17 = FUN_144a74fb4();
    if (((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
       (lVar17 = FUN_144a81888(lVar15), lVar17 != 0)) {
      FUN_1417c143e(lVar15,*(undefined4 *)(lVar18 + 0x31c),0);
    }
  }
  local_3e0 = *(longlong *)(lVar18 + 0x60);
  if (local_3e0 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(local_3e0 + 8));
  }
  if (plVar16 == (longlong *)0x0) {
    piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar19 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar19) {
      fVar33 = 1.0 / *(float *)(local_2a0 + 0x270);
      iVar20 = 0;
      do {
        uVar31 = DAT_14c84634c;
        uVar27 = DAT_14c846348;
        uVar25 = DAT_14c846344;
        fVar34 = (float)DAT_14c846330;
        fVar37 = DAT_14c846330._4_4_;
        fVar38 = DAT_14c846338;
        if (local_2cd == 1) {
          fVar34 = local_258 * DAT_14c846338 +
                   local_268 * DAT_14c846330._4_4_ + local_278 * (float)DAT_14c846330 + local_248;
          fVar37 = fStack_254 * DAT_14c846338 +
                   fStack_264 * DAT_14c846330._4_4_ + fStack_274 * (float)DAT_14c846330 + fStack_244
          ;
          fVar38 = fStack_250 * DAT_14c846338 +
                   fStack_260 * DAT_14c846330._4_4_ + fStack_270 * (float)DAT_14c846330 + fStack_240
          ;
        }
        fVar39 = DAT_14c846338 * local_218 +
                 DAT_14c846330._4_4_ * local_228 + (float)DAT_14c846330 * local_238 + local_208;
        fVar26 = DAT_14c846338 * fStack_214 +
                 DAT_14c846330._4_4_ * fStack_224 + (float)DAT_14c846330 * fStack_234 + fStack_204;
        fVar29 = DAT_14c846338 * fStack_210 +
                 DAT_14c846330._4_4_ * fStack_220 + (float)DAT_14c846330 * fStack_230 + fStack_200;
        if (local_2cf == 1) {
          *local_370 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_360 = uVar25;
          *(undefined4 *)local_350 = uVar27;
          *(undefined4 *)local_340 = uVar31;
          local_370 = local_370 + local_368;
          local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
          local_350 = (undefined8 *)((longlong)local_350 + (longlong)local_348 * 4);
          local_340 = (undefined8 *)((longlong)local_340 + (longlong)local_338 * 4);
        }
        if ((local_2cd & 1) != 0) {
          fVar29 = (fVar29 - fVar38) + fVar38;
          fVar26 = (fVar26 - fVar37) + fVar37;
          fVar39 = (fVar39 - fVar34) + fVar34;
        }
        if (local_2d0 == '\x01') {
          *local_3a0 = fVar39;
          *local_390 = fVar26;
          *local_380 = fVar29;
          local_3a0 = local_3a0 + local_398;
          local_390 = local_390 + local_388;
          local_380 = local_380 + local_378;
        }
        if ((local_2cd & 1) != 0) {
          *local_300 = (fVar39 - fVar34) * fVar33;
          *local_2f0 = (fVar26 - fVar37) * fVar33;
          *local_2e0 = (fVar29 - fVar38) * fVar33;
          local_300 = local_300 + local_2f8;
          local_2f0 = local_2f0 + local_2e8;
          local_2e0 = local_2e0 + local_2d8;
        }
        iVar20 = iVar20 + 1;
        piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar19 = (int *)(param_1 + 0x3c);
        }
      } while (iVar20 < *piVar19);
    }
  }
  else {
    lVar18 = (**(code **)(*plVar16 + 0x308))(plVar16);
    piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar19 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar19) {
      iVar20 = *(int *)(lVar18 + 0x28);
      iVar24 = *(int *)(local_2a0 + 0x2b0) + iVar20;
      fVar34 = 1.0 / *(float *)(local_2a0 + 0x270);
      local_3d0 = (longlong *)((ulonglong)*(uint *)(local_2a0 + 700) * 0x10 + local_2a0 + 0x2c0);
      local_3d8 = (longlong *)
                  (local_2a0 + (ulonglong)((~*(uint *)(local_2a0 + 700) & 1) << 4) + 0x2c0);
      iVar23 = 0;
      local_3e4 = iVar24;
      do {
        uVar31 = DAT_14c84634c;
        uVar27 = DAT_14c846348;
        uVar25 = DAT_14c846344;
        piVar19 = local_2c8 + local_2b8;
        iVar6 = *local_2c8;
        lVar18 = (longlong)iVar6;
        local_2c8 = piVar19;
        if ((lVar18 < 0) || (iVar24 <= iVar6)) {
          if (local_2cd == 1) {
            fVar33 = fStack_264 * DAT_14c846330._4_4_ + fStack_274 * (float)DAT_14c846330;
            in_XMM3_Dc = fStack_260 * DAT_14c846330._4_4_ + fStack_270 * (float)DAT_14c846330;
            in_XMM3_Dd = fStack_25c * DAT_14c846330._4_4_ + fStack_26c * (float)DAT_14c846330;
            unaff_XMM12_Da =
                 local_258 * DAT_14c846338 +
                 local_268 * DAT_14c846330._4_4_ + local_278 * (float)DAT_14c846330 + local_248;
            unaff_XMM12_Db = fStack_254 * DAT_14c846338 + fVar33 + fStack_244;
            unaff_XMM12_Dc = fStack_250 * DAT_14c846338 + in_XMM3_Dc + fStack_240;
            unaff_XMM12_Dd = fStack_24c * DAT_14c846338 + in_XMM3_Dd + fStack_23c;
            unaff_XMM13_Da = unaff_XMM12_Dc;
          }
          fVar37 = DAT_14c846338 * local_218 +
                   DAT_14c846330._4_4_ * local_228 + (float)DAT_14c846330 * local_238 + local_208;
          fVar38 = DAT_14c846338 * fStack_214 +
                   DAT_14c846330._4_4_ * fStack_224 + (float)DAT_14c846330 * fStack_234 + fStack_204
          ;
          fVar39 = DAT_14c846338 * fStack_210 +
                   DAT_14c846330._4_4_ * fStack_220 + (float)DAT_14c846330 * fStack_230 + fStack_200
          ;
          fVar26 = DAT_14c846338 * fStack_20c +
                   DAT_14c846330._4_4_ * fStack_21c + (float)DAT_14c846330 * fStack_22c + fStack_1fc
          ;
          if (local_2cf == 1) {
            fVar33 = 0.0;
            in_XMM3_Dc = 0.0;
            in_XMM3_Dd = 0.0;
            *local_370 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_360 = uVar25;
            *(undefined4 *)local_350 = uVar27;
            *(undefined4 *)local_340 = uVar31;
            local_370 = local_370 + local_368;
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
            local_350 = (undefined8 *)((longlong)local_350 + (longlong)local_348 * 4);
            local_340 = (undefined8 *)((longlong)local_340 + (longlong)local_338 * 4);
          }
          fVar29 = DAT_14c846330._4_4_;
          fVar36 = DAT_14c846338;
          fVar35 = (float)DAT_14c846330;
          if (local_2ce == '\x01') goto LAB_1480e5213;
        }
        else if (iVar6 < iVar20) {
          lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
          if (iVar6 < *(int *)(lVar15 + 8)) {
            (**(code **)(*plVar16 + 0x340))(plVar16,&local_178,iVar6);
            uVar25 = (undefined4)local_118;
            uVar27 = (undefined4)((ulonglong)local_118 >> 0x20);
            uVar31 = (undefined4)local_110;
            uVar32 = (undefined4)((ulonglong)local_110 >> 0x20);
            dVar5 = local_108;
          }
          else {
            lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
            lVar15 = *(longlong *)(lVar15 + 0x30);
            lVar17 = lVar18 * 0x60;
            dVar5 = *(double *)(lVar15 + 0x30 + lVar17);
            uVar7 = *(undefined8 *)(lVar15 + 0x20 + lVar17);
            uVar25 = (undefined4)uVar7;
            uVar27 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uVar7 = *(undefined8 *)(lVar15 + 0x28 + lVar17);
            uVar31 = (undefined4)uVar7;
            uVar32 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          fVar36 = (float)dVar5;
          fVar29 = (float)(double)CONCAT44(uVar32,uVar31);
          fVar26 = (float)(double)CONCAT44(uVar27,uVar25);
          fVar37 = fVar36 * local_218 + fVar29 * local_228 + fVar26 * local_238 + local_208;
          fVar38 = fVar36 * fStack_214 + fVar29 * fStack_224 + fVar26 * fStack_234 + fStack_204;
          fVar39 = fVar36 * fStack_210 + fVar29 * fStack_220 + fVar26 * fStack_230 + fStack_200;
          fVar26 = fVar36 * fStack_20c + fVar29 * fStack_21c + fVar26 * fStack_22c + fStack_1fc;
          if (local_2cd == 1) {
            lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
            if (iVar6 < *(int *)(lVar15 + 8)) {
              (**(code **)(*plVar16 + 0x340))(plVar16,&local_178,iVar6);
              uVar25 = (undefined4)local_118;
              uVar27 = (undefined4)((ulonglong)local_118 >> 0x20);
              uVar31 = (undefined4)local_110;
              uVar32 = (undefined4)((ulonglong)local_110 >> 0x20);
              dVar5 = local_108;
            }
            else {
              lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
              lVar15 = *(longlong *)(lVar15 + 0x30);
              lVar17 = lVar18 * 0x60;
              dVar5 = *(double *)(lVar15 + 0x30 + lVar17);
              uVar7 = *(undefined8 *)(lVar15 + 0x20 + lVar17);
              uVar25 = (undefined4)uVar7;
              uVar27 = (undefined4)((ulonglong)uVar7 >> 0x20);
              uVar7 = *(undefined8 *)(lVar15 + 0x28 + lVar17);
              uVar31 = (undefined4)uVar7;
              uVar32 = (undefined4)((ulonglong)uVar7 >> 0x20);
            }
            fVar35 = (float)dVar5;
            fVar36 = (float)(double)CONCAT44(uVar32,uVar31);
            fVar29 = (float)(double)CONCAT44(uVar27,uVar25);
            unaff_XMM12_Da =
                 fVar35 * local_258 + fVar36 * local_268 + fVar29 * local_278 + local_248;
            unaff_XMM12_Db =
                 fVar35 * fStack_254 + fVar36 * fStack_264 + fVar29 * fStack_274 + fStack_244;
            unaff_XMM12_Dc =
                 fVar35 * fStack_250 + fVar36 * fStack_260 + fVar29 * fStack_270 + fStack_240;
            unaff_XMM12_Dd =
                 fVar35 * fStack_24c + fVar36 * fStack_25c + fVar29 * fStack_26c + fStack_23c;
            unaff_XMM13_Da = unaff_XMM12_Dc;
          }
          if (local_2cf == 1) {
            lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
            if (iVar6 < *(int *)(lVar15 + 8)) {
              (**(code **)(*plVar16 + 0x340))(plVar16,local_1f8,iVar6);
              pdVar21 = local_1f8;
              pdVar22 = (double *)&local_178;
              for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
                *pdVar22 = *pdVar21;
                pdVar21 = pdVar21 + 1;
                pdVar22 = pdVar22 + 1;
              }
              FUN_144a1c686(&local_178);
              iVar24 = local_3e4;
              FUN_141706d54(&local_178,&local_298);
              dVar5 = local_280;
              dVar2 = local_288;
              dVar3 = local_290;
              dVar4 = local_298;
            }
            else {
              lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
              lVar15 = *(longlong *)(lVar15 + 0x30);
              lVar17 = lVar18 * 0x60;
              dVar5 = *(double *)(lVar15 + 0x18 + lVar17);
              dVar2 = *(double *)(lVar15 + 0x10 + lVar17);
              dVar3 = *(double *)(lVar15 + 8 + lVar17);
              dVar4 = *(double *)(lVar15 + lVar17);
            }
            auVar11._4_4_ = fVar33;
            auVar11._0_4_ = (float)dVar3;
            auVar11._8_4_ = in_XMM3_Dc;
            auVar11._12_4_ = in_XMM3_Dd;
            auVar30 = insertps(ZEXT416((uint)(float)dVar4),auVar11,0x10);
            auVar30 = insertps(auVar30,ZEXT416((uint)(float)dVar2),0x20);
            auVar30 = insertps(auVar30,ZEXT416((uint)(float)dVar5),0x30);
            fVar36 = auVar30._0_4_;
            fVar29 = auVar30._4_4_;
            fVar28 = auVar30._8_4_;
            fVar35 = auVar30._12_4_;
            fVar33 = local_3b8._4_4_ * fVar35 * 1.0 +
                     (float)local_3b8 * fVar28 * -1.0 + uStack_3b0._4_4_ * fVar29;
            in_XMM3_Dc = local_3b8._4_4_ * fVar36 * -1.0 +
                         (float)local_3b8 * fVar29 * 1.0 + uStack_3b0._4_4_ * fVar28;
            in_XMM3_Dd = local_3b8._4_4_ * fVar29 * -1.0 +
                         (float)local_3b8 * fVar36 * -1.0 + uStack_3b0._4_4_ * fVar35;
            fVar29 = (float)uStack_3b0 * fVar29 * -1.0 +
                     local_3b8._4_4_ * fVar28 * 1.0 +
                     (float)local_3b8 * fVar35 * 1.0 + uStack_3b0._4_4_ * fVar36;
            fVar36 = (float)uStack_3b0 * fVar36 * 1.0 + fVar33;
            fVar35 = (float)uStack_3b0 * fVar35 * 1.0 + in_XMM3_Dc;
            fVar28 = (float)uStack_3b0 * fVar28 * -1.0 + in_XMM3_Dd;
            *local_370 = fVar29;
            auVar8._4_4_ = fVar36;
            auVar8._0_4_ = fVar29;
            auVar8._8_4_ = fVar35;
            auVar8._12_4_ = fVar28;
            uVar7 = extractps(auVar8,1);
            *local_360 = uVar7;
            auVar9._4_4_ = fVar36;
            auVar9._0_4_ = fVar29;
            auVar9._8_4_ = fVar35;
            auVar9._12_4_ = fVar28;
            uVar7 = extractps(auVar9,2);
            *local_350 = uVar7;
            auVar10._4_4_ = fVar36;
            auVar10._0_4_ = fVar29;
            auVar10._8_4_ = fVar35;
            auVar10._12_4_ = fVar28;
            uVar7 = extractps(auVar10,3);
            *local_340 = uVar7;
            local_370 = local_370 + local_368;
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
            local_350 = (undefined8 *)((longlong)local_350 + (longlong)local_348 * 4);
            local_340 = (undefined8 *)((longlong)local_340 + (longlong)local_338 * 4);
          }
          if (local_2ce == '\x01') {
            lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
            if (iVar6 < *(int *)(lVar15 + 8)) {
              (**(code **)(*plVar16 + 0x340))(plVar16,&local_178,iVar6);
              iVar24 = local_3e4;
              FUN_144afda3c(&local_178,local_1f8,0xe0000000);
              uVar25 = SUB84(local_1f8[0],0);
              uVar27 = (undefined4)((ulonglong)local_1f8[0] >> 0x20);
              uVar31 = SUB84(local_1f8[1],0);
              uVar32 = (undefined4)((ulonglong)local_1f8[1] >> 0x20);
              dVar5 = local_1f8[2];
            }
            else {
              lVar15 = (**(code **)(*plVar16 + 0x310))(plVar16);
              lVar15 = *(longlong *)(lVar15 + 0x30);
              lVar18 = lVar18 * 0x60;
              dVar5 = *(double *)(lVar15 + 0x50 + lVar18);
              uVar7 = *(undefined8 *)(lVar15 + 0x40 + lVar18);
              uVar25 = (undefined4)uVar7;
              uVar27 = (undefined4)((ulonglong)uVar7 >> 0x20);
              uVar7 = *(undefined8 *)(lVar15 + 0x48 + lVar18);
              uVar31 = (undefined4)uVar7;
              uVar32 = (undefined4)((ulonglong)uVar7 >> 0x20);
            }
            fVar35 = (float)dVar5;
            fVar36 = (float)(double)CONCAT44(uVar32,uVar31);
            fVar29 = (float)(double)CONCAT44(uVar27,uVar25);
            fVar33 = fVar35 * fStack_214 + fVar36 * fStack_224 + fVar29 * fStack_234;
            in_XMM3_Dc = fVar35 * fStack_210 + fVar36 * fStack_220 + fVar29 * fStack_230;
            in_XMM3_Dd = fVar35 * fStack_20c + fVar36 * fStack_21c + fVar29 * fStack_22c;
            fVar35 = local_208 * 0.0 + fVar35 * local_218 + fVar36 * local_228 + fVar29 * local_238;
            fVar29 = fStack_204 * 0.0 + fVar33;
            fVar36 = fStack_200 * 0.0 + in_XMM3_Dc;
LAB_1480e5213:
            *local_330 = fVar35;
            *local_320 = fVar29;
            *local_310 = fVar36;
            local_330 = local_330 + local_328;
            local_320 = local_320 + local_318;
            local_310 = local_310 + local_308;
          }
        }
        else {
          lVar18 = (longlong)(iVar6 - iVar20) * 0x30;
          if (local_2cd == 1) {
            pfVar1 = (float *)(*local_3d8 + 0x10 + lVar18);
            fVar37 = *pfVar1;
            fVar38 = pfVar1[1];
            fVar39 = pfVar1[2];
            unaff_XMM12_Da =
                 fVar39 * local_258 + fVar38 * local_268 + fVar37 * local_278 + local_248;
            unaff_XMM12_Db =
                 fVar39 * fStack_254 + fVar38 * fStack_264 + fVar37 * fStack_274 + fStack_244;
            unaff_XMM12_Dc =
                 fVar39 * fStack_250 + fVar38 * fStack_260 + fVar37 * fStack_270 + fStack_240;
            unaff_XMM12_Dd =
                 fVar39 * fStack_24c + fVar38 * fStack_25c + fVar37 * fStack_26c + fStack_23c;
            unaff_XMM13_Da = unaff_XMM12_Dc;
          }
          lVar15 = *local_3d0;
          pfVar1 = (float *)(lVar15 + 0x10 + lVar18);
          fVar26 = *pfVar1;
          fVar29 = pfVar1[1];
          fVar36 = pfVar1[2];
          pfVar1 = (float *)(lVar15 + 0x20 + lVar18);
          fVar28 = *pfVar1;
          fVar13 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar37 = fVar36 * local_218 + fVar29 * local_228 + fVar26 * local_238 + local_208;
          fVar38 = fVar36 * fStack_214 + fVar29 * fStack_224 + fVar26 * fStack_234 + fStack_204;
          fVar39 = fVar36 * fStack_210 + fVar29 * fStack_220 + fVar26 * fStack_230 + fStack_200;
          fVar26 = fVar36 * fStack_20c + fVar29 * fStack_21c + fVar26 * fStack_22c + fStack_1fc;
          if (local_2cf == 1) {
            pfVar1 = (float *)(lVar15 + lVar18);
            in_XMM3_Dc = *pfVar1;
            in_XMM3_Dd = pfVar1[1];
            fVar29 = pfVar1[2];
            fVar33 = pfVar1[3];
            auVar30._0_4_ =
                 (float)uStack_3b0 * in_XMM3_Dd * -1.0 +
                 local_3b8._4_4_ * fVar29 * 1.0 +
                 (float)local_3b8 * fVar33 * 1.0 + uStack_3b0._4_4_ * in_XMM3_Dc;
            auVar30._4_4_ =
                 (float)uStack_3b0 * in_XMM3_Dc * 1.0 +
                 local_3b8._4_4_ * fVar33 * 1.0 +
                 (float)local_3b8 * fVar29 * -1.0 + uStack_3b0._4_4_ * in_XMM3_Dd;
            auVar30._8_4_ =
                 (float)uStack_3b0 * fVar33 * 1.0 +
                 local_3b8._4_4_ * in_XMM3_Dc * -1.0 +
                 (float)local_3b8 * in_XMM3_Dd * 1.0 + uStack_3b0._4_4_ * fVar29;
            auVar30._12_4_ =
                 (float)uStack_3b0 * fVar29 * -1.0 +
                 local_3b8._4_4_ * in_XMM3_Dd * -1.0 +
                 (float)local_3b8 * in_XMM3_Dc * -1.0 + uStack_3b0._4_4_ * fVar33;
            *local_370 = auVar30._0_4_;
            uVar7 = extractps(auVar30,1);
            *local_360 = uVar7;
            uVar7 = extractps(auVar30,2);
            *local_350 = uVar7;
            uVar7 = extractps(auVar30,3);
            *local_340 = uVar7;
            local_370 = local_370 + local_368;
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
            local_350 = (undefined8 *)((longlong)local_350 + (longlong)local_348 * 4);
            local_340 = (undefined8 *)((longlong)local_340 + (longlong)local_338 * 4);
          }
          if (local_2ce == '\x01') {
            fVar35 = local_208 * 0.0 + fVar14 * local_218 + fVar13 * local_228 + fVar28 * local_238;
            fVar29 = fStack_204 * 0.0 +
                     fVar14 * fStack_214 + fVar13 * fStack_224 + fVar28 * fStack_234;
            fVar36 = fStack_200 * 0.0 +
                     fVar14 * fStack_210 + fVar13 * fStack_220 + fVar28 * fStack_230;
            goto LAB_1480e5213;
          }
        }
        fVar29 = fVar39;
        if (local_2cd == 1) {
          fVar29 = (fVar39 - unaff_XMM13_Da) + unaff_XMM13_Da;
          fVar37 = (fVar37 - unaff_XMM12_Da) + unaff_XMM12_Da;
          fVar38 = (fVar38 - unaff_XMM12_Db) + unaff_XMM12_Db;
          fVar39 = (fVar39 - unaff_XMM12_Dc) + unaff_XMM12_Dc;
          fVar26 = (fVar26 - unaff_XMM12_Dd) + unaff_XMM12_Dd;
        }
        if (local_2d0 == '\x01') {
          *local_3a0 = fVar37;
          auVar12._4_4_ = fVar38;
          auVar12._0_4_ = fVar37;
          auVar12._8_4_ = fVar39;
          auVar12._12_4_ = fVar26;
          uVar7 = extractps(auVar12,1);
          *(undefined8 *)local_390 = uVar7;
          *local_380 = fVar29;
          local_3a0 = local_3a0 + local_398;
          local_390 = local_390 + local_388;
          local_380 = local_380 + local_378;
        }
        if ((local_2cd & 1) != 0) {
          *local_300 = (fVar37 - unaff_XMM12_Da) * fVar34;
          *local_2f0 = (fVar38 - unaff_XMM12_Db) * fVar34;
          *local_2e0 = (fVar29 - unaff_XMM13_Da) * fVar34;
          local_300 = local_300 + local_2f8;
          local_2f0 = local_2f0 + local_2e8;
          local_2e0 = local_2e0 + local_2d8;
        }
        iVar23 = iVar23 + 1;
        piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar19 = (int *)(param_1 + 0x3c);
        }
      } while (iVar23 < *piVar19);
    }
  }
  if (local_3e0 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_3e0 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e570c FUN_1480e570c body=202 status=ok
// SIG undefined FUN_1480e570c(void)

void FUN_1480e570c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98b10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e57d8 FUN_1480e57d8 body=29 status=ok
// SIG undefined FUN_1480e57d8(void)

undefined8 FUN_1480e57d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e580a FUN_1480e580a body=93 status=ok
// SIG undefined FUN_1480e580a(void)

void FUN_1480e580a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e5868 FUN_1480e5868 body=93 status=ok
// SIG undefined FUN_1480e5868(void)

void FUN_1480e5868(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e58c6 FUN_1480e58c6 body=126 status=ok
// SIG undefined FUN_1480e58c6(void)

void FUN_1480e58c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98b10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e5935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e594c FUN_1480e594c body=19 status=ok
// SIG undefined FUN_1480e594c(void)

undefined1 FUN_1480e594c(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e5960(param_2);
  return 1;
}



// FUNCTION 1480e5960 FUN_1480e5960 body=3380 status=ok
// SIG undefined FUN_1480e5960(void)

void FUN_1480e5960(char *param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM5_Qb;
  float fVar26;
  float unaff_XMM6_Da;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_2c8 [32];
  float local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  undefined8 *local_240;
  int local_238;
  undefined8 *local_230;
  int local_228;
  undefined8 *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  char local_1b0;
  byte local_1af;
  char local_1ae;
  byte local_1ad;
  int *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  undefined1 local_188 [8];
  longlong local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_140982196(local_188,param_1);
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  FUN_144a98d08(&local_1a8,param_1);
  FUN_1480e2b22(&local_280,param_1);
  FUN_144a928e2(&local_f8,local_180 + 0xf0);
  FUN_144a928e2(&local_138,local_180 + 0x1f0);
  if (local_1af == 1) {
    local_148 = local_c8;
    fStack_144 = fStack_c4;
    fStack_140 = fStack_c0;
    fStack_13c = fStack_bc;
    local_158 = local_d8;
    fStack_154 = fStack_d4;
    fStack_150 = fStack_d0;
    fStack_14c = fStack_cc;
    local_178 = local_f8;
    fStack_174 = fStack_f4;
    fStack_170 = fStack_f0;
    fStack_16c = fStack_ec;
    FUN_144afd82e(&local_178,0x322bcc77);
    FUN_144afdc36(&local_178,&local_298);
  }
  else {
    local_298 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_290 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_1af & 1) == 0) {
    local_2a8 = DAT_14c84633c._4_4_;
    uStack_2a4 = DAT_14c846344;
    uStack_2a0 = DAT_14c846348;
    uStack_29c = DAT_14c84634c;
  }
  else {
    local_148 = local_108;
    fStack_144 = fStack_104;
    fStack_140 = fStack_100;
    fStack_13c = fStack_fc;
    local_158 = local_118;
    fStack_154 = fStack_114;
    fStack_150 = fStack_110;
    fStack_14c = fStack_10c;
    local_178 = local_138;
    fStack_174 = fStack_134;
    fStack_170 = fStack_130;
    fStack_16c = fStack_12c;
    FUN_144afd82e(&local_178,0x322bcc77);
    FUN_144afdc36(&local_178,&local_2a8);
  }
  lVar5 = local_180;
  lVar17 = FUN_14479d2ce(local_180);
  if (lVar17 != 0) {
    FUN_144a74fb4();
  }
  lVar17 = FUN_14479d2ce(lVar5 + 0x50);
  lVar18 = FUN_14479d2ce(lVar5);
  if (lVar18 != 0) {
    lVar19 = FUN_144a74fb4();
    if (((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) &&
       (lVar19 = FUN_144a81888(lVar18), lVar19 != 0)) {
      FUN_1417c143e(lVar18,*(undefined4 *)(lVar5 + 0x31c),0);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x60);
  if (lVar5 == 0) {
    iVar20 = 0;
    if (lVar17 == 0) goto LAB_1480e63cf;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
    if (lVar17 == 0) {
LAB_1480e63cf:
      piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar21 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar21) {
        fVar24 = 1.0 / *(float *)(local_180 + 0x270);
        iVar20 = 0;
        do {
          uVar16 = DAT_14c84634c;
          uVar15 = DAT_14c846348;
          uVar14 = DAT_14c846344;
          fVar27 = (float)DAT_14c846330;
          fVar28 = DAT_14c846330._4_4_;
          fVar29 = DAT_14c846338;
          if (local_1ad == 1) {
            fVar27 = local_118 * DAT_14c846338 +
                     local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 + local_108;
            fVar28 = fStack_114 * DAT_14c846338 +
                     fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330 +
                     fStack_104;
            fVar29 = fStack_110 * DAT_14c846338 +
                     fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 +
                     fStack_100;
          }
          fVar30 = DAT_14c846338 * local_d8 +
                   DAT_14c846330._4_4_ * local_e8 + (float)DAT_14c846330 * local_f8 + local_c8;
          fVar37 = DAT_14c846338 * fStack_d4 +
                   DAT_14c846330._4_4_ * fStack_e4 + (float)DAT_14c846330 * fStack_f4 + fStack_c4;
          fVar25 = DAT_14c846338 * fStack_d0 +
                   DAT_14c846330._4_4_ * fStack_e0 + (float)DAT_14c846330 * fStack_f0 + fStack_c0;
          if (local_1af == 1) {
            *local_250 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_240 = uVar14;
            *(undefined4 *)local_230 = uVar15;
            *(undefined4 *)local_220 = uVar16;
            local_250 = local_250 + local_248;
            local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
            local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
            local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
          }
          if ((local_1ad & 1) != 0) {
            fVar25 = (fVar25 - fVar29) + fVar29;
            fVar37 = (fVar37 - fVar28) + fVar28;
            fVar30 = (fVar30 - fVar27) + fVar27;
          }
          if (local_1b0 == '\x01') {
            *local_280 = fVar30;
            *local_270 = fVar37;
            *local_260 = fVar25;
            local_280 = local_280 + local_278;
            local_270 = local_270 + local_268;
            local_260 = local_260 + local_258;
          }
          if ((local_1ad & 1) != 0) {
            *local_1e0 = (fVar30 - fVar27) * fVar24;
            *local_1d0 = (fVar37 - fVar28) * fVar24;
            *local_1c0 = (fVar25 - fVar29) * fVar24;
            local_1e0 = local_1e0 + local_1d8;
            local_1d0 = local_1d0 + local_1c8;
            local_1c0 = local_1c0 + local_1b8;
          }
          iVar20 = iVar20 + 1;
          piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar21 = (int *)(param_1 + 0x3c);
          }
        } while (iVar20 < *piVar21);
      }
      goto LAB_1480e6343;
    }
    iVar20 = *(int *)(lVar5 + 0x50 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10);
  }
  piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar21 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar21) {
    iVar2 = *(int *)(local_180 + 0x2b0);
    fVar24 = 1.0 / *(float *)(local_180 + 0x270);
    uVar3 = *(uint *)(local_180 + 700);
    lVar17 = lVar5 + 0x48;
    iVar23 = 0;
    do {
      uVar16 = DAT_14c84634c;
      uVar15 = DAT_14c846348;
      uVar14 = DAT_14c846344;
      piVar21 = local_1a8 + local_198;
      iVar4 = *local_1a8;
      if (((longlong)iVar4 < 0) || (iVar2 + iVar20 <= iVar4)) {
        if (local_1ad == 1) {
          in_XMM5_Qa = CONCAT44(fStack_114 * DAT_14c846338 +
                                fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330
                                + fStack_104,
                                local_118 * DAT_14c846338 +
                                local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 +
                                local_108);
          unaff_XMM6_Da =
               fStack_110 * DAT_14c846338 +
               fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 + fStack_100;
          in_XMM5_Qb = CONCAT44(fStack_10c * DAT_14c846338 +
                                fStack_11c * DAT_14c846330._4_4_ + fStack_12c * (float)DAT_14c846330
                                + fStack_fc,unaff_XMM6_Da);
        }
        fVar27 = DAT_14c846338 * local_d8 +
                 DAT_14c846330._4_4_ * local_e8 + (float)DAT_14c846330 * local_f8 + local_c8;
        fVar28 = DAT_14c846338 * fStack_d4 +
                 DAT_14c846330._4_4_ * fStack_e4 + (float)DAT_14c846330 * fStack_f4 + fStack_c4;
        fVar29 = DAT_14c846338 * fStack_d0 +
                 DAT_14c846330._4_4_ * fStack_e0 + (float)DAT_14c846330 * fStack_f0 + fStack_c0;
        fVar30 = DAT_14c846338 * fStack_cc +
                 DAT_14c846330._4_4_ * fStack_dc + (float)DAT_14c846330 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          *local_250 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_240 = uVar14;
          *(undefined4 *)local_230 = uVar15;
          *(undefined4 *)local_220 = uVar16;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        fVar37 = DAT_14c846330._4_4_;
        fVar25 = (float)DAT_14c846330;
        fVar38 = DAT_14c846338;
        if (local_1ae != '\x01') goto LAB_1480e622e;
LAB_1480e61cb:
        *local_210 = fVar25;
        *local_200 = fVar37;
        *local_1f0 = fVar38;
        local_210 = local_210 + local_208;
        local_200 = local_200 + local_1f8;
        local_1f0 = local_1f0 + local_1e8;
      }
      else if (iVar4 < iVar20) {
        lVar18 = (longlong)iVar4 * 0x30;
        if (local_1ad == 1) {
          pfVar1 = (float *)(*(longlong *)(lVar17 + ((longlong)*(int *)(lVar5 + 0x1c) ^ 1U) * 0x10)
                             + 0x10 + lVar18);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar29 = pfVar1[2];
          in_XMM5_Qa = CONCAT44(fVar29 * fStack_114 + fVar28 * fStack_124 + fVar27 * fStack_134 +
                                fStack_104,
                                fVar29 * local_118 + fVar28 * local_128 + fVar27 * local_138 +
                                local_108);
          unaff_XMM6_Da =
               fVar29 * fStack_110 + fVar28 * fStack_120 + fVar27 * fStack_130 + fStack_100;
          in_XMM5_Qb = CONCAT44(fVar29 * fStack_10c + fVar28 * fStack_11c + fVar27 * fStack_12c +
                                fStack_fc,unaff_XMM6_Da);
        }
        lVar19 = *(longlong *)(lVar17 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10);
        pfVar1 = (float *)(lVar19 + 0x10 + lVar18);
        fVar30 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar27 = fVar25 * local_d8 + fVar37 * local_e8 + fVar30 * local_f8 + local_c8;
        fVar28 = fVar25 * fStack_d4 + fVar37 * fStack_e4 + fVar30 * fStack_f4 + fStack_c4;
        fVar29 = fVar25 * fStack_d0 + fVar37 * fStack_e0 + fVar30 * fStack_f0 + fStack_c0;
        fVar30 = fVar25 * fStack_cc + fVar37 * fStack_dc + fVar30 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          pfVar1 = (float *)(lVar19 + lVar18);
          fVar37 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar38 = pfVar1[2];
          fVar26 = pfVar1[3];
          fVar31 = (float)uStack_290 * fVar25 * -1.0 +
                   local_298._4_4_ * fVar38 * 1.0 +
                   (float)local_298 * fVar26 * 1.0 + uStack_290._4_4_ * fVar37;
          fVar33 = (float)uStack_290 * fVar37 * 1.0 +
                   local_298._4_4_ * fVar26 * 1.0 +
                   (float)local_298 * fVar38 * -1.0 + uStack_290._4_4_ * fVar25;
          fVar35 = (float)uStack_290 * fVar26 * 1.0 +
                   local_298._4_4_ * fVar37 * -1.0 +
                   (float)local_298 * fVar25 * 1.0 + uStack_290._4_4_ * fVar38;
          fVar37 = (float)uStack_290 * fVar38 * -1.0 +
                   local_298._4_4_ * fVar25 * -1.0 +
                   (float)local_298 * fVar37 * -1.0 + uStack_290._4_4_ * fVar26;
          *local_250 = fVar31;
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar31;
          auVar8._8_4_ = fVar35;
          auVar8._12_4_ = fVar37;
          uVar6 = extractps(auVar8,1);
          *local_240 = uVar6;
          auVar9._4_4_ = fVar33;
          auVar9._0_4_ = fVar31;
          auVar9._8_4_ = fVar35;
          auVar9._12_4_ = fVar37;
          uVar6 = extractps(auVar9,2);
          *local_230 = uVar6;
          auVar10._4_4_ = fVar33;
          auVar10._0_4_ = fVar31;
          auVar10._8_4_ = fVar35;
          auVar10._12_4_ = fVar37;
          uVar6 = extractps(auVar10,3);
          *local_220 = uVar6;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        if (local_1ae == '\x01') {
          pfVar1 = (float *)(*(longlong *)(lVar17 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10) + 0x20
                            + lVar18);
          fVar38 = *pfVar1;
          fVar26 = pfVar1[1];
          fVar31 = pfVar1[2];
LAB_1480e6172:
          fVar37 = fStack_c4 * 0.0 + fVar31 * fStack_d4 + fVar26 * fStack_e4 + fVar38 * fStack_f4;
          fVar25 = local_c8 * 0.0 + fVar31 * local_d8 + fVar26 * local_e8 + fVar38 * local_f8;
          fVar38 = fStack_c0 * 0.0 + fVar31 * fStack_d0 + fVar26 * fStack_e0 + fVar38 * fStack_f0;
          goto LAB_1480e61cb;
        }
      }
      else {
        lVar18 = (longlong)(iVar4 - iVar20) * 0x30;
        if (local_1ad == 1) {
          pfVar1 = (float *)(*(longlong *)(local_180 + (ulonglong)((~uVar3 & 1) << 4) + 0x2c0) +
                             0x10 + lVar18);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar29 = pfVar1[2];
          in_XMM5_Qa = CONCAT44(fVar29 * fStack_114 + fVar28 * fStack_124 + fVar27 * fStack_134 +
                                fStack_104,
                                fVar29 * local_118 + fVar28 * local_128 + fVar27 * local_138 +
                                local_108);
          unaff_XMM6_Da =
               fVar29 * fStack_110 + fVar28 * fStack_120 + fVar27 * fStack_130 + fStack_100;
          in_XMM5_Qb = CONCAT44(fVar29 * fStack_10c + fVar28 * fStack_11c + fVar27 * fStack_12c +
                                fStack_fc,unaff_XMM6_Da);
        }
        lVar19 = *(longlong *)((ulonglong)uVar3 * 0x10 + local_180 + 0x2c0);
        pfVar1 = (float *)(lVar19 + 0x10 + lVar18);
        fVar30 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar25 = pfVar1[2];
        pfVar1 = (float *)(lVar19 + 0x20 + lVar18);
        fVar38 = *pfVar1;
        fVar26 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar27 = fVar25 * local_d8 + fVar37 * local_e8 + fVar30 * local_f8 + local_c8;
        fVar28 = fVar25 * fStack_d4 + fVar37 * fStack_e4 + fVar30 * fStack_f4 + fStack_c4;
        fVar29 = fVar25 * fStack_d0 + fVar37 * fStack_e0 + fVar30 * fStack_f0 + fStack_c0;
        fVar30 = fVar25 * fStack_cc + fVar37 * fStack_dc + fVar30 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          pfVar1 = (float *)(lVar19 + lVar18);
          fVar37 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = pfVar1[2];
          fVar35 = pfVar1[3];
          fVar32 = (float)uStack_290 * fVar25 * -1.0 +
                   local_298._4_4_ * fVar33 * 1.0 +
                   (float)local_298 * fVar35 * 1.0 + uStack_290._4_4_ * fVar37;
          fVar34 = (float)uStack_290 * fVar37 * 1.0 +
                   local_298._4_4_ * fVar35 * 1.0 +
                   (float)local_298 * fVar33 * -1.0 + uStack_290._4_4_ * fVar25;
          fVar36 = (float)uStack_290 * fVar35 * 1.0 +
                   local_298._4_4_ * fVar37 * -1.0 +
                   (float)local_298 * fVar25 * 1.0 + uStack_290._4_4_ * fVar33;
          fVar37 = (float)uStack_290 * fVar33 * -1.0 +
                   local_298._4_4_ * fVar25 * -1.0 +
                   (float)local_298 * fVar37 * -1.0 + uStack_290._4_4_ * fVar35;
          *local_250 = fVar32;
          auVar11._4_4_ = fVar34;
          auVar11._0_4_ = fVar32;
          auVar11._8_4_ = fVar36;
          auVar11._12_4_ = fVar37;
          uVar6 = extractps(auVar11,1);
          *local_240 = uVar6;
          auVar12._4_4_ = fVar34;
          auVar12._0_4_ = fVar32;
          auVar12._8_4_ = fVar36;
          auVar12._12_4_ = fVar37;
          uVar6 = extractps(auVar12,2);
          *local_230 = uVar6;
          auVar13._4_4_ = fVar34;
          auVar13._0_4_ = fVar32;
          auVar13._8_4_ = fVar36;
          auVar13._12_4_ = fVar37;
          uVar6 = extractps(auVar13,3);
          *local_220 = uVar6;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        if (local_1ae == '\x01') goto LAB_1480e6172;
      }
LAB_1480e622e:
      fVar25 = (float)in_XMM5_Qa;
      fVar38 = (float)((ulonglong)in_XMM5_Qa >> 0x20);
      fVar37 = fVar29;
      if (local_1ad == 1) {
        fVar26 = (float)((ulonglong)in_XMM5_Qb >> 0x20);
        fVar37 = (fVar29 - unaff_XMM6_Da) + unaff_XMM6_Da;
        fVar27 = (fVar27 - fVar25) + fVar25;
        fVar28 = (fVar28 - fVar38) + fVar38;
        fVar29 = (fVar29 - (float)in_XMM5_Qb) + (float)in_XMM5_Qb;
        fVar30 = (fVar30 - fVar26) + fVar26;
      }
      if (local_1b0 == '\x01') {
        *local_280 = fVar27;
        auVar7._4_4_ = fVar28;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar29;
        auVar7._12_4_ = fVar30;
        uVar6 = extractps(auVar7,1);
        *(undefined8 *)local_270 = uVar6;
        *local_260 = fVar37;
        local_280 = local_280 + local_278;
        local_270 = local_270 + local_268;
        local_260 = local_260 + local_258;
      }
      if ((local_1ad & 1) != 0) {
        *local_1e0 = (fVar27 - fVar25) * fVar24;
        *local_1d0 = (fVar28 - fVar38) * fVar24;
        *local_1c0 = (fVar37 - unaff_XMM6_Da) * fVar24;
        local_1e0 = local_1e0 + local_1d8;
        local_1d0 = local_1d0 + local_1c8;
        local_1c0 = local_1c0 + local_1b8;
      }
      iVar23 = iVar23 + 1;
      piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar22 = (int *)(param_1 + 0x3c);
      }
      local_1a8 = piVar21;
    } while (iVar23 < *piVar22);
  }
LAB_1480e6343:
  if (lVar5 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_b0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e6696 FUN_1480e6696 body=202 status=ok
// SIG undefined FUN_1480e6696(void)

void FUN_1480e6696(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98b80;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e6762 FUN_1480e6762 body=29 status=ok
// SIG undefined FUN_1480e6762(void)

undefined8 FUN_1480e6762(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e6794 FUN_1480e6794 body=93 status=ok
// SIG undefined FUN_1480e6794(void)

void FUN_1480e6794(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e67f2 FUN_1480e67f2 body=93 status=ok
// SIG undefined FUN_1480e67f2(void)

void FUN_1480e67f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e6850 FUN_1480e6850 body=126 status=ok
// SIG undefined FUN_1480e6850(void)

void FUN_1480e6850(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98b80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e68bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e68d6 FUN_1480e68d6 body=19 status=ok
// SIG undefined FUN_1480e68d6(void)

undefined1 FUN_1480e68d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e68ea(param_2);
  return 1;
}



// FUNCTION 1480e68ea FUN_1480e68ea body=3380 status=ok
// SIG undefined FUN_1480e68ea(void)

void FUN_1480e68ea(char *param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM5_Qb;
  float fVar26;
  float unaff_XMM6_Da;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_2c8 [32];
  float local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  undefined8 *local_240;
  int local_238;
  undefined8 *local_230;
  int local_228;
  undefined8 *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  char local_1b0;
  byte local_1af;
  char local_1ae;
  byte local_1ad;
  int *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  undefined1 local_188 [8];
  longlong local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_140982196(local_188,param_1);
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  FUN_144a98d08(&local_1a8,param_1);
  FUN_1480e2b22(&local_280,param_1);
  FUN_144a928e2(&local_f8,local_180 + 0xf0);
  FUN_144a928e2(&local_138,local_180 + 0x1f0);
  if (local_1af == 1) {
    local_148 = local_c8;
    fStack_144 = fStack_c4;
    fStack_140 = fStack_c0;
    fStack_13c = fStack_bc;
    local_158 = local_d8;
    fStack_154 = fStack_d4;
    fStack_150 = fStack_d0;
    fStack_14c = fStack_cc;
    local_178 = local_f8;
    fStack_174 = fStack_f4;
    fStack_170 = fStack_f0;
    fStack_16c = fStack_ec;
    FUN_144afd82e(&local_178,0x322bcc77);
    FUN_144afdc36(&local_178,&local_298);
  }
  else {
    local_298 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_290 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_1af & 1) == 0) {
    local_2a8 = DAT_14c84633c._4_4_;
    uStack_2a4 = DAT_14c846344;
    uStack_2a0 = DAT_14c846348;
    uStack_29c = DAT_14c84634c;
  }
  else {
    local_148 = local_108;
    fStack_144 = fStack_104;
    fStack_140 = fStack_100;
    fStack_13c = fStack_fc;
    local_158 = local_118;
    fStack_154 = fStack_114;
    fStack_150 = fStack_110;
    fStack_14c = fStack_10c;
    local_178 = local_138;
    fStack_174 = fStack_134;
    fStack_170 = fStack_130;
    fStack_16c = fStack_12c;
    FUN_144afd82e(&local_178,0x322bcc77);
    FUN_144afdc36(&local_178,&local_2a8);
  }
  lVar5 = local_180;
  lVar17 = FUN_14479d2ce(local_180);
  if (lVar17 != 0) {
    FUN_144a74fb4();
  }
  lVar17 = FUN_14479d2ce(lVar5 + 0x50);
  lVar18 = FUN_14479d2ce(lVar5);
  if (lVar18 != 0) {
    lVar19 = FUN_144a74fb4();
    if (((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) &&
       (lVar19 = FUN_144a81888(lVar18), lVar19 != 0)) {
      FUN_1417c143e(lVar18,*(undefined4 *)(lVar5 + 0x31c),0);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x60);
  if (lVar5 == 0) {
    iVar20 = 0;
    if (lVar17 == 0) goto LAB_1480e7359;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
    if (lVar17 == 0) {
LAB_1480e7359:
      piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar21 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar21) {
        fVar24 = 1.0 / *(float *)(local_180 + 0x270);
        iVar20 = 0;
        do {
          uVar16 = DAT_14c84634c;
          uVar15 = DAT_14c846348;
          uVar14 = DAT_14c846344;
          fVar27 = (float)DAT_14c846330;
          fVar28 = DAT_14c846330._4_4_;
          fVar29 = DAT_14c846338;
          if (local_1ad == 1) {
            fVar27 = local_118 * DAT_14c846338 +
                     local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 + local_108;
            fVar28 = fStack_114 * DAT_14c846338 +
                     fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330 +
                     fStack_104;
            fVar29 = fStack_110 * DAT_14c846338 +
                     fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 +
                     fStack_100;
          }
          fVar30 = DAT_14c846338 * local_d8 +
                   DAT_14c846330._4_4_ * local_e8 + (float)DAT_14c846330 * local_f8 + local_c8;
          fVar37 = DAT_14c846338 * fStack_d4 +
                   DAT_14c846330._4_4_ * fStack_e4 + (float)DAT_14c846330 * fStack_f4 + fStack_c4;
          fVar25 = DAT_14c846338 * fStack_d0 +
                   DAT_14c846330._4_4_ * fStack_e0 + (float)DAT_14c846330 * fStack_f0 + fStack_c0;
          if (local_1af == 1) {
            *local_250 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_240 = uVar14;
            *(undefined4 *)local_230 = uVar15;
            *(undefined4 *)local_220 = uVar16;
            local_250 = local_250 + local_248;
            local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
            local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
            local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
          }
          if ((local_1ad & 1) != 0) {
            fVar25 = (fVar25 - fVar29) + fVar29;
            fVar37 = (fVar37 - fVar28) + fVar28;
            fVar30 = (fVar30 - fVar27) + fVar27;
          }
          if (local_1b0 == '\x01') {
            *local_280 = fVar30;
            *local_270 = fVar37;
            *local_260 = fVar25;
            local_280 = local_280 + local_278;
            local_270 = local_270 + local_268;
            local_260 = local_260 + local_258;
          }
          if ((local_1ad & 1) != 0) {
            *local_1e0 = (fVar30 - fVar27) * fVar24;
            *local_1d0 = (fVar37 - fVar28) * fVar24;
            *local_1c0 = (fVar25 - fVar29) * fVar24;
            local_1e0 = local_1e0 + local_1d8;
            local_1d0 = local_1d0 + local_1c8;
            local_1c0 = local_1c0 + local_1b8;
          }
          iVar20 = iVar20 + 1;
          piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar21 = (int *)(param_1 + 0x3c);
          }
        } while (iVar20 < *piVar21);
      }
      goto LAB_1480e72cd;
    }
    iVar20 = *(int *)(lVar5 + 0x50 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10);
  }
  piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar21 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar21) {
    iVar2 = *(int *)(local_180 + 0x2b0);
    fVar24 = 1.0 / *(float *)(local_180 + 0x270);
    uVar3 = *(uint *)(local_180 + 700);
    lVar17 = lVar5 + 0x48;
    iVar23 = 0;
    do {
      uVar16 = DAT_14c84634c;
      uVar15 = DAT_14c846348;
      uVar14 = DAT_14c846344;
      piVar21 = local_1a8 + local_198;
      iVar4 = *local_1a8;
      if (((longlong)iVar4 < 0) || (iVar2 + iVar20 <= iVar4)) {
        if (local_1ad == 1) {
          in_XMM5_Qa = CONCAT44(fStack_114 * DAT_14c846338 +
                                fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330
                                + fStack_104,
                                local_118 * DAT_14c846338 +
                                local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 +
                                local_108);
          unaff_XMM6_Da =
               fStack_110 * DAT_14c846338 +
               fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 + fStack_100;
          in_XMM5_Qb = CONCAT44(fStack_10c * DAT_14c846338 +
                                fStack_11c * DAT_14c846330._4_4_ + fStack_12c * (float)DAT_14c846330
                                + fStack_fc,unaff_XMM6_Da);
        }
        fVar27 = DAT_14c846338 * local_d8 +
                 DAT_14c846330._4_4_ * local_e8 + (float)DAT_14c846330 * local_f8 + local_c8;
        fVar28 = DAT_14c846338 * fStack_d4 +
                 DAT_14c846330._4_4_ * fStack_e4 + (float)DAT_14c846330 * fStack_f4 + fStack_c4;
        fVar29 = DAT_14c846338 * fStack_d0 +
                 DAT_14c846330._4_4_ * fStack_e0 + (float)DAT_14c846330 * fStack_f0 + fStack_c0;
        fVar30 = DAT_14c846338 * fStack_cc +
                 DAT_14c846330._4_4_ * fStack_dc + (float)DAT_14c846330 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          *local_250 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_240 = uVar14;
          *(undefined4 *)local_230 = uVar15;
          *(undefined4 *)local_220 = uVar16;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        fVar37 = DAT_14c846330._4_4_;
        fVar25 = (float)DAT_14c846330;
        fVar38 = DAT_14c846338;
        if (local_1ae != '\x01') goto LAB_1480e71b8;
LAB_1480e7155:
        *local_210 = fVar25;
        *local_200 = fVar37;
        *local_1f0 = fVar38;
        local_210 = local_210 + local_208;
        local_200 = local_200 + local_1f8;
        local_1f0 = local_1f0 + local_1e8;
      }
      else if (iVar4 < iVar20) {
        lVar18 = (longlong)iVar4 * 0x30;
        if (local_1ad == 1) {
          pfVar1 = (float *)(*(longlong *)(lVar17 + ((longlong)*(int *)(lVar5 + 0x1c) ^ 1U) * 0x10)
                             + 0x10 + lVar18);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar29 = pfVar1[2];
          in_XMM5_Qa = CONCAT44(fVar29 * fStack_114 + fVar28 * fStack_124 + fVar27 * fStack_134 +
                                fStack_104,
                                fVar29 * local_118 + fVar28 * local_128 + fVar27 * local_138 +
                                local_108);
          unaff_XMM6_Da =
               fVar29 * fStack_110 + fVar28 * fStack_120 + fVar27 * fStack_130 + fStack_100;
          in_XMM5_Qb = CONCAT44(fVar29 * fStack_10c + fVar28 * fStack_11c + fVar27 * fStack_12c +
                                fStack_fc,unaff_XMM6_Da);
        }
        lVar19 = *(longlong *)(lVar17 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10);
        pfVar1 = (float *)(lVar19 + 0x10 + lVar18);
        fVar30 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar27 = fVar25 * local_d8 + fVar37 * local_e8 + fVar30 * local_f8 + local_c8;
        fVar28 = fVar25 * fStack_d4 + fVar37 * fStack_e4 + fVar30 * fStack_f4 + fStack_c4;
        fVar29 = fVar25 * fStack_d0 + fVar37 * fStack_e0 + fVar30 * fStack_f0 + fStack_c0;
        fVar30 = fVar25 * fStack_cc + fVar37 * fStack_dc + fVar30 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          pfVar1 = (float *)(lVar19 + lVar18);
          fVar37 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar38 = pfVar1[2];
          fVar26 = pfVar1[3];
          fVar31 = (float)uStack_290 * fVar25 * -1.0 +
                   local_298._4_4_ * fVar38 * 1.0 +
                   (float)local_298 * fVar26 * 1.0 + uStack_290._4_4_ * fVar37;
          fVar33 = (float)uStack_290 * fVar37 * 1.0 +
                   local_298._4_4_ * fVar26 * 1.0 +
                   (float)local_298 * fVar38 * -1.0 + uStack_290._4_4_ * fVar25;
          fVar35 = (float)uStack_290 * fVar26 * 1.0 +
                   local_298._4_4_ * fVar37 * -1.0 +
                   (float)local_298 * fVar25 * 1.0 + uStack_290._4_4_ * fVar38;
          fVar37 = (float)uStack_290 * fVar38 * -1.0 +
                   local_298._4_4_ * fVar25 * -1.0 +
                   (float)local_298 * fVar37 * -1.0 + uStack_290._4_4_ * fVar26;
          *local_250 = fVar31;
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar31;
          auVar8._8_4_ = fVar35;
          auVar8._12_4_ = fVar37;
          uVar6 = extractps(auVar8,1);
          *local_240 = uVar6;
          auVar9._4_4_ = fVar33;
          auVar9._0_4_ = fVar31;
          auVar9._8_4_ = fVar35;
          auVar9._12_4_ = fVar37;
          uVar6 = extractps(auVar9,2);
          *local_230 = uVar6;
          auVar10._4_4_ = fVar33;
          auVar10._0_4_ = fVar31;
          auVar10._8_4_ = fVar35;
          auVar10._12_4_ = fVar37;
          uVar6 = extractps(auVar10,3);
          *local_220 = uVar6;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        if (local_1ae == '\x01') {
          pfVar1 = (float *)(*(longlong *)(lVar17 + (longlong)*(int *)(lVar5 + 0x1c) * 0x10) + 0x20
                            + lVar18);
          fVar38 = *pfVar1;
          fVar26 = pfVar1[1];
          fVar31 = pfVar1[2];
LAB_1480e70fc:
          fVar37 = fStack_c4 * 0.0 + fVar31 * fStack_d4 + fVar26 * fStack_e4 + fVar38 * fStack_f4;
          fVar25 = local_c8 * 0.0 + fVar31 * local_d8 + fVar26 * local_e8 + fVar38 * local_f8;
          fVar38 = fStack_c0 * 0.0 + fVar31 * fStack_d0 + fVar26 * fStack_e0 + fVar38 * fStack_f0;
          goto LAB_1480e7155;
        }
      }
      else {
        lVar18 = (longlong)(iVar4 - iVar20) * 0x30;
        if (local_1ad == 1) {
          pfVar1 = (float *)(*(longlong *)(local_180 + (ulonglong)((~uVar3 & 1) << 4) + 0x2c0) +
                             0x10 + lVar18);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar29 = pfVar1[2];
          in_XMM5_Qa = CONCAT44(fVar29 * fStack_114 + fVar28 * fStack_124 + fVar27 * fStack_134 +
                                fStack_104,
                                fVar29 * local_118 + fVar28 * local_128 + fVar27 * local_138 +
                                local_108);
          unaff_XMM6_Da =
               fVar29 * fStack_110 + fVar28 * fStack_120 + fVar27 * fStack_130 + fStack_100;
          in_XMM5_Qb = CONCAT44(fVar29 * fStack_10c + fVar28 * fStack_11c + fVar27 * fStack_12c +
                                fStack_fc,unaff_XMM6_Da);
        }
        lVar19 = *(longlong *)((ulonglong)uVar3 * 0x10 + local_180 + 0x2c0);
        pfVar1 = (float *)(lVar19 + 0x10 + lVar18);
        fVar30 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar25 = pfVar1[2];
        pfVar1 = (float *)(lVar19 + 0x20 + lVar18);
        fVar38 = *pfVar1;
        fVar26 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar27 = fVar25 * local_d8 + fVar37 * local_e8 + fVar30 * local_f8 + local_c8;
        fVar28 = fVar25 * fStack_d4 + fVar37 * fStack_e4 + fVar30 * fStack_f4 + fStack_c4;
        fVar29 = fVar25 * fStack_d0 + fVar37 * fStack_e0 + fVar30 * fStack_f0 + fStack_c0;
        fVar30 = fVar25 * fStack_cc + fVar37 * fStack_dc + fVar30 * fStack_ec + fStack_bc;
        if (local_1af == 1) {
          pfVar1 = (float *)(lVar19 + lVar18);
          fVar37 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = pfVar1[2];
          fVar35 = pfVar1[3];
          fVar32 = (float)uStack_290 * fVar25 * -1.0 +
                   local_298._4_4_ * fVar33 * 1.0 +
                   (float)local_298 * fVar35 * 1.0 + uStack_290._4_4_ * fVar37;
          fVar34 = (float)uStack_290 * fVar37 * 1.0 +
                   local_298._4_4_ * fVar35 * 1.0 +
                   (float)local_298 * fVar33 * -1.0 + uStack_290._4_4_ * fVar25;
          fVar36 = (float)uStack_290 * fVar35 * 1.0 +
                   local_298._4_4_ * fVar37 * -1.0 +
                   (float)local_298 * fVar25 * 1.0 + uStack_290._4_4_ * fVar33;
          fVar37 = (float)uStack_290 * fVar33 * -1.0 +
                   local_298._4_4_ * fVar25 * -1.0 +
                   (float)local_298 * fVar37 * -1.0 + uStack_290._4_4_ * fVar35;
          *local_250 = fVar32;
          auVar11._4_4_ = fVar34;
          auVar11._0_4_ = fVar32;
          auVar11._8_4_ = fVar36;
          auVar11._12_4_ = fVar37;
          uVar6 = extractps(auVar11,1);
          *local_240 = uVar6;
          auVar12._4_4_ = fVar34;
          auVar12._0_4_ = fVar32;
          auVar12._8_4_ = fVar36;
          auVar12._12_4_ = fVar37;
          uVar6 = extractps(auVar12,2);
          *local_230 = uVar6;
          auVar13._4_4_ = fVar34;
          auVar13._0_4_ = fVar32;
          auVar13._8_4_ = fVar36;
          auVar13._12_4_ = fVar37;
          uVar6 = extractps(auVar13,3);
          *local_220 = uVar6;
          local_250 = local_250 + local_248;
          local_240 = (undefined8 *)((longlong)local_240 + (longlong)local_238 * 4);
          local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_228 * 4);
          local_220 = (undefined8 *)((longlong)local_220 + (longlong)local_218 * 4);
        }
        if (local_1ae == '\x01') goto LAB_1480e70fc;
      }
LAB_1480e71b8:
      fVar25 = (float)in_XMM5_Qa;
      fVar38 = (float)((ulonglong)in_XMM5_Qa >> 0x20);
      fVar37 = fVar29;
      if (local_1ad == 1) {
        fVar26 = (float)((ulonglong)in_XMM5_Qb >> 0x20);
        fVar37 = (fVar29 - unaff_XMM6_Da) + unaff_XMM6_Da;
        fVar27 = (fVar27 - fVar25) + fVar25;
        fVar28 = (fVar28 - fVar38) + fVar38;
        fVar29 = (fVar29 - (float)in_XMM5_Qb) + (float)in_XMM5_Qb;
        fVar30 = (fVar30 - fVar26) + fVar26;
      }
      if (local_1b0 == '\x01') {
        *local_280 = fVar27;
        auVar7._4_4_ = fVar28;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar29;
        auVar7._12_4_ = fVar30;
        uVar6 = extractps(auVar7,1);
        *(undefined8 *)local_270 = uVar6;
        *local_260 = fVar37;
        local_280 = local_280 + local_278;
        local_270 = local_270 + local_268;
        local_260 = local_260 + local_258;
      }
      if ((local_1ad & 1) != 0) {
        *local_1e0 = (fVar27 - fVar25) * fVar24;
        *local_1d0 = (fVar28 - fVar38) * fVar24;
        *local_1c0 = (fVar37 - unaff_XMM6_Da) * fVar24;
        local_1e0 = local_1e0 + local_1d8;
        local_1d0 = local_1d0 + local_1c8;
        local_1c0 = local_1c0 + local_1b8;
      }
      iVar23 = iVar23 + 1;
      piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar22 = (int *)(param_1 + 0x3c);
      }
      local_1a8 = piVar21;
    } while (iVar23 < *piVar22);
  }
LAB_1480e72cd:
  if (lVar5 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  if ((local_b0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e7620 FUN_1480e7620 body=202 status=ok
// SIG undefined FUN_1480e7620(void)

void FUN_1480e7620(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98bf0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e76ec FUN_1480e76ec body=29 status=ok
// SIG undefined FUN_1480e76ec(void)

undefined8 FUN_1480e76ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e771e FUN_1480e771e body=93 status=ok
// SIG undefined FUN_1480e771e(void)

void FUN_1480e771e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e777c FUN_1480e777c body=93 status=ok
// SIG undefined FUN_1480e777c(void)

void FUN_1480e777c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e77da FUN_1480e77da body=126 status=ok
// SIG undefined FUN_1480e77da(void)

void FUN_1480e77da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e7849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e7860 FUN_1480e7860 body=19 status=ok
// SIG undefined FUN_1480e7860(void)

undefined1 FUN_1480e7860(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e7874(param_2);
  return 1;
}



// FUNCTION 1480e7874 FUN_1480e7874 body=4154 status=ok
// SIG undefined FUN_1480e7874(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480e7874(char *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 auStack_448 [40];
  int local_420;
  int local_41c;
  longlong *local_418;
  int *local_410;
  longlong local_408;
  longlong *local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  float *local_3c0;
  int local_3b8;
  float *local_3b0;
  int local_3a8;
  float *local_3a0;
  int local_398;
  undefined4 *local_390;
  int local_388;
  undefined8 *local_380;
  int local_378;
  undefined8 *local_370;
  int local_368;
  undefined8 *local_360;
  int local_358;
  float *local_350;
  int local_348;
  float *local_340;
  int local_338;
  float *local_330;
  int local_328;
  float *local_320;
  int local_318;
  float *local_310;
  int local_308;
  float *local_300;
  int local_2f8;
  char local_2f0;
  byte local_2ef;
  char local_2ee;
  char local_2ed;
  float *local_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  int *local_2c8;
  undefined8 uStack_2c0;
  int local_2b8;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined8 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_118;
  double local_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_140982196(local_2a8,param_1);
  local_2b8 = 0;
  local_2c8 = (int *)0x0;
  uStack_2c0 = 0;
  FUN_144a98d08(&local_2c8,param_1);
  local_2d8 = 0;
  local_2e8 = (float *)0x0;
  uStack_2e0 = 0;
  FUN_144a98dce(&local_2e8,param_1);
  FUN_1480e2b22(&local_3c0,param_1);
  FUN_144a928e2(&local_238,local_2a0 + 0xf0);
  FUN_144a928e2(&local_278,local_2a0 + 0x1f0);
  if (local_2ef == 1) {
    local_148 = local_208;
    local_158 = local_218;
    local_168 = local_228;
    uStack_160 = uStack_220;
    local_178 = local_238;
    fStack_174 = fStack_234;
    fStack_170 = fStack_230;
    fStack_16c = fStack_22c;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3d8);
  }
  else {
    local_3d8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_3d0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_2ef & 1) == 0) {
    local_3e8 = DAT_14c84633c._4_4_;
    uStack_3e4 = DAT_14c846344;
    uStack_3e0 = DAT_14c846348;
    uStack_3dc = DAT_14c84634c;
  }
  else {
    local_148 = local_248;
    local_158 = local_258;
    local_168 = local_268;
    uStack_160 = uStack_260;
    local_178 = local_278;
    fStack_174 = fStack_274;
    fStack_170 = fStack_270;
    fStack_16c = fStack_26c;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3e8);
  }
  lVar11 = local_2a0;
  lVar8 = FUN_14479d2ce(local_2a0);
  if (lVar8 != 0) {
    FUN_144a74fb4();
  }
  plVar9 = (longlong *)FUN_14479d2ce(lVar11 + 0x50);
  lVar8 = FUN_14479d2ce(lVar11);
  if (lVar8 != 0) {
    lVar10 = FUN_144a74fb4();
    if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
          ) == lVar10 + 0x30)) && (lVar10 = FUN_144a81888(lVar8), lVar10 != 0)) {
      FUN_1417c143e(lVar8,*(undefined4 *)(lVar11 + 0x31c),0);
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0x60);
  if (lVar11 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar11 + 8));
  }
  local_408 = lVar11;
  if (plVar9 == (longlong *)0x0) {
    piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar14 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar14) {
      fVar40 = 1.0 / *(float *)(local_2a0 + 0x270);
      iVar13 = 0;
      do {
        uVar36 = DAT_14c84634c;
        uVar39 = DAT_14c846348;
        uVar37 = DAT_14c846344;
        fVar21 = DAT_14c846338;
        fVar27 = DAT_14c846330._4_4_;
        fVar24 = (float)DAT_14c846330;
        pfVar18 = local_2e8 + local_2d8;
        fVar47 = *local_2e8;
        if (local_2ef == 1) {
          *local_390 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_380 = uVar37;
          *(undefined4 *)local_370 = uVar39;
          *(undefined4 *)local_360 = uVar36;
          local_390 = local_390 + local_388;
          local_380 = (undefined8 *)((longlong)local_380 + (longlong)local_378 * 4);
          local_370 = (undefined8 *)((longlong)local_370 + (longlong)local_368 * 4);
          local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
        }
        fVar34 = (fVar21 - fVar21) * fVar47 + fVar21;
        fVar46 = (fVar27 - fVar27) * fVar47 + fVar27;
        fVar47 = (fVar24 - fVar24) * fVar47 + fVar24;
        if (local_2f0 == '\x01') {
          *local_3c0 = fVar47;
          *local_3b0 = fVar46;
          *local_3a0 = fVar34;
          local_3c0 = local_3c0 + local_3b8;
          local_3b0 = local_3b0 + local_3a8;
          local_3a0 = local_3a0 + local_398;
        }
        if (local_2ed == '\x01') {
          *local_320 = (fVar47 - fVar24) * fVar40;
          *local_310 = (fVar46 - fVar27) * fVar40;
          *local_300 = (fVar34 - fVar21) * fVar40;
          local_320 = local_320 + local_318;
          local_310 = local_310 + local_308;
          local_300 = local_300 + local_2f8;
        }
        iVar13 = iVar13 + 1;
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        local_2e8 = pfVar18;
      } while (iVar13 < *piVar14);
    }
  }
  else {
    lVar11 = (**(code **)(*plVar9 + 0x308))(plVar9);
    auVar7 = _DAT_149932320;
    piVar14 = (int *)(param_1 + 0x3c);
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = piVar14;
    }
    if (0 < *piVar12) {
      iVar13 = *(int *)(lVar11 + 0x28);
      iVar19 = *(int *)(local_2a0 + 0x2b0) + iVar13;
      fVar40 = 1.0 / *(float *)(local_2a0 + 0x270);
      plVar17 = (longlong *)(local_2a0 + (ulonglong)*(uint *)(local_2a0 + 700) * 0x10 + 0x2c0);
      local_400 = (longlong *)
                  (local_2a0 + (ulonglong)((~*(uint *)(local_2a0 + 700) & 1) << 4) + 0x2c0);
      iVar20 = 0;
      local_420 = iVar19;
      local_41c = iVar13;
      local_418 = plVar17;
      local_410 = piVar14;
      do {
        uVar36 = DAT_14c84634c;
        uVar39 = DAT_14c846348;
        uVar37 = DAT_14c846344;
        fVar24 = DAT_14c846338;
        pfVar18 = local_2e8 + local_2d8;
        fVar47 = *local_2e8;
        piVar12 = local_2c8 + local_2b8;
        iVar6 = *local_2c8;
        lVar11 = (longlong)iVar6;
        local_2e8 = pfVar18;
        local_2c8 = piVar12;
        if ((lVar11 < 0) || (iVar19 <= iVar6)) {
          uVar48 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          if (local_2ef == 1) {
            *local_390 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_380 = uVar37;
            *(undefined4 *)local_370 = uVar39;
            *(undefined4 *)local_360 = uVar36;
            local_390 = local_390 + local_388;
            local_380 = (undefined8 *)((longlong)local_380 + (longlong)local_378 * 4);
            local_370 = (undefined8 *)((longlong)local_370 + (longlong)local_368 * 4);
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
          }
          fVar21 = DAT_14c846338;
          fVar34 = (float)DAT_14c846330;
          fVar27 = fVar24;
          uVar45 = uVar48;
          fVar46 = DAT_14c846330._4_4_;
          if (local_2ee == '\x01') goto LAB_1480e7cf6;
        }
        else if (iVar6 < iVar13) {
          lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
          if (iVar6 < *(int *)(lVar8 + 8)) {
            (**(code **)(*plVar9 + 0x340))(plVar9,&local_178,iVar6);
            uVar37 = (undefined4)local_108;
            uVar39 = (undefined4)((ulonglong)local_108 >> 0x20);
            dVar4 = local_118;
            dVar35 = local_110;
          }
          else {
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            lVar8 = *(longlong *)(lVar8 + 0x30);
            lVar10 = lVar11 * 0x60;
            uVar48 = *(undefined8 *)(lVar8 + 0x30 + lVar10);
            uVar37 = (undefined4)uVar48;
            uVar39 = (undefined4)((ulonglong)uVar48 >> 0x20);
            dVar4 = *(double *)(lVar8 + 0x20 + lVar10);
            dVar35 = *(double *)(lVar8 + 0x28 + lVar10);
          }
          lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
          if (iVar6 < *(int *)(lVar8 + 8)) {
            (**(code **)(*plVar9 + 0x340))(plVar9,&local_178,iVar6);
            uVar41 = (undefined4)local_108;
            uVar42 = (undefined4)((ulonglong)local_108 >> 0x20);
            uVar36 = SUB84(local_118,0);
            uVar38 = (undefined4)((ulonglong)local_118 >> 0x20);
            uVar43 = SUB84(local_110,0);
            uVar44 = (undefined4)((ulonglong)local_110 >> 0x20);
          }
          else {
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            lVar8 = *(longlong *)(lVar8 + 0x30);
            lVar10 = lVar11 * 0x60;
            uVar48 = *(undefined8 *)(lVar8 + 0x30 + lVar10);
            uVar41 = (undefined4)uVar48;
            uVar42 = (undefined4)((ulonglong)uVar48 >> 0x20);
            uVar48 = *(undefined8 *)(lVar8 + 0x20 + lVar10);
            uVar36 = (undefined4)uVar48;
            uVar38 = (undefined4)((ulonglong)uVar48 >> 0x20);
            uVar48 = *(undefined8 *)(lVar8 + 0x28 + lVar10);
            uVar43 = (undefined4)uVar48;
            uVar44 = (undefined4)((ulonglong)uVar48 >> 0x20);
          }
          if (local_2ef == 1) {
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            if (iVar6 < *(int *)(lVar8 + 8)) {
              (**(code **)(*plVar9 + 0x340))(plVar9,&local_1f8,iVar6);
              puVar16 = &local_1f8;
              pfVar18 = &local_178;
              for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined8 *)pfVar18 = *puVar16;
                puVar16 = puVar16 + 1;
                pfVar18 = pfVar18 + 2;
              }
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              FUN_141706d54(&local_178,&local_298);
              uVar23 = (undefined4)local_280;
              uVar26 = (undefined4)((ulonglong)local_280 >> 0x20);
              dVar2 = (double)CONCAT44(uStack_294,local_298);
              dVar5 = (double)CONCAT44(uStack_28c,uStack_290);
              dVar1 = local_288;
            }
            else {
              lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
              lVar8 = *(longlong *)(lVar8 + 0x30);
              lVar10 = lVar11 * 0x60;
              uVar48 = *(undefined8 *)(lVar8 + 0x18 + lVar10);
              uVar23 = (undefined4)uVar48;
              uVar26 = (undefined4)((ulonglong)uVar48 >> 0x20);
              dVar1 = *(double *)(lVar8 + 0x10 + lVar10);
              dVar2 = *(double *)(lVar8 + lVar10);
              dVar5 = *(double *)(lVar8 + 8 + lVar10);
            }
            local_3ec = (float)(double)CONCAT44(uVar26,uVar23);
            local_3f0 = (float)dVar1;
            local_3f4 = (float)dVar5;
            local_3f8 = (float)dVar2;
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            if (iVar6 < *(int *)(lVar8 + 8)) {
              (**(code **)(*plVar9 + 0x340))(plVar9,&local_1f8,iVar6);
              puVar16 = &local_1f8;
              pfVar18 = &local_178;
              for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined8 *)pfVar18 = *puVar16;
                puVar16 = puVar16 + 1;
                pfVar18 = pfVar18 + 2;
              }
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              FUN_141706d54(&local_178,&local_298);
              uVar23 = (undefined4)local_280;
              uVar26 = (undefined4)((ulonglong)local_280 >> 0x20);
              dVar2 = (double)CONCAT44(uStack_294,local_298);
              dVar5 = (double)CONCAT44(uStack_28c,uStack_290);
              dVar1 = local_288;
            }
            else {
              lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
              lVar8 = *(longlong *)(lVar8 + 0x30);
              lVar10 = lVar11 * 0x60;
              uVar48 = *(undefined8 *)(lVar8 + 0x18 + lVar10);
              uVar23 = (undefined4)uVar48;
              uVar26 = (undefined4)((ulonglong)uVar48 >> 0x20);
              dVar1 = *(double *)(lVar8 + 0x10 + lVar10);
              dVar2 = *(double *)(lVar8 + lVar10);
              dVar5 = *(double *)(lVar8 + 8 + lVar10);
            }
            plVar17 = local_418;
            iVar13 = local_41c;
            local_1f8 = (double)CONCAT44((float)dVar5,(float)dVar2);
            uStack_1f0 = (double)CONCAT44((float)(double)CONCAT44(uVar26,uVar23),(float)dVar1);
            FUN_144afe1e6(&local_178,&local_1f8,&local_3f8);
            fVar24 = local_178 * local_178 + fStack_174 * fStack_174;
            fVar27 = fStack_170 * fStack_170 + fStack_16c * fStack_16c;
            auVar30._0_4_ = fVar27 + fVar24;
            auVar30._4_4_ = fVar27 + fVar24;
            auVar30._8_4_ = fVar24 + fVar27;
            auVar30._12_4_ = fVar24 + fVar27;
            auVar31 = sqrtps(auVar30,auVar30);
            auVar31 = divps(_DAT_1499314a0,auVar31);
            auVar33._0_4_ = auVar31._0_4_ * local_178;
            auVar33._4_4_ = auVar31._4_4_ * fStack_174;
            auVar33._8_4_ = auVar31._8_4_ * fStack_170;
            auVar33._12_4_ = auVar31._12_4_ * fStack_16c;
            auVar31._4_4_ = -(uint)(1e-08 <= auVar30._4_4_);
            auVar31._0_4_ = -(uint)(1e-08 <= auVar30._0_4_);
            auVar31._8_4_ = -(uint)(1e-08 <= auVar30._8_4_);
            auVar31._12_4_ = -(uint)(1e-08 <= auVar30._12_4_);
            auVar31 = blendvps(auVar7,auVar33,auVar31);
            *local_390 = auVar31._0_4_;
            uVar48 = extractps(auVar31,1);
            *local_380 = uVar48;
            uVar48 = extractps(auVar31,2);
            *local_370 = uVar48;
            uVar48 = extractps(auVar31,3);
            *local_360 = uVar48;
            piVar14 = local_410;
            iVar19 = local_420;
            local_390 = local_390 + local_388;
            local_380 = (undefined8 *)((longlong)local_380 + (longlong)local_378 * 4);
            local_370 = (undefined8 *)((longlong)local_370 + (longlong)local_368 * 4);
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
          }
          fVar24 = (float)(double)CONCAT44(uVar42,uVar41);
          auVar31 = insertps(ZEXT416((uint)(float)dVar4),ZEXT416((uint)(float)dVar35),0x10);
          uVar48 = auVar31._0_8_;
          auVar31 = insertps(ZEXT416((uint)(float)(double)CONCAT44(uVar38,uVar36)),
                             ZEXT416((uint)(float)(double)CONCAT44(uVar44,uVar43)),0x10);
          fVar27 = (float)(double)CONCAT44(uVar39,uVar37);
          uVar45 = auVar31._0_8_;
          if (local_2ee == '\x01') {
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            if (iVar6 < *(int *)(lVar8 + 8)) {
              (**(code **)(*plVar9 + 0x340))(plVar9,&local_178,iVar6);
              FUN_144afda3c(&local_178,&local_1f8,0x3e45798ee0000000);
              uVar36 = SUB84(local_1e8,0);
              uVar38 = (undefined4)((ulonglong)local_1e8 >> 0x20);
              uVar37 = SUB84(local_1f8,0);
              uVar39 = (undefined4)((ulonglong)local_1f8 >> 0x20);
              uVar41 = SUB84(uStack_1f0,0);
              uVar42 = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
            }
            else {
              lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
              lVar8 = *(longlong *)(lVar8 + 0x30);
              lVar10 = lVar11 * 0x60;
              uVar3 = *(undefined8 *)(lVar8 + 0x50 + lVar10);
              uVar36 = (undefined4)uVar3;
              uVar38 = (undefined4)((ulonglong)uVar3 >> 0x20);
              uVar3 = *(undefined8 *)(lVar8 + 0x40 + lVar10);
              uVar37 = (undefined4)uVar3;
              uVar39 = (undefined4)((ulonglong)uVar3 >> 0x20);
              uVar3 = *(undefined8 *)(lVar8 + 0x48 + lVar10);
              uVar41 = (undefined4)uVar3;
              uVar42 = (undefined4)((ulonglong)uVar3 >> 0x20);
            }
            lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
            if (iVar6 < *(int *)(lVar8 + 8)) {
              (**(code **)(*plVar9 + 0x340))(plVar9,&local_178,iVar6);
              FUN_144afda3c(&local_178,&local_1f8,0x3e45798ee0000000);
              dVar35 = uStack_1f0;
              dVar5 = local_1f8;
              dVar4 = local_1e8;
            }
            else {
              lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
              lVar8 = *(longlong *)(lVar8 + 0x30);
              lVar11 = lVar11 * 0x60;
              dVar4 = *(double *)(lVar8 + 0x50 + lVar11);
              dVar5 = *(double *)(lVar8 + 0x40 + lVar11);
              dVar35 = *(double *)(lVar8 + 0x48 + lVar11);
            }
            fVar21 = ((float)(double)CONCAT44(uVar38,uVar36) - (float)dVar4) * fVar47 + (float)dVar4
            ;
            fVar34 = ((float)(double)CONCAT44(uVar39,uVar37) - (float)dVar5) * fVar47 + (float)dVar5
            ;
            iVar19 = local_420;
            fVar46 = ((float)(double)CONCAT44(uVar42,uVar41) - (float)dVar35) * fVar47 +
                     (float)dVar35;
LAB_1480e7cf6:
            *local_350 = fVar34;
            *local_340 = fVar46;
            *local_330 = fVar21;
            local_350 = local_350 + local_348;
            local_340 = local_340 + local_338;
            local_330 = local_330 + local_328;
          }
        }
        else {
          lVar11 = *plVar17;
          lVar10 = (longlong)(iVar6 - iVar13) * 0x30;
          uVar48 = *(undefined8 *)(lVar11 + 0x10 + lVar10);
          pfVar18 = (float *)(lVar11 + 0x20 + lVar10);
          fVar34 = *pfVar18;
          fVar46 = pfVar18[1];
          fVar21 = pfVar18[2];
          lVar8 = *local_400;
          uVar45 = *(undefined8 *)(lVar8 + 0x10 + lVar10);
          auVar31 = *(undefined1 (*) [16])(lVar8 + 0x20 + lVar10);
          fVar27 = *(float *)(lVar11 + 0x18 + lVar10);
          fVar24 = *(float *)(lVar8 + 0x18 + lVar10);
          if (local_2ef == 1) {
            puVar15 = (undefined4 *)(lVar8 + lVar10);
            local_298 = *puVar15;
            uStack_294 = puVar15[1];
            uStack_290 = puVar15[2];
            uStack_28c = puVar15[3];
            local_1f8 = *(double *)(lVar11 + lVar10);
            uStack_1f0 = ((double *)(lVar11 + lVar10))[1];
            FUN_144afe1e6(&local_178,&local_298,&local_1f8);
            fVar22 = local_178 * local_178 + fStack_174 * fStack_174;
            fVar25 = fStack_170 * fStack_170 + fStack_16c * fStack_16c;
            auVar28._0_4_ = fVar25 + fVar22;
            auVar28._4_4_ = fVar25 + fVar22;
            auVar28._8_4_ = fVar22 + fVar25;
            auVar28._12_4_ = fVar22 + fVar25;
            auVar29 = sqrtps(auVar28,auVar28);
            auVar29 = divps(_DAT_1499314a0,auVar29);
            auVar32._0_4_ = auVar29._0_4_ * local_178;
            auVar32._4_4_ = auVar29._4_4_ * fStack_174;
            auVar32._8_4_ = auVar29._8_4_ * fStack_170;
            auVar32._12_4_ = auVar29._12_4_ * fStack_16c;
            auVar29._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
            auVar29._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
            auVar29._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
            auVar29._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
            auVar29 = blendvps(auVar7,auVar32,auVar29);
            *local_390 = auVar29._0_4_;
            uVar3 = extractps(auVar29,1);
            *local_380 = uVar3;
            uVar3 = extractps(auVar29,2);
            *local_370 = uVar3;
            uVar3 = extractps(auVar29,3);
            *local_360 = uVar3;
            local_390 = local_390 + local_388;
            local_380 = (undefined8 *)((longlong)local_380 + (longlong)local_378 * 4);
            local_370 = (undefined8 *)((longlong)local_370 + (longlong)local_368 * 4);
            local_360 = (undefined8 *)((longlong)local_360 + (longlong)local_358 * 4);
          }
          if (local_2ee == '\x01') {
            fVar21 = (fVar21 - auVar31._8_4_) * fVar47 + auVar31._8_4_;
            fVar34 = (fVar34 - auVar31._0_4_) * fVar47 + auVar31._0_4_;
            fVar46 = (fVar46 - auVar31._4_4_) * fVar47 + auVar31._4_4_;
            goto LAB_1480e7cf6;
          }
        }
        fVar34 = (float)((ulonglong)uVar45 >> 0x20);
        fVar21 = (float)uVar45;
        fVar46 = (fVar27 - fVar24) * fVar47 + fVar24;
        fVar27 = ((float)((ulonglong)uVar48 >> 0x20) - fVar34) * fVar47 + fVar34;
        fVar47 = ((float)uVar48 - fVar21) * fVar47 + fVar21;
        if (local_2f0 == '\x01') {
          *local_3c0 = fVar47;
          *local_3b0 = fVar27;
          *local_3a0 = fVar46;
          local_3c0 = local_3c0 + local_3b8;
          local_3b0 = local_3b0 + local_3a8;
          local_3a0 = local_3a0 + local_398;
        }
        if (local_2ed == '\x01') {
          *local_320 = (fVar47 - fVar21) * fVar40;
          *local_310 = (fVar27 - fVar34) * fVar40;
          *local_300 = (fVar46 - fVar24) * fVar40;
          local_320 = local_320 + local_318;
          local_310 = local_310 + local_308;
          local_300 = local_300 + local_2f8;
        }
        iVar20 = iVar20 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = piVar14;
        }
      } while (iVar20 < *piVar12);
    }
  }
  if (local_408 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_408 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e88b0 FUN_1480e88b0 body=202 status=ok
// SIG undefined FUN_1480e88b0(void)

void FUN_1480e88b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98c60;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e897c FUN_1480e897c body=29 status=ok
// SIG undefined FUN_1480e897c(void)

undefined8 FUN_1480e897c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e89ae FUN_1480e89ae body=93 status=ok
// SIG undefined FUN_1480e89ae(void)

void FUN_1480e89ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e8a0c FUN_1480e8a0c body=93 status=ok
// SIG undefined FUN_1480e8a0c(void)

void FUN_1480e8a0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e8a6a FUN_1480e8a6a body=126 status=ok
// SIG undefined FUN_1480e8a6a(void)

void FUN_1480e8a6a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98c60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e8ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e8af0 FUN_1480e8af0 body=19 status=ok
// SIG undefined FUN_1480e8af0(void)

undefined1 FUN_1480e8af0(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e8b04(param_2);
  return 1;
}



// FUNCTION 1480e8b04 FUN_1480e8b04 body=3140 status=ok
// SIG undefined FUN_1480e8b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480e8b04(char *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  float *local_2e0;
  int local_2d8;
  float *local_2d0;
  int local_2c8;
  float *local_2c0;
  int local_2b8;
  undefined4 *local_2b0;
  int local_2a8;
  undefined8 *local_2a0;
  int local_298;
  undefined8 *local_290;
  int local_288;
  undefined8 *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  char local_210;
  byte local_20f;
  char local_20e;
  char local_20d;
  float *local_208;
  undefined8 uStack_200;
  int local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_140982196(local_1c8,param_1);
  local_1d8 = 0;
  local_1e8 = (int *)0x0;
  uStack_1e0 = 0;
  FUN_144a98d08(&local_1e8,param_1);
  local_1f8 = 0;
  local_208 = (float *)0x0;
  uStack_200 = 0;
  FUN_144a98dce(&local_208,param_1);
  FUN_1480e2b22(&local_2e0,param_1);
  FUN_144a928e2(&local_138,local_1c0 + 0xf0);
  FUN_144a928e2(&local_178,local_1c0 + 0x1f0);
  if (local_20f == 1) {
    local_188 = local_108;
    local_198 = local_118;
    local_1a8 = local_128;
    uStack_1a0 = uStack_120;
    local_1b8 = local_138;
    fStack_1b4 = fStack_134;
    fStack_1b0 = fStack_130;
    fStack_1ac = fStack_12c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_2f8);
  }
  else {
    local_2f8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_2f0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_20f & 1) == 0) {
    local_308 = DAT_14c84633c._4_4_;
    uStack_304 = DAT_14c846344;
    uStack_300 = DAT_14c846348;
    uStack_2fc = DAT_14c84634c;
  }
  else {
    local_188 = local_148;
    local_198 = local_158;
    local_1a8 = local_168;
    uStack_1a0 = uStack_160;
    local_1b8 = local_178;
    fStack_1b4 = fStack_174;
    fStack_1b0 = fStack_170;
    fStack_1ac = fStack_16c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_308);
  }
  lVar4 = local_1c0;
  lVar12 = FUN_14479d2ce(local_1c0);
  if (lVar12 != 0) {
    FUN_144a74fb4();
  }
  lVar12 = FUN_14479d2ce(lVar4 + 0x50);
  lVar13 = FUN_14479d2ce(lVar4);
  if (lVar13 != 0) {
    lVar14 = FUN_144a74fb4();
    if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
       (lVar14 = FUN_144a81888(lVar13), lVar14 != 0)) {
      FUN_1417c143e(lVar13,*(undefined4 *)(lVar4 + 0x31c),0);
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x60);
  if (lVar4 == 0) {
    iVar16 = 0;
    if (lVar12 == 0) goto LAB_1480e943a;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 8));
    if (lVar12 == 0) {
LAB_1480e943a:
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        fVar32 = 1.0 / *(float *)(local_1c0 + 0x270);
        iVar16 = 0;
        do {
          uVar11 = DAT_14c84634c;
          uVar10 = DAT_14c846348;
          uVar9 = DAT_14c846344;
          fVar34 = DAT_14c846338;
          fVar33 = DAT_14c846330._4_4_;
          fVar35 = (float)DAT_14c846330;
          pfVar1 = local_208 + local_1f8;
          fVar36 = *local_208;
          if (local_20f == 1) {
            *local_2b0 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_2a0 = uVar9;
            *(undefined4 *)local_290 = uVar10;
            *(undefined4 *)local_280 = uVar11;
            local_2b0 = local_2b0 + local_2a8;
            local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
            local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
            local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
          }
          fVar20 = (fVar34 - fVar34) * fVar36 + fVar34;
          fVar31 = (fVar33 - fVar33) * fVar36 + fVar33;
          fVar36 = (fVar35 - fVar35) * fVar36 + fVar35;
          if (local_210 == '\x01') {
            *local_2e0 = fVar36;
            *local_2d0 = fVar31;
            *local_2c0 = fVar20;
            local_2e0 = local_2e0 + local_2d8;
            local_2d0 = local_2d0 + local_2c8;
            local_2c0 = local_2c0 + local_2b8;
          }
          if (local_20d == '\x01') {
            *local_240 = (fVar36 - fVar35) * fVar32;
            *local_230 = (fVar31 - fVar33) * fVar32;
            *local_220 = (fVar20 - fVar34) * fVar32;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          iVar16 = iVar16 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_208 = pfVar1;
        } while (iVar16 < *piVar15);
      }
      goto LAB_1480e968a;
    }
    iVar2 = *(int *)(lVar4 + 0x50 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10);
    iVar16 = *(int *)(lVar4 + 0x50 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
    if (iVar2 < iVar16) {
      iVar16 = iVar2;
    }
  }
  auVar8 = _DAT_149932320;
  auVar7 = _DAT_1499314a0;
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar2 = *(int *)(local_1c0 + 0x2b0);
    fVar32 = 1.0 / *(float *)(local_1c0 + 0x270);
    local_330 = (longlong *)((ulonglong)*(uint *)(local_1c0 + 700) * 0x10 + local_1c0 + 0x2c0);
    local_338 = (longlong *)
                (local_1c0 + (ulonglong)((~*(uint *)(local_1c0 + 700) & 1) << 4) + 0x2c0);
    lVar12 = lVar4 + 0x48;
    iVar17 = 0;
    do {
      uVar11 = DAT_14c84634c;
      uVar10 = DAT_14c846348;
      uVar9 = DAT_14c846344;
      fVar35 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar33 = (float)DAT_14c846330;
      pfVar1 = local_208 + local_1f8;
      fVar36 = *local_208;
      piVar15 = local_1e8 + local_1d8;
      iVar3 = *local_1e8;
      local_208 = pfVar1;
      local_1e8 = piVar15;
      if (((longlong)iVar3 < 0) || (iVar2 + iVar16 <= iVar3)) {
        if (local_20f == 1) {
          *local_2b0 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_2a0 = uVar9;
          *(undefined4 *)local_290 = uVar10;
          *(undefined4 *)local_280 = uVar11;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        fVar19 = DAT_14c846338;
        fVar20 = fVar35;
        fVar31 = fVar33;
        fVar37 = fVar34;
        fVar22 = (float)DAT_14c846330;
        fVar24 = DAT_14c846330._4_4_;
        if (local_20e == '\x01') goto LAB_1480e90f4;
      }
      else if (iVar3 < iVar16) {
        lVar13 = *(longlong *)(lVar12 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10);
        lVar6 = (longlong)iVar3 * 0x30;
        pfVar1 = (float *)(lVar13 + 0x10 + lVar6);
        fVar31 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar20 = *(float *)(lVar13 + 0x18 + lVar6);
        lVar14 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
        pfVar1 = (float *)(lVar14 + 0x10 + lVar6);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        fVar35 = *(float *)(lVar14 + 0x18 + lVar6);
        if (local_20f != 0) {
          local_318 = *(undefined8 *)(lVar13 + lVar6);
          uStack_310 = ((undefined8 *)(lVar13 + lVar6))[1];
          puVar18 = (undefined4 *)(lVar14 + lVar6);
          local_328 = *puVar18;
          uStack_324 = puVar18[1];
          uStack_320 = puVar18[2];
          uStack_31c = puVar18[3];
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar19 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar22 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar25._0_4_ = fVar22 + fVar19;
          auVar25._4_4_ = fVar22 + fVar19;
          auVar25._8_4_ = fVar19 + fVar22;
          auVar25._12_4_ = fVar19 + fVar22;
          auVar26 = sqrtps(auVar25,auVar25);
          auVar26 = divps(auVar7,auVar26);
          auVar29._0_4_ = auVar26._0_4_ * local_1b8;
          auVar29._4_4_ = auVar26._4_4_ * fStack_1b4;
          auVar29._8_4_ = auVar26._8_4_ * fStack_1b0;
          auVar29._12_4_ = auVar26._12_4_ * fStack_1ac;
          auVar26._4_4_ = -(uint)(1e-08 <= auVar25._4_4_);
          auVar26._0_4_ = -(uint)(1e-08 <= auVar25._0_4_);
          auVar26._8_4_ = -(uint)(1e-08 <= auVar25._8_4_);
          auVar26._12_4_ = -(uint)(1e-08 <= auVar25._12_4_);
          auVar26 = blendvps(auVar8,auVar29,auVar26);
          *local_2b0 = auVar26._0_4_;
          uVar5 = extractps(auVar26,1);
          *local_2a0 = uVar5;
          uVar5 = extractps(auVar26,2);
          *local_290 = uVar5;
          uVar5 = extractps(auVar26,3);
          *local_280 = uVar5;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        if (local_20e == '\x01') {
          pfVar1 = (float *)(*(longlong *)(lVar12 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10) + 0x20
                            + lVar6);
          lVar13 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
          auVar26 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar6);
          fVar19 = (pfVar1[2] - auVar26._8_4_) * fVar36 + *(float *)(lVar13 + 0x28 + lVar6);
          fVar22 = (*pfVar1 - auVar26._0_4_) * fVar36 + auVar26._0_4_;
          fVar24 = (pfVar1[1] - auVar26._4_4_) * fVar36 + auVar26._4_4_;
LAB_1480e90f4:
          *local_270 = fVar22;
          *local_260 = fVar24;
          *local_250 = fVar19;
          local_270 = local_270 + local_268;
          local_260 = local_260 + local_258;
          local_250 = local_250 + local_248;
        }
      }
      else {
        lVar13 = *local_330;
        lVar6 = (longlong)(iVar3 - iVar16) * 0x30;
        pfVar1 = (float *)(lVar13 + 0x10 + lVar6);
        fVar31 = *pfVar1;
        fVar37 = pfVar1[1];
        pfVar1 = (float *)(lVar13 + 0x20 + lVar6);
        fVar22 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar19 = pfVar1[2];
        lVar14 = *local_338;
        pfVar1 = (float *)(lVar14 + 0x10 + lVar6);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        auVar26 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar6);
        fVar20 = *(float *)(lVar13 + 0x18 + lVar6);
        fVar35 = *(float *)(lVar14 + 0x18 + lVar6);
        if (local_20f != 0) {
          puVar18 = (undefined4 *)(lVar14 + lVar6);
          local_328 = *puVar18;
          uStack_324 = puVar18[1];
          uStack_320 = puVar18[2];
          uStack_31c = puVar18[3];
          local_318 = *(undefined8 *)(lVar13 + lVar6);
          uStack_310 = ((undefined8 *)(lVar13 + lVar6))[1];
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar21 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar23 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar27._0_4_ = fVar23 + fVar21;
          auVar27._4_4_ = fVar23 + fVar21;
          auVar27._8_4_ = fVar21 + fVar23;
          auVar27._12_4_ = fVar21 + fVar23;
          auVar28 = sqrtps(auVar27,auVar27);
          auVar28 = divps(auVar7,auVar28);
          auVar30._0_4_ = auVar28._0_4_ * local_1b8;
          auVar30._4_4_ = auVar28._4_4_ * fStack_1b4;
          auVar30._8_4_ = auVar28._8_4_ * fStack_1b0;
          auVar30._12_4_ = auVar28._12_4_ * fStack_1ac;
          auVar28._4_4_ = -(uint)(1e-08 <= auVar27._4_4_);
          auVar28._0_4_ = -(uint)(1e-08 <= auVar27._0_4_);
          auVar28._8_4_ = -(uint)(1e-08 <= auVar27._8_4_);
          auVar28._12_4_ = -(uint)(1e-08 <= auVar27._12_4_);
          auVar28 = blendvps(auVar8,auVar30,auVar28);
          *local_2b0 = auVar28._0_4_;
          uVar5 = extractps(auVar28,1);
          *local_2a0 = uVar5;
          uVar5 = extractps(auVar28,2);
          *local_290 = uVar5;
          uVar5 = extractps(auVar28,3);
          *local_280 = uVar5;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        if (local_20e == '\x01') {
          fVar19 = (fVar19 - auVar26._8_4_) * fVar36 + auVar26._8_4_;
          fVar22 = (fVar22 - auVar26._0_4_) * fVar36 + auVar26._0_4_;
          fVar24 = (fVar24 - auVar26._4_4_) * fVar36 + auVar26._4_4_;
          goto LAB_1480e90f4;
        }
      }
      fVar19 = (fVar20 - fVar35) * fVar36 + fVar35;
      fVar20 = (fVar37 - fVar34) * fVar36 + fVar34;
      fVar36 = (fVar31 - fVar33) * fVar36 + fVar33;
      if (local_210 == '\x01') {
        *local_2e0 = fVar36;
        *local_2d0 = fVar20;
        *local_2c0 = fVar19;
        local_2e0 = local_2e0 + local_2d8;
        local_2d0 = local_2d0 + local_2c8;
        local_2c0 = local_2c0 + local_2b8;
      }
      if (local_20d == '\x01') {
        *local_240 = (fVar36 - fVar33) * fVar32;
        *local_230 = (fVar20 - fVar34) * fVar32;
        *local_220 = (fVar19 - fVar35) * fVar32;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      iVar17 = iVar17 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
    } while (iVar17 < *piVar15);
  }
LAB_1480e968a:
  if (lVar4 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480e974a FUN_1480e974a body=202 status=ok
// SIG undefined FUN_1480e974a(void)

void FUN_1480e974a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98cd0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e9816 FUN_1480e9816 body=29 status=ok
// SIG undefined FUN_1480e9816(void)

undefined8 FUN_1480e9816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480e9848 FUN_1480e9848 body=93 status=ok
// SIG undefined FUN_1480e9848(void)

void FUN_1480e9848(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e98a6 FUN_1480e98a6 body=93 status=ok
// SIG undefined FUN_1480e98a6(void)

void FUN_1480e98a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480e9904 FUN_1480e9904 body=126 status=ok
// SIG undefined FUN_1480e9904(void)

void FUN_1480e9904(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98cd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480e9973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480e998a FUN_1480e998a body=19 status=ok
// SIG undefined FUN_1480e998a(void)

undefined1 FUN_1480e998a(undefined8 param_1,undefined8 param_2)

{
  FUN_1480e999e(param_2);
  return 1;
}



// FUNCTION 1480e999e FUN_1480e999e body=3140 status=ok
// SIG undefined FUN_1480e999e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480e999e(char *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  float *local_2e0;
  int local_2d8;
  float *local_2d0;
  int local_2c8;
  float *local_2c0;
  int local_2b8;
  undefined4 *local_2b0;
  int local_2a8;
  undefined8 *local_2a0;
  int local_298;
  undefined8 *local_290;
  int local_288;
  undefined8 *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  char local_210;
  byte local_20f;
  char local_20e;
  char local_20d;
  float *local_208;
  undefined8 uStack_200;
  int local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_140982196(local_1c8,param_1);
  local_1d8 = 0;
  local_1e8 = (int *)0x0;
  uStack_1e0 = 0;
  FUN_144a98d08(&local_1e8,param_1);
  local_1f8 = 0;
  local_208 = (float *)0x0;
  uStack_200 = 0;
  FUN_144a98dce(&local_208,param_1);
  FUN_1480e2b22(&local_2e0,param_1);
  FUN_144a928e2(&local_138,local_1c0 + 0xf0);
  FUN_144a928e2(&local_178,local_1c0 + 0x1f0);
  if (local_20f == 1) {
    local_188 = local_108;
    local_198 = local_118;
    local_1a8 = local_128;
    uStack_1a0 = uStack_120;
    local_1b8 = local_138;
    fStack_1b4 = fStack_134;
    fStack_1b0 = fStack_130;
    fStack_1ac = fStack_12c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_2f8);
  }
  else {
    local_2f8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_2f0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_20f & 1) == 0) {
    local_308 = DAT_14c84633c._4_4_;
    uStack_304 = DAT_14c846344;
    uStack_300 = DAT_14c846348;
    uStack_2fc = DAT_14c84634c;
  }
  else {
    local_188 = local_148;
    local_198 = local_158;
    local_1a8 = local_168;
    uStack_1a0 = uStack_160;
    local_1b8 = local_178;
    fStack_1b4 = fStack_174;
    fStack_1b0 = fStack_170;
    fStack_1ac = fStack_16c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_308);
  }
  lVar4 = local_1c0;
  lVar12 = FUN_14479d2ce(local_1c0);
  if (lVar12 != 0) {
    FUN_144a74fb4();
  }
  lVar12 = FUN_14479d2ce(lVar4 + 0x50);
  lVar13 = FUN_14479d2ce(lVar4);
  if (lVar13 != 0) {
    lVar14 = FUN_144a74fb4();
    if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
       (lVar14 = FUN_144a81888(lVar13), lVar14 != 0)) {
      FUN_1417c143e(lVar13,*(undefined4 *)(lVar4 + 0x31c),0);
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x60);
  if (lVar4 == 0) {
    iVar16 = 0;
    if (lVar12 == 0) goto LAB_1480ea2d4;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 8));
    if (lVar12 == 0) {
LAB_1480ea2d4:
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        fVar32 = 1.0 / *(float *)(local_1c0 + 0x270);
        iVar16 = 0;
        do {
          uVar11 = DAT_14c84634c;
          uVar10 = DAT_14c846348;
          uVar9 = DAT_14c846344;
          fVar34 = DAT_14c846338;
          fVar33 = DAT_14c846330._4_4_;
          fVar35 = (float)DAT_14c846330;
          pfVar1 = local_208 + local_1f8;
          fVar36 = *local_208;
          if (local_20f == 1) {
            *local_2b0 = DAT_14c84633c._4_4_;
            *(undefined4 *)local_2a0 = uVar9;
            *(undefined4 *)local_290 = uVar10;
            *(undefined4 *)local_280 = uVar11;
            local_2b0 = local_2b0 + local_2a8;
            local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
            local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
            local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
          }
          fVar20 = (fVar34 - fVar34) * fVar36 + fVar34;
          fVar31 = (fVar33 - fVar33) * fVar36 + fVar33;
          fVar36 = (fVar35 - fVar35) * fVar36 + fVar35;
          if (local_210 == '\x01') {
            *local_2e0 = fVar36;
            *local_2d0 = fVar31;
            *local_2c0 = fVar20;
            local_2e0 = local_2e0 + local_2d8;
            local_2d0 = local_2d0 + local_2c8;
            local_2c0 = local_2c0 + local_2b8;
          }
          if (local_20d == '\x01') {
            *local_240 = (fVar36 - fVar35) * fVar32;
            *local_230 = (fVar31 - fVar33) * fVar32;
            *local_220 = (fVar20 - fVar34) * fVar32;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          iVar16 = iVar16 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_208 = pfVar1;
        } while (iVar16 < *piVar15);
      }
      goto LAB_1480ea524;
    }
    iVar2 = *(int *)(lVar4 + 0x50 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10);
    iVar16 = *(int *)(lVar4 + 0x50 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
    if (iVar2 < iVar16) {
      iVar16 = iVar2;
    }
  }
  auVar8 = _DAT_149932320;
  auVar7 = _DAT_1499314a0;
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar2 = *(int *)(local_1c0 + 0x2b0);
    fVar32 = 1.0 / *(float *)(local_1c0 + 0x270);
    local_330 = (longlong *)((ulonglong)*(uint *)(local_1c0 + 700) * 0x10 + local_1c0 + 0x2c0);
    local_338 = (longlong *)
                (local_1c0 + (ulonglong)((~*(uint *)(local_1c0 + 700) & 1) << 4) + 0x2c0);
    lVar12 = lVar4 + 0x48;
    iVar17 = 0;
    do {
      uVar11 = DAT_14c84634c;
      uVar10 = DAT_14c846348;
      uVar9 = DAT_14c846344;
      fVar35 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar33 = (float)DAT_14c846330;
      pfVar1 = local_208 + local_1f8;
      fVar36 = *local_208;
      piVar15 = local_1e8 + local_1d8;
      iVar3 = *local_1e8;
      local_208 = pfVar1;
      local_1e8 = piVar15;
      if (((longlong)iVar3 < 0) || (iVar2 + iVar16 <= iVar3)) {
        if (local_20f == 1) {
          *local_2b0 = DAT_14c84633c._4_4_;
          *(undefined4 *)local_2a0 = uVar9;
          *(undefined4 *)local_290 = uVar10;
          *(undefined4 *)local_280 = uVar11;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        fVar19 = DAT_14c846338;
        fVar20 = fVar35;
        fVar31 = fVar33;
        fVar37 = fVar34;
        fVar22 = (float)DAT_14c846330;
        fVar24 = DAT_14c846330._4_4_;
        if (local_20e == '\x01') goto LAB_1480e9f8e;
      }
      else if (iVar3 < iVar16) {
        lVar13 = *(longlong *)(lVar12 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10);
        lVar6 = (longlong)iVar3 * 0x30;
        pfVar1 = (float *)(lVar13 + 0x10 + lVar6);
        fVar31 = *pfVar1;
        fVar37 = pfVar1[1];
        fVar20 = *(float *)(lVar13 + 0x18 + lVar6);
        lVar14 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
        pfVar1 = (float *)(lVar14 + 0x10 + lVar6);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        fVar35 = *(float *)(lVar14 + 0x18 + lVar6);
        if (local_20f != 0) {
          local_318 = *(undefined8 *)(lVar13 + lVar6);
          uStack_310 = ((undefined8 *)(lVar13 + lVar6))[1];
          puVar18 = (undefined4 *)(lVar14 + lVar6);
          local_328 = *puVar18;
          uStack_324 = puVar18[1];
          uStack_320 = puVar18[2];
          uStack_31c = puVar18[3];
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar19 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar22 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar25._0_4_ = fVar22 + fVar19;
          auVar25._4_4_ = fVar22 + fVar19;
          auVar25._8_4_ = fVar19 + fVar22;
          auVar25._12_4_ = fVar19 + fVar22;
          auVar26 = sqrtps(auVar25,auVar25);
          auVar26 = divps(auVar7,auVar26);
          auVar29._0_4_ = auVar26._0_4_ * local_1b8;
          auVar29._4_4_ = auVar26._4_4_ * fStack_1b4;
          auVar29._8_4_ = auVar26._8_4_ * fStack_1b0;
          auVar29._12_4_ = auVar26._12_4_ * fStack_1ac;
          auVar26._4_4_ = -(uint)(1e-08 <= auVar25._4_4_);
          auVar26._0_4_ = -(uint)(1e-08 <= auVar25._0_4_);
          auVar26._8_4_ = -(uint)(1e-08 <= auVar25._8_4_);
          auVar26._12_4_ = -(uint)(1e-08 <= auVar25._12_4_);
          auVar26 = blendvps(auVar8,auVar29,auVar26);
          *local_2b0 = auVar26._0_4_;
          uVar5 = extractps(auVar26,1);
          *local_2a0 = uVar5;
          uVar5 = extractps(auVar26,2);
          *local_290 = uVar5;
          uVar5 = extractps(auVar26,3);
          *local_280 = uVar5;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        if (local_20e == '\x01') {
          pfVar1 = (float *)(*(longlong *)(lVar12 + (longlong)*(int *)(lVar4 + 0x1c) * 0x10) + 0x20
                            + lVar6);
          lVar13 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar4 + 0x1c) ^ 1U) * 0x10);
          auVar26 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar6);
          fVar19 = (pfVar1[2] - auVar26._8_4_) * fVar36 + *(float *)(lVar13 + 0x28 + lVar6);
          fVar22 = (*pfVar1 - auVar26._0_4_) * fVar36 + auVar26._0_4_;
          fVar24 = (pfVar1[1] - auVar26._4_4_) * fVar36 + auVar26._4_4_;
LAB_1480e9f8e:
          *local_270 = fVar22;
          *local_260 = fVar24;
          *local_250 = fVar19;
          local_270 = local_270 + local_268;
          local_260 = local_260 + local_258;
          local_250 = local_250 + local_248;
        }
      }
      else {
        lVar13 = *local_330;
        lVar6 = (longlong)(iVar3 - iVar16) * 0x30;
        pfVar1 = (float *)(lVar13 + 0x10 + lVar6);
        fVar31 = *pfVar1;
        fVar37 = pfVar1[1];
        pfVar1 = (float *)(lVar13 + 0x20 + lVar6);
        fVar22 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar19 = pfVar1[2];
        lVar14 = *local_338;
        pfVar1 = (float *)(lVar14 + 0x10 + lVar6);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        auVar26 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar6);
        fVar20 = *(float *)(lVar13 + 0x18 + lVar6);
        fVar35 = *(float *)(lVar14 + 0x18 + lVar6);
        if (local_20f != 0) {
          puVar18 = (undefined4 *)(lVar14 + lVar6);
          local_328 = *puVar18;
          uStack_324 = puVar18[1];
          uStack_320 = puVar18[2];
          uStack_31c = puVar18[3];
          local_318 = *(undefined8 *)(lVar13 + lVar6);
          uStack_310 = ((undefined8 *)(lVar13 + lVar6))[1];
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar21 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar23 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar27._0_4_ = fVar23 + fVar21;
          auVar27._4_4_ = fVar23 + fVar21;
          auVar27._8_4_ = fVar21 + fVar23;
          auVar27._12_4_ = fVar21 + fVar23;
          auVar28 = sqrtps(auVar27,auVar27);
          auVar28 = divps(auVar7,auVar28);
          auVar30._0_4_ = auVar28._0_4_ * local_1b8;
          auVar30._4_4_ = auVar28._4_4_ * fStack_1b4;
          auVar30._8_4_ = auVar28._8_4_ * fStack_1b0;
          auVar30._12_4_ = auVar28._12_4_ * fStack_1ac;
          auVar28._4_4_ = -(uint)(1e-08 <= auVar27._4_4_);
          auVar28._0_4_ = -(uint)(1e-08 <= auVar27._0_4_);
          auVar28._8_4_ = -(uint)(1e-08 <= auVar27._8_4_);
          auVar28._12_4_ = -(uint)(1e-08 <= auVar27._12_4_);
          auVar28 = blendvps(auVar8,auVar30,auVar28);
          *local_2b0 = auVar28._0_4_;
          uVar5 = extractps(auVar28,1);
          *local_2a0 = uVar5;
          uVar5 = extractps(auVar28,2);
          *local_290 = uVar5;
          uVar5 = extractps(auVar28,3);
          *local_280 = uVar5;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = (undefined8 *)((longlong)local_2a0 + (longlong)local_298 * 4);
          local_290 = (undefined8 *)((longlong)local_290 + (longlong)local_288 * 4);
          local_280 = (undefined8 *)((longlong)local_280 + (longlong)local_278 * 4);
        }
        if (local_20e == '\x01') {
          fVar19 = (fVar19 - auVar26._8_4_) * fVar36 + auVar26._8_4_;
          fVar22 = (fVar22 - auVar26._0_4_) * fVar36 + auVar26._0_4_;
          fVar24 = (fVar24 - auVar26._4_4_) * fVar36 + auVar26._4_4_;
          goto LAB_1480e9f8e;
        }
      }
      fVar19 = (fVar20 - fVar35) * fVar36 + fVar35;
      fVar20 = (fVar37 - fVar34) * fVar36 + fVar34;
      fVar36 = (fVar31 - fVar33) * fVar36 + fVar33;
      if (local_210 == '\x01') {
        *local_2e0 = fVar36;
        *local_2d0 = fVar20;
        *local_2c0 = fVar19;
        local_2e0 = local_2e0 + local_2d8;
        local_2d0 = local_2d0 + local_2c8;
        local_2c0 = local_2c0 + local_2b8;
      }
      if (local_20d == '\x01') {
        *local_240 = (fVar36 - fVar33) * fVar32;
        *local_230 = (fVar20 - fVar34) * fVar32;
        *local_220 = (fVar19 - fVar35) * fVar32;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      iVar17 = iVar17 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
    } while (iVar17 < *piVar15);
  }
LAB_1480ea524:
  if (lVar4 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ea5e4 FUN_1480ea5e4 body=202 status=ok
// SIG undefined FUN_1480ea5e4(void)

void FUN_1480ea5e4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98d40;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ea6b0 FUN_1480ea6b0 body=29 status=ok
// SIG undefined FUN_1480ea6b0(void)

undefined8 FUN_1480ea6b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ea6e2 FUN_1480ea6e2 body=93 status=ok
// SIG undefined FUN_1480ea6e2(void)

void FUN_1480ea6e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ea740 FUN_1480ea740 body=93 status=ok
// SIG undefined FUN_1480ea740(void)

void FUN_1480ea740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98d40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ea79e FUN_1480ea79e body=126 status=ok
// SIG undefined FUN_1480ea79e(void)

void FUN_1480ea79e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98d40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ea80d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ea824 FUN_1480ea824 body=19 status=ok
// SIG undefined FUN_1480ea824(void)

undefined1 FUN_1480ea824(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ea838(param_2);
  return 1;
}



// FUNCTION 1480ea838 FUN_1480ea838 body=5232 status=ok
// SIG undefined FUN_1480ea838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480ea838(char *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_448 [40];
  int local_420;
  int local_41c;
  longlong *local_418;
  int *local_410;
  longlong local_408;
  longlong *local_400;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  float *local_3c0;
  int local_3b8;
  float *local_3b0;
  int local_3a8;
  float *local_3a0;
  int local_398;
  float *local_390;
  int local_388;
  float *local_380;
  int local_378;
  float *local_370;
  int local_368;
  float *local_360;
  int local_358;
  float *local_350;
  int local_348;
  float *local_340;
  int local_338;
  float *local_330;
  int local_328;
  float *local_320;
  int local_318;
  float *local_310;
  int local_308;
  float *local_300;
  int local_2f8;
  char local_2f0;
  byte local_2ef;
  char local_2ee;
  char local_2ed;
  float *local_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  int *local_2c8;
  undefined8 uStack_2c0;
  int local_2b8;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  double local_288;
  undefined8 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  double local_1e8;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_118;
  double local_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_140982196(local_2a8,param_1);
  local_2b8 = 0;
  local_2c8 = (int *)0x0;
  uStack_2c0 = 0;
  FUN_144a98d08(&local_2c8,param_1);
  local_2d8 = 0;
  local_2e8 = (float *)0x0;
  uStack_2e0 = 0;
  FUN_144a98dce(&local_2e8,param_1);
  FUN_1480e2b22(&local_3c0,param_1);
  FUN_144a928e2(&local_238,local_2a0 + 0xf0);
  FUN_144a928e2(&local_278,local_2a0 + 0x1f0);
  if (local_2ef == 1) {
    local_178 = local_238;
    fStack_174 = fStack_234;
    fStack_170 = fStack_230;
    fStack_16c = fStack_22c;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3d8);
  }
  else {
    local_3d8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_3d0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_2ef & 1) == 0) {
    local_3e8 = DAT_14c84633c._4_4_;
    fStack_3e4 = DAT_14c846344;
    fStack_3e0 = DAT_14c846348;
    fStack_3dc = DAT_14c84634c;
  }
  else {
    local_178 = local_278;
    fStack_174 = fStack_274;
    fStack_170 = fStack_270;
    fStack_16c = fStack_26c;
    FUN_144afd82e(&local_178);
    FUN_144afdc36(&local_178,&local_3e8);
  }
  lVar10 = local_2a0;
  lVar7 = FUN_14479d2ce(local_2a0);
  if (lVar7 != 0) {
    FUN_144a74fb4();
  }
  plVar8 = (longlong *)FUN_14479d2ce(lVar10 + 0x50);
  lVar7 = FUN_14479d2ce(lVar10);
  if (lVar7 != 0) {
    lVar9 = FUN_144a74fb4();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         == lVar9 + 0x30)) && (lVar9 = FUN_144a81888(lVar7), lVar9 != 0)) {
      FUN_1417c143e(lVar7,*(undefined4 *)(lVar10 + 0x31c),0);
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0x60);
  if (lVar10 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 8));
  }
  local_408 = lVar10;
  if (plVar8 == (longlong *)0x0) {
    piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar14 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar14) {
      fVar34 = 1.0 / *(float *)(local_2a0 + 0x270);
      iVar13 = 0;
      do {
        fVar44 = DAT_14c84634c;
        fVar23 = DAT_14c846348;
        fVar20 = DAT_14c846344;
        pfVar12 = local_2e8 + local_2d8;
        fVar43 = *local_2e8;
        fVar47 = local_238 * (float)DAT_14c846330;
        fVar41 = fStack_234 * (float)DAT_14c846330;
        fVar45 = fStack_230 * (float)DAT_14c846330;
        fVar37 = local_228 * DAT_14c846330._4_4_;
        fVar38 = fStack_224 * DAT_14c846330._4_4_;
        fVar39 = fStack_220 * DAT_14c846330._4_4_;
        fVar40 = local_218 * DAT_14c846338;
        fVar42 = fStack_214 * DAT_14c846338;
        fVar46 = fStack_210 * DAT_14c846338;
        fVar31 = DAT_14c846338 * local_258 +
                 DAT_14c846330._4_4_ * local_268 + (float)DAT_14c846330 * local_278 + local_248;
        fVar35 = DAT_14c846338 * fStack_254 +
                 DAT_14c846330._4_4_ * fStack_264 + (float)DAT_14c846330 * fStack_274 + fStack_244;
        fVar36 = DAT_14c846338 * fStack_250 +
                 DAT_14c846330._4_4_ * fStack_260 + (float)DAT_14c846330 * fStack_270 + fStack_240;
        if (local_2ef == 1) {
          *local_390 = DAT_14c84633c._4_4_;
          *local_380 = fVar20;
          *local_370 = fVar23;
          *local_360 = fVar44;
          local_390 = local_390 + local_388;
          local_380 = local_380 + local_378;
          local_370 = local_370 + local_368;
          local_360 = local_360 + local_358;
        }
        fVar20 = ((fVar46 + fVar39 + fVar45 + fStack_200) - fVar36) * fVar43 + fVar36;
        fVar23 = ((fVar42 + fVar38 + fVar41 + fStack_204) - fVar35) * fVar43 + fVar35;
        fVar43 = ((fVar40 + fVar37 + fVar47 + local_208) - fVar31) * fVar43 + fVar31;
        if (local_2f0 == '\x01') {
          *local_3c0 = fVar43;
          *local_3b0 = fVar23;
          *local_3a0 = fVar20;
          local_3c0 = local_3c0 + local_3b8;
          local_3b0 = local_3b0 + local_3a8;
          local_3a0 = local_3a0 + local_398;
        }
        if (local_2ed == '\x01') {
          *local_320 = (fVar43 - fVar31) * fVar34;
          *local_310 = (fVar23 - fVar35) * fVar34;
          *local_300 = (fVar20 - fVar36) * fVar34;
          local_320 = local_320 + local_318;
          local_310 = local_310 + local_308;
          local_300 = local_300 + local_2f8;
        }
        iVar13 = iVar13 + 1;
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        local_2e8 = pfVar12;
      } while (iVar13 < *piVar14);
    }
  }
  else {
    lVar10 = (**(code **)(*plVar8 + 0x308))(plVar8);
    piVar14 = (int *)(param_1 + 0x3c);
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = piVar14;
    }
    if (0 < *piVar11) {
      iVar13 = *(int *)(lVar10 + 0x28);
      iVar17 = *(int *)(local_2a0 + 0x2b0) + iVar13;
      fVar34 = 1.0 / *(float *)(local_2a0 + 0x270);
      plVar16 = (longlong *)(local_2a0 + (ulonglong)*(uint *)(local_2a0 + 700) * 0x10 + 0x2c0);
      local_400 = (longlong *)
                  (local_2a0 + (ulonglong)((~*(uint *)(local_2a0 + 700) & 1) << 4) + 0x2c0);
      iVar18 = 0;
      local_420 = iVar17;
      local_41c = iVar13;
      local_418 = plVar16;
      local_410 = piVar14;
      do {
        fVar44 = DAT_14c84634c;
        fVar23 = DAT_14c846348;
        fVar20 = DAT_14c846344;
        pfVar12 = local_2e8 + local_2d8;
        fVar43 = *local_2e8;
        piVar11 = local_2c8 + local_2b8;
        iVar4 = *local_2c8;
        lVar10 = (longlong)iVar4;
        local_2e8 = pfVar12;
        local_2c8 = piVar11;
        if ((lVar10 < 0) || (iVar17 <= iVar4)) {
          fVar45 = local_218 * DAT_14c846338 +
                   local_228 * DAT_14c846330._4_4_ + local_238 * (float)DAT_14c846330 + local_208;
          fVar46 = fStack_214 * DAT_14c846338 +
                   fStack_224 * DAT_14c846330._4_4_ + fStack_234 * (float)DAT_14c846330 + fStack_204
          ;
          fVar47 = fStack_210 * DAT_14c846338 +
                   fStack_220 * DAT_14c846330._4_4_ + fStack_230 * (float)DAT_14c846330 + fStack_200
          ;
          fVar40 = DAT_14c846338 * local_258 +
                   DAT_14c846330._4_4_ * local_268 + (float)DAT_14c846330 * local_278 + local_248;
          fVar41 = DAT_14c846338 * fStack_254 +
                   DAT_14c846330._4_4_ * fStack_264 + (float)DAT_14c846330 * fStack_274 + fStack_244
          ;
          fVar42 = DAT_14c846338 * fStack_250 +
                   DAT_14c846330._4_4_ * fStack_260 + (float)DAT_14c846330 * fStack_270 + fStack_240
          ;
          if (local_2ef == 1) {
            *local_390 = DAT_14c84633c._4_4_;
            *local_380 = fVar20;
            *local_370 = fVar23;
            *local_360 = fVar44;
            local_390 = local_390 + local_388;
            local_380 = local_380 + local_378;
            local_370 = local_370 + local_368;
            local_360 = local_360 + local_358;
          }
          fVar20 = DAT_14c846338;
          fVar23 = (float)DAT_14c846330;
          fVar44 = DAT_14c846330._4_4_;
          if (local_2ee == '\x01') goto LAB_1480ead29;
        }
        else if (iVar4 < iVar13) {
          lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
          if (iVar4 < *(int *)(lVar7 + 8)) {
            (**(code **)(*plVar8 + 0x340))(plVar8,&local_178,iVar4);
            uVar19 = (undefined4)local_118;
            uVar22 = (undefined4)((ulonglong)local_118 >> 0x20);
            dVar3 = local_108;
            dVar2 = local_110;
          }
          else {
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            lVar7 = *(longlong *)(lVar7 + 0x30);
            lVar9 = lVar10 * 0x60;
            dVar3 = *(double *)(lVar7 + 0x30 + lVar9);
            uVar5 = *(undefined8 *)(lVar7 + 0x20 + lVar9);
            uVar19 = (undefined4)uVar5;
            uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
            dVar2 = *(double *)(lVar7 + 0x28 + lVar9);
          }
          fVar44 = (float)dVar3;
          fVar23 = (float)dVar2;
          fVar20 = (float)(double)CONCAT44(uVar22,uVar19);
          fVar45 = fVar44 * local_218 + fVar23 * local_228 + fVar20 * local_238 + local_208;
          fVar46 = fVar44 * fStack_214 + fVar23 * fStack_224 + fVar20 * fStack_234 + fStack_204;
          fVar47 = fVar44 * fStack_210 + fVar23 * fStack_220 + fVar20 * fStack_230 + fStack_200;
          lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
          if (iVar4 < *(int *)(lVar7 + 8)) {
            (**(code **)(*plVar8 + 0x340))(plVar8,&local_178,iVar4);
            uVar19 = (undefined4)local_118;
            uVar22 = (undefined4)((ulonglong)local_118 >> 0x20);
            dVar3 = local_108;
            dVar2 = local_110;
          }
          else {
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            lVar7 = *(longlong *)(lVar7 + 0x30);
            lVar9 = lVar10 * 0x60;
            dVar3 = *(double *)(lVar7 + 0x30 + lVar9);
            uVar5 = *(undefined8 *)(lVar7 + 0x20 + lVar9);
            uVar19 = (undefined4)uVar5;
            uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
            dVar2 = *(double *)(lVar7 + 0x28 + lVar9);
          }
          fVar44 = (float)dVar3;
          fVar23 = (float)dVar2;
          fVar20 = (float)(double)CONCAT44(uVar22,uVar19);
          fVar40 = fVar44 * local_258 + fVar23 * local_268 + fVar20 * local_278 + local_248;
          fVar41 = fVar44 * fStack_254 + fVar23 * fStack_264 + fVar20 * fStack_274 + fStack_244;
          fVar42 = fVar44 * fStack_250 + fVar23 * fStack_260 + fVar20 * fStack_270 + fStack_240;
          if (local_2ef == 1) {
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            if (iVar4 < *(int *)(lVar7 + 8)) {
              (**(code **)(*plVar8 + 0x340))(plVar8,&local_1f8,iVar4);
              pfVar12 = &local_1f8;
              pfVar15 = &local_178;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                *(undefined8 *)pfVar15 = *(undefined8 *)pfVar12;
                pfVar12 = pfVar12 + 2;
                pfVar15 = pfVar15 + 2;
              }
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              FUN_141706d54(&local_178,&local_298);
              uVar19 = (undefined4)local_280;
              uVar22 = (undefined4)((ulonglong)local_280 >> 0x20);
              dVar2 = (double)CONCAT44(fStack_294,local_298);
              dVar3 = (double)CONCAT44(fStack_28c,fStack_290);
              dVar1 = local_288;
            }
            else {
              lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
              lVar7 = *(longlong *)(lVar7 + 0x30);
              lVar9 = lVar10 * 0x60;
              uVar5 = *(undefined8 *)(lVar7 + 0x18 + lVar9);
              uVar19 = (undefined4)uVar5;
              uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
              dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
              dVar2 = *(double *)(lVar7 + lVar9);
              dVar3 = *(double *)(lVar7 + 8 + lVar9);
            }
            fVar20 = (float)(double)CONCAT44(uVar22,uVar19);
            fVar44 = (float)dVar1;
            fVar31 = (float)dVar3;
            fVar23 = (float)dVar2;
            local_3f8 = (float)uStack_3d0 * fVar31 * -1.0 +
                        local_3d8._4_4_ * fVar44 * 1.0 +
                        (float)local_3d8 * fVar20 * 1.0 + uStack_3d0._4_4_ * fVar23;
            fStack_3f4 = (float)uStack_3d0 * fVar23 * 1.0 +
                         local_3d8._4_4_ * fVar20 * 1.0 +
                         (float)local_3d8 * fVar44 * -1.0 + uStack_3d0._4_4_ * fVar31;
            fStack_3f0 = (float)uStack_3d0 * fVar20 * 1.0 +
                         local_3d8._4_4_ * fVar23 * -1.0 +
                         (float)local_3d8 * fVar31 * 1.0 + uStack_3d0._4_4_ * fVar44;
            fStack_3ec = (float)uStack_3d0 * fVar44 * -1.0 +
                         local_3d8._4_4_ * fVar31 * -1.0 +
                         (float)local_3d8 * fVar23 * -1.0 + uStack_3d0._4_4_ * fVar20;
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            if (iVar4 < *(int *)(lVar7 + 8)) {
              (**(code **)(*plVar8 + 0x340))(plVar8,&local_1f8,iVar4);
              pfVar12 = &local_1f8;
              pfVar15 = &local_178;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                *(undefined8 *)pfVar15 = *(undefined8 *)pfVar12;
                pfVar12 = pfVar12 + 2;
                pfVar15 = pfVar15 + 2;
              }
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              FUN_141706d54(&local_178,&local_298);
              uVar19 = (undefined4)local_280;
              uVar22 = (undefined4)((ulonglong)local_280 >> 0x20);
              dVar3 = (double)CONCAT44(fStack_294,local_298);
              dVar1 = (double)CONCAT44(fStack_28c,fStack_290);
              dVar2 = local_288;
            }
            else {
              lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
              lVar7 = *(longlong *)(lVar7 + 0x30);
              lVar9 = lVar10 * 0x60;
              uVar5 = *(undefined8 *)(lVar7 + 0x18 + lVar9);
              uVar19 = (undefined4)uVar5;
              uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
              dVar2 = *(double *)(lVar7 + 0x10 + lVar9);
              dVar3 = *(double *)(lVar7 + lVar9);
              dVar1 = *(double *)(lVar7 + 8 + lVar9);
            }
            plVar16 = local_418;
            iVar13 = local_41c;
            fVar20 = (float)(double)CONCAT44(uVar22,uVar19);
            fVar44 = (float)dVar2;
            fVar31 = (float)dVar1;
            fVar23 = (float)dVar3;
            local_1f8 = fStack_3e0 * fVar31 * -1.0 +
                        fStack_3e4 * fVar44 * 1.0 + local_3e8 * fVar20 * 1.0 + fStack_3dc * fVar23;
            fStack_1f4 = fStack_3e0 * fVar23 * 1.0 +
                         fStack_3e4 * fVar20 * 1.0 + local_3e8 * fVar44 * -1.0 + fStack_3dc * fVar31
            ;
            fStack_1f0 = fStack_3e0 * fVar20 * 1.0 +
                         fStack_3e4 * fVar23 * -1.0 + local_3e8 * fVar31 * 1.0 + fStack_3dc * fVar44
            ;
            fStack_1ec = fStack_3e0 * fVar44 * -1.0 +
                         fStack_3e4 * fVar31 * -1.0 +
                         local_3e8 * fVar23 * -1.0 + fStack_3dc * fVar20;
            FUN_144afe1e6(&local_178,&local_1f8,&local_3f8);
            fVar20 = local_178 * local_178 + fStack_174 * fStack_174;
            fVar23 = fStack_170 * fStack_170 + fStack_16c * fStack_16c;
            auVar28._0_4_ = fVar23 + fVar20;
            auVar28._4_4_ = fVar23 + fVar20;
            auVar28._8_4_ = fVar20 + fVar23;
            auVar28._12_4_ = fVar20 + fVar23;
            auVar29 = sqrtps(auVar28,auVar28);
            auVar29 = divps(_DAT_1499314a0,auVar29);
            auVar33._0_4_ = auVar29._0_4_ * local_178;
            auVar33._4_4_ = auVar29._4_4_ * fStack_174;
            auVar33._8_4_ = auVar29._8_4_ * fStack_170;
            auVar33._12_4_ = auVar29._12_4_ * fStack_16c;
            auVar6._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
            auVar6._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
            auVar6._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
            auVar6._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
            auVar29 = blendvps(_DAT_149932320,auVar33,auVar6);
            *local_390 = auVar29._0_4_;
            uVar5 = extractps(auVar29,1);
            *(undefined8 *)local_380 = uVar5;
            uVar5 = extractps(auVar29,2);
            *(undefined8 *)local_370 = uVar5;
            uVar5 = extractps(auVar29,3);
            *(undefined8 *)local_360 = uVar5;
            piVar14 = local_410;
            iVar17 = local_420;
            local_390 = local_390 + local_388;
            local_380 = local_380 + local_378;
            local_370 = local_370 + local_368;
            local_360 = local_360 + local_358;
          }
          if (local_2ee == '\x01') {
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            if (iVar4 < *(int *)(lVar7 + 8)) {
              (**(code **)(*plVar8 + 0x340))(plVar8,&local_178,iVar4);
              FUN_144afda3c(&local_178,&local_1f8,0x3e45798ee0000000);
              dVar3 = (double)CONCAT44(fStack_1ec,fStack_1f0);
              fVar20 = local_1f8;
              fVar23 = fStack_1f4;
              dVar2 = local_1e8;
            }
            else {
              lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
              lVar7 = *(longlong *)(lVar7 + 0x30);
              lVar9 = lVar10 * 0x60;
              dVar2 = *(double *)(lVar7 + 0x50 + lVar9);
              uVar5 = *(undefined8 *)(lVar7 + 0x40 + lVar9);
              fVar20 = (float)uVar5;
              fVar23 = (float)((ulonglong)uVar5 >> 0x20);
              dVar3 = *(double *)(lVar7 + 0x48 + lVar9);
            }
            fVar44 = (float)dVar2;
            fVar48 = (float)dVar3;
            fVar20 = (float)(double)CONCAT44(fVar23,fVar20);
            fVar35 = fVar20 * local_238;
            fVar36 = fVar20 * fStack_234;
            fVar20 = fVar20 * fStack_230;
            fVar49 = fVar48 * local_228;
            fVar50 = fVar48 * fStack_224;
            fVar48 = fVar48 * fStack_220;
            fVar23 = fVar44 * local_218;
            fVar31 = fVar44 * fStack_214;
            fVar44 = fVar44 * fStack_210;
            fVar37 = local_208 * 0.0;
            fVar38 = fStack_204 * 0.0;
            fVar39 = fStack_200 * 0.0;
            lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
            if (iVar4 < *(int *)(lVar7 + 8)) {
              (**(code **)(*plVar8 + 0x340))(plVar8,&local_178,iVar4);
              FUN_144afda3c(&local_178,&local_1f8,0x3e45798ee0000000);
              dVar3 = (double)CONCAT44(fStack_1ec,fStack_1f0);
              fVar21 = local_1f8;
              fVar26 = fStack_1f4;
              dVar2 = local_1e8;
            }
            else {
              lVar7 = (**(code **)(*plVar8 + 0x310))(plVar8);
              lVar7 = *(longlong *)(lVar7 + 0x30);
              lVar10 = lVar10 * 0x60;
              dVar2 = *(double *)(lVar7 + 0x50 + lVar10);
              uVar5 = *(undefined8 *)(lVar7 + 0x40 + lVar10);
              fVar21 = (float)uVar5;
              fVar26 = (float)((ulonglong)uVar5 >> 0x20);
              dVar3 = *(double *)(lVar7 + 0x48 + lVar10);
            }
            fVar24 = (float)dVar2;
            fVar25 = (float)dVar3;
            fVar21 = (float)(double)CONCAT44(fVar26,fVar21);
            fVar26 = local_248 * 0.0 + fVar24 * local_258 + fVar25 * local_268 + fVar21 * local_278;
            fVar30 = fStack_244 * 0.0 +
                     fVar24 * fStack_254 + fVar25 * fStack_264 + fVar21 * fStack_274;
            fVar21 = fStack_240 * 0.0 +
                     fVar24 * fStack_250 + fVar25 * fStack_260 + fVar21 * fStack_270;
            fVar20 = ((fVar39 + fVar44 + fVar20 + fVar48) - fVar21) * fVar43 + fVar21;
            fVar23 = ((fVar37 + fVar23 + fVar35 + fVar49) - fVar26) * fVar43 + fVar26;
            iVar17 = local_420;
            fVar44 = ((fVar38 + fVar31 + fVar36 + fVar50) - fVar30) * fVar43 + fVar30;
LAB_1480ead29:
            *local_350 = fVar23;
            *local_340 = fVar44;
            *local_330 = fVar20;
            local_350 = local_350 + local_348;
            local_340 = local_340 + local_338;
            local_330 = local_330 + local_328;
          }
        }
        else {
          lVar10 = *plVar16;
          lVar9 = (longlong)(iVar4 - iVar13) * 0x30;
          pfVar12 = (float *)(lVar10 + 0x10 + lVar9);
          fVar20 = *pfVar12;
          fVar23 = pfVar12[1];
          fVar44 = pfVar12[2];
          pfVar12 = (float *)(lVar10 + 0x20 + lVar9);
          fVar31 = *pfVar12;
          fVar35 = pfVar12[1];
          fVar36 = pfVar12[2];
          lVar7 = *local_400;
          pfVar12 = (float *)(lVar7 + 0x10 + lVar9);
          fVar42 = *pfVar12;
          fVar37 = pfVar12[1];
          fVar38 = pfVar12[2];
          pfVar12 = (float *)(lVar7 + 0x20 + lVar9);
          fVar39 = *pfVar12;
          fVar48 = pfVar12[1];
          fVar49 = pfVar12[2];
          fVar45 = fVar44 * local_218 + fVar23 * local_228 + fVar20 * local_238 + local_208;
          fVar46 = fVar44 * fStack_214 + fVar23 * fStack_224 + fVar20 * fStack_234 + fStack_204;
          fVar47 = fVar44 * fStack_210 + fVar23 * fStack_220 + fVar20 * fStack_230 + fStack_200;
          fVar40 = fVar38 * local_258 + fVar37 * local_268 + fVar42 * local_278 + local_248;
          fVar41 = fVar38 * fStack_254 + fVar37 * fStack_264 + fVar42 * fStack_274 + fStack_244;
          fVar42 = fVar38 * fStack_250 + fVar37 * fStack_260 + fVar42 * fStack_270 + fStack_240;
          if (local_2ef == 1) {
            pfVar12 = (float *)(lVar10 + lVar9);
            pfVar15 = (float *)(lVar7 + lVar9);
            fVar20 = *pfVar15;
            fVar23 = pfVar15[1];
            fVar44 = pfVar15[2];
            fVar37 = pfVar15[3];
            fVar38 = *pfVar12;
            fVar50 = pfVar12[1];
            fVar21 = pfVar12[2];
            fVar26 = pfVar12[3];
            local_1f8 = (float)uStack_3d0 * fVar50 * -1.0 +
                        local_3d8._4_4_ * fVar21 * 1.0 +
                        (float)local_3d8 * fVar26 * 1.0 + uStack_3d0._4_4_ * fVar38;
            fStack_1f4 = (float)uStack_3d0 * fVar38 * 1.0 +
                         local_3d8._4_4_ * fVar26 * 1.0 +
                         (float)local_3d8 * fVar21 * -1.0 + uStack_3d0._4_4_ * fVar50;
            fStack_1f0 = (float)uStack_3d0 * fVar26 * 1.0 +
                         local_3d8._4_4_ * fVar38 * -1.0 +
                         (float)local_3d8 * fVar50 * 1.0 + uStack_3d0._4_4_ * fVar21;
            fStack_1ec = (float)uStack_3d0 * fVar21 * -1.0 +
                         local_3d8._4_4_ * fVar50 * -1.0 +
                         (float)local_3d8 * fVar38 * -1.0 + uStack_3d0._4_4_ * fVar26;
            local_298 = fStack_3e0 * fVar23 * -1.0 +
                        fStack_3e4 * fVar44 * 1.0 + local_3e8 * fVar37 * 1.0 + fStack_3dc * fVar20;
            fStack_294 = fStack_3e0 * fVar20 * 1.0 +
                         fStack_3e4 * fVar37 * 1.0 + local_3e8 * fVar44 * -1.0 + fStack_3dc * fVar23
            ;
            fStack_290 = fStack_3e0 * fVar37 * 1.0 +
                         fStack_3e4 * fVar20 * -1.0 + local_3e8 * fVar23 * 1.0 + fStack_3dc * fVar44
            ;
            fStack_28c = fStack_3e0 * fVar44 * -1.0 +
                         fStack_3e4 * fVar23 * -1.0 +
                         local_3e8 * fVar20 * -1.0 + fStack_3dc * fVar37;
            FUN_144afe1e6(&local_178,&local_298,&local_1f8);
            fVar20 = local_178 * local_178 + fStack_174 * fStack_174;
            fVar23 = fStack_170 * fStack_170 + fStack_16c * fStack_16c;
            auVar27._0_4_ = fVar23 + fVar20;
            auVar27._4_4_ = fVar23 + fVar20;
            auVar27._8_4_ = fVar20 + fVar23;
            auVar27._12_4_ = fVar20 + fVar23;
            auVar29 = sqrtps(auVar27,auVar27);
            auVar29 = divps(_DAT_1499314a0,auVar29);
            auVar32._0_4_ = auVar29._0_4_ * local_178;
            auVar32._4_4_ = auVar29._4_4_ * fStack_174;
            auVar32._8_4_ = auVar29._8_4_ * fStack_170;
            auVar32._12_4_ = auVar29._12_4_ * fStack_16c;
            auVar29._4_4_ = -(uint)(1e-08 <= auVar27._4_4_);
            auVar29._0_4_ = -(uint)(1e-08 <= auVar27._0_4_);
            auVar29._8_4_ = -(uint)(1e-08 <= auVar27._8_4_);
            auVar29._12_4_ = -(uint)(1e-08 <= auVar27._12_4_);
            auVar29 = blendvps(_DAT_149932320,auVar32,auVar29);
            *local_390 = auVar29._0_4_;
            uVar5 = extractps(auVar29,1);
            *(undefined8 *)local_380 = uVar5;
            uVar5 = extractps(auVar29,2);
            *(undefined8 *)local_370 = uVar5;
            uVar5 = extractps(auVar29,3);
            *(undefined8 *)local_360 = uVar5;
            local_390 = local_390 + local_388;
            local_380 = local_380 + local_378;
            local_370 = local_370 + local_368;
            local_360 = local_360 + local_358;
          }
          if (local_2ee == '\x01') {
            fVar23 = local_248 * 0.0 + fVar49 * local_258 + fVar48 * local_268 + fVar39 * local_278;
            fVar44 = fStack_244 * 0.0 +
                     fVar49 * fStack_254 + fVar48 * fStack_264 + fVar39 * fStack_274;
            fVar20 = fStack_240 * 0.0 +
                     fVar49 * fStack_250 + fVar48 * fStack_260 + fVar39 * fStack_270;
            fVar20 = ((fStack_200 * 0.0 +
                      fVar36 * fStack_210 + fVar35 * fStack_220 + fVar31 * fStack_230) - fVar20) *
                     fVar43 + fVar20;
            fVar23 = ((local_208 * 0.0 +
                      fVar36 * local_218 + fVar35 * local_228 + fVar31 * local_238) - fVar23) *
                     fVar43 + fVar23;
            fVar44 = ((fStack_204 * 0.0 +
                      fVar36 * fStack_214 + fVar35 * fStack_224 + fVar31 * fStack_234) - fVar44) *
                     fVar43 + fVar44;
            goto LAB_1480ead29;
          }
        }
        fVar23 = (fVar47 - fVar42) * fVar43 + fVar42;
        fVar20 = (fVar46 - fVar41) * fVar43 + fVar41;
        fVar43 = (fVar45 - fVar40) * fVar43 + fVar40;
        if (local_2f0 == '\x01') {
          *local_3c0 = fVar43;
          *local_3b0 = fVar20;
          *local_3a0 = fVar23;
          local_3c0 = local_3c0 + local_3b8;
          local_3b0 = local_3b0 + local_3a8;
          local_3a0 = local_3a0 + local_398;
        }
        if (local_2ed == '\x01') {
          *local_320 = (fVar43 - fVar40) * fVar34;
          *local_310 = (fVar20 - fVar41) * fVar34;
          *local_300 = (fVar23 - fVar42) * fVar34;
          local_320 = local_320 + local_318;
          local_310 = local_310 + local_308;
          local_300 = local_300 + local_2f8;
        }
        iVar18 = iVar18 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = piVar14;
        }
      } while (iVar18 < *piVar11);
    }
  }
  if (local_408 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(local_408 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ebcaa FUN_1480ebcaa body=202 status=ok
// SIG undefined FUN_1480ebcaa(void)

void FUN_1480ebcaa(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98db0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ebd76 FUN_1480ebd76 body=29 status=ok
// SIG undefined FUN_1480ebd76(void)

undefined8 FUN_1480ebd76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ebda8 FUN_1480ebda8 body=93 status=ok
// SIG undefined FUN_1480ebda8(void)

void FUN_1480ebda8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ebe06 FUN_1480ebe06 body=93 status=ok
// SIG undefined FUN_1480ebe06(void)

void FUN_1480ebe06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98db0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ebe64 FUN_1480ebe64 body=126 status=ok
// SIG undefined FUN_1480ebe64(void)

void FUN_1480ebe64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98db0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ebed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ebeea FUN_1480ebeea body=19 status=ok
// SIG undefined FUN_1480ebeea(void)

undefined1 FUN_1480ebeea(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ebefe(param_2);
  return 1;
}



// FUNCTION 1480ebefe FUN_1480ebefe body=4155 status=ok
// SIG undefined FUN_1480ebefe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480ebefe(char *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong *local_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  float *local_2e0;
  int local_2d8;
  float *local_2d0;
  int local_2c8;
  float *local_2c0;
  int local_2b8;
  float *local_2b0;
  int local_2a8;
  float *local_2a0;
  int local_298;
  float *local_290;
  int local_288;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  char local_210;
  byte local_20f;
  char local_20e;
  char local_20d;
  float *local_208;
  undefined8 uStack_200;
  int local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_140982196(local_1c8,param_1);
  local_1d8 = 0;
  local_1e8 = (int *)0x0;
  uStack_1e0 = 0;
  FUN_144a98d08(&local_1e8,param_1);
  local_1f8 = 0;
  local_208 = (float *)0x0;
  uStack_200 = 0;
  FUN_144a98dce(&local_208,param_1);
  FUN_1480e2b22(&local_2e0,param_1);
  FUN_144a928e2(&local_138,local_1c0 + 0xf0);
  FUN_144a928e2(&local_178,local_1c0 + 0x1f0);
  if (local_20f == 1) {
    local_1b8 = local_138;
    fStack_1b4 = fStack_134;
    fStack_1b0 = fStack_130;
    fStack_1ac = fStack_12c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_2f8);
  }
  else {
    local_2f8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_2f0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_20f & 1) == 0) {
    local_308 = DAT_14c84633c._4_4_;
    fStack_304 = DAT_14c846344;
    fStack_300 = DAT_14c846348;
    fStack_2fc = DAT_14c84634c;
  }
  else {
    local_1b8 = local_178;
    fStack_1b4 = fStack_174;
    fStack_1b0 = fStack_170;
    fStack_1ac = fStack_16c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_308);
  }
  lVar3 = local_1c0;
  lVar12 = FUN_14479d2ce(local_1c0);
  if (lVar12 != 0) {
    FUN_144a74fb4();
  }
  lVar12 = FUN_14479d2ce(lVar3 + 0x50);
  lVar13 = FUN_14479d2ce(lVar3);
  if (lVar13 != 0) {
    lVar14 = FUN_144a74fb4();
    if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
       (lVar14 = FUN_144a81888(lVar13), lVar14 != 0)) {
      FUN_1417c143e(lVar13,*(undefined4 *)(lVar3 + 0x31c),0);
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x60);
  if (lVar3 == 0) {
    iVar17 = 0;
    if (lVar12 == 0) goto LAB_1480ecc5b;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 8));
    if (lVar12 == 0) {
LAB_1480ecc5b:
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar16) {
        fVar34 = 1.0 / *(float *)(local_1c0 + 0x270);
        iVar17 = 0;
        do {
          fVar25 = DAT_14c84634c;
          fVar21 = DAT_14c846348;
          fVar20 = DAT_14c846344;
          pfVar15 = local_208 + local_1f8;
          fVar39 = *local_208;
          fVar41 = local_138 * (float)DAT_14c846330;
          fVar35 = fStack_134 * (float)DAT_14c846330;
          fVar38 = fStack_130 * (float)DAT_14c846330;
          fVar31 = local_128 * DAT_14c846330._4_4_;
          fVar32 = fStack_124 * DAT_14c846330._4_4_;
          fVar33 = fStack_120 * DAT_14c846330._4_4_;
          fVar37 = local_118 * DAT_14c846338;
          fVar36 = fStack_114 * DAT_14c846338;
          fVar40 = fStack_110 * DAT_14c846338;
          fVar28 = DAT_14c846338 * local_158 +
                   DAT_14c846330._4_4_ * local_168 + (float)DAT_14c846330 * local_178 + local_148;
          fVar29 = DAT_14c846338 * fStack_154 +
                   DAT_14c846330._4_4_ * fStack_164 + (float)DAT_14c846330 * fStack_174 + fStack_144
          ;
          fVar30 = DAT_14c846338 * fStack_150 +
                   DAT_14c846330._4_4_ * fStack_160 + (float)DAT_14c846330 * fStack_170 + fStack_140
          ;
          if (local_20f == 1) {
            *local_2b0 = DAT_14c84633c._4_4_;
            *local_2a0 = fVar20;
            *local_290 = fVar21;
            *local_280 = fVar25;
            local_2b0 = local_2b0 + local_2a8;
            local_2a0 = local_2a0 + local_298;
            local_290 = local_290 + local_288;
            local_280 = local_280 + local_278;
          }
          fVar20 = ((fVar40 + fVar33 + fVar38 + fStack_100) - fVar30) * fVar39 + fVar30;
          fVar21 = ((fVar36 + fVar32 + fVar35 + fStack_104) - fVar29) * fVar39 + fVar29;
          fVar39 = ((fVar37 + fVar31 + fVar41 + local_108) - fVar28) * fVar39 + fVar28;
          if (local_210 == '\x01') {
            *local_2e0 = fVar39;
            *local_2d0 = fVar21;
            *local_2c0 = fVar20;
            local_2e0 = local_2e0 + local_2d8;
            local_2d0 = local_2d0 + local_2c8;
            local_2c0 = local_2c0 + local_2b8;
          }
          if (local_20d == '\x01') {
            *local_240 = (fVar39 - fVar28) * fVar34;
            *local_230 = (fVar21 - fVar29) * fVar34;
            *local_220 = (fVar20 - fVar30) * fVar34;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          iVar17 = iVar17 + 1;
          piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar16 = (int *)(param_1 + 0x3c);
          }
          local_208 = pfVar15;
        } while (iVar17 < *piVar16);
      }
      goto LAB_1480ecbb8;
    }
    iVar1 = *(int *)(lVar3 + 0x50 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10);
    iVar17 = *(int *)(lVar3 + 0x50 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10);
    if (iVar1 < iVar17) {
      iVar17 = iVar1;
    }
  }
  piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar16 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar16) {
    iVar1 = *(int *)(local_1c0 + 0x2b0);
    fVar34 = 1.0 / *(float *)(local_1c0 + 0x270);
    local_330 = (longlong *)((ulonglong)*(uint *)(local_1c0 + 700) * 0x10 + local_1c0 + 0x2c0);
    local_338 = (longlong *)
                (local_1c0 + (ulonglong)((~*(uint *)(local_1c0 + 700) & 1) << 4) + 0x2c0);
    lVar12 = lVar3 + 0x48;
    iVar19 = 0;
    do {
      fVar25 = DAT_14c84634c;
      fVar21 = DAT_14c846348;
      fVar20 = DAT_14c846344;
      pfVar15 = local_208 + local_1f8;
      fVar39 = *local_208;
      piVar16 = local_1e8 + local_1d8;
      iVar2 = *local_1e8;
      local_208 = pfVar15;
      local_1e8 = piVar16;
      if (((longlong)iVar2 < 0) || (iVar1 + iVar17 <= iVar2)) {
        fVar38 = local_118 * DAT_14c846338 +
                 local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 + local_108;
        fVar40 = fStack_114 * DAT_14c846338 +
                 fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330 + fStack_104;
        fVar41 = fStack_110 * DAT_14c846338 +
                 fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 + fStack_100;
        fVar35 = DAT_14c846338 * local_158 +
                 DAT_14c846330._4_4_ * local_168 + (float)DAT_14c846330 * local_178 + local_148;
        fVar36 = DAT_14c846338 * fStack_154 +
                 DAT_14c846330._4_4_ * fStack_164 + (float)DAT_14c846330 * fStack_174 + fStack_144;
        fVar37 = DAT_14c846338 * fStack_150 +
                 DAT_14c846330._4_4_ * fStack_160 + (float)DAT_14c846330 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          *local_2b0 = DAT_14c84633c._4_4_;
          *local_2a0 = fVar20;
          *local_290 = fVar21;
          *local_280 = fVar25;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        fVar20 = DAT_14c846330._4_4_;
        fVar21 = (float)DAT_14c846330;
        fVar25 = DAT_14c846338;
        if (local_20e != '\x01') goto LAB_1480eca86;
LAB_1480eca26:
        *local_270 = fVar21;
        *local_260 = fVar20;
        *local_250 = fVar25;
        local_270 = local_270 + local_268;
        local_260 = local_260 + local_258;
        local_250 = local_250 + local_248;
      }
      else if (iVar2 < iVar17) {
        lVar13 = *(longlong *)(lVar12 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10);
        lVar6 = (longlong)iVar2 * 0x30;
        pfVar15 = (float *)(lVar13 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        fVar38 = fVar25 * local_118 + fVar21 * local_128 + fVar20 * local_138 + local_108;
        fVar40 = fVar25 * fStack_114 + fVar21 * fStack_124 + fVar20 * fStack_134 + fStack_104;
        fVar41 = fVar25 * fStack_110 + fVar21 * fStack_120 + fVar20 * fStack_130 + fStack_100;
        lVar14 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10);
        pfVar15 = (float *)(lVar14 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        fVar35 = fVar25 * local_158 + fVar21 * local_168 + fVar20 * local_178 + local_148;
        fVar36 = fVar25 * fStack_154 + fVar21 * fStack_164 + fVar20 * fStack_174 + fStack_144;
        fVar37 = fVar25 * fStack_150 + fVar21 * fStack_160 + fVar20 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          pfVar15 = (float *)(lVar13 + lVar6);
          fVar20 = *pfVar15;
          fVar21 = pfVar15[1];
          fVar25 = pfVar15[2];
          fVar28 = pfVar15[3];
          local_318 = (float)uStack_2f0 * fVar21 * -1.0 +
                      local_2f8._4_4_ * fVar25 * 1.0 +
                      (float)local_2f8 * fVar28 * 1.0 + uStack_2f0._4_4_ * fVar20;
          fStack_314 = (float)uStack_2f0 * fVar20 * 1.0 +
                       local_2f8._4_4_ * fVar28 * 1.0 +
                       (float)local_2f8 * fVar25 * -1.0 + uStack_2f0._4_4_ * fVar21;
          fStack_310 = (float)uStack_2f0 * fVar28 * 1.0 +
                       local_2f8._4_4_ * fVar20 * -1.0 +
                       (float)local_2f8 * fVar21 * 1.0 + uStack_2f0._4_4_ * fVar25;
          fStack_30c = (float)uStack_2f0 * fVar25 * -1.0 +
                       local_2f8._4_4_ * fVar21 * -1.0 +
                       (float)local_2f8 * fVar20 * -1.0 + uStack_2f0._4_4_ * fVar28;
          pfVar15 = (float *)(lVar14 + lVar6);
          fVar20 = *pfVar15;
          fVar21 = pfVar15[1];
          fVar25 = pfVar15[2];
          fVar28 = pfVar15[3];
          local_328 = fStack_300 * fVar21 * -1.0 +
                      fStack_304 * fVar25 * 1.0 + local_308 * fVar28 * 1.0 + fStack_2fc * fVar20;
          fStack_324 = fStack_300 * fVar20 * 1.0 +
                       fStack_304 * fVar28 * 1.0 + local_308 * fVar25 * -1.0 + fStack_2fc * fVar21;
          fStack_320 = fStack_300 * fVar28 * 1.0 +
                       fStack_304 * fVar20 * -1.0 + local_308 * fVar21 * 1.0 + fStack_2fc * fVar25;
          fStack_31c = fStack_300 * fVar25 * -1.0 +
                       fStack_304 * fVar21 * -1.0 + local_308 * fVar20 * -1.0 + fStack_2fc * fVar28;
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar20 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar21 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar22._0_4_ = fVar21 + fVar20;
          auVar22._4_4_ = fVar21 + fVar20;
          auVar22._8_4_ = fVar20 + fVar21;
          auVar22._12_4_ = fVar20 + fVar21;
          auVar23 = sqrtps(auVar22,auVar22);
          auVar23 = divps(_DAT_1499314a0,auVar23);
          auVar26._0_4_ = auVar23._0_4_ * local_1b8;
          auVar26._4_4_ = auVar23._4_4_ * fStack_1b4;
          auVar26._8_4_ = auVar23._8_4_ * fStack_1b0;
          auVar26._12_4_ = auVar23._12_4_ * fStack_1ac;
          auVar5._4_4_ = -(uint)(1e-08 <= auVar22._4_4_);
          auVar5._0_4_ = -(uint)(1e-08 <= auVar22._0_4_);
          auVar5._8_4_ = -(uint)(1e-08 <= auVar22._8_4_);
          auVar5._12_4_ = -(uint)(1e-08 <= auVar22._12_4_);
          auVar23 = blendvps(_DAT_149932320,auVar26,auVar5);
          *local_2b0 = auVar23._0_4_;
          uVar4 = extractps(auVar23,1);
          *(undefined8 *)local_2a0 = uVar4;
          uVar4 = extractps(auVar23,2);
          *(undefined8 *)local_290 = uVar4;
          uVar4 = extractps(auVar23,3);
          *(undefined8 *)local_280 = uVar4;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        if (local_20e == '\x01') {
          pfVar15 = (float *)(*(longlong *)(lVar12 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10) + 0x20
                             + lVar6);
          fVar25 = *pfVar15;
          fVar28 = pfVar15[1];
          fVar29 = pfVar15[2];
          fVar21 = local_108 * 0.0 + fVar29 * local_118 + fVar28 * local_128 + fVar25 * local_138;
          fVar20 = fStack_104 * 0.0 +
                   fVar29 * fStack_114 + fVar28 * fStack_124 + fVar25 * fStack_134;
          fVar25 = fStack_100 * 0.0 +
                   fVar29 * fStack_110 + fVar28 * fStack_120 + fVar25 * fStack_130;
          pfVar15 = (float *)(*(longlong *)(lVar12 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10)
                              + 0x20 + lVar6);
          fVar30 = *pfVar15;
          fVar31 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar28 = local_148 * 0.0 + fVar32 * local_158 + fVar31 * local_168 + fVar30 * local_178;
          fVar29 = fStack_144 * 0.0 +
                   fVar32 * fStack_154 + fVar31 * fStack_164 + fVar30 * fStack_174;
          fVar30 = fStack_140 * 0.0 +
                   fVar32 * fStack_150 + fVar31 * fStack_160 + fVar30 * fStack_170;
LAB_1480ec9f8:
          fVar20 = (fVar20 - fVar29) * fVar39 + fVar29;
          fVar21 = (fVar21 - fVar28) * fVar39 + fVar28;
          fVar25 = (fVar25 - fVar30) * fVar39 + fVar30;
          goto LAB_1480eca26;
        }
      }
      else {
        lVar13 = *local_330;
        lVar6 = (longlong)(iVar2 - iVar17) * 0x30;
        pfVar15 = (float *)(lVar13 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        pfVar15 = (float *)(lVar13 + 0x20 + lVar6);
        fVar28 = *pfVar15;
        fVar29 = pfVar15[1];
        fVar30 = pfVar15[2];
        lVar14 = *local_338;
        pfVar15 = (float *)(lVar14 + 0x10 + lVar6);
        fVar37 = *pfVar15;
        fVar31 = pfVar15[1];
        fVar32 = pfVar15[2];
        pfVar15 = (float *)(lVar14 + 0x20 + lVar6);
        fVar33 = *pfVar15;
        fVar7 = pfVar15[1];
        fVar8 = pfVar15[2];
        fVar38 = fVar25 * local_118 + fVar21 * local_128 + fVar20 * local_138 + local_108;
        fVar40 = fVar25 * fStack_114 + fVar21 * fStack_124 + fVar20 * fStack_134 + fStack_104;
        fVar41 = fVar25 * fStack_110 + fVar21 * fStack_120 + fVar20 * fStack_130 + fStack_100;
        fVar35 = fVar32 * local_158 + fVar31 * local_168 + fVar37 * local_178 + local_148;
        fVar36 = fVar32 * fStack_154 + fVar31 * fStack_164 + fVar37 * fStack_174 + fStack_144;
        fVar37 = fVar32 * fStack_150 + fVar31 * fStack_160 + fVar37 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          pfVar15 = (float *)(lVar13 + lVar6);
          pfVar18 = (float *)(lVar14 + lVar6);
          fVar20 = *pfVar18;
          fVar21 = pfVar18[1];
          fVar25 = pfVar18[2];
          fVar31 = pfVar18[3];
          fVar32 = *pfVar15;
          fVar9 = pfVar15[1];
          fVar10 = pfVar15[2];
          fVar11 = pfVar15[3];
          local_318 = (float)uStack_2f0 * fVar9 * -1.0 +
                      local_2f8._4_4_ * fVar10 * 1.0 +
                      (float)local_2f8 * fVar11 * 1.0 + uStack_2f0._4_4_ * fVar32;
          fStack_314 = (float)uStack_2f0 * fVar32 * 1.0 +
                       local_2f8._4_4_ * fVar11 * 1.0 +
                       (float)local_2f8 * fVar10 * -1.0 + uStack_2f0._4_4_ * fVar9;
          fStack_310 = (float)uStack_2f0 * fVar11 * 1.0 +
                       local_2f8._4_4_ * fVar32 * -1.0 +
                       (float)local_2f8 * fVar9 * 1.0 + uStack_2f0._4_4_ * fVar10;
          fStack_30c = (float)uStack_2f0 * fVar10 * -1.0 +
                       local_2f8._4_4_ * fVar9 * -1.0 +
                       (float)local_2f8 * fVar32 * -1.0 + uStack_2f0._4_4_ * fVar11;
          local_328 = fStack_300 * fVar21 * -1.0 +
                      fStack_304 * fVar25 * 1.0 + local_308 * fVar31 * 1.0 + fStack_2fc * fVar20;
          fStack_324 = fStack_300 * fVar20 * 1.0 +
                       fStack_304 * fVar31 * 1.0 + local_308 * fVar25 * -1.0 + fStack_2fc * fVar21;
          fStack_320 = fStack_300 * fVar31 * 1.0 +
                       fStack_304 * fVar20 * -1.0 + local_308 * fVar21 * 1.0 + fStack_2fc * fVar25;
          fStack_31c = fStack_300 * fVar25 * -1.0 +
                       fStack_304 * fVar21 * -1.0 + local_308 * fVar20 * -1.0 + fStack_2fc * fVar31;
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar20 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar21 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar24._0_4_ = fVar21 + fVar20;
          auVar24._4_4_ = fVar21 + fVar20;
          auVar24._8_4_ = fVar20 + fVar21;
          auVar24._12_4_ = fVar20 + fVar21;
          auVar23 = sqrtps(auVar24,auVar24);
          auVar23 = divps(_DAT_1499314a0,auVar23);
          auVar27._0_4_ = auVar23._0_4_ * local_1b8;
          auVar27._4_4_ = auVar23._4_4_ * fStack_1b4;
          auVar27._8_4_ = auVar23._8_4_ * fStack_1b0;
          auVar27._12_4_ = auVar23._12_4_ * fStack_1ac;
          auVar23._4_4_ = -(uint)(1e-08 <= auVar24._4_4_);
          auVar23._0_4_ = -(uint)(1e-08 <= auVar24._0_4_);
          auVar23._8_4_ = -(uint)(1e-08 <= auVar24._8_4_);
          auVar23._12_4_ = -(uint)(1e-08 <= auVar24._12_4_);
          auVar23 = blendvps(_DAT_149932320,auVar27,auVar23);
          *local_2b0 = auVar23._0_4_;
          uVar4 = extractps(auVar23,1);
          *(undefined8 *)local_2a0 = uVar4;
          uVar4 = extractps(auVar23,2);
          *(undefined8 *)local_290 = uVar4;
          uVar4 = extractps(auVar23,3);
          *(undefined8 *)local_280 = uVar4;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        if (local_20e == '\x01') {
          fVar21 = local_108 * 0.0 + fVar30 * local_118 + fVar29 * local_128 + fVar28 * local_138;
          fVar20 = fStack_104 * 0.0 +
                   fVar30 * fStack_114 + fVar29 * fStack_124 + fVar28 * fStack_134;
          fVar25 = fStack_100 * 0.0 +
                   fVar30 * fStack_110 + fVar29 * fStack_120 + fVar28 * fStack_130;
          fVar28 = local_148 * 0.0 + fVar8 * local_158 + fVar7 * local_168 + fVar33 * local_178;
          fVar29 = fStack_144 * 0.0 + fVar8 * fStack_154 + fVar7 * fStack_164 + fVar33 * fStack_174;
          fVar30 = fStack_140 * 0.0 + fVar8 * fStack_150 + fVar7 * fStack_160 + fVar33 * fStack_170;
          goto LAB_1480ec9f8;
        }
      }
LAB_1480eca86:
      fVar20 = (fVar41 - fVar37) * fVar39 + fVar37;
      fVar21 = (fVar40 - fVar36) * fVar39 + fVar36;
      fVar39 = (fVar38 - fVar35) * fVar39 + fVar35;
      if (local_210 == '\x01') {
        *local_2e0 = fVar39;
        *local_2d0 = fVar21;
        *local_2c0 = fVar20;
        local_2e0 = local_2e0 + local_2d8;
        local_2d0 = local_2d0 + local_2c8;
        local_2c0 = local_2c0 + local_2b8;
      }
      if (local_20d == '\x01') {
        *local_240 = (fVar39 - fVar35) * fVar34;
        *local_230 = (fVar21 - fVar36) * fVar34;
        *local_220 = (fVar20 - fVar37) * fVar34;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      iVar19 = iVar19 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
    } while (iVar19 < *piVar16);
  }
LAB_1480ecbb8:
  if (lVar3 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ecf3a FUN_1480ecf3a body=202 status=ok
// SIG undefined FUN_1480ecf3a(void)

void FUN_1480ecf3a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad98e20;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ed006 FUN_1480ed006 body=29 status=ok
// SIG undefined FUN_1480ed006(void)

undefined8 FUN_1480ed006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ed038 FUN_1480ed038 body=93 status=ok
// SIG undefined FUN_1480ed038(void)

void FUN_1480ed038(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ed096 FUN_1480ed096 body=93 status=ok
// SIG undefined FUN_1480ed096(void)

void FUN_1480ed096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad98e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ed0f4 FUN_1480ed0f4 body=126 status=ok
// SIG undefined FUN_1480ed0f4(void)

void FUN_1480ed0f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad98e20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ed163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ed17a FUN_1480ed17a body=19 status=ok
// SIG undefined FUN_1480ed17a(void)

undefined1 FUN_1480ed17a(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ed18e(param_2);
  return 1;
}



// FUNCTION 1480ed18e FUN_1480ed18e body=4155 status=ok
// SIG undefined FUN_1480ed18e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480ed18e(char *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong *local_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  float *local_2e0;
  int local_2d8;
  float *local_2d0;
  int local_2c8;
  float *local_2c0;
  int local_2b8;
  float *local_2b0;
  int local_2a8;
  float *local_2a0;
  int local_298;
  float *local_290;
  int local_288;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  char local_210;
  byte local_20f;
  char local_20e;
  char local_20d;
  float *local_208;
  undefined8 uStack_200;
  int local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_140982196(local_1c8,param_1);
  local_1d8 = 0;
  local_1e8 = (int *)0x0;
  uStack_1e0 = 0;
  FUN_144a98d08(&local_1e8,param_1);
  local_1f8 = 0;
  local_208 = (float *)0x0;
  uStack_200 = 0;
  FUN_144a98dce(&local_208,param_1);
  FUN_1480e2b22(&local_2e0,param_1);
  FUN_144a928e2(&local_138,local_1c0 + 0xf0);
  FUN_144a928e2(&local_178,local_1c0 + 0x1f0);
  if (local_20f == 1) {
    local_1b8 = local_138;
    fStack_1b4 = fStack_134;
    fStack_1b0 = fStack_130;
    fStack_1ac = fStack_12c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_2f8);
  }
  else {
    local_2f8 = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    uStack_2f0 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  }
  if ((local_20f & 1) == 0) {
    local_308 = DAT_14c84633c._4_4_;
    fStack_304 = DAT_14c846344;
    fStack_300 = DAT_14c846348;
    fStack_2fc = DAT_14c84634c;
  }
  else {
    local_1b8 = local_178;
    fStack_1b4 = fStack_174;
    fStack_1b0 = fStack_170;
    fStack_1ac = fStack_16c;
    FUN_144afd82e(&local_1b8);
    FUN_144afdc36(&local_1b8,&local_308);
  }
  lVar3 = local_1c0;
  lVar12 = FUN_14479d2ce(local_1c0);
  if (lVar12 != 0) {
    FUN_144a74fb4();
  }
  lVar12 = FUN_14479d2ce(lVar3 + 0x50);
  lVar13 = FUN_14479d2ce(lVar3);
  if (lVar13 != 0) {
    lVar14 = FUN_144a74fb4();
    if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
       (lVar14 = FUN_144a81888(lVar13), lVar14 != 0)) {
      FUN_1417c143e(lVar13,*(undefined4 *)(lVar3 + 0x31c),0);
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x60);
  if (lVar3 == 0) {
    iVar17 = 0;
    if (lVar12 == 0) goto LAB_1480edeeb;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 8));
    if (lVar12 == 0) {
LAB_1480edeeb:
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar16) {
        fVar34 = 1.0 / *(float *)(local_1c0 + 0x270);
        iVar17 = 0;
        do {
          fVar25 = DAT_14c84634c;
          fVar21 = DAT_14c846348;
          fVar20 = DAT_14c846344;
          pfVar15 = local_208 + local_1f8;
          fVar39 = *local_208;
          fVar41 = local_138 * (float)DAT_14c846330;
          fVar35 = fStack_134 * (float)DAT_14c846330;
          fVar38 = fStack_130 * (float)DAT_14c846330;
          fVar31 = local_128 * DAT_14c846330._4_4_;
          fVar32 = fStack_124 * DAT_14c846330._4_4_;
          fVar33 = fStack_120 * DAT_14c846330._4_4_;
          fVar37 = local_118 * DAT_14c846338;
          fVar36 = fStack_114 * DAT_14c846338;
          fVar40 = fStack_110 * DAT_14c846338;
          fVar28 = DAT_14c846338 * local_158 +
                   DAT_14c846330._4_4_ * local_168 + (float)DAT_14c846330 * local_178 + local_148;
          fVar29 = DAT_14c846338 * fStack_154 +
                   DAT_14c846330._4_4_ * fStack_164 + (float)DAT_14c846330 * fStack_174 + fStack_144
          ;
          fVar30 = DAT_14c846338 * fStack_150 +
                   DAT_14c846330._4_4_ * fStack_160 + (float)DAT_14c846330 * fStack_170 + fStack_140
          ;
          if (local_20f == 1) {
            *local_2b0 = DAT_14c84633c._4_4_;
            *local_2a0 = fVar20;
            *local_290 = fVar21;
            *local_280 = fVar25;
            local_2b0 = local_2b0 + local_2a8;
            local_2a0 = local_2a0 + local_298;
            local_290 = local_290 + local_288;
            local_280 = local_280 + local_278;
          }
          fVar20 = ((fVar40 + fVar33 + fVar38 + fStack_100) - fVar30) * fVar39 + fVar30;
          fVar21 = ((fVar36 + fVar32 + fVar35 + fStack_104) - fVar29) * fVar39 + fVar29;
          fVar39 = ((fVar37 + fVar31 + fVar41 + local_108) - fVar28) * fVar39 + fVar28;
          if (local_210 == '\x01') {
            *local_2e0 = fVar39;
            *local_2d0 = fVar21;
            *local_2c0 = fVar20;
            local_2e0 = local_2e0 + local_2d8;
            local_2d0 = local_2d0 + local_2c8;
            local_2c0 = local_2c0 + local_2b8;
          }
          if (local_20d == '\x01') {
            *local_240 = (fVar39 - fVar28) * fVar34;
            *local_230 = (fVar21 - fVar29) * fVar34;
            *local_220 = (fVar20 - fVar30) * fVar34;
            local_240 = local_240 + local_238;
            local_230 = local_230 + local_228;
            local_220 = local_220 + local_218;
          }
          iVar17 = iVar17 + 1;
          piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar16 = (int *)(param_1 + 0x3c);
          }
          local_208 = pfVar15;
        } while (iVar17 < *piVar16);
      }
      goto LAB_1480ede48;
    }
    iVar1 = *(int *)(lVar3 + 0x50 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10);
    iVar17 = *(int *)(lVar3 + 0x50 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10);
    if (iVar1 < iVar17) {
      iVar17 = iVar1;
    }
  }
  piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar16 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar16) {
    iVar1 = *(int *)(local_1c0 + 0x2b0);
    fVar34 = 1.0 / *(float *)(local_1c0 + 0x270);
    local_330 = (longlong *)((ulonglong)*(uint *)(local_1c0 + 700) * 0x10 + local_1c0 + 0x2c0);
    local_338 = (longlong *)
                (local_1c0 + (ulonglong)((~*(uint *)(local_1c0 + 700) & 1) << 4) + 0x2c0);
    lVar12 = lVar3 + 0x48;
    iVar19 = 0;
    do {
      fVar25 = DAT_14c84634c;
      fVar21 = DAT_14c846348;
      fVar20 = DAT_14c846344;
      pfVar15 = local_208 + local_1f8;
      fVar39 = *local_208;
      piVar16 = local_1e8 + local_1d8;
      iVar2 = *local_1e8;
      local_208 = pfVar15;
      local_1e8 = piVar16;
      if (((longlong)iVar2 < 0) || (iVar1 + iVar17 <= iVar2)) {
        fVar38 = local_118 * DAT_14c846338 +
                 local_128 * DAT_14c846330._4_4_ + local_138 * (float)DAT_14c846330 + local_108;
        fVar40 = fStack_114 * DAT_14c846338 +
                 fStack_124 * DAT_14c846330._4_4_ + fStack_134 * (float)DAT_14c846330 + fStack_104;
        fVar41 = fStack_110 * DAT_14c846338 +
                 fStack_120 * DAT_14c846330._4_4_ + fStack_130 * (float)DAT_14c846330 + fStack_100;
        fVar35 = DAT_14c846338 * local_158 +
                 DAT_14c846330._4_4_ * local_168 + (float)DAT_14c846330 * local_178 + local_148;
        fVar36 = DAT_14c846338 * fStack_154 +
                 DAT_14c846330._4_4_ * fStack_164 + (float)DAT_14c846330 * fStack_174 + fStack_144;
        fVar37 = DAT_14c846338 * fStack_150 +
                 DAT_14c846330._4_4_ * fStack_160 + (float)DAT_14c846330 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          *local_2b0 = DAT_14c84633c._4_4_;
          *local_2a0 = fVar20;
          *local_290 = fVar21;
          *local_280 = fVar25;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        fVar20 = DAT_14c846330._4_4_;
        fVar21 = (float)DAT_14c846330;
        fVar25 = DAT_14c846338;
        if (local_20e != '\x01') goto LAB_1480edd16;
LAB_1480edcb6:
        *local_270 = fVar21;
        *local_260 = fVar20;
        *local_250 = fVar25;
        local_270 = local_270 + local_268;
        local_260 = local_260 + local_258;
        local_250 = local_250 + local_248;
      }
      else if (iVar2 < iVar17) {
        lVar13 = *(longlong *)(lVar12 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10);
        lVar6 = (longlong)iVar2 * 0x30;
        pfVar15 = (float *)(lVar13 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        fVar38 = fVar25 * local_118 + fVar21 * local_128 + fVar20 * local_138 + local_108;
        fVar40 = fVar25 * fStack_114 + fVar21 * fStack_124 + fVar20 * fStack_134 + fStack_104;
        fVar41 = fVar25 * fStack_110 + fVar21 * fStack_120 + fVar20 * fStack_130 + fStack_100;
        lVar14 = *(longlong *)(lVar12 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10);
        pfVar15 = (float *)(lVar14 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        fVar35 = fVar25 * local_158 + fVar21 * local_168 + fVar20 * local_178 + local_148;
        fVar36 = fVar25 * fStack_154 + fVar21 * fStack_164 + fVar20 * fStack_174 + fStack_144;
        fVar37 = fVar25 * fStack_150 + fVar21 * fStack_160 + fVar20 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          pfVar15 = (float *)(lVar13 + lVar6);
          fVar20 = *pfVar15;
          fVar21 = pfVar15[1];
          fVar25 = pfVar15[2];
          fVar28 = pfVar15[3];
          local_318 = (float)uStack_2f0 * fVar21 * -1.0 +
                      local_2f8._4_4_ * fVar25 * 1.0 +
                      (float)local_2f8 * fVar28 * 1.0 + uStack_2f0._4_4_ * fVar20;
          fStack_314 = (float)uStack_2f0 * fVar20 * 1.0 +
                       local_2f8._4_4_ * fVar28 * 1.0 +
                       (float)local_2f8 * fVar25 * -1.0 + uStack_2f0._4_4_ * fVar21;
          fStack_310 = (float)uStack_2f0 * fVar28 * 1.0 +
                       local_2f8._4_4_ * fVar20 * -1.0 +
                       (float)local_2f8 * fVar21 * 1.0 + uStack_2f0._4_4_ * fVar25;
          fStack_30c = (float)uStack_2f0 * fVar25 * -1.0 +
                       local_2f8._4_4_ * fVar21 * -1.0 +
                       (float)local_2f8 * fVar20 * -1.0 + uStack_2f0._4_4_ * fVar28;
          pfVar15 = (float *)(lVar14 + lVar6);
          fVar20 = *pfVar15;
          fVar21 = pfVar15[1];
          fVar25 = pfVar15[2];
          fVar28 = pfVar15[3];
          local_328 = fStack_300 * fVar21 * -1.0 +
                      fStack_304 * fVar25 * 1.0 + local_308 * fVar28 * 1.0 + fStack_2fc * fVar20;
          fStack_324 = fStack_300 * fVar20 * 1.0 +
                       fStack_304 * fVar28 * 1.0 + local_308 * fVar25 * -1.0 + fStack_2fc * fVar21;
          fStack_320 = fStack_300 * fVar28 * 1.0 +
                       fStack_304 * fVar20 * -1.0 + local_308 * fVar21 * 1.0 + fStack_2fc * fVar25;
          fStack_31c = fStack_300 * fVar25 * -1.0 +
                       fStack_304 * fVar21 * -1.0 + local_308 * fVar20 * -1.0 + fStack_2fc * fVar28;
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar20 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar21 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar22._0_4_ = fVar21 + fVar20;
          auVar22._4_4_ = fVar21 + fVar20;
          auVar22._8_4_ = fVar20 + fVar21;
          auVar22._12_4_ = fVar20 + fVar21;
          auVar23 = sqrtps(auVar22,auVar22);
          auVar23 = divps(_DAT_1499314a0,auVar23);
          auVar26._0_4_ = auVar23._0_4_ * local_1b8;
          auVar26._4_4_ = auVar23._4_4_ * fStack_1b4;
          auVar26._8_4_ = auVar23._8_4_ * fStack_1b0;
          auVar26._12_4_ = auVar23._12_4_ * fStack_1ac;
          auVar5._4_4_ = -(uint)(1e-08 <= auVar22._4_4_);
          auVar5._0_4_ = -(uint)(1e-08 <= auVar22._0_4_);
          auVar5._8_4_ = -(uint)(1e-08 <= auVar22._8_4_);
          auVar5._12_4_ = -(uint)(1e-08 <= auVar22._12_4_);
          auVar23 = blendvps(_DAT_149932320,auVar26,auVar5);
          *local_2b0 = auVar23._0_4_;
          uVar4 = extractps(auVar23,1);
          *(undefined8 *)local_2a0 = uVar4;
          uVar4 = extractps(auVar23,2);
          *(undefined8 *)local_290 = uVar4;
          uVar4 = extractps(auVar23,3);
          *(undefined8 *)local_280 = uVar4;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        if (local_20e == '\x01') {
          pfVar15 = (float *)(*(longlong *)(lVar12 + (longlong)*(int *)(lVar3 + 0x1c) * 0x10) + 0x20
                             + lVar6);
          fVar25 = *pfVar15;
          fVar28 = pfVar15[1];
          fVar29 = pfVar15[2];
          fVar21 = local_108 * 0.0 + fVar29 * local_118 + fVar28 * local_128 + fVar25 * local_138;
          fVar20 = fStack_104 * 0.0 +
                   fVar29 * fStack_114 + fVar28 * fStack_124 + fVar25 * fStack_134;
          fVar25 = fStack_100 * 0.0 +
                   fVar29 * fStack_110 + fVar28 * fStack_120 + fVar25 * fStack_130;
          pfVar15 = (float *)(*(longlong *)(lVar12 + ((longlong)*(int *)(lVar3 + 0x1c) ^ 1U) * 0x10)
                              + 0x20 + lVar6);
          fVar30 = *pfVar15;
          fVar31 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar28 = local_148 * 0.0 + fVar32 * local_158 + fVar31 * local_168 + fVar30 * local_178;
          fVar29 = fStack_144 * 0.0 +
                   fVar32 * fStack_154 + fVar31 * fStack_164 + fVar30 * fStack_174;
          fVar30 = fStack_140 * 0.0 +
                   fVar32 * fStack_150 + fVar31 * fStack_160 + fVar30 * fStack_170;
LAB_1480edc88:
          fVar20 = (fVar20 - fVar29) * fVar39 + fVar29;
          fVar21 = (fVar21 - fVar28) * fVar39 + fVar28;
          fVar25 = (fVar25 - fVar30) * fVar39 + fVar30;
          goto LAB_1480edcb6;
        }
      }
      else {
        lVar13 = *local_330;
        lVar6 = (longlong)(iVar2 - iVar17) * 0x30;
        pfVar15 = (float *)(lVar13 + 0x10 + lVar6);
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        fVar25 = pfVar15[2];
        pfVar15 = (float *)(lVar13 + 0x20 + lVar6);
        fVar28 = *pfVar15;
        fVar29 = pfVar15[1];
        fVar30 = pfVar15[2];
        lVar14 = *local_338;
        pfVar15 = (float *)(lVar14 + 0x10 + lVar6);
        fVar37 = *pfVar15;
        fVar31 = pfVar15[1];
        fVar32 = pfVar15[2];
        pfVar15 = (float *)(lVar14 + 0x20 + lVar6);
        fVar33 = *pfVar15;
        fVar7 = pfVar15[1];
        fVar8 = pfVar15[2];
        fVar38 = fVar25 * local_118 + fVar21 * local_128 + fVar20 * local_138 + local_108;
        fVar40 = fVar25 * fStack_114 + fVar21 * fStack_124 + fVar20 * fStack_134 + fStack_104;
        fVar41 = fVar25 * fStack_110 + fVar21 * fStack_120 + fVar20 * fStack_130 + fStack_100;
        fVar35 = fVar32 * local_158 + fVar31 * local_168 + fVar37 * local_178 + local_148;
        fVar36 = fVar32 * fStack_154 + fVar31 * fStack_164 + fVar37 * fStack_174 + fStack_144;
        fVar37 = fVar32 * fStack_150 + fVar31 * fStack_160 + fVar37 * fStack_170 + fStack_140;
        if (local_20f == 1) {
          pfVar15 = (float *)(lVar13 + lVar6);
          pfVar18 = (float *)(lVar14 + lVar6);
          fVar20 = *pfVar18;
          fVar21 = pfVar18[1];
          fVar25 = pfVar18[2];
          fVar31 = pfVar18[3];
          fVar32 = *pfVar15;
          fVar9 = pfVar15[1];
          fVar10 = pfVar15[2];
          fVar11 = pfVar15[3];
          local_318 = (float)uStack_2f0 * fVar9 * -1.0 +
                      local_2f8._4_4_ * fVar10 * 1.0 +
                      (float)local_2f8 * fVar11 * 1.0 + uStack_2f0._4_4_ * fVar32;
          fStack_314 = (float)uStack_2f0 * fVar32 * 1.0 +
                       local_2f8._4_4_ * fVar11 * 1.0 +
                       (float)local_2f8 * fVar10 * -1.0 + uStack_2f0._4_4_ * fVar9;
          fStack_310 = (float)uStack_2f0 * fVar11 * 1.0 +
                       local_2f8._4_4_ * fVar32 * -1.0 +
                       (float)local_2f8 * fVar9 * 1.0 + uStack_2f0._4_4_ * fVar10;
          fStack_30c = (float)uStack_2f0 * fVar10 * -1.0 +
                       local_2f8._4_4_ * fVar9 * -1.0 +
                       (float)local_2f8 * fVar32 * -1.0 + uStack_2f0._4_4_ * fVar11;
          local_328 = fStack_300 * fVar21 * -1.0 +
                      fStack_304 * fVar25 * 1.0 + local_308 * fVar31 * 1.0 + fStack_2fc * fVar20;
          fStack_324 = fStack_300 * fVar20 * 1.0 +
                       fStack_304 * fVar31 * 1.0 + local_308 * fVar25 * -1.0 + fStack_2fc * fVar21;
          fStack_320 = fStack_300 * fVar31 * 1.0 +
                       fStack_304 * fVar20 * -1.0 + local_308 * fVar21 * 1.0 + fStack_2fc * fVar25;
          fStack_31c = fStack_300 * fVar25 * -1.0 +
                       fStack_304 * fVar21 * -1.0 + local_308 * fVar20 * -1.0 + fStack_2fc * fVar31;
          FUN_144afe1e6(&local_1b8,&local_328,&local_318);
          fVar20 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          fVar21 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
          auVar24._0_4_ = fVar21 + fVar20;
          auVar24._4_4_ = fVar21 + fVar20;
          auVar24._8_4_ = fVar20 + fVar21;
          auVar24._12_4_ = fVar20 + fVar21;
          auVar23 = sqrtps(auVar24,auVar24);
          auVar23 = divps(_DAT_1499314a0,auVar23);
          auVar27._0_4_ = auVar23._0_4_ * local_1b8;
          auVar27._4_4_ = auVar23._4_4_ * fStack_1b4;
          auVar27._8_4_ = auVar23._8_4_ * fStack_1b0;
          auVar27._12_4_ = auVar23._12_4_ * fStack_1ac;
          auVar23._4_4_ = -(uint)(1e-08 <= auVar24._4_4_);
          auVar23._0_4_ = -(uint)(1e-08 <= auVar24._0_4_);
          auVar23._8_4_ = -(uint)(1e-08 <= auVar24._8_4_);
          auVar23._12_4_ = -(uint)(1e-08 <= auVar24._12_4_);
          auVar23 = blendvps(_DAT_149932320,auVar27,auVar23);
          *local_2b0 = auVar23._0_4_;
          uVar4 = extractps(auVar23,1);
          *(undefined8 *)local_2a0 = uVar4;
          uVar4 = extractps(auVar23,2);
          *(undefined8 *)local_290 = uVar4;
          uVar4 = extractps(auVar23,3);
          *(undefined8 *)local_280 = uVar4;
          local_2b0 = local_2b0 + local_2a8;
          local_2a0 = local_2a0 + local_298;
          local_290 = local_290 + local_288;
          local_280 = local_280 + local_278;
        }
        if (local_20e == '\x01') {
          fVar21 = local_108 * 0.0 + fVar30 * local_118 + fVar29 * local_128 + fVar28 * local_138;
          fVar20 = fStack_104 * 0.0 +
                   fVar30 * fStack_114 + fVar29 * fStack_124 + fVar28 * fStack_134;
          fVar25 = fStack_100 * 0.0 +
                   fVar30 * fStack_110 + fVar29 * fStack_120 + fVar28 * fStack_130;
          fVar28 = local_148 * 0.0 + fVar8 * local_158 + fVar7 * local_168 + fVar33 * local_178;
          fVar29 = fStack_144 * 0.0 + fVar8 * fStack_154 + fVar7 * fStack_164 + fVar33 * fStack_174;
          fVar30 = fStack_140 * 0.0 + fVar8 * fStack_150 + fVar7 * fStack_160 + fVar33 * fStack_170;
          goto LAB_1480edc88;
        }
      }
LAB_1480edd16:
      fVar20 = (fVar41 - fVar37) * fVar39 + fVar37;
      fVar21 = (fVar40 - fVar36) * fVar39 + fVar36;
      fVar39 = (fVar38 - fVar35) * fVar39 + fVar35;
      if (local_210 == '\x01') {
        *local_2e0 = fVar39;
        *local_2d0 = fVar21;
        *local_2c0 = fVar20;
        local_2e0 = local_2e0 + local_2d8;
        local_2d0 = local_2d0 + local_2c8;
        local_2c0 = local_2c0 + local_2b8;
      }
      if (local_20d == '\x01') {
        *local_240 = (fVar39 - fVar35) * fVar34;
        *local_230 = (fVar21 - fVar36) * fVar34;
        *local_220 = (fVar20 - fVar37) * fVar34;
        local_240 = local_240 + local_238;
        local_230 = local_230 + local_228;
        local_220 = local_220 + local_218;
      }
      iVar19 = iVar19 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
    } while (iVar19 < *piVar16);
  }
LAB_1480ede48:
  if (lVar3 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ee770 FUN_1480ee770 body=29 status=ok
// SIG undefined FUN_1480ee770(void)

undefined8 FUN_1480ee770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ee7a2 FUN_1480ee7a2 body=93 status=ok
// SIG undefined FUN_1480ee7a2(void)

void FUN_1480ee7a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad994b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ee800 FUN_1480ee800 body=93 status=ok
// SIG undefined FUN_1480ee800(void)

void FUN_1480ee800(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad994b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ee85e FUN_1480ee85e body=126 status=ok
// SIG undefined FUN_1480ee85e(void)

void FUN_1480ee85e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad994b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ee8cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ee8e4 FUN_1480ee8e4 body=19 status=ok
// SIG undefined FUN_1480ee8e4(void)

undefined1 FUN_1480ee8e4(undefined8 param_1,undefined8 param_2)

{
  FUN_14393bcce(param_2);
  return 1;
}



// FUNCTION 1480ee8f8 FUN_1480ee8f8 body=29 status=ok
// SIG undefined FUN_1480ee8f8(void)

undefined8 FUN_1480ee8f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ee92a FUN_1480ee92a body=93 status=ok
// SIG undefined FUN_1480ee92a(void)

void FUN_1480ee92a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ee988 FUN_1480ee988 body=93 status=ok
// SIG undefined FUN_1480ee988(void)

void FUN_1480ee988(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99520;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ee9e6 FUN_1480ee9e6 body=126 status=ok
// SIG undefined FUN_1480ee9e6(void)

void FUN_1480ee9e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99520;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480eea55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480eea6c FUN_1480eea6c body=19 status=ok
// SIG undefined FUN_1480eea6c(void)

undefined1 FUN_1480eea6c(undefined8 param_1,undefined8 param_2)

{
  FUN_14393c9fa(param_2);
  return 1;
}



// FUNCTION 1480eea80 FUN_1480eea80 body=202 status=ok
// SIG undefined FUN_1480eea80(void)

void FUN_1480eea80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99590;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480eeb4c FUN_1480eeb4c body=202 status=ok
// SIG undefined FUN_1480eeb4c(void)

void FUN_1480eeb4c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99600;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480eec18 FUN_1480eec18 body=29 status=ok
// SIG undefined FUN_1480eec18(void)

undefined8 FUN_1480eec18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480eec4a FUN_1480eec4a body=93 status=ok
// SIG undefined FUN_1480eec4a(void)

void FUN_1480eec4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480eeca8 FUN_1480eeca8 body=93 status=ok
// SIG undefined FUN_1480eeca8(void)

void FUN_1480eeca8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480eed06 FUN_1480eed06 body=126 status=ok
// SIG undefined FUN_1480eed06(void)

void FUN_1480eed06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99590;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480eed75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480eed8c FUN_1480eed8c body=19 status=ok
// SIG undefined FUN_1480eed8c(void)

undefined1 FUN_1480eed8c(undefined8 param_1,undefined8 param_2)

{
  FUN_14393d59a(param_2);
  return 1;
}



// FUNCTION 1480eeda0 FUN_1480eeda0 body=29 status=ok
// SIG undefined FUN_1480eeda0(void)

undefined8 FUN_1480eeda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480eedd2 FUN_1480eedd2 body=93 status=ok
// SIG undefined FUN_1480eedd2(void)

void FUN_1480eedd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480eee30 FUN_1480eee30 body=93 status=ok
// SIG undefined FUN_1480eee30(void)

void FUN_1480eee30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480eee8e FUN_1480eee8e body=126 status=ok
// SIG undefined FUN_1480eee8e(void)

void FUN_1480eee8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99600;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480eeefd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480eef14 FUN_1480eef14 body=19 status=ok
// SIG undefined FUN_1480eef14(void)

undefined1 FUN_1480eef14(undefined8 param_1,undefined8 param_2)

{
  FUN_14393e56a(param_2);
  return 1;
}



// FUNCTION 1480eef28 FUN_1480eef28 body=202 status=ok
// SIG undefined FUN_1480eef28(void)

void FUN_1480eef28(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99670;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480eeff4 FUN_1480eeff4 body=202 status=ok
// SIG undefined FUN_1480eeff4(void)

void FUN_1480eeff4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad996e0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480ef0c0 FUN_1480ef0c0 body=29 status=ok
// SIG undefined FUN_1480ef0c0(void)

undefined8 FUN_1480ef0c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ef0f2 FUN_1480ef0f2 body=93 status=ok
// SIG undefined FUN_1480ef0f2(void)

void FUN_1480ef0f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ef150 FUN_1480ef150 body=93 status=ok
// SIG undefined FUN_1480ef150(void)

void FUN_1480ef150(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ef1ae FUN_1480ef1ae body=126 status=ok
// SIG undefined FUN_1480ef1ae(void)

void FUN_1480ef1ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99670;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ef21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ef234 FUN_1480ef234 body=19 status=ok
// SIG undefined FUN_1480ef234(void)

undefined1 FUN_1480ef234(undefined8 param_1,undefined8 param_2)

{
  FUN_14393f286(param_2);
  return 1;
}



// FUNCTION 1480ef248 FUN_1480ef248 body=29 status=ok
// SIG undefined FUN_1480ef248(void)

undefined8 FUN_1480ef248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ef27a FUN_1480ef27a body=93 status=ok
// SIG undefined FUN_1480ef27a(void)

void FUN_1480ef27a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad996e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ef2d8 FUN_1480ef2d8 body=93 status=ok
// SIG undefined FUN_1480ef2d8(void)

void FUN_1480ef2d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad996e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480ef336 FUN_1480ef336 body=126 status=ok
// SIG undefined FUN_1480ef336(void)

void FUN_1480ef336(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad996e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480ef3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480ef3bc FUN_1480ef3bc body=19 status=ok
// SIG undefined FUN_1480ef3bc(void)

undefined1 FUN_1480ef3bc(undefined8 param_1,undefined8 param_2)

{
  FUN_14393ffa6(param_2);
  return 1;
}



// FUNCTION 1480ef976 FUN_1480ef976 body=29 status=ok
// SIG undefined FUN_1480ef976(void)

undefined8 FUN_1480ef976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ef9a8 FUN_1480ef9a8 body=93 status=ok
// SIG undefined FUN_1480ef9a8(void)

void FUN_1480ef9a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480efa06 FUN_1480efa06 body=93 status=ok
// SIG undefined FUN_1480efa06(void)

void FUN_1480efa06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480efa64 FUN_1480efa64 body=126 status=ok
// SIG undefined FUN_1480efa64(void)

void FUN_1480efa64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99750;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480efad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480efaea FUN_1480efaea body=19 status=ok
// SIG undefined FUN_1480efaea(void)

undefined1 FUN_1480efaea(undefined8 param_1,undefined8 param_2)

{
  FUN_143940c48(param_2);
  return 1;
}



// FUNCTION 1480efafe FUN_1480efafe body=29 status=ok
// SIG undefined FUN_1480efafe(void)

undefined8 FUN_1480efafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480efb30 FUN_1480efb30 body=93 status=ok
// SIG undefined FUN_1480efb30(void)

void FUN_1480efb30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad997c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480efb8e FUN_1480efb8e body=93 status=ok
// SIG undefined FUN_1480efb8e(void)

void FUN_1480efb8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad997c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480efbec FUN_1480efbec body=126 status=ok
// SIG undefined FUN_1480efbec(void)

void FUN_1480efbec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad997c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480efc5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480efc72 FUN_1480efc72 body=19 status=ok
// SIG undefined FUN_1480efc72(void)

undefined1 FUN_1480efc72(undefined8 param_1,undefined8 param_2)

{
  FUN_14394125e(param_2);
  return 1;
}



// FUNCTION 1480efe1e FUN_1480efe1e body=29 status=ok
// SIG undefined FUN_1480efe1e(void)

undefined8 FUN_1480efe1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480efe50 FUN_1480efe50 body=93 status=ok
// SIG undefined FUN_1480efe50(void)

void FUN_1480efe50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480efeae FUN_1480efeae body=93 status=ok
// SIG undefined FUN_1480efeae(void)

void FUN_1480efeae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480eff0c FUN_1480eff0c body=126 status=ok
// SIG undefined FUN_1480eff0c(void)

void FUN_1480eff0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480eff7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480eff92 FUN_1480eff92 body=19 status=ok
// SIG undefined FUN_1480eff92(void)

undefined1 FUN_1480eff92(undefined8 param_1,undefined8 param_2)

{
  FUN_143941874(param_2);
  return 1;
}



// FUNCTION 1480effa6 FUN_1480effa6 body=29 status=ok
// SIG undefined FUN_1480effa6(void)

undefined8 FUN_1480effa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480effd8 FUN_1480effd8 body=93 status=ok
// SIG undefined FUN_1480effd8(void)

void FUN_1480effd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad998a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0036 FUN_1480f0036 body=93 status=ok
// SIG undefined FUN_1480f0036(void)

void FUN_1480f0036(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad998a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0094 FUN_1480f0094 body=126 status=ok
// SIG undefined FUN_1480f0094(void)

void FUN_1480f0094(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad998a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f011a FUN_1480f011a body=19 status=ok
// SIG undefined FUN_1480f011a(void)

undefined1 FUN_1480f011a(undefined8 param_1,undefined8 param_2)

{
  FUN_143941e8a(param_2);
  return 1;
}



// FUNCTION 1480f02c6 FUN_1480f02c6 body=29 status=ok
// SIG undefined FUN_1480f02c6(void)

undefined8 FUN_1480f02c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f02f8 FUN_1480f02f8 body=93 status=ok
// SIG undefined FUN_1480f02f8(void)

void FUN_1480f02f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0356 FUN_1480f0356 body=93 status=ok
// SIG undefined FUN_1480f0356(void)

void FUN_1480f0356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f03b4 FUN_1480f03b4 body=126 status=ok
// SIG undefined FUN_1480f03b4(void)

void FUN_1480f03b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f043a FUN_1480f043a body=19 status=ok
// SIG undefined FUN_1480f043a(void)

undefined1 FUN_1480f043a(undefined8 param_1,undefined8 param_2)

{
  FUN_1439424a0(param_2);
  return 1;
}



// FUNCTION 1480f044e FUN_1480f044e body=29 status=ok
// SIG undefined FUN_1480f044e(void)

undefined8 FUN_1480f044e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f0480 FUN_1480f0480 body=93 status=ok
// SIG undefined FUN_1480f0480(void)

void FUN_1480f0480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f04de FUN_1480f04de body=93 status=ok
// SIG undefined FUN_1480f04de(void)

void FUN_1480f04de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f053c FUN_1480f053c body=126 status=ok
// SIG undefined FUN_1480f053c(void)

void FUN_1480f053c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f05ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f05c2 FUN_1480f05c2 body=19 status=ok
// SIG undefined FUN_1480f05c2(void)

undefined1 FUN_1480f05c2(undefined8 param_1,undefined8 param_2)

{
  FUN_143942ab6(param_2);
  return 1;
}



// FUNCTION 1480f05d6 FUN_1480f05d6 body=251 status=ok
// SIG undefined FUN_1480f05d6(void)

void FUN_1480f05d6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f0ab0(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad99ad0;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f085c(param_1,param_3);
  return;
}



// FUNCTION 1480f06d4 FUN_1480f06d4 body=29 status=ok
// SIG undefined FUN_1480f06d4(void)

undefined8 FUN_1480f06d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f0706 FUN_1480f0706 body=93 status=ok
// SIG undefined FUN_1480f0706(void)

void FUN_1480f0706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0764 FUN_1480f0764 body=93 status=ok
// SIG undefined FUN_1480f0764(void)

void FUN_1480f0764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f07c2 FUN_1480f07c2 body=126 status=ok
// SIG undefined FUN_1480f07c2(void)

void FUN_1480f07c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99ad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f0848 FUN_1480f0848 body=19 status=ok
// SIG undefined FUN_1480f0848(void)

undefined1 FUN_1480f0848(undefined8 param_1,undefined8 param_2)

{
  FUN_1439433dc(param_2);
  return 1;
}



// FUNCTION 1480f085c FUN_1480f085c body=202 status=ok
// SIG undefined FUN_1480f085c(void)

void FUN_1480f085c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99b40;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f0928 FUN_1480f0928 body=29 status=ok
// SIG undefined FUN_1480f0928(void)

undefined8 FUN_1480f0928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f095a FUN_1480f095a body=93 status=ok
// SIG undefined FUN_1480f095a(void)

void FUN_1480f095a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f09b8 FUN_1480f09b8 body=93 status=ok
// SIG undefined FUN_1480f09b8(void)

void FUN_1480f09b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0a16 FUN_1480f0a16 body=126 status=ok
// SIG undefined FUN_1480f0a16(void)

void FUN_1480f0a16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f0a9c FUN_1480f0a9c body=19 status=ok
// SIG undefined FUN_1480f0a9c(void)

undefined1 FUN_1480f0a9c(undefined8 param_1,undefined8 param_2)

{
  FUN_14394567a(param_2);
  return 1;
}



// FUNCTION 1480f0ab0 FUN_1480f0ab0 body=202 status=ok
// SIG undefined FUN_1480f0ab0(void)

void FUN_1480f0ab0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99bb0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f0b7c FUN_1480f0b7c body=29 status=ok
// SIG undefined FUN_1480f0b7c(void)

undefined8 FUN_1480f0b7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f0bae FUN_1480f0bae body=93 status=ok
// SIG undefined FUN_1480f0bae(void)

void FUN_1480f0bae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0c0c FUN_1480f0c0c body=93 status=ok
// SIG undefined FUN_1480f0c0c(void)

void FUN_1480f0c0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0c6a FUN_1480f0c6a body=126 status=ok
// SIG undefined FUN_1480f0c6a(void)

void FUN_1480f0c6a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99bb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f0cf0 FUN_1480f0cf0 body=19 status=ok
// SIG undefined FUN_1480f0cf0(void)

undefined1 FUN_1480f0cf0(undefined8 param_1,undefined8 param_2)

{
  FUN_143946bd6(param_2);
  return 1;
}



// FUNCTION 1480f0d04 FUN_1480f0d04 body=251 status=ok
// SIG undefined FUN_1480f0d04(void)

void FUN_1480f0d04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f11de(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad99c20;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f0f8a(param_1,param_3);
  return;
}



// FUNCTION 1480f0e02 FUN_1480f0e02 body=29 status=ok
// SIG undefined FUN_1480f0e02(void)

undefined8 FUN_1480f0e02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f0e34 FUN_1480f0e34 body=93 status=ok
// SIG undefined FUN_1480f0e34(void)

void FUN_1480f0e34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99c20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0e92 FUN_1480f0e92 body=93 status=ok
// SIG undefined FUN_1480f0e92(void)

void FUN_1480f0e92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99c20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f0ef0 FUN_1480f0ef0 body=126 status=ok
// SIG undefined FUN_1480f0ef0(void)

void FUN_1480f0ef0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99c20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f0f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f0f76 FUN_1480f0f76 body=19 status=ok
// SIG undefined FUN_1480f0f76(void)

undefined1 FUN_1480f0f76(undefined8 param_1,undefined8 param_2)

{
  FUN_143948132(param_2);
  return 1;
}



// FUNCTION 1480f0f8a FUN_1480f0f8a body=202 status=ok
// SIG undefined FUN_1480f0f8a(void)

void FUN_1480f0f8a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99c90;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f1056 FUN_1480f1056 body=29 status=ok
// SIG undefined FUN_1480f1056(void)

undefined8 FUN_1480f1056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f1088 FUN_1480f1088 body=93 status=ok
// SIG undefined FUN_1480f1088(void)

void FUN_1480f1088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99c90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f10e6 FUN_1480f10e6 body=93 status=ok
// SIG undefined FUN_1480f10e6(void)

void FUN_1480f10e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99c90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1144 FUN_1480f1144 body=126 status=ok
// SIG undefined FUN_1480f1144(void)

void FUN_1480f1144(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99c90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f11b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f11ca FUN_1480f11ca body=19 status=ok
// SIG undefined FUN_1480f11ca(void)

undefined1 FUN_1480f11ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1439497fc(param_2);
  return 1;
}



// FUNCTION 1480f11de FUN_1480f11de body=202 status=ok
// SIG undefined FUN_1480f11de(void)

void FUN_1480f11de(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99d00;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f12aa FUN_1480f12aa body=29 status=ok
// SIG undefined FUN_1480f12aa(void)

undefined8 FUN_1480f12aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f12dc FUN_1480f12dc body=93 status=ok
// SIG undefined FUN_1480f12dc(void)

void FUN_1480f12dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f133a FUN_1480f133a body=93 status=ok
// SIG undefined FUN_1480f133a(void)

void FUN_1480f133a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1398 FUN_1480f1398 body=126 status=ok
// SIG undefined FUN_1480f1398(void)

void FUN_1480f1398(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99d00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f1407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f141e FUN_1480f141e body=19 status=ok
// SIG undefined FUN_1480f141e(void)

undefined1 FUN_1480f141e(undefined8 param_1,undefined8 param_2)

{
  FUN_14394aec6(param_2);
  return 1;
}



// FUNCTION 1480f1432 FUN_1480f1432 body=251 status=ok
// SIG undefined FUN_1480f1432(void)

void FUN_1480f1432(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f190c(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad99d70;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f16b8(param_1,param_3);
  return;
}



// FUNCTION 1480f1530 FUN_1480f1530 body=29 status=ok
// SIG undefined FUN_1480f1530(void)

undefined8 FUN_1480f1530(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f1562 FUN_1480f1562 body=93 status=ok
// SIG undefined FUN_1480f1562(void)

void FUN_1480f1562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99d70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f15c0 FUN_1480f15c0 body=93 status=ok
// SIG undefined FUN_1480f15c0(void)

void FUN_1480f15c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99d70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f161e FUN_1480f161e body=126 status=ok
// SIG undefined FUN_1480f161e(void)

void FUN_1480f161e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99d70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f168d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f16a4 FUN_1480f16a4 body=19 status=ok
// SIG undefined FUN_1480f16a4(void)

undefined1 FUN_1480f16a4(undefined8 param_1,undefined8 param_2)

{
  FUN_14394c590(param_2);
  return 1;
}



// FUNCTION 1480f16b8 FUN_1480f16b8 body=202 status=ok
// SIG undefined FUN_1480f16b8(void)

void FUN_1480f16b8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99de0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f1784 FUN_1480f1784 body=29 status=ok
// SIG undefined FUN_1480f1784(void)

undefined8 FUN_1480f1784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f17b6 FUN_1480f17b6 body=93 status=ok
// SIG undefined FUN_1480f17b6(void)

void FUN_1480f17b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99de0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1814 FUN_1480f1814 body=93 status=ok
// SIG undefined FUN_1480f1814(void)

void FUN_1480f1814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99de0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1872 FUN_1480f1872 body=126 status=ok
// SIG undefined FUN_1480f1872(void)

void FUN_1480f1872(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99de0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f18e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f18f8 FUN_1480f18f8 body=19 status=ok
// SIG undefined FUN_1480f18f8(void)

undefined1 FUN_1480f18f8(undefined8 param_1,undefined8 param_2)

{
  FUN_14394dc1e(param_2);
  return 1;
}



// FUNCTION 1480f190c FUN_1480f190c body=202 status=ok
// SIG undefined FUN_1480f190c(void)

void FUN_1480f190c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99e50;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f19d8 FUN_1480f19d8 body=29 status=ok
// SIG undefined FUN_1480f19d8(void)

undefined8 FUN_1480f19d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f1a0a FUN_1480f1a0a body=93 status=ok
// SIG undefined FUN_1480f1a0a(void)

void FUN_1480f1a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1a68 FUN_1480f1a68 body=93 status=ok
// SIG undefined FUN_1480f1a68(void)

void FUN_1480f1a68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99e50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1ac6 FUN_1480f1ac6 body=126 status=ok
// SIG undefined FUN_1480f1ac6(void)

void FUN_1480f1ac6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99e50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f1b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f1b4c FUN_1480f1b4c body=19 status=ok
// SIG undefined FUN_1480f1b4c(void)

undefined1 FUN_1480f1b4c(undefined8 param_1,undefined8 param_2)

{
  FUN_14394f2ac(param_2);
  return 1;
}



// FUNCTION 1480f1b60 FUN_1480f1b60 body=29 status=ok
// SIG undefined FUN_1480f1b60(void)

undefined8 FUN_1480f1b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f1b92 FUN_1480f1b92 body=93 status=ok
// SIG undefined FUN_1480f1b92(void)

void FUN_1480f1b92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99ec0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1bf0 FUN_1480f1bf0 body=93 status=ok
// SIG undefined FUN_1480f1bf0(void)

void FUN_1480f1bf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99ec0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1c4e FUN_1480f1c4e body=126 status=ok
// SIG undefined FUN_1480f1c4e(void)

void FUN_1480f1c4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99ec0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f1cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f1cd4 FUN_1480f1cd4 body=19 status=ok
// SIG undefined FUN_1480f1cd4(void)

undefined1 FUN_1480f1cd4(undefined8 param_1,undefined8 param_2)

{
  FUN_14395093a(param_2);
  return 1;
}



// FUNCTION 1480f1ce8 FUN_1480f1ce8 body=251 status=ok
// SIG undefined FUN_1480f1ce8(void)

void FUN_1480f1ce8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f21c2(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad99f30;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f1f6e(param_1,param_3);
  return;
}



// FUNCTION 1480f1de6 FUN_1480f1de6 body=29 status=ok
// SIG undefined FUN_1480f1de6(void)

undefined8 FUN_1480f1de6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f1e18 FUN_1480f1e18 body=93 status=ok
// SIG undefined FUN_1480f1e18(void)

void FUN_1480f1e18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1e76 FUN_1480f1e76 body=93 status=ok
// SIG undefined FUN_1480f1e76(void)

void FUN_1480f1e76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f1ed4 FUN_1480f1ed4 body=126 status=ok
// SIG undefined FUN_1480f1ed4(void)

void FUN_1480f1ed4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99f30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f1f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f1f5a FUN_1480f1f5a body=19 status=ok
// SIG undefined FUN_1480f1f5a(void)

undefined1 FUN_1480f1f5a(undefined8 param_1,undefined8 param_2)

{
  FUN_143950c18(param_2);
  return 1;
}



// FUNCTION 1480f1f6e FUN_1480f1f6e body=202 status=ok
// SIG undefined FUN_1480f1f6e(void)

void FUN_1480f1f6e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad99fa0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f203a FUN_1480f203a body=29 status=ok
// SIG undefined FUN_1480f203a(void)

undefined8 FUN_1480f203a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f206c FUN_1480f206c body=93 status=ok
// SIG undefined FUN_1480f206c(void)

void FUN_1480f206c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f20ca FUN_1480f20ca body=93 status=ok
// SIG undefined FUN_1480f20ca(void)

void FUN_1480f20ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad99fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2128 FUN_1480f2128 body=126 status=ok
// SIG undefined FUN_1480f2128(void)

void FUN_1480f2128(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad99fa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f2197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f21ae FUN_1480f21ae body=19 status=ok
// SIG undefined FUN_1480f21ae(void)

undefined1 FUN_1480f21ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1439527ca(param_2);
  return 1;
}



// FUNCTION 1480f21c2 FUN_1480f21c2 body=202 status=ok
// SIG undefined FUN_1480f21c2(void)

void FUN_1480f21c2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a010;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f228e FUN_1480f228e body=29 status=ok
// SIG undefined FUN_1480f228e(void)

undefined8 FUN_1480f228e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f22c0 FUN_1480f22c0 body=93 status=ok
// SIG undefined FUN_1480f22c0(void)

void FUN_1480f22c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f231e FUN_1480f231e body=93 status=ok
// SIG undefined FUN_1480f231e(void)

void FUN_1480f231e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f237c FUN_1480f237c body=126 status=ok
// SIG undefined FUN_1480f237c(void)

void FUN_1480f237c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f23eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f2402 FUN_1480f2402 body=19 status=ok
// SIG undefined FUN_1480f2402(void)

undefined1 FUN_1480f2402(undefined8 param_1,undefined8 param_2)

{
  FUN_14395437c(param_2);
  return 1;
}



// FUNCTION 1480f2416 FUN_1480f2416 body=251 status=ok
// SIG undefined FUN_1480f2416(void)

void FUN_1480f2416(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if (*(char *)(param_2 + 0x318) != '\x01') {
    FUN_1480f28f0(param_1,param_3);
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 800) + 0xb0) == '\x01') {
    local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14ad9a080;
    local_30[3] = param_1;
    FUN_144a450dc(param_3,&local_30);
    FUN_1449db362(&local_30);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1480f269c(param_1,param_3);
  return;
}



// FUNCTION 1480f2514 FUN_1480f2514 body=29 status=ok
// SIG undefined FUN_1480f2514(void)

undefined8 FUN_1480f2514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f2546 FUN_1480f2546 body=93 status=ok
// SIG undefined FUN_1480f2546(void)

void FUN_1480f2546(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f25a4 FUN_1480f25a4 body=93 status=ok
// SIG undefined FUN_1480f25a4(void)

void FUN_1480f25a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2602 FUN_1480f2602 body=126 status=ok
// SIG undefined FUN_1480f2602(void)

void FUN_1480f2602(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a080;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f2671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f2688 FUN_1480f2688 body=19 status=ok
// SIG undefined FUN_1480f2688(void)

undefined1 FUN_1480f2688(undefined8 param_1,undefined8 param_2)

{
  FUN_143955f2e(param_2);
  return 1;
}



// FUNCTION 1480f269c FUN_1480f269c body=202 status=ok
// SIG undefined FUN_1480f269c(void)

void FUN_1480f269c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a0f0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f2768 FUN_1480f2768 body=29 status=ok
// SIG undefined FUN_1480f2768(void)

undefined8 FUN_1480f2768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f279a FUN_1480f279a body=93 status=ok
// SIG undefined FUN_1480f279a(void)

void FUN_1480f279a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a0f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f27f8 FUN_1480f27f8 body=93 status=ok
// SIG undefined FUN_1480f27f8(void)

void FUN_1480f27f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a0f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2856 FUN_1480f2856 body=126 status=ok
// SIG undefined FUN_1480f2856(void)

void FUN_1480f2856(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a0f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f28c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f28dc FUN_1480f28dc body=19 status=ok
// SIG undefined FUN_1480f28dc(void)

undefined1 FUN_1480f28dc(undefined8 param_1,undefined8 param_2)

{
  FUN_143957c3c(param_2);
  return 1;
}



// FUNCTION 1480f28f0 FUN_1480f28f0 body=202 status=ok
// SIG undefined FUN_1480f28f0(void)

void FUN_1480f28f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ad9a160;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480f29bc FUN_1480f29bc body=29 status=ok
// SIG undefined FUN_1480f29bc(void)

undefined8 FUN_1480f29bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480f29ee FUN_1480f29ee body=93 status=ok
// SIG undefined FUN_1480f29ee(void)

void FUN_1480f29ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2a4c FUN_1480f2a4c body=93 status=ok
// SIG undefined FUN_1480f2a4c(void)

void FUN_1480f2a4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad9a160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480f2aaa FUN_1480f2aaa body=126 status=ok
// SIG undefined FUN_1480f2aaa(void)

void FUN_1480f2aaa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad9a160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480f2b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480f2b30 FUN_1480f2b30 body=19 status=ok
// SIG undefined FUN_1480f2b30(void)

undefined1 FUN_1480f2b30(undefined8 param_1,undefined8 param_2)

{
  FUN_14395994a(param_2);
  return 1;
}


