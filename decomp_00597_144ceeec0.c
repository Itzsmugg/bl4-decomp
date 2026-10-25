// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ceeec0 FUN_144ceeec0 body=272 status=ok
// SIG undefined FUN_144ceeec0(void)

void FUN_144ceeec0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144cf20e0(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar6 + 4) = uVar2;
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar2) {
    puVar9 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)lVar6 * 0x10);
    puVar7 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    if ((puVar7 != puVar9) && (puVar7 != (undefined8 *)0x0)) {
      uVar4 = puVar9[1];
      *puVar7 = *puVar9;
      puVar7[1] = uVar4;
    }
  }
  lVar6 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar10;
  puVar1 = (uint *)(lVar6 + uVar8 * 8);
  iVar3 = *(int *)(lVar6 + 4 + uVar8 * 8);
  while (-1 < iVar3) {
    lVar6 = lVar6 + ((ulonglong)*puVar1 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar6 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar1 - lVar6 >> 3) + 1U & uVar10;
    puVar1 = (uint *)(lVar6 + uVar8 * 8);
    iVar3 = *(int *)(lVar6 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144ceefd0 FUN_144ceefd0 body=175 status=ok
// SIG undefined FUN_144ceefd0(void)

undefined8 FUN_144ceefd0(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [2];
  
  FUN_144cf1fd0(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar4 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_144d00810(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar2 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_2;
      *(undefined8 *)(puVar2 + 1) = *param_3;
      puVar2[3] = *(undefined4 *)(param_3 + 1);
    }
    *(int *)(param_1 + 1) = iVar4;
    uVar1 = 1;
  }
  else {
    lVar3 = (longlong)local_res8[0] * 0x10 + *param_1;
    *(undefined8 *)(lVar3 + 4) = *param_3;
    *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_3 + 1);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144cef080 FUN_144cef080 body=301 status=ok
// SIG undefined FUN_144cef080(void)

undefined4 * FUN_144cef080(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8 [8];
  undefined4 local_a8 [8];
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  local_148 = param_2[8];
  uStack_144 = param_2[9];
  uStack_140 = param_2[10];
  uStack_13c = param_2[0xb];
  local_138 = param_2[0xc];
  uStack_134 = param_2[0xd];
  uStack_130 = param_2[0xe];
  uStack_12c = param_2[0xf];
  local_128 = param_2[0x10];
  uStack_124 = param_2[0x11];
  uStack_120 = param_2[0x12];
  uStack_11c = param_2[0x13];
  local_118 = param_2[0x14];
  uStack_114 = param_2[0x15];
  uStack_110 = param_2[0x16];
  uStack_10c = param_2[0x17];
  puVar1 = (undefined8 *)FUN_144cf1e70(local_88,&local_148,0x201);
  local_108 = *param_2;
  uStack_104 = param_2[1];
  uStack_100 = param_2[2];
  uStack_fc = param_2[3];
  local_f8 = param_2[4];
  uStack_f4 = param_2[5];
  uStack_f0 = param_2[6];
  uStack_ec = param_2[7];
  local_1c8 = *puVar1;
  uStack_1c0 = puVar1[1];
  local_1b8 = puVar1[2];
  uStack_1b0 = puVar1[3];
  local_1a8 = puVar1[4];
  uStack_1a0 = puVar1[5];
  local_198 = puVar1[6];
  uStack_190 = puVar1[7];
  local_e8 = param_2[0x10];
  uStack_e4 = param_2[0x11];
  uStack_e0 = param_2[0x12];
  uStack_dc = param_2[0x13];
  local_d8 = param_2[0x14];
  uStack_d4 = param_2[0x15];
  uStack_d0 = param_2[0x16];
  uStack_cc = param_2[0x17];
  puVar1 = (undefined8 *)FUN_144cf1e70(local_48,&local_108,0x201);
  local_188 = *puVar1;
  uStack_180 = puVar1[1];
  local_178 = puVar1[2];
  uStack_170 = puVar1[3];
  local_168 = *(undefined4 *)(puVar1 + 4);
  uStack_164 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_160 = *(undefined4 *)(puVar1 + 5);
  uStack_15c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_158 = *(undefined4 *)(puVar1 + 6);
  uStack_154 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_150 = *(undefined4 *)(puVar1 + 7);
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  FUN_144cf8120(&local_1c8,&local_1a8,0xffffffff,local_a8);
  FUN_144cf8120(&local_188,&local_168,0xffffffff,local_c8);
  *param_1 = local_c8[0];
  param_1[1] = local_a8[0];
  return param_1;
}



// FUNCTION 144cef1b0 FUN_144cef1b0 body=3190 status=ok
// SIG undefined FUN_144cef1b0(void)

int * FUN_144cef1b0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,int *param_6,int *param_7,int param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res8;
  undefined4 uStackX_c;
  int *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *in_stack_fffffffffffffa38;
  undefined7 uVar21;
  ulonglong uVar20;
  ulonglong in_stack_fffffffffffffa40;
  undefined8 local_5a8;
  float local_5a0;
  undefined8 local_598;
  float local_590;
  undefined8 local_588;
  float local_580;
  int local_578 [2];
  undefined8 local_570;
  longlong local_568;
  longlong lStack_560;
  int local_558;
  int iStack_554;
  int local_550;
  int iStack_54c;
  float local_548;
  float fStack_544;
  int local_540;
  int local_53c;
  undefined8 local_538;
  float local_530;
  undefined8 local_528;
  undefined4 local_520;
  float local_51c;
  float local_518;
  undefined8 local_510;
  undefined1 local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  int local_498;
  int local_494;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  int local_428;
  int local_424;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  longlong lStack_290;
  longlong local_288;
  longlong lStack_280;
  longlong local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined1 local_188 [328];
  
  iVar11 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0x8000000000000000;
  uStack_4e0 = 0;
  local_4d8 = 0x8000000000000000;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c4 = 0x80000000;
  iVar13 = -1;
  if (*(int *)(param_1 + 0x48) != -1) {
    lVar14 = **(longlong **)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x48);
    do {
      iVar6 = iVar10;
      if ((int)((ulonglong)param_3 >> 0x20) < *(int *)((longlong)iVar6 * 0x40 + 4 + lVar14)) break;
      iVar10 = *(int *)((longlong)iVar6 * 0x40 + 0x3c + lVar14);
      iVar13 = iVar6;
    } while (iVar10 != -1);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_570 = param_3;
  local_4f8 = param_3;
  FUN_144cdd130(*(longlong **)(param_1 + 0x20),param_2,param_1 + 0x48,iVar13,&local_4f8);
  FUN_144ce21f0(&local_4f8);
  lVar14 = **(longlong **)(param_1 + 0x20);
  lVar9 = lVar14 + (longlong)*param_2 * 0x40;
  uStackX_c = CONCAT31(uStackX_c._1_3_,2);
  local_res8 = (int)param_3 * 2;
  iVar13 = local_res8 + -1;
  local_590 = (float)iVar13;
  local_598 = CONCAT44(uStackX_c,iVar13);
  if (local_590 == 0.0) {
    local_590 = 0.0;
  }
  else {
    local_590 = local_590 / 2.0;
  }
  local_res8 = local_res8 + 1;
  uStackX_c = CONCAT31(uStackX_c._1_3_,2);
  local_588 = CONCAT44(uStackX_c,local_res8);
  if ((float)local_res8 == 0.0) {
    local_580 = 0.0;
  }
  else {
    local_580 = (float)local_res8 / 2.0;
  }
  iVar10 = local_res18._4_4_ * 2;
  iVar13 = iVar10 + -1;
  local_530 = (float)iVar13;
  local_res18 = CONCAT44(CONCAT31(local_res18._5_3_,2),iVar13);
  local_538 = local_res18;
  if (local_530 == 0.0) {
    local_530 = 0.0;
  }
  else {
    local_530 = local_530 / 2.0;
  }
  iVar10 = iVar10 + 1;
  local_5a0 = (float)iVar10;
  local_res18._0_5_ = CONCAT14(2,iVar10);
  local_5a8 = (int *)local_res18;
  if (local_5a0 == 0.0) {
    local_5a0 = 0.0;
  }
  else {
    local_5a0 = local_5a0 / (float)((uint)((ulonglong)local_res18 >> 0x20) & 0xff);
  }
  iVar13 = *(int *)(lVar9 + 0x38);
  if (iVar13 != -1) {
    local_568 = *(longlong *)(lVar14 + ((longlong)iVar13 * 8 + 1) * 8);
    lStack_560 = local_568 + (longlong)*(int *)(lVar14 + ((longlong)iVar13 * 8 + 2) * 8) * 4;
    in_stack_fffffffffffffa38 = &local_588;
    FUN_144cf3be0(param_1,lVar9,param_4,&local_568,&local_538,&local_598,in_stack_fffffffffffffa38,
                  in_stack_fffffffffffffa40 & 0xffffffffffffff00);
  }
  lVar14 = **(longlong **)(param_1 + 0x20);
  iVar10 = *(int *)((longlong)*param_2 * 0x40 + 0x3c + lVar14);
  if (iVar10 != -1) {
    local_568 = *(longlong *)((longlong)iVar10 * 0x40 + 0x18 + lVar14);
    lStack_560 = local_568 + (longlong)*(int *)((longlong)iVar10 * 0x40 + 0x20 + lVar14) * 4;
    in_stack_fffffffffffffa38 = &local_588;
    FUN_144cf3be0(param_1,lVar9,param_4,&local_568,&local_5a8,&local_598,in_stack_fffffffffffffa38,1
                 );
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar14 = 0;
    do {
      lVar1 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x38));
      if (lVar1 != 0) {
        in_stack_fffffffffffffa38 = &local_598;
        FUN_144cf4270(param_1,lVar1 + 0x38,lVar9,lVar1 + 0x6668,&local_5a8,&local_538,
                      in_stack_fffffffffffffa38,&local_588,iVar13,iVar10);
      }
      iVar11 = iVar11 + 1;
      lVar14 = lVar14 + 8;
      param_3 = local_570;
    } while (iVar11 < *(int *)(param_1 + 0x40));
  }
  local_5a8 = (int *)(param_1 + 0x40);
  local_568 = *(longlong *)CONCAT44(param_5._4_4_,(int)param_5);
  lStack_560 = ((longlong *)CONCAT44(param_5._4_4_,(int)param_5))[1];
  FUN_144ce1b60(lVar9,**(undefined8 **)(param_1 + 0x28),&local_568,1);
  piVar15 = *(int **)(lVar9 + 0x28);
  iVar11 = (int)param_3 * 2;
  iVar13 = iVar11 + -1;
  iVar10 = (int)((ulonglong)param_3 >> 0x20) * 2;
  local_res18 = CONCAT44(iVar10 + 1,iVar13);
  uVar3 = local_res18;
  piVar12 = piVar15 + (longlong)*(int *)(lVar9 + 0x30) * 4;
  iVar11 = iVar11 + 1;
  local_570 = CONCAT44(iVar10 + 1,iVar11);
  local_510 = local_570;
  local_598 = local_res18;
  local_res18 = CONCAT44(iVar10 + -1,iVar13);
  uVar4 = local_res18;
  local_res18 = CONCAT44(iVar10 + -1,iVar11);
  local_568 = local_res18;
  local_590 = (float)CONCAT31(local_590._1_3_,2);
  local_508 = 2;
  local_588 = uVar4;
  local_580 = (float)CONCAT31(local_580._1_3_,2);
  fVar17 = local_580;
  lStack_560 = CONCAT71(lStack_560._1_7_,2);
  if (piVar15 != piVar12) {
    fVar19 = (float)(iVar10 + -1);
    fVar18 = (float)(iVar10 + 1);
    do {
      FUN_144cb67e0(**(longlong **)(param_1 + 0x28),
                    (longlong)*piVar15 * 0x60 +
                    *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28),&local_418,&local_398);
      local_4f8 = local_418;
      uStack_4f0 = uStack_410;
      local_4e8 = local_408;
      uStack_4e0 = uStack_400;
      local_4d8 = local_3f8;
      uStack_4d0 = uStack_3f0;
      local_4c8 = local_3e8;
      uStack_4c4 = uStack_3e4;
      uStack_4c0 = uStack_3e0;
      uStack_4bc = uStack_3dc;
      local_4b8 = local_3b8;
      uStack_4b0 = uStack_3b0;
      local_4a8 = local_3a8;
      uStack_4a0 = uStack_3a0;
      fVar16 = (float)FUN_144cc3f10(&local_4b8,&local_res18);
      lVar14 = FUN_147e59322(&local_4f8,&param_5);
      iVar11 = (int)local_res18;
      if ((float)lVar14 == 0.0) {
        local_558 = 0;
      }
      else {
        local_558 = (int)param_5 * 0x800000 + (int)local_res18 * -0x800000 +
                    (int)((float)lVar14 / fVar16);
      }
      lVar14 = FUN_147e59322(&local_4d8,&local_res8);
      if ((float)lVar14 == 0.0) {
        iStack_554 = 0;
      }
      else {
        iStack_554 = (local_res8 - iVar11) * 0x800000 + (int)((float)lVar14 / fVar16);
      }
      local_498 = local_558;
      local_494 = iStack_554;
      local_478 = local_388;
      uStack_470 = uStack_380;
      local_488 = local_398;
      uStack_480 = uStack_390;
      local_468 = local_378;
      uStack_460 = uStack_370;
      local_458 = local_368;
      uStack_454 = uStack_364;
      uStack_450 = uStack_360;
      uStack_44c = uStack_35c;
      local_448 = local_338;
      uStack_440 = uStack_330;
      local_438 = local_328;
      uStack_430 = uStack_320;
      fVar16 = (float)FUN_144cc3f10(&local_448,&local_540);
      lVar14 = FUN_147e59322(&local_488,&local_53c);
      iVar11 = local_540;
      if ((float)lVar14 == 0.0) {
        local_550 = 0;
      }
      else {
        local_550 = local_53c * 0x800000 + local_540 * -0x800000 + (int)((float)lVar14 / fVar16);
      }
      lVar14 = FUN_147e59322(&local_468,local_578);
      if ((float)lVar14 == 0.0) {
        iStack_54c = 0;
      }
      else {
        iStack_54c = (local_578[0] - iVar11) * 0x800000 + (int)((float)lVar14 / fVar16);
      }
      local_428 = local_550;
      local_424 = iStack_54c;
      plVar7 = (longlong *)FUN_144ceaef0(local_188,&local_488,&local_4f8);
      local_318 = *plVar7;
      uStack_310 = plVar7[1];
      local_308 = plVar7[2];
      uStack_300 = plVar7[3];
      local_2f8 = plVar7[4];
      lStack_2f0 = plVar7[5];
      local_2e8 = plVar7[6];
      lStack_2e0 = plVar7[7];
      local_2d8 = plVar7[8];
      lStack_2d0 = plVar7[9];
      local_2c8 = plVar7[10];
      lStack_2c0 = plVar7[0xb];
      local_2b8 = plVar7[0xc];
      lStack_2b0 = plVar7[0xd];
      local_2a8 = plVar7[0xe];
      lStack_2a0 = plVar7[0xf];
      local_298 = plVar7[0x10];
      lStack_290 = plVar7[0x11];
      local_288 = plVar7[0x12];
      lStack_280 = plVar7[0x13];
      local_278 = plVar7[0x14];
      FUN_144cf7830(&local_318,&lStack_2e0,&local_2a8,&local_538);
      local_520 = local_590;
      local_270 = (undefined4)local_538;
      local_26c = (undefined4)((ulonglong)local_538 >> 0x20);
      local_528 = uVar3;
      if ((float)iVar13 == 0.0) {
        local_548 = 0.0;
      }
      else {
        local_548 = (float)iVar13 / 2.0;
      }
      if (fVar18 == 0.0) {
        fStack_544 = 0.0;
      }
      else {
        fStack_544 = fVar18 / 2.0;
      }
      local_51c = local_548;
      local_518 = fStack_544;
      cVar5 = FUN_144ceb870(&local_4f8,&local_318,&local_528);
      if (cVar5 != '\0') {
        iVar11 = *(int *)(lVar9 + 0x10) + 1;
        if ((int)(*(uint *)(lVar9 + 0x14) & 0x7fffffff) < iVar11) {
          FUN_1401f86b2(lVar9 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        piVar8 = (int *)(*(longlong *)(lVar9 + 8) + (longlong)*(int *)(lVar9 + 0x10) * 4);
        if (piVar8 != (int *)0x0) {
          *piVar8 = *piVar15;
        }
        *(int *)(lVar9 + 0x10) = iVar11;
      }
      local_520 = fVar17;
      local_528 = uVar4;
      if ((float)iVar13 == 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)iVar13 / 2.0;
      }
      if (fVar19 == 0.0) {
        local_5a8 = (int *)(ulonglong)(uint)fVar16;
      }
      else {
        local_5a8 = (int *)CONCAT44(fVar19 / 2.0,fVar16);
      }
      local_51c = SUB84(local_5a8,0);
      local_518 = (float)((ulonglong)local_5a8 >> 0x20);
      cVar5 = FUN_144ceb870(&local_4f8,&local_318,&local_528);
      if (cVar5 != '\0') {
        iVar11 = *(int *)(lVar9 + 0x20) + 1;
        if ((int)(*(uint *)(lVar9 + 0x24) & 0x7fffffff) < iVar11) {
          FUN_1401f86b2(lVar9 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        piVar8 = (int *)(*(longlong *)(lVar9 + 0x18) + (longlong)*(int *)(lVar9 + 0x20) * 4);
        if (piVar8 != (int *)0x0) {
          *piVar8 = *piVar15;
        }
        *(int *)(lVar9 + 0x20) = iVar11;
      }
      piVar15 = piVar15 + 4;
    } while (piVar15 != piVar12);
    local_5a8 = (int *)(param_1 + 0x40);
    iVar11 = (int)local_570;
  }
  piVar12 = param_7;
  piVar15 = param_6;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar14 = (longlong)param_8;
    lVar9 = 0;
    piVar8 = local_5a8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      lVar2 = *(longlong *)(lVar1 + lVar9 * 8);
      if (lVar2 != 0) {
        uVar21 = (undefined7)((ulonglong)in_stack_fffffffffffffa38 >> 8);
        if (lVar9 == lVar14) {
          uVar20 = CONCAT71(uVar21,1);
          FUN_144cf51b0(lVar2,&param_5,local_res20,&local_598,&local_510,*local_res10,uVar20,
                        0xffffffff,*piVar15);
          in_stack_fffffffffffffa38 = (undefined8 *)(uVar20 & 0xffffffffffffff00);
          FUN_144cf51b0(*(undefined8 *)(lVar1 + lVar9 * 8),&local_res18,local_res20,&local_588,
                        &local_568,*local_res10,in_stack_fffffffffffffa38,*piVar12,0xffffffff);
          if ((*piVar15 != -1) &&
             (*(int *)((longlong)*piVar15 * 0x200 + 500 + **(longlong **)(param_1 + 0x18)) ==
              (int)local_res18)) {
            *piVar15 = (int)local_res18;
          }
          if ((*piVar12 != -1) &&
             (*(int *)((longlong)*piVar12 * 0x200 + 0x1f0 + **(longlong **)(param_1 + 0x18)) ==
              (int)param_5)) {
            *piVar12 = (int)param_5;
          }
        }
        else {
          uVar20 = CONCAT71(uVar21,1);
          FUN_144cec260(lVar2,&local_res8,lVar2 + 0x6668,&local_598,&local_510,*local_res10,uVar20,
                        0xffffffff,0xffffffff);
          lVar14 = *(longlong *)(lVar1 + lVar9 * 8);
          in_stack_fffffffffffffa38 = (undefined8 *)(uVar20 & 0xffffffffffffff00);
          FUN_144cec260(lVar14,local_578,lVar14 + 0x6668,&local_588,&local_568,*local_res10,
                        in_stack_fffffffffffffa38,local_res8,0xffffffff);
        }
        local_19c = 0xffffffffffffffff;
        local_194 = 0xffffffff;
        if ((float)iVar11 == 0.0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)iVar11 / 2.0;
        }
        local_318 = (ulonglong)(uint)fVar17 << 0x20;
        local_1a0 = 1;
        local_308 = CONCAT44(local_308._4_4_,1);
        uStack_310 = CONCAT44(ABS(fVar17) * 1.1920929e-07,0x800000);
        uStack_300 = CONCAT44(0xfc000001,iVar11);
        local_2f8 = CONCAT71(local_2f8._1_7_,2);
        FUN_144ce0d30(*(longlong *)(lVar1 + lVar9 * 8) + 0x40,&local_318);
        lVar14 = (longlong)param_8;
        piVar8 = local_5a8;
      }
      iVar13 = iVar13 + 1;
      lVar9 = lVar9 + 1;
    } while (iVar13 < *piVar8);
  }
  return local_res10;
}



// FUNCTION 144cefe30 FUN_144cefe30 body=2901 status=ok
// SIG undefined FUN_144cefe30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_144cefe30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,uint param_6)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  int *piVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  undefined4 local_6898;
  undefined4 uStack_6894;
  undefined4 uStack_6890;
  undefined4 uStack_688c;
  longlong local_6888;
  undefined1 local_6878 [512];
  undefined4 local_6678;
  undefined4 uStack_6674;
  undefined4 uStack_6670;
  undefined4 uStack_666c;
  undefined1 *local_6668;
  undefined4 local_6660;
  uint local_665c;
  undefined1 local_6658 [26112];
  int local_58;
  undefined4 local_54;
  undefined8 uStack_48;
  
  uStack_48 = 0x144cefe62;
  FUN_144ce6e40(param_1 + 8,param_2,*(undefined4 *)param_4,param_1);
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[8] + (longlong)(int)*param_4 * 8) + 0x38) +
           (longlong)(int)((ulonglong)*param_4 >> 0x20) * 8);
  lVar21 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1[8] + (longlong)(int)*param_2 * 8) + 0x38) +
            (longlong)(int)((ulonglong)*param_2 >> 0x20) * 8);
  if (*(char *)(lVar8 + 0x66c8) != '\0') {
    uVar13 = *(undefined8 *)(lVar8 + 0x6670);
    *(undefined8 *)(lVar21 + 0x6668) = *(undefined8 *)(lVar8 + 0x6668);
    *(undefined8 *)(lVar21 + 0x6670) = uVar13;
    uVar13 = *(undefined8 *)(lVar8 + 0x6680);
    *(undefined8 *)(lVar21 + 0x6678) = *(undefined8 *)(lVar8 + 0x6678);
    *(undefined8 *)(lVar21 + 0x6680) = uVar13;
    uVar13 = *(undefined8 *)(lVar8 + 0x6690);
    *(undefined8 *)(lVar21 + 0x6688) = *(undefined8 *)(lVar8 + 0x6688);
    *(undefined8 *)(lVar21 + 0x6690) = uVar13;
    uVar13 = *(undefined8 *)(lVar8 + 0x66a0);
    *(undefined8 *)(lVar21 + 0x6698) = *(undefined8 *)(lVar8 + 0x6698);
    *(undefined8 *)(lVar21 + 0x66a0) = uVar13;
    uVar19 = *(undefined4 *)(lVar8 + 0x66ac);
    uVar11 = *(undefined4 *)(lVar8 + 0x66b0);
    uVar12 = *(undefined4 *)(lVar8 + 0x66b4);
    *(undefined4 *)(lVar21 + 0x66a8) = *(undefined4 *)(lVar8 + 0x66a8);
    *(undefined4 *)(lVar21 + 0x66ac) = uVar19;
    *(undefined4 *)(lVar21 + 0x66b0) = uVar11;
    *(undefined4 *)(lVar21 + 0x66b4) = uVar12;
    uVar13 = *(undefined8 *)(lVar8 + 0x66b8);
    uVar14 = *(undefined8 *)(lVar8 + 0x66c0);
    *(undefined1 *)(lVar21 + 0x66c8) = 1;
    *(undefined8 *)(lVar21 + 0x66b8) = uVar13;
    *(undefined8 *)(lVar21 + 0x66c0) = uVar14;
  }
  uVar19 = *(undefined4 *)(lVar8 + 0x3c);
  iVar15 = *(int *)((longlong)(int)param_6 * 0x200 + 0x1f0 + *param_1);
  if (iVar15 == -1) {
    *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
  }
  else {
    *(int *)(lVar8 + 0x3c) = iVar15;
    *(undefined4 *)((longlong)iVar15 * 0x200 + 500 + *param_1) = 0xffffffff;
  }
  *(uint *)(lVar21 + 0x38) = param_6;
  uVar18 = 0xffffffff;
  *(undefined4 *)((longlong)(int)param_6 * 0x200 + 0x1f0 + *param_1) = 0xffffffff;
  *(undefined4 *)(lVar21 + 0x3c) = uVar19;
  local_6888 = lVar21;
  if ((*(int *)(lVar8 + 0x3c) != -1) &&
     (lVar25 = (longlong)*(int *)(lVar8 + 0x3c) * 0x200 + **(longlong **)(lVar8 + 0x18),
     *(int *)(lVar25 + 0x1e8) != -1)) {
    FUN_144ce0ec0(lVar8 + 0x40);
    *(undefined4 *)(lVar25 + 0x1e8) = 0xffffffff;
  }
  local_6678 = *(undefined4 *)(lVar8 + 0x40);
  uStack_6674 = *(undefined4 *)(lVar8 + 0x44);
  uStack_6670 = *(undefined4 *)(lVar8 + 0x48);
  uStack_666c = *(undefined4 *)(lVar8 + 0x4c);
  puVar1 = (undefined4 *)(lVar8 + 0x40);
  local_665c = 0x80000040;
  plVar2 = (longlong *)(lVar8 + 0x50);
  local_6668 = local_6658;
  local_6660 = 0;
  FUN_144ce10b0(&local_6668,plVar2);
  local_58 = *(int *)(lVar8 + 0x6660);
  local_54 = *(undefined4 *)(lVar8 + 0x6664);
  *(undefined4 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x6660) = 0xffffffffffffffff;
  while (local_58 != -1) {
    piVar26 = (int *)(local_6668 + (longlong)local_58 * 0x198);
    iVar15 = *piVar26;
    if (iVar15 == 0) {
      iVar15 = *(int *)(lVar8 + 0x58) + 1;
      if ((int)(*(uint *)(lVar8 + 0x5c) & 0x7fffffff) < iVar15) {
        FUN_144cfd3c0(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar15);
      }
      iVar16 = *(int *)(lVar8 + 0x58);
      *(int *)(lVar8 + 0x58) = iVar15;
      puVar20 = (undefined8 *)((longlong)iVar16 * 0x198 + *plVar2);
      if (puVar20 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar20 + 0x17c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)puVar20 + 0x184) = 0xffffffff;
      }
      lVar25 = 3;
      puVar23 = puVar20;
      do {
        puVar22 = puVar23 + 0x10;
        uVar13 = *(undefined8 *)(piVar26 + 2);
        piVar3 = piVar26 + 0x20;
        *puVar23 = *(undefined8 *)piVar26;
        puVar23[1] = uVar13;
        uVar13 = *(undefined8 *)(piVar26 + 6);
        puVar23[2] = *(undefined8 *)(piVar26 + 4);
        puVar23[3] = uVar13;
        uVar13 = *(undefined8 *)(piVar26 + 10);
        puVar23[4] = *(undefined8 *)(piVar26 + 8);
        puVar23[5] = uVar13;
        uVar13 = *(undefined8 *)(piVar26 + 0xe);
        puVar23[6] = *(undefined8 *)(piVar26 + 0xc);
        puVar23[7] = uVar13;
        uVar13 = *(undefined8 *)(piVar26 + 0x12);
        puVar23[8] = *(undefined8 *)(piVar26 + 0x10);
        puVar23[9] = uVar13;
        uVar13 = *(undefined8 *)(piVar26 + 0x16);
        puVar23[10] = *(undefined8 *)(piVar26 + 0x14);
        puVar23[0xb] = uVar13;
        iVar15 = piVar26[0x19];
        iVar16 = piVar26[0x1a];
        iVar7 = piVar26[0x1b];
        *(int *)(puVar23 + 0xc) = piVar26[0x18];
        *(int *)((longlong)puVar23 + 100) = iVar15;
        *(int *)(puVar23 + 0xd) = iVar16;
        *(int *)((longlong)puVar23 + 0x6c) = iVar7;
        iVar15 = piVar26[0x1d];
        iVar16 = piVar26[0x1e];
        iVar7 = piVar26[0x1f];
        *(int *)(puVar23 + 0xe) = piVar26[0x1c];
        *(int *)((longlong)puVar23 + 0x74) = iVar15;
        *(int *)(puVar23 + 0xf) = iVar16;
        *(int *)((longlong)puVar23 + 0x7c) = iVar7;
        lVar25 = lVar25 + -1;
        puVar23 = puVar22;
        piVar26 = piVar3;
      } while (lVar25 != 0);
      *puVar22 = *(undefined8 *)piVar3;
      *(undefined4 *)(puVar20 + 0x31) = 0xffffffff;
      *(undefined4 *)((longlong)puVar20 + 0x18c) = *(undefined4 *)(lVar8 + 0x6660);
      *(undefined4 *)(puVar20 + 0x32) = 0xffffffff;
      *(undefined1 *)((longlong)puVar20 + 0x194) = 0;
      *(int *)(lVar8 + 0x6660) = *(int *)(lVar8 + 0x58) + -1;
      iVar15 = *(int *)(lVar21 + 0x58) + 1;
      puVar20 = (undefined8 *)(local_6668 + (longlong)local_58 * 0x198);
      if ((int)(*(uint *)(lVar21 + 0x5c) & 0x7fffffff) < iVar15) {
        FUN_144cfd3c0(lVar21 + 0x50,&PTR_vftable_14c6e47c0,(longlong)iVar15);
      }
      iVar16 = *(int *)(lVar21 + 0x58);
      *(int *)(lVar21 + 0x58) = iVar15;
      puVar23 = (undefined8 *)((longlong)iVar16 * 0x198 + *(longlong *)(lVar21 + 0x50));
      if (puVar23 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar23 + 0x17c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)puVar23 + 0x184) = 0xffffffff;
      }
      lVar25 = 3;
      puVar22 = puVar23;
      do {
        puVar4 = puVar22 + 0x10;
        uVar13 = puVar20[1];
        puVar5 = puVar20 + 0x10;
        *puVar22 = *puVar20;
        puVar22[1] = uVar13;
        uVar13 = puVar20[3];
        puVar22[2] = puVar20[2];
        puVar22[3] = uVar13;
        uVar13 = puVar20[5];
        puVar22[4] = puVar20[4];
        puVar22[5] = uVar13;
        uVar13 = puVar20[7];
        puVar22[6] = puVar20[6];
        puVar22[7] = uVar13;
        uVar13 = puVar20[9];
        puVar22[8] = puVar20[8];
        puVar22[9] = uVar13;
        uVar13 = puVar20[0xb];
        puVar22[10] = puVar20[10];
        puVar22[0xb] = uVar13;
        uVar19 = *(undefined4 *)((longlong)puVar20 + 100);
        uVar11 = *(undefined4 *)(puVar20 + 0xd);
        uVar12 = *(undefined4 *)((longlong)puVar20 + 0x6c);
        *(undefined4 *)(puVar22 + 0xc) = *(undefined4 *)(puVar20 + 0xc);
        *(undefined4 *)((longlong)puVar22 + 100) = uVar19;
        *(undefined4 *)(puVar22 + 0xd) = uVar11;
        *(undefined4 *)((longlong)puVar22 + 0x6c) = uVar12;
        uVar13 = puVar20[0xf];
        puVar22[0xe] = puVar20[0xe];
        puVar22[0xf] = uVar13;
        lVar25 = lVar25 + -1;
        puVar22 = puVar4;
        puVar20 = puVar5;
      } while (lVar25 != 0);
      *puVar4 = *puVar5;
      *(undefined4 *)(puVar23 + 0x31) = 0xffffffff;
      *(undefined4 *)((longlong)puVar23 + 0x18c) = *(undefined4 *)(lVar21 + 0x6660);
      *(undefined4 *)(puVar23 + 0x32) = 0xffffffff;
      *(undefined1 *)((longlong)puVar23 + 0x194) = 0;
      *(int *)(lVar21 + 0x6660) = *(int *)(lVar21 + 0x58) + -1;
    }
    else if ((iVar15 == 1) || (iVar15 == 2)) {
      iVar15 = piVar26[0x60];
      if (iVar15 == -1) {
        iVar15 = piVar26[0x61];
      }
      iVar16 = *(int *)((longlong)iVar15 * 0x200 + 0x1f0 + *param_1);
      while (iVar7 = iVar16, iVar7 != -1) {
        iVar15 = iVar7;
        iVar16 = *(int *)((longlong)iVar7 * 0x200 + 0x1f0 + *param_1);
      }
      if (*(int *)(lVar8 + 0x38) == iVar15) {
        iVar15 = *(int *)(lVar8 + 0x58) + 1;
        if ((int)(*(uint *)(lVar8 + 0x5c) & 0x7fffffff) < iVar15) {
          FUN_144cfd3c0(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar15);
        }
        iVar16 = *(int *)(lVar8 + 0x58);
        *(int *)(lVar8 + 0x58) = iVar15;
        puVar20 = (undefined8 *)((longlong)iVar16 * 0x198 + *plVar2);
        if (puVar20 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)puVar20 + 0x17c) = 0xffffffffffffffff;
          *(undefined4 *)((longlong)puVar20 + 0x184) = 0xffffffff;
        }
        lVar25 = 3;
        puVar23 = puVar20;
        do {
          puVar22 = puVar23 + 0x10;
          uVar13 = *(undefined8 *)(piVar26 + 2);
          piVar3 = piVar26 + 0x20;
          *puVar23 = *(undefined8 *)piVar26;
          puVar23[1] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 6);
          puVar23[2] = *(undefined8 *)(piVar26 + 4);
          puVar23[3] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 10);
          puVar23[4] = *(undefined8 *)(piVar26 + 8);
          puVar23[5] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0xe);
          puVar23[6] = *(undefined8 *)(piVar26 + 0xc);
          puVar23[7] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0x12);
          puVar23[8] = *(undefined8 *)(piVar26 + 0x10);
          puVar23[9] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0x16);
          puVar23[10] = *(undefined8 *)(piVar26 + 0x14);
          puVar23[0xb] = uVar13;
          iVar15 = piVar26[0x19];
          iVar16 = piVar26[0x1a];
          iVar7 = piVar26[0x1b];
          *(int *)(puVar23 + 0xc) = piVar26[0x18];
          *(int *)((longlong)puVar23 + 100) = iVar15;
          *(int *)(puVar23 + 0xd) = iVar16;
          *(int *)((longlong)puVar23 + 0x6c) = iVar7;
          uVar13 = *(undefined8 *)(piVar26 + 0x1e);
          puVar23[0xe] = *(undefined8 *)(piVar26 + 0x1c);
          puVar23[0xf] = uVar13;
          lVar25 = lVar25 + -1;
          puVar23 = puVar22;
          piVar26 = piVar3;
        } while (lVar25 != 0);
        *puVar22 = *(undefined8 *)piVar3;
        *(undefined4 *)(puVar20 + 0x31) = 0xffffffff;
        *(undefined4 *)((longlong)puVar20 + 0x18c) = *(undefined4 *)(lVar8 + 0x6660);
        *(undefined4 *)(puVar20 + 0x32) = 0xffffffff;
        *(undefined1 *)((longlong)puVar20 + 0x194) = 0;
        iVar15 = *(int *)(lVar8 + 0x58) + -1;
        *(int *)(lVar8 + 0x6660) = iVar15;
      }
      else {
        iVar15 = *(int *)(lVar21 + 0x58) + 1;
        if ((int)(*(uint *)(lVar21 + 0x5c) & 0x7fffffff) < iVar15) {
          FUN_144cfd3c0(lVar21 + 0x50,&PTR_vftable_14c6e47c0,(longlong)iVar15);
        }
        iVar16 = *(int *)(lVar21 + 0x58);
        *(int *)(lVar21 + 0x58) = iVar15;
        puVar20 = (undefined8 *)((longlong)iVar16 * 0x198 + *(longlong *)(lVar21 + 0x50));
        if (puVar20 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)puVar20 + 0x17c) = 0xffffffffffffffff;
          *(undefined4 *)((longlong)puVar20 + 0x184) = 0xffffffff;
        }
        lVar25 = 3;
        puVar23 = puVar20;
        do {
          puVar22 = puVar23 + 0x10;
          uVar13 = *(undefined8 *)(piVar26 + 2);
          piVar3 = piVar26 + 0x20;
          *puVar23 = *(undefined8 *)piVar26;
          puVar23[1] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 6);
          puVar23[2] = *(undefined8 *)(piVar26 + 4);
          puVar23[3] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 10);
          puVar23[4] = *(undefined8 *)(piVar26 + 8);
          puVar23[5] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0xe);
          puVar23[6] = *(undefined8 *)(piVar26 + 0xc);
          puVar23[7] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0x12);
          puVar23[8] = *(undefined8 *)(piVar26 + 0x10);
          puVar23[9] = uVar13;
          uVar13 = *(undefined8 *)(piVar26 + 0x16);
          puVar23[10] = *(undefined8 *)(piVar26 + 0x14);
          puVar23[0xb] = uVar13;
          iVar15 = piVar26[0x19];
          iVar16 = piVar26[0x1a];
          iVar7 = piVar26[0x1b];
          *(int *)(puVar23 + 0xc) = piVar26[0x18];
          *(int *)((longlong)puVar23 + 100) = iVar15;
          *(int *)(puVar23 + 0xd) = iVar16;
          *(int *)((longlong)puVar23 + 0x6c) = iVar7;
          uVar13 = *(undefined8 *)(piVar26 + 0x1e);
          puVar23[0xe] = *(undefined8 *)(piVar26 + 0x1c);
          puVar23[0xf] = uVar13;
          lVar25 = lVar25 + -1;
          puVar23 = puVar22;
          piVar26 = piVar3;
        } while (lVar25 != 0);
        *puVar22 = *(undefined8 *)piVar3;
        *(undefined4 *)(puVar20 + 0x31) = 0xffffffff;
        *(undefined4 *)((longlong)puVar20 + 0x18c) = *(undefined4 *)(lVar21 + 0x6660);
        *(undefined4 *)(puVar20 + 0x32) = 0xffffffff;
        *(undefined1 *)((longlong)puVar20 + 0x194) = 0;
        iVar15 = *(int *)(lVar21 + 0x58) + -1;
        *(int *)(lVar21 + 0x6660) = iVar15;
      }
      piVar26 = (int *)(local_6668 + (longlong)local_58 * 0x198);
      if (*piVar26 == 1) {
        iVar16 = piVar26[0x60];
        if (iVar16 == -1) {
          iVar16 = *(int *)((longlong)piVar26[0x61] * 0x200 + 0x1f0 + *param_1);
        }
        *(int *)((longlong)iVar16 * 0x200 + 0x1e8 + *param_1) = iVar15;
      }
    }
    else {
      FUN_144bde670(&local_6898,local_6878,0x200);
      FUN_144be6160(&local_6898,"should not had other type of events.");
      iVar15 = FUN_144bfc110(0x75a37226,local_6878,
                             "NavMesh\\Generation\\SnapRounding\\hkaiNavMeshGenerationSnapRounding.cpp"
                             ,0xe8a);
      if (iVar15 != 0) {
        pcVar10 = (code *)swi(3);
        puVar20 = (undefined8 *)(*pcVar10)();
        return puVar20;
      }
      FUN_144bde6e0(&local_6898);
    }
    do {
      FUN_144ce0b50(&local_6678,&param_6);
    } while ((char)param_6 != '\0');
  }
  FUN_144be90e0(0x27dde9ef);
  FUN_144be90e0(0xe70ee67);
  uVar17 = *(uint *)(lVar8 + 0x6660);
  if (*(uint *)(lVar8 + 0x6660) == 0xffffffff) {
LAB_144cf08c3:
    *(uint *)(lVar8 + 0x6660) = uVar18;
    FUN_144be90e0(0xe0366c35);
    FUN_144be90e0(0xe70ee67);
    uVar19 = FUN_144ce1560(lVar21 + 0x40,*(undefined4 *)(lVar21 + 0x6660));
    *(undefined4 *)(lVar21 + 0x6660) = uVar19;
    FUN_144be90e0(0xe0366c35);
    local_6660 = 0;
    if ((-1 < (int)local_665c) && (local_6668 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_6668,(ulonglong)(local_665c & 0x7fffffff) * 0x198);
    }
    FUN_144cf5b60(param_1,param_3,param_4);
    FUN_144cf5b60(param_1,param_3,param_2);
    return param_2;
  }
  do {
    do {
      uVar18 = uVar17;
      param_6 = 0xffffffff;
      uVar17 = 0xffffffff;
    } while (uVar18 == 0xffffffff);
    do {
      lVar9 = *plVar2;
      lVar25 = (longlong)(int)uVar18 * 0x198;
      uVar17 = *(uint *)(lVar9 + 0x18c + lVar25);
      uVar27 = (ulonglong)(int)uVar17;
      if (uVar17 == 0xffffffff) {
        lVar21 = local_6888;
        if (param_6 == 0xffffffff) goto LAB_144cf08c3;
        *(uint *)(lVar9 + 0x18c + lVar25) = param_6;
        uVar17 = uVar18;
        break;
      }
      lVar28 = uVar27 * 0x198;
      uVar6 = *(uint *)(lVar9 + 0x18c + lVar28);
      *(undefined4 *)(lVar9 + 0x18c + lVar25) = 0xffffffff;
      *(undefined4 *)(*plVar2 + 0x18c + lVar28) = 0xffffffff;
      lVar21 = *plVar2 + lVar25;
      lVar9 = *plVar2 + lVar28;
      if (*(char *)(lVar21 + 0x194) == '\0') {
        if (*(char *)(lVar9 + 0x194) == '\0') {
          local_6898 = *puVar1;
          uStack_6894 = *(undefined4 *)(lVar8 + 0x44);
          uStack_6890 = *(undefined4 *)(lVar8 + 0x48);
          uStack_688c = *(undefined4 *)(lVar8 + 0x4c);
          iVar15 = FUN_144ce09a0(&local_6898,lVar21,lVar9);
          if (iVar15 < 0) {
            *(undefined4 *)(lVar9 + 0x18c) = *(undefined4 *)(lVar21 + 0x188);
            *(uint *)(lVar21 + 0x188) = uVar17;
            uVar17 = uVar18;
          }
          else if (iVar15 < 1) {
            lVar24 = *plVar2;
            lVar25 = lVar24 + lVar25;
            iVar15 = *(int *)(lVar25 + 400);
            while (iVar15 != -1) {
              iVar15 = *(int *)(lVar24 + lVar28 + 400);
              if (iVar15 == -1) {
                *(uint *)(lVar24 + lVar28 + 400) = uVar18;
                uVar29 = uVar18;
                goto LAB_144cf076d;
              }
              lVar28 = (longlong)iVar15 * 0x198;
              lVar25 = (longlong)*(int *)(lVar25 + 400) * 0x198 + lVar24;
              iVar15 = *(int *)(lVar25 + 400);
            }
            *(uint *)(lVar25 + 400) = uVar17;
            uVar29 = uVar17;
            uVar17 = uVar18;
LAB_144cf076d:
            iVar15 = *(int *)(lVar21 + 0x188);
            if (iVar15 == -1) {
LAB_144cf0779:
              uVar19 = *(undefined4 *)(lVar9 + 0x188);
LAB_144cf082d:
              *(undefined4 *)((longlong)(int)uVar17 * 0x198 + 0x188 + *plVar2) = uVar19;
            }
            else {
              iVar16 = *(int *)(lVar9 + 0x188);
              if (iVar16 != -1) {
                lVar25 = *plVar2;
                lVar28 = (longlong)iVar15 * 0x198 + lVar25;
                iVar15 = *(int *)(lVar28 + 0x18c);
                iVar7 = iVar16;
                while (iVar15 != -1) {
                  lVar24 = (longlong)iVar7 * 0x198 + lVar25;
                  iVar7 = *(int *)(lVar24 + 0x18c);
                  if (iVar7 == -1) {
                    *(undefined4 *)(lVar24 + 0x18c) = *(undefined4 *)(lVar21 + 0x188);
                    goto LAB_144cf0779;
                  }
                  lVar28 = (longlong)*(int *)(lVar28 + 0x18c) * 0x198 + lVar25;
                  iVar15 = *(int *)(lVar28 + 0x18c);
                }
                *(int *)(lVar28 + 0x18c) = iVar16;
                uVar19 = *(undefined4 *)(lVar21 + 0x188);
                goto LAB_144cf082d;
              }
              *(int *)((longlong)(int)uVar17 * 0x198 + 0x188 + *plVar2) = iVar15;
            }
            *(undefined4 *)((longlong)(int)uVar29 * 0x198 + 0x188 + *plVar2) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar21 + 0x18c) = *(undefined4 *)(lVar9 + 0x188);
            *(uint *)(lVar9 + 0x188) = uVar18;
          }
        }
        else {
          iVar15 = *(int *)(lVar9 + 0x188);
          *(undefined4 *)(lVar9 + 400) = *(undefined4 *)(lVar8 + 0x6664);
          *(uint *)(lVar8 + 0x6664) = uVar17;
          while (uVar17 = uVar18, iVar15 != -1) {
            lVar21 = (longlong)iVar15;
            iVar15 = *(int *)(lVar21 * 0x198 + 0x18c + *plVar2);
            *(undefined4 *)(lVar21 * 0x198 + 0x18c + *plVar2) = 0xffffffff;
            uVar18 = FUN_144ce1280(puVar1,uVar18);
          }
        }
      }
      else {
        iVar15 = *(int *)(lVar21 + 0x188);
        *(undefined4 *)(lVar21 + 400) = *(undefined4 *)(lVar8 + 0x6664);
        *(uint *)(lVar8 + 0x6664) = uVar18;
        while (iVar15 != -1) {
          lVar21 = (longlong)iVar15;
          iVar15 = *(int *)(lVar21 * 0x198 + 0x18c + *plVar2);
          *(undefined4 *)(lVar21 * 0x198 + 0x18c + *plVar2) = 0xffffffff;
          uVar17 = FUN_144ce1280(puVar1,uVar27 & 0xffffffff);
          uVar27 = (ulonglong)uVar17;
        }
      }
      *(uint *)((longlong)(int)uVar17 * 0x198 + 0x18c + *plVar2) = param_6;
      uVar18 = uVar6;
      param_6 = uVar17;
    } while (uVar6 != 0xffffffff);
  } while( true );
}



// FUNCTION 144cf0990 FUN_144cf0990 body=922 status=ok
// SIG undefined FUN_144cf0990(void)

undefined8 FUN_144cf0990(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int local_res8 [2];
  int local_res10 [2];
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_e8 = *param_1;
  uStack_e0 = param_1[1];
  local_d8 = param_1[2];
  uStack_d0 = param_1[3];
  local_c8 = param_1[8];
  uStack_c0 = param_1[9];
  local_b8 = param_1[10];
  uStack_b0 = param_1[0xb];
  lVar2 = FUN_147e59322(&local_e8,local_res10);
  fVar6 = 0.0;
  if ((float)lVar2 == 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)FUN_144cc3f10(&local_c8,local_res8);
    fVar5 = (float)(local_res10[0] * 0x800000 + local_res8[0] * -0x800000 +
                   (int)((float)lVar2 / fVar5));
  }
  local_d8 = param_2[2];
  uStack_d0 = param_2[3];
  local_e8 = *param_2;
  uStack_e0 = param_2[1];
  local_b8 = param_2[10];
  uStack_b0 = param_2[0xb];
  local_c8 = param_2[8];
  uStack_c0 = param_2[9];
  lVar2 = FUN_147e59322(&local_e8,local_res10);
  if ((float)lVar2 == 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_144cc3f10(&local_c8,local_res8);
    fVar4 = (float)(local_res10[0] * 0x800000 + local_res8[0] * -0x800000 +
                   (int)((float)lVar2 / fVar4));
  }
  if ((ABS(fVar4) * 1.1920929e-07 + ABS(fVar5) * 1.1920929e-07) * 2.0 < fVar5 - fVar4) {
LAB_144cf0cf2:
    uVar3 = 1;
  }
  else {
    if ((ABS(fVar4) * 1.1920929e-07 + ABS(fVar5) * 1.1920929e-07) * -2.0 <= fVar5 - fVar4) {
      local_e8 = *param_2;
      uStack_e0 = param_2[1];
      local_d8 = param_2[2];
      uStack_d0 = param_2[3];
      local_c8 = param_2[8];
      uStack_c0 = param_2[9];
      local_b8 = param_2[10];
      uStack_b0 = param_2[0xb];
      local_a8 = *param_1;
      uStack_a0 = param_1[1];
      local_98 = param_1[2];
      uStack_90 = param_1[3];
      local_88 = param_1[8];
      uStack_80 = param_1[9];
      local_78 = param_1[10];
      uStack_70 = param_1[0xb];
      uVar3 = FUN_144cab880(&local_a8,&local_e8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_e8 = param_1[4];
      uStack_e0 = param_1[5];
      local_d8 = param_1[6];
      uStack_d0 = param_1[7];
      local_c8 = param_1[8];
      uStack_c0 = param_1[9];
      local_b8 = param_1[10];
      uStack_b0 = param_1[0xb];
      lVar2 = FUN_147e59322(&local_e8,local_res10);
      if ((float)lVar2 == 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)FUN_144cc3f10(&local_c8,local_res8);
        fVar5 = (float)(local_res10[0] * 0x800000 + local_res8[0] * -0x800000 +
                       (int)((float)lVar2 / fVar5));
      }
      local_d8 = param_2[6];
      uStack_d0 = param_2[7];
      local_e8 = param_2[4];
      uStack_e0 = param_2[5];
      local_b8 = param_2[10];
      uStack_b0 = param_2[0xb];
      local_c8 = param_2[8];
      uStack_c0 = param_2[9];
      lVar2 = FUN_147e59322(&local_e8,local_res10);
      if ((float)lVar2 != 0.0) {
        fVar6 = (float)FUN_144cc3f10(&local_c8,local_res8);
        fVar6 = (float)(local_res10[0] * 0x800000 + local_res8[0] * -0x800000 +
                       (int)((float)lVar2 / fVar6));
      }
      uVar7 = CONCAT44(ABS(fVar5) * 1.1920929e-07,fVar5);
      uVar3 = CONCAT44(ABS(fVar6) * 1.1920929e-07,fVar6);
      iVar1 = FUN_144cdcff0(uVar7,uVar3);
      if (iVar1 == 0) goto LAB_144cf0cf2;
      iVar1 = FUN_144cdcfa0(uVar7,uVar3);
      if (iVar1 != 0) {
        local_a8 = param_2[4];
        uStack_a0 = param_2[5];
        local_98 = param_2[6];
        uStack_90 = param_2[7];
        local_88 = param_2[8];
        uStack_80 = param_2[9];
        local_78 = param_2[10];
        uStack_70 = param_2[0xb];
        local_e8 = param_1[4];
        uStack_e0 = param_1[5];
        local_d8 = param_1[6];
        uStack_d0 = param_1[7];
        local_c8 = param_1[8];
        uStack_c0 = param_1[9];
        local_b8 = param_1[10];
        uStack_b0 = param_1[0xb];
        uVar3 = FUN_144cab880(&local_e8,&local_a8);
        return uVar3;
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 144cf0d30 FUN_144cf0d30 body=234 status=ok
// SIG undefined FUN_144cf0d30(void)

bool FUN_144cf0d30(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bStackX_14;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  
  FUN_144ccf3e0(param_1 + 4,param_2,&local_38);
  bStackX_14 = (byte)((ulonglong)param_2 >> 0x20);
  uVar12 = CONCAT71(0,bStackX_14);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_1;
  uVar9 = SUB168(auVar2 * auVar4,8);
  uVar11 = (uint)bStackX_14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar12;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1[1];
  uVar10 = SUB168(auVar3 * auVar5,8);
  uVar7 = (ulonglong)uVar11 * param_1[1] + uVar9;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[2];
  uVar9 = (ulonglong)CARRY8((ulonglong)uVar11 * param_1[1],uVar9);
  uVar1 = (ulonglong)uVar11 * param_1[2] + uVar10;
  uVar8 = uVar1 + uVar9;
  return (longlong)
         (((uVar12 * param_1[3] + SUB168(ZEXT416(uVar11) * auVar6,8) +
           (ulonglong)(CARRY8((ulonglong)uVar11 * param_1[2],uVar10) || CARRY8(uVar1,uVar9))) -
          lStack_20) -
         (ulonglong)
         (uVar8 < local_28 ||
         uVar8 - local_28 <
         (ulonglong)
         (uVar7 < uStack_30 ||
         uVar7 - uStack_30 < (ulonglong)((ulonglong)bStackX_14 * *param_1 < local_38)))) < 0;
}



// FUNCTION 144cf0e20 FUN_144cf0e20 body=208 status=ok
// SIG undefined FUN_144cf0e20(void)

undefined8 * FUN_144cf0e20(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = _anon_71983FA0::Context::vftable;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  }
  else {
    FUN_144b3d910(lVar1);
    param_1[3] = lVar1;
    FUN_144b3d910(lVar1);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_144b3f230(lVar1);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  if (*param_2 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144cf0ef0 FUN_144cf0ef0 body=520 status=ok
// SIG undefined FUN_144cf0ef0(void)

void FUN_144cf0ef0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)param_1[10];
  if (puVar3 + (longlong)*(int *)(param_1 + 0xb) * 0x44 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0xb) * 0x44 + 0x43;
    do {
      puVar1 = puVar4 + -0x44;
      puVar4[-0x45] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar4 + -0x47) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x47),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 2);
      }
      puVar4[-0x47] = 0;
      puVar4[-0x46] = 0;
      *puVar1 = 0x80000000;
      puVar4[-0x49] = 0;
      if ((-1 < (int)puVar4[-0x48]) && (*(longlong *)(puVar4 + -0x4b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x4b),
                   (ulonglong)(puVar4[-0x48] & 0x7fffffff) * 0x18);
      }
      puVar4[-0x4b] = 0;
      puVar4[-0x4a] = 0;
      puVar4[-0x48] = 0x80000000;
      puVar4[-0x4d] = 0;
      if ((-1 < (int)puVar4[-0x4c]) && (*(longlong *)(puVar4 + -0x4f) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x4f),
                   (ulonglong)(puVar4[-0x4c] & 0x7fffffff) * 0x18);
      }
      puVar2 = puVar4 + -0x87;
      puVar4[-0x4f] = 0;
      puVar4[-0x4e] = 0;
      puVar4[-0x4c] = 0x80000000;
      FUN_147e4ccc0(puVar2);
      puVar4 = puVar1;
    } while (puVar2 != puVar3);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) * 0x110);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 4);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 2);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_144cdd040(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144cf1100 FUN_144cf1100 body=87 status=ok
// SIG undefined FUN_144cf1100(void)

undefined8 FUN_144cf1100(undefined8 param_1,ulonglong param_2)

{
  FUN_144cf0ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144cf1160 FUN_144cf1160 body=541 status=ok
// SIG undefined FUN_144cf1160(void)

void FUN_144cf1160(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte extraout_var;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar4;
  }
  lVar2 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar2 != 0) {
    local_1f8 = "TtSnapRounding/CalculateEdgeForwardness";
    local_1f0 = "";
    FUN_144b3f370(lVar2,&local_1f8);
  }
  uVar6 = (ulonglong)((*(int *)(*(longlong *)(*param_1 + 0x18) + 0x30) * param_2) / (int)param_1[1])
  ;
  lVar4 = (longlong)
          (((param_2 + 1) * *(int *)(*(longlong *)(*param_1 + 0x18) + 0x30)) / (int)param_1[1]);
  if ((longlong)uVar6 < lVar4) {
    lVar8 = uVar6 * 0x60;
    uVar7 = uVar6;
    do {
      lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x18) + 0x28);
      iVar5 = (int)uVar7;
      if (*(int *)(lVar8 + 0x10 + lVar3) < iVar5) {
        FUN_144cb67e0(*(longlong *)(*param_1 + 0x18),(longlong)iVar5 * 0x60 + lVar3,&local_a8,
                      &local_128);
        local_1e8 = local_128;
        uStack_1e0 = uStack_120;
        local_1d8 = local_118;
        uStack_1d0 = uStack_110;
        local_1c8 = local_108;
        uStack_1c0 = uStack_100;
        local_1b8 = local_f8;
        uStack_1b0 = uStack_f0;
        local_1a8 = local_c8;
        uStack_1a0 = uStack_c0;
        local_198 = local_b8;
        uStack_190 = uStack_b0;
        local_188 = local_a8;
        uStack_180 = uStack_a0;
        local_178 = local_98;
        uStack_170 = uStack_90;
        local_168 = local_88;
        uStack_160 = uStack_80;
        local_158 = local_78;
        uStack_150 = uStack_70;
        local_148 = local_48;
        uStack_144 = uStack_44;
        uStack_140 = uStack_40;
        uStack_13c = uStack_3c;
        local_138 = local_38;
        uStack_134 = uStack_34;
        uStack_130 = uStack_30;
        uStack_12c = uStack_2c;
        FUN_144cf0990(&local_188,&local_1e8);
        *(byte *)(uVar6 + *(longlong *)(*param_1 + 0x20)) = extraout_var >> 7;
        iVar1 = *(int *)(lVar8 + lVar3 + 0x10);
        if (-1 < iVar1) {
          *(byte *)((longlong)iVar1 + *(longlong *)(*param_1 + 0x20)) = extraout_var >> 7 ^ 1;
        }
      }
      uVar7 = (ulonglong)(iVar5 + 1);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((longlong)uVar6 < lVar4);
  }
  if (lVar2 != 0) {
    local_1f8 = "Et";
    local_1f0 = "";
    FUN_144b3f260(lVar2,&local_1f8);
  }
  return;
}



// FUNCTION 144cf1380 FUN_144cf1380 body=469 status=ok
// SIG undefined FUN_144cf1380(void)

void FUN_144cf1380(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  char *local_28;
  char *local_20;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar5 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar5 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar5 + 0xf0) = lVar7;
  }
  lVar5 = *(longlong *)(lVar7 + 0x3e0);
  if (lVar5 != 0) {
    local_28 = "TtSnapRounding/BuildInsertionList";
    local_20 = "";
    FUN_144b3f370(lVar5,&local_28);
  }
  lVar7 = *param_1;
  iVar10 = 0;
  plVar1 = (longlong *)(lVar7 + 0x18);
  plVar2 = (longlong *)(lVar7 + 0x30);
  lVar8 = *plVar1;
  if (0 < *(int *)(lVar8 + 0x30)) {
    lVar13 = 0;
    lVar11 = 0;
    do {
      lVar6 = *(longlong *)(lVar7 + 0x20);
      lVar8 = *(longlong *)(lVar8 + 0x28);
      if ((*(char *)(lVar6 + lVar11) != '\0') && (*(int *)(lVar13 + 0x10 + lVar8) < 0)) {
        lVar9 = (longlong)*(int *)(lVar13 + 8 + lVar8);
        iVar12 = *(int *)(lVar9 * 0x60 + 0x10 + lVar8);
        cVar4 = *(char *)(lVar9 + lVar6);
        while (cVar4 == '\0') {
          if ((iVar12 < 0) || (iVar12 == iVar10)) {
            iVar12 = *(int *)(lVar7 + 0x38) + 1;
            if ((int)(*(uint *)(lVar7 + 0x3c) & 0x7fffffff) < iVar12) {
              FUN_1401f86b2(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar12);
            }
            piVar3 = (int *)(*plVar2 + (longlong)*(int *)(lVar7 + 0x38) * 4);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar10;
            }
            *(int *)(lVar7 + 0x38) = iVar12;
            break;
          }
          lVar9 = (longlong)*(int *)((longlong)iVar12 * 0x60 + 8 + lVar8);
          iVar12 = *(int *)(lVar9 * 0x60 + 0x10 + lVar8);
          cVar4 = *(char *)(lVar9 + lVar6);
        }
      }
      lVar8 = *plVar1;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x60;
    } while (iVar10 < *(int *)(lVar8 + 0x30));
  }
  if (1 < *(int *)(lVar7 + 0x38)) {
    FUN_144cf65b0(*plVar2,0,*(int *)(lVar7 + 0x38) + -1,plVar1);
  }
  if (lVar5 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar5,&local_28);
  }
  return;
}



// FUNCTION 144cf1560 FUN_144cf1560 body=679 status=ok
// SIG undefined FUN_144cf1560(void)

void FUN_144cf1560(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  char *local_88;
  char *pcStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  longlong local_60;
  int local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  int local_30;
  uint local_2c;
  undefined8 *local_28;
  longlong local_20;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar3 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar6;
  }
  lVar3 = *(longlong *)(lVar6 + 0x3e0);
  local_88 = "TtSnapRounding/ExecuteOnPartitions";
  pcStack_80 = "";
  if (lVar3 != 0) {
    local_88 = "TtSnapRounding/ExecuteOnPartitions";
    pcStack_80 = "";
    FUN_144b3f370(lVar3,&local_88);
  }
  cVar5 = FUN_144cb3870(*(undefined8 *)(*param_1 + 0x18));
  if (cVar5 == '\0') {
    lVar6 = *param_1;
    local_28 = (undefined8 *)(lVar6 + 0x18);
    puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x40) + (longlong)param_2 * 0x10);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    local_20 = (longlong)param_2 * 0x110 + *(longlong *)(lVar6 + 0x50);
    local_78 = 0;
    local_70 = 0;
    local_6c = 0xffffffff80000000;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0xffffffff80000000;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    FUN_144cb3710(local_20,*local_28);
    local_88 = *(char **)(*param_1 + 0x30);
    pcStack_80 = local_88 + (longlong)*(int *)(*param_1 + 0x38) * 4;
    FUN_144ce9b30(&local_78,&local_88);
    lVar4 = local_38;
    lVar6 = local_38 + (longlong)local_30 * 8;
    while (lVar6 != lVar4) {
      plVar1 = (longlong *)(lVar6 + -8);
      lVar6 = lVar6 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
    local_30 = 0;
    if ((-1 < (int)local_2c) && (local_38 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 3);
    }
    lVar4 = local_60;
    lVar6 = (longlong)local_58 * 0x40 + local_60;
    local_38 = 0;
    local_2c = 0x80000000;
    while (lVar6 != lVar4) {
      lVar6 = lVar6 + -0x40;
      FUN_144ce21f0(lVar6);
    }
    local_58 = 0;
    if ((-1 < (int)(uint)local_54) && (local_60 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_60,(ulonglong)((uint)local_54 & 0x7fffffff) << 6);
    }
    local_60 = 0;
    local_54 = CONCAT44(local_54._4_4_,0x80000000);
    local_70 = 0;
    if ((-1 < (int)(uint)local_6c) && (local_78 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_78,(ulonglong)((uint)local_6c & 0x7fffffff) << 9);
    }
    local_78 = 0;
    local_6c = CONCAT44(local_6c._4_4_,0x80000000);
  }
  if (lVar3 != 0) {
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar3,&local_88);
  }
  return;
}



// FUNCTION 144cf1810 FUN_144cf1810 body=1421 status=ok
// SIG undefined FUN_144cf1810(void)

void FUN_144cf1810(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int *piVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_148;
  int local_140;
  uint local_13c;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  char *local_128;
  char *pcStack_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  int *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong uVar13;
  
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar20 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar20 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar20 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar20 + 0xf0) = lVar10;
  }
  uVar5 = *(ulonglong *)(lVar10 + 0x3e0);
  local_128 = "TtSnapRounding/ConcatenateOutputs";
  pcStack_120 = "";
  if (uVar5 != 0) {
    local_128 = "TtSnapRounding/ConcatenateOutputs";
    pcStack_120 = "";
    FUN_144b3f370(uVar5,&local_128);
  }
  lVar20 = 0;
  iVar21 = 0;
  uVar19 = 0x80000000;
  local_100 = (int *)0x0;
  local_f8 = 0;
  local_f4 = 0x80000000;
  local_f0 = 0;
  local_110 = 0xffffffff;
  iVar14 = 1;
  local_108 = 1;
  local_118 = &PTR_LAB_14aba30f0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0x80000000;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0x80000000;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  cVar9 = FUN_144cb3870(*(undefined8 *)(param_1[1] + 0x18));
  if (cVar9 == '\0') {
    local_138 = 0;
    local_130 = 0;
    local_12c = 0x80000000;
    local_148 = 0;
    local_140 = 0;
    local_13c = 0x80000000;
    FUN_144cda610(&local_118,*(undefined8 *)(param_1[1] + 0x50));
    lVar10 = *(longlong *)(param_1[1] + 0x50);
    plVar16 = (longlong *)(lVar10 + 0xf0);
    if (plVar16 != &local_138) {
      FUN_144cdd0a0(&local_138,&PTR_vftable_14c6e47a0);
      FUN_144cdd0a0(plVar16,&PTR_vftable_14c6e47a0);
      lVar15 = *plVar16;
      *plVar16 = local_138;
      uVar4 = *(undefined4 *)(lVar10 + 0xf8);
      uVar19 = *(uint *)(lVar10 + 0xfc);
      *(uint *)(lVar10 + 0xfc) = local_12c;
      *(undefined4 *)(lVar10 + 0xf8) = local_130;
      local_138 = lVar15;
      local_130 = uVar4;
      local_12c = uVar19;
    }
    lVar10 = *(longlong *)(param_1[1] + 0x50);
    plVar16 = (longlong *)(lVar10 + 0x100);
    if (plVar16 != &local_148) {
      FUN_143821c08(&local_148,&PTR_vftable_14c6e47a0);
      FUN_143821c08(plVar16,&PTR_vftable_14c6e47a0);
      lVar20 = *plVar16;
      *plVar16 = local_148;
      iVar21 = *(int *)(lVar10 + 0x108);
      uVar12 = *(uint *)(lVar10 + 0x10c);
      *(int *)(lVar10 + 0x108) = local_140;
      *(uint *)(lVar10 + 0x10c) = local_13c;
      local_148 = lVar20;
      local_140 = iVar21;
      local_13c = uVar12;
    }
    lVar10 = param_1[1];
    if (1 < *(int *)(lVar10 + 0x58)) {
      do {
        FUN_144cea1f0(*(undefined8 *)(lVar10 + 0x18),&local_118,&local_148,&local_138,
                      (longlong)iVar14 * 0x110 + *(longlong *)(lVar10 + 0x50));
        lVar10 = param_1[1];
        iVar14 = iVar14 + 1;
        lVar20 = local_148;
        uVar19 = local_12c;
        iVar21 = local_140;
      } while (iVar14 < *(int *)(lVar10 + 0x58));
    }
    piVar1 = local_100 + local_f8;
    lVar10 = local_f0;
    for (piVar17 = local_100; piVar17 != piVar1; piVar17 = piVar17 + 1) {
      iVar14 = *piVar17;
      if (iVar14 != -1) {
        do {
          FUN_144cb6680(&local_118,lVar10 + (longlong)iVar14 * 0x60,local_res18,local_res10);
          iVar14 = *(int *)(local_f0 + 0xc + (longlong)iVar14 * 0x60);
          lVar10 = local_f0;
        } while (iVar14 != *piVar17);
      }
    }
    if (1 < iVar21) {
      FUN_144cfba60(lVar20,0,iVar21 + -1,uVar5 & 0xff);
      lVar10 = local_f0;
    }
    lVar15 = (longlong)(iVar21 + -1);
    if (-1 < iVar21 + -1) {
      do {
        iVar21 = *(int *)(lVar20 + lVar15 * 4);
        iVar14 = local_e8 + -1;
        if (iVar14 != iVar21) {
          puVar18 = (undefined8 *)((longlong)iVar14 * 0x60 + lVar10);
          *(int *)((longlong)*(int *)((longlong)puVar18 + 0xc) * 0x60 + 8 + lVar10) = iVar21;
          *(int *)((longlong)*(int *)(puVar18 + 1) * 0x60 + 0xc + local_f0) = iVar21;
          if (-1 < *(int *)(puVar18 + 2)) {
            *(int *)((longlong)*(int *)(puVar18 + 2) * 0x60 + 0x10 + local_f0) = iVar21;
          }
          local_100[*(int *)((longlong)puVar18 + 4)] = iVar21;
          uVar8 = puVar18[1];
          lVar10 = (longlong)iVar21 * 0x60;
          *(undefined8 *)(lVar10 + local_f0) = *puVar18;
          ((undefined8 *)(lVar10 + local_f0))[1] = uVar8;
          uVar8 = puVar18[3];
          puVar2 = (undefined8 *)(lVar10 + 0x10 + local_f0);
          *puVar2 = puVar18[2];
          puVar2[1] = uVar8;
          uVar8 = puVar18[5];
          puVar2 = (undefined8 *)(lVar10 + 0x20 + local_f0);
          *puVar2 = puVar18[4];
          puVar2[1] = uVar8;
          uVar8 = puVar18[7];
          puVar2 = (undefined8 *)(lVar10 + 0x30 + local_f0);
          *puVar2 = puVar18[6];
          puVar2[1] = uVar8;
          uVar4 = *(undefined4 *)((longlong)puVar18 + 0x44);
          uVar6 = *(undefined4 *)(puVar18 + 9);
          uVar7 = *(undefined4 *)((longlong)puVar18 + 0x4c);
          puVar3 = (undefined4 *)(lVar10 + 0x40 + local_f0);
          *puVar3 = *(undefined4 *)(puVar18 + 8);
          puVar3[1] = uVar4;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          uVar4 = *(undefined4 *)((longlong)puVar18 + 0x54);
          uVar6 = *(undefined4 *)(puVar18 + 0xb);
          uVar7 = *(undefined4 *)((longlong)puVar18 + 0x5c);
          puVar3 = (undefined4 *)(lVar10 + 0x50 + local_f0);
          *puVar3 = *(undefined4 *)(puVar18 + 10);
          puVar3[1] = uVar4;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          cVar9 = FUN_144cb5190(&local_118);
          if (cVar9 != '\0') {
            FUN_144cb5330(&local_118,iVar14);
            FUN_144cb5280(&local_118,iVar21);
          }
        }
        FUN_144cb3b80(&local_118,local_e8 + -1);
        lVar15 = lVar15 + -1;
        lVar10 = local_f0;
      } while (-1 < lVar15);
    }
    uVar11 = 0;
    uVar13 = uVar11;
    if (0 < local_e8) {
      do {
        *(undefined8 *)(uVar11 + 0x18 + lVar10) = 0;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        *(undefined8 *)(uVar11 + 0x20 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x28 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x30 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x38 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x40 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x48 + lVar10) = 0;
        *(undefined8 *)(uVar11 + 0x50 + lVar10) = 0;
        *(undefined4 *)(uVar11 + 0x58 + lVar10) = 0;
        uVar11 = uVar11 + 0x60;
        lVar10 = local_f0;
      } while ((int)uVar12 < local_e8);
    }
    FUN_144cda610(*param_1,&local_118);
    if ((-1 < (int)local_13c) && (lVar20 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar20,(ulonglong)(local_13c & 0x7fffffff) << 2);
    }
    if ((-1 < (int)uVar19) && (local_138 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(uVar19 & 0x7fffffff) * 0x18);
    }
  }
  else {
    FUN_144cb3710(&local_118,*(undefined8 *)(param_1[1] + 0x18));
  }
  FUN_147e4ccc0(&local_118);
  if (uVar5 != 0) {
    local_128 = "Et";
    pcStack_120 = "";
    FUN_144b3f260(uVar5,&local_128);
  }
  return;
}



// FUNCTION 144cf1da0 FUN_144cf1da0 body=198 status=ok
// SIG undefined FUN_144cf1da0(void)

undefined8 * FUN_144cf1da0(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  FUN_144cfd560(param_2,param_3,&local_68);
  if (*(longlong *)(param_3 + 0x30) < 0) {
    bVar3 = local_30 < *param_2;
    local_30 = local_30 - *param_2;
    bVar4 = local_28 < param_2[1];
    uVar1 = local_28 - param_2[1];
    local_28 = uVar1 - bVar3;
    uVar1 = (ulonglong)(bVar4 || uVar1 < bVar3);
    bVar3 = local_20 < param_2[2];
    uVar2 = local_20 - param_2[2];
    local_20 = uVar2 - uVar1;
    local_18 = (local_18 - param_2[3]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  param_1[3] = local_50;
  param_1[4] = local_48;
  param_1[5] = local_40;
  param_1[6] = local_38;
  param_1[7] = local_30;
  param_1[8] = local_28;
  param_1[9] = local_20;
  param_1[10] = local_18;
  return param_1;
}



// FUNCTION 144cf1e70 FUN_144cf1e70 body=351 status=ok
// SIG undefined FUN_144cf1e70(void)

longlong * FUN_144cf1e70(longlong *param_1,ulonglong *param_2,undefined2 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bStackX_19;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  longlong lStack_38;
  
  FUN_144d00730(param_2 + 4,(char)param_3,&local_50);
  bStackX_19 = (byte)((ushort)param_3 >> 8);
  uVar24 = CONCAT71(0,bStackX_19);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar24;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_2;
  uVar16 = SUB168(auVar5 * auVar8,8);
  uVar22 = (uint)bStackX_19;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[1];
  uVar17 = SUB168(auVar6 * auVar9,8);
  uVar21 = (ulonglong)bStackX_19 * param_2[1] + uVar16;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[2];
  uVar1 = param_2[2];
  uVar23 = (uint)bStackX_19;
  uVar2 = param_2[3];
  uVar15 = (ulonglong)CARRY8((ulonglong)bStackX_19 * param_2[1],uVar16);
  uVar3 = uVar22 * uVar1 + uVar17;
  uVar20 = uVar3 + uVar15;
  uVar16 = param_2[4];
  uVar14 = (ulonglong)CARRY8((ulonglong)uVar22 * *param_2,local_50);
  uVar19 = uVar21 + uStack_48;
  uVar21 = (ulonglong)(CARRY8(uVar21,uStack_48) || CARRY8(uVar19,uVar14));
  uVar4 = uVar20 + local_40;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar24;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar16;
  uVar18 = SUB168(auVar7 * auVar11,8);
  *param_1 = (ulonglong)uVar22 * *param_2 + local_50;
  param_1[1] = uVar19 + uVar14;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[5];
  uVar19 = SUB168(ZEXT416(uVar23) * auVar12,8);
  uVar14 = param_2[5] * uVar24;
  param_1[2] = uVar4 + uVar21;
  param_1[3] = uVar23 * uVar2 + SUB168(ZEXT416(uVar22) * auVar10,8) +
               (ulonglong)(CARRY8(uVar22 * uVar1,uVar17) || CARRY8(uVar3,uVar15)) + lStack_38 +
               (ulonglong)(CARRY8(uVar20,local_40) || CARRY8(uVar4,uVar21));
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[6];
  uVar15 = param_2[6] * uVar24;
  param_1[4] = uVar16 * uVar24;
  param_1[5] = uVar14 + uVar18;
  uVar1 = param_2[7];
  uVar2 = (ulonglong)CARRY8(uVar14,uVar18);
  uVar16 = uVar15 + uVar19;
  param_1[6] = uVar16 + uVar2;
  param_1[7] = uVar1 * uVar24 + SUB168(ZEXT416(uVar23) * auVar13,8) +
               (ulonglong)(CARRY8(uVar15,uVar19) || CARRY8(uVar16,uVar2));
  return param_1;
}



// FUNCTION 144cf1fd0 FUN_144cf1fd0 body=259 status=ok
// SIG undefined FUN_144cf1fd0(void)

uint * FUN_144cf1fd0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144cf20ab:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144cf20ab;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144cf20e0 FUN_144cf20e0 body=102 status=ok
// SIG undefined FUN_144cf20e0(void)

uint * FUN_144cf20e0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x10) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144cf2150 FUN_144cf2150 body=253 status=ok
// SIG undefined FUN_144cf2150(void)

uint * FUN_144cf2150(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144cf2225:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144cf2225;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144cf2250 FUN_144cf2250 body=99 status=ok
// SIG undefined FUN_144cf2250(void)

uint * FUN_144cf2250(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 8) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144cf22c0 FUN_144cf22c0 body=3968 status=ok
// SIG undefined FUN_144cf22c0(void)

undefined8
FUN_144cf22c0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
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
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  ulonglong local_b58;
  ulonglong uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  longlong local_b38;
  longlong lStack_b30;
  longlong local_b28;
  ulonglong local_b08;
  ulonglong uStack_b00;
  ulonglong local_af8;
  ulonglong uStack_af0;
  ulonglong local_ae8;
  ulonglong uStack_ae0;
  undefined4 local_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  ulonglong local_ac8;
  ulonglong local_ac0;
  longlong local_ab8;
  ulonglong local_aa8;
  ulonglong uStack_aa0;
  ulonglong local_a98;
  ulonglong uStack_a90;
  ulonglong local_a88;
  ulonglong uStack_a80;
  longlong local_a78;
  longlong lStack_a70;
  ulonglong local_a68;
  ulonglong uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  ulonglong local_a28;
  ulonglong uStack_a20;
  ulonglong local_a18;
  ulonglong uStack_a10;
  ulonglong uStack_a08;
  ulonglong local_a00;
  ulonglong uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  longlong lStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  longlong lStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  ulonglong local_988;
  longlong lStack_980;
  undefined4 local_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 local_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  ulonglong local_948;
  ulonglong uStack_940;
  longlong local_938;
  ulonglong uStack_930;
  ulonglong local_928;
  ulonglong uStack_920;
  ulonglong local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  longlong lStack_900;
  ulonglong local_8f8;
  ulonglong uStack_8f0;
  ulonglong local_8e8;
  ulonglong uStack_8e0;
  ulonglong local_8d8;
  ulonglong uStack_8d0;
  longlong local_8c8;
  longlong lStack_8c0;
  longlong local_8b8;
  longlong lStack_8b0;
  longlong local_8a8;
  ulonglong uStack_8a0;
  ulonglong local_898;
  ulonglong uStack_890;
  ulonglong local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  ulonglong local_868;
  ulonglong uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  ulonglong local_848;
  ulonglong uStack_840;
  ulonglong local_838;
  ulonglong uStack_830;
  ulonglong local_828;
  ulonglong uStack_820;
  ulonglong local_818;
  ulonglong uStack_810;
  ulonglong local_808;
  ulonglong uStack_800;
  ulonglong local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  longlong lStack_7e0;
  ulonglong local_7d8;
  ulonglong uStack_7d0;
  ulonglong local_7c8;
  ulonglong local_7b8;
  ulonglong uStack_7b0;
  ulonglong local_7a8;
  ulonglong uStack_7a0;
  ulonglong local_798;
  ulonglong uStack_790;
  longlong local_788;
  longlong lStack_780;
  ulonglong local_778;
  ulonglong uStack_770;
  longlong local_768;
  ulonglong uStack_760;
  ulonglong local_758;
  ulonglong uStack_750;
  ulonglong local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong lStack_730;
  ulonglong local_728;
  ulonglong uStack_720;
  ulonglong local_718;
  ulonglong uStack_710;
  ulonglong local_708;
  ulonglong uStack_700;
  longlong local_6f8;
  ulonglong local_6d8;
  ulonglong uStack_6d0;
  ulonglong local_6c8;
  ulonglong uStack_6c0;
  ulonglong local_6b8;
  ulonglong uStack_6b0;
  ulonglong local_6a8;
  ulonglong uStack_6a0;
  ulonglong local_698;
  ulonglong uStack_690;
  ulonglong local_688;
  ulonglong uStack_680;
  ulonglong local_668;
  ulonglong uStack_660;
  ulonglong local_658;
  ulonglong uStack_650;
  ulonglong local_648;
  ulonglong uStack_640;
  ulonglong local_638;
  ulonglong uStack_630;
  ulonglong local_628;
  ulonglong uStack_620;
  ulonglong local_618;
  ulonglong uStack_610;
  ulonglong local_608;
  ulonglong uStack_600;
  ulonglong local_5f8;
  ulonglong uStack_5f0;
  ulonglong local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  longlong lStack_5d0;
  ulonglong local_5c8;
  ulonglong uStack_5c0;
  ulonglong local_5b8;
  ulonglong uStack_5b0;
  ulonglong local_5a8;
  ulonglong uStack_5a0;
  longlong local_598;
  ulonglong uStack_590;
  ulonglong local_588;
  ulonglong uStack_580;
  longlong local_578;
  ulonglong local_568;
  ulonglong uStack_560;
  ulonglong local_558;
  ulonglong uStack_550;
  ulonglong local_548;
  ulonglong uStack_540;
  ulonglong local_538;
  ulonglong uStack_530;
  ulonglong local_528;
  ulonglong uStack_520;
  ulonglong local_518;
  ulonglong uStack_510;
  ulonglong local_508;
  ulonglong uStack_500;
  ulonglong local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong lStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  ulonglong uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  ulonglong uStack_488;
  longlong local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  ulonglong uStack_448;
  ulonglong local_440;
  longlong lStack_438;
  ulonglong local_430;
  ulonglong uStack_428;
  ulonglong local_420;
  ulonglong uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  longlong local_400;
  ulonglong uStack_3f8;
  ulonglong local_3f0;
  ulonglong uStack_3e8;
  ulonglong uStack_3e0;
  ulonglong local_3d8;
  ulonglong uStack_3d0;
  longlong local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  ulonglong local_3a8;
  longlong lStack_3a0;
  ulonglong local_368;
  ulonglong uStack_360;
  longlong local_358;
  ulonglong uStack_350;
  ulonglong local_348;
  ulonglong uStack_340;
  ulonglong local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong lStack_320;
  ulonglong local_318;
  ulonglong uStack_310;
  ulonglong local_308;
  ulonglong uStack_300;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  longlong lStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  ulonglong local_2a0;
  ulonglong uStack_298;
  longlong local_290;
  ulonglong uStack_288;
  ulonglong local_280;
  ulonglong uStack_278;
  ulonglong local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  longlong lStack_258;
  ulonglong local_250;
  ulonglong uStack_248;
  ulonglong local_240;
  ulonglong uStack_238;
  ulonglong local_230;
  ulonglong uStack_228;
  ulonglong local_218 [64];
  
  local_a68 = *param_2;
  uStack_a60 = param_2[1];
  local_a58 = param_2[2];
  uStack_a50 = param_2[3];
  local_a48 = param_2[4];
  uStack_a40 = param_2[5];
  local_a38 = param_2[6];
  uStack_a30 = param_2[7];
  local_a28 = param_2[0xc];
  uStack_a20 = param_2[0xd];
  local_a18 = param_2[0xe];
  uStack_a10 = param_2[0xf];
  local_6d8 = *param_3;
  uStack_6d0 = param_3[1];
  local_6c8 = param_3[2];
  uStack_6c0 = param_3[3];
  local_6b8 = param_3[4];
  uStack_6b0 = param_3[5];
  local_6a8 = param_3[6];
  uStack_6a0 = param_3[7];
  local_698 = param_3[0xc];
  uStack_690 = param_3[0xd];
  local_688 = param_3[0xe];
  uStack_680 = param_3[0xf];
  FUN_144ceaef0(&local_988,&local_6d8,&local_a68);
  uVar2 = local_8e8;
  local_a98 = local_918;
  uStack_a90 = uStack_910;
  local_aa8 = local_908;
  uStack_aa0 = lStack_900;
  local_a88 = local_8f8;
  uStack_a80 = uStack_8f0;
  puVar7 = (ulonglong *)FUN_144cfdf30(&local_b78,&local_988,&local_988);
  local_658 = *puVar7;
  uStack_650 = puVar7[1];
  local_858 = puVar7[2];
  uStack_850 = puVar7[3];
  local_848 = puVar7[4];
  uStack_840 = puVar7[5];
  local_838 = puVar7[6];
  uStack_830 = puVar7[7];
  local_828 = puVar7[8];
  uStack_820 = puVar7[9];
  local_818 = puVar7[10];
  uStack_810 = puVar7[0xb];
  local_808 = puVar7[0xc];
  uStack_800 = puVar7[0xd];
  local_7e8 = local_aa8;
  lStack_7e0 = uStack_aa0;
  local_7f8 = local_a98;
  uStack_7f0 = uStack_a90;
  local_7c8 = uVar2;
  local_7d8 = local_a88;
  uStack_7d0 = uStack_a80;
  local_5e8 = local_a98;
  uStack_5e0 = uStack_a90;
  local_5d8 = local_aa8;
  lStack_5d0 = uStack_aa0;
  local_6c8 = param_2[2];
  uStack_6c0 = param_2[3];
  local_5c8 = local_a88;
  uStack_5c0 = uStack_a80;
  local_5b8 = uVar2;
  local_a88 = *param_2;
  uStack_a80 = param_2[1];
  local_b08 = param_2[4];
  uStack_b00 = param_2[5];
  local_6a8 = param_2[6];
  local_868 = param_2[6];
  uStack_6a0 = param_2[7];
  uStack_860 = param_2[7];
  local_aa8 = param_2[0xc];
  uStack_aa0 = param_2[0xd];
  local_a98 = param_2[0xe];
  uStack_a90 = param_2[0xf];
  local_6d8 = local_a88;
  uStack_6d0 = uStack_a80;
  local_6b8 = local_b08;
  uStack_6b0 = uStack_b00;
  local_698 = local_aa8;
  uStack_690 = uStack_aa0;
  local_688 = local_a98;
  uStack_680 = uStack_a90;
  local_668 = local_6c8;
  uStack_660 = uStack_6c0;
  local_648 = local_858;
  uStack_640 = uStack_850;
  local_638 = local_848;
  uStack_630 = uStack_840;
  local_628 = local_838;
  uStack_620 = uStack_830;
  local_618 = local_828;
  uStack_610 = uStack_820;
  local_608 = local_818;
  uStack_600 = uStack_810;
  local_5f8 = local_808;
  uStack_5f0 = uStack_800;
  FUN_144ccf3e0(&local_698,*param_4,&local_b78);
  bVar13 = local_b78 < local_a88;
  local_a88 = local_b78 - local_a88;
  bVar14 = uStack_b70 < uStack_a80;
  uVar2 = uStack_b70 - uStack_a80;
  uStack_a80 = uVar2 - bVar13;
  uVar2 = (ulonglong)(bVar14 || uVar2 < bVar13);
  local_a78 = (local_b68 - local_668) - uVar2;
  lStack_a70 = (uStack_b60 - uStack_660) -
               (ulonglong)(local_b68 < local_668 || local_b68 - local_668 < uVar2);
  local_a68 = local_a88;
  uStack_a60 = uStack_a80;
  local_a58 = local_a78;
  uStack_a50 = lStack_a70;
  FUN_144ccf3e0(&local_698,param_4[1],&local_b78);
  bVar13 = local_b78 < local_b08;
  local_b08 = local_b78 - local_b08;
  bVar14 = uStack_b70 < uStack_b00;
  uStack_b70 = uStack_b70 - uStack_b00;
  uStack_b00 = uStack_b70 - bVar13;
  uVar2 = (ulonglong)(bVar14 || uStack_b70 < bVar13);
  local_af8 = (local_b68 - local_868) - uVar2;
  uStack_af0 = (uStack_b60 - uStack_860) -
               (ulonglong)(local_b68 < local_868 || local_b68 - local_868 < uVar2);
  local_a28 = local_aa8;
  uStack_a20 = uStack_aa0;
  local_a18 = local_a98;
  uStack_a10 = uStack_a90;
  local_a48 = local_b08;
  uStack_a40 = uStack_b00;
  local_a38 = local_af8;
  uStack_a30 = uStack_af0;
  FUN_144d017f0(&local_a48,&uStack_950,&local_b08);
  FUN_144d017f0(&local_a68,&local_988,&local_868);
  local_b78 = local_868 + local_b08;
  uStack_b70 = uStack_860 + uStack_b00 + (ulonglong)CARRY8(local_868,local_b08);
  uVar2 = (ulonglong)
          (CARRY8(uStack_860,uStack_b00) ||
          CARRY8(uStack_860 + uStack_b00,(ulonglong)CARRY8(local_868,local_b08)));
  local_b68 = local_858 + local_af8 + uVar2;
  uVar2 = (ulonglong)(CARRY8(local_858,local_af8) || CARRY8(local_858 + local_af8,uVar2));
  uStack_b60 = uStack_850 + uStack_af0 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uStack_850,uStack_af0) || CARRY8(uStack_850 + uStack_af0,uVar2));
  local_b58 = local_848 + local_ae8 + uVar2;
  uVar2 = (ulonglong)(CARRY8(local_848,local_ae8) || CARRY8(local_848 + local_ae8,uVar2));
  uStack_b50 = uStack_840 + uStack_ae0 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uStack_840,uStack_ae0) || CARRY8(uStack_840 + uStack_ae0,uVar2));
  uVar1 = local_838 + CONCAT44(uStack_ad4,local_ad8);
  local_b48 = uVar1 + uVar2;
  uVar2 = (ulonglong)(CARRY8(local_838,CONCAT44(uStack_ad4,local_ad8)) || CARRY8(uVar1,uVar2));
  uVar1 = uStack_830 + CONCAT44(uStack_acc,uStack_ad0);
  uStack_b40 = uVar1 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uStack_830,CONCAT44(uStack_acc,uStack_ad0)) || CARRY8(uVar1,uVar2));
  local_b38 = local_828 + local_ac8 + uVar2;
  uVar2 = (ulonglong)(CARRY8(local_828,local_ac8) || CARRY8(local_828 + local_ac8,uVar2));
  lStack_b30 = uStack_820 + local_ac0 + uVar2;
  uStack_a08 = uStack_aa0;
  local_b28 = local_818 + local_ab8 +
              (ulonglong)(CARRY8(uStack_820,local_ac0) || CARRY8(uStack_820 + local_ac0,uVar2));
  local_a00 = local_a98;
  uStack_9f8 = uStack_a90;
  uStack_a10 = local_aa8;
  uStack_760 = local_aa8;
  local_758 = uStack_aa0;
  uStack_750 = local_a98;
  local_748 = uStack_a90;
  local_a18 = local_b28;
  local_7b8 = local_b78;
  uStack_7b0 = uStack_b70;
  local_7a8 = local_b68;
  uStack_7a0 = uStack_b60;
  local_798 = local_b58;
  uStack_790 = uStack_b50;
  local_788 = local_b48;
  lStack_780 = uStack_b40;
  local_778 = local_b38;
  uStack_770 = lStack_b30;
  local_768 = local_b28;
  FUN_144cf8560(&local_988,&local_7b8,&local_658);
  bVar5 = FUN_144cfd2e0(&local_988);
  if ((byte)(((byte)((ulonglong)lStack_900 >> 0x3f) ^ 1) & (bVar5 ^ 1)) == 0) {
    uVar19 = (undefined4)param_2[8];
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar21 = (undefined4)param_2[9];
    uVar22 = *(undefined4 *)((longlong)param_2 + 0x4c);
    uVar23 = (undefined4)param_2[10];
    uVar24 = *(undefined4 *)((longlong)param_2 + 0x54);
    uVar25 = (undefined4)param_2[0xb];
    uVar26 = *(undefined4 *)((longlong)param_2 + 0x5c);
    local_b58 = param_2[0xc];
    uStack_b50 = param_2[0xd];
    uVar15 = (undefined4)param_2[0xe];
    uVar16 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar17 = (undefined4)param_2[0xf];
    uVar18 = *(undefined4 *)((longlong)param_2 + 0x7c);
    goto LAB_144cf27d7;
  }
  if (lStack_900 < 0) {
LAB_144cf2953:
    bVar13 = false;
  }
  else {
    local_7b8 = local_8f8;
    uStack_7b0 = uStack_8f0;
    local_7a8 = local_8e8;
    uStack_7a0 = uStack_8e0;
    local_798 = local_8d8;
    uStack_790 = uStack_8d0;
    local_788 = local_8c8;
    lStack_780 = lStack_8c0;
    local_778 = local_8b8;
    uStack_770 = lStack_8b0;
    local_768 = local_8a8;
    uStack_760 = uStack_8a0;
    local_758 = local_898;
    uStack_750 = uStack_890;
    local_748 = local_888;
    uStack_740 = uStack_880;
    local_738 = local_878;
    lStack_730 = uStack_870;
    local_a68 = local_988;
    uStack_a60 = lStack_980;
    local_a58 = CONCAT44(uStack_974,local_978);
    uStack_a50 = CONCAT44(uStack_96c,uStack_970);
    local_a48 = CONCAT44(uStack_964,local_968);
    uStack_a40 = CONCAT44(uStack_95c,uStack_960);
    local_a38 = CONCAT44(uStack_954,local_958);
    uStack_a30 = CONCAT44(uStack_94c,uStack_950);
    local_a28 = local_948;
    uStack_a20 = uStack_940;
    local_a18 = local_938;
    uStack_a10 = uStack_930;
    uStack_a08 = local_928;
    local_a00 = uStack_920;
    uStack_9f8 = local_918;
    uStack_9f0 = uStack_910;
    local_9e8 = local_908;
    lStack_9e0 = lStack_900;
    cVar6 = FUN_144d040d0(&local_a68,&local_7b8);
    if (cVar6 != '\0') goto LAB_144cf2953;
    bVar13 = true;
  }
  if (!bVar13) {
    local_b78 = param_2[8];
    uStack_b70 = param_2[9];
    local_b68 = param_2[10];
    uStack_b60 = param_2[0xb];
    local_b58 = param_2[0xc];
    uStack_b50 = param_2[0xd];
    local_b48 = param_2[0xe];
    uStack_b40 = param_2[0xf];
    local_868 = param_3[8];
    uStack_860 = param_3[9];
    local_858 = param_3[10];
    uStack_850 = param_3[0xb];
    local_848 = param_3[0xc];
    uStack_840 = param_3[0xd];
    local_838 = param_3[0xe];
    uStack_830 = param_3[0xf];
    puVar7 = (ulonglong *)FUN_144ceecd0(&local_6d8,&local_868,&local_b78);
    lVar11 = 2;
    local_a68 = *puVar7;
    uStack_a60 = puVar7[1];
    local_a58 = puVar7[2];
    uStack_a50 = puVar7[3];
    local_a48 = puVar7[4];
    uStack_a40 = puVar7[5];
    local_a38 = puVar7[6];
    local_b78 = puVar7[7];
    uStack_b70 = puVar7[8];
    local_b68 = puVar7[9];
    uStack_b60 = puVar7[10];
    local_b58 = puVar7[0xb];
    uStack_b50 = puVar7[0xc];
    local_b48 = puVar7[0xd];
    puVar7 = &local_3a8;
    puVar9 = &local_988;
    do {
      puVar10 = puVar9;
      puVar8 = puVar7;
      uVar2 = puVar10[1];
      uVar1 = puVar10[2];
      uVar4 = puVar10[3];
      *puVar8 = *puVar10;
      puVar8[1] = uVar2;
      uVar2 = puVar10[4];
      uVar3 = puVar10[5];
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      uVar1 = puVar10[6];
      uVar4 = puVar10[7];
      puVar8[4] = uVar2;
      puVar8[5] = uVar3;
      uVar2 = puVar10[8];
      uVar3 = puVar10[9];
      puVar8[6] = uVar1;
      puVar8[7] = uVar4;
      uVar1 = puVar10[10];
      uVar4 = puVar10[0xb];
      puVar8[8] = uVar2;
      puVar8[9] = uVar3;
      uVar2 = puVar10[0xc];
      uVar3 = puVar10[0xd];
      puVar8[10] = uVar1;
      puVar8[0xb] = uVar4;
      uVar1 = puVar10[0xe];
      uVar4 = puVar10[0xf];
      puVar8[0xc] = uVar2;
      puVar8[0xd] = uVar3;
      puVar8[0xe] = uVar1;
      puVar8[0xf] = uVar4;
      lVar11 = lVar11 + -1;
      puVar7 = puVar8 + 0x10;
      puVar9 = puVar10 + 0x10;
    } while (lVar11 != 0);
    uVar2 = puVar10[0x11];
    uVar1 = puVar10[0x12];
    uVar4 = puVar10[0x13];
    puVar8[0x10] = puVar10[0x10];
    puVar8[0x11] = uVar2;
    puVar8[0x12] = uVar1;
    puVar8[0x13] = uVar4;
    local_7b8 = local_8f8;
    uStack_7b0 = uStack_8f0;
    local_7a8 = local_8e8;
    uStack_7a0 = uStack_8e0;
    local_798 = local_8d8;
    uStack_790 = uStack_8d0;
    local_788 = local_8c8;
    lStack_780 = lStack_8c0;
    local_778 = local_8b8;
    uStack_770 = lStack_8b0;
    local_768 = local_8a8;
    uStack_760 = uStack_8a0;
    local_758 = local_898;
    uStack_750 = uStack_890;
    local_748 = local_888;
    uStack_740 = uStack_880;
    local_738 = local_878;
    lStack_730 = uStack_870;
    uStack_a30 = local_b78;
    local_a28 = uStack_b70;
    uStack_a20 = local_b68;
    local_a18 = uStack_b60;
    uStack_a10 = local_b58;
    uStack_a08 = uStack_b50;
    local_a00 = local_b48;
    FUN_144d00a20(&local_7b8,&local_b78,&local_988);
    local_648 = CONCAT44(uStack_974,local_978);
    uStack_640 = CONCAT44(uStack_96c,uStack_970);
    local_658 = local_988;
    uStack_650 = lStack_980;
    local_638 = CONCAT44(uStack_964,local_968);
    uStack_630 = CONCAT44(uStack_95c,uStack_960);
    local_628 = CONCAT44(uStack_954,local_958);
    uStack_620 = CONCAT44(uStack_94c,uStack_950);
    local_618 = local_948;
    uStack_610 = uStack_940;
    local_608 = local_938;
    uStack_600 = uStack_930;
    local_5f8 = local_928;
    uStack_5f0 = uStack_920;
    local_5e8 = local_918;
    uStack_5e0 = uStack_910;
    local_5d8 = local_908;
    lStack_5d0 = lStack_900;
    local_5c8 = local_8f8;
    uStack_5c0 = uStack_8f0;
    local_5b8 = local_8e8;
    uStack_5b0 = uStack_8e0;
    local_5a8 = local_8d8;
    uStack_5a0 = uStack_8d0;
    FUN_144d00a20(&local_3a8,&local_a68,&local_988);
    if (lStack_320 < 0) {
      bVar13 = local_8f8 < local_a68;
      local_8f8 = local_8f8 - local_a68;
      bVar14 = uStack_8f0 < uStack_a60;
      uVar2 = uStack_8f0 - uStack_a60;
      uStack_8f0 = uVar2 - bVar13;
      uVar2 = (ulonglong)(bVar14 || uVar2 < bVar13);
      bVar13 = local_8e8 < local_a58;
      uVar1 = local_8e8 - local_a58;
      local_8e8 = uVar1 - uVar2;
      uVar2 = (ulonglong)(bVar13 || uVar1 < uVar2);
      bVar13 = uStack_8e0 < uStack_a50;
      uVar1 = uStack_8e0 - uStack_a50;
      uStack_8e0 = uVar1 - uVar2;
      uVar2 = (ulonglong)(bVar13 || uVar1 < uVar2);
      bVar13 = local_8d8 < local_a48;
      uVar1 = local_8d8 - local_a48;
      local_8d8 = uVar1 - uVar2;
      uVar2 = (ulonglong)(bVar13 || uVar1 < uVar2);
      bVar13 = uStack_8d0 < uStack_a40;
      uVar1 = uStack_8d0 - uStack_a40;
      uStack_8d0 = uVar1 - uVar2;
      local_8c8 = (local_8c8 - local_a38) - (ulonglong)(bVar13 || uVar1 < uVar2);
    }
    if ((longlong)local_a38 < 0) {
      FUN_144d024f0(&local_988,&local_3a8);
    }
    local_7b8 = local_988;
    uStack_7b0 = lStack_980;
    local_778 = local_948;
    uStack_770 = uStack_940;
    local_768 = local_938;
    uStack_760 = uStack_930;
    local_758 = local_928;
    uStack_750 = uStack_920;
    local_748 = local_918;
    uStack_740 = uStack_910;
    local_738 = local_908;
    lStack_730 = lStack_900;
    local_728 = local_8f8;
    uStack_720 = uStack_8f0;
    local_718 = local_8e8;
    uStack_710 = uStack_8e0;
    local_708 = local_8d8;
    uStack_700 = uStack_8d0;
    local_6f8 = local_8c8;
    local_3a8 = local_988;
    lStack_3a0 = lStack_980;
    local_368 = local_948;
    uStack_360 = uStack_940;
    local_358 = local_938;
    uStack_350 = uStack_930;
    local_348 = local_928;
    uStack_340 = uStack_920;
    local_338 = local_918;
    uStack_330 = uStack_910;
    local_328 = local_908;
    lStack_320 = lStack_900;
    local_318 = local_8f8;
    uStack_310 = uStack_8f0;
    local_308 = local_8e8;
    uStack_300 = uStack_8e0;
    local_2f8 = local_8d8;
    uStack_2f0 = uStack_8d0;
    local_2e8 = local_8c8;
    local_2e0 = local_658;
    lStack_2d8 = uStack_650;
    local_2d0 = local_648;
    uStack_2c8 = uStack_640;
    local_2c0 = local_638;
    uStack_2b8 = uStack_630;
    local_2b0 = local_628;
    uStack_2a8 = uStack_620;
    local_2a0 = local_618;
    uStack_298 = uStack_610;
    local_290 = local_608;
    uStack_288 = uStack_600;
    local_280 = local_5f8;
    uStack_278 = uStack_5f0;
    local_270 = local_5e8;
    uStack_268 = uStack_5e0;
    local_260 = local_5d8;
    lStack_258 = lStack_5d0;
    local_250 = local_5c8;
    uStack_248 = uStack_5c0;
    lVar12 = 3;
    local_240 = local_5b8;
    uStack_238 = uStack_5b0;
    lVar11 = 3;
    local_230 = local_5a8;
    uStack_228 = uStack_5a0;
    puVar7 = &local_3a8;
    puVar9 = &local_568;
    do {
      puVar8 = puVar9 + 0x10;
      uVar2 = puVar7[1];
      uVar1 = puVar7[2];
      uVar4 = puVar7[3];
      puVar10 = puVar7 + 0x10;
      *puVar9 = *puVar7;
      puVar9[1] = uVar2;
      uVar2 = puVar7[4];
      uVar3 = puVar7[5];
      puVar9[2] = uVar1;
      puVar9[3] = uVar4;
      uVar1 = puVar7[6];
      uVar4 = puVar7[7];
      puVar9[4] = uVar2;
      puVar9[5] = uVar3;
      uVar2 = puVar7[8];
      uVar3 = puVar7[9];
      puVar9[6] = uVar1;
      puVar9[7] = uVar4;
      uVar1 = puVar7[10];
      uVar4 = puVar7[0xb];
      puVar9[8] = uVar2;
      puVar9[9] = uVar3;
      uVar2 = puVar7[0xc];
      uVar3 = puVar7[0xd];
      puVar9[10] = uVar1;
      puVar9[0xb] = uVar4;
      uVar1 = puVar7[0xe];
      uVar4 = puVar7[0xf];
      puVar9[0xc] = uVar2;
      puVar9[0xd] = uVar3;
      puVar9[0xe] = uVar1;
      puVar9[0xf] = uVar4;
      lVar11 = lVar11 + -1;
      puVar7 = puVar10;
      puVar9 = puVar8;
    } while (lVar11 != 0);
    local_b08 = param_2[8];
    uStack_b00 = param_2[9];
    *puVar8 = *puVar10;
    local_af8 = param_2[10];
    uStack_af0 = param_2[0xb];
    local_ae8 = param_2[0xc];
    uStack_ae0 = param_2[0xd];
    local_ad8 = (undefined4)param_2[0xe];
    uStack_ad4 = *(undefined4 *)((longlong)param_2 + 0x74);
    uStack_ad0 = (undefined4)param_2[0xf];
    uStack_acc = *(undefined4 *)((longlong)param_2 + 0x7c);
    FUN_144d046f0(&local_ae8,&local_568,&local_658);
    if (local_4a8 < 0) {
      bVar13 = uStack_590 < local_ae8;
      uStack_590 = uStack_590 - local_ae8;
      bVar14 = local_588 < uStack_ae0;
      uVar2 = local_588 - uStack_ae0;
      local_588 = uVar2 - bVar13;
      uVar2 = (ulonglong)(bVar14 || uVar2 < bVar13);
      bVar13 = uStack_580 < CONCAT44(uStack_ad4,local_ad8);
      uVar1 = uStack_580 - CONCAT44(uStack_ad4,local_ad8);
      uStack_580 = uVar1 - uVar2;
      local_578 = (local_578 - CONCAT44(uStack_acc,uStack_ad0)) -
                  (ulonglong)(bVar13 || uVar1 < uVar2);
    }
    FUN_144cffe10(&local_658,&local_988);
    FUN_144d02610(&uStack_4a0,&local_b08,&local_658);
    if ((longlong)uStack_af0 < 0) {
      FUN_144d04320(&local_658,&uStack_4a0);
    }
    FUN_144d04620(&local_658,&local_7b8);
    FUN_144d01030(&local_7b8,&local_988,&local_a68);
    local_658 = uStack_4a0;
    uStack_650 = uStack_498;
    local_648 = uStack_490;
    uStack_640 = uStack_488;
    local_638 = local_480;
    uStack_630 = uStack_478;
    local_628 = local_470;
    uStack_620 = uStack_468;
    local_618 = local_460;
    uStack_610 = uStack_458;
    local_608 = local_450;
    uStack_600 = uStack_448;
    local_5f8 = local_440;
    uStack_5f0 = lStack_438;
    local_5e8 = local_430;
    uStack_5e0 = uStack_428;
    local_5d8 = local_420;
    lStack_5d0 = uStack_418;
    local_5c8 = local_410;
    uStack_5c0 = uStack_408;
    local_5b8 = local_400;
    uStack_5b0 = uStack_3f8;
    local_5a8 = local_3f0;
    uStack_5a0 = uStack_3e8;
    local_858 = CONCAT44(uStack_ad4,local_ad8);
    uStack_850 = CONCAT44(uStack_acc,uStack_ad0);
    local_868 = local_ae8;
    uStack_860 = uStack_ae0;
    FUN_144d01120(&local_868,&local_658,&local_988);
    local_658 = local_988;
    uStack_650 = lStack_980;
    local_618 = local_948;
    uStack_610 = uStack_940;
    local_608 = local_938;
    uStack_600 = uStack_930;
    local_5f8 = local_928;
    uStack_5f0 = uStack_920;
    local_5e8 = local_918;
    uStack_5e0 = uStack_910;
    local_5d8 = local_908;
    lStack_5d0 = lStack_900;
    local_5c8 = local_8f8;
    uStack_5c0 = uStack_8f0;
    local_5b8 = local_8e8;
    uStack_5b0 = uStack_8e0;
    local_5a8 = local_8d8;
    uStack_5a0 = uStack_8d0;
    local_598 = local_8c8;
    uStack_590 = lStack_8c0;
    local_588 = local_8b8;
    uStack_580 = lStack_8b0;
    local_568 = local_a68;
    uStack_560 = uStack_a60;
    local_558 = local_a58;
    uStack_550 = uStack_a50;
    local_548 = local_a48;
    uStack_540 = uStack_a40;
    local_538 = local_a38;
    uStack_530 = uStack_a30;
    local_528 = local_a28;
    uStack_520 = uStack_a20;
    local_518 = local_a18;
    uStack_510 = uStack_a10;
    local_508 = uStack_a08;
    uStack_500 = local_a00;
    local_4f8 = uStack_9f8;
    uStack_4f0 = uStack_9f0;
    local_4e8 = local_9e8;
    lStack_4e0 = lStack_9e0;
    local_4d8 = local_9d8;
    uStack_4d0 = uStack_9d0;
    local_4c8 = local_9c8;
    uStack_4c0 = uStack_9c0;
    local_4b8 = local_9b8;
    uStack_4b0 = uStack_9b0;
    local_4a8 = local_9a8;
    uStack_4a0 = lStack_9a0;
    uStack_498 = local_998;
    uStack_490 = uStack_990;
    uStack_488 = local_988;
    local_480 = lStack_980;
    uStack_448 = local_948;
    local_440 = uStack_940;
    lStack_438 = local_938;
    local_430 = uStack_930;
    uStack_428 = local_928;
    local_420 = uStack_920;
    uStack_418 = local_918;
    local_410 = uStack_910;
    uStack_408 = local_908;
    local_400 = lStack_900;
    uStack_3f8 = local_8f8;
    local_3f0 = uStack_8f0;
    uStack_3e8 = local_8e8;
    uStack_3e0 = uStack_8e0;
    local_3d8 = local_8d8;
    uStack_3d0 = uStack_8d0;
    local_3c8 = local_8c8;
    lStack_3c0 = lStack_8c0;
    local_3b8 = local_8b8;
    lStack_3b0 = lStack_8b0;
    puVar7 = &local_568;
    puVar9 = local_218;
    do {
      puVar10 = puVar9;
      puVar8 = puVar7;
      uVar2 = puVar8[1];
      uVar1 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar10 = *puVar8;
      puVar10[1] = uVar2;
      uVar2 = puVar8[4];
      uVar3 = puVar8[5];
      puVar10[2] = uVar1;
      puVar10[3] = uVar4;
      uVar1 = puVar8[6];
      uVar4 = puVar8[7];
      puVar10[4] = uVar2;
      puVar10[5] = uVar3;
      uVar2 = puVar8[8];
      uVar3 = puVar8[9];
      puVar10[6] = uVar1;
      puVar10[7] = uVar4;
      uVar1 = puVar8[10];
      uVar4 = puVar8[0xb];
      puVar10[8] = uVar2;
      puVar10[9] = uVar3;
      uVar2 = puVar8[0xc];
      uVar3 = puVar8[0xd];
      puVar10[10] = uVar1;
      puVar10[0xb] = uVar4;
      uVar1 = puVar8[0xe];
      uVar4 = puVar8[0xf];
      puVar10[0xc] = uVar2;
      puVar10[0xd] = uVar3;
      puVar10[0xe] = uVar1;
      puVar10[0xf] = uVar4;
      lVar12 = lVar12 + -1;
      puVar7 = puVar8 + 0x10;
      puVar9 = puVar10 + 0x10;
    } while (lVar12 != 0);
    uVar2 = puVar8[0x11];
    uVar1 = puVar8[0x12];
    uVar4 = puVar8[0x13];
    puVar10[0x10] = puVar8[0x10];
    puVar10[0x11] = uVar2;
    uVar2 = puVar8[0x14];
    uVar3 = puVar8[0x15];
    puVar10[0x12] = uVar1;
    puVar10[0x13] = uVar4;
    uVar1 = puVar8[0x16];
    uVar19 = *(undefined4 *)((longlong)puVar8 + 0xb4);
    uVar4 = puVar8[0x17];
    uVar20 = *(undefined4 *)((longlong)puVar8 + 0xbc);
    puVar10[0x14] = uVar2;
    puVar10[0x15] = uVar3;
    *(int *)(puVar10 + 0x16) = (int)uVar1;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = uVar19;
    *(int *)(puVar10 + 0x17) = (int)uVar4;
    *(undefined4 *)((longlong)puVar10 + 0xbc) = uVar20;
    FUN_144cf8a60(param_1,local_218);
    return param_1;
  }
  uVar19 = (undefined4)param_3[8];
  uVar20 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar21 = (undefined4)param_3[9];
  uVar22 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar23 = (undefined4)param_3[10];
  uVar24 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar25 = (undefined4)param_3[0xb];
  uVar26 = *(undefined4 *)((longlong)param_3 + 0x5c);
  local_b58 = param_3[0xc];
  uStack_b50 = param_3[0xd];
  uVar15 = (undefined4)param_3[0xe];
  uVar16 = *(undefined4 *)((longlong)param_3 + 0x74);
  uVar17 = (undefined4)param_3[0xf];
  uVar18 = *(undefined4 *)((longlong)param_3 + 0x7c);
LAB_144cf27d7:
  local_b78 = CONCAT44(uVar20,uVar19);
  uStack_b70 = CONCAT44(uVar22,uVar21);
  local_b68 = CONCAT44(uVar24,uVar23);
  uStack_b60 = CONCAT44(uVar26,uVar25);
  local_b48 = CONCAT44(uVar16,uVar15);
  uStack_b40 = CONCAT44(uVar18,uVar17);
  FUN_144ce2430(param_1,&local_b78);
  return param_1;
}



// FUNCTION 144cf3240 FUN_144cf3240 body=199 status=ok
// SIG undefined FUN_144cf3240(void)

undefined8 * FUN_144cf3240(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  FUN_144cfefd0(param_3,param_2,&local_68);
  if (*(longlong *)(param_2 + 0x18) < 0) {
    bVar3 = local_48 < *param_3;
    local_48 = local_48 - *param_3;
    bVar4 = local_40 < param_3[1];
    uVar1 = local_40 - param_3[1];
    local_40 = uVar1 - bVar3;
    uVar1 = (ulonglong)(bVar4 || uVar1 < bVar3);
    bVar3 = local_38 < param_3[2];
    uVar2 = local_38 - param_3[2];
    local_38 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_30 < param_3[3];
    uVar2 = local_30 - param_3[3];
    local_30 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_28 < param_3[4];
    uVar2 = local_28 - param_3[4];
    local_28 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_20 < param_3[5];
    uVar2 = local_20 - param_3[5];
    local_20 = uVar2 - uVar1;
    local_18 = (local_18 - param_3[6]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  param_1[9] = local_20;
  param_1[3] = local_50;
  param_1[10] = local_18;
  param_1[4] = local_48;
  param_1[5] = local_40;
  param_1[6] = local_38;
  param_1[7] = local_30;
  param_1[8] = local_28;
  return param_1;
}



// FUNCTION 144cf3310 FUN_144cf3310 body=332 status=ok
// SIG undefined FUN_144cf3310(void)

undefined8 FUN_144cf3310(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  longlong local_38;
  
  local_res10 = param_2;
  FUN_144cf7c30(&local_118,param_1 + 0x78,&local_res10);
  FUN_144cff530(param_1,local_res10._4_1_,&local_a8,1);
  lVar1 = (local_38 - ((longlong)local_b0 >> 0x3f)) -
          (ulonglong)
          (uStack_40 < local_b0 ||
          uStack_40 - local_b0 <
          (ulonglong)
          (local_48 < local_b8 ||
          local_48 - local_b8 <
          (ulonglong)
          (uStack_50 < local_c0 ||
          uStack_50 - local_c0 <
          (ulonglong)
          (local_58 < local_c8 ||
          local_58 - local_c8 <
          (ulonglong)
          (uStack_60 < local_d0 ||
          uStack_60 - local_d0 <
          (ulonglong)
          (local_68 < local_d8 ||
          local_68 - local_d8 <
          (ulonglong)
          (uStack_70 < local_e0 ||
          uStack_70 - local_e0 <
          (ulonglong)
          (local_78 < local_e8 ||
          local_78 - local_e8 <
          (ulonglong)
          (uStack_80 < local_f0 ||
          uStack_80 - local_f0 <
          (ulonglong)
          (local_88 < local_f8 ||
          local_88 - local_f8 <
          (ulonglong)
          (uStack_90 < local_100 ||
          uStack_90 - local_100 <
          (ulonglong)
          (local_98 < local_108 ||
          local_98 - local_108 <
          (ulonglong)
          (uStack_a0 < local_110 || uStack_a0 - local_110 < (ulonglong)(local_a8 < local_118))))))))
          ))))));
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 < 0);
}



// FUNCTION 144cf3460 FUN_144cf3460 body=625 status=ok
// SIG undefined FUN_144cf3460(void)

longlong * FUN_144cf3460(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  
  FUN_144cc7a40(param_2 + 0xe,param_3,&local_168);
  if (*(longlong *)(param_3 + 0x30) < 0) {
    bVar8 = uStack_130 < (ulonglong)param_2[0xe];
    uStack_130 = uStack_130 - param_2[0xe];
    uVar1 = (ulonglong)bVar8;
    bVar8 = local_128 < (ulonglong)param_2[0xf];
    uVar2 = local_128 - param_2[0xf];
    local_128 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar8 || uVar2 < uVar1);
    bVar8 = uStack_120 < (ulonglong)param_2[0x10];
    uVar2 = uStack_120 - param_2[0x10];
    uStack_120 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar8 || uVar2 < uVar1);
    bVar8 = local_118 < (ulonglong)param_2[0x11];
    uVar2 = local_118 - param_2[0x11];
    local_118 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar8 || uVar2 < uVar1);
    bVar8 = uStack_110 < (ulonglong)param_2[0x12];
    uVar2 = uStack_110 - param_2[0x12];
    uStack_110 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar8 || uVar2 < uVar1);
    bVar8 = local_108 < (ulonglong)param_2[0x13];
    uVar2 = local_108 - param_2[0x13];
    local_108 = uVar2 - uVar1;
    lStack_100 = (lStack_100 - param_2[0x14]) - (ulonglong)(bVar8 || uVar2 < uVar1);
  }
  local_88 = local_168;
  uStack_80 = lStack_160;
  local_78 = (undefined4)local_158;
  uStack_74 = local_158._4_4_;
  uStack_70 = (undefined4)uStack_150;
  uStack_6c = uStack_150._4_4_;
  local_68 = (undefined4)local_148;
  uStack_64 = local_148._4_4_;
  uStack_60 = (undefined4)uStack_140;
  uStack_5c = uStack_140._4_4_;
  local_58 = (undefined4)local_138;
  uStack_54 = local_138._4_4_;
  uStack_50 = (undefined4)uStack_130;
  uStack_4c = uStack_130._4_4_;
  local_48 = local_128;
  uStack_40 = uStack_120;
  local_38 = local_118;
  uStack_30 = uStack_110;
  local_28 = local_108;
  lStack_20 = lStack_100;
  FUN_144cfd1c0(&local_88);
  param_1[0xe] = local_f8;
  param_1[0xf] = lStack_f0;
  param_1[0x10] = local_e8;
  param_1[0x11] = lStack_e0;
  param_1[0x12] = local_d8;
  param_1[0x13] = lStack_d0;
  param_1[0x14] = local_c8;
  param_1[0x15] = lStack_c0;
  param_1[0x16] = local_b8;
  param_1[0x17] = lStack_b0;
  param_1[0x18] = local_a8;
  param_1[0x19] = lStack_a0;
  param_1[0x1a] = local_98;
  param_1[0x1b] = lStack_90;
  if (lStack_100 < 0) {
    plVar7 = &local_168;
    local_168 = -*param_2;
    uVar1 = -param_2[1];
    lStack_160 = uVar1 - (*param_2 != 0);
    uVar1 = (ulonglong)(param_2[1] != 0 || uVar1 < (*param_2 != 0));
    uVar2 = -param_2[2];
    local_158 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[2] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[3];
    uStack_150 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[3] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[4];
    local_148 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[4] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[5];
    uStack_140 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[5] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[6];
    local_138 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[6] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[7];
    uStack_130 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[7] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[8];
    local_128 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[8] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[9];
    uStack_120 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[9] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[10];
    local_118 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[10] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[0xb];
    uStack_110 = uVar2 - uVar1;
    uVar1 = (ulonglong)(param_2[0xb] != 0 || uVar2 < uVar1);
    uVar2 = -param_2[0xc];
    local_108 = uVar2 - uVar1;
    lStack_100 = -(ulonglong)(param_2[0xc] != 0 || uVar2 < uVar1) - param_2[0xd];
  }
  else {
    plVar7 = &local_f8;
    local_f8 = *param_2;
    lStack_f0 = param_2[1];
    local_e8 = param_2[2];
    lStack_e0 = param_2[3];
    local_d8 = param_2[4];
    lStack_d0 = param_2[5];
    local_c8 = param_2[6];
    lStack_c0 = param_2[7];
    local_b8 = param_2[8];
    lStack_b0 = param_2[9];
    local_a8 = param_2[10];
    lStack_a0 = param_2[0xb];
    local_98 = param_2[0xc];
    lStack_90 = param_2[0xd];
  }
  lVar3 = plVar7[1];
  lVar4 = plVar7[2];
  lVar5 = plVar7[3];
  *param_1 = *plVar7;
  param_1[1] = lVar3;
  lVar3 = plVar7[4];
  lVar6 = plVar7[5];
  param_1[2] = lVar4;
  param_1[3] = lVar5;
  lVar4 = plVar7[6];
  lVar5 = plVar7[7];
  param_1[4] = lVar3;
  param_1[5] = lVar6;
  lVar3 = plVar7[8];
  lVar6 = plVar7[9];
  param_1[6] = lVar4;
  param_1[7] = lVar5;
  lVar4 = plVar7[10];
  lVar5 = plVar7[0xb];
  param_1[8] = lVar3;
  param_1[9] = lVar6;
  lVar3 = plVar7[0xc];
  lVar6 = plVar7[0xd];
  param_1[10] = lVar4;
  param_1[0xb] = lVar5;
  param_1[0xc] = lVar3;
  param_1[0xd] = lVar6;
  return param_1;
}



// FUNCTION 144cf36e0 FUN_144cf36e0 body=612 status=ok
// SIG undefined FUN_144cf36e0(void)

undefined8 * FUN_144cf36e0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  
  FUN_144cfe210(param_2 + 0x20,param_3,&local_218);
  if (*(longlong *)(param_3 + 0x68) < 0) {
    bVar3 = local_1a8 < *(ulonglong *)(param_2 + 0x20);
    local_1a8 = local_1a8 - *(ulonglong *)(param_2 + 0x20);
    uVar1 = (ulonglong)bVar3;
    bVar3 = uStack_1a0 < *(ulonglong *)(param_2 + 0x28);
    uVar2 = uStack_1a0 - *(ulonglong *)(param_2 + 0x28);
    uStack_1a0 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_198 < *(ulonglong *)(param_2 + 0x30);
    uVar2 = local_198 - *(ulonglong *)(param_2 + 0x30);
    local_198 = uVar2 - uVar1;
    uStack_190 = (uStack_190 - *(longlong *)(param_2 + 0x38)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  local_188 = local_218;
  uStack_180 = uStack_210;
  local_168 = local_1f8;
  uStack_160 = uStack_1f0;
  local_178 = local_208;
  uStack_170 = uStack_200;
  local_148 = local_1d8;
  uStack_140 = uStack_1d0;
  local_158 = local_1e8;
  uStack_150 = uStack_1e0;
  local_128 = local_1b8;
  uStack_120 = uStack_1b0;
  local_138 = local_1c8;
  uStack_130 = uStack_1c0;
  local_108 = (undefined4)local_198;
  uStack_104 = local_198._4_4_;
  uStack_100 = (undefined4)uStack_190;
  uStack_fc = uStack_190._4_4_;
  local_118 = (undefined4)local_1a8;
  uStack_114 = local_1a8._4_4_;
  uStack_110 = (undefined4)uStack_1a0;
  uStack_10c = uStack_1a0._4_4_;
  FUN_144cfe040(&local_218,param_3 + 0x70,param_2);
  FUN_144cfe120(&local_218,&local_188,&local_d8);
  local_218 = *(undefined8 *)(param_3 + 0x70);
  uStack_210 = *(undefined8 *)(param_3 + 0x78);
  local_208 = *(undefined8 *)(param_3 + 0x80);
  uStack_200 = *(undefined8 *)(param_3 + 0x88);
  local_1f8 = *(undefined8 *)(param_3 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x98);
  local_1e8 = *(undefined8 *)(param_3 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_3 + 0xa8);
  local_1d8 = *(undefined8 *)(param_3 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_3 + 0xb8);
  local_1c8 = *(undefined8 *)(param_3 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_3 + 200);
  local_1b8 = *(undefined8 *)(param_3 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_3 + 0xd8);
  local_f8 = *(undefined4 *)(param_2 + 0x20);
  uStack_f4 = *(undefined4 *)(param_2 + 0x24);
  uStack_f0 = *(undefined4 *)(param_2 + 0x28);
  uStack_ec = *(undefined4 *)(param_2 + 0x2c);
  local_e8 = *(undefined4 *)(param_2 + 0x30);
  uStack_e4 = *(undefined4 *)(param_2 + 0x34);
  uStack_e0 = *(undefined4 *)(param_2 + 0x38);
  uStack_dc = *(undefined4 *)(param_2 + 0x3c);
  FUN_144cfe210(&local_f8,&local_218,&local_188);
  *param_1 = local_d8;
  param_1[1] = uStack_d0;
  param_1[2] = local_c8;
  param_1[3] = uStack_c0;
  param_1[4] = local_b8;
  param_1[5] = uStack_b0;
  param_1[6] = local_a8;
  param_1[7] = uStack_a0;
  param_1[8] = local_98;
  param_1[9] = uStack_90;
  param_1[0x12] = local_188;
  param_1[0x13] = uStack_180;
  param_1[0x14] = local_178;
  param_1[0x15] = uStack_170;
  param_1[10] = local_88;
  param_1[0xb] = uStack_80;
  param_1[0x16] = local_168;
  param_1[0x17] = uStack_160;
  param_1[0xc] = local_78;
  param_1[0xd] = uStack_70;
  param_1[0x18] = local_158;
  param_1[0x19] = uStack_150;
  param_1[0x1a] = local_148;
  param_1[0x1b] = uStack_140;
  param_1[0xe] = local_68;
  param_1[0xf] = uStack_60;
  param_1[0x1c] = local_138;
  param_1[0x1d] = uStack_130;
  param_1[0x10] = local_58;
  param_1[0x11] = uStack_50;
  param_1[0x1e] = local_128;
  param_1[0x1f] = uStack_120;
  param_1[0x20] = CONCAT44(uStack_114,local_118);
  param_1[0x21] = CONCAT44(uStack_10c,uStack_110);
  param_1[0x22] = CONCAT44(uStack_104,local_108);
  return param_1;
}



// FUNCTION 144cf3950 FUN_144cf3950 body=428 status=ok
// SIG undefined FUN_144cf3950(void)

float * FUN_144cf3950(float *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int local_res8 [2];
  
  lVar4 = FUN_144d02070(param_2,local_res8);
  fVar6 = 0.0;
  if ((float)lVar4 != 0.0) {
    iVar9 = 0x10;
    lVar5 = 0x10;
    do {
      uVar8 = *(ulonglong *)(param_2 + 0x90 + lVar5 * 8);
      if (uVar8 != 0) {
        uVar7 = (uint)uVar8 | (uint)(uVar8 >> 1) & 0x7fffffff;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        uVar7 = (uint)(uVar8 >> 0x20);
        uVar7 = uVar7 | uVar7 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        iVar1 = 0x20 - iVar3;
        if (0x1f < 0x20 - iVar3) {
          iVar1 = 0x40 - iVar2;
        }
        iVar2 = iVar9 * 0x40 - iVar1;
        uVar8 = *(longlong *)(param_2 + 0x90 + (longlong)iVar9 * 8) << ((byte)iVar1 & 0x3f);
        if (iVar1 != 0) {
          uVar8 = uVar8 | *(ulonglong *)(param_2 + 0x88 + (longlong)iVar9 * 8) >>
                          (0x40 - (byte)iVar1 & 0x3f);
        }
        goto LAB_144cf3a80;
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
    uVar8 = *(ulonglong *)(param_2 + 0x90);
    iVar2 = 0;
LAB_144cf3a80:
    fVar6 = (float)(local_res8[0] * 0x800000 + iVar2 * -0x800000 +
                   (int)((float)lVar4 / (float)uVar8));
  }
  *param_1 = fVar6;
  param_1[1] = ABS(fVar6) * 1.1920929e-07;
  return param_1;
}



// FUNCTION 144cf3b00 FUN_144cf3b00 body=219 status=ok
// SIG undefined FUN_144cf3b00(void)

undefined8 FUN_144cf3b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar3 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar2 = (ABS(*(float *)(param_2 + 8)) + ABS(*(float *)(param_1 + 8))) * 2.3841858e-07;
  if (fVar2 < fVar3) {
    return 1;
  }
  if (fVar3 < -fVar2) {
    return 0xffffffff;
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_68 = param_2[4];
  uStack_60 = param_2[5];
  local_58 = param_2[6];
  uStack_50 = param_2[7];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = *(undefined4 *)(param_1 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_18 = *(undefined4 *)(param_1 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_10 = *(undefined4 *)(param_1 + 7);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x3c);
  uVar1 = FUN_144cab880(&local_48,&local_88);
  return uVar1;
}



// FUNCTION 144cf3be0 FUN_144cf3be0 body=1672 status=ok
// SIG undefined FUN_144cf3be0(void)

void FUN_144cf3be0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  int local_res20 [2];
  int local_7c8;
  float fStack_7c4;
  int local_7c0;
  float fStack_7bc;
  int local_7b8;
  int local_7b4;
  int local_7b0;
  int local_7ac;
  int local_7a8 [4];
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  int local_738;
  float local_734;
  undefined1 local_728 [8];
  int *local_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  int local_6b8;
  float local_6b4;
  longlong local_6a8;
  longlong lStack_6a0;
  longlong local_698;
  longlong lStack_690;
  longlong local_688;
  longlong lStack_680;
  longlong local_678;
  longlong lStack_670;
  longlong local_668;
  longlong lStack_660;
  longlong local_658;
  longlong lStack_650;
  longlong local_648;
  longlong lStack_640;
  longlong local_638;
  longlong lStack_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  longlong local_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [268];
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined1 local_138 [256];
  
  local_720 = (int *)param_4[1];
  piVar9 = (int *)*param_4;
  if (piVar9 != local_720) {
    do {
      iVar1 = *piVar9;
      FUN_144cb67e0(**(longlong **)(param_1 + 0x28),
                    (longlong)iVar1 * 0x60 + *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28),
                    &local_5f8,&local_578);
      local_798 = local_5f8;
      uStack_794 = uStack_5f4;
      uStack_790 = uStack_5f0;
      uStack_78c = uStack_5ec;
      local_788 = local_5e8;
      uStack_784 = uStack_5e4;
      uStack_780 = uStack_5e0;
      uStack_77c = uStack_5dc;
      local_778 = local_5d8;
      uStack_774 = uStack_5d4;
      uStack_770 = uStack_5d0;
      uStack_76c = uStack_5cc;
      local_768 = local_5c8;
      uStack_764 = uStack_5c4;
      uStack_760 = uStack_5c0;
      uStack_75c = uStack_5bc;
      local_758 = local_598;
      uStack_750 = uStack_590;
      local_748 = local_588;
      uStack_740 = uStack_580;
      fVar10 = (float)FUN_144cc3f10(&local_758,local_res20);
      lVar6 = FUN_147e59322(&local_798,&local_7b8);
      iVar4 = local_res20[0];
      if ((float)lVar6 == 0.0) {
        local_7c8 = 0;
      }
      else {
        local_7c8 = local_7b8 * 0x800000 + local_res20[0] * -0x800000 + (int)((float)lVar6 / fVar10)
        ;
      }
      lVar6 = FUN_147e59322(&local_778,&local_7b4);
      if ((float)lVar6 == 0.0) {
        fStack_7c4 = 0.0;
      }
      else {
        fStack_7c4 = (float)((local_7b4 - iVar4) * 0x800000 + (int)((float)lVar6 / fVar10));
      }
      local_738 = local_7c8;
      local_734 = fStack_7c4;
      local_708 = local_568;
      uStack_704 = uStack_564;
      uStack_700 = uStack_560;
      uStack_6fc = uStack_55c;
      local_718 = local_578;
      uStack_714 = uStack_574;
      uStack_710 = uStack_570;
      uStack_70c = uStack_56c;
      local_6f8 = local_558;
      uStack_6f4 = uStack_554;
      uStack_6f0 = uStack_550;
      uStack_6ec = uStack_54c;
      local_6e8 = local_548;
      uStack_6e4 = uStack_544;
      uStack_6e0 = uStack_540;
      uStack_6dc = uStack_53c;
      local_6d8 = local_518;
      uStack_6d0 = uStack_510;
      local_6c8 = local_508;
      uStack_6c0 = uStack_500;
      fVar10 = (float)FUN_144cc3f10(&local_6d8,&local_7b0);
      lVar6 = FUN_147e59322(&local_718,&local_7ac);
      iVar4 = local_7b0;
      if ((float)lVar6 == 0.0) {
        local_7c0 = 0;
      }
      else {
        local_7c0 = local_7ac * 0x800000 + local_7b0 * -0x800000 + (int)((float)lVar6 / fVar10);
      }
      lVar6 = FUN_147e59322(&local_6f8,local_7a8);
      if ((float)lVar6 == 0.0) {
        fStack_7bc = 0.0;
      }
      else {
        fStack_7bc = (float)((local_7a8[0] - iVar4) * 0x800000 + (int)((float)lVar6 / fVar10));
      }
      local_6b8 = local_7c0;
      local_6b4 = fStack_7bc;
      plVar7 = (longlong *)FUN_144ceaef0(local_138,&local_718,&local_798);
      local_6a8 = *plVar7;
      lStack_6a0 = plVar7[1];
      local_698 = plVar7[2];
      lStack_690 = plVar7[3];
      local_688 = plVar7[4];
      lStack_680 = plVar7[5];
      local_678 = plVar7[6];
      lStack_670 = plVar7[7];
      local_668 = plVar7[8];
      lStack_660 = plVar7[9];
      local_658 = plVar7[10];
      lStack_650 = plVar7[0xb];
      local_648 = plVar7[0xc];
      lStack_640 = plVar7[0xd];
      local_638 = plVar7[0xe];
      lStack_630 = plVar7[0xf];
      local_628 = (undefined4)plVar7[0x10];
      uStack_624 = *(undefined4 *)((longlong)plVar7 + 0x84);
      uStack_620 = (undefined4)plVar7[0x11];
      uStack_61c = *(undefined4 *)((longlong)plVar7 + 0x8c);
      local_618 = (undefined4)plVar7[0x12];
      uStack_614 = *(undefined4 *)((longlong)plVar7 + 0x94);
      uStack_610 = (undefined4)plVar7[0x13];
      uStack_60c = *(undefined4 *)((longlong)plVar7 + 0x9c);
      local_608 = plVar7[0x14];
      FUN_144cf7830(&local_6a8,&lStack_670,&local_638,local_728);
      local_600 = local_728._0_4_;
      local_5fc = local_728._4_4_;
      local_3ec = 0;
      local_3e8 = 0x7f7fffee;
      local_3e0 = 0x7f7fffee;
      local_3dc = 0;
      cVar2 = FUN_144cf8e60(&local_798,&local_718,&local_6a8,param_5,local_4f8);
      if (cVar2 != '\0') {
        iVar4 = FUN_144cf9dc0(local_4f8,param_6,param_5);
        iVar5 = FUN_144cf9dc0(local_4f8);
        if (param_8 == '\0') {
          if (-1 < iVar4) {
LAB_144cf41dc:
            if (iVar5 < 0) {
LAB_144cf41e1:
              FUN_144cfa0a0(param_1,param_2,iVar1,param_3);
            }
          }
        }
        else {
          fVar11 = local_734 - *(float *)(param_5 + 8);
          fVar10 = (ABS(*(float *)(param_5 + 8)) * 1.1920929e-07 + ABS(local_734) * 1.1920929e-07) *
                   2.0;
          if (-fVar10 <= fVar11) {
            if (fVar11 <= fVar10) {
              local_798 = local_778;
              uStack_794 = uStack_774;
              uStack_790 = uStack_770;
              uStack_78c = uStack_76c;
              local_788 = local_768;
              uStack_784 = uStack_764;
              uStack_780 = uStack_760;
              uStack_77c = uStack_75c;
              local_778 = (undefined4)local_758;
              uStack_774 = local_758._4_4_;
              uStack_770 = (undefined4)uStack_750;
              uStack_76c = uStack_750._4_4_;
              local_768 = (undefined4)local_748;
              uStack_764 = local_748._4_4_;
              uStack_760 = (undefined4)uStack_740;
              uStack_75c = uStack_740._4_4_;
              cVar2 = FUN_144cf0d30(&local_798);
            }
            else {
              cVar2 = '\0';
            }
          }
          else {
            cVar2 = '\x01';
          }
          fVar11 = local_6b4 - *(float *)(param_5 + 8);
          fVar10 = (ABS(*(float *)(param_5 + 8)) * 1.1920929e-07 + ABS(local_6b4) * 1.1920929e-07) *
                   2.0;
          if (-fVar10 <= fVar11) {
            if (fVar11 <= fVar10) {
              local_798 = local_6f8;
              uStack_794 = uStack_6f4;
              uStack_790 = uStack_6f0;
              uStack_78c = uStack_6ec;
              local_788 = local_6e8;
              uStack_784 = uStack_6e4;
              uStack_780 = uStack_6e0;
              uStack_77c = uStack_6dc;
              local_778 = (undefined4)local_6d8;
              uStack_774 = local_6d8._4_4_;
              uStack_770 = (undefined4)uStack_6d0;
              uStack_76c = uStack_6d0._4_4_;
              local_768 = (undefined4)local_6c8;
              uStack_764 = local_6c8._4_4_;
              uStack_760 = (undefined4)uStack_6c0;
              uStack_75c = uStack_6c0._4_4_;
              cVar3 = FUN_144cf0d30(&local_798);
            }
            else {
              cVar3 = '\0';
            }
          }
          else {
            cVar3 = '\x01';
          }
          if ((cVar2 != '\0') || (cVar3 != '\0')) {
            if (iVar4 == 0) {
              uVar8 = 0;
              if (local_678 == 0) {
                uVar8 = (uint)((local_688 == 0 &&
                               ((local_698 == 0 && (lStack_6a0 == 0 && local_6a8 == 0)) &&
                               lStack_690 == 0)) && lStack_680 == 0);
              }
              if ((1 - uVar8 | (uint)(local_678 >> 0x3f)) !=
                  ((uint)(lStack_640 != 0 ||
                         ((lStack_650 != 0 ||
                          ((lStack_660 != 0 || (local_668 != 0 || lStack_670 != 0)) ||
                          local_658 != 0)) || local_648 != 0)) | (uint)(lStack_640 >> 0x3f)))
              goto LAB_144cf41e1;
            }
            else if (0 < iVar4) goto LAB_144cf41dc;
          }
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != local_720);
  }
  return;
}



// FUNCTION 144cf4270 FUN_144cf4270 body=3896 status=ok
// SIG undefined FUN_144cf4270(void)

/* WARNING: Removing unreachable block (ram,0x000144cf45aa) */
/* WARNING: Removing unreachable block (ram,0x000144cf46c6) */
/* WARNING: Removing unreachable block (ram,0x000144cf4a9c) */

void FUN_144cf4270(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  int param_9,int param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  longlong local_958;
  undefined8 uStack_950;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined1 local_828 [264];
  char local_720;
  float local_71c;
  undefined8 local_718;
  float local_710;
  undefined1 local_70c;
  undefined8 local_708 [35];
  undefined8 local_5f0 [35];
  undefined8 local_4d8 [36];
  undefined1 local_3b8 [268];
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  
  uVar21 = (ulonglong)*param_2;
  if (*param_2 != -1) {
    lVar20 = **(longlong **)(param_1 + 0x18);
    puVar22 = (undefined8 *)(uVar21 * 0x200 + lVar20);
    if (param_9 != -1) {
      while ((*(int *)(puVar22 + 0x3c) != param_9 || (*(char *)((longlong)puVar22 + 0x1e4) == '\0'))
            ) {
        uVar21 = (ulonglong)*(int *)((longlong)(int)uVar21 * 0x200 + 500 + lVar20);
        puVar22 = (undefined8 *)(uVar21 * 0x200 + lVar20);
      }
      iVar17 = *(int *)((longlong)(int)uVar21 * 0x200 + 500 + lVar20);
      uVar21 = (ulonglong)iVar17;
      if (iVar17 == -1) {
        return;
      }
      puVar22 = (undefined8 *)(uVar21 * 0x200 + lVar20);
    }
    if (*(int *)(puVar22 + 0x3c) == -1) {
LAB_144cf438d:
      local_838 = *(undefined4 *)(param_4 + 10);
      uStack_834 = *(undefined4 *)((longlong)param_4 + 0x54);
      local_878 = param_4[10];
      uStack_830 = *(undefined4 *)(param_4 + 0xb);
      uStack_82c = *(undefined4 *)((longlong)param_4 + 0x5c);
      uStack_870 = param_4[0xb];
      uVar7 = *param_4;
      uVar8 = param_4[1];
      uVar9 = param_4[2];
      uVar10 = param_4[3];
      uVar11 = param_4[8];
      uVar12 = param_4[9];
      local_8a8 = uVar7;
      uStack_8a0 = uVar8;
      local_898 = uVar9;
      uStack_890 = uVar10;
      local_888 = uVar11;
      uStack_880 = uVar12;
      fVar24 = (float)FUN_144cdd9a0(&local_8a8);
      local_8b8 = *(undefined4 *)(puVar22 + 0x10);
      local_8b4 = *(undefined4 *)((longlong)puVar22 + 0x84);
      local_918 = *puVar22;
      uStack_910 = puVar22[1];
      local_71c = 0.0;
      local_908 = puVar22[2];
      uStack_900 = puVar22[3];
      local_718 = 0x7f7fffee;
      local_8f8 = puVar22[4];
      uStack_8f0 = puVar22[5];
      local_710 = 3.40282e+38;
      local_8e8 = puVar22[6];
      uStack_8e0 = puVar22[7];
      local_70c = 0;
      local_8c8 = puVar22[0xe];
      uStack_8c0 = puVar22[0xf];
      local_8d8 = puVar22[0xc];
      uStack_8d0 = puVar22[0xd];
      local_868 = CONCAT44(local_868._4_4_,fVar24);
      local_928 = *(undefined4 *)(puVar22 + 0x22);
      local_924 = *(undefined4 *)((longlong)puVar22 + 0x114);
      local_948 = *(undefined4 *)(puVar22 + 0x1e);
      uStack_944 = *(undefined4 *)((longlong)puVar22 + 0xf4);
      uStack_940 = *(undefined4 *)(puVar22 + 0x1f);
      uStack_93c = *(undefined4 *)((longlong)puVar22 + 0xfc);
      local_988 = puVar22[0x12];
      uStack_980 = puVar22[0x13];
      local_978 = puVar22[0x14];
      uStack_970 = puVar22[0x15];
      local_968 = puVar22[0x16];
      uStack_960 = puVar22[0x17];
      local_958 = puVar22[0x18];
      uStack_950 = puVar22[0x19];
      local_938 = *(undefined4 *)(puVar22 + 0x20);
      uStack_934 = *(undefined4 *)((longlong)puVar22 + 0x104);
      uStack_930 = *(undefined4 *)(puVar22 + 0x21);
      uStack_92c = *(undefined4 *)((longlong)puVar22 + 0x10c);
      FUN_144cede10(&local_918,&local_988,puVar22 + 0x24,&local_8a8,local_828);
      while( true ) {
        fVar25 = (ABS(*(float *)(param_6 + 1)) * 1.1920929e-07 + (float)local_718) * 2.0;
        if (-fVar25 <= local_71c - *(float *)(param_6 + 1)) {
          if (local_71c - *(float *)(param_6 + 1) <= fVar25) {
            FUN_144ced9d0(local_828,&local_8a8);
            lVar20 = 2;
            puVar15 = local_708;
            puVar16 = local_4d8;
            do {
              puVar19 = puVar16;
              puVar18 = puVar15;
              uVar1 = puVar18[1];
              uVar2 = puVar18[2];
              uVar13 = puVar18[3];
              *puVar19 = *puVar18;
              puVar19[1] = uVar1;
              uVar1 = puVar18[4];
              uVar14 = puVar18[5];
              puVar19[2] = uVar2;
              puVar19[3] = uVar13;
              uVar2 = puVar18[6];
              uVar13 = puVar18[7];
              puVar19[4] = uVar1;
              puVar19[5] = uVar14;
              uVar1 = puVar18[8];
              uVar14 = puVar18[9];
              puVar19[6] = uVar2;
              puVar19[7] = uVar13;
              uVar2 = puVar18[10];
              uVar13 = puVar18[0xb];
              puVar19[8] = uVar1;
              puVar19[9] = uVar14;
              uVar1 = puVar18[0xc];
              uVar14 = puVar18[0xd];
              puVar19[10] = uVar2;
              puVar19[0xb] = uVar13;
              uVar3 = *(undefined4 *)(puVar18 + 0xe);
              uVar4 = *(undefined4 *)((longlong)puVar18 + 0x74);
              uVar5 = *(undefined4 *)(puVar18 + 0xf);
              uVar6 = *(undefined4 *)((longlong)puVar18 + 0x7c);
              puVar19[0xc] = uVar1;
              puVar19[0xd] = uVar14;
              *(undefined4 *)(puVar19 + 0xe) = uVar3;
              *(undefined4 *)((longlong)puVar19 + 0x74) = uVar4;
              *(undefined4 *)(puVar19 + 0xf) = uVar5;
              *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar6;
              lVar20 = lVar20 + -1;
              puVar15 = puVar18 + 0x10;
              puVar16 = puVar19 + 0x10;
            } while (lVar20 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar18 + 0x84);
            uVar4 = *(undefined4 *)(puVar18 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar18 + 0x8c);
            uVar1 = puVar18[0x12];
            uVar2 = *param_6;
            *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
            *(undefined4 *)((longlong)puVar19 + 0x84) = uVar3;
            *(undefined4 *)(puVar19 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar5;
            puVar19[0x12] = uVar1;
            iVar17 = FUN_144cfe420(local_4d8,uVar2);
          }
          else {
            iVar17 = 1;
          }
        }
        else {
          iVar17 = -1;
        }
        if (-1 < iVar17) break;
        if (local_720 == '\0') {
          local_918 = *puVar22;
          uStack_910 = puVar22[1];
          local_908 = puVar22[2];
          uStack_900 = puVar22[3];
          local_8f8 = puVar22[0xc];
          uStack_8f0 = puVar22[0xd];
          local_8e8 = puVar22[0xe];
          uStack_8e0 = puVar22[0xf];
          fVar26 = *(float *)(puVar22 + 0x10) - *(float *)(param_7 + 1);
          fVar25 = (ABS(*(float *)(puVar22 + 0x10)) + ABS(*(float *)(param_7 + 1))) * 2.3841858e-07;
          if ((fVar26 <= fVar25) &&
             ((fVar26 < -fVar25 || (iVar17 = FUN_144ce06a0(&local_918,*param_7), iVar17 < 1)))) {
            local_8b8 = *(undefined4 *)(puVar22 + 0x10);
            local_8b4 = *(undefined4 *)((longlong)puVar22 + 0x84);
            local_918 = *puVar22;
            uStack_910 = puVar22[1];
            local_908 = puVar22[2];
            uStack_900 = puVar22[3];
            local_8f8 = puVar22[4];
            uStack_8f0 = puVar22[5];
            local_2ac = 0;
            local_8e8 = puVar22[6];
            uStack_8e0 = puVar22[7];
            local_2a8 = 0x7f7fffee;
            local_8d8 = puVar22[0xc];
            uStack_8d0 = puVar22[0xd];
            local_2a0 = 0x7f7fffee;
            local_8c8 = puVar22[0xe];
            uStack_8c0 = puVar22[0xf];
            local_29c = 0;
            local_928 = *(undefined4 *)(puVar22 + 0x22);
            local_924 = *(undefined4 *)((longlong)puVar22 + 0x114);
            local_988 = puVar22[0x12];
            uStack_980 = puVar22[0x13];
            local_978 = puVar22[0x14];
            uStack_970 = puVar22[0x15];
            local_968 = puVar22[0x16];
            uStack_960 = puVar22[0x17];
            local_958 = puVar22[0x18];
            uStack_950 = puVar22[0x19];
            local_948 = *(undefined4 *)(puVar22 + 0x1e);
            uStack_944 = *(undefined4 *)((longlong)puVar22 + 0xf4);
            uStack_940 = *(undefined4 *)(puVar22 + 0x1f);
            uStack_93c = *(undefined4 *)((longlong)puVar22 + 0xfc);
            local_938 = *(undefined4 *)(puVar22 + 0x20);
            uStack_934 = *(undefined4 *)((longlong)puVar22 + 0x104);
            uStack_930 = *(undefined4 *)(puVar22 + 0x21);
            uStack_92c = *(undefined4 *)((longlong)puVar22 + 0x10c);
            FUN_144cfa6e0(&local_918,&local_988,puVar22 + 0x24,param_7,local_3b8);
            iVar17 = FUN_144ceb720(local_3b8,param_6,param_7);
            goto LAB_144cf48fa;
          }
        }
        else {
          fVar25 = (ABS(*(float *)(param_6 + 1)) * 1.1920929e-07 + local_710) * 2.0;
          if (-fVar25 <= local_718._4_4_ - *(float *)(param_6 + 1)) {
            if (local_718._4_4_ - *(float *)(param_6 + 1) <= fVar25) {
              FUN_144ced9d0(local_828,&local_8a8);
              lVar20 = 2;
              puVar15 = local_5f0;
              puVar16 = local_4d8;
              do {
                puVar19 = puVar16;
                puVar18 = puVar15;
                uVar1 = puVar18[1];
                uVar2 = puVar18[2];
                uVar13 = puVar18[3];
                *puVar19 = *puVar18;
                puVar19[1] = uVar1;
                uVar1 = puVar18[4];
                uVar14 = puVar18[5];
                puVar19[2] = uVar2;
                puVar19[3] = uVar13;
                uVar2 = puVar18[6];
                uVar13 = puVar18[7];
                puVar19[4] = uVar1;
                puVar19[5] = uVar14;
                uVar1 = puVar18[8];
                uVar14 = puVar18[9];
                puVar19[6] = uVar2;
                puVar19[7] = uVar13;
                uVar2 = puVar18[10];
                uVar13 = puVar18[0xb];
                puVar19[8] = uVar1;
                puVar19[9] = uVar14;
                uVar1 = puVar18[0xc];
                uVar14 = puVar18[0xd];
                puVar19[10] = uVar2;
                puVar19[0xb] = uVar13;
                uVar3 = *(undefined4 *)(puVar18 + 0xe);
                uVar4 = *(undefined4 *)((longlong)puVar18 + 0x74);
                uVar5 = *(undefined4 *)(puVar18 + 0xf);
                uVar6 = *(undefined4 *)((longlong)puVar18 + 0x7c);
                puVar19[0xc] = uVar1;
                puVar19[0xd] = uVar14;
                *(undefined4 *)(puVar19 + 0xe) = uVar3;
                *(undefined4 *)((longlong)puVar19 + 0x74) = uVar4;
                *(undefined4 *)(puVar19 + 0xf) = uVar5;
                *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar6;
                lVar20 = lVar20 + -1;
                puVar15 = puVar18 + 0x10;
                puVar16 = puVar19 + 0x10;
              } while (lVar20 != 0);
              uVar3 = *(undefined4 *)((longlong)puVar18 + 0x84);
              uVar4 = *(undefined4 *)(puVar18 + 0x11);
              uVar5 = *(undefined4 *)((longlong)puVar18 + 0x8c);
              uVar1 = puVar18[0x12];
              uVar2 = *param_6;
              *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
              *(undefined4 *)((longlong)puVar19 + 0x84) = uVar3;
              *(undefined4 *)(puVar19 + 0x11) = uVar4;
              *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar5;
              puVar19[0x12] = uVar1;
              iVar17 = FUN_144cfe420(local_4d8,uVar2);
            }
            else {
              iVar17 = 1;
            }
          }
          else {
            iVar17 = -1;
          }
LAB_144cf48fa:
          if (-1 < iVar17) {
            FUN_144cfa3c0(param_1,param_3,*(undefined4 *)(puVar22 + 0x3a),param_4);
          }
        }
        do {
          iVar17 = *(int *)((longlong)(int)uVar21 * 0x200 + 500 + **(longlong **)(param_1 + 0x18));
          uVar21 = (ulonglong)iVar17;
          if (iVar17 == -1) {
            return;
          }
          puVar22 = (undefined8 *)(uVar21 * 0x200 + **(longlong **)(param_1 + 0x18));
          if (((param_10 != -1) && (*(int *)(puVar22 + 0x3c) == param_10)) &&
             (*(char *)((longlong)puVar22 + 0x1e4) == '\0')) {
            return;
          }
        } while (*(int *)(puVar22 + 0x3c) != -1);
        local_8b8 = *(undefined4 *)(puVar22 + 0x10);
        local_8b4 = *(undefined4 *)((longlong)puVar22 + 0x84);
        local_918 = *puVar22;
        uStack_910 = puVar22[1];
        local_908 = puVar22[2];
        uStack_900 = puVar22[3];
        local_8f8 = puVar22[4];
        uStack_8f0 = puVar22[5];
        local_8e8 = puVar22[6];
        uStack_8e0 = puVar22[7];
        local_8d8 = puVar22[0xc];
        uStack_8d0 = puVar22[0xd];
        local_8c8 = puVar22[0xe];
        uStack_8c0 = puVar22[0xf];
        local_928 = *(undefined4 *)(puVar22 + 0x22);
        local_924 = *(undefined4 *)((longlong)puVar22 + 0x114);
        local_988 = puVar22[0x12];
        uStack_980 = puVar22[0x13];
        local_978 = puVar22[0x14];
        uStack_970 = puVar22[0x15];
        local_968 = puVar22[0x16];
        uStack_960 = puVar22[0x17];
        local_958 = puVar22[0x18];
        uStack_950 = puVar22[0x19];
        local_948 = *(undefined4 *)(puVar22 + 0x1e);
        uStack_944 = *(undefined4 *)((longlong)puVar22 + 0xf4);
        uStack_940 = *(undefined4 *)(puVar22 + 0x1f);
        uStack_93c = *(undefined4 *)((longlong)puVar22 + 0xfc);
        local_938 = *(undefined4 *)(puVar22 + 0x20);
        uStack_934 = *(undefined4 *)((longlong)puVar22 + 0x104);
        uStack_930 = *(undefined4 *)(puVar22 + 0x21);
        uStack_92c = *(undefined4 *)((longlong)puVar22 + 0x10c);
        FUN_144cede10(&local_918,&local_988,puVar22 + 0x24,&local_8a8,local_828);
      }
      do {
        fVar25 = (ABS(*(float *)(param_5 + 1)) * 1.1920929e-07 + (float)local_718) * 2.0;
        if (-fVar25 <= local_71c - *(float *)(param_5 + 1)) {
          if (local_71c - *(float *)(param_5 + 1) <= fVar25) {
            FUN_144ced9d0(local_828,&local_8a8);
            lVar20 = 2;
            puVar15 = local_708;
            puVar16 = local_4d8;
            do {
              puVar19 = puVar16;
              puVar18 = puVar15;
              uVar1 = puVar18[1];
              uVar2 = puVar18[2];
              uVar13 = puVar18[3];
              *puVar19 = *puVar18;
              puVar19[1] = uVar1;
              uVar1 = puVar18[4];
              uVar14 = puVar18[5];
              puVar19[2] = uVar2;
              puVar19[3] = uVar13;
              uVar2 = puVar18[6];
              uVar13 = puVar18[7];
              puVar19[4] = uVar1;
              puVar19[5] = uVar14;
              uVar1 = puVar18[8];
              uVar14 = puVar18[9];
              puVar19[6] = uVar2;
              puVar19[7] = uVar13;
              uVar2 = puVar18[10];
              uVar13 = puVar18[0xb];
              puVar19[8] = uVar1;
              puVar19[9] = uVar14;
              uVar1 = puVar18[0xc];
              uVar14 = puVar18[0xd];
              puVar19[10] = uVar2;
              puVar19[0xb] = uVar13;
              uVar3 = *(undefined4 *)(puVar18 + 0xe);
              uVar4 = *(undefined4 *)((longlong)puVar18 + 0x74);
              uVar5 = *(undefined4 *)(puVar18 + 0xf);
              uVar6 = *(undefined4 *)((longlong)puVar18 + 0x7c);
              puVar19[0xc] = uVar1;
              puVar19[0xd] = uVar14;
              *(undefined4 *)(puVar19 + 0xe) = uVar3;
              *(undefined4 *)((longlong)puVar19 + 0x74) = uVar4;
              *(undefined4 *)(puVar19 + 0xf) = uVar5;
              *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar6;
              lVar20 = lVar20 + -1;
              puVar15 = puVar18 + 0x10;
              puVar16 = puVar19 + 0x10;
            } while (lVar20 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar18 + 0x84);
            uVar4 = *(undefined4 *)(puVar18 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar18 + 0x8c);
            uVar1 = puVar18[0x12];
            *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
            *(undefined4 *)((longlong)puVar19 + 0x84) = uVar3;
            *(undefined4 *)(puVar19 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar5;
            puVar19[0x12] = uVar1;
            iVar17 = FUN_144cfe420(local_4d8);
          }
          else {
            iVar17 = 1;
          }
        }
        else {
          iVar17 = -1;
        }
        if (0 < iVar17) {
          do {
            local_988 = *puVar22;
            uStack_980 = puVar22[1];
            local_978 = puVar22[2];
            uStack_970 = puVar22[3];
            local_968 = puVar22[0xc];
            uStack_960 = puVar22[0xd];
            local_958 = puVar22[0xe];
            uStack_950 = puVar22[0xf];
            fVar25 = *(float *)(puVar22 + 0x10) - *(float *)(param_7 + 1);
            fVar24 = (ABS(*(float *)(puVar22 + 0x10)) + ABS(*(float *)(param_7 + 1))) *
                     2.3841858e-07;
            if ((fVar25 <= fVar24) &&
               ((fVar25 < -fVar24 || (iVar17 = FUN_144ce06a0(&local_988,*param_7), iVar17 < 1)))) {
              local_848 = *(undefined4 *)(puVar22 + 0x22);
              local_844 = *(undefined4 *)((longlong)puVar22 + 0x114);
              local_8a8 = puVar22[0x12];
              uStack_8a0 = puVar22[0x13];
              local_898 = puVar22[0x14];
              uStack_890 = puVar22[0x15];
              local_888 = puVar22[0x16];
              uStack_880 = puVar22[0x17];
              local_2ac = 0;
              local_878 = puVar22[0x18];
              uStack_870 = puVar22[0x19];
              local_2a8 = 0x7f7fffee;
              local_868 = puVar22[0x1e];
              uStack_860 = puVar22[0x1f];
              local_2a0 = 0x7f7fffee;
              local_858 = puVar22[0x20];
              uStack_850 = puVar22[0x21];
              local_29c = 0;
              local_928 = *(undefined4 *)(puVar22 + 0x10);
              local_924 = *(undefined4 *)((longlong)puVar22 + 0x84);
              local_988 = *puVar22;
              uStack_980 = puVar22[1];
              local_978 = puVar22[2];
              uStack_970 = puVar22[3];
              local_968 = puVar22[4];
              uStack_960 = puVar22[5];
              local_958 = puVar22[6];
              uStack_950 = puVar22[7];
              local_948 = *(undefined4 *)(puVar22 + 0xc);
              uStack_944 = *(undefined4 *)((longlong)puVar22 + 100);
              uStack_940 = *(undefined4 *)(puVar22 + 0xd);
              uStack_93c = *(undefined4 *)((longlong)puVar22 + 0x6c);
              local_938 = *(undefined4 *)(puVar22 + 0xe);
              uStack_934 = *(undefined4 *)((longlong)puVar22 + 0x74);
              uStack_930 = *(undefined4 *)(puVar22 + 0xf);
              uStack_92c = *(undefined4 *)((longlong)puVar22 + 0x7c);
              FUN_144cfa6e0(&local_988,&local_8a8,puVar22 + 0x24,param_7,local_3b8);
              iVar17 = FUN_144ceb720(local_3b8,param_5,param_7);
              if (iVar17 < 0) {
                FUN_144cfa3c0(param_1,param_3,*(undefined4 *)(puVar22 + 0x3a),param_4);
              }
            }
            uVar23 = *(uint *)((longlong)(int)uVar21 * 0x200 + 500 + **(longlong **)(param_1 + 0x18)
                              );
            while( true ) {
              if (uVar23 == 0xffffffff) {
                return;
              }
              uVar21 = (ulonglong)uVar23;
              puVar22 = (undefined8 *)
                        ((longlong)(int)uVar23 * 0x200 + **(longlong **)(param_1 + 0x18));
              if (((param_10 != -1) && (*(int *)(puVar22 + 0x3c) == param_10)) &&
                 (*(char *)((longlong)puVar22 + 0x1e4) == '\0')) {
                return;
              }
              if (*(int *)(puVar22 + 0x3c) == -1) break;
              uVar23 = *(uint *)((longlong)puVar22 + 500);
            }
          } while( true );
        }
        if (iVar17 < 0) {
LAB_144cf4b4a:
          FUN_144cfa3c0(param_1,param_3,*(undefined4 *)(puVar22 + 0x3a),param_4);
        }
        else {
          local_958 = puVar22[0x31];
          uVar23 = (uint)(local_958 >> 0x3f) |
                   (uint)(local_958 != 0 ||
                         ((puVar22[0x2f] != 0 ||
                          ((puVar22[0x2d] != 0 || (puVar22[0x2c] != 0 || puVar22[0x2b] != 0)) ||
                          puVar22[0x2e] != 0)) || puVar22[0x30] != 0));
          fVar25 = (ABS(fVar24) + ABS(*(float *)(param_7 + 1))) * 2.3841858e-07;
          if ((fVar25 < fVar24 - *(float *)(param_7 + 1)) ||
             (fVar24 - *(float *)(param_7 + 1) < -fVar25)) {
LAB_144cf4e5a:
            if (uVar23 == 0xffffffff) {
              fVar26 = *(float *)((longlong)puVar22 + 0x114) - *(float *)(param_5 + 1);
              fVar25 = (ABS(*(float *)((longlong)puVar22 + 0x114)) + ABS(*(float *)(param_5 + 1))) *
                       2.3841858e-07;
              if ((fVar25 < fVar26) ||
                 ((-fVar25 <= fVar26 &&
                  (local_988 = puVar22[0x16], uStack_980 = puVar22[0x17], local_978 = puVar22[0x18],
                  uStack_970 = puVar22[0x19], local_968 = puVar22[0x1e], uStack_960 = puVar22[0x1f],
                  local_958 = puVar22[0x20], uStack_950 = puVar22[0x21],
                  iVar17 = FUN_144ce06a0(&local_988,*param_5), 0 < iVar17)))) goto LAB_144cf4b4a;
            }
            else if (uVar23 == 1) goto LAB_144cf4d1c;
          }
          else {
            local_8e8 = CONCAT44(uStack_834,local_838);
            uStack_8e0 = CONCAT44(uStack_82c,uStack_830);
            local_918 = uVar7;
            uStack_910 = uVar8;
            local_908 = uVar9;
            uStack_900 = uVar10;
            local_8f8 = uVar11;
            uStack_8f0 = uVar12;
            iVar17 = FUN_144ce06a0(&local_918,*param_7);
            if (iVar17 != 0) goto LAB_144cf4e5a;
            if ((int)uVar23 < 0) {
              fVar26 = *(float *)(puVar22 + 0x22) - fVar24;
              fVar25 = (ABS(*(float *)(puVar22 + 0x22)) + ABS(fVar24)) * 2.3841858e-07;
              if (fVar26 <= fVar25) {
                if (-fVar25 <= fVar26) {
                  local_8e8 = CONCAT44(uStack_834,local_838);
                  uStack_8e0 = CONCAT44(uStack_82c,uStack_830);
                  local_988 = puVar22[0x12];
                  uStack_980 = puVar22[0x13];
                  local_978 = puVar22[0x14];
                  uStack_970 = puVar22[0x15];
                  local_968 = puVar22[0x1e];
                  uStack_960 = puVar22[0x1f];
                  local_958 = puVar22[0x20];
                  uStack_950 = puVar22[0x21];
                  local_918 = uVar7;
                  uStack_910 = uVar8;
                  local_908 = uVar9;
                  uStack_900 = uVar10;
                  local_8f8 = uVar11;
                  uStack_8f0 = uVar12;
                  iVar17 = FUN_144cab880(&local_988,&local_918);
                  if (0 < iVar17) goto LAB_144cf4d1c;
                }
                goto LAB_144cf4d38;
              }
LAB_144cf4d1c:
              FUN_144cfa3c0(param_1,param_3,*(undefined4 *)(puVar22 + 0x3a),param_4);
            }
          }
        }
LAB_144cf4d38:
        do {
          iVar17 = *(int *)((longlong)(int)uVar21 * 0x200 + 500 + **(longlong **)(param_1 + 0x18));
          uVar21 = (ulonglong)iVar17;
          if (iVar17 == -1) {
            return;
          }
          puVar22 = (undefined8 *)(uVar21 * 0x200 + **(longlong **)(param_1 + 0x18));
          if (((param_10 != -1) && (*(int *)(puVar22 + 0x3c) == param_10)) &&
             (*(char *)((longlong)puVar22 + 0x1e4) == '\0')) {
            return;
          }
        } while (*(int *)(puVar22 + 0x3c) != -1);
        local_8b8 = *(undefined4 *)(puVar22 + 0x10);
        local_8b4 = *(undefined4 *)((longlong)puVar22 + 0x84);
        local_918 = *puVar22;
        uStack_910 = puVar22[1];
        local_908 = puVar22[2];
        uStack_900 = puVar22[3];
        local_8f8 = puVar22[4];
        uStack_8f0 = puVar22[5];
        local_8e8 = puVar22[6];
        uStack_8e0 = puVar22[7];
        local_8d8 = puVar22[0xc];
        uStack_8d0 = puVar22[0xd];
        local_8c8 = puVar22[0xe];
        uStack_8c0 = puVar22[0xf];
        local_928 = *(undefined4 *)(puVar22 + 0x22);
        local_924 = *(undefined4 *)((longlong)puVar22 + 0x114);
        local_988 = puVar22[0x12];
        uStack_980 = puVar22[0x13];
        local_978 = puVar22[0x14];
        uStack_970 = puVar22[0x15];
        local_968 = puVar22[0x16];
        uStack_960 = puVar22[0x17];
        local_958 = puVar22[0x18];
        uStack_950 = puVar22[0x19];
        local_948 = *(undefined4 *)(puVar22 + 0x1e);
        uStack_944 = *(undefined4 *)((longlong)puVar22 + 0xf4);
        uStack_940 = *(undefined4 *)(puVar22 + 0x1f);
        uStack_93c = *(undefined4 *)((longlong)puVar22 + 0xfc);
        local_938 = *(undefined4 *)(puVar22 + 0x20);
        uStack_934 = *(undefined4 *)((longlong)puVar22 + 0x104);
        uStack_930 = *(undefined4 *)(puVar22 + 0x21);
        uStack_92c = *(undefined4 *)((longlong)puVar22 + 0x10c);
        FUN_144cede10(&local_918,&local_988,puVar22 + 0x24,&local_8a8,local_828);
      } while( true );
    }
    if ((*(int *)(puVar22 + 0x3c) != param_10) || (*(char *)((longlong)puVar22 + 0x1e4) != '\0')) {
      uVar23 = *(uint *)((longlong)(int)uVar21 * 0x200 + 500 + lVar20);
      while (uVar23 != 0xffffffff) {
        uVar21 = (ulonglong)uVar23;
        puVar22 = (undefined8 *)((longlong)(int)uVar23 * 0x200 + lVar20);
        if (((param_10 != -1) && (*(int *)(puVar22 + 0x3c) == param_10)) &&
           (*(char *)((longlong)puVar22 + 0x1e4) == '\0')) {
          return;
        }
        if (*(int *)(puVar22 + 0x3c) == -1) goto LAB_144cf438d;
        uVar23 = *(uint *)((longlong)puVar22 + 500);
      }
    }
  }
  return;
}



// FUNCTION 144cf51b0 FUN_144cf51b0 body=2469 status=ok
// SIG undefined FUN_144cf51b0(void)

int * FUN_144cf51b0(longlong param_1,int *param_2,longlong *param_3,int *param_4,int *param_5,
                   undefined4 param_6,int param_7,int param_8,uint param_9)

{
  int iVar1;
  longlong *plVar2;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  char cVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined4 uVar35;
  uint local_b48;
  longlong local_b28;
  longlong lStack_b20;
  longlong local_b18;
  longlong lStack_b10;
  longlong local_b08;
  longlong lStack_b00;
  longlong local_af8;
  longlong lStack_af0;
  undefined8 local_ae8;
  longlong local_ad8;
  longlong lStack_ad0;
  longlong local_ac8;
  longlong lStack_ac0;
  longlong local_ab8;
  longlong lStack_ab0;
  longlong local_aa8;
  longlong lStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  longlong local_9a8;
  longlong lStack_9a0;
  longlong local_998;
  longlong lStack_990;
  longlong local_988;
  longlong lStack_980;
  longlong local_978;
  longlong lStack_970;
  undefined4 local_968;
  undefined4 uStack_964;
  longlong local_958;
  longlong lStack_950;
  longlong local_948;
  longlong lStack_940;
  longlong local_938;
  longlong lStack_930;
  longlong local_928;
  longlong lStack_920;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  uint local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined1 local_8d8 [16];
  longlong local_8c8;
  longlong lStack_8c0;
  longlong local_8b8;
  longlong lStack_8b0;
  longlong local_8a8;
  longlong lStack_8a0;
  longlong local_898;
  longlong lStack_890;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  uint local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined1 local_848 [16];
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined8 local_780;
  undefined4 local_778;
  undefined1 local_774;
  undefined4 local_770;
  undefined8 local_768 [33];
  undefined4 local_65c;
  undefined8 local_658;
  undefined4 local_650;
  undefined1 local_64c;
  undefined8 local_418 [126];
  
  local_958 = (longlong)*param_4;
  lStack_950 = local_958 >> 0x3f;
  local_938 = (longlong)param_4[1];
  lStack_930 = local_938 >> 0x3f;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_b48 = (uint)*(byte *)(param_4 + 2);
  local_788 = 0xffffffff;
  local_918 = 0;
  uStack_914 = 0;
  uStack_910 = 0;
  uStack_90c = 0;
  local_908 = 0;
  uStack_904 = 0;
  uStack_900 = 0;
  uStack_8fc = 0;
  local_780 = 0xffffffffffffffff;
  local_778 = 0xffffffff;
  local_770 = 0xffffffff;
  local_8f8 = local_b48;
  uStack_8f4 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  local_8e8 = 0;
  uStack_8e4 = 0;
  uStack_8e0 = 0;
  uStack_8dc = 0;
  local_948 = lStack_950;
  lStack_940 = lStack_950;
  local_928 = lStack_930;
  lStack_920 = lStack_930;
  FUN_144cb85f0(&local_958,local_8d8);
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  local_8c8 = (longlong)*param_5;
  lStack_8c0 = local_8c8 >> 0x3f;
  local_8a8 = (longlong)param_5[1];
  lStack_8a0 = local_8a8 >> 0x3f;
  uStack_9d0 = 0;
  local_b48 = (uint)*(byte *)(param_5 + 2);
  local_868 = local_b48;
  uStack_864 = 0;
  uStack_860 = 0;
  uStack_85c = 0;
  local_888 = 0;
  uStack_884 = 0;
  uStack_880 = 0;
  uStack_87c = 0;
  local_878 = 0;
  uStack_874 = 0;
  uStack_870 = 0;
  uStack_86c = 0;
  local_858 = 0;
  uStack_854 = 0;
  uStack_850 = 0;
  uStack_84c = 0;
  local_8b8 = lStack_8c0;
  lStack_8b0 = lStack_8c0;
  local_898 = lStack_8a0;
  lStack_890 = lStack_8a0;
  FUN_144cb85f0(&local_8c8,local_848);
  lVar31 = *param_3;
  lVar3 = param_3[1];
  uStack_a60 = 0;
  lVar4 = param_3[2];
  lVar5 = param_3[3];
  local_a58 = 0;
  lVar6 = param_3[0xc];
  lVar7 = param_3[0xd];
  uStack_a50 = 0;
  lVar8 = param_3[0xe];
  lVar9 = param_3[0xf];
  local_a48 = 0;
  uStack_a40 = 0;
  local_a38 = 0;
  local_a98 = 0;
  uStack_a90 = 0;
  local_a68 = 1;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a28 = 1;
  local_a78 = 0;
  uStack_a70 = 0;
  local_9f0 = 0;
  uStack_a20 = 0;
  uStack_a18 = 0;
  local_a10 = 0;
  uStack_a08 = 0;
  local_a00 = 0;
  uStack_9f8 = 0;
  local_ac8 = 0;
  lStack_ac0 = 0;
  local_ad8 = 1;
  lStack_ad0 = 0;
  local_aa8 = 0;
  lStack_aa0 = 0;
  local_ab8 = 0;
  lStack_ab0 = 0;
  local_838 = 1;
  uStack_830 = 0;
  local_828 = 0;
  uStack_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7c8 = 1;
  uStack_7c0 = 0;
  local_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  local_7a8 = 0;
  uStack_7a4 = 0;
  uStack_7a0 = 0;
  uStack_79c = 0;
  local_798 = 0;
  local_778 = param_6;
  local_774 = (undefined1)param_7;
  local_790 = 0x3f800000;
  local_9a8 = lVar31;
  lStack_9a0 = lVar3;
  local_998 = lVar4;
  lStack_990 = lVar5;
  local_988 = lVar6;
  lStack_980 = lVar7;
  local_978 = lVar8;
  lStack_970 = lVar9;
  local_968 = FUN_144cdd9a0(&local_9a8);
  lVar10 = param_3[4];
  lVar11 = param_3[5];
  lVar12 = param_3[6];
  lVar13 = param_3[7];
  lVar14 = param_3[0xc];
  lVar15 = param_3[0xd];
  lVar16 = param_3[0xe];
  lVar17 = param_3[0xf];
  local_b28 = lVar10;
  lStack_b20 = lVar11;
  local_b18 = lVar12;
  lStack_b10 = lVar13;
  local_b08 = lVar14;
  lStack_b00 = lVar15;
  local_af8 = lVar16;
  lStack_af0 = lVar17;
  uVar35 = FUN_144cdd9a0(&local_b28);
  local_a98 = CONCAT44(uStack_8f4,local_8f8);
  uStack_a90 = CONCAT44(uStack_8ec,uStack_8f0);
  local_a88 = CONCAT44(uStack_8e4,local_8e8);
  uStack_a80 = CONCAT44(uStack_8dc,uStack_8e0);
  local_ae8 = CONCAT44(local_ae8._4_4_,uVar35);
  local_65c = 0;
  local_658 = 0x7f7fffee;
  local_650 = 0x7f7fffee;
  local_64c = 0;
  local_ad8 = local_958;
  lStack_ad0 = lStack_950;
  local_ac8 = local_948;
  lStack_ac0 = lStack_940;
  local_ab8 = local_938;
  lStack_ab0 = lStack_930;
  local_aa8 = local_928;
  lStack_aa0 = lStack_920;
  FUN_144ced6c0(&local_ad8,&local_a28,&local_838,&local_9a8,local_768);
  lVar34 = 6;
  local_b28 = lVar31;
  lStack_b20 = lVar3;
  local_b18 = lVar4;
  lStack_b10 = lVar5;
  local_b08 = lVar6;
  lStack_b00 = lVar7;
  local_af8 = lVar8;
  lStack_af0 = lVar9;
  local_ad8 = lVar10;
  lStack_ad0 = lVar11;
  local_ac8 = lVar12;
  lStack_ac0 = lVar13;
  local_ab8 = lVar14;
  lStack_ab0 = lVar15;
  local_aa8 = lVar16;
  lStack_aa0 = lVar17;
  local_a98 = local_ae8;
  if (param_8 == -1) {
    uVar33 = (ulonglong)(int)param_9;
    plVar2 = *(longlong **)(param_1 + 0x18);
    puVar25 = local_418;
    puVar26 = local_768;
    if (param_9 == 0xffffffff) {
      do {
        puVar30 = puVar26;
        puVar29 = puVar25;
        uVar18 = puVar30[1];
        uVar19 = puVar30[2];
        uVar20 = puVar30[3];
        *puVar29 = *puVar30;
        puVar29[1] = uVar18;
        uVar18 = puVar30[4];
        uVar21 = puVar30[5];
        puVar29[2] = uVar19;
        puVar29[3] = uVar20;
        uVar19 = puVar30[6];
        uVar20 = puVar30[7];
        puVar29[4] = uVar18;
        puVar29[5] = uVar21;
        uVar18 = puVar30[8];
        uVar21 = puVar30[9];
        puVar29[6] = uVar19;
        puVar29[7] = uVar20;
        uVar19 = puVar30[10];
        uVar20 = puVar30[0xb];
        puVar29[8] = uVar18;
        puVar29[9] = uVar21;
        uVar18 = puVar30[0xc];
        uVar21 = puVar30[0xd];
        puVar29[10] = uVar19;
        puVar29[0xb] = uVar20;
        uVar19 = puVar30[0xe];
        uVar20 = puVar30[0xf];
        puVar29[0xc] = uVar18;
        puVar29[0xd] = uVar21;
        puVar29[0xe] = uVar19;
        puVar29[0xf] = uVar20;
        lVar34 = lVar34 + -1;
        puVar25 = puVar29 + 0x10;
        puVar26 = puVar30 + 0x10;
      } while (lVar34 != 0);
      uVar18 = puVar30[0x11];
      iVar1 = *(int *)(param_1 + 0x38);
      uVar19 = puVar30[0x12];
      uVar20 = puVar30[0x13];
      puVar29[0x10] = puVar30[0x10];
      puVar29[0x11] = uVar18;
      uVar18 = puVar30[0x14];
      uVar21 = puVar30[0x15];
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      uVar19 = puVar30[0x16];
      uVar20 = puVar30[0x17];
      puVar29[0x14] = uVar18;
      puVar29[0x15] = uVar21;
      uVar18 = puVar30[0x18];
      uVar21 = puVar30[0x19];
      puVar29[0x16] = uVar19;
      puVar29[0x17] = uVar20;
      puVar29[0x18] = uVar18;
      puVar29[0x19] = uVar21;
      iVar23 = -1;
      local_ae8 = CONCAT44(uStack_964,local_968);
      while (iVar22 = iVar1, iVar22 != -1) {
        cVar28 = FUN_144cee360(&local_958,*plVar2 + (longlong)iVar22 * 0x200,&local_b28,&local_ad8,
                               local_418);
        if (cVar28 != '\0') break;
        iVar23 = iVar22;
        iVar1 = *(int *)(*plVar2 + 500 + (longlong)iVar22 * 0x200);
      }
      FUN_144cdf430(plVar2,&param_7,param_1 + 0x38,iVar23,&local_958);
    }
    else {
      do {
        puVar30 = puVar26;
        puVar29 = puVar25;
        uVar18 = puVar30[1];
        uVar19 = puVar30[2];
        uVar20 = puVar30[3];
        *puVar29 = *puVar30;
        puVar29[1] = uVar18;
        uVar18 = puVar30[4];
        uVar21 = puVar30[5];
        puVar29[2] = uVar19;
        puVar29[3] = uVar20;
        uVar19 = puVar30[6];
        uVar20 = puVar30[7];
        puVar29[4] = uVar18;
        puVar29[5] = uVar21;
        uVar18 = puVar30[8];
        uVar21 = puVar30[9];
        puVar29[6] = uVar19;
        puVar29[7] = uVar20;
        uVar19 = puVar30[10];
        uVar20 = puVar30[0xb];
        puVar29[8] = uVar18;
        puVar29[9] = uVar21;
        uVar18 = puVar30[0xc];
        uVar21 = puVar30[0xd];
        puVar29[10] = uVar19;
        puVar29[0xb] = uVar20;
        uVar19 = puVar30[0xe];
        uVar20 = puVar30[0xf];
        puVar29[0xc] = uVar18;
        puVar29[0xd] = uVar21;
        puVar29[0xe] = uVar19;
        puVar29[0xf] = uVar20;
        lVar34 = lVar34 + -1;
        puVar25 = puVar29 + 0x10;
        puVar26 = puVar30 + 0x10;
      } while (lVar34 != 0);
      uVar18 = puVar30[0x11];
      uVar19 = puVar30[0x12];
      uVar20 = puVar30[0x13];
      puVar29[0x10] = puVar30[0x10];
      puVar29[0x11] = uVar18;
      uVar18 = puVar30[0x14];
      uVar21 = puVar30[0x15];
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      uVar19 = puVar30[0x16];
      uVar20 = puVar30[0x17];
      puVar29[0x14] = uVar18;
      puVar29[0x15] = uVar21;
      uVar18 = puVar30[0x18];
      uVar21 = puVar30[0x19];
      puVar29[0x16] = uVar19;
      puVar29[0x17] = uVar20;
      puVar29[0x18] = uVar18;
      puVar29[0x19] = uVar21;
      lVar31 = *plVar2;
      uVar27 = *(uint *)(uVar33 * 0x200 + 500 + lVar31);
      uVar32 = param_9;
      local_ae8 = CONCAT44(uStack_964,local_968);
      while (uVar24 = uVar27, uVar24 != 0xffffffff) {
        uVar32 = (uint)uVar33;
        cVar28 = FUN_144cee360(&local_958,(longlong)(int)uVar24 * 0x200 + lVar31,&local_b28,
                               &local_ad8,local_418);
        if (cVar28 != '\0') break;
        lVar31 = *plVar2;
        uVar33 = (ulonglong)uVar24;
        uVar32 = uVar24;
        uVar27 = *(uint *)(lVar31 + 500 + (longlong)(int)uVar24 * 0x200);
      }
      FUN_144cdf430(plVar2,&param_7,param_1 + 0x38,uVar32,&local_958);
    }
  }
  else {
    puVar25 = local_418;
    puVar26 = local_768;
    do {
      puVar30 = puVar26;
      puVar29 = puVar25;
      uVar18 = puVar30[1];
      uVar19 = puVar30[2];
      uVar20 = puVar30[3];
      *puVar29 = *puVar30;
      puVar29[1] = uVar18;
      uVar18 = puVar30[4];
      uVar21 = puVar30[5];
      puVar29[2] = uVar19;
      puVar29[3] = uVar20;
      uVar19 = puVar30[6];
      uVar20 = puVar30[7];
      puVar29[4] = uVar18;
      puVar29[5] = uVar21;
      uVar18 = puVar30[8];
      uVar21 = puVar30[9];
      puVar29[6] = uVar19;
      puVar29[7] = uVar20;
      uVar19 = puVar30[10];
      uVar20 = puVar30[0xb];
      puVar29[8] = uVar18;
      puVar29[9] = uVar21;
      uVar18 = puVar30[0xc];
      uVar21 = puVar30[0xd];
      puVar29[10] = uVar19;
      puVar29[0xb] = uVar20;
      uVar19 = puVar30[0xe];
      uVar20 = puVar30[0xf];
      puVar29[0xc] = uVar18;
      puVar29[0xd] = uVar21;
      puVar29[0xe] = uVar19;
      puVar29[0xf] = uVar20;
      lVar34 = lVar34 + -1;
      puVar25 = puVar29 + 0x10;
      puVar26 = puVar30 + 0x10;
    } while (lVar34 != 0);
    uVar18 = puVar30[0x11];
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar19 = puVar30[0x12];
    uVar20 = puVar30[0x13];
    puVar29[0x10] = puVar30[0x10];
    puVar29[0x11] = uVar18;
    uVar18 = puVar30[0x14];
    uVar21 = puVar30[0x15];
    puVar29[0x12] = uVar19;
    puVar29[0x13] = uVar20;
    uVar19 = puVar30[0x16];
    uVar20 = puVar30[0x17];
    puVar29[0x14] = uVar18;
    puVar29[0x15] = uVar21;
    uVar18 = puVar30[0x18];
    uVar21 = puVar30[0x19];
    puVar29[0x16] = uVar19;
    puVar29[0x17] = uVar20;
    puVar29[0x18] = uVar18;
    puVar29[0x19] = uVar21;
    lVar31 = *plVar2;
    local_ae8 = CONCAT44(uStack_964,local_968);
    for (iVar1 = *(int *)((longlong)param_8 * 0x200 + 0x1f0 + lVar31); iVar1 != -1;
        iVar1 = *(int *)(lVar31 + 0x1f0 + (longlong)iVar1 * 0x200)) {
      cVar28 = FUN_144cee360(&local_958,(longlong)iVar1 * 0x200 + lVar31,&local_b28,&local_ad8,
                             local_418);
      if (cVar28 == '\0') break;
      lVar31 = *plVar2;
    }
    FUN_144cdf430(plVar2,&param_7,param_1 + 0x38,iVar1,&local_958);
  }
  lVar31 = **(longlong **)(param_1 + 0x18);
  *param_2 = param_7;
  iVar1 = *(int *)((longlong)param_7 * 0x200 + 0x1f0 + lVar31);
  if ((iVar1 != -1) && (lVar31 = (longlong)iVar1 * 0x200 + lVar31, *(int *)(lVar31 + 0x1e8) != -1))
  {
    FUN_144ce0ec0(param_1 + 0x40);
    *(undefined4 *)(lVar31 + 0x1e8) = 0xffffffff;
  }
  FUN_144ce2660(param_1,*(undefined4 *)
                         ((longlong)*param_2 * 0x200 + 0x1f0 + **(longlong **)(param_1 + 0x18)));
  FUN_144ce2660(param_1,*param_2);
  return param_2;
}



// FUNCTION 144cf5b60 FUN_144cf5b60 body=1442 status=ok
// SIG undefined FUN_144cf5b60(void)

void FUN_144cf5b60(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined4 local_res8;
  int local_148;
  int local_144;
  int local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  int local_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  lVar3 = *(longlong *)(param_1[8] + (longlong)(int)*param_3 * 8);
  iVar12 = *(int *)(lVar3 + 0x48);
  lVar3 = *(longlong *)
           (*(longlong *)(lVar3 + 0x38) + (longlong)(int)((ulonglong)*param_3 >> 0x20) * 8);
  iVar14 = *(int *)(lVar3 + 0x38);
  uVar5 = local_res8;
  do {
    local_res8._2_2_ = (undefined2)((uint)uVar5 >> 0x10);
    if (iVar14 == -1) {
      if (iVar12 != -1) {
LAB_144cf5edc:
        local_res8 = CONCAT22(local_res8._2_2_,0xffff);
        do {
          local_130 = 2;
          uVar4 = *(undefined8 *)((longlong)iVar12 * 0x40 + param_1[3]);
          local_120 = 2;
          iVar1 = (int)uVar4 * 2;
          iVar14 = (int)((ulonglong)uVar4 >> 0x20) * 2;
          local_138 = CONCAT44(iVar14 + -1,iVar1 + -1);
          local_128 = CONCAT44(iVar14 + -1,iVar1 + 1);
          FUN_144cf51b0(lVar3,&local_res8,param_2,&local_138,&local_128,iVar12,0,0xffffffff,
                        0xffffffff);
          FUN_144cfac70(param_1,param_2,lVar3,local_res8,iVar12);
          iVar12 = *(int *)((longlong)iVar12 * 0x40 + 0x3c + param_1[3]);
        } while (iVar12 != -1);
      }
      return;
    }
    if (iVar12 == -1) {
      return;
    }
    lVar9 = *param_1;
    while( true ) {
      lVar13 = (longlong)iVar14 * 0x200;
      iVar1 = *(int *)(lVar9 + 0x1e0 + lVar13);
      if ((iVar1 != -1) && (*(char *)(lVar9 + 0x1e4 + lVar13) == '\0')) break;
      iVar14 = *(int *)(lVar9 + 500 + lVar13);
      if (iVar14 == -1) goto LAB_144cf5edc;
    }
    iVar2 = *(int *)(lVar9 + 500 + lVar13);
    while (iVar2 != -1) {
      lVar10 = (longlong)iVar2 * 0x200;
      iVar2 = *(int *)(lVar10 + 0x1e0 + lVar9);
      if ((iVar2 != -1) && (*(char *)(lVar10 + 0x1e4 + lVar9) != '\0')) {
        if (iVar2 == iVar1) goto LAB_144cf5cd7;
        local_res8 = CONCAT22(local_res8._2_2_,0x1ff);
        local_a0 = 2;
        uVar4 = *(undefined8 *)((longlong)iVar1 * 0x40 + param_1[3]);
        local_110 = (int)uVar4 * 2;
        local_b0 = 2;
        local_118 = local_110 + -1;
        iStack_10c = (int)((ulonglong)uVar4 >> 0x20) * 2;
        iStack_114 = iStack_10c + 1;
        local_a8 = CONCAT44(iStack_114,local_118);
        local_110 = local_110 + 1;
        iStack_10c = iStack_10c + 1;
        puVar11 = local_c8;
        local_b8 = CONCAT44(iStack_10c,local_110);
        puVar6 = &local_b8;
        puVar8 = &local_a8;
        goto LAB_144cf5cb2;
      }
      iVar2 = *(int *)(lVar10 + 500 + lVar9);
    }
    local_80 = 2;
    uVar4 = *(undefined8 *)((longlong)iVar1 * 0x40 + param_1[3]);
    local_d0 = (int)uVar4 * 2;
    local_90 = 2;
    local_108 = local_d0 + -1;
    iStack_cc = (int)((ulonglong)uVar4 >> 0x20) * 2;
    iStack_104 = iStack_cc + 1;
    local_88 = CONCAT44(iStack_104,local_108);
    local_d0 = local_d0 + 1;
    iStack_cc = iStack_cc + 1;
    puVar11 = local_c4;
    local_98 = CONCAT44(iStack_cc,local_d0);
    puVar6 = &local_98;
    puVar8 = &local_88;
    local_res8 = uVar5;
LAB_144cf5cb2:
    FUN_144cf51b0(lVar3,puVar11,param_2,puVar8,puVar6,iVar1,1,0xffffffff,iVar14);
    uVar5 = local_res8;
LAB_144cf5cd7:
    local_res8 = uVar5;
    lVar9 = *param_1;
    if (iVar12 != *(int *)(lVar9 + 0x1e0 + lVar13)) {
      local_144 = -1;
      local_140 = -1;
      do {
        lVar10 = (longlong)iVar12 * 0x40;
        local_60 = 2;
        local_70 = 2;
        local_100 = (int)*(undefined8 *)(lVar10 + param_1[3]) * 2;
        local_d8 = local_100 + -1;
        iStack_fc = (int)((ulonglong)*(undefined8 *)(lVar10 + param_1[3]) >> 0x20) * 2;
        iStack_d4 = local_144 + iStack_fc;
        local_68 = CONCAT44(iStack_d4,local_d8);
        local_100 = local_100 + 1;
        iStack_fc = local_140 + iStack_fc;
        local_78 = CONCAT44(iStack_fc,local_100);
        FUN_144cf51b0(lVar3,&local_148,param_2,&local_68,&local_78,iVar12,0,iVar14,0xffffffff);
        lVar9 = *param_1;
        iVar1 = *(int *)((longlong)local_148 * 0x200 + 500 + lVar9);
        while (iVar1 != -1) {
          lVar7 = (longlong)iVar1 * 0x200;
          iVar1 = *(int *)(lVar7 + 0x1e0 + lVar9);
          if ((iVar1 != -1) && (*(char *)(lVar7 + 0x1e4 + lVar9) != '\0')) {
            if (iVar1 == iVar12) goto LAB_144cf5e8e;
            local_40 = 2;
            local_f0 = (int)*(undefined8 *)(lVar10 + param_1[3]) * 2;
            local_50 = 2;
            local_f8 = local_f0 + -1;
            iStack_ec = (int)((ulonglong)*(undefined8 *)(lVar10 + param_1[3]) >> 0x20) * 2;
            iStack_f4 = iStack_ec + 1;
            local_48 = CONCAT44(iStack_f4,local_f8);
            local_f0 = local_f0 + 1;
            puVar6 = &local_48;
            iStack_ec = iStack_ec + 1;
            puVar11 = local_c0;
            local_58 = CONCAT44(iStack_ec,local_f0);
            puVar8 = &local_58;
            goto LAB_144cf5e69;
          }
          iVar1 = *(int *)(lVar7 + 500 + lVar9);
        }
        local_120 = 2;
        local_e0 = (int)*(undefined8 *)(lVar10 + param_1[3]) * 2;
        local_130 = 2;
        local_e8 = local_e0 + -1;
        iStack_dc = (int)((ulonglong)*(undefined8 *)(lVar10 + param_1[3]) >> 0x20) * 2;
        iStack_e4 = iStack_dc + 1;
        local_128 = CONCAT44(iStack_e4,local_e8);
        local_e0 = local_e0 + 1;
        puVar6 = &local_128;
        iStack_dc = iStack_dc + 1;
        puVar11 = local_bc;
        local_138 = CONCAT44(iStack_dc,local_e0);
        puVar8 = &local_138;
LAB_144cf5e69:
        FUN_144cf51b0(lVar3,puVar11,param_2,puVar6,puVar8,iVar12,1,0xffffffff,local_148);
LAB_144cf5e8e:
        lVar9 = *param_1;
        iVar12 = *(int *)(lVar10 + 0x3c + param_1[3]);
      } while (iVar12 != *(int *)(lVar9 + 0x1e0 + lVar13));
    }
    iVar14 = *(int *)(lVar9 + 500 + lVar13);
    iVar12 = *(int *)((longlong)iVar12 * 0x40 + 0x3c + param_1[3]);
    uVar5 = local_res8;
  } while( true );
}



// FUNCTION 144cf6110 FUN_144cf6110 body=1178 status=ok
// SIG undefined FUN_144cf6110(void)

void FUN_144cf6110(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((int)param_3 != (int)param_4) {
    FUN_144cfae80(param_1);
  }
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[8] + (longlong)(int)param_3 * 8) + 0x38) +
           (longlong)local_res18._4_4_ * 8);
  iVar7 = local_res20._4_4_;
  iVar12 = (int)local_res20;
  iVar10 = *(int *)(lVar4 + 0x3c);
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1[8] + (longlong)iVar12 * 8) + 0x38) +
           (longlong)local_res20._4_4_ * 8);
  while ((iVar10 != -1 &&
         (lVar13 = (longlong)iVar10 * 0x200, *(int *)(lVar13 + 0x1e0 + *param_1) != -1))) {
    plVar9 = *(longlong **)(lVar4 + 0x18);
    iVar1 = *(int *)(lVar13 + 0x1f0 + *plVar9);
    if ((iVar1 != -1) &&
       (lVar15 = (longlong)iVar1 * 0x200 + *plVar9, *(int *)(lVar15 + 0x1e8) != -1)) {
      FUN_144ce0ec0(lVar4 + 0x40);
      *(undefined4 *)(lVar15 + 0x1e8) = 0xffffffff;
      plVar9 = *(longlong **)(lVar4 + 0x18);
    }
    if ((iVar10 != -1) && (lVar15 = *plVar9, *(int *)(lVar15 + 0x1e8 + lVar13) != -1)) {
      FUN_144ce0ec0(lVar4 + 0x40);
      *(undefined4 *)(lVar15 + 0x1e8 + lVar13) = 0xffffffff;
    }
    plVar9 = *(longlong **)(lVar4 + 0x18);
    lVar15 = *plVar9;
    iVar2 = *(int *)(lVar13 + 0x1f0 + lVar15);
    uVar8 = *(undefined4 *)(lVar13 + 500 + lVar15);
    if (iVar2 == -1) {
      *(undefined4 *)(lVar4 + 0x38) = uVar8;
    }
    else {
      *(undefined4 *)((longlong)iVar2 * 0x200 + 500 + lVar15) = uVar8;
    }
    iVar2 = *(int *)(lVar13 + 500 + lVar15);
    uVar8 = *(undefined4 *)(lVar13 + 0x1f0 + lVar15);
    if (iVar2 == -1) {
      *(undefined4 *)(lVar4 + 0x3c) = uVar8;
    }
    else {
      *(undefined4 *)((longlong)iVar2 * 0x200 + 0x1f0 + *plVar9) = uVar8;
    }
    *(int *)(lVar13 + 500 + lVar15) = (int)plVar9[2];
    *(int *)(plVar9 + 2) = iVar10;
    FUN_144ce2660(lVar4,iVar1);
    iVar10 = *(int *)(lVar13 + 0x1f0 + *param_1);
  }
  iVar10 = *(int *)(lVar5 + 0x38);
  while (iVar10 != -1) {
    lVar13 = (longlong)iVar10 * 0x200;
    iVar1 = *(int *)(lVar13 + 500 + *param_1);
    if (*(int *)(lVar13 + 0x1e0 + *param_1) == -1) break;
    plVar9 = *(longlong **)(lVar5 + 0x18);
    iVar2 = *(int *)(*plVar9 + 0x1f0 + lVar13);
    if ((iVar2 != -1) &&
       (lVar15 = (longlong)iVar2 * 0x200 + *plVar9, *(int *)(lVar15 + 0x1e8) != -1)) {
      FUN_144ce0ec0(lVar5 + 0x40);
      *(undefined4 *)(lVar15 + 0x1e8) = 0xffffffff;
      plVar9 = *(longlong **)(lVar5 + 0x18);
    }
    if ((iVar10 != -1) && (lVar15 = *plVar9, *(int *)(lVar15 + 0x1e8 + lVar13) != -1)) {
      FUN_144ce0ec0(lVar5 + 0x40);
      *(undefined4 *)(lVar15 + 0x1e8 + lVar13) = 0xffffffff;
    }
    plVar9 = *(longlong **)(lVar5 + 0x18);
    lVar15 = *plVar9;
    iVar3 = *(int *)(lVar13 + 0x1f0 + lVar15);
    uVar8 = *(undefined4 *)(lVar13 + 500 + lVar15);
    if (iVar3 == -1) {
      *(undefined4 *)(lVar5 + 0x38) = uVar8;
    }
    else {
      *(undefined4 *)((longlong)iVar3 * 0x200 + 500 + lVar15) = uVar8;
    }
    iVar3 = *(int *)(lVar13 + 500 + lVar15);
    uVar8 = *(undefined4 *)(lVar13 + 0x1f0 + lVar15);
    if (iVar3 == -1) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar8;
    }
    else {
      *(undefined4 *)((longlong)iVar3 * 0x200 + 0x1f0 + *plVar9) = uVar8;
    }
    *(int *)(lVar13 + 500 + lVar15) = (int)plVar9[2];
    *(int *)(plVar9 + 2) = iVar10;
    FUN_144ce2660(lVar5,iVar2);
    iVar10 = iVar1;
  }
  iVar10 = *(int *)(lVar5 + 0x38);
  uVar8 = *(undefined4 *)(lVar4 + 0x3c);
  if (iVar10 != -1) {
    if (*(int *)(lVar4 + 0x38) == -1) {
      *(int *)(lVar4 + 0x38) = iVar10;
    }
    else {
      *(int *)((longlong)*(int *)(lVar4 + 0x3c) * 0x200 + 500 + *param_1) = iVar10;
      *(undefined4 *)((longlong)*(int *)(lVar5 + 0x38) * 0x200 + 0x1f0 + *param_1) =
           *(undefined4 *)(lVar4 + 0x3c);
    }
    *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar5 + 0x3c);
    *(undefined8 *)(lVar5 + 0x38) = 0xffffffffffffffff;
  }
  FUN_144ce2660(lVar4,uVar8);
  iVar10 = *(int *)(lVar5 + 0x6660);
  while (iVar10 != -1) {
    uVar8 = FUN_144ce0d30(lVar4 + 0x40,(longlong)iVar10 * 0x198 + *(longlong *)(lVar5 + 0x50));
    piVar14 = (int *)((longlong)*(int *)(lVar5 + 0x6660) * 0x198 + *(longlong *)(lVar5 + 0x50));
    if (*piVar14 == 1) {
      iVar10 = piVar14[0x60];
      if (iVar10 == -1) {
        iVar10 = *(int *)((longlong)piVar14[0x61] * 0x200 + 0x1f0 + *param_1);
      }
      *(undefined4 *)((longlong)iVar10 * 0x200 + 0x1e8 + *param_1) = uVar8;
    }
    FUN_144ce0b50(lVar5 + 0x40,&local_res20);
    iVar10 = *(int *)(lVar5 + 0x6660);
  }
  FUN_144cf5b60(param_1,param_2,&local_res18);
  *(undefined4 *)(lVar4 + 0x66d0) = 0xffffffff;
  lVar4 = (longlong)iVar12 * 8;
  lVar5 = *(longlong *)(param_1[8] + lVar4);
  lVar13 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar7 * 8);
  *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar7 * 8) = 0;
  if (lVar13 != 0) {
    FUN_144b3f230(lVar13);
  }
  plVar11 = *(longlong **)(lVar5 + 0x38);
  bVar6 = true;
  plVar9 = plVar11 + *(int *)(lVar5 + 0x40);
  if (plVar11 != plVar9) {
    do {
      if (*plVar11 != 0) {
        if ((bVar6) && (*(int *)(*plVar11 + 0x38) == -1)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar9);
    if (!bVar6) {
      return;
    }
  }
  lVar5 = *(longlong *)(lVar4 + param_1[8]);
  *(undefined8 *)(lVar4 + param_1[8]) = 0;
  if (lVar5 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144cf65b0 FUN_144cf65b0 body=890 status=ok
// SIG undefined FUN_144cf65b0(void)

void FUN_144cf65b0(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint local_res10;
  int local_238;
  ulonglong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar5 = (ulonglong)(int)param_2;
  uVar6 = uVar5;
  local_res10 = param_2;
  do {
    local_220 = (ulonglong)param_3;
    uVar8 = uVar5 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)((int)uVar5 + param_3) >> 1) * 4);
    local_238 = param_3;
    do {
      while( true ) {
        iVar2 = *(int *)(param_1 + uVar6 * 4);
        FUN_144cdc3e0(*param_4,&local_138,
                      *(undefined4 *)((longlong)iVar2 * 0x60 + *(longlong *)(*param_4 + 0x28)));
        FUN_144cdc3e0(*param_4,&local_218,
                      *(undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(*param_4 + 0x28)));
        local_198 = local_218;
        uStack_190 = uStack_210;
        local_188 = local_208;
        uStack_180 = uStack_200;
        local_178 = local_1f8;
        uStack_170 = uStack_1f0;
        local_168 = local_1e8;
        uStack_160 = uStack_1e0;
        local_158 = local_1b8;
        uStack_150 = uStack_1b0;
        local_148 = local_1a8;
        uStack_140 = uStack_1a0;
        local_218 = local_138;
        uStack_210 = uStack_130;
        local_208 = local_128;
        uStack_200 = uStack_120;
        local_1f8 = local_118;
        uStack_1f0 = uStack_110;
        local_1e8 = local_108;
        uStack_1e0 = uStack_100;
        iVar4 = FUN_144cf0990(&local_218,&local_198);
        if (iVar4 == 0) {
          bVar9 = iVar1 < iVar2;
        }
        else {
          bVar9 = iVar4 == -1;
        }
        uVar7 = (uint)uVar8;
        if (!bVar9) break;
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar6 = uVar6 + 1;
      }
      while( true ) {
        iVar2 = *(int *)(param_1 + local_220 * 4);
        FUN_144cdc3e0(*param_4,&local_b8,
                      *(undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(*param_4 + 0x28)));
        FUN_144cdc3e0(*param_4,&local_138,
                      *(undefined4 *)((longlong)iVar2 * 0x60 + *(longlong *)(*param_4 + 0x28)));
        local_218 = local_138;
        uStack_210 = uStack_130;
        local_208 = local_128;
        uStack_200 = uStack_120;
        local_1f8 = local_118;
        uStack_1f0 = uStack_110;
        local_1e8 = local_108;
        uStack_1e0 = uStack_100;
        local_198 = local_b8;
        uStack_190 = uStack_b0;
        local_188 = local_a8;
        uStack_180 = uStack_a0;
        local_178 = local_98;
        uStack_170 = uStack_90;
        local_168 = local_88;
        uStack_160 = uStack_80;
        local_158 = CONCAT44(uStack_54,local_58);
        uStack_150 = CONCAT44(uStack_4c,uStack_50);
        local_148 = CONCAT44(uStack_44,local_48);
        uStack_140 = CONCAT44(uStack_3c,uStack_40);
        iVar4 = FUN_144cf0990(&local_198,&local_218);
        if (iVar4 == 0) {
          bVar9 = iVar2 < iVar1;
        }
        else {
          bVar9 = iVar4 == -1;
        }
        if (!bVar9) break;
        local_238 = local_238 + -1;
        local_220 = local_220 - 1;
      }
      if ((longlong)local_220 < (longlong)uVar6) break;
      if (local_220 != uVar6) {
        uVar3 = *(undefined4 *)(param_1 + local_220 * 4);
        *(undefined4 *)(param_1 + local_220 * 4) = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = uVar3;
      }
      local_238 = local_238 + -1;
      local_220 = local_220 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)local_220);
    if ((int)local_res10 < local_238) {
      FUN_144cf65b0(param_1,local_res10,local_238,param_4);
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar5 = (ulonglong)uVar7;
    local_res10 = uVar7;
  } while( true );
}



// FUNCTION 144cf6930 FUN_144cf6930 body=957 status=ok
// SIG undefined FUN_144cf6930(void)

void FUN_144cf6930(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  int local_res8 [2];
  int local_res18 [4];
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_88;
  longlong local_68;
  
  piVar5 = (int *)*param_1;
  iVar4 = (int)(((longlong)*(int *)(param_1 + 1) * 0xc) / 0xc);
  lVar8 = (longlong)iVar4;
  if (0 < iVar4) {
    do {
      local_158 = (longlong)*piVar5;
      lStack_150 = local_158 >> 0x3f;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 1;
      local_128 = 0;
      lStack_120 = 0;
      local_138 = 1;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_148 = lStack_150;
      lStack_140 = lStack_150;
      local_118 = local_158;
      lStack_110 = lStack_150;
      local_108 = lStack_150;
      lStack_100 = lStack_150;
      lVar3 = FUN_147e59322(&local_158,local_res18);
      if ((float)lVar3 == 0.0) {
        iVar4 = 0;
      }
      else {
        fVar9 = (float)FUN_144cc3f10(&local_138,local_res8);
        iVar4 = local_res18[0] * 0x800000 + local_res8[0] * -0x800000 + (int)((float)lVar3 / fVar9);
      }
      plVar6 = (longlong *)*param_2;
      iVar7 = (int)plVar6[1] + 1;
      if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_144c2b610(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      lVar3 = plVar6[1];
      piVar5 = piVar5 + 3;
      *(int *)(plVar6 + 1) = iVar7;
      *(int *)(*plVar6 + (longlong)(int)lVar3 * 4) = iVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  plVar6 = (longlong *)param_1[2];
  iVar4 = (int)(((longlong)*(int *)(param_1 + 3) * 0x60) / 0x60);
  lVar8 = (longlong)iVar4;
  if (0 < iVar4) {
    do {
      local_158 = *plVar6;
      uStack_a0 = 0;
      local_148 = plVar6[2];
      lStack_150 = plVar6[1];
      lVar2 = plVar6[9];
      local_128 = plVar6[0xb];
      lVar3 = plVar6[10];
      lStack_140 = local_148 >> 0x3f;
      local_b8._0_4_ = (undefined4)lVar2;
      local_b8._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_b0._0_4_ = (undefined4)lVar3;
      uStack_b0._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      lStack_120 = 0;
      local_138 = (undefined4)local_b8;
      uStack_134 = local_b8._4_4_;
      uStack_130 = (undefined4)uStack_b0;
      uStack_12c = uStack_b0._4_4_;
      local_118 = local_158;
      lStack_110 = lStack_150;
      local_108 = local_148;
      lStack_100 = lStack_140;
      local_b8 = lVar2;
      uStack_b0 = lVar3;
      local_a8 = local_128;
      local_88 = local_148;
      local_68 = local_128;
      lVar3 = FUN_147e59322(&local_158,local_res18);
      if ((float)lVar3 == 0.0) {
        iVar4 = 0;
      }
      else {
        fVar9 = (float)FUN_144cc3f10(&local_138,local_res8);
        iVar4 = local_res18[0] * 0x800000 + local_res8[0] * -0x800000 + (int)((float)lVar3 / fVar9);
      }
      plVar1 = (longlong *)*param_2;
      iVar7 = (int)plVar1[1] + 1;
      if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_144c2b610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      lVar3 = plVar1[1];
      plVar6 = plVar6 + 0xc;
      *(int *)(plVar1 + 1) = iVar7;
      *(int *)(*plVar1 + (longlong)(int)lVar3 * 4) = iVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar8 = (longlong)*(int *)(param_1 + 5);
  plVar6 = (longlong *)param_1[4];
  if (0 < lVar8) {
    do {
      local_158 = *plVar6;
      lStack_150 = plVar6[1];
      local_148 = plVar6[2];
      lStack_140 = plVar6[3];
      local_138 = (undefined4)plVar6[0xc];
      uStack_134 = *(undefined4 *)((longlong)plVar6 + 100);
      uStack_130 = (undefined4)plVar6[0xd];
      uStack_12c = *(undefined4 *)((longlong)plVar6 + 0x6c);
      local_128 = plVar6[0xe];
      lStack_120 = plVar6[0xf];
      lVar3 = FUN_147e59322(&local_158,local_res18);
      if ((float)lVar3 == 0.0) {
        iVar4 = 0;
      }
      else {
        fVar9 = (float)FUN_144cc3f10(&local_138,local_res8);
        iVar4 = local_res18[0] * 0x800000 + local_res8[0] * -0x800000 + (int)((float)lVar3 / fVar9);
      }
      plVar1 = (longlong *)*param_2;
      iVar7 = (int)plVar1[1] + 1;
      if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_144c2b610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      lVar3 = plVar1[1];
      plVar6 = plVar6 + 0x10;
      *(int *)(plVar1 + 1) = iVar7;
      *(int *)(*plVar1 + (longlong)(int)lVar3 * 4) = iVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144cf6cf0 FUN_144cf6cf0 body=76 status=ok
// SIG undefined FUN_144cf6cf0(void)

void FUN_144cf6cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x30);
  if ((int)(*(uint *)(lVar2 + 0x2c) & 0x7fffffff) < iVar1) {
    FUN_14180788c(lVar2 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar2 + 0x28) < iVar1) || (iVar1 < *(int *)(lVar2 + 0x28))) {
    *(int *)(lVar2 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 144cf6d40 FUN_144cf6d40 body=5 status=ok
// SIG undefined FUN_144cf6d40(void)

undefined8 FUN_144cf6d40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144cf6d50 FUN_144cf6d50 body=115 status=ok
// SIG undefined FUN_144cf6d50(void)

undefined8 * FUN_144cf6d50(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144cf6dd0 FUN_144cf6dd0 body=15 status=ok
// SIG undefined FUN_144cf6dd0(void)

undefined4 * FUN_144cf6dd0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  return param_2;
}



// FUNCTION 144cf6de0 FUN_144cf6de0 body=12 status=ok
// SIG undefined FUN_144cf6de0(void)

void FUN_144cf6de0(longlong param_1,longlong param_2)

{
  FUN_144cf1160(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cf6df0 FUN_144cf6df0 body=5 status=ok
// SIG undefined FUN_144cf6df0(void)

undefined8 FUN_144cf6df0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144cf6e00 FUN_144cf6e00 body=115 status=ok
// SIG undefined FUN_144cf6e00(void)

undefined8 * FUN_144cf6e00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144cf6e80 FUN_144cf6e80 body=226 status=ok
// SIG undefined FUN_144cf6e80(void)

void FUN_144cf6e80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtSnapRounding/BuildXPartitioning";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144ce87a0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18),
                *(undefined4 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) + 0x40);
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144cf6f70 FUN_144cf6f70 body=5 status=ok
// SIG undefined FUN_144cf6f70(void)

undefined8 FUN_144cf6f70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cf6f80 FUN_144cf6f80 body=115 status=ok
// SIG undefined FUN_144cf6f80(void)

undefined8 * FUN_144cf6f80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144cf7000 FUN_144cf7000 body=9 status=ok
// SIG undefined FUN_144cf7000(void)

void FUN_144cf7000(longlong param_1)

{
  FUN_144cf1380(param_1 + 0x10);
  return;
}



// FUNCTION 144cf7010 FUN_144cf7010 body=5 status=ok
// SIG undefined FUN_144cf7010(void)

undefined8 FUN_144cf7010(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144cf7020 FUN_144cf7020 body=115 status=ok
// SIG undefined FUN_144cf7020(void)

undefined8 * FUN_144cf7020(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144cf70a0 FUN_144cf70a0 body=15 status=ok
// SIG undefined FUN_144cf70a0(void)

undefined4 * FUN_144cf70a0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144cf70b0 FUN_144cf70b0 body=12 status=ok
// SIG undefined FUN_144cf70b0(void)

void FUN_144cf70b0(longlong param_1,longlong param_2)

{
  FUN_144cf1560(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cf70c0 FUN_144cf70c0 body=5 status=ok
// SIG undefined FUN_144cf70c0(void)

undefined8 FUN_144cf70c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cf70d0 FUN_144cf70d0 body=115 status=ok
// SIG undefined FUN_144cf70d0(void)

undefined8 * FUN_144cf70d0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144cf7150 FUN_144cf7150 body=9 status=ok
// SIG undefined FUN_144cf7150(void)

void FUN_144cf7150(longlong param_1)

{
  FUN_144cf1810(param_1 + 0x10);
  return;
}



// FUNCTION 144cf7160 FUN_144cf7160 body=5 status=ok
// SIG undefined FUN_144cf7160(void)

undefined8 FUN_144cf7160(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cf7170 FUN_144cf7170 body=129 status=ok
// SIG undefined FUN_144cf7170(void)

undefined8 * FUN_144cf7170(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144cf7200 FUN_144cf7200 body=179 status=ok
// SIG undefined FUN_144cf7200(void)

void FUN_144cf7200(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144cf72c0 FUN_144cf72c0 body=260 status=ok
// SIG undefined FUN_144cf72c0(void)

bool FUN_144cf72c0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bStackX_14;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  FUN_144ccf3e0(param_1 + 4,param_2,&local_38);
  bStackX_14 = (byte)((ulonglong)param_2 >> 0x20);
  uVar11 = CONCAT71(0,bStackX_14);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar11;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar8 = SUB168(auVar3 * auVar5,8);
  uVar10 = (uint)bStackX_14;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  uVar9 = SUB168(auVar4 * auVar6,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[2];
  uVar1 = (ulonglong)CARRY8((ulonglong)uVar10 * param_1[1],uVar8);
  uVar2 = (ulonglong)uVar10 * param_1[2] + uVar9;
  return (uVar2 + uVar1 == local_28 &&
         ((ulonglong)uVar10 * param_1[1] + uVar8 == lStack_30 &&
         (ulonglong)bStackX_14 * *param_1 == local_38)) &&
         uVar11 * param_1[3] + SUB168(ZEXT416(uVar10) * auVar7,8) +
         (ulonglong)(CARRY8((ulonglong)uVar10 * param_1[2],uVar9) || CARRY8(uVar2,uVar1)) ==
         lStack_20;
}



// FUNCTION 144cf73d0 FUN_144cf73d0 body=509 status=ok
// SIG undefined FUN_144cf73d0(void)

longlong * FUN_144cf73d0(longlong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  
  FUN_144ccf3e0(param_2 + 8,*param_3,&local_80);
  bVar1 = *(byte *)(param_3 + 2);
  uVar22 = CONCAT71(0,bVar1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar22;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  uVar20 = SUB168(auVar7 * auVar11,8);
  uVar26 = (uint)bVar1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar22;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[1];
  uVar21 = SUB168(auVar8 * auVar12,8);
  uVar24 = (ulonglong)bVar1 * param_2[1] + uVar20;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[2];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar20 = (ulonglong)CARRY8((ulonglong)bVar1 * param_2[1],uVar20);
  uVar5 = uVar26 * uVar3 + uVar21;
  uVar29 = uVar5 + uVar20;
  uVar2 = param_3[1];
  uVar23 = (ulonglong)((ulonglong)uVar26 * *param_2 < local_80);
  uVar25 = uVar24 - local_78;
  uVar24 = (ulonglong)(uVar24 < local_78 || uVar25 < uVar23);
  uVar6 = uVar29 - local_70;
  *param_1 = (ulonglong)uVar26 * *param_2 - local_80;
  param_1[1] = uVar25 - uVar23;
  param_1[2] = uVar6 - uVar24;
  param_1[3] = ((uVar22 * uVar4 + SUB168(ZEXT416(uVar26) * auVar13,8) +
                (ulonglong)(CARRY8(uVar26 * uVar3,uVar21) || CARRY8(uVar5,uVar20))) - local_68) -
               (ulonglong)(uVar29 < local_70 || uVar6 < uVar24);
  FUN_144ccf3e0(param_2 + 8,uVar2,&local_80);
  bVar1 = *(byte *)(param_3 + 2);
  uVar28 = CONCAT71(0,bVar1);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[4];
  uVar20 = SUB168(auVar9 * auVar14,8);
  uVar26 = (uint)bVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar28;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[5];
  uVar22 = SUB168(auVar10 * auVar15,8);
  uVar25 = (ulonglong)bVar1 * param_2[5] + uVar20;
  uVar3 = param_2[6];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[6];
  uVar4 = param_2[7];
  uVar5 = (ulonglong)CARRY8((ulonglong)bVar1 * param_2[5],uVar20);
  uVar23 = uVar26 * uVar3 + uVar22;
  uVar30 = uVar23 + uVar5;
  uVar27 = (uint)bVar1;
  uVar24 = (ulonglong)((ulonglong)uVar26 * param_2[4] < local_80);
  uVar6 = uVar25 - local_78;
  uVar25 = (ulonglong)(uVar25 < local_78 || uVar6 < uVar24);
  uVar21 = uVar30 - local_70;
  uVar20 = param_2[8];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar20;
  uVar29 = SUB168(ZEXT416(uVar27) * auVar17,8);
  param_1[4] = (ulonglong)uVar26 * param_2[4] - local_80;
  param_1[5] = uVar6 - uVar24;
  param_1[6] = uVar21 - uVar25;
  param_1[7] = ((uVar28 * uVar4 + SUB168(ZEXT416(uVar26) * auVar16,8) +
                (ulonglong)(CARRY8(uVar26 * uVar3,uVar22) || CARRY8(uVar23,uVar5))) - local_68) -
               (ulonglong)(uVar30 < local_70 || uVar21 < uVar25);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[9];
  uVar23 = SUB168(ZEXT416(uVar27) * auVar18,8);
  uVar3 = param_2[9];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[10];
  param_1[8] = uVar20 * uVar28;
  param_1[9] = uVar27 * uVar3 + uVar29;
  uVar4 = param_2[10];
  uVar20 = (ulonglong)CARRY8(uVar27 * uVar3,uVar29);
  uVar5 = uVar27 * uVar4 + uVar23;
  uVar3 = param_2[0xb];
  param_1[10] = uVar5 + uVar20;
  param_1[0xb] = uVar28 * uVar3 + SUB168(ZEXT416(uVar27) * auVar19,8) +
                 (ulonglong)(CARRY8(uVar27 * uVar4,uVar23) || CARRY8(uVar5,uVar20));
  return param_1;
}



// FUNCTION 144cf75d0 FUN_144cf75d0 body=596 status=ok
// SIG undefined FUN_144cf75d0(void)

longlong * FUN_144cf75d0(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  
  plVar12 = &local_118;
  uVar2 = param_3[10];
  uVar13 = (longlong)uVar2 >> 0x3f;
  uVar3 = param_3[1];
  local_118 = (*param_3 ^ uVar13) - uVar13;
  uVar4 = param_3[9];
  uVar6 = (ulonglong)((*param_3 ^ uVar13) < uVar13);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_110 = uVar7 - uVar6;
  uVar5 = param_3[2];
  param_1[0xb] = local_118;
  param_1[0xc] = lStack_110;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_108 = uVar7 - uVar6;
  uVar3 = param_3[3];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_100 = uVar7 - uVar6;
  uVar5 = param_3[4];
  param_1[0xd] = local_108;
  param_1[0xe] = lStack_100;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_f8 = uVar7 - uVar6;
  uVar3 = param_3[5];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_f0 = uVar7 - uVar6;
  uVar5 = param_3[6];
  param_1[0xf] = local_f8;
  param_1[0x10] = lStack_f0;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_e8 = uVar7 - uVar6;
  uVar3 = param_3[7];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_e0 = uVar7 - uVar6;
  uVar5 = param_3[8];
  param_1[0x11] = local_e8;
  param_1[0x12] = lStack_e0;
  uVar3 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar6 = (uVar5 ^ uVar13) - uVar13;
  local_d8 = uVar6 - uVar3;
  uVar3 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar6 < uVar3);
  uVar5 = (uVar4 ^ uVar13) - uVar13;
  lStack_d0 = uVar5 - uVar3;
  param_1[0x13] = local_d8;
  param_1[0x14] = lStack_d0;
  local_c8 = ((uVar2 ^ uVar13) - uVar13) - (ulonglong)((uVar4 ^ uVar13) < uVar13 || uVar5 < uVar3);
  param_1[0x15] = local_c8;
  if ((longlong)uVar2 < 0) {
    local_118 = -*param_2;
    uVar2 = -param_2[1];
    lStack_110 = uVar2 - (*param_2 != 0);
    uVar2 = (ulonglong)(param_2[1] != 0 || uVar2 < (*param_2 != 0));
    uVar3 = -param_2[2];
    local_108 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[2] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[3];
    lStack_100 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[3] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[4];
    local_f8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[4] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[5];
    lStack_f0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[5] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[6];
    local_e8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[6] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[7];
    lStack_e0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[7] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[8];
    local_d8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[8] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[9];
    lStack_d0 = uVar3 - uVar2;
    local_c8 = -(ulonglong)(param_2[9] != 0 || uVar3 < uVar2) - param_2[10];
  }
  else {
    plVar12 = &local_c0;
    local_c0 = *param_2;
    lStack_b8 = param_2[1];
    local_b0 = param_2[2];
    lStack_a8 = param_2[3];
    local_a0 = param_2[4];
    lStack_98 = param_2[5];
    local_90 = param_2[6];
    lStack_88 = param_2[7];
    local_80 = param_2[8];
    lStack_78 = param_2[9];
    local_70 = param_2[10];
  }
  lVar1 = plVar12[1];
  lVar8 = plVar12[2];
  lVar9 = plVar12[3];
  *param_1 = *plVar12;
  param_1[1] = lVar1;
  lVar1 = plVar12[4];
  lVar10 = plVar12[5];
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  lVar8 = plVar12[6];
  lVar9 = plVar12[7];
  param_1[4] = lVar1;
  param_1[5] = lVar10;
  lVar10 = plVar12[8];
  lVar11 = plVar12[9];
  param_1[6] = lVar8;
  param_1[7] = lVar9;
  lVar1 = plVar12[10];
  param_1[8] = lVar10;
  param_1[9] = lVar11;
  param_1[10] = lVar1;
  return param_1;
}



// FUNCTION 144cf7830 FUN_144cf7830 body=497 status=ok
// SIG undefined FUN_144cf7830(void)

void FUN_144cf7830(undefined8 param_1,undefined8 param_2,ulonglong *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int local_58 [12];
  
  iVar7 = 6;
  lVar4 = 6;
  do {
    uVar6 = param_3[lVar4];
    if (uVar6 != 0) {
      uVar5 = (uint)uVar6 | (uint)(uVar6 >> 1) & 0x7fffffff;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      iVar1 = 0x20 - iVar3;
      if (0x1f < 0x20 - iVar3) {
        iVar1 = 0x40 - iVar2;
      }
      iVar2 = iVar7 * 0x40 - iVar1;
      uVar6 = param_3[iVar7] << ((byte)iVar1 & 0x3f);
      if (iVar1 != 0) {
        uVar6 = uVar6 | param_3[(longlong)iVar7 + -1] >> (0x40 - (byte)iVar1 & 0x3f);
      }
      goto LAB_144cf7931;
    }
    iVar7 = iVar7 + -1;
    lVar4 = lVar4 + -1;
  } while (0 < lVar4);
  uVar6 = *param_3;
  iVar2 = 0;
LAB_144cf7931:
  lVar4 = FUN_144cfebb0(param_1,local_58);
  if ((float)lVar4 == 0.0) {
    *param_4 = 0;
  }
  else {
    *param_4 = local_58[0] * 0x800000 + iVar2 * -0x800000 + (int)((float)lVar4 / (float)uVar6);
  }
  lVar4 = FUN_144cfebb0(param_2,local_58);
  if ((float)lVar4 != 0.0) {
    param_4[1] = (local_58[0] - iVar2) * 0x800000 + (int)((float)lVar4 / (float)uVar6);
    return;
  }
  param_4[1] = 0;
  return;
}



// FUNCTION 144cf7a30 FUN_144cf7a30 body=508 status=ok
// SIG undefined FUN_144cf7a30(void)

void FUN_144cf7a30(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_c8 [9];
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar27 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar28 = SUB168(auVar11 * auVar19,8);
  local_c8[1] = uVar4 * uVar2 + uVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar29 = SUB168(auVar12 * auVar20,8);
  uVar27 = (ulonglong)CARRY8(uVar4 * uVar2,uVar27);
  uVar30 = uVar5 * uVar2 + uVar28;
  local_c8[2] = uVar30 + uVar27;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar27 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar28) || CARRY8(uVar30,uVar27));
  uVar30 = uVar6 * uVar2 + uVar29;
  local_c8[3] = uVar30 + uVar27;
  local_c8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar29) || CARRY8(uVar30,uVar27));
  local_res8 = 1;
  iVar26 = 1;
  do {
    uVar27 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar27;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar30 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar27;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar29 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar27 + uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar31 = SUB168(auVar16 * auVar24,8);
    uVar30 = (ulonglong)CARRY8(uVar4 * uVar27,uVar30);
    uVar28 = uVar5 * uVar27 + uVar29;
    uVar33 = uVar28 + uVar30;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar28 = (ulonglong)(CARRY8(uVar5 * uVar27,uVar29) || CARRY8(uVar28,uVar30));
    uVar8 = uVar6 * uVar27 + uVar31;
    uVar32 = uVar8 + uVar28;
    lVar1 = local_res8 + 1;
    uVar30 = local_c8[local_res8];
    local_c8[iVar26] = uVar3 * uVar27 + local_c8[local_res8];
    uVar29 = (ulonglong)CARRY8(uVar3 * uVar27,uVar30);
    uVar30 = local_c8[lVar1];
    uVar9 = uVar7 + local_c8[lVar1];
    local_c8[iVar26 + 1] = uVar9 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar7,uVar30) || CARRY8(uVar9,uVar29));
    uVar30 = local_c8[local_res8 + 2];
    uVar7 = uVar33 + local_c8[local_res8 + 2];
    local_c8[iVar26 + 2] = uVar7 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar7,uVar29));
    uVar30 = local_c8[local_res8 + 3];
    uVar7 = uVar32 + local_c8[local_res8 + 3];
    local_c8[iVar26 + 3] = uVar7 + uVar29;
    local_c8[iVar26 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar27,uVar31) || CARRY8(uVar8,uVar28)) +
         (ulonglong)(CARRY8(uVar32,uVar30) || CARRY8(uVar7,uVar29));
    local_res8 = lVar1;
    iVar26 = iVar26 + 1;
  } while (lVar1 < 0xb);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_c8[1];
  param_3[2] = local_c8[2];
  param_3[3] = local_c8[3];
  param_3[4] = local_c8[4];
  param_3[5] = local_c8[5];
  param_3[6] = local_c8[6];
  param_3[7] = local_c8[7];
  param_3[8] = local_c8[8];
  param_3[9] = lStack_80;
  param_3[10] = local_78;
  param_3[0xb] = lStack_70;
  param_3[0xc] = local_68;
  param_3[0xd] = lStack_60;
  param_3[0xe] = local_58;
  return;
}



// FUNCTION 144cf7c30 FUN_144cf7c30 body=213 status=ok
// SIG undefined FUN_144cf7c30(void)

undefined8 FUN_144cf7c30(undefined8 param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  iVar1 = *param_3;
  FUN_144cff360(param_2,(longlong)iVar1,local_88,1);
  if (iVar1 < 0) {
    bVar4 = local_80 < *param_2;
    local_80 = local_80 - *param_2;
    uVar2 = (ulonglong)bVar4;
    bVar4 = local_78 < param_2[1];
    uVar3 = local_78 - param_2[1];
    local_78 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_70 < param_2[2];
    uVar3 = local_70 - param_2[2];
    local_70 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_68 < param_2[3];
    uVar3 = local_68 - param_2[3];
    local_68 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_60 < param_2[4];
    uVar3 = local_60 - param_2[4];
    local_60 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_58 < param_2[5];
    uVar3 = local_58 - param_2[5];
    local_58 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_50 < param_2[6];
    uVar3 = local_50 - param_2[6];
    local_50 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_48 < param_2[7];
    uVar3 = local_48 - param_2[7];
    local_48 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_40 < param_2[8];
    uVar3 = local_40 - param_2[8];
    local_40 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_38 < param_2[9];
    uVar3 = local_38 - param_2[9];
    local_38 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_30 < param_2[10];
    uVar3 = local_30 - param_2[10];
    local_30 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_28 < param_2[0xb];
    uVar3 = local_28 - param_2[0xb];
    local_28 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_20 < param_2[0xc];
    uVar3 = local_20 - param_2[0xc];
    local_20 = uVar3 - uVar2;
    local_18 = (local_18 - param_2[0xd]) - (ulonglong)(bVar4 || uVar3 < uVar2);
  }
  FUN_144cff2e0(local_88,param_1);
  return param_1;
}



// FUNCTION 144cf7d10 FUN_144cf7d10 body=360 status=ok
// SIG undefined FUN_144cf7d10(void)

uint FUN_144cf7d10(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[0xe] == 0) {
    uVar1 = (uint)((param_1[0xc] == 0 &&
                   ((param_1[10] == 0 &&
                    ((param_1[8] == 0 &&
                     ((param_1[6] == 0 &&
                      ((param_1[4] == 0 &&
                       ((param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0)) && param_1[3] == 0))
                      && param_1[5] == 0)) && param_1[7] == 0)) && param_1[9] == 0)) &&
                   param_1[0xb] == 0)) && param_1[0xd] == 0);
  }
  return 1 - uVar1 | (uint)(param_1[0xe] >> 0x3f);
}



// FUNCTION 144cf7e80 FUN_144cf7e80 body=210 status=ok
// SIG undefined FUN_144cf7e80(void)

undefined8 FUN_144cf7e80(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 local_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  
  FUN_144d000f0(param_2,param_3,local_98);
  if (*(longlong *)(param_3 + 0x18) < 0) {
    bVar3 = local_78 < *param_2;
    local_78 = local_78 - *param_2;
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_70 < param_2[1];
    uVar2 = local_70 - param_2[1];
    local_70 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_68 < param_2[2];
    uVar2 = local_68 - param_2[2];
    local_68 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_60 < param_2[3];
    uVar2 = local_60 - param_2[3];
    local_60 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_58 < param_2[4];
    uVar2 = local_58 - param_2[4];
    local_58 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_50 < param_2[5];
    uVar2 = local_50 - param_2[5];
    local_50 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_48 < param_2[6];
    uVar2 = local_48 - param_2[6];
    local_48 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_40 < param_2[7];
    uVar2 = local_40 - param_2[7];
    local_40 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_38 < param_2[8];
    uVar2 = local_38 - param_2[8];
    local_38 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_30 < param_2[9];
    uVar2 = local_30 - param_2[9];
    local_30 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_28 < param_2[10];
    uVar2 = local_28 - param_2[10];
    local_28 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_20 < param_2[0xb];
    uVar2 = local_20 - param_2[0xb];
    local_20 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_18 < param_2[0xc];
    uVar2 = local_18 - param_2[0xc];
    local_18 = uVar2 - uVar1;
    local_10 = (local_10 - param_2[0xd]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_144d00690(local_98,param_1);
  return param_1;
}



// FUNCTION 144cf7f60 FUN_144cf7f60 body=444 status=ok
// SIG undefined FUN_144cf7f60(void)

uint FUN_144cf7f60(longlong *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  return (uint)((auVar1._0_8_ != 0 ||
                ((param_1[0xe] != 0 ||
                 ((param_1[0xc] != 0 ||
                  ((param_1[10] != 0 ||
                   ((param_1[8] != 0 ||
                    ((param_1[6] != 0 ||
                     ((param_1[4] != 0 ||
                      ((param_1[2] != 0 || (param_1[1] != 0 || *param_1 != 0)) || param_1[3] != 0))
                     || param_1[5] != 0)) || param_1[7] != 0)) || param_1[9] != 0)) ||
                  param_1[0xb] != 0)) || param_1[0xd] != 0)) || param_1[0xf] != 0)) ||
               auVar1._8_8_ != 0) | auVar1._12_4_ >> 0x1f;
}



// FUNCTION 144cf8120 FUN_144cf8120 body=455 status=ok
// SIG undefined FUN_144cf8120(void)

void FUN_144cf8120(ulonglong *param_1,undefined8 param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  uVar1 = param_1[3];
  uVar7 = (longlong)uVar1 >> 0x3f;
  local_38 = (*param_1 ^ uVar7) - uVar7;
  uVar5 = (ulonglong)((*param_1 ^ uVar7) < uVar7);
  uVar3 = (param_1[1] ^ uVar7) - uVar7;
  lStack_30 = uVar3 - uVar5;
  uVar5 = (ulonglong)((param_1[1] ^ uVar7) < uVar7 || uVar3 < uVar5);
  uVar3 = (param_1[2] ^ uVar7) - uVar7;
  local_28 = uVar3 - uVar5;
  lStack_20 = ((uVar1 ^ uVar7) - uVar7) - (ulonglong)((param_1[2] ^ uVar7) < uVar7 || uVar3 < uVar5)
  ;
  FUN_147e58a78(&local_38,param_2,&local_78,&local_58);
  uVar4 = CONCAT44(uStack_5c,uStack_60);
  uVar7 = CONCAT44(uStack_64,local_68);
  uVar3 = CONCAT44(uStack_6c,uStack_70);
  uVar5 = CONCAT44(uStack_74,local_78);
  if ((longlong)uVar1 < 0) {
    uVar5 = -CONCAT44(uStack_74,local_78);
    uVar1 = (ulonglong)(CONCAT44(uStack_74,local_78) != 0);
    uVar3 = -CONCAT44(uStack_6c,uStack_70) - uVar1;
    uVar1 = (ulonglong)
            (CONCAT44(uStack_6c,uStack_70) != 0 || (ulonglong)-CONCAT44(uStack_6c,uStack_70) < uVar1
            );
    uVar7 = -CONCAT44(uStack_64,local_68) - uVar1;
    uVar4 = -(ulonglong)
             (CONCAT44(uStack_64,local_68) != 0 || (ulonglong)-CONCAT44(uStack_64,local_68) < uVar1)
            - CONCAT44(uStack_5c,uStack_60);
    bVar8 = local_58 != 0;
    local_58 = -local_58;
    bVar9 = lStack_50 != 0;
    uVar1 = -lStack_50;
    lStack_50 = uVar1 - bVar8;
    uVar1 = (ulonglong)(bVar9 || uVar1 < bVar8);
    bVar8 = local_48 != 0;
    uVar2 = -local_48;
    local_48 = uVar2 - uVar1;
    lStack_40 = -(ulonglong)(bVar8 || uVar2 < uVar1) - lStack_40;
  }
  if (((uint)(lStack_40 >> 0x3f) |
      (uint)((local_48 != 0 || (lStack_50 != 0 || local_58 != 0)) || lStack_40 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar8 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar6 = (longlong)uVar6 >> 0x3f;
    bVar9 = CARRY8(uVar3,uVar6);
    uVar1 = uVar3 + uVar6;
    uVar3 = uVar1 + bVar8;
    uVar1 = (ulonglong)(bVar9 || CARRY8(uVar1,(ulonglong)bVar8));
    bVar8 = CARRY8(uVar7,uVar6);
    uVar2 = uVar7 + uVar6;
    uVar7 = uVar2 + uVar1;
    uVar4 = uVar4 + uVar6 + (ulonglong)(bVar8 || CARRY8(uVar2,uVar1));
  }
  *param_4 = uVar5;
  param_4[1] = uVar3;
  param_4[2] = uVar7;
  param_4[3] = uVar4;
  return;
}



// FUNCTION 144cf82f0 FUN_144cf82f0 body=319 status=ok
// SIG undefined FUN_144cf82f0(void)

void FUN_144cf82f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144cf8430 FUN_144cf8430 body=295 status=ok
// SIG undefined FUN_144cf8430(void)

ulonglong FUN_144cf8430(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x24,&local_res8);
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined4 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7[8] = puVar8[8];
      }
      puVar7 = puVar7 + 9;
      puVar8 = puVar8 + 9;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x24 + 0x24;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x24;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x24;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x24;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x24);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144cf8560 FUN_144cf8560 body=660 status=ok
// SIG undefined FUN_144cf8560(void)

undefined8 FUN_144cf8560(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  ulonglong uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_144cfe210(param_2 + 0x58,param_3,&local_278);
  if (*(longlong *)(param_3 + 0x68) < 0) {
    bVar3 = local_208 < *(ulonglong *)(param_2 + 0x58);
    local_208 = local_208 - *(ulonglong *)(param_2 + 0x58);
    uVar1 = (ulonglong)bVar3;
    bVar3 = uStack_200 < *(ulonglong *)(param_2 + 0x60);
    uVar2 = uStack_200 - *(ulonglong *)(param_2 + 0x60);
    uStack_200 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_1f8 < *(ulonglong *)(param_2 + 0x68);
    uVar2 = local_1f8 - *(ulonglong *)(param_2 + 0x68);
    local_1f8 = uVar2 - uVar1;
    lStack_1f0 = (lStack_1f0 - *(longlong *)(param_2 + 0x70)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  local_118 = local_238;
  uStack_110 = uStack_230;
  local_108 = local_228;
  uStack_100 = uStack_220;
  local_f8 = local_218;
  uStack_f0 = uStack_210;
  local_e8 = local_208;
  uStack_e0 = uStack_200;
  local_d8 = local_1f8;
  lStack_d0 = lStack_1f0;
  if ((&lStack_d0 < &local_1e8) || (&uStack_160 < local_158)) {
    local_1a8 = local_238;
    uStack_1a0 = uStack_230;
    local_198 = local_228;
    uStack_190 = uStack_220;
    local_188 = local_218;
    uStack_180 = uStack_210;
    local_178 = local_208;
    uStack_170 = uStack_200;
    local_168 = local_1f8;
    uStack_160 = lStack_1f0;
    local_1e8 = CONCAT44(uStack_274,local_278);
    uStack_1e0 = CONCAT44(uStack_26c,uStack_270);
    local_1d8 = CONCAT44(uStack_264,local_268);
    uStack_1d0 = CONCAT44(uStack_25c,uStack_260);
    local_1c8 = CONCAT44(uStack_254,local_258);
    uStack_1c0 = CONCAT44(uStack_24c,uStack_250);
    local_1b8 = CONCAT44(uStack_244,local_248);
    uStack_1b0 = CONCAT44(uStack_23c,uStack_240);
  }
  else {
    memcpy(&local_1e8,local_158,0x90);
  }
  local_c8 = local_1e8;
  uStack_c0 = uStack_1e0;
  local_b8 = local_1d8;
  uStack_b0 = uStack_1d0;
  local_a8 = local_1c8;
  uStack_a0 = uStack_1c0;
  local_98 = local_1b8;
  uStack_90 = uStack_1b0;
  local_88 = local_1a8;
  uStack_80 = uStack_1a0;
  local_78 = local_198;
  uStack_70 = uStack_190;
  local_68 = local_188;
  uStack_60 = uStack_180;
  local_58 = (undefined4)local_178;
  uStack_54 = local_178._4_4_;
  uStack_50 = (undefined4)uStack_170;
  uStack_4c = uStack_170._4_4_;
  local_48 = (undefined4)local_168;
  uStack_44 = local_168._4_4_;
  uStack_40 = (undefined4)uStack_160;
  uStack_3c = uStack_160._4_4_;
  FUN_144d019e0(param_3 + 0x70,param_2,&local_278);
  if (*(longlong *)(param_2 + 0x50) < 0) {
    bVar3 = uStack_220 < *(ulonglong *)(param_3 + 0x70);
    uStack_220 = uStack_220 - *(ulonglong *)(param_3 + 0x70);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_218 < *(ulonglong *)(param_3 + 0x78);
    uVar2 = local_218 - *(ulonglong *)(param_3 + 0x78);
    local_218 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = uStack_210 < *(ulonglong *)(param_3 + 0x80);
    uVar2 = uStack_210 - *(ulonglong *)(param_3 + 0x80);
    uStack_210 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_208 < *(ulonglong *)(param_3 + 0x88);
    uVar2 = local_208 - *(ulonglong *)(param_3 + 0x88);
    local_208 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = uStack_200 < *(ulonglong *)(param_3 + 0x90);
    uVar2 = uStack_200 - *(ulonglong *)(param_3 + 0x90);
    uStack_200 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_1f8 < *(ulonglong *)(param_3 + 0x98);
    uVar2 = local_1f8 - *(ulonglong *)(param_3 + 0x98);
    local_1f8 = uVar2 - uVar1;
    lStack_1f0 = (lStack_1f0 - *(longlong *)(param_3 + 0xa0)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_144cf8800(param_1,&local_278,&local_c8);
  return param_1;
}



// FUNCTION 144cf8800 FUN_144cf8800 body=608 status=ok
// SIG undefined FUN_144cf8800(void)

longlong * FUN_144cf8800(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  FUN_144cfed20(param_3);
  lVar1 = *(longlong *)(param_3 + 0x88);
  param_1[0x12] = local_158;
  param_1[0x13] = lStack_150;
  param_1[0x14] = local_148;
  param_1[0x15] = lStack_140;
  param_1[0x16] = local_138;
  param_1[0x17] = lStack_130;
  param_1[0x18] = local_128;
  param_1[0x19] = lStack_120;
  param_1[0x1a] = local_118;
  param_1[0x1b] = lStack_110;
  param_1[0x1c] = local_108;
  param_1[0x1d] = lStack_100;
  param_1[0x1e] = local_f8;
  param_1[0x1f] = lStack_f0;
  param_1[0x20] = local_e8;
  param_1[0x21] = lStack_e0;
  param_1[0x22] = local_d8;
  param_1[0x23] = lStack_d0;
  if (lVar1 < 0) {
    plVar7 = &local_158;
    local_158 = -*param_2;
    uVar2 = -param_2[1];
    lStack_150 = uVar2 - (*param_2 != 0);
    uVar2 = (ulonglong)(param_2[1] != 0 || uVar2 < (*param_2 != 0));
    uVar3 = -param_2[2];
    local_148 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[2] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[3];
    lStack_140 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[3] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[4];
    local_138 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[4] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[5];
    lStack_130 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[5] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[6];
    local_128 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[6] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[7];
    lStack_120 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[7] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[8];
    local_118 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[8] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[9];
    lStack_110 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[9] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[10];
    local_108 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[10] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0xb];
    lStack_100 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[0xb] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0xc];
    local_f8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[0xc] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0xd];
    lStack_f0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[0xd] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0xe];
    local_e8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[0xe] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0xf];
    lStack_e0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[0xf] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[0x10];
    local_d8 = uVar3 - uVar2;
    lStack_d0 = -(ulonglong)(param_2[0x10] != 0 || uVar3 < uVar2) - param_2[0x11];
  }
  else {
    plVar7 = &local_c8;
    local_c8 = *param_2;
    lStack_c0 = param_2[1];
    local_b8 = param_2[2];
    lStack_b0 = param_2[3];
    local_a8 = param_2[4];
    lStack_a0 = param_2[5];
    local_98 = param_2[6];
    lStack_90 = param_2[7];
    local_88 = param_2[8];
    lStack_80 = param_2[9];
    local_78 = param_2[10];
    lStack_70 = param_2[0xb];
    local_68 = param_2[0xc];
    lStack_60 = param_2[0xd];
    local_58 = param_2[0xe];
    lStack_50 = param_2[0xf];
    local_48 = param_2[0x10];
    lStack_40 = param_2[0x11];
  }
  lVar1 = plVar7[1];
  lVar4 = plVar7[2];
  lVar5 = plVar7[3];
  *param_1 = *plVar7;
  param_1[1] = lVar1;
  lVar1 = plVar7[4];
  lVar6 = plVar7[5];
  param_1[2] = lVar4;
  param_1[3] = lVar5;
  lVar4 = plVar7[6];
  lVar5 = plVar7[7];
  param_1[4] = lVar1;
  param_1[5] = lVar6;
  lVar1 = plVar7[8];
  lVar6 = plVar7[9];
  param_1[6] = lVar4;
  param_1[7] = lVar5;
  lVar4 = plVar7[10];
  lVar5 = plVar7[0xb];
  param_1[8] = lVar1;
  param_1[9] = lVar6;
  lVar1 = plVar7[0xc];
  lVar6 = plVar7[0xd];
  param_1[10] = lVar4;
  param_1[0xb] = lVar5;
  lVar4 = plVar7[0xe];
  lVar5 = plVar7[0xf];
  param_1[0xc] = lVar1;
  param_1[0xd] = lVar6;
  lVar1 = plVar7[0x10];
  lVar6 = plVar7[0x11];
  param_1[0xe] = lVar4;
  param_1[0xf] = lVar5;
  param_1[0x10] = lVar1;
  param_1[0x11] = lVar6;
  return param_1;
}



// FUNCTION 144cf8a60 FUN_144cf8a60 body=1023 status=ok
// SIG undefined FUN_144cf8a60(void)

undefined4 * FUN_144cf8a60(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  longlong local_638;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548 [2];
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  longlong lStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [224];
  undefined8 local_1c8 [28];
  undefined1 local_e8 [224];
  
  lVar17 = 3;
  lVar18 = 3;
  puVar13 = &local_468;
  do {
    puVar15 = param_2;
    puVar14 = puVar13;
    uVar9 = puVar15[1];
    uVar10 = puVar15[2];
    uVar11 = puVar15[3];
    *puVar14 = *puVar15;
    puVar14[1] = uVar9;
    uVar9 = puVar15[4];
    uVar12 = puVar15[5];
    puVar14[2] = uVar10;
    puVar14[3] = uVar11;
    uVar10 = puVar15[6];
    uVar11 = puVar15[7];
    puVar14[4] = uVar9;
    puVar14[5] = uVar12;
    uVar9 = puVar15[8];
    uVar12 = puVar15[9];
    puVar14[6] = uVar10;
    puVar14[7] = uVar11;
    uVar10 = puVar15[10];
    uVar11 = puVar15[0xb];
    puVar14[8] = uVar9;
    puVar14[9] = uVar12;
    uVar9 = puVar15[0xc];
    uVar12 = puVar15[0xd];
    puVar14[10] = uVar10;
    puVar14[0xb] = uVar11;
    uVar10 = puVar15[0xe];
    uVar11 = puVar15[0xf];
    puVar14[0xc] = uVar9;
    puVar14[0xd] = uVar12;
    puVar14[0xe] = uVar10;
    puVar14[0xf] = uVar11;
    lVar18 = lVar18 + -1;
    puVar13 = puVar14 + 0x10;
    param_2 = puVar15 + 0x10;
  } while (lVar18 != 0);
  uVar9 = puVar15[0x11];
  uVar10 = puVar15[0x12];
  uVar11 = puVar15[0x13];
  puVar14[0x10] = puVar15[0x10];
  puVar14[0x11] = uVar9;
  uVar1 = *(undefined4 *)(puVar15 + 0x14);
  uVar2 = *(undefined4 *)((longlong)puVar15 + 0xa4);
  uVar3 = *(undefined4 *)(puVar15 + 0x15);
  uVar4 = *(undefined4 *)((longlong)puVar15 + 0xac);
  puVar14[0x12] = uVar10;
  puVar14[0x13] = uVar11;
  uVar5 = *(undefined4 *)(puVar15 + 0x16);
  uVar6 = *(undefined4 *)((longlong)puVar15 + 0xb4);
  uVar7 = *(undefined4 *)(puVar15 + 0x17);
  uVar8 = *(undefined4 *)((longlong)puVar15 + 0xbc);
  *(undefined4 *)(puVar14 + 0x14) = uVar1;
  *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar2;
  *(undefined4 *)(puVar14 + 0x15) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
  *(undefined4 *)(puVar14 + 0x16) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 0xb4) = uVar6;
  *(undefined4 *)(puVar14 + 0x17) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0xbc) = uVar8;
  FUN_144d05c30(&local_388,1,&local_718);
  FUN_144cffe10(&local_718,local_2a8);
  FUN_144d02b40(&local_468,2,&local_718,1);
  if (lStack_390 < 0) {
    local_638 = local_638 + -2;
  }
  FUN_144cffe10(&local_718,&local_628);
  FUN_144d01030(&local_628,local_2a8,local_548);
  local_628 = local_388;
  uStack_620 = uStack_380;
  local_618 = local_378;
  uStack_610 = uStack_370;
  local_608 = local_368;
  uStack_600 = uStack_360;
  local_5f8 = local_358;
  uStack_5f0 = uStack_350;
  local_5e8 = local_348;
  uStack_5e0 = uStack_340;
  local_5d8 = local_338;
  uStack_5d0 = uStack_330;
  local_5c8 = local_328;
  uStack_5c0 = uStack_320;
  local_5b8 = local_318;
  uStack_5b0 = uStack_310;
  local_5a8 = local_308;
  uStack_5a0 = uStack_300;
  local_598 = local_2f8;
  uStack_590 = uStack_2f0;
  local_588 = local_2e8;
  uStack_580 = uStack_2e0;
  local_578 = local_2d8;
  uStack_570 = uStack_2d0;
  FUN_144d02b40(&local_628,2,&local_718,1);
  local_628 = local_718;
  uStack_620 = uStack_710;
  local_618 = local_708;
  uStack_610 = uStack_700;
  local_608 = local_6f8;
  uStack_600 = uStack_6f0;
  local_5f8 = local_6e8;
  uStack_5f0 = uStack_6e0;
  local_5e8 = local_6d8;
  uStack_5e0 = uStack_6d0;
  local_5d8 = local_6c8;
  uStack_5d0 = uStack_6c0;
  local_5c8 = local_6b8;
  uStack_5c0 = uStack_6b0;
  local_5b8 = local_6a8;
  uStack_5b0 = uStack_6a0;
  local_5a8 = local_698;
  uStack_5a0 = uStack_690;
  local_598 = local_688;
  uStack_590 = uStack_680;
  local_588 = local_678;
  uStack_580 = uStack_670;
  local_578 = local_668;
  uStack_570 = uStack_660;
  local_568 = local_658;
  uStack_560 = uStack_650;
  local_558 = local_648;
  uStack_550 = uStack_640;
  uStack_460 = uStack_540;
  local_458 = local_538;
  uStack_450 = uStack_530;
  local_448 = local_528;
  uStack_440 = uStack_520;
  local_438 = local_518;
  uStack_430 = uStack_510;
  local_428 = local_508;
  uStack_420 = uStack_500;
  local_418 = local_4f8;
  uStack_410 = uStack_4f0;
  local_408 = local_4e8;
  uStack_400 = uStack_4e0;
  local_3f8 = local_4d8;
  uStack_3f0 = uStack_4d0;
  local_3e8 = local_4c8;
  uStack_3e0 = uStack_4c0;
  local_3d8 = local_4b8;
  uStack_3d0 = uStack_4b0;
  local_3c8 = local_4a8;
  uStack_3c0 = uStack_4a0;
  local_3b8 = local_498;
  uStack_3b0 = uStack_490;
  local_3a8 = local_488;
  uStack_3a0 = uStack_480;
  local_398 = local_478;
  lStack_390 = uStack_470;
  local_388 = local_718;
  uStack_380 = uStack_710;
  local_378 = local_708;
  uStack_370 = uStack_700;
  local_368 = local_6f8;
  uStack_360 = uStack_6f0;
  local_358 = local_6e8;
  uStack_350 = uStack_6e0;
  local_348 = local_6d8;
  uStack_340 = uStack_6d0;
  local_338 = local_6c8;
  uStack_330 = uStack_6c0;
  local_328 = local_6b8;
  uStack_320 = uStack_6b0;
  local_318 = local_6a8;
  uStack_310 = uStack_6a0;
  local_308 = local_698;
  uStack_300 = uStack_690;
  local_2f8 = local_688;
  uStack_2f0 = uStack_680;
  local_2e8 = local_678;
  uStack_2e0 = uStack_670;
  local_2d8 = local_668;
  uStack_2d0 = uStack_660;
  local_2c8 = local_658;
  uStack_2c0 = uStack_650;
  local_2b8 = local_648;
  uStack_2b0 = uStack_640;
  puVar13 = &local_468;
  puVar14 = local_1c8;
  do {
    puVar16 = puVar14;
    puVar15 = puVar13;
    uVar9 = puVar15[1];
    uVar10 = puVar15[2];
    uVar11 = puVar15[3];
    *puVar16 = *puVar15;
    puVar16[1] = uVar9;
    uVar9 = puVar15[4];
    uVar12 = puVar15[5];
    puVar16[2] = uVar10;
    puVar16[3] = uVar11;
    uVar10 = puVar15[6];
    uVar11 = puVar15[7];
    puVar16[4] = uVar9;
    puVar16[5] = uVar12;
    uVar9 = puVar15[8];
    uVar12 = puVar15[9];
    puVar16[6] = uVar10;
    puVar16[7] = uVar11;
    uVar10 = puVar15[10];
    uVar11 = puVar15[0xb];
    puVar16[8] = uVar9;
    puVar16[9] = uVar12;
    uVar9 = puVar15[0xc];
    uVar12 = puVar15[0xd];
    puVar16[10] = uVar10;
    puVar16[0xb] = uVar11;
    uVar10 = puVar15[0xe];
    uVar11 = puVar15[0xf];
    puVar16[0xc] = uVar9;
    puVar16[0xd] = uVar12;
    puVar16[0xe] = uVar10;
    puVar16[0xf] = uVar11;
    lVar17 = lVar17 + -1;
    puVar13 = puVar15 + 0x10;
    puVar14 = puVar16 + 0x10;
  } while (lVar17 != 0);
  uVar9 = puVar15[0x11];
  uVar10 = puVar15[0x12];
  uVar11 = puVar15[0x13];
  puVar16[0x10] = puVar15[0x10];
  puVar16[0x11] = uVar9;
  uVar1 = *(undefined4 *)(puVar15 + 0x14);
  uVar2 = *(undefined4 *)((longlong)puVar15 + 0xa4);
  uVar3 = *(undefined4 *)(puVar15 + 0x15);
  uVar4 = *(undefined4 *)((longlong)puVar15 + 0xac);
  puVar16[0x12] = uVar10;
  puVar16[0x13] = uVar11;
  uVar5 = *(undefined4 *)(puVar15 + 0x16);
  uVar6 = *(undefined4 *)((longlong)puVar15 + 0xb4);
  uVar7 = *(undefined4 *)(puVar15 + 0x17);
  uVar8 = *(undefined4 *)((longlong)puVar15 + 0xbc);
  *(undefined4 *)(puVar16 + 0x14) = uVar1;
  *(undefined4 *)((longlong)puVar16 + 0xa4) = uVar2;
  *(undefined4 *)(puVar16 + 0x15) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xac) = uVar4;
  *(undefined4 *)(puVar16 + 0x16) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0xb4) = uVar6;
  *(undefined4 *)(puVar16 + 0x17) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0xbc) = uVar8;
  FUN_144d01370(local_1c8,local_e8,0xffffffff,local_548);
  *param_1 = local_548[0];
  return param_1;
}



// FUNCTION 144cf8e60 FUN_144cf8e60 body=2824 status=ok
// SIG undefined FUN_144cf8e60(void)

undefined8
FUN_144cf8e60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char cVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  char cVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  longlong local_4f8 [17];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318 [36];
  undefined1 local_1f8 [480];
  
  puVar17 = param_5;
  uVar7 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = uVar7;
  uVar7 = param_1[3];
  param_5[2] = param_1[2];
  param_5[3] = uVar7;
  uVar7 = param_1[5];
  param_5[4] = param_1[4];
  param_5[5] = uVar7;
  uVar7 = param_1[7];
  param_5[6] = param_1[6];
  param_5[7] = uVar7;
  uVar7 = param_1[9];
  param_5[8] = param_1[8];
  param_5[9] = uVar7;
  uVar7 = param_1[0xb];
  param_5[10] = param_1[10];
  param_5[0xb] = uVar7;
  uVar7 = param_3[1];
  param_5[0xc] = *param_3;
  param_5[0xd] = uVar7;
  uVar7 = param_3[3];
  param_5[0xe] = param_3[2];
  param_5[0xf] = uVar7;
  uVar7 = param_3[5];
  param_5[0x10] = param_3[4];
  param_5[0x11] = uVar7;
  uVar7 = param_3[7];
  param_5[0x12] = param_3[6];
  param_5[0x13] = uVar7;
  uVar7 = param_3[9];
  param_5[0x14] = param_3[8];
  param_5[0x15] = uVar7;
  uVar7 = param_3[0xb];
  param_5[0x16] = param_3[10];
  param_5[0x17] = uVar7;
  uVar7 = param_3[0xd];
  param_5[0x18] = param_3[0xc];
  param_5[0x19] = uVar7;
  uVar7 = param_3[0xf];
  param_5[0x1a] = param_3[0xe];
  param_5[0x1b] = uVar7;
  uVar7 = param_3[0x11];
  param_5[0x1c] = param_3[0x10];
  param_5[0x1d] = uVar7;
  uVar7 = param_3[0x13];
  param_5[0x1e] = param_3[0x12];
  param_5[0x1f] = uVar7;
  param_5[0x20] = param_3[0x14];
  fVar30 = *(float *)(param_1 + 0xc);
  fVar29 = *(float *)((longlong)param_1 + 100);
  fVar2 = *(float *)(param_3 + 0x15);
  fVar3 = *(float *)((longlong)param_3 + 0xac);
  fVar4 = *(float *)(param_4 + 1);
  fVar31 = ABS(fVar3) * 1.1920929e-07;
  cVar19 = '\0';
  cVar27 = '\0';
  if (((-fVar31 <= fVar3) && (fVar3 <= fVar31)) &&
     (param_3[0xd] == 0 &&
      ((param_3[0xb] == 0 &&
       ((param_3[9] == 0 && (param_3[8] == 0 && param_3[7] == 0)) && param_3[10] == 0)) &&
      param_3[0xc] == 0))) {
    fVar30 = (ABS(fVar29) * 1.1920929e-07 + ABS(fVar4) * 1.1920929e-07) * 2.0;
    if (-fVar30 <= fVar29 - fVar4) {
      cVar27 = (fVar29 - fVar4 <= fVar30) + '\x01';
    }
    if (cVar27 == '\x02') {
      local_6b8 = param_1[4];
      uStack_6b0 = param_1[5];
      local_6a8 = param_1[6];
      uStack_6a0 = param_1[7];
      local_698 = *(undefined4 *)(param_1 + 8);
      uStack_694 = *(undefined4 *)((longlong)param_1 + 0x44);
      uStack_690 = *(undefined4 *)(param_1 + 9);
      uStack_68c = *(undefined4 *)((longlong)param_1 + 0x4c);
      local_688 = *(undefined4 *)(param_1 + 10);
      uStack_684 = *(undefined4 *)((longlong)param_1 + 0x54);
      uStack_680 = *(undefined4 *)(param_1 + 0xb);
      uStack_67c = *(undefined4 *)((longlong)param_1 + 0x5c);
      cVar19 = FUN_144cf72c0(&local_6b8,*param_4);
      if (cVar19 != '\0') {
        *(undefined1 *)(puVar17 + 0x21) = 1;
        *(undefined1 *)((longlong)puVar17 + 0x11c) = 1;
        lVar28 = 2;
        lVar26 = 2;
        lVar24 = (longlong)param_1[3] >> 0x3f;
        local_518 = *param_1;
        uStack_510 = param_1[1];
        local_508 = param_1[2];
        uStack_500 = param_1[3];
        plVar20 = local_4f8;
        do {
          *plVar20 = lVar24;
          plVar20[1] = lVar24;
          plVar20[2] = lVar24;
          plVar1 = plVar20 + 8;
          plVar20[3] = lVar24;
          plVar20[4] = lVar24;
          plVar20[5] = lVar24;
          plVar20[6] = lVar24;
          plVar20[7] = lVar24;
          lVar26 = lVar26 + -1;
          plVar20 = plVar1;
        } while (lVar26 != 0);
        uVar7 = param_1[8];
        uVar14 = param_1[9];
        *plVar1 = lVar24;
        lVar24 = 2;
        uStack_470 = uVar7;
        uStack_468 = uVar14;
        uStack_460 = param_1[10];
        uStack_458 = param_1[0xb];
        local_450 = 0;
        uStack_448 = 0;
        local_440 = 0;
        uStack_438 = 0;
        local_430 = 0;
        uStack_428 = 0;
        local_420 = 0;
        uStack_418 = 0;
        local_410 = 0;
        uStack_408 = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        puVar22 = puVar17 + 0x24;
        puVar18 = &local_518;
        do {
          puVar25 = puVar18;
          puVar21 = puVar22;
          uVar7 = puVar25[1];
          uVar14 = puVar25[2];
          uVar15 = puVar25[3];
          *puVar21 = *puVar25;
          puVar21[1] = uVar7;
          uVar7 = puVar25[4];
          uVar16 = puVar25[5];
          puVar21[2] = uVar14;
          puVar21[3] = uVar15;
          uVar14 = puVar25[6];
          uVar15 = puVar25[7];
          puVar21[4] = uVar7;
          puVar21[5] = uVar16;
          uVar7 = puVar25[8];
          uVar16 = puVar25[9];
          puVar21[6] = uVar14;
          puVar21[7] = uVar15;
          uVar14 = puVar25[10];
          uVar15 = puVar25[0xb];
          puVar21[8] = uVar7;
          puVar21[9] = uVar16;
          uVar7 = puVar25[0xc];
          uVar16 = puVar25[0xd];
          puVar21[10] = uVar14;
          puVar21[0xb] = uVar15;
          uVar14 = puVar25[0xe];
          uVar15 = puVar25[0xf];
          puVar21[0xc] = uVar7;
          puVar21[0xd] = uVar16;
          puVar21[0xe] = uVar14;
          puVar21[0xf] = uVar15;
          lVar24 = lVar24 + -1;
          puVar22 = puVar21 + 0x10;
          puVar18 = puVar25 + 0x10;
        } while (lVar24 != 0);
        uVar7 = puVar25[0x11];
        lVar26 = 2;
        uVar14 = puVar25[0x12];
        uVar15 = puVar25[0x13];
        puVar21[0x10] = puVar25[0x10];
        puVar21[0x11] = uVar7;
        uVar7 = puVar25[0x14];
        uVar16 = puVar25[0x15];
        puVar21[0x12] = uVar14;
        puVar21[0x13] = uVar15;
        uVar14 = puVar25[0x16];
        uVar15 = puVar25[0x17];
        puVar21[0x14] = uVar7;
        puVar21[0x15] = uVar16;
        uVar7 = puVar25[0x18];
        uVar16 = puVar25[0x19];
        puVar21[0x16] = uVar14;
        puVar21[0x17] = uVar15;
        puVar21[0x18] = uVar7;
        puVar21[0x19] = uVar16;
        lVar24 = (longlong)param_2[3] >> 0x3f;
        local_518 = *param_2;
        uStack_510 = param_2[1];
        local_508 = param_2[2];
        uStack_500 = param_2[3];
        plVar20 = local_4f8;
        do {
          *plVar20 = lVar24;
          plVar20[1] = lVar24;
          plVar20[2] = lVar24;
          plVar1 = plVar20 + 8;
          plVar20[3] = lVar24;
          plVar20[4] = lVar24;
          plVar20[5] = lVar24;
          plVar20[6] = lVar24;
          plVar20[7] = lVar24;
          lVar26 = lVar26 + -1;
          plVar20 = plVar1;
        } while (lVar26 != 0);
        uVar7 = param_2[8];
        uVar14 = param_2[9];
        *plVar1 = lVar24;
        uStack_470 = uVar7;
        uStack_468 = uVar14;
        uStack_460 = param_2[10];
        uStack_458 = param_2[0xb];
        local_450 = 0;
        uStack_448 = 0;
        local_440 = 0;
        uStack_438 = 0;
        local_430 = 0;
        uStack_428 = 0;
        local_420 = 0;
        uStack_418 = 0;
        local_410 = 0;
        uStack_408 = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        puVar22 = puVar17 + 0x4e;
        puVar18 = &local_518;
        do {
          puVar25 = puVar18;
          puVar21 = puVar22;
          uVar7 = puVar25[1];
          uVar14 = puVar25[2];
          uVar15 = puVar25[3];
          *puVar21 = *puVar25;
          puVar21[1] = uVar7;
          uVar7 = puVar25[4];
          uVar16 = puVar25[5];
          puVar21[2] = uVar14;
          puVar21[3] = uVar15;
          uVar14 = puVar25[6];
          uVar15 = puVar25[7];
          puVar21[4] = uVar7;
          puVar21[5] = uVar16;
          uVar7 = puVar25[8];
          uVar16 = puVar25[9];
          puVar21[6] = uVar14;
          puVar21[7] = uVar15;
          uVar14 = puVar25[10];
          uVar15 = puVar25[0xb];
          puVar21[8] = uVar7;
          puVar21[9] = uVar16;
          uVar7 = puVar25[0xc];
          uVar16 = puVar25[0xd];
          puVar21[10] = uVar14;
          puVar21[0xb] = uVar15;
          uVar14 = puVar25[0xe];
          uVar15 = puVar25[0xf];
          puVar21[0xc] = uVar7;
          puVar21[0xd] = uVar16;
          puVar21[0xe] = uVar14;
          puVar21[0xf] = uVar15;
          lVar28 = lVar28 + -1;
          puVar22 = puVar21 + 0x10;
          puVar18 = puVar25 + 0x10;
        } while (lVar28 != 0);
        uVar7 = puVar25[0x11];
        uVar14 = puVar25[0x12];
        uVar15 = puVar25[0x13];
        puVar21[0x10] = puVar25[0x10];
        puVar21[0x11] = uVar7;
        uVar7 = puVar25[0x14];
        uVar16 = puVar25[0x15];
        puVar21[0x12] = uVar14;
        puVar21[0x13] = uVar15;
        uVar14 = puVar25[0x16];
        uVar15 = puVar25[0x17];
        puVar21[0x14] = uVar7;
        puVar21[0x15] = uVar16;
        uVar7 = puVar25[0x18];
        uVar16 = puVar25[0x19];
        puVar21[0x16] = uVar14;
        puVar21[0x17] = uVar15;
        puVar21[0x18] = uVar7;
        puVar21[0x19] = uVar16;
        fVar30 = *(float *)(param_1 + 0xc);
        *(float *)((longlong)puVar17 + 0x10c) = fVar30;
        *(float *)(puVar17 + 0x22) = ABS(fVar30) * 1.1920929e-07;
        fVar30 = *(float *)(param_2 + 0xc);
        *(float *)((longlong)puVar17 + 0x114) = fVar30;
        *(float *)(puVar17 + 0x23) = ABS(fVar30) * 1.1920929e-07;
        return 1;
      }
      return 0;
    }
    return 0;
  }
  FUN_144cdce80(&param_5,CONCAT44((ABS(fVar29) * 1.1920929e-07 + ABS(fVar4) * 1.1920929e-07) * 2.0,
                                  fVar4 - fVar29),CONCAT44(fVar31,fVar3));
  fVar29 = (param_5._4_4_ + 1.1920929e-07) * 2.0;
  if (-fVar29 <= param_5._0_4_ - 1.0) {
    cVar19 = (param_5._0_4_ - 1.0 <= fVar29) + '\x01';
  }
  if (param_5._0_4_ <= param_5._4_4_) {
    if (-param_5._4_4_ <= param_5._0_4_) goto LAB_144cf9518;
    cVar27 = '\x01';
  }
  if (cVar19 != '\x02') {
    if (cVar27 != '\0') {
      return 0;
    }
    if (cVar19 == '\0') {
      *(undefined1 *)(puVar17 + 0x21) = 0;
      *(undefined1 *)((longlong)puVar17 + 0x11c) = 0;
      fVar29 = fVar30 + fVar2 * param_5._0_4_;
      *(float *)((longlong)puVar17 + 0x10c) = fVar29;
      *(float *)((longlong)puVar17 + 0x114) = fVar29;
      fVar30 = (ABS(fVar30) * 1.1920929e-07 +
               ((ABS(fVar2) + ABS(fVar2) * 1.1920929e-07 * 2.0) * param_5._4_4_ +
                (ABS(param_5._0_4_) + param_5._4_4_ * 2.0) * ABS(fVar2) * 1.1920929e-07 +
               ABS(fVar2 * param_5._0_4_) * 1.1920929e-07) * 2.0) * 2.0;
      *(float *)(puVar17 + 0x22) = fVar30;
      *(float *)(puVar17 + 0x23) = fVar30;
      return 1;
    }
    return 0;
  }
LAB_144cf9518:
  local_6b8 = param_1[4];
  uStack_6b0 = param_1[5];
  local_6a8 = param_1[6];
  uStack_6a0 = param_1[7];
  local_698 = *(undefined4 *)(param_1 + 8);
  uStack_694 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_690 = *(undefined4 *)(param_1 + 9);
  uStack_68c = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_688 = *(undefined4 *)(param_1 + 10);
  uStack_684 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_680 = *(undefined4 *)(param_1 + 0xb);
  uStack_67c = *(undefined4 *)((longlong)param_1 + 0x5c);
  FUN_144cdf760(&local_678,*param_4,&local_6b8);
  uVar7 = param_3[0xe];
  local_5f8 = param_3[0xf];
  uStack_5f0 = param_3[0x10];
  local_5e8 = param_3[0x11];
  local_608 = *(undefined4 *)(param_3 + 0xd);
  uStack_604 = *(undefined4 *)((longlong)param_3 + 0x6c);
  local_638 = *(undefined4 *)(param_3 + 7);
  uStack_634 = *(undefined4 *)((longlong)param_3 + 0x3c);
  uStack_630 = *(undefined4 *)(param_3 + 8);
  uStack_62c = *(undefined4 *)((longlong)param_3 + 0x44);
  local_628 = *(undefined4 *)(param_3 + 9);
  uStack_624 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uStack_620 = *(undefined4 *)(param_3 + 10);
  uStack_61c = *(undefined4 *)((longlong)param_3 + 0x54);
  local_618 = param_3[0xb];
  uStack_610 = param_3[0xc];
  uStack_5e0 = param_3[0x12];
  uVar14 = param_3[0x13];
  local_590._0_4_ = (undefined4)uVar7;
  local_590._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_600 = (undefined4)local_590;
  uStack_5fc = local_590._4_4_;
  uStack_568._0_4_ = (undefined4)uVar14;
  uStack_568._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_5d0 = (undefined4)param_3[0x14];
  uStack_5cc = (undefined4)((ulonglong)param_3[0x14] >> 0x20);
  local_5d8 = (undefined4)uStack_568;
  uStack_5d4 = uStack_568._4_4_;
  local_698 = local_658;
  uStack_694 = uStack_654;
  uStack_690 = uStack_650;
  uStack_68c = uStack_64c;
  local_688 = local_648;
  uStack_684 = uStack_644;
  uStack_680 = uStack_640;
  uStack_67c = uStack_63c;
  uStack_598 = local_608;
  uStack_594 = uStack_604;
  local_590 = uVar7;
  uStack_588 = local_5f8;
  local_580 = uStack_5f0;
  uStack_578 = local_5e8;
  local_570 = uStack_5e0;
  uStack_568 = uVar14;
  uStack_560 = uStack_5d0;
  uStack_55c = uStack_5cc;
  FUN_144cecc10(&local_5c8,&local_6b8,&local_638);
  cVar19 = FUN_144cecfd0(&local_5c8);
  if (cVar19 != '\0') {
    *(undefined1 *)(puVar17 + 0x21) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x11c) = 1;
    local_608 = *(undefined4 *)(param_3 + 6);
    uStack_604 = *(undefined4 *)((longlong)param_3 + 0x34);
    local_638 = *(undefined4 *)param_3;
    uStack_634 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_630 = *(undefined4 *)(param_3 + 1);
    uStack_62c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_628 = *(undefined4 *)(param_3 + 2);
    uStack_624 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_620 = *(undefined4 *)(param_3 + 3);
    uStack_61c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_618 = param_3[4];
    uStack_610 = param_3[5];
    local_3c8 = local_5c8;
    uStack_3c0 = uStack_5c0;
    local_3b8 = local_5b8;
    uStack_3b0 = uStack_5b0;
    local_398 = CONCAT44(uStack_594,uStack_598);
    local_3a8 = local_5a8;
    uStack_3a0 = uStack_5a0;
    uStack_390 = local_590;
    local_388 = uStack_588;
    uStack_380 = local_580;
    uStack_360 = CONCAT44(uStack_55c,uStack_560);
    local_378 = uStack_578;
    uStack_370 = local_570;
    local_368 = uStack_568;
    local_358 = local_558;
    uStack_350 = uStack_550;
    local_348 = local_548;
    uStack_340 = uStack_540;
    local_338 = local_538;
    uStack_330 = uStack_530;
    uStack_5f0 = param_3[0x10];
    local_5e8 = param_3[0x11];
    local_328 = local_528;
    uStack_320 = uStack_520;
    uVar7 = param_3[0xe];
    local_5f8 = param_3[0xf];
    uStack_5e0 = param_3[0x12];
    uVar14 = param_3[0x13];
    local_590._0_4_ = (undefined4)uVar7;
    local_590._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_600 = (undefined4)local_590;
    uStack_5fc = local_590._4_4_;
    uStack_568._0_4_ = (undefined4)uVar14;
    uStack_568._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    uStack_5d0 = (undefined4)param_3[0x14];
    uStack_5cc = (undefined4)((ulonglong)param_3[0x14] >> 0x20);
    local_5d8 = (undefined4)uStack_568;
    uStack_5d4 = uStack_568._4_4_;
    local_590 = uVar7;
    uStack_588 = local_5f8;
    local_580 = uStack_5f0;
    uStack_578 = local_5e8;
    local_570 = uStack_5e0;
    uStack_568 = uVar14;
    puVar22 = (undefined8 *)FUN_144cfc9b0(&local_518,&local_638,&local_3c8);
    lVar26 = 2;
    lVar24 = 2;
    puVar18 = local_318;
    do {
      puVar25 = puVar18;
      puVar21 = puVar22;
      uVar7 = puVar21[1];
      uVar14 = puVar21[2];
      uVar15 = puVar21[3];
      *puVar25 = *puVar21;
      puVar25[1] = uVar7;
      uVar7 = puVar21[4];
      uVar16 = puVar21[5];
      puVar25[2] = uVar14;
      puVar25[3] = uVar15;
      uVar14 = puVar21[6];
      uVar15 = puVar21[7];
      puVar25[4] = uVar7;
      puVar25[5] = uVar16;
      uVar7 = puVar21[8];
      uVar16 = puVar21[9];
      puVar25[6] = uVar14;
      puVar25[7] = uVar15;
      uVar14 = puVar21[10];
      uVar15 = puVar21[0xb];
      puVar25[8] = uVar7;
      puVar25[9] = uVar16;
      uVar7 = puVar21[0xc];
      uVar16 = puVar21[0xd];
      puVar25[10] = uVar14;
      puVar25[0xb] = uVar15;
      uVar14 = puVar21[0xe];
      uVar15 = puVar21[0xf];
      puVar25[0xc] = uVar7;
      puVar25[0xd] = uVar16;
      puVar25[0xe] = uVar14;
      puVar25[0xf] = uVar15;
      lVar24 = lVar24 + -1;
      puVar22 = puVar21 + 0x10;
      puVar18 = puVar25 + 0x10;
    } while (lVar24 != 0);
    uVar14 = puVar21[0x11];
    uVar7 = puVar21[0x12];
    local_678 = *(undefined4 *)param_1;
    uStack_674 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_670 = *(undefined4 *)(param_1 + 1);
    uStack_66c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_668 = *(undefined4 *)(param_1 + 2);
    uStack_664 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_660 = *(undefined4 *)(param_1 + 3);
    uStack_65c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_648 = *(undefined4 *)(param_1 + 10);
    uStack_644 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_640 = *(undefined4 *)(param_1 + 0xb);
    uStack_63c = *(undefined4 *)((longlong)param_1 + 0x5c);
    puVar25[0x10] = puVar21[0x10];
    puVar25[0x11] = uVar14;
    puVar25[0x12] = uVar7;
    local_658 = *(undefined4 *)(param_1 + 8);
    uStack_654 = *(undefined4 *)((longlong)param_1 + 0x44);
    uStack_650 = *(undefined4 *)(param_1 + 9);
    uStack_64c = *(undefined4 *)((longlong)param_1 + 0x4c);
    puVar22 = (undefined8 *)FUN_144cfcb60(local_1f8,&local_678,local_318);
    lVar24 = 2;
    puVar18 = puVar17 + 0x24;
    do {
      puVar25 = puVar18;
      puVar21 = puVar22;
      uVar7 = puVar21[1];
      *puVar25 = *puVar21;
      puVar25[1] = uVar7;
      uVar7 = puVar21[3];
      puVar25[2] = puVar21[2];
      puVar25[3] = uVar7;
      uVar7 = puVar21[5];
      puVar25[4] = puVar21[4];
      puVar25[5] = uVar7;
      uVar7 = puVar21[7];
      puVar25[6] = puVar21[6];
      puVar25[7] = uVar7;
      uVar7 = puVar21[9];
      puVar25[8] = puVar21[8];
      puVar25[9] = uVar7;
      uVar7 = puVar21[0xb];
      puVar25[10] = puVar21[10];
      puVar25[0xb] = uVar7;
      uVar7 = puVar21[0xd];
      puVar25[0xc] = puVar21[0xc];
      puVar25[0xd] = uVar7;
      uVar7 = puVar21[0xf];
      puVar25[0xe] = puVar21[0xe];
      puVar25[0xf] = uVar7;
      lVar24 = lVar24 + -1;
      puVar22 = puVar21 + 0x10;
      puVar18 = puVar25 + 0x10;
    } while (lVar24 != 0);
    uVar7 = puVar21[0x11];
    puVar25[0x10] = puVar21[0x10];
    puVar25[0x11] = uVar7;
    uVar7 = puVar21[0x13];
    puVar25[0x12] = puVar21[0x12];
    puVar25[0x13] = uVar7;
    uVar7 = puVar21[0x15];
    puVar25[0x14] = puVar21[0x14];
    puVar25[0x15] = uVar7;
    uVar7 = puVar21[0x17];
    puVar25[0x16] = puVar21[0x16];
    puVar25[0x17] = uVar7;
    uVar7 = puVar21[0x19];
    puVar25[0x18] = puVar21[0x18];
    puVar25[0x19] = uVar7;
    puVar22 = puVar17 + 0x4e;
    puVar18 = puVar17 + 0x24;
    do {
      puVar25 = puVar18;
      puVar21 = puVar22;
      uVar7 = puVar25[1];
      uVar14 = puVar25[2];
      uVar15 = puVar25[3];
      *puVar21 = *puVar25;
      puVar21[1] = uVar7;
      uVar7 = puVar25[4];
      uVar16 = puVar25[5];
      puVar21[2] = uVar14;
      puVar21[3] = uVar15;
      uVar14 = puVar25[6];
      uVar15 = puVar25[7];
      puVar21[4] = uVar7;
      puVar21[5] = uVar16;
      uVar7 = puVar25[8];
      uVar16 = puVar25[9];
      puVar21[6] = uVar14;
      puVar21[7] = uVar15;
      uVar14 = puVar25[10];
      uVar15 = puVar25[0xb];
      puVar21[8] = uVar7;
      puVar21[9] = uVar16;
      uVar7 = puVar25[0xc];
      uVar16 = puVar25[0xd];
      puVar21[10] = uVar14;
      puVar21[0xb] = uVar15;
      uVar14 = puVar25[0xe];
      uVar15 = puVar25[0xf];
      puVar21[0xc] = uVar7;
      puVar21[0xd] = uVar16;
      puVar21[0xe] = uVar14;
      puVar21[0xf] = uVar15;
      lVar26 = lVar26 + -1;
      puVar22 = puVar21 + 0x10;
      puVar18 = puVar25 + 0x10;
    } while (lVar26 != 0);
    uVar7 = puVar25[0x11];
    uVar14 = puVar25[0x12];
    uVar15 = puVar25[0x13];
    puVar21[0x10] = puVar25[0x10];
    puVar21[0x11] = uVar7;
    uVar7 = puVar25[0x14];
    uVar16 = puVar25[0x15];
    puVar21[0x12] = uVar14;
    puVar21[0x13] = uVar15;
    uVar5 = *(undefined4 *)(puVar25 + 0x16);
    uVar6 = *(undefined4 *)((longlong)puVar25 + 0xb4);
    uVar8 = *(undefined4 *)(puVar25 + 0x17);
    uVar9 = *(undefined4 *)((longlong)puVar25 + 0xbc);
    puVar21[0x14] = uVar7;
    puVar21[0x15] = uVar16;
    uVar10 = *(undefined4 *)(puVar25 + 0x18);
    uVar11 = *(undefined4 *)((longlong)puVar25 + 0xc4);
    uVar12 = *(undefined4 *)(puVar25 + 0x19);
    uVar13 = *(undefined4 *)((longlong)puVar25 + 0xcc);
    *(undefined4 *)(puVar21 + 0x16) = uVar5;
    *(undefined4 *)((longlong)puVar21 + 0xb4) = uVar6;
    *(undefined4 *)(puVar21 + 0x17) = uVar8;
    *(undefined4 *)((longlong)puVar21 + 0xbc) = uVar9;
    *(undefined4 *)(puVar21 + 0x18) = uVar10;
    *(undefined4 *)((longlong)puVar21 + 0xc4) = uVar11;
    *(undefined4 *)(puVar21 + 0x19) = uVar12;
    *(undefined4 *)((longlong)puVar21 + 0xcc) = uVar13;
    puVar23 = (undefined4 *)FUN_144cfcea0(&param_5,puVar17 + 0x24);
    uVar5 = *puVar23;
    uVar6 = puVar23[1];
    *(undefined4 *)((longlong)puVar17 + 0x10c) = uVar5;
    *(undefined4 *)(puVar17 + 0x22) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0x114) = uVar5;
    *(undefined4 *)(puVar17 + 0x23) = uVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 144cf9970 FUN_144cf9970 body=1093 status=ok
// SIG undefined FUN_144cf9970(void)

void FUN_144cf9970(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8 [36];
  undefined1 local_288 [280];
  undefined1 local_170 [360];
  
  if (*(char *)(param_1 + 0x47) == '\0') {
    local_5f8 = *(undefined8 *)(param_1 + 8);
    uStack_5f0 = *(undefined8 *)(param_1 + 10);
    local_5e8 = *(undefined8 *)(param_1 + 0xc);
    uStack_5e0 = *(undefined8 *)(param_1 + 0xe);
    local_5d8 = param_1[0x10];
    uStack_5d4 = param_1[0x11];
    uStack_5d0 = param_1[0x12];
    uStack_5cc = param_1[0x13];
    local_5c8 = param_1[0x14];
    uStack_5c4 = param_1[0x15];
    uStack_5c0 = param_1[0x16];
    uStack_5bc = param_1[0x17];
    FUN_144cdf760(&local_5b8,*param_2,&local_5f8);
    local_538 = *(undefined8 *)(param_1 + 0x36);
    uStack_530 = *(undefined8 *)(param_1 + 0x38);
    local_528 = *(undefined8 *)(param_1 + 0x3a);
    local_548 = param_1[0x32];
    uStack_544 = param_1[0x33];
    uStack_510 = (undefined4)*(undefined8 *)(param_1 + 0x40);
    uStack_50c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    local_578 = param_1[0x26];
    uStack_574 = param_1[0x27];
    uStack_570 = param_1[0x28];
    uStack_56c = param_1[0x29];
    local_568 = param_1[0x2a];
    uStack_564 = param_1[0x2b];
    uStack_560 = param_1[0x2c];
    uStack_55c = param_1[0x2d];
    local_558 = *(undefined8 *)(param_1 + 0x2e);
    uStack_550 = *(undefined8 *)(param_1 + 0x30);
    uStack_520 = *(undefined8 *)(param_1 + 0x3c);
    local_630 = (undefined4)*(undefined8 *)(param_1 + 0x34);
    uStack_62c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    uStack_540 = local_630;
    uStack_53c = uStack_62c;
    uStack_608 = (undefined4)*(undefined8 *)(param_1 + 0x3e);
    uStack_604 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3e) >> 0x20);
    local_518 = uStack_608;
    uStack_514 = uStack_604;
    local_5d8 = local_598;
    uStack_5d4 = uStack_594;
    uStack_5d0 = uStack_590;
    uStack_5cc = uStack_58c;
    local_5c8 = local_588;
    uStack_5c4 = uStack_584;
    uStack_5c0 = uStack_580;
    uStack_5bc = uStack_57c;
    FUN_144cecc10(&local_508,&local_5f8,&local_578);
    local_578 = param_1[0x18];
    uStack_574 = param_1[0x19];
    uStack_570 = param_1[0x1a];
    uStack_56c = param_1[0x1b];
    local_568 = param_1[0x1c];
    uStack_564 = param_1[0x1d];
    uStack_560 = param_1[0x1e];
    uStack_55c = param_1[0x1f];
    local_558 = *(undefined8 *)(param_1 + 0x20);
    uStack_550 = *(undefined8 *)(param_1 + 0x22);
    local_548 = param_1[0x24];
    uStack_544 = param_1[0x25];
    local_458 = local_508;
    uStack_450 = uStack_500;
    local_448 = local_4f8;
    uStack_440 = uStack_4f0;
    local_438 = local_4e8;
    uStack_430 = uStack_4e0;
    local_428 = local_4d8;
    uStack_420 = uStack_4d0;
    local_418 = local_4c8;
    uStack_410 = uStack_4c0;
    local_408 = local_4b8;
    uStack_400 = uStack_4b0;
    local_3f8 = local_4a8;
    uStack_3f0 = uStack_4a0;
    local_3e8 = local_498;
    uStack_3e0 = uStack_490;
    local_3d8 = local_488;
    uStack_3d0 = uStack_480;
    local_3c8 = local_478;
    uStack_3c0 = uStack_470;
    local_538 = *(undefined8 *)(param_1 + 0x36);
    local_3b8 = local_468;
    uStack_3b0 = uStack_460;
    uStack_530 = *(undefined8 *)(param_1 + 0x38);
    local_528 = *(undefined8 *)(param_1 + 0x3a);
    uStack_510 = (undefined4)*(undefined8 *)(param_1 + 0x40);
    uStack_50c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    uStack_520 = *(undefined8 *)(param_1 + 0x3c);
    local_630 = (undefined4)*(undefined8 *)(param_1 + 0x34);
    uStack_62c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    uStack_540 = local_630;
    uStack_53c = uStack_62c;
    uStack_608 = (undefined4)*(undefined8 *)(param_1 + 0x3e);
    uStack_604 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3e) >> 0x20);
    local_518 = uStack_608;
    uStack_514 = uStack_604;
    puVar14 = (undefined8 *)FUN_144cfc9b0(local_288,&local_578,&local_458);
    lVar19 = 2;
    lVar18 = 2;
    puVar13 = local_3a8;
    do {
      puVar17 = puVar13;
      puVar15 = puVar14;
      uVar3 = puVar15[1];
      uVar10 = puVar15[2];
      uVar11 = puVar15[3];
      *puVar17 = *puVar15;
      puVar17[1] = uVar3;
      uVar3 = puVar15[4];
      uVar12 = puVar15[5];
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      puVar17[4] = uVar3;
      puVar17[5] = uVar12;
      uVar3 = puVar15[8];
      uVar12 = puVar15[9];
      puVar17[6] = uVar10;
      puVar17[7] = uVar11;
      uVar10 = puVar15[10];
      uVar11 = puVar15[0xb];
      puVar17[8] = uVar3;
      puVar17[9] = uVar12;
      uVar3 = puVar15[0xc];
      uVar12 = puVar15[0xd];
      puVar17[10] = uVar10;
      puVar17[0xb] = uVar11;
      uVar10 = puVar15[0xe];
      uVar11 = puVar15[0xf];
      puVar17[0xc] = uVar3;
      puVar17[0xd] = uVar12;
      puVar17[0xe] = uVar10;
      puVar17[0xf] = uVar11;
      lVar18 = lVar18 + -1;
      puVar14 = puVar15 + 0x10;
      puVar13 = puVar17 + 0x10;
    } while (lVar18 != 0);
    uVar10 = puVar15[0x11];
    uVar3 = puVar15[0x12];
    local_5b8 = *param_1;
    uStack_5b4 = param_1[1];
    uStack_5b0 = param_1[2];
    uStack_5ac = param_1[3];
    local_5a8 = param_1[4];
    uStack_5a4 = param_1[5];
    uStack_5a0 = param_1[6];
    uStack_59c = param_1[7];
    local_588 = param_1[0x14];
    uStack_584 = param_1[0x15];
    uStack_580 = param_1[0x16];
    uStack_57c = param_1[0x17];
    puVar17[0x10] = puVar15[0x10];
    puVar17[0x11] = uVar10;
    puVar17[0x12] = uVar3;
    local_598 = param_1[0x10];
    uStack_594 = param_1[0x11];
    uStack_590 = param_1[0x12];
    uStack_58c = param_1[0x13];
    puVar14 = (undefined8 *)FUN_144cfcb60(local_170,&local_5b8,local_3a8);
    lVar18 = 2;
    puVar13 = (undefined8 *)(param_1 + 0x48);
    do {
      puVar17 = puVar13;
      puVar15 = puVar14;
      uVar3 = puVar15[1];
      *puVar17 = *puVar15;
      puVar17[1] = uVar3;
      uVar3 = puVar15[3];
      puVar17[2] = puVar15[2];
      puVar17[3] = uVar3;
      uVar3 = puVar15[5];
      puVar17[4] = puVar15[4];
      puVar17[5] = uVar3;
      uVar3 = puVar15[7];
      puVar17[6] = puVar15[6];
      puVar17[7] = uVar3;
      uVar3 = puVar15[9];
      puVar17[8] = puVar15[8];
      puVar17[9] = uVar3;
      uVar3 = puVar15[0xb];
      puVar17[10] = puVar15[10];
      puVar17[0xb] = uVar3;
      uVar3 = puVar15[0xd];
      puVar17[0xc] = puVar15[0xc];
      puVar17[0xd] = uVar3;
      uVar3 = puVar15[0xf];
      puVar17[0xe] = puVar15[0xe];
      puVar17[0xf] = uVar3;
      lVar18 = lVar18 + -1;
      puVar14 = puVar15 + 0x10;
      puVar13 = puVar17 + 0x10;
    } while (lVar18 != 0);
    uVar3 = puVar15[0x11];
    puVar17[0x10] = puVar15[0x10];
    puVar17[0x11] = uVar3;
    uVar3 = puVar15[0x13];
    puVar17[0x12] = puVar15[0x12];
    puVar17[0x13] = uVar3;
    uVar3 = puVar15[0x15];
    puVar17[0x14] = puVar15[0x14];
    puVar17[0x15] = uVar3;
    uVar3 = puVar15[0x17];
    puVar17[0x16] = puVar15[0x16];
    puVar17[0x17] = uVar3;
    uVar3 = puVar15[0x19];
    puVar17[0x18] = puVar15[0x18];
    puVar17[0x19] = uVar3;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    puVar13 = (undefined8 *)(param_1 + 0x9c);
    do {
      puVar17 = puVar13;
      puVar15 = puVar14;
      uVar3 = puVar15[1];
      uVar10 = puVar15[2];
      uVar11 = puVar15[3];
      *puVar17 = *puVar15;
      puVar17[1] = uVar3;
      uVar3 = puVar15[4];
      uVar12 = puVar15[5];
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      puVar17[4] = uVar3;
      puVar17[5] = uVar12;
      uVar3 = puVar15[8];
      uVar12 = puVar15[9];
      puVar17[6] = uVar10;
      puVar17[7] = uVar11;
      uVar10 = puVar15[10];
      uVar11 = puVar15[0xb];
      puVar17[8] = uVar3;
      puVar17[9] = uVar12;
      uVar3 = puVar15[0xc];
      uVar12 = puVar15[0xd];
      puVar17[10] = uVar10;
      puVar17[0xb] = uVar11;
      uVar10 = puVar15[0xe];
      uVar11 = puVar15[0xf];
      puVar17[0xc] = uVar3;
      puVar17[0xd] = uVar12;
      puVar17[0xe] = uVar10;
      puVar17[0xf] = uVar11;
      lVar19 = lVar19 + -1;
      puVar14 = puVar15 + 0x10;
      puVar13 = puVar17 + 0x10;
    } while (lVar19 != 0);
    uVar3 = puVar15[0x11];
    uVar10 = puVar15[0x12];
    uVar11 = puVar15[0x13];
    puVar17[0x10] = puVar15[0x10];
    puVar17[0x11] = uVar3;
    uVar3 = puVar15[0x14];
    uVar12 = puVar15[0x15];
    puVar17[0x12] = uVar10;
    puVar17[0x13] = uVar11;
    uVar1 = *(undefined4 *)(puVar15 + 0x16);
    uVar2 = *(undefined4 *)((longlong)puVar15 + 0xb4);
    uVar4 = *(undefined4 *)(puVar15 + 0x17);
    uVar5 = *(undefined4 *)((longlong)puVar15 + 0xbc);
    puVar17[0x14] = uVar3;
    puVar17[0x15] = uVar12;
    uVar6 = *(undefined4 *)(puVar15 + 0x18);
    uVar7 = *(undefined4 *)((longlong)puVar15 + 0xc4);
    uVar8 = *(undefined4 *)(puVar15 + 0x19);
    uVar9 = *(undefined4 *)((longlong)puVar15 + 0xcc);
    *(undefined4 *)(puVar17 + 0x16) = uVar1;
    *(undefined4 *)((longlong)puVar17 + 0xb4) = uVar2;
    *(undefined4 *)(puVar17 + 0x17) = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0xbc) = uVar5;
    *(undefined4 *)(puVar17 + 0x18) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0xc4) = uVar7;
    *(undefined4 *)(puVar17 + 0x19) = uVar8;
    *(undefined4 *)((longlong)puVar17 + 0xcc) = uVar9;
    puVar16 = (undefined4 *)FUN_144cfcea0(local_res8,param_1 + 0x48);
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    param_1[0x43] = uVar1;
    param_1[0x44] = uVar2;
    param_1[0x45] = uVar1;
    param_1[0x46] = uVar2;
    *(undefined1 *)(param_1 + 0x47) = 1;
  }
  return;
}



// FUNCTION 144cf9dc0 FUN_144cf9dc0 body=735 status=ok
// SIG undefined FUN_144cf9dc0(void)

uint FUN_144cf9dc0(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8 [20];
  longlong local_218;
  undefined1 auStack_210 [168];
  undefined1 local_168 [176];
  undefined1 local_b8 [176];
  
  fVar18 = *(float *)(param_1 + 0x10c) - *(float *)(param_2 + 1);
  fVar17 = (ABS(*(float *)(param_2 + 1)) * 1.1920929e-07 + *(float *)(param_1 + 0x110)) * 2.0;
  fVar16 = -fVar17;
  if (fVar16 <= fVar18) {
    if (fVar18 <= fVar17) {
      FUN_144cf9970(fVar16,param_3);
      lVar14 = 2;
      puVar10 = (undefined8 *)(param_1 + 0x120);
      puVar11 = local_2b8;
      do {
        puVar13 = puVar11;
        puVar12 = puVar10;
        uVar6 = puVar12[1];
        uVar7 = puVar12[2];
        uVar8 = puVar12[3];
        *puVar13 = *puVar12;
        puVar13[1] = uVar6;
        uVar6 = puVar12[4];
        uVar9 = puVar12[5];
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        puVar13[4] = uVar6;
        puVar13[5] = uVar9;
        uVar6 = puVar12[8];
        uVar9 = puVar12[9];
        puVar13[6] = uVar7;
        puVar13[7] = uVar8;
        uVar7 = puVar12[10];
        uVar8 = puVar12[0xb];
        puVar13[8] = uVar6;
        puVar13[9] = uVar9;
        uVar6 = puVar12[0xc];
        uVar9 = puVar12[0xd];
        puVar13[10] = uVar7;
        puVar13[0xb] = uVar8;
        uVar7 = puVar12[0xe];
        uVar8 = puVar12[0xf];
        puVar13[0xc] = uVar6;
        puVar13[0xd] = uVar9;
        puVar13[0xe] = uVar7;
        puVar13[0xf] = uVar8;
        lVar14 = lVar14 + -1;
        puVar10 = puVar12 + 0x10;
        puVar11 = puVar13 + 0x10;
      } while (lVar14 != 0);
      uVar6 = puVar12[0x11];
      uVar1 = *param_2;
      uVar7 = puVar12[0x12];
      uVar8 = puVar12[0x13];
      puVar13[0x10] = puVar12[0x10];
      puVar13[0x11] = uVar6;
      uVar6 = puVar12[0x14];
      uVar9 = puVar12[0x15];
      puVar13[0x12] = uVar7;
      puVar13[0x13] = uVar8;
      uVar7 = puVar12[0x16];
      uVar8 = puVar12[0x17];
      puVar13[0x14] = uVar6;
      puVar13[0x15] = uVar9;
      uVar2 = *(undefined4 *)(puVar12 + 0x18);
      uVar3 = *(undefined4 *)((longlong)puVar12 + 0xc4);
      uVar4 = *(undefined4 *)(puVar12 + 0x19);
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0xcc);
      puVar13[0x16] = uVar7;
      puVar13[0x17] = uVar8;
      *(undefined4 *)(puVar13 + 0x18) = uVar2;
      *(undefined4 *)((longlong)puVar13 + 0xc4) = uVar3;
      *(undefined4 *)(puVar13 + 0x19) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0xcc) = uVar5;
      FUN_144d06190(local_2b8,uVar1 >> 0x20 & 0xff,&local_368,1);
      if (local_218 < 0) {
        local_2c0 = local_2c0 - (char)(uVar1 >> 0x20);
      }
      FUN_144d05790(&local_368,local_b8);
      FUN_144d06350(auStack_210,(longlong)(int)uVar1,&local_368);
      if ((int)uVar1 < 0) {
        FUN_144d06610(&local_368,auStack_210);
      }
      FUN_144d05790(&local_368,local_168);
      FUN_144d05330(local_b8,local_168,&local_368);
      uVar15 = 0;
      if (local_2c8 == 0) {
        uVar15 = (uint)((local_2d8 == 0 &&
                        ((local_2e8 == 0 &&
                         ((local_2f8 == 0 &&
                          ((local_308 == 0 &&
                           ((local_318 == 0 &&
                            ((local_328 == 0 &&
                             ((local_338 == 0 &&
                              ((local_348 == 0 &&
                               ((local_358 == 0 && (local_360 == 0 && local_368 == 0)) &&
                               local_350 == 0)) && local_340 == 0)) && local_330 == 0)) &&
                            local_320 == 0)) && local_310 == 0)) && local_300 == 0)) &&
                         local_2f0 == 0)) && local_2e0 == 0)) && local_2d0 == 0);
      }
      uVar15 = 1 - uVar15 | (uint)(local_2c8 >> 0x3f);
    }
    else {
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 0xffffffff;
  }
  return uVar15;
}



// FUNCTION 144cfa0a0 FUN_144cfa0a0 body=798 status=ok
// SIG undefined FUN_144cfa0a0(void)

void FUN_144cfa0a0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_res18 [2];
  undefined8 local_368;
  float fStack_360;
  float fStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_368 = *param_2;
  fStack_360 = (float)(int)local_368;
  fStack_35c = (float)(int)((ulonglong)local_368 >> 0x20);
  FUN_144cb67e0(**(longlong **)(param_1 + 0x28),
                *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28) + (longlong)param_3 * 0x60,
                &local_98,&local_118);
  local_2c8 = local_118;
  uStack_2c0 = uStack_110;
  local_2b8 = local_108;
  uStack_2b0 = uStack_100;
  local_2a8 = local_f8;
  uStack_2a0 = uStack_f0;
  local_298 = local_e8;
  uStack_290 = uStack_e0;
  local_288 = local_d8;
  uStack_280 = uStack_d0;
  local_278 = local_c8;
  uStack_270 = uStack_c0;
  local_268 = local_b8;
  uStack_260 = uStack_b0;
  local_258 = local_a8;
  uStack_254 = uStack_a4;
  uStack_250 = uStack_a0;
  uStack_24c = uStack_9c;
  FUN_144cb85f0(&local_2c8,local_248);
  local_358 = local_98;
  uStack_350 = uStack_90;
  local_348 = local_88;
  uStack_340 = uStack_80;
  local_338 = local_78;
  uStack_330 = uStack_70;
  local_328 = local_68;
  uStack_320 = uStack_60;
  local_318 = local_58;
  uStack_310 = uStack_50;
  local_308 = local_48;
  uStack_300 = uStack_40;
  local_2f8 = local_38;
  uStack_2f0 = uStack_30;
  local_2e8 = local_28;
  uStack_2e4 = uStack_24;
  uStack_2e0 = uStack_20;
  uStack_2dc = uStack_1c;
  FUN_144cb85f0(&local_358,local_2d8);
  puVar3 = (undefined4 *)FUN_144cea860(local_res18,&local_358,&local_2c8,&local_368);
  uVar1 = *puVar3;
  lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28);
  iVar7 = *(int *)(lVar2 + 0x10 + (longlong)param_3 * 0x60);
  if (-1 < iVar7) {
    FUN_144cb67e0(**(longlong **)(param_1 + 0x28),(longlong)iVar7 * 0x60 + lVar2,&local_2c8,
                  &local_358);
    local_238 = local_358;
    uStack_230 = uStack_350;
    local_228 = local_348;
    uStack_220 = uStack_340;
    local_218 = local_338;
    uStack_210 = uStack_330;
    local_208 = local_328;
    uStack_200 = uStack_320;
    local_1f8 = local_318;
    uStack_1f0 = uStack_310;
    local_1e8 = local_308;
    uStack_1e0 = uStack_300;
    local_1d8 = local_2f8;
    uStack_1d0 = uStack_2f0;
    local_1c8 = local_2e8;
    uStack_1c4 = uStack_2e4;
    uStack_1c0 = uStack_2e0;
    uStack_1bc = uStack_2dc;
    FUN_144cb85f0(&local_238,local_1b8);
    local_1a8 = local_2c8;
    uStack_1a0 = uStack_2c0;
    local_198 = local_2b8;
    uStack_190 = uStack_2b0;
    local_188 = local_2a8;
    uStack_180 = uStack_2a0;
    local_178 = local_298;
    uStack_170 = uStack_290;
    local_168 = local_288;
    uStack_160 = uStack_280;
    local_158 = local_278;
    uStack_150 = uStack_270;
    local_148 = local_268;
    uStack_140 = uStack_260;
    local_138 = local_258;
    uStack_134 = uStack_254;
    uStack_130 = uStack_250;
    uStack_12c = uStack_24c;
    FUN_144cb85f0(&local_1a8,local_128);
    puVar3 = (undefined4 *)FUN_144cea860(local_res18,&local_1a8,&local_238,&local_368);
    local_res18[0] = *puVar3;
  }
  piVar5 = (int *)param_2[5];
  piVar6 = piVar5 + (longlong)*(int *)(param_2 + 6) * 4;
  while( true ) {
    if (piVar5 == piVar6) {
      iVar7 = *(int *)(param_2 + 6) + 1;
      local_368 = CONCAT44(uVar1,param_3);
      fStack_35c = (float)((uint)fStack_35c & 0xffffff00);
      fStack_360 = (float)local_res18[0];
      if ((int)(*(uint *)((longlong)param_2 + 0x34) & 0x7fffffff) < iVar7) {
        FUN_144cfc310(param_2 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      puVar4 = (undefined8 *)((longlong)*(int *)(param_2 + 6) * 0x10 + param_2[5]);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = local_368;
        puVar4[1] = CONCAT44(fStack_35c,fStack_360);
      }
      *(int *)(param_2 + 6) = iVar7;
      return;
    }
    if (*piVar5 == param_3) break;
    piVar5 = piVar5 + 4;
  }
  return;
}



// FUNCTION 144cfa3c0 FUN_144cfa3c0 body=798 status=ok
// SIG undefined FUN_144cfa3c0(void)

void FUN_144cfa3c0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_res18 [2];
  undefined8 local_368;
  float fStack_360;
  float fStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_368 = *param_2;
  fStack_360 = (float)(int)local_368;
  fStack_35c = (float)(int)((ulonglong)local_368 >> 0x20);
  FUN_144cb67e0(**(longlong **)(param_1 + 0x28),
                *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28) + (longlong)param_3 * 0x60,
                &local_98,&local_118);
  local_2c8 = local_118;
  uStack_2c0 = uStack_110;
  local_2b8 = local_108;
  uStack_2b0 = uStack_100;
  local_2a8 = local_f8;
  uStack_2a0 = uStack_f0;
  local_298 = local_e8;
  uStack_290 = uStack_e0;
  local_288 = local_d8;
  uStack_280 = uStack_d0;
  local_278 = local_c8;
  uStack_270 = uStack_c0;
  local_268 = local_b8;
  uStack_260 = uStack_b0;
  local_258 = local_a8;
  uStack_254 = uStack_a4;
  uStack_250 = uStack_a0;
  uStack_24c = uStack_9c;
  FUN_144cb85f0(&local_2c8,local_248);
  local_358 = local_98;
  uStack_350 = uStack_90;
  local_348 = local_88;
  uStack_340 = uStack_80;
  local_338 = local_78;
  uStack_330 = uStack_70;
  local_328 = local_68;
  uStack_320 = uStack_60;
  local_318 = local_58;
  uStack_310 = uStack_50;
  local_308 = local_48;
  uStack_300 = uStack_40;
  local_2f8 = local_38;
  uStack_2f0 = uStack_30;
  local_2e8 = local_28;
  uStack_2e4 = uStack_24;
  uStack_2e0 = uStack_20;
  uStack_2dc = uStack_1c;
  FUN_144cb85f0(&local_358,local_2d8);
  puVar3 = (undefined4 *)FUN_144cea860(local_res18,&local_358,&local_2c8,&local_368);
  uVar1 = *puVar3;
  lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x28);
  iVar7 = *(int *)(lVar2 + 0x10 + (longlong)param_3 * 0x60);
  if (-1 < iVar7) {
    FUN_144cb67e0(**(longlong **)(param_1 + 0x28),(longlong)iVar7 * 0x60 + lVar2,&local_2c8,
                  &local_358);
    local_238 = local_358;
    uStack_230 = uStack_350;
    local_228 = local_348;
    uStack_220 = uStack_340;
    local_218 = local_338;
    uStack_210 = uStack_330;
    local_208 = local_328;
    uStack_200 = uStack_320;
    local_1f8 = local_318;
    uStack_1f0 = uStack_310;
    local_1e8 = local_308;
    uStack_1e0 = uStack_300;
    local_1d8 = local_2f8;
    uStack_1d0 = uStack_2f0;
    local_1c8 = local_2e8;
    uStack_1c4 = uStack_2e4;
    uStack_1c0 = uStack_2e0;
    uStack_1bc = uStack_2dc;
    FUN_144cb85f0(&local_238,local_1b8);
    local_1a8 = local_2c8;
    uStack_1a0 = uStack_2c0;
    local_198 = local_2b8;
    uStack_190 = uStack_2b0;
    local_188 = local_2a8;
    uStack_180 = uStack_2a0;
    local_178 = local_298;
    uStack_170 = uStack_290;
    local_168 = local_288;
    uStack_160 = uStack_280;
    local_158 = local_278;
    uStack_150 = uStack_270;
    local_148 = local_268;
    uStack_140 = uStack_260;
    local_138 = local_258;
    uStack_134 = uStack_254;
    uStack_130 = uStack_250;
    uStack_12c = uStack_24c;
    FUN_144cb85f0(&local_1a8,local_128);
    puVar3 = (undefined4 *)FUN_144cea860(local_res18,&local_1a8,&local_238,&local_368);
    local_res18[0] = *puVar3;
  }
  piVar5 = (int *)param_2[5];
  piVar6 = piVar5 + (longlong)*(int *)(param_2 + 6) * 4;
  while( true ) {
    if (piVar5 == piVar6) {
      iVar7 = *(int *)(param_2 + 6) + 1;
      local_368 = CONCAT44(uVar1,param_3);
      fStack_35c = (float)((uint)fStack_35c & 0xffffff00);
      fStack_360 = (float)local_res18[0];
      if ((int)(*(uint *)((longlong)param_2 + 0x34) & 0x7fffffff) < iVar7) {
        FUN_144cfc310(param_2 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      puVar4 = (undefined8 *)((longlong)*(int *)(param_2 + 6) * 0x10 + param_2[5]);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = local_368;
        puVar4[1] = CONCAT44(fStack_35c,fStack_360);
      }
      *(int *)(param_2 + 6) = iVar7;
      return;
    }
    if (*piVar5 == param_3) break;
    piVar5 = piVar5 + 4;
  }
  return;
}



// FUNCTION 144cfa6e0 FUN_144cfa6e0 body=1411 status=ok
// SIG undefined FUN_144cfa6e0(void)

undefined8
FUN_144cfa6e0(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  puVar10 = param_5;
  uVar3 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = uVar3;
  uVar3 = param_1[3];
  param_5[2] = param_1[2];
  param_5[3] = uVar3;
  uVar3 = param_1[5];
  param_5[4] = param_1[4];
  param_5[5] = uVar3;
  uVar3 = param_1[7];
  param_5[6] = param_1[6];
  param_5[7] = uVar3;
  uVar3 = param_1[9];
  param_5[8] = param_1[8];
  param_5[9] = uVar3;
  uVar3 = param_1[0xb];
  param_5[10] = param_1[10];
  param_5[0xb] = uVar3;
  lVar11 = param_3[1];
  param_5[0xc] = *param_3;
  param_5[0xd] = lVar11;
  lVar11 = param_3[3];
  param_5[0xe] = param_3[2];
  param_5[0xf] = lVar11;
  lVar11 = param_3[5];
  param_5[0x10] = param_3[4];
  param_5[0x11] = lVar11;
  lVar11 = param_3[7];
  param_5[0x12] = param_3[6];
  param_5[0x13] = lVar11;
  lVar11 = param_3[9];
  param_5[0x14] = param_3[8];
  param_5[0x15] = lVar11;
  lVar11 = param_3[0xb];
  param_5[0x16] = param_3[10];
  param_5[0x17] = lVar11;
  lVar11 = param_3[0xd];
  param_5[0x18] = param_3[0xc];
  param_5[0x19] = lVar11;
  lVar11 = param_3[0xf];
  param_5[0x1a] = param_3[0xe];
  param_5[0x1b] = lVar11;
  lVar11 = param_3[0x11];
  param_5[0x1c] = param_3[0x10];
  param_5[0x1d] = lVar11;
  lVar11 = param_3[0x13];
  param_5[0x1e] = param_3[0x12];
  param_5[0x1f] = lVar11;
  param_5[0x20] = param_3[0x14];
  fVar13 = *(float *)(param_3 + 0x15);
  fVar1 = *(float *)((longlong)param_1 + 100);
  fVar2 = *(float *)((longlong)param_3 + 0xac);
  fVar12 = ABS(fVar13) * 1.1920929e-07;
  if (((fVar13 < -fVar12) || (fVar12 < fVar13)) ||
     (param_3[6] != 0 ||
      ((param_3[4] != 0 ||
       ((param_3[2] != 0 || (param_3[1] != 0 || *param_3 != 0)) || param_3[3] != 0)) ||
      param_3[5] != 0))) {
    FUN_144cdce80(&param_5,CONCAT44((ABS(*(float *)(param_4 + 8)) * 1.1920929e-07 +
                                    ABS(*(float *)(param_1 + 0xc)) * 1.1920929e-07) * 2.0,
                                    *(float *)(param_4 + 8) - *(float *)(param_1 + 0xc)),
                  CONCAT44(fVar12,fVar13));
    *(undefined1 *)(puVar10 + 0x21) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x11c) = 0;
    fVar13 = param_5._0_4_ * fVar2 + fVar1;
    *(float *)((longlong)puVar10 + 0x10c) = fVar13;
    *(float *)((longlong)puVar10 + 0x114) = fVar13;
    fVar13 = (((ABS(fVar2) + ABS(fVar2) * 1.1920929e-07 * 2.0) * param_5._4_4_ +
               (ABS(param_5._0_4_) + param_5._4_4_ * 2.0) * ABS(fVar2) * 1.1920929e-07 +
              ABS(param_5._0_4_ * fVar2) * 1.1920929e-07) * 2.0 + ABS(fVar1) * 1.1920929e-07) * 2.0;
    *(float *)(puVar10 + 0x22) = fVar13;
    *(float *)(puVar10 + 0x23) = fVar13;
  }
  else {
    *(undefined1 *)(param_5 + 0x21) = 1;
    *(undefined1 *)((longlong)param_5 + 0x11c) = 1;
    uVar3 = param_1[5];
    uVar4 = param_1[6];
    uVar5 = param_1[7];
    lVar11 = (longlong)param_1[7] >> 0x3f;
    uVar6 = param_1[8];
    uVar7 = param_1[9];
    uVar8 = param_1[10];
    uVar9 = param_1[0xb];
    param_5[0x24] = param_1[4];
    param_5[0x25] = uVar3;
    param_5[0x26] = uVar4;
    param_5[0x27] = uVar5;
    param_5[0x28] = lVar11;
    param_5[0x29] = lVar11;
    param_5[0x2a] = lVar11;
    param_5[0x2b] = lVar11;
    param_5[0x2c] = lVar11;
    param_5[0x2d] = lVar11;
    param_5[0x2e] = lVar11;
    param_5[0x2f] = lVar11;
    param_5[0x30] = lVar11;
    param_5[0x31] = lVar11;
    param_5[0x32] = lVar11;
    param_5[0x33] = uVar6;
    param_5[0x34] = uVar7;
    param_5[0x35] = uVar8;
    param_5[0x36] = uVar9;
    param_5[0x37] = 0;
    param_5[0x38] = 0;
    param_5[0x39] = 0;
    param_5[0x3a] = 0;
    param_5[0x3b] = 0;
    param_5[0x3c] = 0;
    param_5[0x3d] = 0;
    param_5[0x3e] = 0;
    param_5[0x3f] = 0;
    param_5[0x40] = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    lVar11 = *(longlong *)(param_2 + 0x38) >> 0x3f;
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    param_5[0x41] = *(undefined8 *)(param_2 + 0x20);
    param_5[0x42] = uVar3;
    param_5[0x43] = uVar4;
    param_5[0x44] = uVar5;
    param_5[0x45] = lVar11;
    param_5[0x46] = lVar11;
    param_5[0x47] = lVar11;
    param_5[0x48] = lVar11;
    param_5[0x49] = lVar11;
    param_5[0x4a] = lVar11;
    param_5[0x4b] = lVar11;
    param_5[0x4c] = lVar11;
    param_5[0x4d] = lVar11;
    param_5[0x4e] = lVar11;
    param_5[0x4f] = lVar11;
    param_5[0x50] = uVar6;
    param_5[0x51] = uVar7;
    param_5[0x52] = uVar8;
    param_5[0x53] = uVar9;
    param_5[0x54] = 0;
    param_5[0x55] = 0;
    param_5[0x56] = 0;
    param_5[0x57] = 0;
    param_5[0x58] = 0;
    param_5[0x59] = 0;
    param_5[0x5a] = 0;
    param_5[0x5b] = 0;
    param_5[0x5c] = 0;
    param_5[0x5d] = 0;
    fVar13 = *(float *)((longlong)param_1 + 100);
    *(float *)((longlong)param_5 + 0x10c) = fVar13;
    *(float *)(param_5 + 0x22) = ABS(fVar13) * 1.1920929e-07;
    fVar13 = *(float *)(param_2 + 100);
    *(float *)((longlong)param_5 + 0x114) = fVar13;
    *(float *)(param_5 + 0x23) = ABS(fVar13) * 1.1920929e-07;
  }
  return 1;
}



// FUNCTION 144cfac70 FUN_144cfac70 body=520 status=ok
// SIG undefined FUN_144cfac70(void)

void FUN_144cfac70(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 local_res20 [4];
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  lVar2 = *param_1;
  iVar1 = *(int *)((longlong)param_4 * 0x200 + 500 + lVar2);
  do {
    if (iVar1 == -1) {
      puVar7 = &local_28;
      uVar3 = *(undefined8 *)((longlong)param_5 * 0x40 + param_1[3]);
      iVar4 = (int)uVar3 * 2;
      iVar1 = (int)((ulonglong)uVar3 >> 0x20) * 2;
      local_28 = CONCAT44(iVar1 + 1,iVar4 + -1);
      local_18 = CONCAT44(iVar1 + 1,iVar4 + 1);
      puVar6 = &local_18;
LAB_144cfad87:
      local_res20[0] = 0x101;
      local_20 = 2;
      local_10 = 2;
      FUN_144cf51b0(param_3,local_res20,param_2,puVar7,puVar6,param_5,1,0xffffffff,param_4);
      return;
    }
    lVar5 = (longlong)iVar1 * 0x200;
    iVar1 = *(int *)(lVar5 + 0x1e0 + lVar2);
    if ((iVar1 != -1) && (*(char *)(lVar5 + 0x1e4 + lVar2) != '\0')) {
      if (iVar1 == param_5) {
        return;
      }
      puVar7 = &local_18;
      uVar3 = *(undefined8 *)((longlong)param_5 * 0x40 + param_1[3]);
      iVar4 = (int)uVar3 * 2;
      iVar1 = (int)((ulonglong)uVar3 >> 0x20) * 2;
      local_18 = CONCAT44(iVar1 + 1,iVar4 + -1);
      local_28 = CONCAT44(iVar1 + 1,iVar4 + 1);
      puVar6 = &local_28;
      goto LAB_144cfad87;
    }
    iVar1 = *(int *)(lVar5 + 500 + lVar2);
  } while( true );
}



// FUNCTION 144cfae80 FUN_144cfae80 body=1761 status=ok
// SIG undefined FUN_144cfae80(void)

void FUN_144cfae80(longlong *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  longlong *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 local_res8;
  undefined8 local_res10;
  int local_res18;
  int local_res20;
  undefined4 local_138;
  int local_134;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  int iStack_11c;
  int local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  int *local_e8;
  int local_e0;
  uint local_dc;
  int local_d8 [38];
  
  lVar12 = *(longlong *)(param_1[8] + (longlong)param_3 * 8);
  lVar7 = *(longlong *)(param_1[8] + (longlong)param_4 * 8);
  local_e8 = local_d8;
  local_e0 = 0;
  local_dc = 0x80000010;
  iVar16 = *(int *)(lVar12 + 0x48);
  iVar17 = *(int *)(lVar7 + 0x48);
  local_res10 = param_2;
  local_res8 = param_1;
  local_res20 = param_4;
  local_res18 = param_3;
  while (local_130 = lVar12, local_128 = lVar7, iVar16 != -1) {
    if (iVar17 == -1) goto LAB_144cfb2c4;
    lVar9 = param_1[3];
    local_f8 = (longlong)iVar17 * 0x40;
    lVar19 = (longlong)iVar16 * 0x40;
    iVar15 = (int)((ulonglong)*(undefined8 *)(lVar9 + lVar19) >> 0x20);
    iVar11 = (int)((ulonglong)*(undefined8 *)(lVar9 + local_f8) >> 0x20);
    if (iVar11 < iVar15) {
      local_138 = 0xffffffff;
      local_108 = 0;
      uStack_100 = 0;
      FUN_144cef1b0(lVar12,local_118,*(undefined8 *)(lVar9 + local_f8),local_res10,&local_108,
                    &local_138,&local_138,0xffffffff);
      iVar15 = iVar16;
      iVar11 = *(int *)(param_1[3] + 0x3c + local_f8);
      iVar16 = local_118[0];
    }
    else if (iVar15 < iVar11) {
      local_138 = 0xffffffff;
      local_108 = 0;
      uStack_100 = 0;
      FUN_144cef1b0(lVar7,&local_134,*(undefined8 *)(lVar9 + lVar19),local_res10,&local_108,
                    &local_138,&local_138,0xffffffff);
      iVar15 = *(int *)(param_1[3] + 0x3c + lVar19);
      iVar11 = iVar17;
      iVar17 = local_134;
    }
    else {
      iVar11 = *(int *)(lVar9 + local_f8 + 0x3c);
      iVar15 = *(int *)(lVar9 + 0x3c + lVar19);
    }
    iVar14 = local_e0 + 1;
    local_120 = iVar16;
    iStack_11c = iVar17;
    if ((int)(local_dc & 0x7fffffff) < iVar14) {
      FUN_144d03d20(&local_e8,&PTR_vftable_14c6e47c0,(longlong)iVar14);
    }
    lVar9 = (longlong)local_e0;
    lVar12 = local_130;
    iVar16 = iVar15;
    lVar7 = local_128;
    iVar17 = iVar11;
    local_e0 = iVar14;
    if (local_e8 + lVar9 * 2 != (int *)0x0) {
      *(ulonglong *)(local_e8 + lVar9 * 2) = CONCAT44(iStack_11c,local_120);
    }
  }
  plVar8 = param_1 + 3;
  for (; iVar17 != -1; iVar17 = *(int *)((longlong)iVar17 * 0x40 + 0x3c + *plVar8)) {
    local_138 = 0xffffffff;
    local_108 = 0;
    uStack_100 = 0;
    FUN_144cef1b0(lVar12,&local_134,*(undefined8 *)((longlong)iVar17 * 0x40 + *plVar8),local_res10,
                  &local_108,&local_138,&local_138,0xffffffff);
    local_130 = CONCAT44(iVar17,local_134);
    iVar16 = local_e0 + 1;
    if ((int)(local_dc & 0x7fffffff) < iVar16) {
      FUN_144d03d20(&local_e8,&PTR_vftable_14c6e47c0,(longlong)iVar16);
    }
    if ((longlong *)(local_e8 + (longlong)local_e0 * 2) != (longlong *)0x0) {
      *(longlong *)(local_e8 + (longlong)local_e0 * 2) = local_130;
    }
    param_1 = local_res8;
    local_e0 = iVar16;
  }
LAB_144cfb146:
  local_res8 = (longlong *)(local_e8 + (longlong)local_e0 * 2);
  piVar18 = local_e8;
  if ((longlong *)local_e8 != local_res8) {
    do {
      plVar20 = *(longlong **)(lVar7 + 0x38);
      iVar17 = *piVar18;
      iVar16 = piVar18[1];
      plVar8 = plVar20 + *(int *)(lVar7 + 0x40);
      for (; plVar20 != plVar8; plVar20 = plVar20 + 1) {
        lVar12 = *plVar20;
        if (lVar12 != 0) {
          FUN_144b3d910(lVar12);
          iVar15 = *(int *)(lVar12 + 0x38);
          while (iVar15 != -1) {
            lVar7 = (longlong)iVar15 * 0x200;
            if (*(int *)(lVar7 + 0x1e0 + *param_1) == iVar16) {
              *(int *)(lVar7 + 0x1e0 + *param_1) = iVar17;
            }
            iVar15 = *(int *)(lVar7 + 500 + *param_1);
          }
          FUN_144b3f230(lVar12);
        }
      }
      FUN_144ce1f90((longlong)*piVar18 * 0x40 + param_1[3],(longlong)piVar18[1] * 0x40 + param_1[3])
      ;
      piVar18 = piVar18 + 2;
      lVar7 = local_128;
    } while ((longlong *)piVar18 != local_res8);
  }
  iVar17 = 0;
  if (0 < *(int *)(local_128 + 0x40)) {
    lVar9 = 0;
    lVar12 = (longlong)local_res18 * 8;
    lVar7 = local_128;
    local_130 = lVar12;
    do {
      lVar19 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar9);
      if (lVar19 != 0) {
        iVar15 = 0;
        lVar12 = *(longlong *)(param_1[8] + lVar12);
        lVar10 = 0;
        iVar16 = *(int *)(lVar12 + 0x40);
        if (0 < iVar16) {
          plVar8 = *(longlong **)(lVar12 + 0x38);
          do {
            if (*plVar8 == 0) break;
            iVar15 = iVar15 + 1;
            lVar10 = lVar10 + 1;
            plVar8 = plVar8 + 1;
          } while (iVar15 < iVar16);
        }
        if (iVar15 < iVar16) {
          plVar8 = (longlong *)(*(longlong *)(lVar12 + 0x38) + lVar10 * 8);
          FUN_144b3d910(lVar19);
          lVar12 = *plVar8;
          *plVar8 = lVar19;
          if (lVar12 != 0) {
            FUN_144b3f230();
          }
        }
        else {
          FUN_144b3d910(lVar19);
          iVar16 = *(int *)(lVar12 + 0x40) + 1;
          if ((int)(*(uint *)(lVar12 + 0x44) & 0x7fffffff) < iVar16) {
            FUN_144cfc1d0(lVar12 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar16);
          }
          plVar8 = (longlong *)
                   (*(longlong *)(lVar12 + 0x38) + (longlong)*(int *)(lVar12 + 0x40) * 8);
          if (plVar8 == (longlong *)0x0) {
            *(int *)(lVar12 + 0x40) = iVar16;
            FUN_144b3f230(lVar19);
            lVar7 = local_128;
          }
          else {
            *plVar8 = lVar19;
            *(int *)(lVar12 + 0x40) = iVar16;
            lVar7 = local_128;
          }
        }
        local_res8 = (longlong *)CONCAT44(iVar15,local_res18);
        lVar12 = local_130;
        if (param_5._4_4_ == iVar17) {
          *param_6 = (longlong)local_res8;
        }
      }
      iVar17 = iVar17 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar17 < *(int *)(lVar7 + 0x40));
  }
  lVar19 = (longlong)local_res20;
  lVar7 = *(longlong *)(param_1[8] + (longlong)local_res18 * 8);
  lVar12 = *(longlong *)(param_1[8] + lVar19 * 8);
  iVar17 = *(int *)(lVar7 + 0x58);
  lVar9 = (longlong)*(int *)(lVar12 + 0x58);
  puVar13 = *(undefined4 **)(lVar12 + 0x50);
  lVar12 = lVar9 * 0x24;
  lVar12 = lVar12 / 0x12 + (lVar12 >> 0x3f);
  puVar1 = puVar13 + lVar9 * 9;
  iVar16 = ((int)(lVar12 >> 1) - (int)(lVar12 >> 0x3f)) + iVar17;
  if ((int)(*(uint *)(lVar7 + 0x5c) & 0x7fffffff) < iVar16) {
    FUN_144cf8430(lVar7 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  puVar6 = (undefined4 *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar17 * 0x24);
  for (; puVar13 != puVar1; puVar13 = puVar13 + 9) {
    if (puVar6 != (undefined4 *)0x0) {
      uVar2 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *puVar6 = *puVar13;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar5 = *(undefined8 *)(puVar13 + 6);
      *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar13 + 4);
      *(undefined8 *)(puVar6 + 6) = uVar5;
      puVar6[8] = puVar13[8];
    }
    puVar6 = puVar6 + 9;
  }
  *(int *)(lVar7 + 0x58) = iVar16;
  lVar12 = *(longlong *)(param_1[8] + lVar19 * 8);
  *(undefined8 *)(param_1[8] + lVar19 * 8) = 0;
  if (lVar12 != 0) {
    FUN_144b3f230(lVar12);
  }
  local_e0 = 0;
  if ((-1 < (int)local_dc) && (local_e8 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_e8,(ulonglong)(local_dc & 0x7fffffff) << 3);
  }
  return;
LAB_144cfb2c4:
  do {
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,0xffffffff);
    local_108 = 0;
    uStack_100 = 0;
    FUN_144cef1b0(lVar7,&local_134,*(undefined8 *)((longlong)iVar16 * 0x40 + param_1[3]),local_res10
                  ,&local_108,&local_res8,&local_res8,0xffffffff);
    iStack_11c = local_134;
    iVar17 = local_e0 + 1;
    local_120 = iVar16;
    if ((int)(local_dc & 0x7fffffff) < iVar17) {
      FUN_144d03d20(&local_e8,&PTR_vftable_14c6e47c0,(longlong)iVar17);
    }
    if (local_e8 + (longlong)local_e0 * 2 != (int *)0x0) {
      *(ulonglong *)(local_e8 + (longlong)local_e0 * 2) = CONCAT44(iStack_11c,local_120);
    }
    iVar16 = *(int *)(param_1[3] + 0x3c + (longlong)iVar16 * 0x40);
    local_e0 = iVar17;
  } while (iVar16 != -1);
  goto LAB_144cfb146;
}



// FUNCTION 144cfb570 FUN_144cfb570 body=266 status=ok
// SIG undefined FUN_144cfb570(void)

void FUN_144cfb570(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144cfb680 FUN_144cfb680 body=244 status=ok
// SIG undefined FUN_144cfb680(void)

void FUN_144cfb680(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  lVar6 = (longlong)param_2;
  do {
    fVar3 = *(float *)(param_1 + ((longlong)(param_2 + param_3) >> 1) * 4);
    lVar8 = (longlong)param_3;
    iVar9 = param_2;
    iVar7 = param_3;
    do {
      pfVar1 = (float *)(param_1 + lVar6 * 4);
      if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
        do {
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + 1;
          pfVar1 = (float *)(param_1 + lVar6 * 4);
        } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
      }
      fVar4 = *(float *)(param_1 + lVar8 * 4);
      while (fVar3 < fVar4) {
        lVar2 = lVar8 * 4;
        lVar8 = lVar8 + -1;
        iVar7 = iVar7 + -1;
        fVar4 = *(float *)(param_1 + -4 + lVar2);
      }
      if (lVar8 < lVar6) break;
      if (lVar8 != lVar6) {
        uVar5 = *(undefined4 *)(param_1 + lVar8 * 4);
        *(undefined4 *)(param_1 + lVar8 * 4) = *(undefined4 *)(param_1 + lVar6 * 4);
        *(undefined4 *)(param_1 + lVar6 * 4) = uVar5;
      }
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + -1;
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 <= lVar8);
    if (param_2 < iVar7) {
      FUN_144cfb680(param_1,fVar3,iVar7,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}



// FUNCTION 144cfb780 FUN_144cfb780 body=728 status=ok
// SIG undefined FUN_144cfb780(void)

ulonglong FUN_144cfb780(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  
  uVar13 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar13 * 2;
  uVar9 = param_3;
  if (param_3 < uVar12) {
    uVar9 = uVar12;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x1f0,&local_res8);
  puVar11 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined8 *)(lVar6 + 0x80);
    uVar12 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar7 + -0x10 != (undefined8 *)0x0) {
        uVar5 = puVar11[1];
        puVar7[-0x10] = *puVar11;
        puVar7[-0xf] = uVar5;
        uVar5 = puVar11[3];
        puVar7[-0xe] = puVar11[2];
        puVar7[-0xd] = uVar5;
        uVar5 = puVar11[5];
        puVar7[-0xc] = puVar11[4];
        puVar7[-0xb] = uVar5;
        uVar5 = puVar11[7];
        puVar7[-10] = puVar11[6];
        puVar7[-9] = uVar5;
        uVar5 = puVar11[9];
        puVar7[-8] = puVar11[8];
        puVar7[-7] = uVar5;
        uVar5 = puVar11[0xb];
        puVar7[-6] = puVar11[10];
        puVar7[-5] = uVar5;
        uVar5 = puVar11[0xd];
        puVar7[-4] = puVar11[0xc];
        puVar7[-3] = uVar5;
        uVar5 = puVar11[0xf];
        puVar7[-2] = puVar11[0xe];
        puVar7[-1] = uVar5;
        uVar5 = puVar11[0x11];
        *puVar7 = puVar11[0x10];
        puVar7[1] = uVar5;
        uVar5 = puVar11[0x13];
        puVar7[2] = puVar11[0x12];
        puVar7[3] = uVar5;
        uVar5 = puVar11[0x15];
        puVar7[4] = puVar11[0x14];
        puVar7[5] = uVar5;
        uVar5 = puVar11[0x17];
        puVar7[6] = puVar11[0x16];
        puVar7[7] = uVar5;
        uVar5 = puVar11[0x19];
        puVar7[8] = puVar11[0x18];
        puVar7[9] = uVar5;
        uVar5 = puVar11[0x1b];
        puVar7[10] = puVar11[0x1a];
        puVar7[0xb] = uVar5;
        uVar5 = puVar11[0x1d];
        puVar7[0xc] = puVar11[0x1c];
        puVar7[0xd] = uVar5;
        uVar5 = puVar11[0x1f];
        puVar7[0xe] = puVar11[0x1e];
        puVar7[0xf] = uVar5;
        uVar5 = puVar11[0x21];
        puVar7[0x10] = puVar11[0x20];
        puVar7[0x11] = uVar5;
        uVar5 = puVar11[0x23];
        puVar7[0x12] = puVar11[0x22];
        puVar7[0x13] = uVar5;
        uVar5 = puVar11[0x25];
        puVar7[0x14] = puVar11[0x24];
        puVar7[0x15] = uVar5;
        uVar5 = puVar11[0x27];
        puVar7[0x16] = puVar11[0x26];
        puVar7[0x17] = uVar5;
        uVar5 = puVar11[0x29];
        puVar7[0x18] = puVar11[0x28];
        puVar7[0x19] = uVar5;
        uVar5 = puVar11[0x2b];
        puVar7[0x1a] = puVar11[0x2a];
        puVar7[0x1b] = uVar5;
        uVar5 = puVar11[0x2d];
        puVar7[0x1c] = puVar11[0x2c];
        puVar7[0x1d] = uVar5;
        uVar5 = puVar11[0x2f];
        puVar7[0x1e] = puVar11[0x2e];
        puVar7[0x1f] = uVar5;
        uVar5 = puVar11[0x31];
        puVar7[0x20] = puVar11[0x30];
        puVar7[0x21] = uVar5;
        uVar5 = puVar11[0x33];
        puVar7[0x22] = puVar11[0x32];
        puVar7[0x23] = uVar5;
        uVar5 = puVar11[0x35];
        puVar7[0x24] = puVar11[0x34];
        puVar7[0x25] = uVar5;
        uVar5 = puVar11[0x37];
        puVar7[0x26] = puVar11[0x36];
        puVar7[0x27] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar11 + 0x1c4);
        uVar3 = *(undefined4 *)(puVar11 + 0x39);
        uVar4 = *(undefined4 *)((longlong)puVar11 + 0x1cc);
        *(undefined4 *)(puVar7 + 0x28) = *(undefined4 *)(puVar11 + 0x38);
        *(undefined4 *)((longlong)puVar7 + 0x144) = uVar2;
        *(undefined4 *)(puVar7 + 0x29) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x14c) = uVar4;
        *(undefined4 *)(puVar7 + 0x2a) = *(undefined4 *)(puVar11 + 0x3a);
        *(undefined1 *)((longlong)puVar7 + 0x154) = *(undefined1 *)((longlong)puVar11 + 0x1d4);
        *(undefined4 *)(puVar7 + 0x2b) = *(undefined4 *)(puVar11 + 0x3b);
        *(undefined4 *)((longlong)puVar7 + 0x15c) = *(undefined4 *)((longlong)puVar11 + 0x1dc);
        *(undefined4 *)(puVar7 + 0x2c) = *(undefined4 *)(puVar11 + 0x3c);
        *(undefined1 *)((longlong)puVar7 + 0x164) = *(undefined1 *)((longlong)puVar11 + 0x1e4);
        *(undefined4 *)(puVar7 + 0x2d) = *(undefined4 *)(puVar11 + 0x3d);
      }
      puVar7 = puVar7 + 0x3e;
      puVar11 = puVar11 + 0x3e;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar9 * 0x1f0 + 0x1f0;
  uVar10 = uVar9;
  if (uVar12 <= local_res8) {
    local_res8 = local_res8 - 0x1f0;
    uVar10 = uVar9 + 1;
    if (uVar12 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x1f0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      lVar8 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
      uVar12 = SUB168(ZEXT816(0x842108421084211) * auVar1,0);
      uVar10 = uVar10 + ((uVar9 - lVar8 >> 1) + lVar8 >> 8);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar13 * 0x1f0);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar12;
}



// FUNCTION 144cfba60 FUN_144cfba60 body=206 status=ok
// SIG undefined FUN_144cfba60(void)

void FUN_144cfba60(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  do {
    uVar9 = uVar7 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 4);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      iVar2 = *(int *)(param_1 + uVar6 * 4);
      while (iVar2 < iVar1) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar6 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      while (iVar1 < iVar2) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        iVar2 = *(int *)(param_1 + uVar5 * 4);
      }
      if ((longlong)uVar5 < (longlong)uVar6) break;
      if (uVar5 != uVar6) {
        uVar3 = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar5);
    if ((int)uVar7 < iVar4) {
      FUN_144cfba60(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 144cfbb30 FUN_144cfbb30 body=816 status=ok
// SIG undefined FUN_144cfbb30(void)

ulonglong FUN_144cfbb30(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = param_3;
  if (param_3 < uVar8 * 2) {
    uVar10 = uVar8 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar8;
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x110,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  uVar9 = (ulonglong)uVar1;
  local_res18 = lVar5;
  if (0 < (int)uVar1) {
    puVar6 = (undefined4 *)(lVar5 + 0xec);
    uVar8 = (ulonglong)uVar1;
    puVar7 = (undefined4 *)(lVar3 + 0xec);
    do {
      if (puVar7 + -0x3b != (undefined4 *)0x0) {
        FUN_147e5470a(puVar7 + -0x3b,lVar5);
        *puVar7 = 0x80000000;
        *(undefined8 *)(puVar7 + -3) = 0;
        puVar7[-1] = 0;
        FUN_144cdd0a0(puVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar7 + -3) = *(undefined8 *)(puVar6 + -3);
        puVar7[-1] = puVar6[-1];
        *puVar7 = *puVar6;
        *(undefined8 *)(puVar6 + -3) = 0;
        *(undefined8 *)(puVar6 + -1) = 0;
        *(undefined8 *)(puVar7 + 1) = 0;
        puVar7[3] = 0;
        puVar7[4] = 0x80000000;
        FUN_144cdd0a0(puVar6 + 1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar7 + 1) = *(undefined8 *)(puVar6 + 1);
        puVar7[3] = puVar6[3];
        puVar7[4] = puVar6[4];
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar7 + 5) = 0;
        puVar7[7] = 0;
        puVar7[8] = 0x80000000;
        FUN_143821c08(puVar6 + 5,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(puVar6 + 5);
        puVar7[7] = puVar6[7];
        puVar7[8] = puVar6[8];
        *(undefined8 *)(puVar6 + 5) = 0;
        *(undefined8 *)(puVar6 + 7) = 0;
      }
      puVar7 = puVar7 + 0x44;
      lVar5 = lVar5 + 0x110;
      puVar6 = puVar6 + 0x44;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = (uint *)(local_res18 + 0x10c);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(longlong *)(puVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -3),
                   (ulonglong)(*puVar4 & 0x7fffffff) << 2);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4[-5] = 0;
      if ((-1 < (int)puVar4[-4]) && (*(longlong *)(puVar4 + -7) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -7),
                   (ulonglong)(puVar4[-4] & 0x7fffffff) * 0x18);
      }
      puVar4[-7] = 0;
      puVar4[-6] = 0;
      puVar4[-4] = 0x80000000;
      puVar4[-9] = 0;
      if ((-1 < (int)puVar4[-8]) && (*(longlong *)(puVar4 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0xb),
                   (ulonglong)(puVar4[-8] & 0x7fffffff) * 0x18);
      }
      puVar4[-0xb] = 0;
      puVar4[-10] = 0;
      puVar4[-8] = 0x80000000;
      FUN_147e4ccc0(puVar4 + -0x43);
      puVar4 = puVar4 + 0x44;
      uVar9 = uVar9 - 1;
      param_2 = local_res10;
      uVar8 = local_res20;
    } while (uVar9 != 0);
  }
  uVar9 = uVar10 * 0x110 + 0x110;
  uVar11 = uVar10;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x110;
    uVar11 = uVar10 + 1;
    if (uVar9 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x110;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      uVar9 = SUB168(ZEXT816(0xf0f0f0f0f0f0f0f1) * auVar2,0);
      uVar11 = uVar11 + uVar10 / 0x110;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar9 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0x110);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar9;
}



// FUNCTION 144cfbe60 FUN_144cfbe60 body=259 status=ok
// SIG undefined FUN_144cfbe60(void)

void FUN_144cfbe60(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144cfbf70 FUN_144cfbf70 body=310 status=ok
// SIG undefined FUN_144cfbf70(void)

void FUN_144cfbf70(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144cfc0b0 FUN_144cfc0b0 body=285 status=ok
// SIG undefined FUN_144cfc0b0(void)

ulonglong FUN_144cfc0b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar9 * 0x24;
  puVar6 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined4 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7[8] = puVar8[8];
      }
      puVar7 = puVar7 + 9;
      puVar8 = puVar8 + 9;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x24 + 0x24;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x24;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x24;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x24;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144cfc1d0 FUN_144cfc1d0 body=310 status=ok
// SIG undefined FUN_144cfc1d0(void)

void FUN_144cfc1d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144cfc310 FUN_144cfc310 body=258 status=ok
// SIG undefined FUN_144cfc310(void)

void FUN_144cfc310(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144cfc420 FUN_144cfc420 body=281 status=ok
// SIG undefined FUN_144cfc420(void)

ulonglong FUN_144cfc420(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x18;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144cfc540 FUN_144cfc540 body=201 status=ok
// SIG undefined FUN_144cfc540(void)

undefined8 * FUN_144cfc540(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_128 [36];
  
  FUN_144d02de0(param_3,param_2,local_128);
  if (*(longlong *)(param_2 + 0x88) < 0) {
    FUN_144d03500(local_128,param_3);
  }
  lVar8 = 2;
  puVar5 = local_128;
  puVar6 = param_1;
  do {
    puVar9 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar1;
    uVar1 = puVar7[4];
    uVar4 = puVar7[5];
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    puVar9[4] = uVar1;
    puVar9[5] = uVar4;
    uVar1 = puVar7[8];
    uVar4 = puVar7[9];
    puVar9[6] = uVar2;
    puVar9[7] = uVar3;
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    puVar9[8] = uVar1;
    puVar9[9] = uVar4;
    uVar1 = puVar7[0xc];
    uVar4 = puVar7[0xd];
    puVar9[10] = uVar2;
    puVar9[0xb] = uVar3;
    uVar2 = puVar7[0xe];
    uVar3 = puVar7[0xf];
    puVar9[0xc] = uVar1;
    puVar9[0xd] = uVar4;
    puVar9[0xe] = uVar2;
    puVar9[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar9 + 0x10;
  } while (lVar8 != 0);
  uVar2 = puVar7[0x11];
  uVar1 = puVar7[0x12];
  puVar9[0x10] = puVar7[0x10];
  puVar9[0x11] = uVar2;
  puVar9[0x12] = uVar1;
  return param_1;
}



// FUNCTION 144cfc610 FUN_144cfc610 body=573 status=ok
// SIG undefined FUN_144cfc610(void)

uint FUN_144cfc610(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  bVar11 = false;
  puVar7 = (ulonglong *)(param_1 + 8);
  param_2 = param_2 - param_1;
  lVar10 = 5;
  plVar9 = &local_118;
  do {
    uVar2 = puVar7[-1];
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + -8);
    uVar3 = *puVar1;
    uVar5 = uVar2 - *puVar1;
    plVar9[-2] = uVar5 - bVar11;
    uVar4 = *puVar7;
    uVar5 = (ulonglong)(uVar2 < uVar3 || uVar5 < bVar11);
    uVar2 = *(ulonglong *)((longlong)puVar7 + param_2);
    uVar6 = uVar4 - *(ulonglong *)((longlong)puVar7 + param_2);
    plVar9[-1] = uVar6 - uVar5;
    uVar3 = puVar7[1];
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + 8);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    *plVar9 = uVar6 - uVar5;
    uVar4 = puVar7[2];
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + 0x10);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar9[1] = uVar6 - uVar5;
    uVar3 = puVar7[3];
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + 0x18);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    plVar9[2] = uVar6 - uVar5;
    uVar4 = puVar7[4];
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + 0x20);
    uVar3 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar5 = uVar4 - *puVar1;
    plVar9[3] = uVar5 - uVar3;
    puVar1 = (ulonglong *)((longlong)puVar7 + param_2 + 0x28);
    uVar2 = (ulonglong)(uVar4 < uVar2 || uVar5 < uVar3);
    uVar3 = puVar7[5] - *puVar1;
    bVar11 = puVar7[5] < *puVar1 || uVar3 < uVar2;
    puVar7 = puVar7 + 7;
    plVar9[4] = uVar3 - uVar2;
    lVar10 = lVar10 + -1;
    plVar9 = plVar9 + 7;
  } while (lVar10 != 0);
  uVar8 = 0;
  if (local_18 == 0) {
    uVar8 = (uint)((local_28 == 0 &&
                   ((local_38 == 0 &&
                    ((local_48 == 0 &&
                     ((local_58 == 0 &&
                      ((local_68 == 0 &&
                       ((local_78 == 0 &&
                        ((local_88 == 0 &&
                         ((local_98 == 0 &&
                          ((local_a8 == 0 &&
                           ((local_b8 == 0 &&
                            ((local_c8 == 0 &&
                             ((local_d8 == 0 &&
                              ((local_e8 == 0 &&
                               ((local_f8 == 0 &&
                                ((local_108 == 0 &&
                                 ((local_118 == 0 && (local_120 == 0 && local_128 == 0)) &&
                                 local_110 == 0)) && local_100 == 0)) && local_f0 == 0)) &&
                              local_e0 == 0)) && local_d0 == 0)) && local_c0 == 0)) && local_b0 == 0
                           )) && local_a0 == 0)) && local_90 == 0)) && local_80 == 0)) &&
                       local_70 == 0)) && local_60 == 0)) && local_50 == 0)) && local_40 == 0)) &&
                   local_30 == 0)) && local_20 == 0);
  }
  return 1 - uVar8 | (uint)(local_18 >> 0x3f);
}



// FUNCTION 144cfc850 FUN_144cfc850 body=343 status=ok
// SIG undefined FUN_144cfc850(void)

byte FUN_144cfc850(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  
  uVar1 = param_1[10];
  uVar2 = param_2[10];
  uVar3 = param_1[9];
  bVar11 = uVar1 <= uVar2 && uVar1 >= uVar2;
  uVar4 = param_1[8];
  bVar12 = bVar11 && (uVar3 <= param_2[9] && uVar3 >= param_2[9]);
  uVar5 = param_1[7];
  bVar13 = bVar12 && (uVar4 <= param_2[8] && uVar4 >= param_2[8]);
  uVar6 = param_1[6];
  bVar14 = bVar13 && (uVar5 <= param_2[7] && uVar5 >= param_2[7]);
  uVar7 = param_1[5];
  bVar15 = bVar14 && (uVar6 <= param_2[6] && uVar6 >= param_2[6]);
  uVar8 = param_1[4];
  bVar16 = bVar15 && (uVar7 <= param_2[5] && uVar7 >= param_2[5]);
  uVar9 = param_1[3];
  bVar17 = bVar16 && (uVar8 <= param_2[4] && uVar8 >= param_2[4]);
  uVar10 = param_1[2];
  bVar18 = bVar17 && (uVar9 <= param_2[3] && uVar9 >= param_2[3]);
  bVar19 = param_1[1] < param_2[1];
  if (*param_1 < *param_2) {
    bVar19 = param_1[1] <= param_2[1] && !bVar19 || bVar19;
  }
  return ((uVar10 <= param_2[2] && uVar10 >= param_2[2]) && bVar18) & bVar19 |
         ((((((((uVar1 < uVar2 || uVar3 < param_2[9] && bVar11) || uVar4 < param_2[8] && bVar12) ||
              uVar5 < param_2[7] && bVar13) || uVar6 < param_2[6] && bVar14) ||
            uVar7 < param_2[5] && bVar15) || uVar8 < param_2[4] && bVar16) ||
          uVar9 < param_2[3] && bVar17) || uVar10 < param_2[2] && bVar18);
}



// FUNCTION 144cfc9b0 FUN_144cfc9b0 body=417 status=ok
// SIG undefined FUN_144cfc9b0(void)

undefined8 * FUN_144cfc9b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  
  local_198 = *(undefined8 *)(param_3 + 0x58);
  uStack_190 = *(undefined8 *)(param_3 + 0x60);
  local_188 = *(undefined8 *)(param_3 + 0x68);
  uStack_180 = *(undefined8 *)(param_3 + 0x70);
  local_178 = *(undefined8 *)(param_3 + 0x78);
  uStack_170 = *(undefined8 *)(param_3 + 0x80);
  local_168 = *(undefined8 *)(param_3 + 0x88);
  uStack_160 = *(undefined8 *)(param_3 + 0x90);
  local_158 = *(undefined8 *)(param_3 + 0x98);
  uStack_150 = *(undefined8 *)(param_3 + 0xa0);
  local_148 = *(undefined8 *)(param_3 + 0xa8);
  local_108 = *(undefined8 *)(param_2 + 0x38);
  uStack_100 = *(undefined8 *)(param_2 + 0x40);
  local_f8 = *(undefined8 *)(param_2 + 0x48);
  uStack_f0 = *(undefined8 *)(param_2 + 0x50);
  local_e8 = *(undefined4 *)(param_2 + 0x58);
  uStack_e4 = *(undefined4 *)(param_2 + 0x5c);
  uStack_e0 = *(undefined4 *)(param_2 + 0x60);
  uStack_dc = *(undefined4 *)(param_2 + 100);
  local_d8 = *(undefined8 *)(param_2 + 0x68);
  FUN_144d019e0(&local_108,&local_198,&local_c8);
  FUN_144d018b0(param_2,param_3,&local_198);
  *param_1 = local_198;
  param_1[1] = uStack_190;
  param_1[0x12] = local_c8;
  param_1[0x13] = uStack_c0;
  param_1[0x14] = local_b8;
  param_1[0x15] = uStack_b0;
  param_1[0x16] = local_a8;
  param_1[0x17] = uStack_a0;
  param_1[0x18] = local_98;
  param_1[0x19] = uStack_90;
  param_1[0x1a] = local_88;
  param_1[0x1b] = uStack_80;
  param_1[2] = local_188;
  param_1[3] = uStack_180;
  param_1[0x1c] = local_78;
  param_1[0x1d] = uStack_70;
  param_1[4] = local_178;
  param_1[5] = uStack_170;
  param_1[6] = local_168;
  param_1[7] = uStack_160;
  param_1[0x1e] = local_68;
  param_1[0x1f] = uStack_60;
  param_1[8] = local_158;
  param_1[9] = uStack_150;
  param_1[10] = local_148;
  param_1[0xb] = uStack_140;
  param_1[0xc] = local_138;
  param_1[0xd] = uStack_130;
  param_1[0x20] = local_58;
  param_1[0x21] = uStack_50;
  param_1[0xe] = local_128;
  param_1[0xf] = uStack_120;
  param_1[0x10] = local_118;
  param_1[0x11] = uStack_110;
  param_1[0x22] = local_48;
  return param_1;
}



// FUNCTION 144cfcb60 FUN_144cfcb60 body=819 status=ok
// SIG undefined FUN_144cfcb60(void)

undefined8 * FUN_144cfcb60(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  bool bVar4;
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
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  longlong local_170;
  undefined1 local_168 [176];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_144d05550(param_2 + 0x20,param_3,&local_218);
  if (*(longlong *)(param_3 + 0x88) < 0) {
    bVar4 = local_188 < *(ulonglong *)(param_2 + 0x20);
    local_188 = local_188 - *(ulonglong *)(param_2 + 0x20);
    uVar1 = (ulonglong)bVar4;
    bVar4 = uStack_180 < *(ulonglong *)(param_2 + 0x28);
    uVar2 = uStack_180 - *(ulonglong *)(param_2 + 0x28);
    uStack_180 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar4 || uVar2 < uVar1);
    bVar4 = local_178 < *(ulonglong *)(param_2 + 0x30);
    uVar2 = local_178 - *(ulonglong *)(param_2 + 0x30);
    local_178 = uVar2 - uVar1;
    local_170 = (local_170 - *(longlong *)(param_2 + 0x38)) - (ulonglong)(bVar4 || uVar2 < uVar1);
  }
  FUN_144d05790(&local_218,local_168);
  puVar3 = (undefined8 *)(param_3 + 0x90);
  FUN_144d03640(puVar3,param_2,&local_2c8);
  if (*(longlong *)(param_2 + 0x18) < 0) {
    FUN_144d05460(&local_2c8,puVar3);
  }
  local_b8 = local_2c8;
  uStack_b0 = uStack_2c0;
  local_a8 = local_2b8;
  uStack_a0 = uStack_2b0;
  local_98 = local_2a8;
  uStack_90 = uStack_2a0;
  local_88 = local_298;
  uStack_80 = uStack_290;
  local_78 = local_288;
  uStack_70 = uStack_280;
  local_68 = local_278;
  uStack_60 = uStack_270;
  local_58 = local_268;
  uStack_50 = uStack_260;
  local_48 = local_258;
  uStack_40 = uStack_250;
  local_38 = (undefined4)local_248;
  uStack_34 = local_248._4_4_;
  uStack_30 = uStack_240;
  uStack_2c = uStack_23c;
  local_28 = local_238;
  uStack_24 = uStack_234;
  uStack_20 = uStack_230;
  uStack_1c = uStack_22c;
  local_18 = local_228;
  FUN_144d01d00(&local_b8,local_168,&local_218);
  local_2c8 = *puVar3;
  uStack_2c0 = *(undefined8 *)(param_3 + 0x98);
  local_2b8 = *(undefined8 *)(param_3 + 0xa0);
  uStack_2b0 = *(undefined8 *)(param_3 + 0xa8);
  local_2a8 = *(undefined8 *)(param_3 + 0xb0);
  uStack_2a0 = *(undefined8 *)(param_3 + 0xb8);
  local_298 = *(undefined8 *)(param_3 + 0xc0);
  uStack_290 = *(undefined8 *)(param_3 + 200);
  local_288 = *(undefined8 *)(param_3 + 0xd0);
  uStack_280 = *(undefined8 *)(param_3 + 0xd8);
  local_278 = *(undefined8 *)(param_3 + 0xe0);
  uStack_270 = *(undefined8 *)(param_3 + 0xe8);
  local_268 = *(undefined8 *)(param_3 + 0xf0);
  uStack_260 = *(undefined8 *)(param_3 + 0xf8);
  local_258 = *(undefined8 *)(param_3 + 0x100);
  uStack_250 = *(undefined8 *)(param_3 + 0x108);
  local_248 = *(undefined8 *)(param_3 + 0x110);
  local_2d8 = *(undefined4 *)(param_2 + 0x30);
  uStack_2d4 = *(undefined4 *)(param_2 + 0x34);
  uStack_2d0 = *(undefined4 *)(param_2 + 0x38);
  uStack_2cc = *(undefined4 *)(param_2 + 0x3c);
  local_2e8 = *(undefined4 *)(param_2 + 0x20);
  uStack_2e4 = *(undefined4 *)(param_2 + 0x24);
  uStack_2e0 = *(undefined4 *)(param_2 + 0x28);
  uStack_2dc = *(undefined4 *)(param_2 + 0x2c);
  FUN_144d01e30(&local_2e8,&local_2c8,&local_b8);
  *param_1 = local_218;
  param_1[1] = uStack_210;
  param_1[2] = local_208;
  param_1[3] = uStack_200;
  param_1[4] = local_1f8;
  param_1[5] = uStack_1f0;
  param_1[6] = local_1e8;
  param_1[7] = uStack_1e0;
  param_1[8] = local_1d8;
  param_1[9] = uStack_1d0;
  param_1[10] = local_1c8;
  param_1[0xb] = uStack_1c0;
  param_1[0xc] = local_1b8;
  param_1[0xd] = uStack_1b0;
  param_1[0xe] = local_1a8;
  param_1[0xf] = uStack_1a0;
  param_1[0x10] = local_198;
  param_1[0x11] = uStack_190;
  param_1[0x12] = local_188;
  param_1[0x13] = uStack_180;
  param_1[0x14] = local_178;
  param_1[0x15] = local_b8;
  param_1[0x16] = uStack_b0;
  param_1[0x17] = local_a8;
  param_1[0x18] = uStack_a0;
  param_1[0x19] = local_98;
  param_1[0x1a] = uStack_90;
  param_1[0x1b] = local_88;
  param_1[0x1c] = uStack_80;
  param_1[0x1d] = local_78;
  param_1[0x1e] = uStack_70;
  param_1[0x1f] = local_68;
  param_1[0x20] = uStack_60;
  param_1[0x21] = local_58;
  param_1[0x22] = uStack_50;
  param_1[0x23] = local_48;
  param_1[0x24] = uStack_40;
  param_1[0x25] = CONCAT44(uStack_34,local_38);
  param_1[0x26] = CONCAT44(uStack_2c,uStack_30);
  param_1[0x27] = CONCAT44(uStack_24,local_28);
  param_1[0x28] = CONCAT44(uStack_1c,uStack_20);
  param_1[0x29] = local_18;
  return param_1;
}



// FUNCTION 144cfcea0 FUN_144cfcea0 body=428 status=ok
// SIG undefined FUN_144cfcea0(void)

float * FUN_144cfcea0(float *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int local_res8 [2];
  
  lVar4 = FUN_144d03e30(param_2,local_res8);
  fVar6 = 0.0;
  if ((float)lVar4 != 0.0) {
    iVar9 = 0x14;
    lVar5 = 0x14;
    do {
      uVar8 = *(ulonglong *)(param_2 + 0xa8 + lVar5 * 8);
      if (uVar8 != 0) {
        uVar7 = (uint)uVar8 | (uint)(uVar8 >> 1) & 0x7fffffff;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        uVar7 = (uint)(uVar8 >> 0x20);
        uVar7 = uVar7 | uVar7 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        iVar1 = 0x20 - iVar3;
        if (0x1f < 0x20 - iVar3) {
          iVar1 = 0x40 - iVar2;
        }
        iVar2 = iVar9 * 0x40 - iVar1;
        uVar8 = *(longlong *)(param_2 + 0xa8 + (longlong)iVar9 * 8) << ((byte)iVar1 & 0x3f);
        if (iVar1 != 0) {
          uVar8 = uVar8 | *(ulonglong *)(param_2 + 0xa0 + (longlong)iVar9 * 8) >>
                          (0x40 - (byte)iVar1 & 0x3f);
        }
        goto LAB_144cfcfd0;
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
    uVar8 = *(ulonglong *)(param_2 + 0xa8);
    iVar2 = 0;
LAB_144cfcfd0:
    fVar6 = (float)(local_res8[0] * 0x800000 + iVar2 * -0x800000 +
                   (int)((float)lVar4 / (float)uVar8));
  }
  *param_1 = fVar6;
  param_1[1] = ABS(fVar6) * 1.1920929e-07;
  return param_1;
}



// FUNCTION 144cfd050 FUN_144cfd050 body=363 status=ok
// SIG undefined FUN_144cfd050(void)

uint FUN_144cfd050(longlong *param_1)

{
  return (uint)((param_1[0x1a] != 0 ||
                ((param_1[0x18] != 0 ||
                 ((param_1[0x16] != 0 ||
                  ((param_1[0x14] != 0 ||
                   ((param_1[0x12] != 0 ||
                    ((param_1[0x10] != 0 ||
                     ((param_1[0xe] != 0 ||
                      ((param_1[0xc] != 0 ||
                       ((param_1[10] != 0 ||
                        ((param_1[8] != 0 ||
                         ((param_1[6] != 0 ||
                          ((param_1[4] != 0 ||
                           ((param_1[2] != 0 || (param_1[1] != 0 || *param_1 != 0)) ||
                           param_1[3] != 0)) || param_1[5] != 0)) || param_1[7] != 0)) ||
                        param_1[9] != 0)) || param_1[0xb] != 0)) || param_1[0xd] != 0)) ||
                     param_1[0xf] != 0)) || param_1[0x11] != 0)) || param_1[0x13] != 0)) ||
                  param_1[0x15] != 0)) || param_1[0x17] != 0)) || param_1[0x19] != 0)) ||
               param_1[0x1b] != 0) | (uint)(param_1[0x1b] >> 0x3f);
}



// FUNCTION 144cfd1c0 FUN_144cfd1c0 body=274 status=ok
// SIG undefined FUN_144cfd1c0(void)

undefined8 FUN_144cfd1c0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  uVar6 = (longlong)param_1[0xd] >> 0x3f;
  lVar5 = (uVar1 ^ uVar6) - uVar6;
  *param_2 = lVar5;
  uVar2 = param_1[1];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[1] = uVar4 - uVar3;
  uVar1 = param_1[2];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[2] = uVar4 - uVar3;
  uVar2 = param_1[3];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[3] = uVar4 - uVar3;
  uVar1 = param_1[4];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[4] = uVar4 - uVar3;
  uVar2 = param_1[5];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[5] = uVar4 - uVar3;
  uVar1 = param_1[6];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[6] = uVar4 - uVar3;
  uVar2 = param_1[7];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[7] = uVar4 - uVar3;
  uVar1 = param_1[8];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[8] = uVar4 - uVar3;
  uVar2 = param_1[9];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[9] = uVar4 - uVar3;
  uVar1 = param_1[10];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[10] = uVar4 - uVar3;
  uVar2 = param_1[0xb];
  uVar1 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar3 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xb] = uVar3 - uVar1;
  uVar1 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar3 < uVar1);
  uVar2 = (param_1[0xc] ^ uVar6) - uVar6;
  bVar7 = (param_1[0xc] ^ uVar6) < uVar6 || uVar2 < uVar1;
  param_2[0xc] = uVar2 - uVar1;
  param_2[0xd] = ((param_1[0xd] ^ uVar6) - uVar6) - (ulonglong)bVar7;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar7 + -1);
}



// FUNCTION 144cfd2e0 FUN_144cfd2e0 body=209 status=ok
// SIG undefined FUN_144cfd2e0(void)

bool FUN_144cfd2e0(longlong *param_1)

{
  return param_1[0x11] == 0 &&
         (param_1[0x10] == 0 &&
         ((param_1[0xe] == 0 &&
          ((param_1[0xc] == 0 &&
           ((param_1[10] == 0 &&
            ((param_1[8] == 0 &&
             ((param_1[6] == 0 &&
              ((param_1[4] == 0 &&
               ((param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0)) && param_1[3] == 0)) &&
              param_1[5] == 0)) && param_1[7] == 0)) && param_1[9] == 0)) && param_1[0xb] == 0)) &&
          param_1[0xd] == 0)) && param_1[0xf] == 0));
}



// FUNCTION 144cfd3c0 FUN_144cfd3c0 body=402 status=ok
// SIG undefined FUN_144cfd3c0(void)

ulonglong FUN_144cfd3c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong local_res8;
  
  uVar17 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar16 = uVar17 * 2;
  uVar12 = param_3;
  if (param_3 < uVar16) {
    uVar12 = uVar16;
  }
  if ((0x7ffffffe < uVar12) && (uVar12 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar12 * 0x198,&local_res8);
  puVar15 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar16 = (ulonglong)*(uint *)(param_1 + 1);
    puVar14 = puVar8;
    do {
      if (puVar14 != (undefined8 *)0x0) {
        lVar10 = 3;
        puVar6 = puVar15;
        puVar7 = puVar14;
        do {
          puVar11 = puVar7;
          puVar9 = puVar6;
          uVar5 = puVar9[1];
          *puVar11 = *puVar9;
          puVar11[1] = uVar5;
          uVar5 = puVar9[3];
          puVar11[2] = puVar9[2];
          puVar11[3] = uVar5;
          uVar5 = puVar9[5];
          puVar11[4] = puVar9[4];
          puVar11[5] = uVar5;
          uVar5 = puVar9[7];
          puVar11[6] = puVar9[6];
          puVar11[7] = uVar5;
          uVar5 = puVar9[9];
          puVar11[8] = puVar9[8];
          puVar11[9] = uVar5;
          uVar5 = puVar9[0xb];
          puVar11[10] = puVar9[10];
          puVar11[0xb] = uVar5;
          uVar5 = puVar9[0xd];
          puVar11[0xc] = puVar9[0xc];
          puVar11[0xd] = uVar5;
          uVar5 = puVar9[0xf];
          puVar11[0xe] = puVar9[0xe];
          puVar11[0xf] = uVar5;
          lVar10 = lVar10 + -1;
          puVar6 = puVar9 + 0x10;
          puVar7 = puVar11 + 0x10;
        } while (lVar10 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x84);
        uVar3 = *(undefined4 *)(puVar9 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x8c);
        *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
        *(undefined4 *)((longlong)puVar11 + 0x84) = uVar2;
        *(undefined4 *)(puVar11 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar4;
        puVar11[0x12] = puVar9[0x12];
      }
      puVar14 = puVar14 + 0x33;
      puVar15 = puVar15 + 0x33;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar16 = uVar12 * 0x198 + 0x198;
  uVar13 = uVar12;
  if (uVar16 <= local_res8) {
    local_res8 = local_res8 - 0x198;
    uVar13 = uVar12 + 1;
    if (uVar16 <= local_res8) {
      uVar12 = local_res8 + uVar12 * -0x198;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar12;
      uVar16 = SUB168(ZEXT816(0xa0a0a0a0a0a0a0a1) * auVar1,0);
      uVar13 = uVar13 + uVar12 / 0x198;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar16 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar17 * 0x198);
  }
  *param_1 = puVar8;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  return uVar16;
}



// FUNCTION 144cfd560 FUN_144cfd560 body=503 status=ok
// SIG undefined FUN_144cfd560(void)

void FUN_144cfd560(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_a8 [9];
  longlong local_60;
  longlong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar27 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar28 = SUB168(auVar11 * auVar19,8);
  local_a8[1] = uVar4 * uVar2 + uVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar29 = SUB168(auVar12 * auVar20,8);
  uVar27 = (ulonglong)CARRY8(uVar4 * uVar2,uVar27);
  uVar30 = uVar5 * uVar2 + uVar28;
  local_a8[2] = uVar30 + uVar27;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar27 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar28) || CARRY8(uVar30,uVar27));
  uVar30 = uVar6 * uVar2 + uVar29;
  local_a8[3] = uVar30 + uVar27;
  local_a8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar29) || CARRY8(uVar30,uVar27));
  local_res8 = 1;
  iVar26 = 1;
  do {
    uVar27 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar27;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar30 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar27;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar29 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar27 + uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar31 = SUB168(auVar16 * auVar24,8);
    uVar30 = (ulonglong)CARRY8(uVar4 * uVar27,uVar30);
    uVar28 = uVar5 * uVar27 + uVar29;
    uVar33 = uVar28 + uVar30;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar28 = (ulonglong)(CARRY8(uVar5 * uVar27,uVar29) || CARRY8(uVar28,uVar30));
    uVar8 = uVar6 * uVar27 + uVar31;
    uVar32 = uVar8 + uVar28;
    lVar1 = local_res8 + 1;
    uVar30 = local_a8[local_res8];
    local_a8[iVar26] = uVar3 * uVar27 + local_a8[local_res8];
    uVar29 = (ulonglong)CARRY8(uVar3 * uVar27,uVar30);
    uVar30 = local_a8[lVar1];
    uVar9 = uVar7 + local_a8[lVar1];
    local_a8[iVar26 + 1] = uVar9 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar7,uVar30) || CARRY8(uVar9,uVar29));
    uVar30 = local_a8[local_res8 + 2];
    uVar7 = uVar33 + local_a8[local_res8 + 2];
    local_a8[iVar26 + 2] = uVar7 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar7,uVar29));
    uVar30 = local_a8[local_res8 + 3];
    uVar7 = uVar32 + local_a8[local_res8 + 3];
    local_a8[iVar26 + 3] = uVar7 + uVar29;
    local_a8[iVar26 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar27,uVar31) || CARRY8(uVar8,uVar28)) +
         (ulonglong)(CARRY8(uVar32,uVar30) || CARRY8(uVar7,uVar29));
    local_res8 = lVar1;
    iVar26 = iVar26 + 1;
  } while (lVar1 < 7);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_a8[1];
  param_3[2] = local_a8[2];
  param_3[3] = local_a8[3];
  param_3[4] = local_a8[4];
  param_3[5] = local_a8[5];
  param_3[6] = local_a8[6];
  param_3[7] = local_a8[7];
  param_3[8] = local_a8[8];
  param_3[9] = local_60;
  param_3[10] = local_58;
  return;
}



// FUNCTION 144cfd760 FUN_144cfd760 body=189 status=ok
// SIG undefined FUN_144cfd760(void)

void FUN_144cfd760(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144cfefd0();
  if ((longlong)param_1[6] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x38);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x38) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x48);
    uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar4 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x48) = uVar4 - uVar3;
    *(ulonglong *)(param_3 + 0x50) =
         (*(longlong *)(param_3 + 0x50) - param_2[3]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  }
  if ((longlong)param_2[3] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x20);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x20) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x28) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x48);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar4 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x48) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x50) =
         (*(longlong *)(param_3 + 0x50) - param_1[6]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  return;
}



// FUNCTION 144cfd820 FUN_144cfd820 body=187 status=ok
// SIG undefined FUN_144cfd820(void)

void FUN_144cfd820(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144cfd8e0();
  if (*(longlong *)(param_2 + 0x18) < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x20);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x20) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x28) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar5 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x50);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[6];
    uVar5 = uVar2 - param_1[6];
    *(ulonglong *)(param_3 + 0x50) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x58);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[7];
    uVar5 = uVar3 - param_1[7];
    *(ulonglong *)(param_3 + 0x58) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x60);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[8];
    uVar5 = uVar2 - param_1[8];
    *(ulonglong *)(param_3 + 0x60) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x68);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[9];
    uVar4 = uVar3 - param_1[9];
    *(ulonglong *)(param_3 + 0x68) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x70) =
         (*(longlong *)(param_3 + 0x70) - param_1[10]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2)
    ;
  }
  return;
}



// FUNCTION 144cfd8e0 FUN_144cfd8e0 body=1134 status=ok
// SIG undefined FUN_144cfd8e0(void)

void FUN_144cfd8e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  int iVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  longlong local_res8;
  ulonglong local_138 [16];
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar58 = param_1[1];
  uVar64 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar3;
  uVar49 = SUB168(auVar5 * auVar27,8);
  uVar55 = param_1[3];
  uVar4 = param_1[5];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar58;
  uVar50 = SUB168(auVar6 * auVar28,8);
  uVar56 = param_1[4];
  local_70 = uVar3;
  local_138[1] = uVar58 * uVar2 + uVar49;
  local_68 = uVar58;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar64;
  uVar51 = SUB168(auVar7 * auVar29,8);
  local_60 = uVar64;
  local_58 = uVar55;
  local_50 = uVar56;
  uVar49 = (ulonglong)CARRY8(uVar58 * uVar2,uVar49);
  uVar53 = uVar64 * uVar2 + uVar50;
  local_138[2] = uVar53 + uVar49;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar55;
  uVar52 = SUB168(auVar8 * auVar30,8);
  uVar49 = (ulonglong)(CARRY8(uVar64 * uVar2,uVar50) || CARRY8(uVar53,uVar49));
  uVar53 = uVar55 * uVar2 + uVar51;
  local_138[3] = uVar53 + uVar49;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar56;
  uVar50 = SUB168(auVar9 * auVar31,8);
  uVar49 = (ulonglong)(CARRY8(uVar55 * uVar2,uVar51) || CARRY8(uVar53,uVar49));
  uVar53 = uVar56 * uVar2 + uVar52;
  local_138[4] = uVar53 + uVar49;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar4;
  uVar51 = SUB168(auVar10 * auVar32,8);
  local_b8 = param_1[6];
  uVar49 = (ulonglong)(CARRY8(uVar56 * uVar2,uVar52) || CARRY8(uVar53,uVar49));
  uVar53 = uVar4 * uVar2 + uVar50;
  local_138[5] = uVar53 + uVar49;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = local_b8;
  uVar52 = SUB168(auVar11 * auVar33,8);
  local_b0 = param_1[7];
  uVar49 = (ulonglong)(CARRY8(uVar4 * uVar2,uVar50) || CARRY8(uVar53,uVar49));
  uVar53 = local_b8 * uVar2 + uVar51;
  local_138[6] = uVar53 + uVar49;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = local_b0;
  uVar50 = SUB168(auVar12 * auVar34,8);
  local_a8 = param_1[8];
  uVar49 = (ulonglong)(CARRY8(local_b8 * uVar2,uVar51) || CARRY8(uVar53,uVar49));
  uVar53 = local_b0 * uVar2 + uVar52;
  local_138[7] = uVar53 + uVar49;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_a8;
  uVar51 = SUB168(auVar13 * auVar35,8);
  local_a0 = param_1[9];
  uVar49 = (ulonglong)(CARRY8(local_b0 * uVar2,uVar52) || CARRY8(uVar53,uVar49));
  uVar53 = local_a8 * uVar2 + uVar50;
  local_138[8] = uVar53 + uVar49;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = local_a0;
  uVar52 = SUB168(auVar14 * auVar36,8);
  local_98 = param_1[10];
  uVar49 = (ulonglong)(CARRY8(local_a8 * uVar2,uVar50) || CARRY8(uVar53,uVar49));
  uVar53 = local_a0 * uVar2 + uVar51;
  local_138[9] = uVar53 + uVar49;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = local_98;
  uVar49 = (ulonglong)(CARRY8(local_a0 * uVar2,uVar51) || CARRY8(uVar53,uVar49));
  uVar53 = local_98 * uVar2 + uVar52;
  local_138[10] = uVar53 + uVar49;
  local_res8 = 1;
  local_138[0xb] =
       SUB168(auVar15 * auVar37,8) +
       (ulonglong)(CARRY8(local_98 * uVar2,uVar52) || CARRY8(uVar53,uVar49));
  iVar60 = 1;
  do {
    uVar49 = param_2[local_res8];
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar49;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = local_70;
    uVar53 = SUB168(auVar16 * auVar38,8);
    uVar50 = local_70 * uVar49;
    local_90 = uVar50;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar49;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar58;
    uVar51 = SUB168(auVar17 * auVar39,8);
    local_88 = uVar58 * uVar49 + uVar53;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar49;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar64;
    uVar52 = SUB168(auVar18 * auVar40,8);
    uVar58 = (ulonglong)CARRY8(uVar58 * uVar49,uVar53);
    uVar53 = uVar64 * uVar49 + uVar51;
    local_80 = uVar53 + uVar58;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar49;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar55;
    uVar54 = SUB168(auVar19 * auVar41,8);
    uVar58 = (ulonglong)(CARRY8(uVar64 * uVar49,uVar51) || CARRY8(uVar53,uVar58));
    uVar64 = uVar55 * uVar49 + uVar52;
    local_78 = uVar64 + uVar58;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar49;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar56;
    uVar53 = SUB168(auVar20 * auVar42,8);
    uVar58 = (ulonglong)(CARRY8(uVar55 * uVar49,uVar52) || CARRY8(uVar64,uVar58));
    uVar64 = uVar56 * uVar49 + uVar54;
    uVar63 = uVar64 + uVar58;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar49;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar4;
    uVar55 = SUB168(auVar21 * auVar43,8);
    uVar58 = (ulonglong)(CARRY8(uVar56 * uVar49,uVar54) || CARRY8(uVar64,uVar58));
    uVar64 = uVar4 * uVar49 + uVar53;
    uVar52 = uVar64 + uVar58;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar49;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = local_b8;
    uVar56 = SUB168(auVar22 * auVar44,8);
    uVar58 = (ulonglong)(CARRY8(uVar4 * uVar49,uVar53) || CARRY8(uVar64,uVar58));
    uVar64 = local_b8 * uVar49 + uVar55;
    uVar66 = uVar64 + uVar58;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar49;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = local_b0;
    uVar53 = SUB168(auVar23 * auVar45,8);
    uVar58 = (ulonglong)(CARRY8(local_b8 * uVar49,uVar55) || CARRY8(uVar64,uVar58));
    uVar64 = local_b0 * uVar49 + uVar56;
    uVar65 = uVar64 + uVar58;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar49;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = local_a8;
    uVar55 = SUB168(auVar24 * auVar46,8);
    uVar58 = (ulonglong)(CARRY8(local_b0 * uVar49,uVar56) || CARRY8(uVar64,uVar58));
    uVar64 = local_a8 * uVar49 + uVar53;
    uVar59 = uVar64 + uVar58;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar49;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = local_a0;
    uVar54 = SUB168(auVar25 * auVar47,8);
    uVar58 = (ulonglong)(CARRY8(local_a8 * uVar49,uVar53) || CARRY8(uVar64,uVar58));
    uVar64 = local_a0 * uVar49 + uVar55;
    uVar57 = uVar64 + uVar58;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar49;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = local_98;
    uVar61 = local_98 * param_2[local_res8];
    uVar53 = (ulonglong)(CARRY8(local_a0 * uVar49,uVar55) || CARRY8(uVar64,uVar58));
    uVar51 = uVar61 + uVar54;
    uVar62 = uVar51 + uVar53;
    uVar58 = local_138[local_res8];
    lVar1 = local_res8 + 1;
    local_138[iVar60] = uVar50 + local_138[local_res8];
    uVar64 = (ulonglong)CARRY8(uVar50,uVar58);
    uVar58 = local_138[lVar1];
    uVar55 = local_88 + local_138[lVar1];
    local_138[iVar60 + 1] = uVar55 + uVar64;
    uVar64 = (ulonglong)(CARRY8(local_88,uVar58) || CARRY8(uVar55,uVar64));
    uVar58 = local_138[local_res8 + 2];
    uVar55 = local_80 + local_138[local_res8 + 2];
    local_138[iVar60 + 2] = uVar55 + uVar64;
    uVar64 = (ulonglong)(CARRY8(local_80,uVar58) || CARRY8(uVar55,uVar64));
    uVar58 = local_138[local_res8 + 3];
    uVar55 = local_78 + local_138[local_res8 + 3];
    local_138[iVar60 + 3] = uVar55 + uVar64;
    uVar64 = (ulonglong)(CARRY8(local_78,uVar58) || CARRY8(uVar55,uVar64));
    uVar58 = local_138[local_res8 + 4];
    uVar55 = uVar63 + local_138[local_res8 + 4];
    local_138[iVar60 + 4] = uVar55 + uVar64;
    uVar64 = (ulonglong)(CARRY8(uVar63,uVar58) || CARRY8(uVar55,uVar64));
    uVar58 = local_138[local_res8 + 5];
    uVar55 = uVar52 + local_138[local_res8 + 5];
    local_138[iVar60 + 5] = uVar55 + uVar64;
    uVar56 = local_50;
    uVar64 = (ulonglong)(CARRY8(uVar52,uVar58) || CARRY8(uVar55,uVar64));
    uVar58 = local_138[local_res8 + 6];
    uVar49 = uVar66 + local_138[local_res8 + 6];
    local_138[iVar60 + 6] = uVar49 + uVar64;
    uVar55 = local_58;
    uVar49 = (ulonglong)(CARRY8(uVar66,uVar58) || CARRY8(uVar49,uVar64));
    uVar58 = local_138[local_res8 + 7];
    uVar50 = uVar65 + local_138[local_res8 + 7];
    local_138[iVar60 + 7] = uVar50 + uVar49;
    uVar64 = local_60;
    uVar50 = (ulonglong)(CARRY8(uVar65,uVar58) || CARRY8(uVar50,uVar49));
    uVar49 = local_138[local_res8 + 8];
    uVar52 = uVar59 + local_138[local_res8 + 8];
    local_138[iVar60 + 8] = uVar52 + uVar50;
    uVar58 = local_68;
    uVar50 = (ulonglong)(CARRY8(uVar59,uVar49) || CARRY8(uVar52,uVar50));
    uVar49 = local_138[local_res8 + 9];
    uVar52 = uVar57 + local_138[local_res8 + 9];
    local_138[iVar60 + 9] = uVar52 + uVar50;
    uVar50 = (ulonglong)(CARRY8(uVar57,uVar49) || CARRY8(uVar52,uVar50));
    uVar49 = local_138[local_res8 + 10];
    uVar52 = uVar62 + local_138[local_res8 + 10];
    local_138[iVar60 + 10] = uVar52 + uVar50;
    local_138[iVar60 + 0xb] =
         SUB168(auVar26 * auVar48,8) + (ulonglong)(CARRY8(uVar61,uVar54) || CARRY8(uVar51,uVar53)) +
         (ulonglong)(CARRY8(uVar62,uVar49) || CARRY8(uVar52,uVar50));
    iVar60 = iVar60 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 4);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_138[1];
  param_3[2] = local_138[2];
  param_3[3] = local_138[3];
  param_3[4] = local_138[4];
  param_3[5] = local_138[5];
  param_3[6] = local_138[6];
  param_3[7] = local_138[7];
  param_3[8] = local_138[8];
  param_3[9] = local_138[9];
  param_3[10] = local_138[10];
  param_3[0xb] = local_138[0xb];
  param_3[0xc] = local_138[0xc];
  param_3[0xd] = local_138[0xd];
  param_3[0xe] = local_138[0xe];
  return;
}



// FUNCTION 144cfdd50 FUN_144cfdd50 body=226 status=ok
// SIG undefined FUN_144cfdd50(void)

void FUN_144cfdd50(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  bool bVar10;
  
  bVar10 = false;
  puVar9 = (ulonglong *)(param_1 + 8);
  param_2 = param_2 - param_1;
  lVar7 = 2;
  plVar8 = (longlong *)(param_3 + 0x10);
  do {
    uVar2 = puVar9[-1];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + -8);
    uVar3 = *puVar1;
    uVar5 = uVar2 - *puVar1;
    plVar8[-2] = uVar5 - bVar10;
    uVar4 = *puVar9;
    uVar5 = (ulonglong)(uVar2 < uVar3 || uVar5 < bVar10);
    uVar2 = *(ulonglong *)((longlong)puVar9 + param_2);
    uVar6 = uVar4 - *(ulonglong *)((longlong)puVar9 + param_2);
    plVar8[-1] = uVar6 - uVar5;
    uVar3 = puVar9[1];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 8);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    *plVar8 = uVar6 - uVar5;
    uVar4 = puVar9[2];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x10);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar8[1] = uVar6 - uVar5;
    uVar3 = puVar9[3];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x18);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    plVar8[2] = uVar6 - uVar5;
    uVar4 = puVar9[4];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x20);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar8[3] = uVar6 - uVar5;
    uVar3 = puVar9[5];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x28);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    plVar8[4] = uVar6 - uVar5;
    uVar4 = puVar9[6];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x30);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar8[5] = uVar6 - uVar5;
    uVar3 = puVar9[7];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x38);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    plVar8[6] = uVar6 - uVar5;
    uVar4 = puVar9[8];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x40);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar8[7] = uVar6 - uVar5;
    uVar3 = puVar9[9];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x48);
    uVar5 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    plVar8[8] = uVar6 - uVar5;
    uVar4 = puVar9[10];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x50);
    uVar5 = (ulonglong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    plVar8[9] = uVar6 - uVar5;
    uVar3 = puVar9[0xb];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x58);
    uVar4 = (ulonglong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar5 = uVar3 - *puVar1;
    plVar8[10] = uVar5 - uVar4;
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x60);
    uVar2 = (ulonglong)(uVar3 < uVar2 || uVar5 < uVar4);
    uVar3 = puVar9[0xc] - *puVar1;
    bVar10 = puVar9[0xc] < *puVar1 || uVar3 < uVar2;
    puVar9 = puVar9 + 0xe;
    plVar8[0xb] = uVar3 - uVar2;
    lVar7 = lVar7 + -1;
    plVar8 = plVar8 + 0xe;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 144cfde40 FUN_144cfde40 body=232 status=ok
// SIG undefined FUN_144cfde40(void)

void FUN_144cfde40(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  *param_3 = uVar1 - *param_2;
  uVar3 = param_1[1];
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  param_3[1] = uVar5 - uVar4;
  uVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  param_3[2] = uVar5 - uVar4;
  uVar3 = param_1[3];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  param_3[3] = uVar5 - uVar4;
  uVar2 = param_1[4];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  param_3[4] = uVar5 - uVar4;
  uVar3 = param_1[5];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  param_3[5] = uVar5 - uVar4;
  uVar2 = param_1[6];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  param_3[6] = uVar5 - uVar4;
  uVar3 = param_1[7];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  param_3[7] = uVar5 - uVar4;
  uVar2 = param_1[8];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  param_3[8] = uVar5 - uVar4;
  uVar3 = param_1[9];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  param_3[9] = uVar5 - uVar4;
  uVar2 = param_1[10];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  param_3[10] = uVar5 - uVar4;
  uVar3 = param_1[0xb];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  param_3[0xb] = uVar5 - uVar4;
  uVar2 = param_1[0xc];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar5 = uVar2 - param_2[0xc];
  param_3[0xc] = uVar5 - uVar4;
  uVar3 = param_1[0xd];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xd];
  uVar5 = uVar3 - param_2[0xd];
  param_3[0xd] = uVar5 - uVar4;
  uVar2 = param_1[0xe];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xe];
  uVar5 = uVar2 - param_2[0xe];
  param_3[0xe] = uVar5 - uVar4;
  uVar3 = param_1[0xf];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xf];
  uVar5 = uVar3 - param_2[0xf];
  param_3[0xf] = uVar5 - uVar4;
  uVar2 = param_1[0x10];
  uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x10];
  uVar4 = uVar2 - param_2[0x10];
  param_3[0x10] = uVar4 - uVar3;
  param_3[0x11] = (param_1[0x11] - param_2[0x11]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  return;
}



// FUNCTION 144cfdf30 FUN_144cfdf30 body=267 status=ok
// SIG undefined FUN_144cfdf30(void)

longlong * FUN_144cfdf30(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  
  FUN_144cc74c0(param_2 + 0x38,param_3 + 0x38,&local_78);
  FUN_144cc74c0(param_2,param_3,&local_e8);
  *param_1 = local_e8 + local_78;
  param_1[1] = local_e0 + local_70 + (ulonglong)CARRY8(local_e8,local_78);
  uVar1 = (ulonglong)
          (CARRY8(local_e0,local_70) ||
          CARRY8(local_e0 + local_70,(ulonglong)CARRY8(local_e8,local_78)));
  param_1[2] = local_d8 + local_68 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_d8,local_68) || CARRY8(local_d8 + local_68,uVar1));
  param_1[3] = local_d0 + local_60 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_d0,local_60) || CARRY8(local_d0 + local_60,uVar1));
  param_1[4] = local_c8 + local_58 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_c8,local_58) || CARRY8(local_c8 + local_58,uVar1));
  param_1[5] = local_c0 + local_50 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_c0,local_50) || CARRY8(local_c0 + local_50,uVar1));
  param_1[6] = local_b8 + local_48 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_b8,local_48) || CARRY8(local_b8 + local_48,uVar1));
  param_1[7] = local_b0 + local_40 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_b0,local_40) || CARRY8(local_b0 + local_40,uVar1));
  param_1[8] = local_a8 + local_38 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_a8,local_38) || CARRY8(local_a8 + local_38,uVar1));
  param_1[9] = local_a0 + local_30 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_a0,local_30) || CARRY8(local_a0 + local_30,uVar1));
  param_1[10] = local_98 + local_28 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_98,local_28) || CARRY8(local_98 + local_28,uVar1));
  param_1[0xb] = local_90 + local_20 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_90,local_20) || CARRY8(local_90 + local_20,uVar1));
  param_1[0xc] = local_88 + local_18 + uVar1;
  param_1[0xd] = local_80 + local_10 +
                 (ulonglong)(CARRY8(local_88,local_18) || CARRY8(local_88 + local_18,uVar1));
  return param_1;
}



// FUNCTION 144cfe040 FUN_144cfe040 body=210 status=ok
// SIG undefined FUN_144cfe040(void)

undefined8 FUN_144cfe040(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 local_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  
  FUN_144d000f0(param_2,param_3,local_98);
  if (*(longlong *)(param_3 + 0x18) < 0) {
    bVar3 = local_78 < *param_2;
    local_78 = local_78 - *param_2;
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_70 < param_2[1];
    uVar2 = local_70 - param_2[1];
    local_70 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_68 < param_2[2];
    uVar2 = local_68 - param_2[2];
    local_68 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_60 < param_2[3];
    uVar2 = local_60 - param_2[3];
    local_60 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_58 < param_2[4];
    uVar2 = local_58 - param_2[4];
    local_58 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_50 < param_2[5];
    uVar2 = local_50 - param_2[5];
    local_50 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_48 < param_2[6];
    uVar2 = local_48 - param_2[6];
    local_48 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_40 < param_2[7];
    uVar2 = local_40 - param_2[7];
    local_40 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_38 < param_2[8];
    uVar2 = local_38 - param_2[8];
    local_38 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_30 < param_2[9];
    uVar2 = local_30 - param_2[9];
    local_30 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_28 < param_2[10];
    uVar2 = local_28 - param_2[10];
    local_28 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_20 < param_2[0xb];
    uVar2 = local_20 - param_2[0xb];
    local_20 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_18 < param_2[0xc];
    uVar2 = local_18 - param_2[0xc];
    local_18 = uVar2 - uVar1;
    local_10 = (local_10 - param_2[0xd]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_144d00690(local_98,param_1);
  return param_1;
}



// FUNCTION 144cfe120 FUN_144cfe120 body=232 status=ok
// SIG undefined FUN_144cfe120(void)

void FUN_144cfe120(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  *param_3 = uVar1 + *param_2;
  uVar3 = param_1[1];
  uVar4 = (ulonglong)CARRY8(uVar1,uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 + param_2[1];
  param_3[1] = uVar5 + uVar4;
  uVar2 = param_1[2];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[2];
  uVar5 = uVar2 + param_2[2];
  param_3[2] = uVar5 + uVar4;
  uVar3 = param_1[3];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[3];
  uVar5 = uVar3 + param_2[3];
  param_3[3] = uVar5 + uVar4;
  uVar2 = param_1[4];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[4];
  uVar5 = uVar2 + param_2[4];
  param_3[4] = uVar5 + uVar4;
  uVar3 = param_1[5];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[5];
  uVar5 = uVar3 + param_2[5];
  param_3[5] = uVar5 + uVar4;
  uVar2 = param_1[6];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[6];
  uVar5 = uVar2 + param_2[6];
  param_3[6] = uVar5 + uVar4;
  uVar3 = param_1[7];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[7];
  uVar5 = uVar3 + param_2[7];
  param_3[7] = uVar5 + uVar4;
  uVar2 = param_1[8];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[8];
  uVar5 = uVar2 + param_2[8];
  param_3[8] = uVar5 + uVar4;
  uVar3 = param_1[9];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[9];
  uVar5 = uVar3 + param_2[9];
  param_3[9] = uVar5 + uVar4;
  uVar2 = param_1[10];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[10];
  uVar5 = uVar2 + param_2[10];
  param_3[10] = uVar5 + uVar4;
  uVar3 = param_1[0xb];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xb];
  uVar5 = uVar3 + param_2[0xb];
  param_3[0xb] = uVar5 + uVar4;
  uVar2 = param_1[0xc];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xc];
  uVar5 = uVar2 + param_2[0xc];
  param_3[0xc] = uVar5 + uVar4;
  uVar3 = param_1[0xd];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xd];
  uVar5 = uVar3 + param_2[0xd];
  param_3[0xd] = uVar5 + uVar4;
  uVar2 = param_1[0xe];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xe];
  uVar5 = uVar2 + param_2[0xe];
  param_3[0xe] = uVar5 + uVar4;
  uVar3 = param_1[0xf];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xf];
  uVar5 = uVar3 + param_2[0xf];
  param_3[0xf] = uVar5 + uVar4;
  uVar2 = param_1[0x10];
  uVar3 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0x10];
  uVar4 = uVar2 + param_2[0x10];
  param_3[0x10] = uVar4 + uVar3;
  param_3[0x11] =
       param_1[0x11] + param_2[0x11] + (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar4,uVar3));
  return;
}



// FUNCTION 144cfe210 FUN_144cfe210 body=518 status=ok
// SIG undefined FUN_144cfe210(void)

void FUN_144cfe210(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_d8 [9];
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar27 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar28 = SUB168(auVar11 * auVar19,8);
  local_d8[1] = uVar4 * uVar2 + uVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar29 = SUB168(auVar12 * auVar20,8);
  uVar27 = (ulonglong)CARRY8(uVar4 * uVar2,uVar27);
  uVar30 = uVar5 * uVar2 + uVar28;
  local_d8[2] = uVar30 + uVar27;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar27 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar28) || CARRY8(uVar30,uVar27));
  uVar30 = uVar6 * uVar2 + uVar29;
  local_d8[3] = uVar30 + uVar27;
  local_d8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar29) || CARRY8(uVar30,uVar27));
  local_res8 = 1;
  iVar26 = 1;
  do {
    uVar27 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar27;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar30 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar27;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar29 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar27 + uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar31 = SUB168(auVar16 * auVar24,8);
    uVar30 = (ulonglong)CARRY8(uVar4 * uVar27,uVar30);
    uVar28 = uVar5 * uVar27 + uVar29;
    uVar33 = uVar28 + uVar30;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar28 = (ulonglong)(CARRY8(uVar5 * uVar27,uVar29) || CARRY8(uVar28,uVar30));
    uVar8 = uVar6 * uVar27 + uVar31;
    uVar32 = uVar8 + uVar28;
    lVar1 = local_res8 + 1;
    uVar30 = local_d8[local_res8];
    local_d8[iVar26] = uVar3 * uVar27 + local_d8[local_res8];
    uVar29 = (ulonglong)CARRY8(uVar3 * uVar27,uVar30);
    uVar30 = local_d8[lVar1];
    uVar9 = uVar7 + local_d8[lVar1];
    local_d8[iVar26 + 1] = uVar9 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar7,uVar30) || CARRY8(uVar9,uVar29));
    uVar30 = local_d8[local_res8 + 2];
    uVar7 = uVar33 + local_d8[local_res8 + 2];
    local_d8[iVar26 + 2] = uVar7 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar7,uVar29));
    uVar30 = local_d8[local_res8 + 3];
    uVar7 = uVar32 + local_d8[local_res8 + 3];
    local_d8[iVar26 + 3] = uVar7 + uVar29;
    local_d8[iVar26 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar27,uVar31) || CARRY8(uVar8,uVar28)) +
         (ulonglong)(CARRY8(uVar32,uVar30) || CARRY8(uVar7,uVar29));
    local_res8 = lVar1;
    iVar26 = iVar26 + 1;
  } while (lVar1 < 0xe);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_d8[1];
  param_3[2] = local_d8[2];
  param_3[3] = local_d8[3];
  param_3[4] = local_d8[4];
  param_3[5] = local_d8[5];
  param_3[6] = local_d8[6];
  param_3[7] = local_d8[7];
  param_3[8] = local_d8[8];
  param_3[9] = lStack_90;
  param_3[10] = local_88;
  param_3[0xb] = lStack_80;
  param_3[0xc] = local_78;
  param_3[0xd] = lStack_70;
  param_3[0xe] = local_68;
  param_3[0xf] = lStack_60;
  param_3[0x10] = local_58;
  param_3[0x11] = lStack_50;
  return;
}



// FUNCTION 144cfe420 FUN_144cfe420 body=225 status=ok
// SIG undefined FUN_144cfe420(void)

void FUN_144cfe420(longlong param_1,ulonglong param_2)

{
  ulonglong local_res10;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [144];
  
  local_res10 = param_2;
  FUN_144d06760(param_1,param_2 >> 0x20 & 0xff,&local_1c8,1);
  if (*(longlong *)(param_1 + 0x88) < 0) {
    local_138 = local_138 - (char)(param_2 >> 0x20);
  }
  local_128 = local_1c8;
  uStack_120 = uStack_1c0;
  local_108 = local_1a8;
  uStack_100 = uStack_1a0;
  local_118 = local_1b8;
  uStack_110 = uStack_1b0;
  local_e8 = local_188;
  uStack_e0 = uStack_180;
  local_f8 = local_198;
  uStack_f0 = uStack_190;
  local_c8 = local_168;
  uStack_c0 = uStack_160;
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  local_a8 = local_148;
  uStack_a4 = uStack_144;
  uStack_a0 = uStack_140;
  uStack_9c = uStack_13c;
  local_b8 = local_158;
  uStack_b4 = uStack_154;
  uStack_b0 = uStack_150;
  uStack_ac = uStack_14c;
  FUN_144d02ce0(local_98,param_1 + 0x90,&local_res10);
  FUN_144cfde40(&local_128,local_98,&local_1c8);
  FUN_144cf7f60(&local_1c8);
  return;
}



// FUNCTION 144cfe510 FUN_144cfe510 body=596 status=ok
// SIG undefined FUN_144cfe510(void)

longlong * FUN_144cfe510(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  
  plVar12 = &local_118;
  uVar2 = param_3[10];
  uVar13 = (longlong)uVar2 >> 0x3f;
  uVar3 = param_3[1];
  local_118 = (*param_3 ^ uVar13) - uVar13;
  uVar4 = param_3[9];
  uVar6 = (ulonglong)((*param_3 ^ uVar13) < uVar13);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_110 = uVar7 - uVar6;
  uVar5 = param_3[2];
  param_1[0xb] = local_118;
  param_1[0xc] = lStack_110;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_108 = uVar7 - uVar6;
  uVar3 = param_3[3];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_100 = uVar7 - uVar6;
  uVar5 = param_3[4];
  param_1[0xd] = local_108;
  param_1[0xe] = lStack_100;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_f8 = uVar7 - uVar6;
  uVar3 = param_3[5];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_f0 = uVar7 - uVar6;
  uVar5 = param_3[6];
  param_1[0xf] = local_f8;
  param_1[0x10] = lStack_f0;
  uVar6 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar5 ^ uVar13) - uVar13;
  local_e8 = uVar7 - uVar6;
  uVar3 = param_3[7];
  uVar6 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar7 = (uVar3 ^ uVar13) - uVar13;
  lStack_e0 = uVar7 - uVar6;
  uVar5 = param_3[8];
  param_1[0x11] = local_e8;
  param_1[0x12] = lStack_e0;
  uVar3 = (ulonglong)((uVar3 ^ uVar13) < uVar13 || uVar7 < uVar6);
  uVar6 = (uVar5 ^ uVar13) - uVar13;
  local_d8 = uVar6 - uVar3;
  uVar3 = (ulonglong)((uVar5 ^ uVar13) < uVar13 || uVar6 < uVar3);
  uVar5 = (uVar4 ^ uVar13) - uVar13;
  lStack_d0 = uVar5 - uVar3;
  param_1[0x13] = local_d8;
  param_1[0x14] = lStack_d0;
  local_c8 = ((uVar2 ^ uVar13) - uVar13) - (ulonglong)((uVar4 ^ uVar13) < uVar13 || uVar5 < uVar3);
  param_1[0x15] = local_c8;
  if ((longlong)uVar2 < 0) {
    local_118 = -*param_2;
    uVar2 = -param_2[1];
    lStack_110 = uVar2 - (*param_2 != 0);
    uVar2 = (ulonglong)(param_2[1] != 0 || uVar2 < (*param_2 != 0));
    uVar3 = -param_2[2];
    local_108 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[2] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[3];
    lStack_100 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[3] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[4];
    local_f8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[4] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[5];
    lStack_f0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[5] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[6];
    local_e8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[6] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[7];
    lStack_e0 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[7] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[8];
    local_d8 = uVar3 - uVar2;
    uVar2 = (ulonglong)(param_2[8] != 0 || uVar3 < uVar2);
    uVar3 = -param_2[9];
    lStack_d0 = uVar3 - uVar2;
    local_c8 = -(ulonglong)(param_2[9] != 0 || uVar3 < uVar2) - param_2[10];
  }
  else {
    plVar12 = &local_c0;
    local_c0 = *param_2;
    lStack_b8 = param_2[1];
    local_b0 = param_2[2];
    lStack_a8 = param_2[3];
    local_a0 = param_2[4];
    lStack_98 = param_2[5];
    local_90 = param_2[6];
    lStack_88 = param_2[7];
    local_80 = param_2[8];
    lStack_78 = param_2[9];
    local_70 = param_2[10];
  }
  lVar1 = plVar12[1];
  lVar8 = plVar12[2];
  lVar9 = plVar12[3];
  *param_1 = *plVar12;
  param_1[1] = lVar1;
  lVar1 = plVar12[4];
  lVar10 = plVar12[5];
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  lVar8 = plVar12[6];
  lVar9 = plVar12[7];
  param_1[4] = lVar1;
  param_1[5] = lVar10;
  lVar10 = plVar12[8];
  lVar11 = plVar12[9];
  param_1[6] = lVar8;
  param_1[7] = lVar9;
  lVar1 = plVar12[10];
  param_1[8] = lVar10;
  param_1[9] = lVar11;
  param_1[10] = lVar1;
  return param_1;
}



// FUNCTION 144cfe770 FUN_144cfe770 body=668 status=ok
// SIG undefined FUN_144cfe770(void)

longlong * FUN_144cfe770(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  FUN_144cf7a30(param_2 + 0x20,param_3,&local_1f8);
  uVar3 = local_190;
  uVar4 = local_1a0;
  uVar5 = local_198;
  if (*(longlong *)(param_3 + 0x50) < 0) {
    uVar4 = local_1a0 - *(ulonglong *)(param_2 + 0x20);
    uVar3 = (ulonglong)(local_1a0 < *(ulonglong *)(param_2 + 0x20));
    uVar1 = local_198 - *(ulonglong *)(param_2 + 0x28);
    uVar5 = uVar1 - uVar3;
    uVar1 = (ulonglong)(local_198 < *(ulonglong *)(param_2 + 0x28) || uVar1 < uVar3);
    uVar2 = local_190 - *(ulonglong *)(param_2 + 0x30);
    uVar3 = uVar2 - uVar1;
    local_188 = (local_188 - *(longlong *)(param_2 + 0x38)) -
                (ulonglong)(local_190 < *(ulonglong *)(param_2 + 0x30) || uVar2 < uVar1);
  }
  FUN_144cfd820(param_3 + 0x58,param_2,&local_f8);
  bVar6 = CARRY8(local_f8,local_1f8);
  local_178 = local_f8 + local_1f8;
  local_1f8 = *(ulonglong *)(param_3 + 0x58);
  lStack_170 = uStack_f0 + uStack_1f0 + (ulonglong)bVar6;
  uVar1 = (ulonglong)
          (CARRY8(uStack_f0,uStack_1f0) || CARRY8(uStack_f0 + uStack_1f0,(ulonglong)bVar6));
  local_168 = local_e8 + local_1e8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_e8,local_1e8) || CARRY8(local_e8 + local_1e8,uVar1));
  lStack_160 = uStack_e0 + uStack_1e0 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_e0,uStack_1e0) || CARRY8(uStack_e0 + uStack_1e0,uVar1));
  local_158 = local_d8 + local_1d8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_d8,local_1d8) || CARRY8(local_d8 + local_1d8,uVar1));
  lStack_150 = uStack_d0 + uStack_1d0 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_d0,uStack_1d0) || CARRY8(uStack_d0 + uStack_1d0,uVar1));
  local_148 = local_c8 + local_1c8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_c8,local_1c8) || CARRY8(local_c8 + local_1c8,uVar1));
  lStack_140 = uStack_c0 + uStack_1c0 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_c0,uStack_1c0) || CARRY8(uStack_c0 + uStack_1c0,uVar1));
  local_138 = local_b8 + local_1b8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_b8,local_1b8) || CARRY8(local_b8 + local_1b8,uVar1));
  lStack_130 = uStack_b0 + uStack_1b0 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_b0,uStack_1b0) || CARRY8(uStack_b0 + uStack_1b0,uVar1));
  local_128 = local_a8 + local_1a8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_a8,local_1a8) || CARRY8(local_a8 + local_1a8,uVar1));
  lStack_120 = uStack_a0 + uVar4 + uVar1;
  local_1d8 = *(undefined8 *)(param_3 + 0x78);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x80);
  uVar4 = (ulonglong)(CARRY8(uStack_a0,uVar4) || CARRY8(uStack_a0 + uVar4,uVar1));
  local_118 = local_98 + uVar5 + uVar4;
  local_1c8 = *(undefined8 *)(param_3 + 0x88);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x90);
  uVar4 = (ulonglong)(CARRY8(local_98,uVar5) || CARRY8(local_98 + uVar5,uVar4));
  lStack_110 = uStack_90 + uVar3 + uVar4;
  local_1b8 = *(undefined8 *)(param_3 + 0x98);
  uStack_1b0 = *(undefined8 *)(param_3 + 0xa0);
  local_1a8 = *(undefined8 *)(param_3 + 0xa8);
  local_78 = *(undefined4 *)(param_2 + 0x20);
  uStack_74 = *(undefined4 *)(param_2 + 0x24);
  uStack_70 = *(undefined4 *)(param_2 + 0x28);
  uStack_6c = *(undefined4 *)(param_2 + 0x2c);
  local_108 = ((longlong)uStack_90 >> 0x3f) + ((longlong)uVar3 >> 0x3f) +
              (ulonglong)(CARRY8(uStack_90,uVar3) || CARRY8(uStack_90 + uVar3,uVar4));
  local_68 = *(undefined4 *)(param_2 + 0x30);
  uStack_64 = *(undefined4 *)(param_2 + 0x34);
  uStack_60 = *(undefined4 *)(param_2 + 0x38);
  uStack_5c = *(undefined4 *)(param_2 + 0x3c);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x60);
  local_1e8 = *(undefined8 *)(param_3 + 0x68);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x70);
  FUN_144cf7a30(&local_78,&local_1f8,&local_f8);
  *param_1 = local_178;
  param_1[1] = lStack_170;
  param_1[2] = local_168;
  param_1[3] = lStack_160;
  param_1[4] = local_158;
  param_1[5] = lStack_150;
  param_1[0xf] = local_f8;
  param_1[0x10] = uStack_f0;
  param_1[6] = local_148;
  param_1[7] = lStack_140;
  param_1[0x11] = local_e8;
  param_1[0x12] = uStack_e0;
  param_1[0x13] = local_d8;
  param_1[0x14] = uStack_d0;
  param_1[8] = local_138;
  param_1[9] = lStack_130;
  param_1[0x15] = local_c8;
  param_1[0x16] = uStack_c0;
  param_1[10] = local_128;
  param_1[0xb] = lStack_120;
  param_1[0x17] = local_b8;
  param_1[0x18] = uStack_b0;
  param_1[0x19] = local_a8;
  param_1[0x1a] = uStack_a0;
  param_1[0xc] = local_118;
  param_1[0xd] = lStack_110;
  param_1[0x1b] = local_98;
  param_1[0x1c] = uStack_90;
  param_1[0xe] = local_108;
  return param_1;
}



// FUNCTION 144cfea10 FUN_144cfea10 body=416 status=ok
// SIG undefined FUN_144cfea10(void)

float * FUN_144cfea10(float *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int local_res8 [2];
  
  lVar4 = FUN_144d05850(param_2,local_res8);
  fVar6 = 0.0;
  if ((float)lVar4 != 0.0) {
    iVar9 = 0xd;
    lVar5 = 0xd;
    do {
      uVar8 = *(ulonglong *)(param_2 + 0x78 + lVar5 * 8);
      if (uVar8 != 0) {
        uVar7 = (uint)uVar8 | (uint)(uVar8 >> 1) & 0x7fffffff;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        uVar7 = (uint)(uVar8 >> 0x20);
        uVar7 = uVar7 | uVar7 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar7 >> 0x10 | uVar7);
        iVar1 = 0x20 - iVar3;
        if (0x1f < 0x20 - iVar3) {
          iVar1 = 0x40 - iVar2;
        }
        iVar2 = iVar9 * 0x40 - iVar1;
        uVar8 = *(longlong *)(param_2 + 0x78 + (longlong)iVar9 * 8) << ((byte)iVar1 & 0x3f);
        if (iVar1 != 0) {
          uVar8 = uVar8 | *(ulonglong *)(param_2 + 0x70 + (longlong)iVar9 * 8) >>
                          (0x40 - (byte)iVar1 & 0x3f);
        }
        goto LAB_144cfeb34;
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
    uVar8 = *(ulonglong *)(param_2 + 0x78);
    iVar2 = 0;
LAB_144cfeb34:
    fVar6 = (float)(local_res8[0] * 0x800000 + iVar2 * -0x800000 +
                   (int)((float)lVar4 / (float)uVar8));
  }
  *param_1 = fVar6;
  param_1[1] = ABS(fVar6) * 1.1920929e-07;
  return param_1;
}



// FUNCTION 144cfebb0 FUN_144cfebb0 body=358 status=ok
// SIG undefined FUN_144cfebb0(void)

ulonglong FUN_144cfebb0(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar6 = 6;
  uVar7 = (longlong)param_1[6] >> 0x3f;
  lVar3 = 6;
  while (param_1[lVar3] == uVar7) {
    iVar6 = iVar6 + -1;
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if ((longlong)(uVar7 ^ *param_1) < 0) {
        *param_2 = 1;
        uVar7 = *param_1 >> 1 | uVar7 & 0x8000000000000000;
      }
      else {
        *param_2 = 0;
        uVar7 = *param_1;
      }
      return uVar7;
    }
  }
  uVar5 = param_1[lVar3] ^ uVar7;
  uVar4 = (uint)uVar5 | (uint)(uVar5 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar1 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  iVar8 = 0x20 - iVar2;
  if (0x1f < 0x20 - iVar2) {
    iVar8 = 0x40 - iVar1;
  }
  iVar8 = iVar8 + -1;
  *param_2 = iVar6 * 0x40 - iVar8;
  if (iVar8 < 0) {
    return uVar7 & 0x8000000000000000 | param_1[iVar6] >> 1;
  }
  uVar7 = param_1[iVar6] << ((byte)iVar8 & 0x3f);
  if (iVar8 == 0) {
    return uVar7;
  }
  return uVar7 | param_1[(longlong)iVar6 + -1] >> (0x40 - (byte)iVar8 & 0x3f);
}



// FUNCTION 144cfed20 FUN_144cfed20 body=365 status=ok
// SIG undefined FUN_144cfed20(void)

undefined8 FUN_144cfed20(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  uVar6 = (longlong)param_1[0x11] >> 0x3f;
  lVar5 = (uVar1 ^ uVar6) - uVar6;
  *param_2 = lVar5;
  uVar2 = param_1[1];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[1] = uVar4 - uVar3;
  uVar1 = param_1[2];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[2] = uVar4 - uVar3;
  uVar2 = param_1[3];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[3] = uVar4 - uVar3;
  uVar1 = param_1[4];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[4] = uVar4 - uVar3;
  uVar2 = param_1[5];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[5] = uVar4 - uVar3;
  uVar1 = param_1[6];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[6] = uVar4 - uVar3;
  uVar2 = param_1[7];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[7] = uVar4 - uVar3;
  uVar1 = param_1[8];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[8] = uVar4 - uVar3;
  uVar2 = param_1[9];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[9] = uVar4 - uVar3;
  uVar1 = param_1[10];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[10] = uVar4 - uVar3;
  uVar2 = param_1[0xb];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xb] = uVar4 - uVar3;
  uVar1 = param_1[0xc];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0xc] = uVar4 - uVar3;
  uVar2 = param_1[0xd];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xd] = uVar4 - uVar3;
  uVar1 = param_1[0xe];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0xe] = uVar4 - uVar3;
  uVar2 = param_1[0xf];
  uVar1 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar3 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xf] = uVar3 - uVar1;
  uVar1 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar3 < uVar1);
  uVar2 = (param_1[0x10] ^ uVar6) - uVar6;
  bVar7 = (param_1[0x10] ^ uVar6) < uVar6 || uVar2 < uVar1;
  param_2[0x10] = uVar2 - uVar1;
  param_2[0x11] = ((param_1[0x11] ^ uVar6) - uVar6) - (ulonglong)bVar7;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar7 + -1);
}



// FUNCTION 144cfee90 FUN_144cfee90 body=306 status=ok
// SIG undefined FUN_144cfee90(void)

void FUN_144cfee90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x200,&local_res8);
  lVar2 = *param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    lVar5 = lVar1;
    do {
      if (lVar5 != 0) {
        FUN_144cdd290(lVar5);
        *(undefined4 *)(lVar5 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
        *(undefined4 *)(lVar5 + 500) = *(undefined4 *)(lVar2 + 500);
      }
      lVar5 = lVar5 + 0x200;
      lVar2 = lVar2 + 0x200;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 0x200 + 0x200;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x200;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x200 >> 9);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 9);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144cfefd0 FUN_144cfefd0 body=773 status=ok
// SIG undefined FUN_144cfefd0(void)

void FUN_144cfefd0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong local_res8;
  ulonglong local_e8 [12];
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar40 = param_1[1];
  uVar4 = param_1[3];
  uVar45 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar3;
  uVar33 = SUB168(auVar5 * auVar19,8);
  local_68 = uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar40;
  uVar34 = SUB168(auVar6 * auVar20,8);
  local_60 = uVar40;
  local_58 = uVar45;
  local_e8[1] = uVar40 * uVar2 + uVar33;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar45;
  uVar35 = SUB168(auVar7 * auVar21,8);
  uVar33 = (ulonglong)CARRY8(uVar40 * uVar2,uVar33);
  uVar37 = uVar45 * uVar2 + uVar34;
  local_e8[2] = uVar37 + uVar33;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  uVar36 = SUB168(auVar8 * auVar22,8);
  local_88 = param_1[4];
  uVar33 = (ulonglong)(CARRY8(uVar45 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = uVar4 * uVar2 + uVar35;
  local_e8[3] = uVar37 + uVar33;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_88;
  uVar34 = SUB168(auVar9 * auVar23,8);
  local_80 = param_1[5];
  uVar33 = (ulonglong)(CARRY8(uVar4 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  uVar37 = local_88 * uVar2 + uVar36;
  local_e8[4] = uVar37 + uVar33;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_80;
  uVar35 = SUB168(auVar10 * auVar24,8);
  local_78 = param_1[6];
  uVar33 = (ulonglong)(CARRY8(local_88 * uVar2,uVar36) || CARRY8(uVar37,uVar33));
  uVar37 = local_80 * uVar2 + uVar34;
  local_e8[5] = uVar37 + uVar33;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_78;
  local_res8 = 1;
  uVar33 = (ulonglong)(CARRY8(local_80 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = local_78 * uVar2 + uVar35;
  local_e8[6] = uVar37 + uVar33;
  local_e8[7] = SUB168(auVar11 * auVar25,8) +
                (ulonglong)(CARRY8(local_78 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  iVar42 = 1;
  do {
    uVar33 = param_2[local_res8];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar33;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_68;
    uVar37 = SUB168(auVar12 * auVar26,8);
    uVar36 = local_68 * uVar33;
    local_70 = uVar36;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar35 = SUB168(auVar13 * auVar27,8);
    uVar34 = uVar40 * uVar33 + uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    uVar38 = SUB168(auVar14 * auVar28,8);
    uVar40 = (ulonglong)CARRY8(uVar40 * uVar33,uVar37);
    uVar37 = uVar45 * uVar33 + uVar35;
    uVar47 = uVar37 + uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar4;
    uVar39 = SUB168(auVar15 * auVar29,8);
    uVar40 = (ulonglong)(CARRY8(uVar45 * uVar33,uVar35) || CARRY8(uVar37,uVar40));
    uVar45 = uVar4 * uVar33 + uVar38;
    uVar46 = uVar45 + uVar40;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar33;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_88;
    uVar37 = SUB168(auVar16 * auVar30,8);
    uVar40 = (ulonglong)(CARRY8(uVar4 * uVar33,uVar38) || CARRY8(uVar45,uVar40));
    uVar45 = local_88 * uVar33 + uVar39;
    uVar41 = uVar45 + uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = local_80;
    uVar38 = SUB168(auVar17 * auVar31,8);
    uVar40 = (ulonglong)(CARRY8(local_88 * uVar33,uVar39) || CARRY8(uVar45,uVar40));
    uVar45 = local_80 * uVar33 + uVar37;
    uVar39 = uVar45 + uVar40;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = local_78;
    uVar43 = local_78 * uVar33;
    uVar37 = (ulonglong)(CARRY8(local_80 * uVar33,uVar37) || CARRY8(uVar45,uVar40));
    uVar35 = uVar43 + uVar38;
    uVar44 = uVar35 + uVar37;
    uVar40 = local_e8[local_res8];
    lVar1 = local_res8 + 1;
    local_e8[iVar42] = uVar36 + local_e8[local_res8];
    uVar45 = (ulonglong)CARRY8(uVar36,uVar40);
    uVar40 = local_e8[lVar1];
    uVar33 = uVar34 + local_e8[lVar1];
    local_e8[iVar42 + 1] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar34,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_e8[local_res8 + 2];
    uVar33 = uVar47 + local_e8[local_res8 + 2];
    local_e8[iVar42 + 2] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar47,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_e8[local_res8 + 3];
    uVar33 = uVar46 + local_e8[local_res8 + 3];
    local_e8[iVar42 + 3] = uVar33 + uVar45;
    uVar34 = (ulonglong)(CARRY8(uVar46,uVar40) || CARRY8(uVar33,uVar45));
    uVar33 = local_e8[local_res8 + 4];
    uVar36 = uVar41 + local_e8[local_res8 + 4];
    local_e8[iVar42 + 4] = uVar36 + uVar34;
    uVar45 = local_58;
    uVar40 = local_60;
    uVar34 = (ulonglong)(CARRY8(uVar41,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_e8[local_res8 + 5];
    uVar36 = uVar39 + local_e8[local_res8 + 5];
    local_e8[iVar42 + 5] = uVar36 + uVar34;
    uVar34 = (ulonglong)(CARRY8(uVar39,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_e8[local_res8 + 6];
    uVar36 = uVar44 + local_e8[local_res8 + 6];
    local_e8[iVar42 + 6] = uVar36 + uVar34;
    local_e8[iVar42 + 7] =
         SUB168(auVar18 * auVar32,8) + (ulonglong)(CARRY8(uVar43,uVar38) || CARRY8(uVar35,uVar37)) +
         (ulonglong)(CARRY8(uVar44,uVar33) || CARRY8(uVar36,uVar34));
    local_res8 = lVar1;
    iVar42 = iVar42 + 1;
  } while (lVar1 < 4);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_e8[1];
  param_3[2] = local_e8[2];
  param_3[3] = local_e8[3];
  param_3[4] = local_e8[4];
  param_3[5] = local_e8[5];
  param_3[6] = local_e8[6];
  param_3[7] = local_e8[7];
  param_3[8] = local_e8[8];
  param_3[9] = local_e8[9];
  param_3[10] = local_e8[10];
  return;
}



// FUNCTION 144cff2e0 FUN_144cff2e0 body=128 status=ok
// SIG undefined FUN_144cff2e0(void)

void FUN_144cff2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 <= param_1 + 0xd) && (param_1 <= param_2 + 0xd)) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    lVar5 = 0xe;
    do {
      *param_2 = *(undefined8 *)(lVar6 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[4];
  uVar4 = param_1[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = param_1[8];
  uVar4 = param_1[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  uVar1 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar4;
  return;
}



// FUNCTION 144cff360 FUN_144cff360 body=453 status=ok
// SIG undefined FUN_144cff360(void)

void FUN_144cff360(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_1;
  uVar29 = SUB168(auVar1 * auVar15,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_1[1];
  uVar30 = SUB168(auVar2 * auVar16,8);
  uVar35 = param_1[1] * param_2;
  param_3[1] = uVar35 + uVar29;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_1[2];
  uVar31 = SUB168(auVar3 * auVar17,8);
  uVar33 = param_1[2] * param_2;
  uVar29 = (ulonglong)CARRY8(uVar35,uVar29);
  uVar35 = uVar33 + uVar30;
  param_3[2] = uVar35 + uVar29;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_1[3];
  uVar32 = SUB168(auVar4 * auVar18,8);
  uVar34 = param_1[3] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar35,uVar29));
  uVar35 = uVar34 + uVar31;
  param_3[3] = uVar35 + uVar29;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_1[4];
  uVar30 = SUB168(auVar5 * auVar19,8);
  uVar33 = param_1[4] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar34,uVar31) || CARRY8(uVar35,uVar29));
  uVar35 = uVar33 + uVar32;
  param_3[4] = uVar35 + uVar29;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1[5];
  uVar31 = SUB168(auVar6 * auVar20,8);
  uVar34 = param_1[5] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar32) || CARRY8(uVar35,uVar29));
  uVar35 = uVar34 + uVar30;
  param_3[5] = uVar35 + uVar29;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_1[6];
  uVar32 = SUB168(auVar7 * auVar21,8);
  uVar33 = param_1[6] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar34,uVar30) || CARRY8(uVar35,uVar29));
  uVar35 = uVar33 + uVar31;
  param_3[6] = uVar35 + uVar29;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_1[7];
  uVar30 = SUB168(auVar8 * auVar22,8);
  uVar34 = param_1[7] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar31) || CARRY8(uVar35,uVar29));
  uVar35 = uVar34 + uVar32;
  param_3[7] = uVar35 + uVar29;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_1[8];
  uVar31 = SUB168(auVar9 * auVar23,8);
  uVar33 = param_1[8] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar34,uVar32) || CARRY8(uVar35,uVar29));
  uVar35 = uVar33 + uVar30;
  param_3[8] = uVar35 + uVar29;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_1[9];
  uVar32 = SUB168(auVar10 * auVar24,8);
  uVar34 = param_1[9] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar35,uVar29));
  uVar35 = uVar34 + uVar31;
  param_3[9] = uVar35 + uVar29;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_1[10];
  uVar30 = SUB168(auVar11 * auVar25,8);
  uVar33 = param_1[10] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar34,uVar31) || CARRY8(uVar35,uVar29));
  uVar35 = uVar33 + uVar32;
  param_3[10] = uVar35 + uVar29;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_1[0xb];
  uVar31 = SUB168(auVar12 * auVar26,8);
  uVar34 = param_1[0xb] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar32) || CARRY8(uVar35,uVar29));
  uVar35 = uVar34 + uVar30;
  param_3[0xb] = uVar35 + uVar29;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_1[0xc];
  uVar32 = SUB168(auVar13 * auVar27,8);
  uVar33 = param_1[0xc] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar34,uVar30) || CARRY8(uVar35,uVar29));
  uVar35 = uVar33 + uVar31;
  param_3[0xc] = uVar35 + uVar29;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_1[0xd];
  param_2 = param_1[0xd] * param_2;
  uVar29 = (ulonglong)(CARRY8(uVar33,uVar31) || CARRY8(uVar35,uVar29));
  uVar35 = param_2 + uVar32;
  param_3[0xd] = uVar35 + uVar29;
  param_3[0xe] = (ulonglong)(CARRY8(param_2,uVar32) || CARRY8(uVar35,uVar29)) +
                 SUB168(auVar14 * auVar28,8);
  return;
}



// FUNCTION 144cff530 FUN_144cff530 body=478 status=ok
// SIG undefined FUN_144cff530(void)

void FUN_144cff530(ulonglong *param_1,byte param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  
  uVar29 = CONCAT71(0,param_2);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar29;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  uVar23 = SUB168(auVar4 * auVar8,8);
  *param_3 = (ulonglong)param_2 * *param_1;
  uVar27 = (uint)param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar29;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1[1];
  uVar24 = SUB168(auVar5 * auVar9,8);
  uVar1 = param_1[1];
  param_3[1] = uVar27 * uVar1 + uVar23;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1[2];
  uVar25 = SUB168(ZEXT416(uVar27) * auVar10,8);
  uVar2 = param_1[2];
  uVar23 = (ulonglong)CARRY8(uVar27 * uVar1,uVar23);
  uVar3 = uVar27 * uVar2 + uVar24;
  param_3[2] = uVar3 + uVar23;
  uVar28 = (uint)param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar29;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1[3];
  uVar26 = SUB168(auVar6 * auVar11,8);
  uVar1 = param_1[3];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar2,uVar24) || CARRY8(uVar3,uVar23));
  uVar3 = uVar28 * uVar1 + uVar25;
  param_3[3] = uVar3 + uVar23;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[4];
  uVar24 = SUB168(ZEXT416(uVar28) * auVar12,8);
  uVar2 = param_1[4];
  uVar23 = (ulonglong)(CARRY8(uVar28 * uVar1,uVar25) || CARRY8(uVar3,uVar23));
  uVar3 = uVar28 * uVar2 + uVar26;
  param_3[4] = uVar3 + uVar23;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1[5];
  uVar25 = SUB168(ZEXT416(uVar28) * auVar13,8);
  uVar1 = param_1[5];
  uVar23 = (ulonglong)(CARRY8(uVar28 * uVar2,uVar26) || CARRY8(uVar3,uVar23));
  uVar3 = uVar28 * uVar1 + uVar24;
  param_3[5] = uVar3 + uVar23;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_1[6];
  uVar26 = SUB168(ZEXT416(uVar28) * auVar14,8);
  uVar2 = param_1[6];
  uVar23 = (ulonglong)(CARRY8(uVar28 * uVar1,uVar24) || CARRY8(uVar3,uVar23));
  uVar3 = uVar28 * uVar2 + uVar25;
  param_3[6] = uVar3 + uVar23;
  uVar27 = (uint)param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar29;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1[7];
  uVar24 = SUB168(auVar7 * auVar15,8);
  uVar1 = param_1[7];
  uVar23 = (ulonglong)(CARRY8(uVar28 * uVar2,uVar25) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar1 + uVar26;
  param_3[7] = uVar3 + uVar23;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_1[8];
  uVar25 = SUB168(ZEXT416(uVar27) * auVar16,8);
  uVar2 = param_1[8];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar1,uVar26) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar2 + uVar24;
  param_3[8] = uVar3 + uVar23;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_1[9];
  uVar26 = SUB168(ZEXT416(uVar27) * auVar17,8);
  uVar1 = param_1[9];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar2,uVar24) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar1 + uVar25;
  param_3[9] = uVar3 + uVar23;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_1[10];
  uVar24 = SUB168(ZEXT416(uVar27) * auVar18,8);
  uVar2 = param_1[10];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar1,uVar25) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar2 + uVar26;
  param_3[10] = uVar3 + uVar23;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_1[0xb];
  uVar25 = SUB168(ZEXT416(uVar27) * auVar19,8);
  uVar1 = param_1[0xb];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar2,uVar26) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar1 + uVar24;
  param_3[0xb] = uVar3 + uVar23;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1[0xc];
  uVar26 = SUB168(ZEXT416(uVar27) * auVar20,8);
  uVar2 = param_1[0xc];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar1,uVar24) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar2 + uVar25;
  param_3[0xc] = uVar3 + uVar23;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_1[0xd];
  uVar24 = SUB168(ZEXT416(uVar27) * auVar21,8);
  uVar1 = param_1[0xd];
  uVar23 = (ulonglong)(CARRY8(uVar27 * uVar2,uVar25) || CARRY8(uVar3,uVar23));
  uVar3 = uVar27 * uVar1 + uVar26;
  param_3[0xd] = uVar3 + uVar23;
  uVar2 = param_1[0xe];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_1[0xe];
  uVar1 = (ulonglong)(CARRY8(uVar27 * uVar1,uVar26) || CARRY8(uVar3,uVar23));
  uVar23 = uVar29 * uVar2 + uVar24;
  param_3[0xe] = uVar23 + uVar1;
  param_3[0xf] = (ulonglong)(CARRY8(uVar29 * uVar2,uVar24) || CARRY8(uVar23,uVar1)) +
                 SUB168(ZEXT416(uVar27) * auVar22,8);
  return;
}



// FUNCTION 144cff710 FUN_144cff710 body=1534 status=ok
// SIG undefined FUN_144cff710(void)

void FUN_144cff710(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  int iVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  ulonglong uVar89;
  ulonglong uVar90;
  ulonglong uVar91;
  ulonglong uVar92;
  longlong local_res20;
  ulonglong local_138 [18];
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  local_138[0] = uVar3 * uVar2;
  uVar5 = param_1[2];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar3;
  uVar71 = SUB168(auVar11 * auVar39,8);
  uVar6 = param_1[3];
  uVar7 = param_1[4];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar4;
  uVar72 = SUB168(auVar12 * auVar40,8);
  uVar8 = param_1[6];
  uVar9 = param_1[5];
  local_138[1] = uVar4 * uVar2 + uVar71;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar5;
  uVar73 = SUB168(auVar13 * auVar41,8);
  uVar71 = (ulonglong)CARRY8(uVar4 * uVar2,uVar71);
  uVar10 = uVar5 * uVar2 + uVar72;
  local_138[2] = uVar10 + uVar71;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar6;
  uVar74 = SUB168(auVar14 * auVar42,8);
  uVar71 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar72) || CARRY8(uVar10,uVar71));
  uVar10 = uVar6 * uVar2 + uVar73;
  local_138[3] = uVar10 + uVar71;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar7;
  uVar75 = SUB168(auVar15 * auVar43,8);
  uVar71 = (ulonglong)(CARRY8(uVar6 * uVar2,uVar73) || CARRY8(uVar10,uVar71));
  uVar10 = uVar7 * uVar2 + uVar74;
  local_138[4] = uVar10 + uVar71;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar9;
  uVar76 = SUB168(auVar16 * auVar44,8);
  uVar10 = (ulonglong)(CARRY8(uVar7 * uVar2,uVar74) || CARRY8(uVar10,uVar71));
  uVar72 = uVar9 * uVar2 + uVar75;
  local_138[5] = uVar72 + uVar10;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar8;
  uVar77 = SUB168(auVar17 * auVar45,8);
  uVar71 = param_1[7];
  uVar72 = (ulonglong)(CARRY8(uVar9 * uVar2,uVar75) || CARRY8(uVar72,uVar10));
  uVar73 = uVar8 * uVar2 + uVar76;
  local_138[6] = uVar73 + uVar72;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar71;
  uVar78 = SUB168(auVar18 * auVar46,8);
  uVar10 = param_1[8];
  uVar73 = (ulonglong)(CARRY8(uVar8 * uVar2,uVar76) || CARRY8(uVar73,uVar72));
  uVar74 = uVar71 * uVar2 + uVar77;
  local_138[7] = uVar74 + uVar73;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar2;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar10;
  uVar79 = SUB168(auVar19 * auVar47,8);
  uVar72 = param_1[9];
  uVar74 = (ulonglong)(CARRY8(uVar71 * uVar2,uVar77) || CARRY8(uVar74,uVar73));
  uVar75 = uVar10 * uVar2 + uVar78;
  local_138[8] = uVar75 + uVar74;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar2;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar72;
  uVar80 = SUB168(auVar20 * auVar48,8);
  uVar73 = param_1[10];
  uVar75 = (ulonglong)(CARRY8(uVar10 * uVar2,uVar78) || CARRY8(uVar75,uVar74));
  uVar76 = uVar72 * uVar2 + uVar79;
  local_138[9] = uVar76 + uVar75;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar2;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar73;
  uVar81 = SUB168(auVar21 * auVar49,8);
  uVar74 = param_1[0xb];
  uVar76 = (ulonglong)(CARRY8(uVar72 * uVar2,uVar79) || CARRY8(uVar76,uVar75));
  uVar77 = uVar73 * uVar2 + uVar80;
  local_138[10] = uVar77 + uVar76;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar2;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar74;
  uVar79 = SUB168(auVar22 * auVar50,8);
  uVar75 = param_1[0xc];
  uVar77 = (ulonglong)(CARRY8(uVar73 * uVar2,uVar80) || CARRY8(uVar77,uVar76));
  uVar78 = uVar74 * uVar2 + uVar81;
  local_138[0xb] = uVar78 + uVar77;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar2;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar75;
  uVar80 = SUB168(auVar23 * auVar51,8);
  uVar76 = param_1[0xd];
  uVar77 = (ulonglong)(CARRY8(uVar74 * uVar2,uVar81) || CARRY8(uVar78,uVar77));
  uVar78 = uVar75 * uVar2 + uVar79;
  local_138[0xc] = uVar78 + uVar77;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar76;
  uVar77 = (ulonglong)(CARRY8(uVar75 * uVar2,uVar79) || CARRY8(uVar78,uVar77));
  uVar78 = uVar76 * uVar2 + uVar80;
  local_138[0xd] = uVar78 + uVar77;
  local_res20 = 1;
  local_138[0xe] =
       SUB168(auVar24 * auVar52,8) +
       (ulonglong)(CARRY8(uVar76 * uVar2,uVar80) || CARRY8(uVar78,uVar77));
  iVar86 = 1;
  do {
    uVar2 = param_2[local_res20];
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar2;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar3;
    uVar77 = SUB168(auVar25 * auVar53,8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar2;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar4;
    uVar79 = SUB168(auVar26 * auVar54,8);
    uVar80 = uVar4 * uVar2 + uVar77;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar2;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar5;
    uVar81 = SUB168(auVar27 * auVar55,8);
    uVar77 = (ulonglong)CARRY8(uVar4 * uVar2,uVar77);
    uVar78 = uVar5 * uVar2 + uVar79;
    uVar67 = uVar78 + uVar77;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar2;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar6;
    uVar82 = SUB168(auVar28 * auVar56,8);
    uVar77 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar79) || CARRY8(uVar78,uVar77));
    uVar78 = uVar6 * uVar2 + uVar81;
    uVar68 = uVar78 + uVar77;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar2;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar7;
    uVar79 = SUB168(auVar29 * auVar57,8);
    uVar77 = (ulonglong)(CARRY8(uVar6 * uVar2,uVar81) || CARRY8(uVar78,uVar77));
    uVar78 = uVar7 * uVar2 + uVar82;
    uVar69 = uVar78 + uVar77;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar2;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar9;
    uVar81 = SUB168(auVar30 * auVar58,8);
    uVar77 = (ulonglong)(CARRY8(uVar7 * uVar2,uVar82) || CARRY8(uVar78,uVar77));
    uVar78 = uVar9 * uVar2 + uVar79;
    uVar70 = uVar78 + uVar77;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar2;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar8;
    uVar82 = SUB168(auVar31 * auVar59,8);
    uVar77 = (ulonglong)(CARRY8(uVar9 * uVar2,uVar79) || CARRY8(uVar78,uVar77));
    uVar78 = uVar8 * uVar2 + uVar81;
    uVar90 = uVar78 + uVar77;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar2;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar71;
    uVar79 = SUB168(auVar32 * auVar60,8);
    uVar77 = (ulonglong)(CARRY8(uVar8 * uVar2,uVar81) || CARRY8(uVar78,uVar77));
    uVar78 = uVar71 * uVar2 + uVar82;
    uVar89 = uVar78 + uVar77;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar2;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar10;
    uVar81 = SUB168(auVar33 * auVar61,8);
    uVar77 = (ulonglong)(CARRY8(uVar71 * uVar2,uVar82) || CARRY8(uVar78,uVar77));
    uVar78 = uVar10 * uVar2 + uVar79;
    uVar92 = uVar78 + uVar77;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar2;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar72;
    uVar82 = SUB168(auVar34 * auVar62,8);
    uVar77 = (ulonglong)(CARRY8(uVar10 * uVar2,uVar79) || CARRY8(uVar78,uVar77));
    uVar78 = uVar72 * uVar2 + uVar81;
    uVar91 = uVar78 + uVar77;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar2;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar73;
    uVar79 = SUB168(auVar35 * auVar63,8);
    uVar77 = (ulonglong)(CARRY8(uVar72 * uVar2,uVar81) || CARRY8(uVar78,uVar77));
    uVar78 = uVar73 * uVar2 + uVar82;
    uVar84 = uVar78 + uVar77;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar2;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar74;
    uVar81 = SUB168(auVar36 * auVar64,8);
    uVar77 = (ulonglong)(CARRY8(uVar73 * uVar2,uVar82) || CARRY8(uVar78,uVar77));
    uVar78 = uVar74 * uVar2 + uVar79;
    uVar85 = uVar78 + uVar77;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar2;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar75;
    uVar83 = SUB168(auVar37 * auVar65,8);
    uVar78 = (ulonglong)(CARRY8(uVar74 * uVar2,uVar79) || CARRY8(uVar78,uVar77));
    uVar79 = uVar75 * uVar2 + uVar81;
    uVar88 = uVar79 + uVar78;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar2;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar76;
    uVar77 = param_2[local_res20];
    uVar79 = (ulonglong)(CARRY8(uVar75 * uVar2,uVar81) || CARRY8(uVar79,uVar78));
    uVar81 = uVar76 * uVar77 + uVar83;
    uVar87 = uVar81 + uVar79;
    lVar1 = local_res20 + 1;
    uVar78 = local_138[local_res20];
    local_138[iVar86] = uVar3 * uVar2 + local_138[local_res20];
    uVar78 = (ulonglong)CARRY8(uVar3 * uVar2,uVar78);
    uVar2 = local_138[lVar1];
    uVar82 = uVar80 + local_138[lVar1];
    local_138[iVar86 + 1] = uVar82 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar80,uVar2) || CARRY8(uVar82,uVar78));
    uVar2 = local_138[local_res20 + 2];
    uVar80 = uVar67 + local_138[local_res20 + 2];
    local_138[iVar86 + 2] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar67,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 3];
    uVar80 = uVar68 + local_138[local_res20 + 3];
    local_138[iVar86 + 3] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar68,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 4];
    uVar80 = uVar69 + local_138[local_res20 + 4];
    local_138[iVar86 + 4] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar69,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 5];
    uVar80 = uVar70 + local_138[local_res20 + 5];
    local_138[iVar86 + 5] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar70,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 6];
    uVar80 = uVar90 + local_138[local_res20 + 6];
    local_138[iVar86 + 6] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar90,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 7];
    uVar80 = uVar89 + local_138[local_res20 + 7];
    local_138[iVar86 + 7] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar89,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 8];
    uVar80 = uVar92 + local_138[local_res20 + 8];
    local_138[iVar86 + 8] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar92,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 9];
    uVar80 = uVar91 + local_138[local_res20 + 9];
    local_138[iVar86 + 9] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar91,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 10];
    uVar80 = uVar84 + local_138[local_res20 + 10];
    local_138[iVar86 + 10] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar84,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 0xb];
    uVar80 = uVar85 + local_138[local_res20 + 0xb];
    local_138[iVar86 + 0xb] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar85,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 0xc];
    uVar80 = uVar88 + local_138[local_res20 + 0xc];
    local_138[iVar86 + 0xc] = uVar80 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar88,uVar2) || CARRY8(uVar80,uVar78));
    uVar2 = local_138[local_res20 + 0xd];
    uVar80 = uVar87 + local_138[local_res20 + 0xd];
    local_138[iVar86 + 0xd] = uVar80 + uVar78;
    local_138[iVar86 + 0xe] =
         SUB168(auVar38 * auVar66,8) +
         (ulonglong)(CARRY8(uVar76 * uVar77,uVar83) || CARRY8(uVar81,uVar79)) +
         (ulonglong)(CARRY8(uVar87,uVar2) || CARRY8(uVar80,uVar78));
    iVar86 = iVar86 + 1;
    local_res20 = lVar1;
  } while (lVar1 < 0xf);
  *param_3 = local_138[0];
  param_3[1] = local_138[1];
  param_3[2] = local_138[2];
  param_3[3] = local_138[3];
  param_3[4] = local_138[4];
  param_3[5] = local_138[5];
  param_3[6] = local_138[6];
  param_3[7] = local_138[7];
  param_3[8] = local_138[8];
  param_3[9] = local_138[9];
  param_3[10] = local_138[10];
  param_3[0xb] = local_138[0xb];
  param_3[0xc] = local_138[0xc];
  param_3[0xd] = local_138[0xd];
  param_3[0xe] = local_138[0xe];
  param_3[0xf] = local_138[0xf];
  param_3[0x10] = local_138[0x10];
  param_3[0x11] = local_138[0x11];
  param_3[0x12] = local_a8;
  param_3[0x13] = uStack_a0;
  param_3[0x14] = local_98;
  param_3[0x15] = uStack_90;
  param_3[0x16] = local_88;
  param_3[0x17] = uStack_80;
  param_3[0x18] = local_78;
  param_3[0x19] = uStack_70;
  param_3[0x1a] = local_68;
  param_3[0x1b] = uStack_60;
  param_3[0x1c] = local_58;
  return;
}



// FUNCTION 144cffd10 FUN_144cffd10 body=246 status=ok
// SIG undefined FUN_144cffd10(void)

void FUN_144cffd10(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar2 = *param_2;
  *(ulonglong *)(param_1 + 0x78) = uVar1 - *param_2;
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  *(ulonglong *)(param_1 + 0x80) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x88);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  *(ulonglong *)(param_1 + 0x88) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x90);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  *(ulonglong *)(param_1 + 0x90) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x98);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  *(ulonglong *)(param_1 + 0x98) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  *(ulonglong *)(param_1 + 0xa0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xa8);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  *(ulonglong *)(param_1 + 0xa8) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xb0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  *(ulonglong *)(param_1 + 0xb0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xb8);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  *(ulonglong *)(param_1 + 0xb8) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xc0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  *(ulonglong *)(param_1 + 0xc0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 200);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  *(ulonglong *)(param_1 + 200) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xd0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  *(ulonglong *)(param_1 + 0xd0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xd8);
  uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar4 = uVar2 - param_2[0xc];
  *(ulonglong *)(param_1 + 0xd8) = uVar4 - uVar3;
  *(ulonglong *)(param_1 + 0xe0) =
       (*(longlong *)(param_1 + 0xe0) - param_2[0xd]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  return;
}



// FUNCTION 144cffe10 FUN_144cffe10 body=197 status=ok
// SIG undefined FUN_144cffe10(void)

void FUN_144cffe10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 <= param_1 + 0x1b) && (param_1 <= param_2 + 0x1b)) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    lVar5 = 0x1c;
    do {
      *param_2 = *(undefined8 *)(lVar6 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[4];
  uVar4 = param_1[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = param_1[8];
  uVar4 = param_1[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  uVar1 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar4;
  uVar1 = param_1[0xf];
  param_2[0xe] = param_1[0xe];
  param_2[0xf] = uVar1;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  param_2[0x10] = param_1[0x10];
  param_2[0x11] = uVar1;
  uVar1 = param_1[0x14];
  uVar4 = param_1[0x15];
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar3;
  uVar2 = param_1[0x16];
  uVar3 = param_1[0x17];
  param_2[0x14] = uVar1;
  param_2[0x15] = uVar4;
  uVar1 = param_1[0x18];
  uVar4 = param_1[0x19];
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar3;
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  param_2[0x18] = uVar1;
  param_2[0x19] = uVar4;
  param_2[0x1a] = uVar2;
  param_2[0x1b] = uVar3;
  return;
}



// FUNCTION 144cffee0 FUN_144cffee0 body=525 status=ok
// SIG undefined FUN_144cffee0(void)

void FUN_144cffee0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_e8 [9];
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar27 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar28 = SUB168(auVar11 * auVar19,8);
  local_e8[1] = uVar4 * uVar2 + uVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar29 = SUB168(auVar12 * auVar20,8);
  uVar27 = (ulonglong)CARRY8(uVar4 * uVar2,uVar27);
  uVar30 = uVar5 * uVar2 + uVar28;
  local_e8[2] = uVar30 + uVar27;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar27 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar28) || CARRY8(uVar30,uVar27));
  uVar30 = uVar6 * uVar2 + uVar29;
  local_e8[3] = uVar30 + uVar27;
  local_e8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar29) || CARRY8(uVar30,uVar27));
  local_res8 = 1;
  iVar26 = 1;
  do {
    uVar27 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar27;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar30 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar27;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar29 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar27 + uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar27;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar31 = SUB168(auVar16 * auVar24,8);
    uVar30 = (ulonglong)CARRY8(uVar4 * uVar27,uVar30);
    uVar28 = uVar5 * uVar27 + uVar29;
    uVar33 = uVar28 + uVar30;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar27;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar28 = (ulonglong)(CARRY8(uVar5 * uVar27,uVar29) || CARRY8(uVar28,uVar30));
    uVar8 = uVar6 * uVar27 + uVar31;
    uVar32 = uVar8 + uVar28;
    lVar1 = local_res8 + 1;
    uVar30 = local_e8[local_res8];
    local_e8[iVar26] = uVar3 * uVar27 + local_e8[local_res8];
    uVar29 = (ulonglong)CARRY8(uVar3 * uVar27,uVar30);
    uVar30 = local_e8[lVar1];
    uVar9 = uVar7 + local_e8[lVar1];
    local_e8[iVar26 + 1] = uVar9 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar7,uVar30) || CARRY8(uVar9,uVar29));
    uVar30 = local_e8[local_res8 + 2];
    uVar7 = uVar33 + local_e8[local_res8 + 2];
    local_e8[iVar26 + 2] = uVar7 + uVar29;
    uVar29 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar7,uVar29));
    uVar30 = local_e8[local_res8 + 3];
    uVar7 = uVar32 + local_e8[local_res8 + 3];
    local_e8[iVar26 + 3] = uVar7 + uVar29;
    local_e8[iVar26 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar27,uVar31) || CARRY8(uVar8,uVar28)) +
         (ulonglong)(CARRY8(uVar32,uVar30) || CARRY8(uVar7,uVar29));
    local_res8 = lVar1;
    iVar26 = iVar26 + 1;
  } while (lVar1 < 0xf);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_e8[1];
  param_3[2] = local_e8[2];
  param_3[3] = local_e8[3];
  param_3[4] = local_e8[4];
  param_3[5] = local_e8[5];
  param_3[6] = local_e8[6];
  param_3[7] = local_e8[7];
  param_3[8] = local_e8[8];
  param_3[9] = lStack_a0;
  param_3[10] = local_98;
  param_3[0xb] = lStack_90;
  param_3[0xc] = local_88;
  param_3[0xd] = lStack_80;
  param_3[0xe] = local_78;
  param_3[0xf] = lStack_70;
  param_3[0x10] = local_68;
  param_3[0x11] = lStack_60;
  param_3[0x12] = local_58;
  return;
}



// FUNCTION 144d000f0 FUN_144d000f0 body=1438 status=ok
// SIG undefined FUN_144d000f0(void)

void FUN_144d000f0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  int iVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  longlong local_res20;
  ulonglong local_178 [18];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar2 = *param_2;
  uVar68 = *param_1;
  uVar67 = param_1[1];
  local_178[0] = uVar68 * uVar2;
  uVar75 = param_1[2];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar68;
  uVar59 = SUB168(auVar3 * auVar31,8);
  uVar64 = param_1[3];
  uVar65 = param_1[4];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar67;
  uVar60 = SUB168(auVar4 * auVar32,8);
  local_e8 = param_1[6];
  uVar66 = param_1[5];
  local_178[1] = uVar67 * uVar2 + uVar59;
  local_80 = uVar68;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar75;
  uVar61 = SUB168(auVar5 * auVar33,8);
  local_78 = uVar67;
  local_70 = uVar75;
  local_68 = uVar64;
  uVar59 = (ulonglong)CARRY8(uVar67 * uVar2,uVar59);
  uVar63 = uVar75 * uVar2 + uVar60;
  local_60 = uVar65;
  local_178[2] = uVar63 + uVar59;
  local_58 = uVar66;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar64;
  uVar62 = SUB168(auVar6 * auVar34,8);
  uVar59 = (ulonglong)(CARRY8(uVar75 * uVar2,uVar60) || CARRY8(uVar63,uVar59));
  uVar63 = uVar64 * uVar2 + uVar61;
  local_178[3] = uVar63 + uVar59;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar65;
  uVar60 = SUB168(auVar7 * auVar35,8);
  uVar59 = (ulonglong)(CARRY8(uVar64 * uVar2,uVar61) || CARRY8(uVar63,uVar59));
  uVar63 = uVar65 * uVar2 + uVar62;
  local_178[4] = uVar63 + uVar59;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar66;
  uVar61 = SUB168(auVar8 * auVar36,8);
  uVar59 = (ulonglong)(CARRY8(uVar65 * uVar2,uVar62) || CARRY8(uVar63,uVar59));
  uVar63 = uVar66 * uVar2 + uVar60;
  local_178[5] = uVar63 + uVar59;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = local_e8;
  uVar62 = SUB168(auVar9 * auVar37,8);
  local_e0 = param_1[7];
  uVar59 = (ulonglong)(CARRY8(uVar66 * uVar2,uVar60) || CARRY8(uVar63,uVar59));
  uVar63 = local_e8 * uVar2 + uVar61;
  local_178[6] = uVar63 + uVar59;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = local_e0;
  uVar60 = SUB168(auVar10 * auVar38,8);
  local_d8 = param_1[8];
  uVar59 = (ulonglong)(CARRY8(local_e8 * uVar2,uVar61) || CARRY8(uVar63,uVar59));
  uVar63 = local_e0 * uVar2 + uVar62;
  local_178[7] = uVar63 + uVar59;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = local_d8;
  uVar61 = SUB168(auVar11 * auVar39,8);
  local_d0 = param_1[9];
  uVar59 = (ulonglong)(CARRY8(local_e0 * uVar2,uVar62) || CARRY8(uVar63,uVar59));
  uVar63 = local_d8 * uVar2 + uVar60;
  local_178[8] = uVar63 + uVar59;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = local_d0;
  uVar62 = SUB168(auVar12 * auVar40,8);
  local_c8 = param_1[10];
  uVar59 = (ulonglong)(CARRY8(local_d8 * uVar2,uVar60) || CARRY8(uVar63,uVar59));
  uVar63 = local_d0 * uVar2 + uVar61;
  local_178[9] = uVar63 + uVar59;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = local_c8;
  uVar60 = SUB168(auVar13 * auVar41,8);
  local_c0 = param_1[0xb];
  uVar59 = (ulonglong)(CARRY8(local_d0 * uVar2,uVar61) || CARRY8(uVar63,uVar59));
  uVar63 = local_c8 * uVar2 + uVar62;
  local_178[10] = uVar63 + uVar59;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = local_c0;
  uVar61 = SUB168(auVar14 * auVar42,8);
  local_b8 = param_1[0xc];
  uVar59 = (ulonglong)(CARRY8(local_c8 * uVar2,uVar62) || CARRY8(uVar63,uVar59));
  uVar63 = local_c0 * uVar2 + uVar60;
  local_178[0xb] = uVar63 + uVar59;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = local_b8;
  uVar62 = SUB168(auVar15 * auVar43,8);
  local_b0 = param_1[0xd];
  uVar59 = (ulonglong)(CARRY8(local_c0 * uVar2,uVar60) || CARRY8(uVar63,uVar59));
  uVar63 = local_b8 * uVar2 + uVar61;
  local_178[0xc] = uVar63 + uVar59;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = local_b0;
  uVar59 = (ulonglong)(CARRY8(local_b8 * uVar2,uVar61) || CARRY8(uVar63,uVar59));
  uVar63 = local_b0 * uVar2 + uVar62;
  local_178[0xd] = uVar63 + uVar59;
  local_res20 = 1;
  local_178[0xe] =
       SUB168(auVar16 * auVar44,8) +
       (ulonglong)(CARRY8(local_b0 * uVar2,uVar62) || CARRY8(uVar63,uVar59));
  iVar70 = 1;
  do {
    uVar2 = param_2[local_res20];
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar2;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar68;
    uVar59 = SUB168(auVar17 * auVar45,8);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar2;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar67;
    uVar63 = SUB168(auVar18 * auVar46,8);
    local_a8 = uVar67 * uVar2 + uVar59;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar2;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar75;
    uVar60 = SUB168(auVar19 * auVar47,8);
    uVar67 = (ulonglong)CARRY8(uVar67 * uVar2,uVar59);
    uVar59 = uVar75 * uVar2 + uVar63;
    local_a0 = uVar59 + uVar67;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar2;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar64;
    uVar61 = SUB168(auVar20 * auVar48,8);
    uVar67 = (ulonglong)(CARRY8(uVar75 * uVar2,uVar63) || CARRY8(uVar59,uVar67));
    uVar75 = uVar64 * uVar2 + uVar60;
    local_98 = uVar75 + uVar67;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar2;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar65;
    uVar59 = SUB168(auVar21 * auVar49,8);
    uVar67 = (ulonglong)(CARRY8(uVar64 * uVar2,uVar60) || CARRY8(uVar75,uVar67));
    uVar75 = uVar65 * uVar2 + uVar61;
    local_90 = uVar75 + uVar67;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar2;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar66;
    uVar64 = SUB168(auVar22 * auVar50,8);
    uVar67 = (ulonglong)(CARRY8(uVar65 * uVar2,uVar61) || CARRY8(uVar75,uVar67));
    uVar75 = uVar66 * uVar2 + uVar59;
    local_88 = uVar75 + uVar67;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar2;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = local_e8;
    uVar65 = SUB168(auVar23 * auVar51,8);
    uVar67 = (ulonglong)(CARRY8(uVar66 * uVar2,uVar59) || CARRY8(uVar75,uVar67));
    uVar75 = local_e8 * uVar2 + uVar64;
    uVar74 = uVar75 + uVar67;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar2;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = local_e0;
    uVar66 = SUB168(auVar24 * auVar52,8);
    uVar67 = (ulonglong)(CARRY8(local_e8 * uVar2,uVar64) || CARRY8(uVar75,uVar67));
    uVar75 = local_e0 * uVar2 + uVar65;
    uVar63 = uVar75 + uVar67;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar2;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = local_d8;
    uVar64 = SUB168(auVar25 * auVar53,8);
    uVar67 = (ulonglong)(CARRY8(local_e0 * uVar2,uVar65) || CARRY8(uVar75,uVar67));
    uVar75 = local_d8 * uVar2 + uVar66;
    uVar77 = uVar75 + uVar67;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar2;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = local_d0;
    uVar65 = SUB168(auVar26 * auVar54,8);
    uVar67 = (ulonglong)(CARRY8(local_d8 * uVar2,uVar66) || CARRY8(uVar75,uVar67));
    uVar75 = local_d0 * uVar2 + uVar64;
    uVar76 = uVar75 + uVar67;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar2;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = local_c8;
    uVar66 = SUB168(auVar27 * auVar55,8);
    uVar67 = (ulonglong)(CARRY8(local_d0 * uVar2,uVar64) || CARRY8(uVar75,uVar67));
    uVar75 = local_c8 * uVar2 + uVar65;
    uVar61 = uVar75 + uVar67;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar2;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = local_c0;
    uVar64 = SUB168(auVar28 * auVar56,8);
    uVar67 = (ulonglong)(CARRY8(local_c8 * uVar2,uVar65) || CARRY8(uVar75,uVar67));
    uVar75 = local_c0 * uVar2 + uVar66;
    uVar69 = uVar75 + uVar67;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar2;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = local_b8;
    uVar62 = SUB168(auVar29 * auVar57,8);
    uVar67 = (ulonglong)(CARRY8(local_c0 * uVar2,uVar66) || CARRY8(uVar75,uVar67));
    uVar75 = local_b8 * uVar2 + uVar64;
    uVar73 = uVar75 + uVar67;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar2;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = local_b0;
    uVar71 = local_b0 * param_2[local_res20];
    uVar59 = (ulonglong)(CARRY8(local_b8 * uVar2,uVar64) || CARRY8(uVar75,uVar67));
    uVar60 = uVar71 + uVar62;
    uVar72 = uVar60 + uVar59;
    lVar1 = local_res20 + 1;
    uVar67 = local_178[local_res20];
    local_178[iVar70] = uVar68 * uVar2 + local_178[local_res20];
    uVar68 = (ulonglong)CARRY8(uVar68 * uVar2,uVar67);
    uVar2 = local_178[lVar1];
    uVar67 = local_a8 + local_178[lVar1];
    local_178[iVar70 + 1] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(local_a8,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 2];
    uVar67 = local_a0 + local_178[local_res20 + 2];
    local_178[iVar70 + 2] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(local_a0,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 3];
    uVar67 = local_98 + local_178[local_res20 + 3];
    local_178[iVar70 + 3] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(local_98,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 4];
    uVar67 = local_90 + local_178[local_res20 + 4];
    local_178[iVar70 + 4] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(local_90,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 5];
    uVar67 = local_88 + local_178[local_res20 + 5];
    local_178[iVar70 + 5] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(local_88,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 6];
    uVar67 = uVar74 + local_178[local_res20 + 6];
    local_178[iVar70 + 6] = uVar67 + uVar68;
    uVar68 = (ulonglong)(CARRY8(uVar74,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 7];
    uVar67 = uVar63 + local_178[local_res20 + 7];
    local_178[iVar70 + 7] = uVar67 + uVar68;
    uVar66 = local_58;
    uVar65 = local_60;
    uVar68 = (ulonglong)(CARRY8(uVar63,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 8];
    uVar67 = uVar77 + local_178[local_res20 + 8];
    local_178[iVar70 + 8] = uVar67 + uVar68;
    uVar64 = local_68;
    uVar68 = (ulonglong)(CARRY8(uVar77,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 9];
    uVar67 = uVar76 + local_178[local_res20 + 9];
    local_178[iVar70 + 9] = uVar67 + uVar68;
    uVar75 = local_70;
    uVar68 = (ulonglong)(CARRY8(uVar76,uVar2) || CARRY8(uVar67,uVar68));
    uVar2 = local_178[local_res20 + 10];
    uVar63 = uVar61 + local_178[local_res20 + 10];
    local_178[iVar70 + 10] = uVar63 + uVar68;
    uVar67 = local_78;
    uVar63 = (ulonglong)(CARRY8(uVar61,uVar2) || CARRY8(uVar63,uVar68));
    uVar2 = local_178[local_res20 + 0xb];
    uVar61 = uVar69 + local_178[local_res20 + 0xb];
    local_178[iVar70 + 0xb] = uVar61 + uVar63;
    uVar68 = local_80;
    uVar63 = (ulonglong)(CARRY8(uVar69,uVar2) || CARRY8(uVar61,uVar63));
    uVar2 = local_178[local_res20 + 0xc];
    uVar61 = uVar73 + local_178[local_res20 + 0xc];
    local_178[iVar70 + 0xc] = uVar61 + uVar63;
    uVar63 = (ulonglong)(CARRY8(uVar73,uVar2) || CARRY8(uVar61,uVar63));
    uVar2 = local_178[local_res20 + 0xd];
    uVar61 = uVar72 + local_178[local_res20 + 0xd];
    local_178[iVar70 + 0xd] = uVar61 + uVar63;
    local_178[iVar70 + 0xe] =
         SUB168(auVar30 * auVar58,8) + (ulonglong)(CARRY8(uVar71,uVar62) || CARRY8(uVar60,uVar59)) +
         (ulonglong)(CARRY8(uVar72,uVar2) || CARRY8(uVar61,uVar63));
    iVar70 = iVar70 + 1;
    local_res20 = lVar1;
  } while (lVar1 < 4);
  *param_3 = local_178[0];
  param_3[1] = local_178[1];
  param_3[2] = local_178[2];
  param_3[3] = local_178[3];
  param_3[4] = local_178[4];
  param_3[5] = local_178[5];
  param_3[6] = local_178[6];
  param_3[7] = local_178[7];
  param_3[8] = local_178[8];
  param_3[9] = local_178[9];
  param_3[10] = local_178[10];
  param_3[0xb] = local_178[0xb];
  param_3[0xc] = local_178[0xc];
  param_3[0xd] = local_178[0xd];
  param_3[0xe] = local_178[0xe];
  param_3[0xf] = local_178[0xf];
  param_3[0x10] = local_178[0x10];
  param_3[0x11] = local_178[0x11];
  return;
}



// FUNCTION 144d00690 FUN_144d00690 body=152 status=ok
// SIG undefined FUN_144d00690(void)

void FUN_144d00690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 <= param_1 + 0x11) && (param_1 <= param_2 + 0x11)) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    lVar5 = 0x12;
    do {
      *param_2 = *(undefined8 *)(lVar6 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[4];
  uVar4 = param_1[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = param_1[8];
  uVar4 = param_1[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  uVar1 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar4;
  uVar1 = param_1[0x10];
  uVar4 = param_1[0x11];
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  param_2[0x10] = uVar1;
  param_2[0x11] = uVar4;
  return;
}



// FUNCTION 144d00730 FUN_144d00730 body=219 status=ok
// SIG undefined FUN_144d00730(void)

void FUN_144d00730(ulonglong *param_1,char param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar13 = (ulonglong)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar10 = SUB168(auVar1 * auVar5,8);
  *param_3 = *param_1 * uVar13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar13;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  uVar11 = SUB168(auVar2 * auVar6,8);
  uVar14 = param_1[1] * uVar13;
  param_3[1] = uVar14 + uVar10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[2];
  uVar12 = SUB168(auVar3 * auVar7,8);
  uVar9 = param_1[2] * uVar13;
  uVar10 = (ulonglong)CARRY8(uVar14,uVar10);
  uVar14 = uVar9 + uVar11;
  param_3[2] = uVar14 + uVar10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1[3];
  uVar13 = param_1[3] * uVar13;
  uVar10 = (ulonglong)(CARRY8(uVar9,uVar11) || CARRY8(uVar14,uVar10));
  uVar14 = uVar13 + uVar12;
  uVar9 = uVar14 + uVar10;
  param_3[3] = uVar9;
  param_3[4] = (ulonglong)(CARRY8(uVar13,uVar12) || CARRY8(uVar14,uVar10)) +
               SUB168(auVar4 * auVar8,8);
  if (param_2 < '\0') {
    uVar10 = param_3[1];
    uVar14 = *param_1;
    param_3[1] = uVar10 - *param_1;
    uVar13 = param_3[2];
    uVar14 = (ulonglong)(uVar10 < uVar14);
    uVar10 = param_1[1];
    uVar11 = uVar13 - param_1[1];
    param_3[2] = uVar11 - uVar14;
    uVar14 = (ulonglong)(uVar13 < uVar10 || uVar11 < uVar14);
    uVar10 = param_1[2];
    uVar13 = uVar9 - param_1[2];
    param_3[3] = uVar13 - uVar14;
    param_3[4] = (param_3[4] - param_1[3]) - (ulonglong)(uVar9 < uVar10 || uVar13 < uVar14);
  }
  return;
}



// FUNCTION 144d00810 FUN_144d00810 body=266 status=ok
// SIG undefined FUN_144d00810(void)

void FUN_144d00810(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144d00920 FUN_144d00920 body=247 status=ok
// SIG undefined FUN_144d00920(void)

void FUN_144d00920(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144d00a20 FUN_144d00a20 body=1550 status=ok
// SIG undefined FUN_144d00a20(void)

void FUN_144d00a20(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong *puVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  longlong lVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong *puVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  bool bVar88;
  longlong local_1f8;
  ulonglong local_118 [22];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar81 = local_118;
  bVar88 = false;
  local_118[0] = uVar2 * uVar3;
  puVar66 = param_1 + 1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar2;
  lVar77 = 0x11;
  local_118[1] = SUB168(auVar21 * auVar41,8);
  do {
    puVar81 = puVar81 + 1;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *puVar66;
    uVar79 = *puVar66 * uVar3;
    puVar1 = (ulonglong *)(((longlong)local_118 - (longlong)param_1) + (longlong)puVar66);
    uVar18 = (ulonglong)bVar88;
    uVar19 = uVar79 + *puVar1;
    bVar88 = CARRY8(uVar79,*puVar1) || CARRY8(uVar19,uVar18);
    puVar66 = puVar66 + 1;
    *puVar81 = uVar19 + uVar18;
    *(longlong *)(((longlong)local_118 - (longlong)param_1) + (longlong)puVar66) =
         SUB168(auVar22 * auVar42,8);
    lVar77 = lVar77 + -1;
  } while (lVar77 != 0);
  uVar3 = param_1[7];
  uVar18 = param_1[8];
  local_118[0x12] = local_118[0x12] + bVar88;
  uVar19 = param_1[1];
  uVar79 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[9];
  uVar9 = param_1[0xb];
  uVar10 = param_1[10];
  uVar11 = param_1[0xd];
  uVar12 = param_1[0xc];
  uVar13 = param_1[0xf];
  uVar14 = param_1[0xe];
  uVar15 = param_1[0x11];
  uVar16 = param_1[0x10];
  local_1f8 = 1;
  iVar61 = 1;
  do {
    uVar17 = param_2[local_1f8];
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar17;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar2;
    uVar67 = SUB168(auVar23 * auVar43,8);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar17;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar19;
    uVar68 = SUB168(auVar24 * auVar44,8);
    uVar62 = uVar19 * uVar17;
    uVar20 = uVar62 + uVar67;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar17;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar79;
    uVar69 = SUB168(auVar25 * auVar45,8);
    uVar63 = uVar79 * uVar17;
    uVar62 = (ulonglong)CARRY8(uVar62,uVar67);
    uVar67 = uVar63 + uVar68;
    uVar64 = uVar67 + uVar62;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar17;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar4;
    uVar70 = SUB168(auVar26 * auVar46,8);
    uVar65 = uVar4 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar63,uVar68) || CARRY8(uVar67,uVar62));
    uVar67 = uVar65 + uVar69;
    uVar68 = uVar67 + uVar62;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar17;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar5;
    uVar71 = SUB168(auVar27 * auVar47,8);
    uVar63 = uVar5 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar65,uVar69) || CARRY8(uVar67,uVar62));
    uVar67 = uVar63 + uVar70;
    uVar69 = uVar67 + uVar62;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar17;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar6;
    uVar72 = SUB168(auVar28 * auVar48,8);
    uVar65 = uVar6 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar63,uVar70) || CARRY8(uVar67,uVar62));
    uVar67 = uVar65 + uVar71;
    uVar70 = uVar67 + uVar62;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar17;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar7;
    uVar73 = SUB168(auVar29 * auVar49,8);
    uVar63 = uVar7 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar65,uVar71) || CARRY8(uVar67,uVar62));
    uVar67 = uVar63 + uVar72;
    uVar71 = uVar67 + uVar62;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar17;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar3;
    uVar74 = SUB168(auVar30 * auVar50,8);
    uVar65 = uVar3 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar63,uVar72) || CARRY8(uVar67,uVar62));
    uVar67 = uVar65 + uVar73;
    uVar72 = uVar67 + uVar62;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar17;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar18;
    uVar75 = SUB168(auVar31 * auVar51,8);
    uVar63 = uVar18 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar65,uVar73) || CARRY8(uVar67,uVar62));
    uVar67 = uVar63 + uVar74;
    uVar73 = uVar67 + uVar62;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar17;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar8;
    uVar65 = SUB168(auVar32 * auVar52,8);
    uVar84 = uVar8 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar63,uVar74) || CARRY8(uVar67,uVar62));
    uVar67 = uVar84 + uVar75;
    uVar85 = uVar67 + uVar62;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar17;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar10;
    uVar63 = SUB168(auVar33 * auVar53,8);
    uVar82 = uVar10 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar84,uVar75) || CARRY8(uVar67,uVar62));
    uVar67 = uVar82 + uVar65;
    uVar83 = uVar67 + uVar62;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar17;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar9;
    uVar74 = SUB168(auVar34 * auVar54,8);
    uVar75 = uVar9 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar82,uVar65) || CARRY8(uVar67,uVar62));
    uVar67 = uVar75 + uVar63;
    uVar87 = uVar67 + uVar62;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar17;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar12;
    uVar65 = SUB168(auVar35 * auVar55,8);
    uVar82 = uVar12 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar75,uVar63) || CARRY8(uVar67,uVar62));
    uVar67 = uVar82 + uVar74;
    uVar86 = uVar67 + uVar62;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar17;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar11;
    uVar63 = SUB168(auVar36 * auVar56,8);
    uVar75 = uVar11 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar82,uVar74) || CARRY8(uVar67,uVar62));
    uVar67 = uVar75 + uVar65;
    uVar76 = uVar67 + uVar62;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar17;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar14;
    uVar74 = SUB168(auVar37 * auVar57,8);
    uVar84 = uVar14 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar75,uVar65) || CARRY8(uVar67,uVar62));
    uVar67 = uVar84 + uVar63;
    uVar78 = uVar67 + uVar62;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar17;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar13;
    uVar65 = SUB168(auVar38 * auVar58,8);
    uVar82 = uVar13 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar84,uVar63) || CARRY8(uVar67,uVar62));
    uVar67 = uVar82 + uVar74;
    uVar84 = uVar67 + uVar62;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar17;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar16;
    uVar75 = SUB168(auVar39 * auVar59,8);
    uVar63 = uVar16 * uVar17;
    uVar62 = (ulonglong)(CARRY8(uVar82,uVar74) || CARRY8(uVar67,uVar62));
    uVar67 = uVar63 + uVar65;
    uVar80 = uVar67 + uVar62;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar17;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar15;
    uVar74 = uVar15 * param_2[local_1f8];
    uVar67 = (ulonglong)(CARRY8(uVar63,uVar65) || CARRY8(uVar67,uVar62));
    uVar63 = uVar74 + uVar75;
    uVar82 = uVar63 + uVar67;
    uVar62 = local_118[local_1f8];
    lVar77 = local_1f8 + 1;
    local_118[iVar61] = uVar2 * uVar17 + local_118[local_1f8];
    uVar62 = (ulonglong)CARRY8(uVar2 * uVar17,uVar62);
    uVar17 = local_118[lVar77];
    uVar65 = uVar20 + local_118[lVar77];
    local_118[iVar61 + 1] = uVar65 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar20,uVar17) || CARRY8(uVar65,uVar62));
    uVar17 = local_118[local_1f8 + 2];
    uVar20 = uVar64 + local_118[local_1f8 + 2];
    local_118[iVar61 + 2] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar64,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 3];
    uVar20 = uVar68 + local_118[local_1f8 + 3];
    local_118[iVar61 + 3] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar68,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 4];
    uVar20 = uVar69 + local_118[local_1f8 + 4];
    local_118[iVar61 + 4] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar69,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 5];
    uVar20 = uVar70 + local_118[local_1f8 + 5];
    local_118[iVar61 + 5] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar70,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 6];
    uVar20 = uVar71 + local_118[local_1f8 + 6];
    local_118[iVar61 + 6] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar71,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 7];
    uVar20 = uVar72 + local_118[local_1f8 + 7];
    local_118[iVar61 + 7] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar72,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 8];
    uVar20 = uVar73 + local_118[local_1f8 + 8];
    local_118[iVar61 + 8] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar73,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 9];
    uVar20 = uVar85 + local_118[local_1f8 + 9];
    local_118[iVar61 + 9] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar85,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 10];
    uVar20 = uVar83 + local_118[local_1f8 + 10];
    local_118[iVar61 + 10] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar83,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0xb];
    uVar20 = uVar87 + local_118[local_1f8 + 0xb];
    local_118[iVar61 + 0xb] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar87,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0xc];
    uVar20 = uVar86 + local_118[local_1f8 + 0xc];
    local_118[iVar61 + 0xc] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar86,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0xd];
    uVar20 = uVar76 + local_118[local_1f8 + 0xd];
    local_118[iVar61 + 0xd] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar76,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0xe];
    uVar20 = uVar78 + local_118[local_1f8 + 0xe];
    local_118[iVar61 + 0xe] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar78,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0xf];
    uVar20 = uVar84 + local_118[local_1f8 + 0xf];
    local_118[iVar61 + 0xf] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar84,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0x10];
    uVar20 = uVar80 + local_118[local_1f8 + 0x10];
    local_118[iVar61 + 0x10] = uVar20 + uVar62;
    uVar62 = (ulonglong)(CARRY8(uVar80,uVar17) || CARRY8(uVar20,uVar62));
    uVar17 = local_118[local_1f8 + 0x11];
    uVar20 = uVar82 + local_118[local_1f8 + 0x11];
    local_118[iVar61 + 0x11] = uVar20 + uVar62;
    local_118[iVar61 + 0x12] =
         SUB168(auVar40 * auVar60,8) + (ulonglong)(CARRY8(uVar74,uVar75) || CARRY8(uVar63,uVar67)) +
         (ulonglong)(CARRY8(uVar82,uVar17) || CARRY8(uVar20,uVar62));
    local_1f8 = lVar77;
    iVar61 = iVar61 + 1;
  } while (lVar77 < 7);
  *param_3 = local_118[0];
  param_3[1] = local_118[1];
  param_3[2] = local_118[2];
  param_3[3] = local_118[3];
  param_3[4] = local_118[4];
  param_3[5] = local_118[5];
  param_3[6] = local_118[6];
  param_3[7] = local_118[7];
  param_3[8] = local_118[8];
  param_3[9] = local_118[9];
  param_3[10] = local_118[10];
  param_3[0xb] = local_118[0xb];
  param_3[0xc] = local_118[0xc];
  param_3[0xd] = local_118[0xd];
  param_3[0xe] = local_118[0xe];
  param_3[0xf] = local_118[0xf];
  param_3[0x10] = local_118[0x10];
  param_3[0x11] = local_118[0x11];
  param_3[0x12] = local_118[0x12];
  param_3[0x13] = local_118[0x13];
  param_3[0x14] = local_118[0x14];
  param_3[0x15] = local_118[0x15];
  param_3[0x16] = local_68;
  param_3[0x17] = uStack_60;
  param_3[0x18] = local_58;
  return;
}



// FUNCTION 144d01030 FUN_144d01030 body=226 status=ok
// SIG undefined FUN_144d01030(void)

void FUN_144d01030(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  bool bVar10;
  
  bVar10 = false;
  puVar9 = (ulonglong *)(param_1 + 8);
  param_2 = param_2 - param_1;
  lVar7 = 2;
  plVar8 = (longlong *)(param_3 + 0x10);
  do {
    uVar2 = puVar9[-1];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + -8);
    uVar3 = *puVar1;
    uVar5 = uVar2 + *puVar1;
    plVar8[-2] = uVar5 + bVar10;
    uVar4 = *puVar9;
    uVar5 = (ulonglong)(CARRY8(uVar2,uVar3) || CARRY8(uVar5,(ulonglong)bVar10));
    uVar2 = *(ulonglong *)((longlong)puVar9 + param_2);
    uVar6 = uVar4 + *(ulonglong *)((longlong)puVar9 + param_2);
    plVar8[-1] = uVar6 + uVar5;
    uVar3 = puVar9[1];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 8);
    uVar5 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar3 + *puVar1;
    *plVar8 = uVar6 + uVar5;
    uVar4 = puVar9[2];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x10);
    uVar5 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar4 + *puVar1;
    plVar8[1] = uVar6 + uVar5;
    uVar3 = puVar9[3];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x18);
    uVar5 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar3 + *puVar1;
    plVar8[2] = uVar6 + uVar5;
    uVar4 = puVar9[4];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x20);
    uVar5 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar4 + *puVar1;
    plVar8[3] = uVar6 + uVar5;
    uVar3 = puVar9[5];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x28);
    uVar5 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar3 + *puVar1;
    plVar8[4] = uVar6 + uVar5;
    uVar4 = puVar9[6];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x30);
    uVar5 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar4 + *puVar1;
    plVar8[5] = uVar6 + uVar5;
    uVar3 = puVar9[7];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x38);
    uVar5 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar3 + *puVar1;
    plVar8[6] = uVar6 + uVar5;
    uVar4 = puVar9[8];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x40);
    uVar5 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar4 + *puVar1;
    plVar8[7] = uVar6 + uVar5;
    uVar3 = puVar9[9];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x48);
    uVar5 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar3 + *puVar1;
    plVar8[8] = uVar6 + uVar5;
    uVar4 = puVar9[10];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x50);
    uVar5 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar6 = uVar4 + *puVar1;
    plVar8[9] = uVar6 + uVar5;
    uVar3 = puVar9[0xb];
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x58);
    uVar4 = (ulonglong)(CARRY8(uVar4,uVar2) || CARRY8(uVar6,uVar5));
    uVar2 = *puVar1;
    uVar5 = uVar3 + *puVar1;
    plVar8[10] = uVar5 + uVar4;
    puVar1 = (ulonglong *)((longlong)puVar9 + param_2 + 0x60);
    uVar2 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar5,uVar4));
    uVar3 = puVar9[0xc] + *puVar1;
    bVar10 = CARRY8(puVar9[0xc],*puVar1) || CARRY8(uVar3,uVar2);
    puVar9 = puVar9 + 0xe;
    plVar8[0xb] = uVar3 + uVar2;
    lVar7 = lVar7 + -1;
    plVar8 = plVar8 + 0xe;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 144d01120 FUN_144d01120 body=584 status=ok
// SIG undefined FUN_144d01120(void)

void FUN_144d01120(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_118 [9];
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_118[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_118[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_118[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_118[4] = SUB168(auVar13 * auVar21,8) +
                 (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_118[local_res8];
    local_118[iVar31] = uVar3 * uVar26 + local_118[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_118[lVar1];
    uVar9 = uVar7 + local_118[lVar1];
    local_118[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_118[local_res8 + 2];
    uVar7 = uVar33 + local_118[local_res8 + 2];
    local_118[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_118[local_res8 + 3];
    uVar7 = uVar32 + local_118[local_res8 + 3];
    local_118[iVar31 + 3] = uVar7 + uVar28;
    local_118[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 0x18);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_118[1];
  param_3[2] = local_118[2];
  param_3[3] = local_118[3];
  param_3[4] = local_118[4];
  param_3[5] = local_118[5];
  param_3[6] = local_118[6];
  param_3[7] = local_118[7];
  param_3[8] = local_118[8];
  param_3[9] = lStack_d0;
  param_3[10] = local_c8;
  param_3[0xb] = lStack_c0;
  param_3[0xc] = local_b8;
  param_3[0xd] = lStack_b0;
  param_3[0xe] = local_a8;
  param_3[0xf] = lStack_a0;
  param_3[0x10] = local_98;
  param_3[0x11] = lStack_90;
  param_3[0x12] = local_88;
  param_3[0x13] = lStack_80;
  param_3[0x14] = local_78;
  param_3[0x15] = lStack_70;
  param_3[0x16] = local_68;
  param_3[0x17] = lStack_60;
  param_3[0x18] = local_58;
  param_3[0x19] = lStack_50;
  param_3[0x1a] = local_48;
  param_3[0x1b] = lStack_40;
  return;
}



// FUNCTION 144d01370 FUN_144d01370 body=1143 status=ok
// SIG undefined FUN_144d01370(void)

void FUN_144d01370(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  FUN_144d059c0(param_1,&local_388);
  FUN_144d04940(&local_388,param_2,&local_2a8,&local_1c8);
  if (lVar1 < 0) {
    local_388 = local_2a8;
    uStack_380 = uStack_2a0;
    local_378 = local_298;
    uStack_370 = uStack_290;
    local_368 = local_288;
    uStack_360 = uStack_280;
    local_358 = local_278;
    uStack_350 = uStack_270;
    local_348 = local_268;
    uStack_340 = uStack_260;
    local_338 = local_258;
    uStack_330 = uStack_250;
    local_328 = local_248;
    uStack_320 = uStack_240;
    local_318 = local_238;
    uStack_310 = uStack_230;
    local_308 = local_228;
    uStack_300 = uStack_220;
    local_2f8 = local_218;
    uStack_2f0 = uStack_210;
    local_2e8 = local_208;
    uStack_2e0 = uStack_200;
    local_2d8 = local_1f8;
    uStack_2d0 = uStack_1f0;
    local_2c8 = (undefined4)local_1e8;
    uStack_2c4 = local_1e8._4_4_;
    uStack_2c0 = (undefined4)uStack_1e0;
    uStack_2bc = uStack_1e0._4_4_;
    local_2b8 = (undefined4)local_1d8;
    uStack_2b4 = local_1d8._4_4_;
    uStack_2b0 = (undefined4)uStack_1d0;
    uStack_2ac = uStack_1d0._4_4_;
    FUN_144d06010(&local_388,&local_e8);
    local_2a8 = local_e8;
    uStack_2a0 = uStack_e0;
    local_298 = local_d8;
    uStack_290 = uStack_d0;
    local_288 = local_c8;
    uStack_280 = uStack_c0;
    local_278 = local_b8;
    uStack_270 = uStack_b0;
    local_268 = local_a8;
    uStack_260 = uStack_a0;
    local_258 = local_98;
    uStack_250 = uStack_90;
    local_248 = local_88;
    uStack_240 = uStack_80;
    local_238 = local_78;
    uStack_230 = uStack_70;
    local_228 = local_68;
    uStack_220 = uStack_60;
    local_218 = local_58;
    uStack_210 = uStack_50;
    local_208 = local_48;
    uStack_200 = uStack_40;
    local_1e8 = CONCAT44(uStack_24,local_28);
    uStack_1e0 = CONCAT44(uStack_1c,uStack_20);
    local_1f8 = local_38;
    uStack_1f0 = uStack_30;
    local_1d8 = CONCAT44(uStack_14,local_18);
    uStack_1d0 = CONCAT44(uStack_c,uStack_10);
    local_e8 = local_1c8;
    uStack_e0 = uStack_1c0;
    local_d8 = local_1b8;
    uStack_d0 = uStack_1b0;
    local_c8 = local_1a8;
    uStack_c0 = uStack_1a0;
    local_b8 = local_198;
    uStack_b0 = uStack_190;
    local_a8 = local_188;
    uStack_a0 = uStack_180;
    local_98 = local_178;
    uStack_90 = uStack_170;
    local_88 = local_168;
    uStack_80 = uStack_160;
    local_78 = local_158;
    uStack_70 = uStack_150;
    local_68 = local_148;
    uStack_60 = uStack_140;
    local_58 = local_138;
    uStack_50 = uStack_130;
    local_48 = local_128;
    uStack_40 = uStack_120;
    local_38 = local_118;
    uStack_30 = uStack_110;
    local_28 = (undefined4)local_108;
    uStack_24 = local_108._4_4_;
    uStack_20 = (undefined4)uStack_100;
    uStack_1c = uStack_100._4_4_;
    local_18 = (undefined4)local_f8;
    uStack_14 = local_f8._4_4_;
    uStack_10 = (undefined4)uStack_f0;
    uStack_c = uStack_f0._4_4_;
    FUN_144d06010(&local_e8,&local_388);
    local_1c8 = local_388;
    uStack_1c0 = uStack_380;
    local_1b8 = local_378;
    uStack_1b0 = uStack_370;
    local_1a8 = local_368;
    uStack_1a0 = uStack_360;
    local_198 = local_358;
    uStack_190 = uStack_350;
    local_188 = local_348;
    uStack_180 = uStack_340;
    local_178 = local_338;
    uStack_170 = uStack_330;
    local_168 = local_328;
    uStack_160 = uStack_320;
    local_158 = local_318;
    uStack_150 = uStack_310;
    local_148 = local_308;
    uStack_140 = uStack_300;
    local_138 = local_2f8;
    uStack_130 = uStack_2f0;
    local_128 = local_2e8;
    uStack_120 = uStack_2e0;
    local_108 = CONCAT44(uStack_2c4,local_2c8);
    uStack_100 = CONCAT44(uStack_2bc,uStack_2c0);
    local_118 = local_2d8;
    uStack_110 = uStack_2d0;
    local_f8 = CONCAT44(uStack_2b4,local_2b8);
    uStack_f0 = CONCAT44(uStack_2ac,uStack_2b0);
  }
  local_e8 = local_1c8;
  uStack_e0 = uStack_1c0;
  local_d8 = local_1b8;
  uStack_d0 = uStack_1b0;
  local_c8 = local_1a8;
  uStack_c0 = uStack_1a0;
  local_b8 = local_198;
  uStack_b0 = uStack_190;
  local_a8 = local_188;
  uStack_a0 = uStack_180;
  local_98 = local_178;
  uStack_90 = uStack_170;
  local_88 = local_168;
  uStack_80 = uStack_160;
  local_78 = local_158;
  uStack_70 = uStack_150;
  local_68 = local_148;
  uStack_60 = uStack_140;
  local_58 = local_138;
  uStack_50 = uStack_130;
  local_48 = local_128;
  uStack_40 = uStack_120;
  local_38 = local_118;
  uStack_30 = uStack_110;
  local_28 = (undefined4)local_108;
  uStack_24 = local_108._4_4_;
  uStack_20 = (undefined4)uStack_100;
  uStack_1c = uStack_100._4_4_;
  local_18 = (undefined4)local_f8;
  uStack_14 = local_f8._4_4_;
  uStack_10 = (undefined4)uStack_f0;
  uStack_c = uStack_f0._4_4_;
  uVar2 = FUN_144cfd050(&local_e8);
  if (uVar2 == param_3) {
    FUN_144d051a0(&local_2a8,param_3 & 0xff,&local_388,1);
    FUN_144d04620(&local_388,&local_1c8);
    local_2a8 = local_1c8;
    uStack_2a0 = uStack_1c0;
    local_298 = local_1b8;
    uStack_290 = uStack_1b0;
    local_288 = local_1a8;
    uStack_280 = uStack_1a0;
    local_278 = local_198;
    uStack_270 = uStack_190;
    local_268 = local_188;
    uStack_260 = uStack_180;
    local_258 = local_178;
    uStack_250 = uStack_170;
    local_248 = local_168;
    uStack_240 = uStack_160;
    local_238 = local_158;
    uStack_230 = uStack_150;
    local_228 = local_148;
    uStack_220 = uStack_140;
    local_218 = local_138;
    uStack_210 = uStack_130;
    local_208 = local_128;
    uStack_200 = uStack_120;
    local_1f8 = local_118;
    uStack_1f0 = uStack_110;
    local_1e8 = local_108;
    uStack_1e0 = uStack_100;
    local_1d8 = local_f8;
    uStack_1d0 = uStack_f0;
  }
  *param_4 = local_2a8;
  param_4[1] = uStack_2a0;
  param_4[2] = local_298;
  param_4[3] = uStack_290;
  param_4[4] = local_288;
  param_4[5] = uStack_280;
  param_4[6] = local_278;
  param_4[7] = uStack_270;
  param_4[8] = local_268;
  param_4[9] = uStack_260;
  param_4[10] = local_258;
  param_4[0xb] = uStack_250;
  param_4[0xc] = local_248;
  param_4[0xd] = uStack_240;
  param_4[0xe] = local_238;
  param_4[0xf] = uStack_230;
  param_4[0x10] = local_228;
  param_4[0x11] = uStack_220;
  param_4[0x12] = local_218;
  param_4[0x13] = uStack_210;
  param_4[0x14] = local_208;
  param_4[0x15] = uStack_200;
  param_4[0x16] = local_1f8;
  param_4[0x17] = uStack_1f0;
  param_4[0x18] = local_1e8;
  param_4[0x19] = uStack_1e0;
  param_4[0x1a] = local_1d8;
  param_4[0x1b] = uStack_1d0;
  return;
}



// FUNCTION 144d017f0 FUN_144d017f0 body=189 status=ok
// SIG undefined FUN_144d017f0(void)

void FUN_144d017f0(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144cfd560();
  if ((longlong)param_1[3] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x20);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x20) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x28) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x30);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar5 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x30) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x38);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[3];
    uVar5 = uVar3 - param_2[3];
    *(ulonglong *)(param_3 + 0x38) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[4];
    uVar5 = uVar2 - param_2[4];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x48);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[5];
    uVar4 = uVar3 - param_2[5];
    *(ulonglong *)(param_3 + 0x48) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x50) =
         (*(longlong *)(param_3 + 0x50) - param_2[6]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  if ((longlong)param_2[6] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x38);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x38) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x48);
    uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar4 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x48) = uVar4 - uVar3;
    *(ulonglong *)(param_3 + 0x50) =
         (*(longlong *)(param_3 + 0x50) - param_1[3]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  }
  return;
}



// FUNCTION 144d018b0 FUN_144d018b0 body=301 status=ok
// SIG undefined FUN_144d018b0(void)

void FUN_144d018b0(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144d019e0();
  if ((longlong)param_1[6] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x38);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x38) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar5 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x50);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[3];
    uVar5 = uVar3 - param_2[3];
    *(ulonglong *)(param_3 + 0x50) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x58);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[4];
    uVar5 = uVar2 - param_2[4];
    *(ulonglong *)(param_3 + 0x58) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x60);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[5];
    uVar5 = uVar3 - param_2[5];
    *(ulonglong *)(param_3 + 0x60) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x68);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[6];
    uVar5 = uVar2 - param_2[6];
    *(ulonglong *)(param_3 + 0x68) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x70);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[7];
    uVar5 = uVar3 - param_2[7];
    *(ulonglong *)(param_3 + 0x70) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x78);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[8];
    uVar5 = uVar2 - param_2[8];
    *(ulonglong *)(param_3 + 0x78) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x80);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[9];
    uVar4 = uVar3 - param_2[9];
    *(ulonglong *)(param_3 + 0x80) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x88) =
         (*(longlong *)(param_3 + 0x88) - param_2[10]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2)
    ;
  }
  if ((longlong)param_2[10] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x58);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x58) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x60);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x60) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x68);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x68) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x70);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x70) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x78);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x78) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x80);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar4 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x80) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x88) =
         (*(longlong *)(param_3 + 0x88) - param_1[6]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  return;
}



// FUNCTION 144d019e0 FUN_144d019e0 body=786 status=ok
// SIG undefined FUN_144d019e0(void)

void FUN_144d019e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong local_res8;
  ulonglong local_118 [12];
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar40 = param_1[1];
  uVar4 = param_1[3];
  uVar45 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar3;
  uVar33 = SUB168(auVar5 * auVar19,8);
  local_68 = uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar40;
  uVar34 = SUB168(auVar6 * auVar20,8);
  local_60 = uVar40;
  local_58 = uVar45;
  local_118[1] = uVar40 * uVar2 + uVar33;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar45;
  uVar35 = SUB168(auVar7 * auVar21,8);
  uVar33 = (ulonglong)CARRY8(uVar40 * uVar2,uVar33);
  uVar37 = uVar45 * uVar2 + uVar34;
  local_118[2] = uVar37 + uVar33;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  uVar36 = SUB168(auVar8 * auVar22,8);
  local_88 = param_1[4];
  uVar33 = (ulonglong)(CARRY8(uVar45 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = uVar4 * uVar2 + uVar35;
  local_118[3] = uVar37 + uVar33;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_88;
  uVar34 = SUB168(auVar9 * auVar23,8);
  local_80 = param_1[5];
  uVar33 = (ulonglong)(CARRY8(uVar4 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  uVar37 = local_88 * uVar2 + uVar36;
  local_118[4] = uVar37 + uVar33;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_80;
  uVar35 = SUB168(auVar10 * auVar24,8);
  local_78 = param_1[6];
  uVar33 = (ulonglong)(CARRY8(local_88 * uVar2,uVar36) || CARRY8(uVar37,uVar33));
  uVar37 = local_80 * uVar2 + uVar34;
  local_118[5] = uVar37 + uVar33;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_78;
  local_res8 = 1;
  uVar33 = (ulonglong)(CARRY8(local_80 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = local_78 * uVar2 + uVar35;
  local_118[6] = uVar37 + uVar33;
  local_118[7] = SUB168(auVar11 * auVar25,8) +
                 (ulonglong)(CARRY8(local_78 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  iVar42 = 1;
  do {
    uVar33 = param_2[local_res8];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar33;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_68;
    uVar37 = SUB168(auVar12 * auVar26,8);
    uVar36 = local_68 * uVar33;
    local_70 = uVar36;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar35 = SUB168(auVar13 * auVar27,8);
    uVar34 = uVar40 * uVar33 + uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    uVar38 = SUB168(auVar14 * auVar28,8);
    uVar40 = (ulonglong)CARRY8(uVar40 * uVar33,uVar37);
    uVar37 = uVar45 * uVar33 + uVar35;
    uVar47 = uVar37 + uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar4;
    uVar39 = SUB168(auVar15 * auVar29,8);
    uVar40 = (ulonglong)(CARRY8(uVar45 * uVar33,uVar35) || CARRY8(uVar37,uVar40));
    uVar45 = uVar4 * uVar33 + uVar38;
    uVar46 = uVar45 + uVar40;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar33;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_88;
    uVar37 = SUB168(auVar16 * auVar30,8);
    uVar40 = (ulonglong)(CARRY8(uVar4 * uVar33,uVar38) || CARRY8(uVar45,uVar40));
    uVar45 = local_88 * uVar33 + uVar39;
    uVar41 = uVar45 + uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = local_80;
    uVar38 = SUB168(auVar17 * auVar31,8);
    uVar40 = (ulonglong)(CARRY8(local_88 * uVar33,uVar39) || CARRY8(uVar45,uVar40));
    uVar45 = local_80 * uVar33 + uVar37;
    uVar39 = uVar45 + uVar40;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = local_78;
    uVar43 = local_78 * uVar33;
    uVar37 = (ulonglong)(CARRY8(local_80 * uVar33,uVar37) || CARRY8(uVar45,uVar40));
    uVar35 = uVar43 + uVar38;
    uVar44 = uVar35 + uVar37;
    uVar40 = local_118[local_res8];
    lVar1 = local_res8 + 1;
    local_118[iVar42] = uVar36 + local_118[local_res8];
    uVar45 = (ulonglong)CARRY8(uVar36,uVar40);
    uVar40 = local_118[lVar1];
    uVar33 = uVar34 + local_118[lVar1];
    local_118[iVar42 + 1] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar34,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_118[local_res8 + 2];
    uVar33 = uVar47 + local_118[local_res8 + 2];
    local_118[iVar42 + 2] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar47,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_118[local_res8 + 3];
    uVar33 = uVar46 + local_118[local_res8 + 3];
    local_118[iVar42 + 3] = uVar33 + uVar45;
    uVar34 = (ulonglong)(CARRY8(uVar46,uVar40) || CARRY8(uVar33,uVar45));
    uVar33 = local_118[local_res8 + 4];
    uVar36 = uVar41 + local_118[local_res8 + 4];
    local_118[iVar42 + 4] = uVar36 + uVar34;
    uVar45 = local_58;
    uVar40 = local_60;
    uVar34 = (ulonglong)(CARRY8(uVar41,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_118[local_res8 + 5];
    uVar36 = uVar39 + local_118[local_res8 + 5];
    local_118[iVar42 + 5] = uVar36 + uVar34;
    uVar34 = (ulonglong)(CARRY8(uVar39,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_118[local_res8 + 6];
    uVar36 = uVar44 + local_118[local_res8 + 6];
    local_118[iVar42 + 6] = uVar36 + uVar34;
    local_118[iVar42 + 7] =
         SUB168(auVar18 * auVar32,8) + (ulonglong)(CARRY8(uVar43,uVar38) || CARRY8(uVar35,uVar37)) +
         (ulonglong)(CARRY8(uVar44,uVar33) || CARRY8(uVar36,uVar34));
    local_res8 = lVar1;
    iVar42 = iVar42 + 1;
  } while (lVar1 < 0xb);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_118[1];
  param_3[2] = local_118[2];
  param_3[3] = local_118[3];
  param_3[4] = local_118[4];
  param_3[5] = local_118[5];
  param_3[6] = local_118[6];
  param_3[7] = local_118[7];
  param_3[8] = local_118[8];
  param_3[9] = local_118[9];
  param_3[10] = local_118[10];
  param_3[0xb] = local_118[0xb];
  param_3[0xc] = local_b8;
  param_3[0xd] = lStack_b0;
  param_3[0xe] = local_a8;
  param_3[0xf] = lStack_a0;
  param_3[0x10] = local_98;
  param_3[0x11] = lStack_90;
  return;
}



// FUNCTION 144d01d00 FUN_144d01d00 body=295 status=ok
// SIG undefined FUN_144d01d00(void)

void FUN_144d01d00(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  *param_3 = uVar1 + *param_2;
  uVar3 = param_1[1];
  uVar4 = (ulonglong)CARRY8(uVar1,uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 + param_2[1];
  param_3[1] = uVar5 + uVar4;
  uVar2 = param_1[2];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[2];
  uVar5 = uVar2 + param_2[2];
  param_3[2] = uVar5 + uVar4;
  uVar3 = param_1[3];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[3];
  uVar5 = uVar3 + param_2[3];
  param_3[3] = uVar5 + uVar4;
  uVar2 = param_1[4];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[4];
  uVar5 = uVar2 + param_2[4];
  param_3[4] = uVar5 + uVar4;
  uVar3 = param_1[5];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[5];
  uVar5 = uVar3 + param_2[5];
  param_3[5] = uVar5 + uVar4;
  uVar2 = param_1[6];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[6];
  uVar5 = uVar2 + param_2[6];
  param_3[6] = uVar5 + uVar4;
  uVar3 = param_1[7];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[7];
  uVar5 = uVar3 + param_2[7];
  param_3[7] = uVar5 + uVar4;
  uVar2 = param_1[8];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[8];
  uVar5 = uVar2 + param_2[8];
  param_3[8] = uVar5 + uVar4;
  uVar3 = param_1[9];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[9];
  uVar5 = uVar3 + param_2[9];
  param_3[9] = uVar5 + uVar4;
  uVar2 = param_1[10];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[10];
  uVar5 = uVar2 + param_2[10];
  param_3[10] = uVar5 + uVar4;
  uVar3 = param_1[0xb];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xb];
  uVar5 = uVar3 + param_2[0xb];
  param_3[0xb] = uVar5 + uVar4;
  uVar2 = param_1[0xc];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xc];
  uVar5 = uVar2 + param_2[0xc];
  param_3[0xc] = uVar5 + uVar4;
  uVar3 = param_1[0xd];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xd];
  uVar5 = uVar3 + param_2[0xd];
  param_3[0xd] = uVar5 + uVar4;
  uVar2 = param_1[0xe];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xe];
  uVar5 = uVar2 + param_2[0xe];
  param_3[0xe] = uVar5 + uVar4;
  uVar3 = param_1[0xf];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0xf];
  uVar5 = uVar3 + param_2[0xf];
  param_3[0xf] = uVar5 + uVar4;
  uVar2 = param_1[0x10];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0x10];
  uVar5 = uVar2 + param_2[0x10];
  param_3[0x10] = uVar5 + uVar4;
  uVar3 = param_1[0x11];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0x11];
  uVar5 = uVar3 + param_2[0x11];
  param_3[0x11] = uVar5 + uVar4;
  uVar2 = param_1[0x12];
  uVar4 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0x12];
  uVar5 = uVar2 + param_2[0x12];
  param_3[0x12] = uVar5 + uVar4;
  uVar3 = param_1[0x13];
  uVar2 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_2[0x13];
  uVar4 = uVar3 + param_2[0x13];
  param_3[0x13] = uVar4 + uVar2;
  param_3[0x14] =
       param_1[0x14] + param_2[0x14] + (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar4,uVar2));
  return;
}



// FUNCTION 144d01e30 FUN_144d01e30 body=565 status=ok
// SIG undefined FUN_144d01e30(void)

void FUN_144d01e30(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_e8 [9];
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_e8[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_e8[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_e8[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_e8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_e8[local_res8];
    local_e8[iVar31] = uVar3 * uVar26 + local_e8[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_e8[lVar1];
    uVar9 = uVar7 + local_e8[lVar1];
    local_e8[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_e8[local_res8 + 2];
    uVar7 = uVar33 + local_e8[local_res8 + 2];
    local_e8[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_e8[local_res8 + 3];
    uVar7 = uVar32 + local_e8[local_res8 + 3];
    local_e8[iVar31 + 3] = uVar7 + uVar28;
    local_e8[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 0x11);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_e8[1];
  param_3[2] = local_e8[2];
  param_3[3] = local_e8[3];
  param_3[4] = local_e8[4];
  param_3[5] = local_e8[5];
  param_3[6] = local_e8[6];
  param_3[7] = local_e8[7];
  param_3[8] = local_e8[8];
  param_3[9] = lStack_a0;
  param_3[10] = local_98;
  param_3[0xb] = lStack_90;
  param_3[0xc] = local_88;
  param_3[0xd] = lStack_80;
  param_3[0xe] = local_78;
  param_3[0xf] = lStack_70;
  param_3[0x10] = local_68;
  param_3[0x11] = lStack_60;
  param_3[0x12] = local_58;
  param_3[0x13] = lStack_50;
  param_3[0x14] = local_48;
  return;
}



// FUNCTION 144d02070 FUN_144d02070 body=358 status=ok
// SIG undefined FUN_144d02070(void)

ulonglong FUN_144d02070(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar6 = 0x11;
  uVar7 = (longlong)param_1[0x11] >> 0x3f;
  lVar3 = 0x11;
  while (param_1[lVar3] == uVar7) {
    iVar6 = iVar6 + -1;
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if ((longlong)(uVar7 ^ *param_1) < 0) {
        *param_2 = 1;
        uVar7 = *param_1 >> 1 | uVar7 & 0x8000000000000000;
      }
      else {
        *param_2 = 0;
        uVar7 = *param_1;
      }
      return uVar7;
    }
  }
  uVar5 = param_1[lVar3] ^ uVar7;
  uVar4 = (uint)uVar5 | (uint)(uVar5 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar1 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  iVar8 = 0x20 - iVar2;
  if (0x1f < 0x20 - iVar2) {
    iVar8 = 0x40 - iVar1;
  }
  iVar8 = iVar8 + -1;
  *param_2 = iVar6 * 0x40 - iVar8;
  if (iVar8 < 0) {
    return uVar7 & 0x8000000000000000 | param_1[iVar6] >> 1;
  }
  uVar7 = param_1[iVar6] << ((byte)iVar8 & 0x3f);
  if (iVar8 == 0) {
    return uVar7;
  }
  return uVar7 | param_1[(longlong)iVar6 + -1] >> (0x40 - (byte)iVar8 & 0x3f);
}



// FUNCTION 144d021e0 FUN_144d021e0 body=590 status=ok
// SIG undefined FUN_144d021e0(void)

void FUN_144d021e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong local_res8;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar2 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar2 * 2;
  uVar7 = param_3;
  if (param_3 < uVar6) {
    uVar7 = uVar6;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res20 = (**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x40,&local_res18);
  uVar1 = *(uint *)(param_1 + 1);
  local_res8 = (ulonglong)uVar1;
  puVar4 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)(local_res20 + 0x14);
    puVar5 = (undefined4 *)((longlong)puVar4 + 0x14);
    puVar9 = puVar4;
    do {
      if ((undefined8 *)(puVar3 + -5) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar3 + -5) = *puVar9;
        *(undefined8 *)(puVar3 + -3) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        FUN_143821c08(puVar5 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(puVar5 + -3);
        puVar3[-1] = puVar5[-1];
        *puVar3 = *puVar5;
        *(undefined8 *)(puVar5 + -3) = 0;
        *(undefined8 *)(puVar5 + -1) = 0;
        *(undefined8 *)(puVar3 + 1) = 0;
        puVar3[3] = 0;
        puVar3[4] = 0x80000000;
        FUN_143821c08(puVar5 + 1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(puVar5 + 1);
        puVar3[3] = puVar5[3];
        puVar3[4] = puVar5[4];
        *(undefined8 *)(puVar5 + 1) = 0;
        *(undefined8 *)(puVar5 + 3) = 0;
        *(undefined8 *)(puVar3 + 5) = 0;
        puVar3[7] = 0;
        puVar3[8] = 0x80000000;
        FUN_144ce2170(puVar5 + 5);
        *(undefined8 *)(puVar3 + 5) = *(undefined8 *)(puVar5 + 5);
        puVar3[7] = puVar5[7];
        puVar3[8] = puVar5[8];
        *(undefined8 *)(puVar5 + 5) = 0;
        *(undefined8 *)(puVar5 + 7) = 0;
        puVar3[9] = puVar5[9];
        puVar3[10] = puVar5[10];
      }
      puVar3 = puVar3 + 0x10;
      puVar9 = puVar9 + 8;
      puVar5 = puVar5 + 0x10;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    do {
      FUN_144ce21f0(puVar4);
      puVar4 = puVar4 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar7 * 0x40 + 0x40;
  uVar8 = uVar7;
  if (uVar6 <= local_res18) {
    local_res18 = local_res18 - 0x40;
    uVar8 = uVar7 + 1;
    if (uVar6 <= local_res18) {
      uVar8 = uVar8 + (local_res18 + uVar7 * -0x40 >> 6);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2 << 6);
    *param_1 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144d02430 FUN_144d02430 body=179 status=ok
// SIG undefined FUN_144d02430(void)

void FUN_144d02430(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d024f0 FUN_144d024f0 body=276 status=ok
// SIG undefined FUN_144d024f0(void)

void FUN_144d024f0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  uVar2 = *param_2;
  *(ulonglong *)(param_1 + 0x38) = uVar1 - *param_2;
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  *(ulonglong *)(param_1 + 0x40) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  *(ulonglong *)(param_1 + 0x48) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x50);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  *(ulonglong *)(param_1 + 0x50) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  *(ulonglong *)(param_1 + 0x58) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  *(ulonglong *)(param_1 + 0x60) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  *(ulonglong *)(param_1 + 0x68) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x70);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  *(ulonglong *)(param_1 + 0x70) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  *(ulonglong *)(param_1 + 0x78) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  *(ulonglong *)(param_1 + 0x80) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x88);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  *(ulonglong *)(param_1 + 0x88) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x90);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  *(ulonglong *)(param_1 + 0x90) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x98);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar5 = uVar2 - param_2[0xc];
  *(ulonglong *)(param_1 + 0x98) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xd];
  uVar5 = uVar3 - param_2[0xd];
  *(ulonglong *)(param_1 + 0xa0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xa8);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xe];
  uVar5 = uVar2 - param_2[0xe];
  *(ulonglong *)(param_1 + 0xa8) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xb0);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xf];
  uVar5 = uVar3 - param_2[0xf];
  *(ulonglong *)(param_1 + 0xb0) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xb8);
  uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x10];
  uVar4 = uVar2 - param_2[0x10];
  *(ulonglong *)(param_1 + 0xb8) = uVar4 - uVar3;
  *(ulonglong *)(param_1 + 0xc0) =
       (*(longlong *)(param_1 + 0xc0) - param_2[0x11]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3)
  ;
  return;
}



// FUNCTION 144d02610 FUN_144d02610 body=1327 status=ok
// SIG undefined FUN_144d02610(void)

void FUN_144d02610(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar43;
  bool bVar44;
  bool bVar45;
  ulonglong local_1e8 [29];
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar2 = *param_2;
  puVar37 = param_1 + 1;
  local_1e8[0] = *param_1 * uVar2;
  puVar38 = local_1e8;
  bVar44 = false;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_1;
  local_1e8[1] = SUB168(auVar3 * auVar17,8);
  lVar36 = 0x17;
  do {
    puVar38 = puVar38 + 1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *puVar37;
    uVar31 = *puVar37 * uVar2;
    puVar1 = (ulonglong *)(((longlong)local_1e8 - (longlong)param_1) + (longlong)puVar37);
    uVar35 = (ulonglong)bVar44;
    uVar41 = uVar31 + *puVar1;
    bVar44 = CARRY8(uVar31,*puVar1) || CARRY8(uVar41,uVar35);
    puVar37 = puVar37 + 1;
    *puVar38 = uVar41 + uVar35;
    *(longlong *)(((longlong)local_1e8 - (longlong)param_1) + (longlong)puVar37) =
         SUB168(auVar4 * auVar18,8);
    lVar36 = lVar36 + -1;
  } while (lVar36 != 0);
  local_1e8[0x18] = local_1e8[0x18] + bVar44;
  lVar36 = 1;
  iVar42 = 1;
  do {
    uVar2 = param_2[lVar36];
    bVar44 = false;
    uVar35 = 0;
    lVar43 = 2;
    puVar37 = &local_f8;
    puVar38 = param_1 + 2;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = puVar38[-2];
      uVar32 = SUB168(auVar5 * auVar19,8);
      uVar39 = puVar38[-2] * uVar2;
      uVar41 = puVar38[-1];
      uVar34 = uVar39 + uVar35;
      puVar37[-2] = uVar34 + bVar44;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      uVar33 = SUB168(auVar6 * auVar20,8);
      uVar41 = uVar41 * uVar2;
      uVar31 = *puVar38;
      uVar35 = (ulonglong)(CARRY8(uVar39,uVar35) || CARRY8(uVar34,(ulonglong)bVar44));
      uVar34 = uVar41 + uVar32;
      puVar37[-1] = uVar34 + uVar35;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      uVar39 = SUB168(auVar7 * auVar21,8);
      uVar31 = uVar31 * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar41,uVar32) || CARRY8(uVar34,uVar35));
      uVar41 = uVar31 + uVar33;
      *puVar37 = uVar41 + uVar35;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar2;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = puVar38[1];
      uVar34 = SUB168(auVar8 * auVar22,8);
      uVar32 = puVar38[1] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar31,uVar33) || CARRY8(uVar41,uVar35));
      uVar41 = uVar32 + uVar39;
      puVar37[1] = uVar41 + uVar35;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar2;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = puVar38[2];
      uVar31 = SUB168(auVar9 * auVar23,8);
      uVar33 = puVar38[2] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar32,uVar39) || CARRY8(uVar41,uVar35));
      uVar41 = uVar33 + uVar34;
      puVar37[2] = uVar41 + uVar35;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar2;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = puVar38[3];
      uVar32 = SUB168(auVar10 * auVar24,8);
      uVar39 = puVar38[3] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar33,uVar34) || CARRY8(uVar41,uVar35));
      uVar41 = uVar39 + uVar31;
      puVar37[3] = uVar41 + uVar35;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar2;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = puVar38[4];
      uVar34 = SUB168(auVar11 * auVar25,8);
      uVar33 = puVar38[4] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar39,uVar31) || CARRY8(uVar41,uVar35));
      uVar41 = uVar33 + uVar32;
      puVar37[4] = uVar41 + uVar35;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar2;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = puVar38[5];
      uVar31 = SUB168(auVar12 * auVar26,8);
      uVar39 = puVar38[5] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar33,uVar32) || CARRY8(uVar41,uVar35));
      uVar41 = uVar39 + uVar34;
      puVar37[5] = uVar41 + uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar2;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = puVar38[6];
      uVar32 = SUB168(auVar13 * auVar27,8);
      uVar33 = puVar38[6] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar39,uVar34) || CARRY8(uVar41,uVar35));
      uVar41 = uVar33 + uVar31;
      puVar37[6] = uVar41 + uVar35;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = puVar38[7];
      uVar34 = SUB168(auVar14 * auVar28,8);
      uVar39 = puVar38[7] * uVar2;
      uVar35 = (ulonglong)(CARRY8(uVar33,uVar31) || CARRY8(uVar41,uVar35));
      uVar41 = uVar39 + uVar32;
      puVar37[7] = uVar41 + uVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = puVar38[8];
      uVar33 = SUB168(auVar15 * auVar29,8);
      uVar40 = puVar38[8] * uVar2;
      uVar41 = (ulonglong)(CARRY8(uVar39,uVar32) || CARRY8(uVar41,uVar35));
      uVar31 = uVar40 + uVar34;
      puVar37[8] = uVar31 + uVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = puVar38[9];
      uVar35 = SUB168(auVar16 * auVar30,8);
      uVar32 = puVar38[9] * uVar2;
      uVar41 = (ulonglong)(CARRY8(uVar40,uVar34) || CARRY8(uVar31,uVar41));
      uVar31 = uVar32 + uVar33;
      bVar44 = CARRY8(uVar32,uVar33) || CARRY8(uVar31,uVar41);
      puVar37[9] = uVar31 + uVar41;
      lVar43 = lVar43 + -1;
      puVar37 = puVar37 + 0xc;
      puVar38 = puVar38 + 0xc;
    } while (lVar43 != 0);
    bVar45 = CARRY8(local_1e8[0x1c],local_1e8[lVar36]);
    lVar43 = lVar36 + 1;
    local_1e8[iVar42] = local_1e8[0x1c] + local_1e8[lVar36];
    uVar2 = (ulonglong)bVar45;
    bVar45 = CARRY8(local_100,local_1e8[lVar43]);
    uVar41 = local_100 + local_1e8[lVar43];
    local_1e8[iVar42 + 1] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_f8,local_1e8[lVar36 + 2]);
    uVar41 = local_f8 + local_1e8[lVar36 + 2];
    local_1e8[iVar42 + 2] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_f0,local_1e8[lVar36 + 3]);
    uVar41 = local_f0 + local_1e8[lVar36 + 3];
    local_1e8[iVar42 + 3] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_e8,local_1e8[lVar36 + 4]);
    uVar41 = local_e8 + local_1e8[lVar36 + 4];
    local_1e8[iVar42 + 4] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_e0,local_1e8[lVar36 + 5]);
    uVar41 = local_e0 + local_1e8[lVar36 + 5];
    local_1e8[iVar42 + 5] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_d8,local_1e8[lVar36 + 6]);
    uVar41 = local_d8 + local_1e8[lVar36 + 6];
    local_1e8[iVar42 + 6] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_d0,local_1e8[lVar36 + 7]);
    uVar41 = local_d0 + local_1e8[lVar36 + 7];
    local_1e8[iVar42 + 7] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_c8,local_1e8[lVar36 + 8]);
    uVar41 = local_c8 + local_1e8[lVar36 + 8];
    local_1e8[iVar42 + 8] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_c0,local_1e8[lVar36 + 9]);
    uVar41 = local_c0 + local_1e8[lVar36 + 9];
    local_1e8[iVar42 + 9] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_b8,local_1e8[lVar36 + 10]);
    uVar41 = local_b8 + local_1e8[lVar36 + 10];
    local_1e8[iVar42 + 10] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_b0,local_1e8[lVar36 + 0xb]);
    uVar41 = local_b0 + local_1e8[lVar36 + 0xb];
    local_1e8[iVar42 + 0xb] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_a8,local_1e8[lVar36 + 0xc]);
    uVar41 = local_a8 + local_1e8[lVar36 + 0xc];
    local_1e8[iVar42 + 0xc] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_a0,local_1e8[lVar36 + 0xd]);
    uVar41 = local_a0 + local_1e8[lVar36 + 0xd];
    local_1e8[iVar42 + 0xd] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_98,local_1e8[lVar36 + 0xe]);
    uVar41 = local_98 + local_1e8[lVar36 + 0xe];
    local_1e8[iVar42 + 0xe] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_90,local_1e8[lVar36 + 0xf]);
    uVar41 = local_90 + local_1e8[lVar36 + 0xf];
    local_1e8[iVar42 + 0xf] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_88,local_1e8[lVar36 + 0x10]);
    uVar41 = local_88 + local_1e8[lVar36 + 0x10];
    local_1e8[iVar42 + 0x10] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_80,local_1e8[lVar36 + 0x11]);
    uVar41 = local_80 + local_1e8[lVar36 + 0x11];
    local_1e8[iVar42 + 0x11] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_78,local_1e8[lVar36 + 0x12]);
    uVar41 = local_78 + local_1e8[lVar36 + 0x12];
    local_1e8[iVar42 + 0x12] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_70,local_1e8[lVar36 + 0x13]);
    uVar41 = local_70 + local_1e8[lVar36 + 0x13];
    local_1e8[iVar42 + 0x13] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_68,local_1e8[lVar36 + 0x14]);
    uVar41 = local_68 + local_1e8[lVar36 + 0x14];
    local_1e8[iVar42 + 0x14] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_60,local_1e8[lVar36 + 0x15]);
    uVar41 = local_60 + local_1e8[lVar36 + 0x15];
    local_1e8[iVar42 + 0x15] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_58,local_1e8[lVar36 + 0x16]);
    uVar41 = local_58 + local_1e8[lVar36 + 0x16];
    local_1e8[iVar42 + 0x16] = uVar41 + uVar2;
    uVar2 = (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    bVar45 = CARRY8(local_50,local_1e8[lVar36 + 0x17]);
    uVar41 = local_50 + local_1e8[lVar36 + 0x17];
    local_1e8[iVar42 + 0x17] = uVar41 + uVar2;
    local_1e8[iVar42 + 0x18] = uVar35 + bVar44 + (ulonglong)(bVar45 || CARRY8(uVar41,uVar2));
    lVar36 = lVar43;
    iVar42 = iVar42 + 1;
  } while (lVar43 < 4);
  *param_3 = local_1e8[0];
  param_3[1] = local_1e8[1];
  param_3[2] = local_1e8[2];
  param_3[3] = local_1e8[3];
  param_3[4] = local_1e8[4];
  param_3[5] = local_1e8[5];
  param_3[6] = local_1e8[6];
  param_3[7] = local_1e8[7];
  param_3[8] = local_1e8[8];
  param_3[9] = local_1e8[9];
  param_3[10] = local_1e8[10];
  param_3[0xb] = local_1e8[0xb];
  param_3[0xc] = local_1e8[0xc];
  param_3[0xd] = local_1e8[0xd];
  param_3[0xe] = local_1e8[0xe];
  param_3[0xf] = local_1e8[0xf];
  param_3[0x10] = local_1e8[0x10];
  param_3[0x11] = local_1e8[0x11];
  param_3[0x12] = local_1e8[0x12];
  param_3[0x13] = local_1e8[0x13];
  param_3[0x14] = local_1e8[0x14];
  param_3[0x15] = local_1e8[0x15];
  param_3[0x16] = local_1e8[0x16];
  param_3[0x17] = local_1e8[0x17];
  param_3[0x18] = local_1e8[0x18];
  param_3[0x19] = local_1e8[0x19];
  param_3[0x1a] = local_1e8[0x1a];
  param_3[0x1b] = local_1e8[0x1b];
  return;
}



// FUNCTION 144d02b40 FUN_144d02b40 body=414 status=ok
// SIG undefined FUN_144d02b40(void)

void FUN_144d02b40(ulonglong *param_1,byte param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  bool bVar32;
  
  uVar30 = CONCAT71(0,param_2);
  puVar29 = param_1 + 3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar30;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *param_1;
  uVar24 = SUB168(auVar4 * auVar14,8);
  plVar28 = param_3 + 3;
  lVar31 = 3;
  *param_3 = (ulonglong)param_2 * *param_1;
  bVar32 = false;
  do {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = puVar29[-2];
    uVar25 = SUB168(auVar5 * auVar15,8);
    uVar1 = puVar29[-2];
    uVar3 = uVar30 * uVar1 + uVar24;
    plVar28[-2] = uVar3 + bVar32;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = puVar29[-1];
    uVar26 = SUB168(auVar6 * auVar16,8);
    uVar2 = puVar29[-1];
    uVar1 = (ulonglong)(CARRY8(uVar30 * uVar1,uVar24) || CARRY8(uVar3,(ulonglong)bVar32));
    uVar3 = uVar30 * uVar2 + uVar25;
    plVar28[-1] = uVar3 + uVar1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar30;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *puVar29;
    uVar27 = SUB168(auVar7 * auVar17,8);
    uVar24 = *puVar29;
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar2,uVar25) || CARRY8(uVar3,uVar1));
    uVar3 = uVar30 * uVar24 + uVar26;
    *plVar28 = uVar3 + uVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = puVar29[1];
    uVar25 = SUB168(auVar8 * auVar18,8);
    uVar1 = puVar29[1];
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar24,uVar26) || CARRY8(uVar3,uVar2));
    uVar3 = uVar30 * uVar1 + uVar27;
    plVar28[1] = uVar3 + uVar2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = puVar29[2];
    uVar26 = SUB168(auVar9 * auVar19,8);
    uVar24 = puVar29[2];
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar1,uVar27) || CARRY8(uVar3,uVar2));
    uVar3 = uVar30 * uVar24 + uVar25;
    plVar28[2] = uVar3 + uVar2;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = puVar29[3];
    uVar27 = SUB168(auVar10 * auVar20,8);
    uVar1 = puVar29[3];
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar24,uVar25) || CARRY8(uVar3,uVar2));
    uVar3 = uVar30 * uVar1 + uVar26;
    plVar28[3] = uVar3 + uVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar30;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = puVar29[4];
    uVar25 = SUB168(auVar11 * auVar21,8);
    uVar24 = puVar29[4];
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar1,uVar26) || CARRY8(uVar3,uVar2));
    uVar3 = uVar30 * uVar24 + uVar27;
    plVar28[4] = uVar3 + uVar2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar30;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = puVar29[5];
    uVar26 = SUB168(auVar12 * auVar22,8);
    uVar1 = puVar29[5];
    uVar2 = (ulonglong)(CARRY8(uVar30 * uVar24,uVar27) || CARRY8(uVar3,uVar2));
    uVar3 = uVar30 * uVar1 + uVar25;
    plVar28[5] = uVar3 + uVar2;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar30;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = puVar29[6];
    uVar24 = SUB168(auVar13 * auVar23,8);
    uVar1 = (ulonglong)(CARRY8(uVar30 * uVar1,uVar25) || CARRY8(uVar3,uVar2));
    uVar2 = uVar30 * puVar29[6] + uVar26;
    bVar32 = CARRY8(uVar30 * puVar29[6],uVar26) || CARRY8(uVar2,uVar1);
    plVar28[6] = uVar2 + uVar1;
    plVar28 = plVar28 + 9;
    puVar29 = puVar29 + 9;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  param_3[0x1c] = bVar32 + uVar24;
  return;
}



// FUNCTION 144d02ce0 FUN_144d02ce0 body=244 status=ok
// SIG undefined FUN_144d02ce0(void)

undefined8 FUN_144d02ce0(undefined8 param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 local_98 [8];
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  
  iVar1 = *param_3;
  FUN_144d069c0(param_2,(longlong)iVar1,local_98,1);
  if (iVar1 < 0) {
    bVar4 = local_90 < *param_2;
    local_90 = local_90 - *param_2;
    uVar2 = (ulonglong)bVar4;
    bVar4 = local_88 < param_2[1];
    uVar3 = local_88 - param_2[1];
    local_88 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_80 < param_2[2];
    uVar3 = local_80 - param_2[2];
    local_80 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_78 < param_2[3];
    uVar3 = local_78 - param_2[3];
    local_78 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_70 < param_2[4];
    uVar3 = local_70 - param_2[4];
    local_70 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_68 < param_2[5];
    uVar3 = local_68 - param_2[5];
    local_68 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_60 < param_2[6];
    uVar3 = local_60 - param_2[6];
    local_60 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_58 < param_2[7];
    uVar3 = local_58 - param_2[7];
    local_58 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_50 < param_2[8];
    uVar3 = local_50 - param_2[8];
    local_50 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_48 < param_2[9];
    uVar3 = local_48 - param_2[9];
    local_48 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_40 < param_2[10];
    uVar3 = local_40 - param_2[10];
    local_40 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_38 < param_2[0xb];
    uVar3 = local_38 - param_2[0xb];
    local_38 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_30 < param_2[0xc];
    uVar3 = local_30 - param_2[0xc];
    local_30 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_28 < param_2[0xd];
    uVar3 = local_28 - param_2[0xd];
    local_28 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_20 < param_2[0xe];
    uVar3 = local_20 - param_2[0xe];
    local_20 = uVar3 - uVar2;
    uVar2 = (ulonglong)(bVar4 || uVar3 < uVar2);
    bVar4 = local_18 < param_2[0xf];
    uVar3 = local_18 - param_2[0xf];
    local_18 = uVar3 - uVar2;
    local_10 = (local_10 - param_2[0x10]) - (ulonglong)(bVar4 || uVar3 < uVar2);
  }
  FUN_144d00690(local_98,param_1);
  return param_1;
}



// FUNCTION 144d02de0 FUN_144d02de0 body=1813 status=ok
// SIG undefined FUN_144d02de0(void)

void FUN_144d02de0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
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
  int iVar78;
  ulonglong *puVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  ulonglong uVar86;
  ulonglong *puVar87;
  longlong lVar88;
  ulonglong uVar89;
  ulonglong uVar90;
  ulonglong uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  ulonglong uVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  ulonglong uVar97;
  ulonglong uVar98;
  ulonglong uVar99;
  ulonglong uVar100;
  ulonglong uVar101;
  ulonglong uVar102;
  ulonglong uVar103;
  ulonglong uVar104;
  ulonglong uVar105;
  ulonglong *puVar106;
  ulonglong uVar107;
  ulonglong uVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  ulonglong uVar111;
  ulonglong uVar112;
  ulonglong uVar113;
  ulonglong uVar114;
  longlong local_res20;
  ulonglong local_168 [37];
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  local_168[0] = uVar2 * uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar2;
  uVar89 = SUB168(auVar10 * auVar44,8);
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar3;
  uVar90 = SUB168(auVar11 * auVar45,8);
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  local_168[1] = uVar3 * uVar1 + uVar89;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar4;
  uVar91 = SUB168(auVar12 * auVar46,8);
  uVar89 = (ulonglong)CARRY8(uVar3 * uVar1,uVar89);
  uVar9 = uVar4 * uVar1 + uVar90;
  local_168[2] = uVar9 + uVar89;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar5;
  uVar92 = SUB168(auVar13 * auVar47,8);
  uVar89 = (ulonglong)(CARRY8(uVar4 * uVar1,uVar90) || CARRY8(uVar9,uVar89));
  uVar9 = uVar5 * uVar1 + uVar91;
  local_168[3] = uVar9 + uVar89;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar6;
  uVar90 = SUB168(auVar14 * auVar48,8);
  uVar89 = (ulonglong)(CARRY8(uVar5 * uVar1,uVar91) || CARRY8(uVar9,uVar89));
  uVar9 = uVar6 * uVar1 + uVar92;
  local_168[4] = uVar9 + uVar89;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar7;
  uVar91 = SUB168(auVar15 * auVar49,8);
  uVar89 = (ulonglong)(CARRY8(uVar6 * uVar1,uVar92) || CARRY8(uVar9,uVar89));
  uVar9 = uVar7 * uVar1 + uVar90;
  local_168[5] = uVar9 + uVar89;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar8;
  uVar92 = SUB168(auVar16 * auVar50,8);
  uVar9 = (ulonglong)(CARRY8(uVar7 * uVar1,uVar90) || CARRY8(uVar9,uVar89));
  uVar90 = uVar8 * uVar1 + uVar91;
  local_168[6] = uVar90 + uVar9;
  uVar89 = param_1[7];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_1[7];
  uVar93 = SUB168(auVar17 * auVar51,8);
  uVar90 = (ulonglong)(CARRY8(uVar8 * uVar1,uVar91) || CARRY8(uVar90,uVar9));
  uVar91 = param_1[7] * uVar1 + uVar92;
  local_168[7] = uVar91 + uVar90;
  uVar9 = param_1[8];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar1;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_1[8];
  uVar94 = SUB168(auVar18 * auVar52,8);
  uVar91 = (ulonglong)(CARRY8(param_1[7] * uVar1,uVar92) || CARRY8(uVar91,uVar90));
  uVar92 = param_1[8] * uVar1 + uVar93;
  local_168[8] = uVar92 + uVar91;
  uVar90 = param_1[9];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar1;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_1[9];
  uVar95 = SUB168(auVar19 * auVar53,8);
  uVar92 = (ulonglong)(CARRY8(param_1[8] * uVar1,uVar93) || CARRY8(uVar92,uVar91));
  uVar93 = param_1[9] * uVar1 + uVar94;
  local_168[9] = uVar93 + uVar92;
  uVar91 = param_1[10];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_1[10];
  uVar96 = SUB168(auVar20 * auVar54,8);
  uVar93 = (ulonglong)(CARRY8(param_1[9] * uVar1,uVar94) || CARRY8(uVar93,uVar92));
  uVar94 = param_1[10] * uVar1 + uVar95;
  local_168[10] = uVar94 + uVar93;
  uVar92 = param_1[0xb];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_1[0xb];
  uVar97 = SUB168(auVar21 * auVar55,8);
  uVar94 = (ulonglong)(CARRY8(param_1[10] * uVar1,uVar95) || CARRY8(uVar94,uVar93));
  uVar95 = param_1[0xb] * uVar1 + uVar96;
  local_168[0xb] = uVar95 + uVar94;
  uVar93 = param_1[0xc];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_1[0xc];
  uVar98 = SUB168(auVar22 * auVar56,8);
  uVar95 = (ulonglong)(CARRY8(param_1[0xb] * uVar1,uVar96) || CARRY8(uVar95,uVar94));
  uVar96 = param_1[0xc] * uVar1 + uVar97;
  local_168[0xc] = uVar96 + uVar95;
  uVar94 = param_1[0xd];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_1[0xd];
  uVar99 = SUB168(auVar23 * auVar57,8);
  uVar96 = (ulonglong)(CARRY8(param_1[0xc] * uVar1,uVar97) || CARRY8(uVar96,uVar95));
  uVar97 = param_1[0xd] * uVar1 + uVar98;
  local_168[0xd] = uVar97 + uVar96;
  uVar95 = param_1[0xe];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_1[0xe];
  uVar100 = SUB168(auVar24 * auVar58,8);
  uVar97 = (ulonglong)(CARRY8(param_1[0xd] * uVar1,uVar98) || CARRY8(uVar97,uVar96));
  uVar98 = param_1[0xe] * uVar1 + uVar99;
  local_168[0xe] = uVar98 + uVar97;
  uVar96 = param_1[0xf];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_1[0xf];
  uVar101 = SUB168(auVar25 * auVar59,8);
  uVar98 = (ulonglong)(CARRY8(param_1[0xe] * uVar1,uVar99) || CARRY8(uVar98,uVar97));
  uVar99 = param_1[0xf] * uVar1 + uVar100;
  uVar97 = param_1[0x10];
  local_168[0xf] = uVar99 + uVar98;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar97;
  uVar98 = (ulonglong)(CARRY8(param_1[0xf] * uVar1,uVar100) || CARRY8(uVar99,uVar98));
  uVar99 = uVar97 * uVar1 + uVar101;
  local_168[0x10] = uVar99 + uVar98;
  local_168[0x11] =
       SUB168(auVar26 * auVar60,8) +
       (ulonglong)(CARRY8(uVar97 * uVar1,uVar101) || CARRY8(uVar99,uVar98));
  local_res20 = 1;
  iVar78 = 1;
  do {
    uVar1 = param_2[local_res20];
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar1;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar2;
    uVar98 = SUB168(auVar27 * auVar61,8);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar1;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar3;
    uVar100 = SUB168(auVar28 * auVar62,8);
    uVar101 = uVar3 * uVar1 + uVar98;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar1;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar4;
    uVar102 = SUB168(auVar29 * auVar63,8);
    uVar98 = (ulonglong)CARRY8(uVar3 * uVar1,uVar98);
    uVar99 = uVar4 * uVar1 + uVar100;
    uVar80 = uVar99 + uVar98;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar1;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar5;
    uVar103 = SUB168(auVar30 * auVar64,8);
    uVar98 = (ulonglong)(CARRY8(uVar4 * uVar1,uVar100) || CARRY8(uVar99,uVar98));
    uVar99 = uVar5 * uVar1 + uVar102;
    uVar81 = uVar99 + uVar98;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar1;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar6;
    uVar100 = SUB168(auVar31 * auVar65,8);
    uVar98 = (ulonglong)(CARRY8(uVar5 * uVar1,uVar102) || CARRY8(uVar99,uVar98));
    uVar99 = uVar6 * uVar1 + uVar103;
    uVar82 = uVar99 + uVar98;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar1;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar7;
    uVar102 = SUB168(auVar32 * auVar66,8);
    uVar98 = (ulonglong)(CARRY8(uVar6 * uVar1,uVar103) || CARRY8(uVar99,uVar98));
    uVar99 = uVar7 * uVar1 + uVar100;
    uVar83 = uVar99 + uVar98;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar1;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar8;
    uVar103 = SUB168(auVar33 * auVar67,8);
    uVar98 = (ulonglong)(CARRY8(uVar7 * uVar1,uVar100) || CARRY8(uVar99,uVar98));
    uVar99 = uVar8 * uVar1 + uVar102;
    uVar84 = uVar99 + uVar98;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar1;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar89;
    uVar104 = SUB168(auVar34 * auVar68,8);
    uVar100 = uVar89 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar8 * uVar1,uVar102) || CARRY8(uVar99,uVar98));
    uVar99 = uVar100 + uVar103;
    uVar85 = uVar99 + uVar98;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar1;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar9;
    uVar105 = SUB168(auVar35 * auVar69,8);
    uVar102 = uVar9 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar100,uVar103) || CARRY8(uVar99,uVar98));
    uVar99 = uVar102 + uVar104;
    uVar86 = uVar99 + uVar98;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar1;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar90;
    uVar100 = SUB168(auVar36 * auVar70,8);
    uVar103 = uVar90 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar102,uVar104) || CARRY8(uVar99,uVar98));
    uVar99 = uVar103 + uVar105;
    uVar111 = uVar99 + uVar98;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar1;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar91;
    uVar102 = SUB168(auVar37 * auVar71,8);
    uVar104 = uVar91 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar103,uVar105) || CARRY8(uVar99,uVar98));
    uVar99 = uVar104 + uVar100;
    uVar110 = uVar99 + uVar98;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar1;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar92;
    uVar103 = SUB168(auVar38 * auVar72,8);
    uVar113 = uVar92 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar104,uVar100) || CARRY8(uVar99,uVar98));
    uVar99 = uVar113 + uVar102;
    uVar114 = uVar99 + uVar98;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar1;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar93;
    uVar100 = SUB168(auVar39 * auVar73,8);
    uVar105 = uVar93 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar113,uVar102) || CARRY8(uVar99,uVar98));
    uVar99 = uVar105 + uVar103;
    uVar112 = uVar99 + uVar98;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar1;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar94;
    uVar102 = SUB168(auVar40 * auVar74,8);
    uVar104 = uVar94 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar105,uVar103) || CARRY8(uVar99,uVar98));
    uVar99 = uVar104 + uVar100;
    uVar105 = uVar99 + uVar98;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar1;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar95;
    uVar103 = SUB168(auVar41 * auVar75,8);
    uVar113 = uVar95 * uVar1;
    uVar98 = (ulonglong)(CARRY8(uVar104,uVar100) || CARRY8(uVar99,uVar98));
    uVar99 = uVar113 + uVar102;
    uVar107 = uVar99 + uVar98;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar1;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar96;
    uVar104 = SUB168(auVar42 * auVar76,8);
    uVar108 = uVar96 * uVar1;
    uVar99 = (ulonglong)(CARRY8(uVar113,uVar102) || CARRY8(uVar99,uVar98));
    uVar100 = uVar108 + uVar103;
    uVar109 = uVar100 + uVar99;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar1;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar97;
    uVar98 = param_2[local_res20];
    lVar88 = local_res20 + 1;
    uVar100 = (ulonglong)(CARRY8(uVar108,uVar103) || CARRY8(uVar100,uVar99));
    uVar102 = uVar97 * uVar98 + uVar104;
    uVar113 = uVar102 + uVar100;
    uVar99 = local_168[local_res20];
    local_168[iVar78] = uVar2 * uVar1 + local_168[local_res20];
    uVar99 = (ulonglong)CARRY8(uVar2 * uVar1,uVar99);
    uVar1 = local_168[lVar88];
    uVar103 = uVar101 + local_168[lVar88];
    local_168[iVar78 + 1] = uVar103 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar101,uVar1) || CARRY8(uVar103,uVar99));
    uVar1 = local_168[local_res20 + 2];
    uVar101 = uVar80 + local_168[local_res20 + 2];
    local_168[iVar78 + 2] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar80,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 3];
    uVar101 = uVar81 + local_168[local_res20 + 3];
    local_168[iVar78 + 3] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar81,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 4];
    uVar101 = uVar82 + local_168[local_res20 + 4];
    local_168[iVar78 + 4] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar82,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 5];
    uVar101 = uVar83 + local_168[local_res20 + 5];
    local_168[iVar78 + 5] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar83,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 6];
    uVar101 = uVar84 + local_168[local_res20 + 6];
    local_168[iVar78 + 6] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar84,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 7];
    uVar101 = uVar85 + local_168[local_res20 + 7];
    local_168[iVar78 + 7] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar85,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 8];
    uVar101 = uVar86 + local_168[local_res20 + 8];
    local_168[iVar78 + 8] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar86,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 9];
    uVar101 = uVar111 + local_168[local_res20 + 9];
    local_168[iVar78 + 9] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar111,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 10];
    uVar101 = uVar110 + local_168[local_res20 + 10];
    local_168[iVar78 + 10] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar110,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0xb];
    uVar101 = uVar114 + local_168[local_res20 + 0xb];
    local_168[iVar78 + 0xb] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar114,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0xc];
    uVar101 = uVar112 + local_168[local_res20 + 0xc];
    local_168[iVar78 + 0xc] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar112,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0xd];
    uVar101 = uVar105 + local_168[local_res20 + 0xd];
    local_168[iVar78 + 0xd] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar105,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0xe];
    uVar101 = uVar107 + local_168[local_res20 + 0xe];
    local_168[iVar78 + 0xe] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar107,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0xf];
    uVar101 = uVar109 + local_168[local_res20 + 0xf];
    local_168[iVar78 + 0xf] = uVar101 + uVar99;
    uVar99 = (ulonglong)(CARRY8(uVar109,uVar1) || CARRY8(uVar101,uVar99));
    uVar1 = local_168[local_res20 + 0x10];
    uVar101 = uVar113 + local_168[local_res20 + 0x10];
    local_168[iVar78 + 0x10] = uVar101 + uVar99;
    local_168[iVar78 + 0x11] =
         SUB168(auVar43 * auVar77,8) +
         (ulonglong)(CARRY8(uVar97 * uVar98,uVar104) || CARRY8(uVar102,uVar100)) +
         (ulonglong)(CARRY8(uVar113,uVar1) || CARRY8(uVar101,uVar99));
    local_res20 = lVar88;
    iVar78 = iVar78 + 1;
  } while (lVar88 < 0x12);
  lVar88 = 2;
  puVar79 = local_168;
  do {
    puVar106 = param_3;
    puVar87 = puVar79;
    uVar1 = puVar87[1];
    uVar2 = puVar87[2];
    uVar3 = puVar87[3];
    *puVar106 = *puVar87;
    puVar106[1] = uVar1;
    uVar1 = puVar87[4];
    uVar4 = puVar87[5];
    puVar106[2] = uVar2;
    puVar106[3] = uVar3;
    uVar2 = puVar87[6];
    uVar3 = puVar87[7];
    puVar106[4] = uVar1;
    puVar106[5] = uVar4;
    uVar1 = puVar87[8];
    uVar4 = puVar87[9];
    puVar106[6] = uVar2;
    puVar106[7] = uVar3;
    uVar2 = puVar87[10];
    uVar3 = puVar87[0xb];
    puVar106[8] = uVar1;
    puVar106[9] = uVar4;
    uVar1 = puVar87[0xc];
    uVar4 = puVar87[0xd];
    puVar106[10] = uVar2;
    puVar106[0xb] = uVar3;
    uVar2 = puVar87[0xe];
    uVar3 = puVar87[0xf];
    puVar106[0xc] = uVar1;
    puVar106[0xd] = uVar4;
    puVar106[0xe] = uVar2;
    puVar106[0xf] = uVar3;
    lVar88 = lVar88 + -1;
    puVar79 = puVar87 + 0x10;
    param_3 = puVar106 + 0x10;
  } while (lVar88 != 0);
  uVar2 = puVar87[0x11];
  uVar1 = puVar87[0x12];
  puVar106[0x10] = puVar87[0x10];
  puVar106[0x11] = uVar2;
  puVar106[0x12] = uVar1;
  return;
}



// FUNCTION 144d03500 FUN_144d03500 body=309 status=ok
// SIG undefined FUN_144d03500(void)

void FUN_144d03500(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  uVar2 = *param_2;
  *(ulonglong *)(param_1 + 0x90) = uVar1 - *param_2;
  uVar3 = *(ulonglong *)(param_1 + 0x98);
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  *(ulonglong *)(param_1 + 0x98) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  *(ulonglong *)(param_1 + 0xa0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xa8);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  *(ulonglong *)(param_1 + 0xa8) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xb0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  *(ulonglong *)(param_1 + 0xb0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xb8);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  *(ulonglong *)(param_1 + 0xb8) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xc0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  *(ulonglong *)(param_1 + 0xc0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 200);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  *(ulonglong *)(param_1 + 200) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xd0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  *(ulonglong *)(param_1 + 0xd0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xd8);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  *(ulonglong *)(param_1 + 0xd8) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xe0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  *(ulonglong *)(param_1 + 0xe0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xe8);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  *(ulonglong *)(param_1 + 0xe8) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0xf0);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar5 = uVar2 - param_2[0xc];
  *(ulonglong *)(param_1 + 0xf0) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0xf8);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xd];
  uVar5 = uVar3 - param_2[0xd];
  *(ulonglong *)(param_1 + 0xf8) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x100);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xe];
  uVar5 = uVar2 - param_2[0xe];
  *(ulonglong *)(param_1 + 0x100) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x108);
  uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xf];
  uVar4 = uVar3 - param_2[0xf];
  *(ulonglong *)(param_1 + 0x108) = uVar4 - uVar2;
  *(ulonglong *)(param_1 + 0x110) =
       (*(longlong *)(param_1 + 0x110) - param_2[0x10]) -
       (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  return;
}



// FUNCTION 144d03640 FUN_144d03640 body=1745 status=ok
// SIG undefined FUN_144d03640(void)

void FUN_144d03640(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
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
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  int iVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  ulonglong uVar89;
  ulonglong uVar90;
  ulonglong uVar91;
  longlong local_res8;
  ulonglong local_1c8 [22];
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar83 = param_1[1];
  uVar89 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar3;
  uVar73 = SUB168(auVar5 * auVar39,8);
  uVar79 = param_1[3];
  uVar80 = param_1[4];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar83;
  uVar74 = SUB168(auVar6 * auVar40,8);
  uVar4 = param_1[6];
  uVar81 = param_1[5];
  local_1c8[1] = uVar83 * uVar2 + uVar73;
  local_78 = uVar3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar89;
  uVar75 = SUB168(auVar7 * auVar41,8);
  local_70 = uVar83;
  local_68 = uVar89;
  local_60 = uVar79;
  uVar73 = (ulonglong)CARRY8(uVar83 * uVar2,uVar73);
  uVar77 = uVar89 * uVar2 + uVar74;
  local_58 = uVar80;
  local_1c8[2] = uVar77 + uVar73;
  local_50 = uVar81;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar79;
  uVar76 = SUB168(auVar8 * auVar42,8);
  uVar73 = (ulonglong)(CARRY8(uVar89 * uVar2,uVar74) || CARRY8(uVar77,uVar73));
  uVar77 = uVar79 * uVar2 + uVar75;
  local_1c8[3] = uVar77 + uVar73;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar80;
  uVar74 = SUB168(auVar9 * auVar43,8);
  uVar73 = (ulonglong)(CARRY8(uVar79 * uVar2,uVar75) || CARRY8(uVar77,uVar73));
  uVar77 = uVar80 * uVar2 + uVar76;
  local_1c8[4] = uVar77 + uVar73;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar81;
  uVar75 = SUB168(auVar10 * auVar44,8);
  uVar73 = (ulonglong)(CARRY8(uVar80 * uVar2,uVar76) || CARRY8(uVar77,uVar73));
  uVar77 = uVar81 * uVar2 + uVar74;
  local_1c8[5] = uVar77 + uVar73;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar4;
  uVar76 = SUB168(auVar11 * auVar45,8);
  local_118 = param_1[7];
  uVar73 = (ulonglong)(CARRY8(uVar81 * uVar2,uVar74) || CARRY8(uVar77,uVar73));
  uVar77 = uVar4 * uVar2 + uVar75;
  local_1c8[6] = uVar77 + uVar73;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = local_118;
  uVar74 = SUB168(auVar12 * auVar46,8);
  local_110 = param_1[8];
  uVar73 = (ulonglong)(CARRY8(uVar4 * uVar2,uVar75) || CARRY8(uVar77,uVar73));
  uVar77 = local_118 * uVar2 + uVar76;
  local_1c8[7] = uVar77 + uVar73;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = local_110;
  uVar75 = SUB168(auVar13 * auVar47,8);
  local_108 = param_1[9];
  uVar73 = (ulonglong)(CARRY8(local_118 * uVar2,uVar76) || CARRY8(uVar77,uVar73));
  uVar77 = local_110 * uVar2 + uVar74;
  local_1c8[8] = uVar77 + uVar73;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = local_108;
  uVar76 = SUB168(auVar14 * auVar48,8);
  local_100 = param_1[10];
  uVar73 = (ulonglong)(CARRY8(local_110 * uVar2,uVar74) || CARRY8(uVar77,uVar73));
  uVar77 = local_108 * uVar2 + uVar75;
  local_1c8[9] = uVar77 + uVar73;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = local_100;
  uVar74 = SUB168(auVar15 * auVar49,8);
  local_f8 = param_1[0xb];
  uVar73 = (ulonglong)(CARRY8(local_108 * uVar2,uVar75) || CARRY8(uVar77,uVar73));
  uVar77 = local_100 * uVar2 + uVar76;
  local_1c8[10] = uVar77 + uVar73;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = local_f8;
  uVar75 = SUB168(auVar16 * auVar50,8);
  local_f0 = param_1[0xc];
  uVar73 = (ulonglong)(CARRY8(local_100 * uVar2,uVar76) || CARRY8(uVar77,uVar73));
  uVar77 = local_f8 * uVar2 + uVar74;
  local_1c8[0xb] = uVar77 + uVar73;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = local_f0;
  uVar76 = SUB168(auVar17 * auVar51,8);
  local_e8 = param_1[0xd];
  uVar73 = (ulonglong)(CARRY8(local_f8 * uVar2,uVar74) || CARRY8(uVar77,uVar73));
  uVar77 = local_f0 * uVar2 + uVar75;
  local_1c8[0xc] = uVar77 + uVar73;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = local_e8;
  uVar74 = SUB168(auVar18 * auVar52,8);
  local_e0 = param_1[0xe];
  uVar73 = (ulonglong)(CARRY8(local_f0 * uVar2,uVar75) || CARRY8(uVar77,uVar73));
  uVar77 = local_e8 * uVar2 + uVar76;
  local_1c8[0xd] = uVar77 + uVar73;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = local_e0;
  uVar75 = SUB168(auVar19 * auVar53,8);
  uVar73 = (ulonglong)(CARRY8(local_e8 * uVar2,uVar76) || CARRY8(uVar77,uVar73));
  uVar77 = local_e0 * uVar2 + uVar74;
  local_d8 = param_1[0xf];
  local_1c8[0xe] = uVar77 + uVar73;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar2;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = local_d8;
  uVar76 = SUB168(auVar20 * auVar54,8);
  local_d0 = param_1[0x10];
  uVar73 = (ulonglong)(CARRY8(local_e0 * uVar2,uVar74) || CARRY8(uVar77,uVar73));
  uVar77 = local_d8 * uVar2 + uVar75;
  local_1c8[0xf] = uVar77 + uVar73;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar2;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = local_d0;
  uVar73 = (ulonglong)(CARRY8(local_d8 * uVar2,uVar75) || CARRY8(uVar77,uVar73));
  uVar77 = local_d0 * uVar2 + uVar76;
  local_1c8[0x10] = uVar77 + uVar73;
  local_res8 = 1;
  local_1c8[0x11] =
       SUB168(auVar21 * auVar55,8) +
       (ulonglong)(CARRY8(local_d0 * uVar2,uVar76) || CARRY8(uVar77,uVar73));
  iVar85 = 1;
  do {
    uVar73 = param_2[local_res8];
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar73;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = local_78;
    uVar77 = SUB168(auVar22 * auVar56,8);
    uVar74 = local_78 * uVar73;
    local_c8 = uVar74;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar73;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar83;
    uVar75 = SUB168(auVar23 * auVar57,8);
    local_c0 = uVar83 * uVar73 + uVar77;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar73;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar89;
    uVar76 = SUB168(auVar24 * auVar58,8);
    uVar83 = (ulonglong)CARRY8(uVar83 * uVar73,uVar77);
    uVar77 = uVar89 * uVar73 + uVar75;
    local_b8 = uVar77 + uVar83;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar73;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar79;
    uVar78 = SUB168(auVar25 * auVar59,8);
    uVar83 = (ulonglong)(CARRY8(uVar89 * uVar73,uVar75) || CARRY8(uVar77,uVar83));
    uVar89 = uVar79 * uVar73 + uVar76;
    local_b0 = uVar89 + uVar83;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar73;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar80;
    uVar77 = SUB168(auVar26 * auVar60,8);
    uVar83 = (ulonglong)(CARRY8(uVar79 * uVar73,uVar76) || CARRY8(uVar89,uVar83));
    uVar89 = uVar80 * uVar73 + uVar78;
    local_a8 = uVar89 + uVar83;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar73;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar81;
    uVar79 = SUB168(auVar27 * auVar61,8);
    uVar83 = (ulonglong)(CARRY8(uVar80 * uVar73,uVar78) || CARRY8(uVar89,uVar83));
    uVar89 = uVar81 * uVar73 + uVar77;
    local_a0 = uVar89 + uVar83;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar73;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar4;
    uVar80 = SUB168(auVar28 * auVar62,8);
    uVar83 = (ulonglong)(CARRY8(uVar81 * uVar73,uVar77) || CARRY8(uVar89,uVar83));
    uVar89 = uVar4 * uVar73 + uVar79;
    local_98 = uVar89 + uVar83;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar73;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = local_118;
    uVar81 = SUB168(auVar29 * auVar63,8);
    uVar83 = (ulonglong)(CARRY8(uVar4 * uVar73,uVar79) || CARRY8(uVar89,uVar83));
    uVar89 = local_118 * uVar73 + uVar80;
    local_90 = uVar89 + uVar83;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar73;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = local_110;
    uVar79 = SUB168(auVar30 * auVar64,8);
    uVar83 = (ulonglong)(CARRY8(local_118 * uVar73,uVar80) || CARRY8(uVar89,uVar83));
    uVar89 = local_110 * uVar73 + uVar81;
    local_88 = uVar89 + uVar83;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar73;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = local_108;
    uVar80 = SUB168(auVar31 * auVar65,8);
    uVar83 = (ulonglong)(CARRY8(local_110 * uVar73,uVar81) || CARRY8(uVar89,uVar83));
    uVar89 = local_108 * uVar73 + uVar79;
    local_80 = uVar89 + uVar83;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar73;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = local_100;
    uVar81 = SUB168(auVar32 * auVar66,8);
    uVar83 = (ulonglong)(CARRY8(local_108 * uVar73,uVar79) || CARRY8(uVar89,uVar83));
    uVar89 = local_100 * uVar73 + uVar80;
    uVar88 = uVar89 + uVar83;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar73;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = local_f8;
    uVar79 = SUB168(auVar33 * auVar67,8);
    uVar83 = (ulonglong)(CARRY8(local_100 * uVar73,uVar80) || CARRY8(uVar89,uVar83));
    uVar89 = local_f8 * uVar73 + uVar81;
    uVar76 = uVar89 + uVar83;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar73;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = local_f0;
    uVar80 = SUB168(auVar34 * auVar68,8);
    uVar83 = (ulonglong)(CARRY8(local_f8 * uVar73,uVar81) || CARRY8(uVar89,uVar83));
    uVar89 = local_f0 * uVar73 + uVar79;
    uVar91 = uVar89 + uVar83;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar73;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = local_e8;
    uVar81 = SUB168(auVar35 * auVar69,8);
    uVar83 = (ulonglong)(CARRY8(local_f0 * uVar73,uVar79) || CARRY8(uVar89,uVar83));
    uVar89 = local_e8 * uVar73 + uVar80;
    uVar90 = uVar89 + uVar83;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar73;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = local_e0;
    uVar79 = SUB168(auVar36 * auVar70,8);
    uVar83 = (ulonglong)(CARRY8(local_e8 * uVar73,uVar80) || CARRY8(uVar89,uVar83));
    uVar89 = local_e0 * uVar73 + uVar81;
    uVar84 = uVar89 + uVar83;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar73;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = local_d8;
    uVar78 = SUB168(auVar37 * auVar71,8);
    uVar83 = (ulonglong)(CARRY8(local_e0 * uVar73,uVar81) || CARRY8(uVar89,uVar83));
    uVar89 = local_d8 * uVar73 + uVar79;
    uVar82 = uVar89 + uVar83;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar73;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = local_d0;
    uVar86 = local_d0 * param_2[local_res8];
    uVar77 = (ulonglong)(CARRY8(local_d8 * uVar73,uVar79) || CARRY8(uVar89,uVar83));
    uVar75 = uVar86 + uVar78;
    uVar87 = uVar75 + uVar77;
    uVar83 = local_1c8[local_res8];
    lVar1 = local_res8 + 1;
    local_1c8[iVar85] = uVar74 + local_1c8[local_res8];
    uVar89 = (ulonglong)CARRY8(uVar74,uVar83);
    uVar83 = local_1c8[lVar1];
    uVar79 = local_c0 + local_1c8[lVar1];
    local_1c8[iVar85 + 1] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_c0,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 2];
    uVar79 = local_b8 + local_1c8[local_res8 + 2];
    local_1c8[iVar85 + 2] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_b8,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 3];
    uVar79 = local_b0 + local_1c8[local_res8 + 3];
    local_1c8[iVar85 + 3] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_b0,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 4];
    uVar79 = local_a8 + local_1c8[local_res8 + 4];
    local_1c8[iVar85 + 4] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_a8,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 5];
    uVar79 = local_a0 + local_1c8[local_res8 + 5];
    local_1c8[iVar85 + 5] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_a0,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 6];
    uVar79 = local_98 + local_1c8[local_res8 + 6];
    local_1c8[iVar85 + 6] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_98,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 7];
    uVar79 = local_90 + local_1c8[local_res8 + 7];
    local_1c8[iVar85 + 7] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_90,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 8];
    uVar79 = local_88 + local_1c8[local_res8 + 8];
    local_1c8[iVar85 + 8] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_88,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 9];
    uVar79 = local_80 + local_1c8[local_res8 + 9];
    local_1c8[iVar85 + 9] = uVar79 + uVar89;
    uVar89 = (ulonglong)(CARRY8(local_80,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 10];
    uVar79 = uVar88 + local_1c8[local_res8 + 10];
    local_1c8[iVar85 + 10] = uVar79 + uVar89;
    uVar81 = local_50;
    uVar89 = (ulonglong)(CARRY8(uVar88,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 0xb];
    uVar79 = uVar76 + local_1c8[local_res8 + 0xb];
    local_1c8[iVar85 + 0xb] = uVar79 + uVar89;
    uVar80 = local_58;
    uVar89 = (ulonglong)(CARRY8(uVar76,uVar83) || CARRY8(uVar79,uVar89));
    uVar83 = local_1c8[local_res8 + 0xc];
    uVar73 = uVar91 + local_1c8[local_res8 + 0xc];
    local_1c8[iVar85 + 0xc] = uVar73 + uVar89;
    uVar79 = local_60;
    uVar73 = (ulonglong)(CARRY8(uVar91,uVar83) || CARRY8(uVar73,uVar89));
    uVar83 = local_1c8[local_res8 + 0xd];
    uVar74 = uVar90 + local_1c8[local_res8 + 0xd];
    local_1c8[iVar85 + 0xd] = uVar74 + uVar73;
    uVar89 = local_68;
    uVar74 = (ulonglong)(CARRY8(uVar90,uVar83) || CARRY8(uVar74,uVar73));
    uVar73 = local_1c8[local_res8 + 0xe];
    uVar76 = uVar84 + local_1c8[local_res8 + 0xe];
    local_1c8[iVar85 + 0xe] = uVar76 + uVar74;
    uVar83 = local_70;
    uVar74 = (ulonglong)(CARRY8(uVar84,uVar73) || CARRY8(uVar76,uVar74));
    uVar73 = local_1c8[local_res8 + 0xf];
    uVar76 = uVar82 + local_1c8[local_res8 + 0xf];
    local_1c8[iVar85 + 0xf] = uVar76 + uVar74;
    uVar74 = (ulonglong)(CARRY8(uVar82,uVar73) || CARRY8(uVar76,uVar74));
    uVar73 = local_1c8[local_res8 + 0x10];
    uVar76 = uVar87 + local_1c8[local_res8 + 0x10];
    local_1c8[iVar85 + 0x10] = uVar76 + uVar74;
    local_1c8[iVar85 + 0x11] =
         SUB168(auVar38 * auVar72,8) + (ulonglong)(CARRY8(uVar86,uVar78) || CARRY8(uVar75,uVar77)) +
         (ulonglong)(CARRY8(uVar87,uVar73) || CARRY8(uVar76,uVar74));
    iVar85 = iVar85 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 4);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_1c8[1];
  param_3[2] = local_1c8[2];
  param_3[3] = local_1c8[3];
  param_3[4] = local_1c8[4];
  param_3[5] = local_1c8[5];
  param_3[6] = local_1c8[6];
  param_3[7] = local_1c8[7];
  param_3[8] = local_1c8[8];
  param_3[9] = local_1c8[9];
  param_3[10] = local_1c8[10];
  param_3[0xb] = local_1c8[0xb];
  param_3[0xc] = local_1c8[0xc];
  param_3[0xd] = local_1c8[0xd];
  param_3[0xe] = local_1c8[0xe];
  param_3[0xf] = local_1c8[0xf];
  param_3[0x10] = local_1c8[0x10];
  param_3[0x11] = local_1c8[0x11];
  param_3[0x12] = local_1c8[0x12];
  param_3[0x13] = local_1c8[0x13];
  param_3[0x14] = local_1c8[0x14];
  return;
}



// FUNCTION 144d03d20 FUN_144d03d20 body=259 status=ok
// SIG undefined FUN_144d03d20(void)

void FUN_144d03d20(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144d03e30 FUN_144d03e30 body=358 status=ok
// SIG undefined FUN_144d03e30(void)

ulonglong FUN_144d03e30(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar6 = 0x14;
  uVar7 = (longlong)param_1[0x14] >> 0x3f;
  lVar3 = 0x14;
  while (param_1[lVar3] == uVar7) {
    iVar6 = iVar6 + -1;
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if ((longlong)(uVar7 ^ *param_1) < 0) {
        *param_2 = 1;
        uVar7 = *param_1 >> 1 | uVar7 & 0x8000000000000000;
      }
      else {
        *param_2 = 0;
        uVar7 = *param_1;
      }
      return uVar7;
    }
  }
  uVar5 = param_1[lVar3] ^ uVar7;
  uVar4 = (uint)uVar5 | (uint)(uVar5 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar1 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  iVar8 = 0x20 - iVar2;
  if (0x1f < 0x20 - iVar2) {
    iVar8 = 0x40 - iVar1;
  }
  iVar8 = iVar8 + -1;
  *param_2 = iVar6 * 0x40 - iVar8;
  if (iVar8 < 0) {
    return uVar7 & 0x8000000000000000 | param_1[iVar6] >> 1;
  }
  uVar7 = param_1[iVar6] << ((byte)iVar8 & 0x3f);
  if (iVar8 == 0) {
    return uVar7;
  }
  return uVar7 | param_1[(longlong)iVar6 + -1] >> (0x40 - (byte)iVar8 & 0x3f);
}



// FUNCTION 144d03fa0 FUN_144d03fa0 body=300 status=ok
// SIG undefined FUN_144d03fa0(void)

void FUN_144d03fa0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x198);
  puVar12 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar13 = (ulonglong)*(uint *)(param_1 + 1);
    puVar11 = puVar7;
    do {
      if (puVar11 != (undefined8 *)0x0) {
        lVar9 = 3;
        puVar5 = puVar12;
        puVar6 = puVar11;
        do {
          puVar10 = puVar6;
          puVar8 = puVar5;
          uVar4 = puVar8[1];
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          uVar4 = puVar8[3];
          puVar10[2] = puVar8[2];
          puVar10[3] = uVar4;
          uVar4 = puVar8[5];
          puVar10[4] = puVar8[4];
          puVar10[5] = uVar4;
          uVar4 = puVar8[7];
          puVar10[6] = puVar8[6];
          puVar10[7] = uVar4;
          uVar4 = puVar8[9];
          puVar10[8] = puVar8[8];
          puVar10[9] = uVar4;
          uVar4 = puVar8[0xb];
          puVar10[10] = puVar8[10];
          puVar10[0xb] = uVar4;
          uVar4 = puVar8[0xd];
          puVar10[0xc] = puVar8[0xc];
          puVar10[0xd] = uVar4;
          uVar4 = puVar8[0xf];
          puVar10[0xe] = puVar8[0xe];
          puVar10[0xf] = uVar4;
          lVar9 = lVar9 + -1;
          puVar5 = puVar8 + 0x10;
          puVar6 = puVar10 + 0x10;
        } while (lVar9 != 0);
        uVar1 = *(undefined4 *)((longlong)puVar8 + 0x84);
        uVar2 = *(undefined4 *)(puVar8 + 0x11);
        uVar3 = *(undefined4 *)((longlong)puVar8 + 0x8c);
        *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar8 + 0x10);
        *(undefined4 *)((longlong)puVar10 + 0x84) = uVar1;
        *(undefined4 *)(puVar10 + 0x11) = uVar2;
        *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar3;
        puVar10[0x12] = puVar8[0x12];
      }
      puVar11 = puVar11 + 0x33;
      puVar12 = puVar12 + 0x33;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d040d0 FUN_144d040d0 body=584 status=ok
// SIG undefined FUN_144d040d0(void)

byte FUN_144d040d0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  
  uVar1 = param_1[0x11];
  uVar2 = param_2[0x11];
  uVar3 = param_1[0x10];
  uVar4 = param_2[0x10];
  bVar19 = uVar1 <= uVar2 && uVar1 >= uVar2;
  uVar5 = param_1[0xf];
  bVar20 = bVar19 && (uVar3 <= uVar4 && uVar3 >= uVar4);
  uVar6 = param_1[0xe];
  bVar21 = bVar20 && (uVar5 <= param_2[0xf] && uVar5 >= param_2[0xf]);
  uVar7 = param_1[0xd];
  bVar22 = bVar21 && (uVar6 <= param_2[0xe] && uVar6 >= param_2[0xe]);
  uVar8 = param_1[0xc];
  bVar23 = bVar22 && (uVar7 <= param_2[0xd] && uVar7 >= param_2[0xd]);
  uVar9 = param_1[0xb];
  bVar24 = bVar23 && (uVar8 <= param_2[0xc] && uVar8 >= param_2[0xc]);
  uVar10 = param_1[10];
  bVar25 = bVar24 && (uVar9 <= param_2[0xb] && uVar9 >= param_2[0xb]);
  uVar11 = param_1[9];
  bVar26 = bVar25 && (uVar10 <= param_2[10] && uVar10 >= param_2[10]);
  uVar12 = param_1[8];
  bVar27 = bVar26 && (uVar11 <= param_2[9] && uVar11 >= param_2[9]);
  uVar13 = param_1[7];
  bVar28 = bVar27 && (uVar12 <= param_2[8] && uVar12 >= param_2[8]);
  uVar14 = param_1[6];
  bVar29 = bVar28 && (uVar13 <= param_2[7] && uVar13 >= param_2[7]);
  uVar15 = param_1[5];
  bVar30 = bVar29 && (uVar14 <= param_2[6] && uVar14 >= param_2[6]);
  uVar16 = param_1[4];
  bVar31 = bVar30 && (uVar15 <= param_2[5] && uVar15 >= param_2[5]);
  uVar17 = param_1[3];
  bVar32 = bVar31 && (uVar16 <= param_2[4] && uVar16 >= param_2[4]);
  uVar18 = param_1[2];
  bVar33 = bVar32 && (uVar17 <= param_2[3] && uVar17 >= param_2[3]);
  bVar34 = param_1[1] < param_2[1];
  if (*param_1 < *param_2) {
    bVar34 = param_1[1] <= param_2[1] && !bVar34 || bVar34;
  }
  return ((uVar18 <= param_2[2] && uVar18 >= param_2[2]) && bVar33) & bVar34 |
         (((((((((((((((uVar1 < uVar2 || uVar3 < uVar4 && bVar19) || uVar5 < param_2[0xf] && bVar20)
                     || uVar6 < param_2[0xe] && bVar21) || uVar7 < param_2[0xd] && bVar22) ||
                   uVar8 < param_2[0xc] && bVar23) || uVar9 < param_2[0xb] && bVar24) ||
                 uVar10 < param_2[10] && bVar25) || uVar11 < param_2[9] && bVar26) ||
               uVar12 < param_2[8] && bVar27) || uVar13 < param_2[7] && bVar28) ||
             uVar14 < param_2[6] && bVar29) || uVar15 < param_2[5] && bVar30) ||
           uVar16 < param_2[4] && bVar31) || uVar17 < param_2[3] && bVar32) ||
         uVar18 < param_2[2] && bVar33);
}



// FUNCTION 144d04320 FUN_144d04320 body=759 status=ok
// SIG undefined FUN_144d04320(void)

void FUN_144d04320(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  
  puVar4 = (ulonglong *)(param_2 + 8);
  uVar9 = *(longlong *)(param_2 + 0xb8) >> 0x3f;
  bVar11 = false;
  param_2 = param_1 - param_2;
  iVar10 = 1;
  do {
    uVar6 = uVar9;
    if (iVar10 + -1 < 0x18) {
      uVar6 = puVar4[-1];
    }
    uVar1 = *(ulonglong *)((longlong)puVar4 + param_2 + 0x18);
    uVar7 = uVar1 - uVar6;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 3) * 8) = uVar7 - bVar11;
    uVar8 = uVar9;
    if (iVar10 < 0x18) {
      uVar8 = *puVar4;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x20 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar1 < uVar6 || uVar7 < bVar11);
    uVar1 = uVar2 - uVar8;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 4) * 8) = uVar1 - uVar6;
    uVar7 = uVar9;
    if (iVar10 + 1 < 0x18) {
      uVar7 = puVar4[1];
    }
    uVar3 = *(ulonglong *)(param_2 + 0x28 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar2 < uVar8 || uVar1 < uVar6);
    uVar1 = uVar3 - uVar7;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 5) * 8) = uVar1 - uVar6;
    uVar8 = uVar9;
    if (iVar10 + 2 < 0x18) {
      uVar8 = puVar4[2];
    }
    uVar2 = *(ulonglong *)(param_2 + 0x30 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar6);
    uVar1 = uVar2 - uVar8;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 6) * 8) = uVar1 - uVar6;
    uVar7 = uVar9;
    if (iVar10 + 3 < 0x18) {
      uVar7 = puVar4[3];
    }
    uVar3 = *(ulonglong *)(param_2 + 0x38 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar2 < uVar8 || uVar1 < uVar6);
    uVar1 = uVar3 - uVar7;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 7) * 8) = uVar1 - uVar6;
    uVar8 = uVar9;
    if (iVar10 + 4 < 0x18) {
      uVar8 = puVar4[4];
    }
    uVar2 = *(ulonglong *)(param_2 + 0x40 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar6);
    uVar1 = uVar2 - uVar8;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 8) * 8) = uVar1 - uVar6;
    uVar7 = uVar9;
    if (iVar10 + 5 < 0x18) {
      uVar7 = puVar4[5];
    }
    uVar3 = *(ulonglong *)(param_2 + 0x48 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar2 < uVar8 || uVar1 < uVar6);
    uVar1 = uVar3 - uVar7;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 9) * 8) = uVar1 - uVar6;
    uVar8 = uVar9;
    if (iVar10 + 6 < 0x18) {
      uVar8 = puVar4[6];
    }
    uVar2 = *(ulonglong *)(param_2 + 0x50 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar6);
    uVar1 = uVar2 - uVar8;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 10) * 8) = uVar1 - uVar6;
    uVar7 = uVar9;
    if (iVar10 + 7 < 0x18) {
      uVar7 = puVar4[7];
    }
    uVar3 = *(ulonglong *)(param_2 + 0x58 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar2 < uVar8 || uVar1 < uVar6);
    uVar1 = uVar3 - uVar7;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 0xb) * 8) = uVar1 - uVar6;
    uVar8 = uVar9;
    if (iVar10 + 8 < 0x18) {
      uVar8 = puVar4[8];
    }
    uVar2 = *(ulonglong *)(param_2 + 0x60 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar6);
    uVar1 = uVar2 - uVar8;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 0xc) * 8) = uVar1 - uVar6;
    uVar7 = uVar9;
    if (iVar10 + 9 < 0x18) {
      uVar7 = puVar4[9];
    }
    uVar3 = *(ulonglong *)(param_2 + 0x68 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar2 < uVar8 || uVar1 < uVar6);
    uVar1 = uVar3 - uVar7;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 0xd) * 8) = uVar1 - uVar6;
    uVar8 = uVar9;
    if (iVar10 + 10 < 0x18) {
      uVar8 = puVar4[10];
    }
    uVar2 = *(ulonglong *)(param_2 + 0x70 + (longlong)puVar4);
    uVar6 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar6);
    uVar1 = uVar2 - uVar8;
    bVar11 = uVar2 < uVar8 || uVar1 < uVar6;
    iVar5 = iVar10 + 0xf;
    puVar4 = puVar4 + 0xc;
    *(ulonglong *)(param_1 + (longlong)(iVar10 + 0xe) * 8) = uVar1 - uVar6;
    iVar10 = iVar10 + 0xc;
  } while (iVar5 < 0x1c);
  return;
}



// FUNCTION 144d04620 FUN_144d04620 body=197 status=ok
// SIG undefined FUN_144d04620(void)

void FUN_144d04620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 <= param_1 + 0x1b) && (param_1 <= param_2 + 0x1b)) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    lVar5 = 0x1c;
    do {
      *param_2 = *(undefined8 *)(lVar6 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[4];
  uVar4 = param_1[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = param_1[8];
  uVar4 = param_1[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  uVar1 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar4;
  uVar1 = param_1[0xf];
  param_2[0xe] = param_1[0xe];
  param_2[0xf] = uVar1;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  param_2[0x10] = param_1[0x10];
  param_2[0x11] = uVar1;
  uVar1 = param_1[0x14];
  uVar4 = param_1[0x15];
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar3;
  uVar2 = param_1[0x16];
  uVar3 = param_1[0x17];
  param_2[0x14] = uVar1;
  param_2[0x15] = uVar4;
  uVar1 = param_1[0x18];
  uVar4 = param_1[0x19];
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar3;
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  param_2[0x18] = uVar1;
  param_2[0x19] = uVar4;
  param_2[0x1a] = uVar2;
  param_2[0x1b] = uVar3;
  return;
}



// FUNCTION 144d046f0 FUN_144d046f0 body=592 status=ok
// SIG undefined FUN_144d046f0(void)

void FUN_144d046f0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_128 [9];
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_128[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_128[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_128[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_128[4] = SUB168(auVar13 * auVar21,8) +
                 (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_128[local_res8];
    local_128[iVar31] = uVar3 * uVar26 + local_128[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_128[lVar1];
    uVar9 = uVar7 + local_128[lVar1];
    local_128[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_128[local_res8 + 2];
    uVar7 = uVar33 + local_128[local_res8 + 2];
    local_128[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_128[local_res8 + 3];
    uVar7 = uVar32 + local_128[local_res8 + 3];
    local_128[iVar31 + 3] = uVar7 + uVar28;
    local_128[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 0x19);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_128[1];
  param_3[2] = local_128[2];
  param_3[3] = local_128[3];
  param_3[4] = local_128[4];
  param_3[5] = local_128[5];
  param_3[6] = local_128[6];
  param_3[7] = local_128[7];
  param_3[8] = local_128[8];
  param_3[9] = lStack_e0;
  param_3[10] = local_d8;
  param_3[0xb] = lStack_d0;
  param_3[0xc] = local_c8;
  param_3[0xd] = lStack_c0;
  param_3[0xe] = local_b8;
  param_3[0xf] = lStack_b0;
  param_3[0x10] = local_a8;
  param_3[0x11] = lStack_a0;
  param_3[0x12] = local_98;
  param_3[0x13] = lStack_90;
  param_3[0x14] = local_88;
  param_3[0x15] = lStack_80;
  param_3[0x16] = local_78;
  param_3[0x17] = lStack_70;
  param_3[0x18] = local_68;
  param_3[0x19] = lStack_60;
  param_3[0x1a] = local_58;
  param_3[0x1b] = lStack_50;
  param_3[0x1c] = local_48;
  return;
}



// FUNCTION 144d04940 FUN_144d04940 body=2136 status=ok
// SIG undefined FUN_144d04940(void)

void FUN_144d04940(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  char cVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong *puVar20;
  byte bVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong *puVar33;
  uint uVar34;
  longlong lVar35;
  int iVar36;
  ulonglong uVar37;
  bool bVar38;
  bool bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint local_250;
  longlong local_240;
  ulonglong local_238 [32];
  ulonglong auStack_138 [32];
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  puVar20 = param_1 + 0x1b;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  cVar16 = FUN_144d05dc0();
  if (cVar16 != '\0') {
    if ((param_4 <= puVar20) && (param_1 <= param_4 + 0x1b)) {
      lVar29 = (longlong)param_1 - (longlong)param_4;
      lVar24 = 0x1c;
      do {
        *param_4 = *(ulonglong *)(lVar29 + (longlong)param_4);
        param_4 = param_4 + 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      return;
    }
    uVar26 = param_1[1];
    uVar25 = param_1[2];
    uVar37 = param_1[3];
    *param_4 = *param_1;
    param_4[1] = uVar26;
    uVar26 = param_1[4];
    uVar23 = param_1[5];
    param_4[2] = uVar25;
    param_4[3] = uVar37;
    uVar25 = param_1[6];
    uVar37 = param_1[7];
    param_4[4] = uVar26;
    param_4[5] = uVar23;
    uVar26 = param_1[8];
    uVar23 = param_1[9];
    param_4[6] = uVar25;
    param_4[7] = uVar37;
    uVar25 = param_1[10];
    uVar37 = param_1[0xb];
    param_4[8] = uVar26;
    param_4[9] = uVar23;
    uVar26 = param_1[0xc];
    uVar23 = param_1[0xd];
    param_4[10] = uVar25;
    param_4[0xb] = uVar37;
    uVar25 = param_1[0xe];
    uVar37 = param_1[0xf];
    param_4[0xc] = uVar26;
    param_4[0xd] = uVar23;
    param_4[0xe] = uVar25;
    param_4[0xf] = uVar37;
    uVar26 = param_1[0x11];
    uVar25 = param_1[0x12];
    uVar37 = param_1[0x13];
    param_4[0x10] = param_1[0x10];
    param_4[0x11] = uVar26;
    uVar26 = param_1[0x14];
    uVar23 = param_1[0x15];
    param_4[0x12] = uVar25;
    param_4[0x13] = uVar37;
    uVar25 = param_1[0x16];
    uVar37 = param_1[0x17];
    param_4[0x14] = uVar26;
    param_4[0x15] = uVar23;
    uVar26 = param_1[0x18];
    uVar23 = param_1[0x19];
    param_4[0x16] = uVar25;
    param_4[0x17] = uVar37;
    uVar25 = param_1[0x1a];
    uVar37 = param_1[0x1b];
    param_4[0x18] = uVar26;
    param_4[0x19] = uVar23;
    param_4[0x1a] = uVar25;
    param_4[0x1b] = uVar37;
    return;
  }
  iVar22 = 0x1c;
  uVar26 = *puVar20;
  while (uVar26 == 0) {
    iVar22 = iVar22 + -1;
    puVar20 = puVar20 + -1;
    uVar26 = *puVar20;
  }
  uVar34 = 0x1c;
  local_250 = 0x1c;
  puVar20 = param_2 + 0x1b;
  if (*puVar20 == 0) {
    do {
      uVar34 = uVar34 - 1;
      puVar20 = puVar20 + -1;
    } while (*puVar20 == 0);
    local_250 = uVar34;
    if (uVar34 == 1) {
      *param_4 = 0;
      param_4[1] = 0;
      iVar22 = 0x1b;
      param_4[2] = 0;
      param_4[3] = 0;
      lVar24 = 0x1b;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[0x10] = 0;
      param_4[0x11] = 0;
      param_4[0x12] = 0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      param_4[0x1a] = 0;
      param_4[0x1b] = 0;
      uVar26 = *param_2;
      puVar18 = param_3 + 0x1b;
      do {
        if (*(longlong *)(((longlong)param_1 - (longlong)param_3) + (longlong)puVar18) != 0) break;
        *puVar18 = 0;
        iVar22 = iVar22 + -1;
        puVar18 = puVar18 + -1;
        lVar24 = lVar24 + -1;
      } while (0 < lVar24);
      uVar25 = param_1[iVar22] % uVar26;
      param_3[iVar22] = param_1[iVar22] / uVar26;
      lVar24 = (longlong)(iVar22 + -1);
      if (-1 < iVar22 + -1) {
        puVar18 = param_3 + lVar24;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar26;
          auVar7._8_8_ = uVar25;
          auVar7._0_8_ = *(undefined8 *)
                          (((longlong)param_1 - (longlong)param_3) + (longlong)puVar18);
          uVar25 = SUB168(auVar7 % auVar5,0);
          lVar24 = lVar24 + -1;
          *puVar18 = SUB168(auVar7 / auVar5,0);
          puVar18 = puVar18 + -1;
        } while (-1 < lVar24);
      }
      *param_4 = uVar25;
      return;
    }
  }
  lVar29 = (longlong)(int)local_250 + -1;
  puVar20 = param_2 + lVar29;
  uVar34 = FUN_144cd81c0(*puVar20);
  lVar24 = (longlong)(int)local_250;
  bVar15 = (byte)uVar34;
  if (uVar34 == 0) {
    if (0 < iVar22) {
      memcpy(local_238 + 4,param_1,(longlong)iVar22 << 3);
    }
    lVar29 = 0;
    local_238[(longlong)iVar22 + 4] = 0;
    if (0 < (int)local_250) {
      memcpy(auStack_138 + 2,param_2,lVar24 << 3);
      do {
        lVar29 = lVar29 + 1;
      } while (lVar29 < lVar24);
    }
  }
  else {
    bVar21 = 0x40 - bVar15;
    if (0 < lVar29) {
      uVar26 = *puVar20;
      do {
        lVar29 = lVar29 + -1;
        uVar25 = uVar26 << (bVar15 & 0x3f);
        uVar26 = puVar20[-1];
        *(ulonglong *)((longlong)auStack_138 + (0x10 - (longlong)param_2) + (longlong)puVar20) =
             puVar20[-1] >> (bVar21 & 0x3f) | uVar25;
        puVar20 = puVar20 + -1;
      } while (0 < lVar29);
    }
    auStack_138[2] = *param_2 << (bVar15 & 0x3f);
    lVar29 = (longlong)iVar22 + -1;
    uVar26 = param_1[lVar29];
    local_238[(longlong)iVar22 + 4] = uVar26 >> (bVar21 & 0x3f);
    if (0 < lVar29) {
      puVar20 = param_1 + lVar29;
      do {
        lVar29 = lVar29 + -1;
        uVar25 = uVar26 << (bVar15 & 0x3f);
        uVar26 = puVar20[-1];
        *(ulonglong *)((longlong)local_238 + (0x20 - (longlong)param_1) + (longlong)puVar20) =
             puVar20[-1] >> (bVar21 & 0x3f) | uVar25;
        puVar20 = puVar20 + -1;
      } while (0 < lVar29);
    }
    local_238[4] = *param_1 << (bVar15 & 0x3f);
  }
  iVar36 = iVar22 - local_250;
  local_240 = (longlong)iVar36;
  if (-1 < iVar36) {
    uVar26 = auStack_138[lVar24 + 1];
    uVar17 = local_250 & 1;
    uVar37 = (ulonglong)uVar17;
    lVar29 = 1 - uVar37;
    lVar35 = local_240 * -8 + 0xe8;
    puVar20 = local_238 + local_240 + lVar24 + 3;
    local_238[2] = lVar24 * -8 + 8;
    local_238[0] = (uVar37 - lVar24) * 8 + 0x10;
    local_238[1] = (lVar29 - lVar24) * 8 + 0x10;
    local_238[3] = (longlong)param_3 + (lVar24 * -8 - (longlong)(local_238 + 4)) + 8;
    uVar25 = local_238[0];
    do {
      if (puVar20[1] < uVar26) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar26;
        auVar8._8_8_ = puVar20[1];
        auVar8._0_8_ = *puVar20;
        uVar23 = SUB168(auVar8 / auVar6,0);
        uVar26 = SUB168(auVar8 % auVar6,0);
        do {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auStack_138[lVar24];
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar23;
          uVar27 = SUB168(auVar9 * auVar12,8);
          if ((uVar27 <= uVar26) &&
             ((uVar25 = local_238[0], uVar27 != uVar26 ||
              (uVar27 = auStack_138[lVar24] * uVar23,
              uVar27 < puVar20[-1] || uVar27 - puVar20[-1] == 0)))) break;
          uVar23 = uVar23 - 1;
          bVar38 = CARRY8(uVar26,auStack_138[lVar24 + 1]);
          uVar26 = uVar26 + auStack_138[lVar24 + 1];
          uVar25 = local_238[0];
        } while (!bVar38);
      }
      else {
        uVar23 = 0xffffffffffffffff;
      }
      bVar38 = false;
      if ((longlong)uVar37 < lVar24) {
        iVar28 = uVar17 + iVar36;
        lVar32 = ((lVar24 - uVar37) - 1 >> 1) + 1;
        puVar33 = (ulonglong *)(uVar25 + (longlong)puVar20);
        do {
          uVar26 = puVar33[-1];
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar23;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = *(ulonglong *)((longlong)puVar33 + lVar35);
          uVar27 = SUB168(auVar10 * auVar13,8);
          uVar30 = *(ulonglong *)((longlong)puVar33 + lVar35) * uVar23;
          uVar25 = uVar26 - uVar30;
          local_238[(longlong)iVar28 + 4] = uVar25 - (bVar38 != false);
          iVar1 = iVar28 + 1;
          uVar26 = (ulonglong)(uVar26 < uVar30 || uVar25 < (bVar38 != false));
          uVar25 = *puVar33 - uVar27;
          bVar38 = *puVar33 < uVar27 || uVar25 < uVar26;
          iVar28 = iVar28 + 2;
          local_238[(longlong)iVar1 + 4] = uVar25 - uVar26;
          lVar32 = lVar32 + -1;
          puVar33 = puVar33 + 2;
        } while (lVar32 != 0);
      }
      bVar39 = false;
      puVar20[1] = puVar20[1] - (ulonglong)bVar38;
      if (lVar29 < lVar24) {
        iVar28 = (1 - uVar17) + iVar36;
        lVar32 = ((lVar24 - lVar29) - 1U >> 1) + 1;
        puVar33 = puVar20 + (lVar29 - lVar24) + 2;
        do {
          uVar26 = puVar33[-1];
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar23;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = *(ulonglong *)(lVar35 + (longlong)puVar33);
          uVar30 = SUB168(auVar11 * auVar14,8);
          uVar31 = *(ulonglong *)(lVar35 + (longlong)puVar33) * uVar23;
          uVar27 = uVar26 - uVar31;
          local_238[(longlong)iVar28 + 4] = uVar27 - bVar39;
          iVar1 = iVar28 + 1;
          uVar25 = *puVar33;
          uVar26 = (ulonglong)(uVar26 < uVar31 || uVar27 < bVar39);
          uVar27 = uVar25 - uVar30;
          bVar39 = uVar25 < uVar30 || uVar27 < uVar26;
          iVar28 = iVar28 + 2;
          local_238[(longlong)iVar1 + 4] = uVar27 - uVar26;
          lVar32 = lVar32 + -1;
          puVar33 = puVar33 + 2;
        } while (lVar32 != 0);
        lVar32 = 0;
        if ((uVar25 < uVar30 || uVar27 < uVar26) && (uVar23 = uVar23 - 1, 0 < lVar24)) {
          bVar38 = false;
          iVar28 = iVar36;
          do {
            lVar19 = (longlong)iVar28;
            uVar26 = (ulonglong)bVar38;
            uVar25 = puVar20[(lVar32 + 1) - lVar24] + auStack_138[lVar32 + 2];
            bVar38 = CARRY8(puVar20[(lVar32 + 1) - lVar24],auStack_138[lVar32 + 2]) ||
                     CARRY8(uVar25,uVar26);
            iVar28 = iVar28 + 1;
            lVar32 = lVar32 + 1;
            local_238[lVar19 + 4] = uVar25 + uVar26;
          } while (lVar32 < lVar24);
        }
      }
      iVar36 = iVar36 + -1;
      local_240 = local_240 + -1;
      uVar26 = auStack_138[lVar24 + 1];
      lVar35 = lVar35 + 8;
      *(ulonglong *)(local_238[3] + (longlong)puVar20) = uVar23;
      puVar20 = puVar20 + -1;
      uVar25 = local_238[0];
    } while (-1 < local_240);
  }
  uVar26 = 0;
  if (uVar34 == 0) {
    if (0 < lVar24) {
      memcpy(param_4,local_238 + 4,lVar24 << 3);
    }
  }
  else {
    if ((0 < (int)local_250) && (7 < local_250)) {
      uVar17 = local_250 & 0x80000007;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
      }
      puVar20 = param_4 + 4;
      uVar25 = uVar26;
      do {
        puVar2 = (ulonglong *)((longlong)local_238 + -(longlong)param_4 + (longlong)puVar20);
        uVar37 = puVar2[1];
        uVar26 = (ulonglong)((int)uVar26 + 8);
        uVar25 = uVar25 + 8;
        plVar3 = (longlong *)((longlong)local_238 + -(longlong)param_4 + 8 + (longlong)puVar20);
        lVar29 = plVar3[1];
        plVar4 = (longlong *)((longlong)local_238 + -(longlong)param_4 + 0x18 + (longlong)puVar20);
        lVar35 = *plVar4;
        lVar32 = plVar4[1];
        puVar33 = puVar20 + 8;
        uVar31 = (ulonglong)(0x40 - uVar34);
        uVar41 = (ulonglong)uVar34;
        uVar23 = *(ulonglong *)(&stack0xfffffffffffffd98 + -(longlong)param_4 + (longlong)puVar33);
        uVar27 = *(ulonglong *)
                  ((longlong)(&stack0xfffffffffffffd98 + -(longlong)param_4 + (longlong)puVar33) + 8
                  );
        puVar20[-4] = *puVar2 >> uVar41 | *plVar3 << uVar31;
        puVar20[-3] = uVar37 >> uVar41 | lVar29 << uVar31;
        plVar3 = (longlong *)((longlong)&local_250 + -(longlong)param_4 + (longlong)puVar33);
        lVar29 = *plVar3;
        lVar19 = plVar3[1];
        uVar40 = (ulonglong)(0x40 - uVar34);
        puVar2 = (ulonglong *)
                 ((longlong)&stack0xfffffffffffffda8 + -(longlong)param_4 + (longlong)puVar33);
        uVar37 = *puVar2;
        uVar30 = puVar2[1];
        puVar20[-2] = lVar35 << uVar31 | uVar23 >> uVar41;
        puVar20[-1] = lVar32 << uVar31 | uVar27 >> uVar41;
        plVar3 = (longlong *)((longlong)&local_240 + -(longlong)param_4 + (longlong)puVar33);
        lVar35 = *plVar3;
        lVar32 = plVar3[1];
        uVar31 = (ulonglong)uVar34;
        uVar23 = *(ulonglong *)(&stack0xfffffffffffffdb8 + -(longlong)param_4 + (longlong)puVar33);
        uVar27 = *(ulonglong *)
                  ((longlong)(&stack0xfffffffffffffdb8 + -(longlong)param_4 + (longlong)puVar33) + 8
                  );
        *puVar20 = lVar29 << uVar40 | uVar37 >> uVar31;
        puVar20[1] = lVar19 << uVar40 | uVar30 >> uVar31;
        puVar20[2] = lVar35 << uVar40 | uVar23 >> uVar31;
        puVar20[3] = lVar32 << uVar40 | uVar27 >> uVar31;
        puVar20 = puVar33;
      } while ((longlong)uVar25 < (longlong)(int)(local_250 - uVar17));
    }
    lVar29 = (longlong)(int)uVar26;
    if (lVar29 < lVar24) {
      do {
        param_4[lVar29] =
             local_238[lVar29 + 4] >> (bVar15 & 0x3f) |
             local_238[lVar29 + 5] << (0x40 - bVar15 & 0x3f);
        lVar29 = lVar29 + 1;
      } while (lVar29 < lVar24);
    }
  }
  if ((int)local_250 < 0x1c) {
    memset(param_4 + lVar24,0,(longlong)(int)(0x1c - local_250) << 3);
  }
  if (iVar22 < 0x1c) {
    memset(param_3 + iVar22,0,(longlong)(0x1c - iVar22) << 3);
  }
  return;
}



// FUNCTION 144d051a0 FUN_144d051a0 body=393 status=ok
// SIG undefined FUN_144d051a0(void)

void FUN_144d051a0(ulonglong *param_1,char param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar4 = (ulonglong)param_2;
  *param_3 = uVar1 + uVar4;
  uVar2 = param_1[1];
  uVar5 = (longlong)uVar4 >> 0x3f;
  uVar4 = (ulonglong)CARRY8(uVar1,uVar4);
  uVar3 = uVar2 + uVar5;
  param_3[1] = uVar3 + uVar4;
  uVar1 = param_1[2];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[2] = uVar3 + uVar4;
  uVar2 = param_1[3];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[3] = uVar3 + uVar4;
  uVar1 = param_1[4];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[4] = uVar3 + uVar4;
  uVar2 = param_1[5];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[5] = uVar3 + uVar4;
  uVar1 = param_1[6];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[6] = uVar3 + uVar4;
  uVar2 = param_1[7];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[7] = uVar3 + uVar4;
  uVar1 = param_1[8];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[8] = uVar3 + uVar4;
  uVar2 = param_1[9];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[9] = uVar3 + uVar4;
  uVar1 = param_1[10];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[10] = uVar3 + uVar4;
  uVar2 = param_1[0xb];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0xb] = uVar3 + uVar4;
  uVar1 = param_1[0xc];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0xc] = uVar3 + uVar4;
  uVar2 = param_1[0xd];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0xd] = uVar3 + uVar4;
  uVar1 = param_1[0xe];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0xe] = uVar3 + uVar4;
  uVar2 = param_1[0xf];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0xf] = uVar3 + uVar4;
  uVar1 = param_1[0x10];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0x10] = uVar3 + uVar4;
  uVar2 = param_1[0x11];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0x11] = uVar3 + uVar4;
  uVar1 = param_1[0x12];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0x12] = uVar3 + uVar4;
  uVar2 = param_1[0x13];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0x13] = uVar3 + uVar4;
  uVar1 = param_1[0x14];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0x14] = uVar3 + uVar4;
  uVar2 = param_1[0x15];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0x15] = uVar3 + uVar4;
  uVar1 = param_1[0x16];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0x16] = uVar3 + uVar4;
  uVar2 = param_1[0x17];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0x17] = uVar3 + uVar4;
  uVar1 = param_1[0x18];
  uVar4 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar1 + uVar5;
  param_3[0x18] = uVar3 + uVar4;
  uVar2 = param_1[0x19];
  uVar4 = (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar3,uVar4));
  uVar3 = uVar2 + uVar5;
  param_3[0x19] = uVar3 + uVar4;
  uVar1 = param_1[0x1a];
  uVar2 = (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar3,uVar4));
  uVar4 = uVar1 + uVar5;
  param_3[0x1a] = uVar4 + uVar2;
  param_3[0x1b] = param_1[0x1b] + uVar5 + (ulonglong)(CARRY8(uVar1,uVar5) || CARRY8(uVar4,uVar2));
  return;
}



// FUNCTION 144d05330 FUN_144d05330 body=295 status=ok
// SIG undefined FUN_144d05330(void)

void FUN_144d05330(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  *param_3 = uVar1 - *param_2;
  uVar3 = param_1[1];
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  param_3[1] = uVar5 - uVar4;
  uVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  param_3[2] = uVar5 - uVar4;
  uVar3 = param_1[3];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  param_3[3] = uVar5 - uVar4;
  uVar2 = param_1[4];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  param_3[4] = uVar5 - uVar4;
  uVar3 = param_1[5];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  param_3[5] = uVar5 - uVar4;
  uVar2 = param_1[6];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  param_3[6] = uVar5 - uVar4;
  uVar3 = param_1[7];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  param_3[7] = uVar5 - uVar4;
  uVar2 = param_1[8];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  param_3[8] = uVar5 - uVar4;
  uVar3 = param_1[9];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  param_3[9] = uVar5 - uVar4;
  uVar2 = param_1[10];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  param_3[10] = uVar5 - uVar4;
  uVar3 = param_1[0xb];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  param_3[0xb] = uVar5 - uVar4;
  uVar2 = param_1[0xc];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar5 = uVar2 - param_2[0xc];
  param_3[0xc] = uVar5 - uVar4;
  uVar3 = param_1[0xd];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xd];
  uVar5 = uVar3 - param_2[0xd];
  param_3[0xd] = uVar5 - uVar4;
  uVar2 = param_1[0xe];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xe];
  uVar5 = uVar2 - param_2[0xe];
  param_3[0xe] = uVar5 - uVar4;
  uVar3 = param_1[0xf];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xf];
  uVar5 = uVar3 - param_2[0xf];
  param_3[0xf] = uVar5 - uVar4;
  uVar2 = param_1[0x10];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x10];
  uVar5 = uVar2 - param_2[0x10];
  param_3[0x10] = uVar5 - uVar4;
  uVar3 = param_1[0x11];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x11];
  uVar5 = uVar3 - param_2[0x11];
  param_3[0x11] = uVar5 - uVar4;
  uVar2 = param_1[0x12];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x12];
  uVar5 = uVar2 - param_2[0x12];
  param_3[0x12] = uVar5 - uVar4;
  uVar3 = param_1[0x13];
  uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0x13];
  uVar4 = uVar3 - param_2[0x13];
  param_3[0x13] = uVar4 - uVar2;
  param_3[0x14] = (param_1[0x14] - param_2[0x14]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  return;
}



// FUNCTION 144d05460 FUN_144d05460 body=237 status=ok
// SIG undefined FUN_144d05460(void)

void FUN_144d05460(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  uVar2 = *param_2;
  *(ulonglong *)(param_1 + 0x20) = uVar1 - *param_2;
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = param_2[1];
  uVar5 = uVar3 - param_2[1];
  *(ulonglong *)(param_1 + 0x28) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[2];
  uVar5 = uVar2 - param_2[2];
  *(ulonglong *)(param_1 + 0x30) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[3];
  uVar5 = uVar3 - param_2[3];
  *(ulonglong *)(param_1 + 0x38) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[4];
  uVar5 = uVar2 - param_2[4];
  *(ulonglong *)(param_1 + 0x40) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[5];
  uVar5 = uVar3 - param_2[5];
  *(ulonglong *)(param_1 + 0x48) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x50);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[6];
  uVar5 = uVar2 - param_2[6];
  *(ulonglong *)(param_1 + 0x50) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x58);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[7];
  uVar5 = uVar3 - param_2[7];
  *(ulonglong *)(param_1 + 0x58) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[8];
  uVar5 = uVar2 - param_2[8];
  *(ulonglong *)(param_1 + 0x60) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x68);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[9];
  uVar5 = uVar3 - param_2[9];
  *(ulonglong *)(param_1 + 0x68) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x70);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[10];
  uVar5 = uVar2 - param_2[10];
  *(ulonglong *)(param_1 + 0x70) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x78);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xb];
  uVar5 = uVar3 - param_2[0xb];
  *(ulonglong *)(param_1 + 0x78) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xc];
  uVar5 = uVar2 - param_2[0xc];
  *(ulonglong *)(param_1 + 0x80) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x88);
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xd];
  uVar5 = uVar3 - param_2[0xd];
  *(ulonglong *)(param_1 + 0x88) = uVar5 - uVar4;
  uVar2 = *(ulonglong *)(param_1 + 0x90);
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xe];
  uVar5 = uVar2 - param_2[0xe];
  *(ulonglong *)(param_1 + 0x90) = uVar5 - uVar4;
  uVar3 = *(ulonglong *)(param_1 + 0x98);
  uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = param_2[0xf];
  uVar4 = uVar3 - param_2[0xf];
  *(ulonglong *)(param_1 + 0x98) = uVar4 - uVar2;
  *(ulonglong *)(param_1 + 0xa0) =
       (*(longlong *)(param_1 + 0xa0) - param_2[0x10]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2)
  ;
  return;
}



// FUNCTION 144d05550 FUN_144d05550 body=566 status=ok
// SIG undefined FUN_144d05550(void)

void FUN_144d05550(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_e8 [9];
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_e8[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_e8[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_e8[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_e8[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_e8[local_res8];
    local_e8[iVar31] = uVar3 * uVar26 + local_e8[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_e8[lVar1];
    uVar9 = uVar7 + local_e8[lVar1];
    local_e8[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_e8[local_res8 + 2];
    uVar7 = uVar33 + local_e8[local_res8 + 2];
    local_e8[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_e8[local_res8 + 3];
    uVar7 = uVar32 + local_e8[local_res8 + 3];
    local_e8[iVar31 + 3] = uVar7 + uVar28;
    local_e8[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 0x12);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_e8[1];
  param_3[2] = local_e8[2];
  param_3[3] = local_e8[3];
  param_3[4] = local_e8[4];
  param_3[5] = local_e8[5];
  param_3[6] = local_e8[6];
  param_3[7] = local_e8[7];
  param_3[8] = local_e8[8];
  param_3[9] = lStack_a0;
  param_3[10] = local_98;
  param_3[0xb] = lStack_90;
  param_3[0xc] = local_88;
  param_3[0xd] = lStack_80;
  param_3[0xe] = local_78;
  param_3[0xf] = lStack_70;
  param_3[0x10] = local_68;
  param_3[0x11] = lStack_60;
  param_3[0x12] = local_58;
  param_3[0x13] = lStack_50;
  param_3[0x14] = local_48;
  param_3[0x15] = lStack_40;
  return;
}



// FUNCTION 144d05790 FUN_144d05790 body=181 status=ok
// SIG undefined FUN_144d05790(void)

void FUN_144d05790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 <= param_1 + 0x14) && (param_1 <= param_2 + 0x14)) {
    lVar7 = (longlong)param_1 - (longlong)param_2;
    lVar6 = 0x15;
    do {
      *param_2 = *(undefined8 *)(lVar7 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    return;
  }
  uVar2 = param_1[1];
  uVar1 = param_1[0x14];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  uVar2 = param_1[4];
  uVar5 = param_1[5];
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  param_2[4] = uVar2;
  param_2[5] = uVar5;
  uVar2 = param_1[8];
  uVar5 = param_1[9];
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar3 = param_1[10];
  uVar4 = param_1[0xb];
  param_2[8] = uVar2;
  param_2[9] = uVar5;
  uVar2 = param_1[0xc];
  uVar5 = param_1[0xd];
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar3 = param_1[0x10];
  uVar4 = param_1[0x11];
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar5;
  uVar2 = param_1[0xf];
  param_2[0xe] = param_1[0xe];
  param_2[0xf] = uVar2;
  uVar2 = param_1[0x12];
  uVar5 = param_1[0x13];
  param_2[0x10] = uVar3;
  param_2[0x11] = uVar4;
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar5;
  param_2[0x14] = uVar1;
  return;
}



// FUNCTION 144d05850 FUN_144d05850 body=358 status=ok
// SIG undefined FUN_144d05850(void)

ulonglong FUN_144d05850(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar6 = 0xe;
  uVar7 = (longlong)param_1[0xe] >> 0x3f;
  lVar3 = 0xe;
  while (param_1[lVar3] == uVar7) {
    iVar6 = iVar6 + -1;
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      if ((longlong)(uVar7 ^ *param_1) < 0) {
        *param_2 = 1;
        uVar7 = *param_1 >> 1 | uVar7 & 0x8000000000000000;
      }
      else {
        *param_2 = 0;
        uVar7 = *param_1;
      }
      return uVar7;
    }
  }
  uVar5 = param_1[lVar3] ^ uVar7;
  uVar4 = (uint)uVar5 | (uint)(uVar5 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar1 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar5 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  iVar8 = 0x20 - iVar2;
  if (0x1f < 0x20 - iVar2) {
    iVar8 = 0x40 - iVar1;
  }
  iVar8 = iVar8 + -1;
  *param_2 = iVar6 * 0x40 - iVar8;
  if (iVar8 < 0) {
    return uVar7 & 0x8000000000000000 | param_1[iVar6] >> 1;
  }
  uVar7 = param_1[iVar6] << ((byte)iVar8 & 0x3f);
  if (iVar8 == 0) {
    return uVar7;
  }
  return uVar7 | param_1[(longlong)iVar6 + -1] >> (0x40 - (byte)iVar8 & 0x3f);
}



// FUNCTION 144d059c0 FUN_144d059c0 body=615 status=ok
// SIG undefined FUN_144d059c0(void)

undefined8 FUN_144d059c0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  uVar6 = (longlong)param_1[0x1b] >> 0x3f;
  lVar5 = (uVar1 ^ uVar6) - uVar6;
  *param_2 = lVar5;
  uVar2 = param_1[1];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[1] = uVar4 - uVar3;
  uVar1 = param_1[2];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[2] = uVar4 - uVar3;
  uVar2 = param_1[3];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[3] = uVar4 - uVar3;
  uVar1 = param_1[4];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[4] = uVar4 - uVar3;
  uVar2 = param_1[5];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[5] = uVar4 - uVar3;
  uVar1 = param_1[6];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[6] = uVar4 - uVar3;
  uVar2 = param_1[7];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[7] = uVar4 - uVar3;
  uVar1 = param_1[8];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[8] = uVar4 - uVar3;
  uVar2 = param_1[9];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[9] = uVar4 - uVar3;
  uVar1 = param_1[10];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[10] = uVar4 - uVar3;
  uVar2 = param_1[0xb];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xb] = uVar4 - uVar3;
  uVar1 = param_1[0xc];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0xc] = uVar4 - uVar3;
  uVar2 = param_1[0xd];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xd] = uVar4 - uVar3;
  uVar1 = param_1[0xe];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0xe] = uVar4 - uVar3;
  uVar2 = param_1[0xf];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0xf] = uVar4 - uVar3;
  uVar1 = param_1[0x10];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0x10] = uVar4 - uVar3;
  uVar2 = param_1[0x11];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0x11] = uVar4 - uVar3;
  uVar1 = param_1[0x12];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0x12] = uVar4 - uVar3;
  uVar2 = param_1[0x13];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0x13] = uVar4 - uVar3;
  uVar1 = param_1[0x14];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0x14] = uVar4 - uVar3;
  uVar2 = param_1[0x15];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0x15] = uVar4 - uVar3;
  uVar1 = param_1[0x16];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0x16] = uVar4 - uVar3;
  uVar2 = param_1[0x17];
  uVar3 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar2 ^ uVar6) - uVar6;
  param_2[0x17] = uVar4 - uVar3;
  uVar1 = param_1[0x18];
  uVar3 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar4 = (uVar1 ^ uVar6) - uVar6;
  param_2[0x18] = uVar4 - uVar3;
  uVar2 = param_1[0x19];
  uVar1 = (ulonglong)((uVar1 ^ uVar6) < uVar6 || uVar4 < uVar3);
  uVar3 = (uVar2 ^ uVar6) - uVar6;
  param_2[0x19] = uVar3 - uVar1;
  uVar1 = (ulonglong)((uVar2 ^ uVar6) < uVar6 || uVar3 < uVar1);
  uVar2 = (param_1[0x1a] ^ uVar6) - uVar6;
  bVar7 = (param_1[0x1a] ^ uVar6) < uVar6 || uVar2 < uVar1;
  param_2[0x1a] = uVar2 - uVar1;
  param_2[0x1b] = ((param_1[0x1b] ^ uVar6) - uVar6) - (ulonglong)bVar7;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar7 + -1);
}



// FUNCTION 144d05c30 FUN_144d05c30 body=395 status=ok
// SIG undefined FUN_144d05c30(void)

void FUN_144d05c30(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong lVar30;
  bool bVar31;
  
  puVar26 = param_1 + 3;
  plVar29 = param_3 + 3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *param_1;
  uVar23 = SUB168(auVar2 * auVar12,8);
  lVar30 = 3;
  *param_3 = *param_1 * param_2;
  bVar31 = false;
  do {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = puVar26[-2];
    uVar24 = SUB168(auVar3 * auVar13,8);
    uVar22 = puVar26[-2] * param_2;
    uVar1 = uVar22 + uVar23;
    plVar29[-2] = uVar1 + bVar31;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = puVar26[-1];
    uVar25 = SUB168(auVar4 * auVar14,8);
    uVar28 = puVar26[-1] * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar22,uVar23) || CARRY8(uVar1,(ulonglong)bVar31));
    uVar1 = uVar28 + uVar24;
    plVar29[-1] = uVar1 + uVar23;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *puVar26;
    uVar22 = SUB168(auVar5 * auVar15,8);
    uVar27 = *puVar26 * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar28,uVar24) || CARRY8(uVar1,uVar23));
    uVar1 = uVar27 + uVar25;
    *plVar29 = uVar1 + uVar23;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = puVar26[1];
    uVar24 = SUB168(auVar6 * auVar16,8);
    uVar28 = puVar26[1] * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar27,uVar25) || CARRY8(uVar1,uVar23));
    uVar1 = uVar28 + uVar22;
    plVar29[1] = uVar1 + uVar23;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = puVar26[2];
    uVar25 = SUB168(auVar7 * auVar17,8);
    uVar27 = puVar26[2] * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar28,uVar22) || CARRY8(uVar1,uVar23));
    uVar1 = uVar27 + uVar24;
    plVar29[2] = uVar1 + uVar23;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = puVar26[3];
    uVar22 = SUB168(auVar8 * auVar18,8);
    uVar28 = puVar26[3] * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar27,uVar24) || CARRY8(uVar1,uVar23));
    uVar1 = uVar28 + uVar25;
    plVar29[3] = uVar1 + uVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = puVar26[4];
    uVar24 = SUB168(auVar9 * auVar19,8);
    uVar27 = puVar26[4] * param_2;
    uVar23 = (ulonglong)(CARRY8(uVar28,uVar25) || CARRY8(uVar1,uVar23));
    uVar1 = uVar27 + uVar22;
    plVar29[4] = uVar1 + uVar23;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_2;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = puVar26[5];
    uVar25 = SUB168(auVar10 * auVar20,8);
    uVar28 = puVar26[5] * param_2;
    uVar1 = (ulonglong)(CARRY8(uVar27,uVar22) || CARRY8(uVar1,uVar23));
    uVar22 = uVar28 + uVar24;
    plVar29[5] = uVar22 + uVar1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = puVar26[6];
    uVar23 = SUB168(auVar11 * auVar21,8);
    uVar27 = puVar26[6] * param_2;
    uVar1 = (ulonglong)(CARRY8(uVar28,uVar24) || CARRY8(uVar22,uVar1));
    uVar22 = uVar27 + uVar25;
    bVar31 = CARRY8(uVar27,uVar25) || CARRY8(uVar22,uVar1);
    plVar29[6] = uVar22 + uVar1;
    plVar29 = plVar29 + 9;
    puVar26 = puVar26 + 9;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  param_3[0x1c] = bVar31 + uVar23;
  return;
}



// FUNCTION 144d05dc0 FUN_144d05dc0 body=584 status=ok
// SIG undefined FUN_144d05dc0(void)

byte FUN_144d05dc0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong *puVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  
  bVar15 = 0;
  param_1 = param_1 - param_2;
  bVar18 = 1;
  lVar16 = 2;
  puVar17 = (ulonglong *)(param_2 + 0xd0);
  do {
    uVar1 = *(ulonglong *)((longlong)puVar17 + param_1 + 8);
    uVar2 = *(ulonglong *)((longlong)puVar17 + param_1);
    bVar19 = bVar18 & (uVar1 <= puVar17[1] && uVar1 >= puVar17[1]);
    uVar3 = *(ulonglong *)(param_1 + -8 + (longlong)puVar17);
    bVar20 = bVar19 & (uVar2 <= *puVar17 && uVar2 >= *puVar17);
    uVar4 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x10);
    bVar21 = bVar20 & (uVar3 <= puVar17[-1] && uVar3 >= puVar17[-1]);
    uVar5 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x18);
    bVar22 = bVar21 & (uVar4 <= puVar17[-2] && uVar4 >= puVar17[-2]);
    uVar6 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x20);
    bVar23 = bVar22 & (uVar5 <= puVar17[-3] && uVar5 >= puVar17[-3]);
    uVar7 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x28);
    bVar24 = bVar23 & (uVar6 <= puVar17[-4] && uVar6 >= puVar17[-4]);
    uVar8 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x30);
    bVar25 = bVar24 & (uVar7 <= puVar17[-5] && uVar7 >= puVar17[-5]);
    uVar9 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x60);
    uVar10 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x38);
    bVar26 = bVar25 & (uVar8 <= puVar17[-6] && uVar8 >= puVar17[-6]);
    uVar11 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x40);
    bVar27 = bVar26 & (uVar10 <= puVar17[-7] && uVar10 >= puVar17[-7]);
    uVar12 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x48);
    bVar28 = bVar27 & (uVar11 <= puVar17[-8] && uVar11 >= puVar17[-8]);
    uVar13 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x50);
    bVar29 = bVar28 & (uVar12 <= puVar17[-9] && uVar12 >= puVar17[-9]);
    uVar14 = *(ulonglong *)((longlong)puVar17 + param_1 + -0x58);
    bVar30 = bVar29 & (uVar13 <= puVar17[-10] && uVar13 >= puVar17[-10]);
    bVar31 = bVar30 & (uVar14 <= puVar17[-0xb] && uVar14 >= puVar17[-0xb]);
    bVar15 = bVar15 | uVar1 < puVar17[1] & bVar18 | uVar2 < *puVar17 & bVar19 |
             uVar3 < puVar17[-1] & bVar20 | uVar4 < puVar17[-2] & bVar21 |
             uVar5 < puVar17[-3] & bVar22 | uVar6 < puVar17[-4] & bVar23 |
             uVar7 < puVar17[-5] & bVar24 | uVar8 < puVar17[-6] & bVar25 |
             uVar10 < puVar17[-7] & bVar26 | uVar11 < puVar17[-8] & bVar27 |
             uVar12 < puVar17[-9] & bVar28 | uVar13 < puVar17[-10] & bVar29 |
             uVar14 < puVar17[-0xb] & bVar30 | uVar9 < puVar17[-0xc] & bVar31;
    bVar18 = bVar31 & (uVar9 <= puVar17[-0xc] && uVar9 >= puVar17[-0xc]);
    lVar16 = lVar16 + -1;
    puVar17 = puVar17 + -0xe;
  } while (lVar16 != 0);
  return bVar15;
}



// FUNCTION 144d06010 FUN_144d06010 body=379 status=ok
// SIG undefined FUN_144d06010(void)

void FUN_144d06010(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  *param_2 = -*param_1;
  lVar2 = param_1[1];
  uVar3 = -param_1[1];
  param_2[1] = uVar3 - (lVar1 != 0);
  uVar3 = (ulonglong)(lVar2 != 0 || uVar3 < (lVar1 != 0));
  lVar1 = param_1[2];
  uVar4 = -param_1[2];
  param_2[2] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[3];
  uVar4 = -param_1[3];
  param_2[3] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[4];
  uVar4 = -param_1[4];
  param_2[4] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[5];
  uVar4 = -param_1[5];
  param_2[5] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[6];
  uVar4 = -param_1[6];
  param_2[6] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[7];
  uVar4 = -param_1[7];
  param_2[7] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[8];
  uVar4 = -param_1[8];
  param_2[8] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[9];
  uVar4 = -param_1[9];
  param_2[9] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[10];
  uVar4 = -param_1[10];
  param_2[10] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0xb];
  uVar4 = -param_1[0xb];
  param_2[0xb] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0xc];
  uVar4 = -param_1[0xc];
  param_2[0xc] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0xd];
  uVar4 = -param_1[0xd];
  param_2[0xd] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0xe];
  uVar4 = -param_1[0xe];
  param_2[0xe] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0xf];
  uVar4 = -param_1[0xf];
  param_2[0xf] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x10];
  uVar4 = -param_1[0x10];
  param_2[0x10] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x11];
  uVar4 = -param_1[0x11];
  param_2[0x11] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x12];
  uVar4 = -param_1[0x12];
  param_2[0x12] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x13];
  uVar4 = -param_1[0x13];
  param_2[0x13] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x14];
  uVar4 = -param_1[0x14];
  param_2[0x14] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x15];
  uVar4 = -param_1[0x15];
  param_2[0x15] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x16];
  uVar4 = -param_1[0x16];
  param_2[0x16] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x17];
  uVar4 = -param_1[0x17];
  param_2[0x17] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x18];
  uVar4 = -param_1[0x18];
  param_2[0x18] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x19];
  uVar4 = -param_1[0x19];
  param_2[0x19] = uVar4 - uVar3;
  uVar3 = (ulonglong)(lVar1 != 0 || uVar4 < uVar3);
  lVar1 = param_1[0x1a];
  uVar4 = -param_1[0x1a];
  param_2[0x1a] = uVar4 - uVar3;
  param_2[0x1b] = -(ulonglong)(lVar1 != 0 || uVar4 < uVar3) - param_1[0x1b];
  return;
}



// FUNCTION 144d06190 FUN_144d06190 body=447 status=ok
// SIG undefined FUN_144d06190(void)

void FUN_144d06190(ulonglong *param_1,byte param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  bool bVar35;
  
  uVar33 = CONCAT71(0,param_2);
  puVar32 = param_1 + 3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar33;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_1;
  uVar27 = SUB168(auVar5 * auVar16,8);
  lVar34 = 2;
  *param_3 = (ulonglong)param_2 * *param_1;
  bVar35 = false;
  plVar31 = param_3 + 3;
  do {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar33;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = puVar32[-2];
    uVar28 = SUB168(auVar6 * auVar17,8);
    uVar2 = puVar32[-2];
    uVar4 = uVar33 * uVar2 + uVar27;
    plVar31[-2] = uVar4 + bVar35;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar33;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = puVar32[-1];
    uVar29 = SUB168(auVar7 * auVar18,8);
    uVar3 = puVar32[-1];
    uVar2 = (ulonglong)(CARRY8(uVar33 * uVar2,uVar27) || CARRY8(uVar4,(ulonglong)bVar35));
    uVar4 = uVar33 * uVar3 + uVar28;
    plVar31[-1] = uVar4 + uVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar33;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *puVar32;
    uVar30 = SUB168(auVar8 * auVar19,8);
    uVar27 = *puVar32;
    uVar3 = (ulonglong)(CARRY8(uVar33 * uVar3,uVar28) || CARRY8(uVar4,uVar2));
    uVar4 = uVar33 * uVar27 + uVar29;
    *plVar31 = uVar4 + uVar3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar33;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = puVar32[1];
    uVar28 = SUB168(auVar9 * auVar20,8);
    uVar2 = puVar32[1];
    uVar3 = (ulonglong)(CARRY8(uVar33 * uVar27,uVar29) || CARRY8(uVar4,uVar3));
    uVar4 = uVar33 * uVar2 + uVar30;
    plVar31[1] = uVar4 + uVar3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar33;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = puVar32[2];
    uVar29 = SUB168(auVar10 * auVar21,8);
    uVar27 = puVar32[2];
    uVar3 = (ulonglong)(CARRY8(uVar33 * uVar2,uVar30) || CARRY8(uVar4,uVar3));
    uVar4 = uVar33 * uVar27 + uVar28;
    plVar31[2] = uVar4 + uVar3;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar33;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = puVar32[3];
    uVar30 = SUB168(auVar11 * auVar22,8);
    uVar2 = puVar32[3];
    uVar3 = (ulonglong)(CARRY8(uVar33 * uVar27,uVar28) || CARRY8(uVar4,uVar3));
    uVar4 = uVar33 * uVar2 + uVar29;
    plVar31[3] = uVar4 + uVar3;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar33;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = puVar32[4];
    uVar28 = SUB168(auVar12 * auVar23,8);
    uVar27 = puVar32[4];
    uVar3 = (ulonglong)(CARRY8(uVar33 * uVar2,uVar29) || CARRY8(uVar4,uVar3));
    uVar4 = uVar33 * uVar27 + uVar30;
    plVar31[4] = uVar4 + uVar3;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = puVar32[5];
    uVar29 = SUB168(auVar13 * auVar24,8);
    uVar2 = puVar32[5];
    uVar27 = (ulonglong)(CARRY8(uVar33 * uVar27,uVar30) || CARRY8(uVar4,uVar3));
    uVar4 = uVar33 * uVar2 + uVar28;
    plVar31[5] = uVar4 + uVar27;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = puVar32[6];
    uVar30 = SUB168(auVar14 * auVar25,8);
    uVar3 = puVar32[6];
    uVar2 = (ulonglong)(CARRY8(uVar33 * uVar2,uVar28) || CARRY8(uVar4,uVar27));
    uVar4 = uVar33 * uVar3 + uVar29;
    plVar31[6] = uVar4 + uVar2;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = puVar32[7];
    uVar27 = SUB168(auVar15 * auVar26,8);
    puVar1 = puVar32 + 7;
    puVar32 = puVar32 + 10;
    uVar2 = (ulonglong)(CARRY8(uVar33 * uVar3,uVar29) || CARRY8(uVar4,uVar2));
    uVar3 = uVar33 * *puVar1 + uVar30;
    bVar35 = CARRY8(uVar33 * *puVar1,uVar30) || CARRY8(uVar3,uVar2);
    plVar31[7] = uVar3 + uVar2;
    lVar34 = lVar34 + -1;
    plVar31 = plVar31 + 10;
  } while (lVar34 != 0);
  param_3[0x15] = bVar35 + uVar27;
  return;
}



// FUNCTION 144d06350 FUN_144d06350 body=696 status=ok
// SIG undefined FUN_144d06350(void)

void FUN_144d06350(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_1;
  uVar43 = SUB168(auVar1 * auVar22,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_1[1];
  uVar44 = SUB168(auVar2 * auVar23,8);
  uVar49 = param_1[1] * param_2;
  param_3[1] = uVar49 + uVar43;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_1[2];
  uVar45 = SUB168(auVar3 * auVar24,8);
  uVar47 = param_1[2] * param_2;
  uVar43 = (ulonglong)CARRY8(uVar49,uVar43);
  uVar49 = uVar47 + uVar44;
  param_3[2] = uVar49 + uVar43;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_1[3];
  uVar46 = SUB168(auVar4 * auVar25,8);
  uVar48 = param_1[3] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar45;
  param_3[3] = uVar49 + uVar43;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_1[4];
  uVar44 = SUB168(auVar5 * auVar26,8);
  uVar47 = param_1[4] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar46;
  param_3[4] = uVar49 + uVar43;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_1[5];
  uVar45 = SUB168(auVar6 * auVar27,8);
  uVar48 = param_1[5] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar44;
  param_3[5] = uVar49 + uVar43;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_1[6];
  uVar46 = SUB168(auVar7 * auVar28,8);
  uVar47 = param_1[6] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar45;
  param_3[6] = uVar49 + uVar43;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_1[7];
  uVar44 = SUB168(auVar8 * auVar29,8);
  uVar48 = param_1[7] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar46;
  param_3[7] = uVar49 + uVar43;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_1[8];
  uVar45 = SUB168(auVar9 * auVar30,8);
  uVar47 = param_1[8] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar44;
  param_3[8] = uVar49 + uVar43;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_1[9];
  uVar46 = SUB168(auVar10 * auVar31,8);
  uVar48 = param_1[9] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar45;
  param_3[9] = uVar49 + uVar43;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_1[10];
  uVar44 = SUB168(auVar11 * auVar32,8);
  uVar47 = param_1[10] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar46;
  param_3[10] = uVar49 + uVar43;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_1[0xb];
  uVar45 = SUB168(auVar12 * auVar33,8);
  uVar48 = param_1[0xb] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar44;
  param_3[0xb] = uVar49 + uVar43;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_1[0xc];
  uVar46 = SUB168(auVar13 * auVar34,8);
  uVar47 = param_1[0xc] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar45;
  param_3[0xc] = uVar49 + uVar43;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_1[0xd];
  uVar44 = SUB168(auVar14 * auVar35,8);
  uVar48 = param_1[0xd] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar46;
  param_3[0xd] = uVar49 + uVar43;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_1[0xe];
  uVar45 = SUB168(auVar15 * auVar36,8);
  uVar47 = param_1[0xe] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar44;
  param_3[0xe] = uVar49 + uVar43;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_1[0xf];
  uVar46 = SUB168(auVar16 * auVar37,8);
  uVar48 = param_1[0xf] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar45;
  param_3[0xf] = uVar49 + uVar43;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_1[0x10];
  uVar44 = SUB168(auVar17 * auVar38,8);
  uVar47 = param_1[0x10] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar46;
  param_3[0x10] = uVar49 + uVar43;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_1[0x11];
  uVar45 = SUB168(auVar18 * auVar39,8);
  uVar48 = param_1[0x11] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar44;
  param_3[0x11] = uVar49 + uVar43;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_1[0x12];
  uVar46 = SUB168(auVar19 * auVar40,8);
  uVar47 = param_1[0x12] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar44) || CARRY8(uVar49,uVar43));
  uVar49 = uVar47 + uVar45;
  param_3[0x12] = uVar49 + uVar43;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_1[0x13];
  uVar44 = SUB168(auVar20 * auVar41,8);
  uVar48 = param_1[0x13] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar47,uVar45) || CARRY8(uVar49,uVar43));
  uVar49 = uVar48 + uVar46;
  param_3[0x13] = uVar49 + uVar43;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_1[0x14];
  param_2 = param_1[0x14] * param_2;
  uVar43 = (ulonglong)(CARRY8(uVar48,uVar46) || CARRY8(uVar49,uVar43));
  uVar49 = param_2 + uVar44;
  param_3[0x14] = uVar49 + uVar43;
  param_3[0x15] =
       (ulonglong)(CARRY8(param_2,uVar44) || CARRY8(uVar49,uVar43)) + SUB168(auVar21 * auVar42,8);
  return;
}



// FUNCTION 144d06610 FUN_144d06610 body=327 status=ok
// SIG undefined FUN_144d06610(void)

void FUN_144d06610(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  puVar4 = (ulonglong *)(param_1 + 0x10);
  uVar8 = *(longlong *)(param_2 + 0xa0) >> 0x3f;
  plVar10 = (longlong *)(param_1 + 0x18);
  bVar11 = false;
  param_2 = param_2 - param_1;
  iVar9 = 2;
  do {
    uVar5 = uVar8;
    if (iVar9 + -2 < 0x15) {
      uVar5 = *(ulonglong *)((longlong)puVar4 + param_2 + -0x10);
    }
    uVar1 = puVar4[-1];
    uVar7 = uVar1 - uVar5;
    plVar10[-2] = uVar7 - bVar11;
    uVar6 = uVar8;
    if (iVar9 + -1 < 0x15) {
      uVar6 = *(ulonglong *)((longlong)puVar4 + param_2 + -8);
    }
    uVar2 = *puVar4;
    uVar5 = (ulonglong)(uVar1 < uVar5 || uVar7 < bVar11);
    uVar1 = uVar2 - uVar6;
    plVar10[-1] = uVar1 - uVar5;
    uVar7 = uVar8;
    if (iVar9 < 0x15) {
      uVar7 = *(ulonglong *)(param_2 + (longlong)puVar4);
    }
    uVar3 = puVar4[1];
    uVar5 = (ulonglong)(uVar2 < uVar6 || uVar1 < uVar5);
    uVar1 = uVar3 - uVar7;
    *plVar10 = uVar1 - uVar5;
    uVar6 = uVar8;
    if (iVar9 + 1 < 0x15) {
      uVar6 = *(ulonglong *)((longlong)puVar4 + param_2 + 8);
    }
    uVar2 = puVar4[2];
    uVar5 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar5);
    uVar1 = uVar2 - uVar6;
    plVar10[1] = uVar1 - uVar5;
    uVar7 = uVar8;
    if (iVar9 + 2 < 0x15) {
      uVar7 = *(ulonglong *)((longlong)puVar4 + param_2 + 0x10);
    }
    uVar3 = puVar4[3];
    uVar5 = (ulonglong)(uVar2 < uVar6 || uVar1 < uVar5);
    uVar1 = uVar3 - uVar7;
    plVar10[2] = uVar1 - uVar5;
    uVar6 = uVar8;
    if (iVar9 + 3 < 0x15) {
      uVar6 = *(ulonglong *)((longlong)puVar4 + param_2 + 0x18);
    }
    uVar2 = puVar4[4];
    uVar5 = (ulonglong)(uVar3 < uVar7 || uVar1 < uVar5);
    uVar1 = uVar2 - uVar6;
    plVar10[3] = uVar1 - uVar5;
    uVar7 = uVar8;
    if (iVar9 + 4 < 0x15) {
      uVar7 = *(ulonglong *)((longlong)puVar4 + param_2 + 0x20);
    }
    uVar5 = (ulonglong)(uVar2 < uVar6 || uVar1 < uVar5);
    uVar1 = puVar4[5] - uVar7;
    bVar11 = puVar4[5] < uVar7 || uVar1 < uVar5;
    plVar10[4] = uVar1 - uVar5;
    iVar9 = iVar9 + 7;
    plVar10 = plVar10 + 7;
    puVar4 = puVar4 + 7;
  } while (iVar9 < 0x17);
  return;
}



// FUNCTION 144d06760 FUN_144d06760 body=593 status=ok
// SIG undefined FUN_144d06760(void)

void FUN_144d06760(ulonglong *param_1,byte param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  
  uVar33 = CONCAT71(0,param_2);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar33;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  uVar27 = SUB168(auVar3 * auVar8,8);
  *param_3 = (ulonglong)param_2 * *param_1;
  uVar31 = (uint)param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar33;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1[1];
  uVar28 = SUB168(auVar4 * auVar9,8);
  uVar1 = param_1[1];
  param_3[1] = uVar31 * uVar1 + uVar27;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1[2];
  uVar29 = SUB168(ZEXT416(uVar31) * auVar10,8);
  uVar2 = param_1[2];
  uVar27 = (ulonglong)CARRY8(uVar31 * uVar1,uVar27);
  uVar26 = uVar31 * uVar2 + uVar28;
  param_3[2] = uVar26 + uVar27;
  uVar32 = (uint)param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar33;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1[3];
  uVar30 = SUB168(auVar5 * auVar11,8);
  uVar1 = param_1[3];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar2,uVar28) || CARRY8(uVar26,uVar27));
  uVar26 = uVar32 * uVar1 + uVar29;
  param_3[3] = uVar26 + uVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[4];
  uVar28 = SUB168(ZEXT416(uVar32) * auVar12,8);
  uVar2 = param_1[4];
  uVar27 = (ulonglong)(CARRY8(uVar32 * uVar1,uVar29) || CARRY8(uVar26,uVar27));
  uVar26 = uVar32 * uVar2 + uVar30;
  param_3[4] = uVar26 + uVar27;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1[5];
  uVar29 = SUB168(ZEXT416(uVar32) * auVar13,8);
  uVar1 = param_1[5];
  uVar27 = (ulonglong)(CARRY8(uVar32 * uVar2,uVar30) || CARRY8(uVar26,uVar27));
  uVar26 = uVar32 * uVar1 + uVar28;
  param_3[5] = uVar26 + uVar27;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_1[6];
  uVar30 = SUB168(ZEXT416(uVar32) * auVar14,8);
  uVar2 = param_1[6];
  uVar27 = (ulonglong)(CARRY8(uVar32 * uVar1,uVar28) || CARRY8(uVar26,uVar27));
  uVar26 = uVar32 * uVar2 + uVar29;
  param_3[6] = uVar26 + uVar27;
  uVar31 = (uint)param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar33;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1[7];
  uVar28 = SUB168(auVar6 * auVar15,8);
  uVar1 = param_1[7];
  uVar27 = (ulonglong)(CARRY8(uVar32 * uVar2,uVar29) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar1 + uVar30;
  param_3[7] = uVar26 + uVar27;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_1[8];
  uVar29 = SUB168(ZEXT416(uVar31) * auVar16,8);
  uVar2 = param_1[8];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar1,uVar30) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar2 + uVar28;
  param_3[8] = uVar26 + uVar27;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_1[9];
  uVar30 = SUB168(ZEXT416(uVar31) * auVar17,8);
  uVar1 = param_1[9];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar2,uVar28) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar1 + uVar29;
  param_3[9] = uVar26 + uVar27;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_1[10];
  uVar28 = SUB168(ZEXT416(uVar31) * auVar18,8);
  uVar2 = param_1[10];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar1,uVar29) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar2 + uVar30;
  param_3[10] = uVar26 + uVar27;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_1[0xb];
  uVar29 = SUB168(ZEXT416(uVar31) * auVar19,8);
  uVar1 = param_1[0xb];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar2,uVar30) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar1 + uVar28;
  param_3[0xb] = uVar26 + uVar27;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1[0xc];
  uVar30 = SUB168(ZEXT416(uVar31) * auVar20,8);
  uVar2 = param_1[0xc];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar1,uVar28) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar2 + uVar29;
  param_3[0xc] = uVar26 + uVar27;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_1[0xd];
  uVar28 = SUB168(ZEXT416(uVar31) * auVar21,8);
  uVar1 = param_1[0xd];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar2,uVar29) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar1 + uVar30;
  param_3[0xd] = uVar26 + uVar27;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_1[0xe];
  uVar29 = SUB168(ZEXT416(uVar31) * auVar22,8);
  uVar2 = param_1[0xe];
  uVar27 = (ulonglong)(CARRY8(uVar31 * uVar1,uVar30) || CARRY8(uVar26,uVar27));
  uVar26 = uVar31 * uVar2 + uVar28;
  param_3[0xe] = uVar26 + uVar27;
  uVar32 = (uint)param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar33;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_1[0xf];
  uVar30 = SUB168(auVar7 * auVar23,8);
  uVar1 = param_1[0xf];
  uVar2 = (ulonglong)(CARRY8(uVar31 * uVar2,uVar28) || CARRY8(uVar26,uVar27));
  uVar27 = uVar32 * uVar1 + uVar29;
  param_3[0xf] = uVar27 + uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_1[0x10];
  uVar28 = SUB168(ZEXT416(uVar32) * auVar24,8);
  uVar26 = (ulonglong)uVar32 * param_1[0x10];
  uVar1 = (ulonglong)(CARRY8(uVar32 * uVar1,uVar29) || CARRY8(uVar27,uVar2));
  uVar2 = uVar26 + uVar30;
  param_3[0x10] = uVar2 + uVar1;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_1[0x11];
  uVar33 = uVar33 * param_1[0x11];
  uVar1 = (ulonglong)(CARRY8(uVar26,uVar30) || CARRY8(uVar2,uVar1));
  uVar2 = uVar33 + uVar28;
  param_3[0x11] = uVar2 + uVar1;
  param_3[0x12] =
       (ulonglong)(CARRY8(uVar33,uVar28) || CARRY8(uVar2,uVar1)) +
       SUB168(ZEXT416(uVar32) * auVar25,8);
  return;
}



// FUNCTION 144d069c0 FUN_144d069c0 body=552 status=ok
// SIG undefined FUN_144d069c0(void)

void FUN_144d069c0(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_1;
  uVar35 = SUB168(auVar1 * auVar18,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_1[1];
  uVar36 = SUB168(auVar2 * auVar19,8);
  uVar41 = param_1[1] * param_2;
  param_3[1] = uVar41 + uVar35;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1[2];
  uVar37 = SUB168(auVar3 * auVar20,8);
  uVar39 = param_1[2] * param_2;
  uVar35 = (ulonglong)CARRY8(uVar41,uVar35);
  uVar41 = uVar39 + uVar36;
  param_3[2] = uVar41 + uVar35;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_1[3];
  uVar38 = SUB168(auVar4 * auVar21,8);
  uVar40 = param_1[3] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar36) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar37;
  param_3[3] = uVar41 + uVar35;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_1[4];
  uVar36 = SUB168(auVar5 * auVar22,8);
  uVar39 = param_1[4] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar37) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar38;
  param_3[4] = uVar41 + uVar35;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_1[5];
  uVar37 = SUB168(auVar6 * auVar23,8);
  uVar40 = param_1[5] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar38) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar36;
  param_3[5] = uVar41 + uVar35;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_1[6];
  uVar38 = SUB168(auVar7 * auVar24,8);
  uVar39 = param_1[6] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar36) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar37;
  param_3[6] = uVar41 + uVar35;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_1[7];
  uVar36 = SUB168(auVar8 * auVar25,8);
  uVar40 = param_1[7] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar37) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar38;
  param_3[7] = uVar41 + uVar35;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_1[8];
  uVar37 = SUB168(auVar9 * auVar26,8);
  uVar39 = param_1[8] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar38) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar36;
  param_3[8] = uVar41 + uVar35;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_1[9];
  uVar38 = SUB168(auVar10 * auVar27,8);
  uVar40 = param_1[9] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar36) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar37;
  param_3[9] = uVar41 + uVar35;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_1[10];
  uVar36 = SUB168(auVar11 * auVar28,8);
  uVar39 = param_1[10] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar37) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar38;
  param_3[10] = uVar41 + uVar35;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_1[0xb];
  uVar37 = SUB168(auVar12 * auVar29,8);
  uVar40 = param_1[0xb] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar38) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar36;
  param_3[0xb] = uVar41 + uVar35;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_1[0xc];
  uVar38 = SUB168(auVar13 * auVar30,8);
  uVar39 = param_1[0xc] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar36) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar37;
  param_3[0xc] = uVar41 + uVar35;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_1[0xd];
  uVar36 = SUB168(auVar14 * auVar31,8);
  uVar40 = param_1[0xd] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar37) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar38;
  param_3[0xd] = uVar41 + uVar35;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_1[0xe];
  uVar37 = SUB168(auVar15 * auVar32,8);
  uVar39 = param_1[0xe] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar38) || CARRY8(uVar41,uVar35));
  uVar41 = uVar39 + uVar36;
  param_3[0xe] = uVar41 + uVar35;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_1[0xf];
  uVar38 = SUB168(auVar16 * auVar33,8);
  uVar40 = param_1[0xf] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar39,uVar36) || CARRY8(uVar41,uVar35));
  uVar41 = uVar40 + uVar37;
  param_3[0xf] = uVar41 + uVar35;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_1[0x10];
  param_2 = param_1[0x10] * param_2;
  uVar35 = (ulonglong)(CARRY8(uVar40,uVar37) || CARRY8(uVar41,uVar35));
  uVar41 = param_2 + uVar38;
  param_3[0x10] = uVar41 + uVar35;
  param_3[0x11] =
       (ulonglong)(CARRY8(param_2,uVar38) || CARRY8(uVar41,uVar35)) + SUB168(auVar17 * auVar34,8);
  return;
}



// FUNCTION 144d06be8 FUN_144d06be8 body=9 status=ok
// SIG undefined FUN_144d06be8(void)

void FUN_144d06be8(longlong param_1)

{
  FUN_144cf6d50(param_1 + -0x20);
  return;
}



// FUNCTION 144d06bf4 FUN_144d06bf4 body=9 status=ok
// SIG undefined FUN_144d06bf4(void)

void FUN_144d06bf4(longlong param_1)

{
  FUN_144cf6e00(param_1 + -0x20);
  return;
}



// FUNCTION 144d06c00 FUN_144d06c00 body=9 status=ok
// SIG undefined FUN_144d06c00(void)

void FUN_144d06c00(longlong param_1)

{
  FUN_144cf6f80(param_1 + -0x20);
  return;
}



// FUNCTION 144d06c0c FUN_144d06c0c body=9 status=ok
// SIG undefined FUN_144d06c0c(void)

void FUN_144d06c0c(longlong param_1)

{
  FUN_144cf7020(param_1 + -0x20);
  return;
}



// FUNCTION 144d06c18 FUN_144d06c18 body=9 status=ok
// SIG undefined FUN_144d06c18(void)

void FUN_144d06c18(longlong param_1)

{
  FUN_144cf70d0(param_1 + -0x20);
  return;
}



// FUNCTION 144d06c24 FUN_144d06c24 body=9 status=ok
// SIG undefined FUN_144d06c24(void)

void FUN_144d06c24(longlong param_1)

{
  FUN_144cf7170(param_1 + -0x20);
  return;
}



// FUNCTION 144d06c30 FUN_144d06c30 body=3 status=ok
// SIG undefined FUN_144d06c30(void)

undefined1 FUN_144d06c30(void)

{
  return 1;
}



// FUNCTION 144d06c40 FUN_144d06c40 body=3 status=ok
// SIG undefined FUN_144d06c40(void)

undefined1 FUN_144d06c40(void)

{
  return 1;
}



// FUNCTION 144d06c50 FUN_144d06c50 body=3 status=ok
// SIG undefined FUN_144d06c50(void)

undefined1 FUN_144d06c50(void)

{
  return 1;
}



// FUNCTION 144d06c60 FUN_144d06c60 body=3 status=ok
// SIG undefined FUN_144d06c60(void)

undefined1 FUN_144d06c60(void)

{
  return 1;
}



// FUNCTION 144d06c70 FUN_144d06c70 body=3 status=ok
// SIG undefined FUN_144d06c70(void)

undefined1 FUN_144d06c70(void)

{
  return 1;
}



// FUNCTION 144d06c80 FUN_144d06c80 body=3 status=ok
// SIG undefined FUN_144d06c80(void)

undefined1 FUN_144d06c80(void)

{
  return 1;
}



// FUNCTION 144d06c90 FUN_144d06c90 body=3 status=ok
// SIG undefined FUN_144d06c90(void)

undefined1 FUN_144d06c90(void)

{
  return 1;
}



// FUNCTION 144d06ca0 FUN_144d06ca0 body=3 status=ok
// SIG undefined FUN_144d06ca0(void)

undefined1 FUN_144d06ca0(void)

{
  return 1;
}



// FUNCTION 144d06cb0 FUN_144d06cb0 body=3 status=ok
// SIG undefined FUN_144d06cb0(void)

undefined1 FUN_144d06cb0(void)

{
  return 1;
}



// FUNCTION 144d06cc0 FUN_144d06cc0 body=71 status=ok
// SIG undefined FUN_144d06cc0(void)

undefined8 * FUN_144d06cc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d06d10 FUN_144d06d10 body=23 status=ok
// SIG undefined FUN_144d06d10(void)

void FUN_144d06d10(void)

{
  FUN_144d072e0();
  return;
}



// FUNCTION 144d06d30 FUN_144d06d30 body=574 status=ok
// SIG undefined FUN_144d06d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d06d30(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,undefined ***param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined **local_res18;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = (int)param_3[1];
  lVar8 = (longlong)iVar1;
  local_res18 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  pppuVar11 = &local_res18;
  if (param_6 != (undefined ***)0x0) {
    pppuVar11 = param_6;
  }
  if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_144d081a0(param_5,&PTR_vftable_14c6e47a0,lVar8);
  }
  iVar2 = (int)param_5[1];
  iVar7 = 0;
  if (iVar2 < iVar1) {
    puVar10 = (undefined8 *)(lVar8 * 0xe0 + *param_5);
    *(int *)(param_5 + 1) = iVar1;
    puVar6 = (undefined8 *)((longlong)iVar2 * 0xe0 + *param_5);
    if (puVar6 != puVar10) {
      puVar5 = (undefined4 *)((longlong)puVar6 + 0x24);
      do {
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar5 + -5) = 1;
          *(undefined8 *)(puVar5 + -3) = 0;
          puVar5[-1] = 0;
          *puVar5 = 0x80000000;
          *(undefined8 *)(puVar5 + 1) = 0;
          puVar5[3] = 0;
          puVar5[4] = 0x80000000;
          *(undefined8 *)(puVar5 + 5) = 0;
          puVar5[7] = 0;
          puVar5[8] = 0x80000000;
          *(undefined8 *)(puVar5 + 9) = 0;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0x80000000;
          *(undefined8 *)(puVar5 + 0xd) = 0;
          puVar5[0xf] = 0;
          puVar5[0x10] = 0x80000000;
          *(undefined8 *)(puVar5 + -7) = 0xffffffff;
          *puVar6 = &PTR_LAB_14ab9efa0;
          *(undefined8 *)(puVar5 + 0x13) = 0;
          *(undefined8 *)(puVar5 + 0x15) = 0;
          *(undefined8 *)(puVar5 + 0x1f) = 0;
          *(undefined8 *)(puVar5 + 0x21) = 0;
          *(undefined8 *)(puVar5 + 0x23) = 0;
          *(undefined8 *)(puVar5 + 0x25) = 0;
          puVar5[0x2a] = 1;
          *(undefined8 *)(puVar5 + 0x2b) = 0;
          *(undefined8 *)(puVar5 + 0x2d) = 0;
          uVar14 = uRam000000014c6dae8c;
          uVar13 = uRam000000014c6dae88;
          uVar12 = uRam000000014c6dae84;
          puVar5[0x17] = _DAT_14c6dae80;
          puVar5[0x18] = uVar12;
          puVar5[0x19] = uVar13;
          puVar5[0x1a] = uVar14;
          uVar12 = uRam000000014c6dae84 ^ 0x80000000;
          uVar13 = uRam000000014c6dae88 ^ 0x80000000;
          uVar14 = uRam000000014c6dae8c ^ 0x80000000;
          puVar5[0x1b] = _DAT_14c6dae80 ^ 0x80000000;
          puVar5[0x1c] = uVar12;
          puVar5[0x1d] = uVar13;
          puVar5[0x1e] = uVar14;
        }
        puVar6 = puVar6 + 0x1c;
        puVar5 = puVar5 + 0x38;
      } while (puVar6 != puVar10);
    }
  }
  else if (iVar1 < iVar2) {
    lVar3 = *param_5;
    *(int *)(param_5 + 1) = iVar1;
    plVar9 = (longlong *)((longlong)iVar2 * 0xe0 + *param_5);
    while (plVar9 != (longlong *)(lVar8 * 0xe0 + lVar3)) {
      plVar9 = plVar9 + -0x1c;
      (**(code **)(*plVar9 + 8))(plVar9,0);
    }
  }
  if (0 < iVar1) {
    while (cVar4 = (*(code *)(*pppuVar11)[1])(pppuVar11,iVar7,iVar1), cVar4 != '\0') {
      lVar8 = *param_3 + (longlong)iVar7 * 0xc;
      cVar4 = FUN_1450412e0(lVar8);
      if (cVar4 == '\0') {
        FUN_145041920(param_1,param_2,lVar8,local_res20,(longlong)iVar7 * 0xe0 + *param_5,param_6);
      }
      cVar4 = (*(code *)(*pppuVar11)[5])(pppuVar11,iVar7,iVar1);
      if (cVar4 == '\0') {
        return;
      }
      iVar7 = iVar7 + 1;
      if (iVar1 <= iVar7) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 144d06f70 FUN_144d06f70 body=872 status=ok
// SIG undefined FUN_144d06f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d06f70(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = *(uint *)(param_3 + 1);
  uVar11 = (ulonglong)uVar3;
  lVar9 = (longlong)(int)uVar3;
  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < (int)uVar3) {
    FUN_144d081a0(param_6,&PTR_vftable_14c6e47a0,lVar9);
  }
  iVar1 = (int)param_6[1];
  lVar12 = 0;
  if (iVar1 < (int)uVar3) {
    puVar6 = (undefined4 *)((longlong)iVar1 * 0xe0 + *param_6);
    *(uint *)(param_6 + 1) = uVar3;
    puVar8 = (undefined4 *)(lVar9 * 0xe0 + *param_6);
    if (puVar6 != puVar8) {
      puVar6 = puVar6 + 9;
      do {
        if ((undefined8 *)(puVar6 + -9) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar6 + -5) = 1;
          *(undefined8 *)(puVar6 + -3) = 0;
          puVar6[-1] = 0;
          *puVar6 = 0x80000000;
          *(undefined8 *)(puVar6 + 1) = 0;
          puVar6[3] = 0;
          puVar6[4] = 0x80000000;
          *(undefined8 *)(puVar6 + 5) = 0;
          puVar6[7] = 0;
          puVar6[8] = 0x80000000;
          *(undefined8 *)(puVar6 + 9) = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0x80000000;
          *(undefined8 *)(puVar6 + 0xd) = 0;
          puVar6[0xf] = 0;
          puVar6[0x10] = 0x80000000;
          *(undefined8 *)(puVar6 + -7) = 0xffffffff;
          *(undefined ***)(puVar6 + -9) = &PTR_LAB_14ab9efa0;
          *(undefined8 *)(puVar6 + 0x13) = 0;
          *(undefined8 *)(puVar6 + 0x15) = 0;
          *(undefined8 *)(puVar6 + 0x1f) = 0;
          *(undefined8 *)(puVar6 + 0x21) = 0;
          *(undefined8 *)(puVar6 + 0x23) = 0;
          *(undefined8 *)(puVar6 + 0x25) = 0;
          puVar6[0x2a] = 1;
          *(undefined8 *)(puVar6 + 0x2b) = 0;
          *(undefined8 *)(puVar6 + 0x2d) = 0;
          uVar15 = uRam000000014c6dae8c;
          uVar14 = uRam000000014c6dae88;
          uVar13 = uRam000000014c6dae84;
          puVar6[0x17] = _DAT_14c6dae80;
          puVar6[0x18] = uVar13;
          puVar6[0x19] = uVar14;
          puVar6[0x1a] = uVar15;
          uVar13 = uRam000000014c6dae84 ^ 0x80000000;
          uVar14 = uRam000000014c6dae88 ^ 0x80000000;
          uVar15 = uRam000000014c6dae8c ^ 0x80000000;
          puVar6[0x1b] = _DAT_14c6dae80 ^ 0x80000000;
          puVar6[0x1c] = uVar13;
          puVar6[0x1d] = uVar14;
          puVar6[0x1e] = uVar15;
        }
        puVar2 = puVar6 + 0x2f;
        puVar6 = puVar6 + 0x38;
      } while (puVar2 != puVar8);
    }
  }
  else if ((int)uVar3 < iVar1) {
    lVar4 = *param_6;
    *(uint *)(param_6 + 1) = uVar3;
    plVar10 = (longlong *)((longlong)iVar1 * 0xe0 + *param_6);
    while (plVar10 != (longlong *)(lVar9 * 0xe0 + lVar4)) {
      plVar10 = plVar10 + -0x1c;
      (**(code **)(*plVar10 + 8))(plVar10,0);
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  if (0 < (int)uVar3) {
    lVar9 = 0;
    do {
      lVar4 = *param_3;
      cVar5 = FUN_1450412e0(lVar4 + lVar9);
      if (cVar5 == '\0') {
        FUN_145044d30(local_98,param_1,param_2,lVar4 + lVar9,param_4,*param_6 + lVar12);
        iVar1 = local_a0 + 1;
        if ((int)(local_9c & 0x7fffffff) < iVar1) {
          FUN_144d08320(&local_a8,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        puVar7 = (undefined8 *)((longlong)local_a0 * 0x70 + local_a8);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[2] = 1;
          puVar7[1] = 0xffffffff;
          *puVar7 = hkaiDefaultTask::vftable;
          puVar7[4] = hkaiDefaultTask::vftable;
          puVar7[6] = local_68;
          *puVar7 = hkaiNavVolumeGenerationTask::vftable;
          puVar7[4] = hkaiNavVolumeGenerationTask::vftable;
          puVar7[8] = local_58;
          puVar7[9] = local_50;
          puVar7[10] = local_48;
          puVar7[0xb] = local_40;
          puVar7[0xc] = local_38;
        }
        local_a0 = iVar1;
        FUN_144be5f30(local_78);
      }
      lVar9 = lVar9 + 0xc;
      lVar12 = lVar12 + 0xe0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  thunk_FUN_145044a90(&local_a8,param_5);
  lVar12 = local_a8;
  lVar9 = (longlong)local_a0 * 0x70 + local_a8;
  while (lVar9 != lVar12) {
    plVar10 = (longlong *)(lVar9 + -0x70);
    lVar9 = lVar9 + -0x70;
    (**(code **)(*plVar10 + 8))(lVar9,0);
  }
  local_a0 = 0;
  if ((-1 < (int)local_9c) && (local_a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a8,(ulonglong)(local_9c & 0x7fffffff) * 0x70);
  }
  return;
}



// FUNCTION 144d072e0 FUN_144d072e0 body=1832 status=ok
// SIG undefined FUN_144d072e0(void)

/* WARNING: Removing unreachable block (ram,0x000144d0744c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d072e0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined ***param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined **local_res20;
  char *local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  uint local_290;
  uint local_28c;
  char *local_288;
  char *pcStack_280;
  ulonglong local_278;
  longlong local_270;
  undefined1 local_268 [48];
  undefined **local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar10 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar6;
  }
  local_270 = *(longlong *)(lVar6 + 0x3e0);
  local_2a8 = "TthkaiNavVolumeGenerationUtils::generateNavVolume";
  uStack_2a0 = "";
  if (local_270 != 0) {
    local_2a8 = "TthkaiNavVolumeGenerationUtils::generateNavVolume";
    uStack_2a0 = "";
    FUN_144b3f370(local_270,&local_2a8);
  }
  uVar8 = 0;
  local_228 = 1;
  local_220 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_230 = 0xffffffff;
  local_1a8 = _DAT_14c6dae80 ^ 0x80000000;
  uStack_1a4 = uRam000000014c6dae84 ^ 0x80000000;
  uStack_1a0 = uRam000000014c6dae88 ^ 0x80000000;
  uStack_19c = uRam000000014c6dae8c ^ 0x80000000;
  local_238 = &PTR_LAB_14ab9efa0;
  local_218 = 0;
  local_214 = 0x80000000;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0x80000000;
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0x80000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0x80000000;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0x80000000;
  local_16c = 1;
  local_168 = 0;
  local_160 = 0;
  local_1b8 = _DAT_14c6dae80;
  uStack_1b4 = uRam000000014c6dae84;
  uStack_1b0 = uRam000000014c6dae88;
  uStack_1ac = uRam000000014c6dae8c;
  FUN_144d07cf0(param_4,&local_238);
  FUN_144b47060(&local_238);
  auVar14._0_8_ = param_1[10] << 0x20;
  auVar14._8_8_ = param_1[0xb] << 0x20 | (ulonglong)param_1[10] >> 0x20;
  *(undefined1 (*) [16])(param_4 + 0x70) = auVar14 >> 0x20;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_144beec10(&local_298,param_1,&DAT_14c6fee80);
    local_2a8 = (char *)*puVar7;
    uStack_2a0 = (char *)puVar7[1];
  }
  else {
    (**(code **)*param_1)(param_1,&local_2a8);
  }
  pcVar3 = uStack_2a0;
  pcVar2 = local_2a8;
  if (uStack_2a0 != (char *)0x0) {
    uVar8 = FUN_144befdb0(uStack_2a0);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
  }
  local_278 = 0;
  local_288 = (char *)0x0;
  pcStack_280 = (char *)0x0;
  uVar4 = local_278;
  if ((pcVar3 != (char *)0x0) &&
     (puVar9 = (undefined4 *)FUN_144bef800(pcVar3,local_res8), uVar4 = local_278,
     ((byte)*puVar9 & 0x1f) == 7)) {
    local_288 = pcVar2;
    pcStack_280 = pcVar3;
    if ((uVar8 & 1) != 0) {
      FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
    }
    uVar4 = uVar8;
    if ((local_278 & 1) != 0) {
      FUN_144be6b30(local_278 & 0xfffffffffffffffe);
    }
  }
  local_278 = uVar4;
  FUN_145044dc0(&local_288);
  if ((local_278 & 1) != 0) {
    FUN_144be6b30(local_278 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  local_res20 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  pppuVar13 = &local_res20;
  if (param_5 != (undefined ***)0x0) {
    pppuVar13 = param_5;
  }
  if ((char)param_1[0x22] != '\0') {
    FUN_1450432d0(param_1,param_2);
  }
  cVar5 = (*(code *)**pppuVar13)(pppuVar13);
  if (cVar5 != '\0') {
    FUN_145041330(param_1,param_2,local_268);
    cVar5 = FUN_145041310(local_268);
    if (cVar5 == '\0') {
      local_2a8 = (char *)0x0;
      uStack_2a0 = (char *)0x8000000000000000;
      FUN_1450416b0((longlong)param_1 + 0x72,local_268,&local_2a8);
      plVar12 = (longlong *)param_1[0x10];
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 8))(plVar12,local_268,(longlong)param_1 + 0x72,&local_2a8);
      }
      uVar15 = (uint)uStack_2a0;
      lVar10 = (longlong)(int)(uint)uStack_2a0;
      local_298 = (longlong *)0x0;
      if ((int)(uint)uStack_2a0 < 1) {
        local_290 = 0;
        local_298 = (longlong *)0x0;
        local_28c = 0x80000000;
      }
      else {
        local_298 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,lVar10 * 0xe0);
        local_290 = uVar15;
        local_28c = uVar15;
      }
      if (local_298 != local_298 + lVar10 * 0x1c) {
        puVar9 = (undefined4 *)((longlong)local_298 + 0x24);
        do {
          if ((undefined8 *)(puVar9 + -9) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar9 + -5) = 1;
            *(undefined8 *)(puVar9 + -3) = 0;
            puVar9[-1] = 0;
            *puVar9 = 0x80000000;
            *(undefined8 *)(puVar9 + 1) = 0;
            puVar9[3] = 0;
            puVar9[4] = 0x80000000;
            *(undefined8 *)(puVar9 + 5) = 0;
            puVar9[7] = 0;
            puVar9[8] = 0x80000000;
            *(undefined8 *)(puVar9 + 9) = 0;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0x80000000;
            *(undefined8 *)(puVar9 + 0xd) = 0;
            puVar9[0xf] = 0;
            puVar9[0x10] = 0x80000000;
            *(undefined8 *)(puVar9 + -7) = 0xffffffff;
            *(undefined ***)(puVar9 + -9) = &PTR_LAB_14ab9efa0;
            *(undefined8 *)(puVar9 + 0x13) = 0;
            *(undefined8 *)(puVar9 + 0x15) = 0;
            *(undefined8 *)(puVar9 + 0x1f) = 0;
            *(undefined8 *)(puVar9 + 0x21) = 0;
            *(undefined8 *)(puVar9 + 0x23) = 0;
            *(undefined8 *)(puVar9 + 0x25) = 0;
            puVar9[0x2a] = 1;
            *(undefined8 *)(puVar9 + 0x2b) = 0;
            *(undefined8 *)(puVar9 + 0x2d) = 0;
            uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
            *(ulonglong *)(puVar9 + 0x17) = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
            *(undefined8 *)(puVar9 + 0x19) = uVar1;
            uVar15 = uRam000000014c6dae84 ^ 0x80000000;
            uVar16 = uRam000000014c6dae88 ^ 0x80000000;
            uVar17 = uRam000000014c6dae8c ^ 0x80000000;
            puVar9[0x1b] = _DAT_14c6dae80 ^ 0x80000000;
            puVar9[0x1c] = uVar15;
            puVar9[0x1d] = uVar16;
            puVar9[0x1e] = uVar17;
          }
          plVar12 = (longlong *)(puVar9 + 0x2f);
          puVar9 = puVar9 + 0x38;
        } while (plVar12 != local_298 + lVar10 * 0x1c);
      }
      if (param_3 == 0) {
        FUN_144d06d30(param_1,param_2,&local_2a8,local_268,&local_298,param_5);
      }
      else {
        FUN_144d06f70(param_1,param_2,&local_2a8,local_268,param_3,&local_298);
      }
      cVar5 = (*(code *)(*pppuVar13)[6])(pppuVar13);
      plVar12 = local_298;
      if (cVar5 == '\0') {
        plVar11 = local_298 + (longlong)(int)local_290 * 0x1c;
        while (plVar11 != plVar12) {
          plVar11 = plVar11 + -0x1c;
          (**(code **)(*plVar11 + 8))(plVar11,0);
        }
        local_290 = 0;
        if ((-1 < (int)local_28c) && (local_298 != (longlong *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_298,(ulonglong)(local_28c & 0x7fffffff) * 0xe0);
        }
        lVar10 = (longlong)uStack_2a0;
        uVar15 = uStack_2a0._4_4_;
        local_298 = (longlong *)0x0;
        local_28c = 0x80000000;
        uStack_2a0 = (char *)((ulonglong)uStack_2a0._4_4_ << 0x20);
        if ((-1 < lVar10) && (local_2a8 != (char *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(uVar15 & 0x7fffffff) * 0xc);
        }
        goto LAB_144d079a8;
      }
      FUN_1450424f0(param_1,&local_298,&local_2a8,local_268,param_4);
      plVar11 = local_298;
      plVar12 = local_298 + (longlong)(int)local_290 * 0x1c;
      while (plVar12 != plVar11) {
        plVar12 = plVar12 + -0x1c;
        (**(code **)(*plVar12 + 8))(plVar12,0);
      }
      local_290 = 0;
      if ((-1 < (int)local_28c) && (local_298 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_298,(ulonglong)(local_28c & 0x7fffffff) * 0xe0);
      }
      lVar10 = (longlong)uStack_2a0;
      uVar15 = uStack_2a0._4_4_;
      local_298 = (longlong *)0x0;
      local_28c = 0x80000000;
      uStack_2a0 = (char *)((ulonglong)uStack_2a0._4_4_ << 0x20);
      if ((-1 < lVar10) && (local_2a8 != (char *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(uVar15 & 0x7fffffff) * 0xc);
      }
    }
    if (*(int *)(param_4 + 0x20) == 0) {
      FUN_144bde670(&local_2a8,&local_238,0x200);
      FUN_144be6160(&local_2a8,"Empty nav volume created.");
      FUN_144bfc0d0(0x6a26645c,&local_238,"NavVolume\\hkaiNavVolumeGenerationUtils_main.cpp",0x6d);
      FUN_144bde6e0(&local_2a8);
    }
    else {
      cVar5 = (*(code *)(*pppuVar13)[7])(pppuVar13);
      if (cVar5 == '\0') goto LAB_144d079a8;
      FUN_145042d60(param_4,param_1 + 0x17,*(undefined4 *)((longlong)param_1 + 0xb4));
      if ((char)param_1[0x1d] != '\0') {
        FUN_144fea9c0(param_4);
      }
    }
    (*(code *)(*pppuVar13)[8])(pppuVar13);
  }
LAB_144d079a8:
  local_res20 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  if (local_270 != 0) {
    local_2a8 = "Et";
    uStack_2a0 = &DAT_149981766;
    FUN_144b3f260(local_270,&local_2a8);
  }
  return;
}



// FUNCTION 144d07a10 FUN_144d07a10 body=101 status=ok
// SIG undefined FUN_144d07a10(void)

undefined8 * FUN_144d07a10(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d07a80 FUN_144d07a80 body=101 status=ok
// SIG undefined FUN_144d07a80(void)

undefined8 * FUN_144d07a80(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144d07af0 FUN_144d07af0 body=508 status=ok
// SIG undefined FUN_144d07af0(void)

undefined8 * FUN_144d07af0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = &PTR_LAB_14ab9efa0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_144d08000(param_2 + 0x18,&PTR_vftable_14c6e47a0);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144d080c0(param_2 + 0x28,&PTR_vftable_14c6e47a0);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_144d08130(param_2 + 0x38,&PTR_vftable_14c6e47a0);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  FUN_143821c08(param_2 + 0x48,&PTR_vftable_14c6e47a0);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FUN_144c64d00(param_2 + 0x58,&PTR_vftable_14c6e47a0);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar1;
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  return param_1;
}



// FUNCTION 144d07cf0 FUN_144d07cf0 body=775 status=ok
// SIG undefined FUN_144d07cf0(void)

longlong FUN_144d07cf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  plVar2 = (longlong *)(param_1 + 0x18);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) * 0x18);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    FUN_144d08000(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x28);
  plVar2 = (longlong *)(param_1 + 0x28);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    FUN_144d080c0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) * 0x18);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80000000;
    FUN_144d08130(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x48);
  plVar2 = (longlong *)(param_1 + 0x48);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x80000000;
    FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  puVar3 = (undefined8 *)(param_2 + 0x58);
  puVar4 = (undefined8 *)(param_1 + 0x58);
  if (puVar3 != puVar4) {
    FUN_144c64dd0(puVar4,0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0x80000000;
      FUN_144c64d00(puVar3,&PTR_vftable_14c6e47a0);
      *puVar4 = *puVar3;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
      *puVar3 = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  uVar7 = *(undefined4 *)(param_2 + 0xb4);
  uVar8 = *(undefined4 *)(param_2 + 0xb8);
  uVar9 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  *(undefined4 *)(param_1 + 0xb8) = uVar8;
  *(undefined4 *)(param_1 + 0xbc) = uVar9;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  lVar6 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  if (lVar6 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144d08000 FUN_144d08000 body=188 status=ok
// SIG undefined FUN_144d08000(void)

void FUN_144d08000(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x18);
    uVar5 = *(uint *)(param_1 + 1);
    puVar4 = (undefined4 *)*param_1;
    if (0 < (int)uVar5) {
      puVar2 = (undefined4 *)(lVar1 + 8);
      uVar6 = (ulonglong)uVar5;
      puVar3 = puVar4 + 2;
      do {
        if (puVar2 + -2 != (undefined4 *)0x0) {
          puVar2[-2] = *puVar4;
          *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar4 + 1);
          *(undefined2 *)((longlong)puVar2 + -2) = *(undefined2 *)((longlong)puVar3 + -2);
          *puVar2 = *puVar3;
          *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 1);
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
        }
        puVar2 = puVar2 + 6;
        puVar4 = puVar4 + 6;
        puVar3 = puVar3 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144d080c0 FUN_144d080c0 body=103 status=ok
// SIG undefined FUN_144d080c0(void)

void FUN_144d080c0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144d08130 FUN_144d08130 body=109 status=ok
// SIG undefined FUN_144d08130(void)

void FUN_144d08130(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x18);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x18);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144d081a0 FUN_144d081a0 body=369 status=ok
// SIG undefined FUN_144d081a0(void)

ulonglong FUN_144d081a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  local_res20 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = param_3;
  if (param_3 < local_res20 * 2) {
    uVar5 = local_res20 * 2;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res18 = uVar5 * 0xe0;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_res18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar9 = (ulonglong)uVar1;
    lVar4 = lVar3;
    plVar6 = plVar7;
    do {
      if (lVar4 != 0) {
        FUN_144d07af0(lVar4,plVar6);
      }
      lVar4 = lVar4 + 0xe0;
      plVar6 = plVar6 + 0x1c;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7,0);
      plVar7 = plVar7 + 0x1c;
      uVar8 = uVar8 - 1;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = local_res18 + 0xe0;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0xe0;
    uVar5 = uVar5 + 1;
    if (uVar8 <= local_res8) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res8 - local_res18;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar5 = uVar5 + (((local_res8 - local_res18) - lVar4 >> 1) + lVar4 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,local_res20 * 0xe0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar8;
}



// FUNCTION 144d08320 FUN_144d08320 body=459 status=ok
// SIG undefined FUN_144d08320(void)

ulonglong FUN_144d08320(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar9) {
    uVar10 = uVar9;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar10 * 0x70;
  lVar4 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  lVar7 = local_res10;
  uVar2 = *(uint *)(param_1 + 1);
  plVar8 = (longlong *)*param_1;
  uVar9 = (ulonglong)uVar2;
  local_res18 = lVar4;
  if (0 < (int)uVar2) {
    plVar6 = plVar8 + 8;
    uVar11 = (ulonglong)uVar2;
    puVar5 = (undefined8 *)(lVar4 + 0x10);
    do {
      puVar1 = puVar5 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiDefaultTask::vftable;
        puVar5[2] = hkaiDefaultTask::vftable;
        puVar5[-1] = 0xffffffff;
        *puVar5 = 1;
        puVar5[4] = plVar6[-2];
        *puVar1 = hkaiNavVolumeGenerationTask::vftable;
        puVar5[2] = hkaiNavVolumeGenerationTask::vftable;
        puVar5[6] = *plVar6;
        puVar5[7] = plVar6[1];
        puVar5[8] = plVar6[2];
        puVar5[9] = plVar6[3];
        puVar5[10] = plVar6[4];
      }
      puVar5 = puVar5 + 0xe;
      plVar6 = plVar6 + 0xe;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
      (**(code **)(*plVar8 + 8))(plVar8,0);
      plVar8 = plVar8 + 0xe;
      uVar9 = uVar9 - 1;
      param_2 = lVar7;
    } while (uVar9 != 0);
  }
  uVar9 = uVar10 * 0x70 + 0x70;
  uVar11 = uVar10;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x70;
    uVar11 = uVar10 + 1;
    if (uVar9 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x70;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar3,8);
      uVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar3,0);
      uVar11 = uVar11 + ((uVar10 - lVar7 >> 1) + lVar7 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar9 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar9;
}



// FUNCTION 144d084ec FUN_144d084ec body=9 status=ok
// SIG undefined FUN_144d084ec(void)

void FUN_144d084ec(longlong param_1)

{
  FUN_144d07a80(param_1 + -0x20);
  return;
}



// FUNCTION 144d084f8 FUN_144d084f8 body=9 status=ok
// SIG undefined FUN_144d084f8(void)

void FUN_144d084f8(longlong param_1)

{
  FUN_144d07a10(param_1 + -0x20);
  return;
}



// FUNCTION 144d08510 FUN_144d08510 body=55 status=ok
// SIG undefined FUN_144d08510(void)

void FUN_144d08510(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fc6150(param_1);
      }
      param_1 = param_1 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d085b0 FUN_144d085b0 body=861 status=ok
// SIG undefined FUN_144d085b0(void)

void FUN_144d085b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  if (0 < param_4) {
    puVar11 = (undefined8 *)(param_1 + 0x100);
    param_2 = param_2 - param_1;
    lVar16 = (longlong)param_4;
    do {
      if (puVar11 + -0x20 != (undefined8 *)0x0) {
        puVar11[-0x1f] = 0xffffffff;
        puVar11[-0x1e] = 1;
        puVar11[-0x20] =
             hkaiNavMeshGeneration::SimpleGeometrySourceDetail::SimpleGeometryView::vftable;
        lVar4 = *(longlong *)((longlong)puVar11 + param_2 + -0xe8);
        puVar11[-0x1d] = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar11[-0x1c] = 0;
        *(undefined4 *)(puVar11 + -0x1b) = 0;
        *(undefined4 *)((longlong)puVar11 + -0xd4) = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar11 + param_2 + -0xd8);
        puVar12 = *(undefined8 **)((longlong)puVar11 + param_2 + -0xe0);
        if (0 < (int)uVar2) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
          puVar11[-0x1c] = puVar8;
          *(uint *)(puVar11 + -0x1b) = uVar2;
          uVar15 = (ulonglong)uVar2;
          *(uint *)((longlong)puVar11 + -0xd4) = uVar2;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = *puVar12;
              puVar1 = puVar12 + 1;
              puVar12 = (undefined8 *)((longlong)puVar12 + 0xc);
              *(undefined4 *)(puVar8 + 1) = *(undefined4 *)puVar1;
            }
            uVar15 = uVar15 - 1;
            puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
          } while (uVar15 != 0);
        }
        puVar11[-0x1a] = 0;
        *(undefined4 *)(puVar11 + -0x19) = 0;
        *(undefined4 *)((longlong)puVar11 + -0xc4) = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar11 + param_2 + -200);
        puVar13 = *(undefined4 **)((longlong)puVar11 + param_2 + -0xd0);
        if (0 < (int)uVar2) {
          puVar9 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
          puVar11[-0x1a] = puVar9;
          *(uint *)(puVar11 + -0x19) = uVar2;
          uVar15 = (ulonglong)uVar2;
          *(uint *)((longlong)puVar11 + -0xc4) = uVar2;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar3 = *puVar13;
              puVar13 = puVar13 + 1;
              *puVar9 = uVar3;
            }
            uVar15 = uVar15 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar15 != 0);
        }
        FUN_144c29a10(puVar11 + -0x18,param_2 + -0xc0 + (longlong)puVar11);
        puVar11[-0x15] = 0;
        *(undefined4 *)(puVar11 + -0x14) = 0;
        *(undefined4 *)((longlong)puVar11 + -0x9c) = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar11 + param_2 + -0xa0);
        uVar15 = (ulonglong)uVar2;
        plVar14 = *(longlong **)((longlong)puVar11 + param_2 + -0xa8);
        if (0 < (int)uVar2) {
          plVar10 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          puVar11[-0x15] = plVar10;
          *(uint *)(puVar11 + -0x14) = uVar2;
          *(uint *)((longlong)puVar11 + -0x9c) = uVar2;
          do {
            if (plVar10 != (longlong *)0x0) {
              lVar4 = *plVar14;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar14 = plVar14 + 1;
            }
            uVar15 = uVar15 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar15 != 0);
        }
        FUN_144c29a10(puVar11 + -0x13,param_2 + -0x98 + (longlong)puVar11);
        puVar11[-0x10] = 0;
        *(undefined4 *)(puVar11 + -0xf) = 0;
        *(undefined4 *)((longlong)puVar11 + -0x74) = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar11 + param_2 + -0x78);
        uVar15 = (ulonglong)uVar2;
        plVar14 = *(longlong **)((longlong)puVar11 + param_2 + -0x80);
        if (0 < (int)uVar2) {
          plVar10 = (longlong *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          puVar11[-0x10] = plVar10;
          *(uint *)(puVar11 + -0xf) = uVar2;
          *(uint *)((longlong)puVar11 + -0x74) = uVar2;
          do {
            if (plVar10 != (longlong *)0x0) {
              lVar4 = *plVar14;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar14 = plVar14 + 1;
            }
            uVar15 = uVar15 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar15 != 0);
        }
        FUN_144c29a10(puVar11 + -0xe,param_2 + -0x70 + (longlong)puVar11);
        puVar12 = (undefined8 *)((longlong)puVar11 + param_2 + -0x50);
        uVar7 = puVar12[1];
        puVar11[-10] = *puVar12;
        puVar11[-9] = uVar7;
        puVar12 = (undefined8 *)((longlong)puVar11 + param_2 + -0x40);
        uVar7 = puVar12[1];
        puVar11[-8] = *puVar12;
        puVar11[-7] = uVar7;
        puVar12 = (undefined8 *)((longlong)puVar11 + param_2 + -0x30);
        uVar7 = puVar12[1];
        puVar11[-6] = *puVar12;
        puVar11[-5] = uVar7;
        puVar12 = (undefined8 *)((longlong)puVar11 + param_2 + -0x20);
        uVar7 = puVar12[1];
        puVar11[-4] = *puVar12;
        puVar11[-3] = uVar7;
        puVar12 = (undefined8 *)((longlong)puVar11 + param_2 + -0x10);
        uVar7 = puVar12[1];
        puVar11[-2] = *puVar12;
        puVar11[-1] = uVar7;
        uVar7 = ((undefined8 *)((longlong)puVar11 + param_2))[1];
        *puVar11 = *(undefined8 *)((longlong)puVar11 + param_2);
        puVar11[1] = uVar7;
        puVar12 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar11);
        uVar7 = puVar12[1];
        puVar11[2] = *puVar12;
        puVar11[3] = uVar7;
        puVar13 = (undefined4 *)((longlong)puVar11 + param_2 + 0x20);
        uVar3 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        *(undefined4 *)(puVar11 + 4) = *puVar13;
        *(undefined4 *)((longlong)puVar11 + 0x24) = uVar3;
        *(undefined4 *)(puVar11 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar6;
        puVar13 = (undefined4 *)((longlong)puVar11 + param_2 + 0x30);
        uVar3 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        *(undefined4 *)(puVar11 + 6) = *puVar13;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uVar3;
        *(undefined4 *)(puVar11 + 7) = uVar5;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar6;
        *(undefined4 *)(puVar11 + 8) = *(undefined4 *)((longlong)puVar11 + param_2 + 0x40);
        *(undefined4 *)((longlong)puVar11 + 0x44) =
             *(undefined4 *)((longlong)puVar11 + param_2 + 0x44);
      }
      puVar11 = puVar11 + 0x2a;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 144d08910 FUN_144d08910 body=490 status=ok
// SIG undefined FUN_144d08910(void)

void FUN_144d08910(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar10 = (uint *)(param_1 + 0x34);
    lVar11 = (longlong)param_4;
    do {
      if (puVar10 + -0xd != (uint *)0x0) {
        puVar10[-0xb] = 0xffffffff;
        puVar10[-10] = 0;
        puVar10[-9] = 1;
        puVar10[-8] = 0;
        *(undefined ***)(puVar10 + -0xd) = hkaiNavMeshGlobalRegionPruning::Input::vftable;
        puVar10[-7] = 0;
        puVar10[-6] = 0;
        puVar10[-5] = 0;
        puVar10[-4] = 0x80000000;
        uVar1 = *(uint *)(param_2 + -0x14 + (longlong)puVar10);
        lVar2 = *(longlong *)(param_2 + -0x1c + (longlong)puVar10);
        if (0 < (int)uVar1) {
          plVar6 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 * 0x60);
          *(longlong **)(puVar10 + -7) = plVar6;
          puVar9 = (undefined4 *)(lVar2 + 0x30);
          puVar10[-5] = uVar1;
          uVar8 = (ulonglong)uVar1;
          puVar10[-4] = uVar1;
          do {
            if (plVar6 != (longlong *)0x0) {
              lVar2 = *(longlong *)(puVar9 + -0xc);
              *plVar6 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              *(undefined4 *)(plVar6 + 1) = puVar9[-10];
              lVar2 = *(longlong *)(puVar9 + -6);
              plVar6[2] = *(longlong *)(puVar9 + -8);
              plVar6[3] = lVar2;
              lVar2 = *(longlong *)(puVar9 + -2);
              plVar6[4] = *(longlong *)(puVar9 + -4);
              plVar6[5] = lVar2;
              uVar3 = puVar9[1];
              uVar4 = puVar9[2];
              uVar5 = puVar9[3];
              *(undefined4 *)(plVar6 + 6) = *puVar9;
              *(undefined4 *)((longlong)plVar6 + 0x34) = uVar3;
              *(undefined4 *)(plVar6 + 7) = uVar4;
              *(undefined4 *)((longlong)plVar6 + 0x3c) = uVar5;
              uVar3 = puVar9[5];
              uVar4 = puVar9[6];
              uVar5 = puVar9[7];
              *(undefined4 *)(plVar6 + 8) = puVar9[4];
              *(undefined4 *)((longlong)plVar6 + 0x44) = uVar3;
              *(undefined4 *)(plVar6 + 9) = uVar4;
              *(undefined4 *)((longlong)plVar6 + 0x4c) = uVar5;
              lVar2 = *(longlong *)(puVar9 + 8);
              plVar6[10] = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              puVar9 = puVar9 + 0x18;
            }
            uVar8 = uVar8 - 1;
            plVar6 = plVar6 + 0xc;
          } while (uVar8 != 0);
        }
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar10);
        uVar8 = (ulonglong)uVar1;
        plVar6 = *(longlong **)((longlong)puVar10 + param_2 + -0xc);
        if (0 < (int)uVar1) {
          plVar7 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(longlong **)(puVar10 + -3) = plVar7;
          puVar10[-1] = uVar1;
          *puVar10 = uVar1;
          do {
            if (plVar7 != (longlong *)0x0) {
              lVar2 = *plVar6;
              *plVar7 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              plVar6 = plVar6 + 1;
            }
            uVar8 = uVar8 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar8 != 0);
        }
      }
      puVar10 = puVar10 + 0xe;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144d08b00 FUN_144d08b00 body=94 status=ok
// SIG undefined FUN_144d08b00(void)

void FUN_144d08b00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x150 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x2a;
      plVar2 = plVar2 + -0x2a;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d08b60 FUN_144d08b60 body=77 status=ok
// SIG undefined FUN_144d08b60(void)

void FUN_144d08b60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d08bb0 FUN_144d08bb0 body=73 status=ok
// SIG undefined FUN_144d08bb0(void)

void FUN_144d08bb0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144d0f140(param_1,param_2 + param_1);
      param_1 = param_1 + 0x150;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d08c00 FUN_144d08c00 body=968 status=ok
// SIG undefined FUN_144d08c00(void)

void FUN_144d08c00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  
  lVar19 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar20 = (uint *)(param_1 + 0x34);
    do {
      puVar11 = (uint *)(param_2 + -0x1c + (longlong)puVar20);
      puVar1 = puVar20 + -7;
      if (puVar11 != puVar1) {
        lVar14 = *(longlong *)puVar11;
        uVar4 = *(uint *)(param_2 + -0x14 + (longlong)puVar20);
        if ((int)(puVar20[-4] & 0x7fffffff) < (int)uVar4) {
          FUN_144d105f0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        if ((int)uVar4 < (int)puVar20[-5]) {
          lVar17 = *(longlong *)puVar1;
          plVar12 = (longlong *)((longlong)(int)puVar20[-5] * 0x60 + *(longlong *)puVar1);
          while (plVar12 != (longlong *)((longlong)(int)uVar4 * 0x60 + lVar17)) {
            plVar15 = plVar12 + -2;
            plVar12 = plVar12 + -0xc;
            if (*plVar15 != 0) {
              FUN_144b3f230();
            }
            if (*plVar12 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar17 = *(longlong *)puVar1;
        uVar6 = uVar4;
        if ((int)puVar20[-5] < (int)uVar4) {
          uVar6 = puVar20[-5];
        }
        if ((lVar17 != lVar14) && (lVar18 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
          puVar13 = (undefined8 *)(lVar17 + 0x20);
          lVar17 = lVar14 - lVar17;
          do {
            lVar5 = *(longlong *)(lVar17 + -0x20 + (longlong)puVar13);
            if (puVar13[-4] != lVar5) {
              if (lVar5 != 0) {
                FUN_144b3d910();
              }
              lVar5 = puVar13[-4];
              puVar13[-4] = *(undefined8 *)(lVar17 + -0x20 + (longlong)puVar13);
              if (lVar5 != 0) {
                FUN_144b3f230();
              }
            }
            *(undefined4 *)(puVar13 + -3) = *(undefined4 *)(lVar17 + -0x18 + (longlong)puVar13);
            puVar2 = (undefined8 *)(lVar17 + -0x10 + (longlong)puVar13);
            uVar10 = puVar2[1];
            puVar13[-2] = *puVar2;
            puVar13[-1] = uVar10;
            uVar10 = ((undefined8 *)(lVar17 + (longlong)puVar13))[1];
            *puVar13 = *(undefined8 *)(lVar17 + (longlong)puVar13);
            puVar13[1] = uVar10;
            puVar3 = (undefined4 *)(lVar17 + 0x10 + (longlong)puVar13);
            uVar7 = puVar3[1];
            uVar8 = puVar3[2];
            uVar9 = puVar3[3];
            *(undefined4 *)(puVar13 + 2) = *puVar3;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uVar7;
            *(undefined4 *)(puVar13 + 3) = uVar8;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar9;
            puVar3 = (undefined4 *)(lVar17 + 0x20 + (longlong)puVar13);
            uVar7 = puVar3[1];
            uVar8 = puVar3[2];
            uVar9 = puVar3[3];
            *(undefined4 *)(puVar13 + 4) = *puVar3;
            *(undefined4 *)((longlong)puVar13 + 0x24) = uVar7;
            *(undefined4 *)(puVar13 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar9;
            lVar5 = *(longlong *)(lVar17 + 0x30 + (longlong)puVar13);
            if (puVar13[6] != lVar5) {
              if (lVar5 != 0) {
                FUN_144b3d910();
              }
              lVar5 = puVar13[6];
              puVar13[6] = *(undefined8 *)(lVar17 + 0x30 + (longlong)puVar13);
              if (lVar5 != 0) {
                FUN_144b3f230();
              }
            }
            puVar13 = puVar13 + 0xc;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        plVar12 = (longlong *)((longlong)(int)uVar6 * 0x60 + lVar14);
        if (0 < (int)(uVar4 - uVar6)) {
          plVar15 = plVar12 + 6;
          uVar21 = (ulonglong)(uVar4 - uVar6);
          plVar16 = (longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 0x60);
          do {
            if (plVar16 != (longlong *)0x0) {
              lVar14 = *plVar12;
              *plVar16 = lVar14;
              if (lVar14 != 0) {
                FUN_144b3d910();
              }
              *(int *)(plVar16 + 1) = (int)plVar15[-5];
              lVar14 = plVar15[-3];
              plVar16[2] = plVar15[-4];
              plVar16[3] = lVar14;
              lVar14 = plVar15[-1];
              plVar16[4] = plVar15[-2];
              plVar16[5] = lVar14;
              uVar7 = *(undefined4 *)((longlong)plVar15 + 4);
              lVar14 = plVar15[1];
              uVar8 = *(undefined4 *)((longlong)plVar15 + 0xc);
              *(int *)(plVar16 + 6) = (int)*plVar15;
              *(undefined4 *)((longlong)plVar16 + 0x34) = uVar7;
              *(int *)(plVar16 + 7) = (int)lVar14;
              *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar8;
              uVar7 = *(undefined4 *)((longlong)plVar15 + 0x14);
              lVar14 = plVar15[3];
              uVar8 = *(undefined4 *)((longlong)plVar15 + 0x1c);
              *(int *)(plVar16 + 8) = (int)plVar15[2];
              *(undefined4 *)((longlong)plVar16 + 0x44) = uVar7;
              *(int *)(plVar16 + 9) = (int)lVar14;
              *(undefined4 *)((longlong)plVar16 + 0x4c) = uVar8;
              lVar14 = plVar15[4];
              plVar16[10] = lVar14;
              if (lVar14 != 0) {
                FUN_144b3d910();
              }
              plVar12 = plVar12 + 0xc;
              plVar15 = plVar15 + 0xc;
            }
            uVar21 = uVar21 - 1;
            plVar16 = plVar16 + 0xc;
          } while (uVar21 != 0);
        }
        puVar20[-5] = uVar4;
      }
      puVar1 = puVar20 + -3;
      puVar11 = (uint *)(param_2 + -0xc + (longlong)puVar20);
      if (puVar11 != puVar1) {
        plVar12 = *(longlong **)puVar11;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar20);
        if ((int)(*puVar20 & 0x7fffffff) < (int)uVar4) {
          FUN_144d0fea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        if ((int)uVar4 < (int)puVar20[-1]) {
          lVar17 = *(longlong *)puVar1;
          lVar14 = lVar17 + (longlong)(int)puVar20[-1] * 8;
          while (lVar14 != lVar17 + (longlong)(int)uVar4 * 8) {
            plVar15 = (longlong *)(lVar14 + -8);
            lVar14 = lVar14 + -8;
            if (*plVar15 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar15 = *(longlong **)puVar1;
        uVar6 = uVar4;
        if ((int)puVar20[-1] < (int)uVar4) {
          uVar6 = puVar20[-1];
        }
        if ((plVar15 != plVar12) && (lVar14 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
          lVar17 = (longlong)plVar12 - (longlong)plVar15;
          do {
            lVar18 = *(longlong *)(lVar17 + (longlong)plVar15);
            if (*plVar15 != lVar18) {
              if (lVar18 != 0) {
                FUN_144b3d910();
              }
              lVar18 = *plVar15;
              *plVar15 = *(longlong *)(lVar17 + (longlong)plVar15);
              if (lVar18 != 0) {
                FUN_144b3f230();
              }
            }
            plVar15 = plVar15 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        plVar12 = plVar12 + (int)uVar6;
        if (0 < (int)(uVar4 - uVar6)) {
          uVar21 = (ulonglong)(uVar4 - uVar6);
          plVar15 = (longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 8);
          do {
            if (plVar15 != (longlong *)0x0) {
              lVar14 = *plVar12;
              *plVar15 = lVar14;
              if (lVar14 != 0) {
                FUN_144b3d910();
              }
              plVar12 = plVar12 + 1;
            }
            uVar21 = uVar21 - 1;
            plVar15 = plVar15 + 1;
          } while (uVar21 != 0);
        }
        puVar20[-1] = uVar4;
      }
      puVar20 = puVar20 + 0xe;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}



// FUNCTION 144d090c0 FUN_144d090c0 body=58 status=ok
// SIG undefined FUN_144d090c0(void)

void FUN_144d090c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fc5c10(param_1);
      }
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d09100 FUN_144d09100 body=78 status=ok
// SIG undefined FUN_144d09100(void)

void FUN_144d09100(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144d0d980(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d09150 FUN_144d09150 body=94 status=ok
// SIG undefined FUN_144d09150(void)

void FUN_144d09150(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x220 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x44;
      plVar2 = plVar2 + -0x44;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d091b0 FUN_144d091b0 body=216 status=ok
// SIG undefined FUN_144d091b0(void)

undefined8 * FUN_144d091b0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[7];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 8) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_144d0ea50(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 144d09290 FUN_144d09290 body=73 status=ok
// SIG undefined FUN_144d09290(void)

void FUN_144d09290(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144d0de20(param_1,param_2 + param_1);
      param_1 = param_1 + 0x220;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d092e0 FUN_144d092e0 body=55 status=ok
// SIG undefined FUN_144d092e0(void)

void FUN_144d092e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144caebc0(param_1);
      }
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d093e0 FUN_144d093e0 body=80 status=ok
// SIG undefined FUN_144d093e0(void)

void FUN_144d093e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d09430 FUN_144d09430 body=63 status=ok
// SIG undefined FUN_144d09430(void)

void FUN_144d09430(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d09470 FUN_144d09470 body=97 status=ok
// SIG undefined FUN_144d09470(void)

void FUN_144d09470(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d09540 FUN_144d09540 body=55 status=ok
// SIG undefined FUN_144d09540(void)

void FUN_144d09540(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144caebe0(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d09580 FUN_144d09580 body=266 status=ok
// SIG undefined FUN_144d09580(void)

void FUN_144d09580(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x24);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hkaiNavMeshGeneration::InputArea::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(undefined8 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144d09690 FUN_144d09690 body=88 status=ok
// SIG undefined FUN_144d09690(void)

void FUN_144d09690(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d096f0 FUN_144d096f0 body=185 status=ok
// SIG undefined FUN_144d096f0(void)

void FUN_144d096f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144d103f0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d097b0 FUN_144d097b0 body=91 status=ok
// SIG undefined FUN_144d097b0(void)

void FUN_144d097b0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d09810 FUN_144d09810 body=55 status=ok
// SIG undefined FUN_144d09810(void)

void FUN_144d09810(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144caec00(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d09890 FUN_144d09890 body=80 status=ok
// SIG undefined FUN_144d09890(void)

void FUN_144d09890(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d09900 FUN_144d09900 body=63 status=ok
// SIG undefined FUN_144d09900(void)

void FUN_144d09900(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d09940 FUN_144d09940 body=97 status=ok
// SIG undefined FUN_144d09940(void)

void FUN_144d09940(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d09a20 FUN_144d09a20 body=546 status=ok
// SIG undefined FUN_144d09a20(void)

void FUN_144d09a20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint *puVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x34);
    lVar13 = (longlong)param_4;
    do {
      if (puVar14 + -0xd != (uint *)0x0) {
        puVar14[-0xb] = 0xffffffff;
        puVar14[-10] = 0;
        puVar14[-9] = 1;
        puVar14[-8] = 0;
        *(undefined ***)(puVar14 + -0xd) = hkaiNavMeshGeneration::InputVolume::vftable;
        puVar14[-7] = 0;
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar14);
        puVar12 = *(undefined8 **)(param_2 + -0x1c + (longlong)puVar14);
        if (0 < (int)uVar3) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x30);
          *(undefined8 **)(puVar14 + -7) = puVar8;
          uVar10 = (ulonglong)uVar3;
          puVar14[-5] = uVar3;
          puVar14[-4] = uVar3;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              uVar7 = puVar12[1];
              *puVar8 = *puVar12;
              puVar8[1] = uVar7;
              uVar7 = puVar12[3];
              puVar8[2] = puVar12[2];
              puVar8[3] = uVar7;
              puVar1 = puVar12 + 4;
              uVar4 = *(undefined4 *)((longlong)puVar12 + 0x24);
              uVar5 = *(undefined4 *)(puVar12 + 5);
              uVar6 = *(undefined4 *)((longlong)puVar12 + 0x2c);
              puVar12 = puVar12 + 6;
              *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar1;
              *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
              *(undefined4 *)(puVar8 + 5) = uVar5;
              *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
            }
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 6;
          } while (uVar10 != 0);
        }
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar14);
        puVar11 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar14);
        if (0 < (int)uVar3) {
          puVar9 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x14);
          *(undefined4 **)(puVar14 + -3) = puVar9;
          puVar14[-1] = uVar3;
          uVar10 = (ulonglong)uVar3;
          *puVar14 = uVar3;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar4 = puVar11[1];
              uVar5 = puVar11[2];
              uVar6 = puVar11[3];
              *puVar9 = *puVar11;
              puVar9[1] = uVar4;
              puVar9[2] = uVar5;
              puVar9[3] = uVar6;
              puVar2 = puVar11 + 4;
              puVar11 = puVar11 + 5;
              puVar9[4] = *puVar2;
            }
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 5;
          } while (uVar10 != 0);
        }
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + 0xc + (longlong)puVar14);
        puVar12 = *(undefined8 **)((longlong)puVar14 + param_2 + 4);
        if (0 < (int)uVar3) {
          puVar8 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0xc);
          *(undefined8 **)(puVar14 + 1) = puVar8;
          puVar14[3] = uVar3;
          uVar10 = (ulonglong)uVar3;
          puVar14[4] = uVar3;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = *puVar12;
              puVar1 = puVar12 + 1;
              puVar12 = (undefined8 *)((longlong)puVar12 + 0xc);
              *(undefined4 *)(puVar8 + 1) = *(undefined4 *)puVar1;
            }
            uVar10 = uVar10 - 1;
            puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
          } while (uVar10 != 0);
        }
      }
      puVar14 = puVar14 + 0x12;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144d09c50 FUN_144d09c50 body=88 status=ok
// SIG undefined FUN_144d09c50(void)

void FUN_144d09c50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x48);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -9;
      plVar2 = plVar2 + -9;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d09cb0 FUN_144d09cb0 body=428 status=ok
// SIG undefined FUN_144d09cb0(void)

void FUN_144d09cb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144d10490(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0x30);
        puVar5[-1] = uVar2;
      }
      puVar4 = (uint *)((longlong)puVar5 + param_2 + 4);
      puVar1 = puVar5 + 1;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_144d10540(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0x14);
        puVar5[3] = uVar2;
      }
      puVar1 = puVar5 + 5;
      puVar4 = (uint *)(param_2 + 0x14 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
        if ((int)(puVar5[8] & 0x7fffffff) < (int)uVar2) {
          FUN_147e54f88(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0xc);
        puVar5[7] = uVar2;
      }
      puVar5 = puVar5 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d09e60 FUN_144d09e60 body=88 status=ok
// SIG undefined FUN_144d09e60(void)

void FUN_144d09e60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d09ed0 FUN_144d09ed0 body=154 status=ok
// SIG undefined FUN_144d09ed0(void)

void FUN_144d09ed0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -8) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -6) = 0xffffffff;
        *(undefined8 *)(puVar2 + -4) = 1;
        *(undefined ***)(puVar2 + -8) = hkaiNavMeshGlobalRegionPruning::Output::vftable;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2[8] = 0;
        puVar2[9] = 0x80000000;
      }
      puVar2 = puVar2 + 0x12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d09f70 FUN_144d09f70 body=299 status=ok
// SIG undefined FUN_144d09f70(void)

void FUN_144d09f70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0x44);
    lVar5 = (longlong)param_4;
    do {
      if (puVar7 + -0x11 != (uint *)0x0) {
        puVar7[-0xf] = 0xffffffff;
        puVar7[-0xe] = 0;
        *(undefined ***)(puVar7 + -0x11) = hkaiNavMeshGlobalRegionPruning::Output::vftable;
        puVar7[-0xd] = 1;
        puVar7[-0xc] = 0;
        FUN_144d0eb00(puVar7 + -0xb,param_2 + -0x2c + (longlong)puVar7);
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        uVar6 = (ulonglong)uVar1;
        plVar4 = *(longlong **)((longlong)puVar7 + param_2 + -0xc);
        if (0 < (int)uVar1) {
          plVar3 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(longlong **)(puVar7 + -3) = plVar3;
          puVar7[-1] = uVar1;
          *puVar7 = uVar1;
          do {
            if (plVar3 != (longlong *)0x0) {
              lVar2 = *plVar4;
              *plVar3 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              plVar4 = plVar4 + 1;
            }
            uVar6 = uVar6 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar6 != 0);
        }
      }
      puVar7 = puVar7 + 0x12;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144d0a0a0 FUN_144d0a0a0 body=88 status=ok
// SIG undefined FUN_144d0a0a0(void)

void FUN_144d0a0a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x48);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -9;
      plVar2 = plVar2 + -9;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0a100 FUN_144d0a100 body=824 status=ok
// SIG undefined FUN_144d0a100(void)

void FUN_144d0a100(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  
  lVar5 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar14 = (longlong *)(param_1 + 0x28);
    do {
      plVar3 = (longlong *)(param_2 + -0x10 + (longlong)plVar14);
      plVar4 = plVar14 + -2;
      if (plVar4 != plVar3) {
        lVar9 = *plVar3;
        iVar1 = *(int *)(param_2 + -8 + (longlong)plVar14);
        if ((int)(*(uint *)((longlong)plVar14 + -4) & 0x7fffffff) < iVar1) {
          FUN_144d10cb0(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        if (iVar1 < (int)plVar14[-1]) {
          lVar12 = *plVar4;
          for (lVar6 = (longlong)(int)plVar14[-1] * 0x40 + *plVar4;
              lVar6 != (longlong)iVar1 * 0x40 + lVar12; lVar6 = lVar6 + -0x40) {
            FUN_144d0e5c0(lVar6 + -0x38);
          }
        }
        lVar12 = *plVar4;
        iVar2 = iVar1;
        if ((int)plVar14[-1] < iVar1) {
          iVar2 = (int)plVar14[-1];
        }
        if ((lVar12 != lVar9) && (lVar6 = (longlong)iVar2, 0 < iVar2)) {
          lVar7 = lVar12 + 8;
          do {
            *(undefined4 *)(lVar7 + -8) = *(undefined4 *)((lVar9 - lVar12) + -8 + lVar7);
            FUN_144d0e910(lVar7,(lVar9 - lVar12) + lVar7);
            lVar7 = lVar7 + 0x40;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        puVar8 = (undefined4 *)((longlong)iVar2 * 0x40 + lVar9);
        if (0 < iVar1 - iVar2) {
          uVar11 = (ulonglong)(uint)(iVar1 - iVar2);
          puVar13 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x40);
          do {
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = *puVar8;
              FUN_144d0e6a0(puVar13 + 2,puVar8 + 2);
              puVar8 = puVar8 + 0x10;
            }
            uVar11 = uVar11 - 1;
            puVar13 = puVar13 + 0x10;
          } while (uVar11 != 0);
        }
        *(int *)(plVar14 + -1) = iVar1;
        if ((longlong *)(param_2 + (longlong)plVar14) != plVar14) {
          lVar9 = *plVar14;
          if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar9,0);
            FUN_144b3ec00(plVar14);
          }
          FUN_140069ea2(plVar14,(longlong *)(param_2 + (longlong)plVar14));
        }
      }
      plVar3 = plVar14 + 2;
      plVar4 = (longlong *)(param_2 + 0x10 + (longlong)plVar14);
      if (plVar4 != plVar3) {
        plVar4 = (longlong *)*plVar4;
        iVar1 = *(int *)(param_2 + 0x18 + (longlong)plVar14);
        if ((int)(*(uint *)((longlong)plVar14 + 0x1c) & 0x7fffffff) < iVar1) {
          FUN_144d0fea0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        if (iVar1 < (int)plVar14[3]) {
          lVar12 = *plVar3;
          lVar9 = lVar12 + (longlong)(int)plVar14[3] * 8;
          while (lVar9 != lVar12 + (longlong)iVar1 * 8) {
            plVar10 = (longlong *)(lVar9 + -8);
            lVar9 = lVar9 + -8;
            if (*plVar10 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar10 = (longlong *)*plVar3;
        iVar2 = iVar1;
        if ((int)plVar14[3] < iVar1) {
          iVar2 = (int)plVar14[3];
        }
        if ((plVar10 != plVar4) && (lVar9 = (longlong)iVar2, 0 < iVar2)) {
          lVar12 = (longlong)plVar4 - (longlong)plVar10;
          do {
            lVar6 = *(longlong *)(lVar12 + (longlong)plVar10);
            if (*plVar10 != lVar6) {
              if (lVar6 != 0) {
                FUN_144b3d910();
              }
              lVar6 = *plVar10;
              *plVar10 = *(longlong *)(lVar12 + (longlong)plVar10);
              if (lVar6 != 0) {
                FUN_144b3f230();
              }
            }
            plVar10 = plVar10 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        plVar4 = plVar4 + iVar2;
        if (0 < iVar1 - iVar2) {
          uVar11 = (ulonglong)(uint)(iVar1 - iVar2);
          plVar3 = (longlong *)(*plVar3 + (longlong)iVar2 * 8);
          do {
            if (plVar3 != (longlong *)0x0) {
              lVar9 = *plVar4;
              *plVar3 = lVar9;
              if (lVar9 != 0) {
                FUN_144b3d910();
              }
              plVar4 = plVar4 + 1;
            }
            uVar11 = uVar11 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar11 != 0);
        }
        *(int *)(plVar14 + 3) = iVar1;
      }
      plVar14 = plVar14 + 9;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144d0a470 FUN_144d0a470 body=69 status=ok
// SIG undefined FUN_144d0a470(void)

void FUN_144d0a470(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144d0a4f0 FUN_144d0a4f0 body=69 status=ok
// SIG undefined FUN_144d0a4f0(void)

void FUN_144d0a4f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144d0a540 FUN_144d0a540 body=55 status=ok
// SIG undefined FUN_144d0a540(void)

void FUN_144d0a540(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b469b0(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0a5d0 FUN_144d0a5d0 body=140 status=ok
// SIG undefined FUN_144d0a5d0(void)

void FUN_144d0a5d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = &PTR_LAB_14aba35e0;
        FUN_147e46bc6(puVar1 + 2);
        puVar1[0x18] = 0;
        puVar1[0x19] = 0;
      }
      puVar1 = puVar1 + 0x1c;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d0a660 FUN_144d0a660 body=211 status=ok
// SIG undefined FUN_144d0a660(void)

void FUN_144d0a660(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = &PTR_LAB_14aba35e0;
        FUN_144c99150(puVar2 + 2,param_2 + 0x10 + (longlong)puVar2);
        lVar1 = *(longlong *)(param_2 + 0xc0 + (longlong)puVar2);
        puVar2[0x18] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)(param_2 + 200 + (longlong)puVar2);
        puVar2[0x19] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      puVar2 = puVar2 + 0x1c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d0a740 FUN_144d0a740 body=94 status=ok
// SIG undefined FUN_144d0a740(void)

void FUN_144d0a740(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xe0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1c;
      plVar2 = plVar2 + -0x1c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0a7a0 FUN_144d0a7a0 body=515 status=ok
// SIG undefined FUN_144d0a7a0(void)

void FUN_144d0a7a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x84);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      puVar6[-0x19] = *(uint *)((longlong)puVar6 + param_2 + -100);
      puVar1 = puVar6 + -3;
      puVar2 = (undefined8 *)(param_2 + -0x54 + (longlong)puVar6);
      uVar4 = puVar2[1];
      puVar8 = (uint *)(param_2 + -0xc + (longlong)puVar6);
      *(undefined8 *)(puVar6 + -0x15) = *puVar2;
      *(undefined8 *)(puVar6 + -0x13) = uVar4;
      puVar6[-0x11] = *(uint *)(param_2 + -0x44 + (longlong)puVar6);
      puVar6[-0x10] = *(uint *)(param_2 + -0x40 + (longlong)puVar6);
      puVar6[-0xf] = *(uint *)(param_2 + -0x3c + (longlong)puVar6);
      puVar6[-0xe] = *(uint *)(param_2 + -0x38 + (longlong)puVar6);
      puVar6[-0xd] = *(uint *)(param_2 + -0x34 + (longlong)puVar6);
      *(undefined1 *)(puVar6 + -0xc) = *(undefined1 *)(param_2 + -0x30 + (longlong)puVar6);
      *(undefined1 *)((longlong)puVar6 + -0x2f) =
           *(undefined1 *)(param_2 + -0x2f + (longlong)puVar6);
      *(undefined1 *)((longlong)puVar6 + -0x2e) =
           *(undefined1 *)(param_2 + -0x2e + (longlong)puVar6);
      *(undefined8 *)(puVar6 + -0xb) = *(undefined8 *)(param_2 + -0x2c + (longlong)puVar6);
      *(undefined1 *)(puVar6 + -9) = *(undefined1 *)(param_2 + -0x24 + (longlong)puVar6);
      puVar6[-8] = *(uint *)(param_2 + -0x20 + (longlong)puVar6);
      puVar6[-7] = *(uint *)(param_2 + -0x1c + (longlong)puVar6);
      puVar6[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar6);
      puVar6[-4] = *(uint *)(param_2 + -0x10 + (longlong)puVar6);
      if (puVar8 != puVar1) {
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        uVar4 = *(undefined8 *)puVar8;
        if ((int)(*puVar6 & 0x7fffffff) < (int)uVar3) {
          FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 4);
        puVar6[-1] = uVar3;
      }
      puVar8 = (uint *)(param_2 + 4 + (longlong)puVar6);
      puVar1 = puVar6 + 1;
      if (puVar8 != puVar1) {
        uVar4 = *(undefined8 *)puVar8;
        uVar3 = *(uint *)(param_2 + 0xc + (longlong)puVar6);
        if ((int)(puVar6[4] & 0x7fffffff) < (int)uVar3) {
          FUN_147e4a550(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 5);
        puVar6[3] = uVar3;
      }
      *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(param_2 + 0x14 + (longlong)puVar6);
      FUN_147e4a4bc(puVar6 + 7,param_2 + 0x1c + (longlong)puVar6);
      puVar6[0xf] = *(uint *)(param_2 + 0x3c + (longlong)puVar6);
      puVar6[0x10] = *(uint *)((longlong)puVar6 + param_2 + 0x40);
      lVar5 = *(longlong *)((longlong)puVar6 + param_2 + 0x4c);
      if (*(longlong *)(puVar6 + 0x13) != lVar5) {
        if (lVar5 != 0) {
          FUN_144b3d910();
        }
        lVar5 = *(longlong *)(puVar6 + 0x13);
        *(undefined8 *)(puVar6 + 0x13) = *(undefined8 *)((longlong)puVar6 + param_2 + 0x4c);
        if (lVar5 != 0) {
          FUN_144b3f230();
        }
      }
      lVar5 = *(longlong *)((longlong)puVar6 + param_2 + 0x54);
      if (*(longlong *)(puVar6 + 0x15) != lVar5) {
        if (lVar5 != 0) {
          FUN_144b3d910();
        }
        lVar5 = *(longlong *)(puVar6 + 0x15);
        *(undefined8 *)(puVar6 + 0x15) = *(undefined8 *)((longlong)puVar6 + param_2 + 0x54);
        if (lVar5 != 0) {
          FUN_144b3f230();
        }
      }
      puVar6 = puVar6 + 0x38;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144d0a9b0 FUN_144d0a9b0 body=32 status=ok
// SIG undefined FUN_144d0a9b0(void)

undefined8 FUN_144d0a9b0(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144d0a9d0 FUN_144d0a9d0 body=74 status=ok
// SIG undefined FUN_144d0a9d0(void)

void FUN_144d0a9d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0aa20 FUN_144d0aa20 body=18 status=ok
// SIG undefined FUN_144d0aa20(void)

undefined8 * FUN_144d0aa20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fee80;
  return param_2;
}



// FUNCTION 144d0aa80 FUN_144d0aa80 body=103 status=ok
// SIG undefined FUN_144d0aa80(void)

void FUN_144d0aa80(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 + 8;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = hkaiNavMeshGeneration::BooleanMeshEdgeOverlay::vftable;
        FUN_144c90410(param_1 + 1,param_2);
      }
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d0aaf0 FUN_144d0aaf0 body=77 status=ok
// SIG undefined FUN_144d0aaf0(void)

void FUN_144d0aaf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d0ab40 FUN_144d0ab40 body=18 status=ok
// SIG undefined FUN_144d0ab40(void)

undefined8 * FUN_144d0ab40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6ff160;
  return param_2;
}



// FUNCTION 144d0ab90 FUN_144d0ab90 body=80 status=ok
// SIG undefined FUN_144d0ab90(void)

void FUN_144d0ab90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d0abe0 FUN_144d0abe0 body=63 status=ok
// SIG undefined FUN_144d0abe0(void)

void FUN_144d0abe0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}


