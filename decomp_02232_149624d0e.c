// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149624d0e FUN_149624d0e body=5223 status=ok
// SIG undefined FUN_149624d0e(void)

/* WARNING: Removing unreachable block (ram,0x000149625ed2) */
/* WARNING: Removing unreachable block (ram,0x0001496250d6) */
/* WARNING: Removing unreachable block (ram,0x0001496260bd) */
/* WARNING: Removing unreachable block (ram,0x0001496260c7) */
/* WARNING: Removing unreachable block (ram,0x0001496260d9) */
/* WARNING: Removing unreachable block (ram,0x000149625b41) */

void FUN_149624d0e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  double dVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  wchar_t *pwVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  undefined1 local_450;
  longlong *local_440;
  longlong *local_438;
  undefined1 local_430 [4];
  undefined1 local_42c [4];
  code *local_428;
  longlong **local_420;
  longlong local_418;
  undefined8 uStack_410;
  longlong local_408;
  int local_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong *local_3c0;
  code *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  longlong *local_380;
  wchar_t *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348 [2];
  uint local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  longlong *local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  double local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined4 local_2d8;
  undefined1 local_298 [16];
  undefined1 local_288;
  longlong local_258;
  longlong *local_250;
  wchar_t *local_248;
  undefined8 uStack_240;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined **local_228;
  undefined8 uStack_220;
  uint local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_108 [8];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_1484416be();
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_149626176(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x27] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_14962620b(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x24] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_1496262a0(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x25] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_149626335(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x26] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_1496263ca(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x28] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar15 = FUN_1409ffe1d();
  plVar16 = (longlong *)FUN_14962645f(uVar15);
  if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar16);
  }
  param_1[0x29] = (longlong)plVar16;
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar16 + 0x2a8))(plVar16,param_1,&local_328);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar25 = param_1[0x26];
  if (*(longlong *)(lVar25 + 0xa8) != 0) {
    cVar12 = FUN_140432338();
    lVar25 = param_1[0x26];
    if (cVar12 == '\0') {
      *(undefined8 *)(lVar25 + 0xa8) = 0;
      lVar25 = param_1[0x26];
    }
  }
  if (*(longlong *)(lVar25 + 0xe0) == 0) {
    uVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar17 = FUN_148558471(uVar15);
    lVar25 = param_1[0x26];
    if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar17);
    }
    *(longlong *)(lVar25 + 0xe0) = lVar17;
  }
  local_320 = (ulonglong)local_320._4_4_ << 0x20;
  local_328 = (longlong *)0x3e800000000;
  uVar15 = FUN_14850658d(param_1[0x14]);
  local_3f8 = 0;
  uStack_3f0 = 0;
  FUN_14855bc06(uVar15);
  lVar25 = param_1[0x24];
  FUN_140056680(&local_328,&DAT_149e01fe8);
  iVar7 = *(int *)(lVar25 + 0xd0);
  *(uint *)(lVar25 + 0xd0) = iVar7 + 1U;
  if (*(uint *)(lVar25 + 0xd4) < iVar7 + 1U) {
    FUN_1447a1bd6((longlong *)(lVar25 + 200),iVar7);
  }
  lVar17 = local_3f8;
  lVar25 = *(longlong *)(lVar25 + 200);
  lVar23 = (longlong)iVar7 * 0x10;
  *(undefined8 *)(lVar25 + lVar23) = 0;
  *(longlong **)(lVar25 + lVar23) = local_328;
  *(undefined4 *)(lVar25 + 8 + lVar23) = (undefined4)local_320;
  *(uint *)(lVar25 + 0xc + lVar23) = local_320._4_4_;
  lVar25 = (longlong)(int)uStack_3f0;
  local_440 = param_1;
  if (lVar25 == 0) {
    lVar25 = param_1[0x24];
  }
  else {
    lVar23 = 0;
    do {
      local_320 = 0;
      local_328 = (longlong *)0x0;
      local_108[0] = *(undefined8 *)(lVar17 + lVar23);
      lVar9 = local_440[0x24];
      FUN_1400021e4(local_108,&local_328);
      iVar7 = *(int *)(lVar9 + 0xd0);
      *(uint *)(lVar9 + 0xd0) = iVar7 + 1U;
      if (*(uint *)(lVar9 + 0xd4) < iVar7 + 1U) {
        FUN_1447a1bd6((longlong *)(lVar9 + 200),iVar7);
      }
      lVar9 = *(longlong *)(lVar9 + 200);
      lVar31 = (longlong)iVar7 * 0x10;
      *(undefined8 *)(lVar9 + lVar31) = 0;
      *(longlong **)(lVar9 + lVar31) = local_328;
      local_328 = (longlong *)0x0;
      *(undefined4 *)(lVar9 + 8 + lVar31) = (undefined4)local_320;
      *(uint *)(lVar9 + 0xc + lVar31) = local_320._4_4_;
      local_320 = 0;
      lVar23 = lVar23 + 8;
    } while (lVar25 * 8 != lVar23);
    lVar25 = local_440[0x24];
    if ((longlong)(int)uStack_3f0 != 0) {
      lVar17 = 0;
      do {
        plVar16 = local_440;
        if (*(longlong *)(local_3f8 + lVar17) == *(longlong *)(lVar25 + 0xbc)) goto LAB_149625134;
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)uStack_3f0 * 8 != lVar17);
    }
  }
  plVar16 = local_440;
  local_320 = 0;
  local_328 = (longlong *)0x0;
  iVar7 = *(int *)(*(undefined8 **)(lVar25 + 200) + 1);
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  FUN_1446f82e2(&local_328,iVar11,**(undefined8 **)(lVar25 + 200),1);
  *(longlong **)(plVar16[0x24] + 0xbc) = local_328;
LAB_149625134:
  FUN_1496264f4(plVar16);
  FUN_1411371f6(local_108);
  uVar15 = FUN_14479d2ce(plVar16 + 0x15);
  uVar18 = FUN_14120ac06();
  local_458 = local_108;
  lVar25 = FUN_141137228(uVar15,uVar18,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar25 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar25);
  }
  plVar16[0x95] = lVar25;
  lVar25 = FUN_14851b239(lVar25);
  if ((lVar25 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar25);
  }
  plVar16[0x96] = lVar25;
  FUN_140486fc4(lVar25,*(undefined8 *)(plVar16[0x95] + 0x1c8),0);
  FUN_140b506a4(plVar16[0x96]);
  lVar25 = plVar16[0x96];
  FUN_1485063a5(&local_328,plVar16[0x14]);
  local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffffffffff00);
  FUN_140613f88(lVar25,&local_328,0,0);
  *(undefined1 *)(plVar16[0x96] + 0x670) = *(undefined1 *)(plVar16[0x24] + 0xd9);
  FUN_1485584d0(plVar16[0x96],plVar16[0x14]);
  FUN_148506417(&local_408,plVar16[0x14],0);
  if (0 < local_400) {
    uVar24 = 0;
    do {
      (**(code **)(*(longlong *)plVar16[0x96] + 0x638))
                ((longlong *)plVar16[0x96],uVar24 & 0xffffffff,
                 *(undefined8 *)(local_408 + uVar24 * 8));
      uVar24 = uVar24 + 1;
    } while ((longlong)uVar24 < (longlong)local_400);
  }
  FUN_1484b18f0(plVar16[0x96],1);
  plVar30 = (longlong *)plVar16[0x96];
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  local_88 = (wchar_t *)0x3e800000000;
  FUN_148506727(&local_328,plVar16[0x14]);
  (**(code **)(*plVar30 + 0xa78))(plVar30,&local_328);
  FUN_141082778(&local_328);
  local_418 = 0;
  uStack_410 = 0;
  cVar12 = (**(code **)(*plVar16 + 0x3b8))(plVar16);
  if (cVar12 == '\0') {
    lVar25 = (**(code **)(*(longlong *)plVar16[0x96] + 0xa88))();
    uVar26 = *(int *)(lVar25 + 0x140) * 0x200 + *(int *)(lVar25 + 0x144);
    uVar29 = 0;
    if ((uVar26 != 0) &&
       (uVar29 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar25 + 0x148) - 1U))) {
      uVar14 = 1;
      uVar20 = 1;
      if (1 < (int)uVar26) {
        uVar14 = uVar26;
      }
      do {
        uVar29 = uVar14;
        if (uVar14 == uVar20) break;
        uVar22 = uVar20 >> 9;
        uVar27 = uVar20 & 0x1ff;
        uVar29 = uVar20;
        uVar20 = uVar20 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar25 + 0x148))[uVar22] +
                                           (ulonglong)uVar27 * 2) - 1U));
    }
    if (uVar29 != uVar26) {
      do {
        uVar24 = uStack_410;
        lVar17 = (longlong)(int)uStack_410;
        uVar14 = (int)uStack_410 + 1;
        uStack_410 = CONCAT44(uStack_410._4_4_,uVar14);
        if (uStack_410._4_4_ < uVar14) {
          FUN_1446f48e2(&local_418,uVar24 & 0xffffffff);
        }
        *(uint *)(local_418 + lVar17 * 4) = uVar29;
        uVar14 = uVar29 + 1;
        if ((int)(uVar29 + 1) < (int)uVar26) {
          uVar14 = uVar26;
        }
        do {
          uVar20 = uVar14;
          if (uVar14 - 1 == uVar29) break;
          uVar29 = uVar29 + 1;
          uVar20 = uVar29;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar25 + 0x148) +
                                               (ulonglong)(uVar29 >> 9) * 8) +
                                             (ulonglong)(uVar29 & 0x1ff) * 2) - 1U));
        uVar29 = uVar20;
      } while (uVar29 != uVar26);
    }
  }
  else {
    uVar15 = (**(code **)(*plVar16 + 0x3c0))(plVar16);
    local_328 = &local_418;
    local_428 = FUN_14455f964;
    local_420 = &local_328;
    uVar18 = (**(code **)(*(longlong *)plVar16[0x96] + 0xa88))();
    FUN_148385b4a(uVar15,uVar18,&local_428,0);
  }
  plVar30 = local_440;
  *(int *)(local_440 + 0x94) = (int)uStack_410;
  plVar16 = local_440 + 0x30;
  uVar15 = (**(code **)(*(longlong *)local_440[0x96] + 0xa88))();
  local_450 = 1;
  local_458 = (undefined8 *)CONCAT71(local_458._1_7_,1);
  FUN_146c005f0(plVar16,uVar15,1,1);
  plVar30[0x75] = (longlong)plVar16;
  plVar30[0x76] = 0;
  FUN_146bee918(plVar30 + 0x74,0);
  plVar30[0x76] =
       (ulonglong)(uint)(*(int *)(plVar30[0x75] + 0x214) + *(int *)(plVar30[0x75] + 0x218));
  FUN_149626756(&local_328);
  local_328 = *(longlong **)(plVar30[0x24] + 0xac);
  local_320 = *(undefined8 *)(plVar30[0x26] + 0xa8);
  local_288 = *(undefined1 *)(plVar30[0x26] + 0xe8);
  lVar25 = plVar30[0x28];
  local_318 = *(undefined4 *)(lVar25 + 0xa8);
  local_314 = *(undefined4 *)(lVar25 + 0xac);
  dVar3 = *(double *)(lVar25 + 0xb0);
  dVar4 = *(double *)(lVar25 + 0xb8);
  dVar5 = *(double *)(lVar25 + 0xc0);
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  if (((dVar10 != 1.0) || (local_300 = dVar5, local_308 = dVar4, local_310 = dVar3, NAN(dVar10))) &&
     (local_300 = DAT_14c8464f0, local_308 = DAT_14c8464e8, local_310 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    local_300 = dVar5 * dVar10;
    local_308 = dVar4 * dVar10;
    local_310 = dVar3 * dVar10;
  }
  lVar25 = plVar30[0x25];
  local_2f8 = *(undefined1 *)(lVar25 + 0xa8);
  dVar3 = *(double *)(lVar25 + 0xb0);
  dVar4 = *(double *)(lVar25 + 0xb8);
  dVar5 = *(double *)(lVar25 + 0xc0);
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  if (((dVar10 != 1.0) || (local_2e0 = dVar5, local_2e8 = dVar4, local_2f0 = dVar3, NAN(dVar10))) &&
     (local_2e0 = DAT_14c8464f0, local_2e8 = DAT_14c8464e8, local_2f0 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    local_2e0 = dVar5 * dVar10;
    local_2e8 = dVar4 * dVar10;
    local_2f0 = dVar3 * dVar10;
  }
  local_2d8 = *(undefined4 *)(lVar25 + 200);
  FUN_1496249e0(local_298,plVar30[0x27] + 0xa8);
  plVar21 = local_250;
  local_258 = plVar30[0x8e];
  local_250 = (longlong *)plVar30[0x8f];
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_250 + 8) = *(int *)((longlong)local_250 + 8) + 1;
    UNLOCK();
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar21 = local_238;
  local_368 = local_248;
  local_58 = local_218;
  uStack_54 = uStack_214;
  uStack_50 = uStack_210;
  uStack_4c = uStack_20c;
  uStack_60 = (undefined4)uStack_220;
  uStack_5c = uStack_220._4_4_;
  local_88 = local_248;
  uStack_80 = uStack_240;
  local_248 = 
  L"譈\xe909簾Ԍ赈줅苧䠇䊉䠐䆋䠈䊉䠘䊍쌘赈ࡁ쳃譈䠁䂋ㄘ䣒\xe0ff䡖\xec83䠠캉튅ࡴ襈\xe8f1⛊ﮪ襈䣰쒃帠쳃卖荈⣬᪊譈耱ϻཁ삔譈䠆隋ĸ"
  ;
  local_238 = (longlong *)0x0;
  local_228 = &PTR_LAB_14bd8e170;
  uStack_220 = plVar30;
  iStack_360 = (int)uStack_240;
  uStack_35c = uStack_240._4_4_;
  local_338 = local_218;
  uStack_334 = uStack_214;
  uStack_330 = uStack_210;
  uStack_32c = uStack_20c;
  uStack_350 = uStack_230;
  uStack_34c = uStack_22c;
  local_438 = plVar16;
  if (local_368 != (wchar_t *)0x0) {
    if (plVar21 == (longlong *)0x0) {
      plVar21 = local_348;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  lVar25 = plVar30[0x24];
  lVar17 = FUN_14001cc68(0x150,0x10);
  FUN_14962779a(lVar17,plVar30 + 0x90,&local_328,*(undefined1 *)(lVar25 + 0xa8));
  puVar8 = (undefined8 *)plVar30[0x98];
  plVar30[0x98] = lVar17;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  FUN_148506321(plVar30[0x14]);
  lVar25 = plVar30[0x29];
  iVar7 = *(int *)(lVar25 + 0xc4);
  FUN_1447a1747(*(undefined8 *)(lVar25 + 0xb8),*(undefined4 *)(lVar25 + 0xc0));
  *(undefined4 *)(lVar25 + 0xc0) = 0;
  if ((iVar7 < 0) && (*(int *)(lVar25 + 0xc4) != 0)) {
    FUN_1408be2c4(lVar25 + 0xb8,0);
  }
  if (0 < local_400) {
    uVar24 = 0;
    do {
      lVar25 = *(longlong *)(local_408 + uVar24 * 8);
      if (lVar25 == 0) {
        FUN_1400b22c2(&local_88,"(none)");
      }
      else {
        local_368 = *(wchar_t **)(lVar25 + 0x18);
        FUN_1400021e4(&local_368,&local_88);
      }
      pwVar28 = L"";
      if ((int)uStack_80 != 0) {
        pwVar28 = local_88;
      }
      FUN_140002266(&local_368,L"[%d] %s",uVar24 & 0xffffffff,pwVar28);
      lVar25 = plVar30[0x29];
      iVar7 = *(int *)(lVar25 + 0xc0);
      *(uint *)(lVar25 + 0xc0) = iVar7 + 1U;
      if (*(uint *)(lVar25 + 0xc4) < iVar7 + 1U) {
        FUN_1447a1bd6((longlong *)(lVar25 + 0xb8),iVar7);
      }
      pwVar28 = local_368;
      lVar25 = *(longlong *)(lVar25 + 0xb8);
      lVar17 = (longlong)iVar7 * 0x10;
      puVar8 = (undefined8 *)(lVar25 + lVar17);
      *(undefined8 *)(lVar25 + lVar17) = 0;
      lVar23 = (longlong)iStack_360;
      *(int *)(lVar25 + 8 + lVar17) = iStack_360;
      if (lVar23 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar8,iStack_360,0);
        memcpy((void *)*puVar8,pwVar28,lVar23 * 2);
      }
      plVar30 = local_440;
      if (local_368 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar24 = uVar24 + 1;
    } while ((longlong)uVar24 < (longlong)local_400);
  }
  lVar25 = plVar30[0x29];
  if (*(int *)(lVar25 + 0xc0) != 0) {
    FUN_1400021e4(lVar25 + 0xac,&local_88);
    cVar12 = FUN_144a23846(lVar25 + 0xb8,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar12 != '\0') goto LAB_1496258b2;
    lVar25 = plVar30[0x29];
  }
  *(undefined8 *)(lVar25 + 0xac) = 0;
LAB_1496258b2:
  if ((plVar30 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar30);
  }
  iVar7 = (int)plVar30[0xe];
  *(uint *)(plVar30 + 0xe) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar30 + 0x74) < iVar7 + 1U) {
    FUN_140845902(plVar30 + 0xd,iVar7);
  }
  *(longlong **)(plVar30[0xd] + (longlong)iVar7 * 8) = plVar30;
  if ((plVar30 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar30);
  }
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x24]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x24],1);
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x25]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x25],1);
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x26]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x26],*(char *)(plVar30[0x24] + 0xa8) == '\x01');
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x28]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x28],*(char *)(plVar30[0x24] + 0xa8) == '\x04');
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x29]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x29],*(char *)(plVar30[0x24] + 0xb4) == '\0');
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x27]);
  (**(code **)(*plVar30 + 0x328))(plVar30,plVar30[0x27],*(char *)(plVar30[0x24] + 0xa8) == '\x03');
  local_398 = 0;
  local_388 = &PTR_LAB_14bd8e1f0;
  local_3a8 = FUN_14455f9e8;
  local_380 = plVar30;
  FUN_14962681c(plVar30[0x24] + 0x28,plVar30[0x24] + 0xa8);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bd8e270;
  local_3e8 = &LAB_14455fa94;
  local_3c0 = plVar30;
  FUN_1496268f2(plVar30[0x24] + 0x28,plVar30[0x24] + 0xb4);
  FUN_1496269c8(plVar30);
  local_58 = local_58 & 0xffffff00;
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,*(undefined4 *)(plVar30[0x24] + 0xb8));
  uStack_80 = plVar30[0x8e];
  local_78 = plVar30[0x8f];
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  lVar25 = plVar30[0x29];
  uStack_60._0_2_ = CONCAT11(1,*(undefined1 *)(lVar25 + 0xa8));
  lStack_70 = local_418;
  local_68 = uStack_410;
  local_418 = 0;
  uStack_410 = 0;
  if (*(longlong *)(lVar25 + 0xac) != 0) {
    FUN_1400021e4(lVar25 + 0xac,&local_368);
    uVar13 = FUN_144a075de(lVar25 + 0xb8,&local_368);
    if (local_368 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_58 = CONCAT31(local_58._1_3_,1);
    uStack_5c = uVar13;
  }
  lVar25 = plVar30[0x24];
  puVar19 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  plVar16 = local_438;
  uVar6 = *(undefined1 *)(lVar25 + 0xb4);
  *puVar19 = &PTR_FUN_14bd8e290;
  puVar19[1] = local_438;
  FUN_1496234fe(puVar19 + 2,&local_88);
  *(undefined1 *)(puVar19 + 9) = uVar6;
  puVar8 = (undefined8 *)plVar30[0x97];
  plVar30[0x97] = (longlong)puVar19;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  lVar25 = FUN_149626df2(plVar30);
  if ((lVar25 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar25);
  }
  plVar30[0x2b] = lVar25;
  FUN_1496ac3fc(lVar25,plVar16);
  (**(code **)(*plVar30 + 0x308))(plVar30,plVar30[0x2b]);
  FUN_149626e88(plVar30);
  local_368 = L"ToolName";
  iStack_360 = 8;
  FUN_1446e940c(local_42c,&local_368);
  local_368 = L"UDisplaceMeshTool";
  iStack_360 = 0x11;
  FUN_1446e940c(local_430,&local_368);
  FUN_140208bae(&local_368,local_430,local_42c,L"Displace");
  (**(code **)(*plVar30 + 0x370))(plVar30,&local_368);
  if (local_368 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_368 + 0x10))();
  }
  plVar16 = (longlong *)(**(code **)(*plVar30 + 0x2c8))(plVar30);
  local_368 = L"OnStartDisplaceMesh";
  iStack_360 = 0x13;
  FUN_1446e940c(local_42c,&local_368);
  local_368 = L"UDisplaceMeshTool";
  iStack_360 = 0x11;
  FUN_1446e940c(local_430,&local_368);
  FUN_140208bae(&local_368,local_430,local_42c,
                L"Subdivide and Displace the input mesh using different noise functions and maps");
  (**(code **)(*plVar16 + 0x340))(plVar16,&local_368,2);
  if (local_368 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_368 + 0x10))();
  }
  FUN_14962709c(&local_88);
  FUN_1496270fa(&local_328);
  if (local_418 != 0) {
    FUN_1400020a8();
  }
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    if (local_b8 == (longlong *)0x0) {
      local_b8 = local_a8;
    }
    (**(code **)(*local_b8 + 0x10))();
  }
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149626176 FUN_149626176 body=148 status=ok
// SIG undefined FUN_149626176(void)

undefined8 FUN_149626176(undefined8 param_1)

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
  uVar1 = FUN_1459f9c12();
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



// FUNCTION 14962620b FUN_14962620b body=148 status=ok
// SIG undefined FUN_14962620b(void)

undefined8 FUN_14962620b(undefined8 param_1)

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
  uVar1 = FUN_14599ca8e();
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



// FUNCTION 1496262a0 FUN_1496262a0 body=148 status=ok
// SIG undefined FUN_1496262a0(void)

undefined8 FUN_1496262a0(undefined8 param_1)

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
  uVar1 = FUN_1459f9b26();
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



// FUNCTION 149626335 FUN_149626335 body=148 status=ok
// SIG undefined FUN_149626335(void)

undefined8 FUN_149626335(undefined8 param_1)

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
  uVar1 = FUN_1459f9a3a();
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



// FUNCTION 1496263ca FUN_1496263ca body=148 status=ok
// SIG undefined FUN_1496263ca(void)

undefined8 FUN_1496263ca(undefined8 param_1)

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
  uVar1 = FUN_1459f9cfe();
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



// FUNCTION 14962645f FUN_14962645f body=148 status=ok
// SIG undefined FUN_14962645f(void)

undefined8 FUN_14962645f(undefined8 param_1)

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
  uVar1 = FUN_14599cb7a();
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



// FUNCTION 1496264f4 FUN_1496264f4 body=609 status=ok
// SIG undefined FUN_1496264f4(void)

void FUN_1496264f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x120);
  FUN_1446f470e(&local_48,&DAT_149e01fe8,1);
  if (*(longlong *)(lVar4 + 0xbc) == local_48) {
    *(undefined8 *)(param_1 + 0x470) = 0;
    plVar8 = *(longlong **)(param_1 + 0x478);
    if (plVar8 == (longlong *)0x0) goto LAB_149626730;
    *(undefined8 *)(param_1 + 0x478) = 0;
  }
  else {
    plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14aefeb10;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    local_50 = 0;
    local_58 = 0x3e800000000;
    uVar9 = FUN_14850658d(*(undefined8 *)(param_1 + 0xa0));
    cVar7 = FUN_14855bd44(uVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xbc),plVar8 + 2,
                          0x3f800000);
    if ((*(char *)(*(longlong *)(param_1 + 0x120) + 0xd8) == '\x01') &&
       (lVar4 = plVar8[4], 0 < (longlong)(int)lVar4)) {
      lVar10 = 0;
      do {
        fVar12 = 1.0 - *(float *)(plVar8[3] + lVar10 * 4);
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        *(uint *)(plVar8[3] + lVar10 * 4) = ~-(uint)(fVar12 < 0.0) & (uint)fVar13;
        lVar10 = lVar10 + 1;
      } while ((int)lVar4 != lVar10);
    }
    if (cVar7 == '\0') {
      puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x120) + 200);
      iVar3 = *(int *)(puVar5 + 1);
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      FUN_1446f82e2(&local_58,iVar6,*puVar5,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xbc) = local_58;
      *(undefined8 *)(param_1 + 0x470) = 0;
      plVar11 = *(longlong **)(param_1 + 0x478);
      if (plVar11 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x478) = 0;
        goto LAB_1496266ef;
      }
    }
    else {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar11 = *(longlong **)(param_1 + 0x478);
      *(longlong **)(param_1 + 0x470) = plVar8 + 2;
      *(longlong **)(param_1 + 0x478) = plVar8;
      if (plVar11 != (longlong *)0x0) {
LAB_1496266ef:
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
    }
    if (plVar8 == (longlong *)0x0) goto LAB_149626730;
  }
  LOCK();
  plVar11 = plVar8 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_149626730:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149626756 FUN_149626756 body=198 status=ok
// SIG undefined FUN_149626756(void)

undefined8 * FUN_149626756(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 2;
  FUN_148544114(param_1 + 0xb,4,1);
  param_1[0x10] = DAT_14c84635c;
  param_1[0x11] = DAT_14c8461b4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0x3f8000003f008081;
  param_1[0x16] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1e] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 14962681c FUN_14962681c body=212 status=ok
// SIG undefined FUN_14962681c(void)

void FUN_14962681c(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149642880(uVar2,param_2,local_68);
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



// FUNCTION 1496268f2 FUN_1496268f2 body=212 status=ok
// SIG undefined FUN_1496268f2(void)

void FUN_1496268f2(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149642b9e(uVar2,param_2,local_68);
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



// FUNCTION 1496269c8 FUN_1496269c8 body=1020 status=ok
// SIG undefined FUN_1496269c8(void)

void FUN_1496269c8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)(param_1[0x24] + 0xda) == '\x01') {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_140e82300();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_178);
  }
  lVar5 = param_1[0x97];
  dVar7 = 3000000.0 / (double)(int)param_1[0x94];
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  iVar6 = (int)(dVar7 + -1.0);
  lVar4 = param_1[0x24];
  if (iVar6 < *(int *)(lVar4 + 0xb8)) {
    if (lVar5 != 0) {
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
      FUN_1413a4536(local_f0,iVar6,0);
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      FUN_1413a4536(local_118,*(undefined4 *)(param_1[0x24] + 0xb8),0);
      local_a0 = L"SubdivisionsTooHigh";
      local_98[0] = 0x13;
      FUN_1446e940c(local_14c,&local_a0);
      local_a0 = L"UDisplaceMeshTool";
      local_98[0] = 0x11;
      FUN_1446e940c(local_150,&local_a0);
      FUN_140208bae(local_148,local_150,local_14c,
                    L"Desired number of Subdivisions ({0}) exceeds maximum number ({1}) for a mesh of this number of triangles."
                   );
      FUN_14023409e(&local_138,local_148,1);
      local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
      FUN_14023423e(local_90,local_118);
      local_80 = 4;
      FUN_14023423e(local_70,local_f0);
      local_b8 = local_60;
      local_c0 = &local_a0;
      FUN_14010d304(&local_b0);
      local_d0 = local_138;
      local_c8 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e0,&local_d0,&local_b0);
      FUN_14007f2db(local_b0,local_a8);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      lVar5 = 0x30;
      do {
        plVar3 = *(longlong **)((longlong)local_98 + lVar5 + -8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)((longlong)local_98 + lVar5 + -8) = 0;
          *(undefined4 *)((longlong)local_98 + lVar5) = 0;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != -0x10);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_130 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_130 + 0x10))(local_130);
          }
        }
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      if (local_f0[0] != (longlong *)0x0) {
        (**(code **)(*local_f0[0] + 0x10))();
      }
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
      plVar3 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_120 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_100 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar3 + 0x340))(plVar3,local_e0,3);
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      lVar4 = param_1[0x24];
    }
    *(int *)(lVar4 + 0xb8) = iVar6;
  }
  else {
    FUN_144a5dc74(&local_a0);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar3 + 0x340))(plVar3,&local_a0,3);
    if (local_a0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a0 + 0x10))();
    }
  }
  if (*(int *)(param_1[0x24] + 0xb8) < 0) {
    *(undefined4 *)(param_1[0x24] + 0xb8) = 0;
  }
  if ((local_60[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149626df2 FUN_149626df2 body=148 status=ok
// SIG undefined FUN_149626df2(void)

undefined8 FUN_149626df2(undefined8 param_1)

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
  uVar1 = FUN_1458f399a();
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



// FUNCTION 149626e88 FUN_149626e88 body=530 status=ok
// SIG undefined FUN_149626e88(void)

void FUN_149626e88(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[0x2d] == '\x01') {
    if (param_1[0x2c] != 0) {
      FUN_143b98b6c();
    }
    param_1[0x90] = 0;
    plVar3 = (longlong *)param_1[0x91];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x91] = 0;
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
    puVar6 = (undefined8 *)FUN_14001cc68(0x150,0x10);
    (**(code **)(*(longlong *)param_1[0x97] + 8))((longlong *)param_1[0x97],&local_48);
    puVar4 = local_48;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149e06640;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined2 *)(puVar6 + 5) = 3;
    puVar6[6] = 0xffffffffffffffff;
    puVar6[7] = 0;
    *puVar6 = &PTR_FUN_14af127c0;
    local_48 = (undefined8 *)0x0;
    FUN_14851a5de(puVar6 + 10);
    puVar6[0x24] = puVar4;
    *puVar6 = &PTR_FUN_14af12780;
    *(undefined1 *)(puVar6 + 0x26) = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[10] = puVar6 + 0x26;
    param_1[0x2c] = (longlong)puVar6;
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
      puVar6 = (undefined8 *)param_1[0x2c];
    }
    local_68 = 0;
    local_58 = 0;
    local_60 = 0xffffffffffffffff;
    FUN_1402a8900(puVar6,0,DAT_14c8442c0,3);
    *(undefined1 *)(param_1 + 0x2d) = 0;
    plVar3 = (longlong *)param_1[0x96];
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar5 = FUN_1485578f6(uVar5);
    (**(code **)(*plVar3 + 0xb30))(plVar3,uVar5);
  }
  if (((char)param_1[0x2f] == '\x01') && (param_1[0x2e] != 0)) {
    FUN_143b98b6c();
    param_1[0x2e] = 0;
    plVar3 = (longlong *)param_1[0x96];
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar5 = FUN_1485578f6(uVar5);
    (**(code **)(*plVar3 + 0xb30))(plVar3,uVar5);
  }
  FUN_1445572e6(param_1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962709c FUN_14962709c body=93 status=ok
// SIG undefined FUN_14962709c(void)

void FUN_14962709c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001496270ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1496270fa FUN_1496270fa body=214 status=ok
// SIG undefined FUN_1496270fa(void)

void FUN_1496270fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x128);
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
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar3 = (longlong *)(param_1 + 0x100);
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xf0);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0xd8);
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
  plVar3 = *(longlong **)(param_1 + 200);
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
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496271d0 FUN_1496271d0 body=908 status=ok
// SIG undefined FUN_1496271d0(void)

void FUN_1496271d0(wchar_t *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  code *local_70;
  wchar_t **local_68;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x90);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x9c);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x94);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xa4);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 600) == 0) goto LAB_149627357;
  FUN_14850635b(*(longlong *)(param_1 + 0x50));
  if (param_2 == '\x01') {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
    local_48 = L"DisplaceMeshToolTransactionName";
    local_40 = 0x1f;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UDisplaceMeshTool";
    local_40 = 0x11;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Displace Mesh");
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x90) + 0xa8) == '\x01') &&
       (*(char *)(*(longlong *)(param_1 + 0x98) + 0xe8) == '\0')) {
      lVar2 = FUN_1485062e8(*(longlong *)(param_1 + 0x50));
      if (lVar2 != 0) {
        lVar3 = FUN_144a7a726();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar2 = *(longlong *)(lVar2 + 0x660);
          if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
            FUN_1456cec3c(lVar2);
          }
          else if (lVar2 == 0) goto LAB_149627463;
          local_5c = 0x200000000;
          local_54 = 2;
          FUN_1484c1c3c(lVar2,0);
        }
      }
    }
LAB_149627463:
    local_70 = FUN_14455fafa;
    local_68 = &local_48;
    local_48 = param_1;
    (**(code **)(**(longlong **)(param_1 + 600) + 0xa90))();
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  }
  FUN_1401bf202(*(longlong *)(param_1 + 600));
  (**(code **)(**(longlong **)(param_1 + 600) + 0x420))(*(longlong **)(param_1 + 600),0);
  param_1[600] = L'\0';
  param_1[0x259] = L'\0';
  param_1[0x25a] = L'\0';
  param_1[0x25b] = L'\0';
LAB_149627357:
  if (*(longlong *)(param_1 + 0x254) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x254),0,1);
    param_1[0x254] = L'\0';
    param_1[0x255] = L'\0';
    param_1[0x256] = L'\0';
    param_1[599] = L'\0';
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962755e FUN_14962755e body=102 status=ok
// SIG undefined FUN_14962755e(void)

void FUN_14962755e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1[0x26] + 0xe0) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x2c8))();
    lVar3 = FUN_148558471(uVar2);
    lVar1 = param_1[0x26];
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(lVar1 + 0xe0) = lVar3;
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  return;
}



// FUNCTION 1496275c4 FUN_1496275c4 body=26 status=ok
// SIG undefined FUN_1496275c4(void)

void FUN_1496275c4(undefined8 param_1)

{
  FUN_14962755e();
  FUN_1445572e6(param_1);
  return;
}



// FUNCTION 1496275de FUN_1496275de body=296 status=ok
// SIG undefined FUN_1496275de(void)

void FUN_1496275de(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8[0] = 0x7fefffffffffffff;
  local_b8 = 0;
  local_a8 = (longlong *)0x0;
  local_78 = 0;
  uVar2 = FUN_146bdde3a(param_1 + 0x3a0,param_2,local_d0,local_c8);
  if (local_b8 != 0) {
    plVar3 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar3 = local_98;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((int)uVar2 < 0) {
    uVar4 = 0x3f800000;
  }
  else {
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    local_d8 = *(undefined8 *)(param_2 + 4);
    FUN_146bd7ec2(local_c8,param_1 + 0x180,uVar2);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (ulonglong)(uVar2 >> 9) * 8);
    local_f0 = *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_f8 = *(undefined8 *)(lVar1 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    uVar4 = FUN_149627708(param_3,&local_f8,local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 149627708 FUN_149627708 body=145 status=ok
// SIG undefined FUN_149627708(void)

float FUN_149627708(float *param_1,int *param_2,double *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  
  iVar1 = *param_2;
  pfVar2 = param_1;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[4])) {
    pfVar2 = (float *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 2));
  }
  iVar1 = param_2[1];
  pfVar3 = param_1;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[4])) {
    pfVar3 = (float *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 2));
  }
  iVar1 = param_2[2];
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[4])) {
    param_1 = (float *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 2));
  }
  return (float)((double)*param_1 * param_3[2] +
                (double)*pfVar2 * *param_3 + (double)*pfVar3 * param_3[1]);
}



// FUNCTION 14962779a FUN_14962779a body=782 status=ok
// SIG undefined FUN_14962779a(void)

undefined8 *
FUN_14962779a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bd8c320;
  FUN_149626756(param_1 + 2);
  param_1[0x29] = param_2;
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3[1];
  uVar6 = param_3[0x29];
  param_1[3] = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar6;
  FUN_149624570(param_1);
  *(undefined4 *)(param_1 + 4) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3[5];
  dVar3 = *(double *)(param_3 + 6);
  dVar4 = *(double *)(param_3 + 8);
  dVar5 = *(double *)(param_3 + 10);
  dVar13 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  if (((dVar13 != 1.0) || (dVar10 = dVar3, dVar11 = dVar4, dVar12 = dVar5, NAN(dVar13))) &&
     (dVar10 = DAT_14c8464e0, dVar11 = DAT_14c8464e8, dVar12 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar10 = dVar3 * dVar13;
    dVar11 = dVar4 * dVar13;
    dVar12 = dVar5 * dVar13;
  }
  param_1[5] = dVar10;
  param_1[6] = dVar11;
  param_1[7] = dVar12;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 0xc);
  dVar3 = *(double *)(param_3 + 0xe);
  dVar4 = *(double *)(param_3 + 0x10);
  dVar5 = *(double *)(param_3 + 0x12);
  dVar13 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  if (((dVar13 != 1.0) || (dVar10 = dVar3, dVar11 = dVar4, dVar12 = dVar5, NAN(dVar13))) &&
     (dVar10 = DAT_14c8464e0, dVar11 = DAT_14c8464e8, dVar12 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar10 = dVar3 * dVar13;
    dVar11 = dVar4 * dVar13;
    dVar12 = dVar5 * dVar13;
  }
  param_1[9] = dVar10;
  param_1[10] = dVar11;
  param_1[0xb] = dVar12;
  *(undefined4 *)(param_1 + 0xc) = param_3[0x14];
  FUN_1496249e0(param_1 + 0x14,param_3 + 0x24);
  *(undefined1 *)(param_1 + 0x28) = param_4;
  local_38 = *(undefined8 *)(param_3 + 0x48);
  local_30 = *(longlong *)(param_3 + 0x4a);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_149624a38(param_1,&local_38);
  uVar7 = *(undefined8 *)(param_3 + 0x34);
  lVar8 = *(longlong *)(param_3 + 0x36);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)param_1[0x1d];
  param_1[0x1c] = uVar7;
  param_1[0x1d] = lVar8;
  if (plVar9 != (longlong *)0x0) {
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
  FUN_149639f24(param_1 + 0x1e,param_3 + 0x38);
  *(undefined4 *)(param_1 + 0x17) = param_3[0x2a];
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(param_3 + 0x2b);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)(param_3 + 0x2d);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  lVar8 = *(longlong *)(param_3 + 0x32);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)param_1[0x1b];
  param_1[0x1a] = uVar7;
  param_1[0x1b] = lVar8;
  if (plVar9 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149627aaa FUN_149627aaa body=146 status=ok
// SIG undefined FUN_149627aaa(void)

undefined8 * FUN_149627aaa(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined8 **)(param_1 + 0x148);
  uVar3 = FUN_14001cc68(0x210,0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x140);
  local_38 = *puVar2;
  local_30 = puVar2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14962399c(uVar3,&local_38,param_1 + 0x10,uVar1);
  *param_2 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149627b3e FUN_149627b3e body=117 status=ok
// SIG undefined FUN_149627b3e(void)

void FUN_149627b3e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149624cba(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149627bd0 FUN_149627bd0 body=117 status=ok
// SIG undefined FUN_149627bd0(void)

void FUN_149627bd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149627c46(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149627c46 FUN_149627c46 body=84 status=ok
// SIG undefined FUN_149627c46(void)

undefined8 * FUN_149627c46(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 149627cee FUN_149627cee body=156 status=ok
// SIG undefined FUN_149627cee(void)

void FUN_149627cee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  FUN_1400bd09c(param_2,(int)param_1[1],1);
  *(undefined8 *)*param_2 = 0;
  if (1 < (int)param_1[1]) {
    dVar4 = 0.0;
    lVar2 = 1;
    lVar3 = 9;
    do {
      lVar1 = *param_1;
      dVar5 = *(double *)(lVar1 + -0x48 + lVar3 * 8) - *(double *)(lVar1 + -0x10 + lVar3 * 8);
      dVar6 = *(double *)(lVar1 + -0x40 + lVar3 * 8) - *(double *)(lVar1 + -8 + lVar3 * 8);
      dVar7 = *(double *)(lVar1 + -0x38 + lVar3 * 8) - *(double *)(lVar1 + lVar3 * 8);
      dVar4 = dVar4 + SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
      *(double *)(*param_2 + lVar2 * 8) = dVar4;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 7;
    } while (lVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 149627d8a FUN_149627d8a body=1887 status=ok
// SIG undefined FUN_149627d8a(void)

double * FUN_149627d8a(double *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                      double param_5,byte param_6,byte param_7,undefined1 param_8,char param_9,
                      double param_10,undefined4 param_11)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  double *pdVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_278 [32];
  double local_258;
  undefined4 *local_250;
  char local_248;
  double local_240;
  undefined1 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  undefined8 local_100;
  double local_f8;
  undefined1 local_ef;
  longlong local_d8;
  undefined8 uStack_d0;
  void *local_c0;
  uint local_b8;
  uint local_b4;
  double *local_b0;
  uint local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_14582f278(param_2);
  local_b0 = (double *)0x0;
  local_a8 = *(uint *)(param_3 + 1);
  lVar12 = (longlong)(int)local_a8;
  pvVar3 = (void *)*param_3;
  if (lVar12 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_146c7ebe6(&local_b0,local_a8,0);
    memcpy(local_b0,pvVar3,lVar12 * 0x38);
  }
  local_c0 = (void *)0x0;
  local_b8 = *(uint *)(param_4 + 1);
  lVar12 = (longlong)(int)local_b8;
  pvVar3 = (void *)*param_4;
  if (lVar12 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1408fdf90(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar3,lVar12 << 3);
  }
  uVar13 = local_a8;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if ((longlong)(int)local_a8 != 0) {
    uVar17 = 0xffffffff;
    uVar20 = 0x7fefffff;
    pdVar8 = local_b0;
    uVar22 = uVar17;
    uVar25 = uVar20;
    uVar27 = uVar17;
    uVar29 = uVar20;
    dVar31 = -1.79769313486232e+308;
    dVar33 = -1.79769313486232e+308;
    dVar35 = -1.79769313486232e+308;
    do {
      dVar32 = *pdVar8;
      dVar34 = pdVar8[1];
      uVar23 = SUB84(dVar32,0);
      uVar26 = (int)((ulonglong)dVar32 >> 0x20);
      if ((double)CONCAT44(uVar25,uVar22) <= dVar32) {
        uVar23 = uVar22;
        uVar26 = uVar25;
      }
      if (dVar32 <= dVar31) {
        dVar32 = dVar31;
      }
      uVar28 = SUB84(dVar34,0);
      uVar30 = (int)((ulonglong)dVar34 >> 0x20);
      if ((double)CONCAT44(uVar29,uVar27) <= dVar34) {
        uVar28 = uVar27;
        uVar30 = uVar29;
      }
      if (dVar34 <= dVar33) {
        dVar34 = dVar33;
      }
      dVar36 = pdVar8[2];
      uVar18 = SUB84(dVar36,0);
      uVar21 = (int)((ulonglong)dVar36 >> 0x20);
      if ((double)CONCAT44(uVar20,uVar17) <= dVar36) {
        uVar18 = uVar17;
        uVar21 = uVar20;
      }
      if (dVar36 <= dVar35) {
        dVar36 = dVar35;
      }
      pdVar8 = pdVar8 + 7;
      uVar17 = uVar18;
      uVar20 = uVar21;
      uVar22 = uVar23;
      uVar25 = uVar26;
      uVar27 = uVar28;
      uVar29 = uVar30;
      dVar31 = dVar32;
      dVar33 = dVar34;
      dVar35 = dVar36;
    } while (pdVar8 != local_b0 + (longlong)(int)local_a8 * 7);
    dVar31 = ((double)CONCAT44(uVar21,uVar18) + dVar36) * 0.5;
    dVar35 = ((double)CONCAT44(uVar30,uVar28) + dVar34) * 0.5;
    dVar33 = ((double)CONCAT44(uVar26,uVar23) + dVar32) * 0.5;
    *param_1 = dVar33;
    param_1[1] = dVar35;
    param_1[2] = dVar31;
    pdVar8 = local_b0;
    do {
      *pdVar8 = *pdVar8 - dVar33;
      pdVar8[1] = pdVar8[1] - dVar35;
      pdVar8[2] = pdVar8[2] - dVar31;
      pdVar8 = pdVar8 + 7;
    } while (pdVar8 != local_b0 + (longlong)(int)local_a8 * 7);
  }
  if ((param_6 & param_7) == 1) {
    puVar4 = (undefined4 *)*param_3;
    local_1b8 = *(double *)(puVar4 + 0xc);
    local_1e8 = *puVar4;
    uStack_1e4 = puVar4[1];
    uStack_1e0 = puVar4[2];
    uStack_1dc = puVar4[3];
    local_1d8 = puVar4[4];
    uStack_1d4 = puVar4[5];
    uStack_1d0 = puVar4[6];
    uStack_1cc = puVar4[7];
    local_1c8 = puVar4[8];
    uStack_1c4 = puVar4[9];
    uStack_1c0 = puVar4[10];
    uStack_1bc = puVar4[0xb];
    lVar12 = (longlong)(int)local_a8;
    local_a8 = local_a8 + 1;
    if (local_a4 < local_a8) {
      FUN_146c8d502(&local_b0,uVar13);
    }
    uVar13 = local_b8;
    local_b0[lVar12 * 7 + 6] = local_1b8;
    pdVar8 = local_b0 + lVar12 * 7 + 4;
    *(undefined4 *)pdVar8 = local_1c8;
    *(undefined4 *)((longlong)pdVar8 + 4) = uStack_1c4;
    *(undefined4 *)(pdVar8 + 1) = uStack_1c0;
    *(undefined4 *)((longlong)pdVar8 + 0xc) = uStack_1bc;
    pdVar8 = local_b0 + lVar12 * 7 + 2;
    *(undefined4 *)pdVar8 = local_1d8;
    *(undefined4 *)((longlong)pdVar8 + 4) = uStack_1d4;
    *(undefined4 *)(pdVar8 + 1) = uStack_1d0;
    *(undefined4 *)((longlong)pdVar8 + 0xc) = uStack_1cc;
    pdVar8 = local_b0 + lVar12 * 7;
    *(undefined4 *)pdVar8 = local_1e8;
    *(undefined4 *)((longlong)pdVar8 + 4) = uStack_1e4;
    *(undefined4 *)(pdVar8 + 1) = uStack_1e0;
    *(undefined4 *)((longlong)pdVar8 + 0xc) = uStack_1dc;
    uVar1 = *(undefined8 *)*param_4;
    lVar12 = (longlong)(int)local_b8;
    local_b8 = local_b8 + 1;
    if (local_b4 < local_b8) {
      FUN_144941252(&local_c0,uVar13);
    }
    *(undefined8 *)((longlong)local_c0 + lVar12 * 8) = uVar1;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_149627cee(&local_b0,&local_d8);
  uVar1 = *(undefined8 *)(local_d8 + (longlong)((int)uStack_d0 + -1) * 8);
  uVar17 = (undefined4)uVar1;
  uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
  param_5 = param_5 + param_5;
  local_240 = param_10 * param_5;
  local_250 = &local_208;
  local_208 = (undefined4)DAT_14c8463b8;
  uStack_204 = DAT_14c8463b8._4_4_;
  uStack_200 = (undefined4)DAT_14c8463c0;
  uStack_1fc = DAT_14c8463c0._4_4_;
  local_1f8 = DAT_14c8463c8;
  local_230 = param_11;
  local_248 = param_9;
  local_238 = 1;
  local_258 = param_5;
  FUN_146c5fbce(&local_1e8,&local_b0,param_6,&local_c0);
  local_ef = param_8;
  local_100 = uVar1;
  local_f8 = param_5;
  FUN_142977aba(&local_1e8);
  FUN_146c00e98(param_2,&local_1e8);
  local_228 = DAT_14c84635c;
  FUN_146c02040();
  if (param_7 != 0) {
    if (param_9 != '\0') {
      iVar2 = *(int *)(param_2 + 0x50);
      uVar13 = iVar2 / 2;
      local_228 = 0;
      FUN_146bfae00(&local_d8,&local_228,uVar13);
      if (3 < iVar2) {
        uVar9 = 2;
        if (2 < (int)uVar13) {
          uVar9 = (ulonglong)uVar13;
        }
        dVar31 = 0.0;
        uVar10 = 1;
        uVar13 = 2;
        do {
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar13 - 2 >> 9) * 8);
          uVar15 = (ulonglong)(uVar13 - 2 & 0x1fe);
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar10 >> 8 & 0xffffff) * 8);
          uVar16 = (ulonglong)(uVar13 & 0x1fe);
          dVar33 = *(double *)(lVar12 + uVar15 * 0x18) - *(double *)(lVar5 + uVar16 * 0x18);
          dVar35 = *(double *)(lVar12 + 8 + uVar15 * 0x18) - *(double *)(lVar5 + 8 + uVar16 * 0x18);
          dVar32 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18) -
                   *(double *)(lVar5 + 0x10 + uVar16 * 0x18);
          dVar31 = dVar31 + SQRT(dVar32 * dVar32 + dVar33 * dVar33 + dVar35 * dVar35);
          *(double *)(local_d8 + uVar10 * 8) = dVar31;
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 + 2;
        } while (uVar9 != uVar10);
      }
      uVar1 = *(undefined8 *)(local_d8 + (longlong)((int)uStack_d0 + -1) * 8);
      uVar17 = (undefined4)uVar1;
      uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    uVar13 = *(uint *)(param_2 + 0x50);
    if (1 < (int)uVar13) {
      uVar9 = 0;
      do {
        fVar19 = (float)(*(double *)(local_d8 + uVar9 * 8) / (double)CONCAT44(uVar20,uVar17));
        fVar24 = (float)(int)uVar9;
        uVar11 = (int)uVar9 * 2;
        bVar14 = *(byte *)(param_2 + 0xb0);
        if (bVar14 == 1) {
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + (uVar9 >> 8 & 0xffffff) * 8);
          uVar10 = (ulonglong)(uVar11 & 0x1fe);
          *(float *)(lVar12 + uVar10 * 8) = fVar19;
          *(float *)(lVar12 + 4 + uVar10 * 8) = fVar24;
          bVar14 = *(byte *)(param_2 + 0xb0);
        }
        if ((bVar14 & 1) != 0) {
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + (uVar9 >> 8 & 0xffffff) * 8);
          uVar10 = (ulonglong)(uVar11 & 0x1fe);
          *(float *)(lVar12 + 8 + uVar10 * 8) = fVar19;
          *(float *)(lVar12 + 0xc + uVar10 * 8) = fVar24;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar13 >> 1);
    }
    if (param_6 != 0) {
      puVar6 = (undefined8 *)**(longlong **)(param_2 + 0x10);
      local_218 = puVar6[2];
      local_228 = *puVar6;
      uStack_220 = *(undefined4 *)(puVar6 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
      cVar7 = FUN_146bfed03();
      if (cVar7 != '\0') {
        lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar13 - 2 >> 9) * 8);
        uVar9 = (ulonglong)(uVar13 - 2 & 0x1ff);
        *(undefined8 *)(lVar12 + 0x10 + uVar9 * 0x18) = local_218;
        puVar6 = (undefined8 *)(lVar12 + uVar9 * 0x18);
        *puVar6 = local_228;
        puVar6[1] = CONCAT44(uStack_21c,uStack_220);
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar12 = **(longlong **)(param_2 + 0x10);
      local_218 = *(undefined8 *)(lVar12 + 0x28);
      local_228 = *(undefined8 *)(lVar12 + 0x18);
      uStack_220 = *(undefined4 *)(lVar12 + 0x20);
      uStack_21c = *(undefined4 *)(lVar12 + 0x24);
      cVar7 = FUN_146bfed03();
      if (cVar7 != '\0') {
        lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar13 - 1 >> 9) * 8);
        uVar9 = (ulonglong)(uVar13 - 1 & 0x1ff);
        *(undefined8 *)(lVar12 + 0x10 + uVar9 * 0x18) = local_218;
        puVar4 = (undefined4 *)(lVar12 + uVar9 * 0x18);
        *puVar4 = (undefined4)local_228;
        puVar4[1] = local_228._4_4_;
        puVar4[2] = uStack_220;
        puVar4[3] = uStack_21c;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
    }
  }
  FUN_146c5fd6c(&local_1e8);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496284ee FUN_1496284ee body=197 status=ok
// SIG undefined FUN_1496284ee(void)

longlong * FUN_1496284ee(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
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
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_1496285b4(param_2[1]);
  (**(code **)(*plVar1 + 0x378))(plVar1,*param_2);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x3ff0000000000000;
  FUN_148558567(&local_50,param_2[1],&local_78,0x407f400000000000);
  plVar1[0x39] = local_20;
  *(undefined4 *)(plVar1 + 0x37) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x1bc) = uStack_2c;
  *(undefined4 *)(plVar1 + 0x38) = uStack_28;
  *(undefined4 *)((longlong)plVar1 + 0x1c4) = uStack_24;
  *(undefined4 *)(plVar1 + 0x35) = local_40;
  *(undefined4 *)((longlong)plVar1 + 0x1ac) = uStack_3c;
  *(undefined4 *)(plVar1 + 0x36) = uStack_38;
  *(undefined4 *)((longlong)plVar1 + 0x1b4) = uStack_34;
  *(undefined4 *)(plVar1 + 0x33) = local_50;
  *(undefined4 *)((longlong)plVar1 + 0x19c) = uStack_4c;
  *(undefined4 *)(plVar1 + 0x34) = uStack_48;
  *(undefined4 *)((longlong)plVar1 + 0x1a4) = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496285b4 FUN_1496285b4 body=148 status=ok
// SIG undefined FUN_1496285b4(void)

undefined8 FUN_1496285b4(undefined8 param_1)

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
  uVar1 = FUN_145bac1be();
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



// FUNCTION 149628652 FUN_149628652 body=1778 status=ok
// SIG undefined FUN_149628652(void)

void FUN_149628652(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined1 auStack_1f8 [44];
  undefined1 local_1cc [4];
  undefined1 *local_1c8;
  undefined8 local_1b8;
  undefined **local_1a8;
  longlong *local_1a0;
  undefined1 *local_188;
  undefined8 local_178;
  undefined **local_168;
  longlong *local_160;
  undefined1 *local_148;
  undefined8 local_138;
  undefined **local_128;
  longlong *local_120;
  code *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1484416be();
  plVar6 = (longlong *)FUN_14843c80f(param_1);
  (**(code **)(*plVar6 + 0x358))(plVar6,param_1 + 0x13);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (wchar_t *)&LAB_14844e6fa;
  FUN_14840df3c(plVar6 + 0x19,1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    pppuVar9 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar9 = &local_68;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar6,0);
  plVar7 = (longlong *)FUN_1484101e0(param_1);
  (**(code **)(*plVar7 + 0x300))(plVar7,param_1 + 0x14);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  puStack_60 = &LAB_148441f14;
  local_88 = (wchar_t *)&LAB_14844e6fa;
  FUN_14840df3c(plVar7 + 6,1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    pppuVar9 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar9 = local_78;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar7,0);
  plVar7 = (longlong *)FUN_148f54d86(param_1);
  if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar7);
  }
  param_1[0x32] = (longlong)plVar7;
  (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1);
  lVar1 = param_1[0x32];
  local_c8 = *(wchar_t **)(lVar1 + 0x30);
  uStack_80 = *(ulonglong *)(lVar1 + 0x38);
  local_b8 = *(undefined ****)(lVar1 + 0x40);
  uStack_70 = *(undefined8 *)(lVar1 + 0x48);
  local_68 = *(undefined ***)(lVar1 + 0x50);
  puStack_60 = *(undefined1 **)(lVar1 + 0x58);
  local_58 = *(undefined8 *)(lVar1 + 0x60);
  uStack_50 = *(undefined8 *)(lVar1 + 0x68);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar8 = uStack_70;
  local_88 = local_c8;
  uVar3 = uStack_80;
  *(ulonglong *)(lVar1 + 0x60) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar1 + 0x68) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar1 + 0x50) = &PTR_LAB_14bd8e2c0;
  *(longlong **)(lVar1 + 0x58) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar1 + 0x30) = &LAB_14455fb66;
  *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_a8 = local_68;
  uStack_a0 = puStack_60;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_80 = uVar3;
  uStack_70 = uVar8;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != (wchar_t *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &local_a8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  FUN_1484f0d7a(param_1[0x32],param_1[0x15],param_1 + 0x33);
  lVar1 = param_1[0x32];
  (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_88);
  FUN_1484f17c8(lVar1,(int)local_88 + -1);
  lVar1 = param_1[0x32];
  local_88 = (wchar_t *)0x0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1446efa72(&local_88,0,2,0x10);
  pwVar2 = local_88;
  uStack_80 = CONCAT44(uStack_80._4_4_,2);
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  uVar8 = FUN_144a3f946();
  *(undefined8 *)(pwVar2 + 8) = uVar8;
  *(undefined ***)pwVar2 = &PTR_FUN_14bd8e2e0;
  *(longlong **)(pwVar2 + 0xc) = param_1;
  FUN_1448b6402(lVar1 + 0xb0,&local_c8,&local_88);
  FUN_1449db362(&local_88);
  plVar6 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  param_1[0x16] = (longlong)plVar6;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x16]);
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bd8e350;
  local_108 = FUN_14455fdf6;
  local_e0 = param_1;
  FUN_1484c5b30(param_1[0x16] + 0x28,param_1[0x16] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x16]);
  plVar6 = (longlong *)FUN_149628d45(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  param_1[0x17] = (longlong)plVar6;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  local_138 = 0;
  local_128 = &PTR_LAB_14bd8e3d0;
  local_148 = &LAB_14455fee2;
  local_120 = param_1;
  FUN_149628dda(param_1[0x17] + 0x28,param_1[0x17] + 0xa8);
  local_178 = 0;
  local_168 = &PTR_LAB_14bd8e450;
  local_188 = &LAB_14455ff46;
  local_160 = param_1;
  FUN_149628eb0(param_1[0x17] + 0x28,param_1[0x17] + 0xb4);
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14bd8e4d0;
  local_1c8 = &LAB_14455ffaa;
  local_1a0 = param_1;
  FUN_149628f86(param_1[0x17] + 0x28,param_1[0x17] + 0xc4);
  uVar8 = FUN_1409ffe1d();
  plVar6 = (longlong *)FUN_14962905b(uVar8);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  param_1[0x18] = (longlong)plVar6;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x18],0);
  plVar6 = (longlong *)FUN_148f491c5(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  param_1[0x19] = (longlong)plVar6;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1[0x19] + 0xb6) = 0;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  FUN_1496290f0(param_1);
  local_88 = L"ToolName";
  uStack_80._0_4_ = 8;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UDrawPolyPathTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x11);
  FUN_1446e940c(local_1cc,&local_88);
  FUN_140208bae(&local_88,local_1cc,&local_c8,L"Path Extrude");
  (**(code **)(*param_1 + 0x370))(param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149628d45 FUN_149628d45 body=148 status=ok
// SIG undefined FUN_149628d45(void)

undefined8 FUN_149628d45(undefined8 param_1)

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
  uVar1 = FUN_1459f9dea();
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



// FUNCTION 149628dda FUN_149628dda body=212 status=ok
// SIG undefined FUN_149628dda(void)

void FUN_149628dda(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149642f8e(uVar2,param_2,local_68);
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



// FUNCTION 149628eb0 FUN_149628eb0 body=212 status=ok
// SIG undefined FUN_149628eb0(void)

void FUN_149628eb0(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_1496432ac(uVar2,param_2,local_68);
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



// FUNCTION 149628f86 FUN_149628f86 body=212 status=ok
// SIG undefined FUN_149628f86(void)

void FUN_149628f86(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_1496435ca(uVar2,param_2,local_68);
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



// FUNCTION 14962905b FUN_14962905b body=148 status=ok
// SIG undefined FUN_14962905b(void)

undefined8 FUN_14962905b(undefined8 param_1)

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
  uVar1 = FUN_1459f9ed6();
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



// FUNCTION 1496290f0 FUN_1496290f0 body=461 status=ok
// SIG undefined FUN_1496290f0(void)

void FUN_1496290f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  plVar5 = (longlong *)FUN_148f7b658();
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  *(longlong **)(param_1 + 0x270) = plVar5;
  (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1);
  lVar1 = *(longlong *)(param_1 + 0x270);
  local_98 = *(longlong *)(lVar1 + 0x80);
  uStack_50 = *(undefined8 *)(lVar1 + 0x88);
  local_88 = *(longlong **)(lVar1 + 0x90);
  uStack_40 = *(undefined8 *)(lVar1 + 0x98);
  local_38 = *(longlong *)(lVar1 + 0xa0);
  uStack_30 = *(undefined8 *)(lVar1 + 0xa8);
  local_28 = *(undefined8 *)(lVar1 + 0xb0);
  uStack_20 = *(undefined8 *)(lVar1 + 0xb8);
  uVar4 = uStack_20;
  local_48 = local_88;
  uVar3 = uStack_40;
  local_58 = local_98;
  uVar2 = uStack_50;
  *(undefined8 *)(lVar1 + 0xb0) = 0x3ff0000000000000;
  *(ulonglong *)(lVar1 + 0xb8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined ***)(lVar1 + 0xa0) = &PTR_LAB_14bd8e540;
  *(longlong *)(lVar1 + 0xa8) = param_1;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(ulonglong *)(lVar1 + 0x98) = CONCAT44(uStack_7c,uStack_80);
  *(code **)(lVar1 + 0x80) = FUN_144560004;
  *(ulonglong *)(lVar1 + 0x88) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_68 = local_28;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_20 = uVar4;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x270) + 0x2f8))();
  *(byte *)(*(longlong *)(param_1 + 0x270) + 0xc1) = *(byte *)(param_1 + 0x231) ^ 1;
  plVar5 = *(longlong **)(param_1 + 0x270);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,param_1 + 0x198);
  }
  FUN_14962b094(param_1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496292be FUN_1496292be body=535 status=ok
// SIG undefined FUN_1496292be(void)

void FUN_1496292be(longlong param_1,char param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != '\x02') && (*(int *)(param_1 + 0xd0) == 3)) {
    dVar2 = 0.0;
    if (*(int *)(*(longlong *)(param_1 + 0xb8) + 0xc4) != 0) {
      dVar2 = (double)*(float *)(*(longlong *)(param_1 + 0xb8) + 200);
    }
    *(double *)(param_1 + 0x210) = dVar2;
    *(undefined8 *)(param_1 + 0x260) = 0;
    FUN_1496294d6(param_1);
    FUN_14962b69a(param_1);
    FUN_1496290f0(param_1);
    *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
  }
  if (*(char *)(param_1 + 0x218) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0xac) = *(undefined4 *)(param_1 + 0x21c);
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  if (*(char *)(param_1 + 0x220) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0xb8) = *(undefined4 *)(param_1 + 0x224);
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 200) = *(undefined4 *)(param_1 + 0x22c);
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 400) + 0x2a8))();
  *(undefined8 *)(param_1 + 400) = 0;
  plVar1 = *(longlong **)(param_1 + 0xb0);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xb8);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 200);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1496294d6(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496294d6 FUN_1496294d6 body=140 status=ok
// SIG undefined FUN_1496294d6(void)

void FUN_1496294d6(longlong param_1)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_14851b2ea();
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(int *)(param_1 + 0x244) < 0) {
    *(undefined4 *)(param_1 + 0x240) = 0;
    FUN_1447a8aa0(param_1 + 0x238,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x254)) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  FUN_1447a8aa0(param_1 + 0x248,0);
  return;
}



// FUNCTION 149629562 FUN_149629562 body=575 status=ok
// SIG undefined FUN_149629562(void)

void FUN_149629562(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_74 [4];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  wchar_t *local_48;
  longlong **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) goto LAB_14962969a;
  lVar2 = *(longlong *)(param_3 + 0x20);
  FUN_1446f470e(&local_58,L"Width",1);
  if (lVar2 != local_58) {
    lVar2 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_60,L"CornerRadius",1);
    if (lVar2 != local_60) {
      if ((int)param_1[0x1a] == 3) {
        lVar2 = *(longlong *)(param_3 + 0x20);
        FUN_1446f470e(&local_68,L"ExtrudeHeight",1);
        if ((lVar2 == local_68) && ((*(uint *)(param_1[0x17] + 0xc4) | 2) == 3)) {
          param_1[0x42] = (longlong)(double)*(float *)(param_1[0x17] + 200);
          local_40 = &local_50;
          local_48 = L"譈\xe909읨Ԍ襈䳈ઋ聁낹";
          local_50 = param_1;
          FUN_1484dfdc6(param_1[0x4b],&local_48,1);
          goto LAB_14962969a;
        }
      }
      lVar2 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_70,L"bRoundedCorners",1);
      if (lVar2 != local_70) goto LAB_14962969a;
      if ((int)param_1[0x1a] == 2 && *(char *)(param_1[0x17] + 0xb0) == '\0') {
        lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_48 = L"CancelRadiusTransactionName";
        local_40._0_4_ = 0x1b;
        FUN_1446e940c(&local_50,&local_48);
        local_48 = L"UDrawPolyPathTool";
        local_40 = (longlong **)CONCAT44(local_40._4_4_,0x11);
        FUN_1446e940c(local_74,&local_48);
        FUN_140208bae(&local_48,local_74,&local_50,L"Cancel Setting Corner Radius");
        local_80 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x27c);
        *local_80 = &PTR_LAB_14bd8e4f0;
        *(undefined1 *)(local_80 + 1) = 0;
        *(undefined4 *)((longlong)local_80 + 0xc) = uVar1;
        *(undefined4 *)(local_80 + 2) = 2;
        (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_80,&local_48);
        if (local_48 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_48 + 0x10))();
        }
        FUN_14962b66c(param_1);
        goto LAB_14962969a;
      }
      if ((int)param_1[0x1a] == 0) goto LAB_14962969a;
    }
  }
  FUN_1496297a2(param_1);
LAB_14962969a:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496297a2 FUN_1496297a2 body=471 status=ok
// SIG undefined FUN_1496297a2(void)

void FUN_1496297a2(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  undefined1 *local_2d8;
  longlong *plStack_2d0;
  double local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 local_268;
  longlong local_258;
  undefined1 local_250 [544];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (*(longlong *)(param_1 + 600) != 0) {
    local_2e8 = 0;
    FUN_1411b354a(local_250,0,0,0);
    FUN_14962bcac(param_1,&local_278,local_250);
    local_2d8 = (undefined1 *)0x0;
    plStack_2d0 = (longlong *)0x0;
    local_2c8 = 0.0;
    uStack_2c0 = 0;
    uStack_2bc = 0x3ff00000;
    uStack_2b0 = (undefined4)uStack_270;
    uStack_2ac = (undefined4)((ulonglong)uStack_270 >> 0x20);
    local_2b8 = local_278;
    uStack_2b4 = uStack_274;
    local_2a8 = local_268;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_294 = 0x3ff00000;
    uStack_290 = 0;
    uStack_28c = 0x3ff00000;
    local_288 = 0x3ff0000000000000;
    uStack_280 = 0;
    FUN_14851b91a(*(undefined8 *)(param_1 + 600));
    if (*(int *)(param_1 + 0xd0) == 3) {
      dVar1 = *(double *)(param_1 + 0x1b0);
      dVar2 = *(double *)(param_1 + 0x1b8);
      dVar3 = *(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1c0);
      local_2d8 = (undefined1 *)(dVar1 * dVar3 + *(double *)(param_1 + 0x1c8) * (dVar2 + dVar2));
      plStack_2d0 = (longlong *)(dVar3 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0x1c8));
      local_2c8 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
      local_2e8 = 0;
      FUN_1484df634(*(undefined8 *)(param_1 + 600),local_250,&local_2d8,0);
      plStack_2d0 = &local_258;
      local_2d8 = &LAB_14456014e;
      local_258 = param_1;
      FUN_1484dfdc6(*(undefined8 *)(param_1 + 600),&local_2d8,1);
    }
    else {
      FUN_14851c2f2(*(undefined8 *)(param_1 + 600),local_250);
    }
    FUN_141082778(local_250);
  }
  if ((local_30 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962997a FUN_14962997a body=502 status=ok
// SIG undefined FUN_14962997a(void)

char FUN_14962997a(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x268) == 0) && (*(longlong *)(param_1 + 0x260) == 0)) {
      cVar5 = '\0';
    }
    else {
      dVar1 = param_2[5];
      dVar2 = param_2[4];
      dVar3 = param_2[2];
      dVar4 = param_2[1];
      *(double *)(param_3 + 0x28) = param_2[3] * 100.0 + *param_2;
      *(double *)(param_3 + 0x30) = dVar2 * 100.0 + dVar4;
      *(double *)(param_3 + 0x38) = dVar1 * 100.0 + dVar3;
      *(undefined4 *)(param_3 + 8) = 0x42c80000;
      cVar5 = '\x01';
    }
  }
  else {
    local_58 = DAT_14c8464f0;
    local_68 = DAT_14c8464e0;
    dStack_60 = DAT_14c8464e8;
    local_50 = 0.0;
    dStack_48 = 0.0;
    local_40 = 0.0;
    local_38 = 1.0;
    local_98 = *(undefined4 *)param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = *(undefined4 *)(param_2 + 1);
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = param_2[2];
    dStack_80 = param_2[3];
    local_78 = param_2[4];
    dStack_70 = param_2[5];
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x300))();
    if (cVar5 != '\0') {
      *(float *)(param_3 + 8) =
           (float)((local_58 - param_2[2]) * param_2[5] +
                  (local_68 - *param_2) * param_2[3] + (dStack_60 - param_2[1]) * param_2[4]);
      *(double *)(param_3 + 0x28) = local_68;
      *(double *)(param_3 + 0x30) = dStack_60;
      *(double *)(param_3 + 0x38) = local_58;
      *(double *)(param_3 + 0x58) =
           local_50 * (local_40 + local_40) + local_38 * (dStack_48 + dStack_48);
      *(double *)(param_3 + 0x60) =
           (local_40 + local_40) * dStack_48 - (local_50 + local_50) * local_38;
      *(double *)(param_3 + 0x68) =
           1.0 - ((dStack_48 + dStack_48) * dStack_48 + local_50 * (local_50 + local_50));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149629bce FUN_149629bce body=225 status=ok
// SIG undefined FUN_149629bce(void)

undefined1 * FUN_149629bce(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  float local_128;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  cVar2 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x380))(param_1 + -0x98,param_3,local_130);
  if (cVar2 == '\0') {
    dVar1 = 3.4028234663852886e+38;
  }
  else {
    dVar1 = (double)local_128;
  }
  *param_2 = 1;
  *(double *)(param_2 + 8) = dVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149629cb0 FUN_149629cb0 body=1433 status=ok
// SIG undefined FUN_149629cb0(void)

void FUN_149629cb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (3 < *(uint *)(param_1 + 0x38)) goto LAB_149629ed8;
  lVar1 = param_1 + -0x98;
  switch(*(uint *)(param_1 + 0x38)) {
  case 0:
    if (*(longlong **)(param_1 + 0x1d8) == (longlong *)0x0) goto LAB_149629ed8;
    local_88 = (wchar_t *)*param_2;
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_70 = *(undefined4 *)(param_2 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_68 = *(undefined4 *)(param_2 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = *(undefined4 *)(param_2 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x310))();
    if (cVar5 == '\0') goto LAB_149629ed8;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 800))();
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(*(longlong *)(param_1 + 0x1d8) + 0x5b6);
      lVar7 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
      local_88 = L"FinishPathTransactionName";
      uStack_80 = 0x19;
      FUN_1446e940c(local_8c,&local_88);
      local_88 = L"UDrawPolyPathTool";
      uStack_80 = 0x11;
      FUN_1446e940c(local_90,&local_88);
      FUN_140208bae(&local_88,local_90,local_8c,L"Finish Path");
      local_98 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x1e4);
      *local_98 = &PTR_LAB_14bd8e4f0;
      *(undefined1 *)(local_98 + 1) = 0;
      *(undefined4 *)((longlong)local_98 + 0xc) = uVar3;
      *(undefined4 *)(local_98 + 2) = 0;
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,lVar1,&local_98,&local_88);
      if (local_88 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      FUN_14962a24a(lVar1);
      goto LAB_149629ed8;
    }
    lVar7 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
    local_88 = L"AddToPathTransactionName";
    uStack_80 = 0x18;
    FUN_1446e940c(local_8c,&local_88);
    local_88 = L"UDrawPolyPathTool";
    uStack_80 = 0x11;
    FUN_1446e940c(local_90,&local_88);
    FUN_140208bae(&local_88,local_90,local_8c,L"Add Point to Path");
    local_a0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x1e4);
    *local_a0 = &PTR_LAB_14bd8e4f0;
    *(undefined1 *)(local_a0 + 1) = 0;
    *(undefined4 *)((longlong)local_a0 + 0xc) = uVar3;
    *(undefined4 *)(local_a0 + 2) = 0;
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,lVar1,&local_a0,&local_88);
    break;
  case 1:
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + 0xac);
    plVar6 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      FUN_144a5dc74(&local_88);
      (**(code **)(*plVar6 + 0x340))(plVar6,&local_88,4);
      if (local_88 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      lVar7 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
      local_88 = L"BeginWidthTransactionName";
      uStack_80 = 0x19;
      FUN_1446e940c(local_8c,&local_88);
      local_88 = L"UDrawPolyPathTool";
      uStack_80 = 0x11;
      FUN_1446e940c(local_90,&local_88);
      FUN_140208bae(&local_88,local_90,local_8c,L"Set Path Width");
      local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x1e4);
      *local_a8 = &PTR_LAB_14bd8e4f0;
      *(undefined1 *)(local_a8 + 1) = 0;
      *(undefined4 *)((longlong)local_a8 + 0xc) = uVar3;
      *(undefined4 *)(local_a8 + 2) = 1;
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,lVar1,&local_a8,&local_88);
      if (local_88 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xb0) == '\x01') {
        FUN_14962b470(lVar1);
        goto LAB_149629ed8;
      }
      goto LAB_149629fdd;
    }
    local_88 = L"ZeroWidthPathError";
    uStack_80 = 0x12;
    FUN_1446e940c(local_8c,&local_88);
    local_88 = L"UDrawPolyPathTool";
    uStack_80 = 0x11;
    FUN_1446e940c(local_90,&local_88);
    FUN_140208bae(&local_88,local_90,local_8c,L"Cannot set path width to 0.");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_88,4);
    break;
  case 2:
    lVar7 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
    local_88 = L"BeginRadiusTransactionName";
    uStack_80 = 0x1a;
    FUN_1446e940c(local_8c,&local_88);
    local_88 = L"UDrawPolyPathTool";
    uStack_80 = 0x11;
    FUN_1446e940c(local_90,&local_88);
    FUN_140208bae(&local_88,local_90,local_8c,L"Set Corner Radius");
    local_b0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x1e4);
    *local_b0 = &PTR_LAB_14bd8e4f0;
    *(undefined1 *)(local_b0 + 1) = 0;
    *(undefined4 *)((longlong)local_b0 + 0xc) = uVar3;
    *(undefined4 *)(local_b0 + 2) = 2;
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,lVar1,&local_b0,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
LAB_149629fdd:
    FUN_14962b66c(lVar1);
    goto LAB_149629ed8;
  case 3:
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xc4);
    if ((iVar4 == 4) || (iVar4 == 2)) {
      *(double *)(param_1 + 0x178) = (double)*(float *)(*(longlong *)(param_1 + 0x20) + 200);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    FUN_1496294d6(lVar1);
    FUN_14962b69a(lVar1);
    FUN_1496290f0(lVar1);
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    goto LAB_149629ed8;
  }
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
LAB_149629ed8:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962a24a FUN_14962a24a body=2462 status=ok
// SIG undefined FUN_14962a24a(void)

void FUN_14962a24a(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_218 [32];
  double local_1f8;
  ulonglong local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined1 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar2 = (longlong *)(param_1 + 0x1d8);
  FUN_148460dca(plVar2,*(longlong *)(param_1 + 0x270) + 200);
  uVar6 = *(uint *)(param_1 + 0x1e0);
  dVar23 = *(double *)(param_1 + 0x1b0);
  dVar25 = *(double *)(param_1 + 0x1b8);
  dVar27 = *(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1c0);
  local_108 = dVar23 * dVar27 + *(double *)(param_1 + 0x1c8) * (dVar25 + dVar25);
  local_100 = dVar27 * dVar25 - (dVar23 + dVar23) * *(double *)(param_1 + 0x1c8);
  local_f8 = 1.0 - ((dVar25 + dVar25) * dVar25 + dVar23 * (dVar23 + dVar23));
  pdVar8 = *(double **)(param_1 + 0x1d8);
  local_1a8 = pdVar8[9] - pdVar8[2];
  local_1b0 = pdVar8[8] - pdVar8[1];
  dVar27 = pdVar8[7] - *pdVar8;
  dVar30 = SQRT(local_1a8 * local_1a8 + dVar27 * dVar27 + local_1b0 * local_1b0);
  dVar23 = 0.0;
  dVar25 = 1.0 / dVar30;
  local_1b8 = (double)(-(ulonglong)(0.0 < dVar30) & (ulonglong)(dVar27 * dVar25));
  if (0.0 < dVar30) {
    local_1a8 = local_1a8 * dVar25;
    local_1b0 = local_1b0 * dVar25;
  }
  else {
    local_1b0 = 0.0;
    local_1a8 = 0.0;
  }
  FUN_1482ae2be(pdVar8,0,&local_1b8,&local_108);
  uVar20 = uVar6 - 1;
  lVar21 = *(longlong *)(param_1 + 0x1d8);
  lVar17 = (longlong)(int)uVar20 * 0x38;
  lVar19 = (longlong)(int)uVar6 * 0x38;
  local_1a8 = *(double *)(lVar21 + 0x10 + lVar17) - *(double *)(lVar21 + -0x60 + lVar19);
  dVar25 = *(double *)(lVar21 + 8 + lVar17) - *(double *)(lVar21 + -0x68 + lVar19);
  dVar30 = *(double *)(lVar21 + lVar17) - *(double *)(lVar21 + -0x70 + lVar19);
  dVar31 = SQRT(local_1a8 * local_1a8 + dVar30 * dVar30 + dVar25 * dVar25);
  dVar27 = 1.0 / dVar31;
  local_1b8 = (double)(-(ulonglong)(0.0 < dVar31) & (ulonglong)(dVar30 * dVar27));
  if (0.0 < dVar31) {
    local_1a8 = local_1a8 * dVar27;
    dVar23 = dVar25 * dVar27;
  }
  else {
    local_1a8 = 0.0;
  }
  local_1b0 = dVar23;
  FUN_1482ae2be(lVar21 + lVar17,0,&local_1b8,&local_108);
  plVar3 = (longlong *)(param_1 + 0x1e8);
  FUN_1400bd09c(plVar3,uVar6,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar20 * 8) = 0x3ff0000000000000;
  **(undefined8 **)(param_1 + 0x1e8) = 0x3ff0000000000000;
  uVar14 = uVar20;
  if (*(byte *)(param_1 + 0x230) != 0) {
    uVar14 = uVar6;
  }
  uVar16 = *(byte *)(param_1 + 0x230) ^ 1;
  if ((int)uVar16 < (int)uVar14) {
    local_1f0 = (ulonglong)uVar14;
    lVar21 = (ulonglong)uVar16 * 0x38;
    uVar18 = (ulonglong)uVar16;
    do {
      uVar1 = uVar18 + 1;
      lVar17 = *plVar2;
      lVar19 = (longlong)((int)(uVar20 + (int)uVar18) % (int)uVar6) * 0x38;
      local_1f8 = *(double *)(lVar17 + lVar19);
      dVar23 = *(double *)(lVar17 + 8 + lVar19);
      dVar25 = *(double *)(lVar17 + 0x10 + lVar19);
      dVar27 = *(double *)(lVar17 + lVar21);
      dVar30 = *(double *)(lVar17 + 8 + lVar21);
      dVar31 = *(double *)(lVar17 + 0x10 + lVar21);
      dVar26 = dVar31 - dVar25;
      dVar28 = dVar30 - dVar23;
      dVar29 = dVar27 - local_1f8;
      dVar32 = SQRT(dVar26 * dVar26 + dVar29 * dVar29 + dVar28 * dVar28);
      dVar24 = 1.0 / dVar32;
      if (0.0 < dVar32) {
        dVar26 = dVar26 * dVar24;
        dVar28 = dVar28 * dVar24;
      }
      else {
        dVar28 = 0.0;
        dVar26 = 0.0;
      }
      lVar19 = ((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                (longlong)(int)uVar6 & 0xffffffffU) * 0x38;
      local_1b0 = *(double *)(lVar17 + 8 + lVar19);
      local_1a8 = *(double *)(lVar17 + 0x10 + lVar19);
      dVar12 = local_1a8 - dVar31;
      dVar13 = local_1b0 - dVar30;
      dVar10 = *(double *)(lVar17 + lVar19) - dVar27;
      dVar11 = SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar13 * dVar13);
      dVar22 = 1.0 / dVar11;
      if (0.0 < dVar11) {
        dVar12 = dVar12 * dVar22;
        dVar13 = dVar13 * dVar22;
      }
      else {
        dVar13 = 0.0;
        dVar12 = 0.0;
      }
      dVar24 = (double)(-(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar29 * dVar24));
      dVar32 = (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar10 * dVar22));
      local_1e8 = dVar31;
      local_1e0 = dVar30;
      local_1d8 = dVar27;
      if (ABS(dVar26 * dVar12 + dVar24 * dVar32 + dVar28 * dVar13) <= 0.999) {
        local_1a8 = dVar25 + (local_108 * dVar28 - dVar24 * local_100) * 0.01;
        local_1b0 = dVar23 + (local_f8 * dVar24 - dVar26 * local_108) * 0.01;
        local_1b8 = local_1f8 + (local_100 * dVar26 - dVar28 * local_f8) * 0.01;
        local_158 = 0xbff0000000000000;
        local_150 = 0;
        local_188 = (local_100 * dVar12 - dVar13 * local_f8) * 0.01 + dVar27;
        local_180 = (dVar32 * local_f8 - dVar12 * local_108) * 0.01 + dVar30;
        local_178 = (local_108 * dVar13 - dVar32 * local_100) * 0.01 + dVar31;
        local_1a0 = dVar24;
        local_198 = dVar28;
        local_190 = dVar26;
        local_170 = dVar32;
        local_168 = dVar13;
        local_160 = dVar12;
        FUN_14830c246(&local_1b8);
        dVar23 = (local_138 + local_118) * 0.5;
        dVar25 = (local_140 + local_120) * 0.5;
        dVar24 = (local_148 + local_128) * 0.5;
        dVar32 = dVar27 - dVar24;
        dVar29 = dVar30 - dVar25;
        dVar26 = dVar31 - dVar23;
        *(double *)(*plVar3 + uVar18 * 8) =
             SQRT(dVar26 * dVar26 + dVar32 * dVar32 + dVar29 * dVar29) / 0.01;
        dVar23 = dVar23 - dVar31;
        dVar25 = dVar25 - dVar30;
        dVar24 = dVar24 - dVar27;
        dVar27 = SQRT(dVar23 * dVar23 + dVar24 * dVar24 + dVar25 * dVar25);
        dVar30 = 1.0 / dVar27;
        if (0.0 < dVar27) {
          dVar23 = dVar23 * dVar30;
          dVar25 = dVar25 * dVar30;
        }
        else {
          dVar23 = 0.0;
          dVar25 = 0.0;
        }
        dVar27 = (double)(-(ulonglong)(0.0 < dVar27) & (ulonglong)(dVar24 * dVar30));
        local_1c0 = dVar27 * local_100 - local_108 * dVar25;
        local_1c8 = dVar23 * local_108 - dVar27 * local_f8;
        local_1d0 = dVar25 * local_f8 - local_100 * dVar23;
        FUN_1482ae2be(*plVar2 + lVar21,0,&local_1d0,&local_108);
      }
      else {
        local_1a8 = local_1a8 - dVar25;
        local_1b0 = local_1b0 - dVar23;
        dVar23 = *(double *)(lVar17 + lVar19) - local_1f8;
        dVar25 = SQRT(local_1a8 * local_1a8 + dVar23 * dVar23 + local_1b0 * local_1b0);
        dVar27 = 1.0 / dVar25;
        if (0.0 < dVar25) {
          local_1a8 = local_1a8 * dVar27;
          local_1b0 = local_1b0 * dVar27;
        }
        else {
          local_1b0 = 0.0;
          local_1a8 = 0.0;
        }
        local_1b8 = (double)(-(ulonglong)(0.0 < dVar25) & (ulonglong)(dVar23 * dVar27));
        FUN_1482ae2be(lVar17 + lVar21,0,&local_1b8,&local_108);
        *(undefined8 *)(*plVar3 + uVar18 * 8) = 0x3ff0000000000000;
      }
      lVar21 = lVar21 + 0x38;
      uVar18 = uVar1;
    } while (local_1f0 != uVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(int *)(param_1 + 0x204) < 0) {
    FUN_1447a8aa0(plVar2,0);
  }
  lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x270) + 0xd0);
  if (lVar21 != 0) {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 200);
    lVar19 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x200);
      *(uint *)(param_1 + 0x200) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x204) < iVar7 + 1U) {
        FUN_1403e3958(plVar2,iVar7);
      }
      puVar4 = (undefined8 *)(lVar17 + lVar19);
      lVar9 = *plVar2;
      *(undefined8 *)(lVar9 + 0x10 + (longlong)iVar7 * 0x18) = puVar4[2];
      uVar15 = puVar4[1];
      puVar5 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x18);
      *puVar5 = *puVar4;
      puVar5[1] = uVar15;
      lVar19 = lVar19 + 0x38;
    } while (lVar21 * 0x38 - lVar19 != 0);
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  FUN_14962b160(param_1);
  FUN_14962b274(param_1);
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962abea FUN_14962abea body=225 status=ok
// SIG undefined FUN_14962abea(void)

undefined1 * FUN_14962abea(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  float local_128;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  cVar2 = (**(code **)(*(longlong *)(param_1 + -0xa0) + 0x380))(param_1 + -0xa0,param_3,local_130);
  if (cVar2 == '\0') {
    dVar1 = 3.4028234663852886e+38;
  }
  else {
    dVar1 = (double)local_128;
  }
  *param_2 = 1;
  *(double *)(param_2 + 8) = dVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962accc FUN_14962accc body=503 status=ok
// SIG undefined FUN_14962accc(void)

undefined8 FUN_14962accc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (3 < *(uint *)(param_1 + 0x30)) goto LAB_14962ad36;
  lVar1 = param_1 + -0xa0;
  switch(*(uint *)(param_1 + 0x30)) {
  case 0:
    if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
      local_58 = (undefined1 *)*param_2;
      plStack_50 = (longlong *)param_2[1];
      local_48 = *(undefined4 *)(param_2 + 2);
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_40 = *(undefined4 *)(param_2 + 3);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_38 = *(undefined4 *)(param_2 + 4);
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_30 = *(undefined4 *)(param_2 + 5);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x308))();
    }
    goto LAB_14962ad36;
  case 1:
    if (*(longlong **)(param_1 + 0x1c8) == (longlong *)0x0) goto LAB_14962ad36;
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x2e0))();
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(int *)(lVar3 + 0xa8) != 1) goto LAB_14962ad36;
    dVar4 = *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x70);
    if (*(char *)(param_1 + 0x191) == '\0') {
      dVar4 = (double)FUN_148557420(lVar1,SUB84(dVar4,0));
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    *(float *)(lVar3 + 0xac) = (float)(dVar4 + dVar4);
    break;
  case 2:
    if (*(longlong **)(param_1 + 0x1c8) == (longlong *)0x0) goto LAB_14962ad36;
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x2e0))();
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(int *)(lVar3 + 0xb4) != 1) goto LAB_14962ad36;
    dVar4 = *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x70);
    if (*(char *)(param_1 + 0x191) == '\0') {
      dVar4 = (double)FUN_148557420(lVar1,SUB84(dVar4,0));
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    dVar4 = dVar4 / (double)*(float *)(lVar3 + 0xac);
    if (2.0 <= dVar4) {
      dVar4 = 2.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    *(float *)(lVar3 + 0xb8) = (float)dVar4;
    break;
  case 3:
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc4);
    if (((iVar2 == 4) || (iVar2 == 2)) && (*(longlong **)(param_1 + 0x1c0) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x2e0))();
      *(double *)(param_1 + 0x170) = (double)*(float *)(*(longlong *)(param_1 + 0x1c0) + 0xb0);
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 200) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0xb0);
      plStack_50 = &local_20;
      local_58 = &LAB_14456014e;
      local_20 = lVar1;
      FUN_1484dfdc6(*(undefined8 *)(param_1 + 0x1b8),&local_58,1);
    }
    goto LAB_14962ad36;
  }
  FUN_1496297a2(lVar1);
LAB_14962ad36:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962aede FUN_14962aede body=436 status=ok
// SIG undefined FUN_14962aede(void)

void FUN_14962aede(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined1 local_10c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x28);
  plVar2 = (longlong *)param_1[0x32];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x4c];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x4d];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x4e];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  }
  if (0 < (int)param_1[0x48]) {
    FUN_141300fc0(local_148);
    local_138 = 0x3f800000;
    uStack_134 = 0x3f0c8c8d;
    uStack_130 = 0;
    uStack_12c = 0x3f800000;
    local_128 = 0x40800000;
    local_10c = 0;
    FUN_14845339e(local_148,param_2);
    lVar5 = (longlong)(int)param_1[0x48];
    if (0 < lVar5) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 1;
        lVar4 = 0;
        if (lVar1 != lVar5) {
          lVar4 = lVar1;
        }
        FUN_148527000(local_148,param_1[0x47] + lVar3 * 0x18,param_1[0x47] + lVar4 * 0x18);
        lVar3 = lVar1;
      } while (lVar1 != lVar5);
    }
    lVar5 = (longlong)(int)param_1[0x4a];
    if (0 < lVar5) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 1;
        lVar4 = 0;
        if (lVar1 != lVar5) {
          lVar4 = lVar1;
        }
        FUN_148527000(local_148,param_1[0x49] + lVar3 * 0x18,param_1[0x49] + lVar4 * 0x18);
        lVar3 = lVar1;
      } while (lVar1 != lVar5);
    }
    FUN_14845342a(local_148);
    FUN_14008cd94(local_148);
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962b094 FUN_14962b094 body=202 status=ok
// SIG undefined FUN_14962b094(void)

void FUN_14962b094(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_38 = L"StartDrawInstructions";
  local_30 = 0x15;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UDrawPolyPathTool";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,
                L"Draw a path on the drawing plane, set its width, and extrude it. Left-click to place path vertices, and click on the last or first vertex to complete the path. Hold Shift to ignore snapping while drawing."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962b160 FUN_14962b160 body=256 status=ok
// SIG undefined FUN_14962b160(void)

void FUN_14962b160(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x4b] == 0) {
    lVar2 = FUN_148f73ca8();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x4b] = lVar2;
    FUN_14851b11a(lVar2,param_1[0x15],&DAT_14c846480);
    FUN_148558526(param_1[0x4b],0);
    cVar1 = FUN_14842d064(param_1[0x19] + 0xa8,0);
    lVar2 = param_1[0x4b];
    if (cVar1 == '\0') {
      FUN_14479d2ce(param_1[0x19] + 0xa8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_30 = 0x3f4ccccd;
    uStack_2c = 0x3f400000;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uVar3 = FUN_148557ea9(&local_30,uVar3,0);
    FUN_14851b338(lVar2,uVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962b274 FUN_14962b274 body=506 status=ok
// SIG undefined FUN_14962b274(void)

void FUN_14962b274(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  lVar2 = param_1[0x17];
  if (*(int *)(lVar2 + 0xa8) == 1) {
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)(lVar2 + 0xac);
  }
  else if ((char)param_1[0x43] == '\x01') {
    *(undefined4 *)(lVar2 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x21c);
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  plVar3 = (longlong *)FUN_148f88c8a(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  param_1[0x4d] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
  (**(code **)(*(longlong *)param_1[0x4d] + 0x2d0))
            ((longlong *)param_1[0x4d],param_1 + 0x3f,&DAT_14c846480);
  param_1[0x4c] = 0;
  FUN_1496297a2(param_1);
  iVar1 = *(int *)(param_1[0x17] + 0xa8);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  if (iVar1 == 1) {
    local_38 = L"InteractiveSetWidthInstructions";
    local_30 = 0x1f;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UDrawPolyPathTool";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar4 = 
    L"Set the width of the path by clicking on the drawing plane. Hold Shift to ignore snapping.";
  }
  else {
    local_38 = L"FixedSetWidthInstructions";
    local_30 = 0x19;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UDrawPolyPathTool";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar4 = L"Click in viewport to accept fixed path width, or change it in details panel.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar4);
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962b470 FUN_14962b470 body=506 status=ok
// SIG undefined FUN_14962b470(void)

void FUN_14962b470(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  lVar2 = param_1[0x17];
  if (*(int *)(lVar2 + 0xb4) == 1) {
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(lVar2 + 0xb8);
  }
  else if ((char)param_1[0x44] == '\x01') {
    *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)((longlong)param_1 + 0x224);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  plVar3 = (longlong *)FUN_148f88c8a(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  param_1[0x4d] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
  (**(code **)(*(longlong *)param_1[0x4d] + 0x2d0))
            ((longlong *)param_1[0x4d],param_1 + 0x3f,&DAT_14c846480);
  param_1[0x4c] = 0;
  FUN_1496297a2(param_1);
  iVar1 = *(int *)(param_1[0x17] + 0xb4);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  if (iVar1 == 1) {
    local_38 = L"InteractiveSetRadiusInstructions";
    local_30 = 0x20;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UDrawPolyPathTool";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar4 = 
    L"Set the radius of the corners by clicking on the drawing plane. Hold Shift to ignore snapping."
    ;
  }
  else {
    local_38 = L"FixedSetRadiusInstructions";
    local_30 = 0x1a;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UDrawPolyPathTool";
    local_30 = 0x11;
    FUN_1446e940c(local_40,&local_38);
    pwVar4 = L"Click in viewport to accept fixed corner radius, or change it in details panel.";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar4);
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962b66c FUN_14962b66c body=46 status=ok
// SIG undefined FUN_14962b66c(void)

void FUN_14962b66c(longlong *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auStack_5d8 [32];
  undefined1 uStack_5b8;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  double dStack_598;
  double dStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [8];
  undefined8 uStack_540;
  undefined8 uStack_538;
  double dStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  undefined1 auStack_508 [8];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  double dStack_4e8;
  double dStack_4e0;
  longlong *plStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  longlong lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_330;
  undefined1 auStack_328 [32];
  undefined1 uStack_308;
  undefined1 auStack_2fc [4];
  wchar_t *pwStack_2f8;
  longlong **pplStack_2f0;
  double dStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double dStack_2c8;
  undefined8 uStack_2c0;
  longlong *plStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double dStack_288;
  longlong *plStack_278;
  undefined1 auStack_270 [464];
  ulonglong uStack_a0;
  ulonglong uStack_50;
  
  *(undefined4 *)(param_1 + 0x1a) = 3;
  if (*(int *)(param_1[0x17] + 0xc4) == 4) {
    uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
    *(undefined1 *)(param_1 + 0x45) = 1;
    *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(param_1[0x17] + 200);
    plVar6 = (longlong *)FUN_148f5aa86();
    if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar6);
    }
    param_1[0x4c] = (longlong)plVar6;
    (**(code **)(*plVar6 + 0x2a0))(plVar6,param_1);
    lVar3 = param_1[0x4c];
    dStack_4e8 = *(double *)(lVar3 + 0x30);
    uStack_2c0 = *(undefined8 *)(lVar3 + 0x38);
    plStack_4d8 = *(longlong **)(lVar3 + 0x40);
    uStack_2b0 = *(undefined8 *)(lVar3 + 0x48);
    lStack_2a8 = *(longlong *)(lVar3 + 0x50);
    uStack_2a0 = *(undefined8 *)(lVar3 + 0x58);
    uStack_298 = *(undefined8 *)(lVar3 + 0x60);
    uStack_290 = *(undefined8 *)(lVar3 + 0x68);
    plStack_2b8 = plStack_4d8;
    uVar5 = uStack_2b0;
    dStack_2c8 = dStack_4e8;
    *(undefined8 *)(lVar3 + 0x60) = uStack_4b8;
    *(undefined8 *)(lVar3 + 0x68) = uStack_4b0;
    *(undefined ***)(lVar3 + 0x50) = &PTR_LAB_14bd8e560;
    *(longlong **)(lVar3 + 0x58) = param_1;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_4cc,uStack_4d0);
    *(code **)(lVar3 + 0x30) = FUN_1445600aa;
    *(double *)(lVar3 + 0x38) = dStack_4e0;
    uStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
    lStack_4c8 = lStack_2a8;
    uStack_4c0 = uStack_2a0;
    uStack_4b8 = uStack_298;
    uStack_4b0 = uStack_290;
    uStack_4d0 = (undefined4)uStack_2b0;
    uStack_4cc = uStack_2b0._4_4_;
    dStack_4e0 = (double)uStack_2c0;
    if (dStack_4e8 != 0.0) {
      plVar6 = plStack_4d8;
      if (plStack_4d8 == (longlong *)0x0) {
        plVar6 = &lStack_4c8;
      }
      uStack_2b0 = uVar5;
      (**(code **)(*plVar6 + 0x10))();
    }
    lVar3 = param_1[0x4c];
    dStack_4e8 = *(double *)(lVar3 + 0x70);
    uStack_2c0 = *(undefined8 *)(lVar3 + 0x78);
    plStack_4d8 = *(longlong **)(lVar3 + 0x80);
    uStack_2b0 = *(undefined8 *)(lVar3 + 0x88);
    lStack_2a8 = *(longlong *)(lVar3 + 0x90);
    uStack_2a0 = *(undefined8 *)(lVar3 + 0x98);
    uStack_298 = *(undefined8 *)(lVar3 + 0xa0);
    uStack_290 = *(undefined8 *)(lVar3 + 0xa8);
    plStack_2b8 = plStack_4d8;
    uVar5 = uStack_2b0;
    dStack_2c8 = dStack_4e8;
    *(undefined8 *)(lVar3 + 0xa0) = uStack_4b8;
    *(undefined8 *)(lVar3 + 0xa8) = uStack_4b0;
    *(undefined ***)(lVar3 + 0x90) = &PTR_LAB_14bd8e580;
    *(longlong **)(lVar3 + 0x98) = param_1;
    *(undefined8 *)(lVar3 + 0x80) = 0;
    *(ulonglong *)(lVar3 + 0x88) = CONCAT44(uStack_4cc,uStack_4d0);
    *(undefined1 **)(lVar3 + 0x70) = &LAB_144560106;
    *(double *)(lVar3 + 0x78) = dStack_4e0;
    uStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
    uStack_4b8 = uStack_298;
    uStack_4b0 = uStack_290;
    lStack_4c8 = lStack_2a8;
    uStack_4c0 = uStack_2a0;
    uStack_4d0 = (undefined4)uStack_2b0;
    uStack_4cc = uStack_2b0._4_4_;
    dStack_4e0 = (double)uStack_2c0;
    uStack_2b0 = uVar5;
    if (dStack_4e8 != 0.0) {
      plVar6 = &lStack_4c8;
      if (plStack_4d8 != (longlong *)0x0) {
        plVar6 = plStack_4d8;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    *(undefined4 *)(param_1[0x4c] + 0xb0) = 0x3f800000;
    uStack_5b8 = 0;
    FUN_1411b354a(&dStack_2c8,0,0,0);
    FUN_14962bcac(param_1,auStack_508,&dStack_2c8);
    dStack_4e8 = 0.0;
    dStack_4e0 = 0.0;
    plStack_4d8 = (longlong *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0x3ff00000;
    uStack_4b8 = uStack_4f8;
    uStack_4b0 = 0;
    uStack_4a8 = 0x3ff0000000000000;
    uStack_4a0 = 0x3ff0000000000000;
    uStack_498 = 0x3ff0000000000000;
    uStack_490 = 0;
    FUN_14851b91a(param_1[0x4b],&dStack_4e8);
    dVar4 = (double)param_1[0x36];
    dVar1 = (double)param_1[0x37];
    dVar7 = (double)param_1[0x38] + (double)param_1[0x38];
    dStack_4e8 = dVar4 * dVar7 + (double)param_1[0x39] * (dVar1 + dVar1);
    dStack_4e0 = dVar7 * dVar1 - (dVar4 + dVar4) * (double)param_1[0x39];
    plStack_4d8 = (longlong *)(1.0 - ((dVar1 + dVar1) * dVar1 + dVar4 * (dVar4 + dVar4)));
    uStack_5b8 = 0;
    FUN_1484df634(param_1[0x4b],&dStack_2c8,&dStack_4e8,0);
    uStack_5b8 = 0;
    FUN_1411b354a(&dStack_4e8,0,0,0);
    FUN_1484dfe60(param_1[0x4b],&dStack_4e8,0);
    dStack_530 = (double)param_1[0x36];
    dStack_528 = (double)param_1[0x37];
    dStack_520 = (double)param_1[0x38];
    dStack_518 = (double)param_1[0x39];
    uStack_540 = uStack_500;
    uStack_538 = uStack_4f8;
    dVar7 = dStack_518 * dStack_518 +
            dStack_520 * dStack_520 + dStack_530 * dStack_530 + dStack_528 * dStack_528;
    dStack_590 = 0.0;
    dStack_598 = 0.0;
    uStack_5a0 = 0;
    dVar1 = 0.0;
    uStack_5a8 = 0;
    dVar4 = 0.0;
    if (0.0 < dVar7) {
      dVar7 = 1.0 / dVar7;
      dStack_590 = dStack_518 * dVar7;
      dStack_598 = -dStack_520 * dVar7;
      dVar1 = -dStack_528 * dVar7;
      uStack_5a0 = SUB84(dVar1,0);
      dVar4 = -dStack_530 * dVar7;
      uStack_5a8 = SUB84(dVar4,0);
    }
    uStack_5a4 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_59c = (undefined4)((ulonglong)dVar1 >> 0x20);
    uStack_588 = 0;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0x3ff0000000000000;
    uStack_560 = 0x3ff0000000000000;
    uStack_558 = 0x3ff0000000000000;
    uStack_550 = 0;
    (**(code **)(*(longlong *)param_1[0x4c] + 0x2d0))
              ((longlong *)param_1[0x4c],&dStack_4e8,auStack_548);
    FUN_14962c7f2(param_1);
    FUN_141082778(&dStack_4e8);
    FUN_141082778(&dStack_2c8);
    if ((uStack_a0 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(int *)(param_1[0x17] + 0xc4) == 2) {
    FUN_14962bf36();
    return;
  }
  uStack_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(undefined4 *)(param_1 + 0x1a) = 3;
  if ((char)param_1[0x45] == '\x01') {
    *(undefined4 *)(param_1[0x17] + 200) = *(undefined4 *)((longlong)param_1 + 0x22c);
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  iVar2 = *(int *)(param_1[0x17] + 0xc4);
  if (iVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    if ((iVar2 != 3) && (iVar2 != 1)) goto LAB_14962c5b6;
    dVar4 = (double)*(float *)(param_1[0x17] + 200);
  }
  param_1[0x42] = (longlong)dVar4;
LAB_14962c5b6:
  uStack_308 = 0;
  puStack_330 = (undefined *)0x14962c5d6;
  FUN_1411b354a(auStack_270,0,0,0);
  puStack_330 = (undefined *)0x14962c5ec;
  FUN_14962bcac(param_1,&uStack_298,auStack_270);
  pwStack_2f8 = (wchar_t *)0x0;
  pplStack_2f0 = (longlong **)0x0;
  dStack_2e8 = 0.0;
  uStack_2e0 = 0;
  uStack_2dc = 0x3ff00000;
  uStack_2d0 = (undefined4)uStack_290;
  uStack_2cc = (undefined4)((ulonglong)uStack_290 >> 0x20);
  uStack_2d8 = (undefined4)uStack_298;
  uStack_2d4 = uStack_298._4_4_;
  dStack_2c8 = dStack_288;
  uStack_2c0 = 0;
  plStack_2b8 = (longlong *)0x3ff0000000000000;
  uStack_2b0 = 0x3ff0000000000000;
  lStack_2a8 = 0x3ff0000000000000;
  uStack_2a0 = 0;
  puStack_330 = (undefined *)0x14962c643;
  FUN_14851b91a(param_1[0x4b],&pwStack_2f8);
  dVar4 = (double)param_1[0x36];
  dVar1 = (double)param_1[0x37];
  dVar7 = (double)param_1[0x38] + (double)param_1[0x38];
  pwStack_2f8 = (wchar_t *)(dVar4 * dVar7 + (double)param_1[0x39] * (dVar1 + dVar1));
  pplStack_2f0 = (longlong **)(dVar7 * dVar1 - (dVar4 + dVar4) * (double)param_1[0x39]);
  dStack_2e8 = 1.0 - ((dVar1 + dVar1) * dVar1 + dVar4 * (dVar4 + dVar4));
  uStack_308 = 0;
  puStack_330 = (undefined *)0x14962c6d0;
  FUN_1484df634(param_1[0x4b],auStack_270,&pwStack_2f8,0);
  pplStack_2f0 = &plStack_278;
  pwStack_2f8 = L"譈\xe909읨Ԍ襈䳈ઋ聁낹";
  puStack_330 = (undefined *)0x14962c700;
  plStack_278 = param_1;
  FUN_1484dfdc6(param_1[0x4b],&pwStack_2f8,1);
  param_1[0x4c] = 0;
  puStack_330 = (undefined *)0x14962c717;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  pwStack_2f8 = L"FixedSetHeightInstructions";
  pplStack_2f0._0_4_ = 0x1a;
  puStack_330 = (undefined *)0x14962c743;
  FUN_1446e940c(&plStack_278,&pwStack_2f8);
  pwStack_2f8 = L"UDrawPolyPathTool";
  pplStack_2f0 = (longlong **)CONCAT44(pplStack_2f0._4_4_,0x11);
  puStack_330 = (undefined *)0x14962c766;
  FUN_1446e940c(auStack_2fc,&pwStack_2f8);
  puStack_330 = (undefined *)0x14962c780;
  FUN_140208bae(&pwStack_2f8,auStack_2fc,&plStack_278,
                L"Click in viewport to accept fixed path height, or change it in details panel.");
  puStack_330 = (undefined *)0x14962c795;
  (**(code **)(*plVar6 + 0x340))(plVar6,&pwStack_2f8,2);
  if (pwStack_2f8 != (wchar_t *)0x0) {
    puStack_330 = (undefined *)0x14962c7a3;
    (**(code **)(*(longlong *)pwStack_2f8 + 0x10))();
  }
  puStack_330 = (undefined *)0x14962c7b0;
  FUN_141082778(auStack_270);
  if ((uStack_50 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_330 = &UNK_14962c7e8;
  FUN_144d8e3a0();
}



// FUNCTION 14962b69a FUN_14962b69a body=1553 status=ok
// SIG undefined FUN_14962b69a(void)

void FUN_14962b69a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_a28 [32];
  undefined1 local_a08;
  double local_a00;
  double local_9f8;
  char local_9f0 [8];
  longlong local_9e8;
  undefined1 local_9cc [4];
  double local_9c8;
  double local_9c0;
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  double local_988;
  double local_980;
  wchar_t *local_978;
  undefined4 local_970;
  undefined4 uStack_96c;
  double local_968;
  double local_960;
  double local_958;
  double local_950;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined1 local_928 [16];
  double local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined1 local_8e8 [16];
  longlong local_8d8;
  uint local_8d0;
  uint local_8cc;
  undefined1 local_300 [544];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  local_a08 = 0;
  FUN_1411b354a(local_300,0,0,0);
  FUN_14962bcac(param_1,&local_990,local_300);
  FUN_14962c8be(param_1,local_300);
  FUN_146c03a72(local_300);
  local_9f8 = (double)param_1[0x33];
  local_a00 = (double)param_1[0x34];
  dVar1 = (double)param_1[0x35];
  dVar2 = (double)param_1[0x36];
  dVar3 = (double)param_1[0x37];
  uVar11 = *(undefined4 *)(param_1 + 0x36);
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x1b4);
  lVar15 = param_1[0x37];
  dVar4 = (double)param_1[0x38];
  dVar5 = (double)param_1[0x39];
  uVar9 = *(undefined4 *)(param_1 + 0x38);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x1c4);
  lVar17 = param_1[0x39];
  FUN_145c688c4(local_300,&local_978,0);
  dVar6 = (local_968 + local_950) * 0.5 + local_980;
  dVar19 = dVar2 * (dVar4 + dVar4) + (dVar3 + dVar3) * dVar5;
  dVar8 = ((double)CONCAT44(uStack_96c,local_970) + local_958) * 0.5 + local_988;
  dVar7 = ((double)local_978 + local_960) * 0.5 + local_990;
  dVar18 = (dVar4 + dVar4) * dVar3 - (dVar2 + dVar2) * dVar5;
  dVar20 = 1.0 - (dVar2 * (dVar2 + dVar2) + dVar3 * (dVar3 + dVar3));
  dVar1 = (dVar6 - dVar1) * dVar20 + (dVar7 - local_9f8) * dVar19 + (dVar8 - local_a00) * dVar18;
  dVar6 = dVar6 - dVar20 * dVar1;
  dVar8 = dVar8 - dVar18 * dVar1;
  dVar7 = dVar7 - dVar1 * dVar19;
  local_9c8 = dVar7 - local_990;
  local_9c0 = dVar8 - local_988;
  local_9b8 = dVar6 - local_980;
  local_9b0 = dVar2;
  local_9a8 = dVar3;
  local_9a0 = dVar4;
  local_998 = dVar5;
  FUN_146c3c8a0(local_300);
  FUN_146c3b344(local_300);
  lVar14 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_978 = L"CreatePolyPathTransactionName";
  local_970 = 0x1d;
  FUN_1446e940c(local_9f0,&local_978);
  local_978 = L"UDrawPolyPathTool";
  local_970 = 0x11;
  FUN_1446e940c(local_9cc,&local_978);
  FUN_140208bae(&local_978,local_9cc,local_9f0,L"Create PolyPath");
  (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x10))(lVar14 + 0x28,&local_978);
  if (local_978 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_978 + 0x10))();
  }
  FUN_14850577a(&local_978,1);
  local_958 = (double)param_1[0x15];
  if ((local_958 != 0.0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_958);
  }
  local_928._8_4_ = SUB84(dVar8,0);
  local_928._0_8_ = dVar7;
  local_928._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uStack_910 = 0;
  local_908 = 0x3ff0000000000000;
  uStack_900 = 0x3ff0000000000000;
  local_8f8 = 0x3ff0000000000000;
  uStack_8f0 = 0;
  local_948 = uVar11;
  uStack_944 = uVar12;
  uStack_940 = (int)lVar15;
  uStack_93c = (int)((ulonglong)dVar3 >> 0x20);
  local_938 = uVar9;
  uStack_934 = uVar10;
  uStack_930 = (int)lVar17;
  uStack_92c = (int)((ulonglong)dVar5 >> 0x20);
  local_918 = dVar6;
  FUN_14020fad6(local_8e8,L"Path");
  lVar15 = FUN_14479d2ce(param_1[0x19] + 0xa8);
  if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar15);
  }
  uVar13 = local_8d0;
  lVar17 = (longlong)(int)local_8d0;
  local_8d0 = local_8d0 + 1;
  if (local_8cc < local_8d0) {
    FUN_140655806(&local_8d8,uVar13);
  }
  *(longlong *)(local_8d8 + lVar17 * 8) = lVar15;
  if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar15);
  }
  FUN_148505bae(&local_978,local_300);
  (**(code **)(*(longlong *)param_1[0x16] + 0x2c0))((longlong *)param_1[0x16],&local_978);
  uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(local_9f0,uVar16,&local_978);
  if ((local_9f0[0] == '\0') && (local_9e8 != 0)) {
    uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar16,local_9e8);
  }
  lVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x18))(lVar15 + 0x28);
  if ((char)param_1[0x43] == '\x01') {
    *(undefined4 *)(param_1[0x17] + 0xac) = *(undefined4 *)((longlong)param_1 + 0x21c);
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if ((char)param_1[0x44] == '\x01') {
    *(undefined4 *)(param_1[0x17] + 0xb8) = *(undefined4 *)((longlong)param_1 + 0x224);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if ((char)param_1[0x45] == '\x01') {
    *(undefined4 *)(param_1[0x17] + 200) = *(undefined4 *)((longlong)param_1 + 0x22c);
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x244) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_1447a8aa0(param_1 + 0x47,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x254) < 0) {
    *(undefined4 *)(param_1 + 0x4a) = 0;
    FUN_1447a8aa0(param_1 + 0x49,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x4a) = 0;
  }
  FUN_1484c7624(&local_978);
  FUN_141082778(local_300);
  if ((local_e0 ^ (ulonglong)auStack_a28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962bcac FUN_14962bcac body=649 status=ok
// SIG undefined FUN_14962bcac(void)

double * FUN_14962bcac(longlong param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  undefined1 auStack_148 [32];
  double local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  byte local_108;
  double local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined3 uStack_d0;
  undefined5 local_cd;
  undefined3 uStack_c8;
  undefined8 uStack_c5;
  undefined1 *local_bc;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) < 0) {
    FUN_1447a8aa0(param_1 + 0x238,0);
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) < 0) {
    FUN_1447a8aa0(param_1 + 0x248,0);
  }
  lVar5 = *(longlong *)(param_1 + 0xb8);
  local_f8 = *(undefined4 *)(lVar5 + 0xbc);
  local_108 = 0.0 < *(float *)(lVar5 + 0xb8) & *(byte *)(lVar5 + 0xb0);
  local_110 = *(undefined1 *)(lVar5 + 0xc0);
  local_120 = *(undefined1 *)(param_1 + 0x230);
  local_118 = *(int *)(lVar5 + 0xc4) - 3U < 2;
  local_100 = (double)*(float *)(lVar5 + 0xb8);
  local_128 = (double)(*(float *)(lVar5 + 0xac) * 0.5);
  FUN_149627d8a(param_2,param_3,param_1 + 0x1d8,param_1 + 0x1e8);
  FUN_146c3906a(param_3,0,1,1);
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c5 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_cd = 0;
  local_bc = &DAT_100000002;
  local_a8 = 0;
  local_98 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_e8 = param_3;
  FUN_146c68b4c(&local_e8);
  if (0 < (int)local_d8) {
    FUN_14845d8b4(lStack_e0,param_1 + 0x238);
    if ((longlong)*(int *)(param_1 + 0x240) != 0) {
      pdVar6 = *(double **)(param_1 + 0x238);
      pdVar1 = pdVar6 + (longlong)*(int *)(param_1 + 0x240) * 3;
      dVar2 = *param_2;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      do {
        *pdVar6 = *pdVar6 + dVar2;
        pdVar6[1] = pdVar6[1] + dVar3;
        pdVar6[2] = pdVar6[2] + dVar4;
        pdVar6 = pdVar6 + 3;
      } while (pdVar6 != pdVar1);
    }
    if (1 < (int)local_d8) {
      FUN_14845d8b4(lStack_e0 + 0x40,param_1 + 0x248);
      if ((longlong)*(int *)(param_1 + 0x250) != 0) {
        pdVar6 = *(double **)(param_1 + 0x248);
        pdVar1 = pdVar6 + (longlong)*(int *)(param_1 + 0x250) * 3;
        dVar2 = *param_2;
        dVar3 = param_2[1];
        dVar4 = param_2[2];
        do {
          *pdVar6 = *pdVar6 + dVar2;
          pdVar6[1] = pdVar6[1] + dVar3;
          pdVar6[2] = pdVar6[2] + dVar4;
          pdVar6 = pdVar6 + 3;
        } while (pdVar6 != pdVar1);
      }
    }
  }
  FUN_1482f1656(&local_e8);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962bf36 FUN_14962bf36 body=1513 status=ok
// SIG undefined FUN_14962bf36(void)

void FUN_14962bf36(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  undefined1 auStack_5d8 [32];
  undefined1 local_5b8;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  double local_598;
  double dStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined1 local_548 [8];
  undefined8 uStack_540;
  undefined8 local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  undefined1 local_508 [8];
  undefined8 uStack_500;
  undefined8 local_4f8;
  double local_4e8;
  double dStack_4e0;
  longlong *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  longlong local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  double local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 200);
  plVar5 = (longlong *)FUN_148f5aa86();
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  *(longlong **)(param_1 + 0x260) = plVar5;
  (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1);
  lVar3 = *(longlong *)(param_1 + 0x260);
  local_4e8 = *(double *)(lVar3 + 0x30);
  uStack_2c0 = *(undefined8 *)(lVar3 + 0x38);
  local_4d8 = *(longlong **)(lVar3 + 0x40);
  uStack_2b0 = *(undefined8 *)(lVar3 + 0x48);
  local_2a8 = *(longlong *)(lVar3 + 0x50);
  uStack_2a0 = *(undefined8 *)(lVar3 + 0x58);
  local_298 = *(undefined8 *)(lVar3 + 0x60);
  uStack_290 = *(undefined8 *)(lVar3 + 0x68);
  local_2b8 = local_4d8;
  uVar4 = uStack_2b0;
  local_2c8 = local_4e8;
  *(undefined8 *)(lVar3 + 0x60) = local_4b8;
  *(undefined8 *)(lVar3 + 0x68) = uStack_4b0;
  *(undefined ***)(lVar3 + 0x50) = &PTR_LAB_14bd8e560;
  *(longlong *)(lVar3 + 0x58) = param_1;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ulonglong *)(lVar3 + 0x48) = CONCAT44(uStack_4cc,uStack_4d0);
  *(code **)(lVar3 + 0x30) = FUN_1445600aa;
  *(double *)(lVar3 + 0x38) = dStack_4e0;
  uStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
  local_4c8 = local_2a8;
  uStack_4c0 = uStack_2a0;
  local_4b8 = local_298;
  uStack_4b0 = uStack_290;
  uStack_4d0 = (undefined4)uStack_2b0;
  uStack_4cc = uStack_2b0._4_4_;
  dStack_4e0 = (double)uStack_2c0;
  if (local_4e8 != 0.0) {
    plVar5 = local_4d8;
    if (local_4d8 == (longlong *)0x0) {
      plVar5 = &local_4c8;
    }
    uStack_2b0 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  lVar3 = *(longlong *)(param_1 + 0x260);
  local_4e8 = *(double *)(lVar3 + 0x70);
  uStack_2c0 = *(undefined8 *)(lVar3 + 0x78);
  local_4d8 = *(longlong **)(lVar3 + 0x80);
  uStack_2b0 = *(undefined8 *)(lVar3 + 0x88);
  local_2a8 = *(longlong *)(lVar3 + 0x90);
  uStack_2a0 = *(undefined8 *)(lVar3 + 0x98);
  local_298 = *(undefined8 *)(lVar3 + 0xa0);
  uStack_290 = *(undefined8 *)(lVar3 + 0xa8);
  local_2b8 = local_4d8;
  uVar4 = uStack_2b0;
  local_2c8 = local_4e8;
  *(undefined8 *)(lVar3 + 0xa0) = local_4b8;
  *(undefined8 *)(lVar3 + 0xa8) = uStack_4b0;
  *(undefined ***)(lVar3 + 0x90) = &PTR_LAB_14bd8e580;
  *(longlong *)(lVar3 + 0x98) = param_1;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(ulonglong *)(lVar3 + 0x88) = CONCAT44(uStack_4cc,uStack_4d0);
  *(undefined1 **)(lVar3 + 0x70) = &LAB_144560106;
  *(double *)(lVar3 + 0x78) = dStack_4e0;
  uStack_2b0._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
  local_4b8 = local_298;
  uStack_4b0 = uStack_290;
  local_4c8 = local_2a8;
  uStack_4c0 = uStack_2a0;
  uStack_4d0 = (undefined4)uStack_2b0;
  uStack_4cc = uStack_2b0._4_4_;
  dStack_4e0 = (double)uStack_2c0;
  uStack_2b0 = uVar4;
  if (local_4e8 != 0.0) {
    plVar5 = &local_4c8;
    if (local_4d8 != (longlong *)0x0) {
      plVar5 = local_4d8;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x260) + 0xb0) = 0x3f800000;
  local_5b8 = 0;
  FUN_1411b354a(&local_2c8,0,0,0);
  FUN_14962bcac(param_1,local_508,&local_2c8);
  local_4e8 = 0.0;
  dStack_4e0 = 0.0;
  local_4d8 = (longlong *)0x0;
  uStack_4d0 = 0;
  uStack_4cc = 0x3ff00000;
  local_4b8 = local_4f8;
  uStack_4b0 = 0;
  local_4a8 = 0x3ff0000000000000;
  uStack_4a0 = 0x3ff0000000000000;
  local_498 = 0x3ff0000000000000;
  uStack_490 = 0;
  FUN_14851b91a(*(undefined8 *)(param_1 + 600),&local_4e8);
  dVar1 = *(double *)(param_1 + 0x1b0);
  dVar2 = *(double *)(param_1 + 0x1b8);
  dVar6 = *(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1c0);
  local_4e8 = dVar1 * dVar6 + *(double *)(param_1 + 0x1c8) * (dVar2 + dVar2);
  dStack_4e0 = dVar6 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0x1c8);
  local_4d8 = (longlong *)(1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1)));
  local_5b8 = 0;
  FUN_1484df634(*(undefined8 *)(param_1 + 600),&local_2c8,&local_4e8,0);
  local_5b8 = 0;
  FUN_1411b354a(&local_4e8,0,0,0);
  FUN_1484dfe60(*(undefined8 *)(param_1 + 600),&local_4e8,0);
  dStack_530 = *(double *)(param_1 + 0x1b0);
  local_528 = *(double *)(param_1 + 0x1b8);
  dStack_520 = *(double *)(param_1 + 0x1c0);
  local_518 = *(double *)(param_1 + 0x1c8);
  uStack_540 = uStack_500;
  local_538 = local_4f8;
  dVar6 = local_518 * local_518 +
          dStack_520 * dStack_520 + dStack_530 * dStack_530 + local_528 * local_528;
  dStack_590 = 0.0;
  local_598 = 0.0;
  uStack_5a0 = 0;
  dVar2 = 0.0;
  local_5a8 = 0;
  dVar1 = 0.0;
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
    dStack_590 = local_518 * dVar6;
    local_598 = -dStack_520 * dVar6;
    dVar2 = -local_528 * dVar6;
    uStack_5a0 = SUB84(dVar2,0);
    dVar1 = -dStack_530 * dVar6;
    local_5a8 = SUB84(dVar1,0);
  }
  uStack_5a4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uStack_59c = (undefined4)((ulonglong)dVar2 >> 0x20);
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_568 = 0x3ff0000000000000;
  uStack_560 = 0x3ff0000000000000;
  local_558 = 0x3ff0000000000000;
  uStack_550 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x260) + 0x2d0))
            (*(longlong **)(param_1 + 0x260),&local_4e8,local_548);
  FUN_14962c7f2(param_1);
  FUN_141082778(&local_4e8);
  FUN_141082778(&local_2c8);
  if ((local_a0 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962c520 FUN_14962c520 body=720 status=ok
// SIG undefined FUN_14962c520(void)

void FUN_14962c520(longlong *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_2fc [4];
  wchar_t *local_2f8;
  longlong **pplStack_2f0;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 local_288;
  longlong *local_278;
  undefined1 local_270 [544];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(undefined4 *)(param_1 + 0x1a) = 3;
  if ((char)param_1[0x45] == '\x01') {
    *(undefined4 *)(param_1[0x17] + 200) = *(undefined4 *)((longlong)param_1 + 0x22c);
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  iVar2 = *(int *)(param_1[0x17] + 0xc4);
  if (iVar2 == 0) {
    dVar3 = 0.0;
  }
  else {
    if ((iVar2 != 3) && (iVar2 != 1)) goto LAB_14962c5b6;
    dVar3 = (double)*(float *)(param_1[0x17] + 200);
  }
  param_1[0x42] = (longlong)dVar3;
LAB_14962c5b6:
  local_308 = 0;
  FUN_1411b354a(local_270,0,0,0);
  FUN_14962bcac(param_1,&local_298,local_270);
  local_2f8 = (wchar_t *)0x0;
  pplStack_2f0 = (longlong **)0x0;
  local_2e8 = 0.0;
  uStack_2e0 = 0;
  uStack_2dc = 0x3ff00000;
  uStack_2d0 = (undefined4)uStack_290;
  uStack_2cc = (undefined4)((ulonglong)uStack_290 >> 0x20);
  local_2d8 = local_298;
  uStack_2d4 = uStack_294;
  local_2c8 = local_288;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b4 = 0x3ff00000;
  uStack_2b0 = 0;
  uStack_2ac = 0x3ff00000;
  local_2a8 = 0x3ff0000000000000;
  uStack_2a0 = 0;
  FUN_14851b91a(param_1[0x4b],&local_2f8);
  dVar3 = (double)param_1[0x36];
  dVar1 = (double)param_1[0x37];
  dVar5 = (double)param_1[0x38] + (double)param_1[0x38];
  local_2f8 = (wchar_t *)(dVar3 * dVar5 + (double)param_1[0x39] * (dVar1 + dVar1));
  pplStack_2f0 = (longlong **)(dVar5 * dVar1 - (dVar3 + dVar3) * (double)param_1[0x39]);
  local_2e8 = 1.0 - ((dVar1 + dVar1) * dVar1 + dVar3 * (dVar3 + dVar3));
  local_308 = 0;
  FUN_1484df634(param_1[0x4b],local_270,&local_2f8,0);
  pplStack_2f0 = &local_278;
  local_2f8 = L"譈\xe909읨Ԍ襈䳈ઋ聁낹";
  local_278 = param_1;
  FUN_1484dfdc6(param_1[0x4b],&local_2f8,1);
  param_1[0x4c] = 0;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_2f8 = L"FixedSetHeightInstructions";
  pplStack_2f0._0_4_ = 0x1a;
  FUN_1446e940c(&local_278,&local_2f8);
  local_2f8 = L"UDrawPolyPathTool";
  pplStack_2f0 = (longlong **)CONCAT44(pplStack_2f0._4_4_,0x11);
  FUN_1446e940c(local_2fc,&local_2f8);
  FUN_140208bae(&local_2f8,local_2fc,&local_278,
                L"Click in viewport to accept fixed path height, or change it in details panel.");
  (**(code **)(*plVar4 + 0x340))(plVar4,&local_2f8,2);
  if (local_2f8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2f8 + 0x10))();
  }
  FUN_141082778(local_270);
  if ((local_50 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962c7f2 FUN_14962c7f2 body=202 status=ok
// SIG undefined FUN_14962c7f2(void)

void FUN_14962c7f2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_38 = L"InteractiveSetHeightInstructions";
  local_30 = 0x20;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UDrawPolyPathTool";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,
                L"Set the height of the extrusion by positioning the mouse over the extrusion volume, or over objects to snap to their heights. Hold Shift to ignore snapping."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962c8be FUN_14962c8be body=1176 status=ok
// SIG undefined FUN_14962c8be(void)

void FUN_14962c8be(double param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  double dVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1c8 [40];
  double local_1a0;
  double local_198;
  double local_190;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  double dStack_170;
  undefined **local_168;
  double dStack_160;
  double *local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  double dStack_120;
  undefined **local_118;
  double dStack_110;
  double *local_108;
  undefined8 uStack_100;
  undefined1 local_f0;
  float local_ec;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  double dStack_80;
  undefined **local_78;
  double dStack_70;
  double *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(double *)((longlong)param_1 + 0x210) == 0.0) &&
     (!NAN(*(double *)((longlong)param_1 + 0x210)))) goto LAB_14962c909;
  FUN_1482d2c96(local_148);
  uVar5 = uStack_100;
  pdVar4 = local_108;
  dVar3 = dStack_110;
  ppuVar2 = local_118;
  dVar11 = dStack_120;
  puVar6 = local_128;
  puVar1 = local_138;
  dVar13 = *(double *)((longlong)param_1 + 0x1b0);
  dVar12 = *(double *)((longlong)param_1 + 0x1b8);
  dVar10 = *(double *)((longlong)param_1 + 0x1c0) + *(double *)((longlong)param_1 + 0x1c0);
  local_1a0 = dVar13 * dVar10 + *(double *)((longlong)param_1 + 0x1c8) * (dVar12 + dVar12);
  local_198 = dVar10 * dVar12 - (dVar13 + dVar13) * *(double *)((longlong)param_1 + 0x1c8);
  local_190 = 1.0 - ((dVar12 + dVar12) * dVar12 + dVar13 * (dVar13 + dVar13));
  if (*(int *)(*(longlong *)((longlong)param_1 + 0xb8) + 0xc4) - 3U < 2) {
    dVar13 = *(double *)((longlong)param_1 + 0x210);
    dVar10 = -dVar13;
    dVar11 = (double)(~-(ulonglong)(dVar10 <= dVar13) & (ulonglong)dVar10 |
                     -(ulonglong)(dVar10 <= dVar13) & (ulonglong)dVar13) *
             (double)*(float *)(*(longlong *)((longlong)param_1 + 0xb8) + 0xcc);
    dVar12 = 0.1;
    if (0.1 <= dVar11) {
      dVar12 = dVar11;
    }
    local_98 = (undefined1 *)0x0;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
    uVar5 = uStack_100;
    pdVar4 = local_108;
    dVar3 = dStack_110;
    ppuVar2 = local_118;
    dVar11 = dStack_120;
    local_88 = local_128;
    puVar1 = local_138;
    *puVar6 = &PTR_FUN_14bd8e5a0;
    puVar6[1] = param_2;
    puVar6[2] = (double)(-(ulonglong)(dVar10 < dVar13) & 0x3ff0000000000000 |
                        ~-(ulonglong)(dVar10 < dVar13) &
                        -(ulonglong)(dVar13 < dVar10) & 0xbff0000000000000) * dVar12;
    puVar6[3] = dVar13;
    puVar6[4] = &local_1a0;
    if (puVar6 + 1 != (undefined8 *)0x0) {
      local_98 = &LAB_144560156;
    }
    local_138 = local_98;
    local_128 = puVar6;
    dStack_120 = dStack_80;
    local_118 = local_78;
    dStack_110 = dStack_70;
    local_108 = local_68;
    uStack_100 = uStack_60;
    local_98 = puVar1;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    dStack_80 = dVar11;
    local_78 = ppuVar2;
    dStack_70 = dVar3;
    local_68 = pdVar4;
    uStack_60 = uVar5;
    if (puVar1 != (undefined1 *)0x0) {
      pppuVar7 = &local_78;
LAB_14962cc69:
      pppuVar8 = (undefined ***)pppuVar7[-2];
      if ((undefined ***)pppuVar7[-2] == (undefined ***)0x0) {
        pppuVar8 = pppuVar7;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else {
    local_68 = local_108;
    uStack_60 = uStack_100;
    local_78 = local_118;
    dStack_70 = dStack_110;
    local_88 = local_128;
    dStack_80 = dStack_120;
    local_98 = local_138;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    local_138 = &LAB_14456028a;
    local_128 = (undefined8 *)0x0;
    dStack_120 = dStack_170;
    local_118 = &PTR_LAB_14bd8e5c0;
    dStack_110 = param_1;
    local_108 = &local_1a0;
    uStack_100 = uStack_150;
    uStack_180 = uStack_130;
    uStack_17c = uStack_12c;
    local_158 = pdVar4;
    uStack_150 = uVar5;
    local_168 = ppuVar2;
    dStack_160 = dVar3;
    local_178 = puVar6;
    dStack_170 = dVar11;
    if (puVar1 != (undefined1 *)0x0) {
      pppuVar7 = &local_168;
      goto LAB_14962cc69;
    }
  }
  FUN_145c688c4(param_2,&local_98,0);
  dVar12 = (double)(-(ulonglong)(0.0 <= dStack_70 - (double)local_88) &
                   (ulonglong)(dStack_70 - (double)local_88));
  dVar13 = (double)local_78 - (double)CONCAT44(uStack_8c,uStack_90);
  dVar13 = (double)(-(ulonglong)(0.0 <= dVar13) & (ulonglong)dVar13);
  uVar9 = -(ulonglong)(dVar12 <= dVar13);
  dVar13 = (double)(~uVar9 & (ulonglong)dVar12 | uVar9 & (ulonglong)dVar13);
  dVar12 = (double)(-(ulonglong)(0.0 <= dStack_80 - (double)local_98) &
                   (ulonglong)(dStack_80 - (double)local_98));
  uVar9 = -(ulonglong)(dVar13 <= dVar12);
  local_ec = (float)(1.0 / (double)(uVar9 & (ulonglong)dVar12 | ~uVar9 & (ulonglong)dVar13));
  local_f0 = 0.0 <= *(double *)((longlong)param_1 + 0x210);
  FUN_1482d2df4(local_148);
  FUN_146c3906a(param_2,0,1,1);
  FUN_14830cf42(local_148);
LAB_14962c909:
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962cd58 FUN_14962cd58 body=204 status=ok
// SIG undefined FUN_14962cd58(void)

void FUN_14962cd58(longlong param_1,int param_2)

{
  switch(*(undefined4 *)(param_1 + 0xd0)) {
  case 0:
    if ((param_2 == 0) &&
       ((**(code **)(**(longlong **)(param_1 + 0x270) + 0x318))(),
       *(int *)(*(longlong *)(param_1 + 0x270) + 0xd0) == 0)) {
      *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
    }
    break;
  case 1:
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      FUN_1496294d6(param_1);
      FUN_1496290f0(param_1);
      FUN_148460dca(*(longlong *)(param_1 + 0x270) + 200,param_1 + 0x1d8);
      return;
    }
    break;
  case 2:
    if (param_2 == 1) {
LAB_14962cdad:
      FUN_14962b274(param_1);
      return;
    }
    break;
  case 3:
    if (param_2 == 1) goto LAB_14962cdad;
    if (param_2 == 2) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 0xb0) = 1;
      FUN_14962b470(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14962ce24 FUN_14962ce24 body=73 status=ok
// SIG undefined FUN_14962ce24(void)

void FUN_14962ce24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bac1be();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14962ce57;
  }
  param_2 = 0;
LAB_14962ce57:
  FUN_14962cd58(param_2,*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 14962ce6e FUN_14962ce6e body=80 status=ok
// SIG undefined FUN_14962ce6e(void)

bool FUN_14962ce6e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return true;
  }
  if (param_2 != 0) {
    lVar1 = FUN_145bac1be();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14962ce89;
  }
  param_2 = 0;
LAB_14962ce89:
  return *(int *)(param_2 + 0x27c) != *(int *)(param_1 + 0xc);
}



// FUNCTION 14962cebe FUN_14962cebe body=32 status=ok
// SIG undefined FUN_14962cebe(void)

undefined8 FUN_14962cebe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDrawPolyPathStateChange");
  return param_2;
}



// FUNCTION 14962cee2 FUN_14962cee2 body=898 status=ok
// SIG undefined FUN_14962cee2(void)

void FUN_14962cee2(longlong param_1)

{
  double dVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_338 [40];
  double local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double local_300;
  longlong local_2f8 [2];
  undefined8 *local_2e8;
  ulonglong uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  undefined8 *local_298;
  double dStack_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar3 = FUN_1484e47e5();
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x2a0) = lVar3;
  *(undefined1 *)(lVar3 + 0x40) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  uVar4 = FUN_14844257a(param_1);
  FUN_14851b11a(uVar5,uVar4,&DAT_14c846480);
  FUN_1485063a5(&local_298,*(undefined8 *)(param_1 + 0xa0));
  local_2e8 = local_298;
  uStack_2e0 = (ulonglong)dStack_290;
  local_2d8 = (undefined4)local_288;
  uStack_2d4 = local_288._4_4_;
  uStack_2d0 = uStack_280;
  uStack_2cc = uStack_27c;
  local_2c8 = local_278;
  uStack_2c4 = uStack_274;
  uStack_2c0 = uStack_270;
  uStack_2bc = uStack_26c;
  local_2b8 = local_268;
  local_2b0 = local_258;
  dStack_2a8 = dStack_250;
  local_2a0 = local_248;
  uStack_260 = 0;
  uStack_240 = 0;
  FUN_14851b91a(*(undefined8 *)(param_1 + 0x2a0),&local_298);
  FUN_148558526(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0xa0));
  FUN_148506417(local_2f8,*(undefined8 *)(param_1 + 0xa0),0);
  FUN_14851b480(*(undefined8 *)(param_1 + 0x2a0),local_2f8);
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  local_308 = 0;
  local_310 = 2.12199579096527e-311;
  FUN_148506727(&local_298,*(undefined8 *)(param_1 + 0xa0));
  FUN_14851c2f2(uVar5,&local_298);
  FUN_141082778(&local_298);
  uVar5 = FUN_14851c72a(*(undefined8 *)(param_1 + 0x2a0));
  local_298 = (undefined8 *)0x0;
  dStack_290 = (double)((ulonglong)dStack_290 & 0xffffffff00000000);
  FUN_1446efa72(&local_298,0,3,0x10);
  puVar2 = local_298;
  dStack_290 = (double)CONCAT44(dStack_290._4_4_,3);
  *local_298 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_14bd8e5e0;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[4] = &LAB_14962d266;
  FUN_1448b6402(uVar5,&local_310,&local_298);
  *(double *)(param_1 + 0x2a8) = local_310;
  FUN_1449db362(&local_298);
  uVar5 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
  FUN_145c688c4(uVar5,&local_298,0);
  *(undefined4 *)(param_1 + 0x2d0) = local_278;
  *(undefined4 *)(param_1 + 0x2d4) = uStack_274;
  *(undefined4 *)(param_1 + 0x2d8) = uStack_270;
  *(undefined4 *)(param_1 + 0x2dc) = uStack_26c;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_288;
  *(undefined4 *)(param_1 + 0x2c4) = local_288._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_280;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_27c;
  *(undefined8 **)(param_1 + 0x2b0) = local_298;
  *(double *)(param_1 + 0x2b8) = dStack_290;
  dStack_290 = dStack_250 * DAT_14c846518;
  local_298 = (undefined8 *)(local_258 * DAT_14c846510);
  local_288 = DAT_14c846520 * local_248;
  FUN_146bed047(&local_310,&local_2e8,&local_298);
  dVar6 = SQRT(local_300 * local_300 +
               local_310 * local_310 +
               (double)CONCAT44(uStack_304,local_308) * (double)CONCAT44(uStack_304,local_308));
  dVar1 = 9.999999974752427e-07;
  if (9.999999974752427e-07 <= dVar6) {
    dVar1 = dVar6;
  }
  *(float *)(param_1 + 0x10c) = (float)(1.7320508075688772 / dVar1);
  FUN_14843f7cc(param_1);
  FUN_148506321(*(undefined8 *)(param_1 + 0xa0));
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962d2fe FUN_14962d2fe body=170 status=ok
// SIG undefined FUN_14962d2fe(void)

void FUN_14962d2fe(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1484402ae();
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (0 < (int)param_1[0x5c]) {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_14850635b(param_1[0x14]);
  if (param_1[0x54] != 0) {
    uVar2 = FUN_14851c72a();
    if (param_1[0x55] != 0) {
      FUN_14480f766(uVar2);
    }
    (**(code **)(*param_1 + 0x458))(param_1,param_2);
    FUN_14851bab8(param_1[0x54],0);
    FUN_14851b2ea(param_1[0x54]);
    param_1[0x54] = 0;
  }
  return;
}



// FUNCTION 14962d3a8 FUN_14962d3a8 body=85 status=ok
// SIG undefined FUN_14962d3a8(void)

void FUN_14962d3a8(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_14851bdfe(*(undefined8 *)(param_1 + 0x2a0));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962d432 FUN_14962d432 body=49 status=ok
// SIG undefined FUN_14962d432(void)

void FUN_14962d432(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014962d45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x400))(plVar1);
  return;
}



// FUNCTION 14962d48a FUN_14962d48a body=66 status=ok
// SIG undefined FUN_14962d48a(void)

longlong * FUN_14962d48a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14962d4cc(param_2[1]);
  (**(code **)(*plVar1 + 0x3f0))(plVar1,*(undefined1 *)(param_1 + 0x30));
  (**(code **)(*plVar1 + 1000))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 14962d4cc FUN_14962d4cc body=148 status=ok
// SIG undefined FUN_14962d4cc(void)

undefined8 FUN_14962d4cc(undefined8 param_1)

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
  uVar1 = FUN_145bac392();
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



// FUNCTION 14962d562 FUN_14962d562 body=349 status=ok
// SIG undefined FUN_14962d562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14962d562(void)

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
              0x110) < DAT_14cc20838) {
    FUN_144b3d300(&DAT_14cc20838);
    if (DAT_14cc20838 == -1) {
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
      DAT_14cc20828 = (undefined *)0x0;
      _DAT_14cc20834 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20830 = local_48;
      FUN_1484d23fc(&DAT_14cc20800,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc20800;
        if (DAT_14cc20828 != (undefined *)0x0) {
          _Dst = DAT_14cc20828;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144557972);
      _Init_thread_footer(&DAT_14cc20838);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc20800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962d6c8 FUN_14962d6c8 body=5432 status=ok
// SIG undefined FUN_14962d6c8(void)

void FUN_14962d6c8(longlong *param_1)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_a18 [32];
  undefined1 *local_9f8;
  undefined1 local_9ec [4];
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined8 local_9b8;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  double local_988;
  double local_980;
  double local_978;
  undefined8 *local_970;
  int local_968;
  double local_960;
  double local_958;
  double local_950;
  code *local_948;
  undefined8 uStack_940;
  double local_938;
  undefined1 *local_928;
  undefined8 local_918;
  undefined **local_908;
  longlong *local_900;
  code *local_8e8;
  undefined8 local_8d8;
  undefined **local_8c8;
  longlong *local_8c0;
  undefined1 *local_8a8;
  undefined8 local_898;
  undefined **local_888;
  longlong *local_880;
  code *local_868;
  undefined8 local_858;
  undefined **local_848;
  longlong *local_840;
  undefined1 *local_828 [2];
  undefined8 local_818;
  undefined **local_808;
  longlong *local_800;
  undefined1 *local_7e8 [2];
  undefined8 local_7d8;
  undefined **local_7c8;
  longlong *local_7c0;
  undefined1 *local_7a8 [2];
  undefined8 local_798;
  undefined **local_788;
  longlong *local_780;
  undefined1 *local_768 [2];
  undefined8 local_758;
  undefined **local_748;
  longlong *local_740;
  undefined1 *local_728 [2];
  undefined8 local_718;
  undefined **local_708;
  longlong *local_700;
  undefined1 *local_6e8 [2];
  undefined8 local_6d8;
  undefined **local_6c8;
  longlong *local_6c0;
  undefined1 *local_6a8;
  undefined8 local_698;
  undefined **local_688;
  longlong *local_680;
  code *local_668;
  undefined8 local_658;
  undefined **local_648;
  longlong *local_640;
  code *local_628 [2];
  undefined8 local_618;
  undefined **local_608;
  longlong *local_600;
  undefined1 *local_5e8 [2];
  undefined8 local_5d8;
  undefined **local_5c8;
  longlong *local_5c0;
  undefined1 *local_5a8;
  undefined8 local_598;
  undefined **local_588;
  longlong *local_580;
  code *local_568;
  undefined8 local_558;
  undefined **local_548;
  longlong *local_540;
  undefined1 *local_528 [2];
  undefined8 local_518;
  undefined **local_508;
  longlong *local_500;
  undefined1 *local_4e8 [2];
  undefined8 local_4d8;
  undefined **local_4c8;
  longlong *local_4c0;
  undefined1 *local_4a8 [2];
  undefined8 local_498;
  undefined **local_488;
  longlong *local_480;
  undefined1 *local_468 [2];
  undefined8 local_458;
  undefined **local_448;
  longlong *local_440;
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  longlong *local_400;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong *local_3c0;
  undefined1 *local_3a8 [2];
  undefined8 local_398;
  undefined **local_388;
  longlong *local_380;
  undefined1 *local_368 [2];
  undefined8 local_358;
  undefined **local_348;
  longlong *local_340;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_108 [64];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  FUN_14843fdec();
  local_328 = L"ToolName";
  uStack_320._0_4_ = 8;
  FUN_1446e940c(local_108,&local_328);
  local_328 = L"UDynamicMeshSculptTool";
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,0x16);
  FUN_1446e940c(&local_948,&local_328);
  FUN_140208bae(&local_328,&local_948,local_108,L"DynaSculpt");
  (**(code **)(*param_1 + 0x370))(param_1,&local_328);
  if (local_328 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_328 + 0x10))();
  }
  FUN_1411371f6(local_108);
  lVar7 = param_1[0x28];
  uVar6 = FUN_14120ac06();
  local_9f8 = local_108;
  lVar7 = FUN_141137228(lVar7,uVar6,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x37] = lVar7;
  plVar8 = (longlong *)FUN_14962ec01(lVar7);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x38] = (longlong)plVar8;
  (**(code **)(*plVar8 + 0xb10))(plVar8,0);
  FUN_140486fc4(param_1[0x38],*(undefined8 *)(param_1[0x37] + 0x1c8),0);
  lVar7 = param_1[0x38];
  FUN_1485063a5(&local_328,param_1[0x14]);
  local_9f8 = (undefined1 *)((ulonglong)local_9f8 & 0xffffffffffffff00);
  FUN_140613f88(lVar7,&local_328,0,0);
  FUN_140b506a4(param_1[0x38]);
  FUN_1485584d0(param_1[0x38],param_1[0x14]);
  plVar8 = (longlong *)param_1[0x38];
  uStack_940 = (double)((ulonglong)uStack_940._4_4_ << 0x20);
  local_948 = (code *)0x3e800000000;
  FUN_148506727(&local_328,param_1[0x14]);
  (**(code **)(*plVar8 + 0xa78))(plVar8,&local_328);
  FUN_141082778(&local_328);
  FUN_1485063a5(&local_328,param_1[0x14]);
  *(undefined4 *)(param_1 + 0x3a) = (undefined4)local_328;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = local_328._4_4_;
  *(undefined4 *)(param_1 + 0x3b) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_320._4_4_;
  param_1[0x3c] = (longlong)local_318;
  param_1[0x3d] = (longlong)dStack_310;
  param_1[0x3e] = (longlong)local_308;
  param_1[0x3f] = (longlong)dStack_300;
  param_1[0x40] = local_2f8;
  param_1[0x41] = local_2e8;
  param_1[0x42] = lStack_2e0;
  param_1[0x43] = local_2d8;
  lVar7 = 0x41;
  do {
    dVar2 = (double)param_1[lVar7];
    uVar12 = -(ulonglong)(-dVar2 <= dVar2);
    if ((double)(~uVar12 & (ulonglong)-dVar2 | uVar12 & (ulonglong)dVar2) < 0.01) {
      param_1[lVar7] = *(longlong *)(&DAT_14bd7a160 + (ulonglong)(dVar2 < 0.0) * 8);
    }
    lVar10 = DAT_14c8464e8;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x44);
  local_938 = (double)param_1[0x40];
  local_948 = (code *)param_1[0x3e];
  uStack_940 = (double)param_1[0x3f];
  param_1[0x3e] = DAT_14c8464e0;
  param_1[0x3f] = lVar10;
  param_1[0x40] = DAT_14c8464f0;
  local_308 = (double)param_1[0x3e];
  dStack_300 = (double)param_1[0x3f];
  local_2f8 = param_1[0x40];
  local_2e8 = param_1[0x41];
  lStack_2e0 = param_1[0x42];
  local_2d8 = param_1[0x43];
  uStack_2f0 = 0;
  uStack_2d0 = 0;
  (**(code **)(*(longlong *)param_1[0x38] + 0xaa8))((longlong *)param_1[0x38],&local_328,0);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x3ff0000000000000;
  param_1[0x48] = (longlong)local_948;
  param_1[0x49] = (longlong)uStack_940;
  param_1[0x4a] = (longlong)local_938;
  lVar7 = DAT_14c846518;
  param_1[0x4b] = DAT_14c846510;
  param_1[0x4c] = lVar7;
  param_1[0x4d] = DAT_14c846520;
  local_308 = (double)param_1[0x48];
  dStack_300 = (double)param_1[0x49];
  local_2f8 = param_1[0x4a];
  local_2e8 = param_1[0x4b];
  lStack_2e0 = param_1[0x4c];
  local_2d8 = param_1[0x4d];
  local_328 = (wchar_t *)0x0;
  uStack_320 = 0.0;
  local_318 = 0.0;
  dStack_310 = 1.0;
  uStack_2f0 = 0;
  uStack_2d0 = 0;
  local_9f8 = (undefined1 *)((ulonglong)local_9f8 & 0xffffffffffffff00);
  FUN_140613f88(param_1[0x38],&local_328,0,0);
  FUN_148506417(&local_970,param_1[0x14],0);
  if (0 < local_968) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x638))((longlong *)param_1[0x38],0,*local_970);
  }
  lVar7 = param_1[0x38];
  local_328 = (wchar_t *)0x0;
  uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
  FUN_1446efa72(&local_328,0,3,0x10);
  puVar4 = (undefined8 *)local_328;
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,3);
  *(undefined ***)local_328 = &PTR_LAB_149e020b0;
  uVar6 = FUN_144a3f946();
  puVar4[2] = uVar6;
  *puVar4 = &PTR_FUN_14bd8e650;
  puVar4[3] = 0;
  FUN_14485c47a(puVar4 + 3,param_1);
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[4] = &LAB_14962ec96;
  FUN_1448b6402(lVar7 + 0x6b8,&local_948,&local_328);
  param_1[0x4e] = (longlong)local_948;
  FUN_1449db362(&local_328);
  uVar6 = (**(code **)(*(longlong *)param_1[0x38] + 0xa88))();
  FUN_146c38c5e(uVar6,0);
  FUN_14962eca0(param_1);
  *(undefined1 *)((longlong)param_1 + 0xb4a) = 0;
  lVar7 = param_1[0x16a];
  if (param_1[0x16a] != 0) {
    while( true ) {
      do {
        lVar10 = lVar7;
        lVar7 = 0;
      } while (lVar10 == 0);
      plVar8 = *(longlong **)(lVar10 + 0x70);
      cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar7 = param_1[0x16a];
    }
  }
  uVar9 = (**(code **)(*(longlong *)param_1[0x38] + 0xa88))();
  FUN_145c688c4(uVar9,&local_328,1);
  dVar14 = (double)(-(ulonglong)(0.0 <= dStack_300 - local_318) &
                   (ulonglong)(dStack_300 - local_318));
  dVar2 = (double)(-(ulonglong)(0.0 <= local_308 - uStack_320) & (ulonglong)(local_308 - uStack_320)
                  );
  uVar12 = -(ulonglong)(dVar14 <= dVar2);
  dVar14 = (double)(~uVar12 & (ulonglong)dVar14 | uVar12 & (ulonglong)dVar2);
  dVar2 = (double)(-(ulonglong)(0.0 <= dStack_310 - (double)local_328) &
                  (ulonglong)(dStack_310 - (double)local_328));
  uVar12 = -(ulonglong)(dVar14 <= dVar2);
  dVar2 = (double)(uVar12 & (ulonglong)dVar2 | ~uVar12 & (ulonglong)dVar14);
  param_1[300] = (longlong)(dVar2 * 0.01);
  param_1[0x12d] = (longlong)dVar2;
  lVar7 = FUN_14962ef43(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x20] = lVar7;
  FUN_1496b3180(lVar7 + 0xa8,CONCAT44((float)(double)param_1[0x12d],(float)(double)param_1[300]),1);
  lVar7 = param_1[0x20];
  if (*(char *)(lVar7 + 0xa8) == '\0') {
    fVar13 = 0.0;
    if (0.0 <= *(float *)(lVar7 + 0xac)) {
      fVar13 = *(float *)(lVar7 + 0xac);
    }
    fVar1 = *(float *)(lVar7 + 0xb4);
    fVar13 = (float)(-(uint)(fVar1 <= *(float *)(lVar7 + 0xb8)) &
                    (uint)(((*(float *)(lVar7 + 0xb8) - fVar1) * fVar13 + fVar1) * 0.5));
  }
  else {
    fVar13 = *(float *)(lVar7 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar13;
  lVar7 = FUN_14962efd8(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x21] = lVar7;
  lVar7 = FUN_14962f06d(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x23] = lVar7;
  plVar8 = (longlong *)FUN_14962f102(param_1);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x24] = (longlong)plVar8;
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = FUN_14962f198(uVar6);
  param_1[0x130] = lVar7;
  FUN_148506321(param_1[0x14]);
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(undefined2 *)(param_1 + 0x16d) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  param_1[0x1fb] = 0;
  uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar8 = (longlong *)FUN_148451354(uVar6);
  uVar6 = FUN_1409ffe1d();
  uVar6 = FUN_1484413d5(uVar6);
  (**(code **)(*plVar8 + 0x2b0))(plVar8,&DAT_14cc20840,uVar6);
  uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar8 = (longlong *)FUN_148451354(uVar6);
  local_948 = (code *)0x0;
  uStack_940 = 0.0;
  lVar7 = (**(code **)(*plVar8 + 0x2c0))(plVar8,&DAT_14cc20840,&local_948,param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x34] = lVar7;
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = FUN_14962f2f8(param_1,param_1,param_1[0x28]);
  if (lVar7 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar7);
  }
  bVar3 = DAT_14c950c29;
  param_1[0x36] = lVar7;
  lVar7 = *(longlong *)(lVar7 + 0x50);
  lVar10 = param_1[0x34];
  if ((lVar7 != 0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(lVar10 + 0xb0) = lVar7;
  *(undefined4 *)(param_1[0x34] + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1[0x34] + 0x78) = 1;
  *(undefined1 *)(param_1[0x34] + 0x79) = 0;
  lVar7 = param_1[0x34];
  *(undefined4 *)(lVar7 + 0x80) = 0x3f666666;
  *(undefined4 *)(lVar7 + 0x84) = 0x3ecccccd;
  *(undefined4 *)(lVar7 + 0x88) = 0x3ecccccd;
  *(undefined4 *)(lVar7 + 0x8c) = 0x3f800000;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  uVar6 = FUN_1409ffe1d();
  plVar8 = (longlong *)FUN_14962f496(uVar6);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x22] = (longlong)plVar8;
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x22]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x23]);
  plVar8 = (longlong *)param_1[0x23];
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_1409ffe1d();
  plVar8 = (longlong *)FUN_14962f52b(uVar6);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x25] = (longlong)plVar8;
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x25]);
  lVar7 = param_1[0x25];
  dVar14 = (double)(-(ulonglong)(0.0 <= dStack_300 - local_318) &
                   (ulonglong)(dStack_300 - local_318));
  dVar2 = (double)(-(ulonglong)(0.0 <= local_308 - uStack_320) & (ulonglong)(local_308 - uStack_320)
                  );
  uVar12 = -(ulonglong)(dVar14 <= dVar2);
  dVar2 = (double)(~uVar12 & (ulonglong)dVar14 | uVar12 & (ulonglong)dVar2);
  dVar14 = (double)(-(ulonglong)(0.0 <= dStack_310 - (double)local_328) &
                   (ulonglong)(dStack_310 - (double)local_328));
  uVar12 = -(ulonglong)(dVar2 <= dVar14);
  local_950 = (dStack_300 + local_318) * 0.5 * (double)param_1[0x4d];
  local_958 = (local_308 + uStack_320) * 0.5 * (double)param_1[0x4c];
  local_960 = (dStack_310 + (double)local_328) * 0.5 * (double)param_1[0x4b];
  FUN_146bed047(&local_948,param_1 + 0x44);
  local_978 = local_938 + (double)param_1[0x4a];
  local_980 = uStack_940 + (double)param_1[0x49];
  local_988 = (double)local_948 + (double)param_1[0x48];
  FUN_14962f5c0(lVar7,&local_988,uVar12 & (ulonglong)dVar14 | ~uVar12 & (ulonglong)dVar2);
  if ((char)param_1[0x12f] == '\x01') {
    *(undefined1 *)(param_1[0x21] + 0xa8) = 1;
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
    uVar6 = FUN_1409ffe1d();
    lVar7 = FUN_14962f807(uVar6);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    param_1[0x27] = lVar7;
    FUN_14485c47a(lVar7 + 0xa8,param_1);
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x27]);
  }
  plVar8 = (longlong *)param_1[0x20];
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = param_1[0x20];
  if (*(char *)(lVar7 + 0xa8) == '\0') {
    fVar13 = 0.0;
    if (0.0 <= *(float *)(lVar7 + 0xac)) {
      fVar13 = *(float *)(lVar7 + 0xac);
    }
    fVar1 = *(float *)(lVar7 + 0xb4);
    fVar13 = (float)(-(uint)(fVar1 <= *(float *)(lVar7 + 0xb8)) &
                    (uint)(((*(float *)(lVar7 + 0xb8) - fVar1) * fVar13 + fVar1) * 0.5));
  }
  else {
    fVar13 = *(float *)(lVar7 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar13;
  plVar8 = (longlong *)param_1[0x21];
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x25],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x22],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x23],0);
  uVar6 = FUN_1409ffe1d();
  plVar8 = (longlong *)FUN_14962f89c(uVar6);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar8);
  }
  param_1[0x26] = (longlong)plVar8;
  FUN_140056680(&local_948,&DAT_149dfb77a);
  (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,&local_948);
  if (local_948 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x26]);
  local_358 = 0;
  local_348 = &PTR_LAB_14bd8e6e0;
  local_368[0] = &LAB_144560374;
  local_398 = 0;
  local_388 = &PTR_LAB_14bd8e6c0;
  local_3a8[0] = &LAB_14456031a;
  local_380 = param_1;
  local_340 = param_1;
  FUN_14962f932(param_1 + 0x50,local_3a8,local_368,*(undefined1 *)(param_1[0x26] + 0xa8));
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bd8e720;
  local_3e8 = &LAB_14456042a;
  local_418 = 0;
  local_408 = &PTR_LAB_14bd8e700;
  local_428 = &LAB_1445603d0;
  local_400 = param_1;
  local_3c0 = param_1;
  FUN_14962f9b0(param_1 + 0x62);
  local_458 = 0;
  local_448 = &PTR_LAB_14bd8e760;
  local_468[0] = &LAB_1445604dc;
  local_498 = 0;
  local_488 = &PTR_LAB_14bd8e740;
  local_4a8[0] = &LAB_14456047c;
  local_480 = param_1;
  local_440 = param_1;
  FUN_14962fa28(param_1 + 0x74,local_4a8,local_468,*(undefined8 *)(param_1[0x26] + 0xec));
  local_4d8 = 0;
  local_4c8 = &PTR_LAB_14bd8e7a0;
  local_4e8[0] = &LAB_14456058a;
  local_518 = 0;
  local_508 = &PTR_LAB_14bd8e780;
  local_528[0] = &LAB_144560530;
  local_500 = param_1;
  local_4c0 = param_1;
  FUN_14962f932(param_1 + 0x86,local_528,local_4e8,*(undefined1 *)(param_1[0x26] + 0xb0));
  lVar7 = param_1[0x26];
  local_998 = *(undefined4 *)(lVar7 + 0xb4);
  uStack_994 = *(undefined4 *)(lVar7 + 0xb8);
  uStack_990 = *(undefined4 *)(lVar7 + 0xbc);
  uStack_98c = *(undefined4 *)(lVar7 + 0xc0);
  local_558 = 0;
  local_548 = &PTR_LAB_14bd8e7e0;
  local_568 = FUN_14456063c;
  local_598 = 0;
  local_588 = &PTR_LAB_14bd8e7c0;
  local_5a8 = &LAB_1445605dc;
  local_580 = param_1;
  local_540 = param_1;
  FUN_14962faa6(param_1 + 0x98);
  local_5d8 = 0;
  local_5c8 = &PTR_LAB_14bd8e820;
  local_5e8[0] = &LAB_144560746;
  local_618 = 0;
  local_608 = &PTR_LAB_14bd8e800;
  local_628[0] = FUN_1445606c6;
  local_600 = param_1;
  local_5c0 = param_1;
  FUN_14962fb28(param_1 + 0xe0,local_628,local_5e8,*(undefined8 *)(param_1[0x26] + 200));
  lVar7 = param_1[0x26];
  local_9a8 = *(undefined4 *)(lVar7 + 0xd8);
  uStack_9a4 = *(undefined4 *)(lVar7 + 0xdc);
  uStack_9a0 = *(undefined4 *)(lVar7 + 0xe0);
  uStack_99c = *(undefined4 *)(lVar7 + 0xe4);
  local_658 = 0;
  local_648 = &PTR_LAB_14bd8e860;
  local_668 = FUN_1445607fa;
  local_698 = 0;
  local_688 = &PTR_LAB_14bd8e840;
  local_6a8 = &LAB_14456079a;
  local_680 = param_1;
  local_640 = param_1;
  FUN_14962faa6(param_1 + 0xaa);
  local_6d8 = 0;
  local_6c8 = &PTR_LAB_14bd8e8a0;
  local_6e8[0] = &LAB_1445608e0;
  local_718 = 0;
  local_708 = &PTR_LAB_14bd8e880;
  local_728[0] = &LAB_144560884;
  local_700 = param_1;
  local_6c0 = param_1;
  FUN_14962fba6(param_1 + 0xbc,local_728,local_6e8,(int)*(undefined8 *)(param_1[0x26] + 0xd0));
  local_758 = 0;
  local_748 = &PTR_LAB_14bd8e8e0;
  local_768[0] = &LAB_14456098e;
  local_798 = 0;
  local_788 = &PTR_LAB_14bd8e8c0;
  local_7a8[0] = &LAB_144560934;
  local_780 = param_1;
  local_740 = param_1;
  FUN_14962f932(param_1 + 0xce,local_7a8,local_768,*(undefined1 *)(param_1[0x26] + 0xe8));
  local_7d8 = 0;
  local_7c8 = &PTR_LAB_14bd8e920;
  local_7e8[0] = &LAB_144560a3a;
  local_818 = 0;
  local_808 = &PTR_LAB_14bd8e900;
  local_828[0] = &LAB_1445609e0;
  local_800 = param_1;
  local_7c0 = param_1;
  FUN_14962fc2e(param_1 + 0xf2,local_828,local_7e8,*(undefined1 *)(param_1[0x21] + 0xa9));
  lVar7 = param_1[0x25];
  local_9b8 = *(undefined8 *)(lVar7 + 0xc0);
  local_9c8 = *(undefined4 *)(lVar7 + 0xb0);
  uStack_9c4 = *(undefined4 *)(lVar7 + 0xb4);
  uStack_9c0 = *(undefined4 *)(lVar7 + 0xb8);
  uStack_9bc = *(undefined4 *)(lVar7 + 0xbc);
  local_858 = 0;
  local_848 = &PTR_LAB_14bd8e960;
  local_868 = FUN_144560af8;
  local_898 = 0;
  local_888 = &PTR_LAB_14bd8e940;
  local_8a8 = &LAB_144560a8c;
  local_880 = param_1;
  local_840 = param_1;
  FUN_14962fcac(param_1 + 0x104);
  lVar7 = param_1[0x25];
  local_9e8 = *(undefined4 *)(lVar7 + 0xd0);
  uStack_9e4 = *(undefined4 *)(lVar7 + 0xd4);
  uStack_9e0 = *(undefined4 *)(lVar7 + 0xd8);
  uStack_9dc = *(undefined4 *)(lVar7 + 0xdc);
  local_9d8 = *(undefined8 *)(lVar7 + 0xe0);
  uStack_9d0 = *(undefined8 *)(lVar7 + 0xe8);
  local_8d8 = 0;
  local_8c8 = &PTR_LAB_14bd8e9a0;
  local_8e8 = FUN_144560c52;
  local_918 = 0;
  local_908 = &PTR_LAB_14bd8e980;
  local_928 = &LAB_144560be6;
  local_900 = param_1;
  local_8c0 = param_1;
  FUN_14962fd36(param_1 + 0x118);
  *(undefined1 *)(param_1[0x38] + 0x670) = *(undefined1 *)(param_1[0x26] + 0xa8);
  lVar7 = FUN_1484c6256(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x202] = lVar7;
  local_948 = FUN_14962fe9e;
  uStack_940 = (double)((ulonglong)uStack_940 & 0xffffffff00000000);
  FUN_14962fdc2(lVar7 + 0x28,&local_960,param_1);
  if ((char)param_1[0x12f] == '\x01') {
    FUN_14962ffa4(param_1);
    if (*(char *)((longlong)param_1 + 0xf31) == '\x01') {
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_948 = (code *)0x14bd8b6f0;
      uStack_940._0_4_ = 0xd;
      FUN_1446e940c(&local_960,&local_948);
      local_948 = (code *)0x14bd8a9f8;
      uStack_940 = (double)CONCAT44(uStack_940._4_4_,0x16);
      FUN_1446e940c(local_9ec,&local_948);
      pwVar11 = 
      L"This mesh has UV seams which may limit remeshing. Consider clearing the UV layers using \"Discard Attributes\" or the Remesh Tool."
      ;
    }
    else {
      if (*(char *)((longlong)param_1 + 0xf32) != '\x01') goto LAB_14962eaf6;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_948 = (code *)0x14bd8b836;
      uStack_940._0_4_ = 0x11;
      FUN_1446e940c(&local_960,&local_948);
      local_948 = (code *)0x14bd8a9f8;
      uStack_940 = (double)CONCAT44(uStack_940._4_4_,0x16);
      FUN_1446e940c(local_9ec,&local_948);
      pwVar11 = 
      L"This mesh has Hard Normal seams which may limit remeshing. Consider clearing Hard Normals using \"Discard Attributes,\" or the Remesh or Normals Tool."
      ;
    }
    FUN_140208bae(&local_948,local_9ec,&local_960,pwVar11);
    (**(code **)(*plVar8 + 0x340))(plVar8,&local_948,3);
    if (local_948 != (code *)0x0) {
      (**(code **)(*(longlong *)local_948 + 0x10))();
    }
  }
LAB_14962eaf6:
  FUN_14963015e(param_1,*(undefined1 *)(param_1[0x21] + 0xa9));
  if (local_970 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    if (local_b8 == (longlong *)0x0) {
      local_b8 = local_a8;
    }
    (**(code **)(*local_b8 + 0x10))();
  }
  if ((local_80 ^ (ulonglong)auStack_a18) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962ec01 FUN_14962ec01 body=148 status=ok
// SIG undefined FUN_14962ec01(void)

undefined8 FUN_14962ec01(undefined8 param_1)

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
  uVar1 = FUN_145995ee0();
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



// FUNCTION 14962eca0 FUN_14962eca0 body=674 status=ok
// SIG undefined FUN_14962eca0(void)

void FUN_14962eca0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x108) == 0) ||
     (cVar5 = *(char *)(*(longlong *)(param_1 + 0x108) + 0xb1), *(char *)(param_1 + 0xeb8) = cVar5,
     cVar5 == '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xb50);
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      while( true ) {
        do {
          lVar7 = lVar4;
          lVar4 = 0;
        } while (lVar7 == 0);
        plVar10 = *(longlong **)(lVar7 + 0x70);
        cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,0xffffffff,0);
        if (cVar5 != '\0') break;
        lVar4 = *(longlong *)(param_1 + 0xb50);
      }
    }
    local_b8 = 0;
    local_a8 = (longlong *)0x0;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14bd8eb50;
    local_78 = FUN_144562a36;
    lStack_50 = param_1;
    FUN_14170b918(&local_d8);
    plVar10 = plStack_d0;
    lVar4 = local_d8;
    local_c8 = 1;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    cVar5 = FUN_144a53f06();
    pcVar3 = local_78;
    plVar2 = DAT_14c8442c0;
    if (cVar5 == '\0') {
      pppuVar9 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar9 = &local_58;
      }
      uVar8 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar8);
      *(undefined4 *)(local_d8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar6[1] = 0;
      *puVar6 = TAsyncQueuedWork<void>::vftable;
      puVar6[2] = local_78;
      puVar6[4] = local_68;
      local_68 = (undefined ***)0x0;
      *(undefined4 *)(puVar6 + 8) = local_48;
      *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
      *(undefined4 *)(puVar6 + 9) = uStack_40;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
      puVar6[6] = local_58;
      puVar6[7] = lStack_50;
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      puVar6[10] = local_d8;
      puVar6[0xb] = plStack_d0;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      *(undefined1 *)(puVar6 + 0xc) = 0;
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
    }
    plVar2 = plStack_d0;
    local_e8 = lVar4;
    local_e0 = plVar10;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_d0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      pppuVar9 = &local_58;
      if (local_68 != (undefined ***)0x0) {
        pppuVar9 = local_68;
      }
      (*(code *)(*pppuVar9)[2])(pppuVar9);
    }
    if (local_b8 != 0) {
      plVar10 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar10 = local_98;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FUN_14614a64a((longlong *)(param_1 + 0xb50),&local_e8);
    plVar10 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962ef43 FUN_14962ef43 body=148 status=ok
// SIG undefined FUN_14962ef43(void)

undefined8 FUN_14962ef43(undefined8 param_1)

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
  uVar1 = FUN_1459f9fc2();
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



// FUNCTION 14962efd8 FUN_14962efd8 body=148 status=ok
// SIG undefined FUN_14962efd8(void)

undefined8 FUN_14962efd8(undefined8 param_1)

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
  uVar1 = FUN_1459fa0ae();
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



// FUNCTION 14962f06d FUN_14962f06d body=148 status=ok
// SIG undefined FUN_14962f06d(void)

undefined8 FUN_14962f06d(undefined8 param_1)

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
  uVar1 = FUN_1459fc3b6();
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



// FUNCTION 14962f102 FUN_14962f102 body=148 status=ok
// SIG undefined FUN_14962f102(void)

undefined8 FUN_14962f102(undefined8 param_1)

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
  uVar1 = FUN_1459fa19a();
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



// FUNCTION 14962f198 FUN_14962f198 body=351 status=ok
// SIG undefined FUN_14962f198(void)

double FUN_14962f198(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar5 = 0;
  if ((uVar3 != 0) &&
     (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar6 = 1;
    uVar4 = 1;
    if (1 < (int)uVar3) {
      uVar6 = uVar3;
    }
    do {
      uVar5 = uVar6;
      if (uVar6 == uVar4) break;
      uVar2 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar5 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar2] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  dVar8 = 0.0;
  do {
    if (uVar5 == uVar3) {
      iVar1 = 5000;
      if (5000 < *(int *)(param_1 + 0x170)) {
        iVar1 = *(int *)(param_1 + 0x170);
      }
      dVar8 = ((dVar8 / (double)iVar1) * 4.0) / 1.7320508075688772;
      if (dVar8 < 0.0) {
        dVar8 = sqrt(dVar8);
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      return (double)((longlong)ROUND(dVar8 * 100.0 + dVar8 * 100.0 + 0.5) >> 1) / 100.0;
    }
    dVar9 = (double)FUN_146c14650(param_1,uVar5);
    dVar8 = dVar9 + dVar8;
    uVar6 = uVar5 + 1;
    if ((int)(uVar5 + 1) < (int)uVar3) {
      uVar6 = uVar3;
    }
    uVar4 = uVar5;
    do {
      uVar5 = uVar6;
      if (uVar6 - 1 == uVar4) break;
      uVar5 = uVar4 + 1;
      uVar4 = uVar5;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar5 >> 9) * 8) +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14962f2f8 FUN_14962f2f8 body=413 status=ok
// SIG undefined FUN_14962f2f8(void)

longlong FUN_14962f2f8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_328 [40];
  undefined **local_300;
  undefined1 local_2f8 [152];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar1 = FUN_1484e47e5(param_2);
  FUN_14851b11a(lVar1,param_3,&DAT_14c846480);
  memset(local_2f8,0,0x91);
  local_300 = &PTR_FUN_14af11230;
  local_260 = 0x3ff0000000000000;
  local_250 = 0;
  local_258 = 0x2000000020;
  FUN_14850e248(&local_300);
  FUN_146c00d92(local_248,&local_300);
  FUN_14851bbe8(lVar1,local_248,1,0xf);
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar3 = FUN_148557a90(uVar2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x35] = lVar3;
    if (lVar3 != 0) goto LAB_14962f3f2;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x35] = lVar3;
LAB_14962f3f2:
    FUN_14851b338(lVar1,lVar3);
  }
  plVar4 = *(longlong **)(lVar1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = FUN_1411674f6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_14962f428;
  }
  plVar4 = (longlong *)0x0;
LAB_14962f428:
  (**(code **)(*plVar4 + 0xb80))(plVar4,0);
  FUN_14851b89a(lVar1,0);
  FUN_141082778(local_248);
  FUN_146bd8050(&local_300);
  if ((local_28 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14962f496 FUN_14962f496 body=148 status=ok
// SIG undefined FUN_14962f496(void)

undefined8 FUN_14962f496(undefined8 param_1)

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
  uVar1 = FUN_1459fc58e();
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



// FUNCTION 14962f52b FUN_14962f52b body=148 status=ok
// SIG undefined FUN_14962f52b(void)

undefined8 FUN_14962f52b(undefined8 param_1)

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
  uVar1 = FUN_1459fa286();
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



// FUNCTION 14962f5c0 FUN_14962f5c0 body=583 status=ok
// SIG undefined FUN_14962f5c0(void)

void FUN_14962f5c0(longlong param_1,double *param_2,double param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar11 = *(double *)(param_1 + 0xb0) - dVar1;
  dVar5 = *(double *)(param_1 + 0xb8) - dVar2;
  dVar3 = param_2[2];
  dVar6 = *(double *)(param_1 + 0xc0) - dVar3;
  if ((param_3 + 1000.0) * (param_3 + 1000.0) < dVar6 * dVar6 + dVar5 * dVar5 + dVar11 * dVar11) {
    dVar5 = *(double *)(param_1 + 0xe0);
    dVar6 = *(double *)(param_1 + 0xd0);
    dVar11 = *(double *)(param_1 + 0xd8);
    dVar8 = dVar6 * 0.0 + dVar11 * -0.0;
    dVar9 = dVar11 - dVar5 * 0.0;
    dVar7 = dVar5 * 0.0 - dVar6;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar7 + dVar7;
    dVar9 = dVar9 + dVar9;
    dVar4 = *(double *)(param_1 + 0xe8);
    dVar10 = (dVar6 * dVar7 - dVar9 * dVar11) + dVar4 * dVar8 + 1.0;
    dVar6 = (dVar5 * dVar9 - dVar8 * dVar6) + dVar4 * dVar7 + 0.0;
    dVar5 = (dVar11 * dVar8 - dVar7 * dVar5) + dVar9 * dVar4 + 0.0;
    dVar11 = (dVar3 - *(double *)(param_1 + 0xc0)) * dVar10 +
             (dVar1 - *(double *)(param_1 + 0xb0)) * dVar5 +
             (dVar2 - *(double *)(param_1 + 0xb8)) * dVar6;
    *(double *)(param_1 + 0xb0) = dVar1 - dVar11 * dVar5;
    *(double *)(param_1 + 0xb8) = dVar2 - dVar6 * dVar11;
    *(double *)(param_1 + 0xc0) = dVar3 - dVar10 * dVar11;
  }
  return;
}



// FUNCTION 14962f807 FUN_14962f807 body=148 status=ok
// SIG undefined FUN_14962f807(void)

undefined8 FUN_14962f807(undefined8 param_1)

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
  uVar1 = FUN_14599cd52();
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



// FUNCTION 14962f89c FUN_14962f89c body=148 status=ok
// SIG undefined FUN_14962f89c(void)

undefined8 FUN_14962f89c(undefined8 param_1)

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
  uVar1 = FUN_14595e490();
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



// FUNCTION 14962f932 FUN_14962f932 body=126 status=ok
// SIG undefined FUN_14962f932(void)

void FUN_14962f932(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  FUN_146ffcba0(param_1 + 0x10);
  FUN_147128e0a(param_1 + 0x50,param_3);
  *param_1 = param_4;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962f9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962f9b0 FUN_14962f9b0 body=120 status=ok
// SIG undefined FUN_14962f9b0(void)

void FUN_14962f9b0(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_149643e34(param_1 + 4);
  FUN_149643f58(param_1 + 0x14,param_3);
  *param_1 = 0;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962fa28 FUN_14962fa28 body=126 status=ok
// SIG undefined FUN_14962fa28(void)

void FUN_14962fa28(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_14964407c(param_1 + 2);
  FUN_1496441a0(param_1 + 10,param_3);
  *param_1 = param_4;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fa97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962faa6 FUN_14962faa6 body=130 status=ok
// SIG undefined FUN_14962faa6(void)

void FUN_14962faa6(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  FUN_1496442c4(param_1 + 4);
  FUN_1496443e8(param_1 + 0x14,param_3);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14962fb28 FUN_14962fb28 body=126 status=ok
// SIG undefined FUN_14962fb28(void)

void FUN_14962fb28(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_14964450c(param_1 + 2);
  FUN_149644630(param_1 + 10,param_3);
  *param_1 = param_4;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962fba6 FUN_14962fba6 body=135 status=ok
// SIG undefined FUN_14962fba6(void)

void FUN_14962fba6(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_149644754(param_1 + 2);
  FUN_142a0f3b2(param_1 + 10,param_3);
  *param_1 = param_4;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962fc2e FUN_14962fc2e body=126 status=ok
// SIG undefined FUN_14962fc2e(void)

void FUN_14962fc2e(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  FUN_149644878(param_1 + 0x10);
  FUN_14964499c(param_1 + 0x50,param_3);
  *param_1 = param_4;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fc9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14962fcac FUN_14962fcac body=138 status=ok
// SIG undefined FUN_14962fcac(void)

void FUN_14962fcac(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  FUN_149644ac0(param_1 + 8);
  FUN_149644be4(param_1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14962fd36 FUN_14962fd36 body=139 status=ok
// SIG undefined FUN_14962fd36(void)

void FUN_14962fd36(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  
  FUN_149644d08(param_1 + 8);
  FUN_149644e2c(param_1 + 0x18,param_3);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  param_1[4] = param_4[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (*param_2 != 0) {
    plVar8 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014962fdb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  return;
}



// FUNCTION 14962fdc2 FUN_14962fdc2 body=218 status=ok
// SIG undefined FUN_14962fdc2(void)

undefined8
FUN_14962fdc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *puVar3 = &PTR_FUN_14bd8e9c0;
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



// FUNCTION 14962fe9e FUN_14962fe9e body=260 status=ok
// SIG undefined FUN_14962fe9e(void)

void FUN_14962fe9e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  lVar1 = *(longlong *)(param_1 + 0x128);
  *(undefined4 *)(lVar1 + 0xd0) = *param_3;
  *(undefined4 *)(lVar1 + 0xd4) = uVar3;
  *(undefined4 *)(lVar1 + 0xd8) = uVar4;
  *(undefined4 *)(lVar1 + 0xdc) = uVar5;
  *(undefined4 *)(lVar1 + 0xe0) = uVar6;
  *(undefined4 *)(lVar1 + 0xe4) = uVar7;
  *(undefined4 *)(lVar1 + 0xe8) = uVar8;
  *(undefined4 *)(lVar1 + 0xec) = uVar9;
  pcVar2 = *(code **)(param_1 + 0x8e0);
  plVar11 = (longlong *)(param_1 + 0x900);
  if (*(longlong **)(param_1 + 0x8f0) != (longlong *)0x0) {
    plVar11 = *(longlong **)(param_1 + 0x8f0);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(&local_48,uVar10);
  *(undefined8 *)(param_1 + 0x8d0) = local_38;
  *(undefined8 *)(param_1 + 0x8d8) = uStack_30;
  *(ulonglong *)(param_1 + 0x8c0) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(param_1 + 0x8c8) = CONCAT44(uStack_3c,uStack_40);
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  uVar10 = *(undefined8 *)(param_3 + 0xc);
  lVar1 = *(longlong *)(param_1 + 0x128);
  *(undefined4 *)(lVar1 + 0xb0) = param_3[8];
  *(undefined4 *)(lVar1 + 0xb4) = uVar3;
  *(undefined4 *)(lVar1 + 0xb8) = uVar4;
  *(undefined4 *)(lVar1 + 0xbc) = uVar5;
  *(undefined8 *)(lVar1 + 0xc0) = uVar10;
  pcVar2 = *(code **)(param_1 + 0x840);
  plVar11 = (longlong *)(param_1 + 0x860);
  if (*(longlong **)(param_1 + 0x850) != (longlong *)0x0) {
    plVar11 = *(longlong **)(param_1 + 0x850);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(&local_48,uVar10);
  *(undefined8 *)(param_1 + 0x830) = local_38;
  *(undefined4 *)(param_1 + 0x820) = local_48;
  *(undefined4 *)(param_1 + 0x824) = uStack_44;
  *(undefined4 *)(param_1 + 0x828) = uStack_40;
  *(undefined4 *)(param_1 + 0x82c) = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14962ffa4 FUN_14962ffa4 body=442 status=ok
// SIG undefined FUN_14962ffa4(void)

void FUN_14962ffa4(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  *(undefined1 *)(param_1 + 0xf30) = 0;
  uVar8 = 0;
  uVar5 = *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4);
  if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x1d8) - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar5) {
      uVar8 = (ulonglong)uVar5;
    }
    do {
      uVar7 = uVar9;
      if ((uint)uVar8 == uVar7) goto LAB_14962fff4;
      uVar9 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x1d8))[uVar7 >> 9] +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    uVar8 = (ulonglong)uVar7;
  }
LAB_14962fff4:
  if ((uint)uVar8 != uVar5) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (uVar8 >> 9) * 8) + 0xc +
                  (ulonglong)(((uint)uVar8 & 0x1ff) << 4)) == -1) {
        *(undefined1 *)(param_1 + 0xf30) = 1;
        break;
      }
      uVar9 = (uint)uVar8 + 1;
      if ((int)uVar9 < (int)uVar5) {
        uVar9 = uVar5;
      }
      do {
        iVar3 = (int)uVar8;
        uVar8 = (ulonglong)uVar9;
        if (uVar9 - 1 == iVar3) break;
        uVar7 = iVar3 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar4 + 0x1d8) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar8 != uVar5);
  }
  *(undefined2 *)(param_1 + 0xf31) = 0;
  plVar1 = *(longlong **)(lVar4 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        uVar2 = 1;
        if (*(char *)(param_1 + 0xf31) == '\0') {
          if (lVar4 < (int)plVar1[5]) {
            uVar6 = *(undefined8 *)(plVar1[4] + lVar4 * 8);
          }
          else {
            uVar6 = 0;
          }
          uVar2 = FUN_146c2e922(uVar6);
        }
        *(undefined1 *)(param_1 + 0xf31) = uVar2;
        lVar4 = lVar4 + 1;
        iVar3 = (**(code **)(*plVar1 + 0xa0))();
      } while (lVar4 < iVar3);
    }
    if ((int)plVar1[7] < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)plVar1[6];
    }
    uVar2 = FUN_146c31e1e(uVar6);
    *(undefined1 *)(param_1 + 0xf32) = uVar2;
  }
  return;
}



// FUNCTION 14963015e FUN_14963015e body=602 status=ok
// SIG undefined FUN_14963015e(void)

void FUN_14963015e(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  wchar_t *local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20868) {
    FUN_144b3d300(&DAT_14cc20868);
    if (DAT_14cc20868 == -1) {
      local_58 = L"OnStartSculptTool";
      uStack_50._0_4_ = 0x11;
      FUN_1446e940c(&local_38,&local_58);
      local_58 = L"UDynamicMeshSculptTool";
      uStack_50 = CONCAT44(uStack_50._4_4_,0x16);
      FUN_1446e940c(local_3c,&local_58);
      FUN_140208bae(&DAT_14cc20858,local_3c,&local_38,
                    L"Hold Shift to Smooth, Ctrl to Invert (where applicable). [/] and S/D change Size (+Shift to small-step), W/E changes Strength."
                   );
      atexit((_func_5014 *)&LAB_14455aa62);
      _Init_thread_footer(&DAT_14cc20868);
    }
  }
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_14615b4b0(&local_58,&DAT_14cc20858);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x25],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x22],0);
  if (param_2 == '\x06') {
    plVar1 = param_1 + 0x22;
  }
  else {
    if (param_2 != '\x0e') goto LAB_14963029f;
    local_38 = L"FixedPlaneTip";
    local_30 = 0xd;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UDynamicMeshSculptTool";
    local_30 = 0x16;
    FUN_1446e940c(local_5c,&local_38);
    FUN_140208bae(&local_38,local_5c,local_3c,
                  L"Use T to reposition Work Plane at cursor, Shift+T to align to Normal, Ctrl+Shift+T to align to View"
                 );
    FUN_14615b4b0(&local_58,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    plVar1 = param_1 + 0x25;
  }
  (**(code **)(*param_1 + 0x328))(param_1,*plVar1,1);
LAB_14963029f:
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14598dd3c(&local_58,&local_38);
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  FUN_1401b9920(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963041c FUN_14963041c body=148 status=ok
// SIG undefined FUN_14963041c(void)

double * FUN_14963041c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x9e8) == -1) {
    FUN_1484429f6(param_1,param_2);
  }
  else {
    dVar1 = *(double *)(param_1 + 0x8d8);
    dVar2 = *(double *)(param_1 + 0x9a0);
    dVar3 = *(double *)(param_1 + 0x9a8);
    dVar4 = *(double *)(param_1 + 0x9b0);
    *param_2 = dVar2 - dVar1;
    param_2[1] = dVar3 - dVar1;
    param_2[2] = dVar4 - dVar1;
    param_2[3] = dVar2 + dVar1;
    param_2[4] = dVar3 + dVar1;
    param_2[5] = dVar4 + dVar1;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return param_2;
}



// FUNCTION 1496304b0 FUN_1496304b0 body=917 status=ok
// SIG undefined FUN_1496304b0(void)

bool FUN_1496304b0(longlong param_1,double *param_2,uint *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8 [9];
  double local_b0;
  double local_88 [4];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = param_1 + 0x220;
  local_88[2] = param_2[5];
  local_88[0] = param_2[3];
  local_88[1] = param_2[4];
  FUN_146c5d1a4(lVar1,&local_128);
  local_148 = param_2[2];
  local_158 = *param_2;
  dStack_150 = param_2[1];
  FUN_146ba22f0(lVar1,&local_140);
  local_178 = local_130;
  local_188 = local_140;
  uStack_180 = dStack_138;
  uStack_170 = (double)CONCAT44(uStack_124,local_128);
  uStack_168 = (double)CONCAT44(uStack_11c,uStack_120);
  dVar6 = (double)CONCAT44(uStack_114,local_118);
  dVar14 = dVar6 * dVar6 + uStack_170 * uStack_170 + uStack_168 * uStack_168;
  if (9.99999993922529e-09 < dVar14) {
    dVar14 = 1.0 / SQRT(dVar14);
    uStack_170 = uStack_170 * dVar14;
    uStack_168 = uStack_168 * dVar14;
    dVar6 = dVar6 * dVar14;
    dVar14 = dVar6 * dVar6 + uStack_170 * uStack_170 + uStack_168 * uStack_168;
  }
  dVar14 = SQRT(dVar14);
  dVar15 = 1.0 / dVar14;
  if (0.0 < dVar14) {
    uStack_170 = uStack_170 * dVar15;
    uStack_168 = uStack_168 * dVar15;
  }
  else {
    uStack_170 = 0.0;
    uStack_168 = 0.0;
  }
  uStack_160 = (double)(-(ulonglong)(0.0 < dVar14) & (ulonglong)(dVar6 * dVar15));
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  uVar7 = FUN_149630846(param_1,&local_188);
  if (uVar7 != 0xffffffff) {
    lVar10 = *(longlong *)(lVar8 + 0x10);
    lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
    uVar9 = (ulonglong)(uVar7 & 0x1ff);
    uVar3 = *(uint *)(lVar4 + uVar9 * 0xc);
    lVar5 = *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)uVar3 & 0x1ff;
    local_88[2] = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
    pdVar11 = (double *)(lVar5 + uVar13 * 0x18);
    local_88[0] = *pdVar11;
    local_88[1] = pdVar11[1];
    uVar3 = *(uint *)(lVar4 + 4 + uVar9 * 0xc);
    lVar5 = *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)uVar3 & 0x1ff;
    local_60 = *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x18);
    puVar2 = (undefined8 *)(lVar5 + uVar13 * 0x18);
    local_88[3] = (double)*puVar2;
    uStack_68 = puVar2[1];
    uVar3 = *(uint *)(lVar4 + 8 + uVar9 * 0xc);
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)uVar3 & 0x1ff;
    local_48 = *(undefined8 *)(lVar10 + 0x10 + uVar9 * 0x18);
    puVar2 = (undefined8 *)(lVar10 + uVar9 * 0x18);
    local_58 = *puVar2;
    uStack_50 = puVar2[1];
    local_108 = (undefined4)uStack_168;
    uStack_104 = uStack_168._4_4_;
    uStack_100 = (undefined4)uStack_160;
    uStack_fc = uStack_160._4_4_;
    local_118 = (undefined4)local_178;
    uStack_114 = local_178._4_4_;
    uStack_110 = (undefined4)uStack_170;
    uStack_10c = uStack_170._4_4_;
    local_128 = (undefined4)local_188;
    uStack_124 = local_188._4_4_;
    uStack_120 = (undefined4)uStack_180;
    uStack_11c = uStack_180._4_4_;
    pdVar11 = local_88;
    pdVar12 = local_f8;
    for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar12 = *pdVar11;
      pdVar11 = pdVar11 + 1;
      pdVar12 = pdVar12 + 1;
    }
    FUN_146bd80f0(&local_128);
    *param_3 = uVar7;
    param_3[2] = (uint)(float)local_b0;
    FUN_146c13dec(lVar8,&local_158,uVar7);
    FUN_146c5cfa8(lVar1,&local_140,&local_158);
    *(double *)(param_3 + 0x14) = local_130;
    *(double *)(param_3 + 0x10) = local_140;
    *(double *)(param_3 + 0x12) = dStack_138;
    local_148 = (uStack_160 * local_b0 + local_178) * *(double *)(param_1 + 0x268);
    dStack_150 = (uStack_168 * local_b0 + uStack_180) * *(double *)(param_1 + 0x260);
    local_158 = (local_b0 * uStack_170 + local_188) * *(double *)(param_1 + 600);
    FUN_146bed047(&local_140,lVar1,&local_158);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar14 = *(double *)(param_1 + 0x248);
    *(double *)(param_3 + 10) = local_140 + *(double *)(param_1 + 0x240);
    *(double *)(param_3 + 0xc) = dStack_138 + dVar14;
    *(double *)(param_3 + 0xe) = local_130 + dVar6;
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar7 != 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149630846 FUN_149630846 body=202 status=ok
// SIG undefined FUN_149630846(void)

undefined4 FUN_149630846(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x728);
  local_20 = &local_30;
  local_28 = FUN_14963f300;
  local_38 = &local_48;
  local_40 = FUN_14963f376;
  local_58 = 0x7fefffffffffffff;
  local_30 = local_48;
  uVar2 = FUN_146c87396();
  if (*(char *)(*(longlong *)(param_1 + 0x100) + 0xc4) == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    cVar1 = FUN_1496352a8(param_1,uVar2,uVar3);
    if (cVar1 != '\0') {
      uVar2 = 0xffffffff;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149630912 FUN_149630912 body=1023 status=ok
// SIG undefined FUN_149630912(void)

void FUN_149630912(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  char cVar11;
  double dVar12;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  float local_150;
  undefined4 local_b4;
  undefined4 local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar10 = (**(code **)(*param_1 + 0x3c8))();
  *(undefined1 *)(param_1 + 0x16c) = uVar10;
  uVar10 = (**(code **)(*param_1 + 0x3d8))(param_1);
  *(undefined1 *)((longlong)param_1 + 0xb61) = uVar10;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  cVar11 = (**(code **)(*param_1 + 0x398))(param_1,param_2,local_158);
  if (cVar11 == '\0') goto LAB_1496309a8;
  dVar4 = (double)local_150;
  dVar1 = param_2[5];
  dVar2 = param_2[4];
  dVar12 = param_2[2];
  dVar3 = param_2[1];
  dVar5 = (double)*(float *)(param_1[0x20] + 0xc0) * (double)param_1[0x12e];
  param_1[0x13e] = (longlong)(dVar5 * param_2[3] + dVar4 * param_2[3] + *param_2);
  param_1[0x13f] = (longlong)(dVar2 * dVar5 + dVar2 * dVar4 + dVar3);
  param_1[0x140] = (longlong)(dVar1 * dVar5 + dVar1 * dVar4 + dVar12);
  *(undefined1 *)(param_1 + 0x133) = 1;
  local_1b0 = *(undefined4 *)(param_2 + 3);
  uStack_1a8 = *(undefined4 *)(param_2 + 4);
  uStack_1ac = *(uint *)((longlong)param_2 + 0x1c) ^ 0x80000000;
  uStack_1a4 = *(uint *)((longlong)param_2 + 0x24) ^ 0x80000000;
  local_1a0 = -param_2[5];
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  local_168 = 0x3ff0000000000000;
  local_188 = (double)param_1[0x140];
  local_198 = (double)param_1[0x13e];
  dStack_190 = (double)param_1[0x13f];
  local_48 = (double)DAT_14c8463c8;
  local_58 = (undefined4)DAT_14c8463b8;
  uStack_54 = DAT_14c8463b8._4_4_;
  uStack_50 = (undefined4)DAT_14c8463c0;
  uStack_4c = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(&uStack_180,&local_58);
  param_1[0x13a] = local_168;
  *(undefined4 *)(param_1 + 0x138) = (undefined4)uStack_178;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = uStack_178._4_4_;
  *(undefined4 *)(param_1 + 0x139) = (undefined4)uStack_170;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = uStack_170._4_4_;
  *(undefined4 *)(param_1 + 0x136) = (undefined4)local_188;
  *(undefined4 *)((longlong)param_1 + 0x9b4) = local_188._4_4_;
  *(undefined4 *)(param_1 + 0x137) = (undefined4)uStack_180;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = uStack_180._4_4_;
  param_1[0x134] = (longlong)local_198;
  param_1[0x135] = (longlong)dStack_190;
  local_188 = param_2[5];
  local_198 = param_2[3];
  dStack_190 = param_2[4];
  local_48 = param_2[2];
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_1b8 = param_1 + 0x13b;
  FUN_14848488c(param_1 + 0x134,&local_58,&local_198,2);
  param_1[0x149] = param_1[0x13d];
  param_1[0x147] = param_1[0x13b];
  param_1[0x148] = param_1[0x13c];
  dVar1 = (double)param_1[0x137];
  dVar2 = (double)param_1[0x138];
  dVar12 = (double)param_1[0x139] + (double)param_1[0x139];
  param_1[0x14a] = (longlong)(dVar1 * dVar12 + (double)param_1[0x13a] * (dVar2 + dVar2));
  param_1[0x14b] = (longlong)(dVar12 * dVar2 - (dVar1 + dVar1) * (double)param_1[0x13a]);
  param_1[0x14c] = (longlong)(1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1)));
  FUN_146ba22f0(param_1 + 0x44,&local_198,param_1 + 0x13b);
  param_1[0x146] = (longlong)local_188;
  param_1[0x144] = (longlong)local_198;
  param_1[0x145] = (longlong)dStack_190;
  param_1[0x14f] = param_1[0x146];
  *(int *)(param_1 + 0x14d) = (int)param_1[0x144];
  *(undefined4 *)((longlong)param_1 + 0xa6c) = *(undefined4 *)((longlong)param_1 + 0xa24);
  *(int *)(param_1 + 0x14e) = (int)param_1[0x145];
  *(undefined4 *)((longlong)param_1 + 0xa74) = *(undefined4 *)((longlong)param_1 + 0xa2c);
  FUN_149630d12(param_1,(char)param_1[0x12f] == '\0');
  FUN_144557e02(param_1,param_1 + 0x144);
  if (*(char *)(param_1[0x21] + 0xa9) == '\r') {
    FUN_14963143e(param_1);
    local_1b8 = (longlong *)CONCAT71(local_1b8._1_7_,1);
LAB_149630cc5:
    FUN_149630e46(param_1,&local_198,param_1 + 0x144,0);
    param_1[0x1e1] = local_168;
    param_1[0x1df] = uStack_178;
    param_1[0x1e0] = uStack_170;
    param_1[0x1dd] = (longlong)local_188;
    param_1[0x1de] = uStack_180;
    param_1[0x1db] = (longlong)local_198;
    param_1[0x1dc] = (longlong)dStack_190;
  }
  else if (*(char *)(param_1[0x21] + 0xa9) == '\f') {
    local_1b8 = (longlong *)((ulonglong)local_1b8 & 0xffffffffffffff00);
    goto LAB_149630cc5;
  }
  uVar6 = *(undefined4 *)param_2;
  uVar7 = *(undefined4 *)((longlong)param_2 + 4);
  uVar8 = *(undefined4 *)(param_2 + 1);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
  dVar1 = param_2[2];
  dVar2 = param_2[3];
  dVar12 = param_2[5];
  param_1[0x172] = (longlong)param_2[4];
  param_1[0x173] = (longlong)dVar12;
  param_1[0x170] = (longlong)dVar1;
  param_1[0x171] = (longlong)dVar2;
  *(undefined4 *)(param_1 + 0x16e) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xb74) = uVar7;
  *(undefined4 *)(param_1 + 0x16f) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = uVar9;
  *(undefined1 *)((longlong)param_1 + 0xb69) = 1;
LAB_1496309a8:
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149630d12 FUN_149630d12 body=306 status=ok
// SIG undefined FUN_149630d12(void)

void FUN_149630d12(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [16];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  local_50 = L"MeshSculptChange";
  local_48 = 0x10;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UDynamicMeshSculptTool";
  local_48 = 0x16;
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(local_60,local_68,local_64,L"Brush Stroke");
  FUN_148558a3c(param_1 + 0x1fd,local_60,uVar1);
  if (param_2 == '\0') {
    lVar2 = FUN_14001cc68(0xa8,0x10);
    uVar1 = (**(code **)(*(longlong *)param_1[0x38] + 0xa88))();
    FUN_146c2c368(lVar2,uVar1);
    param_1[0x1fc] = lVar2;
    FUN_146c2c4e8(lVar2);
  }
  else {
    lVar2 = FUN_14001cc68(0x150,0x10);
    FUN_1484ad2ac(lVar2);
    param_1[0x1fb] = lVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149630e46 FUN_149630e46 body=1526 status=ok
// SIG undefined FUN_149630e46(void)

double * FUN_149630e46(longlong param_1,double *param_2,double *param_3,char param_4,char param_5)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double *pdVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_188 [47];
  char local_159;
  double *local_158;
  double local_150;
  double local_148;
  double local_140;
  longlong *local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_159 = param_4;
  local_158 = param_2;
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  local_108 = ZEXT816(0);
  local_f8 = 0.0;
  dVar1 = (double)(param_1 + 0xb08);
  local_f0 = 2.12199579096527e-314;
  local_e0 = 2.12199579047121e-314;
  local_d8 = 0;
  iVar11 = 0;
  local_e8 = dVar1;
  if (*(int *)(param_1 + 0xb20) != 0) {
    FUN_1449c0562(&local_f0);
    iVar11 = *(int *)(param_1 + 0xb20);
  }
  local_120 = local_e0;
  dVar12 = local_120;
  local_118 = local_d8;
  local_114 = local_d4;
  uStack_130 = local_f0;
  local_128 = local_e8;
  local_120._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
  if (local_120._4_4_ == iVar11) {
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar3 = 0.0;
    dVar15 = 0.0;
    dVar14 = 0.0;
    dVar13 = 0.0;
    if (local_e8 == dVar1) goto LAB_149631118;
  }
  dVar4 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar13 = 0.0;
  dVar14 = 0.0;
  dVar15 = 0.0;
  dVar3 = 0.0;
  iVar9 = local_120._4_4_;
  local_138 = (longlong *)(param_1 + 0xaf8);
  local_120 = dVar12;
  do {
    uVar2 = *(undefined4 *)(*local_138 + (longlong)iVar9 * 0xc);
    FUN_146c149e0(uVar10,&local_f0,uVar2);
    dVar12 = (double)FUN_149633aec(param_1,SUB84(SQRT((local_e0 - param_3[2]) *
                                                      (local_e0 - param_3[2]) +
                                                      (local_f0 - *param_3) * (local_f0 - *param_3)
                                                      + (local_e8 - param_3[1]) *
                                                        (local_e8 - param_3[1])),0));
    FUN_146c13dec(uVar10,&local_150,uVar2);
    dVar4 = dVar4 + local_140 * dVar12;
    dVar5 = dVar5 + local_148 * dVar12;
    dVar6 = dVar6 + local_150 * dVar12;
    dVar14 = dVar14 + local_e0 * dVar12;
    dVar15 = dVar15 + local_e8 * dVar12;
    dVar13 = dVar13 + dVar12;
    dVar3 = dVar3 + dVar12 * local_f0;
    local_120 = (double)CONCAT44(local_120._4_4_,(uint)local_120 & ~uStack_130._4_4_);
    FUN_1449c0562(&uStack_130);
    iVar9 = local_120._4_4_;
    dVar12 = local_120;
  } while (local_138 != (longlong *)(param_1 + 0xaf8) ||
           (local_128 != dVar1 || local_120._4_4_ != iVar11));
LAB_149631118:
  local_120 = dVar12;
  pdVar8 = local_158;
  cVar7 = local_159;
  dVar1 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5);
  dVar12 = 1.0 / dVar1;
  if (0.0 < dVar1) {
    local_108._0_8_ = dVar6 * dVar12;
    local_108._8_8_ = dVar5 * dVar12;
  }
  else {
    local_108._0_8_ = 0.0;
    local_108._8_8_ = 0.0;
  }
  local_f8 = (double)(-(ulonglong)(0.0 < dVar1) & (ulonglong)(dVar4 * dVar12));
  dVar13 = 1.0 / dVar13;
  if (param_5 != '\0') {
    dVar1 = *(double *)(param_1 + 0x180);
    dVar12 = *(double *)(param_1 + 0x170);
    dVar4 = *(double *)(param_1 + 0x178);
    dVar16 = dVar1 - dVar12 * 0.0;
    dVar17 = dVar12 * 0.0 - dVar4;
    dVar18 = dVar4 * 0.0 + dVar1 * -0.0;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar18 + dVar18;
    dVar5 = *(double *)(param_1 + 0x188);
    dVar6 = (dVar1 * dVar18 - dVar17 * dVar12) + dVar5 * dVar16 + 0.0;
    local_f8 = -((dVar12 * dVar16 - dVar18 * dVar4) + dVar5 * dVar17 + 0.0);
    local_108._8_4_ = SUB84(dVar6,0);
    local_108._0_8_ = -((dVar4 * dVar17 - dVar16 * dVar1) + dVar18 * dVar5 + 1.0);
    local_108._12_4_ = (uint)((ulonglong)dVar6 >> 0x20) ^ 0x80000000;
  }
  local_158[3] = 0.0;
  local_158[4] = 0.0;
  local_158[5] = 0.0;
  local_158[6] = 1.0;
  *local_158 = dVar3 * dVar13;
  local_158[1] = dVar15 * dVar13;
  local_158[2] = dVar14 * dVar13;
  local_128 = (double)DAT_14c8463c8;
  local_138 = DAT_14c8463b8;
  uStack_130 = (double)DAT_14c8463c0;
  FUN_146bfb7f2(local_158 + 3,&local_138,local_108);
  if (cVar7 == '\0') {
    dVar1 = pdVar8[3];
    dVar12 = pdVar8[4];
    dVar14 = pdVar8[5] + pdVar8[5];
    dVar15 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xc0) *
             *(double *)(param_1 + 0x970);
    *pdVar8 = *pdVar8 - dVar15 * (dVar1 * dVar14 + pdVar8[6] * (dVar12 + dVar12));
    pdVar8[1] = pdVar8[1] - (dVar14 * dVar12 - (dVar1 + dVar1) * pdVar8[6]) * dVar15;
    pdVar8[2] = pdVar8[2] - (1.0 - ((dVar12 + dVar12) * dVar12 + dVar1 * (dVar1 + dVar1))) * dVar15;
  }
  if ((local_d0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return pdVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963143e FUN_14963143e body=281 status=ok
// SIG undefined FUN_14963143e(void)

void FUN_14963143e(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *(double *)(param_1 + 0x180);
  dVar2 = *(double *)(param_1 + 0x170);
  dVar3 = *(double *)(param_1 + 0x178);
  dVar5 = dVar1 - dVar2 * 0.0;
  dVar6 = dVar2 * 0.0 - dVar3;
  dVar7 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar7 = dVar7 + dVar7;
  dVar4 = *(double *)(param_1 + 0x188);
  *(double *)(param_1 + 0xa50) = -((dVar3 * dVar6 - dVar5 * dVar1) + dVar7 * dVar4 + 1.0);
  *(double *)(param_1 + 0xa58) = -((dVar1 * dVar7 - dVar6 * dVar2) + dVar4 * dVar5 + 0.0);
  *(double *)(param_1 + 0xa60) = -((dVar2 * dVar5 - dVar7 * dVar3) + dVar4 * dVar6 + 0.0);
  return;
}



// FUNCTION 149631558 FUN_149631558 body=99 status=ok
// SIG undefined FUN_149631558(void)

void FUN_149631558(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((longlong *)(param_1 + 8) != param_2) {
    *(longlong *)(param_1 + 8) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x10) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  *param_2 = lVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  return;
}



// FUNCTION 1496315ee FUN_1496315ee body=515 status=ok
// SIG undefined FUN_1496315ee(void)

void FUN_1496315ee(longlong param_1,undefined8 param_2,char param_3)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  longlong local_e8;
  undefined8 *local_e0;
  char *local_d8;
  double *local_d0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined1 local_a8 [24];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char local_71;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_71 = param_3;
  FUN_1496342ba();
  if (param_3 != '\0') {
    FUN_14963143e(param_1);
  }
  FUN_146ba22f0(param_1 + 0x220,&local_90,param_1 + 0xa38);
  FUN_146c5d0c4(param_1 + 0x220,local_a8,param_1 + 0xa50);
  if (*(char *)(param_1 + 0xb61) == '\0') {
    uVar3 = 0x3fe00000;
  }
  else {
    uVar3 = 0xbfe00000;
  }
  dVar1 = *(double *)(param_1 + 0x970);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  local_b0 = (double)*(float *)(param_1 + 0xb64) *
             (double)*(float *)(*(longlong *)(param_1 + 0x108) + 0xac) *
             (double)((ulonglong)uVar3 << 0x20) * dVar1;
  local_b8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  uVar2 = *(undefined4 *)(param_1 + 0xac8);
  FUN_14051b394(param_1 + 0xec8,uVar2,0);
  local_68 = &local_e8;
  local_d8 = &local_71;
  local_f8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_14456122c;
  local_100 = 0;
  local_e8 = param_1;
  local_e0 = &local_b8;
  local_d0 = &local_b0;
  local_c8 = local_a8;
  local_c0 = &local_90;
  FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(undefined8 *)(param_1 + 0xa30) = local_80;
  *(undefined4 *)(param_1 + 0xa20) = local_90;
  *(undefined4 *)(param_1 + 0xa24) = uStack_8c;
  *(undefined4 *)(param_1 + 0xa28) = uStack_88;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_84;
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496317f2 FUN_1496317f2 body=507 status=ok
// SIG undefined FUN_1496317f2(void)

void FUN_1496317f2(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1496342ba(param_1,param_2,1);
  FUN_146ba22f0(param_1 + 0x220,&local_88,param_1 + 0xa38);
  cVar4 = *(char *)(param_1 + 0xb61);
  dVar3 = *(double *)(param_1 + 0x970);
  if (dVar3 < 0.0) {
    dVar3 = sqrt(dVar3);
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  dVar6 = (double)*(float *)(*(longlong *)(param_1 + 0x110) + 0xa8) * *(double *)(param_1 + 0x970);
  if ((*(char *)(*(longlong *)(param_1 + 0x110) + 0xac) == '\x01') &&
     (0.0 <= *(double *)(param_1 + 0xec0))) {
    dVar6 = *(double *)(param_1 + 0xec0);
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
  fVar2 = *(float *)(param_1 + 0xb64);
  if (cVar4 != '\0') {
    dVar3 = -dVar3;
  }
  *(double *)(param_1 + 0xec0) = dVar6;
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  uVar5 = *(undefined4 *)(param_1 + 0xac8);
  FUN_14051b394(param_1 + 0xec8,uVar5,0);
  local_68 = &local_c0;
  local_b0 = local_88;
  uStack_ac = uStack_84;
  uStack_a8 = uStack_80;
  uStack_a4 = uStack_7c;
  local_a0 = local_78;
  local_c8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_144561450;
  local_d0 = 0;
  local_c0 = param_1;
  local_b8 = uVar7;
  local_98 = (double)fVar2 * (double)fVar1 * dVar3;
  local_90 = dVar6;
  FUN_1401f8d10(L"ParallelFor Task",uVar5,1);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(undefined8 *)(param_1 + 0xa30) = local_78;
  *(undefined4 *)(param_1 + 0xa20) = local_88;
  *(undefined4 *)(param_1 + 0xa24) = uStack_84;
  *(undefined4 *)(param_1 + 0xa28) = uStack_80;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_7c;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496319ee FUN_1496319ee body=535 status=ok
// SIG undefined FUN_1496319ee(void)

bool FUN_1496319ee(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 *local_108;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  code *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14963418c();
  FUN_146ba22f0(param_1 + 0x220,&local_b8,param_1 + 0xa38);
  dVar3 = local_a8 - *(double *)(param_1 + 0xa30);
  dVar4 = (double)CONCAT44(uStack_ac,uStack_b0) - *(double *)(param_1 + 0xa28);
  dVar5 = (double)CONCAT44(uStack_b4,local_b8) - *(double *)(param_1 + 0xa20);
  dVar2 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
  if (0.0 < dVar2) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    uVar1 = *(undefined4 *)(param_1 + 0xac8);
    FUN_14051b394(param_1 + 0xec8,uVar1,0);
    local_98 = &local_f8;
    local_e8 = local_b8;
    uStack_e4 = uStack_b4;
    uStack_e0 = uStack_b0;
    uStack_dc = uStack_ac;
    local_d8 = local_a8;
    local_108 = &local_90;
    local_90 = 0;
    local_88 = 0;
    local_a0 = FUN_1445610ea;
    local_110 = 0;
    local_f8 = param_1;
    local_f0 = uVar6;
    local_d0 = dVar5;
    local_c8 = dVar4;
    local_c0 = dVar3;
    FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
  }
  *(double *)(param_1 + 0xa30) = local_a8;
  *(undefined4 *)(param_1 + 0xa20) = local_b8;
  *(undefined4 *)(param_1 + 0xa24) = uStack_b4;
  *(undefined4 *)(param_1 + 0xa28) = uStack_b0;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_ac;
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 0.0 < dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149631c06 FUN_149631c06 body=772 status=ok
// SIG undefined FUN_149631c06(void)

bool FUN_149631c06(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_268 [32];
  longlong local_248;
  undefined4 local_238 [2];
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14963418c();
  FUN_146c5d0c4(param_1 + 0x220,local_110,param_1 + 0xa50);
  FUN_146ba22f0(param_1 + 0x220,&local_128,param_1 + 0xa38);
  dVar3 = local_118 - *(double *)(param_1 + 0xa30);
  dVar4 = dStack_120 - *(double *)(param_1 + 0xa28);
  dVar5 = local_128 - *(double *)(param_1 + 0xa20);
  dVar2 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
  if (0.0 < dVar2) {
    local_1e8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    local_1e0 = 0x3ff0000000000000;
    local_1d8 = 0;
    lVar1 = *(longlong *)(param_1 + 0x118);
    local_210 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xbc);
    local_238[0] = 3;
    local_218 = 0;
    fVar6 = *(float *)(lVar1 + 0xac);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208 = (double)fVar6;
    fVar6 = (1.0 - (*(float *)(lVar1 + 0xb0) + *(float *)(lVar1 + 0xb0))) * 0.5;
    if (0.5 <= fVar6) {
      fVar6 = 0.5;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_200 = (double)fVar6;
    local_1f8 = (double)*(float *)(lVar1 + 0xa8) * *(double *)(param_1 + 0x970);
    if (local_1f8 <= 0.0) {
      local_1f8 = 0.0;
    }
    local_1f0 = *(undefined4 *)(lVar1 + 0xb4);
    local_1f8 = local_1f8 * 0.6;
    local_f8 = 0x3ff0000000000000;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0x3ff0000000000000;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0x3ff0000000000000;
    local_a0 = 0;
    local_80 = 0x3ff0000000000000;
    local_88 = -local_118;
    local_98._8_4_ = SUB84(dStack_120,0);
    local_98._0_8_ = -local_128;
    local_98._12_4_ = (uint)((ulonglong)dStack_120 >> 0x20) ^ 0x80000000;
    local_248 = param_1 + 0xec8;
    local_230 = dVar5;
    local_228 = dVar4;
    local_220 = dVar3;
    FUN_1496348fe(&local_1e8,local_238,&local_f8,param_1 + 0xac0);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
  }
  *(double *)(param_1 + 0xa30) = local_118;
  *(double *)(param_1 + 0xa20) = local_128;
  *(double *)(param_1 + 0xa28) = dStack_120;
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return 0.0 < dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149631f0c FUN_149631f0c body=772 status=ok
// SIG undefined FUN_149631f0c(void)

bool FUN_149631f0c(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_268 [32];
  longlong local_248;
  undefined4 local_238 [2];
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14963418c();
  FUN_146c5d0c4(param_1 + 0x220,local_110,param_1 + 0xa50);
  FUN_146ba22f0(param_1 + 0x220,&local_128,param_1 + 0xa38);
  dVar3 = local_118 - *(double *)(param_1 + 0xa30);
  dVar4 = dStack_120 - *(double *)(param_1 + 0xa28);
  dVar5 = local_128 - *(double *)(param_1 + 0xa20);
  dVar2 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
  if (0.0 < dVar2) {
    local_1e8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    local_1e0 = 0x3ff0000000000000;
    local_1d8 = 0;
    lVar1 = *(longlong *)(param_1 + 0x118);
    local_210 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xbc);
    local_238[0] = 8;
    local_218 = 0;
    fVar6 = *(float *)(lVar1 + 0xac);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208 = (double)fVar6;
    fVar6 = (1.0 - (*(float *)(lVar1 + 0xb0) + *(float *)(lVar1 + 0xb0))) * 0.5;
    if (0.5 <= fVar6) {
      fVar6 = 0.5;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_200 = (double)fVar6;
    local_1f8 = (double)*(float *)(lVar1 + 0xa8) * *(double *)(param_1 + 0x970);
    if (local_1f8 <= 0.0) {
      local_1f8 = 0.0;
    }
    local_1f0 = *(undefined4 *)(lVar1 + 0xb4);
    local_1f8 = local_1f8 * 0.6;
    local_f8 = 0x3ff0000000000000;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0x3ff0000000000000;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0x3ff0000000000000;
    local_a0 = 0;
    local_80 = 0x3ff0000000000000;
    local_88 = -local_118;
    local_98._8_4_ = SUB84(dStack_120,0);
    local_98._0_8_ = -local_128;
    local_98._12_4_ = (uint)((ulonglong)dStack_120 >> 0x20) ^ 0x80000000;
    local_248 = param_1 + 0xec8;
    local_230 = dVar5;
    local_228 = dVar4;
    local_220 = dVar3;
    FUN_1496348fe(&local_1e8,local_238,&local_f8,param_1 + 0xac0);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
  }
  *(double *)(param_1 + 0xa30) = local_118;
  *(double *)(param_1 + 0xa20) = local_128;
  *(double *)(param_1 + 0xa28) = dStack_120;
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return 0.0 < dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149632212 FUN_149632212 body=329 status=ok
// SIG undefined FUN_149632212(void)

undefined4 FUN_149632212(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = FUN_149633b6c(param_1,param_2,1);
  if ((char)uVar2 != '\0') {
    FUN_146ba22f0(param_1 + 0x220,&local_70,param_1 + 0xa38);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    uVar1 = *(undefined4 *)(param_1 + 0xac8);
    FUN_14051b394(param_1 + 0xec8,uVar1,0);
    local_50 = &local_98;
    local_88 = local_70;
    uStack_84 = uStack_6c;
    uStack_80 = uStack_68;
    uStack_7c = uStack_64;
    local_78 = local_60;
    local_a8 = &local_48;
    local_48 = 0;
    local_40 = 0;
    local_58 = FUN_144560f3e;
    local_b0 = 0;
    local_98 = param_1;
    local_90 = uVar3;
    FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
    *(undefined8 *)(param_1 + 0xa30) = local_60;
    *(undefined4 *)(param_1 + 0xa20) = local_70;
    *(undefined4 *)(param_1 + 0xa24) = uStack_6c;
    *(undefined4 *)(param_1 + 0xa28) = uStack_68;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_64;
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963235c FUN_14963235c body=1112 status=ok
// SIG undefined FUN_14963235c(void)

void FUN_14963235c(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auStack_1d8 [40];
  undefined4 local_1b0;
  undefined8 *local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  longlong local_188;
  undefined8 local_180;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148;
  double local_140;
  double local_138;
  ulonglong local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  code *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1496342ba(param_1,param_2,1);
  FUN_146ba22f0(param_1 + 0x220,&local_108,param_1 + 0xa38);
  FUN_146c5d0c4(param_1 + 0x220,&local_120,param_1 + 0xa50);
  dVar12 = local_f8;
  dVar3 = *(double *)(param_1 + 0x970);
  dVar10 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xc0) * dVar3;
  local_190 = (double)CONCAT44(uStack_104,local_108);
  dVar11 = (double)CONCAT44(uStack_fc,uStack_100);
  dVar4 = *(double *)(param_1 + 0xa78);
  dVar5 = *(double *)(param_1 + 0xa70);
  dVar6 = *(double *)(param_1 + 0xa68);
  local_1a0 = local_f8 * 0.25;
  local_198 = dVar11 * 0.25;
  cVar7 = *(char *)(param_1 + 0xb61);
  if (dVar3 < 0.0) {
    dVar3 = sqrt(dVar3);
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  dVar4 = local_1a0 + dVar4 * 0.75;
  dVar9 = local_198 + dVar5 * 0.75;
  dVar5 = local_190 * 0.25 + dVar6 * 0.75;
  if (cVar7 != '\0') {
    dVar3 = -dVar3;
  }
  local_198 = dVar12 - local_110 * dVar10;
  local_1a0 = dVar11 - local_118 * dVar10;
  local_190 = local_190 - dVar10 * local_120;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
  fVar2 = *(float *)(param_1 + 0xb64);
  dVar11 = dVar4 - *(double *)(param_1 + 0xa78);
  dVar12 = dVar9 - *(double *)(param_1 + 0xa70);
  dVar13 = dVar5 - *(double *)(param_1 + 0xa68);
  dVar10 = SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12);
  dVar6 = 1.0 / dVar10;
  if (0.0 < dVar10) {
    dVar13 = dVar13 * dVar6;
    dVar12 = dVar12 * dVar6;
  }
  else {
    dVar13 = 0.0;
    dVar12 = 0.0;
  }
  uVar14 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  uVar8 = *(undefined4 *)(param_1 + 0xac8);
  FUN_14051b394(param_1 + 0xec8,uVar8,0);
  local_e8 = &local_188;
  local_168 = local_f8;
  local_160 = local_190;
  local_158 = local_1a0;
  local_150 = local_198;
  local_148 = 9.999999974752427e-07 < dVar10;
  local_130 = -(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar11 * dVar6);
  local_1a8 = &local_e0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = FUN_14456170c;
  local_1b0 = 0;
  local_188 = param_1;
  local_180 = uVar14;
  local_140 = dVar13;
  local_138 = dVar12;
  local_128 = (double)fVar2 * (double)fVar1 * 0.05 * dVar3;
  FUN_1401f8d10(L"ParallelFor Task",uVar8,1);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(double *)(param_1 + 0xa30) = local_f8;
  *(undefined4 *)(param_1 + 0xa20) = local_108;
  *(undefined4 *)(param_1 + 0xa24) = uStack_104;
  *(undefined4 *)(param_1 + 0xa28) = uStack_100;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_fc;
  *(double *)(param_1 + 0xa68) = dVar5;
  *(double *)(param_1 + 0xa70) = dVar9;
  *(double *)(param_1 + 0xa78) = dVar4;
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496327b6 FUN_1496327b6 body=713 status=ok
// SIG undefined FUN_1496327b6(void)

void FUN_1496327b6(longlong param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined4 local_208 [2];
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  ulonglong local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1496342ba(param_1,param_2,1);
  FUN_146c5d0c4(param_1 + 0x220,&local_e0,param_1 + 0xa50);
  FUN_146ba22f0(param_1 + 0x220,&local_f8,param_1 + 0xa38);
  cVar2 = *(char *)(param_1 + 0xb61);
  dVar1 = *(double *)(param_1 + 0x970);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if (cVar2 != '\0') {
    dVar1 = -dVar1;
  }
  dVar1 = (double)*(float *)(param_1 + 0xb64) *
          (double)*(float *)(*(longlong *)(param_1 + 0x108) + 0xac) * dVar1;
  local_1b8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  local_1b0 = 0x3ff0000000000000;
  local_1a8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x118);
  local_1e0 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xbc);
  local_208[0] = 2;
  local_1e8 = 0;
  fVar4 = *(float *)(lVar3 + 0xac);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  local_1d8 = (double)fVar4;
  fVar4 = (1.0 - (*(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0xb0))) * 0.5;
  if (0.5 <= fVar4) {
    fVar4 = 0.5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  local_1d0 = (double)fVar4;
  local_1c8 = (double)*(float *)(lVar3 + 0xa8) * *(double *)(param_1 + 0x970);
  if (local_1c8 <= 0.0) {
    local_1c8 = 0.0;
  }
  local_1c0 = *(undefined4 *)(lVar3 + 0xb4);
  local_1f0 = local_d0 * dVar1;
  local_1f8 = local_d8 * dVar1;
  local_200 = dVar1 * local_e0;
  local_1c8 = local_1c8 * 0.35;
  local_c8 = 0x3ff0000000000000;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0x3ff0000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  local_70 = 0;
  local_50 = 0x3ff0000000000000;
  local_58 = local_e8 ^ 0x8000000000000000;
  local_68._8_4_ = uStack_f0;
  local_68._0_8_ = CONCAT44(uStack_f4,local_f8) ^ 0x8000000000000000;
  local_68._12_4_ = uStack_ec ^ 0x80000000;
  local_218 = param_1 + 0xec8;
  FUN_1496348fe(&local_1b8,local_208,&local_c8,param_1 + 0xac0);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(ulonglong *)(param_1 + 0xa30) = local_e8;
  *(undefined4 *)(param_1 + 0xa20) = local_f8;
  *(undefined4 *)(param_1 + 0xa24) = uStack_f4;
  *(undefined4 *)(param_1 + 0xa28) = uStack_f0;
  *(uint *)(param_1 + 0xa2c) = uStack_ec;
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149632a80 FUN_149632a80 body=506 status=ok
// SIG undefined FUN_149632a80(void)

undefined4 FUN_149632a80(code *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  code **local_d8;
  code *local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  code *local_80;
  code **local_78;
  code *local_70;
  code **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = FUN_149633b6c(param_1,param_2,1);
  if ((char)uVar4 != '\0') {
    FUN_146ba22f0(param_1 + 0x220,&local_98,param_1 + 0xa38);
    uVar3 = *(undefined8 *)(param_1 + 0x970);
    uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
    if (param_1[0xb61] != (code)0x0) {
      uVar6 = uVar6 ^ 0x80000000;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
    fVar2 = *(float *)(param_1 + 0xb64);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    FUN_14051b394(param_1 + 0xec8,*(undefined4 *)(param_1 + 0xac8),0);
    local_68 = &local_80;
    local_c8 = (code *)0x0;
    local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
    local_70 = FUN_144562238;
    local_e0 = 0;
    local_d8 = &local_c8;
    local_80 = param_1;
    local_78 = (code **)uVar5;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xac8),1,&local_70);
    local_b0 = local_98;
    uStack_ac = uStack_94;
    uStack_a8 = uStack_90;
    uStack_a4 = uStack_8c;
    local_a0 = local_88;
    local_70 = (code *)0x0;
    local_68 = (code **)((ulonglong)local_68 & 0xffffffff00000000);
    local_80 = FUN_1445622dc;
    local_e0 = 0;
    local_d8 = &local_70;
    local_c8 = param_1;
    local_c0 = uVar5;
    local_b8 = (double)fVar2 * (double)fVar1 * (double)CONCAT44(uVar6,(int)uVar3) * 0.05;
    local_78 = &local_c8;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xac8),1,&local_80);
    if (((param_1[0x978] == (code)0x1) && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      param_1[0xb48] = (code)0x1;
    }
    *(undefined8 *)(param_1 + 0xa30) = local_88;
    *(undefined4 *)(param_1 + 0xa20) = local_98;
    *(undefined4 *)(param_1 + 0xa24) = uStack_94;
    *(undefined4 *)(param_1 + 0xa28) = uStack_90;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_8c;
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149632c7c FUN_149632c7c body=840 status=ok
// SIG undefined FUN_149632c7c(void)

void FUN_149632c7c(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined4 local_258 [2];
  double local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_148;
  double local_140;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_149633b6c(param_1,param_2,1);
  FUN_146ba22f0(param_1 + 0x220,&local_130,param_1 + 0xa38);
  FUN_146c5d0c4(param_1 + 0x220,&local_148,param_1 + 0xa50);
  dVar9 = local_120;
  dVar3 = *(double *)(param_1 + 0x970);
  dVar7 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xc0) * dVar3;
  dVar8 = (double)CONCAT44(uStack_12c,local_130);
  dVar6 = (double)CONCAT44(uStack_124,uStack_128);
  cVar4 = *(char *)(param_1 + 0xb61);
  if (dVar3 < 0.0) {
    dVar3 = sqrt(dVar3);
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  dVar6 = dVar6 - local_140 * dVar7;
  if (cVar4 != '\0') {
    dVar3 = -dVar3;
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
  fVar2 = *(float *)(param_1 + 0xb64);
  local_208 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  local_200 = 0x3ff0000000000000;
  local_1f8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x118);
  local_230 = (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xbc);
  local_258[0] = 0;
  local_238 = 0;
  fVar10 = *(float *)(lVar5 + 0xac);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_228 = (double)fVar10;
  fVar10 = (1.0 - (*(float *)(lVar5 + 0xb0) + *(float *)(lVar5 + 0xb0))) * 0.5;
  if (0.5 <= fVar10) {
    fVar10 = 0.5;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_220 = (double)fVar10;
  local_218 = (double)*(float *)(lVar5 + 0xa8) * *(double *)(param_1 + 0x970);
  if (local_218 <= 0.0) {
    local_218 = 0.0;
  }
  local_210 = *(undefined4 *)(lVar5 + 0xb4);
  local_218 = local_218 * 0.35;
  local_248 = 0;
  uStack_240 = 0;
  local_118 = 0x3ff0000000000000;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0x3ff0000000000000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  local_c0 = 0;
  local_a0 = 0x3ff0000000000000;
  local_a8 = -(dVar9 - local_138 * dVar7);
  local_b8._8_4_ = SUB84(dVar6,0);
  local_b8._0_8_ = -(dVar8 - dVar7 * local_148);
  local_b8._12_4_ = (uint)((ulonglong)dVar6 >> 0x20) ^ 0x80000000;
  local_268 = param_1 + 0xec8;
  local_250 = (double)fVar2 * (double)fVar1 * dVar3 * 0.025;
  FUN_1496348fe(&local_208,local_258,&local_118,param_1 + 0xac0);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(double *)(param_1 + 0xa30) = local_120;
  *(undefined4 *)(param_1 + 0xa20) = local_130;
  *(undefined4 *)(param_1 + 0xa24) = uStack_12c;
  *(undefined4 *)(param_1 + 0xa28) = uStack_128;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_124;
  if ((local_90 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149632fc6 FUN_149632fc6 body=571 status=ok
// SIG undefined FUN_149632fc6(void)

undefined4 FUN_149632fc6(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined4 *local_120;
  double *local_118;
  undefined8 local_110;
  undefined1 local_108 [56];
  double local_d0;
  undefined1 local_c8 [24];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar4 = FUN_149633b6c(param_1,param_2,1);
  if ((char)uVar4 != '\0') {
    local_98 = 0;
    FUN_146ba22f0(param_1 + 0x220,&local_b0,param_1 + 0xa38);
    FUN_146c5d0c4(param_1 + 0x220,local_c8,param_1 + 0xa50);
    dVar1 = *(double *)(param_1 + 0x970);
    if (dVar1 < 0.0) {
      dVar1 = sqrt(dVar1);
    }
    else {
      dVar1 = SQRT(dVar1);
    }
    dVar3 = (double)*(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    local_d0 = (double)*(float *)(param_1 + 0xb64) * dVar1 * dVar3 * 0.05;
    local_158 = 0;
    FUN_149630e46(param_1,local_108,&local_b0,1);
    local_110 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    uVar2 = *(undefined4 *)(param_1 + 0xac8);
    FUN_14051b394(param_1 + 0xec8,uVar2,0);
    local_88 = &local_140;
    local_128 = &local_98;
    local_148 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_90 = FUN_144561ef8;
    local_150 = 0;
    local_140 = param_1;
    local_138 = &local_110;
    local_130 = local_108;
    local_120 = &local_b0;
    local_118 = &local_d0;
    FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
    *(undefined8 *)(param_1 + 0xa30) = local_a0;
    *(undefined4 *)(param_1 + 0xa20) = local_b0;
    *(undefined4 *)(param_1 + 0xa24) = uStack_ac;
    *(undefined4 *)(param_1 + 0xa28) = uStack_a8;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_a4;
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149633202 FUN_149633202 body=529 status=ok
// SIG undefined FUN_149633202(void)

undefined4 FUN_149633202(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  double *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = FUN_149633b6c(param_1,param_2,1);
  if ((char)uVar4 != '\0') {
    local_88 = 0;
    FUN_146ba22f0(param_1 + 0x220,&local_a0,param_1 + 0xa38);
    FUN_146c5d0c4(param_1 + 0x220,local_b8,param_1 + 0xa50);
    dVar1 = *(double *)(param_1 + 0x970);
    if (dVar1 < 0.0) {
      dVar1 = sqrt(dVar1);
    }
    else {
      dVar1 = SQRT(dVar1);
    }
    dVar3 = (double)*(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    local_c0 = (double)*(float *)(param_1 + 0xb64) * dVar1 * dVar3 * 0.05;
    local_c8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    uVar2 = *(undefined4 *)(param_1 + 0xac8);
    FUN_14051b394(param_1 + 0xec8,uVar2,0);
    local_78 = &local_f0;
    local_e0 = &local_88;
    local_f8 = &local_70;
    local_70 = 0;
    local_68 = 0;
    local_80 = FUN_144561972;
    local_100 = 0;
    local_f0 = param_1;
    local_e8 = &local_c8;
    local_d8 = &local_c0;
    local_d0 = &local_a0;
    FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
    *(undefined8 *)(param_1 + 0xa30) = local_90;
    *(undefined4 *)(param_1 + 0xa20) = local_a0;
    *(undefined4 *)(param_1 + 0xa24) = uStack_9c;
    *(undefined4 *)(param_1 + 0xa28) = uStack_98;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_94;
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149633414 FUN_149633414 body=1082 status=ok
// SIG undefined FUN_149633414(void)

undefined4 FUN_149633414(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1d8 [40];
  undefined4 local_1b0;
  undefined8 *local_1a8;
  longlong local_198;
  undefined8 *puStack_190;
  undefined1 *local_188;
  undefined8 *local_180;
  undefined4 *local_178;
  double *local_170;
  undefined8 local_160;
  undefined1 local_158 [24];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [24];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar14 = FUN_149633b6c(param_1,param_2,1);
  if ((char)uVar14 != '\0') {
    local_e8 = 0;
    lVar1 = param_1 + 0x220;
    FUN_146ba22f0(lVar1,&local_100,param_1 + 0xa38);
    FUN_146c5d0c4(lVar1,local_118,param_1 + 0xa50);
    dVar11 = (double)*(float *)(*(longlong *)(param_1 + 0x108) + 0xac);
    dVar2 = *(double *)(param_1 + 0x970);
    dVar12 = 0.0;
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    local_120 = (double)*(float *)(param_1 + 0xb64) * dVar2 * dVar11 * 0.1;
    lVar10 = *(longlong *)(param_1 + 0x128);
    dVar2 = *(double *)(lVar10 + 0xd0);
    dVar11 = *(double *)(lVar10 + 0xd8);
    dVar3 = *(double *)(lVar10 + 0xe0);
    dVar4 = *(double *)(param_1 + 0x220);
    dVar5 = *(double *)(param_1 + 0x228);
    dVar6 = *(double *)(param_1 + 0x230);
    dVar7 = *(double *)(param_1 + 0x238);
    dVar16 = dVar7 * dVar7 + dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
    dVar8 = *(double *)(lVar10 + 0xe8);
    dVar17 = 0.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
    if (0.0 < dVar16) {
      dVar16 = 1.0 / dVar16;
      dVar15 = dVar7 * dVar16;
      dVar13 = -dVar6 * dVar16;
      dVar12 = -dVar5 * dVar16;
      dVar17 = -dVar4 * dVar16;
    }
    local_188 = *(undefined1 **)(lVar10 + 0xc0);
    local_198 = *(longlong *)(lVar10 + 0xb0);
    puStack_190 = *(undefined8 **)(lVar10 + 0xb8);
    FUN_146ba22f0(lVar1,local_158,&local_198);
    local_140 = (dVar12 * dVar3 + dVar15 * dVar2 + dVar8 * dVar17) - dVar13 * dVar11;
    local_138 = (dVar13 * dVar2 + dVar15 * dVar11 + dVar8 * dVar12) - dVar17 * dVar3;
    local_130 = (dVar17 * dVar11 + dVar15 * dVar3 + dVar8 * dVar13) - dVar12 * dVar2;
    local_128 = ((dVar15 * dVar8 - dVar2 * dVar17) - dVar12 * dVar11) - dVar13 * dVar3;
    local_160 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    uVar9 = *(undefined4 *)(param_1 + 0xac8);
    FUN_14051b394(param_1 + 0xec8,uVar9,0);
    local_180 = &local_e8;
    local_170 = &local_120;
    local_1a8 = &local_d0;
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = FUN_144561bb8;
    local_1b0 = 0;
    local_198 = param_1;
    puStack_190 = &local_160;
    local_188 = local_158;
    local_178 = &local_100;
    local_d8 = &local_198;
    FUN_1401f8d10(L"ParallelFor Task",uVar9,1);
    if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
    *(undefined8 *)(param_1 + 0xa30) = local_f0;
    *(undefined4 *)(param_1 + 0xa20) = local_100;
    *(undefined4 *)(param_1 + 0xa24) = uStack_fc;
    *(undefined4 *)(param_1 + 0xa28) = uStack_f8;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_f4;
  }
  if ((local_c0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149633850 FUN_149633850 body=338 status=ok
// SIG undefined FUN_149633850(void)

void FUN_149633850(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1496342ba(param_1,param_2,1);
  FUN_146ba22f0(param_1 + 0x220,&local_60,param_1 + 0xa38);
  FUN_146c5d0c4(param_1 + 0x220,local_78,param_1 + 0xa50);
  dVar1 = *(double *)(param_1 + 0x970);
  uVar2 = SUB84(dVar1,0);
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
    uVar2 = SUB84(dVar1,0);
  }
  local_80 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))(uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0xac8);
  FUN_14051b394(param_1 + 0xec8,uVar2,0);
  local_40 = &local_90;
  local_98 = &local_38;
  local_38 = 0;
  local_30 = 0;
  local_48 = &LAB_14456243a;
  local_a0 = 0;
  local_90 = param_1;
  local_88 = &local_80;
  FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
  if (((*(char *)(param_1 + 0x978) == '\x01') && (*(longlong *)(param_1 + 0x120) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x120) + 0xb8) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb48) = 1;
  }
  *(undefined8 *)(param_1 + 0xa30) = local_50;
  *(undefined4 *)(param_1 + 0xa20) = local_60;
  *(undefined4 *)(param_1 + 0xa24) = uStack_5c;
  *(undefined4 *)(param_1 + 0xa28) = uStack_58;
  *(undefined4 *)(param_1 + 0xa2c) = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496339a4 FUN_1496339a4 body=326 status=ok
// SIG undefined FUN_1496339a4(void)

void FUN_1496339a4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(param_1 + 0xed0);
  local_50 = param_2;
  if (0 < (int)uVar2 && *(longlong *)(param_1 + 0xfd8) != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0xac0) + uVar5 * 4);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      local_58 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      local_68 = *puVar1;
      uStack_60 = *(undefined4 *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      FUN_1484ad52a(*(undefined8 *)(param_1 + 0xfd8),uVar3,&local_68,
                    *(longlong *)(param_1 + 0xec8) + lVar6);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar2 != uVar5);
  }
  local_40 = &local_78;
  local_70 = &local_50;
  local_88 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = FUN_144560ed4;
  local_90 = 0;
  local_78 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",(ulonglong)uVar2,1);
  if (*(char *)(local_50 + 0x210) == '\x01') {
    LOCK();
    *(int *)(local_50 + 0x214) = *(int *)(local_50 + 0x214) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149633aec FUN_149633aec body=128 status=ok
// SIG undefined FUN_149633aec(void)

double FUN_149633aec(longlong param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 1.0;
  dVar2 = 1.0 - (double)*(float *)(*(longlong *)(param_1 + 0x100) + 0xbc);
  dVar3 = 1.0;
  if (dVar2 <= 1.0) {
    dVar3 = dVar2;
  }
  dVar3 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar3);
  param_2 = param_2 / *(double *)(param_1 + 0x970);
  if (dVar3 < param_2) {
    dVar1 = (param_2 - dVar3) / (1.0 - dVar3);
    dVar3 = 1.0;
    if (dVar1 <= 1.0) {
      dVar3 = dVar1;
    }
    dVar3 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar3);
    dVar1 = 1.0 - dVar3 * dVar3;
    dVar1 = dVar1 * dVar1 * dVar1;
  }
  return dVar1;
}



// FUNCTION 149633b6c FUN_149633b6c body=1567 status=ok
// SIG undefined FUN_149633b6c(void)

undefined8 FUN_149633b6c(longlong param_1,double *param_2,char param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double dStack_158;
  double local_150;
  undefined8 local_148 [9];
  double local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar1 = param_1 + 0x220;
  local_c8 = param_2[5];
  local_d8 = param_2[3];
  uStack_d0 = param_2[4];
  FUN_146c5d1a4(lVar1,&local_178);
  local_1a8 = param_2[2];
  local_1b8 = *param_2;
  dStack_1b0 = param_2[1];
  FUN_146ba22f0(lVar1,&local_198);
  local_1d8 = local_188;
  local_1e8 = local_198;
  dStack_1e0 = dStack_190;
  dVar15 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
  dStack_1d0 = local_178;
  dStack_1c8 = dStack_170;
  dVar17 = local_168;
  if (9.99999993922529e-09 < dVar15) {
    dVar17 = 1.0 / SQRT(dVar15);
    dStack_1d0 = local_178 * dVar17;
    dStack_1c8 = dStack_170 * dVar17;
    dVar17 = local_168 * dVar17;
    dVar15 = dVar17 * dVar17 + dStack_1d0 * dStack_1d0 + dStack_1c8 * dStack_1c8;
  }
  dVar15 = SQRT(dVar15);
  dVar19 = 1.0 / dVar15;
  if (0.0 < dVar15) {
    dStack_1d0 = dStack_1d0 * dVar19;
    dStack_1c8 = dStack_1c8 * dVar19;
  }
  else {
    dStack_1d0 = 0.0;
    dStack_1c8 = 0.0;
  }
  dStack_1c0 = (double)(-(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar17 * dVar19));
  uVar7 = FUN_149630846(param_1);
  if (uVar7 == 0xffffffff) {
    if (param_3 == '\0') {
      uVar9 = 0;
      goto LAB_149633d2a;
    }
    dVar17 = *(double *)(param_1 + 0x180);
    dVar15 = *(double *)(param_1 + 0x170);
    dVar19 = *(double *)(param_1 + 0x178);
    dVar16 = dVar17 - dVar15 * 0.0;
    dVar18 = dVar15 * 0.0 - dVar19;
    dVar20 = dVar19 * 0.0 + dVar17 * -0.0;
    dVar18 = dVar18 + dVar18;
    dVar16 = dVar16 + dVar16;
    dVar20 = dVar20 + dVar20;
    dVar3 = *(double *)(param_1 + 0x188);
    local_188 = (dVar15 * dVar16 - dVar20 * dVar19) + dVar3 * dVar18 + 0.0;
    dStack_190 = (dVar17 * dVar20 - dVar18 * dVar15) + dVar3 * dVar16 + 0.0;
    local_198 = (dVar19 * dVar18 - dVar16 * dVar17) + dVar20 * dVar3 + 1.0;
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    local_150 = 0.0;
    local_148[0] = 0x3ff0000000000000;
    local_178 = *(double *)(param_1 + 0xa38);
    dStack_170 = *(double *)(param_1 + 0xa40);
    local_168 = *(double *)(param_1 + 0xa48);
    local_c8 = DAT_14c8463c8;
    local_d8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_d0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2(&dStack_160,&local_d8,&local_198);
    local_188 = param_2[5];
    local_198 = param_2[3];
    dStack_190 = param_2[4];
    local_1a8 = param_2[2];
    local_1b8 = *param_2;
    dStack_1b0 = param_2[1];
    local_1f8 = &local_d8;
    FUN_14848488c(&local_178,&local_1b8,&local_198,2);
    *(double *)(param_1 + 0xa48) = local_c8;
    *(double *)(param_1 + 0xa38) = local_d8;
    *(double *)(param_1 + 0xa40) = uStack_d0;
    dVar17 = *(double *)(param_1 + 0x9b8);
    dVar15 = *(double *)(param_1 + 0x9c0);
    dVar19 = *(double *)(param_1 + 0x9c8) + *(double *)(param_1 + 0x9c8);
    *(double *)(param_1 + 0xa50) =
         dVar17 * dVar19 + *(double *)(param_1 + 0x9d0) * (dVar15 + dVar15);
    *(double *)(param_1 + 0xa58) =
         dVar19 * dVar15 - (dVar17 + dVar17) * *(double *)(param_1 + 0x9d0);
    *(double *)(param_1 + 0xa60) = 1.0 - ((dVar15 + dVar15) * dVar15 + dVar17 * (dVar17 + dVar17));
    *(undefined4 *)(param_1 + 0xa80) = 0xffffffff;
  }
  else {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
    lVar11 = *(longlong *)(lVar8 + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
    uVar10 = (ulonglong)(uVar7 & 0x1ff);
    uVar4 = *(uint *)(lVar5 + uVar10 * 0xc);
    lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
    uVar14 = (ulonglong)uVar4 & 0x1ff;
    local_c8 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
    pdVar2 = (double *)(lVar6 + uVar14 * 0x18);
    local_d8 = *pdVar2;
    uStack_d0 = pdVar2[1];
    uVar4 = *(uint *)(lVar5 + 4 + uVar10 * 0xc);
    lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
    uVar14 = (ulonglong)uVar4 & 0x1ff;
    local_b0 = *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18);
    puVar12 = (undefined8 *)(lVar6 + uVar14 * 0x18);
    local_c0 = *puVar12;
    uStack_b8 = puVar12[1];
    uVar4 = *(uint *)(lVar5 + 8 + uVar10 * 0xc);
    lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
    uVar10 = (ulonglong)uVar4 & 0x1ff;
    local_98 = *(undefined8 *)(lVar11 + 0x10 + uVar10 * 0x18);
    puVar12 = (undefined8 *)(lVar11 + uVar10 * 0x18);
    local_a8 = *puVar12;
    uStack_a0 = puVar12[1];
    dStack_158 = dStack_1c8;
    local_150 = dStack_1c0;
    local_168 = local_1d8;
    dStack_160 = dStack_1d0;
    local_178 = local_1e8;
    dStack_170 = dStack_1e0;
    puVar12 = &local_d8;
    puVar13 = local_148;
    for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    FUN_146bd80f0(&local_178);
    FUN_146c13dec(lVar8,&local_1b8,uVar7);
    FUN_146c5cfa8(lVar1,&local_198,&local_1b8);
    *(double *)(param_1 + 0xa60) = local_188;
    *(double *)(param_1 + 0xa50) = local_198;
    *(double *)(param_1 + 0xa58) = dStack_190;
    local_1a8 = (dStack_1c0 * local_100 + local_1d8) * *(double *)(param_1 + 0x268);
    dStack_1b0 = (dStack_1c8 * local_100 + dStack_1e0) * *(double *)(param_1 + 0x260);
    local_1b8 = (local_100 * dStack_1d0 + local_1e8) * *(double *)(param_1 + 600);
    FUN_146bed047(&local_198,lVar1,&local_1b8);
    *(double *)(param_1 + 0xa38) = local_198 + *(double *)(param_1 + 0x240);
    *(double *)(param_1 + 0xa40) = dStack_190 + *(double *)(param_1 + 0x248);
    *(double *)(param_1 + 0xa48) = local_188 + *(double *)(param_1 + 0x250);
    *(uint *)(param_1 + 0xa80) = uVar7;
  }
  uVar9 = 1;
LAB_149633d2a:
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963418c FUN_14963418c body=301 status=ok
// SIG undefined FUN_14963418c(void)

void FUN_14963418c(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *(undefined8 *)(param_2 + 10);
  local_68 = *(undefined8 *)(param_2 + 6);
  uStack_60 = *(undefined8 *)(param_2 + 8);
  local_78 = *(undefined8 *)(param_2 + 4);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_98 = &local_48;
  FUN_14848488c(param_1 + 0x9a0,&local_88,&local_68,2);
  *(undefined8 *)(param_1 + 0xa48) = local_38;
  *(undefined8 *)(param_1 + 0xa38) = local_48;
  *(undefined8 *)(param_1 + 0xa40) = uStack_40;
  dVar1 = *(double *)(param_1 + 0x9b8);
  dVar2 = *(double *)(param_1 + 0x9c0);
  dVar3 = *(double *)(param_1 + 0x9c8) + *(double *)(param_1 + 0x9c8);
  *(double *)(param_1 + 0xa50) = dVar1 * dVar3 + *(double *)(param_1 + 0x9d0) * (dVar2 + dVar2);
  *(double *)(param_1 + 0xa58) = dVar3 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0x9d0);
  *(double *)(param_1 + 0xa60) = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496342ba FUN_1496342ba body=1603 status=ok
// SIG undefined FUN_1496342ba(void)

undefined8 FUN_1496342ba(longlong param_1,double *param_2,char param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double dStack_158;
  double local_150;
  undefined8 local_148 [9];
  double local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar1 = *(longlong *)(param_1 + 0xb50);
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    while( true ) {
      do {
        lVar10 = lVar1;
        lVar1 = 0;
      } while (lVar10 == 0);
      plVar5 = *(longlong **)(lVar10 + 0x70);
      cVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
      if (cVar8 != '\0') break;
      lVar1 = *(longlong *)(param_1 + 0xb50);
    }
  }
  lVar1 = param_1 + 0x220;
  local_c8 = param_2[5];
  local_d8 = param_2[3];
  uStack_d0 = param_2[4];
  FUN_146c5d1a4(lVar1,&local_178);
  local_1a8 = param_2[2];
  local_1b8 = *param_2;
  dStack_1b0 = param_2[1];
  FUN_146ba22f0(lVar1,&local_198);
  local_1d8 = local_188;
  local_1e8 = local_198;
  dStack_1e0 = dStack_190;
  dVar17 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
  dStack_1d0 = local_178;
  dStack_1c8 = dStack_170;
  dVar19 = local_168;
  if (9.99999993922529e-09 < dVar17) {
    dVar19 = 1.0 / SQRT(dVar17);
    dStack_1d0 = local_178 * dVar19;
    dStack_1c8 = dStack_170 * dVar19;
    dVar19 = local_168 * dVar19;
    dVar17 = dVar19 * dVar19 + dStack_1d0 * dStack_1d0 + dStack_1c8 * dStack_1c8;
  }
  dVar17 = SQRT(dVar17);
  dVar21 = 1.0 / dVar17;
  if (0.0 < dVar17) {
    dStack_1d0 = dStack_1d0 * dVar21;
    dStack_1c8 = dStack_1c8 * dVar21;
  }
  else {
    dStack_1d0 = 0.0;
    dStack_1c8 = 0.0;
  }
  dStack_1c0 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar19 * dVar21));
  lVar10 = *(longlong *)(param_1 + 0xdd8);
  uVar9 = FUN_1496353c0(param_1);
  if (uVar9 == 0xffffffff) {
    if (param_3 == '\0') {
      uVar11 = 0;
      goto LAB_1496344bf;
    }
    dVar19 = *(double *)(param_1 + 0x180);
    dVar17 = *(double *)(param_1 + 0x170);
    dVar21 = *(double *)(param_1 + 0x178);
    dVar18 = dVar19 - dVar17 * 0.0;
    dVar20 = dVar17 * 0.0 - dVar21;
    dVar22 = dVar21 * 0.0 + dVar19 * -0.0;
    dVar20 = dVar20 + dVar20;
    dVar18 = dVar18 + dVar18;
    dVar22 = dVar22 + dVar22;
    dVar3 = *(double *)(param_1 + 0x188);
    local_188 = (dVar17 * dVar18 - dVar22 * dVar21) + dVar3 * dVar20 + 0.0;
    dStack_190 = (dVar19 * dVar22 - dVar20 * dVar17) + dVar3 * dVar18 + 0.0;
    local_198 = (dVar21 * dVar20 - dVar18 * dVar19) + dVar22 * dVar3 + 1.0;
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    local_150 = 0.0;
    local_148[0] = 0x3ff0000000000000;
    local_178 = *(double *)(param_1 + 0xa38);
    dStack_170 = *(double *)(param_1 + 0xa40);
    local_168 = *(double *)(param_1 + 0xa48);
    local_c8 = DAT_14c8463c8;
    local_d8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_d0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2(&dStack_160,&local_d8,&local_198);
    local_188 = param_2[5];
    local_198 = param_2[3];
    dStack_190 = param_2[4];
    local_1a8 = param_2[2];
    local_1b8 = *param_2;
    dStack_1b0 = param_2[1];
    local_1f8 = &local_d8;
    FUN_14848488c(&local_178,&local_1b8,&local_198,2);
    *(double *)(param_1 + 0xa48) = local_c8;
    *(double *)(param_1 + 0xa38) = local_d8;
    *(double *)(param_1 + 0xa40) = uStack_d0;
    dVar19 = *(double *)(param_1 + 0x9b8);
    dVar17 = *(double *)(param_1 + 0x9c0);
    dVar21 = *(double *)(param_1 + 0x9c8) + *(double *)(param_1 + 0x9c8);
    *(double *)(param_1 + 0xa50) =
         dVar19 * dVar21 + *(double *)(param_1 + 0x9d0) * (dVar17 + dVar17);
    *(double *)(param_1 + 0xa58) =
         dVar21 * dVar17 - (dVar19 + dVar19) * *(double *)(param_1 + 0x9d0);
    *(double *)(param_1 + 0xa60) = 1.0 - ((dVar17 + dVar17) * dVar17 + dVar19 * (dVar19 + dVar19));
  }
  else {
    lVar13 = *(longlong *)(lVar10 + 0x10);
    lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
    uVar12 = (ulonglong)(uVar9 & 0x1ff);
    uVar4 = *(uint *)(lVar6 + uVar12 * 0xc);
    lVar7 = *(longlong *)(lVar13 + (ulonglong)(uVar4 >> 9) * 8);
    uVar16 = (ulonglong)uVar4 & 0x1ff;
    local_c8 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
    pdVar2 = (double *)(lVar7 + uVar16 * 0x18);
    local_d8 = *pdVar2;
    uStack_d0 = pdVar2[1];
    uVar4 = *(uint *)(lVar6 + 4 + uVar12 * 0xc);
    lVar7 = *(longlong *)(lVar13 + (ulonglong)(uVar4 >> 9) * 8);
    uVar16 = (ulonglong)uVar4 & 0x1ff;
    local_b0 = *(undefined8 *)(lVar7 + 0x10 + uVar16 * 0x18);
    puVar14 = (undefined8 *)(lVar7 + uVar16 * 0x18);
    local_c0 = *puVar14;
    uStack_b8 = puVar14[1];
    uVar4 = *(uint *)(lVar6 + 8 + uVar12 * 0xc);
    lVar13 = *(longlong *)(lVar13 + (ulonglong)(uVar4 >> 9) * 8);
    uVar12 = (ulonglong)uVar4 & 0x1ff;
    local_98 = *(undefined8 *)(lVar13 + 0x10 + uVar12 * 0x18);
    puVar14 = (undefined8 *)(lVar13 + uVar12 * 0x18);
    local_a8 = *puVar14;
    uStack_a0 = puVar14[1];
    dStack_158 = dStack_1c8;
    local_150 = dStack_1c0;
    local_168 = local_1d8;
    dStack_160 = dStack_1d0;
    local_178 = local_1e8;
    dStack_170 = dStack_1e0;
    puVar14 = &local_d8;
    puVar15 = local_148;
    for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    FUN_146bd80f0(&local_178);
    FUN_146c13dec(lVar10,&local_1b8,uVar9);
    FUN_146c5cfa8(lVar1,&local_198,&local_1b8);
    *(double *)(param_1 + 0xa60) = local_188;
    *(double *)(param_1 + 0xa50) = local_198;
    *(double *)(param_1 + 0xa58) = dStack_190;
    local_1a8 = (dStack_1c0 * local_100 + local_1d8) * *(double *)(param_1 + 0x268);
    dStack_1b0 = (dStack_1c8 * local_100 + dStack_1e0) * *(double *)(param_1 + 0x260);
    local_1b8 = (local_100 * dStack_1d0 + local_1e8) * *(double *)(param_1 + 600);
    FUN_146bed047(&local_198,lVar1,&local_1b8);
    *(double *)(param_1 + 0xa38) = local_198 + *(double *)(param_1 + 0x240);
    *(double *)(param_1 + 0xa40) = dStack_190 + *(double *)(param_1 + 0x248);
    *(double *)(param_1 + 0xa48) = local_188 + *(double *)(param_1 + 0x250);
  }
  uVar11 = 1;
LAB_1496344bf:
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496348fe FUN_1496348fe body=2473 status=ok
// SIG undefined FUN_1496348fe(void)

void FUN_1496348fe(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  int local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14963a196(param_1,param_3);
  iVar1 = param_2[0x12];
  *(double *)(param_1 + 0x10) = (double)iVar1;
  switch(*param_2) {
  case 0:
    local_118 = *(double *)(param_2 + 2);
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    if (iVar1 == 0) {
      FUN_14963a26a(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963a32a(param_1,&local_130,param_4);
    }
    break;
  case 1:
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    dStack_e8 = (*(double *)(param_2 + 2) + *(double *)(param_2 + 2)) * 0.5;
    local_100 = (-*(double *)(param_2 + 4) - *(double *)(param_2 + 4)) * 0.5;
    local_108 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 6)) * 0.5;
    dStack_110 = 0.0;
    local_f0 = 0.0;
    local_d0 = 0.0;
    local_118 = 1.0 / (local_120 * 4.0 + -5.0);
    local_f8 = local_108;
    local_e0 = local_100;
    local_d8 = dStack_e8;
    if (iVar1 == 0) {
      FUN_14963dec4(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963df84(param_1,&local_130,param_4);
    }
    break;
  case 2:
    local_e0 = *(double *)(param_2 + 2);
    local_108 = *(double *)(param_2 + 4);
    local_100 = *(double *)(param_2 + 6);
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    dStack_110 = -local_100;
    local_118 = 0.0;
    local_f8 = 0.0;
    local_f0 = -*(double *)(param_2 + 2);
    dStack_e8 = -*(double *)(param_2 + 4);
    local_d8 = 0.0;
    if (iVar1 == 0) {
      FUN_14963d5c0(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963d680(param_1,&local_130,param_4);
    }
    break;
  case 3:
    local_118 = *(double *)(param_2 + 2);
    dStack_110 = *(double *)(param_2 + 4);
    local_108 = *(double *)(param_2 + 6);
    local_130 = *(double *)(param_2 + 0x10);
    local_c0 = *(double *)(param_2 + 10);
    if (1.0 <= local_c0) {
      local_c0 = 1.0;
    }
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    local_100 = 2.0 / (3.0 - (local_120 + local_120));
    local_c8 = local_100 / 5.0;
    local_100 = local_100 / 105.0;
    if (local_c0 <= 0.0) {
      local_c0 = 0.0;
    }
    local_f8 = local_130;
    local_f0 = local_128;
    dStack_e8 = local_120;
    local_e0 = local_118;
    local_d8 = dStack_110;
    local_d0 = local_108;
    if (iVar1 == 0) {
      FUN_14963ac62(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963ad22(param_1,&local_130,param_4);
    }
    break;
  case 4:
    local_118 = *(double *)(param_2 + 2);
    dStack_110 = *(double *)(param_2 + 4);
    local_108 = *(double *)(param_2 + 6);
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    local_100 = (2.0 / (3.0 - (local_120 + local_120))) / 5.0;
    if (iVar1 == 0) {
      FUN_14963c60c(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963c6cc(param_1,&local_130,param_4);
    }
    break;
  case 5:
    local_118 = *(double *)(param_2 + 2);
    dStack_110 = *(double *)(param_2 + 4);
    local_108 = *(double *)(param_2 + 6);
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    local_100 = (2.0 / (3.0 - (local_120 + local_120))) / 105.0;
    if (iVar1 == 0) {
      FUN_14963cde6(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963cea6(param_1,&local_130,param_4);
    }
    break;
  case 7:
    local_b8 = *(double *)(param_2 + 2);
    local_b0 = *(double *)(param_2 + 4);
    local_a8 = *(double *)(param_2 + 6);
    dVar2 = SQRT(local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0);
    dVar3 = 1.0 / dVar2;
    if (0.0 < dVar2) {
      local_e0 = local_b8 * dVar3;
      local_108 = dVar3 * local_b0;
    }
    else {
      local_e0 = 0.0;
      local_108 = 0.0;
    }
    local_100 = *(double *)(param_2 + 8);
    local_e0 = local_e0 * local_100;
    local_108 = local_108 * local_100;
    local_100 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(local_a8 * dVar3)) * local_100;
    local_130 = *(double *)(param_2 + 0x10);
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    dStack_110 = -local_100;
    local_a0 = (2.0 / (3.0 - (local_120 + local_120))) / 5.0;
    local_118 = 0.0;
    local_f8 = 0.0;
    local_f0 = -local_e0;
    dStack_e8 = -local_108;
    local_d8 = 0.0;
    local_98 = 0x3fe0000000000000;
    local_d0 = local_130;
    local_c8 = local_128;
    local_c0 = local_120;
    if (iVar1 == 0) {
      FUN_14963e9b6(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963ea76(param_1,&local_130,param_4);
    }
    break;
  case 8:
    local_118 = *(double *)(param_2 + 2);
    dStack_110 = *(double *)(param_2 + 4);
    local_108 = *(double *)(param_2 + 6);
    local_c0 = *(double *)(param_2 + 10);
    if (1.0 <= local_c0) {
      local_c0 = 1.0;
    }
    local_128 = 1.0 / (*(double *)(param_2 + 0xc) * 12.566370964050293);
    local_120 = 1.0 / ((1.0 - *(double *)(param_2 + 0xe)) * 4.0);
    dVar2 = 3.0 - (local_120 + local_120);
    local_c8 = 1.0 / (dVar2 * 10.0);
    local_130 = *(double *)(param_2 + 0x10);
    local_100 = 1.0 / (dVar2 * 315.0);
    if (local_c0 <= 0.0) {
      local_c0 = 0.0;
    }
    local_f8 = local_130;
    local_f0 = local_128;
    dStack_e8 = local_120;
    local_e0 = local_118;
    local_d8 = dStack_110;
    local_d0 = local_108;
    if (iVar1 == 0) {
      FUN_14963b7fa(param_1,&local_130,param_4);
    }
    else {
      local_148 = *(undefined8 *)(param_1 + 8);
      local_140 = iVar1;
      FUN_14963b8ba(param_1,&local_130,param_4,param_5);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496352a8 FUN_1496352a8 body=278 status=ok
// SIG undefined FUN_1496352a8(void)

bool FUN_1496352a8(longlong *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined1 local_d8 [8];
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == -1) {
    bVar1 = false;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
    local_a8 = local_78;
    local_b8 = local_88;
    uStack_b4 = uStack_84;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    FUN_146ba22f0(param_1 + 0x44,&local_a0);
    local_e8 = &local_d0;
    FUN_146c1477c(param_3,param_2,&local_b8,local_d8);
    bVar1 = 0.0 <= (local_c0 - local_90) * local_a8 +
                   (local_d0 - local_a0) * (double)CONCAT44(uStack_b4,local_b8) +
                   (local_c8 - local_98) * (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496353c0 FUN_1496353c0 body=296 status=ok
// SIG undefined FUN_1496353c0(void)

undefined4 FUN_1496353c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 local_c0 [28];
  undefined4 local_a4;
  undefined1 local_a0 [8];
  undefined8 local_98 [2];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0xb50);
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    while( true ) {
      do {
        lVar3 = lVar1;
        lVar1 = 0;
      } while (lVar3 == 0);
      plVar4 = *(longlong **)(lVar3 + 0x70);
      cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
      if (cVar2 != '\0') break;
      lVar1 = *(longlong *)(param_1 + 0xb50);
    }
  }
  local_d0 = local_98;
  local_98[0] = 0x7fefffffffffffff;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_d8 = local_c0;
  (**(code **)(*(longlong *)(param_1 + 0xdd0) + 0x30))(param_1 + 0xdd0,param_2,local_a0,&local_a4);
  if (local_88 != 0) {
    plVar4 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar4 = local_68;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x100) + 0xc4) == '\0') &&
     (cVar2 = FUN_1496352a8(param_1,local_a4,param_1 + 0xba8), cVar2 != '\0')) {
    local_a4 = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a4;
}



// FUNCTION 1496354ea FUN_1496354ea body=129 status=ok
// SIG undefined FUN_1496354ea(void)

void FUN_1496354ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined1 *)(param_1 + 0xb69) = 0;
  *(undefined1 *)(param_1 + 0xb48) = 0;
  *(undefined1 *)(param_1 + 0xb4a) = 1;
  FUN_14963556c();
  if (*(longlong *)(param_1 + 0x988) != 0) {
    *(undefined8 *)(param_1 + 0x988) = 0;
    plVar3 = *(longlong **)(param_1 + 0x990);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x990) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014963555f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14963556c FUN_14963556c body=670 status=ok
// SIG undefined FUN_14963556c(void)

void FUN_14963556c(longlong *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x1fb] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_50 = L"MeshSculptChange";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UDynamicMeshSculptTool";
    local_48 = 0x16;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Brush Stroke");
    local_60 = *(undefined8 *)param_1[0x1fb];
    *(undefined8 *)param_1[0x1fb] = 0;
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))
              (lVar2 + 0x28,param_1[0x38],&local_60,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    lVar2 = param_1[0x1fb];
    if (lVar2 != 0) {
      FUN_14854b8a8(lVar2);
      FUN_1400020a8(lVar2);
    }
    param_1[0x1fb] = 0;
  }
  if (param_1[0x1fc] != 0) {
    lVar3 = FUN_14001cc68(0x50,0x10);
    FUN_1484acd3a(lVar3);
    FUN_146c2caf6(param_1[0x1fc],&local_50);
    lVar2 = *(longlong *)(lVar3 + 8);
    *(wchar_t **)(lVar3 + 8) = local_50;
    local_50 = (wchar_t *)0x0;
    if (lVar2 != 0) {
      FUN_146c2a142(lVar2);
      FUN_1400020a8(lVar2);
      pwVar1 = local_50;
      if (local_50 != (wchar_t *)0x0) {
        FUN_146c2a142(local_50);
        FUN_1400020a8(pwVar1);
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_50 = L"MeshSculptChange";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UDynamicMeshSculptTool";
    local_48 = 0x16;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Brush Stroke");
    local_68 = lVar3;
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))
              (lVar2 + 0x28,param_1[0x38],&local_68,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    lVar2 = param_1[0x1fc];
    if (lVar2 != 0) {
      FUN_146c2c40e(lVar2);
      FUN_1400020a8(lVar2);
    }
    param_1[0x1fc] = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148558a82(param_1 + 0x1fd,uVar4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963580c FUN_14963580c body=112 status=ok
// SIG undefined FUN_14963580c(void)

void FUN_14963580c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined1 *)(param_1 + 0xb69) = 0;
  *(undefined1 *)(param_1 + 0xb48) = 0;
  FUN_14963587c();
  *(undefined8 *)(param_1 + 0x988) = 0;
  plVar3 = *(longlong **)(param_1 + 0x990);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x990) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000149635870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14963587c FUN_14963587c body=123 status=ok
// SIG undefined FUN_14963587c(void)

void FUN_14963587c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x2c8))();
  FUN_148558a82(param_1 + 0x1fd,uVar2);
  lVar1 = param_1[0x1fb];
  if (lVar1 != 0) {
    FUN_14854b8a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[0x1fb] = 0;
  lVar1 = param_1[0x1fc];
  if (lVar1 != 0) {
    FUN_146c2c40e(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[0x1fc] = 0;
  return;
}



// FUNCTION 1496358f8 FUN_1496358f8 body=22 status=ok
// SIG undefined FUN_1496358f8(void)

undefined8 FUN_1496358f8(undefined8 param_1,undefined8 param_2)

{
  FUN_148442448();
  return param_2;
}



// FUNCTION 14963590e FUN_14963590e body=378 status=ok
// SIG undefined FUN_14963590e(void)

undefined8 FUN_14963590e(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar9 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined1 *)(param_1 + 0xaf5) = *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0xa9);
  if (*(char *)(param_1 + 0x8e8) == '\x01') {
    local_58 = *(undefined8 *)(param_2 + 10);
    local_68 = *(undefined8 *)(param_2 + 6);
    uStack_60 = *(undefined8 *)(param_2 + 8);
    local_78 = *(undefined8 *)(param_2 + 4);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    local_98 = &local_48;
    FUN_14848488c(param_1 + 0x8f0,&local_88,&local_68,2);
    *(undefined8 *)(param_1 + 0x998) = local_38;
    *(undefined8 *)(param_1 + 0x988) = local_48;
    *(undefined8 *)(param_1 + 0x990) = uStack_40;
    dVar1 = *(double *)(param_1 + 0x908);
    dVar2 = *(double *)(param_1 + 0x910);
    dVar10 = *(double *)(param_1 + 0x918) + *(double *)(param_1 + 0x918);
    *(double *)(param_1 + 0x9a0) = dVar1 * dVar10 + *(double *)(param_1 + 0x920) * (dVar2 + dVar2);
    *(double *)(param_1 + 0x9a8) = dVar10 * dVar2 - (dVar1 + dVar1) * *(double *)(param_1 + 0x920);
    *(double *)(param_1 + 0x9b0) = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  }
  else {
    FUN_1445583ba(param_1 + -0xb0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149635a8a FUN_149635a8a body=516 status=ok
// SIG undefined FUN_149635a8a(void)

void FUN_149635a8a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  float local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined1 local_98 [64];
  float local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1484412aa();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x378))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x2a);
  (**(code **)(*param_2 + 0x18))(param_2,local_98);
  local_e8 = param_1[0x14c];
  local_f8 = param_1[0x14a];
  lStack_f0 = param_1[0x14b];
  local_a8 = param_1[0x149];
  local_b8 = (undefined4)param_1[0x147];
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0xa3c);
  uStack_b0 = (undefined4)param_1[0x148];
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0xa44);
  local_120 = 0x3f800000;
  local_128 = 0.5;
  (**(code **)(*(longlong *)param_1[0x34] + 0x2e0))
            ((longlong *)param_1[0x34],(float)(double)param_1[0x12e]);
  if (param_1[0x35] != 0) {
    dVar2 = (double)FUN_148556b6a(local_98,param_1 + 0x147,0);
    lVar1 = param_1[0x35];
    FUN_1446f470e(&local_c0,L"FalloffWidth",1);
    FUN_14472da24(lVar1,local_c0,(float)dVar2);
  }
  if (*(char *)(param_1[0x21] + 0xa9) == '\x0e') {
    local_110 = (**(code **)(*param_2 + 8))(param_2);
    local_128 = (local_58 / 90.0) * 0.5;
    lVar1 = param_1[0x25];
    local_e8 = *(longlong *)(lVar1 + 0xc0);
    local_f8 = *(longlong *)(lVar1 + 0xb0);
    lStack_f0 = *(longlong *)(lVar1 + 0xb8);
    local_e0 = *(undefined4 *)(lVar1 + 0xd0);
    uStack_dc = *(undefined4 *)(lVar1 + 0xd4);
    uStack_d8 = *(undefined4 *)(lVar1 + 0xd8);
    uStack_d4 = *(undefined4 *)(lVar1 + 0xdc);
    local_d0 = *(undefined4 *)(lVar1 + 0xe0);
    uStack_cc = *(undefined4 *)(lVar1 + 0xe4);
    uStack_c8 = *(undefined4 *)(lVar1 + 0xe8);
    uStack_c4 = *(undefined4 *)(lVar1 + 0xec);
    local_108 = &DAT_14c846480;
    local_118 = 0;
    local_120 = 0x20808080;
    FUN_1484dd7f7(local_98,&local_f8,10,0x4046800000000000);
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149635c90 FUN_149635c90 body=163 status=ok
// SIG undefined FUN_149635c90(void)

void FUN_149635c90(char *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (*param_1 != cVar2) {
    pcVar1 = *(code **)(param_1 + 0x10);
    plVar4 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    local_21 = (*pcVar1)(uVar3);
    *param_1 = local_21;
    pcVar1 = *(code **)(param_1 + 0x50);
    plVar4 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x60);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar3,&local_21);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149635d34 FUN_149635d34 body=163 status=ok
// SIG undefined FUN_149635d34(void)

void FUN_149635d34(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 4);
  plVar4 = *(longlong **)(param_1 + 8);
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    plVar4 = (longlong *)(param_1 + 0xc);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  iVar2 = (*pcVar1)(uVar3);
  if (iVar2 != *param_1) {
    pcVar1 = *(code **)(param_1 + 4);
    plVar4 = (longlong *)(param_1 + 0xc);
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    local_24 = (*pcVar1)(uVar3);
    *param_1 = local_24;
    pcVar1 = *(code **)(param_1 + 0x14);
    plVar4 = (longlong *)(param_1 + 0x1c);
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x18);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar3,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149635dd8 FUN_149635dd8 body=197 status=ok
// SIG undefined FUN_149635dd8(void)

void FUN_149635dd8(undefined8 *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)param_1[2];
  plVar4 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar4 = param_1 + 6;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(local_38,uVar3);
  cVar2 = FUN_149641340(local_38,param_1);
  if (cVar2 == '\0') {
    pcVar1 = (code *)param_1[2];
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(&local_30,uVar3);
    *param_1 = local_30;
    pcVar1 = (code *)param_1[10];
    plVar4 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xc];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar3,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149635e9e FUN_149635e9e body=267 status=ok
// SIG undefined FUN_149635e9e(void)

void FUN_149635e9e(float *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(code **)(param_1 + 4);
  pfVar3 = *(float **)(param_1 + 8);
  if (*(float **)(param_1 + 8) == (float *)0x0) {
    pfVar3 = param_1 + 0xc;
  }
  uVar2 = (**(code **)(*(longlong *)pfVar3 + 8))();
  (*pcVar1)(&local_38,uVar2);
  if ((local_38 == *param_1) && (!NAN(local_38) && !NAN(*param_1))) {
    if ((local_34 == param_1[1]) && (!NAN(local_34) && !NAN(param_1[1]))) {
      if ((local_30 == param_1[2]) && (!NAN(local_30) && !NAN(param_1[2]))) {
        if ((local_2c == param_1[3]) && (!NAN(local_2c) && !NAN(param_1[3]))) goto LAB_149635f45;
      }
    }
  }
  pcVar1 = *(code **)(param_1 + 4);
  pfVar3 = param_1 + 0xc;
  if (*(float **)(param_1 + 8) != (float *)0x0) {
    pfVar3 = *(float **)(param_1 + 8);
  }
  uVar2 = (**(code **)(*(longlong *)pfVar3 + 8))(pfVar3);
  (*pcVar1)(&local_48,uVar2);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  local_58 = *param_1;
  fStack_54 = param_1[1];
  fStack_50 = param_1[2];
  fStack_4c = param_1[3];
  pcVar1 = *(code **)(param_1 + 0x14);
  pfVar3 = param_1 + 0x1c;
  if (*(float **)(param_1 + 0x18) != (float *)0x0) {
    pfVar3 = *(float **)(param_1 + 0x18);
  }
  uVar2 = (**(code **)(*(longlong *)pfVar3 + 8))(pfVar3);
  (*pcVar1)(uVar2,&local_58);
LAB_149635f45:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149635faa FUN_149635faa body=171 status=ok
// SIG undefined FUN_149635faa(void)

void FUN_149635faa(double *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (code *)param_1[2];
  pdVar3 = (double *)param_1[4];
  if ((double *)param_1[4] == (double *)0x0) {
    pdVar3 = param_1 + 6;
  }
  uVar2 = (**(code **)((longlong)*pdVar3 + 8))();
  dVar4 = (double)(*pcVar1)(uVar2);
  if ((dVar4 != *param_1) || (NAN(dVar4) || NAN(*param_1))) {
    pcVar1 = (code *)param_1[2];
    pdVar3 = param_1 + 6;
    if ((double *)param_1[4] != (double *)0x0) {
      pdVar3 = (double *)param_1[4];
    }
    uVar2 = (**(code **)((longlong)*pdVar3 + 8))(pdVar3);
    local_28 = (double)(*pcVar1)(uVar2);
    *param_1 = local_28;
    pcVar1 = (code *)param_1[10];
    pdVar3 = param_1 + 0xe;
    if ((double *)param_1[0xc] != (double *)0x0) {
      pdVar3 = (double *)param_1[0xc];
    }
    uVar2 = (**(code **)((longlong)*pdVar3 + 8))(pdVar3);
    (*pcVar1)(uVar2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149636056 FUN_149636056 body=166 status=ok
// SIG undefined FUN_149636056(void)

void FUN_149636056(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (code *)param_1[2];
  plVar4 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar4 = param_1 + 6;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  if (lVar3 != *param_1) {
    pcVar1 = (code *)param_1[2];
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    local_28 = (*pcVar1)(uVar2);
    *param_1 = local_28;
    pcVar1 = (code *)param_1[10];
    plVar4 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xc];
    }
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496360fe FUN_1496360fe body=163 status=ok
// SIG undefined FUN_1496360fe(void)

void FUN_1496360fe(char *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 != *param_1) {
    pcVar1 = *(code **)(param_1 + 0x10);
    plVar4 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    local_21 = (*pcVar1)(uVar3);
    *param_1 = local_21;
    pcVar1 = *(code **)(param_1 + 0x50);
    plVar4 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x60);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar3,&local_21);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496361a2 FUN_1496361a2 body=270 status=ok
// SIG undefined FUN_1496361a2(void)

void FUN_1496361a2(double *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar1 = (code *)param_1[4];
  pdVar3 = (double *)param_1[6];
  if ((double *)param_1[6] == (double *)0x0) {
    pdVar3 = param_1 + 8;
  }
  uVar2 = (**(code **)((longlong)*pdVar3 + 8))();
  (*pcVar1)(&local_40,uVar2);
  if ((local_40 == *param_1) && (!NAN(local_40) && !NAN(*param_1))) {
    if ((local_38 == param_1[1]) && (!NAN(local_38) && !NAN(param_1[1]))) {
      if ((local_30 == param_1[2]) && (!NAN(local_30) && !NAN(param_1[2]))) goto LAB_149636260;
    }
  }
  pcVar1 = (code *)param_1[4];
  pdVar3 = param_1 + 8;
  if ((double *)param_1[6] != (double *)0x0) {
    pdVar3 = (double *)param_1[6];
  }
  uVar2 = (**(code **)((longlong)*pdVar3 + 8))(pdVar3);
  (*pcVar1)(&local_58,uVar2);
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = dStack_50;
  local_78 = *(undefined4 *)param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = *(undefined4 *)(param_1 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_68 = param_1[2];
  pcVar1 = (code *)param_1[0xc];
  pdVar3 = param_1 + 0x10;
  if ((double *)param_1[0xe] != (double *)0x0) {
    pdVar3 = (double *)param_1[0xe];
  }
  uVar2 = (**(code **)((longlong)*pdVar3 + 8))(pdVar3);
  (*pcVar1)(uVar2,&local_78);
LAB_149636260:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496362b2 FUN_1496362b2 body=255 status=ok
// SIG undefined FUN_1496362b2(void)

void FUN_1496362b2(double *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  double *pdVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar1 = (code *)param_1[4];
  pdVar8 = (double *)param_1[6];
  if ((double *)param_1[6] == (double *)0x0) {
    pdVar8 = param_1 + 8;
  }
  uVar6 = (**(code **)((longlong)*pdVar8 + 8))();
  pdVar8 = &local_48;
  uVar4 = (*pcVar1)(pdVar8,uVar6);
  auVar2._8_4_ = (int)-(ulonglong)(param_1[1] != dStack_40);
  auVar2._0_8_ = -(ulonglong)(*param_1 != local_48);
  auVar2._12_4_ = (int)(-(ulonglong)(param_1[1] != dStack_40) >> 0x20);
  iVar5 = movmskpd(uVar4,auVar2);
  auVar3._8_4_ = (int)-(ulonglong)(param_1[3] != dStack_30);
  auVar3._0_8_ = -(ulonglong)(param_1[2] != local_38);
  auVar3._12_4_ = (int)(-(ulonglong)(param_1[3] != dStack_30) >> 0x20);
  uVar7 = movmskpd((int)pdVar8,auVar3);
  if ((uVar7 & 0x3fffffff) != 0 || iVar5 != 0) {
    pcVar1 = (code *)param_1[4];
    pdVar8 = param_1 + 8;
    if ((double *)param_1[6] != (double *)0x0) {
      pdVar8 = (double *)param_1[6];
    }
    uVar6 = (**(code **)((longlong)*pdVar8 + 8))(pdVar8);
    (*pcVar1)(&local_68,uVar6);
    param_1[2] = local_58;
    param_1[3] = dStack_50;
    *param_1 = local_68;
    param_1[1] = dStack_60;
    local_88 = *(undefined4 *)param_1;
    uStack_84 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_80 = *(undefined4 *)(param_1 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_78 = *(undefined4 *)(param_1 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_70 = *(undefined4 *)(param_1 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x1c);
    pcVar1 = (code *)param_1[0xc];
    pdVar8 = param_1 + 0x10;
    if ((double *)param_1[0xe] != (double *)0x0) {
      pdVar8 = (double *)param_1[0xe];
    }
    uVar6 = (**(code **)((longlong)*pdVar8 + 8))(pdVar8);
    (*pcVar1)(uVar6,&local_88);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496363b2 FUN_1496363b2 body=409 status=ok
// SIG undefined FUN_1496363b2(void)

void FUN_1496363b2(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    if (param_1[0x201] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      plVar4 = (longlong *)FUN_148451354(uVar1);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,param_1[0x201]);
      param_1[0x201] = 0;
    }
  }
  else if (param_1[0x201] == 0) {
    local_78 = 0;
    uStack_70 = 0;
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = FUN_14843d0eb(uVar1,0x3fe,param_1,&local_78);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x201] = lVar2;
    if (local_78 != 0) {
      FUN_1400020a8();
      lVar2 = param_1[0x201];
    }
    *(undefined1 *)(lVar2 + 0x82) = 0;
    *(undefined1 *)(param_1[0x201] + 0x83) = 1;
    plVar4 = (longlong *)param_1[0x201];
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar2 = lVar3 + 0x28;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    (**(code **)(*plVar4 + 800))(plVar4,param_1[0x202],lVar2);
    lVar2 = param_1[0x25];
    local_78 = *(longlong *)(lVar2 + 0xd0);
    uStack_70 = *(undefined8 *)(lVar2 + 0xd8);
    local_68 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_60 = *(undefined8 *)(lVar2 + 0xe8);
    local_58 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xb8);
    local_48 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_40 = 0;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0x3ff0000000000000;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0;
    FUN_148415b4c(param_1[0x201],&local_78,1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963654c FUN_14963654c body=968 status=ok
// SIG undefined FUN_14963654c(void)

void FUN_14963654c(longlong param_1,undefined4 *param_2,undefined1 (*param_3) [16],int param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = *(longlong *)(param_1 + 0x128);
  *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(param_2 + 4);
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  *(undefined4 *)(lVar6 + 0xb0) = *param_2;
  *(undefined4 *)(lVar6 + 0xb4) = uVar9;
  *(undefined4 *)(lVar6 + 0xb8) = uVar10;
  *(undefined4 *)(lVar6 + 0xbc) = uVar11;
  puVar1 = (undefined8 *)(param_1 + 0x820);
  plVar13 = (longlong *)(param_1 + 0x860);
  if (param_4 == 3) {
    pcVar7 = *(code **)(param_1 + 0x840);
    if (*(longlong **)(param_1 + 0x850) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + 0x850);
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(&local_f8,uVar12);
    *(undefined8 *)(param_1 + 0x830) = local_e8;
    *puVar1 = local_f8;
    *(undefined8 *)(param_1 + 0x828) = uStack_f0;
    lVar6 = *(longlong *)(param_1 + 0x128);
    uStack_e0 = *(undefined8 *)(lVar6 + 0xd0);
    local_d8 = *(undefined8 *)(lVar6 + 0xd8);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xe0);
    local_c8 = *(undefined8 *)(lVar6 + 0xe8);
    dVar2 = *(double *)(param_1 + 0x180);
    dVar3 = *(double *)(param_1 + 0x170);
    dVar4 = *(double *)(param_1 + 0x178);
    dVar14 = dVar2 - dVar3 * 0.0;
    dVar15 = dVar3 * 0.0 - dVar4;
    dVar16 = dVar4 * 0.0 + dVar2 * -0.0;
    dVar15 = dVar15 + dVar15;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar5 = *(double *)(param_1 + 0x188);
    dVar8 = (dVar2 * dVar16 - dVar15 * dVar3) + dVar5 * dVar14 + 0.0;
    local_88 = -((dVar3 * dVar14 - dVar16 * dVar4) + dVar5 * dVar15 + 0.0);
    local_98._8_4_ = SUB84(dVar8,0);
    local_98._0_8_ = -((dVar4 * dVar15 - dVar14 * dVar2) + dVar16 * dVar5 + 1.0);
    local_98._12_4_ = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
  }
  else {
    if (param_4 != 1) {
      pcVar7 = *(code **)(param_1 + 0x840);
      if (*(longlong **)(param_1 + 0x850) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_1 + 0x850);
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      (*pcVar7)(&local_f8,uVar12);
      *(undefined8 *)(param_1 + 0x830) = local_e8;
      *(undefined4 *)puVar1 = (undefined4)local_f8;
      *(undefined4 *)(param_1 + 0x824) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 0x828) = (undefined4)uStack_f0;
      *(undefined4 *)(param_1 + 0x82c) = uStack_f0._4_4_;
      goto LAB_14963660a;
    }
    pcVar7 = *(code **)(param_1 + 0x840);
    if (*(longlong **)(param_1 + 0x850) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + 0x850);
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(&local_f8,uVar12);
    *(undefined8 *)(param_1 + 0x830) = local_e8;
    *puVar1 = local_f8;
    *(undefined8 *)(param_1 + 0x828) = uStack_f0;
    lVar6 = *(longlong *)(param_1 + 0x128);
    uStack_e0 = *(undefined8 *)(lVar6 + 0xd0);
    local_d8 = *(undefined8 *)(lVar6 + 0xd8);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xe0);
    local_c8 = *(undefined8 *)(lVar6 + 0xe8);
    local_88 = *(double *)param_3[1];
    local_98 = *param_3;
  }
  local_f8 = DAT_14c8464e0;
  uStack_f0 = DAT_14c8464e8;
  local_e8 = DAT_14c8464f0;
  FUN_1482ae234(&local_f8,2);
  lVar6 = *(longlong *)(param_1 + 0x128);
  *(undefined4 *)(lVar6 + 0xd0) = (undefined4)uStack_e0;
  *(undefined4 *)(lVar6 + 0xd4) = uStack_e0._4_4_;
  *(undefined4 *)(lVar6 + 0xd8) = (undefined4)local_d8;
  *(undefined4 *)(lVar6 + 0xdc) = local_d8._4_4_;
  *(undefined4 *)(lVar6 + 0xe0) = (undefined4)uStack_d0;
  *(undefined4 *)(lVar6 + 0xe4) = uStack_d0._4_4_;
  *(undefined4 *)(lVar6 + 0xe8) = (undefined4)local_c8;
  *(undefined4 *)(lVar6 + 0xec) = local_c8._4_4_;
  pcVar7 = *(code **)(param_1 + 0x8e0);
  plVar13 = (longlong *)(param_1 + 0x900);
  if (*(longlong **)(param_1 + 0x8f0) != (longlong *)0x0) {
    plVar13 = *(longlong **)(param_1 + 0x8f0);
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar7)(local_98,uVar12);
  *(double *)(param_1 + 0x8d0) = local_88;
  *(undefined8 *)(param_1 + 0x8d8) = uStack_80;
  *(undefined4 *)(param_1 + 0x8c0) = local_98._0_4_;
  *(undefined4 *)(param_1 + 0x8c4) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0x8c8) = local_98._8_4_;
  *(undefined4 *)(param_1 + 0x8cc) = local_98._12_4_;
LAB_14963660a:
  plVar13 = *(longlong **)(param_1 + 0x1008);
  if (plVar13 != (longlong *)0x0) {
    lVar6 = *(longlong *)(param_1 + 0x128);
    local_f8 = *(undefined8 *)(lVar6 + 0xd0);
    uStack_f0 = *(undefined8 *)(lVar6 + 0xd8);
    local_e8 = *(undefined8 *)(lVar6 + 0xe0);
    uStack_e0 = *(undefined8 *)(lVar6 + 0xe8);
    local_d8 = *(undefined8 *)(lVar6 + 0xb0);
    uStack_d0 = *(undefined8 *)(lVar6 + 0xb8);
    local_c8 = *(undefined8 *)(lVar6 + 0xc0);
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    (**(code **)(*plVar13 + 0x330))(plVar13,&local_f8,1);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149636916 FUN_149636916 body=852 status=ok
// SIG undefined FUN_149636916(void)

void FUN_149636916(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *plStack_70;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (**(code **)(*(longlong *)param_1[0x38] + 0xa88))();
  lVar13 = *(longlong *)(lVar7 + 0x208);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x38) < 1)) {
    lVar13 = 0;
  }
  else {
    lVar13 = **(longlong **)(lVar13 + 0x30);
  }
  plVar1 = param_1 + 0x1e4;
  local_88 = lVar13;
  local_80 = lVar7;
  if ((int)param_1[0x1e5] < *(int *)(lVar13 + 8) * 0x200 + *(int *)(lVar13 + 0xc)) {
    local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffffffffff00);
    FUN_14475e60e(plVar1);
  }
  plVar2 = param_1 + 0x1e2;
  *(undefined4 *)(param_1 + 0x1e3) = 0;
  if (*(int *)((longlong)param_1 + 0xf1c) < 0) {
    FUN_14481578e(plVar2,0);
  }
  plVar10 = param_2 + 2;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  uStack_60 = 0;
  plStack_70 = plVar10;
  if ((int)param_2[5] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    iVar12 = (int)param_2[5];
  }
  uStack_90 = CONCAT44(uStack_5c,uStack_60);
  local_98 = local_68;
  iStack_94 = iStack_64;
  local_a8 = (longlong *)local_78;
  plStack_a0 = plStack_70;
  local_c8 = plVar10;
  local_c0 = lVar13;
  local_b8 = param_2;
  local_b0 = param_2;
  if ((iStack_64 != iVar12) || (plStack_70 != plVar10)) {
    do {
      uVar3 = *(uint *)(*local_b0 + (longlong)iStack_94 * 0xc);
      if ((-1 < (int)uVar3) &&
         (((int)uVar3 < *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar7 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        uVar6 = (ulonglong)uVar3 * 3;
        uVar8 = (ulonglong)uVar3 * 3 + 2;
        lVar11 = *(longlong *)(lVar13 + 0x78);
        uVar3 = (uint)uVar6;
        uVar9 = uVar3 + 1;
        iVar4 = *(int *)(*(longlong *)(lVar11 + (uVar6 >> 9 & 0x7fffff) * 8) +
                        (ulonglong)(uVar3 & 0x1ff) * 4);
        local_78 = CONCAT44(*(undefined4 *)
                             (*(longlong *)(lVar11 + (ulonglong)(uVar9 >> 9) * 8) +
                             (ulonglong)(uVar9 & 0x1ff) * 4),iVar4);
        plStack_70 = (longlong *)
                     CONCAT44(plStack_70._4_4_,
                              *(undefined4 *)
                               (*(longlong *)(lVar11 + (uVar8 >> 9) * 8) +
                               (ulonglong)((uint)uVar8 & 0x1ff) * 4));
        if (iVar4 != -1) {
          lVar11 = 0;
          do {
            iVar4 = *(int *)((longlong)&local_78 + lVar11 * 4);
            if (*(char *)(*plVar1 + (longlong)iVar4) == '\0') {
              iVar5 = (int)param_1[0x1e3];
              *(uint *)(param_1 + 0x1e3) = iVar5 + 1U;
              if (*(uint *)((longlong)param_1 + 0xf1c) < iVar5 + 1U) {
                FUN_1446f48e2(plVar2,iVar5);
              }
              *(int *)(*plVar2 + (longlong)iVar5 * 4) = iVar4;
              *(undefined1 *)(*plVar1 + (longlong)iVar4) = 1;
            }
            lVar11 = lVar11 + 1;
            plVar10 = local_c8;
            param_2 = local_b8;
            lVar13 = local_c0;
          } while (lVar11 != 3);
        }
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != param_2 || (plStack_a0 != plVar10 || iStack_94 != iVar12));
  }
  local_50 = &local_b0;
  local_a8 = &local_80;
  plStack_a0 = &local_88;
  local_d8 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
  local_58 = FUN_144562958;
  local_e0 = 0;
  local_b0 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x1e3],1);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149636c6c FUN_149636c6c body=724 status=ok
// SIG undefined FUN_149636c6c(void)

void FUN_149636c6c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  longlong **local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xa88))();
  plVar1 = (longlong *)(param_1 + 0xf20);
  local_70 = lVar6;
  if (*(int *)(param_1 + 0xf28) < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)) {
    local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
    FUN_14475e60e(plVar1);
  }
  plVar2 = (longlong *)(param_1 + 0xf10);
  *(undefined4 *)(param_1 + 0xf18) = 0;
  if (*(int *)(param_1 + 0xf1c) < 0) {
    FUN_14481578e(plVar2,0);
  }
  plVar10 = param_2 + 2;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar10;
  if ((int)param_2[5] == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_2[5];
  }
  uStack_78 = CONCAT44(uStack_4c,uStack_50);
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_90 = (undefined4)local_68;
  uStack_8c = local_68._4_4_;
  uStack_88 = (undefined4)uStack_60;
  uStack_84 = uStack_60._4_4_;
  local_b8 = plVar10;
  local_b0 = param_2;
  local_98 = param_2;
  if ((iStack_54 != iVar9) || (uStack_60 != plVar10)) {
    do {
      uVar3 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      if ((-1 < (int)uVar3) &&
         ((int)uVar3 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
        uVar7 = (ulonglong)(uVar3 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar6 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                               uVar7 * 2) - 1U) < 0xfffe) {
          lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
          uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar8 + 8 + uVar7 * 0xc))
          ;
          local_68 = (code *)*(undefined8 *)(lVar8 + uVar7 * 0xc);
          lVar8 = 0;
          do {
            iVar4 = *(int *)((longlong)&local_68 + lVar8 * 4);
            if (*(char *)(*plVar1 + (longlong)iVar4) == '\0') {
              iVar5 = *(int *)(param_1 + 0xf18);
              *(uint *)(param_1 + 0xf18) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0xf1c) < iVar5 + 1U) {
                FUN_1446f48e2(plVar2,iVar5);
              }
              *(int *)(*plVar2 + (longlong)iVar5 * 4) = iVar4;
              *(undefined1 *)(*plVar1 + (longlong)iVar4) = 1;
            }
            lVar8 = lVar8 + 1;
            param_2 = local_b0;
            plVar10 = local_b8;
          } while (lVar8 != 3);
        }
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar10 || iStack_7c != iVar9));
  }
  uStack_60 = &local_a8;
  local_a0 = &local_70;
  local_c8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_68 = FUN_14456289c;
  local_d0 = 0;
  local_a8 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xf18),1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149636f42 FUN_149636f42 body=250 status=ok
// SIG undefined FUN_149636f42(void)

void FUN_149636f42(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x2a0;
  FUN_1402226aa(lVar1);
  uVar6 = *(uint *)(param_2 + 1);
  if ((uint)(*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2d4)) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_1400bac10(lVar1,uVar6);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x2e8) == 0) || (*(int *)(param_1 + 0x2e8) < iVar4)) {
      *(int *)(param_1 + 0x2e8) = iVar4;
      FUN_144a56d22(lVar1);
    }
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      local_3c = *(undefined4 *)(lVar2 + lVar5);
      FUN_1447cbafe(lVar1,local_40,&local_3c,0);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963703e FUN_14963703e body=128 status=ok
// SIG undefined FUN_14963703e(void)

void FUN_14963703e(longlong param_1)

{
  FUN_1402226aa(param_1 + 0x2a0);
  FUN_1402226aa(param_1 + 0x2f0);
  FUN_1402226aa(param_1 + 0x340);
  if (*(int *)(param_1 + 0x39c) < 0) {
    *(undefined4 *)(param_1 + 0x398) = 0;
    FUN_14481578e(param_1 + 0x390,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  FUN_1402226aa(param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x44c) = 0;
  return;
}



// FUNCTION 1496370be FUN_1496370be body=545 status=ok
// SIG undefined FUN_1496370be(void)

void FUN_1496370be(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [40];
  double local_a0;
  longlong *plStack_98;
  double local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  double local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_2 + 2;
  local_a0 = 2.12199579096527e-314;
  local_90 = 2.12199579047121e-314;
  uStack_88 = 0;
  plStack_98 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    iVar6 = (int)param_2[5];
  }
  uStack_50 = CONCAT44(uStack_84,uStack_88);
  local_58 = local_90;
  dVar7 = local_58;
  local_68 = local_a0;
  plStack_60 = plStack_98;
  local_58._4_4_ = (int)((ulonglong)local_90 >> 0x20);
  iVar5 = local_58._4_4_;
  local_70 = param_2;
  if ((local_58._4_4_ != iVar6) || (local_58 = dVar7, plStack_98 != plVar1)) {
    do {
      local_58 = dVar7;
      uVar2 = *(uint *)(*local_70 + (longlong)iVar5 * 0xc);
      bVar4 = FUN_146c86e00(param_1,uVar2);
      if (((bVar4 & param_3) == 1) &&
         (((-1 < (int)uVar2 &&
           (lVar3 = *(longlong *)(param_1 + 0x1d0),
           (int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                              (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        FUN_146c14aac(lVar3,&local_a0,uVar2);
        dVar7 = *(double *)(param_1 + 0x1d8);
        if (local_a0 <= *(double *)(param_1 + 0x1d8)) {
          dVar7 = local_a0;
        }
        *(double *)(param_1 + 0x1d8) = dVar7;
        plVar8 = *(longlong **)(param_1 + 0x1e0);
        if ((double)plStack_98 <= (double)*(longlong **)(param_1 + 0x1e0)) {
          plVar8 = plStack_98;
        }
        *(longlong **)(param_1 + 0x1e0) = plVar8;
        dVar7 = *(double *)(param_1 + 0x1e8);
        if (local_90 <= *(double *)(param_1 + 0x1e8)) {
          dVar7 = local_90;
        }
        *(double *)(param_1 + 0x1e8) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x1f0) <= (double)CONCAT44(uStack_84,uStack_88)) {
          dVar7 = (double)CONCAT44(uStack_84,uStack_88);
        }
        *(double *)(param_1 + 0x1f0) = dVar7;
        dVar7 = *(double *)(param_1 + 0x1f8);
        if (*(double *)(param_1 + 0x1f8) <= local_80) {
          dVar7 = local_80;
        }
        *(double *)(param_1 + 0x1f8) = dVar7;
        dVar7 = *(double *)(param_1 + 0x200);
        if (*(double *)(param_1 + 0x200) <= local_78) {
          dVar7 = local_78;
        }
        *(double *)(param_1 + 0x200) = dVar7;
      }
      local_58 = (double)CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_1449c0562(&local_68);
      iVar5 = local_58._4_4_;
      dVar7 = local_58;
    } while (local_70 != param_2 || (plStack_60 != plVar1 || local_58._4_4_ != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496372e0 FUN_1496372e0 body=273 status=ok
// SIG undefined FUN_1496372e0(void)

void FUN_1496372e0(longlong param_1,undefined8 param_2)

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
  plVar1 = (longlong *)(param_1 + 0x340);
  lVar2 = param_1 + 0x350;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x368);
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
      FUN_146c2c9fe(param_2,*(undefined4 *)(*local_78 + (longlong)iStack_5c * 0xc),1);
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



// FUNCTION 1496373f2 FUN_1496373f2 body=806 status=ok
// SIG undefined FUN_1496373f2(void)

bool FUN_1496373f2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
                  double *param_5)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong *local_170 [3];
  longlong local_158 [6];
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = *(longlong *)(param_1 + 0xb50);
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    while( true ) {
      do {
        lVar6 = lVar5;
        lVar5 = 0;
      } while (lVar6 == 0);
      plVar2 = *(longlong **)(lVar6 + 0x70);
      cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar5 = *(longlong *)(param_1 + 0xb50);
    }
  }
  local_a8 = 0;
  local_98 = 0;
  FUN_146bee698(&local_188,param_3);
  uVar4 = FUN_146bdde3a(param_1 + 0xdd0,param_2,local_190,&local_188);
  if (local_178 != 0) {
    if (local_170[1] == (longlong *)0x0) {
      local_170[1] = local_158;
    }
    (**(code **)(*local_170[1] + 0x10))();
  }
  if (0 < (int)uVar4) {
    lVar5 = *(longlong *)(param_1 + 3000);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xcd8) + (ulonglong)(uVar4 >> 9) * 8);
    uVar7 = (ulonglong)(uVar4 & 0x1ff);
    uVar1 = *(uint *)(lVar6 + uVar7 * 0xc);
    lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    local_f8[2] = *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x18);
    puVar9 = (undefined8 *)(lVar8 + uVar11 * 0x18);
    local_f8[0] = *puVar9;
    local_f8[1] = puVar9[1];
    uVar1 = *(uint *)(lVar6 + 4 + uVar7 * 0xc);
    lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    local_d0 = *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x18);
    puVar9 = (undefined8 *)(lVar8 + uVar11 * 0x18);
    local_f8[3] = *puVar9;
    uStack_d8 = puVar9[1];
    uVar1 = *(uint *)(lVar6 + 8 + uVar7 * 0xc);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    local_b8 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
    puVar9 = (undefined8 *)(lVar5 + uVar11 * 0x18);
    local_c8 = *puVar9;
    uStack_c0 = puVar9[1];
    local_178 = *(longlong *)(param_2 + 4);
    local_188 = *param_2;
    uStack_184 = param_2[1];
    uStack_180 = param_2[2];
    uStack_17c = param_2[3];
    puVar9 = local_f8;
    pplVar10 = local_170;
    for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pplVar10 = (longlong *)*puVar9;
      puVar9 = puVar9 + 1;
      pplVar10 = pplVar10 + 1;
    }
    dVar13 = (double)FUN_146bd2a7a(&local_188);
    if (dVar13 < 0.0) {
      sqrt(dVar13);
    }
    lVar5 = *(longlong *)(param_1 + 0xea8);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xcd8) + (ulonglong)(uVar4 >> 9) * 8);
    lVar8 = (longlong)*(int *)(lVar6 + uVar7 * 0xc);
    lVar12 = (longlong)*(int *)(lVar6 + 4 + uVar7 * 0xc);
    lVar6 = (longlong)*(int *)(lVar6 + 8 + uVar7 * 0xc);
    dVar14 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18) * local_118 +
             *(double *)(lVar5 + 0x10 + lVar12 * 0x18) * local_120 +
             *(double *)(lVar5 + 0x10 + lVar8 * 0x18) * local_128;
    dVar15 = *(double *)(lVar5 + 8 + lVar6 * 0x18) * local_118 +
             *(double *)(lVar5 + 8 + lVar12 * 0x18) * local_120 +
             *(double *)(lVar5 + 8 + lVar8 * 0x18) * local_128;
    dVar13 = local_118 * *(double *)(lVar5 + lVar6 * 0x18) +
             local_120 * *(double *)(lVar5 + lVar12 * 0x18) +
             local_128 * *(double *)(lVar5 + lVar8 * 0x18);
    dVar16 = SQRT(dVar14 * dVar14 + dVar13 * dVar13 + dVar15 * dVar15);
    dVar17 = 1.0 / dVar16;
    if (0.0 < dVar16) {
      dVar13 = dVar13 * dVar17;
      dVar15 = dVar15 * dVar17;
    }
    else {
      dVar13 = 0.0;
      dVar15 = 0.0;
    }
    *param_5 = dVar13;
    param_5[1] = dVar15;
    param_5[2] = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar14 * dVar17));
    *(undefined8 *)(param_4 + 4) = local_100;
    *param_4 = local_110;
    param_4[1] = uStack_10c;
    param_4[2] = uStack_108;
    param_4[3] = uStack_104;
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return 0 < (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963771a FUN_14963771a body=148 status=ok
// SIG undefined FUN_14963771a(void)

void FUN_14963771a(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1496b31d2(param_1[0x20] + 0xa8,0);
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  lVar2 = param_1[0x20];
  if (*(char *)(lVar2 + 0xa8) == '\0') {
    fVar3 = 0.0;
    if (0.0 <= *(float *)(lVar2 + 0xac)) {
      fVar3 = *(float *)(lVar2 + 0xac);
    }
    fVar1 = *(float *)(lVar2 + 0xb4);
    fVar3 = (float)(-(uint)(fVar1 <= *(float *)(lVar2 + 0xb8)) &
                   (uint)(((*(float *)(lVar2 + 0xb8) - fVar1) * fVar3 + fVar1) * 0.5));
  }
  else {
    fVar3 = *(float *)(lVar2 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar3;
  return;
}



// FUNCTION 1496377ae FUN_1496377ae body=148 status=ok
// SIG undefined FUN_1496377ae(void)

void FUN_1496377ae(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1496b3246(param_1[0x20] + 0xa8,0);
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  lVar2 = param_1[0x20];
  if (*(char *)(lVar2 + 0xa8) == '\0') {
    fVar3 = 0.0;
    if (0.0 <= *(float *)(lVar2 + 0xac)) {
      fVar3 = *(float *)(lVar2 + 0xac);
    }
    fVar1 = *(float *)(lVar2 + 0xb4);
    fVar3 = (float)(-(uint)(fVar1 <= *(float *)(lVar2 + 0xb8)) &
                   (uint)(((*(float *)(lVar2 + 0xb8) - fVar1) * fVar3 + fVar1) * 0.5));
  }
  else {
    fVar3 = *(float *)(lVar2 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar3;
  return;
}



// FUNCTION 149637842 FUN_149637842 body=148 status=ok
// SIG undefined FUN_149637842(void)

void FUN_149637842(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1496b31d2(param_1[0x20] + 0xa8,1);
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  lVar2 = param_1[0x20];
  if (*(char *)(lVar2 + 0xa8) == '\0') {
    fVar3 = 0.0;
    if (0.0 <= *(float *)(lVar2 + 0xac)) {
      fVar3 = *(float *)(lVar2 + 0xac);
    }
    fVar1 = *(float *)(lVar2 + 0xb4);
    fVar3 = (float)(-(uint)(fVar1 <= *(float *)(lVar2 + 0xb8)) &
                   (uint)(((*(float *)(lVar2 + 0xb8) - fVar1) * fVar3 + fVar1) * 0.5));
  }
  else {
    fVar3 = *(float *)(lVar2 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar3;
  return;
}



// FUNCTION 1496378d6 FUN_1496378d6 body=148 status=ok
// SIG undefined FUN_1496378d6(void)

void FUN_1496378d6(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1496b3246(param_1[0x20] + 0xa8,1);
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  lVar2 = param_1[0x20];
  if (*(char *)(lVar2 + 0xa8) == '\0') {
    fVar3 = 0.0;
    if (0.0 <= *(float *)(lVar2 + 0xac)) {
      fVar3 = *(float *)(lVar2 + 0xac);
    }
    fVar1 = *(float *)(lVar2 + 0xb4);
    fVar3 = (float)(-(uint)(fVar1 <= *(float *)(lVar2 + 0xb8)) &
                   (uint)(((*(float *)(lVar2 + 0xb8) - fVar1) * fVar3 + fVar1) * 0.5));
  }
  else {
    fVar3 = *(float *)(lVar2 + 0xb0);
  }
  param_1[0x12e] = (longlong)(double)fVar3;
  return;
}



// FUNCTION 149637a76 FUN_149637a76 body=4661 status=ok
// SIG undefined FUN_149637a76(void)

void FUN_149637a76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_3e8 [32];
  wchar_t **local_3c8;
  longlong **local_3c0;
  undefined1 local_3b8;
  undefined8 *local_3b0;
  undefined1 **local_3a8;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388 [2];
  undefined1 local_378 [4];
  undefined1 local_374 [4];
  undefined1 local_370 [4];
  undefined1 local_36c [4];
  longlong *local_368 [2];
  wchar_t *local_358;
  undefined4 local_350;
  undefined1 *local_348 [2];
  undefined8 local_338;
  undefined **local_328;
  undefined8 local_320;
  undefined1 *local_308 [2];
  undefined8 local_2f8;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined1 *local_2c8 [2];
  undefined8 local_2b8;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined1 *local_288 [2];
  undefined8 local_278;
  undefined **local_268;
  undefined8 local_260;
  undefined1 *local_248 [2];
  undefined8 local_238;
  undefined **local_228;
  undefined8 local_220;
  undefined1 *local_208 [2];
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1c8 [2];
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined1 *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined1 *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_78 = 0;
  local_68 = &PTR_LAB_14bd8ebb0;
  local_88[0] = &LAB_144563076;
  local_358 = L"SculptIncreaseRadiusTooltip";
  local_350 = 0x1b;
  local_398 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Increase radius of sculpting brush");
  local_358 = L"SculptIncreaseRadius";
  local_350 = 0x14;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Increase Sculpt Radius");
  FUN_140056680(local_388,L"SculptIncreaseRadius");
  local_3b0 = &DAT_14c9655e0;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_88;
  local_390 = param_1;
  FUN_148450124(local_398,param_1,100,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bd8ebd0;
  local_a0 = local_390;
  local_c8[0] = &LAB_1445630cc;
  local_358 = L"SculptDecreaseRadiusTooltip";
  local_350 = 0x1b;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Decrease radius of sculpting brush");
  local_358 = L"SculptDecreaseRadius";
  local_350 = 0x14;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Decrease Sculpt Radius");
  FUN_140056680(local_388,L"SculptDecreaseRadius");
  local_3b0 = &DAT_14c965598;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_c8;
  FUN_148450124(local_398,uVar1,0x65,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bd8ebf0;
  local_e0 = local_390;
  local_108[0] = &LAB_144563122;
  local_358 = L"SculptIncreaseSizeTooltip";
  local_350 = 0x19;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Increase Brush Size");
  local_358 = L"SculptIncreaseSize";
  local_350 = 0x12;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Increase Size");
  FUN_140056680(local_388,L"SculptIncreaseSize");
  local_3b0 = &DAT_14c966ef8;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_108;
  FUN_148450124(local_398,uVar1,0x2742,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_138 = 0;
  local_128 = &PTR_LAB_14bd8ec10;
  local_120 = local_390;
  local_148[0] = &LAB_144563178;
  local_358 = L"SculptDecreaseSizeTooltip";
  local_350 = 0x19;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Decrease Brush Size");
  local_358 = L"SculptDecreaseSize";
  local_350 = 0x12;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Decrease Size");
  FUN_140056680(local_388,L"SculptDecreaseSize");
  local_3b0 = &DAT_14c965130;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_148;
  FUN_148450124(local_398,uVar1,0x2743,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_178 = 0;
  local_168 = &PTR_LAB_14bd8ec30;
  local_160 = local_390;
  local_188[0] = &LAB_1445631ce;
  local_358 = L"SculptIncreaseSizeTooltip";
  local_350 = 0x19;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Increase Brush Size");
  local_358 = L"SculptIncreaseSize";
  local_350 = 0x12;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Increase Size");
  FUN_140056680(local_388,L"SculptIncreaseSizeSmallStep");
  local_3b0 = &DAT_14c966ef8;
  local_3b8 = 4;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_188;
  FUN_148450124(local_398,uVar1,0x2744,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14bd8ec50;
  local_1a0 = local_390;
  local_1c8[0] = &LAB_144563224;
  local_358 = L"SculptDecreaseSizeTooltip";
  local_350 = 0x19;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Decrease Brush Size");
  local_358 = L"SculptDecreaseSize";
  local_350 = 0x12;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Decrease Size");
  FUN_140056680(local_388,L"SculptDecreaseSizeSmallStemp");
  local_3b0 = &DAT_14c965130;
  local_3b8 = 4;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_1c8;
  FUN_148450124(local_398,uVar1,0x2745,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14bd8ec70;
  local_1e0 = local_390;
  local_208[0] = &LAB_14456327a;
  local_358 = L"SculptIncreaseSpeedTooltip";
  local_350 = 0x1a;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Increase Brush Speed");
  local_358 = L"SculptIncreaseSpeed";
  local_350 = 0x13;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Increase Speed");
  FUN_140056680(local_388,L"SculptIncreaseSpeed");
  local_3b0 = &DAT_14c964fe0;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_208;
  FUN_148450124(local_398,uVar1,0x274c,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_238 = 0;
  local_228 = &PTR_LAB_14bd8ec90;
  local_220 = local_390;
  local_248[0] = &LAB_1445632d0;
  local_358 = L"SculptDecreaseSpeedTooltip";
  local_350 = 0x1a;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Decrease Brush Speed");
  local_358 = L"SculptDecreaseSpeed";
  local_350 = 0x13;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Decrease Speed");
  FUN_140056680(local_388,L"SculptDecreaseSpeed");
  local_3b0 = &DAT_14c966fd0;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_248;
  FUN_148450124(local_398,uVar1,0x274d,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_278 = 0;
  local_268 = &PTR_LAB_14bd8ecb0;
  local_260 = local_390;
  local_288[0] = &LAB_144563326;
  local_358 = L"ToggleWireframeTooltip";
  local_350 = 0x16;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,L"Toggle visibility of wireframe overlay");
  local_358 = L"ToggleWireframe";
  local_350 = 0xf;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Toggle Wireframe");
  FUN_140056680(local_388,L"ToggleWireframe");
  local_3b0 = &DAT_14c966fd0;
  local_3b8 = 2;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_288;
  FUN_148450124(local_398,uVar1,0x66,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14bd8ecd0;
  local_2a0 = local_390;
  local_2c8[0] = &LAB_144563380;
  local_358 = L"SetSculptWorkSurfacePosNormalTooltip";
  local_350 = 0x24;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,
                L"Move the Sculpting Work Plane/Surface to Position and Normal of World hit point under cursor"
               );
  local_358 = L"SetSculptWorkSurfacePosNormal";
  local_350 = 0x1d;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Reorient Work Surface");
  FUN_140056680(local_388,L"SetSculptWorkSurfacePosNormal");
  local_3b0 = &DAT_14c965148;
  local_3b8 = 4;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_2c8;
  FUN_148450124(local_398,uVar1,0x2774,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_2f8 = 0;
  local_2e8 = &PTR_LAB_14bd8ecf0;
  local_2e0 = local_390;
  local_308[0] = &LAB_1445633d6;
  local_358 = L"SetSculptWorkSurfacePosTooltip";
  local_350 = 0x1e;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,
                L"Move the Sculpting Work Plane/Surface to World hit point under cursor (keep current Orientation)"
               );
  local_358 = L"SetSculptWorkSurfacePos";
  local_350 = 0x17;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"Reposition Work Surface");
  FUN_140056680(local_388,L"SetSculptWorkSurfacePos");
  local_3b0 = &DAT_14c965148;
  local_3b8 = 0;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_308;
  FUN_148450124(local_398,uVar1,0x2775,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  uVar1 = local_390;
  local_338 = 0;
  local_328 = &PTR_LAB_14bd8ed10;
  local_320 = local_390;
  local_348[0] = &LAB_14456342c;
  local_358 = L"SetSculptWorkSurfaceViewTooltip";
  local_350 = 0x1f;
  FUN_1446e940c(local_36c,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_370,&local_358);
  FUN_140208bae(local_368,local_370,local_36c,
                L"Move the Sculpting Work Plane/Surface to World hit point under cursor and align to View"
               );
  local_358 = L"SetSculptWorkSurfaceView";
  local_350 = 0x18;
  FUN_1446e940c(local_374,&local_358);
  local_358 = L"UDynamicMeshSculptTool";
  local_350 = 0x16;
  FUN_1446e940c(local_378,&local_358);
  FUN_140208bae(&local_358,local_378,local_374,L"View-Align Work Surface");
  FUN_140056680(local_388,L"SetSculptWorkSurfaceView");
  local_3b0 = &DAT_14c965148;
  local_3b8 = 5;
  local_3c8 = &local_358;
  local_3c0 = local_368;
  local_3a8 = local_348;
  FUN_148450124(local_398,uVar1,0x2776,local_388);
  if (local_388[0] != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
  if (local_368[0] != (longlong *)0x0) {
    (**(code **)(*local_368[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149638cac FUN_149638cac body=167 status=ok
// SIG undefined FUN_149638cac(void)

void FUN_149638cac(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xfe0);
  if (lVar1 != 0) {
    local_38 = (void *)0x0;
    local_30 = *(int *)(param_1 + 0xac8);
    lVar2 = (longlong)local_30;
    _Src = *(void **)(param_1 + 0xac0);
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_144a06ca8(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 << 2);
    }
    FUN_148f6e68c(lVar1,&local_38,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149638d54 FUN_149638d54 body=755 status=ok
// SIG undefined FUN_149638d54(void)

void FUN_149638d54(longlong *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_2 & 0xffffffff) {
  case 0:
    (**(code **)(*(longlong *)param_1[0x38] + 0xb38))();
    plVar2 = (longlong *)param_1[0x38];
    lVar7 = FUN_1485062e8(param_1[0x14]);
    uVar8 = CONCAT71((int7)(param_2 >> 8),*(undefined1 *)(lVar7 + 0x2d6)) & 0xffffffffffffff40;
    (**(code **)(*plVar2 + 0xb10))(plVar2,CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 6));
    param_1[0x39] = 0;
    goto LAB_149638fa1;
  case 1:
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = FUN_148557b44(uVar6);
    goto LAB_149638ef8;
  case 2:
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar5 = 0;
    break;
  case 3:
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar5 = 1;
    break;
  case 4:
    lVar7 = param_1[0x26];
    uVar1 = *(undefined1 *)(lVar7 + 0xe8);
    uVar6 = *(undefined8 *)(lVar7 + 0xd0);
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = FUN_148557bb8(uVar5,lVar7 + 0xd8,(int)uVar6,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
    goto LAB_149638f0b;
  case 5:
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar5 = 2;
    break;
  case 6:
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = FUN_14855788a(uVar6,0);
    goto LAB_149638ef8;
  case 7:
    uVar6 = *(undefined8 *)(param_1[0x26] + 200);
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = FUN_148557d82(uVar5,uVar6);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    param_1[0x39] = lVar7;
    lVar3 = *(longlong *)(param_1[0x26] + 200);
    if (lVar3 != 0) {
      FUN_1446f470e(&local_48,L"ImageTexture",1);
      FUN_14016d8b0(lVar7,local_48,lVar3);
    }
    goto switchD_149638d8d_default;
  case 8:
    cVar4 = FUN_144729dda(param_1[0x26] + 0xec);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)param_1[0x38] + 0xb38))();
      param_1[0x39] = 0;
      goto switchD_149638d8d_default;
    }
    lVar7 = FUN_14479d2ce(param_1[0x26] + 0xec);
    goto LAB_149638efd;
  default:
    goto switchD_149638d8d_default;
  }
  lVar7 = FUN_148557cc1(uVar6,uVar5);
LAB_149638ef8:
  if (lVar7 != 0) {
LAB_149638efd:
    lVar7 = FUN_14090ceee(lVar7,param_1,0);
LAB_149638f0b:
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    param_1[0x39] = lVar7;
  }
switchD_149638d8d_default:
  if (param_1[0x39] != 0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0xb30))();
    lVar7 = param_1[0x39];
    if (*(char *)(param_1[0x26] + 0xb0) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x3f800000;
    }
    FUN_1446f470e(&local_50,L"FlatShading",1);
    FUN_14472da24(lVar7,local_50,uVar9);
  }
  (**(code **)(*(longlong *)param_1[0x38] + 0xb10))((longlong *)param_1[0x38],0);
LAB_149638fa1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149639048 FUN_149639048 body=129 status=ok
// SIG undefined FUN_149639048(void)

void FUN_149639048(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3f800000;
    }
    FUN_1446f470e(&local_38,L"FlatShading",1);
    FUN_14472da24(lVar1,local_38,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496390ca FUN_1496390ca body=115 status=ok
// SIG undefined FUN_1496390ca(void)

void FUN_1496390ca(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_1446f470e(&local_40,L"Color",1);
    FUN_144a9d3f0(lVar1,local_40,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963913e FUN_14963913e body=119 status=ok
// SIG undefined FUN_14963913e(void)

void FUN_14963913e(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    FUN_1446f470e(&local_38,L"Opacity",1);
    FUN_14472da24(lVar1,local_38,(float)param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496391b6 FUN_1496391b6 body=159 status=ok
// SIG undefined FUN_1496391b6(void)

void FUN_1496391b6(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x26];
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  uVar2 = (**(code **)(*param_1 + 0x2c8))();
  lVar3 = FUN_148557bb8(uVar2,lVar3 + 0xd8,(int)uVar1,param_2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x39] = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000149639234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x38] + 0xb30))((longlong *)param_1[0x38],lVar3);
  return;
}



// FUNCTION 149639256 FUN_149639256 body=209 status=ok
// SIG undefined FUN_149639256(void)

void FUN_149639256(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (*(int *)(*(longlong *)(param_1 + 0x130) + 0xac) == 8) {
    cVar1 = FUN_144729dda(&local_28);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(&local_28);
      lVar3 = FUN_14090ceee(uVar2,param_1,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x1c8) = lVar3;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0xb38))();
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963933c FUN_14963933c body=107 status=ok
// SIG undefined FUN_14963933c(void)

void FUN_14963933c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    FUN_1446f470e(&local_28,L"ImageTexture",1);
    FUN_14016d8b0(lVar1,local_28,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496393a8 FUN_1496393a8 body=725 status=ok
// SIG undefined FUN_1496393a8(void)

void FUN_1496393a8(longlong *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_6c [4];
  longlong *local_68;
  longlong *local_60;
  wchar_t *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = (**(code **)(*(longlong *)param_1[0x38] + 0xa88))();
  plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149fab260;
  plVar8 = plVar5 + 2;
  FUN_146bff712(plVar8,uVar4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  pwVar2 = (wchar_t *)(plVar6 + 2);
  FUN_146bff712(pwVar2,plVar8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_146c017d0(pwVar2);
  FUN_14582ed12(pwVar2);
  if (*(int *)(plVar6[0x43] + 0x38) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(plVar6[0x43] + 0x30);
  }
  FUN_146c39810(uVar4,0);
  local_78 = FUN_14001cc68(0x70,0x10);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = plVar8;
  local_60 = plVar5;
  local_58 = pwVar2;
  local_50 = plVar6;
  FUN_1484acf8c(local_78,&local_68,&local_58);
  (**(code **)(*(longlong *)(param_1[0x38] + 0x668) + 0x10))(param_1[0x38] + 0x668,local_78,0);
  lVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_58 = L"SculptDiscardAttribsChange";
  local_50._0_4_ = 0x1a;
  FUN_1446e940c(&local_68,&local_58);
  local_58 = L"UDynamicMeshSculptTool";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x16);
  FUN_1446e940c(local_6c,&local_58);
  FUN_140208bae(&local_58,local_6c,&local_68,L"Discard Attributes");
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,param_1[0x38],&local_78,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_144a5dc74(&local_58);
  (**(code **)(*plVar8 + 0x340))(plVar8,&local_58,3);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496396f2 FUN_1496396f2 body=45 status=ok
// SIG undefined FUN_1496396f2(void)

longlong FUN_1496396f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639728 FUN_149639728 body=45 status=ok
// SIG undefined FUN_149639728(void)

longlong FUN_149639728(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14613dadc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639756 FUN_149639756 body=48 status=ok
// SIG undefined FUN_149639756(void)

longlong FUN_149639756(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14613dadc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639792 FUN_149639792 body=55 status=ok
// SIG undefined FUN_149639792(void)

void FUN_149639792(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar1;
  return;
}



// FUNCTION 1496397ca FUN_1496397ca body=50 status=ok
// SIG undefined FUN_1496397ca(void)

void FUN_1496397ca(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x138) = param_2;
  return;
}



// FUNCTION 1496397fc FUN_1496397fc body=45 status=ok
// SIG undefined FUN_1496397fc(void)

longlong FUN_1496397fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639830 FUN_149639830 body=48 status=ok
// SIG undefined FUN_149639830(void)

longlong FUN_149639830(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639860 FUN_149639860 body=48 status=ok
// SIG undefined FUN_149639860(void)

longlong FUN_149639860(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639890 FUN_149639890 body=48 status=ok
// SIG undefined FUN_149639890(void)

longlong FUN_149639890(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496398c0 FUN_1496398c0 body=48 status=ok
// SIG undefined FUN_1496398c0(void)

longlong FUN_1496398c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639900 FUN_149639900 body=48 status=ok
// SIG undefined FUN_149639900(void)

longlong FUN_149639900(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_146190a4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639950 FUN_149639950 body=45 status=ok
// SIG undefined FUN_149639950(void)

longlong FUN_149639950(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ab9d3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639984 FUN_149639984 body=48 status=ok
// SIG undefined FUN_149639984(void)

longlong FUN_149639984(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145ab9d3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496399bc FUN_1496399bc body=48 status=ok
// SIG undefined FUN_1496399bc(void)

longlong FUN_1496399bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145ab9d3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496399ec FUN_1496399ec body=48 status=ok
// SIG undefined FUN_1496399ec(void)

longlong FUN_1496399ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145ab9d3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639a1c FUN_149639a1c body=48 status=ok
// SIG undefined FUN_149639a1c(void)

longlong FUN_149639a1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x100;
  FUN_145ab9d3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639a58 FUN_149639a58 body=38 status=ok
// SIG undefined FUN_149639a58(void)

undefined8 FUN_149639a58(undefined8 param_1,int param_2)

{
  FUN_149645784();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639a7e FUN_149639a7e body=38 status=ok
// SIG undefined FUN_149639a7e(void)

undefined8 FUN_149639a7e(undefined8 param_1,int param_2)

{
  FUN_1496457fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639aac FUN_149639aac body=45 status=ok
// SIG undefined FUN_149639aac(void)

longlong FUN_149639aac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1460d1a44(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639ada FUN_149639ada body=48 status=ok
// SIG undefined FUN_149639ada(void)

longlong FUN_149639ada(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1460d1a44(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639b16 FUN_149639b16 body=45 status=ok
// SIG undefined FUN_149639b16(void)

longlong FUN_149639b16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145eca02c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639b44 FUN_149639b44 body=48 status=ok
// SIG undefined FUN_149639b44(void)

longlong FUN_149639b44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145eca02c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639b74 FUN_149639b74 body=48 status=ok
// SIG undefined FUN_149639b74(void)

longlong FUN_149639b74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_145eca02c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639bac FUN_149639bac body=102 status=ok
// SIG undefined FUN_149639bac(void)

undefined8 * FUN_149639bac(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  param_1[-5] = &PTR_FUN_14bd88880;
  *param_1 = &PTR_FUN_14bd88cf0;
  param_1[0xe] = &PTR_FUN_14bd88d10;
  param_1[0x10] = &PTR_FUN_14bd88d40;
  param_1[0x11] = &PTR_FUN_14bd88d80;
  FUN_145bc966e(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 149639c12 FUN_149639c12 body=102 status=ok
// SIG undefined FUN_149639c12(void)

undefined8 * FUN_149639c12(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  param_1[-0x13] = &PTR_FUN_14bd88880;
  param_1[-0xe] = &PTR_FUN_14bd88cf0;
  *param_1 = &PTR_FUN_14bd88d10;
  param_1[2] = &PTR_FUN_14bd88d40;
  param_1[3] = &PTR_FUN_14bd88d80;
  FUN_145bc966e(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 149639c78 FUN_149639c78 body=102 status=ok
// SIG undefined FUN_149639c78(void)

undefined8 * FUN_149639c78(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x15;
  param_1[-0x15] = &PTR_FUN_14bd88880;
  param_1[-0x10] = &PTR_FUN_14bd88cf0;
  param_1[-2] = &PTR_FUN_14bd88d10;
  *param_1 = &PTR_FUN_14bd88d40;
  param_1[1] = &PTR_FUN_14bd88d80;
  FUN_145bc966e(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 149639cde FUN_149639cde body=105 status=ok
// SIG undefined FUN_149639cde(void)

undefined8 * FUN_149639cde(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x16;
  param_1[-0x16] = &PTR_FUN_14bd88880;
  param_1[-0x11] = &PTR_FUN_14bd88cf0;
  param_1[-3] = &PTR_FUN_14bd88d10;
  param_1[-1] = &PTR_FUN_14bd88d40;
  *param_1 = &PTR_FUN_14bd88d80;
  FUN_145bc966e(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 149639d60 FUN_149639d60 body=45 status=ok
// SIG undefined FUN_149639d60(void)

longlong FUN_149639d60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1462490f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639d8e FUN_149639d8e body=48 status=ok
// SIG undefined FUN_149639d8e(void)

longlong FUN_149639d8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1462490f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639dbe FUN_149639dbe body=48 status=ok
// SIG undefined FUN_149639dbe(void)

longlong FUN_149639dbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1462490f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639dee FUN_149639dee body=48 status=ok
// SIG undefined FUN_149639dee(void)

longlong FUN_149639dee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1462490f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639e1e FUN_149639e1e body=92 status=ok
// SIG undefined FUN_149639e1e(void)

byte FUN_149639e1e(double *param_1,double *param_2)

{
  byte bVar1;
  
  if ((((((param_1[3] != param_2[3]) || (NAN(param_1[3]) || NAN(param_2[3]))) ||
        (param_1[4] != param_2[4])) ||
       ((NAN(param_1[4]) || NAN(param_2[4]) || (param_1[5] != param_2[5])))) ||
      ((NAN(param_1[5]) || NAN(param_2[5]) ||
       ((*param_1 != *param_2 || (NAN(*param_1) || NAN(*param_2))))))) ||
     ((param_1[1] != param_2[1] || (NAN(param_1[1]) || NAN(param_2[1]))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(param_2[2] == param_1[2]) & 1;
  }
  return bVar1;
}



// FUNCTION 149639e7a FUN_149639e7a body=38 status=ok
// SIG undefined FUN_149639e7a(void)

undefined8 FUN_149639e7a(undefined8 param_1,int param_2)

{
  FUN_145ab9f74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639ea0 FUN_149639ea0 body=38 status=ok
// SIG undefined FUN_149639ea0(void)

undefined8 FUN_149639ea0(undefined8 param_1,int param_2)

{
  FUN_145ab9e22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149639ec6 FUN_149639ec6 body=94 status=ok
// SIG undefined FUN_149639ec6(void)

void FUN_149639ec6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e(param_2 * 4,4);
  uVar2 = 0x7fffffffffffffff;
  if (param_2 <= (longlong)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2;
  }
  if (uVar2 != 0) {
    FUN_140d2d5e4(param_1,0,uVar2,4,4);
  }
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 149639f24 FUN_149639f24 body=290 status=ok
// SIG undefined FUN_149639f24(void)

longlong * FUN_149639f24(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963a048 FUN_14963a048 body=52 status=ok
// SIG undefined FUN_14963a048(void)

undefined8 * FUN_14963a048(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd8c320;
  FUN_1496270fa(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14963a0f4 FUN_14963a0f4 body=59 status=ok
// SIG undefined FUN_14963a0f4(void)

undefined8 FUN_14963a0f4(longlong *param_1)

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



// FUNCTION 14963a196 FUN_14963a196 body=210 status=ok
// SIG undefined FUN_14963a196(void)

void FUN_14963a196(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60 [9];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = param_2[6];
  *(undefined8 *)(param_1 + 0x48) = param_2[8];
  *(undefined8 *)(param_1 + 0x50) = param_2[9];
  *(undefined8 *)(param_1 + 0x58) = param_2[10];
  *(undefined8 *)(param_1 + 0xa8) = param_2[0xc];
  *(undefined8 *)(param_1 + 0xb0) = param_2[0xd];
  *(undefined8 *)(param_1 + 0xb8) = param_2[0xe];
  FUN_1482e52fc(param_1 + 0x18,local_60);
  puVar2 = local_60;
  puVar3 = (undefined8 *)(param_1 + 0x60);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963a26a FUN_14963a26a body=191 status=ok
// SIG undefined FUN_14963a26a(void)

void FUN_14963a26a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963a418;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963a32a FUN_14963a32a body=237 status=ok
// SIG undefined FUN_14963a32a(void)

void FUN_14963a32a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963a6aa;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963a420 FUN_14963a420 body=650 status=ok
// SIG undefined FUN_14963a420(void)

void FUN_14963a420(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  plVar5 = (longlong *)param_1[3];
  lVar7 = (longlong)param_2;
  uVar4 = *(uint *)(*(longlong *)param_1[1] + lVar7 * 4);
  lVar6 = *(longlong *)(*(longlong *)(*plVar5 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar8 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar6 + uVar8 * 0x18);
  dVar2 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
  dVar13 = (double)plVar5[0xb] * dVar3 + (double)plVar5[9] * dVar1 + (double)plVar5[10] * dVar2 +
           (double)plVar5[0x17];
  dVar14 = (double)plVar5[8] * dVar3 + (double)plVar5[6] * dVar1 + (double)plVar5[7] * dVar2 +
           (double)plVar5[0x16];
  dVar9 = dVar3 * (double)plVar5[5] + dVar1 * (double)plVar5[3] + dVar2 * (double)plVar5[4] +
          (double)plVar5[0x15];
  dVar1 = *(double *)*param_1;
  dVar2 = 1.0 / dVar1;
  dVar10 = dVar13 * dVar2;
  dVar12 = dVar14 * dVar2;
  dVar2 = dVar2 * dVar9;
  dVar3 = dVar10 * dVar10 + dVar2 * dVar2 + dVar12 * dVar12 + 1.0;
  dVar1 = (1.5 / (dVar3 * SQRT(dVar3) * dVar3) + 1.0 / (SQRT(dVar3) * dVar3)) *
          dVar1 * ((double *)*param_1)[3] * 0.13333333333333333;
  dVar11 = (dVar10 * dVar1 + dVar13) - (double)plVar5[0x17];
  dVar14 = (dVar12 * dVar1 + dVar14) - (double)plVar5[0x16];
  dVar13 = (dVar1 * dVar2 + dVar9) - (double)plVar5[0x15];
  dVar1 = (double)plVar5[0x13];
  dVar2 = (double)plVar5[0x12];
  dVar3 = (double)plVar5[0x14];
  dVar9 = (double)plVar5[0x10];
  dVar10 = (double)plVar5[0xf];
  dVar12 = (double)plVar5[0x11];
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar7 * 0x18) =
       dVar11 * (double)plVar5[0xe] + dVar13 * (double)plVar5[0xc] + dVar14 * (double)plVar5[0xd];
  *(double *)(lVar6 + 8 + lVar7 * 0x18) = dVar12 * dVar11 + dVar10 * dVar13 + dVar9 * dVar14;
  *(double *)(lVar6 + 0x10 + lVar7 * 0x18) = dVar3 * dVar11 + dVar2 * dVar13 + dVar1 * dVar14;
  return;
}



// FUNCTION 14963a6b2 FUN_14963a6b2 body=591 status=ok
// SIG undefined FUN_14963a6b2(void)

void FUN_14963a6b2(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963a902(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963a902 FUN_14963a902 body=864 status=ok
// SIG undefined FUN_14963a902(void)

double * FUN_14963a902(double *param_1,double *param_2,double *param_3,double param_4)

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
  
  dVar6 = 1.0 / *param_1;
  dVar1 = param_3[2];
  dVar13 = dVar1 * dVar6;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar14 = dVar6 * dVar3;
  dVar4 = dVar6 * dVar2;
  dVar5 = dVar13 * dVar13 + dVar4 * dVar4 + dVar14 * dVar14 + 1.0;
  dVar11 = *param_1 * param_1[3] * 0.13333333333333333;
  dVar12 = (1.5 / (dVar5 * SQRT(dVar5) * dVar5) + 1.0 / (SQRT(dVar5) * dVar5)) * dVar11;
  dVar13 = dVar13 * dVar12;
  dVar14 = dVar14 * dVar12;
  dVar12 = dVar12 * dVar4;
  dVar7 = param_4 * 0.5;
  dVar4 = (dVar7 * dVar13 + dVar1) * dVar6;
  dVar5 = (dVar7 * dVar14 + dVar3) * dVar6;
  dVar8 = (dVar7 * dVar12 + dVar2) * dVar6;
  dVar7 = dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5 + 1.0;
  dVar7 = (1.5 / (dVar7 * SQRT(dVar7) * dVar7) + 1.0 / (SQRT(dVar7) * dVar7)) * dVar11;
  dVar4 = dVar4 * dVar7;
  dVar5 = dVar5 * dVar7;
  dVar7 = dVar7 * dVar8;
  dVar10 = (((dVar4 + dVar4) - dVar13) * param_4 + dVar1) * dVar6;
  dVar9 = (((dVar5 + dVar5) - dVar14) * param_4 + dVar3) * dVar6;
  dVar6 = (((dVar7 + dVar7) - dVar12) * param_4 + dVar2) * dVar6;
  dVar8 = dVar10 * dVar10 + dVar6 * dVar6 + dVar9 * dVar9 + 1.0;
  dVar11 = (1.5 / (dVar8 * SQRT(dVar8) * dVar8) + 1.0 / (SQRT(dVar8) * dVar8)) * dVar11;
  *param_2 = (dVar7 * 0.6666666666666666 + (dVar11 * dVar6 + dVar12) * 0.16666666666666666) *
             param_4 + dVar2;
  param_2[1] = (dVar5 * 0.6666666666666666 + (dVar9 * dVar11 + dVar14) * 0.16666666666666666) *
               param_4 + dVar3;
  param_2[2] = (dVar4 * 0.6666666666666666 + (dVar10 * dVar11 + dVar13) * 0.16666666666666666) *
               param_4 + dVar1;
  return param_2;
}



// FUNCTION 14963ac62 FUN_14963ac62 body=191 status=ok
// SIG undefined FUN_14963ac62(void)

void FUN_14963ac62(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963ae10;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963ad22 FUN_14963ad22 body=237 status=ok
// SIG undefined FUN_14963ad22(void)

void FUN_14963ad22(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963b3dc;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963ae18 FUN_14963ae18 body=517 status=ok
// SIG undefined FUN_14963ae18(void)

void FUN_14963ae18(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963b01e(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b01e FUN_14963b01e body=241 status=ok
// SIG undefined FUN_14963b01e(void)

double * FUN_14963b01e(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14963b110(param_1,&local_78);
  dVar1 = *(double *)(param_1 + 0x70);
  FUN_14963b274(param_1 + 0x38,&local_90,param_3);
  dVar2 = 1.0 - *(double *)(param_1 + 0x70);
  *param_2 = dVar2 * local_90 + dVar1 * local_78;
  param_2[1] = local_88 * dVar2 + local_70 * dVar1;
  param_2[2] = local_80 * dVar2 + local_68 * dVar1;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b110 FUN_14963b110 body=355 status=ok
// SIG undefined FUN_14963b110(void)

double * FUN_14963b110(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = 1.0 / *param_1;
  dVar3 = param_3[2] * dVar5;
  dVar4 = param_3[1] * dVar5;
  dVar5 = dVar5 * *param_3;
  dVar1 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
  dVar7 = dVar1 + 1.0;
  dVar6 = SQRT(dVar7) * dVar7;
  dVar2 = dVar6 * dVar6 * dVar6 * dVar7;
  dVar7 = ((param_1[2] * -2.0 * dVar7 + dVar1 * -6.0 + 3.0) * 105.0) / (dVar2 + dVar2);
  dVar1 = param_1[4];
  dVar6 = param_1[5];
  dVar8 = (dVar6 * dVar3 + param_1[3] * dVar5 + dVar4 * dVar1) * ((param_1[2] * 945.0) / dVar2);
  dVar2 = param_1[6];
  *param_2 = (dVar8 * dVar5 + dVar7 * param_1[3]) * dVar2;
  param_2[1] = (dVar4 * dVar8 + dVar1 * dVar7) * dVar2;
  param_2[2] = (dVar3 * dVar8 + dVar6 * dVar7) * dVar2;
  return param_2;
}



// FUNCTION 14963b274 FUN_14963b274 body=360 status=ok
// SIG undefined FUN_14963b274(void)

double * FUN_14963b274(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = 1.0 / *param_1;
  dVar3 = param_3[2] * dVar5;
  dVar4 = param_3[1] * dVar5;
  dVar5 = dVar5 * *param_3;
  dVar6 = dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4;
  dVar2 = dVar6 + 1.0;
  dVar7 = dVar2 * SQRT(dVar2);
  dVar7 = SQRT(dVar2) * dVar7 * dVar7;
  dVar8 = (15.0 - dVar2 * param_1[2] * (dVar6 * 4.0 + 10.0)) / (dVar7 + dVar7);
  dVar2 = param_1[4];
  dVar1 = param_1[5];
  dVar6 = (dVar1 * dVar3 + param_1[3] * dVar5 + dVar4 * dVar2) *
          (((dVar6 + dVar6 + 7.0) * param_1[2] * 3.0) / dVar7);
  dVar7 = param_1[6];
  *param_2 = (dVar6 * dVar5 + dVar8 * param_1[3]) * dVar7;
  param_2[1] = (dVar4 * dVar6 + dVar2 * dVar8) * dVar7;
  param_2[2] = (dVar3 * dVar6 + dVar1 * dVar8) * dVar7;
  return param_2;
}



// FUNCTION 14963b3e4 FUN_14963b3e4 body=591 status=ok
// SIG undefined FUN_14963b3e4(void)

void FUN_14963b3e4(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963b634(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b634 FUN_14963b634 body=453 status=ok
// SIG undefined FUN_14963b634(void)

double * FUN_14963b634(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14963b01e(param_1,&local_68);
  dVar2 = param_4 * 0.5;
  local_88 = local_58 * dVar2 + param_3[2];
  local_90 = local_60 * dVar2 + param_3[1];
  local_98 = dVar2 * local_68 + *param_3;
  FUN_14963b01e(param_1,&local_80);
  local_a0 = ((local_70 + local_70) - local_58) * param_4 + param_3[2];
  local_a8 = ((local_78 + local_78) - local_60) * param_4 + param_3[1];
  local_b0 = ((local_80 + local_80) - local_68) * param_4 + *param_3;
  FUN_14963b01e(param_1,&local_98);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_80 * 0.6666666666666666 + (local_68 + local_98) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_78 * 0.6666666666666666 + (local_60 + local_90) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_70 * 0.6666666666666666 + (local_58 + local_88) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b7fa FUN_14963b7fa body=191 status=ok
// SIG undefined FUN_14963b7fa(void)

void FUN_14963b7fa(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963b9a8;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b8ba FUN_14963b8ba body=237 status=ok
// SIG undefined FUN_14963b8ba(void)

void FUN_14963b8ba(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963c1ee;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963b9b0 FUN_14963b9b0 body=517 status=ok
// SIG undefined FUN_14963b9b0(void)

void FUN_14963b9b0(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963bbb6(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963bbb6 FUN_14963bbb6 body=241 status=ok
// SIG undefined FUN_14963bbb6(void)

double * FUN_14963bbb6(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14963bca8(param_1,&local_78);
  dVar1 = *(double *)(param_1 + 0x70);
  FUN_14963bf96(param_1 + 0x38,&local_90,param_3);
  dVar2 = 1.0 - *(double *)(param_1 + 0x70);
  *param_2 = dVar2 * local_90 + dVar1 * local_78;
  param_2[1] = local_88 * dVar2 + local_70 * dVar1;
  param_2[2] = local_80 * dVar2 + local_68 * dVar1;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963bca8 FUN_14963bca8 body=750 status=ok
// SIG undefined FUN_14963bca8(void)

void FUN_14963bca8(double *param_1,double *param_2,double *param_3)

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
  
  dVar7 = 1.0 / *param_1;
  dVar5 = param_3[2] * dVar7;
  dVar6 = param_3[1] * dVar7;
  dVar7 = dVar7 * *param_3;
  dVar10 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
  dVar9 = SQRT(dVar10);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (dVar9 < 5.0) {
    dVar1 = dVar10 + 1.0;
    dVar2 = dVar1 * SQRT(dVar1);
    dVar3 = dVar1 * dVar2;
    dVar4 = dVar3 * dVar3;
    dVar8 = dVar1 * dVar3 * dVar1;
    dVar3 = param_1[2];
    dVar4 = ((dVar9 * 128.0 * dVar4 -
             ((((dVar10 * 128.0 + 448.0) * dVar10 + 560.0) * dVar10 + 280.0) * dVar10 + 35.0) *
             dVar2) * (dVar3 + dVar3) +
            dVar9 * -512.0 * dVar4 +
            (((((dVar10 * 512.0 + 2304.0) * dVar10 + 4032.0) * dVar10 + 3360.0) * dVar10 + 1260.0) *
             dVar10 + 105.0) * SQRT(dVar1)) * (9.0 / dVar4);
    dVar1 = param_1[4];
    dVar2 = param_1[5];
    dVar10 = (dVar2 * dVar5 + param_1[3] * dVar7 + dVar6 * dVar1) *
             (dVar8 * 128.0 -
             ((((dVar10 * 128.0 + 576.0) * dVar10 + 1008.0) * dVar10 + 840.0) * dVar10 + 315.0) *
             dVar9) * (dVar3 / (dVar9 * dVar8)) * 18.0;
    dVar9 = param_1[6];
    *param_2 = (dVar10 * dVar7 + dVar4 * param_1[3]) * dVar9;
    param_2[1] = (dVar6 * dVar10 + dVar1 * dVar4) * dVar9;
    param_2[2] = (dVar5 * dVar10 + dVar2 * dVar4) * dVar9;
  }
  return;
}



// FUNCTION 14963bf96 FUN_14963bf96 body=600 status=ok
// SIG undefined FUN_14963bf96(void)

double * FUN_14963bf96(double *param_1,double *param_2,double *param_3)

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
  
  dVar8 = 1.0 / *param_1;
  dVar6 = param_3[2] * dVar8;
  dVar7 = param_3[1] * dVar8;
  dVar8 = dVar8 * *param_3;
  dVar5 = dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7;
  dVar11 = SQRT(dVar5);
  dVar4 = dVar5 * dVar5;
  dVar12 = dVar5 + 1.0;
  dVar3 = SQRT(dVar12);
  dVar12 = dVar12 * dVar3 * dVar12;
  dVar1 = param_1[2];
  dVar9 = (dVar4 * dVar11 - dVar12) * (1.0 - dVar1) * 48.0 * dVar11 +
          (1.0 - dVar1) * 120.0 * dVar4 + (dVar1 * -88.0 + 90.0) * dVar5 + dVar1 * -10.0 + 15.0;
  dVar10 = (dVar9 + dVar9) / dVar12;
  dVar9 = param_1[4];
  dVar2 = param_1[5];
  dVar3 = (dVar2 * dVar6 + param_1[3] * dVar8 + dVar7 * dVar9) *
          (dVar11 * -7.0 + dVar3 * 4.0 +
          (dVar3 - dVar11) * dVar4 * 4.0 + (dVar11 * -5.0 + dVar3 * 4.0) * (dVar5 + dVar5)) *
          (dVar1 / (dVar12 * dVar11)) * -12.0;
  dVar1 = param_1[6];
  *param_2 = (dVar3 * dVar8 + dVar10 * param_1[3]) * dVar1;
  param_2[1] = (dVar7 * dVar3 + dVar9 * dVar10) * dVar1;
  param_2[2] = (dVar6 * dVar3 + dVar2 * dVar10) * dVar1;
  return param_2;
}



// FUNCTION 14963c1f6 FUN_14963c1f6 body=591 status=ok
// SIG undefined FUN_14963c1f6(void)

void FUN_14963c1f6(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963c446(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963c446 FUN_14963c446 body=453 status=ok
// SIG undefined FUN_14963c446(void)

double * FUN_14963c446(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14963bbb6(param_1,&local_68);
  dVar2 = param_4 * 0.5;
  local_88 = local_58 * dVar2 + param_3[2];
  local_90 = local_60 * dVar2 + param_3[1];
  local_98 = dVar2 * local_68 + *param_3;
  FUN_14963bbb6(param_1,&local_80);
  local_a0 = ((local_70 + local_70) - local_58) * param_4 + param_3[2];
  local_a8 = ((local_78 + local_78) - local_60) * param_4 + param_3[1];
  local_b0 = ((local_80 + local_80) - local_68) * param_4 + *param_3;
  FUN_14963bbb6(param_1,&local_98);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_80 * 0.6666666666666666 + (local_68 + local_98) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_78 * 0.6666666666666666 + (local_60 + local_90) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_70 * 0.6666666666666666 + (local_58 + local_88) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963c60c FUN_14963c60c body=191 status=ok
// SIG undefined FUN_14963c60c(void)

void FUN_14963c60c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963c7ba;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963c6cc FUN_14963c6cc body=237 status=ok
// SIG undefined FUN_14963c6cc(void)

void FUN_14963c6cc(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963c9c8;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963c7c2 FUN_14963c7c2 body=517 status=ok
// SIG undefined FUN_14963c7c2(void)

void FUN_14963c7c2(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963b274(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963c9d0 FUN_14963c9d0 body=591 status=ok
// SIG undefined FUN_14963c9d0(void)

void FUN_14963c9d0(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963cc20(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963cc20 FUN_14963cc20 body=453 status=ok
// SIG undefined FUN_14963cc20(void)

double * FUN_14963cc20(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14963b274(param_1,&local_68);
  dVar2 = param_4 * 0.5;
  local_88 = local_58 * dVar2 + param_3[2];
  local_90 = local_60 * dVar2 + param_3[1];
  local_98 = dVar2 * local_68 + *param_3;
  FUN_14963b274(param_1,&local_80);
  local_a0 = ((local_70 + local_70) - local_58) * param_4 + param_3[2];
  local_a8 = ((local_78 + local_78) - local_60) * param_4 + param_3[1];
  local_b0 = ((local_80 + local_80) - local_68) * param_4 + *param_3;
  FUN_14963b274(param_1,&local_98);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_80 * 0.6666666666666666 + (local_68 + local_98) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_78 * 0.6666666666666666 + (local_60 + local_90) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_70 * 0.6666666666666666 + (local_58 + local_88) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963cde6 FUN_14963cde6 body=191 status=ok
// SIG undefined FUN_14963cde6(void)

void FUN_14963cde6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963cf94;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963cea6 FUN_14963cea6 body=237 status=ok
// SIG undefined FUN_14963cea6(void)

void FUN_14963cea6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963d1a2;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963cf9c FUN_14963cf9c body=517 status=ok
// SIG undefined FUN_14963cf9c(void)

void FUN_14963cf9c(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963b110(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d1aa FUN_14963d1aa body=591 status=ok
// SIG undefined FUN_14963d1aa(void)

void FUN_14963d1aa(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963d3fa(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d3fa FUN_14963d3fa body=453 status=ok
// SIG undefined FUN_14963d3fa(void)

double * FUN_14963d3fa(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14963b110(param_1,&local_68);
  dVar2 = param_4 * 0.5;
  local_88 = local_58 * dVar2 + param_3[2];
  local_90 = local_60 * dVar2 + param_3[1];
  local_98 = dVar2 * local_68 + *param_3;
  FUN_14963b110(param_1,&local_80);
  local_a0 = ((local_70 + local_70) - local_58) * param_4 + param_3[2];
  local_a8 = ((local_78 + local_78) - local_60) * param_4 + param_3[1];
  local_b0 = ((local_80 + local_80) - local_68) * param_4 + *param_3;
  FUN_14963b110(param_1,&local_98);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_80 * 0.6666666666666666 + (local_68 + local_98) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_78 * 0.6666666666666666 + (local_60 + local_90) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_70 * 0.6666666666666666 + (local_58 + local_88) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d5c0 FUN_14963d5c0 body=191 status=ok
// SIG undefined FUN_14963d5c0(void)

void FUN_14963d5c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963d76e;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d680 FUN_14963d680 body=237 status=ok
// SIG undefined FUN_14963d680(void)

void FUN_14963d680(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963daa6;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d776 FUN_14963d776 body=517 status=ok
// SIG undefined FUN_14963d776(void)

void FUN_14963d776(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963d97c(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963d97c FUN_14963d97c body=297 status=ok
// SIG undefined FUN_14963d97c(void)

double * FUN_14963d97c(double *param_1,double *param_2,double *param_3)

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
  
  dVar8 = 1.0 / *param_1;
  dVar7 = param_3[2] * dVar8;
  dVar9 = param_3[1] * dVar8;
  dVar8 = dVar8 * *param_3;
  dVar10 = dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9 + 1.0;
  dVar1 = param_1[10];
  dVar2 = param_1[9];
  dVar3 = param_1[0xb];
  dVar4 = param_1[7];
  dVar5 = param_1[6];
  dVar6 = param_1[8];
  dVar10 = 1.5 / (dVar10 * SQRT(dVar10) * dVar10) + 1.0 / (SQRT(dVar10) * dVar10);
  *param_2 = dVar10 * (dVar7 * param_1[5] + dVar8 * param_1[3] + dVar9 * param_1[4]) * 0.4;
  param_2[1] = (dVar6 * dVar7 + dVar5 * dVar8 + dVar4 * dVar9) * dVar10 * 0.4;
  param_2[2] = (dVar3 * dVar7 + dVar2 * dVar8 + dVar1 * dVar9) * dVar10 * 0.4;
  return param_2;
}



// FUNCTION 14963daae FUN_14963daae body=591 status=ok
// SIG undefined FUN_14963daae(void)

void FUN_14963daae(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963dcfe(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963dcfe FUN_14963dcfe body=453 status=ok
// SIG undefined FUN_14963dcfe(void)

double * FUN_14963dcfe(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14963d97c(param_1,&local_68);
  dVar2 = param_4 * 0.5;
  local_88 = local_58 * dVar2 + param_3[2];
  local_90 = local_60 * dVar2 + param_3[1];
  local_98 = dVar2 * local_68 + *param_3;
  FUN_14963d97c(param_1,&local_80);
  local_a0 = ((local_70 + local_70) - local_58) * param_4 + param_3[2];
  local_a8 = ((local_78 + local_78) - local_60) * param_4 + param_3[1];
  local_b0 = ((local_80 + local_80) - local_68) * param_4 + *param_3;
  FUN_14963d97c(param_1,&local_98);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_80 * 0.6666666666666666 + (local_68 + local_98) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_78 * 0.6666666666666666 + (local_60 + local_90) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_70 * 0.6666666666666666 + (local_58 + local_88) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963dec4 FUN_14963dec4 body=191 status=ok
// SIG undefined FUN_14963dec4(void)

void FUN_14963dec4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963e072;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963df84 FUN_14963df84 body=237 status=ok
// SIG undefined FUN_14963df84(void)

void FUN_14963df84(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963e4a6;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963e07a FUN_14963e07a body=595 status=ok
// SIG undefined FUN_14963e07a(void)

void FUN_14963e07a(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar9 = (longlong *)param_1[3];
  lVar15 = (longlong)param_2;
  uVar8 = *(uint *)(*(longlong *)param_1[1] + lVar15 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
  uVar14 = (ulonglong)(uVar8 & 0x1ff);
  pdVar1 = (double *)(lVar10 + uVar14 * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar11 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18);
  dVar2 = (double)plVar9[0x17];
  dVar12 = (double)plVar9[0xb] * dVar11 + (double)plVar9[9] * dVar5 + (double)plVar9[10] * dVar6 +
           dVar2;
  dVar3 = (double)plVar9[0x15];
  dVar4 = (double)plVar9[0x16];
  dVar13 = (double)plVar9[8] * dVar11 + (double)plVar9[6] * dVar5 + (double)plVar9[7] * dVar6 +
           dVar4;
  dVar11 = dVar11 * (double)plVar9[5] + dVar5 * (double)plVar9[3] + dVar6 * (double)plVar9[4] +
           dVar3;
  local_a8 = dVar11;
  dStack_a0 = dVar13;
  local_98 = dVar12;
  FUN_14963e2ce(*param_1,&local_c0);
  dVar2 = (dVar12 + local_b0) - dVar2;
  dVar4 = (dVar13 + local_b8) - dVar4;
  dVar3 = (dVar11 + local_c0) - dVar3;
  dVar11 = (double)plVar9[0x13];
  dVar12 = (double)plVar9[0x12];
  dVar13 = (double)plVar9[0x14];
  dVar5 = (double)plVar9[0x10];
  dVar6 = (double)plVar9[0xf];
  dVar7 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar15 * 0x18) =
       dVar2 * (double)plVar9[0xe] + dVar3 * (double)plVar9[0xc] + dVar4 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar15 * 0x18) = dVar7 * dVar2 + dVar6 * dVar3 + dVar5 * dVar4;
  *(double *)(lVar10 + 0x10 + lVar15 * 0x18) = dVar13 * dVar2 + dVar12 * dVar3 + dVar11 * dVar4;
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963e2ce FUN_14963e2ce body=472 status=ok
// SIG undefined FUN_14963e2ce(void)

double * FUN_14963e2ce(double *param_1,double *param_2,double *param_3)

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
  
  dVar4 = param_1[2];
  dVar7 = 1.0 / *param_1;
  dVar5 = param_3[2] * dVar7;
  dVar6 = param_3[1] * dVar7;
  dVar7 = dVar7 * *param_3;
  dVar8 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6 + 1.0;
  dVar9 = dVar8 * SQRT(dVar8) * dVar8;
  dVar1 = param_1[0xc] * dVar5 + param_1[10] * dVar7 + param_1[0xb] * dVar6;
  dVar2 = param_1[9] * dVar5 + param_1[7] * dVar7 + param_1[8] * dVar6;
  dVar3 = param_1[6] * dVar5 + param_1[4] * dVar7 + param_1[5] * dVar6;
  dVar8 = -1.5 / dVar9 + (dVar4 + dVar4 + -1.0) / (SQRT(dVar8) * dVar8);
  dVar9 = (dVar4 * -3.0 * (dVar5 * dVar1 + dVar7 * dVar3 + dVar6 * dVar2)) / dVar9;
  dVar4 = *param_1 * param_1[3];
  *param_2 = dVar4 * (dVar9 * dVar7 + dVar8 * dVar3);
  param_2[1] = (dVar6 * dVar9 + dVar2 * dVar8) * dVar4;
  param_2[2] = (dVar5 * dVar9 + dVar1 * dVar8) * dVar4;
  return param_2;
}



// FUNCTION 14963e4ae FUN_14963e4ae body=640 status=ok
// SIG undefined FUN_14963e4ae(void)

void FUN_14963e4ae(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar9 = (longlong *)param_1[5];
  lVar14 = (longlong)param_2;
  uVar8 = *(uint *)(*(longlong *)param_1[1] + lVar14 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
  uVar12 = (ulonglong)(uVar8 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  dVar15 = (double)plVar9[0x17];
  local_88 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar15;
  dVar16 = (double)plVar9[0x16];
  uStack_90 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar16;
  dVar4 = (double)plVar9[0x15];
  local_98 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar4;
  iVar13 = *(int *)(param_1 + 4);
  if (0 < iVar13) {
    dVar2 = (double)iVar13;
    uVar11 = *param_1;
    dVar1 = (double)param_1[3];
    do {
      FUN_14963e730(uVar11,&local_b0,&local_98,(1.0 / dVar2) * dVar1);
      local_88 = local_a0;
      local_98 = (double)CONCAT44(uStack_ac,local_b0);
      uStack_90 = (double)CONCAT44(uStack_a4,uStack_a8);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  dVar15 = local_88 - dVar15;
  dVar16 = uStack_90 - dVar16;
  dVar4 = local_98 - dVar4;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar5 = (double)plVar9[0x10];
  dVar6 = (double)plVar9[0xf];
  dVar7 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar14 * 0x18) =
       dVar15 * (double)plVar9[0xe] + dVar4 * (double)plVar9[0xc] + dVar16 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar14 * 0x18) = dVar7 * dVar15 + dVar6 * dVar4 + dVar5 * dVar16;
  *(double *)(lVar10 + 0x10 + lVar14 * 0x18) = dVar3 * dVar15 + dVar2 * dVar4 + dVar1 * dVar16;
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14963e730 FUN_14963e730 body=644 status=ok
// SIG undefined FUN_14963e730(void)

double * FUN_14963e730(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_158 [40];
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14963e2ce(param_1,&local_e8);
  dVar4 = param_4 * 0.5;
  dVar1 = param_3[2];
  local_108 = dVar4 * local_d8 + dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_110 = dVar4 * local_e0 + dVar3;
  local_118 = dVar4 * local_e8 + dVar2;
  FUN_14963e2ce(param_1,&local_100);
  local_120 = ((local_f0 + local_f0) - local_d8) * param_4 + dVar1;
  local_128 = ((local_f8 + local_f8) - local_e0) * param_4 + dVar3;
  local_130 = ((local_100 + local_100) - local_e8) * param_4 + dVar2;
  FUN_14963e2ce(param_1,&local_118);
  *param_2 = (local_100 * 0.6666666666666666 + (local_e8 + local_118) * 0.16666666666666666) *
             param_4 + dVar2;
  param_2[1] = (local_f8 * 0.6666666666666666 + (local_e0 + local_110) * 0.16666666666666666) *
               param_4 + dVar3;
  param_2[2] = (local_f0 * 0.6666666666666666 + (local_d8 + local_108) * 0.16666666666666666) *
               param_4 + dVar1;
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963e9b6 FUN_14963e9b6 body=191 status=ok
// SIG undefined FUN_14963e9b6(void)

void FUN_14963e9b6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14963eb64;
  local_90 = 0;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963ea76 FUN_14963ea76 body=237 status=ok
// SIG undefined FUN_14963ea76(void)

void FUN_14963ea76(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_14051b394(param_4,uVar1,0);
  local_68 = &local_a0;
  local_88 = param_5;
  local_80 = param_6;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = &LAB_14963ee6a;
  local_b0 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_78 = param_1;
  FUN_1427ae281(L"ParallelFor Task",uVar1,1);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


